#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"

#include "DIY_RoughEnvScanner.generated.h"

UCLASS(ClassGroup=(Player), meta=(BlueprintSpawnableComponent))
class AROUNDME_API UDIY_RoughEnvScanner : public USphereComponent
{
     
    GENERATED_BODY()

public:    



UDIY_RoughEnvScanner();

protected:
    // Called when the game starts
    virtual void BeginPlay() override;
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
    

public:    
	
	
    // // Called every frame
    // virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
    UFUNCTION(BlueprintCallable)
    class AActor* GetNearest_DetectedActor() const;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AroundMe")
    TArray<class AActor*> mDetectedActors;

   
   


private:
    void RemoveAllInvalidActors();
    UFUNCTION()
    void ProcessBeginOverlapEvent(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    
    
    UFUNCTION()
    void ProcessEndOverlapEvent(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);



};
