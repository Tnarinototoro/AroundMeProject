// All rights reserved to ShadowCandle Studio

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DIY_ItemDefines.h"
#include "../../System/DIY_GameInstanceSubsystem.h"
// #include "PhysicalMaterials/PhysicalMaterial.h"
#include "DIY_ItemManager.generated.h"

UCLASS()
class AROUNDME_API UDIY_ItemManagerSubsystem : public UDIY_GameInstanceSubsystem
{
    GENERATED_BODY()

public:
    UDIY_ItemManagerSubsystem();

    static UDIY_ItemManagerSubsystem *Get(UWorld *World);

    UFUNCTION(BlueprintCallable, Category = "DIY_ItemManager", meta = (AllowedTypes = "Item"))
    void RequestSpawnItem(FPrimaryAssetId ItemID, const FVector &Location, const FRotator &Rotation);

    UFUNCTION(BlueprintCallable, Category = "DIY_ItemManager")
    void RequestRecycleItem(AActor *Item);

    UFUNCTION(BlueprintCallable, Category = "DIY_ItemManager")
    UTexture2D *GetItemIconTexture(FPrimaryAssetId inITemID) const;

    UFUNCTION(BlueprintCallable, Category = "DIY_ItemManager")
    void RequestChange_ItemNumInBackPack_Statistics(FPrimaryAssetId inItemID, int32 inDeltaNum);

    UFUNCTION(BlueprintCallable, Category = "DIY_ItemManager")
    int32 Get_ItemNumInBackPack_Statistics(FPrimaryAssetId inItemID);

    const FDIY_CraftingReceipt *GetReceiptFromItemID(FPrimaryAssetId inItemID) const;

    const FDIY_ItemDefaultConfig *GetConfigFromItemID(FPrimaryAssetId inItemID) const;

    UFUNCTION(BlueprintCallable, Category = "DIY_ItemManager")
    bool TryRequestSpawningItem_CraftPlatform(FPrimaryAssetId inItemID, FVector inLocation, FRotator inRotator);

    static FOnItemsNumInBackPack_Changed OnItemsNumInBackPack_Changed;

	
	UFUNCTION(BlueprintCallable, Category = "DIY_ItemManager")
    float GetCurrentEnergyTotalEarned() const;

	UFUNCTION(BlueprintCallable, Category = "DIY_ItemManager")
    bool TryAddEnergyTotalEarned(float inDeltaEnergy);
	UFUNCTION(BlueprintCallable, Category = "DIY_ItemManager")
    float GetEnergyTotalEarnedLimit() const;



protected:
    virtual void Initialize(FSubsystemCollectionBase &Collection) override;
    virtual void Deinitialize() override;

private:
    void SpawnItemByID_Internal(FPrimaryAssetId ItemID, FVector Location, FRotator Rotation);
    void OnItemRequestRecycle(AActor *inActor);
    void OnItemClassLoaded(FPrimaryAssetId ItemID, FSoftObjectPath ItemPath, FVector Location, FRotator Rotation);
    void SpawnActorFromClass(UClass *inClass, FVector Location, FRotator Rotation, FPrimaryAssetId ItemID);

    TMap<FPrimaryAssetId, TArray<AActor *>> ItemPools;
    TMap<FPrimaryAssetId, FDIY_ItemStatisticInfo> ItemStatistics;

	float CurrentEnergyTotalEarned{ 0.f };

private:
    TSubclassOf<class UDIY_ItemManagerSubsystemHelperBase> SubsystemHelperClass;

public:
    UPROPERTY(Transient, BlueprintReadOnly)
    class UDIY_ItemManagerSubsystemHelperBase *SubsystemHelper;
};

// Subsystem helper
UCLASS(Abstract, Blueprintable, MinimalAPI, meta = (ShowWorldContextPin))
class UDIY_ItemManagerSubsystemHelperBase : public UObject
{
    GENERATED_BODY()

public:
    friend class UDIY_ItemManagerSubsystem;

    // virtual class UWorld* GetWorld() const override;

public:
    UPROPERTY(EditDefaultsOnly, Category = "BackPack")
    UTexture2D *DefaultItemSlotIcon;

    UPROPERTY(EditDefaultsOnly, Category = "BackPack")
    UTexture2D *EmptyItemSlotIcon;

    UPROPERTY(EditDefaultsOnly, Category = "BackPack")
    float EnergyTotalEarnedLimit{999999.f};

protected:
public:
    void Initialize();

public:
#if 1 // test.
    // Test Function 1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TestFunction1();

    // Test Function 2
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TestFunction2(const int32 &MyInt);

    // Test Function 3
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FString TestFunction3();
#endif
};