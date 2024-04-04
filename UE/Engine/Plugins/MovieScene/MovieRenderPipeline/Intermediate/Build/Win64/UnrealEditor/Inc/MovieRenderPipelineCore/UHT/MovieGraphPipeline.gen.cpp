// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/MovieGraphPipeline.h"
#include "Graph/MovieGraphDataTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieGraphPipeline() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphDataSourceBase_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphFileOutputNode_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphPipeline();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphPipeline_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphRendererBase_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphTimeStepBase_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineBase();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineExecutorJob_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineExecutorShot_NoRegister();
	MOVIERENDERPIPELINECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieGraphInitConfig();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
// End Cross Module References
	DEFINE_FUNCTION(UMovieGraphPipeline::execOnMoviePipelineFinishedImpl)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMoviePipelineFinishedImpl();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieGraphPipeline::execSetInitializationTime)
	{
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out_InDateTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInitializationTime(Z_Param_Out_InDateTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieGraphPipeline::execGetInitializationTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDateTime*)Z_Param__Result=P_THIS->GetInitializationTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieGraphPipeline::execGetCurrentJob)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMoviePipelineExecutorJob**)Z_Param__Result=P_THIS->GetCurrentJob();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieGraphPipeline::execInitialize)
	{
		P_GET_OBJECT(UMoviePipelineExecutorJob,Z_Param_InJob);
		P_GET_STRUCT_REF(FMovieGraphInitConfig,Z_Param_Out_InitConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Initialize(Z_Param_InJob,Z_Param_Out_InitConfig);
		P_NATIVE_END;
	}
	void UMovieGraphPipeline::StaticRegisterNativesUMovieGraphPipeline()
	{
		UClass* Class = UMovieGraphPipeline::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentJob", &UMovieGraphPipeline::execGetCurrentJob },
			{ "GetInitializationTime", &UMovieGraphPipeline::execGetInitializationTime },
			{ "Initialize", &UMovieGraphPipeline::execInitialize },
			{ "OnMoviePipelineFinishedImpl", &UMovieGraphPipeline::execOnMoviePipelineFinishedImpl },
			{ "SetInitializationTime", &UMovieGraphPipeline::execSetInitializationTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMovieGraphPipeline_GetCurrentJob_Statics
	{
		struct MovieGraphPipeline_eventGetCurrentJob_Parms
		{
			UMoviePipelineExecutorJob* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieGraphPipeline_GetCurrentJob_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieGraphPipeline_eventGetCurrentJob_Parms, ReturnValue), Z_Construct_UClass_UMoviePipelineExecutorJob_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieGraphPipeline_GetCurrentJob_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphPipeline_GetCurrentJob_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieGraphPipeline_GetCurrentJob_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Graph" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphPipeline.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieGraphPipeline_GetCurrentJob_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieGraphPipeline, nullptr, "GetCurrentJob", nullptr, nullptr, Z_Construct_UFunction_UMovieGraphPipeline_GetCurrentJob_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphPipeline_GetCurrentJob_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieGraphPipeline_GetCurrentJob_Statics::MovieGraphPipeline_eventGetCurrentJob_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphPipeline_GetCurrentJob_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieGraphPipeline_GetCurrentJob_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphPipeline_GetCurrentJob_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieGraphPipeline_GetCurrentJob_Statics::MovieGraphPipeline_eventGetCurrentJob_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieGraphPipeline_GetCurrentJob()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieGraphPipeline_GetCurrentJob_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieGraphPipeline_GetInitializationTime_Statics
	{
		struct MovieGraphPipeline_eventGetInitializationTime_Parms
		{
			FDateTime ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieGraphPipeline_GetInitializationTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieGraphPipeline_eventGetInitializationTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieGraphPipeline_GetInitializationTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphPipeline_GetInitializationTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieGraphPipeline_GetInitializationTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Graph" },
		{ "Comment", "/**\n\x09* Returns the time this movie pipeline was initialized at.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphPipeline.h" },
		{ "ToolTip", "Returns the time this movie pipeline was initialized at." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieGraphPipeline_GetInitializationTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieGraphPipeline, nullptr, "GetInitializationTime", nullptr, nullptr, Z_Construct_UFunction_UMovieGraphPipeline_GetInitializationTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphPipeline_GetInitializationTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieGraphPipeline_GetInitializationTime_Statics::MovieGraphPipeline_eventGetInitializationTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphPipeline_GetInitializationTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieGraphPipeline_GetInitializationTime_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphPipeline_GetInitializationTime_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieGraphPipeline_GetInitializationTime_Statics::MovieGraphPipeline_eventGetInitializationTime_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieGraphPipeline_GetInitializationTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieGraphPipeline_GetInitializationTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieGraphPipeline_Initialize_Statics
	{
		struct MovieGraphPipeline_eventInitialize_Parms
		{
			UMoviePipelineExecutorJob* InJob;
			FMovieGraphInitConfig InitConfig;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InJob;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InitConfig;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieGraphPipeline_Initialize_Statics::NewProp_InJob = { "InJob", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieGraphPipeline_eventInitialize_Parms, InJob), Z_Construct_UClass_UMoviePipelineExecutorJob_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieGraphPipeline_Initialize_Statics::NewProp_InitConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieGraphPipeline_Initialize_Statics::NewProp_InitConfig = { "InitConfig", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieGraphPipeline_eventInitialize_Parms, InitConfig), Z_Construct_UScriptStruct_FMovieGraphInitConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphPipeline_Initialize_Statics::NewProp_InitConfig_MetaData), Z_Construct_UFunction_UMovieGraphPipeline_Initialize_Statics::NewProp_InitConfig_MetaData) }; // 1063095739
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieGraphPipeline_Initialize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphPipeline_Initialize_Statics::NewProp_InJob,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphPipeline_Initialize_Statics::NewProp_InitConfig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieGraphPipeline_Initialize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Graph" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphPipeline.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieGraphPipeline_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieGraphPipeline, nullptr, "Initialize", nullptr, nullptr, Z_Construct_UFunction_UMovieGraphPipeline_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphPipeline_Initialize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieGraphPipeline_Initialize_Statics::MovieGraphPipeline_eventInitialize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphPipeline_Initialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieGraphPipeline_Initialize_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphPipeline_Initialize_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieGraphPipeline_Initialize_Statics::MovieGraphPipeline_eventInitialize_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieGraphPipeline_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieGraphPipeline_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieGraphPipeline_OnMoviePipelineFinishedImpl_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieGraphPipeline_OnMoviePipelineFinishedImpl_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphPipeline.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieGraphPipeline_OnMoviePipelineFinishedImpl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieGraphPipeline, nullptr, "OnMoviePipelineFinishedImpl", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphPipeline_OnMoviePipelineFinishedImpl_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieGraphPipeline_OnMoviePipelineFinishedImpl_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMovieGraphPipeline_OnMoviePipelineFinishedImpl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieGraphPipeline_OnMoviePipelineFinishedImpl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieGraphPipeline_SetInitializationTime_Statics
	{
		struct MovieGraphPipeline_eventSetInitializationTime_Parms
		{
			FDateTime InDateTime;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDateTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InDateTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieGraphPipeline_SetInitializationTime_Statics::NewProp_InDateTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieGraphPipeline_SetInitializationTime_Statics::NewProp_InDateTime = { "InDateTime", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieGraphPipeline_eventSetInitializationTime_Parms, InDateTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphPipeline_SetInitializationTime_Statics::NewProp_InDateTime_MetaData), Z_Construct_UFunction_UMovieGraphPipeline_SetInitializationTime_Statics::NewProp_InDateTime_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieGraphPipeline_SetInitializationTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphPipeline_SetInitializationTime_Statics::NewProp_InDateTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieGraphPipeline_SetInitializationTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09* Override the time this movie pipeline was initialized at. This can be used for render farms\n\x09* to ensure that jobs on all machines use the same date/time instead of each calculating it locally.\n\x09*\n\x09* Needs to be called after ::Initialize(...)\n\x09*\n\x09* @param InDateTime - The DateTime object to return for GetInitializationTime.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphPipeline.h" },
		{ "ToolTip", "Override the time this movie pipeline was initialized at. This can be used for render farms\nto ensure that jobs on all machines use the same date/time instead of each calculating it locally.\n\nNeeds to be called after ::Initialize(...)\n\n@param InDateTime - The DateTime object to return for GetInitializationTime." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieGraphPipeline_SetInitializationTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieGraphPipeline, nullptr, "SetInitializationTime", nullptr, nullptr, Z_Construct_UFunction_UMovieGraphPipeline_SetInitializationTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphPipeline_SetInitializationTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieGraphPipeline_SetInitializationTime_Statics::MovieGraphPipeline_eventSetInitializationTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphPipeline_SetInitializationTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieGraphPipeline_SetInitializationTime_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphPipeline_SetInitializationTime_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMovieGraphPipeline_SetInitializationTime_Statics::MovieGraphPipeline_eventSetInitializationTime_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieGraphPipeline_SetInitializationTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieGraphPipeline_SetInitializationTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieGraphPipeline);
	UClass* Z_Construct_UClass_UMovieGraphPipeline_NoRegister()
	{
		return UMovieGraphPipeline::StaticClass();
	}
	struct Z_Construct_UClass_UMovieGraphPipeline_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GraphTimeStepInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GraphTimeStepInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GraphRendererInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GraphRendererInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GraphDataSourceInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GraphDataSourceInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentJob_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CurrentJob;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActiveShotList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveShotList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveShotList;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OutputNodesDataSentTo_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputNodesDataSentTo_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_OutputNodesDataSentTo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieGraphPipeline_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMoviePipelineBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphPipeline_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovieGraphPipeline_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieGraphPipeline_GetCurrentJob, "GetCurrentJob" }, // 3913083753
		{ &Z_Construct_UFunction_UMovieGraphPipeline_GetInitializationTime, "GetInitializationTime" }, // 3193096951
		{ &Z_Construct_UFunction_UMovieGraphPipeline_Initialize, "Initialize" }, // 1890564061
		{ &Z_Construct_UFunction_UMovieGraphPipeline_OnMoviePipelineFinishedImpl, "OnMoviePipelineFinishedImpl" }, // 3336980007
		{ &Z_Construct_UFunction_UMovieGraphPipeline_SetInitializationTime, "SetInitializationTime" }, // 2135076912
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphPipeline_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphPipeline_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Graph/MovieGraphPipeline.h" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphPipeline.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphPipeline_Statics::NewProp_GraphTimeStepInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/MovieGraphPipeline.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieGraphPipeline_Statics::NewProp_GraphTimeStepInstance = { "GraphTimeStepInstance", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieGraphPipeline, GraphTimeStepInstance), Z_Construct_UClass_UMovieGraphTimeStepBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphPipeline_Statics::NewProp_GraphTimeStepInstance_MetaData), Z_Construct_UClass_UMovieGraphPipeline_Statics::NewProp_GraphTimeStepInstance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphPipeline_Statics::NewProp_GraphRendererInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/MovieGraphPipeline.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieGraphPipeline_Statics::NewProp_GraphRendererInstance = { "GraphRendererInstance", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieGraphPipeline, GraphRendererInstance), Z_Construct_UClass_UMovieGraphRendererBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphPipeline_Statics::NewProp_GraphRendererInstance_MetaData), Z_Construct_UClass_UMovieGraphPipeline_Statics::NewProp_GraphRendererInstance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphPipeline_Statics::NewProp_GraphDataSourceInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/MovieGraphPipeline.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieGraphPipeline_Statics::NewProp_GraphDataSourceInstance = { "GraphDataSourceInstance", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieGraphPipeline, GraphDataSourceInstance), Z_Construct_UClass_UMovieGraphDataSourceBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphPipeline_Statics::NewProp_GraphDataSourceInstance_MetaData), Z_Construct_UClass_UMovieGraphPipeline_Statics::NewProp_GraphDataSourceInstance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphPipeline_Statics::NewProp_CurrentJob_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/MovieGraphPipeline.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieGraphPipeline_Statics::NewProp_CurrentJob = { "CurrentJob", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieGraphPipeline, CurrentJob), Z_Construct_UClass_UMoviePipelineExecutorJob_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphPipeline_Statics::NewProp_CurrentJob_MetaData), Z_Construct_UClass_UMovieGraphPipeline_Statics::NewProp_CurrentJob_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieGraphPipeline_Statics::NewProp_ActiveShotList_Inner = { "ActiveShotList", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMoviePipelineExecutorShot_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphPipeline_Statics::NewProp_ActiveShotList_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/MovieGraphPipeline.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieGraphPipeline_Statics::NewProp_ActiveShotList = { "ActiveShotList", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieGraphPipeline, ActiveShotList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphPipeline_Statics::NewProp_ActiveShotList_MetaData), Z_Construct_UClass_UMovieGraphPipeline_Statics::NewProp_ActiveShotList_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieGraphPipeline_Statics::NewProp_OutputNodesDataSentTo_ElementProp = { "OutputNodesDataSentTo", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMovieGraphFileOutputNode_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphPipeline_Statics::NewProp_OutputNodesDataSentTo_MetaData[] = {
		{ "Comment", "/**\n\x09* An array of Node CDOs that we sent data through to write data to disk.\n\x09* This is the list of output nodes that will have OnAllFramesSubmitted/IsFinishedWritingToDisk\n\x09* on them.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphPipeline.h" },
		{ "ToolTip", "An array of Node CDOs that we sent data through to write data to disk.\nThis is the list of output nodes that will have OnAllFramesSubmitted/IsFinishedWritingToDisk\non them." },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UMovieGraphPipeline_Statics::NewProp_OutputNodesDataSentTo = { "OutputNodesDataSentTo", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieGraphPipeline, OutputNodesDataSentTo), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphPipeline_Statics::NewProp_OutputNodesDataSentTo_MetaData), Z_Construct_UClass_UMovieGraphPipeline_Statics::NewProp_OutputNodesDataSentTo_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieGraphPipeline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphPipeline_Statics::NewProp_GraphTimeStepInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphPipeline_Statics::NewProp_GraphRendererInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphPipeline_Statics::NewProp_GraphDataSourceInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphPipeline_Statics::NewProp_CurrentJob,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphPipeline_Statics::NewProp_ActiveShotList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphPipeline_Statics::NewProp_ActiveShotList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphPipeline_Statics::NewProp_OutputNodesDataSentTo_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphPipeline_Statics::NewProp_OutputNodesDataSentTo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieGraphPipeline_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieGraphPipeline>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieGraphPipeline_Statics::ClassParams = {
		&UMovieGraphPipeline::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMovieGraphPipeline_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphPipeline_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphPipeline_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieGraphPipeline_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphPipeline_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMovieGraphPipeline()
	{
		if (!Z_Registration_Info_UClass_UMovieGraphPipeline.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieGraphPipeline.OuterSingleton, Z_Construct_UClass_UMovieGraphPipeline_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieGraphPipeline.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMovieGraphPipeline>()
	{
		return UMovieGraphPipeline::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieGraphPipeline);
	UMovieGraphPipeline::~UMovieGraphPipeline() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphPipeline_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphPipeline_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieGraphPipeline, UMovieGraphPipeline::StaticClass, TEXT("UMovieGraphPipeline"), &Z_Registration_Info_UClass_UMovieGraphPipeline, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieGraphPipeline), 1898971723U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphPipeline_h_867892257(TEXT("/Script/MovieRenderPipelineCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphPipeline_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphPipeline_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
