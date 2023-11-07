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
    // ��ȡItemManager�ĵ���ʵ��
    static ADIY_ItemManager* GetManager();

    // �ڹ�������ʼ��ʱ����������Item����
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

    
    // ��ADIY_ItemManager.h�����
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Items")
        UDataTable* ItemDataTable;
    // ��ADIY_ItemManager.h�����
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Items")
        TMap < EItemID, FSoftObjectPath > BP_Items_Map;
    // ���ڴӻ���������Actor�İ�������
    
private:

    // ����ָ��
    static ADIY_ItemManager* ManagerInstance;
    void SpawnActorFromClass(UClass* inClass , const FVector& Location, const FRotator& Rotation);
    void OnItemClassLoaded(EItemID ItemID, FSoftObjectPath ItemPath, FVector Location, FRotator Rotation);

    // �����Ѽ��ص���
    //TMap<EItemID, TSoftObjectPtr<UClass>> LoadedItemSoftAllClasses;
    TMap<EItemID, FSoftObjectPath> CachedPathObjects;
};