#include "DIY_MainPlayerActionController.h"

UDIY_MainPlayerActionController::UDIY_MainPlayerActionController()
{
     
    PrimaryComponentTick.bCanEverTick = true;

    
}

void UDIY_MainPlayerActionController::BeginPlay()
{
    Super::BeginPlay();
}

void UDIY_MainPlayerActionController::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}



void UDIY_MainPlayerActionController::ProcessJumpInput()
{
    
}
