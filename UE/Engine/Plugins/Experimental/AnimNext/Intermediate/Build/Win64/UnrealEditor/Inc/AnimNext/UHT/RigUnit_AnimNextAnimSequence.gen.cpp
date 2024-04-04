// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Graph/RigUnit_AnimNextAnimSequence.h"
#include "../Internal/Graph/AnimNext_LODPose.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_AnimNextAnimSequence() {}
// Cross Module References
	ANIMNEXT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNextGraph_AnimSequence();
	ANIMNEXT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNextGraphLODPose();
	ANIMNEXT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimSequenceParameters();
	ANIMNEXT_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AnimNext_AnimSequenceAsset();
	ANIMNEXT_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AnimNext_AnimSequencePlayer();
	ANIMNEXT_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AnimNextBase();
	UPackage* Z_Construct_UPackage__Script_AnimNext();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNextGraph_AnimSequence;
class UScriptStruct* FAnimNextGraph_AnimSequence::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNextGraph_AnimSequence.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNextGraph_AnimSequence.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNextGraph_AnimSequence, (UObject*)Z_Construct_UPackage__Script_AnimNext(), TEXT("AnimNextGraph_AnimSequence"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNextGraph_AnimSequence.OuterSingleton;
}
template<> ANIMNEXT_API UScriptStruct* StaticStruct<FAnimNextGraph_AnimSequence>()
{
	return FAnimNextGraph_AnimSequence::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNextGraph_AnimSequence_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNextGraph_AnimSequence_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "AnimSequence" },
		{ "ModuleRelativePath", "Private/Graph/RigUnit_AnimNextAnimSequence.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNextGraph_AnimSequence_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNextGraph_AnimSequence>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNextGraph_AnimSequence_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNext,
		nullptr,
		&NewStructOps,
		"AnimNextGraph_AnimSequence",
		nullptr,
		0,
		sizeof(FAnimNextGraph_AnimSequence),
		alignof(FAnimNextGraph_AnimSequence),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextGraph_AnimSequence_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNextGraph_AnimSequence_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNextGraph_AnimSequence()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNextGraph_AnimSequence.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNextGraph_AnimSequence.InnerSingleton, Z_Construct_UScriptStruct_FAnimNextGraph_AnimSequence_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNextGraph_AnimSequence.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_AnimNext_AnimSequenceAsset>() == std::is_polymorphic<FRigUnit_AnimNextBase>(), "USTRUCT FRigUnit_AnimNext_AnimSequenceAsset cannot be polymorphic unless super FRigUnit_AnimNextBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_AnimNext_AnimSequenceAsset;
class UScriptStruct* FRigUnit_AnimNext_AnimSequenceAsset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_AnimNext_AnimSequenceAsset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_AnimNext_AnimSequenceAsset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_AnimNext_AnimSequenceAsset, (UObject*)Z_Construct_UPackage__Script_AnimNext(), TEXT("RigUnit_AnimNext_AnimSequenceAsset"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_AnimNext_AnimSequenceAsset_Execute;
		Arguments_FRigUnit_AnimNext_AnimSequenceAsset_Execute.Emplace(TEXT("Sequence"), TEXT("FAnimNextGraph_AnimSequence"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_AnimNext_AnimSequenceAsset::Execute"), &FRigUnit_AnimNext_AnimSequenceAsset::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_AnimNext_AnimSequenceAsset.OuterSingleton, Arguments_FRigUnit_AnimNext_AnimSequenceAsset_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_AnimNext_AnimSequenceAsset.OuterSingleton;
}
template<> ANIMNEXT_API UScriptStruct* StaticStruct<FRigUnit_AnimNext_AnimSequenceAsset>()
{
	return FRigUnit_AnimNext_AnimSequenceAsset::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_AnimNext_AnimSequenceAsset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sequence_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Sequence;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AnimNext_AnimSequenceAsset_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Unit for getting an asset reference we can pass to a player or data extractor */" },
		{ "DisplayName", "Anim Sequence Asset" },
		{ "ModuleRelativePath", "Private/Graph/RigUnit_AnimNextAnimSequence.h" },
		{ "NodeColor", "1 1 1" },
		{ "TitleColor", "1 0 0" },
		{ "ToolTip", "Unit for getting an asset reference we can pass to a player or data extractor" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_AnimNext_AnimSequenceAsset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_AnimNext_AnimSequenceAsset>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AnimNext_AnimSequenceAsset_Statics::NewProp_Sequence_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "// TODO : Enable once we have RigVM object support enabled\n//UPROPERTY(EditAnywhere, Category = \"Asset\", meta = (Input, EditInline, PinHiddenByDefault, DisallowedClasses = \"/Script/Engine.AnimMontage\"))\n//TObjectPtr<UAnimSequenceBase> AnimSequence = nullptr;\n" },
		{ "DisplayName", "AnimSequence" },
		{ "ModuleRelativePath", "Private/Graph/RigUnit_AnimNextAnimSequence.h" },
		{ "Output", "" },
		{ "ToolTip", "TODO : Enable once we have RigVM object support enabled\nUPROPERTY(EditAnywhere, Category = \"Asset\", meta = (Input, EditInline, PinHiddenByDefault, DisallowedClasses = \"/Script/Engine.AnimMontage\"))\nTObjectPtr<UAnimSequenceBase> AnimSequence = nullptr;" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AnimNext_AnimSequenceAsset_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_AnimNext_AnimSequenceAsset, Sequence), Z_Construct_UScriptStruct_FAnimNextGraph_AnimSequence, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimNext_AnimSequenceAsset_Statics::NewProp_Sequence_MetaData), Z_Construct_UScriptStruct_FRigUnit_AnimNext_AnimSequenceAsset_Statics::NewProp_Sequence_MetaData) }; // 665396011
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_AnimNext_AnimSequenceAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AnimNext_AnimSequenceAsset_Statics::NewProp_Sequence,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_AnimNext_AnimSequenceAsset_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNext,
		Z_Construct_UScriptStruct_FRigUnit_AnimNextBase,
		&NewStructOps,
		"RigUnit_AnimNext_AnimSequenceAsset",
		Z_Construct_UScriptStruct_FRigUnit_AnimNext_AnimSequenceAsset_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimNext_AnimSequenceAsset_Statics::PropPointers),
		sizeof(FRigUnit_AnimNext_AnimSequenceAsset),
		alignof(FRigUnit_AnimNext_AnimSequenceAsset),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimNext_AnimSequenceAsset_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_AnimNext_AnimSequenceAsset_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimNext_AnimSequenceAsset_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AnimNext_AnimSequenceAsset()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_AnimNext_AnimSequenceAsset.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_AnimNext_AnimSequenceAsset.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_AnimNext_AnimSequenceAsset_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_AnimNext_AnimSequenceAsset.InnerSingleton;
	}

