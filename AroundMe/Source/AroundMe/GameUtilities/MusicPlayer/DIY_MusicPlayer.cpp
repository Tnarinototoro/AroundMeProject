// All rights reserved to ShadowCandle Studio


#include "DIY_MusicPlayer.h"
#include "DIY_MusicPlayerDefines.h"
#include "AssetRegistry/AssetRegistryModule.h"

ADIY_MusicPlayer::ADIY_MusicPlayer()
{
    // Set this actor to call Tick() every frame if needed
    PrimaryActorTick.bCanEverTick = false;

    AudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComponent"));
    AudioComponent->SetupAttachment(RootComponent);
    LoadMusicFromDirectory(TEXT("/Game/Audio/BGM/Anim_Crossing"));  // 注意使用虚拟路径
}

void ADIY_MusicPlayer::BeginPlay()
{
    Super::BeginPlay();
}

void ADIY_MusicPlayer::LoadMusicFromDirectory(const FString& Path)
{
    FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");
    TArray<FAssetData> AssetDatas;

    FARFilter Filter;
    Filter.bRecursivePaths = true;
    Filter.ClassNames.Add(USoundBase::StaticClass()->GetFName());
    Filter.PackagePaths.Add(*Path); // 将目录路径转换为FName并添加至过滤器

    AssetRegistryModule.Get().GetAssets(Filter, AssetDatas);

    for (const FAssetData& Asset : AssetDatas)
    {
        USoundBase* LoadedSound = Cast<USoundBase>(Asset.GetAsset());
        if (LoadedSound)
        {
            // 这里可以存储音乐到一个数组，或者直接播放
            PlayMusic(LoadedSound);
        }
    }
}

void ADIY_MusicPlayer::PlayMusic(const FName& TrackID)
{
    if (MusicTracksTable)
    {
        const FDIY_MusicTrackInfoDataTableRow* TrackInfo = MusicTracksTable->FindRow<FDIY_MusicTrackInfoDataTableRow>(TrackID, TEXT(""), true);
        if (TrackInfo && TrackInfo->Sound)
        {
            AudioComponent->SetSound(TrackInfo->Sound);
            AudioComponent->Play();
        }
    }
}

void ADIY_MusicPlayer::StopMusic()
{
    if (AudioComponent && AudioComponent->IsPlaying())
    {
        AudioComponent->Stop();
    }
}

void ADIY_MusicPlayer::PlayMusic(USoundBase* Sound)
{
    if (Sound && AudioComponent)
    {
        AudioComponent->SetSound(Sound);
        AudioComponent->Play();
    }
}
