#pragma once

#include "CoreMinimal.h"
#include "DIY_DynamicMeshPaintDefines.generated.h"

UENUM(BlueprintType)
enum class EDIY_PaintType : uint8
{
    Sphere UMETA(Description = "Sphere type surrounding object"),
    Square UMETA(Description = "Square type surrounding object"),

    Plane UMETA(Description = "Plane type with directive impacting on object"),

};