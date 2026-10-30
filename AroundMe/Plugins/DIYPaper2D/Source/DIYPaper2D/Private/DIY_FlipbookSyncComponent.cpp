// Copyright Epic Games, Inc. All Rights Reserved.

#include "DIY_FlipbookSyncComponent.h"

#include "PaperFlipbook.h"
#include "PaperFlipbookComponent.h"
#include "DIY_EquipmentVisualData.h"
#include "DIYPaper2DLog.h"
#include "UObject/Class.h"

static FString SlotToString(EDIY_EquipSlot Slot)
{
	if (const UEnum* Enum = StaticEnum<EDIY_EquipSlot>())
	{
		return Enum->GetNameStringByValue(static_cast<int64>(Slot));
	}
	return TEXT("?");
}

static FString FacingToString(EDIY_Facing Facing)
{
	if (const UEnum* Enum = StaticEnum<EDIY_Facing>())
	{
		return Enum->GetNameStringByValue(static_cast<int64>(Facing));
	}
	return TEXT("?");
}

UDIY_FlipbookSyncComponent::UDIY_FlipbookSyncComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.TickGroup = TG_PrePhysics;
}

void UDIY_FlipbookSyncComponent::BeginPlay()
{
	Super::BeginPlay();

	// Layers never self-play. Stop() does not reset the accumulated time, so it is safe even if the
	// owning character already equipped a loadout in its own BeginPlay.
	for (const FDIY_LayerBinding& Binding : Layers)
	{
		if (Binding.Component != nullptr)
		{
			Binding.Component->SetLooping(false);
			Binding.Component->Stop();
		}
	}

	if (CurrentFacing != InitialFacing && CurrentState == NAME_None)
	{
		CurrentFacing = InitialFacing;
	}
}

void UDIY_FlipbookSyncComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	StepAnimation(DeltaTime);
}

void UDIY_FlipbookSyncComponent::RegisterLayer(EDIY_EquipSlot Slot, UPaperFlipbookComponent* Component)
{
	for (FDIY_LayerBinding& Binding : Layers)
	{
		if (Binding.Slot == Slot)
		{
			Binding.Component = Component;
			return;
		}
	}

	FDIY_LayerBinding& NewBinding = Layers.AddDefaulted_GetRef();
	NewBinding.Slot = Slot;
	NewBinding.Component = Component;

	Layers.Sort([](const FDIY_LayerBinding& A, const FDIY_LayerBinding& B)
	{
		return static_cast<uint8>(A.Slot) < static_cast<uint8>(B.Slot);
	});
}

UPaperFlipbookComponent* UDIY_FlipbookSyncComponent::FindLayer(EDIY_EquipSlot Slot) const
{
	for (const FDIY_LayerBinding& Binding : Layers)
	{
		if (Binding.Slot == Slot)
		{
			return Binding.Component;
		}
	}
	return nullptr;
}

UDIY_EquipmentVisualData* UDIY_FlipbookSyncComponent::GetEquippedVisual(EDIY_EquipSlot Slot) const
{
	if (const TObjectPtr<UDIY_EquipmentVisualData>* Found = Equipped.Find(Slot))
	{
		return *Found;
	}
	return nullptr;
}

UPaperFlipbook* UDIY_FlipbookSyncComponent::ResolveFlipbook(const FDIY_LayerBinding& Binding, FName State, EDIY_Facing Facing) const
{
	if (const TObjectPtr<UDIY_EquipmentVisualData>* Found = Equipped.Find(Binding.Slot))
	{
		if (const UDIY_EquipmentVisualData* Visual = *Found)
		{
			return Visual->FindFlipbook(State, Facing);
		}
	}
	return nullptr;
}

