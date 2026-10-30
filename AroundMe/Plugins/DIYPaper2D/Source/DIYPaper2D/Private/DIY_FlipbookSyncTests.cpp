// Copyright Epic Games, Inc. All Rights Reserved.

#include "CoreMinimal.h"

#if WITH_DEV_AUTOMATION_TESTS

#include "Misc/AutomationTest.h"
#include "Engine/Engine.h"
#include "Engine/World.h"
#include "PaperFlipbook.h"
#include "PaperFlipbookComponent.h"

#include "DIY_EquipmentVisualData.h"
#include "DIY_FlipbookSyncComponent.h"
#include "DIY_AnimalPaperCharacter.h"
#include "DIY_LayeredPaperCharacter.h"

namespace
{
	UWorld* GetEditorTestWorld()
	{
		if (GEngine == nullptr)
		{
			return nullptr;
		}

		for (const FWorldContext& Context : GEngine->GetWorldContexts())
		{
			if (Context.WorldType == EWorldType::Editor && Context.World() != nullptr)
			{
				return Context.World();
			}
		}
		return nullptr;
	}

	struct FTestRig
	{
		UWorld* World = nullptr;
		ADIY_LayeredPaperCharacter* Character = nullptr;
		UDIY_FlipbookSyncComponent* Sync = nullptr;

		FTestRig()
		{
			World = GetEditorTestWorld();
			if (World == nullptr)
			{
				return;
			}

			FActorSpawnParameters Params;
			Params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
			Character = World->SpawnActor<ADIY_LayeredPaperCharacter>(
				ADIY_LayeredPaperCharacter::StaticClass(), FVector::ZeroVector, FRotator::ZeroRotator, Params);

			if (Character != nullptr)
			{
				// Tests drive the clock and state machine deterministically.
				Character->SetActorTickEnabled(false);
				Sync = Character->SyncComponent;
				if (Sync != nullptr)
				{
					Sync->SetComponentTickEnabled(false);
					// Contract violations are asserted explicitly below; keep expected errors out of the log.
					Sync->bLogContractErrors = false;
				}
				Character->DispatchBeginPlay();
				if (Sync != nullptr)
				{
					Sync->SetAnimationState(TEXT("Walk"));
				}
			}
		}

		~FTestRig()
		{
			if (Character != nullptr)
			{
				Character->Destroy();
			}
		}
	};

	UPaperFlipbook* LoadFlipbook(const TCHAR* Path)
	{
		return LoadObject<UPaperFlipbook>(nullptr, Path);
	}

