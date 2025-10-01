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
#include "../../System/Util/DIY_SysUtil.h"


FOnItemsNumInBackPack_Changed UDIY_ItemManagerSubsystem::OnItemsNumInBackPack_Changed = {};



void UDIY_ItemManagerSubsystem::RequestSpawnItem(EItemID ItemID, const FVector &Location, const FRotator &Rotation)
{
    TArray<AActor *> *Pool = ItemPools.Find(ItemID);
    if (nullptr != Pool && Pool->Num() > 0)
    {
        AActor *Item = Pool->Pop();
        Item->SetActorLocationAndRotation(Location, Rotation, false, nullptr, ETeleportType::ResetPhysics);
        Item->SetActorHiddenInGame(false);

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
                ItemBase->SetActorTickEnabled(true);

                EASY_LOG_MAINPLAYER("item %s successfully spawned from items pool", *UEnum::GetValueAsString(ItemID));
                return;
            }
        }
    }

    SpawnItemByID_Internal(ItemID, Location, Rotation);
}

void UDIY_ItemManagerSubsystem::RequestRecycleItem(AActor *Item)
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

    // // Disable physics simulation
    // ItemBase->SetActorEnableCollision(false);
    ItemBase->SetActorHiddenInGame(true);
    ItemBase->SetActorTickEnabled(false);

    UPrimitiveComponent *PrimitiveComponent = Cast<UPrimitiveComponent>(ItemBase->GetRootComponent());
    if (PrimitiveComponent)
    {
        PrimitiveComponent->SetSimulatePhysics(false);
        PrimitiveComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    }

    // Move the actor to a safe location (e.g., far from any active area)
    ItemBase->SetActorLocation(FVector(0.0f, 0.0f, 10000.0f));

    // Add the actor to the pool
    TArray<AActor *> &Pool = ItemPools.FindOrAdd(ItemID);
    Pool.Add(Item);
    EASY_LOG_MAINPLAYER("item %s recycled to the objects pool", *UEnum::GetValueAsString(ItemID));
}

UTexture2D *UDIY_ItemManagerSubsystem::GetItemIconTexture(int32 inITemID) const
{

    ensureMsgf(DefualtItemSlotIcon != nullptr && nullptr != EmptyItemSlotIcon, TEXT("please set up defualt and empty slot icon for backup"));
    if (inITemID >= (int32)EItemID::EItemID_Count)
    {

        return DefualtItemSlotIcon;
    }
    if (inITemID < 0)
    {

        return EmptyItemSlotIcon;
    }

    if (inITemID >= ItemIcons.Num())
    {
    }
    UTexture2D *icon = ItemIcons[inITemID];

    ensureMsgf(nullptr != icon, TEXT("Icon setup is not well done"));
    EASY_LOG_MAINPLAYER("GetItemIconTexture item id %d  Image Path is %s", inITemID, *icon->GetFullName());
    return icon;
}

UDIY_ItemManagerSubsystem::UDIY_ItemManagerSubsystem()
{
    

 // --- DataTable ---
    static ConstructorHelpers::FObjectFinder<UDataTable> DT_ItemDepot(
        TEXT("/Game/Blueprint/Items/DataTable/DT_DIY_ItemDepot.DT_DIY_ItemDepot"));
    if (DT_ItemDepot.Succeeded())
    {
        ItemDataTable = DT_ItemDepot.Object;
    }

    // --- Default Slot Icon ---
    static ConstructorHelpers::FObjectFinder<UTexture2D> DefaultIconObj(
        TEXT("/Game/Blueprint/Items/ItemParts/UITextures/ICON_TEST.ICON_TEST"));
    if (DefaultIconObj.Succeeded())
    {
        DefualtItemSlotIcon = DefaultIconObj.Object;
    }

    // --- Empty Slot Icon ---
    static ConstructorHelpers::FObjectFinder<UTexture2D> EmptyIconObj(
        TEXT("/Game/Blueprint/Items/ItemParts/UITextures/Slot_Empty.Slot_Empty"));
    if (EmptyIconObj.Succeeded())
    {
        EmptyItemSlotIcon = EmptyIconObj.Object;
    }

    ItemIcons.Reset();
    
    static ConstructorHelpers::FObjectFinder<UTexture2D> AppleIconObj(
        TEXT("/Game/Blueprint/Items/ItemParts/UITextures/apple_icon.apple_icon"));
    if (AppleIconObj.Succeeded())
    {
        for(uint32 id = 0; id < (uint32)EItemID::EItemID_Count; ++id)
        {
            ItemIcons.Add(AppleIconObj.Object);
        }
    }

}

UDIY_ItemManagerSubsystem *UDIY_ItemManagerSubsystem::Get(UWorld *World)
{
   
    return DIY_SysUtil::GetGameInstanceSubsystem<UDIY_ItemManagerSubsystem>(World);;
}

void UDIY_ItemManagerSubsystem::SpawnItemByID_Internal(EItemID ItemID, const FVector &Location, const FRotator &Rotation)
{

    FSoftObjectPath ItemPath{nullptr};
    const FDIY_ItemDefualtConfig *cur_config{nullptr};

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

    ensureMsgf(ItemPath.IsValid() && cur_config != nullptr, TEXT("item id %d config not found in item depot please check the csv/datatable"), static_cast<int32>(ItemID));
    TSoftObjectPtr<UClass> ClassToLoad(ItemPath);
    UClass *LoadedClass = ClassToLoad.Get();
    if (LoadedClass)
    {

        SpawnActorFromClass(LoadedClass, Location, Rotation, *cur_config);
        EASY_LOG_MAINPLAYER("Spawned From Editor Cache");

        return;
    }

    UAssetManager::GetStreamableManager().RequestAsyncLoad(
        ItemPath,
        FStreamableDelegate::CreateUObject(this,
                                           &UDIY_ItemManagerSubsystem::OnItemClassLoaded,
                                           ItemID,
                                           ItemPath,
                                           Location,
                                           Rotation,
                                           *cur_config));
}

