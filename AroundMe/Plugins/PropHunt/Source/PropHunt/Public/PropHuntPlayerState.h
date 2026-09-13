#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "PropHuntTypes.h"
#include "PropHuntPlayerState.generated.h"

UCLASS()
class PROPHUNT_API APropHuntPlayerState : public APlayerState
{
    GENERATED_BODY()

public:
    APropHuntPlayerState();

    UPROPERTY(Replicated, BlueprintReadOnly, Category = "PropHunt")
    EPropHuntRole TeamRole{EPropHuntRole::Spectator};

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
};
