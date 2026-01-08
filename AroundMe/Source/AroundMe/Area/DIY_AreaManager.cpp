// All rights reserved to ShadowCandle Studio

#include "DIY_AreaManager.h"

#include "../GameUtilities/Logs/DIY_LogHelper.h"
#include "../GameUtilities/DIY_Utilities.h"

void UDIY_AreaManager::BeforeSwitchArea_Implementation(EDIY_Area inNextAreaID)
{
    FString debug_info = FString::Printf(TEXT("Switching ^..^ to NextAreaID: %s \n"),
                                         *UEnum::GetValueAsString(inNextAreaID));

    UDIY_Utilities::DIY_PrintLogToScreen(3.0f, debug_info);
}

void UDIY_AreaManager::AfterSwitchArea_Implementation(EDIY_Area inNextAreaID)
{
    FString debug_info = FString::Printf(TEXT("Already Switched :))to NextAreaID: %s \n"),
                                         *UEnum::GetValueAsString(inNextAreaID));

    UDIY_Utilities::DIY_PrintLogToScreen(3.0f, debug_info);
}

void UDIY_AreaManager::RegisterEnvObjectWithTag(FGameplayTag IDTag, ADIY_EnvObjectBase *Obj)
{
    if (Obj)
    {
        // 如果 ID 冲突，这里可以再加一层报警
        EnvPool.Add(IDTag, Obj);
    }
}

void UDIY_AreaManager::UnregisterEnvObjectWithTag(FGameplayTag IDTag)
{
    EnvPool.Remove(IDTag);
}

ADIY_EnvObjectBase *UDIY_AreaManager::GetEnvObjectByID(FGameplayTag IDTag) const
{
    if (const TWeakObjectPtr<ADIY_EnvObjectBase> *FoundPtr = EnvPool.Find(IDTag))
    {
        return FoundPtr->Get(); // 如果对象已被销毁，Get() 会安全返回 nullptr
    }
    return nullptr;
}

void UDIY_AreaManager::Initialize(FSubsystemCollectionBase &Collection)
{
    Super::Initialize(Collection);
    AreaAnchors.Empty();
}

void UDIY_AreaManager::Deinitialize()
{
    Super::Deinitialize();
    AreaAnchors.Empty();
}

UDIY_AreaManager *UDIY_AreaManager::Get(const UObject *WorldContextObject)
{
    if (!WorldContextObject)
        return nullptr;
    UWorld *World = WorldContextObject->GetWorld();
    return World ? World->GetSubsystem<UDIY_AreaManager>() : nullptr;
}

void UDIY_AreaManager::RegisterArea(EDIY_Area inAreaID, AActor *inAreaAncor)
{
    if (AreaAnchors.Num() != (int32)EDIY_Area::Area_Count)
    {
        AreaAnchors.Init(nullptr, (int32)EDIY_Area::Area_Count);
    }

    checkf(AreaAnchors.Num() == (int32)EDIY_Area::Area_Count, TEXT("AreaManager::RegisterArea() AreaAnchors.Num()!=EDIY_Area::Area_Count"));
    checkf(nullptr != inAreaAncor, TEXT("AreaManager::RegisterArea() nullptr!=inAreaAncor"));

    if (AreaAnchors[(int32)inAreaID] == nullptr)
    {
        AreaAnchors[(int32)inAreaID] = inAreaAncor;
        EASY_LOG_MAINPLAYER("AreaManager::RegisterArea() %d", inAreaID);
    }
    else
    {
        ensureAlwaysMsgf(false, TEXT("AreaManager::RegisterArea() %d already registered with actor %s"), inAreaID, *AreaAnchors[(int32)inAreaID]->GetName());
    }
}

void UDIY_AreaManager::UnregisterArea(EDIY_Area inAreaID)
{
    checkf(AreaAnchors.Num() == (int32)EDIY_Area::Area_Count, TEXT("AreaManager::RegisterArea() AreaAnchors.Num()!=EDIY_Area::Area_Count"));
    if (AreaAnchors[(int32)inAreaID] != nullptr)
    {
        AreaAnchors[(int32)inAreaID] = nullptr;
        EASY_LOG_MAINPLAYER("AreaManager::UnregisterArea() %d", inAreaID);
    }
    else
    {
        ensureAlwaysMsgf(false, TEXT("AreaManager::UnregisterArea() %d already unregistered"), inAreaID);
    }
}

const AActor *UDIY_AreaManager::GetAreaAnchor(EDIY_Area inAreaID) const
{
    if (inAreaID == EDIY_Area::Area_Count)
    {
        return nullptr;
    }

    return AreaAnchors[(int32)inAreaID].Get();
}

void UDIY_AreaManager::SwitchToNextArea(EDIY_Area inNextAreaID)
{
    if (inNextAreaID == EDIY_Area::Area_Count)
    {
        return;
    }

    BeforeSwitchArea(inNextAreaID);

    CurrentAreaID = inNextAreaID;

    AfterSwitchArea(inNextAreaID);
}
