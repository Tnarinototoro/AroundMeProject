#pragma once

#include "CoreMinimal.h"
#include "Engine/TargetPoint.h"

#include "DIY_AreaTeleportAnchor.generated.h"

UCLASS()
class AROUNDME_API ADIY_AreaTeleportAnchor : public ATargetPoint
{
	GENERATED_BODY()
private:
  

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;
    /** Overridable function called whenever this actor is being removed from a level */
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
   

public:
    ADIY_AreaTeleportAnchor();
    ~ADIY_AreaTeleportAnchor();

};


