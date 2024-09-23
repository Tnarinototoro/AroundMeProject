#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DIY_DynamicMeshPaintCommonInterFace.h"

#include "DIY_DynamicMeshPaintComponent.generated.h"

UCLASS(ClassGroup = (Player), meta = (BlueprintSpawnableComponent))
class AROUNDME_API UDIY_DynamicMeshPaintComponent : public USceneComponent, public IDIY_DynamicMeshPaintCommonInterFace
{
    GENERATED_BODY()

public:
    // Todo enum Temperature

    UDIY_DynamicMeshPaintComponent();

    // initilization of component attrs
    virtual void OnInitializePaintableMaterial() override;
    // Reset values of components
    virtual void OnResetComponentValues() override;

protected:
    // Called when the game starts
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override;

    UFUNCTION(BlueprintCallable, Category = "DIY_Paint")
    void AddStainAt(const FVector &WorldPosition, float BrushRadius);

protected:
    // Temperature data and functions start <--------------------------------------------------------------------------------------------------------------------
protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stain")
    class UTextureRenderTarget2D *StainRenderTargetTest;

public:
private:
    // Temperature data and functions End -------------------------------------------------------------------------------------------------------------------->

    // Moisture data and functions start <--------------------------------------------------------------------------------------------------------------------
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stain")
    class UMaterial *ClearMaterial; // Or UMaterialInstance if using instance

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stain")
    class UMaterialInterface *UnwrapMaterial{nullptr};

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stain")
    FLinearColor UnwrapPosition{0.f, 0.f, 0.f, 0.f}; // Or UMaterialInstance if using instance
protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Stain")
    class UStaticMeshComponent *BackgroundPlane{nullptr};

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Stain")
    class USceneCaptureComponent2D *SceneCaptureCompo{nullptr};

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Stain")
    class UMaterialParameterCollection *Global_DynamicPaintMaterialCollection;

private:
    UPROPERTY()
    class UMaterialInstanceDynamic *OriginalDynamicMaterialInstance;

    UPROPERTY()
    class UMaterialInstanceDynamic *DynamicMaterialInstance_forCapturing;

    UPROPERTY()
    class UStaticMeshComponent *OwnerMeshCompo{nullptr};
};