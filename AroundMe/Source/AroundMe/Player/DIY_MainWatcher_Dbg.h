// All rights reserved to ShadowCandle Studio

#pragma once


#include "CoreMinimal.h"
#include "DIY_MainPlayer.h"
#include "AroundMe/Player/Camera/DIY_CameraDefines.h"
#include "DIY_MainWatcher_Dbg.generated.h"

UCLASS(
    ClassGroup = (DIY_Debug),
   
    DisplayName = "DIY_MainWatcher_Dbg"

)
class AROUNDME_API ADIY_MainWatcher_Dbg : public ADIY_MainPlayer
{
    GENERATED_BODY()
protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

    virtual void Destroyed() override;
public:

};
