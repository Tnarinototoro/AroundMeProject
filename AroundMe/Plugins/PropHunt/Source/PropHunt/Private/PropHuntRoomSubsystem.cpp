#include "PropHuntRoomSubsystem.h"

#include "PropHuntTypes.h"
#include "OnlineSubsystem.h"
#include "OnlineSubsystemUtils.h"
#include "OnlineSessionSettings.h"
#include "Interfaces/OnlineIdentityInterface.h"

void UPropHuntRoomSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
    Super::Initialize(Collection);

    if (IOnlineSubsystem* OSS = IOnlineSubsystem::Get())
    {
        SessionInterface = OSS->GetSessionInterface();

        // EOS 需要登录才有 ProductUserId，才能建/进房 + P2P。
        // AutoLogin 会读命令行 -AUTH_TYPE=/-AUTH_LOGIN=/-AUTH_PASSWORD=（Dev Auth），Null 是 no-op。
        if (IOnlineIdentityPtr Identity = OSS->GetIdentityInterface())
        {
            Identity->AutoLogin(0);
        }
    }

    CreateSessionDelegate.BindUObject(this, &UPropHuntRoomSubsystem::OnCreateSessionComplete);
    FindSessionsDelegate.BindUObject(this, &UPropHuntRoomSubsystem::OnFindSessionsComplete);
    JoinSessionDelegate.BindUObject(this, &UPropHuntRoomSubsystem::OnJoinSessionComplete);
}

bool UPropHuntRoomSubsystem::IsEOS() const
{
    if (IOnlineSubsystem* OSS = IOnlineSubsystem::Get())
    {
        return OSS->GetSubsystemName() == FName(TEXT("EOS"));
    }
    return false;
}

bool UPropHuntRoomSubsystem::IsLoggedIn() const
{
    if (IOnlineSubsystem* OSS = IOnlineSubsystem::Get())
    {
        if (IOnlineIdentityPtr Identity = OSS->GetIdentityInterface())
        {
            return Identity->GetLoginStatus(0) >= ELoginStatus::LoggedIn;
        }
    }
    // 无 identity 接口或 Null 后端：视为已登录。
    return true;
}

void UPropHuntRoomSubsystem::Deinitialize()
{
    // PIE/EndPlay 结束时引擎不会自动销毁 NULL 的 session（引擎单例跨 PIE 存活），
    // 这里主动销毁残留 session，否则下次 CreateSession 会报 "session already exists"。
    if (SessionInterface.IsValid() && IOnlineSubsystem::Get())
    {
        SessionInterface->ClearOnCreateSessionCompleteDelegate_Handle(CreateSessionDelegateHandle);
        SessionInterface->ClearOnFindSessionsCompleteDelegate_Handle(FindSessionsDelegateHandle);
        SessionInterface->ClearOnJoinSessionCompleteDelegate_Handle(JoinSessionDelegateHandle);

        if (SessionInterface->GetNamedSession(NAME_GameSession))
        {
            UE_LOG(LogPropHunt, Warning, TEXT("[RoomSubsystem] Deinitialize: destroying leftover session"));
            SessionInterface->DestroySession(NAME_GameSession);
        }
    }
    bHasActiveSession = false;
    SessionInterface.Reset();

    Super::Deinitialize();
}

void UPropHuntRoomSubsystem::CreateRoom(FOnRoomOpComplete OnComplete)
{
    UE_LOG(LogPropHunt, Warning, TEXT("[RoomSubsystem] CreateRoom, SessionInterface valid=%d"), SessionInterface.IsValid() ? 1 : 0);

    if (!SessionInterface.IsValid())
    {
        OnComplete.ExecuteIfBound(false);
        return;
    }

    if (!IsLoggedIn())
    {
        UE_LOG(LogPropHunt, Warning, TEXT("[RoomSubsystem] CreateRoom: not logged in"));
        OnComplete.ExecuteIfBound(false);
        return;
    }

    // 清理残留 session（上一次 PIE/退出可能未销毁）。
    // 用两个信号一起判断：GetNamedSession 能拿到，或本地标记 bHasActiveSession 为真。
    if (SessionInterface->GetNamedSession(NAME_GameSession) || bHasActiveSession)
    {
        UE_LOG(LogPropHunt, Warning, TEXT("[RoomSubsystem] CreateRoom: stale session found (named=%d, flag=%d), destroying"),
            SessionInterface->GetNamedSession(NAME_GameSession) ? 1 : 0, bHasActiveSession ? 1 : 0);
        SessionInterface->DestroySession(NAME_GameSession);
        bHasActiveSession = false;
    }

    APlayerController* PC = GetGameInstance()->GetFirstLocalPlayerController();
    ULocalPlayer* LocalPlayer = PC ? PC->GetLocalPlayer() : nullptr;
    if (!LocalPlayer)
    {
        OnComplete.ExecuteIfBound(false);
        return;
    }

    CreateCompleteCallback = OnComplete;
    CreateSessionDelegateHandle = SessionInterface->AddOnCreateSessionCompleteDelegate_Handle(CreateSessionDelegate);

    FOnlineSessionSettings Settings;
    const bool bEOS = IsEOS();
    Settings.bIsLANMatch = !bEOS;            // EOS 不用 LAN
    Settings.bShouldAdvertise = true;
    Settings.bUsesPresence = false;
    if (bEOS)
    {
        Settings.bUseLobbiesIfAvailable = true; // EOS 用 Lobby 做房间发现
    }
    Settings.NumPublicConnections = 2;

    const FUniqueNetIdPtr NetId = LocalPlayer->GetPreferredUniqueNetId().GetUniqueNetId();
    const bool bStarted = NetId.IsValid() && SessionInterface->CreateSession(*NetId, NAME_GameSession, Settings);
    if (!bStarted)
    {
        // CreateSession 同步失败。注意：NULL 后端在失败时会「同步触发」 OnCreateSessionComplete，
        // 此时 handle 已被 OnCreateSessionComplete 清除，不要再重复回调，否则会出现两次 result。
        if (CreateSessionDelegateHandle.IsValid())
        {
            SessionInterface->ClearOnCreateSessionCompleteDelegate_Handle(CreateSessionDelegateHandle);
            OnComplete.ExecuteIfBound(false);
        }
        // 若 handle 已无效，说明 delegate 已经同步回调过了，这里什么都不做。
    }
}

