// All rights reserved to ShadowCandle Studio

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class AROUNDME_API DIY_EquipmentCommonLib
{
public:
	DIY_EquipmentCommonLib();
	~DIY_EquipmentCommonLib();

	static void LoadSkeletonMeshAsync(class UObject* inSKMOwner, class USkeletalMeshComponent* inSKM, const TSoftObjectPtr<class USkeletalMesh>& SKMToLoad);
};
