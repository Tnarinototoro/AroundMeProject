// All rights reserved to ShadowCandle Studio

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Sound/SoundBase.h"
#include "Components/AudioComponent.h"
#include "Engine/DataTable.h"
#include "DIY_MusicPlayerDefines.h"
#include "../DIY_HelperMacros.h"
#include "DIY_MusicPlayer.generated.h" // UE 自动生成的文件引用

UCLASS()
class AROUNDME_API ADIY_MusicPlayer : public AActor
{
    GENERATED_BODY()

public:
    ADIY_MusicPlayer();
    ~ADIY_MusicPlayer();
    // Called every frame
    virtual void Tick(float DeltaTime) override;

private:
    static ADIY_MusicPlayer *gMusicPlayerInstance;

    uint8 HourOfToday{0};

protected:
    virtual void BeginPlay() override;

    int32 mCurrentPlayingSoundTrack{-1};

    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

    UFUNCTION()
    void OnMusicFinished();

    uint32 GenerateDateCorrespondingMusicIndex();

public:
#if WITH_EDITOR
    static int Dbg_Music_Hour;
#endif
    static ADIY_MusicPlayer *GetMusicPlayer();
    // 音乐资源数组
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "DIY_MusicPlayer")
    TMap<ESoundTrackID, USoundBase *> MusicTracks;

    // 音频组件用于播放2D音乐
    // UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Music")
    UAudioComponent *AudioComponent;

    // 功能：加载音乐
    void LoadMusicFromDirectory();

    // 根据索引播放音乐
    UFUNCTION(BlueprintCallable, Category = "DIY_MusicPlayer")
    void PlayMusicByIndex(ESoundTrackID musicID);
    UFUNCTION(BlueprintCallable, Category = "DIY_MusicPlayer")
    void PlayMusicCorrespondingToTime();
    // 停止音乐播放
    UFUNCTION(BlueprintCallable, Category = "DIY_MusicPlayer")
    void StopMusic();
    UFUNCTION(BlueprintCallable, Category = "DIY_MusicPlayer")
    ESoundTrackID GetCurrentMusicTrackID();

    uint8 GetCurrentHour() const { return HourOfToday; }
    void SetCurrentHour(uint8 inNewHour);

    DECLARE_GET_COMPONENT_HELPER(UDIY_MainPlayerUIController);
};