#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Interfaces/OnlineSessionInterface.h"
#include "OnlineSessionSettings.h"
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

    // 离开房间（销毁 session）
    void LeaveRoom();

    // 当前是否持有一个活动 session（房主/已加入）。用于「是否在房间里」判定。
    bool HasActiveSession() const { return bHasActiveSession; }

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

    // 本地标记：是否已成功创建/加入 session。
    // 注意 GetNamedSession 在 PIE/EndPlay 后可能拿不到残留 session（引擎单例跨 PIE 存活），
    // 因此用这个标记兜底，确保离开/重进时正确销毁。
    bool bHasActiveSession{false};
};
