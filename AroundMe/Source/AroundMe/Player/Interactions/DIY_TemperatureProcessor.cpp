#include "DIY_TemperatureProcessor.h"


UDIY_TemperatureProcessor::UDIY_TemperatureProcessor()
{
   
    PrimaryComponentTick.bCanEverTick = true;



}


void UDIY_TemperatureProcessor::BeginPlay()
{
    Super::BeginPlay();

   
}

// 每帧调用
void UDIY_TemperatureProcessor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);


    
}

