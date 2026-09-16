#pragma once

#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "PropHuntMainMenuWidget.generated.h"

class UButton;

// 主菜单：创建房间 / 加入房间。
UCLASS()
class PROPHUNT_API UPropHuntMainMenuWidget : public UCommonActivatableWidget
{
    GENERATED_BODY()

public:
    virtual void NativeOnInitialized() override;

protected:
    UFUNCTION()
    void OnCreateRoomClicked();

    UFUNCTION()
    void OnJoinRoomClicked();

    UPROPERTY()
    UButton* CreateRoomButton;

    UPROPERTY()
    UButton* JoinRoomButton;
};
