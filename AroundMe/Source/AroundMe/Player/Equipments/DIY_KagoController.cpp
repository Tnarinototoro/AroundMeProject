#include "DIY_KagoController.h"
#include "Components/SkeletalMeshComponent.h"
#if UE_BUILD_DEVELOPMENT || UE_BUILD_DEBUG
#include "AroundMe/Debug/DIY_GlobalDebugSettings.h"
#endif

UDIY_KagoController::UDIY_KagoController()
{
    PrimaryComponentTick.bCanEverTick = true;
    HandHead_Releasing_Point = CreateDefaultSubobject<USceneComponent>(TEXT("HandHead_Releasing_Point"));

    ensureMsgf(mEquipMentMesh != nullptr, TEXT("mEquipMentMesh shall never be null"));
    HandHead_Releasing_Point->SetupAttachment(mEquipMentMesh);
    HandHead_Releasing_Point->SetRelativeLocation({0.f, 0.f, 0.f});
}

void UDIY_KagoController::BeginPlay()
{
    Super::BeginPlay();
}

void UDIY_KagoController::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
#if UE_BUILD_DEVELOPMENT || UE_BUILD_DEBUG
    if (FDIY_GlobalDebugSettings::sInstance.equipment.bShowKagoDebugInfo)
    {
        DrawDebugSphere(GetWorld(), HandHead_Releasing_Point->GetComponentLocation(), 10.f, 12, FColor::Green);
    }

#endif
}

void UDIY_KagoController::UpdateKagoStateMachine(float inDeltatime)
{
    switch (mCurrentState)
    {
    case EDIY_KagoState_Type::Idle:
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

void UDIY_KagoController::SwitchToNextState(EDIY_KagoState_Type inNextState)
{
    if (inNextState == mCurrentState)
        return;

    mCurrentState = inNextState;
    mEnteredNewStateSign = true;
    mCurrentStateElapsedTime = 0.f;
}
