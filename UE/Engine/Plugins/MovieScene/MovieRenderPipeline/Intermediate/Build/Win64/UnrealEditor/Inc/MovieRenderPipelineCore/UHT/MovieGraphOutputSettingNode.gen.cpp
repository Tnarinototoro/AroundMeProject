// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Nodes/MovieGraphOutputSettingNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieGraphOutputSettingNode() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphOutputSettingNode();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphOutputSettingNode_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphSettingNode();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
// End Cross Module References
	void UMovieGraphOutputSettingNode::StaticRegisterNativesUMovieGraphOutputSettingNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieGraphOutputSettingNode);
	UClass* Z_Construct_UClass_UMovieGraphOutputSettingNode_NoRegister()
	{
		return UMovieGraphOutputSettingNode::StaticClass();
	}
	struct Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_OutputDirectory_MetaData[];
#endif
		static void NewProp_bOverride_OutputDirectory_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_OutputDirectory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_FileNameFormat_MetaData[];
#endif
		static void NewProp_bOverride_FileNameFormat_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_FileNameFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_OutputResolution_MetaData[];
#endif
		static void NewProp_bOverride_OutputResolution_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_OutputResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_OutputFrameRate_MetaData[];
#endif
		static void NewProp_bOverride_OutputFrameRate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_OutputFrameRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_bOverwriteExistingOutput_MetaData[];
#endif
		static void NewProp_bOverride_bOverwriteExistingOutput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_bOverwriteExistingOutput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ZeroPadFrameNumbers_MetaData[];
#endif
		static void NewProp_bOverride_ZeroPadFrameNumbers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ZeroPadFrameNumbers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_FrameNumberOffset_MetaData[];
#endif
		static void NewProp_bOverride_FrameNumberOffset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_FrameNumberOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputDirectory_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputDirectory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileNameFormat_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileNameFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputResolution_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputFrameRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputFrameRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverwriteExistingOutput_MetaData[];
#endif
		static void NewProp_bOverwriteExistingOutput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverwriteExistingOutput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZeroPadFrameNumbers_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ZeroPadFrameNumbers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameNumberOffset_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FrameNumberOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieGraphSettingNode,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graph/Nodes/MovieGraphOutputSettingNode.h" },
		{ "ModuleRelativePath", "Public/Graph/Nodes/MovieGraphOutputSettingNode.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_bOverride_OutputDirectory_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Nodes/MovieGraphOutputSettingNode.h" },
	};
#endif
	void Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_bOverride_OutputDirectory_SetBit(void* Obj)
	{
		((UMovieGraphOutputSettingNode*)Obj)->bOverride_OutputDirectory = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_bOverride_OutputDirectory = { "bOverride_OutputDirectory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMovieGraphOutputSettingNode), &Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_bOverride_OutputDirectory_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_bOverride_OutputDirectory_MetaData), Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_bOverride_OutputDirectory_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_bOverride_FileNameFormat_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Nodes/MovieGraphOutputSettingNode.h" },
	};
#endif
	void Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_bOverride_FileNameFormat_SetBit(void* Obj)
	{
		((UMovieGraphOutputSettingNode*)Obj)->bOverride_FileNameFormat = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_bOverride_FileNameFormat = { "bOverride_FileNameFormat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMovieGraphOutputSettingNode), &Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_bOverride_FileNameFormat_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_bOverride_FileNameFormat_MetaData), Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_bOverride_FileNameFormat_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_bOverride_OutputResolution_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Nodes/MovieGraphOutputSettingNode.h" },
	};
#endif
	void Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_bOverride_OutputResolution_SetBit(void* Obj)
	{
		((UMovieGraphOutputSettingNode*)Obj)->bOverride_OutputResolution = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_bOverride_OutputResolution = { "bOverride_OutputResolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMovieGraphOutputSettingNode), &Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_bOverride_OutputResolution_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_bOverride_OutputResolution_MetaData), Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_bOverride_OutputResolution_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_bOverride_OutputFrameRate_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Nodes/MovieGraphOutputSettingNode.h" },
	};
#endif
	void Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_bOverride_OutputFrameRate_SetBit(void* Obj)
	{
		((UMovieGraphOutputSettingNode*)Obj)->bOverride_OutputFrameRate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_bOverride_OutputFrameRate = { "bOverride_OutputFrameRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMovieGraphOutputSettingNode), &Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_bOverride_OutputFrameRate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_bOverride_OutputFrameRate_MetaData), Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_bOverride_OutputFrameRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_bOverride_bOverwriteExistingOutput_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Nodes/MovieGraphOutputSettingNode.h" },
	};
