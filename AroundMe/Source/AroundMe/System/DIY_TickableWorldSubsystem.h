// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DIY_GameInstanceSubsystem.h"
#include "DIY_TickableWorldSubsystem.generated.h"

UCLASS(Abstract)
class AROUNDME_API UDIY_TickableWorldSubsystem : public UTickableWorldSubsystem
{
    GENERATED_BODY()

public:
    virtual bool ShouldCreateSubsystem(UObject *Outer) const override;
    virtual bool DoesSupportWorldType(const EWorldType::Type WorldType) const override;

    virtual TStatId GetStatId() const override;
};
