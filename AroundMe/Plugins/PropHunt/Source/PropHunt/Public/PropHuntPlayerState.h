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

    UPROPERTY(Replicated, BlueprintReadOnly, Category = "PropHunt")
    bool bIsReady{false};

    // Ghost 附身后隐藏身体（玩家状态，跨 Pawn 类型通用）。
    UPROPERTY(ReplicatedUsing = OnRep_bGhostHidden, BlueprintReadOnly, Category = "PropHunt")
    bool bGhostHidden{false};

    UFUNCTION()
    void OnRep_bGhostHidden();

    void ApplyGhostHiddenToPawn();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
};
