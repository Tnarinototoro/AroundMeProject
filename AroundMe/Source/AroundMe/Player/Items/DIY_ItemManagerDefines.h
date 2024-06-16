
// All rights reserved to ShadowCandle Studio

#pragma once

#include "CoreMinimal.h"
#include "DIY_ItemManagerDefines.generated.h"

//this basically represents state in item manager 
UENUM(BlueprintType) 
enum class EItemLifeCycleState : uint8 
{
    //just spawned nothing has been done to the item     <----invisible
    EItemState_SpanwedJustNow,

    //just spawned but inited with condfig this also means that this item is reset about the states   <--invisible
    EItemState_SpawnedAndInitedWithConfig,

    //ready for presenting but not usable currently          <----invisble
    EItemState_ReadyForPresenting,

    //no game play tick             <-----visible but not ticking
    EItemState_PresentingOnly,             
        
    //game tick is running processing outer stimulus    <------visible and ticking                    
    EItemState_PresentingAndRunningEvents,
    
    EItemState_Count

};
