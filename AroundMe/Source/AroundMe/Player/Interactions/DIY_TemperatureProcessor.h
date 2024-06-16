#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DIY_InteractionCommonInterFace.h"
#include "DIY_EmergentInteractDefines.h"
#include "Particles/ParticleSystem.h"

#include "DIY_TemperatureProcessor.generated.h"



UENUM(BlueprintType)
enum class ETemperatureRelatedState
{
    TS_Normal,
    TS_Burning,
    TS_BurntOver,
    TS_Frozen,
    TS_Count
};

DECLARE_DYNAMIC_DELEGATE(FOnItemBurntOverFinished);

UCLASS(ClassGroup=(Player), meta=(BlueprintSpawnableComponent))
class AROUNDME_API UDIY_TemperatureProcessor : public UActorComponent, public IDIY_InteractionCommonInterFace
{
    GENERATED_BODY()

public:    

    //Todo enum Temperature

    UDIY_TemperatureProcessor();
    virtual void OnInitWithConfigCopy(const FDIY_ItemDefualtConfig* inConfig) override;
    virtual void OnResetComponentValues() override;
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
    void UpdateStateMachine(float inDeltaTime);




//Temperature data and functions start <--------------------------------------------------------------------------------------------------------------------
protected:
    UPROPERTY(BlueprintReadOnly)
    float Final_TemperatureValue{0.f};



    ETemperatureRelatedState CurrentState{ETemperatureRelatedState::TS_Normal};
    float CurrentStateElapedTime{ 0.0f };
    bool CurrentStateFirstTimeSign{ false };
    void SwitchToNextState(ETemperatureRelatedState inState);

    void OverrideOuterTemperature(float inTemperature);




    

public:

    const ETemperatureRelatedState& GetCurrentState() const 
    {
        return CurrentState;
    }
    const FDIY_TemperatureAndMoistureAttr& GetTemperatureAndMoistAttrs() const
    {
        return copy_TemperatureAndMoistureAttr;
    }

    void AddInstantTemperatureChange(float inChange);

    

    void AddEndurateTemperatureHolder(float inEndurateTime, float inLastingTemperature);


private:
    float OuterWolrdTemperatureValue{ 0.2f };

   
    

   
    float LastDominant_TemperatureHolder_RemainingTime{0.f};
    float LastDominant_TemperatureHolder_RealTemperature{ 0.f };

   
//Temperature data and functions End -------------------------------------------------------------------------------------------------------------------->

   


   















 




//Moisture data and functions start <--------------------------------------------------------------------------------------------------------------------
public:
   

    //used for outer impact such as pokemon damage, item effect
    void AddInstantMoistureChange(float inChange);

    void AddEndurateMoistureHolder(float inDuration, float inMoisture);
protected:

    //0-> totally dry 1->water
    UPROPERTY(BlueprintReadOnly)
    float Final_MoistureValue{ 0.f };
    
    //used for setting the environment moisture, influenced by river, geo  when such environment changes , this value will be reconfigured
    void OverrideOuterMoisture(float inMoisture);
private:
    float OuterWolrdMoistureValue{ 0.2f };
    float LastDominant_MoistHolder_RemainingTime{ 0.f };
    float LastDominant_MoistHolder_RealMoist{ 0.f };
    //WorldSettings should be used for such purposes
    float MoistureChangeSpeedScale{ 1.0f };


    void SelfIgnite_AndAroundItems();

    void SpawnTemperatureEffectAttached(const FSoftObjectPath& inEffectPath);

    void LoadEffectResource(const FSoftObjectPath& inEffectPath);
    void OnEffectLoaded(FSoftObjectPath inEffectPath);

    
    TWeakObjectPtr<UParticleSystem> EffectResource{nullptr};
  
    class UParticleSystemComponent* SpawnedEffectCompo{nullptr};
//Moisture data and functions End -------------------------------------------------------------------------------------------------------------------->





    FDIY_TemperatureAndMoistureAttr copy_TemperatureAndMoistureAttr;



};