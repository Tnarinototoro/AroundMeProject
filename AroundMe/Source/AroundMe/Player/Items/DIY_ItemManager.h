// All rights reserved to ShadowCandle Studio

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DIY_ItemDefines.h"
// #include "PhysicalMaterials/PhysicalMaterial.h"
#include "DIY_ItemManager.generated.h"

UCLASS()
class AROUNDME_API UDIY_ItemManagerSubsystem : public UGameInstanceSubsystem
{
    GENERATED_BODY()

public:


    UDIY_ItemManagerSubsystem();

    static UDIY_ItemManagerSubsystem* Get(UWorld* World);

    UFUNCTION(BlueprintCallable, Category = "DIY_ItemManager")
    void RequestSpawnItem(EItemID ItemID, const FVector& Location, const FRotator& Rotation);

    UFUNCTION(BlueprintCallable, Category = "DIY_ItemManager")
    void RequestRecycleItem(AActor* Item);

    UFUNCTION(BlueprintCallable, Category = "DIY_ItemManager")
    UTexture2D* GetItemIconTexture(int32 inItemID) const;

    UFUNCTION(BlueprintCallable, Category = "DIY_ItemManager")
    void RequestChange_ItemNumInBackPack_Statistics(EItemID inItemID, int32 inDeltaNum);

    UFUNCTION(BlueprintCallable, Category = "DIY_ItemManager")
    int32 Get_ItemNumInBackPack_Statistics(EItemID inItemID);

    UFUNCTION(BlueprintCallable, Category = "DIY_ItemManager")
    const FDIY_CraftingReceipt& GetReceiptFromItemID(EItemID inItemID);

    UFUNCTION(BlueprintCallable, Category = "DIY_ItemManager")
    const FDIY_ItemDefualtConfig& GetConfigFromItemID(EItemID inItemID);

    UFUNCTION(BlueprintCallable, Category = "DIY_ItemManager")
    bool TryRequestSpawningItem_CraftPlatform(EItemID inItemID, FVector inLocation, FRotator inRotator);

    static FOnItemsNumInBackPack_Changed OnItemsNumInBackPack_Changed;

protected:
    virtual void Initialize(FSubsystemCollectionBase& Collection) override;
    virtual void Deinitialize() override;

    
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "DIY_ItemManager")
    UDataTable* ItemDataTable;


    UPROPERTY(EditDefaultsOnly, Category = "BackPack")
    UTexture2D* DefualtItemSlotIcon;

    UPROPERTY(EditDefaultsOnly, Category = "BackPack")
    UTexture2D* EmptyItemSlotIcon;

    UPROPERTY(EditDefaultsOnly, Category = "BackPack")
    TArray<UTexture2D*> ItemIcons;

private:
    void SpawnItemByID_Internal(EItemID ItemID, const FVector& Location, const FRotator& Rotation);
    void OnItemRequestRecycle(AActor* inActor);
    void OnItemClassLoaded(EItemID ItemID, FSoftObjectPath ItemPath, FVector Location, FRotator Rotation, FDIY_ItemDefualtConfig inConfig);
    void SpawnActorFromClass(UClass* inClass, const FVector& Location, const FRotator& Rotation, const FDIY_ItemDefualtConfig& inConfig);

    TMap<EItemID, TArray<AActor*>> ItemPools;
    TArray<FDIY_ItemStatisticInfo> ItemStatistics;
};