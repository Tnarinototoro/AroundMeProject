#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PropHuntCompassWidget.generated.h"

class UImage;
class UCanvasPanelSlot;

// Hunter 右上角罗盘：显示脉冲信号，离 Ghost 越近越强烈（波纹 + 颜色 + 大小）。
UCLASS()
class PROPHUNT_API UPropHuntCompassWidget : public UUserWidget
{
    GENERATED_BODY()

public:
    void SetSignalStrength(float Strength); // 0=远，1=近

protected:
    virtual void NativeOnInitialized() override;
    virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

    void UpdateVisuals(float Strength);

    UPROPERTY()
    UImage* SignalDot;

    UPROPERTY()
    UCanvasPanelSlot* SignalDotSlot;

    UPROPERTY()
    UImage* RippleImage;

    UPROPERTY()
    UCanvasPanelSlot* RippleSlot;

    float CurrentStrength{0.0f};
    float RipplePhase{0.0f};
};
