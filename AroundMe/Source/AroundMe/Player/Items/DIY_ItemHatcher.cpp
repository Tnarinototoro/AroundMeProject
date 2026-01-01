#include "DIY_ItemHatcher.h"
#include "Engine/AssetManager.h"
#include "DIY_ItemAsset.h"
#include "DIY_ItemManager.h"
#include "../../GameUtilities/DIY_Utilities.h"

ADIY_ItemHatcher::ADIY_ItemHatcher()
{
    PrimaryActorTick.bCanEverTick = false;

    USceneComponent *SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    RootComponent = SceneRoot;

#if WITH_EDITOR
    PreviewActorPtr = nullptr;
#endif
}

#if WITH_EDITOR
void ADIY_ItemHatcher::OnConstruction(const FTransform &Transform)
{
    Super::OnConstruction(Transform);
    RefreshPreviewActor();
}

void ADIY_ItemHatcher::RefreshPreviewActor()
{
    // 修正逻辑：只有当 ID 没变 且 预览 Actor 确实已经存在时，才直接返回
    if (LastPreviewID == ItemIDToSpawn && PreviewActorPtr && PreviewActorPtr->IsValidLowLevel())
    {
        return;
    }

    ClearPreviewActor();
    LastPreviewID = ItemIDToSpawn;

    if (!ItemIDToSpawn.IsValid())
        return;

    UAssetManager &AssetManager = UAssetManager::Get();
    FSoftObjectPath AssetPath = AssetManager.GetPrimaryAssetPath(ItemIDToSpawn);
    if (!AssetPath.IsValid())
        return;

    TSoftObjectPtr<UDIY_ItemAsset> ItemAssetPtr(AssetPath);
    UDIY_ItemAsset *ItemAsset = ItemAssetPtr.LoadSynchronous();

    if (ItemAsset)
    {
        UClass *ActualActorClass = ItemAsset->ItemActorClass.LoadSynchronous();
        if (!ActualActorClass)
            return;

        FActorSpawnParameters SpawnParams;
        SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
        SpawnParams.ObjectFlags |= RF_Transient;

        PreviewActorPtr = GetWorld()->SpawnActor<AActor>(ActualActorClass, GetActorLocation(), GetActorRotation(), SpawnParams);

        if (PreviewActorPtr)
        {
            PreviewActorPtr->SetActorEnableCollision(false);

            TArray<UPrimitiveComponent *> PrimitiveComps;
            PreviewActorPtr->GetComponents<UPrimitiveComponent>(PrimitiveComps);
            for (UPrimitiveComponent *Comp : PrimitiveComps)
            {
                Comp->SetSimulatePhysics(false);
                Comp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
                Comp->SetCollisionResponseToAllChannels(ECR_Ignore);
            }

            PreviewActorPtr->AttachToActor(this, FAttachmentTransformRules::KeepWorldTransform);
        }
    }
}

void ADIY_ItemHatcher::ClearPreviewActor()
{
    if (PreviewActorPtr && PreviewActorPtr->IsValidLowLevel())
    {
        PreviewActorPtr->Destroy();
        PreviewActorPtr = nullptr;
    }
}

void ADIY_ItemHatcher::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    ClearPreviewActor();
    Super::EndPlay(EndPlayReason);
}

void ADIY_ItemHatcher::PostLoad()
{
    Super::PostLoad();
    RefreshPreviewActor(); // 关卡加载后自动触发预览
}

void ADIY_ItemHatcher::PostActorCreated()
{
    Super::PostActorCreated();
    RefreshPreviewActor(); // 拖入场景后自动触发预览
}

#endif

void ADIY_ItemHatcher::BeginPlay()
{
#if WITH_EDITOR
    ClearPreviewActor();
#endif

    Super::BeginPlay();

    if (ItemIDToSpawn.IsValid())
    {
        UDIY_ItemManagerSubsystem *ItemManager = UDIY_Utilities::DIY_GetItemManagerInstance(GetWorld());
        if (ItemManager)
        {

            // 运行时通过你的 Manager 逻辑生成实物
            ItemManager->RequestSpawnItem(
                ItemIDToSpawn,
                GetActorLocation(),
                GetActorRotation());
        }
    }

    Destroy();
}