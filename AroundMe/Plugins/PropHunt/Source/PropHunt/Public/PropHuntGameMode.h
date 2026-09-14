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

    void HandlePossess(APropHuntPlayerController* PC, APropHuntPropActor* Prop);
    void HandleUnpossess(APropHuntPlayerController* PC);
    void HandlePickup(APropHuntPlayerController* PC, APropHuntPropActor* Prop);
    void HandleDrop(APropHuntPlayerController* PC, bool bThrow);
    void HandleExpel(APropHuntPropActor* Prop);

    virtual UClass* GetDefaultPawnClassForController_Implementation(AController* InController) override;

protected:
    UPROPERTY(EditDefaultsOnly, Category = "PropHunt")
    TSubclassOf<APawn> HunterPawnClass;

    UPROPERTY(EditDefaultsOnly, Category = "PropHunt")
    TSubclassOf<APawn> GhostPawnClass;
};
