// All rights reserved to ShadowCandle Studio

#pragma once

#include "CoreMinimal.h"
#include "DIYEquipmentEnums.generated.h"

UENUM(BlueprintType)
enum class EHairType : uint8
{
    Hair_1 UMETA(DisplayName = "Hair_1"),
    Hair_2 UMETA(DisplayName = "Hair_2"),
    Hair_3 UMETA(DisplayName = "Hair_3"),
    Hair_4 UMETA(DisplayName = "Hair_4"),
    Hair_5 UMETA(DisplayName = "Hair_5"),
    Hair_6 UMETA(DisplayName = "Hair_6"),


    Hair_Count
};

UENUM(BlueprintType)
enum class EHatType : uint8
{
    Hat_Farmer UMETA(DisplayName = "Hat_Farmer"),
    Hat_Gatherer UMETA(DisplayName = "Hat_Gatherer"),
    Hat_Miner UMETA(DisplayName = "Hat_Miner"),
    Hat_WoodCutter UMETA(DisplayName = "Hat_WoodCutter"),
    Hat_Builder UMETA(DisplayName = "Hat_Builder"),
    Hat_Count
   

};