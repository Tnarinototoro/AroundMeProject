// All rights reserved to ShadowCandle Studio

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "DIY_FaceDefines.h"
#include "DIY_EquipmentBase.h"
#include "DIY_FaceController.generated.h"

UCLASS(ClassGroup = (Player), meta = (BlueprintSpawnableComponent))
class AROUNDME_API UDIY_FaceController : public UDIY_EquipmentBase
{
	GENERATED_BODY()

public:

	UDIY_FaceController();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;


    virtual void OnModelTypeChanged(uint32 lastModelType, uint32 newModelType) override;
public:


	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;






	



protected:
	void UpdateFaceStateMachine(float inDeltatime);

	void RequestSwitchToNextFaceType(EDIY_FaceType inNextType);

private:


	EDIY_FaceType mCurrentFaceType{ EDIY_FaceType::Default };

	float mCurrentFaceTypeElapsedTime{ 0.f };
	bool mEnteredNewFaceTypeSign{ false };

	
private:

};
