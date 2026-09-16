#include "PropHuntPlayerController.h"

#include "PropHuntLobbyGameMode.h"
#include "PropHuntGameMode.h"
#include "PropHuntPlayerState.h"
#include "PropHuntPropActor.h"
#include "PropHuntCharacter.h"
#include "PropHuntQTEUserWidget.h"
#include "PropHuntMenuSubsystem.h"
#include "DIY_CameraManager.h"
#include "DIY_CameraDefines.h"
#include "InputCoreTypes.h"
#include "Components/InputComponent.h"
#include "Engine/World.h"
#include "Engine/Engine.h"
#include "EngineUtils.h"
#include "GameFramework/Pawn.h"

APropHuntPlayerController::APropHuntPlayerController()
{
}

void APropHuntPlayerController::BeginPlay()
{
    Super::BeginPlay();

    if (!IsLocalController())
    {
        return;
    }

    if (UPropHuntMenuSubsystem* Menu = GetGameInstance()->GetSubsystem<UPropHuntMenuSubsystem>())
    {
        const FString MapName = GetWorld()->GetMapName();
        if (MapName.Contains(TEXT("PH_Lobby")))
        {
            Menu->ShowRoom();
        }
        else
        {
            Menu->ShowMainMenu();
        }
    }
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
        InputComponent->BindKey(EKeys::SpaceBar, IE_Pressed, this, &APropHuntPlayerController::HandleQTEKeySpace);
        InputComponent->BindKey(EKeys::F, IE_Pressed, this, &APropHuntPlayerController::HandleQTEKeyF);
        InputComponent->BindKey(EKeys::LeftShift, IE_Pressed, this, &APropHuntPlayerController::HandleQTEKeyShift);
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

    // 视角完全切到 Prop（Prop 有自己的环绕相机，由 Look 输入驱动）。
    PossessedProp = Prop;
    SetViewTarget(Prop);
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
    // 视角还原到自己的 Pawn。
    PossessedProp = nullptr;
    if (APawn* MyPawn = GetPawn())
    {
        SetViewTarget(MyPawn);
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

void APropHuntPlayerController::HandleQTEKeySpace()
{
    ReportQTEKey(EPropHuntQTEKey::Space);
}

void APropHuntPlayerController::HandleQTEKeyF()
{
    ReportQTEKey(EPropHuntQTEKey::F);
}

void APropHuntPlayerController::HandleQTEKeyShift()
{
    ReportQTEKey(EPropHuntQTEKey::Shift);
}

void APropHuntPlayerController::ReportQTEKey(EPropHuntQTEKey Key)
{
    if (!PossessedProp)
    {
        return;
    }
    ServerReportQTEKey(Key);
}

void APropHuntPlayerController::ServerReportQTEKey_Implementation(EPropHuntQTEKey Key)
{
    if (PossessedProp && PossessedProp->bIsPossessed)
    {
        PossessedProp->ReportQTEKey(Key);
    }
}

void APropHuntPlayerController::ClientShowQTE_Implementation()
{
    ShowQTEWidget();
}

void APropHuntPlayerController::ClientHideQTE_Implementation()
{
    HideQTEWidget();
}

void APropHuntPlayerController::ClientUpdateQTE_Implementation(float Progress, EPropHuntQTEKey ExpectedKey)
{
    UpdateQTEWidget(Progress, ExpectedKey);
}

void APropHuntPlayerController::MulticastExpelFeedback_Implementation(APropHuntPropActor* Prop, APawn* GhostPawn)
{
    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(500, 3.0f, FColor::Red, TEXT("GHOST EXPELLED!"));
    }
}

void APropHuntPlayerController::ShowQTEWidget()
{
    if (!QTEWidget)
    {
        QTEWidget = CreateWidget<UPropHuntQTEUserWidget>(this, UPropHuntQTEUserWidget::StaticClass());
    }
    if (QTEWidget && !QTEWidget->IsInViewport())
    {
        QTEWidget->AddToViewport(10);
    }
}

void APropHuntPlayerController::HideQTEWidget()
{
    if (QTEWidget && QTEWidget->IsInViewport())
    {
        QTEWidget->RemoveFromParent();
    }
}

void APropHuntPlayerController::UpdateQTEWidget(float Progress, EPropHuntQTEKey ExpectedKey)
{
    if (!QTEWidget || !QTEWidget->IsInViewport())
    {
        return;
    }

    QTEWidget->SetProgress(Progress);

    FString KeyStr;
    switch (ExpectedKey)
    {
    case EPropHuntQTEKey::Space: KeyStr = TEXT("Space"); break;
    case EPropHuntQTEKey::F: KeyStr = TEXT("F"); break;
    case EPropHuntQTEKey::Shift: KeyStr = TEXT("Shift"); break;
    }
    QTEWidget->SetExpectedKey(KeyStr);
}
