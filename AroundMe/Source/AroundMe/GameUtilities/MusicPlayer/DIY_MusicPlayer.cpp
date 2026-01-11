// All rights reserved to ShadowCandle Studio

#include "DIY_MusicPlayer.h"
#include "DIY_MusicPlayerDefines.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "Misc/DateTime.h"
#include "../DIY_Utilities.h"
#include "Kismet/GameplayStatics.h"
#include "../../Player/UI/DIY_MainPlayerUIController.h"
#include "../Logs/DIY_LogHelper.h"
#include "Engine/StreamableManager.h"
#include "Engine/AssetManager.h"
#include "AroundMe/Debug/DIY_GlobalDebugSettings.h"
#include "../Sound/DIY_SoundManager.h"
#include "../Time/DIY_TimeManager.h"

ADIY_MusicPlayer::ADIY_MusicPlayer()
{
    PrimaryActorTick.bCanEverTick = true;
    PrimaryActorTick.TickInterval = 1.0f;
    AudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComponent"));
    AudioComponent->bAllowSpatialization = true; // 关闭空间化以实现2D音效
    AudioComponent->bIsUISound = false;          // 设置为UI声音，通常用于2D背景音乐
    AudioComponent->SetupAttachment(RootComponent);
}

ADIY_MusicPlayer::~ADIY_MusicPlayer()
{
}

void ADIY_MusicPlayer::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    FDateTime cur_date_time = FDateTime::Now();

    if (UDIY_TimeManager *TimeManager = UDIY_TimeManager::Get(GetWorld()))
    {
        cur_date_time = TimeManager->GetCurrentLocal();
    }

    uint8 new_hour = cur_date_time.GetHour();

#if UE_BUILD_DEVELOPMENT || UE_BUILD_DEBUG
    int DbgHour = FDIY_GlobalDebugSettings::sInstance.musicplayer.OverrideBGMHour;
    if (DbgHour >= 0)
    {
        new_hour = (int)DbgHour;
    }

#endif

    // EASY_LOG_MAINPLAYER("cur new hour is %d", new_hour);
    SetCurrentHour(new_hour);

    if (mCurrentPlayingSoundTrack >= 0)
    {
        CurrentMusicPlayedTime += DeltaTime;
    }

    UDIY_MainPlayerUIController *cur_ui_controller = AcquireOwnerActorOwnedUDIY_MainPlayerUIController();
    if (nullptr != cur_ui_controller)
    {
        cur_ui_controller->RequestUpdateStateInfoText_MusicPlayer(
            FText::FromString(
                FString::Printf(
                    TEXT("%d/%d/%d \n %d:%d:%d \n Track: %s \n PlayingTime: %f Duration: %f"),
                    cur_date_time.GetYear(),
                    cur_date_time.GetMonth(),
                    cur_date_time.GetDay(),
                    HourOfToday,
                    cur_date_time.GetMinute(),
                    cur_date_time.GetSecond(),
                    AudioComponent->GetSound() ? *AudioComponent->GetSound()->GetName() : TEXT("None"),
                    CurrentMusicPlayedTime,
                    AudioComponent->GetSound() ? AudioComponent->GetSound()->GetDuration() : 0.0f)

                    ));
    }
}

void ADIY_MusicPlayer::OnMusicLoaded(TSoftObjectPtr<USoundBase> SoundSoft, ESoundTrackID Index)
{
    // 执行到这里时，this 已经被引擎验证过是有效的了
    USoundBase* LoadedSound = SoundSoft.Get();

    // 注意：这里使用 .Get() 访问强引用的 AudioComponent
    if (LoadedSound && AudioComponent.IsValid())
    {
        AudioComponent->SetSound(LoadedSound);
        AudioComponent->FadeIn(3.0f, 0.6f);
        mCurrentPlayingSoundTrack = (int32)Index;
        CurrentMusicPlayedTime = 0.f;

        UE_LOG(LogTemp, Log, TEXT("Now playing via Delegate: %s"), *LoadedSound->GetName());
    }
}

