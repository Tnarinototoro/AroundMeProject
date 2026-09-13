#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PropHuntCharacter.generated.h"

class UInputMappingContext;
class UInputAction;

UCLASS()
class PROPHUNT_API APropHuntCharacter : public ACharacter
{
    GENERATED_BODY()

public:
    APropHuntCharacter();

    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
    UPROPERTY()
    UInputMappingContext* DefaultMappingContext;

    UPROPERTY()
    UInputAction* MoveAction;

    UPROPERTY()
    UInputAction* LookAction;

    UPROPERTY()
    UInputAction* JumpAction;

    void SetupInputActions();
    void Move(const struct FInputActionValue& Value);
    void Look(const struct FInputActionValue& Value);
    void JumpPressed(const struct FInputActionValue& Value);
    void JumpReleased(const struct FInputActionValue& Value);
};
