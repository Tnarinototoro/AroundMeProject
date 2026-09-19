#include "PropHuntPlayerController.h"

#include "PropHuntLobbyGameMode.h"
#include "PropHuntGameMode.h"
#include "PropHuntPlayerState.h"
#include "PropHuntPropActor.h"
#include "PropHuntCharacter.h"
#include "PropHuntQTEUserWidget.h"
#include "PropHuntMenuSubsystem.h"
#include "CommonInputSubsystem.h"
#include "PropHuntCompassWidget.h"
#include "PropHuntGhostPawn.h"
#include "PropHuntPulseSynthComponent.h"
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

        if (MapName.Contains(TEXT("PH_GameMap")))
        {
            // 游戏地图：不显示菜单，直接进游戏。
            Menu->HideMenu();
        }
        else if (Menu->IsInRoom())
        {
            // 已在房间（创建/加入房间后 travel 回来）→ 房间 Widget（选队/准备）。
            Menu->ShowRoom();
        }
        else
        {
            // 未进房间 → 主菜单。
            Menu->ShowMainMenu();
        }
    }
}

void APropHuntPlayerController::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // 只在本地的 Hunter 且在游戏地图时显示罗盘。
    APropHuntPlayerState* PS = GetPlayerState<APropHuntPlayerState>();
    if (!PS || PS->TeamRole != EPropHuntRole::Hunter || !GetWorld()->GetMapName().Contains(TEXT("PH_GameMap")))
    {
        return;
    }

    if (!CompassWidget)
    {
        CompassWidget = CreateWidget<UPropHuntCompassWidget>(this);
        if (CompassWidget)
        {
            CompassWidget->AddToViewport();
            CompassWidget->SetPositionInViewport(FVector2D(1100.0f, 20.0f));
        }
    }

    if (!PulseSynth)
    {
        PulseSynth = NewObject<UPropHuntPulseSynthComponent>(this);
        if (PulseSynth)
        {
            PulseSynth->RegisterComponent();
            PulseSynth->Start();
        }
    }

    UpdateCompass();
    UpdatePulseAudio(DeltaTime);
}

void APropHuntPlayerController::UpdateCompass()
{
    if (!CompassWidget)
    {
        return;
    }

    APawn* HunterPawn = GetPawn();
    if (!HunterPawn)
    {
        return;
    }

    APropHuntGhostPawn* NearestGhost = nullptr;
    float NearestDistSq = FLT_MAX;
    for (TActorIterator<APropHuntGhostPawn> It(GetWorld()); It; ++It)
    {
        const float DistSq = HunterPawn->GetSquaredDistanceTo(*It);
        if (DistSq < NearestDistSq)
        {
            NearestGhost = *It;
            NearestDistSq = DistSq;
        }
    }

    if (NearestGhost)
    {
        const float Dist = FMath::Sqrt(NearestDistSq);
        // 30 米内映射到 0~1 强度，越近越强。
        CurrentSignalStrength = 1.0f - FMath::Clamp(Dist / 3000.0f, 0.0f, 1.0f);
    }
    else
    {
        CurrentSignalStrength = 0.0f;
    }

    if (CompassWidget)
    {
        CompassWidget->SetSignalStrength(CurrentSignalStrength);
    }
}

void APropHuntPlayerController::UpdatePulseAudio(float DeltaTime)
{
    if (!PulseSynth)
    {
        return;
    }

    // 盖革计数器：越近滴答越频繁、越响、音调越高。
    const float Interval = FMath::Lerp(1.2f, 0.12f, CurrentSignalStrength);
    const float Volume = FMath::Lerp(0.15f, 1.0f, CurrentSignalStrength);
    const float Pitch = FMath::Lerp(0.8f, 1.6f, CurrentSignalStrength);

    PulseTimer += DeltaTime;
    if (PulseTimer >= Interval)
    {
        PulseTimer = 0.0f;
        PulseSynth->TriggerPulse(Volume, Pitch);
    }

    // 极其近（强度 > 0.7）时叠加收音机杂音，越近越响。
    const float NoiseVolume = FMath::Clamp((CurrentSignalStrength - 0.7f) / 0.3f, 0.0f, 1.0f);
    PulseSynth->SetNoiseVolume(NoiseVolume);
}

void APropHuntPlayerController::SetupInputComponent()
{
    Super::SetupInputComponent();

    if (InputComponent)
    {
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

void APropHuntPlayerController::ServerRequestLeaveRoom_Implementation()
{
    if (APropHuntLobbyGameMode* GM = GetWorld()->GetAuthGameMode<APropHuntLobbyGameMode>())
    {
        GM->HandleLeaveRoom(this);
    }
}

void APropHuntPlayerController::ClientReturnToMenu_Implementation()
{
    // 重置「在房间」状态，然后独立旅行回菜单地图（NM_Standalone，脱离房间）。
    if (UPropHuntMenuSubsystem* Menu = GetGameInstance()->GetSubsystem<UPropHuntMenuSubsystem>())
    {
        Menu->SetInRoom(false);
    }

    // 若当前已是菜单地图则无需旅行，只切回主菜单 UI。
    if (GetWorld()->GetMapName().Contains(TEXT("PH_Lobby")) && GetWorld()->GetNetMode() == NM_Standalone)
    {
        if (UPropHuntMenuSubsystem* Menu = GetGameInstance()->GetSubsystem<UPropHuntMenuSubsystem>())
        {
            Menu->ShowMainMenu();
        }
        return;
    }

    ClientTravel(TEXT("/PropHunt/Maps/PH_Lobby"), TRAVEL_Absolute);
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

void APropHuntPlayerController::ServerRequestRematch_Implementation()
{
    if (APropHuntGameMode* GM = GetWorld()->GetAuthGameMode<APropHuntGameMode>())
    {
        GM->RequestRematch();
    }
}

void APropHuntPlayerController::ServerRequestBackToMenu_Implementation()
{
    if (APropHuntGameMode* GM = GetWorld()->GetAuthGameMode<APropHuntGameMode>())
    {
        GM->RequestBackToMenu();
    }
}

void APropHuntPlayerController::DeliverShowSettlement(const FString& ResultText)
{
    if (IsLocalController())
    {
        ShowSettlementLocal(ResultText);
    }
    else
    {
        ClientShowSettlement(ResultText);
    }
}

void APropHuntPlayerController::ClientShowSettlement_Implementation(const FString& ResultText)
{
    ShowSettlementLocal(ResultText);
}

void APropHuntPlayerController::ShowSettlementLocal(const FString& ResultText)
{
    if (UPropHuntMenuSubsystem* Menu = GetGameInstance()->GetSubsystem<UPropHuntMenuSubsystem>())
    {
        Menu->ShowSettlement(ResultText);
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
