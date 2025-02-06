#include "DIY_KagoController.h"
#include "Components/SkeletalMeshComponent.h"


UDIY_KagoController::UDIY_KagoController()
{
    PrimaryComponentTick.bCanEverTick = true;


}

void UDIY_KagoController::BeginPlay()
{

}

void UDIY_KagoController::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
    
}


void UDIY_KagoController::UpdateKagoStateMachine(float inDeltatime)
{
     switch (mCurrentState)
    {
        case EDIY_KagoState_Type::Idle:
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

void UDIY_KagoController::SwitchToNextState(EDIY_KagoState_Type inNextState)
{
    if(inNextState==mCurrentState)
    return;

    mCurrentState=inNextState;
    mEnteredNewStateSign=true;
    mCurrentStateElapsedTime=0.f;
}
