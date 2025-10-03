#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DIY_MusicPlayerDefines.generated.h"


static const uint32 DIY_MaxTrack_Count = 256;

UENUM(BlueprintType)
enum class ESoundTrackID : uint8
{
	//sunny normal bgm 
	ESoundTrackID_Sunny_12_00_PM,
	ESoundTrackID_Sunny_1_00_AM,
	ESoundTrackID_Sunny_2_00_AM,
	ESoundTrackID_Sunny_3_00_AM,
	ESoundTrackID_Sunny_4_00_AM,
	ESoundTrackID_Sunny_5_00_AM,
	ESoundTrackID_Sunny_6_00_AM,
	ESoundTrackID_Sunny_7_00_AM,
	ESoundTrackID_Sunny_8_00_AM,
	ESoundTrackID_Sunny_9_00_AM,
	ESoundTrackID_Sunny_10_00_AM,
	ESoundTrackID_Sunny_11_00_AM,
	ESoundTrackID_Sunny_12_00_AM,
	ESoundTrackID_Sunny_1_00_PM,
	ESoundTrackID_Sunny_2_00_PM,
	ESoundTrackID_Sunny_3_00_PM,
	ESoundTrackID_Sunny_4_00_PM,
	ESoundTrackID_Sunny_5_00_PM,
	ESoundTrackID_Sunny_6_00_PM,
	ESoundTrackID_Sunny_7_00_PM,
	ESoundTrackID_Sunny_8_00_PM,
	ESoundTrackID_Sunny_9_00_PM,
	ESoundTrackID_Sunny_10_00_PM,
	ESoundTrackID_Sunny_11_00_PM,


	//rainy normal bgm
	ESoundTrackID_Rainy_12_00_PM,
	ESoundTrackID_Rainy_1_00_AM,
	ESoundTrackID_Rainy_2_00_AM,
	ESoundTrackID_Rainy_3_00_AM,
	ESoundTrackID_Rainy_4_00_AM,
	ESoundTrackID_Rainy_5_00_AM,
	ESoundTrackID_Rainy_6_00_AM,
	ESoundTrackID_Rainy_7_00_AM,
	ESoundTrackID_Rainy_8_00_AM,
	ESoundTrackID_Rainy_9_00_AM,
	ESoundTrackID_Rainy_10_00_AM,
	ESoundTrackID_Rainy_11_00_AM,
	ESoundTrackID_Rainy_12_00_AM,
	ESoundTrackID_Rainy_1_00_PM,
	ESoundTrackID_Rainy_2_00_PM,
	ESoundTrackID_Rainy_3_00_PM,
	ESoundTrackID_Rainy_4_00_PM,
	ESoundTrackID_Rainy_5_00_PM,
	ESoundTrackID_Rainy_6_00_PM,
	ESoundTrackID_Rainy_7_00_PM,
	ESoundTrackID_Rainy_8_00_PM,
	ESoundTrackID_Rainy_9_00_PM,
	ESoundTrackID_Rainy_10_00_PM,
	ESoundTrackID_Rainy_11_00_PM,



	//snowy normal bgm
	ESoundTrackID_Snowy_12_00_PM,
	ESoundTrackID_Snowy_1_00_AM,
	ESoundTrackID_Snowy_2_00_AM,
	ESoundTrackID_Snowy_3_00_AM,
	ESoundTrackID_Snowy_4_00_AM,
	ESoundTrackID_Snowy_5_00_AM,
	ESoundTrackID_Snowy_6_00_AM,
	ESoundTrackID_Snowy_7_00_AM,
	ESoundTrackID_Snowy_8_00_AM,
	ESoundTrackID_Snowy_9_00_AM,
	ESoundTrackID_Snowy_10_00_AM,
	ESoundTrackID_Snowy_11_00_AM,
	ESoundTrackID_Snowy_12_00_AM,
	ESoundTrackID_Snowy_1_00_PM,
	ESoundTrackID_Snowy_2_00_PM,
	ESoundTrackID_Snowy_3_00_PM,
	ESoundTrackID_Snowy_4_00_PM,
	ESoundTrackID_Snowy_5_00_PM,
	ESoundTrackID_Snowy_6_00_PM,
	ESoundTrackID_Snowy_7_00_PM,
	ESoundTrackID_Snowy_8_00_PM,
	ESoundTrackID_Snowy_9_00_PM,
	ESoundTrackID_Snowy_10_00_PM,
	ESoundTrackID_Snowy_11_00_PM,




	ESoundTrackID_Count

};



USTRUCT(BlueprintType)
struct FDIY_SoundTrackRow : public FTableRowBase
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    ESoundTrackID TrackID;

    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSoftObjectPtr<USoundBase> SoundAsset;
};