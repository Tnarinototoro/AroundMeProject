// Fill out your copyright notice in the Description page of Project Settings.

// #pragma once

// #include "CoreMinimal.h"
// #include "DebugEntry/DIY_DebugEntryItem.h"
// #include "OD/System/DIY_GameInstanceSubsystem.h"
// #include "DIY_DebugSubsystem.generated.h"

// /**
//  *
//  */
// UCLASS(config = Game)
// class AROUNDME_API UDIY_DebugSubsystem : public UDIY_GameInstanceSubsystem
// {
//     GENERATED_BODY()

// public:
//     UDIY_DebugSubsystem();

//     virtual void Initialize(FSubsystemCollectionBase &Collection) override;

//     virtual void OnWorldChange(UWorld *NewWorld) override;
//     void OnWorldActorsBeginPlay();

//     UFUNCTION()
//     void OnWorldInit();

//     void OnCharacterInit();

//     UFUNCTION(BlueprintCallable, BlueprintPure, Category = "DIY|Debug")
//     static bool ShouldEnableDebug();

//     UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "DIY|Debug")
//     bool bDebugFastForward = false;

//     UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "DIY|Debug")
//     float DebugFastForwardRate = 30.f;

//     UFUNCTION(BlueprintCallable, Category = "DIY|Debug")
//     void SetDebugFastForward(bool bEnable);

//     DECLARE_MULTICAST_DELEGATE_TwoParams(FFastForwardDelegate, bool, float);
//     FFastForwardDelegate OnDebugFastForwardChanged;

//     UFUNCTION(BlueprintCallable, BlueprintPure, Category = "DIY|Debug", meta = (WorldContext = "WorldContextObject"))
//     static float GetDebugFastForwardRate(const UObject *WorldContextObject);

//     UFUNCTION(BlueprintCallable, Category = "DIY|Debug")
//     void StartFromDebugEntry(const FDIY_DebugEntryInfo &DebugEntryInfo);

//     UFUNCTION(BlueprintCallable, Category = "DIY|Debug")
//     EDIY_DebugEntryBeginTiming GetCurrentDebugEntryTiming() const;

//     UFUNCTION(BlueprintCallable, Category = "DIY|Debug")
//     EDIY_DebugEntryPosition GetCurrentDebugEntryPosition() const;

//     UFUNCTION(BlueprintCallable, Category = "DIY|Debug")
//     FGameplayTagContainer GetDebugGameFlags() const;

//     UFUNCTION(BlueprintCallable, Category = "DIY|Debug")
//     TArray<TSoftClassPtr<UDIY_PocketInventoryItem>> GetDebugInventory() const;

//     UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "DIY|Debug")
//     TMap<TSoftObjectPtr<AActor>, bool> GetDebugDoorLockedState() const;

//     UFUNCTION(BlueprintCallable, Category = "DIY|Debug")
//     bool HasCurrentDebugEntryInfo(FDIY_DebugEntryInfo &DebugEntryInfo) const;

//     TOptional<FDIY_DebugEntryInfo> GetCurrentDebugEntryInfo() const;

// private:
//     TOptional<FDIY_DebugEntryInfo> CurrentDebugEntryInfo;

//     UPROPERTY(Transient)
//     TArray<UDIY_DebugEntryScript *> DebugEntryScripts;

// public:
//     UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly, Category = "DIY|Debug")
//     TMap<EDIY_DebugEntryLevel, TSoftObjectPtr<UWorld>> LevelMap;

//     UPROPERTY(Config)
//     TSoftObjectPtr<UDataTable> DebugEntryInfoTable;

//     UPROPERTY()
//     UDataTable *DebugEntryInfoTablePtr = nullptr;

//     UFUNCTION(BlueprintCallable, BlueprintPure, Category = "DIY|Debug")
//     static UDataTable *GetDebugEntryInfoTable();

//     UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "DIY|Debug", meta = (ExpandBoolAsExecs = "ReturnValue"))
//     static bool FindDebugEntryInfo(const FName &RowName, FDIY_DebugEntryInfo &FoundDebugEntryInfo, bool bInheritPrevRows = true);

// public:
//     static TOptional<FDIY_DebugEntryInfo> OneTimeDebugEntryInfo;
//     static TOptional<FDIY_DebugEntryInfo> StaticDebugEntryInfo;

//     UFUNCTION(BlueprintCallable, Category = "DIY|Debug")
//     static void SetOneTimeDebugEntryInfo(const FDIY_DebugEntryInfo &DebugEntryInfo);

//     UFUNCTION(BlueprintCallable, Category = "DIY|Debug")
//     static void SetStaticDebugEntryInfo(const FDIY_DebugEntryInfo &DebugEntryInfo);

//     UFUNCTION(BlueprintCallable, Category = "DIY|Debug")
//     static void ClearStaticDebugEntryInfo();
// };
