// All rights reserved to ShadowCandle Studio

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "../../System/DIY_TickableWorldSubsystem.h"
#include "DIY_CameraDefines.h"
// #include "PhysicalMaterials/PhysicalMaterial.h"
#include "DIY_CameraManager.generated.h"

UCLASS()
class AROUNDME_API UDIY_CameraManager : public UDIY_TickableWorldSubsystem
{
    GENERATED_BODY()

public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCameraInUseChanged,class AActor*,NewCameraActor);

    UPROPERTY(BlueprintAssignable, Category = "DIY Camera Manager")
    FOnCameraInUseChanged OnCameraInUseChanged;
    virtual void Initialize(FSubsystemCollectionBase& Collection) override;
    virtual void Deinitialize() override;
    
    static UDIY_CameraManager* Get(const UObject* WorldContextObject);


    UFUNCTION(BlueprintCallable, Category = "DIY Camera Manager")
    void AddCameraEntry(const FDIY_CameraEntry& Entry);

    UFUNCTION(BlueprintCallable, Category = "DIY Camera Manager")
    int32 RemoveCameraEntry(FName CamName);

    UFUNCTION(BlueprintCallable, Category = "DIY Camera Manager")
    void SetCurrentInUseCameraEntry(FName CamName);

    UFUNCTION(BlueprintCallable, Category = "DIY Camera Manager")
    const FDIY_CameraEntry& GetCurrentInUseCameraEntry() const;

    virtual void Tick(float DeltaTime) override;

protected:
    void UpdateCameraEntries(float DeltaTime);

private:
    TMap<FName, FDIY_CameraEntry> CameraEntries;

    const FDIY_CameraEntry* FindCameraEntry(FName CamName);

    FDIY_CameraEntry CurrentCameraEntry{};
};