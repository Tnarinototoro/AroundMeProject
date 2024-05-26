#include "DIY_ConductivityProcessor.h"


UDIY_ConductivityProcessor::UDIY_ConductivityProcessor()
{
   
    PrimaryComponentTick.bCanEverTick = false;



}


void UDIY_ConductivityProcessor::BeginPlay()
{
    Super::BeginPlay();

   
}

// 每帧调用
void UDIY_ConductivityProcessor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

  
}

