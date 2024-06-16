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
    //UFUNCTION(BlueprintCallable, Category = "DIY_ItemManager")
    void SpawnItemByID(EItemID ItemID, const FVector &Location, const FRotator &Rotation);

    // Called every frame
    virtual void Tick(float DeltaTime) override;
    // Spawn an Item
    UFUNCTION(BlueprintCallable, Category = "DIY_ItemManager")
    void RequestSpawnItem(EItemID ItemID, const FVector &Location, const FRotator &Rotation);
     // Spawn an Item
    UFUNCTION(BlueprintCallable, Category = "DIY_ItemManager")
    void RequestRecycleItem(AActor *Item);

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
    void SpawnActorFromClass(UClass *inClass, const FVector &Location, const FRotator &Rotation, const FDIY_ItemDefualtConfig &inConfig);
    void OnItemClassLoaded(EItemID ItemID, FSoftObjectPath ItemPath, FVector Location, FRotator Rotation, FDIY_ItemDefualtConfig inConfig);

    // TMap<EItemID, TSoftObjectPtr<UClass>> LoadedItemSoftAllClasses;
    TMap<EItemID, FSoftObjectPath> CachedPathObjects;

    
    TMap<EItemID, TArray<AActor *>> ItemPools;
};