bool UDIY_FlipbookSyncComponent::EquipVisual(EDIY_EquipSlot Slot, UDIY_EquipmentVisualData* Visual)
{
	if (Visual == nullptr)
	{
		UE_LOG(LogDIYPaper2D, Error, TEXT("[PaperLayers] EquipVisual(%s): null visual"), *SlotToString(Slot));
		return false;
	}

	if (Visual->Slot != Slot)
	{
		UE_LOG(LogDIYPaper2D, Warning, TEXT("[PaperLayers] EquipVisual(%s): visual '%s' is authored for slot %s"),
			*SlotToString(Slot), *Visual->GetName(), *SlotToString(Visual->Slot));
	}

	// Refuse a swap that would leave a hole in the currently playing state.
	if (CurrentState != NAME_None && Visual->FindFlipbook(CurrentState, CurrentFacing) == nullptr)
	{
		UE_LOG(LogDIYPaper2D, Error, TEXT("[PaperLayers] EquipVisual(%s): visual '%s' has no entry for state '%s' / facing %s"),
			*SlotToString(Slot), *Visual->GetName(), *CurrentState.ToString(), *FacingToString(CurrentFacing));
		return false;
	}

	Equipped.Add(Slot, Visual);

	if (UPaperFlipbook* NewFlipbook = Visual->FindFlipbook(CurrentState, CurrentFacing))
	{
		if (UPaperFlipbookComponent* Layer = FindLayer(Slot))
		{
			// SetFlipbook() resets the play time to 0. Immediately re-seek, clamping to the new length.
			Layer->SetFlipbook(NewFlipbook);
			ApplyFrame(FMath::Max(0, CurrentFrame), /*bForce=*/true);
		}
	}

	if (CurrentState != NAME_None)
	{
		ReportContractErrors();
	}
	return true;
}

bool UDIY_FlipbookSyncComponent::SetAnimationState(FName NewState)
{
	if (NewState == NAME_None)
	{
		return false;
	}

	if (Layers.Num() == 0)
	{
		if (bLogContractErrors)
		{
			UE_LOG(LogDIYPaper2D, Error, TEXT("[PaperLayers] SetAnimationState('%s'): no layers registered"), *NewState.ToString());
		}
		return false;
	}

	// Resolve first: a partial commit is exactly the "body is in Walk while the hat is still Idle" bug.
	TArray<UPaperFlipbook*> Resolved;
	Resolved.SetNum(Layers.Num());
	for (int32 Index = 0; Index < Layers.Num(); ++Index)
	{
		const FDIY_LayerBinding& Binding = Layers[Index];
		Resolved[Index] = ResolveFlipbook(Binding, NewState, CurrentFacing);
		if (Resolved[Index] == nullptr)
		{
			if (bLogContractErrors)
			{
				UE_LOG(LogDIYPaper2D, Error, TEXT("[PaperLayers] SetAnimationState('%s'): slot %s has no flipbook (facing %s); state unchanged"),
					*NewState.ToString(), *SlotToString(Binding.Slot), *FacingToString(CurrentFacing));
			}
			return false;
		}
	}

	CurrentState = NewState;
	for (int32 Index = 0; Index < Layers.Num(); ++Index)
	{
		if (UPaperFlipbookComponent* Layer = Layers[Index].Component)
		{
			Layer->SetFlipbook(Resolved[Index]);
		}
	}

	AnimationTime = 0.0;
	CurrentFrame = INDEX_NONE;
	ApplyFrame(0, /*bForce=*/true);

	ReportContractErrors();
	return true;
}

bool UDIY_FlipbookSyncComponent::SetFacing(EDIY_Facing NewFacing)
{
	if (NewFacing == CurrentFacing)
	{
		return true;
	}

	if (CurrentState == NAME_None)
	{
		CurrentFacing = NewFacing;
		return true;
	}

	TArray<UPaperFlipbook*> Resolved;
	Resolved.SetNum(Layers.Num());
	for (int32 Index = 0; Index < Layers.Num(); ++Index)
	{
		Resolved[Index] = ResolveFlipbook(Layers[Index], CurrentState, NewFacing);
		if (Resolved[Index] == nullptr)
		{
			if (bLogContractErrors)
			{
				UE_LOG(LogDIYPaper2D, Error, TEXT("[PaperLayers] SetFacing(%s): slot %s has no flipbook for state '%s'; facing unchanged"),
					*FacingToString(NewFacing), *SlotToString(Layers[Index].Slot), *CurrentState.ToString());
			}
			return false;
		}
	}

	const int32 TargetFrame = FMath::Max(0, CurrentFrame);
	CurrentFacing = NewFacing;
	for (int32 Index = 0; Index < Layers.Num(); ++Index)
	{
		if (UPaperFlipbookComponent* Layer = Layers[Index].Component)
		{
			Layer->SetFlipbook(Resolved[Index]);
		}
	}

	ApplyFrame(TargetFrame, /*bForce=*/true);
	ReportContractErrors();
	return true;
}

