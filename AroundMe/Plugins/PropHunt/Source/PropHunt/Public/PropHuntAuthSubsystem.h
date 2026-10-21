#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Interfaces/OnlineIdentityInterface.h"
#include "PropHuntAuthSubsystem.generated.h"

UENUM(BlueprintType)
enum class EPropHuntAuthState : uint8
{
    // 尚未尝试登录（子系统刚创建）。
    Unknown     UMETA(DisplayName = "Unknown"),
    // 明确处于未登录状态，等待玩家点「Sign in」。
    NotSignedIn UMETA(DisplayName = "Not Signed In"),
    // 登录请求进行中（持久登录很快，Account Portal 需要玩家在浏览器完成）。
    SigningIn   UMETA(DisplayName = "Signing In"),
    // 已登录，可以建房 / 搜房 / 加房。
    SignedIn    UMETA(DisplayName = "Signed In"),
    // 登录失败（网络、EOS 配置、玩家取消等），LastError 有原因。
    Failed      UMETA(DisplayName = "Failed")
};

DECLARE_MULTICAST_DELEGATE(FOnPropHuntAuthStateChanged);

/**
 * EOS 账号登录封装。
 *
 * 流程：
 *   1. 启动时先尝试 PersistentAuth（SDK 本地密钥环里的 refresh token），静默恢复上次登录；
 *   2. 没有可用 token 时不弹窗，只在 UI 上提示未登录；
 *   3. 玩家点「Sign in with Epic」→ Account Portal 登录（打开系统浏览器，登录后回到游戏）；
 *   4. 登录成功后缓存显示名，供房间列表 / 大厅展示。
 *
 * 注意：本地双开调试请继续用 DevAuthTool + -AUTH_TYPE=developer 的 bat，
 * 因为同一台机器上的多个实例会共用同一个 EOS 账号（同一个 PUID）。
 */
UCLASS()
class PROPHUNT_API UPropHuntAuthSubsystem : public UGameInstanceSubsystem
{
    GENERATED_BODY()

public:
    virtual void Initialize(FSubsystemCollectionBase& Collection) override;
    virtual void Deinitialize() override;

    // 打开 Epic 账号门户登录（浏览器）。
    UFUNCTION(BlueprintCallable, Category = "PropHunt|Auth")
    void SignInWithEpic();

    // 尝试用已保存的凭据静默恢复登录。
    UFUNCTION(BlueprintCallable, Category = "PropHunt|Auth")
    void TrySilentSignIn();

    UFUNCTION(BlueprintCallable, Category = "PropHunt|Auth")
    void SignOut();

    // 重新读取 OSS 的真实登录状态（例如外部已登录时）。
    UFUNCTION(BlueprintCallable, Category = "PropHunt|Auth")
    void RefreshFromOnlineSubsystem();

    UFUNCTION(BlueprintPure, Category = "PropHunt|Auth")
    bool IsSignedIn() const;

    UFUNCTION(BlueprintPure, Category = "PropHunt|Auth")
    EPropHuntAuthState GetState() const { return State; }

    UFUNCTION(BlueprintPure, Category = "PropHunt|Auth")
    FString GetPlayerDisplayName() const { return CachedPlayerName; }

    // UI 直接显示的一行状态文本。
    UFUNCTION(BlueprintPure, Category = "PropHunt|Auth")
    FString GetStatusText() const;

    UFUNCTION(BlueprintPure, Category = "PropHunt|Auth")
    FString GetLastError() const { return LastError; }

    // UI 订阅：登录状态变化时刷新按钮可用性。
    FOnPropHuntAuthStateChanged OnAuthStateChanged;

private:
    void BeginLogin(const FString& CredentialType, bool bSilent, const FString& LoginId = FString(), const FString& Token = FString());
    void HandleLoginComplete(int32 LocalUserNum, bool bWasSuccessful, const FUniqueNetId& UserId, const FString& Error);
    void HandleLoginStatusChanged(int32 LocalUserNum, ELoginStatus::Type OldStatus, ELoginStatus::Type NewStatus, const FUniqueNetId& NewId);
    void HandleSilentLoginTimeout();
    void SetState(EPropHuntAuthState NewState, const FString& InError = FString());
    void CachePlayerName();
    IOnlineIdentityPtr GetIdentity() const;

    EPropHuntAuthState State{EPropHuntAuthState::Unknown};

    FString LastError;
    FString CachedPlayerName;

    // 当前登录请求使用的凭据类型（persistentauth / accountportal ...）。
    FString PendingCredentialType;
    bool bPendingSilent{false};

    FDelegateHandle LoginCompleteHandle;
    FDelegateHandle LoginStatusChangedHandle;
    FTimerHandle SilentLoginTimeoutHandle;
};
