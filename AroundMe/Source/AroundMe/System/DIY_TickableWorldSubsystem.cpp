// Fill out your copyright notice in the Description page of Project Settings.

#include "DIY_TickableWorldSubsystem.h"

#include "Misc/OutputDeviceNull.h"

bool UDIY_TickableWorldSubsystem::ShouldCreateSubsystem(UObject *Outer) const
{
    // if (UWorld *World = Cast<UWorld>(Outer))
    // {
    //     if (UGameInstance *GameInstance = World->GetGameInstance())
    //     {
    //         if (!DoesSupportInstanceType(GameInstance->GetInstanceType()))
    //         {
    //             return false;
    //         }
    //     }
    // }
    return Super::ShouldCreateSubsystem(Outer);
}

bool UDIY_TickableWorldSubsystem::DoesSupportWorldType(const EWorldType::Type WorldType) const
{
    return WorldType == EWorldType::Game || WorldType == EWorldType::PIE;
}

TStatId UDIY_TickableWorldSubsystem::GetStatId() const
{
    RETURN_QUICK_DECLARE_CYCLE_STAT(UDIY_TickableWorldSubsystem, STATGROUP_Tickables);
}
