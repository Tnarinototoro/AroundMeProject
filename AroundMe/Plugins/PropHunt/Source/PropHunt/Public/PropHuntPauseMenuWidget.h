#pragma once

#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "PropHuntPauseMenuWidget.generated.h"

class UButton;

// 游戏内暂停菜单：继续 / 回主菜单 / 退出游戏。
UCLASS()
class PROPHUNT_API UPropHuntPauseMenuWidget : public UCommonActivatableWidget
{
    GENERATED_BODY()

public:
    virtual void NativeOnInitialized() override;

protected:
    UFUNCTION()
    void OnResumeClicked();

    UFUNCTION()
    void OnMainMenuClicked();

    UFUNCTION()
    void OnQuitClicked();

    UPROPERTY()
    UButton* ResumeButton;

    UPROPERTY()
    UButton* MainMenuButton;

    UPROPERTY()
    UButton* QuitButton;
};
