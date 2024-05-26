#include "DIY_SolidnessProcessor.h"


UDIY_SolidnessProcessor::UDIY_SolidnessProcessor()
{
   
    PrimaryComponentTick.bCanEverTick = false;



}


void UDIY_SolidnessProcessor::BeginPlay()
{
    Super::BeginPlay();

   
}

// 每帧调用
void UDIY_SolidnessProcessor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

  
}

