// All rights reserved to ShadowCandle Studio

#include "DIY_ItemManager.h"
#include "Misc/MessageDialog.h"

#include "DIY_ItemDefines.h"
#include "Engine/StreamableManager.h"
#include "Engine/AssetManager.h"
#include "Kismet/GameplayStatics.h"
#include "DIY_Item.h"
#include "../../GameUtilities/Logs/DIY_LogHelper.h"
#include "../../GameUtilities/DIY_Utilities.h"

ADIY_ItemManager *ADIY_ItemManager::ManagerInstance = nullptr;

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
    if (ADIY_ItemManager::ManagerInstance == nullptr || ADIY_ItemManager::ManagerInstance != this)
    {
        ADIY_ItemManager::ManagerInstance = this;
        UDIY_Utilities::DIY_PrintLogToScreen(1.0f, FString{"MAnager Instance Created!"});
    }
    else
    {
        UDIY_Utilities::DIY_PrintLogToScreen(1.0f, FString{"MAnager Instance Failed Creating!"}, FColor::Red);
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

void ADIY_ItemManager::RequestSpawnItem(EItemID ItemID, const FVector &Location, const FRotator &Rotation)
{
    TArray<AActor *> *Pool = ItemPools.Find(ItemID);
    if (nullptr != Pool && Pool->Num() > 0)
    {
        AActor *Item = Pool->Pop();
        Item->SetActorLocationAndRotation(Location, Rotation);
        Item->SetActorHiddenInGame(false);
        Item->SetActorEnableCollision(true);

        const FDIY_ItemDefualtConfig *cur_config{nullptr};
        int32 item_id = static_cast<int32>(ItemID);

        FName RowName = (item_id == 0) ? FName(TEXT("NewRow")) : FName(*FString::Printf(TEXT("NewRow_%d"), item_id - 1));
        const FDIY_ItemDataTableRow *Row = ItemDataTable->FindRow<FDIY_ItemDataTableRow>(RowName, TEXT(""), true);
        if (Row != nullptr)
        {

            cur_config = &(Row->ItemDefualtConfig);
            ADIY_ItemBase *ItemBase = Cast<ADIY_ItemBase>(Item);
            if (ItemBase)
            {
                ItemBase->InitWithConfig(*cur_config);
                return;
            }
        }
    }

    SpawnItemByID_Internal(ItemID, Location, Rotation);
}

void ADIY_ItemManager::RequestRecycleItem(AActor *Item)
{

    if (!Item)
    {
        return;
    }

    ADIY_ItemBase *ItemBase = Cast<ADIY_ItemBase>(Item);
    if (!ItemBase)
    {
        return;
    }

    EItemID ItemID = ItemBase->GetItemID();
    Item->SetActorHiddenInGame(true);
    Item->SetActorEnableCollision(false);
    TArray<AActor *> &Pool = ItemPools.FindOrAdd(ItemID);
    Pool.Add(Item);
}

UTexture2D *ADIY_ItemManager::GetItemIconTexture(int32 inITemID) const
{
    ensureMsgf(DefualtItemSlotIcon != nullptr && nullptr != EmptyItemSlotIcon, TEXT("please set up defualt and empty slot icon for backup"));
    if (inITemID >= (int32)EItemID::EItemID_Count)
        return DefualtItemSlotIcon;
    if (inITemID < 0)
        return EmptyItemSlotIcon;
    UTexture2D *icon = ItemIconsMap.FindRef((EItemID)inITemID);

    ensureMsgf(icon != nullptr, TEXT("icon must be fullfiled with valid path"));

    return icon;
}

ADIY_ItemManager *ADIY_ItemManager::GetManager()
{
    return ManagerInstance;
}

void ADIY_ItemManager::InitializeItemReferences()
{
}

void ADIY_ItemManager::SpawnItemByID_Internal(EItemID ItemID, const FVector &Location, const FRotator &Rotation)
{

    FSoftObjectPath *needed_pathobject = CachedPathObjects.Find(ItemID);
    FSoftObjectPath ItemPath{nullptr};
    const FDIY_ItemDefualtConfig *cur_config{nullptr};
    if (nullptr != needed_pathobject)
    {
        ItemPath = *needed_pathobject;
        EASY_LOG_MAINPLAYER("Path Got from cache");
    }
    else
    {
        int32 item_id = static_cast<int32>(ItemID);

        FName RowName = (item_id == 0) ? FName(TEXT("NewRow")) : FName(*FString::Printf(TEXT("NewRow_%d"), item_id - 1));
        const FDIY_ItemDataTableRow *Row = ItemDataTable->FindRow<FDIY_ItemDataTableRow>(RowName, TEXT(""), true);

        if (Row)
        {
            FString PathString = Row->ItemPath.ToString();

            cur_config = &(Row->ItemDefualtConfig);
            if (!PathString.EndsWith(TEXT("_C")))
            {
                PathString.Append(TEXT("_C"));
            }
            ItemPath = FSoftObjectPath(PathString);
            EASY_LOG_MAINPLAYER("Path Got from Looking Into the table");
        }
        else
        {
            EASY_LOG_MAINPLAYER("Item ID not found in DataTable: %d", static_cast<int32>(ItemID));
        }
    }

    if (ItemPath.IsValid() && cur_config != nullptr)
    {
        CachedPathObjects.FindOrAdd(ItemID, ItemPath);
        TSoftObjectPtr<UClass> ClassToLoad(ItemPath);
        UClass *LoadedClass = ClassToLoad.Get();
        if (LoadedClass)
        {

            SpawnActorFromClass(LoadedClass, Location, Rotation, *cur_config);
            EASY_LOG_MAINPLAYER("Spawned From Editor Cache");

            return;
        }

        UAssetManager::GetStreamableManager().RequestAsyncLoad(ItemPath, FStreamableDelegate::CreateUObject(this, &ADIY_ItemManager::OnItemClassLoaded, ItemID, ItemPath, Location, Rotation, *cur_config));
    }
    else
    {
        EASY_LOG_MAINPLAYER("Item path is invalid for ID: %d", static_cast<int32>(ItemID));
    }
}

void ADIY_ItemManager::OnItemClassLoaded(EItemID ItemID, FSoftObjectPath ItemPath, FVector Location, FRotator Rotation, FDIY_ItemDefualtConfig inConfig)
{
    TSoftObjectPtr<UClass> ClassToLoad(ItemPath);
    UClass *LoadedClass = ClassToLoad.Get();

    if (LoadedClass)
    {

        SpawnActorFromClass(LoadedClass, Location, Rotation, inConfig);

        EASY_LOG_MAINPLAYER("Spawned From Loading");
    }
    else
    {

        EASY_LOG_MAINPLAYER("Failed to load class for path: %s", *ItemPath.ToString());
    }
}

void ADIY_ItemManager::SpawnActorFromClass(UClass *ActorClass, const FVector &Location, const FRotator &Rotation, const FDIY_ItemDefualtConfig &inConfig)
{
    if (UWorld *World = GetWorld())
    {
        AActor *SpawnedActor = World->SpawnActor<AActor>(ActorClass, Location, Rotation);
        if (SpawnedActor)
        {
            ADIY_ItemBase *tmp_item = Cast<ADIY_ItemBase>(SpawnedActor);
            if (nullptr != tmp_item)
            {
                tmp_item->InitWithConfig(inConfig);

                EASY_LOG_MAINPLAYER("Actor spawned successfully with config");
            }
        }
        else
        {
            EASY_LOG_MAINPLAYER("Failed to spawn actor from class.");
        }
    }
}