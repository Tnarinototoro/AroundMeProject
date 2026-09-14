#include "PropHuntGameState.h"
#include "Net/UnrealNetwork.h"

APropHuntGameState::APropHuntGameState()
{
}

void APropHuntGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    DOREPLIFETIME(APropHuntGameState, MatchPhase);
    DOREPLIFETIME(APropHuntGameState, CountdownRemaining);
}

void APropHuntGameState::OnRep_MatchPhase()
{
    // Phase 4: drive HUD updates from match phase.
}
