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
    Final_MoistureValue = OuterWolrdMoistureValue = 0.2f;


   
    // / target_moist= (moist_value_weather(moist_value_weather_geo));
   



    Final_TemperatureValue = OuterWolrdTemperatureValue = 26.0f;

    //need to get weathre temperature from world
}

void UDIY_TemperatureProcessor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    UpdateParams(DeltaTime);

    
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

void UDIY_TemperatureProcessor::AddInstantTemperatureChange(float inChange)
{
    Final_TemperatureValue += inChange;
    Final_TemperatureValue=FMath::Clamp(Final_TemperatureValue, -200.f, 5000.0f);
}

void UDIY_TemperatureProcessor::OverrideOuterTemperature(float inTemperature)
{
   
    OuterWolrdTemperatureValue = (FMath::Clamp(inTemperature, -200, 5000.f)+ OuterWolrdTemperatureValue)/2.0f;

}

void UDIY_TemperatureProcessor::AddEndurateTemperatureHolder(ETemperatureHolderType inHolderType, float inEndurateTime, float inLastingTemperature)
{
    if (LastDominant_TemperatureHolder_RemainingTime <= 0.f)
    {
        LastDominant_TemperatureHolder_Type = inHolderType;
        LastDominant_TemperatureHolder_RemainingTime = inEndurateTime;
        LastDominant_TemperatureHolder_RealTemperature = inLastingTemperature;

        return;
    }

    LastDominant_TemperatureHolder_Type = inHolderType;
    LastDominant_TemperatureHolder_RemainingTime = inEndurateTime + LastDominant_TemperatureHolder_RemainingTime;
    LastDominant_TemperatureHolder_RealTemperature = (inLastingTemperature + LastDominant_TemperatureHolder_RealTemperature) / 2.0f;
    
}



void UDIY_TemperatureProcessor::UpdateParams(float inDeltaTime)
{

    




    //moisture updates
    {
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
                Final_TemperatureValue = OuterWolrdTemperatureValue = 26.0f;
                //reset to the weather temperature
            }
        }

        

        Final_TemperatureValue=FMath::FInterpTo<float>(Final_TemperatureValue, OuterWolrdTemperatureValue, inDeltaTime, Final_MoistureValue * TemperatureChangeSpeedScale);



        if (Final_TemperatureValue >= copy_TemperatureAndMoistureAttr.self_combustible_temperature)
        {

        }
        else if (Final_TemperatureValue >= copy_TemperatureAndMoistureAttr.self_thaw_temparature)
        {

        }
        else if (Final_TemperatureValue <= copy_TemperatureAndMoistureAttr.self_frozen_temperature)
        {
           
        }
        else
        {

        }
    }


}

