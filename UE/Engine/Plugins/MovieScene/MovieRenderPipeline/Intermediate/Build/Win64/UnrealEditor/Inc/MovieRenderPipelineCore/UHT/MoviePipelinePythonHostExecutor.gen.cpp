// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoviePipelinePythonHostExecutor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePipelinePythonHostExecutor() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineExecutorBase();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelinePythonHostExecutor();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelinePythonHostExecutor_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineQueue_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
// End Cross Module References
	DEFINE_FUNCTION(UMoviePipelinePythonHostExecutor::execGetLastLoadedWorld)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWorld**)Z_Param__Result=P_THIS->GetLastLoadedWorld();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelinePythonHostExecutor::execOnMapLoad)
	{
		P_GET_OBJECT(UWorld,Z_Param_InWorld);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMapLoad_Implementation(Z_Param_InWorld);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelinePythonHostExecutor::execExecuteDelayed)
	{
		P_GET_OBJECT(UMoviePipelineQueue,Z_Param_InPipelineQueue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecuteDelayed_Implementation(Z_Param_InPipelineQueue);
		P_NATIVE_END;
	}
	struct MoviePipelinePythonHostExecutor_eventExecuteDelayed_Parms
	{
		UMoviePipelineQueue* InPipelineQueue;
	};
	struct MoviePipelinePythonHostExecutor_eventOnMapLoad_Parms
	{
		UWorld* InWorld;
	};
	static FName NAME_UMoviePipelinePythonHostExecutor_ExecuteDelayed = FName(TEXT("ExecuteDelayed"));
	void UMoviePipelinePythonHostExecutor::ExecuteDelayed(UMoviePipelineQueue* InPipelineQueue)
	{
		MoviePipelinePythonHostExecutor_eventExecuteDelayed_Parms Parms;
		Parms.InPipelineQueue=InPipelineQueue;
		ProcessEvent(FindFunctionChecked(NAME_UMoviePipelinePythonHostExecutor_ExecuteDelayed),&Parms);
	}
	static FName NAME_UMoviePipelinePythonHostExecutor_OnMapLoad = FName(TEXT("OnMapLoad"));
	void UMoviePipelinePythonHostExecutor::OnMapLoad(UWorld* InWorld)
	{
		MoviePipelinePythonHostExecutor_eventOnMapLoad_Parms Parms;
		Parms.InWorld=InWorld;
		ProcessEvent(FindFunctionChecked(NAME_UMoviePipelinePythonHostExecutor_OnMapLoad),&Parms);
	}
	void UMoviePipelinePythonHostExecutor::StaticRegisterNativesUMoviePipelinePythonHostExecutor()
	{
		UClass* Class = UMoviePipelinePythonHostExecutor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecuteDelayed", &UMoviePipelinePythonHostExecutor::execExecuteDelayed },
			{ "GetLastLoadedWorld", &UMoviePipelinePythonHostExecutor::execGetLastLoadedWorld },
			{ "OnMapLoad", &UMoviePipelinePythonHostExecutor::execOnMapLoad },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMoviePipelinePythonHostExecutor_ExecuteDelayed_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InPipelineQueue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelinePythonHostExecutor_ExecuteDelayed_Statics::NewProp_InPipelineQueue = { "InPipelineQueue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoviePipelinePythonHostExecutor_eventExecuteDelayed_Parms, InPipelineQueue), Z_Construct_UClass_UMoviePipelineQueue_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelinePythonHostExecutor_ExecuteDelayed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelinePythonHostExecutor_ExecuteDelayed_Statics::NewProp_InPipelineQueue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelinePythonHostExecutor_ExecuteDelayed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "// Python/Blueprint API\n" },
		{ "ModuleRelativePath", "Public/MoviePipelinePythonHostExecutor.h" },
		{ "ToolTip", "Python/Blueprint API" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelinePythonHostExecutor_ExecuteDelayed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelinePythonHostExecutor, nullptr, "ExecuteDelayed", nullptr, nullptr, Z_Construct_UFunction_UMoviePipelinePythonHostExecutor_ExecuteDelayed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelinePythonHostExecutor_ExecuteDelayed_Statics::PropPointers), sizeof(MoviePipelinePythonHostExecutor_eventExecuteDelayed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelinePythonHostExecutor_ExecuteDelayed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoviePipelinePythonHostExecutor_ExecuteDelayed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelinePythonHostExecutor_ExecuteDelayed_Statics::PropPointers) < 2048);
	static_assert(sizeof(MoviePipelinePythonHostExecutor_eventExecuteDelayed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMoviePipelinePythonHostExecutor_ExecuteDelayed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelinePythonHostExecutor_ExecuteDelayed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelinePythonHostExecutor_GetLastLoadedWorld_Statics
	{
		struct MoviePipelinePythonHostExecutor_eventGetLastLoadedWorld_Parms
		{
			UWorld* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelinePythonHostExecutor_GetLastLoadedWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoviePipelinePythonHostExecutor_eventGetLastLoadedWorld_Parms, ReturnValue), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelinePythonHostExecutor_GetLastLoadedWorld_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelinePythonHostExecutor_GetLastLoadedWorld_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelinePythonHostExecutor_GetLastLoadedWorld_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "// ~Python/Blueprint API\n" },
		{ "ModuleRelativePath", "Public/MoviePipelinePythonHostExecutor.h" },
		{ "ToolTip", "~Python/Blueprint API" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelinePythonHostExecutor_GetLastLoadedWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelinePythonHostExecutor, nullptr, "GetLastLoadedWorld", nullptr, nullptr, Z_Construct_UFunction_UMoviePipelinePythonHostExecutor_GetLastLoadedWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelinePythonHostExecutor_GetLastLoadedWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoviePipelinePythonHostExecutor_GetLastLoadedWorld_Statics::MoviePipelinePythonHostExecutor_eventGetLastLoadedWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelinePythonHostExecutor_GetLastLoadedWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoviePipelinePythonHostExecutor_GetLastLoadedWorld_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelinePythonHostExecutor_GetLastLoadedWorld_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMoviePipelinePythonHostExecutor_GetLastLoadedWorld_Statics::MoviePipelinePythonHostExecutor_eventGetLastLoadedWorld_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMoviePipelinePythonHostExecutor_GetLastLoadedWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelinePythonHostExecutor_GetLastLoadedWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelinePythonHostExecutor_OnMapLoad_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InWorld;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelinePythonHostExecutor_OnMapLoad_Statics::NewProp_InWorld = { "InWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoviePipelinePythonHostExecutor_eventOnMapLoad_Parms, InWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelinePythonHostExecutor_OnMapLoad_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelinePythonHostExecutor_OnMapLoad_Statics::NewProp_InWorld,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelinePythonHostExecutor_OnMapLoad_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "ModuleRelativePath", "Public/MoviePipelinePythonHostExecutor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelinePythonHostExecutor_OnMapLoad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelinePythonHostExecutor, nullptr, "OnMapLoad", nullptr, nullptr, Z_Construct_UFunction_UMoviePipelinePythonHostExecutor_OnMapLoad_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelinePythonHostExecutor_OnMapLoad_Statics::PropPointers), sizeof(MoviePipelinePythonHostExecutor_eventOnMapLoad_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelinePythonHostExecutor_OnMapLoad_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoviePipelinePythonHostExecutor_OnMapLoad_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelinePythonHostExecutor_OnMapLoad_Statics::PropPointers) < 2048);
	static_assert(sizeof(MoviePipelinePythonHostExecutor_eventOnMapLoad_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMoviePipelinePythonHostExecutor_OnMapLoad()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelinePythonHostExecutor_OnMapLoad_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoviePipelinePythonHostExecutor);
	UClass* Z_Construct_UClass_UMoviePipelinePythonHostExecutor_NoRegister()
	{
		return UMoviePipelinePythonHostExecutor::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelinePythonHostExecutor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExecutorClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ExecutorClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PipelineQueue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PipelineQueue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastLoadedWorld_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LastLoadedWorld;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelinePythonHostExecutor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMoviePipelineExecutorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelinePythonHostExecutor_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMoviePipelinePythonHostExecutor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMoviePipelinePythonHostExecutor_ExecuteDelayed, "ExecuteDelayed" }, // 1748994784
		{ &Z_Construct_UFunction_UMoviePipelinePythonHostExecutor_GetLastLoadedWorld, "GetLastLoadedWorld" }, // 2554935576
		{ &Z_Construct_UFunction_UMoviePipelinePythonHostExecutor_OnMapLoad, "OnMapLoad" }, // 1289531018
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelinePythonHostExecutor_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelinePythonHostExecutor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* This is a dummy executor that is designed to host a executor implemented in\n* python. Python defined UClasses are not available when the executor is initialized\n* and not all callbacks are available in Python. By inheriting from this in Python\n* and overriding which UClass to latently spawn, this class can just forward certain\n* events onto Python (by overriding the relevant function).\n*/" },
		{ "IncludePath", "MoviePipelinePythonHostExecutor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MoviePipelinePythonHostExecutor.h" },
		{ "ToolTip", "This is a dummy executor that is designed to host a executor implemented in\npython. Python defined UClasses are not available when the executor is initialized\nand not all callbacks are available in Python. By inheriting from this in Python\nand overriding which UClass to latently spawn, this class can just forward certain\nevents onto Python (by overriding the relevant function)." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelinePythonHostExecutor_Statics::NewProp_ExecutorClass_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** You should override this class type on the CDO of the object with your Python type when Python is initialized. */" },
		{ "ModuleRelativePath", "Public/MoviePipelinePythonHostExecutor.h" },
		{ "ToolTip", "You should override this class type on the CDO of the object with your Python type when Python is initialized." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMoviePipelinePythonHostExecutor_Statics::NewProp_ExecutorClass = { "ExecutorClass", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoviePipelinePythonHostExecutor, ExecutorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UMoviePipelinePythonHostExecutor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelinePythonHostExecutor_Statics::NewProp_ExecutorClass_MetaData), Z_Construct_UClass_UMoviePipelinePythonHostExecutor_Statics::NewProp_ExecutorClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelinePythonHostExecutor_Statics::NewProp_PipelineQueue_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "ModuleRelativePath", "Public/MoviePipelinePythonHostExecutor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMoviePipelinePythonHostExecutor_Statics::NewProp_PipelineQueue = { "PipelineQueue", nullptr, (EPropertyFlags)0x0014000000002004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoviePipelinePythonHostExecutor, PipelineQueue), Z_Construct_UClass_UMoviePipelineQueue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelinePythonHostExecutor_Statics::NewProp_PipelineQueue_MetaData), Z_Construct_UClass_UMoviePipelinePythonHostExecutor_Statics::NewProp_PipelineQueue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelinePythonHostExecutor_Statics::NewProp_LastLoadedWorld_MetaData[] = {
		{ "ModuleRelativePath", "Public/MoviePipelinePythonHostExecutor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMoviePipelinePythonHostExecutor_Statics::NewProp_LastLoadedWorld = { "LastLoadedWorld", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoviePipelinePythonHostExecutor, LastLoadedWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelinePythonHostExecutor_Statics::NewProp_LastLoadedWorld_MetaData), Z_Construct_UClass_UMoviePipelinePythonHostExecutor_Statics::NewProp_LastLoadedWorld_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoviePipelinePythonHostExecutor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelinePythonHostExecutor_Statics::NewProp_ExecutorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelinePythonHostExecutor_Statics::NewProp_PipelineQueue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelinePythonHostExecutor_Statics::NewProp_LastLoadedWorld,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelinePythonHostExecutor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelinePythonHostExecutor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelinePythonHostExecutor_Statics::ClassParams = {
		&UMoviePipelinePythonHostExecutor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMoviePipelinePythonHostExecutor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelinePythonHostExecutor_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelinePythonHostExecutor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoviePipelinePythonHostExecutor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelinePythonHostExecutor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMoviePipelinePythonHostExecutor()
	{
		if (!Z_Registration_Info_UClass_UMoviePipelinePythonHostExecutor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoviePipelinePythonHostExecutor.OuterSingleton, Z_Construct_UClass_UMoviePipelinePythonHostExecutor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMoviePipelinePythonHostExecutor.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMoviePipelinePythonHostExecutor>()
	{
		return UMoviePipelinePythonHostExecutor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelinePythonHostExecutor);
	UMoviePipelinePythonHostExecutor::~UMoviePipelinePythonHostExecutor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelinePythonHostExecutor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelinePythonHostExecutor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMoviePipelinePythonHostExecutor, UMoviePipelinePythonHostExecutor::StaticClass, TEXT("UMoviePipelinePythonHostExecutor"), &Z_Registration_Info_UClass_UMoviePipelinePythonHostExecutor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoviePipelinePythonHostExecutor), 3461776780U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelinePythonHostExecutor_h_650397934(TEXT("/Script/MovieRenderPipelineCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelinePythonHostExecutor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelinePythonHostExecutor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
