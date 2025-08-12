#include "DIY_RobotHandController.h"
#include "Components/SkeletalMeshComponent.h"
#include "../../GameUtilities/Logs/DIY_LogHelper.h"
#include "../Actions/DIY_MainPlayerActionController.h"
#include "DIY_EquipmentManager.h"
#include "DIY_RobotHand_HeadController.h"
UDIY_RobotHandController::UDIY_RobotHandController()
{
    PrimaryComponentTick.bCanEverTick = true;

    Target_Hook = CreateDefaultSubobject<USceneComponent>(TEXT("Target_Hook"));
}

void UDIY_RobotHandController::BeginPlay()
{
}

void UDIY_RobotHandController::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    if (nullptr != mEquipMentMesh && nullptr != mEquipMentMesh->GetSkeletalMeshAsset())
    {
        FVector HandEndLocation = GetHandEndWolrdLocation();

        DrawDebugSphere(GetWorld(), HandEndLocation, 10.f, 12, FColor::Green);

        DrawDebugString(GetWorld(), HandEndLocation, FString(TEXT("HandEnd")), nullptr, FColor::Red, 0.f);

        UpdateHandHeadStateMachine(DeltaTime);
    }
}

FVector UDIY_RobotHandController::GetHandEndWolrdLocation() const
{
    return mEquipMentMesh->GetBoneTransform("armhead_l_00").GetLocation();
}

EDIY_RobotHand_State_Type UDIY_RobotHandController::GetCurrentState() const
{
    return mCurrentState;
}

bool UDIY_RobotHandController::RequestPickUpTask(AActor *inTargetItem)
{
    // check null
    if (nullptr == inTargetItem)
    {
        return false;
    }

    // already in working state
    if (mCurrentState != EDIY_RobotHand_State_Type::Idle)
    {
        return false;
    }

    // Already have a target item
    if (nullptr != mCurrentTargetPickUpItem)
    {
        return false;
    }

    // check if the robot is holding an item
    if (nullptr != mCurrentPickedUpItem)
    {
        return false;
    }

    // check if the target item is pending kill
    if (inTargetItem->IsPendingKillPending())
    {

        ensureMsgf(false, TEXT("Target Item is pending kill"));

        return false;
    }

    if (inTargetItem->IsActorBeingDestroyed())
    {

        ensureMsgf(false, TEXT("Target Item is being destroyed"));

        return false;
    }

    UDIY_RobotHand_HeadController *HeadController = GetHeadController();

    // if not set properly do not accept this task
    if (nullptr == HeadController)
    {
        return false;
    }

    // only claw type allows for pick up task
    if (HeadController->GetEquipModelType() != (int32)EDIY_RobotHand_HeadType::Claw_Type)
    {
        return false;
    }

    mCurrentTargetPickUpItem = inTargetItem;

    SwitchToNextState(EDIY_RobotHand_State_Type::Moving_ToTargetPoint);
    return true;
}

bool UDIY_RobotHandController::RequestDrillTask(AActor *inTargetItem)
{

    // check null
    if (nullptr == inTargetItem)
    {
        return false;
    }

    // already in working state
    if (mCurrentState != EDIY_RobotHand_State_Type::Idle)
    {
        return false;
    }

    // Already have a drilling target item
    if (nullptr != mCurentBeingDrilledItem)
    {
        return false;
    }

    // check if the target item is pending kill
    if (inTargetItem->IsPendingKillPending())
    {

        ensureMsgf(false, TEXT("Target Item is pending kill"));

        return false;
    }

    if (inTargetItem->IsActorBeingDestroyed())
    {

        ensureMsgf(false, TEXT("Target Item is being destroyed"));

        return false;
    }

    UDIY_RobotHand_HeadController *HeadController = GetHeadController();

    // if not set properly do not accept this task
    if (nullptr == HeadController)
    {
        return false;
    }

    // only claw type allows for pick up task
    if (HeadController->GetEquipModelType() != (int32)EDIY_RobotHand_HeadType::Drill_Type)
    {
        return false;
    }

    mCurentBeingDrilledItem = inTargetItem;

    SwitchToNextState(EDIY_RobotHand_State_Type::Moving_ToDrillTargetObject);
    return true;
}

UDIY_RobotHand_HeadController *UDIY_RobotHandController::GetHeadController()
{
    if (this->ChildEquipments.IsEmpty())
    {
        return nullptr;
    }

    return Cast<UDIY_RobotHand_HeadController>(this->ChildEquipments[0]);
}

