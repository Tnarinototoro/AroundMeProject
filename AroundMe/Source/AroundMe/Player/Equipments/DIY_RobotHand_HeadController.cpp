#include "DIY_RobotHand_HeadController.h"
#include "Components/SkeletalMeshComponent.h"
#include "DIY_EquipmentCommonLib.h"

UDIY_RobotHand_HeadController::UDIY_RobotHand_HeadController()
{
    PrimaryComponentTick.bCanEverTick = true;
}

void UDIY_RobotHand_HeadController::BeginPlay()
{
    SwitchToNextState(EDIY_RobotHand_Head_State_Type::Idle);
}

void UDIY_RobotHand_HeadController::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
    if (nullptr != mEquipMentMesh)
    {

        UpdateHandHeadStateMachine(DeltaTime);

        // actaully do updates here!
        UpdateParams(DeltaTime);
    }
}

void UDIY_RobotHand_HeadController::SetHeadSpinningSpeed(float inSpinSpeed)
{
    CurrentSpinSpeed = inSpinSpeed;
}

void UDIY_RobotHand_HeadController::SetHeadSpinningAngle_Directly(float inSpinAngle)
{
    CurrentSpinAngle = inSpinAngle;
}



void UDIY_RobotHand_HeadController::UpdateParams(float inDeltatime)
{
    // update head angles and spinning
    {
        USkeletalMeshComponent *parent_skm = Cast<USkeletalMeshComponent>(mEquipMentMesh->GetAttachParent());

        if (nullptr != parent_skm)
        {

            FTransform parent_hand_head_connection_point = parent_skm->GetBoneTransform("armm_l_02");

            FVector real_forward_vec = -parent_hand_head_connection_point.GetRotation().GetForwardVector();

            DrawDebugDirectionalArrow(
                GetWorld(), parent_hand_head_connection_point.GetLocation(),
                parent_hand_head_connection_point.GetLocation() + real_forward_vec * 200.f, 10.0f, FColor::Red, false, 0.f, 0, 1.0f);

            FRotator cur_rotate = mEquipMentMesh->GetRelativeRotationFromWorld(FRotationMatrix::MakeFromX(real_forward_vec).ToQuat()).Rotator();

            cur_rotate.Roll = CurrentSpinAngle;
            CurrentSpinAngle += CurrentSpinSpeed * inDeltatime;

            CurrentSpinAngle = FMath::Modulo(CurrentSpinAngle, 360.f);

            // you have to set relative rotation directly
            mEquipMentMesh->SetRelativeRotation(cur_rotate);

            DrawDebugSphere(GetWorld(), parent_hand_head_connection_point.GetLocation(), 10.f, 12, FColor::Red);
            DrawDebugString(GetWorld(), parent_hand_head_connection_point.GetLocation(), "RightDirBone", nullptr, FColor::Red, 0.f);
        }
    }

    switch (mCurrentState)
    {
    case EDIY_RobotHand_Head_State_Type::Idle:
    {

        break;
    }
    case EDIY_RobotHand_Head_State_Type::Turning_On:
    {

        break;
    }
    case EDIY_RobotHand_Head_State_Type::Running:
    {

        break;
    }
    }
}

void UDIY_RobotHand_HeadController::UpdateHandHeadStateMachine(float inDeltatime)
{

    FRotator cur_rotate = mEquipMentMesh->GetRelativeRotation();
    FString debug_str = FString::Printf(TEXT("%s"),
                                        *UEnum::GetValueAsString(mCurrentState), *cur_rotate.ToString());

    DrawDebugString(GetWorld(), this->mEquipMentMesh->GetComponentLocation(), debug_str, nullptr, FColor::Green, 0.f);
    switch (mCurrentState)
    {
    case EDIY_RobotHand_Head_State_Type::Idle:
    {

        if (mEnteredNewStateSign)
        {

            mEnteredNewStateSign = false;
        }

        break;
    }
    case EDIY_RobotHand_Head_State_Type::Turning_On:
    {

        if (mEnteredNewStateSign)
        {

            mEnteredNewStateSign = false;
        }

        break;
    }
    case EDIY_RobotHand_Head_State_Type::Running:
    {

        if (mEnteredNewStateSign)
        {

            mEnteredNewStateSign = false;
        }

        break;
    }
    case EDIY_RobotHand_Head_State_Type::Turning_Off:
    {

        if (mEnteredNewStateSign)
        {

            mEnteredNewStateSign = false;
        }
        break;
    }

    default:
        break;
    }

    mCurrentStateElapsedTime += inDeltatime;
}

void UDIY_RobotHand_HeadController::SwitchToNextState(EDIY_RobotHand_Head_State_Type inNextState)
{
    if (inNextState == mCurrentState)
        return;

    mCurrentState = inNextState;
    mEnteredNewStateSign = true;
    mCurrentStateElapsedTime = 0.f;
}
