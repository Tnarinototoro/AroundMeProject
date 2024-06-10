#include "DIY_TemperatureProcessor.h"
#include "../Items/DIY_ItemDefines.h"

UDIY_TemperatureProcessor::UDIY_TemperatureProcessor()
{
   
    PrimaryComponentTick.bCanEverTick = true;



}

void UDIY_TemperatureProcessor::OnInitWithConfigCopy(const FDIY_ItemDefualtConfig* inConfig)
{
    copy_TemperatureAndMoistureAttr = inConfig->PossibleTempAndMoistConfig;
}


void UDIY_TemperatureProcessor::BeginPlay()
{
    Super::BeginPlay();


    //@Todo get init weater moisture
    Final_MoistureValue = OuterWolrdMoistureValue = 0.3f;


   
    // / target_moist= (moist_value_weather(moist_value_weather_geo));
   



    Final_TemperatureValue = OuterWolrdTemperatureValue = 26.0f;

    //need to get weathre temperature from world
}

void UDIY_TemperatureProcessor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    UpdateParams(DeltaTime);
    UpdateStateMachine(DeltaTime);
    
}

void UDIY_TemperatureProcessor::OverrideOuterMoisture(float inMoisture)
{
    
    OuterWolrdMoistureValue = FMath::Max(OuterWolrdMoistureValue, FMath::Clamp(inMoisture,0.0f,1.0f));
}

void UDIY_TemperatureProcessor::AddInstantMoistureChange(float inChange)
{
    Final_MoistureValue += FMath::Clamp(inChange,-1.0f,1.0f);
    Final_MoistureValue = FMath::Clamp(Final_MoistureValue, 0.f, 1.0f);
}

void UDIY_TemperatureProcessor::AddEndurateMoistureHolder(float inDuration, float inMoisture)
{
    if (LastDominant_MoistHolder_RemainingTime <= 0.f)
    {

        LastDominant_MoistHolder_RemainingTime = inDuration;
        LastDominant_MoistHolder_RealMoist = inMoisture;

        return;
    }


    if (inDuration > LastDominant_MoistHolder_RemainingTime&&inMoisture>Final_MoistureValue)
    {
        LastDominant_MoistHolder_RemainingTime = inDuration;
        LastDominant_MoistHolder_RealMoist = inMoisture;
    }
}

void UDIY_TemperatureProcessor::AddInstantTemperatureChange(float inChange)
{
    Final_TemperatureValue += inChange;
    Final_TemperatureValue=FMath::Clamp(Final_TemperatureValue, -200.f, 5000.0f);
}

void UDIY_TemperatureProcessor::SwitchToNextState(ETemperatureRelatedState inState)
{
    if (inState == CurrentState)
        return;
    CurrentState = inState;
    CurrentStateFirstTimeSign = true;
    CurrentStateElapedTime = 0.f;
}

void UDIY_TemperatureProcessor::OverrideOuterTemperature(float inTemperature)
{
   
    OuterWolrdTemperatureValue = (FMath::Clamp(inTemperature, -200, 5000.f)+ OuterWolrdTemperatureValue)/2.0f;

}

void UDIY_TemperatureProcessor::AddEndurateTemperatureHolder(float inEndurateTime, float inLastingTemperature)
{
    if (LastDominant_TemperatureHolder_RemainingTime <= 0.f)
    {
       
        LastDominant_TemperatureHolder_RemainingTime = inEndurateTime;
        LastDominant_TemperatureHolder_RealTemperature = inLastingTemperature;

        return;
    }


    if(inEndurateTime>LastDominant_TemperatureHolder_RemainingTime)
    {
        LastDominant_TemperatureHolder_RemainingTime = inEndurateTime;
        LastDominant_TemperatureHolder_RealTemperature = inLastingTemperature;
    }

    
}



void UDIY_TemperatureProcessor::UpdateParams(float inDeltaTime)
{

    




    //moisture updates
    {

        if (LastDominant_MoistHolder_RemainingTime > 0.f)
        {
            LastDominant_MoistHolder_RemainingTime -= inDeltaTime;
            OverrideOuterMoisture(LastDominant_MoistHolder_RealMoist);



            if (LastDominant_TemperatureHolder_RemainingTime <= 0.f)
            {
                OverrideOuterMoisture(0.3f);

                //reset to the weather temperature
            }
        }


        float clamped_temperature = FMath::Clamp<float>(Final_TemperatureValue, 0.0f, 5000.0f);

        //moisture_change_speed 0.0001->1.0
        float moisture_change_speed = (clamped_temperature - 0.0f) / (5000.0f - 0.0f);
        moisture_change_speed = 0.0002f + (1.0f - 0.0002f) * moisture_change_speed;

        Final_MoistureValue=FMath::FInterpTo<float>(Final_MoistureValue, OuterWolrdMoistureValue, inDeltaTime, moisture_change_speed* MoistureChangeSpeedScale);
        
        
    }


    //temerature updates
    {
        if (LastDominant_TemperatureHolder_RemainingTime > 0.f)
        {
            LastDominant_TemperatureHolder_RemainingTime -= inDeltaTime;
            OverrideOuterTemperature(LastDominant_TemperatureHolder_RealTemperature);



            if (LastDominant_TemperatureHolder_RemainingTime <= 0.f)
            {
                OverrideOuterTemperature(26.0f);
                
                //reset to the weather temperature
            }
        }

        

        Final_TemperatureValue=FMath::FInterpTo<float>(Final_TemperatureValue, OuterWolrdTemperatureValue, inDeltaTime, Final_MoistureValue * TemperatureChangeSpeedScale);






        
    }


}

void UDIY_TemperatureProcessor::UpdateStateMachine(float inDeltaTime)
{
    switch (CurrentState)
    {
    case ETemperatureRelatedState::TS_Normal:
        if (CurrentStateFirstTimeSign)
        {



            break;
        }

        if (Final_TemperatureValue >= copy_TemperatureAndMoistureAttr.self_combustible_temperature)
        {
            SwitchToNextState(ETemperatureRelatedState::TS_Burning);
            return;
        }

        if (Final_TemperatureValue <= copy_TemperatureAndMoistureAttr.self_frozen_temperature)
        {
            SwitchToNextState(ETemperatureRelatedState::TS_Frozen);
            return;
        }

        
        break;
    case ETemperatureRelatedState::TS_Burning:
        if (CurrentStateFirstTimeSign)
        {
            //@Todo Self Burning time
            if (CurrentStateElapedTime > 10.0f)
            {
                SwitchToNextState(ETemperatureRelatedState::TS_BurntOver);
                return;
            }

            break;
        }
        break;
    case ETemperatureRelatedState::TS_BurntOver:
        if (CurrentStateFirstTimeSign)
        {



            break;
        }
        break;
    case ETemperatureRelatedState::TS_Frozen:
        if (CurrentStateFirstTimeSign)
        {



            break;
        }

        if (Final_TemperatureValue >= copy_TemperatureAndMoistureAttr.self_thaw_temparature)
        {
            SwitchToNextState(ETemperatureRelatedState::TS_Normal);
            return;
        }

      

        break;
    case ETemperatureRelatedState::TS_Count:
        break;
    default:
        break;
    }

    CurrentStateFirstTimeSign = false;
    CurrentStateElapedTime += inDeltaTime;
}

