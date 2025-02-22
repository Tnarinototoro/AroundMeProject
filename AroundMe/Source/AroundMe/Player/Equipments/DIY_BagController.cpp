// All rights reserved to ShadowCandle Studio

#include "DIY_BagController.h"
#include "Components/SkeletalMeshComponent.h"


UDIY_BagController::UDIY_BagController()
{
    PrimaryComponentTick.bCanEverTick = true;

   
   
    mEquipName=FName(TEXT("EquipBag"));
    mEquipIndex=EEquipmentsIndex::Bag;
    
    
    //defualt
    mEquipModelType=0;
}

void UDIY_BagController::BeginPlay()
{
}

void UDIY_BagController::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
}

void UDIY_BagController::UpdateHandHeadStateMachine(float inDeltatime)
{
         switch (mCurrentState)
    {
        case EDIY_BagState_Type::Idle:
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

void UDIY_BagController::SwitchToNextState(EDIY_BagState_Type inNextState)
{
     if(inNextState==mCurrentState)
    return;

    mCurrentState=inNextState;
    mEnteredNewStateSign=true;
    mCurrentStateElapsedTime=0.f;
}
