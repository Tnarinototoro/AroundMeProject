#include "PropHuntPlayerController.h"

#include "PropHuntLobbyGameMode.h"
#include "PropHuntGameMode.h"
#include "PropHuntPlayerState.h"
#include "PropHuntPropActor.h"
#include "PropHuntCharacter.h"
#include "DIY_CameraManager.h"
#include "DIY_CameraDefines.h"
#include "InputCoreTypes.h"
#include "Components/InputComponent.h"
#include "Engine/World.h"
#include "EngineUtils.h"
#include "GameFramework/Pawn.h"

APropHuntPlayerController::APropHuntPlayerController()
{
}

void APropHuntPlayerController::SetupInputComponent()
{
    Super::SetupInputComponent();

    if (InputComponent)
    {
        InputComponent->BindKey(EKeys::One, IE_Pressed, this, &APropHuntPlayerController::HandleChooseHunterKey);
        InputComponent->BindKey(EKeys::Two, IE_Pressed, this, &APropHuntPlayerController::HandleChooseGhostKey);
        InputComponent->BindKey(EKeys::R, IE_Pressed, this, &APropHuntPlayerController::HandleToggleReadyKey);
        InputComponent->BindKey(EKeys::E, IE_Pressed, this, &APropHuntPlayerController::HandleInteractPressed);
    }
}

void APropHuntPlayerController::HandleChooseHunterKey()
{
    ServerChooseTeam(EPropHuntRole::Hunter);
}

void APropHuntPlayerController::HandleChooseGhostKey()
{
    ServerChooseTeam(EPropHuntRole::Ghost);
}

void APropHuntPlayerController::HandleToggleReadyKey()
{
    APropHuntPlayerState* PS = GetPlayerState<APropHuntPlayerState>();
    if (!PS || PS->TeamRole == EPropHuntRole::Spectator)
    {
        return;
    }

    ServerSetReady(!PS->bIsReady);
}

void APropHuntPlayerController::HandleInteractPressed()
{
    APropHuntPlayerState* PS = GetPlayerState<APropHuntPlayerState>();
    if (!PS)
    {
        return;
    }

    if (PS->TeamRole == EPropHuntRole::Ghost)
    {
        if (PS->bGhostHidden)
        {
            ServerRequestUnpossess();
        }
        else
        {
            APropHuntPropActor* Prop = FindNearestProp();
            if (Prop && !Prop->bIsPossessed)
            {
                ServerRequestPossess(Prop);
            }
        }
    }
    else if (PS->TeamRole == EPropHuntRole::Hunter)
    {
        APropHuntCharacter* Hunter = Cast<APropHuntCharacter>(GetPawn());
        if (!Hunter)
        {
            return;
        }

        APropHuntPropActor* HeldProp = FindHeldProp(Hunter);
        if (HeldProp)
        {
            ServerRequestDrop(true);
        }
        else
        {
            APropHuntPropActor* Prop = FindNearestProp();
            if (Prop)
            {
                ServerRequestPickup(Prop);
            }
        }
    }
}

APropHuntPropActor* APropHuntPlayerController::FindNearestProp() const
{
    APawn* MyPawn = GetPawn();
    if (!MyPawn)
    {
        return nullptr;
    }

    APropHuntPropActor* Nearest = nullptr;
    float NearestDistSq = FMath::Square(250.0f);

    for (TActorIterator<APropHuntPropActor> It(GetWorld()); It; ++It)
    {
        APropHuntPropActor* Prop = *It;
        if (Prop->HeldBy)
        {
            continue; // 已被拿
        }

        const float DistSq = MyPawn->GetSquaredDistanceTo(Prop);
        if (DistSq < NearestDistSq)
        {
            Nearest = Prop;
            NearestDistSq = DistSq;
        }
    }

    return Nearest;
}

void APropHuntPlayerController::ServerChooseTeam_Implementation(EPropHuntRole NewRole)
{
    if (APropHuntLobbyGameMode* GM = GetWorld()->GetAuthGameMode<APropHuntLobbyGameMode>())
    {
        GM->HandleChooseTeam(this, NewRole);
    }
}

void APropHuntPlayerController::ServerSetReady_Implementation(bool bReady)
{
    if (APropHuntLobbyGameMode* GM = GetWorld()->GetAuthGameMode<APropHuntLobbyGameMode>())
    {
        GM->HandleSetReady(this, bReady);
    }
}

void APropHuntPlayerController::ServerRequestPossess_Implementation(APropHuntPropActor* Prop)
{
    if (APropHuntGameMode* GM = GetWorld()->GetAuthGameMode<APropHuntGameMode>())
    {
        GM->HandlePossess(this, Prop);
    }
}

void APropHuntPlayerController::ServerRequestUnpossess_Implementation()
{
    if (APropHuntGameMode* GM = GetWorld()->GetAuthGameMode<APropHuntGameMode>())
    {
        GM->HandleUnpossess(this);
    }
}

void APropHuntPlayerController::DeliverBeginPossession(APropHuntPropActor* Prop)
{
    if (IsLocalController())
    {
        BeginPossessionLocal(Prop);
    }
    else
    {
        ClientBeginPossession(Prop);
    }
}

void APropHuntPlayerController::ClientBeginPossession_Implementation(APropHuntPropActor* Prop)
{
    BeginPossessionLocal(Prop);
}

void APropHuntPlayerController::BeginPossessionLocal(APropHuntPropActor* Prop)
{
    if (!Prop)
    {
        return;
    }

    // 把 Ghost Pawn attach 到 Prop：位置/旋转随 Prop 甩动，视角仍从 Pawn 出发（可用鼠标环绕）。
    if (APawn* MyPawn = GetPawn())
    {
        MyPawn->AttachToActor(Prop, FAttachmentTransformRules::KeepWorldTransform);
    }
}

void APropHuntPlayerController::DeliverEndPossession(FVector PopLocation)
{
    if (IsLocalController())
    {
        EndPossessionLocal();
    }
    else
    {
        ClientEndPossession(PopLocation);
    }
}

void APropHuntPlayerController::ClientEndPossession_Implementation(FVector PopLocation)
{
    EndPossessionLocal();
}

void APropHuntPlayerController::EndPossessionLocal()
{
    // 从 Prop 上 detach，恢复独立位置。
    if (APawn* MyPawn = GetPawn())
    {
        MyPawn->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
    }
}

void APropHuntPlayerController::ServerRequestPickup_Implementation(APropHuntPropActor* Prop)
{
    if (APropHuntGameMode* GM = GetWorld()->GetAuthGameMode<APropHuntGameMode>())
    {
        GM->HandlePickup(this, Prop);
    }
}

void APropHuntPlayerController::ServerRequestDrop_Implementation(bool bThrow)
{
    if (APropHuntGameMode* GM = GetWorld()->GetAuthGameMode<APropHuntGameMode>())
    {
        GM->HandleDrop(this, bThrow);
    }
}

APropHuntPropActor* APropHuntPlayerController::FindHeldProp(APropHuntCharacter* Hunter) const
{
    if (!Hunter)
    {
        return nullptr;
    }

    for (TActorIterator<APropHuntPropActor> It(GetWorld()); It; ++It)
    {
        if ((*It)->HeldBy == Hunter)
        {
            return *It;
        }
    }
    return nullptr;
}