void FRigUnit_AnimNext_AnimSequenceAsset::Execute()
{
	FAnimNextGraphExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_AnimNext_AnimSequenceAsset::Execute(const FAnimNextGraphExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Sequence
	);
}

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimSequenceParameters;
class UScriptStruct* FAnimSequenceParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimSequenceParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimSequenceParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimSequenceParameters, (UObject*)Z_Construct_UPackage__Script_AnimNext(), TEXT("AnimSequenceParameters"));
	}
	return Z_Registration_Info_UScriptStruct_AnimSequenceParameters.OuterSingleton;
}
template<> ANIMNEXT_API UScriptStruct* StaticStruct<FAnimSequenceParameters>()
{
	return FAnimSequenceParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimSequenceParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartPosition_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLoop_MetaData[];
#endif
		static void NewProp_bLoop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoop;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimSequenceParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// --- FRigUnit_AnimNext_AnimSequencePlayer --- \n" },
		{ "ModuleRelativePath", "Private/Graph/RigUnit_AnimNextAnimSequence.h" },
		{ "ToolTip", "--- FRigUnit_AnimNext_AnimSequencePlayer ---" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimSequenceParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimSequenceParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimSequenceParameters_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "Anim Sequence" },
		{ "ModuleRelativePath", "Private/Graph/RigUnit_AnimNextAnimSequence.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimSequenceParameters_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimSequenceParameters, PlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSequenceParameters_Statics::NewProp_PlayRate_MetaData), Z_Construct_UScriptStruct_FAnimSequenceParameters_Statics::NewProp_PlayRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimSequenceParameters_Statics::NewProp_StartPosition_MetaData[] = {
		{ "Category", "Anim Sequence" },
		{ "ModuleRelativePath", "Private/Graph/RigUnit_AnimNextAnimSequence.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimSequenceParameters_Statics::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimSequenceParameters, StartPosition), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSequenceParameters_Statics::NewProp_StartPosition_MetaData), Z_Construct_UScriptStruct_FAnimSequenceParameters_Statics::NewProp_StartPosition_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimSequenceParameters_Statics::NewProp_bLoop_MetaData[] = {
		{ "Category", "Anim Sequence" },
		{ "ModuleRelativePath", "Private/Graph/RigUnit_AnimNextAnimSequence.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimSequenceParameters_Statics::NewProp_bLoop_SetBit(void* Obj)
	{
		((FAnimSequenceParameters*)Obj)->bLoop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimSequenceParameters_Statics::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimSequenceParameters), &Z_Construct_UScriptStruct_FAnimSequenceParameters_Statics::NewProp_bLoop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSequenceParameters_Statics::NewProp_bLoop_MetaData), Z_Construct_UScriptStruct_FAnimSequenceParameters_Statics::NewProp_bLoop_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimSequenceParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSequenceParameters_Statics::NewProp_PlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSequenceParameters_Statics::NewProp_StartPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSequenceParameters_Statics::NewProp_bLoop,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimSequenceParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNext,
		nullptr,
		&NewStructOps,
		"AnimSequenceParameters",
		Z_Construct_UScriptStruct_FAnimSequenceParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSequenceParameters_Statics::PropPointers),
		sizeof(FAnimSequenceParameters),
		alignof(FAnimSequenceParameters),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSequenceParameters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimSequenceParameters_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSequenceParameters_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAnimSequenceParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimSequenceParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimSequenceParameters.InnerSingleton, Z_Construct_UScriptStruct_FAnimSequenceParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimSequenceParameters.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_AnimNext_AnimSequencePlayer>() == std::is_polymorphic<FRigUnit_AnimNextBase>(), "USTRUCT FRigUnit_AnimNext_AnimSequencePlayer cannot be polymorphic unless super FRigUnit_AnimNextBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_AnimNext_AnimSequencePlayer;
class UScriptStruct* FRigUnit_AnimNext_AnimSequencePlayer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_AnimNext_AnimSequencePlayer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_AnimNext_AnimSequencePlayer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_AnimNext_AnimSequencePlayer, (UObject*)Z_Construct_UPackage__Script_AnimNext(), TEXT("RigUnit_AnimNext_AnimSequencePlayer"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_AnimNext_AnimSequencePlayer_Initialize;
		Arguments_FRigUnit_AnimNext_AnimSequencePlayer_Initialize.Emplace(TEXT("Parameters"), TEXT("FAnimSequenceParameters"));
		Arguments_FRigUnit_AnimNext_AnimSequencePlayer_Initialize.Emplace(TEXT("Sequence"), TEXT("FAnimNextGraph_AnimSequence"));
		Arguments_FRigUnit_AnimNext_AnimSequencePlayer_Initialize.Emplace(TEXT("LODPose"), TEXT("FAnimNextGraphLODPose"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_AnimNext_AnimSequencePlayer::Initialize"), &FRigUnit_AnimNext_AnimSequencePlayer::RigVMInitialize, Z_Registration_Info_UScriptStruct_RigUnit_AnimNext_AnimSequencePlayer.OuterSingleton, Arguments_FRigUnit_AnimNext_AnimSequencePlayer_Initialize);
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_AnimNext_AnimSequencePlayer_Execute;
		Arguments_FRigUnit_AnimNext_AnimSequencePlayer_Execute.Emplace(TEXT("Parameters"), TEXT("FAnimSequenceParameters"));
		Arguments_FRigUnit_AnimNext_AnimSequencePlayer_Execute.Emplace(TEXT("Sequence"), TEXT("FAnimNextGraph_AnimSequence"));
		Arguments_FRigUnit_AnimNext_AnimSequencePlayer_Execute.Emplace(TEXT("LODPose"), TEXT("FAnimNextGraphLODPose"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_AnimNext_AnimSequencePlayer::Execute"), &FRigUnit_AnimNext_AnimSequencePlayer::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_AnimNext_AnimSequencePlayer.OuterSingleton, Arguments_FRigUnit_AnimNext_AnimSequencePlayer_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_AnimNext_AnimSequencePlayer.OuterSingleton;
}
template<> ANIMNEXT_API UScriptStruct* StaticStruct<FRigUnit_AnimNext_AnimSequencePlayer>()
{
	return FRigUnit_AnimNext_AnimSequencePlayer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_AnimNext_AnimSequencePlayer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sequence_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Sequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODPose_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LODPose;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AnimNext_AnimSequencePlayer_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Unit for getting a pose from an animation sequence */" },
		{ "DisplayName", "AnimSequencePlayer" },
		{ "ModuleRelativePath", "Private/Graph/RigUnit_AnimNextAnimSequence.h" },
		{ "NodeColor", "1 1 1" },
		{ "TitleColor", "1 0 0" },
		{ "ToolTip", "Unit for getting a pose from an animation sequence" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_AnimNext_AnimSequencePlayer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_AnimNext_AnimSequencePlayer>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AnimNext_AnimSequencePlayer_Statics::NewProp_Parameters_MetaData[] = {
		{ "Category", "Anim Interface" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Graph/RigUnit_AnimNextAnimSequence.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AnimNext_AnimSequencePlayer_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_AnimNext_AnimSequencePlayer, Parameters), Z_Construct_UScriptStruct_FAnimSequenceParameters, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimNext_AnimSequencePlayer_Statics::NewProp_Parameters_MetaData), Z_Construct_UScriptStruct_FRigUnit_AnimNext_AnimSequencePlayer_Statics::NewProp_Parameters_MetaData) }; // 340077120
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AnimNext_AnimSequencePlayer_Statics::NewProp_Sequence_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "// The animation sequence asset to play\n" },
		{ "DisplayName", "AnimSequence" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Graph/RigUnit_AnimNextAnimSequence.h" },
		{ "ToolTip", "The animation sequence asset to play" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AnimNext_AnimSequencePlayer_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_AnimNext_AnimSequencePlayer, Sequence), Z_Construct_UScriptStruct_FAnimNextGraph_AnimSequence, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimNext_AnimSequencePlayer_Statics::NewProp_Sequence_MetaData), Z_Construct_UScriptStruct_FRigUnit_AnimNext_AnimSequencePlayer_Statics::NewProp_Sequence_MetaData) }; // 665396011
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AnimNext_AnimSequencePlayer_Statics::NewProp_LODPose_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "// The output pose generated\n" },
		{ "DisplayName", "Result" },
		{ "ModuleRelativePath", "Private/Graph/RigUnit_AnimNextAnimSequence.h" },
		{ "Output", "" },
		{ "ToolTip", "The output pose generated" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AnimNext_AnimSequencePlayer_Statics::NewProp_LODPose = { "LODPose", nullptr, (EPropertyFlags)0x0020080000002015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_AnimNext_AnimSequencePlayer, LODPose), Z_Construct_UScriptStruct_FAnimNextGraphLODPose, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimNext_AnimSequencePlayer_Statics::NewProp_LODPose_MetaData), Z_Construct_UScriptStruct_FRigUnit_AnimNext_AnimSequencePlayer_Statics::NewProp_LODPose_MetaData) }; // 3159281171
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_AnimNext_AnimSequencePlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AnimNext_AnimSequencePlayer_Statics::NewProp_Parameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AnimNext_AnimSequencePlayer_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AnimNext_AnimSequencePlayer_Statics::NewProp_LODPose,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_AnimNext_AnimSequencePlayer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNext,
		Z_Construct_UScriptStruct_FRigUnit_AnimNextBase,
		&NewStructOps,
		"RigUnit_AnimNext_AnimSequencePlayer",
		Z_Construct_UScriptStruct_FRigUnit_AnimNext_AnimSequencePlayer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimNext_AnimSequencePlayer_Statics::PropPointers),
		sizeof(FRigUnit_AnimNext_AnimSequencePlayer),
		alignof(FRigUnit_AnimNext_AnimSequencePlayer),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimNext_AnimSequencePlayer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_AnimNext_AnimSequencePlayer_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimNext_AnimSequencePlayer_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AnimNext_AnimSequencePlayer()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_AnimNext_AnimSequencePlayer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_AnimNext_AnimSequencePlayer.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_AnimNext_AnimSequencePlayer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_AnimNext_AnimSequencePlayer.InnerSingleton;
	}

