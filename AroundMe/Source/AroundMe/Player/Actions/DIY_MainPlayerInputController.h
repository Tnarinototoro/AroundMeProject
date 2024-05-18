#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EnhancedPlayerInput.h"
#include "AroundMe/GameUtilities/DIY_HelperMacros.h"
#include "DIY_MainPlayerInputController.generated.h"



UCLASS(ClassGroup=(Player), meta=(BlueprintSpawnableComponent))
class AROUNDME_API UDIY_MainPlayerInputController : public UActorComponent
{
    GENERATED_BODY()

public:    

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnJumpActionPressed, const FInputActionValue&, inKeyValue);
    // 设置默认值
    UDIY_MainPlayerInputController();

protected:
    // Called when the game starts
    virtual void BeginPlay() override;
    
public:    
    // Called every frame
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent);


    //-----------------------------input finctions start
    UFUNCTION()
	void HandleXYMouseMove(const FInputActionValue& Value);

	UFUNCTION()
	void HandleXYPlayerMove(const FInputActionValue& Value);

	UFUNCTION()
	void HandlePlayerJump(const FInputActionValue& Value);


	UFUNCTION()
	void HandleXYPlayerMoveInputFinished(const FInputActionValue& Value);
    //-----------------------------input finctions end



    // 一个自定义的属性
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Custom")
    float CustomValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "A_DIY")
	UInputMappingContext* MainPlayerInputMappingContext;


    void RegisterInputMappings(class APlayerController* PC);


    //those delegates are used to offer convenience when customizing logic after receiving the notify
	UPROPERTY(BlueprintAssignable, Category = "InputReaction")
		FOnJumpActionPressed TriggerProcessJumpInput;

UPROPERTY(BlueprintReadOnly, //EditAnywhere,
		Category = "A_DIY")
		bool IsInputingMove{ false };

  

   FVector2D inPutVector2D{ FVector2D::ZeroVector };
   
	FVector DesiredDir_ByPlayerInput_FollowCamView{};
private:
   
	
	
	void UpdateDesiredDir_ByPlayerInput_FollowCamView(float DeltaTime);
	

    DECLARE_GET_COMPONENT_HELPER(UDIY_MainPlayerActionController)
    DECLARE_GET_COMPONENT_HELPER(UDIY_MainPlayerCameraController)

};
