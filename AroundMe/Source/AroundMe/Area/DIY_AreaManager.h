// All rights reserved to ShadowCandle Studio

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DIY_AreaDefines.h"
// #include "PhysicalMaterials/PhysicalMaterial.h"
#include "DIY_AreaManager.generated.h"

UCLASS(Blueprintable)
class AROUNDME_API ADIY_AreaManager : public AActor
{
    GENERATED_BODY()

public:
    static ADIY_AreaManager *GetManager();

    // Called every frame
    virtual void Tick(float DeltaTime) override;
    void RegisterArea(EDIY_Area inAreaID,AActor *inAreaAncor);
    void UnregisterArea(EDIY_Area inAreaID);

protected:
    ADIY_AreaManager();
    ~ADIY_AreaManager();
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;
    /** Overridable function called whenever this actor is being removed from a level */
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

private:
    static ADIY_AreaManager *ManagerInstance;
    TArray<class AActor*> mAreaAnchors;
   
};