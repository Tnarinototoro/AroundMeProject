// All rights reserved to ShadowCandle Studio

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "../../System/DIY_WorldSubsystem.h"
#include "DIY_CameraDefines.h"
// #include "PhysicalMaterials/PhysicalMaterial.h"
#include "DIY_CameraManager.generated.h"

UCLASS()
class AROUNDME_API UDIY_CameraManager : public UDIY_WorldSubsystem
{
    GENERATED_BODY()

public:
    virtual void Initialize(FSubsystemCollectionBase& Collection) override;
    virtual void Deinitialize() override;
    
    static UDIY_CameraManager* Get(const UObject* WorldContextObject);

    UFUNCTION(BlueprintCallable, Category = "DIY Camera Manager")
    void AddCameraEntry(const FDIY_CameraEntry& Entry);

    UFUNCTION(BlueprintCallable, Category = "DIY Camera Manager")
    int32 RemoveCameraEntry(const FName& CamName);

    
    




private:
    TMap<FName, FDIY_CameraEntry> CameraEntries;

    const FDIY_CameraEntry* FindCameraEntry(const FName& CamName);

};