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

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "DIY")
		class UStaticMeshComponent* BasicStaticMeshComponent; // 请替换成你实际的组件类
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "DIY")
		class UBoxComponent* BoxCollision; // 请替换成你实际的组件类

	void UpdateHighLight();
public:
	ADIY_ItemBase();
	~ADIY_ItemBase();
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	// 修改 OnPickUp 函数声明，添加拾取者的指针和被关联的 socket 名称参数
	UFUNCTION(BlueprintCallable, Category = "Item")
		void OnPickUp(APawn* Picker, FName SocketName);
	UFUNCTION(BlueprintCallable, Category = "Item")
		void OnPlaced();

	UFUNCTION(BlueprintCallable, Category = "Item")
		void ResumeTrinkling();
	UFUNCTION(BlueprintCallable, Category = "Item")
		void PauseTrinkling();

	UPROPERTY(BlueprintReadOnly)
		FRotator InitRotator;

	UPROPERTY(BlueprintReadOnly)
		FVector InitWorldPosition;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "DIY")
		int32 HighLightColor {3};

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "DIY")
		float HighLightColorTranklingInterval{ 1.0f };
};
