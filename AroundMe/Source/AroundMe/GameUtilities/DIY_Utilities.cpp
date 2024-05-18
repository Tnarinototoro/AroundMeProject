// All rights reserved to ShadowCandle Studio


#include "AroundMe/GameUtilities/DIY_Utilities.h"




bool UDIY_Utilities::bShouldLogToGameScreen = true;
ADIY_ItemManager* UDIY_Utilities::DIY_GetItemManagerInstance()
{

	return ADIY_ItemManager::GetManager();
}

void UDIY_Utilities::DIY_EnableLogging(bool bEnable)
{
	UDIY_Utilities::bShouldLogToGameScreen = bEnable;
}

bool UDIY_Utilities::DIY_IsLoggingEnabled()
{
	
	return UDIY_Utilities::bShouldLogToGameScreen;
}

void UDIY_Utilities::DIY_PrintLogToScreen(float TimeToDisplay, const FString& DebugMessage, FColor DisplayColor)
{
	if (nullptr != GEngine && UDIY_Utilities::bShouldLogToGameScreen)
	{
		GEngine->AddOnScreenDebugMessage(-1,TimeToDisplay,DisplayColor,DebugMessage);
	}
	
}


UDIY_Utilities::UDIY_Utilities()
{

}
