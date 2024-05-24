#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DIY_MainPlayerUIController.generated.h"

UCLASS(ClassGroup =(Player), meta = (BlueprintSpawnableComponent))
class AROUNDME_API UDIY_MainPlayerUIController : public UActorComponent
{
    GENERATED_BODY()

public:

    UDIY_MainPlayerUIController();

protected:
    // Called when the game starts
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;



};
