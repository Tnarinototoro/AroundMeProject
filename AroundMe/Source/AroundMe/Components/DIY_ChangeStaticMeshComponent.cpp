// All rights reserved to ShadowCandle Studio


#include "DIY_ChangeStaticMeshComponent.h"
#include "Engine/StaticMesh.h"
#include "Async/Async.h"


// Sets default values for this component's properties
UDIY_ChangeStaticMeshComponent::UDIY_ChangeStaticMeshComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame
	PrimaryComponentTick.bCanEverTick = false;
}

// Called when the game starts
void UDIY_ChangeStaticMeshComponent::BeginPlay()
{
	Super::BeginPlay();

	// Find and set the StaticMeshComponent of the owning Actor
	AActor* OwnerActor = GetOwner();
	if (OwnerActor)
	{
		OwnerStaticMeshComponent = OwnerActor->FindComponentByClass<UStaticMeshComponent>();
	}

	// Set an initial mesh
	if (OwnerStaticMeshComponent && PossibleMeshes.Num() > 0)
	{
		LoadMeshAsync(PossibleMeshes[0]);
	}
}

// Called every frame
void UDIY_ChangeStaticMeshComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	// Your custom tick logic here
}


void UDIY_ChangeStaticMeshComponent::ChangeState(int TargetIndex, bool ForceExecuting=false)
{
	if (ForceExecuting)
	{
		if (PossibleMeshes.IsValidIndex(TargetIndex))
		{
			LoadMeshAsync(PossibleMeshes[TargetIndex]);
			CurrentStateIndex = TargetIndex;
		}

	}
	else
	{
		if (TargetIndex != CurrentStateIndex)
		{
			if (PossibleMeshes.IsValidIndex(TargetIndex))
			{
				LoadMeshAsync(PossibleMeshes[TargetIndex]);
				CurrentStateIndex = TargetIndex;
			}
		}
	}


	
}

void UDIY_ChangeStaticMeshComponent::LoadMeshAsync(const TSoftObjectPtr<UStaticMesh>& MeshToLoad)
{
	if (OwnerStaticMeshComponent)
	{
		// Asynchronously load the mesh
		AsyncTask(ENamedThreads::GameThread, [this, MeshToLoad]()
			{
				UStaticMesh* LoadedMesh = MeshToLoad.LoadSynchronous();
				if (LoadedMesh)
				{
					// Set the loaded mesh to the owning Actor's StaticMeshComponent
					OwnerStaticMeshComponent->SetStaticMesh(LoadedMesh);
				}
			});
	}
}