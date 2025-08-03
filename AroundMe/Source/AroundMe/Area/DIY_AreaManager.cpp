// All rights reserved to ShadowCandle Studio

#include "DIY_AreaManager.h"


#include "../GameUtilities/Logs/DIY_LogHelper.h"
#include "../GameUtilities/DIY_Utilities.h"

ADIY_AreaManager *ADIY_AreaManager::ManagerInstance = nullptr;

ADIY_AreaManager::ADIY_AreaManager()
{

    PrimaryActorTick.bCanEverTick = false;

}

ADIY_AreaManager::~ADIY_AreaManager()
{
}

void ADIY_AreaManager::BeginPlay()
{
    if (ADIY_AreaManager::ManagerInstance == nullptr || ADIY_AreaManager::ManagerInstance != this)
    {
        ADIY_AreaManager::ManagerInstance = this;
        UDIY_Utilities::DIY_PrintLogToScreen(1.0f, FString{"AreaManager Instance Created!"});
    }
    else
    {
        UDIY_Utilities::DIY_PrintLogToScreen(1.0f, FString{"AreaManager Instance Failed Creating!"}, FColor::Red);
    }

   
}

void ADIY_AreaManager::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    ADIY_AreaManager::ManagerInstance = nullptr;
    mAreaAnchors.Empty();
}

void ADIY_AreaManager::BeforeSwitchArea_Implementation(EDIY_Area inNextAreaID)
{
    FString debug_info=FString::Printf(TEXT("Switching ^..^ to NextAreaID: %s \n"),
                                    *UEnum::GetValueAsString(inNextAreaID));

    UDIY_Utilities::DIY_PrintLogToScreen(3.0f, debug_info);
}

void ADIY_AreaManager::AfterSwitchArea_Implementation(EDIY_Area inNextAreaID)
{
    FString debug_info=FString::Printf(TEXT("Already Switched :))to NextAreaID: %s \n"),
                                    *UEnum::GetValueAsString(inNextAreaID));

    UDIY_Utilities::DIY_PrintLogToScreen(3.0f, debug_info);
}

void ADIY_AreaManager::Tick(float indelta)
{
    Super::Tick(indelta);
}

void ADIY_AreaManager::RegisterArea(EDIY_Area inAreaID, AActor *inAreaAncor)
{
    if(mAreaAnchors.Num()!=(int32)EDIY_Area::Area_Count)
    {
        mAreaAnchors.Init(nullptr,(int32)EDIY_Area::Area_Count);
    }

    checkf(mAreaAnchors.Num()==(int32)EDIY_Area::Area_Count,TEXT("AreaManager::RegisterArea() mAreaAnchors.Num()!=EDIY_Area::Area_Count"));
    checkf(nullptr!=inAreaAncor,TEXT("AreaManager::RegisterArea() nullptr!=inAreaAncor"));

    if(mAreaAnchors[(int32)inAreaID]==nullptr)
    {
        mAreaAnchors[(int32)inAreaID] = inAreaAncor;
        EASY_LOG_MAINPLAYER("AreaManager::RegisterArea() %d", inAreaID);

    }
    else
    {
        ensureAlwaysMsgf(false,TEXT("AreaManager::RegisterArea() %d already registered with actor %s"),inAreaID,*mAreaAnchors[(int32)inAreaID]->GetName());

    }
   
}

void ADIY_AreaManager::UnregisterArea(EDIY_Area inAreaID)
{
    checkf(mAreaAnchors.Num()==(int32)EDIY_Area::Area_Count,TEXT("AreaManager::RegisterArea() mAreaAnchors.Num()!=EDIY_Area::Area_Count"));
    if(mAreaAnchors[(int32)inAreaID]!=nullptr)
    {
        mAreaAnchors[(int32)inAreaID] = nullptr;
        EASY_LOG_MAINPLAYER("AreaManager::UnregisterArea() %d", inAreaID);

    }
    else
    {
        ensureAlwaysMsgf(false,TEXT("AreaManager::UnregisterArea() %d already unregistered"),inAreaID);
    }
}

const AActor *ADIY_AreaManager::GetAreaAnchor(EDIY_Area inAreaID) const
{
    if(inAreaID==EDIY_Area::Area_Count)
    {
        return nullptr;
    }
    
    return mAreaAnchors[(int32)inAreaID];
}

void ADIY_AreaManager::SwitchToNextArea(EDIY_Area inNextAreaID)
{
    if(inNextAreaID==EDIY_Area::Area_Count)
    {
        return;
    }

   BeforeSwitchArea(inNextAreaID);

   CurrentAreaID = inNextAreaID;


   AfterSwitchArea(inNextAreaID);

}

EDIY_Area ADIY_AreaManager::GetCurrentArea() const
{

   return CurrentAreaID;

}

ADIY_AreaManager *ADIY_AreaManager::GetManager()
{
    return ManagerInstance;
}

