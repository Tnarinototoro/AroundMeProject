// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DIY_GameInstanceSubsystem.h"
#include "DIY_WorldTravelSubsystem.generated.h"

/**
 *
 */
UCLASS()
class AROUNDME_API UDIY_WorldTravelSubsystem : public UDIY_GameInstanceSubsystem
{
    GENERATED_BODY()

public:
    virtual void Initialize(FSubsystemCollectionBase &Collection) override;
    virtual void Deinitialize() override;

protected:
};
