// All rights reserved to ShadowCandle Studio

#pragma once

#include "CoreMinimal.h"

#include "DIY_ItemDefines.h"
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

	void InitWithConfig(const FDIY_ItemDefualtConfig& inConfig);



	

protected:

	class AActor* PossiblePicker{ nullptr };
	bool HasImpulseTask{ false };
	FVector PulseVec{ 0.0f,0.f,0.f };
	void SetCollisionProfileName_Recursively(class USceneComponent* inFirstCompo, FName InCollisionProfileName);
	void SetCollisionEnabled_Recursively(class USceneComponent* inFirstCompo, ECollisionEnabled::Type NewType);
	void SetSimulatePhysics_Recursively(class USceneComponent* inFirstCompo, bool inEnable);
private:
	UPROPERTY(VisibleAnywhere, Category = "UI")
		class UWidgetComponent* ItemStateWidgetComponent;
	FDIY_ItemDefualtConfig config_copy;
	int32 BulkInteractionFlags{ 0 };
	
	
	void UpdateWidgetText_Internal(const FString& NewText);
	
	void UpdateStateWidgetInfo(float inDeltaTime);

	class UDIY_ItemStateWidget* StateDisplayWidget{nullptr};
	// 0--> physics   1---> pickup state no phy no collision  -1 no need to do any thing
	int TargetPhysicsState{ -1 }; 


	class UDIY_ConductivityProcessor* Possible_Conductivity_Processor{ nullptr };
	class UDIY_SolidnessProcessor* Possible_Solidness_Processor{ nullptr };
	class UDIY_TemperatureProcessor* Possible_Temperature_Processor{ nullptr };
};
