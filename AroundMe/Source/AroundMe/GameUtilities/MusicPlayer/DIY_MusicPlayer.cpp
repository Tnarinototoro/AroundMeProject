// All rights reserved to ShadowCandle Studio

#include "DIY_MusicPlayer.h"
#include "DIY_MusicPlayerDefines.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "Misc/DateTime.h"
#include "../DIY_Utilities.h"
#include "Kismet/GameplayStatics.h"
#include "../../Player/UI/DIY_MainPlayerUIController.h"
#include "../Logs/DIY_LogHelper.h"

ADIY_MusicPlayer *ADIY_MusicPlayer::gMusicPlayerInstance = nullptr;
#if WITH_EDITOR
int ADIY_MusicPlayer::Dbg_Music_Hour = {-1};
#endif
ADIY_MusicPlayer::ADIY_MusicPlayer()
{
    PrimaryActorTick.bCanEverTick = true;
    PrimaryActorTick.TickInterval = 1.0f;
    AudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComponent"));
    AudioComponent->bAllowSpatialization = false; // 关闭空间化以实现2D音效
    AudioComponent->bIsUISound = true;            // 设置为UI声音，通常用于2D背景音乐
    AudioComponent->SetupAttachment(RootComponent);
}

ADIY_MusicPlayer::~ADIY_MusicPlayer()
{
}

void ADIY_MusicPlayer::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    FDateTime cur_date_time = FDateTime::Now();
    uint8 new_hour = cur_date_time.GetHour();
#if WITH_EDITOR
    if (ADIY_MusicPlayer::Dbg_Music_Hour >= 0)
    {
        new_hour = (int)ADIY_MusicPlayer::Dbg_Music_Hour;
    }

#endif
    EASY_LOG_MAINPLAYER("cur new hour is %d", new_hour);
    SetCurrentHour(new_hour);

    UDIY_MainPlayerUIController *cur_ui_controller = AcquireOwnerActorOwnedUDIY_MainPlayerUIController();
    if (nullptr != cur_ui_controller)
    {
        cur_ui_controller->RequestUpdateStateInfoText_MusicPlayer(
            FText::FromString(
                FString::Printf(
                    TEXT("%d/%d/%d \n %d:%d:%d \n Track: %s"),
                    cur_date_time.GetYear(),
                    cur_date_time.GetMonth(),
                    cur_date_time.GetDay(),
                    HourOfToday,
                    cur_date_time.GetMinute(),
                    cur_date_time.GetSecond(),
                    *UEnum::GetValueAsString(GetCurrentMusicTrackID()))));
    }
}

ADIY_MusicPlayer *ADIY_MusicPlayer::GetMusicPlayer()
{
    checkf(nullptr != gMusicPlayerInstance, TEXT("music player is got too early"));

    return ADIY_MusicPlayer::gMusicPlayerInstance;
}

void ADIY_MusicPlayer::BeginPlay()
{
    Super::BeginPlay();
    checkf(AudioComponent != nullptr, TEXT("Audio component shall be setup properly to start game"));

    AudioComponent->OnAudioFinished.AddUniqueDynamic(this, &ADIY_MusicPlayer::OnMusicFinished);
    PlayMusicByIndex((ESoundTrackID)GenerateDateCorrespondingMusicIndex());

    checkf(ADIY_MusicPlayer::gMusicPlayerInstance == nullptr, TEXT("More than one music player instance is created now which is not allowed"));

    ADIY_MusicPlayer::gMusicPlayerInstance = this;
    UDIY_Utilities::DIY_PrintLogToScreen(1.0f, FString{"Music player  Instance Created!"});
    // LoadMusicFromDirectory();
}

void ADIY_MusicPlayer::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    Super::EndPlay(EndPlayReason);
    if (AudioComponent->OnAudioFinished.IsAlreadyBound(this, &ADIY_MusicPlayer::OnMusicFinished))
    {
        AudioComponent->OnAudioFinished.RemoveDynamic(this, &ADIY_MusicPlayer::OnMusicFinished);
    }
    ADIY_MusicPlayer::gMusicPlayerInstance = nullptr;
}

void ADIY_MusicPlayer::OnMusicFinished()
{

    PlayMusicByIndex((ESoundTrackID)GenerateDateCorrespondingMusicIndex());
}

