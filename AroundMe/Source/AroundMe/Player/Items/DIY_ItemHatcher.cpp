#include "DIY_ItemHatcher.h"
#include "Engine/AssetManager.h"
#include "DIY_ItemAsset.h"
#include "DIY_ItemManager.h"
#include "../../GameUtilities/DIY_Utilities.h"

ADIY_ItemHatcher::ADIY_ItemHatcher()
{
    // 允许 Tick 必须不然 没办法editor tick
    PrimaryActorTick.bCanEverTick = true;
    PrimaryActorTick.bStartWithTickEnabled = true;

#if WITH_EDITOR

#endif

    USceneComponent *SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    RootComponent = SceneRoot;

#if WITH_EDITORONLY_DATA
    PreviewActorPtr = nullptr;
#endif
}

#if WITH_EDITOR
void ADIY_ItemHatcher::OnConstruction(const FTransform &Transform)
{
    Super::OnConstruction(Transform);
    // 构造脚本保底刷新
    RefreshPreview();
}

void ADIY_ItemHatcher::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // 逻辑：只要模型没了或者 ID 变了，就刷新
    if (ItemIDToSpawn.IsValid())
    {
        if (!PreviewActorPtr || !PreviewActorPtr->IsValidLowLevel() || LastPreviewID != ItemIDToSpawn)
        {
            RefreshPreview();
        }
    }
    else if (PreviewActorPtr)
    {
        ClearPreview();
    }
}

void ADIY_ItemHatcher::RefreshPreview()
{
    // 如果 ID 没变且模型还在，不重复生成（防止 Tick 每一帧都 Spawn）
    if (LastPreviewID == ItemIDToSpawn && PreviewActorPtr && PreviewActorPtr->IsValidLowLevel())
    {
        return;
    }

    ClearPreview();
    LastPreviewID = ItemIDToSpawn;

    if (!ItemIDToSpawn.IsValid())
        return;

    UAssetManager &AssetManager = UAssetManager::Get();
    FSoftObjectPath AssetPath = AssetManager.GetPrimaryAssetPath(ItemIDToSpawn);

    TSoftObjectPtr<UDIY_ItemAsset> ItemAssetPtr(AssetPath);
    UDIY_ItemAsset *ItemAsset = ItemAssetPtr.LoadSynchronous();

    if (ItemAsset)
    {
        UClass *ActorClass = ItemAsset->ItemActorClass.LoadSynchronous();
        if (!ActorClass)
        {
            UE_LOG(LogTemp, Error, TEXT("[Hatcher] ID %s found but ActorClass is null!"), *ItemIDToSpawn.ToString());
            return;
        }

        FActorSpawnParameters SpawnParams;
        SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
        SpawnParams.ObjectFlags |= RF_Transient;

        PreviewActorPtr = GetWorld()->SpawnActor<AActor>(ActorClass, GetActorLocation(), GetActorRotation(), SpawnParams);

        if (PreviewActorPtr)
        {
            PreviewActorPtr->SetActorEnableCollision(false);
            TArray<UPrimitiveComponent *> Comps;
            PreviewActorPtr->GetComponents<UPrimitiveComponent>(Comps);
            for (UPrimitiveComponent *C : Comps)
            {
                C->SetSimulatePhysics(false);
                C->SetCollisionEnabled(ECollisionEnabled::NoCollision);
                C->SetCollisionResponseToAllChannels(ECR_Ignore);
            }
            PreviewActorPtr->AttachToActor(this, FAttachmentTransformRules::KeepWorldTransform);

            UE_LOG(LogTemp, Warning, TEXT("[Hatcher] Successfully Spawned Preview for: %s"), *ItemIDToSpawn.ToString());
        }
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("[Hatcher] Failed to load DataAsset for ID: %s"), *ItemIDToSpawn.ToString());
    }
}

void ADIY_ItemHatcher::ClearPreview()
{
    if (PreviewActorPtr && PreviewActorPtr->IsValidLowLevel())
    {
        PreviewActorPtr->Destroy();
        PreviewActorPtr = nullptr;
    }
}
#endif

void ADIY_ItemHatcher::BeginPlay()
{
    // 运行时彻底关掉 Tick
    PrimaryActorTick.SetTickFunctionEnable(false);

#if WITH_EDITOR
    ClearPreview();
#endif

    Super::BeginPlay();

    if (ItemIDToSpawn.IsValid())
    {
        auto *Mgr = UDIY_Utilities::DIY_GetItemManagerInstance(GetWorld());
        if (Mgr)
        {
            Mgr->RequestSpawnItem(ItemIDToSpawn, GetActorLocation(), GetActorRotation());
        }
    }

    Destroy();
}