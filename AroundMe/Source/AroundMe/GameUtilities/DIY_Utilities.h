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
    UFUNCTION(BlueprintCallable, Category = "DIY_Utilities", meta = (WorldContext = "WorldContextObject"))
    static class UDIY_ItemManagerSubsystem *DIY_GetItemManagerInstance(const UObject *WorldContextObject);

    // Function to enable or disable logging
    UFUNCTION(BlueprintCallable, Category = "DIY_Utilities")
    static void DIY_EnableLogging(bool bEnable);

    // Function to check if logging is enabled
    UFUNCTION(BlueprintCallable, Category = "DIY_Utilities")
    static bool DIY_IsLoggingEnabled();

    // Function to output a log message to the screen
    UFUNCTION(BlueprintCallable, Category = "DIY_Utilities")
    static void DIY_PrintLogToScreen(float TimeToDisplay, const FString &DebugMessage, FColor DisplayColor = FColor::Green);

    UFUNCTION(BlueprintCallable, Category = "DIY_Utilitie|Navigation")
    static void ForceUpdateNavProxyInOctree(class AActor *inActor);

    UFUNCTION(BlueprintCallable, Category = "DIY_Utilitie|Navigation")
    static void ForceRebuildNavigation(class AActor *inActor);
    UDIY_Utilities();

    UFUNCTION(BlueprintCallable, Category = "DIY_Utility")
    static bool HasTagHelper(const FGameplayTagContainer &Container, FName TagName);

    UFUNCTION(BlueprintPure, Category = "DIY_Utility", meta = (DisplayName = "Make Simple Item ID"))
    static FPrimaryAssetId MakeSimpleItemID(FName ItemName)
    {
        // 统一使用我们在 AssetManager 中注册的 "Item" 类型
        return FPrimaryAssetId("Item", ItemName);
    }
    UFUNCTION(BlueprintPure, Category = "DIY_Utility", meta = (DisplayName = "Get Invalid Item ID"))
    static FPrimaryAssetId GetInvalidAssetID()
    {
        // 默认构造函数会创建一个 Type 和 Name 都为 None 的 ID
        // 这种 ID 的 IsValid() 结果永远为 false
        return FPrimaryAssetId();
    }

private:
    // Static variable to control whether to log or not
    static bool bShouldLogToGameScreen;
};
