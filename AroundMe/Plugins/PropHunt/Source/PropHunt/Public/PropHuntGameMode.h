#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PropHuntGameMode.generated.h"

UCLASS()
class PROPHUNT_API APropHuntGameMode : public AGameModeBase
{
    GENERATED_BODY()

public:
    APropHuntGameMode();

    virtual void PostLogin(APlayerController* NewPlayer) override;
    virtual void BeginPlay() override;
};