	UDIY_EquipmentVisualData* LoadHatVisual()
	{
		return LoadObject<UDIY_EquipmentVisualData>(nullptr, TEXT("/DIYPaper2D/PaperPoC/Data/DA_Equip_Helmet.DA_Equip_Helmet"));
	}
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(
	FDIYPaper2DFrameSyncTest,
	"DIY.Paper2D.FrameSync",
	EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FDIYPaper2DFrameSyncTest::RunTest(const FString& Parameters)
{
	FTestRig Rig;
	if (!TestNotNull(TEXT("Character spawned"), Rig.Character))
	{
		return false;
	}
	if (!TestNotNull(TEXT("Sync component"), Rig.Sync))
	{
		return false;
	}

	TestEqual(TEXT("State starts on Walk"), Rig.Sync->GetCurrentState(), FName(TEXT("Walk")));
	TestEqual(TEXT("Canonical frame count"), Rig.Sync->GetCanonicalFrameCount(), 8);
	TestEqual(TEXT("Effective fps"), Rig.Sync->GetEffectiveFPS(), 10.0f);
	TestEqual(TEXT("Start frame"), Rig.Sync->GetCurrentFrame(), 0);

	// 0.31s at 10 fps -> frame 3. The half-frame seek must make the component read back 3, not 2.
	Rig.Sync->StepAnimation(0.31f);
	TestEqual(TEXT("Frame after 0.31s"), Rig.Sync->GetCurrentFrame(), 3);
	TestEqual(TEXT("Body layer frame"), Rig.Sync->GetLayerFrame(EDIY_EquipSlot::Torso), 3);
	TestEqual(TEXT("Outfit layer frame"), Rig.Sync->GetLayerFrame(EDIY_EquipSlot::Shirt), 3);
	TestEqual(TEXT("Hat layer frame"), Rig.Sync->GetLayerFrame(EDIY_EquipSlot::Hat), 3);
	TestTrue(TEXT("All layers report the same frame"), Rig.Sync->AreLayersInSync());

	// 0.31 + 0.10 = 0.41s -> frame 4.
	Rig.Sync->StepAnimation(0.10f);
	TestEqual(TEXT("Frame after 0.41s"), Rig.Sync->GetLayerFrame(EDIY_EquipSlot::Torso), 4);
	TestTrue(TEXT("Still synced"), Rig.Sync->AreLayersInSync());

	// 0.41 + 0.40 = 0.81s -> raw frame 8, wraps to 0 of 8.
	Rig.Sync->StepAnimation(0.40f);
	TestEqual(TEXT("Wrapped frame"), Rig.Sync->GetCurrentFrame(), 0);
	TestTrue(TEXT("Synced after wrap"), Rig.Sync->AreLayersInSync());

	// Run is a separate 8-frame @14fps set; switching must stay atomic and synced.
	TestTrue(TEXT("Run state accepted"), Rig.Sync->SetAnimationState(FName(TEXT("Run"))));
	TestEqual(TEXT("Run fps"), Rig.Sync->GetEffectiveFPS(), 14.0f);
	TestEqual(TEXT("Run frame count"), Rig.Sync->GetCanonicalFrameCount(), 8);
	Rig.Sync->StepAnimation(0.1f);
	TestEqual(TEXT("Run frame after 0.1s"), Rig.Sync->GetCurrentFrame(), 1);
	TestTrue(TEXT("Run layers in sync"), Rig.Sync->AreLayersInSync());

	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(
	FDIYPaper2DContractTest,
	"DIY.Paper2D.Contract",
	EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FDIYPaper2DContractTest::RunTest(const FString& Parameters)
{
	FTestRig Rig;
	if (!TestNotNull(TEXT("Character spawned"), Rig.Character) || !TestNotNull(TEXT("Sync component"), Rig.Sync))
	{
		return false;
	}

	TestNotNull(TEXT("Torso visual equipped"), Rig.Sync->GetEquippedVisual(EDIY_EquipSlot::Torso));
	TestNotNull(TEXT("Shirt visual equipped"), Rig.Sync->GetEquippedVisual(EDIY_EquipSlot::Shirt));
	TestNotNull(TEXT("Hat visual equipped"), Rig.Sync->GetEquippedVisual(EDIY_EquipSlot::Hat));

	// Regression guard for z-fighting / wrong draw order: representative layers must be translucent
	// and keep the explicit priority order (Legs 0 < Torso 1 < ... < Shirt 6 < Hat 7).
	struct FLayerCheck
	{
		UPaperFlipbookComponent* Component;
		int32 Priority;
	};

	const FLayerCheck Checks[] = {
		{ Rig.Character->TorsoLayer, 1 },
		{ Rig.Character->LegsLayer, 0 },
		{ Rig.Character->ShirtLayer, 6 },
		{ Rig.Character->HatLayer, 7 }
	};

	for (const FLayerCheck& Check : Checks)
	{
		if (!TestNotNull(TEXT("Layer component"), Check.Component))
		{
			continue;
		}

		UMaterialInterface* Material = Check.Component->GetMaterial(0);
		if (TestNotNull(TEXT("Layer material"), Material))
		{
			TestTrue(TEXT("Layer uses a translucent sprite material"), Material->GetName().Contains(TEXT("Translucent")));
		}
		TestEqual(TEXT("Layer translucency sort priority"), Check.Component->TranslucencySortPriority, Check.Priority);
	}

	TArray<FString> Errors;
	const bool bValid = Rig.Sync->ValidateCurrentState(Errors);
	TestTrue(TEXT("Default loadout satisfies the layer contract"), bValid);
	for (const FString& Error : Errors)
	{
		AddError(Error);
	}

	return bValid;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(
	FDIYPaper2DHotSwapClampTest,
	"DIY.Paper2D.HotSwapClamp",
	EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FDIYPaper2DHotSwapClampTest::RunTest(const FString& Parameters)
{
	FTestRig Rig;
	if (!TestNotNull(TEXT("Character spawned"), Rig.Character) || !TestNotNull(TEXT("Sync component"), Rig.Sync))
	{
		return false;
	}

	UPaperFlipbook* SourceHat = LoadFlipbook(TEXT("/DIYPaper2D/PaperPoC/Flipbooks/FB_HatHelmet_Walk.FB_HatHelmet_Walk"));
	UDIY_EquipmentVisualData* HatVisual = LoadHatVisual();
	if (!TestNotNull(TEXT("Source hat flipbook"), SourceHat) || !TestNotNull(TEXT("Hat visual"), HatVisual))
	{
		return false;
	}

	// A 6-frame hat while the body/outfit run 8 frames: swap must clamp, not crash or flash frame 0.
	UPaperFlipbook* ShortHat = DuplicateObject<UPaperFlipbook>(SourceHat, GetTransientPackage());
	{
		FScopedFlipbookMutator Mutator(ShortHat);
		Mutator.KeyFrames.SetNum(6);
	}
	TestEqual(TEXT("Short hat frame count"), ShortHat->GetNumFrames(), 6);

	UDIY_EquipmentVisualData* Mismatched = DuplicateObject<UDIY_EquipmentVisualData>(HatVisual, GetTransientPackage());
	for (FDIY_FlipbookEntry& Entry : Mismatched->Entries)
	{
		if (Entry.State == FName(TEXT("Walk")))
		{
			Entry.Flipbook = ShortHat;
		}
	}

	Rig.Sync->StepAnimation(0.61f); // frame 6
	TestEqual(TEXT("Frame before swap"), Rig.Sync->GetLayerFrame(EDIY_EquipSlot::Torso), 6);

	const bool bEquipped = Rig.Character->EquipSlot(EDIY_EquipSlot::Hat, Mismatched);
	TestTrue(TEXT("Equipping the short hat succeeds"), bEquipped);

	TestEqual(TEXT("Hat clamped to its last frame"), Rig.Sync->GetLayerFrame(EDIY_EquipSlot::Hat), 5);
	TestEqual(TEXT("Body keeps the canonical frame"), Rig.Sync->GetLayerFrame(EDIY_EquipSlot::Torso), 6);
	TestFalse(TEXT("Mismatched sets are honestly reported as out of sync"), Rig.Sync->AreLayersInSync());

	TArray<FString> Errors;
	TestFalse(TEXT("Contract validation fails for the short hat"), Rig.Sync->ValidateCurrentState(Errors));
	bool bSawFrameCountError = false;
	for (const FString& Error : Errors)
	{
		bSawFrameCountError |= Error.Contains(TEXT("Frame count mismatch"));
	}
	TestTrue(TEXT("Error explains the frame count mismatch"), bSawFrameCountError);

	// Step past the short hat's length: must not read out of range or crash.
	Rig.Sync->StepAnimation(0.09f); // frame 7
	TestEqual(TEXT("Body at frame 7"), Rig.Sync->GetLayerFrame(EDIY_EquipSlot::Torso), 7);
	TestEqual(TEXT("Hat still clamped at 5"), Rig.Sync->GetLayerFrame(EDIY_EquipSlot::Hat), 5);

	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(
	FDIYPaper2DAtomicStateTest,
	"DIY.Paper2D.AtomicState",
	EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FDIYPaper2DAtomicStateTest::RunTest(const FString& Parameters)
{
	FTestRig Rig;
	if (!TestNotNull(TEXT("Character spawned"), Rig.Character) || !TestNotNull(TEXT("Sync component"), Rig.Sync))
	{
		return false;
	}

	Rig.Sync->StepAnimation(0.31f);
	const int32 FrameBefore = Rig.Sync->GetCurrentFrame();

	// Missing state must be rejected atomically: no layer may change.
	TestFalse(TEXT("Unknown state is rejected"), Rig.Sync->SetAnimationState(FName(TEXT("Fly"))));
	TestEqual(TEXT("State unchanged"), Rig.Sync->GetCurrentState(), FName(TEXT("Walk")));
	TestEqual(TEXT("Frame unchanged"), Rig.Sync->GetCurrentFrame(), FrameBefore);
	TestTrue(TEXT("Layers still in sync"), Rig.Sync->AreLayersInSync());

	// Switching to Idle is atomic and restarts at frame 0 on every layer.
	TestTrue(TEXT("Idle accepted"), Rig.Sync->SetAnimationState(FName(TEXT("Idle"))));
	TestEqual(TEXT("Idle fps read from the new body flipbook"), Rig.Sync->GetEffectiveFPS(), 6.0f);
	TestEqual(TEXT("Idle starts at frame 0"), Rig.Sync->GetLayerFrame(EDIY_EquipSlot::Torso), 0);
	TestEqual(TEXT("Outfit also starts at frame 0"), Rig.Sync->GetLayerFrame(EDIY_EquipSlot::Shirt), 0);
	TestEqual(TEXT("Hat also starts at frame 0"), Rig.Sync->GetLayerFrame(EDIY_EquipSlot::Hat), 0);

	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(
	FDIYPaper2DNoDriftTest,
	"DIY.Paper2D.NoDrift",
	EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FDIYPaper2DNoDriftTest::RunTest(const FString& Parameters)
{
	FTestRig Rig;
	if (!TestNotNull(TEXT("Character spawned"), Rig.Character) || !TestNotNull(TEXT("Sync component"), Rig.Sync))
	{
		return false;
	}

	// Simulate 10 minutes at 60 fps. 600s * 10 fps = 6000 raw frames; 6000 % 8 == 0.
	const int32 Steps = 60 * 60 * 10;
	for (int32 Index = 0; Index < Steps; ++Index)
	{
		Rig.Sync->StepAnimation(1.0f / 60.0f);
	}

	TestEqual(TEXT("No drift after 10 minutes"), Rig.Sync->GetCurrentFrame(), 0);

	Rig.Sync->StepAnimation(0.1f);
	TestEqual(TEXT("Next frame after 10 minutes"), Rig.Sync->GetCurrentFrame(), 1);

	return true;
}


IMPLEMENT_SIMPLE_AUTOMATION_TEST(
	FDIYPaper2DAnimalTest,
	"DIY.Paper2D.AnimalCharacter",
	EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FDIYPaper2DAnimalTest::RunTest(const FString& Parameters)
{
	UWorld* World = GetEditorTestWorld();
	if (!TestNotNull(TEXT("World"), World))
	{
		return false;
	}

	FActorSpawnParameters Params;
	Params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	ADIY_AnimalPaperCharacter* Animal = World->SpawnActor<ADIY_AnimalPaperCharacter>(
		ADIY_AnimalPaperCharacter::StaticClass(), FVector::ZeroVector, FRotator::ZeroRotator, Params);
	if (!TestNotNull(TEXT("Animal character"), Animal))
	{
		return false;
	}

	Animal->SetActorTickEnabled(false);
	UDIY_FlipbookSyncComponent* Sync = Animal->SyncComponent;
	if (!TestNotNull(TEXT("Animal sync component"), Sync))
	{
		Animal->Destroy();
		return false;
	}
	Sync->SetComponentTickEnabled(false);
	Sync->bLogContractErrors = false;
	Animal->DispatchBeginPlay();

	TestTrue(TEXT("Walk state accepted"), Sync->SetAnimationState(TEXT("Walk")));
	Sync->StepAnimation(0.31f);
	TestEqual(TEXT("Frame after 0.31s"), Sync->GetCurrentFrame(), 3);
	TestTrue(TEXT("Single animal layer in sync"), Sync->AreLayersInSync());

	TestTrue(TEXT("Right facing"), Sync->SetFacing(EDIY_Facing::Right));
	TestEqual(TEXT("Frame preserved on facing change"), Sync->GetLayerFrame(EDIY_EquipSlot::Torso), 3);
	TestTrue(TEXT("Back facing"), Sync->SetFacing(EDIY_Facing::Back));
	TestTrue(TEXT("Left facing"), Sync->SetFacing(EDIY_Facing::Left));

	Animal->Destroy();
	return true;
}

#endif // WITH_DEV_AUTOMATION_TESTS









