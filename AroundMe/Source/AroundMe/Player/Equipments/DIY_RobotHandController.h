#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "DIY_RobotHandController.generated.h"

UCLASS(ClassGroup=(Player), meta=(BlueprintSpawnableComponent))
class AROUNDME_API UDIY_RobotHandController : public USceneComponent
{
    GENERATED_BODY()

public:    
   
    UDIY_RobotHandController();

protected:
    // Called when the game starts
    virtual void BeginPlay() override;

public:    


    // Called every frame
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

   




	UPROPERTY( BlueprintReadOnly, EditDefaultsOnly, Category = "DIY_RobotHandController")
	class USpringArmComponent* CameraBoom;

	UPROPERTY(BlueprintReadOnly,EditDefaultsOnly, Category = "DIY_RobotHandController")
	class UCameraComponent* FollowCamera;

	UPROPERTY(BlueprintReadWrite, //EditAnywhere,
		EditDefaultsOnly,
		Category = "DIY_RobotHandController")
		float UpDownCameraLerpSpeed{ 2.0f };

    private:





};
