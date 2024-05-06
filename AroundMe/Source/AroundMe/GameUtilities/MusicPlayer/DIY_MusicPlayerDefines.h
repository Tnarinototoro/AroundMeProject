#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DIY_MusicPlayerDefines.generated.h"


static const uint32 DIY_MaxTrack_Count = 256;

USTRUCT(BlueprintType)
struct FDIY_MusicTrackInfoDataTableRow : public FTableRowBase
{
	GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Music")
        FString TrackName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Music")
        USoundBase* Sound;


};