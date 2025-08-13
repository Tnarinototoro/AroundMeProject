#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "DIY_RobotHand_Defines.h"
#include "DIY_EquipmentBase.h"
#include "../../GameUtilities/DIY_HelperMacros.h"
#include "DIY_RobotHandController.generated.h"

UCLASS(ClassGroup = (Player), meta = (BlueprintSpawnableComponent))
class AROUNDME_API UDIY_RobotHandController : public UDIY_EquipmentBase
{
    GENERATED_BODY()

public:
    UDIY_RobotHandController();

protected:
    // Called when the game starts
    virtual void BeginPlay() override;

public:
    UPROPERTY(EditAnyWhere, BluePrintReadWrite, Category = "DIY_RobotHandController")
    class USceneComponent *Target_Hook{nullptr};
    // Called every frame
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override;

    UFUNCTION(BlueprintCallable, Category = "DIY_EquipmentManager")
    FVector GetHandEndWolrdLocation() const;

    UFUNCTION(BlueprintCallable, Category = "DIY_EquipmentManager")
    EDIY_RobotHand_State_Type GetCurrentState() const;

    UFUNCTION(BlueprintCallable, Category = "DIY_EquipmentManager")
    bool RequestPickUpTask(class AActor *inTargetItem);

    UFUNCTION(BlueprintCallable, Category = "DIY_EquipmentManager")
    bool RequestDrillTask(class AActor *inTargetItem);

    // pick up params
    UPROPERTY(EditAnyWhere, BluePrintReadWrite, Category = "DIY_RobotHandController")
    float PickUpTask_MoveToTargetPointSpeed{1.f};

    UPROPERTY(EditAnyWhere, BluePrintReadWrite, Category = "DIY_RobotHandController")
    float PickUpTask_MoveBackSpeed{1.f};

    UPROPERTY(EditAnyWhere, BluePrintReadWrite, Category = "DIY_RobotHandController")
    float PickUpItem_MaxMovingToTarget_TryingTime{5.0f};

    UPROPERTY(EditAnyWhere, BluePrintReadWrite, Category = "DIY_RobotHandController")
    float PickUpTask_TargetCloseEnoughDistance{2.f};

    // drill task params
    UPROPERTY(EditAnyWhere, BluePrintReadWrite, Category = "DIY_RobotHandController")
    float DrillTask_MoveToTargetObjectSpeed{1.f};

    UPROPERTY(EditAnyWhere, BluePrintReadWrite, Category = "DIY_RobotHandController")
    float DrillTask_MaxMovingToTarget_TryingTime{5.0f};

    UPROPERTY(EditAnyWhere, BluePrintReadWrite, Category = "DIY_RobotHandController")
    float DrillTask_AtObject_DrillingTime{4.0f};

    UPROPERTY(EditAnyWhere, BluePrintReadWrite, Category = "DIY_RobotHandController")
    float DrillTask_TargetCloseEnoughDistance{80.f};

protected:
    void UpdateHandHeadStateMachine(float inDeltatime);

    void SwitchToNextState(EDIY_RobotHand_State_Type inNextState);

private:
    EDIY_RobotHand_State_Type mCurrentState{EDIY_RobotHand_State_Type::Idle};

    float mCurrentStateElapsedTime{0.f};
    bool mEnteredNewStateSign{false};

private:
    class AActor *mCurrentTargetPickUpItem{nullptr};

    class AActor *mCurrentPickedUpItem{nullptr};

    class AActor *mCurrentBeingDrilledItem{nullptr};

    class UDIY_RobotHand_HeadController *GetHeadController();

    DECLARE_GET_COMPONENT_HELPER(UDIY_MainPlayerActionController)
    DECLARE_GET_COMPONENT_HELPER(UDIY_EquipmentManager)
};
