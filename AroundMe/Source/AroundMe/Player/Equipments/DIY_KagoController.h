#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "DIY_KagoDefines.h"
#include "DIY_EquipmentBase.h"
#include "DIY_KagoController.generated.h"

UCLASS(ClassGroup=(Player), meta=(BlueprintSpawnableComponent))
class AROUNDME_API UDIY_KagoController : public UDIY_EquipmentBase
{
    GENERATED_BODY()

public:    
   
    UDIY_KagoController();

protected:
    // Called when the game starts
    virtual void BeginPlay() override;

public:    



    UPROPERTY(EditAnyWhere,BluePrintReadWrite, Category = "DIY_KagoController")
    class USceneComponent* HandHead_Releasing_Point{nullptr};
    
    // Called every frame
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

   




	



protected:
	void UpdateKagoStateMachine(float inDeltatime);

	void SwitchToNextState(EDIY_KagoState_Type inNextState);

    private:


	EDIY_KagoState_Type mCurrentState{EDIY_KagoState_Type::Idle};

	float mCurrentStateElapsedTime{0.f};
	bool mEnteredNewStateSign{false};

    private:
	

   
	
};
