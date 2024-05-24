// All rights reserved to ShadowCandle Studio

#pragma once

#include "CoreMinimal.h"
#include "DIY_Item.generated.h"
/**
 * 
 */

UCLASS()
class AROUNDME_API ADIY_ItemBase: public AActor
{
	GENERATED_BODY()


private:
	FTimerHandle TimerHandle_HighLight;
	bool isEnabledHighLighting{false};
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "DIY_ItemBase")
		class UStaticMeshComponent* BasicStaticMeshComponent; 
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "DIY_ItemBase")
		class UBoxComponent* BoxCollision; 

	void UpdateHighLight();
public:
	ADIY_ItemBase();
	~ADIY_ItemBase();
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	UFUNCTION(BlueprintCallable, Category = "DIY_ItemBase")
		void OnPickUp(class AActor* Picker, FName SocketName);
	UFUNCTION(BlueprintCallable, Category = "DIY_ItemBase")
		void OnPlaced();

	UFUNCTION(BlueprintCallable, Category = "DIY_ItemBase")
		void ResumeTrinkling();
	UFUNCTION(BlueprintCallable, Category = "DIY_ItemBase")
		void PauseTrinkling();

	UPROPERTY(BlueprintReadOnly)
		FRotator InitRotator;

	UPROPERTY(BlueprintReadOnly)
		FVector InitWorldPosition;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "DIY_ItemBase")
		int32 HighLightColor {3};

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "DIY_ItemBase")
		float HighLightColorTranklingInterval{ 1.0f };
};