void UDIY_ItemManagerSubsystem::OnItemClassLoaded(EItemID ItemID, FSoftObjectPath ItemPath, FVector Location, FRotator Rotation, FDIY_ItemDefualtConfig inConfig)
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

void UDIY_ItemManagerSubsystem::SpawnActorFromClass(UClass *ActorClass, const FVector &Location, const FRotator &Rotation, const FDIY_ItemDefualtConfig &inConfig)
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

                tmp_item->SetActorTickEnabled(true);
                EASY_LOG_MAINPLAYER("Actor spawned successfully with config");
            }
        }
        else
        {
            EASY_LOG_MAINPLAYER("Failed to spawn actor from class.");
        }
    }
}

void UDIY_ItemManagerSubsystem::OnItemRequestRecycle(class AActor *inActor)
{
    RequestRecycleItem(inActor);
}

void UDIY_ItemManagerSubsystem::RequestChange_ItemNumInBackPack_Statistics(EItemID inItemID, int32 inDeltaNum)
{
    if ((int32)inItemID >= (int32)EItemID::EItemID_Count)
        return;

    if (inDeltaNum == 0)
        return;
    ensureMsgf(inItemID == ItemStatistics[(int32)inItemID].ItemID, TEXT("add item to different depo statistics"));

    ItemStatistics[(int32)inItemID].ItemNumInBackPack += inDeltaNum;
    OnItemsNumInBackPack_Changed.Broadcast((int32)inItemID);
}

const FDIY_CraftingReceipt &UDIY_ItemManagerSubsystem::GetReceiptFromItemID(EItemID inItemID)
{
    ensureMsgf((int32)inItemID < (int32)EItemID::EItemID_Count, TEXT("item id exceeding boundary"));
    int32 item_id = static_cast<int32>(inItemID);
    FName RowName = (item_id == 0) ? FName(TEXT("NewRow")) : FName(*FString::Printf(TEXT("NewRow_%d"), item_id - 1));
    const FDIY_ItemDataTableRow *Row = ItemDataTable->FindRow<FDIY_ItemDataTableRow>(RowName, TEXT(""), true);

    return Row->CurrentItemReceipt;
}

const FDIY_ItemDefualtConfig &UDIY_ItemManagerSubsystem::GetConfigFromItemID(EItemID inItemID)
{
    ensureMsgf((int32)inItemID < (int32)EItemID::EItemID_Count, TEXT("item id exceeding boundary"));
    int32 item_id = static_cast<int32>(inItemID);
    FName RowName = (item_id == 0) ? FName(TEXT("NewRow")) : FName(*FString::Printf(TEXT("NewRow_%d"), item_id - 1));
    const FDIY_ItemDataTableRow *Row = ItemDataTable->FindRow<FDIY_ItemDataTableRow>(RowName, TEXT(""), true);

    return Row->ItemDefualtConfig;
}

int32 UDIY_ItemManagerSubsystem::Get_ItemNumInBackPack_Statistics(EItemID inItemID)
{
    ensureMsgf(inItemID == ItemStatistics[(int32)inItemID].ItemID, TEXT("add item to different depo statistics"));
    return ItemStatistics[(int32)inItemID].ItemNumInBackPack;
}

bool UDIY_ItemManagerSubsystem::TryRequestSpawningItem_CraftPlatform(EItemID inItemID, FVector inLocation, FRotator inRotator = {0.f, 0.f, 0.f})
{

    FDIY_CraftingReceipt cur_receipt = GetReceiptFromItemID(inItemID);

    for (const FDIY_CraftingReceipt_Element &cur_ele : cur_receipt.InputElements)
    {
        int32 cur_ele_req_num = cur_ele.CurrentItemNumReq;
        int32 cur_ele_num_in_backpack = Get_ItemNumInBackPack_Statistics(cur_ele.ItemID);

        if (cur_ele_req_num > cur_ele_num_in_backpack)
            return false;
    }

    RequestSpawnItem(inItemID, inLocation, inRotator);

    for (const FDIY_CraftingReceipt_Element &cur_ele : cur_receipt.InputElements)
    {
        RequestChange_ItemNumInBackPack_Statistics(cur_ele.ItemID, -cur_ele.CurrentItemNumReq);
    }

    return true;
}

void UDIY_ItemManagerSubsystem::Initialize(FSubsystemCollectionBase &Collection)
{
    Super::Initialize(Collection);

   
    // init current statistics
    {
        ItemStatistics.Reset((int32)EItemID::EItemID_Count);
        FDIY_ItemStatisticInfo tmp_item{};
        for (uint32 id = 0; id < (uint32)EItemID::EItemID_Count; ++id)
        {

            tmp_item.ItemID = (EItemID)id;
            tmp_item.ItemNumInBackPack = 0;
            ItemStatistics.Add(tmp_item);
        }
    }
}

void UDIY_ItemManagerSubsystem::Deinitialize()
{
}
