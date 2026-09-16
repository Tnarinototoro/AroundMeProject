#include "PropHuntRoomSubsystem.h"

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
    if (SessionInterface.IsValid())
    {
        SessionInterface->ClearOnCreateSessionCompleteDelegate_Handle(CreateSessionDelegateHandle);
        SessionInterface->ClearOnFindSessionsCompleteDelegate_Handle(FindSessionsDelegateHandle);
        SessionInterface->ClearOnJoinSessionCompleteDelegate_Handle(JoinSessionDelegateHandle);
    }
    SessionInterface.Reset();

    Super::Deinitialize();
}

void UPropHuntRoomSubsystem::CreateRoom(FOnRoomOpComplete OnComplete)
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

    CreateCompleteCallback = OnComplete;
    CreateSessionDelegateHandle = SessionInterface->AddOnCreateSessionCompleteDelegate_Handle(CreateSessionDelegate);

    FOnlineSessionSettings Settings;
    Settings.bIsLANMatch = true;
    Settings.bShouldAdvertise = true;
    Settings.bUsesPresence = false;
    Settings.NumPublicConnections = 2;

    const FUniqueNetIdPtr NetId = LocalPlayer->GetPreferredUniqueNetId().GetUniqueNetId();
    if (!NetId.IsValid() || !SessionInterface->CreateSession(*NetId, NAME_GameSession, Settings))
    {
        SessionInterface->ClearOnCreateSessionCompleteDelegate_Handle(CreateSessionDelegateHandle);
        OnComplete.ExecuteIfBound(false);
    }
}

void UPropHuntRoomSubsystem::OnCreateSessionComplete(FName SessionName, bool bSuccessful)
{
    SessionInterface->ClearOnCreateSessionCompleteDelegate_Handle(CreateSessionDelegateHandle);
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
    JoinCompleteCallback.ExecuteIfBound(Result == EOnJoinSessionCompleteResult::Success && !TravelURL.IsEmpty());
}

void UPropHuntRoomSubsystem::LeaveRoom()
{
    if (SessionInterface.IsValid())
    {
        SessionInterface->DestroySession(NAME_GameSession);
    }
}
