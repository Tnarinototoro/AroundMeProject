// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "AroundMeGameModeBase.generated.h"

/**
 *
 */
UCLASS()
class AROUNDME_API AAroundMeGameModeBase : public AGameModeBase
{
    GENERATED_BODY()
public:
    AAroundMeGameModeBase();

    UPROPERTY(EditAnywhere, Category = "Developer_Config")
    TSubclassOf<APawn> MainPawnClass;

    
    UPROPERTY(EditAnywhere, Category = "Developer_Config")
    FName GroundLevelName;
protected:

    virtual void BeginPlay() override;

    
    UFUNCTION()
    void OnGroundLevelVisible();

   
    void SpawnAndPossessPlayer();
};
