#include "DIY_CapController.h"
#include "Components/SkeletalMeshComponent.h"


UDIY_CapController::UDIY_CapController()
{
    PrimaryComponentTick.bCanEverTick = true;
    

}

void UDIY_CapController::BeginPlay()
{
    Super::BeginPlay();
}

void UDIY_CapController::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
    Super::TickComponent(DeltaTime,TickType,ThisTickFunction);

    
}


void UDIY_CapController::UpdateCapStateMachine(float inDeltatime)
{
     switch (mCurrentState)
    {
        case EDIY_CapState_Type::Idle:
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

void UDIY_CapController::SwitchToNextState(EDIY_CapState_Type inNextState)
{
    if(inNextState==mCurrentState)
    return;

    mCurrentState=inNextState;
    mEnteredNewStateSign=true;
    mCurrentStateElapsedTime=0.f;
}
