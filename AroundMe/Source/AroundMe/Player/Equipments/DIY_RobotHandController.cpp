#include "DIY_RobotHandController.h"
#include "Components/SkeletalMeshComponent.h"


UDIY_RobotHandController::UDIY_RobotHandController()
{
     PrimaryComponentTick.bCanEverTick = true;

     Target_Hook=CreateDefaultSubobject<USceneComponent>(TEXT("Target_Hook"));
     
     
     

   
}

void UDIY_RobotHandController::BeginPlay()
{
}

void UDIY_RobotHandController::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
    Super::TickComponent(DeltaTime,TickType,ThisTickFunction);

    if(nullptr!=mEquipMentMesh&&nullptr!=mEquipMentMesh->GetSkeletalMeshAsset())
    {
        FVector HandEndLocation=GetHandEndWolrdLocation();

        DrawDebugSphere(GetWorld(),HandEndLocation,10.f,12,FColor::Green);

        DrawDebugString(GetWorld(),HandEndLocation,FString(TEXT("HandEnd")),nullptr,FColor::Red,0.f);


        UpdateHandHeadStateMachine(DeltaTime);
    }
}

inline FVector UDIY_RobotHandController::GetHandEndWolrdLocation() const
{
    return  mEquipMentMesh->GetBoneTransform("armhead_l_00").GetLocation();
}

void UDIY_RobotHandController::RequestPickUpTask(AActor *inTargetItem)
{
    //check null
    if(nullptr==inTargetItem)
    {
        return;
    }

    //already in working state
    if(mCurrentState!=EDIY_RobotHand_State_Type::Idle)
    {
        return;
    }

    //Already have a target item
    if(nullptr!=mCurrentTargetPickUpItem)
    {
        return;
    }

    

    //check if the target item is pending kill
    if(inTargetItem->IsPendingKillPending())
    {
       
        ensureMsgf(false,TEXT("Target Item is pending kill"));
        
        return;

    }

    if(inTargetItem->IsActorBeingDestroyed())
    {

        ensureMsgf(false,TEXT("Target Item is being destroyed"));
        
        return;

    }


    mCurrentTargetPickUpItem=inTargetItem;

    SwitchToNextState(EDIY_RobotHand_State_Type::Moving_ToTargetPoint);


}

void UDIY_RobotHandController::UpdateHandHeadStateMachine(float inDeltatime)
{
    FString debug_str=FString::Printf(TEXT("State: %s"),
                               *UEnum::GetValueAsString(mCurrentState));
    
    DrawDebugString(GetWorld(),this->mEquipMentMesh->GetComponentLocation(),debug_str,nullptr,FColor::Red,0.f);
     switch (mCurrentState)
    {
        case EDIY_RobotHand_State_Type::Idle:
        {

            if(mEnteredNewStateSign)
            {

                
                mEnteredNewStateSign=false;
                break;
                
            }


            break;
        }
         case EDIY_RobotHand_State_Type::Moving_ToTargetPoint:
        {


            if(mEnteredNewStateSign)
            {
                
                
                mEnteredNewStateSign=false;
                break;
            }


            if (mCurrentStateElapsedTime>PickUpItem_MaxMovingToTarge_TryingTime)
            {
                SwitchToNextState(EDIY_RobotHand_State_Type::MovingBack);
                mCurrentTargetPickUpItem=nullptr;
                break;
            }

            //process movement
            {
                FVector TargetPointLocation=mCurrentTargetPickUpItem->GetActorLocation();
                FVector CurrentTargetHookPoint=Target_Hook->GetComponentLocation();
                FVector CurrentHandEndLocation=GetHandEndWolrdLocation();

                if (FVector::Distance(CurrentHandEndLocation,TargetPointLocation)<=PickUpTask_TargetCloseEnoughDistance)
                {
                    //close enough
                    SwitchToNextState(EDIY_RobotHand_State_Type::At_TargetPoint);
                    break;
                }

                FVector cur_calculated_pos= FMath::VInterpTo(CurrentTargetHookPoint,TargetPointLocation,inDeltatime,PickUpTask_MoveToTargetPointSpeed);
                Target_Hook->SetWorldLocation(cur_calculated_pos);
                DrawDebugSphere(GetWorld(),cur_calculated_pos,10.f,12,FColor::Green);

               
            }
            


            break;
        }
         case EDIY_RobotHand_State_Type::At_TargetPoint:
        {

            if(mEnteredNewStateSign)
            {

                
                mEnteredNewStateSign=false;
                break;
            }



            break;
        }
         case EDIY_RobotHand_State_Type::MovingBack:
        {
            
            if(mEnteredNewStateSign)
            {

                
                mEnteredNewStateSign=false;
                break;
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
