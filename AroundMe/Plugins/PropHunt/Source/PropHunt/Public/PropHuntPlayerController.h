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

    virtual void SetupInputComponent() override;

    // Lobby：客户端请求选边 / 切换准备。
    UFUNCTION(Server, Reliable)
    void ServerChooseTeam(EPropHuntRole NewRole);

    UFUNCTION(Server, Reliable)
    void ServerSetReady(bool bReady);

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

    UFUNCTION(Client, Reliable)
    void ClientBeginPossession(APropHuntPropActor* Prop);

    UFUNCTION(Client, Reliable)
    void ClientEndPossession(FVector PopLocation);

    void DeliverBeginPossession(APropHuntPropActor* Prop);
    void BeginPossessionLocal(APropHuntPropActor* Prop);
    void DeliverEndPossession(FVector PopLocation);
    void EndPossessionLocal();

    APropHuntPropActor* GetPossessedProp() const { return PossessedProp; }

protected:
    void HandleChooseHunterKey();
    void HandleChooseGhostKey();
    void HandleToggleReadyKey();
    void HandleInteractPressed();
    APropHuntPropActor* FindNearestProp() const;
    APropHuntPropActor* FindHeldProp(class APropHuntCharacter* Hunter) const;

    APropHuntPropActor* PossessedProp{nullptr};
};
