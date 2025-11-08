#include "DIY_CameraBase.h"
#include "DIY_CameraManager.h"

void ADIY_CameraBase::BeginPlay()
{
    Super::BeginPlay();

    CameraEntry.CameraActor = this;

    if(UDIY_CameraManager* CM=UDIY_CameraManager::Get(this))
    {
        ensureAlwaysMsgf(CameraEntry.CameraActor.IsValid(),TEXT("Camera Entry Failed with empty camera actor with name %s"),*CameraEntry.CameraName.ToString());
        UDIY_CameraManager::Get(this)->AddCameraEntry(CameraEntry);
    }
    

}

void ADIY_CameraBase::EndPlay(const EEndPlayReason::Type EndPlayReason)
{

     if(UDIY_CameraManager* CM=UDIY_CameraManager::Get(this))
     {
        CM->RemoveCameraEntry(CameraEntry.CameraName);
     }
    Super::EndPlay(EndPlayReason);

}

void ADIY_CameraBase::Destroyed()
{
    if(UDIY_CameraManager* CM=UDIY_CameraManager::Get(this))
    {
        CM->RemoveCameraEntry(CameraEntry.CameraName);
    }
    
    Super::Destroyed();
}



ADIY_CameraBase::ADIY_CameraBase()
{

}

ADIY_CameraBase::~ADIY_CameraBase()
{

}
