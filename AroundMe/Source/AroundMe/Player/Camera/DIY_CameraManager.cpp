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

int32 UDIY_CameraManager::RemoveCameraEntry(FName RemovedCamName)
{
    if (RemovedCamName.IsNone())
    {
        return 0;
    }

    // 1️⃣ 先移除自身
    const int32 RemovedCount = CameraEntries.Remove(RemovedCamName);
    if (RemovedCount == 0)
    {
        return RemovedCount;
    }

    // 2️⃣ 修复所有 Prev / Next 指向它的 Entry
    for (TPair<FName, FDIY_CameraEntry>& Pair : CameraEntries)
    {
        FDIY_CameraEntry& Entry = Pair.Value;

        if (Entry.PrevCameraName == RemovedCamName)
        {
            Entry.PrevCameraName = NAME_None;
        }

        if (Entry.NextCameraName == RemovedCamName)
        {
            Entry.NextCameraName = NAME_None;
        }
    }

    // 3️⃣ 如果当前激活的是它，也要兜底
    if (CurrentCameraEntry.CameraName == RemovedCamName)
    {
        CurrentCameraEntry.CameraName = NAME_None;
        CurrentCameraEntry.CameraActor = nullptr;
    }


    
    return RemovedCount;
}

void UDIY_CameraManager::SetCurrentInUseCameraEntry(FName CamName)
{
    CurrentCameraEntry.CameraName = CamName;
}

const FDIY_CameraEntry &UDIY_CameraManager::GetCurrentInUseCameraEntry() const
{
    return CurrentCameraEntry;
}

void UDIY_CameraManager::SimpleToggleCamera(bool NextOrPrevious)
{
    if (CameraEntries.Num() <= 0)
    {
        return;
    }

    if (CurrentCameraEntry.CameraName == NAME_None)
    {
        return;
    }

    if (CurrentCameraEntry.CameraActor == nullptr)
    {
        return;
    }

    if (NextOrPrevious)
    {
        SetCurrentInUseCameraEntry(CurrentCameraEntry.NextCameraName);
    }
    else
    {
        SetCurrentInUseCameraEntry(CurrentCameraEntry.PrevCameraName);
    }
}

const TMap<FName, FDIY_CameraEntry> &UDIY_CameraManager::GetAllCameraEntries() const
{
    return CameraEntries;
}

void UDIY_CameraManager::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    UpdateCameraEntries(DeltaTime);
}

FString UDIY_CameraManager::GetInfoString(const FDIY_CameraEntry &InEntry)
{
    const FString CamName =  InEntry.CameraName.ToString();
    const FString PrevName = InEntry.PrevCameraName.IsNone() ? TEXT("None") : InEntry.PrevCameraName.ToString();
    const FString NextName = InEntry.NextCameraName.IsNone() ? TEXT("None") : InEntry.NextCameraName.ToString();

    const FString CameActorName =
        InEntry.CameraActor.IsValid()
            ? InEntry.CameraActor->GetName()
            : TEXT("InvalidCam");

  

    return FString::Printf(
        TEXT("Camera[%s]  CamActor: %s Prev: %s  Next: %s "),
        *CamName,
        *CameActorName,
        *PrevName,
        *NextName);
}

void UDIY_CameraManager::UpdateCameraEntries(float DeltaTime)
{
    if (CurrentCameraEntry.CameraName == NAME_None)
    {
        return;
    }

    const FDIY_CameraEntry *FoundEntry = FindCameraEntry(CurrentCameraEntry.CameraName);
    if (nullptr == FoundEntry)
    {
        return;
    }

    if (FoundEntry->CameraActor.IsValid() &&
        CurrentCameraEntry.CameraActor.Get() != FoundEntry->CameraActor.Get())
    {
        CurrentCameraEntry.CamType = FoundEntry->CamType;
        CurrentCameraEntry.CameraActor = FoundEntry->CameraActor;
        CurrentCameraEntry.CameraLerpTime = FoundEntry->CameraLerpTime;
        CurrentCameraEntry.BlendExp = FoundEntry->BlendExp;
        CurrentCameraEntry.BlendFuncType = FoundEntry->BlendFuncType;
        CurrentCameraEntry.bLockOutgoing = FoundEntry->bLockOutgoing;
        CurrentCameraEntry.PrevCameraName = FoundEntry->PrevCameraName;
        CurrentCameraEntry.NextCameraName = FoundEntry->NextCameraName;
        APlayerController *PC = GetWorld()->GetFirstPlayerController();
        ensureAlwaysMsgf(PC, TEXT("Player Controller is Null"));
        PC->SetViewTargetWithBlend(
            CurrentCameraEntry.CameraActor.Get(),
            CurrentCameraEntry.CameraLerpTime,
            CurrentCameraEntry.BlendFuncType,
            CurrentCameraEntry.BlendExp,
            CurrentCameraEntry.bLockOutgoing);
        OnCameraInUseChanged.Broadcast(FoundEntry->CameraActor.Get());
    }
}

const FDIY_CameraEntry *UDIY_CameraManager::FindCameraEntry(FName CamName)
{
    if(CameraEntries.IsEmpty())
    {
        return nullptr;
    }
    
    return CameraEntries.Find(CamName);
}
