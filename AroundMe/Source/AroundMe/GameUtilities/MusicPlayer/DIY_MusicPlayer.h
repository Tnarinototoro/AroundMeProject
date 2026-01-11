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

    uint8 HourOfToday{0};
    float CurrentMusicPlayedTime{0.0f};
    void OnMusicLoaded(TSoftObjectPtr<USoundBase> SoundSoft, ESoundTrackID Index);

protected:
    virtual void BeginPlay() override;

    int32 mCurrentPlayingSoundTrack{-1};

    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

    UFUNCTION()
    void OnMusicFinished();

    uint32 GenerateDateCorrespondingMusicIndex();
    const class UDataTable *GetMusicDataTable();

public:
    UPROPERTY()
    TWeakObjectPtr<UAudioComponent> AudioComponent;

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
    // TrackID -> RowName 映射
    TMap<ESoundTrackID, FName> TrackToRowName;
    DECLARE_GET_COMPONENT_HELPER(UDIY_MainPlayerUIController);

    ADIY_MusicPlayer();
    ~ADIY_MusicPlayer();
    // Called every frame
    virtual void Tick(float DeltaTime) override;
};