#pragma once

#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "PropHuntMainMenuWidget.generated.h"

class UButton;
class UTextBlock;

// 主菜单：Epic 登录状态 + 创建房间 / 加入房间。
UCLASS()
class PROPHUNT_API UPropHuntMainMenuWidget : public UCommonActivatableWidget
{
    GENERATED_BODY()

public:
    virtual void NativeOnInitialized() override;
    virtual void NativeDestruct() override;

protected:
    UFUNCTION()
    void OnLoginClicked();

    UFUNCTION()
    void OnSignOutClicked();

    UFUNCTION()
    void OnCreateRoomClicked();

    UFUNCTION()
    void OnJoinRoomClicked();

    UFUNCTION()
    void OnSettingsClicked();

    UFUNCTION()
    void OnQuitClicked();

    // 依据 Auth 子系统状态刷新状态文本与按钮可用性。
    void RefreshAuthUI();

    UPROPERTY()
    UButton* LoginButton;

    UPROPERTY()
    UButton* SignOutButton;

    UPROPERTY()
    UButton* CreateRoomButton;

    UPROPERTY()
    UButton* JoinRoomButton;

    UPROPERTY()
    UButton* SettingsButton;

    UPROPERTY()
    UButton* QuitButton;

    UPROPERTY()
    UTextBlock* AuthStatusText;

private:
    FDelegateHandle AuthStateChangedHandle;
};
