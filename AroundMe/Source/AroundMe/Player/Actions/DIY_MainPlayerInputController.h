#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EnhancedPlayerInput.h"
#include "AroundMe/GameUtilities/DIY_HelperMacros.h"
#include "DIY_MainPlayerInputController.generated.h"

UCLASS(ClassGroup = (Player), meta = (BlueprintSpawnableComponent))
class AROUNDME_API UDIY_MainPlayerInputController : public UActorComponent
{
    GENERATED_BODY()

public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnJumpActionPressed, const FInputActionValue &, inKeyValue);

    UDIY_MainPlayerInputController();

protected:
    // Called when the game starts
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override;
    // Called to bind functionality to input
    virtual void SetupPlayerInputComponent(class UInputComponent *PlayerInputComponent);

    //-----------------------------input finctions start
    UFUNCTION()
    void HandleXYMouseMove(const FInputActionValue &Value);

    // UFUNCTION()
    // void HandleXYMouseMoveHoldCompleted(const FInputActionValue& Value);

    UFUNCTION()
    void HandleXYPlayerMove(const FInputActionValue &Value);

    UFUNCTION()
    void HandlePlayerJump(const FInputActionValue &Value);

    UFUNCTION(BlueprintCallable)
    void onInteractPressed(const FInputActionValue &Value);

    UFUNCTION()
    void onInteractReleased(const FInputActionValue &Value);

    UFUNCTION()
    void onInteractPressing(const FInputActionValue &Value);

    UFUNCTION()
    void onInteractTriggered(const FInputActionValue &Value);

    UFUNCTION()
    void HandleXYPlayerMoveInputFinished(const FInputActionValue &Value);

    UFUNCTION()
    void HandleTabKeyInputProcess(const FInputActionValue &Value);

    UFUNCTION()
    void HandleUIMoveProcess_Completed(const FInputActionValue &Value);
    void HandleUIMoveProcess_Triggered(const FInputActionValue &Value);

    void HandleKey_E_Input(const FInputActionValue &Value);

    //-----------------------------input finctions end

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "DIY_MainPlayerInputController")
    UInputMappingContext *MainPlayerInputMappingContext{nullptr};

    void RegisterInputMappings(class APlayerController *PC);

    // those delegates are used to offer convenience when customizing logic after receiving the notify
    UPROPERTY(BlueprintAssignable, Category = "DIY_MainPlayerInputController")
    FOnJumpActionPressed TriggerProcessJumpInput;

    UPROPERTY(BlueprintReadOnly, // EditAnywhere,
              Category = "DIY_MainPlayerInputController")
    bool IsInputingMove{false};

    FVector2D inPutVector2D{FVector2D::ZeroVector};

    FVector DesiredDir_ByPlayerInput_FollowCamView{FVector::ZeroVector};

    FVector2D inPutBackPack_CursorMoveDir{FVector2D::ZeroVector};
private : void UpdateDesiredDir_ByPlayerInput_FollowCamView(float DeltaTime);

    DECLARE_GET_COMPONENT_HELPER(UDIY_MainPlayerActionController)
    DECLARE_GET_COMPONENT_HELPER(UDIY_MainPlayerCameraController)
    DECLARE_GET_COMPONENT_HELPER(UDIY_ItemDetector)
    DECLARE_GET_COMPONENT_HELPER(UDIY_MainPlayerUIController)
};
