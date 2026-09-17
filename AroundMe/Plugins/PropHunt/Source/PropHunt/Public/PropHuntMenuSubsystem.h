#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "PropHuntMenuSubsystem.generated.h"

class UCommonActivatableWidgetStack;

// 管理 Common UI 菜单栈（主菜单 → 房间列表 → 房间）。
UCLASS()
class PROPHUNT_API UPropHuntMenuSubsystem : public UGameInstanceSubsystem
{
    GENERATED_BODY()

public:
    virtual void Initialize(FSubsystemCollectionBase& Collection) override;

    void ShowMainMenu();
    void ShowRoomList();
    void ShowRoom();

    bool IsInRoom() const { return bInRoom; }
    void SetInRoom(bool b) { bInRoom = b; }

private:
    void EnsureStack();

    bool bInRoom{false};

    UPROPERTY()
    UCommonActivatableWidgetStack* Stack;
};
