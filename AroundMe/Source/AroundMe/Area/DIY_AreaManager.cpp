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
}

void ADIY_AreaManager::Tick(float indelta)
{
    Super::Tick(indelta);
}



ADIY_AreaManager *ADIY_AreaManager::GetManager()
{
    return ManagerInstance;
}

