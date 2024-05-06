// All rights reserved to ShadowCandle Studio

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Sound/SoundBase.h"
#include "Components/AudioComponent.h"
#include "Engine/DataTable.h"
#include "DIY_MusicPlayer.generated.h" // UE 自动生成的文件引用



UCLASS()
class AROUNDME_API ADIY_MusicPlayer : public AActor
{
    GENERATED_BODY()

public:
    ADIY_MusicPlayer();

protected:
    virtual void BeginPlay() override;

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Music")
        UDataTable* MusicTracksTable;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Music")
        UAudioComponent* AudioComponent;

    UFUNCTION(BlueprintCallable, Category = "Music")
        void PlayMusic(int32 TrackIndex);

    UFUNCTION(BlueprintCallable, Category = "Music")
        void StopMusic();
};