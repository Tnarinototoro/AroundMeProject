#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DIY_AcitonDefines.h"
#include "AroundMe/Player/Items/DIY_ItemDefines.h"
#include "DIY_MainPlayerActionController.generated.h"

UCLASS(ClassGroup=(Player), meta=(BlueprintSpawnableComponent))
class AROUNDME_API UDIY_MainPlayerActionController : public UActorComponent
{
    GENERATED_BODY()

public:    
    // 设置默认值
    UDIY_MainPlayerActionController();

protected:
    // Called when the game starts
    virtual void BeginPlay() override;

    UPROPERTY(BlueprintReadWrite, Category = "DIY_MainPlayerActionController")
    float mActingRate{ 0.0f };

    UPROPERTY(BlueprintReadWrite, Category = "DIY_MainPlayerActionController")
    float mSpeedRate{ 0.0f };


    UPROPERTY(BlueprintReadWrite, Category = "DIY_MainPlayerActionController")
    FDIY_ItemDataTableRow mCurrentReceipt;
public:    
    // Called every frame
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

    UPROPERTY(BlueprintReadWrite, Category = "DIY_MainPlayerActionController")
    EMainPlayerActingStateType CurrentActingState {EMainPlayerActingStateType::State_Base_Motion};
    UPROPERTY(BlueprintReadWrite, Category = "DIY_MainPlayerActionController")
    bool CraftSuccessSign{ false };

    void ProcessJumpInput();
};
