// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "DIY_WorldSubsystem.generated.h"

/**
 *
 */
UCLASS(Abstract)
class AROUNDME_API UDIY_WorldSubsystem : public UWorldSubsystem
{
    GENERATED_BODY()

public:
    virtual void Initialize(FSubsystemCollectionBase &Collection) override;

    virtual bool ShouldCreateSubsystem(UObject *Outer) const override;
    virtual bool DoesSupportWorldType(const EWorldType::Type WorldType) const override;

protected:
    virtual void OnWorldActorsBeginPlay() {};
};

UCLASS(Abstract)
class AROUNDME_API UDIY_TickableWorldSubsystem : public UTickableWorldSubsystem
{
    GENERATED_BODY()

public:
    virtual bool ShouldCreateSubsystem(UObject *Outer) const override;
    virtual bool DoesSupportWorldType(const EWorldType::Type WorldType) const override;

    virtual TStatId GetStatId() const override;
};