int32 UDIY_FlipbookSyncComponent::GetLayerFrame(EDIY_EquipSlot Slot) const
{
	if (UPaperFlipbookComponent* Layer = FindLayer(Slot))
	{
		if (Layer->GetFlipbook() != nullptr)
		{
			return Layer->GetPlaybackPositionInFrames();
		}
	}
	return INDEX_NONE;
}

bool UDIY_FlipbookSyncComponent::AreLayersInSync() const
{
	int32 ReferenceFrame = INDEX_NONE;

	for (const FDIY_LayerBinding& Binding : Layers)
	{
		if (Binding.Component == nullptr || Binding.Component->GetFlipbook() == nullptr)
		{
			continue;
		}

		const int32 LayerFrame = Binding.Component->GetPlaybackPositionInFrames();
		if (ReferenceFrame == INDEX_NONE)
		{
			ReferenceFrame = LayerFrame;
		}
		else if (LayerFrame != ReferenceFrame)
		{
			return false;
		}
	}

	return ReferenceFrame != INDEX_NONE;
}

float UDIY_FlipbookSyncComponent::GetEffectiveFPS() const
{
	if (FramesPerSecondOverride > 0.0f)
	{
		return FramesPerSecondOverride;
	}

	for (const FDIY_LayerBinding& Binding : Layers)
	{
		if (Binding.Slot == EDIY_EquipSlot::Torso && Binding.Component != nullptr)
		{
			if (const UPaperFlipbook* Flipbook = Binding.Component->GetFlipbook())
			{
				if (Flipbook->GetFramesPerSecond() > 0.0f)
				{
					return Flipbook->GetFramesPerSecond();
				}
			}
		}
	}

	return 10.0f;
}

int32 UDIY_FlipbookSyncComponent::GetCanonicalFrameCount() const
{
	for (const FDIY_LayerBinding& Binding : Layers)
	{
		if (Binding.Slot == EDIY_EquipSlot::Torso && Binding.Component != nullptr)
		{
			if (const UPaperFlipbook* Flipbook = Binding.Component->GetFlipbook())
			{
				return Flipbook->GetNumFrames();
			}
		}
	}

	int32 MinFrames = MAX_int32;
	for (const FDIY_LayerBinding& Binding : Layers)
	{
		if (Binding.Component != nullptr)
		{
			if (const UPaperFlipbook* Flipbook = Binding.Component->GetFlipbook())
			{
				MinFrames = FMath::Min(MinFrames, Flipbook->GetNumFrames());
			}
		}
	}

	return MinFrames == MAX_int32 ? 0 : MinFrames;
}

int32 UDIY_FlipbookSyncComponent::ComputeFrame() const
{
	const int32 FrameCount = GetCanonicalFrameCount();
	const float Fps = GetEffectiveFPS();
	if (FrameCount <= 0 || Fps <= 0.0f)
	{
		return 0;
	}

	const double Raw = FMath::FloorToDouble(AnimationTime * static_cast<double>(Fps) + 1e-9);
	int64 Wrapped = static_cast<int64>(Raw) % FrameCount;
	if (Wrapped < 0)
	{
		Wrapped += FrameCount;
	}
	return static_cast<int32>(Wrapped);
}

void UDIY_FlipbookSyncComponent::ApplyFrame(int32 Frame, bool bForce)
{
	if (!bForce && Frame == CurrentFrame)
	{
		return;
	}

	bApplyingFrame = true;
	for (const FDIY_LayerBinding& Binding : Layers)
	{
		UPaperFlipbookComponent* Layer = Binding.Component;
		if (Layer == nullptr)
		{
			continue;
		}

		const UPaperFlipbook* Flipbook = Layer->GetFlipbook();
		if (Flipbook == nullptr)
		{
			continue;
		}

		const int32 NumFrames = Flipbook->GetNumFrames();
		const float Fps = Flipbook->GetFramesPerSecond();
		if (NumFrames <= 0 || Fps <= 0.0f)
		{
			continue;
		}

		const int32 LocalFrame = FMath::Clamp(Frame, 0, NumFrames - 1);

		// Half-frame seek: seeking to exactly LocalFrame / Fps can read back as LocalFrame - 1
		// because TruncToInt(AccumulatedTime * Fps) lands just below the integer.
		Layer->SetPlaybackPosition((static_cast<float>(LocalFrame) + 0.5f) / Fps, /*bFireEvents=*/false);
	}
	bApplyingFrame = false;

	CurrentFrame = Frame;
}

