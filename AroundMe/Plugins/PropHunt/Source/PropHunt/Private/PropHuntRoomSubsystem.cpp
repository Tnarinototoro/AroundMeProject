#include "PropHuntRoomSubsystem.h"

#include "PropHuntTypes.h"
#include "OnlineSubsystem.h"
#include "OnlineSubsystemUtils.h"
#include "OnlineSessionSettings.h"

void UPropHuntRoomSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
    Super::Initialize(Collection);

    if (IOnlineSubsystem* OSS = IOnlineSubsystem::Get())
    {
        SessionInterface = OSS->GetSessionInterface();
    }

    CreateSessionDelegate.BindUObject(this, &UPropHuntRoomSubsystem::OnCreateSessionComplete);
    FindSessionsDelegate.BindUObject(this, &UPropHuntRoomSubsystem::OnFindSessionsComplete);
    JoinSessionDelegate.BindUObject(this, &UPropHuntRoomSubsystem::OnJoinSessionComplete);
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
    Settings.bIsLANMatch = true;
    Settings.bShouldAdvertise = true;
    Settings.bUsesPresence = false;
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
    LastSearch->bIsLanQuery = true;
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
