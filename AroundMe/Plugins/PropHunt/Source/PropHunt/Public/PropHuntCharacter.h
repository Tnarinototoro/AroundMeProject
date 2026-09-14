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

    // 是否显示头顶玩家信息标示（编辑器可调，debug 用）。
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PropHunt|Debug")
    bool bShowNameplate{true};

protected:
    virtual void BeginPlay() override;

    // 白盒身体：小圆球代替。
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "PropHunt")
    class UStaticMeshComponent* BodyMesh;

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

    UPROPERTY(VisibleAnywhere, Category = "PropHunt|Debug")
    class UWidgetComponent* NameplateComponent;

    void UpdateNameplate();
};
