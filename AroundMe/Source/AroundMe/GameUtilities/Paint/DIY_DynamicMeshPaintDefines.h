#pragma once

#include "CoreMinimal.h"
#include "DIY_DynamicMeshPaintDefines.generated.h"



UENUM(BlueprintType)
enum class EDIY_StainType : uint8
{
    Mud UMETA(Description = "mud stains"),
    Blood UMETA(Description = "blood stains"),
    MicroPlants UMETA(Description = "micro plants basically means those stains generated from plants"),
    Metals UMETA(Description = "metal ruast or something"),

};