void UDIY_FlipbookSyncComponent::StepAnimation(float DeltaSeconds)
{
	if (Layers.Num() == 0)
	{
		return;
	}

	if (GetCanonicalFrameCount() <= 0)
	{
		return;
	}

	AnimationTime += FMath::Max(0.0f, DeltaSeconds);

	const int32 NewFrame = ComputeFrame();
	if (NewFrame != CurrentFrame)
	{
		ApplyFrame(NewFrame, /*bForce=*/false);
	}
}

bool UDIY_FlipbookSyncComponent::ValidateCurrentState(TArray<FString>& OutErrors) const
{
	bool bOK = true;

	if (CurrentState == NAME_None)
	{
		OutErrors.Add(TEXT("No animation state has been set yet."));
		return false;
	}

	int32 ReferenceFrames = INDEX_NONE;
	float ReferenceFps = 0.0f;

	for (const FDIY_LayerBinding& Binding : Layers)
	{
		if (Binding.Component == nullptr)
		{
			OutErrors.Add(FString::Printf(TEXT("Slot %s has no component bound."), *SlotToString(Binding.Slot)));
			bOK = false;
			continue;
		}

		const UPaperFlipbook* Flipbook = ResolveFlipbook(Binding, CurrentState, CurrentFacing);
		if (Flipbook == nullptr)
		{
			OutErrors.Add(FString::Printf(TEXT("Slot %s has no flipbook for '%s' / %s."),
				*SlotToString(Binding.Slot), *CurrentState.ToString(), *FacingToString(CurrentFacing)));
			bOK = false;
			continue;
		}

		const int32 NumFrames = Flipbook->GetNumFrames();
		const float Fps = Flipbook->GetFramesPerSecond();
		if (NumFrames <= 0 || Fps <= 0.0f)
		{
			OutErrors.Add(FString::Printf(TEXT("Slot %s flipbook '%s' has invalid frame count / fps (%d / %.2f)."),
				*SlotToString(Binding.Slot), *Flipbook->GetName(), NumFrames, Fps));
			bOK = false;
			continue;
		}

		if (ReferenceFrames == INDEX_NONE)
		{
			ReferenceFrames = NumFrames;
			ReferenceFps = Fps;
		}
		else
		{
			if (NumFrames != ReferenceFrames)
			{
				OutErrors.Add(FString::Printf(TEXT("Frame count mismatch: slot %s has %d frames, Body has %d."),
					*SlotToString(Binding.Slot), NumFrames, ReferenceFrames));
				bOK = false;
			}
			if (!FMath::IsNearlyEqual(Fps, ReferenceFps, 0.01f))
			{
				OutErrors.Add(FString::Printf(TEXT("FPS mismatch: slot %s runs at %.2f, Body runs at %.2f."),
					*SlotToString(Binding.Slot), Fps, ReferenceFps));
				bOK = false;
			}
		}

		if (const UDIY_EquipmentVisualData* Visual = GetEquippedVisual(Binding.Slot))
		{
			TArray<FString> AssetErrors;
			if (!Visual->ValidateAssets(AssetErrors))
			{
				bOK = false;
				OutErrors.Append(AssetErrors);
			}
		}
	}

	return bOK;
}

void UDIY_FlipbookSyncComponent::ReportContractErrors() const
{
	if (!bLogContractErrors)
	{
		return;
	}

	TArray<FString> Errors;
	if (!ValidateCurrentState(Errors))
	{
		for (const FString& Error : Errors)
		{
			UE_LOG(LogDIYPaper2D, Error, TEXT("[PaperLayers] %s"), *Error);
		}
	}
}





