#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "DIY_CapDefines.h"
#include "DIY_EquipmentBase.h"
#include "DIY_CapController.generated.h"

UCLASS(ClassGroup=(Player), meta=(BlueprintSpawnableComponent))
class AROUNDME_API UDIY_CapController : public UDIY_EquipmentBase
{
    GENERATED_BODY()

public:    
   
    UDIY_CapController();

protected:
    // Called when the game starts
    virtual void BeginPlay() override;

public:    



   
    
    // Called every frame
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

   




	



protected:
	void UpdateCapStateMachine(float inDeltatime);

	void SwitchToNextState(EDIY_CapState_Type inNextState);

    private:


	EDIY_CapState_Type mCurrentState{EDIY_CapState_Type::Idle};

	float mCurrentStateElapsedTime{0.f};
	bool mEnteredNewStateSign{false};

    private:
	

   
	
};
