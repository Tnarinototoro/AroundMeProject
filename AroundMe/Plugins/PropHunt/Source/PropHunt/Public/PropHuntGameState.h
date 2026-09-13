#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "PropHuntTypes.h"
#include "PropHuntGameState.generated.h"

UCLASS()
class PROPHUNT_API APropHuntGameState : public AGameStateBase
{
    GENERATED_BODY()

public:
    APropHuntGameState();

    UPROPERTY(ReplicatedUsing = OnRep_MatchPhase, BlueprintReadOnly, Category = "PropHunt")
    EPropHuntMatchPhase MatchPhase{EPropHuntMatchPhase::WaitingForPlayers};

    UFUNCTION()
    void OnRep_MatchPhase();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
};
