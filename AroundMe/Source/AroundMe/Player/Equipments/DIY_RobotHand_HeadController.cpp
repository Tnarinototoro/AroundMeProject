#include "DIY_RobotHand_HeadController.h"
#include "Components/SkeletalMeshComponent.h"
#include "DIY_EquipmentCommonLib.h"

UDIY_RobotHand_HeadController::UDIY_RobotHand_HeadController()
{
    PrimaryComponentTick.bCanEverTick = true;
    
}


void UDIY_RobotHand_HeadController::BeginPlay()
{
}

void UDIY_RobotHand_HeadController::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType,ThisTickFunction);
    if(nullptr!=mEquipMentMesh)
    {
        USkeletalMeshComponent* parent_skm=Cast<USkeletalMeshComponent>(mEquipMentMesh->GetAttachParent());
        
        if(nullptr!=parent_skm)
        {
            
            FTransform parent_hand_head_connection_point= parent_skm->GetBoneTransform("armm_l_02");
            
            FVector real_forward_vec=-parent_hand_head_connection_point.GetRotation().GetForwardVector();
            
            DrawDebugDirectionalArrow(
                GetWorld(),parent_hand_head_connection_point.GetLocation(),
            parent_hand_head_connection_point.GetLocation()+real_forward_vec*200.f,10.0f,FColor::Red,false,0.f,0,1.0f);

            mEquipMentMesh->SetWorldRotation(FRotationMatrix::MakeFromX(real_forward_vec).Rotator());
            
        }
    }
    
}

void UDIY_RobotHand_HeadController::UpdateHandHeadStateMachine(float inDeltatime)
{
    switch (mCurrentState)
    {
        case EDIY_RobotHand_Head_State_Type::Idle:
        {

            if(mEnteredNewStateSign)
            {

                
                mEnteredNewStateSign=false;

                
            }


            break;
        }
         case EDIY_RobotHand_Head_State_Type::Turning_On:
        {


            if(mEnteredNewStateSign)
            {

                
                mEnteredNewStateSign=false;
            }

            break;
        }
         case EDIY_RobotHand_Head_State_Type::Running:
        {

            if(mEnteredNewStateSign)
            {

                
                mEnteredNewStateSign=false;
            }



            break;
        }
         case EDIY_RobotHand_Head_State_Type::Turning_Off:
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

void UDIY_RobotHand_HeadController::SwitchToNextState(EDIY_RobotHand_Head_State_Type inNextState)
{
    if(inNextState==mCurrentState)
    return;

    mCurrentState=inNextState;
    mEnteredNewStateSign=true;
    mCurrentStateElapsedTime=0.f;
}
