#include "PropHuntAuthSubsystem.h"

#include "OnlineSubsystem.h"
#include "Engine/GameInstance.h"
#include "Misc/CommandLine.h"
#include "Misc/Parse.h"
#include "TimerManager.h"
#include "PropHuntTypes.h"

namespace
{
    // PersistentAuth 失败/无 token 时，SDK 通常会很快回调；这里只兜底极端情况。
    constexpr float SilentLoginTimeoutSeconds = 10.0f;

    bool IsSignedInStatus(ELoginStatus::Type Status)
    {
        return Status == ELoginStatus::LoggedIn || Status == ELoginStatus::UsingLocalProfile;
    }
}

void UPropHuntAuthSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
    Super::Initialize(Collection);

    IOnlineIdentityPtr Identity = GetIdentity();
    if (!Identity.IsValid())
    {
        SetState(EPropHuntAuthState::Failed, TEXT("EOS online subsystem is not available"));
        UE_LOG(LogPropHunt, Error, TEXT("[Auth] Identity interface unavailable; check DefaultPlatformService / OnlineSubsystemEOS config"));
        return;
    }

    LoginCompleteHandle = Identity->AddOnLoginCompleteDelegate_Handle(
        0,
        FOnLoginCompleteDelegate::CreateUObject(this, &UPropHuntAuthSubsystem::HandleLoginComplete));

    LoginStatusChangedHandle = Identity->AddOnLoginStatusChangedDelegate_Handle(
        0,
        FOnLoginStatusChangedDelegate::CreateUObject(this, &UPropHuntAuthSubsystem::HandleLoginStatusChanged));

    TrySilentSignIn();
}

void UPropHuntAuthSubsystem::Deinitialize()
{
    if (IOnlineIdentityPtr Identity = GetIdentity())
    {
        if (LoginCompleteHandle.IsValid())
        {
            Identity->ClearOnLoginCompleteDelegate_Handle(0, LoginCompleteHandle);
        }
        if (LoginStatusChangedHandle.IsValid())
        {
            Identity->ClearOnLoginStatusChangedDelegate_Handle(0, LoginStatusChangedHandle);
        }
    }

    OnAuthStateChanged.Clear();

    LoginCompleteHandle.Reset();
    LoginStatusChangedHandle.Reset();

    if (UGameInstance* GameInstance = GetGameInstance())
    {
        GameInstance->GetTimerManager().ClearTimer(SilentLoginTimeoutHandle);
    }

    Super::Deinitialize();
}

IOnlineIdentityPtr UPropHuntAuthSubsystem::GetIdentity() const
{
    if (IOnlineSubsystem* OnlineSubsystem = IOnlineSubsystem::Get())
    {
        return OnlineSubsystem->GetIdentityInterface();
    }
    return nullptr;
}

bool UPropHuntAuthSubsystem::IsSignedIn() const
{
    if (State == EPropHuntAuthState::SignedIn)
    {
        return true;
    }

    // 状态可能因外部登录而滞后，这里以 OSS 为准做一次廉价校验。
    if (IOnlineIdentityPtr Identity = GetIdentity())
    {
        return IsSignedInStatus(Identity->GetLoginStatus(0));
    }
    return false;
}

FString UPropHuntAuthSubsystem::GetStatusText() const
{
    switch (State)
    {
    case EPropHuntAuthState::SignedIn:
        return FString::Printf(TEXT("Signed in as %s"),
            CachedPlayerName.IsEmpty() ? TEXT("Epic Player") : *CachedPlayerName);

    case EPropHuntAuthState::SigningIn:
        return bPendingSilent ? TEXT("Restoring Epic session...")
                              : TEXT("Signing in - finish the Epic login in your browser...");

    case EPropHuntAuthState::Failed:
        return FString::Printf(TEXT("Epic sign-in failed: %s"),
            LastError.IsEmpty() ? TEXT("unknown error") : *LastError);

    case EPropHuntAuthState::NotSignedIn:
        return TEXT("Not signed in to Epic - sign in to play online");

    case EPropHuntAuthState::Unknown:
    default:
        return TEXT("Checking Epic sign-in...");
    }
}

void UPropHuntAuthSubsystem::TrySilentSignIn()
{
    IOnlineIdentityPtr Identity = GetIdentity();
    if (!Identity.IsValid())
    {
        SetState(EPropHuntAuthState::Failed, TEXT("EOS online subsystem is not available"));
        return;
    }

    if (IsSignedInStatus(Identity->GetLoginStatus(0)))
    {
        CachePlayerName();
        SetState(EPropHuntAuthState::SignedIn);
        return;
    }

    // 本地双开调试：沿用 -AUTH_TYPE=developer -AUTH_LOGIN=... -AUTH_PASSWORD=...（DevAuthTool）。
    // 这条分支只应该在开发机上出现，正式版本不会带这些参数。
    FString AuthType;
    FString AuthLogin;
    FString AuthPassword;
    FParse::Value(FCommandLine::Get(), TEXT("AUTH_TYPE="), AuthType);
    if (!AuthType.IsEmpty())
    {
        FParse::Value(FCommandLine::Get(), TEXT("AUTH_LOGIN="), AuthLogin);
        FParse::Value(FCommandLine::Get(), TEXT("AUTH_PASSWORD="), AuthPassword);

        UE_LOG(LogPropHunt, Log, TEXT("[Auth] Using command-line credentials (type=%s)"), *AuthType);
        BeginLogin(AuthType, /*bSilent=*/true, AuthLogin, AuthPassword);
        return;
    }

    // 没有本地 token 时 SDK 会很快返回失败，不会打扰玩家；失败后退回「未登录」等玩家点按钮。
    BeginLogin(TEXT("persistentauth"), /*bSilent=*/true);
}

