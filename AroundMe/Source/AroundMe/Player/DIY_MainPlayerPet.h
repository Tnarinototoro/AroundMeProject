// All rights reserved to ShadowCandle Studio

#pragma once

#include "CoreMinimal.h"
#include "DIY_MainPlayer.h"
#include "DIY_MainPlayerPet.generated.h"

UCLASS(
    ClassGroup = (DIY_Pet),
    DisplayName = "DIY_MainPlayerPet")
class AROUNDME_API ADIY_MainPlayerPet : public ADIY_MainPlayer
{
    GENERATED_BODY()

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

    virtual void Destroyed() override;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Equipment")
    class UDIY_EquipmentManager *EquipmentManager;

public:
    ADIY_MainPlayerPet();
};
