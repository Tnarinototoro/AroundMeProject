// All rights reserved to ShadowCandle Studio

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DIY_ItemDefines.h"
#include "DIY_ItemManager.generated.h"



UCLASS(Blueprintable)
class AROUNDME_API ADIY_ItemManager : public AActor
{
    GENERATED_BODY()

public:
  
    static ADIY_ItemManager* GetManager();

 
    UFUNCTION(BlueprintCallable, Category = "Items")
        void InitializeItemReferences();

    // Spawn an Item
    UFUNCTION(BlueprintCallable, Category = "Items")
        void SpawnItemByID(EItemID ItemID, const FVector& Location, const FRotator& Rotation);

    // Called every frame
    virtual void Tick(float DeltaTime) override;
protected:
 
    ADIY_ItemManager();
    ~ADIY_ItemManager();
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;
    /** Overridable function called whenever this actor is being removed from a level */
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason)override;

    
  
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Items")
        UDataTable* ItemDataTable;
   
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Items")
        TMap < EItemID, FSoftObjectPath > BP_Items_Map;
 
    
private:

  
    static ADIY_ItemManager* ManagerInstance;
    void SpawnActorFromClass(UClass* inClass , const FVector& Location, const FRotator& Rotation);
    void OnItemClassLoaded(EItemID ItemID, FSoftObjectPath ItemPath, FVector Location, FRotator Rotation);

 
    //TMap<EItemID, TSoftObjectPtr<UClass>> LoadedItemSoftAllClasses;
    TMap<EItemID, FSoftObjectPath> CachedPathObjects;
};