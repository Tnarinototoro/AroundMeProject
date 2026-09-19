#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TimerManager.h"
#include "PropHuntTypes.h"
#include "PropHuntLobbyGameMode.generated.h"

class APropHuntPlayerController;

// Lobby 地图专用：玩家选边 + 准备，全员 Ready 后倒计时，再 ServerTravel 到游戏地图。
UCLASS()
class PROPHUNT_API APropHuntLobbyGameMode : public AGameModeBase
{
    GENERATED_BODY()

public:
    APropHuntLobbyGameMode();

    virtual void PostLogin(APlayerController* NewPlayer) override;
    virtual void RestartPlayer(AController* NewPlayer) override;

    void HandleChooseTeam(APropHuntPlayerController* PC, EPropHuntRole NewRole);
    void HandleSetReady(APropHuntPlayerController* PC, bool bReady);
    void HandleLeaveRoom(APropHuntPlayerController* PC);

protected:
    bool CanStartMatch() const;
    void ReevaluateLobbyState();
    void BeginCountdown();
    void TickCountdown();
    void StartMatch();

    // 房主退出：先把所有客户端送回主菜单，再延迟关闭房间（给可靠 RPC 留出送达时间）。
    void FinalizeHostLeave();

    UPROPERTY(EditDefaultsOnly, Category = "PropHunt")
    int32 CountdownSeconds{1};

    // ServerTravel 目标地图（插件 Content 挂载在 /PropHunt/ 下）。
    UPROPERTY(EditDefaultsOnly, Category = "PropHunt")
    FString GameMapPath{TEXT("/PropHunt/Maps/PH_GameMap")};

    FTimerHandle CountdownTimerHandle;
    FTimerHandle HostLeaveTimerHandle;
};
