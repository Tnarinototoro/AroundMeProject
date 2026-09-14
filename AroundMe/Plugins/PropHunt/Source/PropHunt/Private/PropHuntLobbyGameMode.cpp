#include "PropHuntLobbyGameMode.h"

#include "PropHuntGameState.h"
#include "PropHuntPlayerController.h"
#include "PropHuntPlayerState.h"
#include "PropHuntHUD.h"
#include "PropHuntGameInstanceSubsystem.h"
#include "GameFramework/GameStateBase.h"
#include "GameFramework/PlayerState.h"
#include "Engine/GameInstance.h"
#include "Engine/World.h"

APropHuntLobbyGameMode::APropHuntLobbyGameMode()
{
    PlayerControllerClass = APropHuntPlayerController::StaticClass();
    GameStateClass = APropHuntGameState::StaticClass();
    PlayerStateClass = APropHuntPlayerState::StaticClass();
    HUDClass = APropHuntHUD::StaticClass();
    // 不设 DefaultPawnClass：Lobby 阶段不 spawn 角色。
}

void APropHuntLobbyGameMode::PostLogin(APlayerController* NewPlayer)
{
    Super::PostLogin(NewPlayer);

    if (APropHuntPlayerState* PS = NewPlayer ? NewPlayer->GetPlayerState<APropHuntPlayerState>() : nullptr)
    {
        UE_LOG(LogPropHunt, Warning, TEXT("[PropHunt] PostLogin: %s joined lobby"), *PS->GetPlayerName());
    }
}

void APropHuntLobbyGameMode::RestartPlayer(AController* NewPlayer)
{
    // Lobby 阶段不 spawn；等倒计时结束 ServerTravel 到游戏地图后，由游戏地图的 GameMode 负责 spawn。
}

void APropHuntLobbyGameMode::HandleChooseTeam(APropHuntPlayerController* PC, EPropHuntRole NewRole)
{
    if (!PC || (NewRole != EPropHuntRole::Hunter && NewRole != EPropHuntRole::Ghost))
    {
        return;
    }

    APropHuntPlayerState* PS = PC->GetPlayerState<APropHuntPlayerState>();
    if (!PS)
    {
        return;
    }

    PS->TeamRole = NewRole;
    PS->bIsReady = false; // 换队后需重新准备

    // 存到 GameInstance Subsystem，跨 ServerTravel 保留。
    if (UPropHuntGameInstanceSubsystem* Subsys = GetGameInstance()->GetSubsystem<UPropHuntGameInstanceSubsystem>())
    {
        Subsys->SetTeamSelection(PS->GetPlayerName(), NewRole);
    }

    ReevaluateLobbyState();
}

void APropHuntLobbyGameMode::HandleSetReady(APropHuntPlayerController* PC, bool bReady)
{
    if (!PC)
    {
        return;
    }

    APropHuntPlayerState* PS = PC->GetPlayerState<APropHuntPlayerState>();
    if (!PS || PS->TeamRole == EPropHuntRole::Spectator)
    {
        return; // 未选边不能准备
    }

    PS->bIsReady = bReady;
    ReevaluateLobbyState();
}

bool APropHuntLobbyGameMode::CanStartMatch() const
{
    if (!GameState)
    {
        return false;
    }

    int32 HunterCount = 0;
    int32 GhostCount = 0;
    int32 NotReadyCount = 0;
    for (APlayerState* It : GameState->PlayerArray)
    {
        APropHuntPlayerState* PS = Cast<APropHuntPlayerState>(It);
        if (!PS)
        {
            continue;
        }

        if (PS->TeamRole == EPropHuntRole::Hunter)
        {
            ++HunterCount;
            if (!PS->bIsReady) { ++NotReadyCount; }
        }
        else if (PS->TeamRole == EPropHuntRole::Ghost)
        {
            ++GhostCount;
            if (!PS->bIsReady) { ++NotReadyCount; }
        }
    }

    return HunterCount >= 1 && GhostCount >= 1 && NotReadyCount == 0;
}

void APropHuntLobbyGameMode::ReevaluateLobbyState()
{
    APropHuntGameState* GS = Cast<APropHuntGameState>(GameState);
    if (!GS || GS->MatchPhase != EPropHuntMatchPhase::WaitingForPlayers)
    {
        return;
    }

    if (CanStartMatch())
    {
        if (!CountdownTimerHandle.IsValid())
        {
            BeginCountdown();
        }
    }
    else
    {
        if (CountdownTimerHandle.IsValid())
        {
            GetWorldTimerManager().ClearTimer(CountdownTimerHandle);
            CountdownTimerHandle.Invalidate();
            GS->CountdownRemaining = 0;
        }
    }
}

void APropHuntLobbyGameMode::BeginCountdown()
{
    APropHuntGameState* GS = Cast<APropHuntGameState>(GameState);
    if (!GS)
    {
        return;
    }

    GS->CountdownRemaining = CountdownSeconds;
    GetWorldTimerManager().SetTimer(CountdownTimerHandle, this, &APropHuntLobbyGameMode::TickCountdown, 1.0f, true);
}

void APropHuntLobbyGameMode::TickCountdown()
{
    APropHuntGameState* GS = Cast<APropHuntGameState>(GameState);
    if (!GS)
    {
        return;
    }

    GS->CountdownRemaining = FMath::Max(0, GS->CountdownRemaining - 1);
    if (GS->CountdownRemaining <= 0)
    {
        GetWorldTimerManager().ClearTimer(CountdownTimerHandle);
        CountdownTimerHandle.Invalidate();
        StartMatch();
    }
}

void APropHuntLobbyGameMode::StartMatch()
{
    // 全员就绪，切换到游戏地图。PlayerState 会随 travel 保留，TeamRole 得以延续。
    GetWorld()->ServerTravel(GameMapPath);
}
