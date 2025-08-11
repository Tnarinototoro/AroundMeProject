#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "DIY_RobotHand_Head_Defines.h"
#include "DIY_EquipmentBase.h"
#include "DIY_RobotHand_HeadController.generated.h"

UCLASS(ClassGroup = (Equipment), meta = (BlueprintSpawnableComponent))
class AROUNDME_API UDIY_RobotHand_HeadController : public UDIY_EquipmentBase
{
    GENERATED_BODY()

public:
    UDIY_RobotHand_HeadController();

protected:
    // Called when the game starts
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override;

    UFUNCTION(BlueprintCallable)
    void SetHeadSpinningSpeed(float inSpinSpeed);

    UFUNCTION(BlueprintCallable)
    void SetHeadSpinningAngle_Directly(float inSpinAngle);

    

protected:
    void UpdateHandHeadStateMachine(float inDeltatime);

    void UpdateParams(float inDeltatime);

    void SwitchToNextState(EDIY_RobotHand_Head_State_Type inNextState);

private:
    EDIY_RobotHand_Head_State_Type mCurrentState{EDIY_RobotHand_Head_State_Type::Idle};

    float mCurrentStateElapsedTime{0.f};
    bool mEnteredNewStateSign{false};
    

    // this used as Drill_Type spinning speed
    float Param_Float_0{0.f};

    float CurrentSpinAngle{0.f};
    float CurrentSpinSpeed{90.f};
};