void UPropHuntAuthSubsystem::SignInWithEpic()
{
    if (State == EPropHuntAuthState::SigningIn)
    {
        // 已有登录在进行，避免重复打开浏览器。
        return;
    }

    if (IsSignedIn())
    {
        CachePlayerName();
        SetState(EPropHuntAuthState::SignedIn);
        return;
    }

    BeginLogin(TEXT("accountportal"), /*bSilent=*/false);
}

void UPropHuntAuthSubsystem::SignOut()
{
    if (IOnlineIdentityPtr Identity = GetIdentity())
    {
        Identity->Logout(0);
    }

    CachedPlayerName.Empty();
    SetState(EPropHuntAuthState::NotSignedIn);
}

void UPropHuntAuthSubsystem::RefreshFromOnlineSubsystem()
{
    IOnlineIdentityPtr Identity = GetIdentity();
    if (!Identity.IsValid())
    {
        SetState(EPropHuntAuthState::Failed, TEXT("EOS online subsystem is not available"));
        return;
    }

    if (IsSignedInStatus(Identity->GetLoginStatus(0)))
    {
        CachePlayerName();
        SetState(EPropHuntAuthState::SignedIn);
    }
}

void UPropHuntAuthSubsystem::BeginLogin(const FString& CredentialType, bool bSilent, const FString& LoginId, const FString& Token)
{
    IOnlineIdentityPtr Identity = GetIdentity();
    if (!Identity.IsValid())
    {
        SetState(EPropHuntAuthState::Failed, TEXT("EOS online subsystem is not available"));
        return;
    }

    PendingCredentialType = CredentialType;
    bPendingSilent = bSilent;
    LastError.Empty();

    SetState(EPropHuntAuthState::SigningIn);

    UE_LOG(LogPropHunt, Log, TEXT("[Auth] Login request: type=%s silent=%d"), *CredentialType, bSilent ? 1 : 0);

    bool bStarted = false;
    {
        const FOnlineAccountCredentials Credentials(CredentialType, LoginId, Token);
        bStarted = Identity->Login(0, Credentials);
    }

    if (!bStarted)
    {
        // Login 返回 false 时不会触发完成回调，这里自行收尾。
        if (bSilent)
        {
            SetState(EPropHuntAuthState::NotSignedIn);
        }
        else
        {
            SetState(EPropHuntAuthState::Failed, TEXT("could not start the Epic sign-in flow"));
        }
        return;
    }

    if (bSilent)
    {
        if (UGameInstance* GameInstance = GetGameInstance())
        {
            GameInstance->GetTimerManager().SetTimer(
                SilentLoginTimeoutHandle,
                this,
                &UPropHuntAuthSubsystem::HandleSilentLoginTimeout,
                SilentLoginTimeoutSeconds,
                false);
        }
    }
}

void UPropHuntAuthSubsystem::HandleLoginComplete(int32 LocalUserNum, bool bWasSuccessful, const FUniqueNetId& UserId, const FString& Error)
{
    if (UGameInstance* GameInstance = GetGameInstance())
    {
        GameInstance->GetTimerManager().ClearTimer(SilentLoginTimeoutHandle);
    }

    if (bWasSuccessful)
    {
        CachePlayerName();
        LastError.Empty();
        SetState(EPropHuntAuthState::SignedIn);
        UE_LOG(LogPropHunt, Log, TEXT("[Auth] Login succeeded: %s (%s)"),
            *CachedPlayerName, *UserId.ToString());
        return;
    }

    UE_LOG(LogPropHunt, Warning, TEXT("[Auth] Login failed: type=%s error=%s"),
        *PendingCredentialType, *Error);

    if (PendingCredentialType == TEXT("persistentauth"))
    {
        // 没有可复用的会话：不自动弹浏览器，等玩家主动点登录。
        LastError.Empty();
        SetState(EPropHuntAuthState::NotSignedIn);
        return;
    }

    SetState(EPropHuntAuthState::Failed, Error.IsEmpty() ? TEXT("login was rejected or cancelled") : Error);
}

void UPropHuntAuthSubsystem::HandleLoginStatusChanged(int32 LocalUserNum, ELoginStatus::Type OldStatus, ELoginStatus::Type NewStatus, const FUniqueNetId& NewId)
{
    if (IsSignedInStatus(NewStatus))
    {
        CachePlayerName();
        SetState(EPropHuntAuthState::SignedIn);
    }
    else if (NewStatus == ELoginStatus::NotLoggedIn && State == EPropHuntAuthState::SignedIn)
    {
        CachedPlayerName.Empty();
        SetState(EPropHuntAuthState::NotSignedIn);
    }
}

void UPropHuntAuthSubsystem::HandleSilentLoginTimeout()
{
    if (State != EPropHuntAuthState::SigningIn || !bPendingSilent)
    {
        return;
    }

    UE_LOG(LogPropHunt, Warning, TEXT("[Auth] Silent login timed out; falling back to Not Signed In"));
    SetState(EPropHuntAuthState::NotSignedIn);
}

void UPropHuntAuthSubsystem::SetState(EPropHuntAuthState NewState, const FString& InError)
{
    LastError = InError;

    const bool bChanged = (State != NewState);
    State = NewState;

    if (bChanged)
    {
        UE_LOG(LogPropHunt, Log, TEXT("[Auth] State -> %s (%s)"), *UEnum::GetValueAsString(NewState), *GetStatusText());
        OnAuthStateChanged.Broadcast();
    }
}

void UPropHuntAuthSubsystem::CachePlayerName()
{
    if (IOnlineIdentityPtr Identity = GetIdentity())
    {
        CachedPlayerName = Identity->GetPlayerNickname(0);
    }
}
