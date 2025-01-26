// All rights reserved to ShadowCandle Studio

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "DIY_BagDefines.h"
#include "DIY_BagController.generated.h"

UCLASS(ClassGroup = (Player), meta = (BlueprintSpawnableComponent))
class AROUNDME_API UDIY_BagController : public USceneComponent
{
	GENERATED_BODY()

public:

	UDIY_BagController();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:


	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;






	



protected:
	void UpdateHandHeadStateMachine(float inDeltatime);

	void SwitchToNextState(EDIY_BagState_Type inNextState);

private:


	EDIY_BagState_Type mCurrentState{ EDIY_BagState_Type::Idle };

	float mCurrentStateElapsedTime{ 0.f };
	bool mEnteredNewStateSign{ false };

	class USkeletonMeshComponent* mBag_SKM{nullptr};

private:

};
