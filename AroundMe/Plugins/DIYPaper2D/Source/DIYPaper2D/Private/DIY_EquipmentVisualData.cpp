// Copyright Epic Games, Inc. All Rights Reserved.

#include "DIY_EquipmentVisualData.h"

#include "PaperFlipbook.h"
#include "PaperSprite.h"
#include "DIYPaper2DLog.h"

UPaperFlipbook* UDIY_EquipmentVisualData::FindFlipbook(FName State, EDIY_Facing Facing) const
{
	for (const FDIY_FlipbookEntry& Entry : Entries)
	{
		if (Entry.State == State && Entry.Facing == Facing && Entry.Flipbook != nullptr)
		{
			return Entry.Flipbook;
		}
	}

	// Fallback so a set that only authored Front does not hard-fail.
	if (Facing != EDIY_Facing::Front)
	{
		for (const FDIY_FlipbookEntry& Entry : Entries)
		{
			if (Entry.State == State && Entry.Facing == EDIY_Facing::Front && Entry.Flipbook != nullptr)
			{
				return Entry.Flipbook;
			}
		}
	}

	return nullptr;
}

bool UDIY_EquipmentVisualData::HasState(FName State) const
{
	for (const FDIY_FlipbookEntry& Entry : Entries)
	{
		if (Entry.State == State && Entry.Flipbook != nullptr)
		{
			return true;
		}
	}
	return false;
}

TArray<FName> UDIY_EquipmentVisualData::GetStates() const
{
	TArray<FName> States;
	for (const FDIY_FlipbookEntry& Entry : Entries)
	{
		if (Entry.Flipbook != nullptr)
		{
			States.AddUnique(Entry.State);
		}
	}
	return States;
}

bool UDIY_EquipmentVisualData::ValidateAssets(TArray<FString>& OutErrors) const
{
	bool bOK = true;

	if (Entries.Num() == 0)
	{
		OutErrors.Add(FString::Printf(TEXT("%s: no entries authored"), *GetName()));
		return false;
	}

#if WITH_EDITOR
	for (const FDIY_FlipbookEntry& Entry : Entries)
	{
		if (Entry.Flipbook == nullptr)
		{
			OutErrors.Add(FString::Printf(TEXT("%s: state '%s' has no flipbook"), *GetName(), *Entry.State.ToString()));
			bOK = false;
			continue;
		}

		if (Entry.Flipbook->GetNumFrames() <= 0)
		{
			OutErrors.Add(FString::Printf(TEXT("%s / %s: flipbook has no frames"), *GetName(), *Entry.Flipbook->GetName()));
			bOK = false;
			continue;
		}

		if (Entry.Flipbook->GetFramesPerSecond() <= 0.0f)
		{
			OutErrors.Add(FString::Printf(TEXT("%s / %s: FramesPerSecond must be > 0"), *GetName(), *Entry.Flipbook->GetName()));
			bOK = false;
		}

		for (int32 KeyFrameIndex = 0; KeyFrameIndex < Entry.Flipbook->GetNumKeyFrames(); ++KeyFrameIndex)
		{
			const FPaperFlipbookKeyFrame& KeyFrame = Entry.Flipbook->GetKeyFrameChecked(KeyFrameIndex);
			const FString Where = FString::Printf(TEXT("%s / %s [frame %d]"), *GetName(), *Entry.Flipbook->GetName(), KeyFrameIndex);

			if (KeyFrame.Sprite == nullptr)
			{
				OutErrors.Add(Where + TEXT(": key frame has no sprite"));
				bOK = false;
				continue;
			}

			if (KeyFrame.FrameRun != 1)
			{
				OutErrors.Add(Where + TEXT(": FrameRun must be 1 for a fixed-fps layer set"));
				bOK = false;
			}

			const FVector2D SourceSize = KeyFrame.Sprite->GetSourceSize();
			if (!FMath::IsNearlyEqual(SourceSize.X, static_cast<float>(ExpectedCanvasSize.X), 0.5f) ||
				!FMath::IsNearlyEqual(SourceSize.Y, static_cast<float>(ExpectedCanvasSize.Y), 0.5f))
			{
				OutErrors.Add(FString::Printf(TEXT("%s: canvas is %.0fx%.0f, expected %dx%d"),
					*Where, SourceSize.X, SourceSize.Y, ExpectedCanvasSize.X, ExpectedCanvasSize.Y));
				bOK = false;
			}

			const FVector2D PivotInSprite = KeyFrame.Sprite->GetPivotPosition() - KeyFrame.Sprite->GetSourceUV();
			if (!FMath::IsNearlyEqual(PivotInSprite.X, static_cast<float>(ExpectedPivotPixels.X), 0.5f) ||
				!FMath::IsNearlyEqual(PivotInSprite.Y, static_cast<float>(ExpectedPivotPixels.Y), 0.5f))
			{
				OutErrors.Add(FString::Printf(TEXT("%s: pivot is (%.1f, %.1f), expected (%.1f, %.1f)"),
					*Where, PivotInSprite.X, PivotInSprite.Y, ExpectedPivotPixels.X, ExpectedPivotPixels.Y));
				bOK = false;
			}
		}
	}
#else
	OutErrors.Add(TEXT("ValidateAssets() only performs the deep sprite checks in editor builds."));
#endif

	return bOK;
}
