// All rights reserved to ShadowCandle Studio

#include "DIY_Utilities.h"

#include "../Player/Items/DIY_ItemManager.h"
#include "Weather/DIY_WeatherManager.h"
#include "../Area/DIY_AreaManager.h"
#include "NavigationSystem.h"
#include "Navigation/NavLinkProxy.h"
#include "NavigationSystem.h"
#include "NavLinkCustomComponent.h"
#include "NavLinkCustomInterface.h"
#include "../Player/Items/DIY_Item.h"
#include "IImageWrapper.h"
#include "IImageWrapperModule.h"
#include "ImageUtils.h"
#include "Misc/FileHelper.h"
#include "HAL/PlatformFileManager.h"
// void ForceRefreshNavLink(AActor* InActor)
// {
//     if (!InActor) return;

//     UNavigationSystemV1* NavSys =
//         FNavigationSystem::GetCurrent<UNavigationSystemV1>(InActor->GetWorld());

//     if (!NavSys) return;

//     // 1. 刷新 Actor 在 NavOctree 中的数据（黑线的关键）
//     NavSys->UpdateActorInNavOctree(*InActor);

//     // 2. 如果是 NavLinkProxy，刷新 SmartLink
//     if (ANavLinkProxy* NavProxy = Cast<ANavLinkProxy>(InActor))
//     {
//         if (UNavLinkCustomComponent* SmartLink = NavProxy->GetSmartLinkComp())
//         {
//             if (const INavLinkCustomInterface* LinkInterface =
//                     Cast<INavLinkCustomInterface>(SmartLink))
//             {
//                 NavSys->UpdateCustomLink(LinkInterface);
//             }
//         }
//     }
// }

class FAsyncScaleTask : public FTickableGameObject
{
public:
    TWeakObjectPtr<AActor> TargetActor;
    float Progress = 1.0f;
    float Speed = 1.0f;
    bool bIsFinished = false;

    FAsyncScaleTask(AActor *InActor, float InSpeed) : TargetActor(InActor), Speed(InSpeed) {}

    virtual void Tick(float DeltaTime) override
    {
        if (bIsFinished)
            return;

        AActor *Actor = TargetActor.Get();

        if (!Actor || !Actor->GetWorld() || Actor->GetWorld()->bIsTearingDown)
        {
            bIsFinished = true;
            return;
        }

        Progress -= DeltaTime * Speed;
        if (Progress <= 0.0f)
        {
            Actor->SetActorScale3D(FVector::ZeroVector);
            UDIY_ItemManagerSubsystem *CurItemMgr = UDIY_ItemManagerSubsystem::Get(Actor->GetWorld());
            if (nullptr == CurItemMgr)
            {
                Actor->Destroy();
            }
            else
            {
                CurItemMgr->RequestRecycleItem(Actor);
            }

            bIsFinished = true;
        }
        else
        {
            Actor->SetActorScale3D(FVector(Progress));
        }
    }

    // 只要任务没结束，就一直 Tick
    virtual bool IsTickable() const override { return !bIsFinished; }
    virtual TStatId GetStatId() const override { RETURN_QUICK_DECLARE_CYCLE_STAT(FAsyncScaleTask, STATGROUP_Tickables); }

    // 关卡切换时是否继续？设置为 false 可以防止跨世界引用崩溃
    virtual bool IsTickableInEditor() const override { return false; }
};

bool UDIY_Utilities::bShouldLogToGameScreen = true;
UDIY_ItemManagerSubsystem *UDIY_Utilities::DIY_GetItemManagerInstance(const UObject *WorldContextObject)
{

    if (!WorldContextObject)
        return nullptr;
    UWorld *World = GEngine->GetWorldFromContextObjectChecked(WorldContextObject);
    return UDIY_ItemManagerSubsystem::Get(World);
}

void UDIY_Utilities::DIY_EnableLogging(bool bEnable)
{
    UDIY_Utilities::bShouldLogToGameScreen = bEnable;
}

bool UDIY_Utilities::DIY_IsLoggingEnabled()
{

    return UDIY_Utilities::bShouldLogToGameScreen;
}

