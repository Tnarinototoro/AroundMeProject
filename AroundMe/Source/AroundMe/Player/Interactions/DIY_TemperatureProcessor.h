#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DIY_InteractionCommonInterFace.h"
#include "DIY_EmergentInteractDefines.h"
#include "DIY_TemperatureProcessor.generated.h"

UCLASS(ClassGroup=(Player), meta=(BlueprintSpawnableComponent))
class AROUNDME_API UDIY_TemperatureProcessor : public UActorComponent, public IDIY_InteractionCommonInterFace
{
    GENERATED_BODY()

public:    


    //Todo enum Temperature
   
    UDIY_TemperatureProcessor();
    virtual void OnInitWithConfigCopy(const FDIY_ItemDefualtConfig* inConfig) override;
protected:
    // Called when the game starts
    virtual void BeginPlay() override;

public:    
    // Called every frame
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
    
    
    
    
  
    float GetFinalTemperatureValue() const { return Final_TemperatureValue; }
    
    float GetFinalMoistureValue() const { return Final_MoistureValue; }
protected:

    void UpdateParams(float inDeltaTime);





//Temperature data and functions start <--------------------------------------------------------------------------------------------------------------------
protected:
    UPROPERTY(BlueprintReadOnly)
    float Final_TemperatureValue{0.f};



    void OverrideOuterTemperature(float inTemperature);




    

public:
    enum ETemperatureHolderType
    {
        Self_burning,
        Self_thunder_shock,
        Outer_shock,
        Type_Count
    };



    void AddInstantTemperatureChange(float inChange);

    

    void AddEndurateTemperatureHolder(ETemperatureHolderType inHolderType,float inEndurateTime, float inLastingTemperature);


private:
    float OuterWolrdTemperatureValue{ 0.2f };

    float TemperatureChangeSpeedScale{ 1.0f };
    

    ETemperatureHolderType LastDominant_TemperatureHolder_Type{ ETemperatureHolderType::Outer_shock};
    float LastDominant_TemperatureHolder_RemainingTime{0.f};
    float LastDominant_TemperatureHolder_RealTemperature{ 0.f };

   
//Temperature data and functions End -------------------------------------------------------------------------------------------------------------------->

   


   















 




//Moisture data and functions start <--------------------------------------------------------------------------------------------------------------------
public:
   

    //used for outer impact such as pokemon damage, item effect
    void AddInstantMoistureChange(float inChange);
protected:

    //0-> totally dry 1->water
    UPROPERTY(BlueprintReadOnly)
    float Final_MoistureValue{ 0.f };
    
    //used for setting the environment moisture, influenced by river, geo  when such environment changes , this value will be reconfigured
    void OverrideOuterMoisture(float inMoisture);
private:
    float OuterWolrdMoistureValue{ 0.2f };

    //WorldSettings should be used for such purposes
    float MoistureChangeSpeedScale{ 1.0f };


//Moisture data and functions End -------------------------------------------------------------------------------------------------------------------->





    FDIY_TemperatureAndMoistureAttr copy_TemperatureAndMoistureAttr;



};