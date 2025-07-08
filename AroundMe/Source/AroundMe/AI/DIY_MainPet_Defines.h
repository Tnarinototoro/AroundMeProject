// All rights reserved to ShadowCandle Studio

#pragma once

#include "CoreMinimal.h"
#include "DIY_MainPet_Defines.generated.h"


UENUM(BlueprintType)
enum class EDIY_MainPetBehavior_MainMode : uint8
{
    Root,
    Patrol,
    TryDoSomething,
    MainMode_Count

};

