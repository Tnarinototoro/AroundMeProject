#include "DIY_CameraManager.h"

void UDIY_CameraManager::Initialize(FSubsystemCollectionBase &Collection)
{
    Super::Initialize(Collection);
}

void UDIY_CameraManager::Deinitialize()
{
    Super::Deinitialize();
}

UDIY_CameraManager *UDIY_CameraManager::Get(const UObject *WorldContextObject)
{
    if (!WorldContextObject) return nullptr;
    UWorld* World = WorldContextObject->GetWorld();
    return World ? World->GetSubsystem<UDIY_CameraManager>() : nullptr;
}

void UDIY_CameraManager::AddCameraEntry(const FDIY_CameraEntry &Entry)
{
    if(nullptr!=FindCameraEntry(Entry.CameraName))
    {
        ensureAlwaysMsgf(false,TEXT("Camera Entry %s Already Exists, Basically we do not allow for identical cam names"),*Entry.CameraName.ToString());
    }
    CameraEntries.Add(Entry.CameraName,Entry);
}

int32 UDIY_CameraManager::RemoveCameraEntry(const FName &CamName)
{
    if(nullptr==FindCameraEntry(CamName))
    {
        return 0;
        
    }
    return CameraEntries.Remove(CamName);
}

const FDIY_CameraEntry *UDIY_CameraManager::FindCameraEntry(const FName &CamName)
{
    if(CameraEntries.IsEmpty())
    {
        return nullptr;
    }
    
    return CameraEntries.Find(CamName);
}
