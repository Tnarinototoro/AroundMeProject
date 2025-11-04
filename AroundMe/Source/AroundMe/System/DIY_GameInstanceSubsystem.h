// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "DIY_GameInstanceSubsystem.generated.h"

/**
 *
 */
UCLASS()
class AROUNDME_API UDIY_GameInstanceSubsystem : public UGameInstanceSubsystem
{
    GENERATED_BODY()

public:
    virtual void Initialize(FSubsystemCollectionBase &Collection) override;
    virtual void Deinitialize() override;
    virtual void OnWorldChange(UWorld *NewWorld);
    virtual void OnWorldInitialized(UWorld *NewWorld);
};
