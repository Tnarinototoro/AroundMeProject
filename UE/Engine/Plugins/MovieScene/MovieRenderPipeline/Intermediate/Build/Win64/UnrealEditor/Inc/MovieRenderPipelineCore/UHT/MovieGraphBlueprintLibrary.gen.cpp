// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/MovieGraphBlueprintLibrary.h"
#include "Graph/MovieGraphFilenameResolveParams.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieGraphBlueprintLibrary() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphBlueprintLibrary();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphBlueprintLibrary_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphEvaluatedConfig_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphOutputSettingNode_NoRegister();
	MOVIERENDERPIPELINECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams();
	MOVIERENDERPIPELINECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieGraphResolveArgs();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
// End Cross Module References
	DEFINE_FUNCTION(UMovieGraphBlueprintLibrary::execGetEffectiveOutputResolution)
	{
		P_GET_OBJECT(UMovieGraphEvaluatedConfig,Z_Param_InEvaluatedGraph);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InBranchName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntPoint*)Z_Param__Result=UMovieGraphBlueprintLibrary::GetEffectiveOutputResolution(Z_Param_InEvaluatedGraph,Z_Param_Out_InBranchName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieGraphBlueprintLibrary::execResolveFilenameFormatArguments)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InFormatString);
		P_GET_STRUCT_REF(FMovieGraphFilenameResolveParams,Z_Param_Out_InParams);
		P_GET_STRUCT_REF(FMovieGraphResolveArgs,Z_Param_Out_OutMergedFormatArgs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UMovieGraphBlueprintLibrary::ResolveFilenameFormatArguments(Z_Param_InFormatString,Z_Param_Out_InParams,Z_Param_Out_OutMergedFormatArgs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieGraphBlueprintLibrary::execGetEffectiveFrameRate)
	{
		P_GET_OBJECT(UMovieGraphOutputSettingNode,Z_Param_InNode);
		P_GET_STRUCT_REF(FFrameRate,Z_Param_Out_InDefaultRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFrameRate*)Z_Param__Result=UMovieGraphBlueprintLibrary::GetEffectiveFrameRate(Z_Param_InNode,Z_Param_Out_InDefaultRate);
		P_NATIVE_END;
	}
	void UMovieGraphBlueprintLibrary::StaticRegisterNativesUMovieGraphBlueprintLibrary()
	{
		UClass* Class = UMovieGraphBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEffectiveFrameRate", &UMovieGraphBlueprintLibrary::execGetEffectiveFrameRate },
			{ "GetEffectiveOutputResolution", &UMovieGraphBlueprintLibrary::execGetEffectiveOutputResolution },
			{ "ResolveFilenameFormatArguments", &UMovieGraphBlueprintLibrary::execResolveFilenameFormatArguments },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetEffectiveFrameRate_Statics
	{
		struct FFrameRate
		{
			int32 Numerator;
			int32 Denominator;
		};

		struct MovieGraphBlueprintLibrary_eventGetEffectiveFrameRate_Parms
		{
			UMovieGraphOutputSettingNode* InNode;
			FFrameRate InDefaultRate;
			FFrameRate ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDefaultRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InDefaultRate;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetEffectiveFrameRate_Statics::NewProp_InNode = { "InNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieGraphBlueprintLibrary_eventGetEffectiveFrameRate_Parms, InNode), Z_Construct_UClass_UMovieGraphOutputSettingNode_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetEffectiveFrameRate_Statics::NewProp_InDefaultRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetEffectiveFrameRate_Statics::NewProp_InDefaultRate = { "InDefaultRate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieGraphBlueprintLibrary_eventGetEffectiveFrameRate_Parms, InDefaultRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetEffectiveFrameRate_Statics::NewProp_InDefaultRate_MetaData), Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetEffectiveFrameRate_Statics::NewProp_InDefaultRate_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetEffectiveFrameRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieGraphBlueprintLibrary_eventGetEffectiveFrameRate_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetEffectiveFrameRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetEffectiveFrameRate_Statics::NewProp_InNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetEffectiveFrameRate_Statics::NewProp_InDefaultRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetEffectiveFrameRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetEffectiveFrameRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Graph" },
		{ "Comment", "/**\n\x09* If InNode is valid, inspects the provided OutputsettingNode to determine if it wants to override the\n\x09* Frame Rate, and if so, returns the overwritten frame rate. If nullptr, or it does not have the\n\x09* bOverride_bUseCustomFrameRate flag set, then InDefaultrate is returned.\n\x09* @param\x09InNode\x09\x09\x09- Optional, setting to inspect for a custom framerate.\n\x09* @param\x09InDefaultRate\x09- The frame rate to use if the node is nullptr or doesn't want to override the rate.\n\x09* @return\x09\x09\x09\x09\x09- The effective frame rate (taking into account the node's desire to override it). \n\x09*/" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphBlueprintLibrary.h" },
		{ "ToolTip", "If InNode is valid, inspects the provided OutputsettingNode to determine if it wants to override the\nFrame Rate, and if so, returns the overwritten frame rate. If nullptr, or it does not have the\nbOverride_bUseCustomFrameRate flag set, then InDefaultrate is returned.\n@param        InNode                  - Optional, setting to inspect for a custom framerate.\n@param        InDefaultRate   - The frame rate to use if the node is nullptr or doesn't want to override the rate.\n@return                                       - The effective frame rate (taking into account the node's desire to override it)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetEffectiveFrameRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieGraphBlueprintLibrary, nullptr, "GetEffectiveFrameRate", nullptr, nullptr, Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetEffectiveFrameRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetEffectiveFrameRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetEffectiveFrameRate_Statics::MovieGraphBlueprintLibrary_eventGetEffectiveFrameRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetEffectiveFrameRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetEffectiveFrameRate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetEffectiveFrameRate_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetEffectiveFrameRate_Statics::MovieGraphBlueprintLibrary_eventGetEffectiveFrameRate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetEffectiveFrameRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetEffectiveFrameRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetEffectiveOutputResolution_Statics
	{
		struct MovieGraphBlueprintLibrary_eventGetEffectiveOutputResolution_Parms
		{
			UMovieGraphEvaluatedConfig* InEvaluatedGraph;
			FName InBranchName;
			FIntPoint ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InEvaluatedGraph;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBranchName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InBranchName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetEffectiveOutputResolution_Statics::NewProp_InEvaluatedGraph = { "InEvaluatedGraph", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieGraphBlueprintLibrary_eventGetEffectiveOutputResolution_Parms, InEvaluatedGraph), Z_Construct_UClass_UMovieGraphEvaluatedConfig_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetEffectiveOutputResolution_Statics::NewProp_InBranchName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetEffectiveOutputResolution_Statics::NewProp_InBranchName = { "InBranchName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieGraphBlueprintLibrary_eventGetEffectiveOutputResolution_Parms, InBranchName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetEffectiveOutputResolution_Statics::NewProp_InBranchName_MetaData), Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetEffectiveOutputResolution_Statics::NewProp_InBranchName_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetEffectiveOutputResolution_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieGraphBlueprintLibrary_eventGetEffectiveOutputResolution_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetEffectiveOutputResolution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetEffectiveOutputResolution_Statics::NewProp_InEvaluatedGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetEffectiveOutputResolution_Statics::NewProp_InBranchName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetEffectiveOutputResolution_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetEffectiveOutputResolution_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Graph" },
		{ "Comment", "/**\n\x09* In case of overscan percentage being higher than 0, additional pixels are rendered. This function returns the resolution with overscan taken into account.\n\x09* @param\x09InEvaluatedGraph\x09- The evaluated graph that will provide context for resolving the resolution\n\x09* @param\x09InBranchName\x09\x09- The graph branch that the output resolution should be resolved on\n\x09* @return\x09\x09\x09\x09\x09\x09- The output resolution, taking into account overscan\n\x09*/" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphBlueprintLibrary.h" },
		{ "ToolTip", "In case of overscan percentage being higher than 0, additional pixels are rendered. This function returns the resolution with overscan taken into account.\n@param        InEvaluatedGraph        - The evaluated graph that will provide context for resolving the resolution\n@param        InBranchName            - The graph branch that the output resolution should be resolved on\n@return                                               - The output resolution, taking into account overscan" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetEffectiveOutputResolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieGraphBlueprintLibrary, nullptr, "GetEffectiveOutputResolution", nullptr, nullptr, Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetEffectiveOutputResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetEffectiveOutputResolution_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetEffectiveOutputResolution_Statics::MovieGraphBlueprintLibrary_eventGetEffectiveOutputResolution_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetEffectiveOutputResolution_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetEffectiveOutputResolution_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetEffectiveOutputResolution_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetEffectiveOutputResolution_Statics::MovieGraphBlueprintLibrary_eventGetEffectiveOutputResolution_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetEffectiveOutputResolution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetEffectiveOutputResolution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieGraphBlueprintLibrary_ResolveFilenameFormatArguments_Statics
	{
		struct MovieGraphBlueprintLibrary_eventResolveFilenameFormatArguments_Parms
		{
			FString InFormatString;
			FMovieGraphFilenameResolveParams InParams;
			FMovieGraphResolveArgs OutMergedFormatArgs;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InFormatString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InFormatString;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InParams;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutMergedFormatArgs;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieGraphBlueprintLibrary_ResolveFilenameFormatArguments_Statics::NewProp_InFormatString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMovieGraphBlueprintLibrary_ResolveFilenameFormatArguments_Statics::NewProp_InFormatString = { "InFormatString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieGraphBlueprintLibrary_eventResolveFilenameFormatArguments_Parms, InFormatString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphBlueprintLibrary_ResolveFilenameFormatArguments_Statics::NewProp_InFormatString_MetaData), Z_Construct_UFunction_UMovieGraphBlueprintLibrary_ResolveFilenameFormatArguments_Statics::NewProp_InFormatString_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieGraphBlueprintLibrary_ResolveFilenameFormatArguments_Statics::NewProp_InParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieGraphBlueprintLibrary_ResolveFilenameFormatArguments_Statics::NewProp_InParams = { "InParams", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieGraphBlueprintLibrary_eventResolveFilenameFormatArguments_Parms, InParams), Z_Construct_UScriptStruct_FMovieGraphFilenameResolveParams, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphBlueprintLibrary_ResolveFilenameFormatArguments_Statics::NewProp_InParams_MetaData), Z_Construct_UFunction_UMovieGraphBlueprintLibrary_ResolveFilenameFormatArguments_Statics::NewProp_InParams_MetaData) }; // 2511621848
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieGraphBlueprintLibrary_ResolveFilenameFormatArguments_Statics::NewProp_OutMergedFormatArgs = { "OutMergedFormatArgs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieGraphBlueprintLibrary_eventResolveFilenameFormatArguments_Parms, OutMergedFormatArgs), Z_Construct_UScriptStruct_FMovieGraphResolveArgs, METADATA_PARAMS(0, nullptr) }; // 943648860
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMovieGraphBlueprintLibrary_ResolveFilenameFormatArguments_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieGraphBlueprintLibrary_eventResolveFilenameFormatArguments_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieGraphBlueprintLibrary_ResolveFilenameFormatArguments_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphBlueprintLibrary_ResolveFilenameFormatArguments_Statics::NewProp_InFormatString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphBlueprintLibrary_ResolveFilenameFormatArguments_Statics::NewProp_InParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphBlueprintLibrary_ResolveFilenameFormatArguments_Statics::NewProp_OutMergedFormatArgs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphBlueprintLibrary_ResolveFilenameFormatArguments_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieGraphBlueprintLibrary_ResolveFilenameFormatArguments_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Graph" },
		{ "Comment", "/**\n\x09* Takes a Movie Graph format string (in the form of {token}), a list of parameters (which normally come from the running UMovieGraphPipeline) and\n\x09* resolves them into a string. Unknown tokens are ignored. Which tokens can be resolved depends on the contents of InParams, tokens from settings\n\x09* rely on a evaluated config being provided, etc.\n\x09* @param\x09InFormatString\x09\x09- Format string to attempt to resolve.\n\x09* @param\x09InParams\x09\x09\x09- A list of parameters to use as source data for the resolve step. Normally comes from the UMovieGraphPipeline instance,\n\x09*\x09\x09\x09\x09\x09\x09\x09\x09- but takes (mostly) POD here to allow using this function outside of the render runtime.\n\x09* @param\x09OutMergedFormatArgs - The set of KVP for both filename formats and file metadata that is generated as a result of this. Provided in case you\n\x09* \x09\x09\x09\x09\x09\x09\x09\x09- needed to do your own string resolving with the final dataset.\n\x09* @return\x09\x09\x09\x09\x09\x09- The resolved format string.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphBlueprintLibrary.h" },
		{ "ToolTip", "Takes a Movie Graph format string (in the form of {token}), a list of parameters (which normally come from the running UMovieGraphPipeline) and\nresolves them into a string. Unknown tokens are ignored. Which tokens can be resolved depends on the contents of InParams, tokens from settings\nrely on a evaluated config being provided, etc.\n@param        InFormatString          - Format string to attempt to resolve.\n@param        InParams                        - A list of parameters to use as source data for the resolve step. Normally comes from the UMovieGraphPipeline instance,\n                                                              - but takes (mostly) POD here to allow using this function outside of the render runtime.\n@param        OutMergedFormatArgs - The set of KVP for both filename formats and file metadata that is generated as a result of this. Provided in case you\n                                                              - needed to do your own string resolving with the final dataset.\n@return                                               - The resolved format string." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieGraphBlueprintLibrary_ResolveFilenameFormatArguments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieGraphBlueprintLibrary, nullptr, "ResolveFilenameFormatArguments", nullptr, nullptr, Z_Construct_UFunction_UMovieGraphBlueprintLibrary_ResolveFilenameFormatArguments_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphBlueprintLibrary_ResolveFilenameFormatArguments_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieGraphBlueprintLibrary_ResolveFilenameFormatArguments_Statics::MovieGraphBlueprintLibrary_eventResolveFilenameFormatArguments_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphBlueprintLibrary_ResolveFilenameFormatArguments_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieGraphBlueprintLibrary_ResolveFilenameFormatArguments_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphBlueprintLibrary_ResolveFilenameFormatArguments_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieGraphBlueprintLibrary_ResolveFilenameFormatArguments_Statics::MovieGraphBlueprintLibrary_eventResolveFilenameFormatArguments_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieGraphBlueprintLibrary_ResolveFilenameFormatArguments()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieGraphBlueprintLibrary_ResolveFilenameFormatArguments_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieGraphBlueprintLibrary);
	UClass* Z_Construct_UClass_UMovieGraphBlueprintLibrary_NoRegister()
	{
		return UMovieGraphBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMovieGraphBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieGraphBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphBlueprintLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovieGraphBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetEffectiveFrameRate, "GetEffectiveFrameRate" }, // 2989609355
		{ &Z_Construct_UFunction_UMovieGraphBlueprintLibrary_GetEffectiveOutputResolution, "GetEffectiveOutputResolution" }, // 1460237530
		{ &Z_Construct_UFunction_UMovieGraphBlueprintLibrary_ResolveFilenameFormatArguments, "ResolveFilenameFormatArguments" }, // 4219241977
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphBlueprintLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graph/MovieGraphBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphBlueprintLibrary.h" },
		{ "ScriptName", "MovieGraphLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieGraphBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieGraphBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieGraphBlueprintLibrary_Statics::ClassParams = {
		&UMovieGraphBlueprintLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieGraphBlueprintLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMovieGraphBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UMovieGraphBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieGraphBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UMovieGraphBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieGraphBlueprintLibrary.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMovieGraphBlueprintLibrary>()
	{
		return UMovieGraphBlueprintLibrary::StaticClass();
	}
	UMovieGraphBlueprintLibrary::UMovieGraphBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieGraphBlueprintLibrary);
	UMovieGraphBlueprintLibrary::~UMovieGraphBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphBlueprintLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieGraphBlueprintLibrary, UMovieGraphBlueprintLibrary::StaticClass, TEXT("UMovieGraphBlueprintLibrary"), &Z_Registration_Info_UClass_UMovieGraphBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieGraphBlueprintLibrary), 3682538275U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphBlueprintLibrary_h_1806073733(TEXT("/Script/MovieRenderPipelineCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphBlueprintLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
