#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "DIY_RobotHand_HeadController.generated.h"

UCLASS(ClassGroup=(Player), meta=(BlueprintSpawnableComponent))
class AROUNDME_API UDIY_RobotHand_HeadController : public USceneComponent
{
    GENERATED_BODY()

public:    
   
    UDIY_RobotHand_HeadController();

protected:
    // Called when the game starts
    virtual void BeginPlay() override;

public:    


    // Called every frame
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

   




	UPROPERTY( BlueprintReadOnly, EditDefaultsOnly, Category = "DIY_RobotHand_HeadController")
	class USpringArmComponent* CameraBoom;

	UPROPERTY(BlueprintReadOnly,EditDefaultsOnly, Category = "DIY_RobotHand_HeadController")
	class UCameraComponent* FollowCamera;

	UPROPERTY(BlueprintReadWrite, //EditAnywhere,
		EditDefaultsOnly,
		Category = "DIY_RobotHand_HeadController")
		float UpDownCameraLerpSpeed{ 2.0f };

    private:





};
