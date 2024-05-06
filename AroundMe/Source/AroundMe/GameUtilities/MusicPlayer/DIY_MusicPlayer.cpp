// All rights reserved to ShadowCandle Studio


#include "DIY_MusicPlayer.h"
#include "DIY_MusicPlayerDefines.h"

AMusicPlayer::AMusicPlayer()
{
    // Set this actor to call Tick() every frame if needed
    PrimaryActorTick.bCanEverTick = false;

    AudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComponent"));
    AudioComponent->SetupAttachment(RootComponent);
}

void AMusicPlayer::BeginPlay()
{
    Super::BeginPlay();
}

void AMusicPlayer::PlayMusic(const FName& TrackID)
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

void AMusicPlayer::StopMusic()
{
    if (AudioComponent && AudioComponent->IsPlaying())
    {
        AudioComponent->Stop();
    }
}