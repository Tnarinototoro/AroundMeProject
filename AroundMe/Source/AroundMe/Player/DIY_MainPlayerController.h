// All rights reserved to ShadowCandle Studio

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "DIY_UserDefines.h"
#include "DIY_MainPlayerController.generated.h"

/**
 *
 */
UCLASS()
class AROUNDME_API ADIY_MainPlayerController : public APlayerController
{
    GENERATED_BODY()
protected:
    // 手势识别核心逻辑
    void ProcessCustomGestures(float DeltaTime);

    // 存储最多 10 根手指的状态矩阵
    FDIY_TouchInfo TrackedTouches[10];

    // 记录当前活跃的手指数量
    int32 ActiveTouchCount = 0;
    int32 LastFrameTouchCount = 0; // 记录上一帧有多少根手指
    // 重写底层触摸函数
    virtual bool InputTouch(uint32 Handle, ETouchType::Type Type, const FVector2D &TouchLocation, float Force, FDateTime DeviceTimestamp, uint32 TouchpadIndex) override;
    virtual void PlayerTick(float DeltaTime) override;

public:
    UFUNCTION(BlueprintCallable, Category = "DIY_MainPlayerController")
    int32 GetActiveTouchCount() const;

    UFUNCTION(BlueprintCallable, Category = "DIY_MainPlayerController")
    bool GetHitResultUnderCursorWithIgnore(ECollisionChannel TraceChannel, const TArray<AActor *> &IgnoreActors, FHitResult &OutHit);

    UFUNCTION(BlueprintCallable, Category = "DIY_MainPlayerController", meta = (AdvancedDisplay = "bTraceComplex, bIgnoreSelf"))
    bool DIY_GetHitResultUnderCursor(
        ECollisionChannel TraceChannel,
        bool bTraceComplex,
        const TArray<AActor *> &IgnoreActors,
        FHitResult &OutHitResult,
        bool bIgnoreSelf = true);

    UFUNCTION(BlueprintCallable, Category = "DIY_MainPlayerController", meta = (AdvancedDisplay = "bTraceComplex, bIgnoreSelf"))
    bool DIY_GetHitResultUnderFinger(
        ETouchIndex::Type FingerIndex,
        ECollisionChannel TraceChannel,
        bool bTraceComplex,
        const TArray<AActor *> &IgnoreActors,
        FHitResult &OutHitResult,
        bool bIgnoreSelf = true);

    // Auto detect platform identify Touch or Mouse
    UFUNCTION(BlueprintCallable, Category = "DIY_MainPlayerController", meta = (AdvancedDisplay = "bTraceComplex, bIgnoreSelf"))
    bool DIY_GetHitResultUnderInput(
        ECollisionChannel TraceChannel,
        bool bTraceComplex,
        const TArray<AActor *> &IgnoreActors,
        FHitResult &OutHitResult,
        ETouchIndex::Type FingerIndex = ETouchIndex::Touch1,
        bool bIgnoreSelf = true);

    /** 手势事件：单指滑动 */
    UFUNCTION(BlueprintImplementableEvent, Category = "Gestures")
    void OnDIY_GestureSwipe(FVector2D Delta, int32 FingerCount, float DeltaSeconds);

    /** 手势事件：双指缩放 (Pinch) */
    UFUNCTION(BlueprintImplementableEvent, Category = "Gestures")
    void OnDIY_GesturePinch(float Delta, float Distance);

    /** 手势事件：双指旋转 (Rotate) */
    UFUNCTION(BlueprintImplementableEvent, Category = "Gestures")
    void OnDIY_GestureRotate(float AngleDelta);

    /** 手势事件：三指点击 (通常用于呼出菜单) */
    UFUNCTION(BlueprintImplementableEvent, Category = "Gestures")
    void OnDIY_GestureMultiTap(int32 FingerCount);

    /** 核心事件：手指数发生变化时触发 */
    /** NewCount: 当前手指数量, OldCount: 变化前的数量 */
    UFUNCTION(BlueprintImplementableEvent, Category = "Gestures")
    void OnDIY_TouchCountChanged(int32 NewCount, int32 OldCount);

    /** 长按开始：当某一根手指刚刚达到阈值时触发 */
    UFUNCTION(BlueprintImplementableEvent, Category = "Gestures")
    void OnDIY_GestureLongPressStart(int32 CurrentLongPressCount, FVector2D FingerLocation);

        /** * 手势事件：长按持续中 (Tick触发)
     * @param FingerCount 当前达到长按标准的手指数量
     * @param Duration 当前这组手指中按得最久的那根的时长
     */
    UFUNCTION(BlueprintImplementableEvent, Category = "Gestures")
    void OnDIY_GestureLongPress(int32 FingerCount, float Duration, FVector2D AverageLocation);

    /** * 手势事件：长按松开 (仅在满足长按阈值后松开时触发一次)
     */
    UFUNCTION(BlueprintImplementableEvent, Category = "Gestures")
    void OnDIY_GestureLongPressReleased(int32 FingerCount, float TotalDuration, FVector2D ReleaseLocation);

protected:
    /** 长按判定阈值（秒），超过此时间触发 LongPress */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gestures Config")
    float LongPressThreshold = 0.5f;

    /** 防抖距离：长按期间手指移动超过此像素值则视为滑动而非长按 */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gestures Config")
    float LongPressAllowedMovement = 40.0f;
};
