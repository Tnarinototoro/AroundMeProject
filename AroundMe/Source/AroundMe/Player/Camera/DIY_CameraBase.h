#pragma once

#include "CoreMinimal.h"
#include "DIY_CameraDefines.h"
#include "DIY_CameraBase.generated.h"

UCLASS()
class AROUNDME_API ADIY_CameraBase : public AActor
{
	GENERATED_BODY()
private:
  

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;
    /** Overridable function called whenever this actor is being removed from a level */
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

    virtual void Destroyed() override;
   
    UFUNCTION()
    void OnCameraInUseChanged(class AActor *NewCameraActor);

public:
    ADIY_CameraBase();
    ~ADIY_CameraBase();

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FDIY_CameraEntry CameraEntry;
};


