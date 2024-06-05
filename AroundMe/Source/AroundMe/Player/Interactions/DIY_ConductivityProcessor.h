#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "../../GameUtilities/DIY_HelperMacros.h"
#include "DIY_InteractionCommonInterFace.h"
#include "DIY_ConductivityProcessor.generated.h"



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
protected:
    // Called when the game starts
    virtual void BeginPlay() override;

    UPROPERTY(BlueprintReadOnly)
        float Final_ElectricityIntensityAmpere{ 0.f };

    void UpdateParams(float inDeltaTime);
public:    
    // Called every frame
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
    virtual void OnInitWithConfigCopy(const FDIY_ItemDefualtConfig* inConfig) override;
   
    void OnConnectedToElectricity(float inAmpere);

    void AddInstantElectricityAmpere(float inAmpere);
    //Conductivity data and functions start <--------------------------------------------------------------------------------------------------------------------
    //weather, geoinfo, damage, item_impact
    //0-1
    float moist{0.1};


    //0-1
    float metal_self_conductivity{0.f};

    float R_scale{ 10.0f };

    //0-1
    float metal_self_purity{0.f};

 //Conductivity data and functions End -------------------------------------------------------------------------------------------------------------------->

    void TakeDamage(float inDamageAmount);


private:
    float OuterWolrdGivenAmpere{ 0.0f };
    float CalculateGeneratedTemperature(float  inAmpere, float deltaTime);
    DECLARE_GET_COMPONENT_HELPER(UDIY_TemperatureProcessor);

};