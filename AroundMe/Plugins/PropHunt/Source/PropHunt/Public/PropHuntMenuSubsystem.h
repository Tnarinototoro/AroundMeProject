#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "PropHuntMenuSubsystem.generated.h"

class UCommonActivatableWidget;

// 管理 Common UI 菜单页面（主菜单 / 房间列表 / 房间）。
UCLASS()
class PROPHUNT_API UPropHuntMenuSubsystem : public UGameInstanceSubsystem
{
    GENERATED_BODY()

public:
    virtual void Initialize(FSubsystemCollectionBase& Collection) override;

    void ShowMainMenu();
    void ShowRoomList();
    void ShowRoom();
    void ShowSettlement(const FString& ResultText);
    void HideMenu();

    bool IsInRoom() const { return bInRoom; }
    void SetInRoom(bool b) { bInRoom = b; }

private:
    void ShowWidget(TSubclassOf<UCommonActivatableWidget> WidgetClass);

    UPROPERTY()
    UCommonActivatableWidget* CurrentWidget;

    bool bInRoom{false};
};
