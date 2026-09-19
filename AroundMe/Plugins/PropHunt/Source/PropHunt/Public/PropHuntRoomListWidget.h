#pragma once

#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "Interfaces/OnlineSessionInterface.h"
#include "PropHuntRoomListWidget.generated.h"

class UButton;
class UTextBlock;

// 房间列表：本地直连（一台电脑双开调试）+ Session 搜索。
UCLASS()
class PROPHUNT_API UPropHuntRoomListWidget : public UCommonActivatableWidget
{
    GENERATED_BODY()

public:
    virtual void NativeOnInitialized() override;

protected:
    UFUNCTION()
    void OnDirectConnectClicked();

    UFUNCTION()
    void OnRefreshClicked();

    UFUNCTION()
    void OnBackClicked();

    UFUNCTION()
    void OnRoomPressed();

    void PopulateRooms(const TArray<FOnlineSessionSearchResult>& Results);
    void JoinRoomByResult(const FOnlineSessionSearchResult& Result);

    UPROPERTY()
    UButton* DirectConnectButton;

    UPROPERTY()
    UButton* RefreshButton;

    UPROPERTY()
    UButton* BackButton;

    UPROPERTY()
    UTextBlock* RoomListText;

    UPROPERTY()
    TArray<UButton*> RoomButtons;

    TArray<FOnlineSessionSearchResult> CurrentResults;
};
