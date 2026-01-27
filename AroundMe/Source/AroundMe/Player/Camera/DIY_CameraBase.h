#pragma once

#include "CoreMinimal.h"
#include "DIY_CameraDefines.h"
#include "DIY_CameraBase.generated.h"

UCLASS()
class AROUNDME_API ADIY_CameraBase : public AActor
{
    GENERATED_BODY()
private:
protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;
    /** Overridable function called whenever this actor is being removed from a level */
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

    virtual void Destroyed() override;

    UFUNCTION()
    void OnCameraInUseChanged(class AActor *NewCameraActor);

public:
    ADIY_CameraBase();
    ~ADIY_CameraBase();

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FDIY_CameraEntry CameraEntry;

    /** 手势事件：单指滑动 */
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "DIY_CameraBase")
    void OnDIY_GestureSwipe(FVector2D Delta, int32 FingerCount, float DeltaSeconds);

    /** 手势事件：双指缩放 (Pinch) */
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "DIY_CameraBase")
    void OnDIY_GesturePinch(float Delta, float Distance);

    /** 手势事件：双指旋转 (Rotate) */
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "DIY_CameraBase")
    void OnDIY_GestureRotate(float AngleDelta);

    /** 手势事件：三指点击 (通常用于呼出菜单) */
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "DIY_CameraBase")
    void OnDIY_GestureMultiTap(int32 FingerCount);

    /** 核心事件：手指数发生变化时触发 */
    /** NewCount: 当前手指数量, OldCount: 变化前的数量 */
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "DIY_CameraBase")
    void OnDIY_TouchCountChanged(int32 NewCount, int32 OldCount);

    /** 长按开始：当某一根手指刚刚达到阈值时触发 */
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "DIY_CameraBase")
    void OnDIY_GestureLongPressStart(int32 CurrentLongPressCount, FVector2D FingerLocation);

    /** * 手势事件：长按持续中 (Tick触发)
     * @param FingerCount 当前达到长按标准的手指数量
     * @param Duration 当前这组手指中按得最久的那根的时长
     */
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "DIY_CameraBase")
    void OnDIY_GestureLongPress(int32 FingerCount, float Duration, FVector2D AverageLocation);

    /** * 手势事件：长按松开 (仅在满足长按阈值后松开时触发一次)
     */
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "DIY_CameraBase")
    void OnDIY_GestureLongPressReleased(int32 FingerCount, float TotalDuration, FVector2D ReleaseLocation);
};
