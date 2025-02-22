#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "DIY_RobotHand_Defines.h"
#include "DIY_EquipmentBase.h"
#include "DIY_RobotHandController.generated.h"

UCLASS(ClassGroup=(Player), meta=(BlueprintSpawnableComponent))
class AROUNDME_API UDIY_RobotHandController : public UDIY_EquipmentBase
{
    GENERATED_BODY()

public:    
   
    UDIY_RobotHandController();

protected:
    // Called when the game starts
    virtual void BeginPlay() override;

public:    


    UPROPERTY(EditAnyWhere,BluePrintReadWrite, Category = "DIY_RobotHandController")
    class USceneComponent* Target_Point{nullptr};
    // Called every frame
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


    UFUNCTION(BlueprintCallable, Category = "DIY_EquipmentManager")
    inline FVector GetHandEndWolrdLocation() const;
    



	



protected:
	void UpdateHandHeadStateMachine(float inDeltatime);

	void SwitchToNextState(EDIY_RobotHand_State_Type inNextState);

    private:


	EDIY_RobotHand_State_Type mCurrentState{EDIY_RobotHand_State_Type::Idle};

	float mCurrentStateElapsedTime{0.f};
	bool mEnteredNewStateSign{false};

    private:
	

   
	
};
