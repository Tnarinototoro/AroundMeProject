// All rights reserved to ShadowCandle Studio

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"

#include "DIY_Utilities.generated.h"

/**
 *
 */
UCLASS(Blueprintable)
class AROUNDME_API UDIY_Utilities : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()
public:
    // Get ItemManager static singleton
    UFUNCTION(BlueprintCallable, Category = "DIY_Utilities")
    static class ADIY_ItemManager *DIY_GetItemManagerInstance();

    // Get Area Manager static singleton
    UFUNCTION(BlueprintCallable, Category = "DIY_Utilities")
    static class ADIY_AreaManager *DIY_GetAreaManagerInstance();

    // Get Weather Manager static singleton
    UFUNCTION(BlueprintCallable, Category = "DIY_Utilities")
    static const class ADIY_WeatherManager *DIY_GetWeatherManagerInstance();
    // Function to enable or disable logging
    UFUNCTION(BlueprintCallable, Category = "DIY_Utilities")
    static void DIY_EnableLogging(bool bEnable);

    // Function to check if logging is enabled
    UFUNCTION(BlueprintCallable, Category = "DIY_Utilities")
    static bool DIY_IsLoggingEnabled();

    // Function to output a log message to the screen
    UFUNCTION(BlueprintCallable, Category = "DIY_Utilities")
    static void DIY_PrintLogToScreen(float TimeToDisplay, const FString &DebugMessage, FColor DisplayColor = FColor::Green);

    UDIY_Utilities();

private:
    // Static variable to control whether to log or not
    static bool bShouldLogToGameScreen;
};
