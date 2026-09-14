#pragma once

#include "CoreMinimal.h"
#include "GameFramework/DefaultPawn.h"
#include "PropHuntGhostPawn.generated.h"

class UInputMappingContext;
class UInputAction;
class UWidgetComponent;

// Ghost 的漂浮 Pawn：FloatingPawnMovement + 球体身体。
UCLASS()
class PROPHUNT_API APropHuntGhostPawn : public ADefaultPawn
{
    GENERATED_BODY()

public:
    APropHuntGhostPawn();

    virtual void BeginPlay() override;
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PropHunt|Debug")
    bool bShowNameplate{true};

protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "PropHunt")
    UWidgetComponent* NameplateComponent;

    UPROPERTY()
    UInputMappingContext* DefaultMappingContext;

    UPROPERTY()
    UInputAction* MoveAction;

    UPROPERTY()
    UInputAction* LookAction;

    void SetupInputActions();
    void Move(const struct FInputActionValue& Value);
    void Look(const struct FInputActionValue& Value);
    void UpdateNameplate();
};
