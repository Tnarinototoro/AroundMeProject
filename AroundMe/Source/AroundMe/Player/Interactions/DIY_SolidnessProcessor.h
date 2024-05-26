#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DIY_SolidnessProcessor.generated.h"

UCLASS(ClassGroup=(Player), meta=(BlueprintSpawnableComponent))
class AROUNDME_API UDIY_SolidnessProcessor : public UActorComponent
{
    GENERATED_BODY()

public:    
   
    UDIY_SolidnessProcessor();

protected:
    // Called when the game starts
    virtual void BeginPlay() override;

public:    
    // Called every frame
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;




    float durability{100.0f};



    float sphereness{0.6};


    float outer_damage{200.0f};


    float cutting_damage_ratio{0.6};

    float cutting_damage_susceptibility{2.0f};

    float blunt_damage_susceptibility{0.1f};


    



   

};