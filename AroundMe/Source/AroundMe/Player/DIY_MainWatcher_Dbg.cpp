#include "DIY_MainWatcher_Dbg.h"
#include "AroundMe/Player/Camera/DIY_CameraManager.h"

void ADIY_MainWatcher_Dbg::BeginPlay()
{
    Super::BeginPlay();

     DbgWatcherCameraEntry.CameraActor = this;

    if(UDIY_CameraManager* CM=UDIY_CameraManager::Get(this))
    {
        ensureAlwaysMsgf(DbgWatcherCameraEntry.CameraActor.IsValid(),TEXT("Camera Entry Failed with empty camera actor with name %s"),*DbgWatcherCameraEntry.CameraName.ToString());
        CM->AddCameraEntry(DbgWatcherCameraEntry);
        // if(!CM->OnCameraInUseChanged.IsAlreadyBound(this,&ADIY_CameraBase::OnCameraInUseChanged))
        // {
        //     CM->OnCameraInUseChanged.AddDynamic(this,&ADIY_CameraBase::OnCameraInUseChanged);
        // }
        
    }
}

void ADIY_MainWatcher_Dbg::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    if (UDIY_CameraManager* CM = UDIY_CameraManager::Get(this))
    {
        CM->RemoveCameraEntry(DbgWatcherCameraEntry.CameraName);
    }

    Super::EndPlay(EndPlayReason);
}

void ADIY_MainWatcher_Dbg::Destroyed()
{
    if (UDIY_CameraManager* CM = UDIY_CameraManager::Get(this))
    {
        CM->RemoveCameraEntry(DbgWatcherCameraEntry.CameraName);
    }

    Super::Destroyed();
}
