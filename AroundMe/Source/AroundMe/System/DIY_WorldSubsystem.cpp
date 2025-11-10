// Fill out your copyright notice in the Description page of Project Settings.

#include "DIY_WorldSubsystem.h"

void UDIY_WorldSubsystem::Initialize(FSubsystemCollectionBase &Collection)
{
    Super::Initialize(Collection);

    if (GetWorldRef().GetBegunPlay())
    {
        OnWorldActorsBeginPlay();
    }
    else
    {
        GetWorldRef().OnWorldBeginPlay.AddUObject(this, &UDIY_WorldSubsystem::OnWorldActorsBeginPlay);
    }
}

bool UDIY_WorldSubsystem::ShouldCreateSubsystem(UObject *Outer) const
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

bool UDIY_WorldSubsystem::DoesSupportWorldType(const EWorldType::Type WorldType) const
{
    return WorldType == EWorldType::Game || WorldType == EWorldType::PIE;
}

