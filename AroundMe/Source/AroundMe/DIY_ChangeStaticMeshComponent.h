// All rights reserved to ShadowCandle Studio

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Components/StaticMeshComponent.h"
#include "DIY_ChangeStaticMeshComponent.generated.h"



UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class AROUNDME_API UDIY_ChangeStaticMeshComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UDIY_ChangeStaticMeshComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, Category = "Mesh")
		TArray<TSoftObjectPtr<UStaticMesh>> PossibleMeshes; // 存储可能使用的 mesh 的 SoftObjectPath

	

	

private:
	void LoadMeshAsync(const TSoftObjectPtr<UStaticMesh>& MeshToLoad);
	UStaticMeshComponent* OwnerStaticMeshComponent; // referrence to the Actor's StaticMeshComponent
	int CurrentStateIndex{0};

	
public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	inline int GetPossibleStateNum() const;
	inline int GetCurrentStateIndex() const;
	UFUNCTION(BlueprintCallable, Category = "Mesh")
		void ChangeState(int TargetIndex, bool ForceExecuting); // async load  mesh and set it 
};