void FRigUnit_AnimNext_AnimSequencePlayer::Initialize()
{
	FAnimNextGraphExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Initialize(TemporaryExecuteContext);
}

void FRigUnit_AnimNext_AnimSequencePlayer::Initialize(const FAnimNextGraphExecuteContext& InExecuteContext)
{
	StaticInitialize(
		InExecuteContext,
		Parameters,
		Sequence,
		LODPose
	);
}

void FRigUnit_AnimNext_AnimSequencePlayer::Execute()
{
	FAnimNextGraphExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_AnimNext_AnimSequencePlayer::Execute(const FAnimNextGraphExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Parameters,
		Sequence,
		LODPose
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Private_Graph_RigUnit_AnimNextAnimSequence_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Private_Graph_RigUnit_AnimNextAnimSequence_h_Statics::ScriptStructInfo[] = {
		{ FAnimNextGraph_AnimSequence::StaticStruct, Z_Construct_UScriptStruct_FAnimNextGraph_AnimSequence_Statics::NewStructOps, TEXT("AnimNextGraph_AnimSequence"), &Z_Registration_Info_UScriptStruct_AnimNextGraph_AnimSequence, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNextGraph_AnimSequence), 665396011U) },
		{ FRigUnit_AnimNext_AnimSequenceAsset::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_AnimNext_AnimSequenceAsset_Statics::NewStructOps, TEXT("RigUnit_AnimNext_AnimSequenceAsset"), &Z_Registration_Info_UScriptStruct_RigUnit_AnimNext_AnimSequenceAsset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_AnimNext_AnimSequenceAsset), 3168070545U) },
		{ FAnimSequenceParameters::StaticStruct, Z_Construct_UScriptStruct_FAnimSequenceParameters_Statics::NewStructOps, TEXT("AnimSequenceParameters"), &Z_Registration_Info_UScriptStruct_AnimSequenceParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimSequenceParameters), 340077120U) },
		{ FRigUnit_AnimNext_AnimSequencePlayer::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_AnimNext_AnimSequencePlayer_Statics::NewStructOps, TEXT("RigUnit_AnimNext_AnimSequencePlayer"), &Z_Registration_Info_UScriptStruct_RigUnit_AnimNext_AnimSequencePlayer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_AnimNext_AnimSequencePlayer), 1916049497U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Private_Graph_RigUnit_AnimNextAnimSequence_h_1343101246(TEXT("/Script/AnimNext"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Private_Graph_RigUnit_AnimNextAnimSequence_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Private_Graph_RigUnit_AnimNextAnimSequence_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
