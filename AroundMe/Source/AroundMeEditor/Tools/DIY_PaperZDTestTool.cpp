// Copyright Epic Games, Inc. All Rights Reserved.

#include "DIY_PaperZDTestTool.h"

#include "AnimSequences/PaperZDAnimSequence.h"
#include "AnimSequences/PaperZDAnimSequence_Flipbook.h"
#include "AnimSequences/PaperZDFlipbookAnimDataSource.h"
#include "AnimSequences/Sources/PaperZDAnimationSource.h"
#include "PaperZDAnimBP.h"
#include "PaperZDAnimBPGeneratedClass.h"
#include "PaperZDAnimInstance.h"
#include "AnimSequences/PaperZDAnimSequence.h"
#include "PaperFlipbook.h"

#include "EdGraph/EdGraph.h"
#include "EdGraph/EdGraphNode.h"
#include "EdGraph/EdGraphPin.h"
#include "EdGraph/EdGraphSchema.h"
#include "Kismet2/BlueprintEditorUtils.h"

#include "Engine/Blueprint.h"
#include "Kismet2/KismetEditorUtilities.h"
#include "Misc/PackageName.h"
#include "UObject/Package.h"
#include "UObject/SavePackage.h"
#include "UObject/UnrealType.h"

namespace
{
	bool SaveObjectPackage(UObject* Object)
	{
		if (Object == nullptr)
		{
			return false;
		}

		UPackage* Package = Object->GetOutermost();
		Package->MarkPackageDirty();

		const FString FileName = FPackageName::LongPackageNameToFilename(
			Package->GetName(), FPackageName::GetAssetPackageExtension());

		FSavePackageArgs Args;
		Args.TopLevelFlags = RF_Public | RF_Standalone;
		Args.SaveFlags = SAVE_NoError;

		return UPackage::SavePackage(Package, Object, *FileName, Args);
	}

	bool SetObjectProperty(UObject* Target, UClass* OwnerClass, FName PropertyName, UObject* Value)
	{
		if (FObjectProperty* Property = FindFProperty<FObjectProperty>(OwnerClass, PropertyName))
		{
			Property->SetObjectPropertyValue_InContainer(Target, Value);
			return true;
		}
		return false;
	}

	bool SetSingleFlipbookDataSource(UObject* Sequence, UPaperFlipbook* Flipbook)
	{
		if (Sequence == nullptr || Flipbook == nullptr)
		{
			return false;
		}

		FArrayProperty* ArrayProperty = FindFProperty<FArrayProperty>(
			Sequence->GetClass(), TEXT("AnimData"));
		if (ArrayProperty == nullptr)
		{
			return false;
		}

		FStructProperty* InnerProperty = CastField<FStructProperty>(ArrayProperty->Inner);
		if (InnerProperty == nullptr ||
			InnerProperty->Struct != FPaperZDFlipbookAnimDataSource::StaticStruct())
		{
			return false;
		}

		FScriptArrayHelper Helper(ArrayProperty, ArrayProperty->ContainerPtrToValuePtr<void>(Sequence));
		Helper.Resize(1);

		FPaperZDFlipbookAnimDataSource Entry;
		Entry.Animation = Flipbook;
		InnerProperty->CopySingleValue(Helper.GetRawPtr(0), &Entry);
		return true;
	}
}

