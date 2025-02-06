#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "DIY_RobotHand_Head_Defines.h"
#include "DIY_EquipmentBase.h"
#include "DIY_RobotHand_HeadController.generated.h"

UCLASS(ClassGroup=(Equipment), meta=(BlueprintSpawnableComponent))
class AROUNDME_API UDIY_RobotHand_HeadController :  public UDIY_EquipmentBase
{
    GENERATED_BODY()

public:    
   
    UDIY_RobotHand_HeadController();
	
	

protected:
    // Called when the game starts
    virtual void BeginPlay() override;

public:    


    // Called every frame
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

   




	


	protected:
	void UpdateHandHeadStateMachine(float inDeltatime);

	void SwitchToNextState(EDIY_RobotHand_Head_State_Type inNextState);

    private:


	EDIY_RobotHand_Head_State_Type mCurrentState{EDIY_RobotHand_Head_State_Type::Idle};

	float mCurrentStateElapsedTime{0.f};
	bool mEnteredNewStateSign{false};
	EDIY_RobotHand_HeadType mCurrentHeadType{ EDIY_RobotHand_HeadType::Count };

 
};
