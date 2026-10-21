#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "DIY_StylizedRenderSubsystem.generated.h"

class ADIY_StylizedRenderDirector;

UCLASS()
class AROUNDME_API UDIY_StylizedRenderSubsystem : public UWorldSubsystem
{
    GENERATED_BODY()

public:
    virtual void OnWorldBeginPlay(UWorld &InWorld) override;
    virtual void Deinitialize() override;

    UFUNCTION(BlueprintCallable, Category = "AroundMe|StylizedRender")
    void ReapplyStyle();

    UFUNCTION(BlueprintPure, Category = "AroundMe|StylizedRender")
    ADIY_StylizedRenderDirector *GetDirector() const;

private:
    UPROPERTY(Transient)
    TObjectPtr<ADIY_StylizedRenderDirector> Director;
};
