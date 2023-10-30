// All rights reserved to ShadowCandle Studio

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "EnhancedPlayerInput.h"
#include "DIY_MainPlayer.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(MainPlayerLog, Log, All);


UCLASS()
class AROUNDME_API ADIY_MainPlayer : public APawn
{
	GENERATED_BODY()

private:
	
public:
	// Sets default values for this pawn's properties
	ADIY_MainPlayer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void PawnClientRestart() override;

	
	UFUNCTION()
		void HandleXYMove(const FInputActionValue& Value);



	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		class USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		class UCameraComponent* FollowCamera;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Enhanced Input")
		UInputMappingContext* MainPlayerInputMappingContext;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
};
