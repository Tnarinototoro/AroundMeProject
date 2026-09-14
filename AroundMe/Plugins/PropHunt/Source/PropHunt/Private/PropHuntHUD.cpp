#include "PropHuntHUD.h"

#include "PropHuntGameState.h"
#include "PropHuntPlayerState.h"
#include "PropHuntTypes.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/PlayerState.h"
#include "Engine/World.h"

void APropHuntHUD::DrawHUD()
{
    Super::DrawHUD();

    APlayerController* PC = GetOwningPlayerController();
    APropHuntPlayerState* PS = PC ? PC->GetPlayerState<APropHuntPlayerState>() : nullptr;
    if (!PS)
    {
        return;
    }

    APropHuntGameState* GS = GetWorld() ? GetWorld()->GetGameState<APropHuntGameState>() : nullptr;

    if (GS && GS->MatchPhase == EPropHuntMatchPhase::WaitingForPlayers)
    {
        DrawLobby(PS, GS);
    }
    else if (GS && GS->MatchPhase == EPropHuntMatchPhase::InProgress)
    {
        DrawGame(PS);
    }
}

void APropHuntHUD::DrawLobby(APropHuntPlayerState* PS, APropHuntGameState* GS)
{
    int32 HunterCount = 0;
    int32 GhostCount = 0;
    for (APlayerState* It : GS->PlayerArray)
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

    const FString RoleStr = PS->TeamRole == EPropHuntRole::Spectator
        ? TEXT("Not chosen")
        : StaticEnum<EPropHuntRole>()->GetDisplayNameTextByValue(static_cast<int64>(PS->TeamRole)).ToString();

    DrawText(TEXT("=== PropHunt Lobby ==="), FColor::White, 60, 40);
    DrawText(TEXT("[1] Hunter    [2] Ghost    [R] Toggle Ready"), FColor::Yellow, 60, 70);
    DrawText(FString::Printf(TEXT("Your team: %s"), *RoleStr), FColor::Yellow, 60, 100);
    DrawText(PS->bIsReady ? TEXT("Ready: YES") : TEXT("Ready: NO"), PS->bIsReady ? FColor::Green : FColor::Red, 60, 130);
    DrawText(FString::Printf(TEXT("Hunter: %d    Ghost: %d"), HunterCount, GhostCount), FColor::White, 60, 160);

    if (GS->CountdownRemaining > 0)
    {
        DrawText(FString::Printf(TEXT("Starting in %d..."), GS->CountdownRemaining), FColor::Orange, 60, 200);
    }
    else
    {
        DrawText(TEXT("Waiting for 1+ Hunter and 1+ Ghost, all Ready"), FColor::Silver, 60, 200);
    }
}

void APropHuntHUD::DrawGame(APropHuntPlayerState* PS)
{
    const FString RoleStr = StaticEnum<EPropHuntRole>()->GetDisplayNameTextByValue(static_cast<int64>(PS->TeamRole)).ToString();
    DrawText(FString::Printf(TEXT("You are %s"), *RoleStr), FColor::Yellow, 60, 60);
}
