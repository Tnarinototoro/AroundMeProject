// All rights reserved to ShadowCandle Studio

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DIY_ItemDefines.h"
// #include "PhysicalMaterials/PhysicalMaterial.h"
#include "DIY_ItemManager.generated.h"

UCLASS(Blueprintable)
class AROUNDME_API ADIY_ItemManager : public AActor
{
    GENERATED_BODY()

public:
    static ADIY_ItemManager *GetManager();

    UFUNCTION(BlueprintCallable, Category = "DIY_ItemManager")
    void InitializeItemReferences();

    // Spawn an Item
    // UFUNCTION(BlueprintCallable, Category = "DIY_ItemManager")

    // Called every frame
    virtual void Tick(float DeltaTime) override;
    // Spawn an Item
    UFUNCTION(BlueprintCallable, Category = "DIY_ItemManager")
    void RequestSpawnItem(EItemID ItemID, const FVector &Location, const FRotator &Rotation);
    // Spawn an Item
    UFUNCTION(BlueprintCallable, Category = "DIY_ItemManager")
    void RequestRecycleItem(AActor *Item);
    UFUNCTION(BlueprintCallable, Category = "DIY_ItemManager")
    class UTexture2D *GetItemIconTexture(int32 inITemID) const;

    UFUNCTION(BlueprintCallable, Category = "DIY_ItemManager")
    void RequestChange_ItemNumInBackPack_Statistics(EItemID inItemID, int32 inDeltaNum);

    UFUNCTION(BlueprintCallable, Category = "DIY_ItemManager")
    int32 Get_ItemNumInBackPack_Statistics(EItemID inItemID);

    UFUNCTION(BlueprintCallable, Category = "DIY_ItemManager")
    const FDIY_CraftingReceipt &GetReceiptFromItemID(EItemID inItemID);

    UFUNCTION(BlueprintCallable, Category = "DIY_ItemManager")
    const FDIY_ItemDefualtConfig &GetConfigFromItemID(EItemID inItemID);

    UFUNCTION(BlueprintCallable, Category = "DIY_ItemManager")
    bool TryRequestSpawningItem_CraftPlatform(EItemID inItemID, FVector inLocation, FRotator inRotator);

    static FOnItemsNumInBackPack_Changed OnItemsNumInBackPack_Changed;

protected:
    ADIY_ItemManager();
    ~ADIY_ItemManager();
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;
    /** Overridable function called whenever this actor is being removed from a level */
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "DIY_ItemManager")
    UDataTable *ItemDataTable;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "DIY_ItemManager")
    TMap<EItemID, FSoftObjectPath> BP_Items_Map;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "DIY_ItemManager")
    TArray<class UPhysicalMaterial *> Item_PhysicsDepo;

private:
    static ADIY_ItemManager *ManagerInstance;
    void SpawnItemByID_Internal(EItemID ItemID, const FVector &Location, const FRotator &Rotation);
    void OnItemRequestRecycle(class AActor *inActor);
    void OnItemClassLoaded(EItemID ItemID, FSoftObjectPath ItemPath, FVector Location, FRotator Rotation, FDIY_ItemDefualtConfig inConfig);
    void SpawnActorFromClass(UClass *inClass, const FVector &Location, const FRotator &Rotation, const FDIY_ItemDefualtConfig &inConfig);

    TMap<EItemID, TArray<AActor *>> ItemPools;

    UPROPERTY(EditDefaultsOnly, Category = "BackPack")
    class UTexture2D *DefualtItemSlotIcon;
    UPROPERTY(EditDefaultsOnly, Category = "BackPack")
    class UTexture2D *EmptyItemSlotIcon;
    UPROPERTY(EditDefaultsOnly, Category = "BackPack")
    TArray<class UTexture2D *> ItemIcons;

    TArray<FDIY_ItemStatisticInfo> ItemStatistics;
};