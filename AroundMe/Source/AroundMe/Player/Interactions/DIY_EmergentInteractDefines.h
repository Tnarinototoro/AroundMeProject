
#pragma once

#include "CoreMinimal.h"
//#include "DIY_EmergentInteractDefines.generated.h"

UENUM(BlueprintType)
enum class EDIY_InteractItemFlag : uint8 
{
  Static UMETA(Description = "Moveable?"),
  Obey_Physics_Rules UMETA(Description = "Will obey physics rules?"),

  Living_Thing UMETA(Description = "Whether this is a living thing? including animals plants"),
  Can_Be_Destroyed UMETA(Description ="Obeys physical rules ? solidness related"),
  React_To_Temperatur UMETA(Description = "React to temperature?"),
  Has_Any_Conductivity UMETA(Description ="conductivity good then electricity comes in")

};
