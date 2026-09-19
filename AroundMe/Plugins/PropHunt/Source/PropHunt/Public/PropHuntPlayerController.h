#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PropHuntTypes.h"
#include "PropHuntPlayerController.generated.h"

class APropHuntPropActor;

UCLASS()
class PROPHUNT_API APropHuntPlayerController : public APlayerController
{
    GENERATED_BODY()

public:
    APropHuntPlayerController();

    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;
    virtual void SetupInputComponent() override;

    // Lobby：客户端请求选边 / 切换准备。
    UFUNCTION(Server, Reliable)
    void ServerChooseTeam(EPropHuntRole NewRole);

    UFUNCTION(Server, Reliable)
    void ServerSetReady(bool bReady);

    // 离开房间。
    UFUNCTION(Server, Reliable)
    void ServerRequestLeaveRoom();

    // 服务器通知客户端：离开房间，回主菜单（重置状态 + 独立旅行回菜单地图）。
    UFUNCTION(Client, Reliable)
    void ClientReturnToMenu();

    // 游戏：附身相关。
    UFUNCTION(Server, Reliable)
    void ServerRequestPossess(APropHuntPropActor* Prop);

    UFUNCTION(Server, Reliable)
    void ServerRequestUnpossess();

    // 拾取 / 放下。
    UFUNCTION(Server, Reliable)
    void ServerRequestPickup(APropHuntPropActor* Prop);

    UFUNCTION(Server, Reliable)
    void ServerRequestDrop(bool bThrow);

    // QTE
    UFUNCTION(Server, Reliable)
    void ServerReportQTEKey(EPropHuntQTEKey Key);

    UFUNCTION(Client, Reliable)
    void ClientShowQTE();

    UFUNCTION(Client, Reliable)
    void ClientHideQTE();

    UFUNCTION(Client, Unreliable)
    void ClientUpdateQTE(float Progress, EPropHuntQTEKey ExpectedKey);

    UFUNCTION(NetMulticast, Reliable)
    void MulticastExpelFeedback(APropHuntPropActor* Prop, APawn* GhostPawn);

    // 结算
    UFUNCTION(Server, Reliable)
    void ServerRequestRematch();

    UFUNCTION(Server, Reliable)
    void ServerRequestBackToMenu();

    UFUNCTION(Client, Reliable)
    void ClientShowSettlement(const FString& ResultText);

    void DeliverShowSettlement(const FString& ResultText);
    void ShowSettlementLocal(const FString& ResultText);

    // 游戏内暂停菜单：离开游戏（bQuit=true 退出游戏进程，false 回主菜单）。
    UFUNCTION(Server, Reliable)
    void ServerRequestLeaveGame(bool bQuit);

    // 服务器通知某客户端：退出游戏进程。
    UFUNCTION(Client, Reliable)
    void ClientQuitGame();

    // 请求暂停/恢复（server 权威，复制到所有客户端一起冻结）。
    UFUNCTION(Server, Reliable)
    void ServerRequestPause(bool bPause);

    void ShowPauseMenu();
    void HidePauseMenu();

    UFUNCTION(Client, Reliable)
    void ClientBeginPossession(APropHuntPropActor* Prop);

    UFUNCTION(Client, Reliable)
    void ClientEndPossession(FVector PopLocation);

    void DeliverBeginPossession(APropHuntPropActor* Prop);
    void BeginPossessionLocal(APropHuntPropActor* Prop);
    void DeliverEndPossession(FVector PopLocation);
    void EndPossessionLocal();

    APropHuntPropActor* GetPossessedProp() const { return PossessedProp; }

    void ShowQTEWidget();
    void HideQTEWidget();
    void UpdateQTEWidget(float Progress, EPropHuntQTEKey ExpectedKey);

protected:
    void HandleChooseHunterKey();
    void HandleChooseGhostKey();
    void HandleToggleReadyKey();
    void HandleInteractPressed();
    void HandlePauseToggle();
    APropHuntPropActor* FindNearestProp() const;
    APropHuntPropActor* FindHeldProp(class APropHuntCharacter* Hunter) const;

    void HandleQTEKeySpace();
    void HandleQTEKeyF();
    void HandleQTEKeyShift();
    void ReportQTEKey(EPropHuntQTEKey Key);

    APropHuntPropActor* PossessedProp{nullptr};

    UPROPERTY()
    class UPropHuntQTEUserWidget* QTEWidget;

    UPROPERTY()
    class UPropHuntPauseMenuWidget* PauseMenuWidget;

    void UpdateCompass();
    void UpdatePulseAudio(float DeltaTime);

    UPROPERTY()
    class UPropHuntCompassWidget* CompassWidget;

    UPROPERTY()
    class UPropHuntPulseSynthComponent* PulseSynth;

    float CurrentSignalStrength{0.0f};
    float PulseTimer{0.0f};
};