void ADIY_MusicPlayer::BeginPlay()
{
    Super::BeginPlay();
    checkf(AudioComponent != nullptr, TEXT("Audio component shall be setup properly to start game"));
    const UDataTable *MusicDataTable = GetMusicDataTable();
    if (MusicDataTable)
    {
        MusicDataTable->ForeachRow<FDIY_SoundTrackRow>(
            TEXT("BuildMusicRowMap"),
            [this](const FName &RowName, const FDIY_SoundTrackRow &Row)
            {
                TrackToRowName.Add(Row.TrackID, RowName);
            });
    }
    AudioComponent->OnAudioFinished.AddUniqueDynamic(this, &ADIY_MusicPlayer::OnMusicFinished);
    PlayMusicByIndex((ESoundTrackID)GenerateDateCorrespondingMusicIndex());

    
}

void ADIY_MusicPlayer::EndPlay(const EEndPlayReason::Type EndPlayReason)
{

    Super::EndPlay(EndPlayReason);
    if (AudioComponent->OnAudioFinished.IsAlreadyBound(this, &ADIY_MusicPlayer::OnMusicFinished))
    {
        AudioComponent->OnAudioFinished.RemoveDynamic(this, &ADIY_MusicPlayer::OnMusicFinished);
    }
    StopMusic();
}

void ADIY_MusicPlayer::OnMusicFinished()
{
    EASY_LOG_MAINPLAYER(" ADIY_MusicPlayer Music finished called!");
    PlayMusicByIndex((ESoundTrackID)GenerateDateCorrespondingMusicIndex());
    EASY_LOG_MAINPLAYER(" ADIY_MusicPlayer Music finished called and played music also called!");
}

uint32 ADIY_MusicPlayer::GenerateDateCorrespondingMusicIndex()
{
    //@todo weather system needs to be implemented
    uint32 base_index = 0;
    // const FDateTime &now_time = FDateTime::Now();
    return HourOfToday + base_index;
}

const UDataTable *ADIY_MusicPlayer::GetMusicDataTable()
{
    if (UDIY_SoundManager *SoundManager = UDIY_SoundManager::Get(this->GetWorld()))
    {
        if (SoundManager->SubsystemHelper)
        {
            return SoundManager->SubsystemHelper->MusicDataTable;
        }
    }
    return nullptr;
}

void ADIY_MusicPlayer::PlayMusicByIndex(ESoundTrackID Index)
{

    const UDataTable *MusicDataTable = GetMusicDataTable();

    if (nullptr == MusicDataTable)
    {
        UE_LOG(LogTemp, Warning, TEXT("MusicDataTable is null"));
        return;
    }

    const FName *RowName = TrackToRowName.Find(Index);
    if (!RowName)
    {
        UE_LOG(LogTemp, Warning, TEXT("No RowName mapped for TrackID %s"),
               *UEnum::GetValueAsString(Index));
        return;
    }

    FDIY_SoundTrackRow *Row = MusicDataTable->FindRow<FDIY_SoundTrackRow>(*RowName, TEXT(""));
    if (!Row || Row->SoundAsset.IsNull())
    {
        UE_LOG(LogTemp, Warning, TEXT("Row missing or SoundAsset null for %s"), *RowName->ToString());
        return;
    }

    const TSoftObjectPtr<USoundBase> SoundSoft = Row->SoundAsset;

    // 使用 CreateUObject 代替 Lambda
    FStreamableManager& Streamable = UAssetManager::GetStreamableManager();
    Streamable.RequestAsyncLoad(
        SoundSoft.ToSoftObjectPath(),
        FStreamableDelegate::CreateUObject(this, &ADIY_MusicPlayer::OnMusicLoaded, SoundSoft, Index)
    );
}

void ADIY_MusicPlayer::PlayMusicCorrespondingToTime()
{
    PlayMusicByIndex((ESoundTrackID)GenerateDateCorrespondingMusicIndex());
}

void ADIY_MusicPlayer::StopMusic()
{
    if (AudioComponent.IsValid() && AudioComponent->IsPlaying())
    {
        AudioComponent->Stop();
        CurrentMusicPlayedTime = 0.f;
        mCurrentPlayingSoundTrack = -1;
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

    APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
    if (!PC) return nullptr;
    AActor* cur_player = PC->GetPawn();

    if (cur_player != nullptr && nullptr != (mOwnerActorOwned_UDIY_MainPlayerUIController = cur_player->FindComponentByClass<UDIY_MainPlayerUIController>()))
    {
        return mOwnerActorOwned_UDIY_MainPlayerUIController;
    }

    return nullptr;
}