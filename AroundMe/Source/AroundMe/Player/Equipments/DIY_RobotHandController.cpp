#include "DIY_RobotHandController.h"
#include "Components/SkeletalMeshComponent.h"


UDIY_RobotHandController::UDIY_RobotHandController()
{
     PrimaryComponentTick.bCanEverTick = true;

     Target_Point=CreateDefaultSubobject<USceneComponent>(TEXT("Target_Point"));
     
     
     

   
}

void UDIY_RobotHandController::BeginPlay()
{
}

void UDIY_RobotHandController::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
    Super::TickComponent(DeltaTime,TickType,ThisTickFunction);

    if(nullptr!=mEquipMentMesh&&nullptr!=mEquipMentMesh->GetSkeletalMeshAsset())
    {

        DrawDebugSphere(GetWorld(),GetHandEndWolrdLocation(),10.f,12,FColor::Green);
    }
}

inline FVector UDIY_RobotHandController::GetHandEndWolrdLocation() const
{
    return  mEquipMentMesh->GetBoneTransform("armhead_l_00").GetLocation();
}

void UDIY_RobotHandController::UpdateHandHeadStateMachine(float inDeltatime)
{
     switch (mCurrentState)
    {
        case EDIY_RobotHand_State_Type::Idle:
        {

            if(mEnteredNewStateSign)
            {

                
                mEnteredNewStateSign=false;

                
            }


            break;
        }
         case EDIY_RobotHand_State_Type::Lerping_To_RunTask:
        {


            if(mEnteredNewStateSign)
            {

                
                mEnteredNewStateSign=false;
            }

            break;
        }
         case EDIY_RobotHand_State_Type::Running_Task:
        {

            if(mEnteredNewStateSign)
            {

                
                mEnteredNewStateSign=false;
            }



            break;
        }
         case EDIY_RobotHand_State_Type::Lerping_To_Idle:
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

void UDIY_RobotHandController::SwitchToNextState(EDIY_RobotHand_State_Type inNextState)
{
    if(inNextState==mCurrentState)
    return;

    mCurrentState=inNextState;
    mEnteredNewStateSign=true;
    mCurrentStateElapsedTime=0.f;
}
