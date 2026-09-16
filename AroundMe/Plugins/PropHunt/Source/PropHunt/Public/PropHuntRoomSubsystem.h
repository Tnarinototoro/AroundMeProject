#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Interfaces/OnlineSessionInterface.h"
#include "PropHuntRoomSubsystem.generated.h"

DECLARE_DELEGATE_OneParam(FOnRoomOpComplete, bool /*bSuccess*/);
DECLARE_DELEGATE_OneParam(FOnFindRoomsComplete, const TArray<FOnlineSessionSearchResult>& /*Results*/);

// 封装 OnlineSubsystem 的 Session 接口，做「房间」抽象。
// 本地用 OnlineSubsystemNull 测试，线上切 OnlineSubsystemEOS 只改 DefaultPlatformService，本类零改动。
UCLASS()
class PROPHUNT_API UPropHuntRoomSubsystem : public UGameInstanceSubsystem
{
    GENERATED_BODY()

public:
    virtual void Initialize(FSubsystemCollectionBase& Collection) override;
    virtual void Deinitialize() override;

    // 创建房间（host）
    void CreateRoom(FOnRoomOpComplete OnComplete);

    // 搜索房间（client）
    void FindRooms(FOnFindRoomsComplete OnComplete);

    // 加入房间（client）；成功后可用 GetTravelURL 拿地址
    void JoinRoom(const FOnlineSessionSearchResult& Result, FOnRoomOpComplete OnComplete);

    // 离开房间
    void LeaveRoom();

    FString GetTravelURL() const { return TravelURL; }

private:
    void OnCreateSessionComplete(FName SessionName, bool bSuccessful);
    void OnFindSessionsComplete(bool bSuccessful);
    void OnJoinSessionComplete(FName SessionName, EOnJoinSessionCompleteResult::Type Result);

    IOnlineSessionPtr SessionInterface;

    FOnCreateSessionCompleteDelegate CreateSessionDelegate;
    FOnFindSessionsCompleteDelegate FindSessionsDelegate;
    FOnJoinSessionCompleteDelegate JoinSessionDelegate;

    FDelegateHandle CreateSessionDelegateHandle;
    FDelegateHandle FindSessionsDelegateHandle;
    FDelegateHandle JoinSessionDelegateHandle;

    FOnRoomOpComplete CreateCompleteCallback;
    FOnFindRoomsComplete FindRoomsCallback;
    FOnRoomOpComplete JoinCompleteCallback;

    TSharedPtr<FOnlineSessionSearch> LastSearch;
    FString TravelURL;
};