#endif
	void Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_bOverride_bOverwriteExistingOutput_SetBit(void* Obj)
	{
		((UMovieGraphOutputSettingNode*)Obj)->bOverride_bOverwriteExistingOutput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_bOverride_bOverwriteExistingOutput = { "bOverride_bOverwriteExistingOutput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMovieGraphOutputSettingNode), &Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_bOverride_bOverwriteExistingOutput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_bOverride_bOverwriteExistingOutput_MetaData), Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_bOverride_bOverwriteExistingOutput_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_bOverride_ZeroPadFrameNumbers_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Nodes/MovieGraphOutputSettingNode.h" },
	};
#endif
	void Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_bOverride_ZeroPadFrameNumbers_SetBit(void* Obj)
	{
		((UMovieGraphOutputSettingNode*)Obj)->bOverride_ZeroPadFrameNumbers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_bOverride_ZeroPadFrameNumbers = { "bOverride_ZeroPadFrameNumbers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMovieGraphOutputSettingNode), &Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_bOverride_ZeroPadFrameNumbers_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_bOverride_ZeroPadFrameNumbers_MetaData), Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_bOverride_ZeroPadFrameNumbers_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_bOverride_FrameNumberOffset_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Nodes/MovieGraphOutputSettingNode.h" },
	};
#endif
	void Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_bOverride_FrameNumberOffset_SetBit(void* Obj)
	{
		((UMovieGraphOutputSettingNode*)Obj)->bOverride_FrameNumberOffset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_bOverride_FrameNumberOffset = { "bOverride_FrameNumberOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMovieGraphOutputSettingNode), &Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_bOverride_FrameNumberOffset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_bOverride_FrameNumberOffset_MetaData), Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_bOverride_FrameNumberOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_OutputDirectory_MetaData[] = {
		{ "Category", "File Output" },
		{ "Comment", "/** What directory should all of our output files be relative to. */" },
		{ "EditCondition", "bOverride_OutputDirectory" },
		{ "ModuleRelativePath", "Public/Graph/Nodes/MovieGraphOutputSettingNode.h" },
		{ "ToolTip", "What directory should all of our output files be relative to." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_OutputDirectory = { "OutputDirectory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieGraphOutputSettingNode, OutputDirectory), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_OutputDirectory_MetaData), Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_OutputDirectory_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_FileNameFormat_MetaData[] = {
		{ "Category", "File Output" },
		{ "Comment", "/** What format string should the final files use? Can include folder prefixes, and format string ({shot_name}, etc.) */" },
		{ "EditCondition", "bOverride_FileNameFormat" },
		{ "ModuleRelativePath", "Public/Graph/Nodes/MovieGraphOutputSettingNode.h" },
		{ "ToolTip", "What format string should the final files use? Can include folder prefixes, and format string ({shot_name}, etc.)" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_FileNameFormat = { "FileNameFormat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieGraphOutputSettingNode, FileNameFormat), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_FileNameFormat_MetaData), Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_FileNameFormat_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_OutputResolution_MetaData[] = {
		{ "Category", "File Output" },
		{ "Comment", "/** What resolution should our output files be exported at? */" },
		{ "EditCondition", "bOverride_OutputResolution" },
		{ "ModuleRelativePath", "Public/Graph/Nodes/MovieGraphOutputSettingNode.h" },
		{ "ToolTip", "What resolution should our output files be exported at?" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_OutputResolution = { "OutputResolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieGraphOutputSettingNode, OutputResolution), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_OutputResolution_MetaData), Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_OutputResolution_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_OutputFrameRate_MetaData[] = {
		{ "Category", "File Output" },
		{ "Comment", "/** What frame rate should the output files be exported at? This overrides the Display Rate of the target sequence. If not overwritten, uses the default Sequence Display Rate. */" },
		{ "EditCondition", "bOverride_OutputFrameRate" },
		{ "ModuleRelativePath", "Public/Graph/Nodes/MovieGraphOutputSettingNode.h" },
		{ "ToolTip", "What frame rate should the output files be exported at? This overrides the Display Rate of the target sequence. If not overwritten, uses the default Sequence Display Rate." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_OutputFrameRate = { "OutputFrameRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieGraphOutputSettingNode, OutputFrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_OutputFrameRate_MetaData), Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_OutputFrameRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_bOverwriteExistingOutput_MetaData[] = {
		{ "Category", "File Output" },
		{ "Comment", "/** If true, output containers should attempt to override any existing files with the same name. */" },
		{ "EditCondition", "bOverride_bOverwriteExistingOutput" },
		{ "ModuleRelativePath", "Public/Graph/Nodes/MovieGraphOutputSettingNode.h" },
		{ "ToolTip", "If true, output containers should attempt to override any existing files with the same name." },
	};
#endif
	void Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_bOverwriteExistingOutput_SetBit(void* Obj)
	{
		((UMovieGraphOutputSettingNode*)Obj)->bOverwriteExistingOutput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_bOverwriteExistingOutput = { "bOverwriteExistingOutput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMovieGraphOutputSettingNode), &Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_bOverwriteExistingOutput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_bOverwriteExistingOutput_MetaData), Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_bOverwriteExistingOutput_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_ZeroPadFrameNumbers_MetaData[] = {
		{ "Category", "File Output" },
		{ "ClampMin", "1" },
		{ "Comment", "/** How many digits should all output frame numbers be padded to? MySequence_1.png -> MySequence_0001.png. Useful for software that struggles to recognize frame ranges when non-padded. */" },
		{ "EditCondition", "bOverride_ZeroPadFrameNumbers" },
		{ "ModuleRelativePath", "Public/Graph/Nodes/MovieGraphOutputSettingNode.h" },
		{ "ToolTip", "How many digits should all output frame numbers be padded to? MySequence_1.png -> MySequence_0001.png. Useful for software that struggles to recognize frame ranges when non-padded." },
		{ "UIMax", "5" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_ZeroPadFrameNumbers = { "ZeroPadFrameNumbers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieGraphOutputSettingNode, ZeroPadFrameNumbers), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_ZeroPadFrameNumbers_MetaData), Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_ZeroPadFrameNumbers_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_FrameNumberOffset_MetaData[] = {
		{ "Category", "File Output" },
		{ "Comment", "/**\n\x09* How many frames should we offset the output frame number by? This is useful when using handle frames on Sequences that start at frame 0,\n\x09* as the output would start in negative numbers. This can be used to offset by a fixed amount to ensure there's no negative numbers.\n\x09*/" },
		{ "EditCondition", "bOverride_FrameNumberOffset" },
		{ "ModuleRelativePath", "Public/Graph/Nodes/MovieGraphOutputSettingNode.h" },
		{ "ToolTip", "How many frames should we offset the output frame number by? This is useful when using handle frames on Sequences that start at frame 0,\nas the output would start in negative numbers. This can be used to offset by a fixed amount to ensure there's no negative numbers." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_FrameNumberOffset = { "FrameNumberOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieGraphOutputSettingNode, FrameNumberOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_FrameNumberOffset_MetaData), Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_FrameNumberOffset_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_bOverride_OutputDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_bOverride_FileNameFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_bOverride_OutputResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_bOverride_OutputFrameRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_bOverride_bOverwriteExistingOutput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_bOverride_ZeroPadFrameNumbers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_bOverride_FrameNumberOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_OutputDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_FileNameFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_OutputResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_OutputFrameRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_bOverwriteExistingOutput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_ZeroPadFrameNumbers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::NewProp_FrameNumberOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieGraphOutputSettingNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::ClassParams = {
		&UMovieGraphOutputSettingNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMovieGraphOutputSettingNode()
	{
		if (!Z_Registration_Info_UClass_UMovieGraphOutputSettingNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieGraphOutputSettingNode.OuterSingleton, Z_Construct_UClass_UMovieGraphOutputSettingNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieGraphOutputSettingNode.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMovieGraphOutputSettingNode>()
	{
		return UMovieGraphOutputSettingNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieGraphOutputSettingNode);
	UMovieGraphOutputSettingNode::~UMovieGraphOutputSettingNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphOutputSettingNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphOutputSettingNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieGraphOutputSettingNode, UMovieGraphOutputSettingNode::StaticClass, TEXT("UMovieGraphOutputSettingNode"), &Z_Registration_Info_UClass_UMovieGraphOutputSettingNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieGraphOutputSettingNode), 3928060831U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphOutputSettingNode_h_1879556626(TEXT("/Script/MovieRenderPipelineCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphOutputSettingNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphOutputSettingNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
