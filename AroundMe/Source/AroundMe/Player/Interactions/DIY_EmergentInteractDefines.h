
#pragma once

#include "CoreMinimal.h"
//#include "DIY_EmergentInteractDefines.generated.h"


enum class EDIY_InteractItemFlag : uint64
{
	Static=1 UMETA(Description="Moveable?"),
	Obey_Physics_Rules=(1<<1) UMETA(Description="Will obey physics rules?"),
    Living_Thing=(1<<2) UMETA(Description="Whether this is a living thing? including animals plants"),
    Can_Be_Destroyed=(1<<3) UMETA(Description="Obeys physical rules ? solidness related"),
    React_To_Temperatur=(1<<4) UMETA(Description="React to temperature?"),
    Has_Any_Conductivity=(1<<5) UMETA(Description="conductivity good then electricity comes in")
    
};


struct DIY_InteractUtilities
{
    static bool IsStatic(uint64 inCombinedFlag)  
    { return inCombinedFlag & static_cast<uint64>(EDIY_InteractItemFlag::Static); }
    static bool DoesObeyPhysicsRules(uint64 inCombinedFlag)  
    { return inCombinedFlag & static_cast<uint64>(EDIY_InteractItemFlag::Obey_Physics_Rules); }
    static bool IsLivingThing(uint64 inCombinedFlag)  
    { return inCombinedFlag & static_cast<uint64>(EDIY_InteractItemFlag::Living_Thing); }
    static bool CanBeDestroyed(uint64 inCombinedFlag)  
    { return inCombinedFlag & static_cast<uint64>(EDIY_InteractItemFlag::Can_Be_Destroyed); }
    static bool DoesReactToTemperature(uint64 inCombinedFlag)  
    { return inCombinedFlag & static_cast<uint64>(EDIY_InteractItemFlag::React_To_Temperatur); }
    static bool HasAnyConductivity(uint64 inCombinedFlag)  
    { return inCombinedFlag & static_cast<uint64>(EDIY_InteractItemFlag::Has_Any_Conductivity); }

    

    static void SetFlag(uint64& OriginCombinedFlag, const uint64& inFlag);
    static void UnSetFlag(uint64& OriginCombineFlag, const uint64& inFlag);
   
};





