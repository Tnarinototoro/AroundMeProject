#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "../../GameUtilities/DIY_HelperMacros.h"
#include "DIY_InteractionCommonInterFace.h"
#include "../Items/DIY_ItemDefines.h"
#include "DIY_ConductivityProcessor.generated.h"

UENUM(BlueprintType)
enum class EConductivityState
{
    CS_Normal,
    CS_OnAmpere,
    CS_Count
};

UCLASS(ClassGroup=(Player), meta=(BlueprintSpawnableComponent))
class AROUNDME_API UDIY_ConductivityProcessor : public UActorComponent, public IDIY_InteractionCommonInterFace
{
    GENERATED_BODY()

public:    
    

    UDIY_ConductivityProcessor();
    inline float GetFinal_ElectricityIntensityAmpere() const 
    {
        return Final_ElectricityIntensityAmpere;
    }

    inline EConductivityState GetCurrentConductivityState() const 
    {
        return CurrentConductivityState;

    }

    inline const FDIY_ConductivityAttr& GetConductivityAttr() const
    {
        return copy_conduct_Attr;
    }
protected:
    // Called when the game starts
    virtual void BeginPlay() override;

    UPROPERTY(BlueprintReadOnly)
        float Final_ElectricityIntensityAmpere{ 0.f };

    void UpdateParams(float inDeltaTime);
    void UpdateStateMachine(float inDeltaTime);

    EConductivityState CurrentConductivityState{ EConductivityState::CS_Normal};
public:    
    // Called every frame
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
    virtual void OnInitWithConfigCopy(const FDIY_ItemDefualtConfig* inConfig) override;
   
    void OnConnectedToElectricity(float inAmpere);
    void OnDisConnectedToElectricity(float inAmpere);

    void AddInstantElectricityAmpere(float inAmpere);
    //Conductivity data and functions start <--------------------------------------------------------------------------------------------------------------------



  

 //Conductivity data and functions End -------------------------------------------------------------------------------------------------------------------->

    void TakeDamage(float inDamageAmount);


private:
    float OuterWolrdGivenAmpere{ 0.0f };
    float CalculateGeneratedTemperature(float  inAmpere, float deltaTime);

    FDIY_ConductivityAttr copy_conduct_Attr;

    uint8 connected_elec_source_num{0};




    DECLARE_GET_COMPONENT_HELPER(UDIY_TemperatureProcessor);
};