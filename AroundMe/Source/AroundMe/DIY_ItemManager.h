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
    // 获取ItemManager的单例实例
    static ADIY_ItemManager* GetManager();

    // 在管理器初始化时调用以设置Item引用
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

    
    // 在ADIY_ItemManager.h中添加
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Items")
        UDataTable* ItemDataTable;
    // 在ADIY_ItemManager.h中添加
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Items")
        TMap < EItemID, FSoftObjectPath > BP_Items_Map;
    // 用于从缓存中生成Actor的帮助函数
    
private:

    // 单例指针
    static ADIY_ItemManager* ManagerInstance;
    void SpawnActorFromClass(UClass* inClass , const FVector& Location, const FRotator& Rotation);
    void OnItemClassLoaded(EItemID ItemID, FSoftObjectPath ItemPath, FVector Location, FRotator Rotation);

    // 缓存已加载的类
    //TMap<EItemID, TSoftObjectPtr<UClass>> LoadedItemSoftAllClasses;
    TMap<EItemID, FSoftObjectPath> CachedPathObjects;
};