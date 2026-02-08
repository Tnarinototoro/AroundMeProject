// Copyright Epic Games, Inc. All Rights Reserved.

#include "AroundMeGameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/LevelStreaming.h"
#include "GameUtilities/Logs/DIY_LogHelper.h"


AAroundMeGameModeBase::AAroundMeGameModeBase()
{
    // 关键：初始设为 None，阻止引擎自动生成
    DefaultPawnClass = nullptr;
    GroundLevelName = TEXT("L_Castle_Ground"); // 替换为你的实际名称
}

void AAroundMeGameModeBase::BeginPlay()
{
    Super::BeginPlay();

   
    ULevelStreaming* LevelStreaming = UGameplayStatics::GetStreamingLevel(this, GroundLevelName);

    if (LevelStreaming)
    {
       
        if (LevelStreaming->IsLevelVisible())
        {
            SpawnAndPossessPlayer();
        }
        else
        {
            
            LevelStreaming->OnLevelShown.AddDynamic(this, &AAroundMeGameModeBase::OnGroundLevelVisible);
        }
    }
    else
    {
        
        SpawnAndPossessPlayer();
    }
}

void AAroundMeGameModeBase::OnGroundLevelVisible()
{
   
    FTimerHandle TimerHandle;
    GetWorldTimerManager().SetTimer(TimerHandle, this, &AAroundMeGameModeBase::SpawnAndPossessPlayer, 0.1f, false);
}

void AAroundMeGameModeBase::SpawnAndPossessPlayer()
{
   
    APlayerController* PC = GetWorld()->GetFirstPlayerController();
    if (!PC || PC->GetPawn() != nullptr) return;


    
    AActor* StartNode = FindPlayerStart(PC);
    FVector SpawnLoc = StartNode ? StartNode->GetActorLocation() : FVector::ZeroVector;
    

    if (MainPawnClass)
    {
        APawn* NewPawn = GetWorld()->SpawnActor<APawn>(MainPawnClass, SpawnLoc, FRotator::ZeroRotator);
        if (NewPawn)
        {
            PC->Possess(NewPawn);
            

            
        }
    }
}