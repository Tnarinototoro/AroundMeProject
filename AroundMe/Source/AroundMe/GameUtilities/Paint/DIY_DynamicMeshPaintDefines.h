#pragma once

#include "CoreMinimal.h"
#include "DIY_DynamicMeshPaintDefines.generated.h"



UENUM(BlueprintType)
enum class EDIY_StainType : uint8
{
    Mud UMETA(Description = "R mud stains"),
    Blood UMETA(Description = "G blood stains "),
    MicroPlants UMETA(Description = "B micro plants basically means those stains generated from plants"),
    Metals_Rust UMETA(Description = "A metal ruast or something"),

};