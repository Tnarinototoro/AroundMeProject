// All rights reserved to ShadowCandle Studio

#include "DIY_ItemManager.h"
#include "Misc/MessageDialog.h"

#include "DIY_ItemDefines.h"
#include "Engine/StreamableManager.h"
#include "Engine/AssetManager.h"
#include "Kismet/GameplayStatics.h"
#include "DIY_Item.h"
#include "DIY_ItemAsset.h"
#include "../../GameUtilities/Logs/DIY_LogHelper.h"
#include "../../GameUtilities/DIY_Utilities.h"
#include "../../System/Util/DIY_SysUtil.h"

FOnItemsNumInBackPack_Changed UDIY_ItemManagerSubsystem::OnItemsNumInBackPack_Changed = {};

void UDIY_ItemManagerSubsystem::RequestSpawnItem(FPrimaryAssetId ItemID, const FVector &Location, const FRotator &Rotation)
{
    TArray<AActor *> *Pool = ItemPools.Find(ItemID);
    if (nullptr != Pool && Pool->Num() > 0)
    {
        AActor *Item = Pool->Pop();
        Item->SetActorLocationAndRotation(Location, Rotation, false, nullptr, ETeleportType::ResetPhysics);
        Item->SetActorHiddenInGame(false);
        ADIY_ItemBase *ItemBase = Cast<ADIY_ItemBase>(Item);
        if (ItemBase)
        {
            ItemBase->InitItem(ItemBase->GetItemID());
            ItemBase->SetActorTickEnabled(true);

            EASY_LOG_MAINPLAYER("item %s successfully spawned from items pool", *ItemBase->GetItemID().ToString());
            return;
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

    FPrimaryAssetId ItemID = ItemBase->GetItemID();

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
    EASY_LOG_MAINPLAYER("item %s recycled to the objects pool", *ItemID.ToString());
}

UTexture2D *UDIY_ItemManagerSubsystem::GetItemIconTexture(FPrimaryAssetId inITemID) const
{

    ensureMsgf(SubsystemHelper->DefaultItemSlotIcon != nullptr && nullptr != SubsystemHelper->EmptyItemSlotIcon, TEXT("please set up defualt and empty slot icon for backup"));

    const UDIY_ItemAsset *ItemResource = UAssetManager::Get().GetPrimaryAssetObject<UDIY_ItemAsset>(inITemID);

    if (!inITemID.IsValid())
    {

        return SubsystemHelper->EmptyItemSlotIcon;
    }
    if (nullptr == ItemResource)
    {

        return SubsystemHelper->DefaultItemSlotIcon;
    }

    UTexture2D *icon = ItemResource->DefaultConfig.ItemSlotIcon;

    // no valid icon found, set the defualt one!
    if (nullptr == icon)
    {
        icon = SubsystemHelper->DefaultItemSlotIcon;
    }
    return icon;
}

UDIY_ItemManagerSubsystem::UDIY_ItemManagerSubsystem()
{
    static ConstructorHelpers::FClassFinder<UDIY_ItemManagerSubsystemHelperBase>
        BluePrintFile(TEXT("/Game/Blueprint/Subsystem/DIY_ItemManagerHelper_BP"));
    if (BluePrintFile.Class)
    {
        SubsystemHelperClass = (UClass *)BluePrintFile.Class;
    }
}

void UDIY_ItemManagerSubsystem::Initialize(FSubsystemCollectionBase &Collection)
{
    Super::Initialize(Collection);

    // 1. 获取单例
    UAssetManager &AssetManager = UAssetManager::Get();

    // 2. 准备你的 Lambda 逻辑
    auto InitStatsLambda = [this]()
    {
        TArray<FPrimaryAssetId> AllItemIDs;
        UAssetManager::Get().GetPrimaryAssetIdList(FPrimaryAssetType("Item"), AllItemIDs);

        this->ItemStatistics.Empty(AllItemIDs.Num());
        for (const FPrimaryAssetId &ID : AllItemIDs)
        {
            this->ItemStatistics.Add(ID, FDIY_ItemStatisticInfo());
        }
        UE_LOG(LogTemp, Log, TEXT("DIY_ItemManager: Initialized Statistics for %d items."), AllItemIDs.Num());
    };

    // 3. 修正后的委托调用语法
    // 注意：CallOrRegister_OnCompletedInitialScan 接受的是一个 FSimpleDelegate
    AssetManager.CallOrRegister_OnCompletedInitialScan(FSimpleDelegate::CreateLambda(InitStatsLambda));

    SubsystemHelper = nullptr;

    ensureAlwaysMsgf(SubsystemHelperClass,
                     TEXT("UDIY_ItemManagerSubsystem::Initialize: SubsystemHelperClass is null!"));
    UObject *outer = this; // BP で WorldContext 指定するときに Self を指定できるように親と接続しておく.
    // UObject* outer = GetTransientPackage();
    SubsystemHelper = NewObject<UDIY_ItemManagerSubsystemHelperBase>(outer, SubsystemHelperClass);
    SubsystemHelper->Initialize();
}

void UDIY_ItemManagerSubsystem::Deinitialize()
{

    SubsystemHelper = nullptr;
    Super::Deinitialize();
}

UDIY_ItemManagerSubsystem *UDIY_ItemManagerSubsystem::Get(UWorld *World)
{

    return DIY_SysUtil::GetGameInstanceSubsystem<UDIY_ItemManagerSubsystem>(World);
}

void UDIY_ItemManagerSubsystem::SpawnItemByID_Internal(FPrimaryAssetId ItemID, FVector Location, FRotator  Rotation)
{

    // 1. 通过 AssetManager 获取 DataAsset
    const UDIY_ItemAsset *ItemResource = UAssetManager::Get().GetPrimaryAssetObject<UDIY_ItemAsset>(ItemID);

    if (!ItemResource)
    {
        UAssetManager::Get().LoadPrimaryAsset(ItemID, TArray<FName>(), FStreamableDelegate::CreateUObject(
            this,
            &UDIY_ItemManagerSubsystem::SpawnItemByID_Internal,
            ItemID,
            Location,
            Rotation
        ));
        // 记得现在打印 ID 要用 ToString()
        EASY_LOG_MAINPLAYER("Quick Get Item ID not found: %s Try Load it", *ItemID.ToString());
        return;
    }

    // 2. 直接获取 TSoftClassPtr
    // 它内部其实已经包含了路径，而且知道这是一个类（自带 _C 处理）
    TSoftClassPtr<AActor> ItemClassPtr = ItemResource->ItemActorClass;
    const FDIY_ItemDefaultConfig &Config = ItemResource->DefaultConfig;

    // 3. 检查是否已经加载 (编辑器缓存或已在内存)
    if (UClass *LoadedClass = ItemClassPtr.Get())
    {
        SpawnActorFromClass(LoadedClass, Location, Rotation, ItemID);
        EASY_LOG_MAINPLAYER("Spawned directly from memory");
        return;
    }

    // 4. 异步加载 (不再需要手动转 FSoftObjectPath)
    // TSoftClassPtr 可以隐式转换为 FSoftObjectPath
    UAssetManager::GetStreamableManager().RequestAsyncLoad(
        ItemClassPtr.ToSoftObjectPath(),
        FStreamableDelegate::CreateUObject(this,
                                           &UDIY_ItemManagerSubsystem::OnItemClassLoaded,
                                           ItemID,
                                           ItemClassPtr.ToSoftObjectPath(), // 传给回调保持一致
                                           Location,
                                           Rotation));
}

void UDIY_ItemManagerSubsystem::OnItemClassLoaded(FPrimaryAssetId ItemID, FSoftObjectPath ItemPath, FVector Location, FRotator Rotation)
{
    TSoftObjectPtr<UClass> ClassToLoad(ItemPath);
    UClass *LoadedClass = ClassToLoad.Get();

    if (LoadedClass)
    {

        SpawnActorFromClass(LoadedClass, Location, Rotation, ItemID);

        EASY_LOG_MAINPLAYER("Spawned From Loading");
    }
    else
    {

        EASY_LOG_MAINPLAYER("Failed to load class for path: %s", *ItemPath.ToString());
    }
}


void UDIY_ItemManagerSubsystem::SpawnActorFromClass(UClass *ActorClass, FVector Location, FRotator Rotation, FPrimaryAssetId ItemID)
{
    if (UWorld *World = GetWorld())
    {
        AActor *SpawnedActor = World->SpawnActor<AActor>(ActorClass, Location, Rotation);
        if (SpawnedActor)
        {
            ADIY_ItemBase *tmp_item = Cast<ADIY_ItemBase>(SpawnedActor);
            if (nullptr != tmp_item)
            {
                tmp_item->InitItem(ItemID);

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

void UDIY_ItemManagerSubsystem::RequestChange_ItemNumInBackPack_Statistics(FPrimaryAssetId InItemID, int32 InDeltaNum)
{

    // 1. 基本合法性检查
    if (!InItemID.IsValid() || InDeltaNum == 0)
        return;

    // 2. 直接从 Map 中查找
    if (FDIY_ItemStatisticInfo *Stat = ItemStatistics.Find(InItemID))
    {
        Stat->ItemNumInBackPack += InDeltaNum;

        // 3. 广播变化（注意：现在广播的是 FPrimaryAssetId）
        OnItemsNumInBackPack_Changed.Broadcast(InItemID);
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Attempted to change statistics for unregistered ItemID: %s"), *InItemID.ToString());
    }
}

const FDIY_CraftingReceipt *UDIY_ItemManagerSubsystem::GetReceiptFromItemID(FPrimaryAssetId InItemID) const
{

    const UDIY_ItemAsset *ItemResource = UAssetManager::Get().GetPrimaryAssetObject<UDIY_ItemAsset>(InItemID);

    // 如果资产存在，返回其中的 Receipt；如果不存在，返回一个空的静态实例防止崩溃
    if (ItemResource)
    {
        return &ItemResource->CraftingReceipt;
    }

    ensureAlwaysMsgf(false, TEXT("[UDIY_ItemManagerSubsystem::GetReceiptFromItemID] Invalid from %s"), *InItemID.ToString());

    return nullptr;
}

const FDIY_ItemDefaultConfig *UDIY_ItemManagerSubsystem::GetConfigFromItemID(FPrimaryAssetId InItemID) const
{
    const UDIY_ItemAsset *ItemResource = UAssetManager::Get().GetPrimaryAssetObject<UDIY_ItemAsset>(InItemID);

    if (ItemResource)
    {
        return &ItemResource->DefaultConfig;
    }

    ensureAlwaysMsgf(false, TEXT("[UDIY_ItemManagerSubsystem::GetConfigFromItemID] Invalid from %s"), *InItemID.ToString());

    return nullptr;
}

int32 UDIY_ItemManagerSubsystem::Get_ItemNumInBackPack_Statistics(FPrimaryAssetId InItemID)
{
    if (FDIY_ItemStatisticInfo *Stat = ItemStatistics.Find(InItemID))
    {
        return Stat->ItemNumInBackPack;
    }
    return -1;
}

bool UDIY_ItemManagerSubsystem::TryRequestSpawningItem_CraftPlatform(FPrimaryAssetId inItemID, FVector inLocation, FRotator inRotator = {0.f, 0.f, 0.f})
{

    const FDIY_CraftingReceipt *cur_receipt = GetReceiptFromItemID(inItemID);

    for (const FDIY_CraftingReceipt_Element &cur_ele : cur_receipt->InputElements)
    {
        int32 cur_ele_req_num = cur_ele.CurrentItemNumReq;
        int32 cur_ele_num_in_backpack = Get_ItemNumInBackPack_Statistics(cur_ele.ItemID);

        if (cur_ele_req_num > cur_ele_num_in_backpack)
            return false;
    }

    RequestSpawnItem(inItemID, inLocation, inRotator);

    for (const FDIY_CraftingReceipt_Element &cur_ele : cur_receipt->InputElements)
    {
        RequestChange_ItemNumInBackPack_Statistics(cur_ele.ItemID, -cur_ele.CurrentItemNumReq);
    }

    return true;
}

float UDIY_ItemManagerSubsystem::GetCurrentEnergyTotalEarned() const
{
    return CurrentEnergyTotalEarned;
}

bool UDIY_ItemManagerSubsystem::TryAddEnergyTotalEarned(float inDeltaEnergy)
{
    if (CurrentEnergyTotalEarned + inDeltaEnergy > SubsystemHelper->EnergyTotalEarnedLimit)
    {
        CurrentEnergyTotalEarned = SubsystemHelper->EnergyTotalEarnedLimit;
        return false;
    }
    if (CurrentEnergyTotalEarned + inDeltaEnergy < 0.f)
    {
        CurrentEnergyTotalEarned = 0.f;
        return false;
    }

    CurrentEnergyTotalEarned += inDeltaEnergy;
    return true;
}

float UDIY_ItemManagerSubsystem::GetEnergyTotalEarnedLimit() const
{
    return SubsystemHelper->EnergyTotalEarnedLimit;
}


void UDIY_ItemManagerSubsystemHelperBase::Initialize()
{
}
