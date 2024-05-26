#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DIY_ConductivityProcessor.generated.h"

UCLASS(ClassGroup=(Player), meta=(BlueprintSpawnableComponent))
class AROUNDME_API UDIY_ConductivityProcessor : public UActorComponent
{
    GENERATED_BODY()

public:    
   
    UDIY_ConductivityProcessor();

protected:
    // Called when the game starts
    virtual void BeginPlay() override;

public:    
    // Called every frame
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

    //weather, geoinfo, damage, item_impact
    //0-1
    float moist{0.1};


    //0-1
    float metal_self_conductivity{0.f};



    //0-1
    float metal_self_purity{0.f};


};