bool UDIY_PaperZDTestTool::FillSquidSequences(
	const FString& SequenceFolder, const FString& FlipbookFolder, const FString& SourcePath)
{
	UPaperZDAnimationSource* Source = LoadObject<UPaperZDAnimationSource>(nullptr, *SourcePath);
	if (Source == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("[PaperZDTest] AnimationSource not found: %s"), *SourcePath);
		return false;
	}

	const TCHAR* Directions[] = { TEXT("Front"), TEXT("Back"), TEXT("Left"), TEXT("Right") };
	bool bAllOk = true;

	for (const TCHAR* Direction : Directions)
	{
		const FString SequenceName = FString::Printf(TEXT("ASQ_Squid_Walk_%s"), Direction);
		const FString SequencePath = FString::Printf(TEXT("%s/%s.%s"), *SequenceFolder, *SequenceName, *SequenceName);
		const FString FlipbookName = FString::Printf(TEXT("FB_Squid_%s"), Direction);
		const FString FlipbookPath = FString::Printf(TEXT("%s/%s.%s"), *FlipbookFolder, *FlipbookName, *FlipbookName);

		UPaperZDAnimSequence_Flipbook* Sequence =
			LoadObject<UPaperZDAnimSequence_Flipbook>(nullptr, *SequencePath);
		UPaperFlipbook* Flipbook = LoadObject<UPaperFlipbook>(nullptr, *FlipbookPath);

		if (Sequence == nullptr || Flipbook == nullptr)
		{
			UE_LOG(LogTemp, Error, TEXT("[PaperZDTest] Missing sequence or flipbook for %s"), Direction);
			bAllOk = false;
			continue;
		}

		Sequence->Modify();

		const bool bSourceOk = SetObjectProperty(
			Sequence, UPaperZDAnimSequence::StaticClass(), TEXT("AnimSource"), Source);
		const bool bDataOk = SetSingleFlipbookDataSource(Sequence, Flipbook);

		if (!bSourceOk || !bDataOk)
		{
			UE_LOG(LogTemp, Error, TEXT("[PaperZDTest] Failed to fill %s (source=%d, data=%d)"),
				*SequenceName, bSourceOk, bDataOk);
			bAllOk = false;
			continue;
		}

		Sequence->MarkPackageDirty();
		if (!SaveObjectPackage(Sequence))
		{
			UE_LOG(LogTemp, Error, TEXT("[PaperZDTest] Failed to save %s"), *SequenceName);
			bAllOk = false;
		}
		else
		{
			UE_LOG(LogTemp, Log, TEXT("[PaperZDTest] Filled %s"), *SequenceName);
		}
	}

	return bAllOk;
}

bool UDIY_PaperZDTestTool::CreateSquidAnimBP(
	const FString& SourcePath, const FString& PackagePath, const FString& AssetName)
{
	UPaperZDAnimationSource* Source = LoadObject<UPaperZDAnimationSource>(nullptr, *SourcePath);
	if (Source == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("[PaperZDTest] AnimationSource not found: %s"), *SourcePath);
		return false;
	}

	const FString FullPackageName = FString::Printf(TEXT("%s/%s"), *PackagePath, *AssetName);
	const FString ObjectPath = FullPackageName + TEXT(".") + AssetName;

	UPaperZDAnimBP* AnimBP = LoadObject<UPaperZDAnimBP>(nullptr, *ObjectPath);
	if (AnimBP == nullptr)
	{
		UPackage* Package = CreatePackage(*FullPackageName);
		AnimBP = Cast<UPaperZDAnimBP>(FKismetEditorUtilities::CreateBlueprint(
			UPaperZDAnimInstance::StaticClass(),
			Package,
			FName(*AssetName),
			BPTYPE_Normal,
			UPaperZDAnimBP::StaticClass(),
			UPaperZDAnimBPGeneratedClass::StaticClass()));
	}

	if (AnimBP == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("[PaperZDTest] Failed to create AnimBP %s"), *AssetName);
		return false;
	}

	AnimBP->Modify();
	AnimBP->SupportedAnimationSource = Source;

	if (AnimBP->AnimationGraph == nullptr)
	{
		AnimBP->CreateGraph();
	}

	FKismetEditorUtilities::CompileBlueprint(AnimBP);
	AnimBP->MarkPackageDirty();

	if (!SaveObjectPackage(AnimBP))
	{
		UE_LOG(LogTemp, Error, TEXT("[PaperZDTest] Failed to save AnimBP %s"), *AssetName);
		return false;
	}

	UE_LOG(LogTemp, Log, TEXT("[PaperZDTest] Created AnimBP %s"), *ObjectPath);
	return true;
}
