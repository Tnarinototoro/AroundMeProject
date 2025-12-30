// All rights reserved to ShadowCandle Studio

#include "DIY_SoundManager.h"
#include "../../System/Util/DIY_SysUtil.h"

UDIY_SoundManager::UDIY_SoundManager()
{
    static ConstructorHelpers::FClassFinder<UDIY_SoundManagerHelperBase>
        BluePrintFile(TEXT("/Game/Blueprint/Subsystem/DIY_SoundManagerHelper_BP"));
    if (BluePrintFile.Class)
    {
        SubsystemHelperClass = (UClass *)BluePrintFile.Class;
    }
}

void UDIY_SoundManager::Initialize(FSubsystemCollectionBase &Collection)
{
    Super::Initialize(Collection);

    SubsystemHelper = nullptr;

    ensureAlwaysMsgf(SubsystemHelperClass,
                     TEXT("UDIY_SoundManager::Initialize: SubsystemHelperClass is null!"));
    UObject *outer = this; // BP で WorldContext 指定するときに Self を指定できるように親と接続しておく.
    // UObject* outer = GetTransientPackage();
    SubsystemHelper = NewObject<UDIY_SoundManagerHelperBase>(outer, SubsystemHelperClass);
    SubsystemHelper->Initialize();
}

void UDIY_SoundManager::Deinitialize()
{

    SubsystemHelper = nullptr;
    Super::Deinitialize();
}

UDIY_SoundManager *UDIY_SoundManager::Get(UWorld *World)
{

    return DIY_SysUtil::GetGameInstanceSubsystem<UDIY_SoundManager>(World);
}

void UDIY_SoundManagerHelperBase::Initialize()
{
}
