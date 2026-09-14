#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PropHuntQTEUserWidget.generated.h"

class UImage;
class UTextBlock;
class UCanvasPanelSlot;

// 白盒 QTE：红色圆圈膨胀 + 按键提示。纯 C++ 构建。
UCLASS()
class PROPHUNT_API UPropHuntQTEUserWidget : public UUserWidget
{
    GENERATED_BODY()

public:
    void SetProgress(float Progress);           // 0.0 - 1.0
    void SetExpectedKey(const FString& KeyText);

protected:
    virtual void NativeOnInitialized() override;

    UPROPERTY()
    UImage* CircleImage;

    UPROPERTY()
    UTextBlock* KeyText;

    UPROPERTY()
    UCanvasPanelSlot* CircleSlot;
};
