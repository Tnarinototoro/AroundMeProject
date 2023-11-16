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




protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "DIY")
		class UStaticMeshComponent* BasicStaticMeshComponent; // ���滻����ʵ�ʵ������
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "DIY")
		class UBoxComponent* BoxCollision; // ���滻����ʵ�ʵ������
public:
	ADIY_ItemBase();
	~ADIY_ItemBase();
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	// �޸� OnPickUp �������������ʰȡ�ߵ�ָ��ͱ������� socket ���Ʋ���
	UFUNCTION(BlueprintCallable, Category = "Item")
		void OnPickUp(APawn* Picker, FName SocketName);
	UFUNCTION(BlueprintCallable, Category = "Item")
		void OnPlaced();
};
