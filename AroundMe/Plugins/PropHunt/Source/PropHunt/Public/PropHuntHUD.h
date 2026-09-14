#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "PropHuntHUD.generated.h"

class APropHuntGameState;
class APropHuntPlayerState;

UCLASS()
class PROPHUNT_API APropHuntHUD : public AHUD
{
    GENERATED_BODY()

public:
    virtual void DrawHUD() override;

protected:
    void DrawLobby(class APropHuntPlayerState* PS, class APropHuntGameState* GS);
    void DrawGame(class APropHuntPlayerState* PS);
};
