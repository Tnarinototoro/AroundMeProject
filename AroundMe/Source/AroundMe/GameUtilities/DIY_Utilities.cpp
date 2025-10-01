// All rights reserved to ShadowCandle Studio

#include "DIY_Utilities.h"

#include "../Player/Items/DIY_ItemManager.h"
#include "Weather/DIY_WeatherManager.h"
#include "../Area/DIY_AreaManager.h"

bool UDIY_Utilities::bShouldLogToGameScreen = true;
UDIY_ItemManagerSubsystem *UDIY_Utilities::DIY_GetItemManagerInstance(const UObject* WorldContextObject)
{

    if (!WorldContextObject) return nullptr;
    UWorld* World = GEngine->GetWorldFromContextObjectChecked(WorldContextObject);
    return UDIY_ItemManagerSubsystem::Get(World);
}
ADIY_AreaManager *UDIY_Utilities::DIY_GetAreaManagerInstance()
{

    return ADIY_AreaManager::GetManager();
}
const ADIY_WeatherManager *UDIY_Utilities::DIY_GetWeatherManagerInstance() 
{

    return ADIY_WeatherManager::GetWeatherManager();
}

void UDIY_Utilities::DIY_EnableLogging(bool bEnable)
{
    UDIY_Utilities::bShouldLogToGameScreen = bEnable;
}

bool UDIY_Utilities::DIY_IsLoggingEnabled()
{

    return UDIY_Utilities::bShouldLogToGameScreen;
}

void UDIY_Utilities::DIY_PrintLogToScreen(float TimeToDisplay, const FString &DebugMessage, FColor DisplayColor)
{
    if (nullptr != GEngine && UDIY_Utilities::bShouldLogToGameScreen)
    {
        GEngine->AddOnScreenDebugMessage(-1, TimeToDisplay, DisplayColor, DebugMessage);
    }
}

UDIY_Utilities::UDIY_Utilities()
{
}
