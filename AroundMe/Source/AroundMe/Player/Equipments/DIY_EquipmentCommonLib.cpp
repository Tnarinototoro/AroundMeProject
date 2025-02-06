// All rights reserved to ShadowCandle Studio


#include "DIY_EquipmentCommonLib.h"
#include "Engine/SkeletalMesh.h"
#include "Components/SkeletalMeshComponent.h"


DIY_EquipmentCommonLib::DIY_EquipmentCommonLib()
{
}

DIY_EquipmentCommonLib::~DIY_EquipmentCommonLib()
{
}

void DIY_EquipmentCommonLib::LoadSkeletonMeshAsync(UObject* inSKMOwner, USkeletalMeshComponent* inSKMCompo, const TSoftObjectPtr<class USkeletalMesh>& SKMToLoad)
{

	ensureMsgf(IsValid(inSKMOwner), TEXT("Input inSKMOwner is invalid!"));
	ensureMsgf(IsValid(inSKMCompo), TEXT("Input inSKMCompo is invalid!"));
	// Asynchronously load the mesh
	AsyncTask(ENamedThreads::GameThread, [inSKMOwner, inSKMCompo,SKMToLoad]()
		{
			USkeletalMesh* LoadedMesh = SKMToLoad.LoadSynchronous();
			if (LoadedMesh)
			{
				// Set the loaded mesh to the owning Actor's StaticMeshComponent
				inSKMCompo->SetSkeletalMesh(LoadedMesh);
			}
		});
}


