// All rights reserved to ShadowCandle Studio

#include "DIY_FaceController.h"
#include "Components/SkeletalMeshComponent.h"

UDIY_FaceController::UDIY_FaceController()
{
    PrimaryComponentTick.bCanEverTick = true;

    mEquipIndex = EEquipmentsIndex::Face;
}

void UDIY_FaceController::BeginPlay()
{
    Super::BeginPlay();
}

void UDIY_FaceController::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
    UpdateFaceStateMachine(DeltaTime);
}

void UDIY_FaceController::UpdateFaceStateMachine(float inDeltatime)
{
    switch (mCurrentFaceType)
    {
    case EDIY_FaceType::Default:
    {

        if (mEnteredNewFaceTypeSign)
        {

            mEnteredNewFaceTypeSign = false;
        }

        break;
    }
    case EDIY_FaceType::Speechless:
    {
        if (mEnteredNewFaceTypeSign)
        {

            mEnteredNewFaceTypeSign = false;
        }
        if (mCurrentFaceTypeElapsedTime > 3.f)
        {
            if (OnWeaponSelfChangeModelTypeRequest.IsBound())
            {

                OnWeaponSelfChangeModelTypeRequest.ExecuteIfBound(EEquipmentsIndex::Face, (int)EDIY_FaceType::Default, true);
            }
        }
        break;
    }
    default:
        break;
    }

    mCurrentFaceTypeElapsedTime += inDeltatime;
}

void UDIY_FaceController::RequestSwitchToNextFaceType(EDIY_FaceType inNextType)
{
    if (inNextType == mCurrentFaceType)
        return;

    mCurrentFaceType = inNextType;
    mEnteredNewFaceTypeSign = true;
    mCurrentFaceTypeElapsedTime = 0.f;
}
void UDIY_FaceController::OnModelTypeChanged(uint32 lastModelType, uint32 newModelType)
{
    Super::OnModelTypeChanged(lastModelType, newModelType);
    RequestSwitchToNextFaceType((EDIY_FaceType)newModelType);
}