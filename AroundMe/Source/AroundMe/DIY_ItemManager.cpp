// All rights reserved to ShadowCandle Studio


#include "DIY_ItemManager.h"
#include "Misc/MessageDialog.h"
#include "DIY_Utilities.h"
#include "DIY_ItemDefines.h"
#include "Engine/StreamableManager.h"
#include "Engine/AssetManager.h"
#include "Kismet/GameplayStatics.h"

ADIY_ItemManager* ADIY_ItemManager::ManagerInstance = nullptr;

ADIY_ItemManager::ADIY_ItemManager()
{
  
    PrimaryActorTick.bCanEverTick = false;
    InitializeItemReferences();
    
}

ADIY_ItemManager::~ADIY_ItemManager()
{
   
}

void ADIY_ItemManager::BeginPlay()
{
    if (ADIY_ItemManager::ManagerInstance == nullptr|| ADIY_ItemManager::ManagerInstance!=this)
    {
        ADIY_ItemManager::ManagerInstance = this;
        UDIY_Utilities::DIY_PrintLogToScreen(1.0f, FString{ "MAnager Instance Created!" });
    }
    else
    {
        UDIY_Utilities::DIY_PrintLogToScreen(1.0f, FString{ "MAnager Instance Failed Creating!" },FColor::Red);
    }
    

}

void ADIY_ItemManager::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    ADIY_ItemManager::ManagerInstance = nullptr;
}

void ADIY_ItemManager::Tick(float indelta)
{
    Super::Tick(indelta);
    
}

ADIY_ItemManager* ADIY_ItemManager::GetManager()
{
    return ManagerInstance;
   
}

void ADIY_ItemManager::InitializeItemReferences()
{
}
// 实现
void ADIY_ItemManager::SpawnItemByID(EItemID ItemID, const FVector& Location, const FRotator& Rotation)
{

    FSoftObjectPath* needed_pathobject= CachedPathObjects.Find(ItemID);
    FSoftObjectPath ItemPath{nullptr};
    if (nullptr != needed_pathobject)
    {
        ItemPath = *needed_pathobject;
        UE_LOG(LogTemp, Warning, TEXT("Path Got from cache"));
    }
    else
    {
        int32 item_id = static_cast<int32>(ItemID);
        // 如果没有缓存，开始异步加载流程
        FName RowName = (item_id == 0) ? FName(TEXT("NewRow")) : FName(*FString::Printf(TEXT("NewRow_%d"), item_id - 1));
        const FDIY_ItemDataTableRow* Row = ItemDataTable->FindRow<FDIY_ItemDataTableRow>(RowName, TEXT(""), true);

        if (Row)
        {
            FString PathString = Row->ItemPath.ToString();
            if (!PathString.EndsWith(TEXT("_C")))
            {
                PathString.Append(TEXT("_C"));
            }
            ItemPath = FSoftObjectPath(PathString);
            UE_LOG(LogTemp, Warning, TEXT("Path Got from Looking Into the table"));
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("Item ID not found in DataTable: %d"), static_cast<int32>(ItemID));
        }
    }
    

    if (ItemPath.IsValid())
    {
        CachedPathObjects.FindOrAdd(ItemID, ItemPath);
        TSoftObjectPtr<UClass> ClassToLoad(ItemPath);
        UClass* LoadedClass = ClassToLoad.Get();
        if (LoadedClass)
        {

            // 使用缓存的类
            SpawnActorFromClass(LoadedClass, Location, Rotation);
            UE_LOG(LogTemp, Warning, TEXT("Spawned From Editor Cache"));
            return;
        }

        UAssetManager::GetStreamableManager().RequestAsyncLoad(ItemPath, FStreamableDelegate::CreateUObject(this, &ADIY_ItemManager::OnItemClassLoaded, ItemID, ItemPath, Location, Rotation));
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Item path is invalid for ID: %d"), static_cast<int32>(ItemID));
    }
}

void ADIY_ItemManager::OnItemClassLoaded(EItemID ItemID,FSoftObjectPath ItemPath, FVector Location, FRotator Rotation)
{
    TSoftObjectPtr<UClass> ClassToLoad(ItemPath);
    UClass* LoadedClass = ClassToLoad.Get();

    if (LoadedClass)
    {
        
        SpawnActorFromClass(LoadedClass, Location, Rotation);
        UE_LOG(LogTemp, Warning, TEXT("Spawned From Loading"));
       
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Failed to load class for path: %s"), *ItemPath.ToString());
    }
}

void ADIY_ItemManager::SpawnActorFromClass(UClass* ActorClass, const FVector& Location, const FRotator& Rotation)
{
    if (UWorld* World = GetWorld())
    {
        AActor* SpawnedActor = World->SpawnActor<AActor>(ActorClass, Location, Rotation);
        if (SpawnedActor)
        {
            // 成功生成的Actor处理逻辑
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("Failed to spawn actor from class."));
        }
    }
}