void UDIY_Utilities::DIY_PrintLogToScreen(float TimeToDisplay, const FString &DebugMessage, FColor DisplayColor)
{
    if (nullptr != GEngine && UDIY_Utilities::bShouldLogToGameScreen)
    {
        GEngine->AddOnScreenDebugMessage(-1, TimeToDisplay, DisplayColor, DebugMessage);
    }
}

void UDIY_Utilities::ForceUpdateNavProxyInOctree(AActor *inActor)
{
    if (nullptr == inActor)
        return;

    ANavLinkProxy *NavProxy = Cast<ANavLinkProxy>(inActor);
    if (nullptr == NavProxy)
        return;

    UNavigationSystemV1 *NavSys = FNavigationSystem::GetCurrent<UNavigationSystemV1>(inActor->GetWorld());
    if (nullptr == NavSys)
        return;
    NavSys->UpdateActorInNavOctree(*inActor);

    UNavLinkCustomComponent *SmartLink = NavProxy->GetSmartLinkComp();
    if (nullptr == SmartLink)
        return;

    // We can temporarily disable and enable the smart link to force the nav system to update it
    SmartLink->SetEnabled(false);
    SmartLink->SetEnabled(true);
}

void UDIY_Utilities::ForceRebuildNavigation(AActor *inActor)
{
    if (nullptr == inActor)
        return;

    UNavigationSystemV1 *NavSys = FNavigationSystem::GetCurrent<UNavigationSystemV1>(inActor->GetWorld());
    if (nullptr == NavSys)
        return;

    if (!NavSys->IsNavigationBuildInProgress())
    {
        NavSys->Build();
    }
}

void UDIY_Utilities::AsyncScaleAndDestroy(AActor *TargetActor, float Speed)
{
    if (!TargetActor || TargetActor->GetWorld()->bIsTearingDown)
        return;

    new FAsyncScaleTask(TargetActor, Speed);
}

bool UDIY_Utilities::SaveTextureToLocal(UTexture2D *InTexture, FString FileName, FString &OutPath)
{
    if (!InTexture)
        return false;

    // --- 1. 确定平台保存路径 ---
    FString SaveDir;
#if PLATFORM_ANDROID
    // Android 建议保存在外部私有目录，无需权限申请
    SaveDir = FPaths::ProjectPersistentDownloadDir();
#else
    // Windows 建议保存在项目 Saved 文件夹下
    SaveDir = FPaths::ProjectSavedDir() + TEXT("ExportedPhotos/");
#endif

    OutPath = SaveDir + FileName + TEXT(".jpg");

    // --- 2. 准备像素数据 ---
    // 强制 Texture 变为可读状态（如果是刚刚动态生成的）
    InTexture->UpdateResource();

    FTexture2DMipMap &Mip = InTexture->GetPlatformData()->Mips[0];
    int32 Width = Mip.SizeX;
    int32 Height = Mip.SizeY;

    // 锁定并读取数据
    const FColor *FormatedImageData = static_cast<const FColor *>(Mip.BulkData.Lock(LOCK_READ_ONLY));

    TArray<FColor> Pixels;
    Pixels.Append(FormatedImageData, Width * Height);

    Mip.BulkData.Unlock();

    // --- 3. 压缩并写入文件 ---
    IImageWrapperModule &ImageWrapperModule = FModuleManager::LoadModuleChecked<IImageWrapperModule>(FName("ImageWrapper"));
    TSharedPtr<IImageWrapper> ImageWrapper = ImageWrapperModule.CreateImageWrapper(EImageFormat::JPEG);

    if (ImageWrapper.IsValid() && ImageWrapper->SetRaw(Pixels.GetData(), Pixels.Num() * sizeof(FColor), Width, Height, ERGBFormat::BGRA, 8))
    {
        const TArray64<uint8> &CompressedData = ImageWrapper->GetCompressed(80); // 80% 质量
        return FFileHelper::SaveArrayToFile(CompressedData, *OutPath);
    }

    return false;
}

UDIY_Utilities::UDIY_Utilities()
{
}

bool UDIY_Utilities::HasTagHelper(const FGameplayTagContainer &Container, FName TagName)
{
    // 关键点：使用 RequestGameplayTag，如果标签不存在它会返回无效标签
    // 虽然有性能开销，但在重构期这种写法最快
    return Container.HasTag(FGameplayTag::RequestGameplayTag(TagName));
}