void UDIY_RobotHandController::UpdateHandHeadStateMachine(float inDeltatime)
{
    FString debug_str = FString::Printf(TEXT("State: %s"),
                                        *UEnum::GetValueAsString(mCurrentState));

    DrawDebugString(GetWorld(), this->mEquipMentMesh->GetComponentLocation(), debug_str, nullptr, FColor::Red, 0.f);
    UDIY_RobotHand_HeadController *HeadController = GetHeadController();

    if (nullptr == HeadController)
    {
        return;
    }

    switch (mCurrentState)
    {
    case EDIY_RobotHand_State_Type::Idle:
    {

        if (mEnteredNewStateSign)
        {

            mEnteredNewStateSign = false;
            break;
        }
        HeadController->SetHeadSpinningSpeed(90.f);

        break;
    }
    case EDIY_RobotHand_State_Type::Moving_ToTargetPoint:
    {

        if (mEnteredNewStateSign)
        {
            HeadController->SetHeadSpinningSpeed(0.f);
            mEnteredNewStateSign = false;

            break;
        }

        if (mCurrentStateElapsedTime > PickUpItem_MaxMovingToTarget_TryingTime)
        {
            SwitchToNextState(EDIY_RobotHand_State_Type::MovingBack);
            mCurrentTargetPickUpItem = nullptr;
            break;
        }

        // process movement
        {
            FVector TargetPointLocation = mCurrentTargetPickUpItem->GetActorLocation();
            FVector CurrentTargetHookPoint = Target_Hook->GetComponentLocation();
            FVector CurrentHandEndLocation = GetHandEndWolrdLocation();

            EASY_LOG_MAINPLAYER("FVector::Distance(CurrentHandEndLocation,TargetPointLocation) %f threshold %f", FVector::Distance(CurrentHandEndLocation, TargetPointLocation), PickUpTask_TargetCloseEnoughDistance);

            if (FVector::Distance(CurrentHandEndLocation, TargetPointLocation) <= PickUpTask_TargetCloseEnoughDistance)
            {
                // close enough
                SwitchToNextState(EDIY_RobotHand_State_Type::At_TargetPoint);
                break;
            }

            FVector cur_calculated_pos = FMath::VInterpTo(CurrentTargetHookPoint, TargetPointLocation, inDeltatime, PickUpTask_MoveToTargetPointSpeed);
            Target_Hook->SetWorldLocation(cur_calculated_pos);
            DrawDebugSphere(GetWorld(), cur_calculated_pos, 10.f, 12, FColor::Green);
        }

        break;
    }
    case EDIY_RobotHand_State_Type::At_TargetPoint:
    {

        if (mEnteredNewStateSign)
        {

            ensureMsgf(nullptr == mCurrentPickedUpItem && nullptr != mCurrentTargetPickUpItem, TEXT("Picked up item is null"));
            mEnteredNewStateSign = false;
            mCurrentPickedUpItem = mCurrentTargetPickUpItem;
            mCurrentTargetPickUpItem = nullptr;

            AcquireOwnerActorOwnedUDIY_MainPlayerActionController()->PickUpDetectedItem(mCurrentPickedUpItem, FName("armhead_l_00"), mEquipMentMesh);

            SwitchToNextState(EDIY_RobotHand_State_Type::Moving_ToDumpPoint);

            break;
        }

        break;
    }
    case EDIY_RobotHand_State_Type::Moving_ToDumpPoint:
    {

        if (mEnteredNewStateSign)
        {
            ensureMsgf(nullptr != mCurrentPickedUpItem && nullptr == mCurrentTargetPickUpItem, TEXT("Picked up item is null"));

            mEnteredNewStateSign = false;

            HeadController->SetHeadSpinningSpeed(0.f);
            break;
        }

        FVector TargetPointLocation = AcquireOwnerActorOwnedUDIY_EquipmentManager()->GetKagoRobotDumpItemPoint();
        FVector CurrentTargetHookPoint = Target_Hook->GetComponentLocation();
        FVector CurrentHandEndLocation = GetHandEndWolrdLocation();

        if (FVector::Distance(CurrentHandEndLocation, TargetPointLocation) <= PickUpTask_TargetCloseEnoughDistance)
        {
            SwitchToNextState(EDIY_RobotHand_State_Type::MovingBack);
            AcquireOwnerActorOwnedUDIY_MainPlayerActionController()->PlacePickedUpItem(false);
            mCurrentPickedUpItem = nullptr;
            break;
        }

        FVector cur_calculated_pos = FMath::VInterpTo(CurrentTargetHookPoint, TargetPointLocation, inDeltatime, PickUpTask_MoveToTargetPointSpeed);
        Target_Hook->SetWorldLocation(cur_calculated_pos);
        DrawDebugSphere(GetWorld(), cur_calculated_pos, 10.f, 12, FColor::Green);

        break;
    }
    case EDIY_RobotHand_State_Type::MovingBack:
    {

        if (mEnteredNewStateSign)
        {

            SwitchToNextState(EDIY_RobotHand_State_Type::Idle);
            mEnteredNewStateSign = false;
            break;
        }
        break;
    }
    // drill task
    case EDIY_RobotHand_State_Type::Moving_ToDrillTargetObject:
    {

        if (mEnteredNewStateSign)
        {

            SwitchToNextState(EDIY_RobotHand_State_Type::Idle);
            mEnteredNewStateSign = false;
            break;
        }

        break;
    }
    case EDIY_RobotHand_State_Type::At_DrillTargetObject:
    {

        if (mEnteredNewStateSign)
        {

            SwitchToNextState(EDIY_RobotHand_State_Type::Idle);
            mEnteredNewStateSign = false;
            break;
        }
        break;
    }

    default:
        break;
    }

    mCurrentStateElapsedTime += inDeltatime;
}

void UDIY_RobotHandController::SwitchToNextState(EDIY_RobotHand_State_Type inNextState)
{
    if (inNextState == mCurrentState)
        return;

    mCurrentState = inNextState;
    mEnteredNewStateSign = true;
    mCurrentStateElapsedTime = 0.f;
}
IMPL_GET_COMPONENT_HELPER_FOR_COMPONENT(UDIY_RobotHandController, UDIY_MainPlayerActionController)
IMPL_GET_COMPONENT_HELPER_FOR_COMPONENT(UDIY_RobotHandController, UDIY_EquipmentManager)
