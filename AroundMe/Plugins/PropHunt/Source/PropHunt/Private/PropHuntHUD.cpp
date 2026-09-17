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

    if (GS && GS->MatchPhase == EPropHuntMatchPhase::InProgress)
    {
        DrawGame(PS);
    }
}

void APropHuntHUD::DrawGame(APropHuntPlayerState* PS)
{
    const FString RoleStr = StaticEnum<EPropHuntRole>()->GetDisplayNameTextByValue(static_cast<int64>(PS->TeamRole)).ToString();
    DrawText(FString::Printf(TEXT("You are %s"), *RoleStr), FColor::Yellow, 60, 60);
}
