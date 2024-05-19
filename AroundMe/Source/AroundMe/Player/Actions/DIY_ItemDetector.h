#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Components/BoxComponent.h"

#include "DIY_ItemDetector.generated.h"

UCLASS(ClassGroup=(Player), meta=(BlueprintSpawnableComponent))
class AROUNDME_API UDIY_ItemDetector : public UBoxComponent
{
    GENERATED_BODY()

public:    



UDIY_ItemDetector();

protected:
    // Called when the game starts
    virtual void BeginPlay() override;
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
    UPROPERTY(BlueprintReadOnly)
    AActor* mDetectedActor{nullptr};

public:    
	
	
    // // Called every frame
    // virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
    UFUNCTION(BlueprintCallable)
    class AActor* GetDetectedActor() const;


   


private:
    UFUNCTION()
    void ProcessBeginOverlapEvent(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    
    
    UFUNCTION()
    void ProcessEndOverlapEvent(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);



};
