#include "PropHuntGameMode.h"

#include "PropHuntCharacter.h"
#include "PropHuntGhostPawn.h"
#include "PropHuntGameState.h"
#include "PropHuntPlayerController.h"
#include "PropHuntPlayerState.h"
#include "PropHuntPropActor.h"
#include "PropHuntHUD.h"
#include "PropHuntGameInstanceSubsystem.h"
#include "Engine/GameInstance.h"
#include "EngineUtils.h"

APropHuntGameMode::APropHuntGameMode()
{
    HunterPawnClass = APropHuntCharacter::StaticClass();
    GhostPawnClass = APropHuntGhostPawn::StaticClass();
    DefaultPawnClass = APropHuntCharacter::StaticClass();

    PlayerControllerClass = APropHuntPlayerController::StaticClass();
    GameStateClass = APropHuntGameState::StaticClass();
    PlayerStateClass = APropHuntPlayerState::StaticClass();
    HUDClass = APropHuntHUD::StaticClass();
}

void APropHuntGameMode::BeginPlay()
{
    Super::BeginPlay();

    // travel 过来后直接进入游戏阶段。
    if (APropHuntGameState* GS = Cast<APropHuntGameState>(GameState))
    {
        GS->MatchPhase = EPropHuntMatchPhase::InProgress;
    }
}

void APropHuntGameMode::PostLogin(APlayerController* NewPlayer)
{
    Super::PostLogin(NewPlayer);

    APropHuntPlayerState* PS = NewPlayer ? NewPlayer->GetPlayerState<APropHuntPlayerState>() : nullptr;
    if (!PS)
    {
        return;
    }

    // ServerTravel 会重建 PlayerState，从 GameInstance Subsystem 恢复选边结果。
    if (UPropHuntGameInstanceSubsystem* Subsys = GetGameInstance()->GetSubsystem<UPropHuntGameInstanceSubsystem>())
    {
        const EPropHuntRole SelectedRole = Subsys->GetTeamSelection(PS->GetPlayerName());
        if (SelectedRole != EPropHuntRole::Spectator)
        {
            PS->TeamRole = SelectedRole;
        }
    }
}

UClass* APropHuntGameMode::GetDefaultPawnClassForController_Implementation(AController* InController)
{
    APropHuntPlayerState* PS = InController ? InController->GetPlayerState<APropHuntPlayerState>() : nullptr;

    // 注意：spawn 时机早于 PostLogin，TeamRole 还没恢复，这里直接读 GameInstance Subsystem 的选边结果。
    EPropHuntRole CurRole = EPropHuntRole::Spectator;
    if (PS)
    {
        if (UPropHuntGameInstanceSubsystem* Subsys = GetGameInstance()->GetSubsystem<UPropHuntGameInstanceSubsystem>())
        {
            CurRole = Subsys->GetTeamSelection(PS->GetPlayerName());
        }
    }

    return CurRole == EPropHuntRole::Ghost ? GhostPawnClass : HunterPawnClass;
}

void APropHuntGameMode::HandlePossess(APropHuntPlayerController* PC, APropHuntPropActor* Prop)
{
    if (!PC || !Prop)
    {
        return;
    }

    if (Prop->bIsPossessed)
    {
        return; // 已被附身
    }

    APropHuntPlayerState* PS = PC->GetPlayerState<APropHuntPlayerState>();
    if (!PS || PS->TeamRole != EPropHuntRole::Ghost)
    {
        return; // 只有 Ghost 能附身
    }

    Prop->bIsPossessed = true;
    Prop->PossessedBy = PS;
    Prop->ApplyPossessedVisual();

    PS->bGhostHidden = true;
    PS->ApplyGhostHiddenToPawn();

    PC->DeliverBeginPossession(Prop);
}

