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

    /**
     * 保持与蓝图 PrintString 一致的体验
     * @param WorldContextObject 上下文，通常传 this
     * @param InString 消息内容
     * @param TextColor 颜色
     * @param Duration 持续时间
     * @param Key 如果设置了 Key，相同 Key 的消息会覆盖而不是堆叠（实现折叠效果）
     */
    UFUNCTION(BlueprintCallable, Category = "DIY_Utility", meta = (WorldContext = "WorldContextObject", AdvancedDisplay = "4", DevelopmentOnly))
    static void DIY_PrintLogToScreen(const UObject *WorldContextObject, const FString &InString, FLinearColor TextColor = FLinearColor(0.0, 0.66, 1.0), float Duration = 2.0f, const FName Key = NAME_None);

    UFUNCTION(BlueprintCallable, Category = "DIY_Utilitie|Navigation")
    static void ForceUpdateNavProxyInOctree(class AActor *inActor);

    UFUNCTION(BlueprintCallable, Category = "DIY_Utilitie|Navigation")
    static void ForceRebuildNavigation(class AActor *inActor);

    UFUNCTION(BlueprintCallable, Category = "DIY_Utility")
    static void AsyncScaleAndDestroy(AActor *TargetActor, float Speed);

    UFUNCTION(BlueprintCallable, Category = "DIY_Commu|File")
    static bool SaveTextureToLocal(class UTexture2D *InTexture, FString FileName, FString &OutPath);

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
