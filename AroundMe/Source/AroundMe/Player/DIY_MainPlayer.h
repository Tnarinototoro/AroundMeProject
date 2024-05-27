// All rights reserved to ShadowCandle Studio

#pragma once

#include "Actions/DIY_AcitonDefines.h"
#include "../GameUtilities/DIY_HelperMacros.h"

#include "CoreMinimal.h"

#include "Equipments/DIYEquipmentEnums.h"
#include "GameFramework/Character.h"
#include "GameFramework/Pawn.h"
#include "UObject/SoftObjectPath.h"

#include "DIY_MainPlayer.generated.h"

UCLASS()
class AROUNDME_API ADIY_MainPlayer : public ACharacter
{
	GENERATED_BODY()

private:

public:
	// Sets default values for this pawn's properties
	ADIY_MainPlayer();




protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void PawnClientRestart() override;
	void LoadAndSetSkeletalMesh(USkeletalMeshComponent* Component, const FSoftObjectPath& AssetToLoad);
	void OnMeshLoaded(USkeletalMeshComponent* Component, FSoftObjectPath AssetPath);
	FSoftObjectPath GetHairMeshReferenceFromType(EHairType HairType);
	FSoftObjectPath GetHatMeshReferenceFromType(EHatType HatType);



	//UFUNCTION(BlueprintCallable, Category = "DIY_MainPlayer")
	//	void ChangeHair(EHairType NewHairType);

	//UFUNCTION(BlueprintCallable, Category = "DIY_MainPlayer")
	//	void ChangeHat(EHatType NewHatType);








	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "A_DIY")
	// 	USkeletalMeshComponent* HairComponent;

	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "A_DIY")
	// 	USkeletalMeshComponent* HatComponent;


	
	// UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "A_DIY")
	// 	TMap<EHairType, FSoftObjectPath> HairMeshesMap;

	// UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "A_DIY")
	// 	TMap<EHatType, FSoftObjectPath> HatMeshesMap;

	
	
	

	UPROPERTY(BlueprintReadWrite, Category = "DIY_MainPlayer")
	int GarbageNameNum{ 0 };

	UPROPERTY(BlueprintReadWrite, Category = "DIY_MainPlayer")
	int WithNameNum{ 0 };




	void UpdateTPSCamera(float deltaTime);

	
	
	void UpdateGameLogic(float deltaTime);
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	
private:

    void UpdatePlayerMove(float deltaTime);
	

	DECLARE_GET_COMPONENT_HELPER(UDIY_MainPlayerCameraController)
    


	DECLARE_GET_COMPONENT_HELPER(UDIY_MainPlayerInputController)




	DECLARE_GET_COMPONENT_HELPER(UDIY_MainPlayerActionController)
	
	
	UFUNCTION()
    void DoJumpAction(const struct FInputActionValue& Value);
	
};