void UPropHuntRoomSubsystem::OnCreateSessionComplete(FName SessionName, bool bSuccessful)
{
    SessionInterface->ClearOnCreateSessionCompleteDelegate_Handle(CreateSessionDelegateHandle);
    bHasActiveSession = bSuccessful;
    CreateCompleteCallback.ExecuteIfBound(bSuccessful);
}

void UPropHuntRoomSubsystem::FindRooms(FOnFindRoomsComplete OnComplete)
{
    if (!SessionInterface.IsValid())
    {
        TArray<FOnlineSessionSearchResult> Empty;
        OnComplete.ExecuteIfBound(Empty);
        return;
    }

    if (!IsLoggedIn())
    {
        UE_LOG(LogPropHunt, Warning, TEXT("[RoomSubsystem] FindRooms: not logged in"));
        TArray<FOnlineSessionSearchResult> Empty;
        OnComplete.ExecuteIfBound(Empty);
        return;
    }

    APlayerController* PC = GetGameInstance()->GetFirstLocalPlayerController();
    ULocalPlayer* LocalPlayer = PC ? PC->GetLocalPlayer() : nullptr;
    if (!LocalPlayer)
    {
        TArray<FOnlineSessionSearchResult> Empty;
        OnComplete.ExecuteIfBound(Empty);
        return;
    }

    FindRoomsCallback = OnComplete;
    FindSessionsDelegateHandle = SessionInterface->AddOnFindSessionsCompleteDelegate_Handle(FindSessionsDelegate);

    LastSearch = MakeShareable(new FOnlineSessionSearch());
    LastSearch->bIsLanQuery = !IsEOS();
    LastSearch->MaxSearchResults = 20;

    const FUniqueNetIdPtr NetId = LocalPlayer->GetPreferredUniqueNetId().GetUniqueNetId();
    if (!NetId.IsValid() || !SessionInterface->FindSessions(*NetId, LastSearch.ToSharedRef()))
    {
        SessionInterface->ClearOnFindSessionsCompleteDelegate_Handle(FindSessionsDelegateHandle);
        TArray<FOnlineSessionSearchResult> Empty;
        OnComplete.ExecuteIfBound(Empty);
    }
}

void UPropHuntRoomSubsystem::OnFindSessionsComplete(bool bSuccessful)
{
    SessionInterface->ClearOnFindSessionsCompleteDelegate_Handle(FindSessionsDelegateHandle);

    TArray<FOnlineSessionSearchResult> Results;
    if (bSuccessful && LastSearch.IsValid())
    {
        Results = LastSearch->SearchResults;
    }
    FindRoomsCallback.ExecuteIfBound(Results);
}

void UPropHuntRoomSubsystem::JoinRoom(const FOnlineSessionSearchResult& Result, FOnRoomOpComplete OnComplete)
{
    if (!SessionInterface.IsValid())
    {
        OnComplete.ExecuteIfBound(false);
        return;
    }

    if (!IsLoggedIn())
    {
        UE_LOG(LogPropHunt, Warning, TEXT("[RoomSubsystem] JoinRoom: not logged in"));
        OnComplete.ExecuteIfBound(false);
        return;
    }

    APlayerController* PC = GetGameInstance()->GetFirstLocalPlayerController();
    ULocalPlayer* LocalPlayer = PC ? PC->GetLocalPlayer() : nullptr;
    if (!LocalPlayer)
    {
        OnComplete.ExecuteIfBound(false);
        return;
    }

    JoinCompleteCallback = OnComplete;
    JoinSessionDelegateHandle = SessionInterface->AddOnJoinSessionCompleteDelegate_Handle(JoinSessionDelegate);

    const FUniqueNetIdPtr NetId = LocalPlayer->GetPreferredUniqueNetId().GetUniqueNetId();
    if (!NetId.IsValid() || !SessionInterface->JoinSession(*NetId, NAME_GameSession, Result))
    {
        SessionInterface->ClearOnJoinSessionCompleteDelegate_Handle(JoinSessionDelegateHandle);
        OnComplete.ExecuteIfBound(false);
    }
}

void UPropHuntRoomSubsystem::OnJoinSessionComplete(FName SessionName, EOnJoinSessionCompleteResult::Type Result)
{
    SessionInterface->ClearOnJoinSessionCompleteDelegate_Handle(JoinSessionDelegateHandle);

    TravelURL.Empty();
    if (Result == EOnJoinSessionCompleteResult::Success)
    {
        if (!SessionInterface->GetResolvedConnectString(NAME_GameSession, TravelURL))
        {
            TravelURL.Empty();
        }
    }

    const bool bSuccess = (Result == EOnJoinSessionCompleteResult::Success && !TravelURL.IsEmpty());
    bHasActiveSession = bSuccess;
    JoinCompleteCallback.ExecuteIfBound(bSuccess);
}

void UPropHuntRoomSubsystem::LeaveRoom()
{
    if (SessionInterface.IsValid())
    {
        SessionInterface->DestroySession(NAME_GameSession);
    }
    bHasActiveSession = false;
    TravelURL.Empty();
}
