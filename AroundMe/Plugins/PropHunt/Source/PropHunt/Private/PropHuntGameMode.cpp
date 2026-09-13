#include "PropHuntGameMode.h"

#include "PropHuntCharacter.h"
#include "PropHuntGameState.h"
#include "PropHuntPlayerController.h"
#include "PropHuntPlayerState.h"
#include "GameFramework/GameStateBase.h"
#include "GameFramework/PlayerState.h"

APropHuntGameMode::APropHuntGameMode()
{
    DefaultPawnClass = APropHuntCharacter::StaticClass();
    PlayerControllerClass = APropHuntPlayerController::StaticClass();
    GameStateClass = APropHuntGameState::StaticClass();
    PlayerStateClass = APropHuntPlayerState::StaticClass();
}

void APropHuntGameMode::BeginPlay()
{
    Super::BeginPlay();
}

void APropHuntGameMode::PostLogin(APlayerController* NewPlayer)
{
    Super::PostLogin(NewPlayer);

    APropHuntPlayerState* PS = NewPlayer ? NewPlayer->GetPlayerState<APropHuntPlayerState>() : nullptr;
    if (!PS || !GameState)
    {
        return;
    }

    int32 HunterCount = 0;
    int32 GhostCount = 0;
    for (APlayerState* It : GameState->PlayerArray)
    {
        APropHuntPlayerState* PPS = Cast<APropHuntPlayerState>(It);
        if (!PPS)
        {
            continue;
        }

        if (PPS->TeamRole == EPropHuntRole::Hunter)
        {
            ++HunterCount;
        }
        else if (PPS->TeamRole == EPropHuntRole::Ghost)
        {
            ++GhostCount;
        }
    }

    // 第一个登录 = Hunter，第二个 = Ghost，其余 = Spectator。
    // NewPlayer 的 PlayerState 此刻 TeamRole 仍是默认 Spectator，不计入统计。
    if (HunterCount == 0)
    {
        PS->TeamRole = EPropHuntRole::Hunter;
    }
    else if (GhostCount == 0)
    {
        PS->TeamRole = EPropHuntRole::Ghost;
    }
    else
    {
        PS->TeamRole = EPropHuntRole::Spectator;
    }
}