uint32 ADIY_MusicPlayer::GenerateDateCorrespondingMusicIndex()
{
    //@todo weather system needs to be implemented
    uint32 base_index = 0;
    // const FDateTime &now_time = FDateTime::Now();
    return HourOfToday + base_index;
}

void ADIY_MusicPlayer::LoadMusicFromDirectory()
{
    FString RelativePath = FPaths::ProjectContentDir() + TEXT("Audio/BGM/Anim_Crossing/");
    FString AbsolutePath = FPaths::ConvertRelativePathToFull(RelativePath);
    UE_LOG(LogTemp, Warning, TEXT("Full path found is %s"), *AbsolutePath);

    TArray<FString> Files;
    IFileManager::Get().FindFilesRecursive(Files, *AbsolutePath, TEXT("*.uasset"), true, false, false);
    UE_LOG(LogTemp, Warning, TEXT("Number of files found: %d"), Files.Num());

    FAssetRegistryModule &AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");
    TArray<FAssetData> AssetDatas;

    FARFilter Filter;
    Filter.bRecursiveClasses = true;
    Filter.bRecursivePaths = true;
    Filter.ClassPaths.Add(USoundWave::StaticClass()->GetClassPathName());

    for (const FString &File : Files)
    {
        FString AssetPath = FPackageName::FilenameToLongPackageName(File);
        UE_LOG(LogTemp, Warning, TEXT("Asset path added to filter: %s"), *AssetPath);
        Filter.PackagePaths.Add(*AssetPath);
    }

    bool bSuccess = AssetRegistryModule.Get().GetAssets(Filter, AssetDatas);
    UE_LOG(LogTemp, Warning, TEXT("Assets retrieval was %s with %d assets found"), bSuccess ? TEXT("successful") : TEXT("unsuccessful"), AssetDatas.Num());

    bool anyGot = false;
    for (const FAssetData &AssetData : AssetDatas)
    {
        USoundBase *LoadedSound = Cast<USoundBase>(AssetData.GetAsset());
        if (LoadedSound)
        {
            UE_LOG(LogTemp, Warning, TEXT("Sound Track Added: %s"), *LoadedSound->GetName());
            // MusicTracks.Add(LoadedSound);
            anyGot = true;
        }
    }

    if (!anyGot)
    {
        UE_LOG(LogTemp, Warning, TEXT("No sound track loaded properly"));
    }
}

void ADIY_MusicPlayer::PlayMusicByIndex(ESoundTrackID Index)
{

    USoundBase *SoundToPlay = (*MusicTracks.Find(Index));
    if (SoundToPlay)
    {
        if (SoundToPlay && AudioComponent)
        {

            AudioComponent->SetSound(SoundToPlay);
            AudioComponent->FadeIn(3.0f, 0.6f);
            mCurrentPlayingSoundTrack = (int32)Index;

            UE_LOG(LogTemp, Warning, TEXT("Now playing: %s"), *SoundToPlay->GetName());
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("Sound resource is null"));
        }
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Sound index is invalid"));
    }
}

void ADIY_MusicPlayer::PlayMusicCorrespondingToTime()
{
    PlayMusicByIndex((ESoundTrackID)GenerateDateCorrespondingMusicIndex());
}

void ADIY_MusicPlayer::StopMusic()
{
    if (AudioComponent && AudioComponent->IsPlaying())
    {
        AudioComponent->Stop();
    }
}

ESoundTrackID ADIY_MusicPlayer::GetCurrentMusicTrackID()
{
    return (ESoundTrackID)mCurrentPlayingSoundTrack;
}

void ADIY_MusicPlayer::SetCurrentHour(uint8 inNewHour)
{

    if (inNewHour == HourOfToday)
        return;
    HourOfToday = inNewHour;

    PlayMusicCorrespondingToTime();
}
UDIY_MainPlayerUIController *ADIY_MusicPlayer::AcquireOwnerActorOwnedUDIY_MainPlayerUIController()
{
    if (mOwnerActorOwned_UDIY_MainPlayerUIController != nullptr)
        return mOwnerActorOwned_UDIY_MainPlayerUIController;

    AActor *cur_player = UGameplayStatics::GetPlayerController(this, 0)->GetPawn();

    if (cur_player != nullptr && nullptr != (mOwnerActorOwned_UDIY_MainPlayerUIController = cur_player->FindComponentByClass<UDIY_MainPlayerUIController>()))
    {
        return mOwnerActorOwned_UDIY_MainPlayerUIController;
    }

    return nullptr;
}