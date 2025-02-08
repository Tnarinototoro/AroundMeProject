#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "DIY_ChestDefines.h"
#include "DIY_EquipmentBase.h"
#include "DIY_ChestController.generated.h"

UCLASS(ClassGroup=(Player), meta=(BlueprintSpawnableComponent))
class AROUNDME_API UDIY_ChestController : public UDIY_EquipmentBase
{
    GENERATED_BODY()

public:    
   
    UDIY_ChestController();

protected:
    // Called when the game starts
    virtual void BeginPlay() override;

public:    



    UPROPERTY(EditAnyWhere,BluePrintReadWrite, Category = "DIY_ChestController")
    class USceneComponent* HandHead_Releasing_Point{nullptr};
    
    // Called every frame
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

   




	



protected:
	void UpdateChestStateMachine(float inDeltatime);

	void SwitchToNextState(EDIY_ChestState_Type inNextState);

    private:


	EDIY_ChestState_Type mCurrentState{EDIY_ChestState_Type::Idle};

	float mCurrentStateElapsedTime{0.f};
	bool mEnteredNewStateSign{false};

    private:
	

   
	
};
