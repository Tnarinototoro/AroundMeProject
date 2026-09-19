#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PropHuntGameMode.generated.h"

class APropHuntPlayerController;
class APropHuntPropActor;

// 游戏地图专用：玩家从 Lobby travel 过来后直接 spawn 进入游戏。
UCLASS()
class PROPHUNT_API APropHuntGameMode : public AGameModeBase
{
    GENERATED_BODY()

public:
    APropHuntGameMode();

    virtual void BeginPlay() override;
    virtual void PostLogin(APlayerController* NewPlayer) override;
    virtual void Logout(AController* Exiting) override;

    void HandlePossess(APropHuntPlayerController* PC, APropHuntPropActor* Prop);
    void HandleUnpossess(APropHuntPlayerController* PC);
    void HandlePickup(APropHuntPlayerController* PC, APropHuntPropActor* Prop);
    void HandleDrop(APropHuntPlayerController* PC, bool bThrow);
    void HandleExpel(APropHuntPropActor* Prop);

    // 任意玩家离开游戏（暂停菜单「回主菜单/退出游戏」）→ 所有人回主菜单。
    void HandleLeaveGame(APropHuntPlayerController* Requester, bool bQuit);

    void RequestRematch();
    void RequestBackToMenu();

    virtual UClass* GetDefaultPawnClassForController_Implementation(AController* InController) override;

protected:
    void FinalizeReturnToMenu();
    void FinalizeHostQuit();

    UPROPERTY(EditDefaultsOnly, Category = "PropHunt")
    TSubclassOf<APawn> HunterPawnClass;

    UPROPERTY(EditDefaultsOnly, Category = "PropHunt")
    TSubclassOf<APawn> GhostPawnClass;

    FTimerHandle ReturnToMenuTimerHandle;
    bool bReturningToMenu{false};
};
