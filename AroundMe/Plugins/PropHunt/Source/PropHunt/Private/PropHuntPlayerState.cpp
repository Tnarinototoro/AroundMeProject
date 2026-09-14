#include "PropHuntPlayerState.h"
#include "Net/UnrealNetwork.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/PawnMovementComponent.h"
#include "GameFramework/PlayerController.h"

APropHuntPlayerState::APropHuntPlayerState()
{
}

void APropHuntPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    DOREPLIFETIME(APropHuntPlayerState, TeamRole);
    DOREPLIFETIME(APropHuntPlayerState, bIsReady);
    DOREPLIFETIME(APropHuntPlayerState, bGhostHidden);
}

void APropHuntPlayerState::OnRep_bGhostHidden()
{
    ApplyGhostHiddenToPawn();
}

void APropHuntPlayerState::ApplyGhostHiddenToPawn()
{
    APawn* Pawn = GetPawn();
    if (!Pawn)
    {
        return;
    }

    Pawn->SetActorHiddenInGame(bGhostHidden);
    Pawn->SetActorEnableCollision(!bGhostHidden);

    // 附身时禁用移动组件，避免 FloatingPawnMovement 干扰 attach 跟随。
    if (UPawnMovementComponent* MoveComp = Pawn->GetMovementComponent())
    {
        MoveComp->SetActive(!bGhostHidden);
    }
}
