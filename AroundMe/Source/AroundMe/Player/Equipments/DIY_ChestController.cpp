#include "DIY_ChestController.h"
#include "Components/SkeletalMeshComponent.h"


UDIY_ChestController::UDIY_ChestController()
{
    PrimaryComponentTick.bCanEverTick = true;
  

}

void UDIY_ChestController::BeginPlay()
{
    Super::BeginPlay();
}

void UDIY_ChestController::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
    Super::TickComponent(DeltaTime,TickType,ThisTickFunction);

    
}


void UDIY_ChestController::UpdateChestStateMachine(float inDeltatime)
{
     switch (mCurrentState)
    {
        case EDIY_ChestState_Type::Idle:
        {

            if(mEnteredNewStateSign)
            {


                mEnteredNewStateSign=false;  
            }


            break;
        }
    
    default:
        break;
    }




   mCurrentStateElapsedTime+=inDeltatime;
}

void UDIY_ChestController::SwitchToNextState(EDIY_ChestState_Type inNextState)
{
    if(inNextState==mCurrentState)
    return;

    mCurrentState=inNextState;
    mEnteredNewStateSign=true;
    mCurrentStateElapsedTime=0.f;
}