void APropHuntGameMode::HandleUnpossess(APropHuntPlayerController* PC)
{
    if (!PC)
    {
        return;
    }

    APropHuntPlayerState* PS = PC->GetPlayerState<APropHuntPlayerState>();
    if (!PS || !PS->bGhostHidden)
    {
        return;
    }

    APropHuntPropActor* PossessedProp = nullptr;
    for (TActorIterator<APropHuntPropActor> It(GetWorld()); It; ++It)
    {
        if ((*It)->PossessedBy == PS)
        {
            PossessedProp = *It;
            break;
        }
    }

    FVector SpawnLocation = PC->GetPawn() ? PC->GetPawn()->GetActorLocation() : FVector::ZeroVector;
    if (PossessedProp)
    {
        SpawnLocation = PossessedProp->GetActorLocation(); // 用附身物体的位置
        PossessedProp->bIsPossessed = false;
        PossessedProp->PossessedBy = nullptr;
        PossessedProp->ApplyPossessedVisual();
    }

    PS->bGhostHidden = false;
    PS->ApplyGhostHiddenToPawn();

    // 把 Ghost 传送到附身物体位置，避免弹飞。
    if (APawn* GhostPawn = PC->GetPawn())
    {
        GhostPawn->SetActorLocation(SpawnLocation);
    }

    PC->DeliverEndPossession(SpawnLocation);
}

void APropHuntGameMode::HandlePickup(APropHuntPlayerController* PC, APropHuntPropActor* Prop)
{
    if (!PC || !Prop)
    {
        return;
    }

    APropHuntPlayerState* PS = PC->GetPlayerState<APropHuntPlayerState>();
    if (!PS || PS->TeamRole != EPropHuntRole::Hunter)
    {
        return; // 只有 Hunter 能拿
    }

    if (Prop->HeldBy)
    {
        return; // 已被拿
    }

    APropHuntCharacter* Hunter = Cast<APropHuntCharacter>(PC->GetPawn());
    if (!Hunter)
    {
        return;
    }

    if (Hunter->GetDistanceTo(Prop) > 300.0f)
    {
        return; // 距离校验
    }

    Prop->HeldBy = Hunter;
    Prop->AttachToHolder(Hunter);
}

void APropHuntGameMode::HandleDrop(APropHuntPlayerController* PC, bool bThrow)
{
    if (!PC)
    {
        return;
    }

    APropHuntCharacter* Hunter = Cast<APropHuntCharacter>(PC->GetPawn());
    if (!Hunter)
    {
        return;
    }

    APropHuntPropActor* HeldProp = nullptr;
    for (TActorIterator<APropHuntPropActor> It(GetWorld()); It; ++It)
    {
        if ((*It)->HeldBy == Hunter)
        {
            HeldProp = *It;
            break;
        }
    }

    if (!HeldProp)
    {
        return;
    }

    HeldProp->HeldBy = nullptr;
    HeldProp->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
    HeldProp->Mesh->SetSimulatePhysics(true);

    if (bThrow)
    {
        const FVector ImpulseDir = (Hunter->GetActorForwardVector() + FVector(0.0f, 0.0f, 0.3f)).GetSafeNormal();
        HeldProp->Mesh->AddImpulse(ImpulseDir * HeldProp->Mesh->GetMass() * 800.0f);
    }
}

void APropHuntGameMode::HandleExpel(APropHuntPropActor* Prop)
{
    if (!Prop)
    {
        return;
    }

    APlayerState* Possessor = Prop->PossessedBy;

    // 解附身 + 清 QTE。
    Prop->bIsPossessed = false;
    Prop->PossessedBy = nullptr;
    Prop->ApplyPossessedVisual();
    Prop->EndQTE();

    if (Possessor)
    {
        if (APropHuntPlayerState* PS = Cast<APropHuntPlayerState>(Possessor))
        {
            PS->bGhostHidden = false;
            PS->ApplyGhostHiddenToPawn();
        }

        if (APropHuntPlayerController* PC = Cast<APropHuntPlayerController>(Possessor->GetOwningController()))
        {
            // Ghost 显形到 Prop 位置（向上弹一点）。
            if (APawn* GhostPawn = PC->GetPawn())
            {
                GhostPawn->SetActorLocation(Prop->GetActorLocation() + FVector(0.0f, 0.0f, 100.0f));
            }
            PC->DeliverEndPossession(Prop->GetActorLocation());
            PC->MulticastExpelFeedback(Prop, PC->GetPawn());
        }
    }
}
