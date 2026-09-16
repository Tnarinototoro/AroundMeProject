#pragma once

#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "PropHuntRoomWidget.generated.h"

class UButton;
class UTextBlock;

// 房间内：玩家列表 + 选边（Hunter/Ghost）+ 准备 + 倒计时。
UCLASS()
class PROPHUNT_API UPropHuntRoomWidget : public UCommonActivatableWidget
{
    GENERATED_BODY()

public:
    virtual void NativeOnInitialized() override;
    virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

protected:
    UFUNCTION()
    void OnHunterClicked();

    UFUNCTION()
    void OnGhostClicked();

    UFUNCTION()
    void OnReadyClicked();

    void RefreshStatus();

    UPROPERTY()
    UButton* HunterButton;

    UPROPERTY()
    UButton* GhostButton;

    UPROPERTY()
    UButton* ReadyButton;

    UPROPERTY()
    UTextBlock* StatusText;
};
