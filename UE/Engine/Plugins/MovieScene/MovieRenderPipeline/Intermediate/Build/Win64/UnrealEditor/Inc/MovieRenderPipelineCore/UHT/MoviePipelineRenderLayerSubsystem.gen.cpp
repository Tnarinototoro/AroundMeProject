// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/MoviePipelineRenderLayerSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePipelineRenderLayerSubsystem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineCollection();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineCollection_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineCollectionCommonQuery();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineCollectionCommonQuery_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineCollectionModifier();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineCollectionModifier_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineCollectionQuery();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineCollectionQuery_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineMaterialModifier();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineMaterialModifier_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineRenderLayer();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineRenderLayer_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineVisibilityModifier();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineVisibilityModifier_NoRegister();
	MOVIERENDERPIPELINECORE_API UEnum* Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineCollectionCommonQueryMode();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
// End Cross Module References
	DEFINE_FUNCTION(UMoviePipelineCollection::execGetCollectionName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetCollectionName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineCollection::execSetCollectionName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCollectionName(Z_Param_InName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineCollection::execAddQuery)
	{
		P_GET_OBJECT(UMoviePipelineCollectionQuery,Z_Param_Query);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddQuery(Z_Param_Query);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineCollection::execGetMatchingActors)
	{
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_GET_UBOOL(Z_Param_bInvertResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetMatchingActors(Z_Param_World,Z_Param_bInvertResult);
		P_NATIVE_END;
	}
	void UMoviePipelineCollection::StaticRegisterNativesUMoviePipelineCollection()
	{
		UClass* Class = UMoviePipelineCollection::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddQuery", &UMoviePipelineCollection::execAddQuery },
			{ "GetCollectionName", &UMoviePipelineCollection::execGetCollectionName },
			{ "GetMatchingActors", &UMoviePipelineCollection::execGetMatchingActors },
			{ "SetCollectionName", &UMoviePipelineCollection::execSetCollectionName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMoviePipelineCollection_AddQuery_Statics
	{
		struct MoviePipelineCollection_eventAddQuery_Parms
		{
			UMoviePipelineCollectionQuery* Query;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Query;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineCollection_AddQuery_Statics::NewProp_Query = { "Query", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoviePipelineCollection_eventAddQuery_Parms, Query), Z_Construct_UClass_UMoviePipelineCollectionQuery_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineCollection_AddQuery_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineCollection_AddQuery_Statics::NewProp_Query,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineCollection_AddQuery_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Layers" },
		{ "ModuleRelativePath", "Public/Graph/MoviePipelineRenderLayerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineCollection_AddQuery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineCollection, nullptr, "AddQuery", nullptr, nullptr, Z_Construct_UFunction_UMoviePipelineCollection_AddQuery_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineCollection_AddQuery_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoviePipelineCollection_AddQuery_Statics::MoviePipelineCollection_eventAddQuery_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineCollection_AddQuery_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoviePipelineCollection_AddQuery_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineCollection_AddQuery_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMoviePipelineCollection_AddQuery_Statics::MoviePipelineCollection_eventAddQuery_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMoviePipelineCollection_AddQuery()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineCollection_AddQuery_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineCollection_GetCollectionName_Statics
	{
		struct MoviePipelineCollection_eventGetCollectionName_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMoviePipelineCollection_GetCollectionName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoviePipelineCollection_eventGetCollectionName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineCollection_GetCollectionName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineCollection_GetCollectionName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineCollection_GetCollectionName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Layers" },
		{ "ModuleRelativePath", "Public/Graph/MoviePipelineRenderLayerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineCollection_GetCollectionName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineCollection, nullptr, "GetCollectionName", nullptr, nullptr, Z_Construct_UFunction_UMoviePipelineCollection_GetCollectionName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineCollection_GetCollectionName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoviePipelineCollection_GetCollectionName_Statics::MoviePipelineCollection_eventGetCollectionName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineCollection_GetCollectionName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoviePipelineCollection_GetCollectionName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineCollection_GetCollectionName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMoviePipelineCollection_GetCollectionName_Statics::MoviePipelineCollection_eventGetCollectionName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMoviePipelineCollection_GetCollectionName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineCollection_GetCollectionName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineCollection_GetMatchingActors_Statics
	{
		struct MoviePipelineCollection_eventGetMatchingActors_Parms
		{
			const UWorld* World;
			bool bInvertResult;
			TArray<AActor*> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInvertResult_MetaData[];
#endif
		static void NewProp_bInvertResult_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertResult;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineCollection_GetMatchingActors_Statics::NewProp_World_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineCollection_GetMatchingActors_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoviePipelineCollection_eventGetMatchingActors_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineCollection_GetMatchingActors_Statics::NewProp_World_MetaData), Z_Construct_UFunction_UMoviePipelineCollection_GetMatchingActors_Statics::NewProp_World_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineCollection_GetMatchingActors_Statics::NewProp_bInvertResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UMoviePipelineCollection_GetMatchingActors_Statics::NewProp_bInvertResult_SetBit(void* Obj)
	{
		((MoviePipelineCollection_eventGetMatchingActors_Parms*)Obj)->bInvertResult = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoviePipelineCollection_GetMatchingActors_Statics::NewProp_bInvertResult = { "bInvertResult", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MoviePipelineCollection_eventGetMatchingActors_Parms), &Z_Construct_UFunction_UMoviePipelineCollection_GetMatchingActors_Statics::NewProp_bInvertResult_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineCollection_GetMatchingActors_Statics::NewProp_bInvertResult_MetaData), Z_Construct_UFunction_UMoviePipelineCollection_GetMatchingActors_Statics::NewProp_bInvertResult_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineCollection_GetMatchingActors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMoviePipelineCollection_GetMatchingActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoviePipelineCollection_eventGetMatchingActors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineCollection_GetMatchingActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineCollection_GetMatchingActors_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineCollection_GetMatchingActors_Statics::NewProp_bInvertResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineCollection_GetMatchingActors_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineCollection_GetMatchingActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineCollection_GetMatchingActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Layers" },
		{ "CPP_Default_bInvertResult", "false" },
		{ "ModuleRelativePath", "Public/Graph/MoviePipelineRenderLayerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineCollection_GetMatchingActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineCollection, nullptr, "GetMatchingActors", nullptr, nullptr, Z_Construct_UFunction_UMoviePipelineCollection_GetMatchingActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineCollection_GetMatchingActors_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoviePipelineCollection_GetMatchingActors_Statics::MoviePipelineCollection_eventGetMatchingActors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineCollection_GetMatchingActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoviePipelineCollection_GetMatchingActors_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineCollection_GetMatchingActors_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMoviePipelineCollection_GetMatchingActors_Statics::MoviePipelineCollection_eventGetMatchingActors_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMoviePipelineCollection_GetMatchingActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineCollection_GetMatchingActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineCollection_SetCollectionName_Statics
	{
		struct MoviePipelineCollection_eventSetCollectionName_Parms
		{
			FString InName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineCollection_SetCollectionName_Statics::NewProp_InName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMoviePipelineCollection_SetCollectionName_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoviePipelineCollection_eventSetCollectionName_Parms, InName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineCollection_SetCollectionName_Statics::NewProp_InName_MetaData), Z_Construct_UFunction_UMoviePipelineCollection_SetCollectionName_Statics::NewProp_InName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineCollection_SetCollectionName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineCollection_SetCollectionName_Statics::NewProp_InName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineCollection_SetCollectionName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Layers" },
		{ "ModuleRelativePath", "Public/Graph/MoviePipelineRenderLayerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineCollection_SetCollectionName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineCollection, nullptr, "SetCollectionName", nullptr, nullptr, Z_Construct_UFunction_UMoviePipelineCollection_SetCollectionName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineCollection_SetCollectionName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoviePipelineCollection_SetCollectionName_Statics::MoviePipelineCollection_eventSetCollectionName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineCollection_SetCollectionName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoviePipelineCollection_SetCollectionName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineCollection_SetCollectionName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMoviePipelineCollection_SetCollectionName_Statics::MoviePipelineCollection_eventSetCollectionName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMoviePipelineCollection_SetCollectionName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineCollection_SetCollectionName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoviePipelineCollection);
	UClass* Z_Construct_UClass_UMoviePipelineCollection_NoRegister()
	{
		return UMoviePipelineCollection::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollectionName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CollectionName;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Queries_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Queries_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Queries;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineCollection_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMoviePipelineCollection_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMoviePipelineCollection_AddQuery, "AddQuery" }, // 57410523
		{ &Z_Construct_UFunction_UMoviePipelineCollection_GetCollectionName, "GetCollectionName" }, // 579296009
		{ &Z_Construct_UFunction_UMoviePipelineCollection_GetMatchingActors, "GetMatchingActors" }, // 2995155480
		{ &Z_Construct_UFunction_UMoviePipelineCollection_SetCollectionName, "SetCollectionName" }, // 2222182257
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineCollection_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineCollection_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Generates a collection of actors via provided queries.\n */" },
		{ "IncludePath", "Graph/MoviePipelineRenderLayerSubsystem.h" },
		{ "ModuleRelativePath", "Public/Graph/MoviePipelineRenderLayerSubsystem.h" },
		{ "ToolTip", "Generates a collection of actors via provided queries." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineCollection_Statics::NewProp_CollectionName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/MoviePipelineRenderLayerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMoviePipelineCollection_Statics::NewProp_CollectionName = { "CollectionName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoviePipelineCollection, CollectionName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineCollection_Statics::NewProp_CollectionName_MetaData), Z_Construct_UClass_UMoviePipelineCollection_Statics::NewProp_CollectionName_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMoviePipelineCollection_Statics::NewProp_Queries_Inner = { "Queries", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMoviePipelineCollectionQuery_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineCollection_Statics::NewProp_Queries_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/MoviePipelineRenderLayerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMoviePipelineCollection_Statics::NewProp_Queries = { "Queries", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoviePipelineCollection, Queries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineCollection_Statics::NewProp_Queries_MetaData), Z_Construct_UClass_UMoviePipelineCollection_Statics::NewProp_Queries_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoviePipelineCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineCollection_Statics::NewProp_CollectionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineCollection_Statics::NewProp_Queries_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineCollection_Statics::NewProp_Queries,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineCollection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineCollection_Statics::ClassParams = {
		&UMoviePipelineCollection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMoviePipelineCollection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineCollection_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineCollection_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoviePipelineCollection_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineCollection_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMoviePipelineCollection()
	{
		if (!Z_Registration_Info_UClass_UMoviePipelineCollection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoviePipelineCollection.OuterSingleton, Z_Construct_UClass_UMoviePipelineCollection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMoviePipelineCollection.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMoviePipelineCollection>()
	{
		return UMoviePipelineCollection::StaticClass();
	}
	UMoviePipelineCollection::UMoviePipelineCollection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineCollection);
	UMoviePipelineCollection::~UMoviePipelineCollection() {}
	DEFINE_FUNCTION(UMoviePipelineCollectionModifier::execIsInverted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInverted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineCollectionModifier::execSetIsInverted)
	{
		P_GET_UBOOL(Z_Param_bIsInverted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsInverted(Z_Param_bIsInverted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineCollectionModifier::execGetCollections)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UMoviePipelineCollection*>*)Z_Param__Result=P_THIS->GetCollections();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineCollectionModifier::execSetCollections)
	{
		P_GET_TARRAY(UMoviePipelineCollection*,Z_Param_InCollections);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCollections(Z_Param_InCollections);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineCollectionModifier::execAddCollection)
	{
		P_GET_OBJECT(UMoviePipelineCollection,Z_Param_Collection);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddCollection(Z_Param_Collection);
		P_NATIVE_END;
	}
	void UMoviePipelineCollectionModifier::StaticRegisterNativesUMoviePipelineCollectionModifier()
	{
		UClass* Class = UMoviePipelineCollectionModifier::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddCollection", &UMoviePipelineCollectionModifier::execAddCollection },
			{ "GetCollections", &UMoviePipelineCollectionModifier::execGetCollections },
			{ "IsInverted", &UMoviePipelineCollectionModifier::execIsInverted },
			{ "SetCollections", &UMoviePipelineCollectionModifier::execSetCollections },
			{ "SetIsInverted", &UMoviePipelineCollectionModifier::execSetIsInverted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMoviePipelineCollectionModifier_AddCollection_Statics
	{
		struct MoviePipelineCollectionModifier_eventAddCollection_Parms
		{
			UMoviePipelineCollection* Collection;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Collection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineCollectionModifier_AddCollection_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoviePipelineCollectionModifier_eventAddCollection_Parms, Collection), Z_Construct_UClass_UMoviePipelineCollection_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineCollectionModifier_AddCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineCollectionModifier_AddCollection_Statics::NewProp_Collection,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineCollectionModifier_AddCollection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Layers" },
		{ "Comment", "/** Adds a collection to the existing set of collections in this modifier. */" },
		{ "ModuleRelativePath", "Public/Graph/MoviePipelineRenderLayerSubsystem.h" },
		{ "ToolTip", "Adds a collection to the existing set of collections in this modifier." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineCollectionModifier_AddCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineCollectionModifier, nullptr, "AddCollection", nullptr, nullptr, Z_Construct_UFunction_UMoviePipelineCollectionModifier_AddCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineCollectionModifier_AddCollection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoviePipelineCollectionModifier_AddCollection_Statics::MoviePipelineCollectionModifier_eventAddCollection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineCollectionModifier_AddCollection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoviePipelineCollectionModifier_AddCollection_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineCollectionModifier_AddCollection_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMoviePipelineCollectionModifier_AddCollection_Statics::MoviePipelineCollectionModifier_eventAddCollection_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMoviePipelineCollectionModifier_AddCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineCollectionModifier_AddCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineCollectionModifier_GetCollections_Statics
	{
		struct MoviePipelineCollectionModifier_eventGetCollections_Parms
		{
			TArray<UMoviePipelineCollection*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineCollectionModifier_GetCollections_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMoviePipelineCollection_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMoviePipelineCollectionModifier_GetCollections_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoviePipelineCollectionModifier_eventGetCollections_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineCollectionModifier_GetCollections_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineCollectionModifier_GetCollections_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineCollectionModifier_GetCollections_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineCollectionModifier_GetCollections_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Layers" },
		{ "ModuleRelativePath", "Public/Graph/MoviePipelineRenderLayerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineCollectionModifier_GetCollections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineCollectionModifier, nullptr, "GetCollections", nullptr, nullptr, Z_Construct_UFunction_UMoviePipelineCollectionModifier_GetCollections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineCollectionModifier_GetCollections_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoviePipelineCollectionModifier_GetCollections_Statics::MoviePipelineCollectionModifier_eventGetCollections_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineCollectionModifier_GetCollections_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoviePipelineCollectionModifier_GetCollections_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineCollectionModifier_GetCollections_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMoviePipelineCollectionModifier_GetCollections_Statics::MoviePipelineCollectionModifier_eventGetCollections_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMoviePipelineCollectionModifier_GetCollections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineCollectionModifier_GetCollections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineCollectionModifier_IsInverted_Statics
	{
		struct MoviePipelineCollectionModifier_eventIsInverted_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMoviePipelineCollectionModifier_IsInverted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MoviePipelineCollectionModifier_eventIsInverted_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoviePipelineCollectionModifier_IsInverted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MoviePipelineCollectionModifier_eventIsInverted_Parms), &Z_Construct_UFunction_UMoviePipelineCollectionModifier_IsInverted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineCollectionModifier_IsInverted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineCollectionModifier_IsInverted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineCollectionModifier_IsInverted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Layers" },
		{ "ModuleRelativePath", "Public/Graph/MoviePipelineRenderLayerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineCollectionModifier_IsInverted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineCollectionModifier, nullptr, "IsInverted", nullptr, nullptr, Z_Construct_UFunction_UMoviePipelineCollectionModifier_IsInverted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineCollectionModifier_IsInverted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoviePipelineCollectionModifier_IsInverted_Statics::MoviePipelineCollectionModifier_eventIsInverted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineCollectionModifier_IsInverted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoviePipelineCollectionModifier_IsInverted_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineCollectionModifier_IsInverted_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMoviePipelineCollectionModifier_IsInverted_Statics::MoviePipelineCollectionModifier_eventIsInverted_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMoviePipelineCollectionModifier_IsInverted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineCollectionModifier_IsInverted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineCollectionModifier_SetCollections_Statics
	{
		struct MoviePipelineCollectionModifier_eventSetCollections_Parms
		{
			TArray<UMoviePipelineCollection*> InCollections;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InCollections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCollections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InCollections;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineCollectionModifier_SetCollections_Statics::NewProp_InCollections_Inner = { "InCollections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMoviePipelineCollection_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineCollectionModifier_SetCollections_Statics::NewProp_InCollections_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMoviePipelineCollectionModifier_SetCollections_Statics::NewProp_InCollections = { "InCollections", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoviePipelineCollectionModifier_eventSetCollections_Parms, InCollections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineCollectionModifier_SetCollections_Statics::NewProp_InCollections_MetaData), Z_Construct_UFunction_UMoviePipelineCollectionModifier_SetCollections_Statics::NewProp_InCollections_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineCollectionModifier_SetCollections_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineCollectionModifier_SetCollections_Statics::NewProp_InCollections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineCollectionModifier_SetCollections_Statics::NewProp_InCollections,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineCollectionModifier_SetCollections_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Layers" },
		{ "Comment", "/** Overwrites the existing collections with the provided array of collections. */" },
		{ "ModuleRelativePath", "Public/Graph/MoviePipelineRenderLayerSubsystem.h" },
		{ "ToolTip", "Overwrites the existing collections with the provided array of collections." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineCollectionModifier_SetCollections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineCollectionModifier, nullptr, "SetCollections", nullptr, nullptr, Z_Construct_UFunction_UMoviePipelineCollectionModifier_SetCollections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineCollectionModifier_SetCollections_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoviePipelineCollectionModifier_SetCollections_Statics::MoviePipelineCollectionModifier_eventSetCollections_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineCollectionModifier_SetCollections_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoviePipelineCollectionModifier_SetCollections_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineCollectionModifier_SetCollections_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMoviePipelineCollectionModifier_SetCollections_Statics::MoviePipelineCollectionModifier_eventSetCollections_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMoviePipelineCollectionModifier_SetCollections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineCollectionModifier_SetCollections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineCollectionModifier_SetIsInverted_Statics
	{
		struct MoviePipelineCollectionModifier_eventSetIsInverted_Parms
		{
			bool bIsInverted;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInverted_MetaData[];
#endif
		static void NewProp_bIsInverted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInverted;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineCollectionModifier_SetIsInverted_Statics::NewProp_bIsInverted_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UMoviePipelineCollectionModifier_SetIsInverted_Statics::NewProp_bIsInverted_SetBit(void* Obj)
	{
		((MoviePipelineCollectionModifier_eventSetIsInverted_Parms*)Obj)->bIsInverted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoviePipelineCollectionModifier_SetIsInverted_Statics::NewProp_bIsInverted = { "bIsInverted", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MoviePipelineCollectionModifier_eventSetIsInverted_Parms), &Z_Construct_UFunction_UMoviePipelineCollectionModifier_SetIsInverted_Statics::NewProp_bIsInverted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineCollectionModifier_SetIsInverted_Statics::NewProp_bIsInverted_MetaData), Z_Construct_UFunction_UMoviePipelineCollectionModifier_SetIsInverted_Statics::NewProp_bIsInverted_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineCollectionModifier_SetIsInverted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineCollectionModifier_SetIsInverted_Statics::NewProp_bIsInverted,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineCollectionModifier_SetIsInverted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Layers" },
		{ "ModuleRelativePath", "Public/Graph/MoviePipelineRenderLayerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineCollectionModifier_SetIsInverted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineCollectionModifier, nullptr, "SetIsInverted", nullptr, nullptr, Z_Construct_UFunction_UMoviePipelineCollectionModifier_SetIsInverted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineCollectionModifier_SetIsInverted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoviePipelineCollectionModifier_SetIsInverted_Statics::MoviePipelineCollectionModifier_eventSetIsInverted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineCollectionModifier_SetIsInverted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoviePipelineCollectionModifier_SetIsInverted_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineCollectionModifier_SetIsInverted_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMoviePipelineCollectionModifier_SetIsInverted_Statics::MoviePipelineCollectionModifier_eventSetIsInverted_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMoviePipelineCollectionModifier_SetIsInverted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineCollectionModifier_SetIsInverted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoviePipelineCollectionModifier);
	UClass* Z_Construct_UClass_UMoviePipelineCollectionModifier_NoRegister()
	{
		return UMoviePipelineCollectionModifier::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineCollectionModifier_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Collections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Collections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Collections;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseInvertedActors_MetaData[];
#endif
		static void NewProp_bUseInvertedActors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseInvertedActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineCollectionModifier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineCollectionModifier_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMoviePipelineCollectionModifier_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMoviePipelineCollectionModifier_AddCollection, "AddCollection" }, // 1400868815
		{ &Z_Construct_UFunction_UMoviePipelineCollectionModifier_GetCollections, "GetCollections" }, // 4242460656
		{ &Z_Construct_UFunction_UMoviePipelineCollectionModifier_IsInverted, "IsInverted" }, // 1236001004
		{ &Z_Construct_UFunction_UMoviePipelineCollectionModifier_SetCollections, "SetCollections" }, // 2796514371
		{ &Z_Construct_UFunction_UMoviePipelineCollectionModifier_SetIsInverted, "SetIsInverted" }, // 4287258005
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineCollectionModifier_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineCollectionModifier_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for providing actor modification functionality via collections.\n */" },
		{ "IncludePath", "Graph/MoviePipelineRenderLayerSubsystem.h" },
		{ "ModuleRelativePath", "Public/Graph/MoviePipelineRenderLayerSubsystem.h" },
		{ "ToolTip", "Base class for providing actor modification functionality via collections." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMoviePipelineCollectionModifier_Statics::NewProp_Collections_Inner = { "Collections", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMoviePipelineCollection_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineCollectionModifier_Statics::NewProp_Collections_MetaData[] = {
		{ "Comment", "/** The collections which this modifier will operate on. */" },
		{ "ModuleRelativePath", "Public/Graph/MoviePipelineRenderLayerSubsystem.h" },
		{ "ToolTip", "The collections which this modifier will operate on." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMoviePipelineCollectionModifier_Statics::NewProp_Collections = { "Collections", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoviePipelineCollectionModifier, Collections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineCollectionModifier_Statics::NewProp_Collections_MetaData), Z_Construct_UClass_UMoviePipelineCollectionModifier_Statics::NewProp_Collections_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineCollectionModifier_Statics::NewProp_bUseInvertedActors_MetaData[] = {
		{ "Comment", "/** Whether an inverted collection of actors should be used. */" },
		{ "ModuleRelativePath", "Public/Graph/MoviePipelineRenderLayerSubsystem.h" },
		{ "ToolTip", "Whether an inverted collection of actors should be used." },
	};
#endif
	void Z_Construct_UClass_UMoviePipelineCollectionModifier_Statics::NewProp_bUseInvertedActors_SetBit(void* Obj)
	{
		((UMoviePipelineCollectionModifier*)Obj)->bUseInvertedActors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoviePipelineCollectionModifier_Statics::NewProp_bUseInvertedActors = { "bUseInvertedActors", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMoviePipelineCollectionModifier), &Z_Construct_UClass_UMoviePipelineCollectionModifier_Statics::NewProp_bUseInvertedActors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineCollectionModifier_Statics::NewProp_bUseInvertedActors_MetaData), Z_Construct_UClass_UMoviePipelineCollectionModifier_Statics::NewProp_bUseInvertedActors_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoviePipelineCollectionModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineCollectionModifier_Statics::NewProp_Collections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineCollectionModifier_Statics::NewProp_Collections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineCollectionModifier_Statics::NewProp_bUseInvertedActors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineCollectionModifier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineCollectionModifier>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineCollectionModifier_Statics::ClassParams = {
		&UMoviePipelineCollectionModifier::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMoviePipelineCollectionModifier_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineCollectionModifier_Statics::PropPointers),
		0,
		0x000010A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineCollectionModifier_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoviePipelineCollectionModifier_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineCollectionModifier_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMoviePipelineCollectionModifier()
	{
		if (!Z_Registration_Info_UClass_UMoviePipelineCollectionModifier.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoviePipelineCollectionModifier.OuterSingleton, Z_Construct_UClass_UMoviePipelineCollectionModifier_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMoviePipelineCollectionModifier.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMoviePipelineCollectionModifier>()
	{
		return UMoviePipelineCollectionModifier::StaticClass();
	}
	UMoviePipelineCollectionModifier::UMoviePipelineCollectionModifier(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineCollectionModifier);
	UMoviePipelineCollectionModifier::~UMoviePipelineCollectionModifier() {}
	DEFINE_FUNCTION(UMoviePipelineMaterialModifier::execUndoModifier)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UndoModifier();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineMaterialModifier::execApplyModifier)
	{
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyModifier(Z_Param_World);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineMaterialModifier::execSetMaterial)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UMaterialInterface>,Z_Param_InMaterial);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaterial(Z_Param_InMaterial);
		P_NATIVE_END;
	}
	void UMoviePipelineMaterialModifier::StaticRegisterNativesUMoviePipelineMaterialModifier()
	{
		UClass* Class = UMoviePipelineMaterialModifier::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyModifier", &UMoviePipelineMaterialModifier::execApplyModifier },
			{ "SetMaterial", &UMoviePipelineMaterialModifier::execSetMaterial },
			{ "UndoModifier", &UMoviePipelineMaterialModifier::execUndoModifier },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMoviePipelineMaterialModifier_ApplyModifier_Statics
	{
		struct MoviePipelineMaterialModifier_eventApplyModifier_Parms
		{
			const UWorld* World;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineMaterialModifier_ApplyModifier_Statics::NewProp_World_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineMaterialModifier_ApplyModifier_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoviePipelineMaterialModifier_eventApplyModifier_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineMaterialModifier_ApplyModifier_Statics::NewProp_World_MetaData), Z_Construct_UFunction_UMoviePipelineMaterialModifier_ApplyModifier_Statics::NewProp_World_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineMaterialModifier_ApplyModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineMaterialModifier_ApplyModifier_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineMaterialModifier_ApplyModifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Layers" },
		{ "ModuleRelativePath", "Public/Graph/MoviePipelineRenderLayerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineMaterialModifier_ApplyModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineMaterialModifier, nullptr, "ApplyModifier", nullptr, nullptr, Z_Construct_UFunction_UMoviePipelineMaterialModifier_ApplyModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineMaterialModifier_ApplyModifier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoviePipelineMaterialModifier_ApplyModifier_Statics::MoviePipelineMaterialModifier_eventApplyModifier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineMaterialModifier_ApplyModifier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoviePipelineMaterialModifier_ApplyModifier_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineMaterialModifier_ApplyModifier_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMoviePipelineMaterialModifier_ApplyModifier_Statics::MoviePipelineMaterialModifier_eventApplyModifier_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMoviePipelineMaterialModifier_ApplyModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineMaterialModifier_ApplyModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineMaterialModifier_SetMaterial_Statics
	{
		struct MoviePipelineMaterialModifier_eventSetMaterial_Parms
		{
			TSoftObjectPtr<UMaterialInterface> InMaterial;
		};
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_InMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UMoviePipelineMaterialModifier_SetMaterial_Statics::NewProp_InMaterial = { "InMaterial", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoviePipelineMaterialModifier_eventSetMaterial_Parms, InMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineMaterialModifier_SetMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineMaterialModifier_SetMaterial_Statics::NewProp_InMaterial,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineMaterialModifier_SetMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Layers" },
		{ "ModuleRelativePath", "Public/Graph/MoviePipelineRenderLayerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineMaterialModifier_SetMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineMaterialModifier, nullptr, "SetMaterial", nullptr, nullptr, Z_Construct_UFunction_UMoviePipelineMaterialModifier_SetMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineMaterialModifier_SetMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoviePipelineMaterialModifier_SetMaterial_Statics::MoviePipelineMaterialModifier_eventSetMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineMaterialModifier_SetMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoviePipelineMaterialModifier_SetMaterial_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineMaterialModifier_SetMaterial_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMoviePipelineMaterialModifier_SetMaterial_Statics::MoviePipelineMaterialModifier_eventSetMaterial_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMoviePipelineMaterialModifier_SetMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineMaterialModifier_SetMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineMaterialModifier_UndoModifier_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineMaterialModifier_UndoModifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Layers" },
		{ "ModuleRelativePath", "Public/Graph/MoviePipelineRenderLayerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineMaterialModifier_UndoModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineMaterialModifier, nullptr, "UndoModifier", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineMaterialModifier_UndoModifier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoviePipelineMaterialModifier_UndoModifier_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMoviePipelineMaterialModifier_UndoModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineMaterialModifier_UndoModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoviePipelineMaterialModifier);
	UClass* Z_Construct_UClass_UMoviePipelineMaterialModifier_NoRegister()
	{
		return UMoviePipelineMaterialModifier::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineMaterialModifier_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialToApply_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_MaterialToApply;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineMaterialModifier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMoviePipelineCollectionModifier,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineMaterialModifier_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMoviePipelineMaterialModifier_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMoviePipelineMaterialModifier_ApplyModifier, "ApplyModifier" }, // 2496040217
		{ &Z_Construct_UFunction_UMoviePipelineMaterialModifier_SetMaterial, "SetMaterial" }, // 1373622097
		{ &Z_Construct_UFunction_UMoviePipelineMaterialModifier_UndoModifier, "UndoModifier" }, // 3866272674
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineMaterialModifier_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineMaterialModifier_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Modifies actor materials.\n */" },
		{ "IncludePath", "Graph/MoviePipelineRenderLayerSubsystem.h" },
		{ "ModuleRelativePath", "Public/Graph/MoviePipelineRenderLayerSubsystem.h" },
		{ "ToolTip", "Modifies actor materials." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineMaterialModifier_Statics::NewProp_MaterialToApply_MetaData[] = {
		{ "Category", "Render Layers" },
		{ "ModuleRelativePath", "Public/Graph/MoviePipelineRenderLayerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UMoviePipelineMaterialModifier_Statics::NewProp_MaterialToApply = { "MaterialToApply", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoviePipelineMaterialModifier, MaterialToApply), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineMaterialModifier_Statics::NewProp_MaterialToApply_MetaData), Z_Construct_UClass_UMoviePipelineMaterialModifier_Statics::NewProp_MaterialToApply_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoviePipelineMaterialModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineMaterialModifier_Statics::NewProp_MaterialToApply,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineMaterialModifier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineMaterialModifier>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineMaterialModifier_Statics::ClassParams = {
		&UMoviePipelineMaterialModifier::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMoviePipelineMaterialModifier_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineMaterialModifier_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineMaterialModifier_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoviePipelineMaterialModifier_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineMaterialModifier_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMoviePipelineMaterialModifier()
	{
		if (!Z_Registration_Info_UClass_UMoviePipelineMaterialModifier.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoviePipelineMaterialModifier.OuterSingleton, Z_Construct_UClass_UMoviePipelineMaterialModifier_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMoviePipelineMaterialModifier.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMoviePipelineMaterialModifier>()
	{
		return UMoviePipelineMaterialModifier::StaticClass();
	}
	UMoviePipelineMaterialModifier::UMoviePipelineMaterialModifier(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineMaterialModifier);
	UMoviePipelineMaterialModifier::~UMoviePipelineMaterialModifier() {}
	DEFINE_FUNCTION(UMoviePipelineVisibilityModifier::execUndoModifier)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UndoModifier();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineVisibilityModifier::execApplyModifier)
	{
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyModifier(Z_Param_World);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineVisibilityModifier::execIsHidden)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsHidden();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineVisibilityModifier::execSetHidden)
	{
		P_GET_UBOOL(Z_Param_bInIsHidden);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHidden(Z_Param_bInIsHidden);
		P_NATIVE_END;
	}
	void UMoviePipelineVisibilityModifier::StaticRegisterNativesUMoviePipelineVisibilityModifier()
	{
		UClass* Class = UMoviePipelineVisibilityModifier::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyModifier", &UMoviePipelineVisibilityModifier::execApplyModifier },
			{ "IsHidden", &UMoviePipelineVisibilityModifier::execIsHidden },
			{ "SetHidden", &UMoviePipelineVisibilityModifier::execSetHidden },
			{ "UndoModifier", &UMoviePipelineVisibilityModifier::execUndoModifier },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMoviePipelineVisibilityModifier_ApplyModifier_Statics
	{
		struct MoviePipelineVisibilityModifier_eventApplyModifier_Parms
		{
			const UWorld* World;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineVisibilityModifier_ApplyModifier_Statics::NewProp_World_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineVisibilityModifier_ApplyModifier_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoviePipelineVisibilityModifier_eventApplyModifier_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineVisibilityModifier_ApplyModifier_Statics::NewProp_World_MetaData), Z_Construct_UFunction_UMoviePipelineVisibilityModifier_ApplyModifier_Statics::NewProp_World_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineVisibilityModifier_ApplyModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineVisibilityModifier_ApplyModifier_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineVisibilityModifier_ApplyModifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Layers" },
		{ "ModuleRelativePath", "Public/Graph/MoviePipelineRenderLayerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineVisibilityModifier_ApplyModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineVisibilityModifier, nullptr, "ApplyModifier", nullptr, nullptr, Z_Construct_UFunction_UMoviePipelineVisibilityModifier_ApplyModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineVisibilityModifier_ApplyModifier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoviePipelineVisibilityModifier_ApplyModifier_Statics::MoviePipelineVisibilityModifier_eventApplyModifier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineVisibilityModifier_ApplyModifier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoviePipelineVisibilityModifier_ApplyModifier_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineVisibilityModifier_ApplyModifier_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMoviePipelineVisibilityModifier_ApplyModifier_Statics::MoviePipelineVisibilityModifier_eventApplyModifier_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMoviePipelineVisibilityModifier_ApplyModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineVisibilityModifier_ApplyModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineVisibilityModifier_IsHidden_Statics
	{
		struct MoviePipelineVisibilityModifier_eventIsHidden_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMoviePipelineVisibilityModifier_IsHidden_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MoviePipelineVisibilityModifier_eventIsHidden_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoviePipelineVisibilityModifier_IsHidden_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MoviePipelineVisibilityModifier_eventIsHidden_Parms), &Z_Construct_UFunction_UMoviePipelineVisibilityModifier_IsHidden_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineVisibilityModifier_IsHidden_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineVisibilityModifier_IsHidden_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineVisibilityModifier_IsHidden_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Layers" },
		{ "ModuleRelativePath", "Public/Graph/MoviePipelineRenderLayerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineVisibilityModifier_IsHidden_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineVisibilityModifier, nullptr, "IsHidden", nullptr, nullptr, Z_Construct_UFunction_UMoviePipelineVisibilityModifier_IsHidden_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineVisibilityModifier_IsHidden_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoviePipelineVisibilityModifier_IsHidden_Statics::MoviePipelineVisibilityModifier_eventIsHidden_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineVisibilityModifier_IsHidden_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoviePipelineVisibilityModifier_IsHidden_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineVisibilityModifier_IsHidden_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMoviePipelineVisibilityModifier_IsHidden_Statics::MoviePipelineVisibilityModifier_eventIsHidden_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMoviePipelineVisibilityModifier_IsHidden()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineVisibilityModifier_IsHidden_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineVisibilityModifier_SetHidden_Statics
	{
		struct MoviePipelineVisibilityModifier_eventSetHidden_Parms
		{
			bool bInIsHidden;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInIsHidden_MetaData[];
#endif
		static void NewProp_bInIsHidden_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInIsHidden;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineVisibilityModifier_SetHidden_Statics::NewProp_bInIsHidden_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UMoviePipelineVisibilityModifier_SetHidden_Statics::NewProp_bInIsHidden_SetBit(void* Obj)
	{
		((MoviePipelineVisibilityModifier_eventSetHidden_Parms*)Obj)->bInIsHidden = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoviePipelineVisibilityModifier_SetHidden_Statics::NewProp_bInIsHidden = { "bInIsHidden", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MoviePipelineVisibilityModifier_eventSetHidden_Parms), &Z_Construct_UFunction_UMoviePipelineVisibilityModifier_SetHidden_Statics::NewProp_bInIsHidden_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineVisibilityModifier_SetHidden_Statics::NewProp_bInIsHidden_MetaData), Z_Construct_UFunction_UMoviePipelineVisibilityModifier_SetHidden_Statics::NewProp_bInIsHidden_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineVisibilityModifier_SetHidden_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineVisibilityModifier_SetHidden_Statics::NewProp_bInIsHidden,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineVisibilityModifier_SetHidden_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Layers" },
		{ "ModuleRelativePath", "Public/Graph/MoviePipelineRenderLayerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineVisibilityModifier_SetHidden_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineVisibilityModifier, nullptr, "SetHidden", nullptr, nullptr, Z_Construct_UFunction_UMoviePipelineVisibilityModifier_SetHidden_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineVisibilityModifier_SetHidden_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoviePipelineVisibilityModifier_SetHidden_Statics::MoviePipelineVisibilityModifier_eventSetHidden_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineVisibilityModifier_SetHidden_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoviePipelineVisibilityModifier_SetHidden_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineVisibilityModifier_SetHidden_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMoviePipelineVisibilityModifier_SetHidden_Statics::MoviePipelineVisibilityModifier_eventSetHidden_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMoviePipelineVisibilityModifier_SetHidden()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineVisibilityModifier_SetHidden_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineVisibilityModifier_UndoModifier_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineVisibilityModifier_UndoModifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Layers" },
		{ "ModuleRelativePath", "Public/Graph/MoviePipelineRenderLayerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineVisibilityModifier_UndoModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineVisibilityModifier, nullptr, "UndoModifier", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineVisibilityModifier_UndoModifier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoviePipelineVisibilityModifier_UndoModifier_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMoviePipelineVisibilityModifier_UndoModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineVisibilityModifier_UndoModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoviePipelineVisibilityModifier);
	UClass* Z_Construct_UClass_UMoviePipelineVisibilityModifier_NoRegister()
	{
		return UMoviePipelineVisibilityModifier::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineVisibilityModifier_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ModifiedActors_ValueProp;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ModifiedActors_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModifiedActors_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ModifiedActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsHidden_MetaData[];
#endif
		static void NewProp_bIsHidden_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHidden;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineVisibilityModifier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMoviePipelineCollectionModifier,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineVisibilityModifier_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMoviePipelineVisibilityModifier_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMoviePipelineVisibilityModifier_ApplyModifier, "ApplyModifier" }, // 596527263
		{ &Z_Construct_UFunction_UMoviePipelineVisibilityModifier_IsHidden, "IsHidden" }, // 2568425490
		{ &Z_Construct_UFunction_UMoviePipelineVisibilityModifier_SetHidden, "SetHidden" }, // 651346076
		{ &Z_Construct_UFunction_UMoviePipelineVisibilityModifier_UndoModifier, "UndoModifier" }, // 1174486381
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineVisibilityModifier_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineVisibilityModifier_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Modifies actor visibility.\n */" },
		{ "IncludePath", "Graph/MoviePipelineRenderLayerSubsystem.h" },
		{ "ModuleRelativePath", "Public/Graph/MoviePipelineRenderLayerSubsystem.h" },
		{ "ToolTip", "Modifies actor visibility." },
	};
#endif
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoviePipelineVisibilityModifier_Statics::NewProp_ModifiedActors_ValueProp = { "ModifiedActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UMoviePipelineVisibilityModifier_Statics::NewProp_ModifiedActors_Key_KeyProp = { "ModifiedActors_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineVisibilityModifier_Statics::NewProp_ModifiedActors_MetaData[] = {
		{ "Comment", "/** Maps an actor to its original hidden state. */" },
		{ "ModuleRelativePath", "Public/Graph/MoviePipelineRenderLayerSubsystem.h" },
		{ "ToolTip", "Maps an actor to its original hidden state." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMoviePipelineVisibilityModifier_Statics::NewProp_ModifiedActors = { "ModifiedActors", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoviePipelineVisibilityModifier, ModifiedActors), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineVisibilityModifier_Statics::NewProp_ModifiedActors_MetaData), Z_Construct_UClass_UMoviePipelineVisibilityModifier_Statics::NewProp_ModifiedActors_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineVisibilityModifier_Statics::NewProp_bIsHidden_MetaData[] = {
		{ "Category", "Render Layers" },
		{ "ModuleRelativePath", "Public/Graph/MoviePipelineRenderLayerSubsystem.h" },
	};
#endif
	void Z_Construct_UClass_UMoviePipelineVisibilityModifier_Statics::NewProp_bIsHidden_SetBit(void* Obj)
	{
		((UMoviePipelineVisibilityModifier*)Obj)->bIsHidden = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoviePipelineVisibilityModifier_Statics::NewProp_bIsHidden = { "bIsHidden", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMoviePipelineVisibilityModifier), &Z_Construct_UClass_UMoviePipelineVisibilityModifier_Statics::NewProp_bIsHidden_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineVisibilityModifier_Statics::NewProp_bIsHidden_MetaData), Z_Construct_UClass_UMoviePipelineVisibilityModifier_Statics::NewProp_bIsHidden_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoviePipelineVisibilityModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineVisibilityModifier_Statics::NewProp_ModifiedActors_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineVisibilityModifier_Statics::NewProp_ModifiedActors_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineVisibilityModifier_Statics::NewProp_ModifiedActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineVisibilityModifier_Statics::NewProp_bIsHidden,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineVisibilityModifier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineVisibilityModifier>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineVisibilityModifier_Statics::ClassParams = {
		&UMoviePipelineVisibilityModifier::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMoviePipelineVisibilityModifier_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineVisibilityModifier_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineVisibilityModifier_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoviePipelineVisibilityModifier_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineVisibilityModifier_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMoviePipelineVisibilityModifier()
	{
		if (!Z_Registration_Info_UClass_UMoviePipelineVisibilityModifier.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoviePipelineVisibilityModifier.OuterSingleton, Z_Construct_UClass_UMoviePipelineVisibilityModifier_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMoviePipelineVisibilityModifier.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMoviePipelineVisibilityModifier>()
	{
		return UMoviePipelineVisibilityModifier::StaticClass();
	}
	UMoviePipelineVisibilityModifier::UMoviePipelineVisibilityModifier(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineVisibilityModifier);
	UMoviePipelineVisibilityModifier::~UMoviePipelineVisibilityModifier() {}
	void UMoviePipelineCollectionQuery::StaticRegisterNativesUMoviePipelineCollectionQuery()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoviePipelineCollectionQuery);
	UClass* Z_Construct_UClass_UMoviePipelineCollectionQuery_NoRegister()
	{
		return UMoviePipelineCollectionQuery::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineCollectionQuery_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineCollectionQuery_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineCollectionQuery_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineCollectionQuery_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for providing the ability to determine if an actor matches a query.\n */" },
		{ "IncludePath", "Graph/MoviePipelineRenderLayerSubsystem.h" },
		{ "ModuleRelativePath", "Public/Graph/MoviePipelineRenderLayerSubsystem.h" },
		{ "ToolTip", "Base class for providing the ability to determine if an actor matches a query." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineCollectionQuery_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineCollectionQuery>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineCollectionQuery_Statics::ClassParams = {
		&UMoviePipelineCollectionQuery::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000010A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineCollectionQuery_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoviePipelineCollectionQuery_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMoviePipelineCollectionQuery()
	{
		if (!Z_Registration_Info_UClass_UMoviePipelineCollectionQuery.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoviePipelineCollectionQuery.OuterSingleton, Z_Construct_UClass_UMoviePipelineCollectionQuery_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMoviePipelineCollectionQuery.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMoviePipelineCollectionQuery>()
	{
		return UMoviePipelineCollectionQuery::StaticClass();
	}
	UMoviePipelineCollectionQuery::UMoviePipelineCollectionQuery(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineCollectionQuery);
	UMoviePipelineCollectionQuery::~UMoviePipelineCollectionQuery() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMoviePipelineCollectionCommonQueryMode;
	static UEnum* EMoviePipelineCollectionCommonQueryMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMoviePipelineCollectionCommonQueryMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMoviePipelineCollectionCommonQueryMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineCollectionCommonQueryMode, (UObject*)Z_Construct_UPackage__Script_MovieRenderPipelineCore(), TEXT("EMoviePipelineCollectionCommonQueryMode"));
		}
		return Z_Registration_Info_UEnum_EMoviePipelineCollectionCommonQueryMode.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UEnum* StaticEnum<EMoviePipelineCollectionCommonQueryMode>()
	{
		return EMoviePipelineCollectionCommonQueryMode_StaticEnum();
	}
	struct Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineCollectionCommonQueryMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineCollectionCommonQueryMode_Statics::Enumerators[] = {
		{ "EMoviePipelineCollectionCommonQueryMode::And", (int64)EMoviePipelineCollectionCommonQueryMode::And },
		{ "EMoviePipelineCollectionCommonQueryMode::Or", (int64)EMoviePipelineCollectionCommonQueryMode::Or },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineCollectionCommonQueryMode_Statics::Enum_MetaDataParams[] = {
		{ "And.Name", "EMoviePipelineCollectionCommonQueryMode::And" },
		{ "And.ToolTip", "All specifiers in the query must be true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Graph/MoviePipelineRenderLayerSubsystem.h" },
		{ "Or.Name", "EMoviePipelineCollectionCommonQueryMode::Or" },
		{ "Or.ToolTip", "At least one specifier in the query must be true" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineCollectionCommonQueryMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
		nullptr,
		"EMoviePipelineCollectionCommonQueryMode",
		"EMoviePipelineCollectionCommonQueryMode",
		Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineCollectionCommonQueryMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineCollectionCommonQueryMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineCollectionCommonQueryMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineCollectionCommonQueryMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineCollectionCommonQueryMode()
	{
		if (!Z_Registration_Info_UEnum_EMoviePipelineCollectionCommonQueryMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMoviePipelineCollectionCommonQueryMode.InnerSingleton, Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineCollectionCommonQueryMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMoviePipelineCollectionCommonQueryMode.InnerSingleton;
	}
	DEFINE_FUNCTION(UMoviePipelineCollectionCommonQuery::execDoesActorMatchQuery)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DoesActorMatchQuery(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineCollectionCommonQuery::execSetQueryMode)
	{
		P_GET_ENUM(EMoviePipelineCollectionCommonQueryMode,Z_Param_InQueryMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetQueryMode(EMoviePipelineCollectionCommonQueryMode(Z_Param_InQueryMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineCollectionCommonQuery::execSetComponentTypes)
	{
		P_GET_TARRAY(UClass*,Z_Param_InComponentTypes);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetComponentTypes(Z_Param_InComponentTypes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineCollectionCommonQuery::execSetTags)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_InTags);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTags(Z_Param_Out_InTags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineCollectionCommonQuery::execSetActorNames)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_InActorNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActorNames(Z_Param_Out_InActorNames);
		P_NATIVE_END;
	}
	void UMoviePipelineCollectionCommonQuery::StaticRegisterNativesUMoviePipelineCollectionCommonQuery()
	{
		UClass* Class = UMoviePipelineCollectionCommonQuery::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DoesActorMatchQuery", &UMoviePipelineCollectionCommonQuery::execDoesActorMatchQuery },
			{ "SetActorNames", &UMoviePipelineCollectionCommonQuery::execSetActorNames },
			{ "SetComponentTypes", &UMoviePipelineCollectionCommonQuery::execSetComponentTypes },
			{ "SetQueryMode", &UMoviePipelineCollectionCommonQuery::execSetQueryMode },
			{ "SetTags", &UMoviePipelineCollectionCommonQuery::execSetTags },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_DoesActorMatchQuery_Statics
	{
		struct MoviePipelineCollectionCommonQuery_eventDoesActorMatchQuery_Parms
		{
			const AActor* Actor;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_DoesActorMatchQuery_Statics::NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_DoesActorMatchQuery_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoviePipelineCollectionCommonQuery_eventDoesActorMatchQuery_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_DoesActorMatchQuery_Statics::NewProp_Actor_MetaData), Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_DoesActorMatchQuery_Statics::NewProp_Actor_MetaData) };
	void Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_DoesActorMatchQuery_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MoviePipelineCollectionCommonQuery_eventDoesActorMatchQuery_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_DoesActorMatchQuery_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MoviePipelineCollectionCommonQuery_eventDoesActorMatchQuery_Parms), &Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_DoesActorMatchQuery_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_DoesActorMatchQuery_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_DoesActorMatchQuery_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_DoesActorMatchQuery_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_DoesActorMatchQuery_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Layers" },
		{ "ModuleRelativePath", "Public/Graph/MoviePipelineRenderLayerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_DoesActorMatchQuery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineCollectionCommonQuery, nullptr, "DoesActorMatchQuery", nullptr, nullptr, Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_DoesActorMatchQuery_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_DoesActorMatchQuery_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_DoesActorMatchQuery_Statics::MoviePipelineCollectionCommonQuery_eventDoesActorMatchQuery_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_DoesActorMatchQuery_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_DoesActorMatchQuery_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_DoesActorMatchQuery_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_DoesActorMatchQuery_Statics::MoviePipelineCollectionCommonQuery_eventDoesActorMatchQuery_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_DoesActorMatchQuery()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_DoesActorMatchQuery_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetActorNames_Statics
	{
		struct MoviePipelineCollectionCommonQuery_eventSetActorNames_Parms
		{
			TArray<FString> InActorNames;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_InActorNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InActorNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InActorNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetActorNames_Statics::NewProp_InActorNames_Inner = { "InActorNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetActorNames_Statics::NewProp_InActorNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetActorNames_Statics::NewProp_InActorNames = { "InActorNames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoviePipelineCollectionCommonQuery_eventSetActorNames_Parms, InActorNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetActorNames_Statics::NewProp_InActorNames_MetaData), Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetActorNames_Statics::NewProp_InActorNames_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetActorNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetActorNames_Statics::NewProp_InActorNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetActorNames_Statics::NewProp_InActorNames,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetActorNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Layers" },
		{ "Comment", "// TODO: Add other common query operations (level, etc)\n" },
		{ "ModuleRelativePath", "Public/Graph/MoviePipelineRenderLayerSubsystem.h" },
		{ "ToolTip", "TODO: Add other common query operations (level, etc)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetActorNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineCollectionCommonQuery, nullptr, "SetActorNames", nullptr, nullptr, Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetActorNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetActorNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetActorNames_Statics::MoviePipelineCollectionCommonQuery_eventSetActorNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetActorNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetActorNames_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetActorNames_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetActorNames_Statics::MoviePipelineCollectionCommonQuery_eventSetActorNames_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetActorNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetActorNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetComponentTypes_Statics
	{
		struct MoviePipelineCollectionCommonQuery_eventSetComponentTypes_Parms
		{
			TArray<UClass*> InComponentTypes;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_InComponentTypes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InComponentTypes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetComponentTypes_Statics::NewProp_InComponentTypes_Inner = { "InComponentTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetComponentTypes_Statics::NewProp_InComponentTypes = { "InComponentTypes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoviePipelineCollectionCommonQuery_eventSetComponentTypes_Parms, InComponentTypes), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetComponentTypes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetComponentTypes_Statics::NewProp_InComponentTypes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetComponentTypes_Statics::NewProp_InComponentTypes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetComponentTypes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Layers" },
		{ "ModuleRelativePath", "Public/Graph/MoviePipelineRenderLayerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetComponentTypes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineCollectionCommonQuery, nullptr, "SetComponentTypes", nullptr, nullptr, Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetComponentTypes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetComponentTypes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetComponentTypes_Statics::MoviePipelineCollectionCommonQuery_eventSetComponentTypes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetComponentTypes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetComponentTypes_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetComponentTypes_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetComponentTypes_Statics::MoviePipelineCollectionCommonQuery_eventSetComponentTypes_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetComponentTypes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetComponentTypes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetQueryMode_Statics
	{
		struct MoviePipelineCollectionCommonQuery_eventSetQueryMode_Parms
		{
			EMoviePipelineCollectionCommonQueryMode InQueryMode;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InQueryMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InQueryMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InQueryMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetQueryMode_Statics::NewProp_InQueryMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetQueryMode_Statics::NewProp_InQueryMode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetQueryMode_Statics::NewProp_InQueryMode = { "InQueryMode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoviePipelineCollectionCommonQuery_eventSetQueryMode_Parms, InQueryMode), Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineCollectionCommonQueryMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetQueryMode_Statics::NewProp_InQueryMode_MetaData), Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetQueryMode_Statics::NewProp_InQueryMode_MetaData) }; // 1813519214
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetQueryMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetQueryMode_Statics::NewProp_InQueryMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetQueryMode_Statics::NewProp_InQueryMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetQueryMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Layers" },
		{ "ModuleRelativePath", "Public/Graph/MoviePipelineRenderLayerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetQueryMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineCollectionCommonQuery, nullptr, "SetQueryMode", nullptr, nullptr, Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetQueryMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetQueryMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetQueryMode_Statics::MoviePipelineCollectionCommonQuery_eventSetQueryMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetQueryMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetQueryMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetQueryMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetQueryMode_Statics::MoviePipelineCollectionCommonQuery_eventSetQueryMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetQueryMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetQueryMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetTags_Statics
	{
		struct MoviePipelineCollectionCommonQuery_eventSetTags_Parms
		{
			TArray<FName> InTags;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InTags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InTags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetTags_Statics::NewProp_InTags_Inner = { "InTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetTags_Statics::NewProp_InTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetTags_Statics::NewProp_InTags = { "InTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoviePipelineCollectionCommonQuery_eventSetTags_Parms, InTags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetTags_Statics::NewProp_InTags_MetaData), Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetTags_Statics::NewProp_InTags_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetTags_Statics::NewProp_InTags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetTags_Statics::NewProp_InTags,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Layers" },
		{ "ModuleRelativePath", "Public/Graph/MoviePipelineRenderLayerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineCollectionCommonQuery, nullptr, "SetTags", nullptr, nullptr, Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetTags_Statics::MoviePipelineCollectionCommonQuery_eventSetTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetTags_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetTags_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetTags_Statics::MoviePipelineCollectionCommonQuery_eventSetTags_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoviePipelineCollectionCommonQuery);
	UClass* Z_Construct_UClass_UMoviePipelineCollectionCommonQuery_NoRegister()
	{
		return UMoviePipelineCollectionCommonQuery::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineCollectionCommonQuery_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_ComponentTypes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentTypes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ComponentTypes;
		static const UECodeGen_Private::FBytePropertyParams NewProp_QueryMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueryMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_QueryMode;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ActorNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorNames;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Tags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineCollectionCommonQuery_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMoviePipelineCollectionQuery,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineCollectionCommonQuery_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMoviePipelineCollectionCommonQuery_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_DoesActorMatchQuery, "DoesActorMatchQuery" }, // 4267465097
		{ &Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetActorNames, "SetActorNames" }, // 2956363420
		{ &Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetComponentTypes, "SetComponentTypes" }, // 2511865256
		{ &Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetQueryMode, "SetQueryMode" }, // 150597570
		{ &Z_Construct_UFunction_UMoviePipelineCollectionCommonQuery_SetTags, "SetTags" }, // 3898493543
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineCollectionCommonQuery_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineCollectionCommonQuery_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Provides common actor querying functionality (names, tags, components, etc). These individual sub-queries can be\n * AND'd or OR'd together (eg, matches provided names OR provided tags, vs matches provided names AND provided tags).\n */" },
		{ "IncludePath", "Graph/MoviePipelineRenderLayerSubsystem.h" },
		{ "ModuleRelativePath", "Public/Graph/MoviePipelineRenderLayerSubsystem.h" },
		{ "ToolTip", "Provides common actor querying functionality (names, tags, components, etc). These individual sub-queries can be\nAND'd or OR'd together (eg, matches provided names OR provided tags, vs matches provided names AND provided tags)." },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UClass_UMoviePipelineCollectionCommonQuery_Statics::NewProp_ComponentTypes_Inner = { "ComponentTypes", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineCollectionCommonQuery_Statics::NewProp_ComponentTypes_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/Graph/MoviePipelineRenderLayerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMoviePipelineCollectionCommonQuery_Statics::NewProp_ComponentTypes = { "ComponentTypes", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoviePipelineCollectionCommonQuery, ComponentTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineCollectionCommonQuery_Statics::NewProp_ComponentTypes_MetaData), Z_Construct_UClass_UMoviePipelineCollectionCommonQuery_Statics::NewProp_ComponentTypes_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMoviePipelineCollectionCommonQuery_Statics::NewProp_QueryMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineCollectionCommonQuery_Statics::NewProp_QueryMode_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/Graph/MoviePipelineRenderLayerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMoviePipelineCollectionCommonQuery_Statics::NewProp_QueryMode = { "QueryMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoviePipelineCollectionCommonQuery, QueryMode), Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineCollectionCommonQueryMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineCollectionCommonQuery_Statics::NewProp_QueryMode_MetaData), Z_Construct_UClass_UMoviePipelineCollectionCommonQuery_Statics::NewProp_QueryMode_MetaData) }; // 1813519214
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMoviePipelineCollectionCommonQuery_Statics::NewProp_ActorNames_Inner = { "ActorNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineCollectionCommonQuery_Statics::NewProp_ActorNames_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/Graph/MoviePipelineRenderLayerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMoviePipelineCollectionCommonQuery_Statics::NewProp_ActorNames = { "ActorNames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoviePipelineCollectionCommonQuery, ActorNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineCollectionCommonQuery_Statics::NewProp_ActorNames_MetaData), Z_Construct_UClass_UMoviePipelineCollectionCommonQuery_Statics::NewProp_ActorNames_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMoviePipelineCollectionCommonQuery_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineCollectionCommonQuery_Statics::NewProp_Tags_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/Graph/MoviePipelineRenderLayerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMoviePipelineCollectionCommonQuery_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoviePipelineCollectionCommonQuery, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineCollectionCommonQuery_Statics::NewProp_Tags_MetaData), Z_Construct_UClass_UMoviePipelineCollectionCommonQuery_Statics::NewProp_Tags_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoviePipelineCollectionCommonQuery_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineCollectionCommonQuery_Statics::NewProp_ComponentTypes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineCollectionCommonQuery_Statics::NewProp_ComponentTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineCollectionCommonQuery_Statics::NewProp_QueryMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineCollectionCommonQuery_Statics::NewProp_QueryMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineCollectionCommonQuery_Statics::NewProp_ActorNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineCollectionCommonQuery_Statics::NewProp_ActorNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineCollectionCommonQuery_Statics::NewProp_Tags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineCollectionCommonQuery_Statics::NewProp_Tags,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineCollectionCommonQuery_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineCollectionCommonQuery>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineCollectionCommonQuery_Statics::ClassParams = {
		&UMoviePipelineCollectionCommonQuery::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMoviePipelineCollectionCommonQuery_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineCollectionCommonQuery_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineCollectionCommonQuery_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoviePipelineCollectionCommonQuery_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineCollectionCommonQuery_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMoviePipelineCollectionCommonQuery()
	{
		if (!Z_Registration_Info_UClass_UMoviePipelineCollectionCommonQuery.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoviePipelineCollectionCommonQuery.OuterSingleton, Z_Construct_UClass_UMoviePipelineCollectionCommonQuery_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMoviePipelineCollectionCommonQuery.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMoviePipelineCollectionCommonQuery>()
	{
		return UMoviePipelineCollectionCommonQuery::StaticClass();
	}
	UMoviePipelineCollectionCommonQuery::UMoviePipelineCollectionCommonQuery(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineCollectionCommonQuery);
	UMoviePipelineCollectionCommonQuery::~UMoviePipelineCollectionCommonQuery() {}
	DEFINE_FUNCTION(UMoviePipelineRenderLayer::execUndoPreview)
	{
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UndoPreview(Z_Param_World);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineRenderLayer::execPreview)
	{
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Preview(Z_Param_World);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineRenderLayer::execRemoveModifier)
	{
		P_GET_OBJECT(UMoviePipelineCollectionModifier,Z_Param_Modifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveModifier(Z_Param_Modifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineRenderLayer::execGetModifiers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UMoviePipelineCollectionModifier*>*)Z_Param__Result=P_THIS->GetModifiers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineRenderLayer::execAddModifier)
	{
		P_GET_OBJECT(UMoviePipelineCollectionModifier,Z_Param_Modifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddModifier(Z_Param_Modifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineRenderLayer::execGetCollectionByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMoviePipelineCollection**)Z_Param__Result=P_THIS->GetCollectionByName(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineRenderLayer::execSetRenderLayerName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NewName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRenderLayerName(Z_Param_NewName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineRenderLayer::execGetRenderLayerName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetRenderLayerName();
		P_NATIVE_END;
	}
	void UMoviePipelineRenderLayer::StaticRegisterNativesUMoviePipelineRenderLayer()
	{
		UClass* Class = UMoviePipelineRenderLayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddModifier", &UMoviePipelineRenderLayer::execAddModifier },
			{ "GetCollectionByName", &UMoviePipelineRenderLayer::execGetCollectionByName },
			{ "GetModifiers", &UMoviePipelineRenderLayer::execGetModifiers },
			{ "GetRenderLayerName", &UMoviePipelineRenderLayer::execGetRenderLayerName },
			{ "Preview", &UMoviePipelineRenderLayer::execPreview },
			{ "RemoveModifier", &UMoviePipelineRenderLayer::execRemoveModifier },
			{ "SetRenderLayerName", &UMoviePipelineRenderLayer::execSetRenderLayerName },
			{ "UndoPreview", &UMoviePipelineRenderLayer::execUndoPreview },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMoviePipelineRenderLayer_AddModifier_Statics
	{
		struct MoviePipelineRenderLayer_eventAddModifier_Parms
		{
			UMoviePipelineCollectionModifier* Modifier;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Modifier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineRenderLayer_AddModifier_Statics::NewProp_Modifier = { "Modifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoviePipelineRenderLayer_eventAddModifier_Parms, Modifier), Z_Construct_UClass_UMoviePipelineCollectionModifier_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineRenderLayer_AddModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineRenderLayer_AddModifier_Statics::NewProp_Modifier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineRenderLayer_AddModifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Layers" },
		{ "ModuleRelativePath", "Public/Graph/MoviePipelineRenderLayerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineRenderLayer_AddModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineRenderLayer, nullptr, "AddModifier", nullptr, nullptr, Z_Construct_UFunction_UMoviePipelineRenderLayer_AddModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineRenderLayer_AddModifier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoviePipelineRenderLayer_AddModifier_Statics::MoviePipelineRenderLayer_eventAddModifier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineRenderLayer_AddModifier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoviePipelineRenderLayer_AddModifier_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineRenderLayer_AddModifier_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMoviePipelineRenderLayer_AddModifier_Statics::MoviePipelineRenderLayer_eventAddModifier_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMoviePipelineRenderLayer_AddModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineRenderLayer_AddModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineRenderLayer_GetCollectionByName_Statics
	{
		struct MoviePipelineRenderLayer_eventGetCollectionByName_Parms
		{
			FString Name;
			UMoviePipelineCollection* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineRenderLayer_GetCollectionByName_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMoviePipelineRenderLayer_GetCollectionByName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoviePipelineRenderLayer_eventGetCollectionByName_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineRenderLayer_GetCollectionByName_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_UMoviePipelineRenderLayer_GetCollectionByName_Statics::NewProp_Name_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineRenderLayer_GetCollectionByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoviePipelineRenderLayer_eventGetCollectionByName_Parms, ReturnValue), Z_Construct_UClass_UMoviePipelineCollection_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineRenderLayer_GetCollectionByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineRenderLayer_GetCollectionByName_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineRenderLayer_GetCollectionByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineRenderLayer_GetCollectionByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Layers" },
		{ "ModuleRelativePath", "Public/Graph/MoviePipelineRenderLayerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineRenderLayer_GetCollectionByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineRenderLayer, nullptr, "GetCollectionByName", nullptr, nullptr, Z_Construct_UFunction_UMoviePipelineRenderLayer_GetCollectionByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineRenderLayer_GetCollectionByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoviePipelineRenderLayer_GetCollectionByName_Statics::MoviePipelineRenderLayer_eventGetCollectionByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineRenderLayer_GetCollectionByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoviePipelineRenderLayer_GetCollectionByName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineRenderLayer_GetCollectionByName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMoviePipelineRenderLayer_GetCollectionByName_Statics::MoviePipelineRenderLayer_eventGetCollectionByName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMoviePipelineRenderLayer_GetCollectionByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineRenderLayer_GetCollectionByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineRenderLayer_GetModifiers_Statics
	{
		struct MoviePipelineRenderLayer_eventGetModifiers_Parms
		{
			TArray<UMoviePipelineCollectionModifier*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineRenderLayer_GetModifiers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMoviePipelineCollectionModifier_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMoviePipelineRenderLayer_GetModifiers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoviePipelineRenderLayer_eventGetModifiers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineRenderLayer_GetModifiers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineRenderLayer_GetModifiers_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineRenderLayer_GetModifiers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineRenderLayer_GetModifiers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Layers" },
		{ "ModuleRelativePath", "Public/Graph/MoviePipelineRenderLayerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineRenderLayer_GetModifiers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineRenderLayer, nullptr, "GetModifiers", nullptr, nullptr, Z_Construct_UFunction_UMoviePipelineRenderLayer_GetModifiers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineRenderLayer_GetModifiers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoviePipelineRenderLayer_GetModifiers_Statics::MoviePipelineRenderLayer_eventGetModifiers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineRenderLayer_GetModifiers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoviePipelineRenderLayer_GetModifiers_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineRenderLayer_GetModifiers_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMoviePipelineRenderLayer_GetModifiers_Statics::MoviePipelineRenderLayer_eventGetModifiers_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMoviePipelineRenderLayer_GetModifiers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineRenderLayer_GetModifiers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineRenderLayer_GetRenderLayerName_Statics
	{
		struct MoviePipelineRenderLayer_eventGetRenderLayerName_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMoviePipelineRenderLayer_GetRenderLayerName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoviePipelineRenderLayer_eventGetRenderLayerName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineRenderLayer_GetRenderLayerName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineRenderLayer_GetRenderLayerName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineRenderLayer_GetRenderLayerName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Layers" },
		{ "ModuleRelativePath", "Public/Graph/MoviePipelineRenderLayerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineRenderLayer_GetRenderLayerName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineRenderLayer, nullptr, "GetRenderLayerName", nullptr, nullptr, Z_Construct_UFunction_UMoviePipelineRenderLayer_GetRenderLayerName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineRenderLayer_GetRenderLayerName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoviePipelineRenderLayer_GetRenderLayerName_Statics::MoviePipelineRenderLayer_eventGetRenderLayerName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineRenderLayer_GetRenderLayerName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoviePipelineRenderLayer_GetRenderLayerName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineRenderLayer_GetRenderLayerName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMoviePipelineRenderLayer_GetRenderLayerName_Statics::MoviePipelineRenderLayer_eventGetRenderLayerName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMoviePipelineRenderLayer_GetRenderLayerName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineRenderLayer_GetRenderLayerName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineRenderLayer_Preview_Statics
	{
		struct MoviePipelineRenderLayer_eventPreview_Parms
		{
			const UWorld* World;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineRenderLayer_Preview_Statics::NewProp_World_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineRenderLayer_Preview_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoviePipelineRenderLayer_eventPreview_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineRenderLayer_Preview_Statics::NewProp_World_MetaData), Z_Construct_UFunction_UMoviePipelineRenderLayer_Preview_Statics::NewProp_World_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineRenderLayer_Preview_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineRenderLayer_Preview_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineRenderLayer_Preview_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Layers" },
		{ "ModuleRelativePath", "Public/Graph/MoviePipelineRenderLayerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineRenderLayer_Preview_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineRenderLayer, nullptr, "Preview", nullptr, nullptr, Z_Construct_UFunction_UMoviePipelineRenderLayer_Preview_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineRenderLayer_Preview_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoviePipelineRenderLayer_Preview_Statics::MoviePipelineRenderLayer_eventPreview_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineRenderLayer_Preview_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoviePipelineRenderLayer_Preview_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineRenderLayer_Preview_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMoviePipelineRenderLayer_Preview_Statics::MoviePipelineRenderLayer_eventPreview_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMoviePipelineRenderLayer_Preview()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineRenderLayer_Preview_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineRenderLayer_RemoveModifier_Statics
	{
		struct MoviePipelineRenderLayer_eventRemoveModifier_Parms
		{
			UMoviePipelineCollectionModifier* Modifier;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Modifier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineRenderLayer_RemoveModifier_Statics::NewProp_Modifier = { "Modifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoviePipelineRenderLayer_eventRemoveModifier_Parms, Modifier), Z_Construct_UClass_UMoviePipelineCollectionModifier_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineRenderLayer_RemoveModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineRenderLayer_RemoveModifier_Statics::NewProp_Modifier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineRenderLayer_RemoveModifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Layers" },
		{ "ModuleRelativePath", "Public/Graph/MoviePipelineRenderLayerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineRenderLayer_RemoveModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineRenderLayer, nullptr, "RemoveModifier", nullptr, nullptr, Z_Construct_UFunction_UMoviePipelineRenderLayer_RemoveModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineRenderLayer_RemoveModifier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoviePipelineRenderLayer_RemoveModifier_Statics::MoviePipelineRenderLayer_eventRemoveModifier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineRenderLayer_RemoveModifier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoviePipelineRenderLayer_RemoveModifier_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineRenderLayer_RemoveModifier_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMoviePipelineRenderLayer_RemoveModifier_Statics::MoviePipelineRenderLayer_eventRemoveModifier_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMoviePipelineRenderLayer_RemoveModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineRenderLayer_RemoveModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineRenderLayer_SetRenderLayerName_Statics
	{
		struct MoviePipelineRenderLayer_eventSetRenderLayerName_Parms
		{
			FString NewName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineRenderLayer_SetRenderLayerName_Statics::NewProp_NewName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMoviePipelineRenderLayer_SetRenderLayerName_Statics::NewProp_NewName = { "NewName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoviePipelineRenderLayer_eventSetRenderLayerName_Parms, NewName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineRenderLayer_SetRenderLayerName_Statics::NewProp_NewName_MetaData), Z_Construct_UFunction_UMoviePipelineRenderLayer_SetRenderLayerName_Statics::NewProp_NewName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineRenderLayer_SetRenderLayerName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineRenderLayer_SetRenderLayerName_Statics::NewProp_NewName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineRenderLayer_SetRenderLayerName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Layers" },
		{ "ModuleRelativePath", "Public/Graph/MoviePipelineRenderLayerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineRenderLayer_SetRenderLayerName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineRenderLayer, nullptr, "SetRenderLayerName", nullptr, nullptr, Z_Construct_UFunction_UMoviePipelineRenderLayer_SetRenderLayerName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineRenderLayer_SetRenderLayerName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoviePipelineRenderLayer_SetRenderLayerName_Statics::MoviePipelineRenderLayer_eventSetRenderLayerName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineRenderLayer_SetRenderLayerName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoviePipelineRenderLayer_SetRenderLayerName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineRenderLayer_SetRenderLayerName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMoviePipelineRenderLayer_SetRenderLayerName_Statics::MoviePipelineRenderLayer_eventSetRenderLayerName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMoviePipelineRenderLayer_SetRenderLayerName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineRenderLayer_SetRenderLayerName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineRenderLayer_UndoPreview_Statics
	{
		struct MoviePipelineRenderLayer_eventUndoPreview_Parms
		{
			const UWorld* World;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineRenderLayer_UndoPreview_Statics::NewProp_World_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineRenderLayer_UndoPreview_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoviePipelineRenderLayer_eventUndoPreview_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineRenderLayer_UndoPreview_Statics::NewProp_World_MetaData), Z_Construct_UFunction_UMoviePipelineRenderLayer_UndoPreview_Statics::NewProp_World_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineRenderLayer_UndoPreview_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineRenderLayer_UndoPreview_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineRenderLayer_UndoPreview_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Layers" },
		{ "ModuleRelativePath", "Public/Graph/MoviePipelineRenderLayerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineRenderLayer_UndoPreview_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineRenderLayer, nullptr, "UndoPreview", nullptr, nullptr, Z_Construct_UFunction_UMoviePipelineRenderLayer_UndoPreview_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineRenderLayer_UndoPreview_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoviePipelineRenderLayer_UndoPreview_Statics::MoviePipelineRenderLayer_eventUndoPreview_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineRenderLayer_UndoPreview_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoviePipelineRenderLayer_UndoPreview_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineRenderLayer_UndoPreview_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMoviePipelineRenderLayer_UndoPreview_Statics::MoviePipelineRenderLayer_eventUndoPreview_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMoviePipelineRenderLayer_UndoPreview()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineRenderLayer_UndoPreview_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoviePipelineRenderLayer);
	UClass* Z_Construct_UClass_UMoviePipelineRenderLayer_NoRegister()
	{
		return UMoviePipelineRenderLayer::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineRenderLayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderLayerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RenderLayerName;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Modifiers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Modifiers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Modifiers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineRenderLayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineRenderLayer_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMoviePipelineRenderLayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMoviePipelineRenderLayer_AddModifier, "AddModifier" }, // 1950018506
		{ &Z_Construct_UFunction_UMoviePipelineRenderLayer_GetCollectionByName, "GetCollectionByName" }, // 3014738545
		{ &Z_Construct_UFunction_UMoviePipelineRenderLayer_GetModifiers, "GetModifiers" }, // 2200376320
		{ &Z_Construct_UFunction_UMoviePipelineRenderLayer_GetRenderLayerName, "GetRenderLayerName" }, // 1521178685
		{ &Z_Construct_UFunction_UMoviePipelineRenderLayer_Preview, "Preview" }, // 1225026963
		{ &Z_Construct_UFunction_UMoviePipelineRenderLayer_RemoveModifier, "RemoveModifier" }, // 3796854889
		{ &Z_Construct_UFunction_UMoviePipelineRenderLayer_SetRenderLayerName, "SetRenderLayerName" }, // 871650349
		{ &Z_Construct_UFunction_UMoviePipelineRenderLayer_UndoPreview, "UndoPreview" }, // 1988988954
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineRenderLayer_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineRenderLayer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Provides a means of assembling modifiers together to generate a desired view of a scene. \n */" },
		{ "IncludePath", "Graph/MoviePipelineRenderLayerSubsystem.h" },
		{ "ModuleRelativePath", "Public/Graph/MoviePipelineRenderLayerSubsystem.h" },
		{ "ToolTip", "Provides a means of assembling modifiers together to generate a desired view of a scene." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineRenderLayer_Statics::NewProp_RenderLayerName_MetaData[] = {
		{ "Comment", "/** The name of this render layer. */" },
		{ "ModuleRelativePath", "Public/Graph/MoviePipelineRenderLayerSubsystem.h" },
		{ "ToolTip", "The name of this render layer." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMoviePipelineRenderLayer_Statics::NewProp_RenderLayerName = { "RenderLayerName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoviePipelineRenderLayer, RenderLayerName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineRenderLayer_Statics::NewProp_RenderLayerName_MetaData), Z_Construct_UClass_UMoviePipelineRenderLayer_Statics::NewProp_RenderLayerName_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMoviePipelineRenderLayer_Statics::NewProp_Modifiers_Inner = { "Modifiers", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMoviePipelineCollectionModifier_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineRenderLayer_Statics::NewProp_Modifiers_MetaData[] = {
		{ "Comment", "/** The modifiers that are active when this render layer is active. */" },
		{ "ModuleRelativePath", "Public/Graph/MoviePipelineRenderLayerSubsystem.h" },
		{ "ToolTip", "The modifiers that are active when this render layer is active." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMoviePipelineRenderLayer_Statics::NewProp_Modifiers = { "Modifiers", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoviePipelineRenderLayer, Modifiers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineRenderLayer_Statics::NewProp_Modifiers_MetaData), Z_Construct_UClass_UMoviePipelineRenderLayer_Statics::NewProp_Modifiers_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoviePipelineRenderLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineRenderLayer_Statics::NewProp_RenderLayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineRenderLayer_Statics::NewProp_Modifiers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineRenderLayer_Statics::NewProp_Modifiers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineRenderLayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineRenderLayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineRenderLayer_Statics::ClassParams = {
		&UMoviePipelineRenderLayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMoviePipelineRenderLayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineRenderLayer_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineRenderLayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoviePipelineRenderLayer_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineRenderLayer_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMoviePipelineRenderLayer()
	{
		if (!Z_Registration_Info_UClass_UMoviePipelineRenderLayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoviePipelineRenderLayer.OuterSingleton, Z_Construct_UClass_UMoviePipelineRenderLayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMoviePipelineRenderLayer.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMoviePipelineRenderLayer>()
	{
		return UMoviePipelineRenderLayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineRenderLayer);
	UMoviePipelineRenderLayer::~UMoviePipelineRenderLayer() {}
	DEFINE_FUNCTION(UMoviePipelineRenderLayerSubsystem::execClearModifierPreview)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearModifierPreview();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineRenderLayerSubsystem::execPreviewModifier)
	{
		P_GET_OBJECT(UMoviePipelineCollectionModifier,Z_Param_Modifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PreviewModifier(Z_Param_Modifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineRenderLayerSubsystem::execClearCollectionPreview)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearCollectionPreview();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineRenderLayerSubsystem::execPreviewCollection)
	{
		P_GET_OBJECT(UMoviePipelineCollection,Z_Param_Collection);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PreviewCollection(Z_Param_Collection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineRenderLayerSubsystem::execClearActiveRenderLayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearActiveRenderLayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineRenderLayerSubsystem::execSetActiveRenderLayerByObj)
	{
		P_GET_OBJECT(UMoviePipelineRenderLayer,Z_Param_RenderLayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActiveRenderLayerByObj(Z_Param_RenderLayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineRenderLayerSubsystem::execSetActiveRenderLayerByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_RenderLayerName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActiveRenderLayerByName(Z_Param_RenderLayerName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineRenderLayerSubsystem::execGetActiveRenderLayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMoviePipelineRenderLayer**)Z_Param__Result=P_THIS->GetActiveRenderLayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineRenderLayerSubsystem::execRemoveRenderLayer)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_RenderLayerName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveRenderLayer(Z_Param_RenderLayerName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineRenderLayerSubsystem::execGetRenderLayers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UMoviePipelineRenderLayer*>*)Z_Param__Result=P_THIS->GetRenderLayers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineRenderLayerSubsystem::execAddRenderLayer)
	{
		P_GET_OBJECT(UMoviePipelineRenderLayer,Z_Param_RenderLayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddRenderLayer(Z_Param_RenderLayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineRenderLayerSubsystem::execReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineRenderLayerSubsystem::execGetFromWorld)
	{
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMoviePipelineRenderLayerSubsystem**)Z_Param__Result=UMoviePipelineRenderLayerSubsystem::GetFromWorld(Z_Param_World);
		P_NATIVE_END;
	}
	void UMoviePipelineRenderLayerSubsystem::StaticRegisterNativesUMoviePipelineRenderLayerSubsystem()
	{
		UClass* Class = UMoviePipelineRenderLayerSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddRenderLayer", &UMoviePipelineRenderLayerSubsystem::execAddRenderLayer },
			{ "ClearActiveRenderLayer", &UMoviePipelineRenderLayerSubsystem::execClearActiveRenderLayer },
			{ "ClearCollectionPreview", &UMoviePipelineRenderLayerSubsystem::execClearCollectionPreview },
			{ "ClearModifierPreview", &UMoviePipelineRenderLayerSubsystem::execClearModifierPreview },
			{ "GetActiveRenderLayer", &UMoviePipelineRenderLayerSubsystem::execGetActiveRenderLayer },
			{ "GetFromWorld", &UMoviePipelineRenderLayerSubsystem::execGetFromWorld },
			{ "GetRenderLayers", &UMoviePipelineRenderLayerSubsystem::execGetRenderLayers },
			{ "PreviewCollection", &UMoviePipelineRenderLayerSubsystem::execPreviewCollection },
			{ "PreviewModifier", &UMoviePipelineRenderLayerSubsystem::execPreviewModifier },
			{ "RemoveRenderLayer", &UMoviePipelineRenderLayerSubsystem::execRemoveRenderLayer },
			{ "Reset", &UMoviePipelineRenderLayerSubsystem::execReset },
			{ "SetActiveRenderLayerByName", &UMoviePipelineRenderLayerSubsystem::execSetActiveRenderLayerByName },
			{ "SetActiveRenderLayerByObj", &UMoviePipelineRenderLayerSubsystem::execSetActiveRenderLayerByObj },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_AddRenderLayer_Statics
	{
		struct MoviePipelineRenderLayerSubsystem_eventAddRenderLayer_Parms
		{
			UMoviePipelineRenderLayer* RenderLayer;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderLayer;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_AddRenderLayer_Statics::NewProp_RenderLayer = { "RenderLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoviePipelineRenderLayerSubsystem_eventAddRenderLayer_Parms, RenderLayer), Z_Construct_UClass_UMoviePipelineRenderLayer_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_AddRenderLayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MoviePipelineRenderLayerSubsystem_eventAddRenderLayer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_AddRenderLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MoviePipelineRenderLayerSubsystem_eventAddRenderLayer_Parms), &Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_AddRenderLayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_AddRenderLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_AddRenderLayer_Statics::NewProp_RenderLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_AddRenderLayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_AddRenderLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Layers" },
		{ "Comment", "/**\n\x09 * Adds a render layer to the system, which can later be made active by SetActiveRenderLayer*(). Returns true\n\x09 * if the layer was added successfully, else false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Graph/MoviePipelineRenderLayerSubsystem.h" },
		{ "ToolTip", "Adds a render layer to the system, which can later be made active by SetActiveRenderLayer*(). Returns true\nif the layer was added successfully, else false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_AddRenderLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem, nullptr, "AddRenderLayer", nullptr, nullptr, Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_AddRenderLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_AddRenderLayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_AddRenderLayer_Statics::MoviePipelineRenderLayerSubsystem_eventAddRenderLayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_AddRenderLayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_AddRenderLayer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_AddRenderLayer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_AddRenderLayer_Statics::MoviePipelineRenderLayerSubsystem_eventAddRenderLayer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_AddRenderLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_AddRenderLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_ClearActiveRenderLayer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_ClearActiveRenderLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Layers" },
		{ "ModuleRelativePath", "Public/Graph/MoviePipelineRenderLayerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_ClearActiveRenderLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem, nullptr, "ClearActiveRenderLayer", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_ClearActiveRenderLayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_ClearActiveRenderLayer_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_ClearActiveRenderLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_ClearActiveRenderLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_ClearCollectionPreview_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_ClearCollectionPreview_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Layers" },
		{ "ModuleRelativePath", "Public/Graph/MoviePipelineRenderLayerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_ClearCollectionPreview_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem, nullptr, "ClearCollectionPreview", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_ClearCollectionPreview_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_ClearCollectionPreview_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_ClearCollectionPreview()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_ClearCollectionPreview_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_ClearModifierPreview_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_ClearModifierPreview_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Layers" },
		{ "ModuleRelativePath", "Public/Graph/MoviePipelineRenderLayerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_ClearModifierPreview_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem, nullptr, "ClearModifierPreview", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_ClearModifierPreview_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_ClearModifierPreview_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_ClearModifierPreview()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_ClearModifierPreview_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_GetActiveRenderLayer_Statics
	{
		struct MoviePipelineRenderLayerSubsystem_eventGetActiveRenderLayer_Parms
		{
			UMoviePipelineRenderLayer* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_GetActiveRenderLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoviePipelineRenderLayerSubsystem_eventGetActiveRenderLayer_Parms, ReturnValue), Z_Construct_UClass_UMoviePipelineRenderLayer_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_GetActiveRenderLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_GetActiveRenderLayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_GetActiveRenderLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Layers" },
		{ "ModuleRelativePath", "Public/Graph/MoviePipelineRenderLayerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_GetActiveRenderLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem, nullptr, "GetActiveRenderLayer", nullptr, nullptr, Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_GetActiveRenderLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_GetActiveRenderLayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_GetActiveRenderLayer_Statics::MoviePipelineRenderLayerSubsystem_eventGetActiveRenderLayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_GetActiveRenderLayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_GetActiveRenderLayer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_GetActiveRenderLayer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_GetActiveRenderLayer_Statics::MoviePipelineRenderLayerSubsystem_eventGetActiveRenderLayer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_GetActiveRenderLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_GetActiveRenderLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_GetFromWorld_Statics
	{
		struct MoviePipelineRenderLayerSubsystem_eventGetFromWorld_Parms
		{
			const UWorld* World;
			UMoviePipelineRenderLayerSubsystem* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_GetFromWorld_Statics::NewProp_World_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_GetFromWorld_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoviePipelineRenderLayerSubsystem_eventGetFromWorld_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_GetFromWorld_Statics::NewProp_World_MetaData), Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_GetFromWorld_Statics::NewProp_World_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_GetFromWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoviePipelineRenderLayerSubsystem_eventGetFromWorld_Parms, ReturnValue), Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_GetFromWorld_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_GetFromWorld_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_GetFromWorld_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_GetFromWorld_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Layers" },
		{ "Comment", "/* Get this subsystem for a specific world. Handy for use from Python. */" },
		{ "ModuleRelativePath", "Public/Graph/MoviePipelineRenderLayerSubsystem.h" },
		{ "ToolTip", "Get this subsystem for a specific world. Handy for use from Python." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_GetFromWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem, nullptr, "GetFromWorld", nullptr, nullptr, Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_GetFromWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_GetFromWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_GetFromWorld_Statics::MoviePipelineRenderLayerSubsystem_eventGetFromWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_GetFromWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_GetFromWorld_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_GetFromWorld_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_GetFromWorld_Statics::MoviePipelineRenderLayerSubsystem_eventGetFromWorld_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_GetFromWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_GetFromWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_GetRenderLayers_Statics
	{
		struct MoviePipelineRenderLayerSubsystem_eventGetRenderLayers_Parms
		{
			TArray<UMoviePipelineRenderLayer*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_GetRenderLayers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMoviePipelineRenderLayer_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_GetRenderLayers_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_GetRenderLayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoviePipelineRenderLayerSubsystem_eventGetRenderLayers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_GetRenderLayers_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_GetRenderLayers_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_GetRenderLayers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_GetRenderLayers_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_GetRenderLayers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_GetRenderLayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Layers" },
		{ "ModuleRelativePath", "Public/Graph/MoviePipelineRenderLayerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_GetRenderLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem, nullptr, "GetRenderLayers", nullptr, nullptr, Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_GetRenderLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_GetRenderLayers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_GetRenderLayers_Statics::MoviePipelineRenderLayerSubsystem_eventGetRenderLayers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_GetRenderLayers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_GetRenderLayers_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_GetRenderLayers_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_GetRenderLayers_Statics::MoviePipelineRenderLayerSubsystem_eventGetRenderLayers_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_GetRenderLayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_GetRenderLayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_PreviewCollection_Statics
	{
		struct MoviePipelineRenderLayerSubsystem_eventPreviewCollection_Parms
		{
			UMoviePipelineCollection* Collection;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Collection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_PreviewCollection_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoviePipelineRenderLayerSubsystem_eventPreviewCollection_Parms, Collection), Z_Construct_UClass_UMoviePipelineCollection_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_PreviewCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_PreviewCollection_Statics::NewProp_Collection,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_PreviewCollection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Layers" },
		{ "ModuleRelativePath", "Public/Graph/MoviePipelineRenderLayerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_PreviewCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem, nullptr, "PreviewCollection", nullptr, nullptr, Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_PreviewCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_PreviewCollection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_PreviewCollection_Statics::MoviePipelineRenderLayerSubsystem_eventPreviewCollection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_PreviewCollection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_PreviewCollection_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_PreviewCollection_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_PreviewCollection_Statics::MoviePipelineRenderLayerSubsystem_eventPreviewCollection_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_PreviewCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_PreviewCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_PreviewModifier_Statics
	{
		struct MoviePipelineRenderLayerSubsystem_eventPreviewModifier_Parms
		{
			UMoviePipelineCollectionModifier* Modifier;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Modifier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_PreviewModifier_Statics::NewProp_Modifier = { "Modifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoviePipelineRenderLayerSubsystem_eventPreviewModifier_Parms, Modifier), Z_Construct_UClass_UMoviePipelineCollectionModifier_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_PreviewModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_PreviewModifier_Statics::NewProp_Modifier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_PreviewModifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Layers" },
		{ "ModuleRelativePath", "Public/Graph/MoviePipelineRenderLayerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_PreviewModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem, nullptr, "PreviewModifier", nullptr, nullptr, Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_PreviewModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_PreviewModifier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_PreviewModifier_Statics::MoviePipelineRenderLayerSubsystem_eventPreviewModifier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_PreviewModifier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_PreviewModifier_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_PreviewModifier_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_PreviewModifier_Statics::MoviePipelineRenderLayerSubsystem_eventPreviewModifier_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_PreviewModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_PreviewModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_RemoveRenderLayer_Statics
	{
		struct MoviePipelineRenderLayerSubsystem_eventRemoveRenderLayer_Parms
		{
			FString RenderLayerName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderLayerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RenderLayerName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_RemoveRenderLayer_Statics::NewProp_RenderLayerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_RemoveRenderLayer_Statics::NewProp_RenderLayerName = { "RenderLayerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoviePipelineRenderLayerSubsystem_eventRemoveRenderLayer_Parms, RenderLayerName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_RemoveRenderLayer_Statics::NewProp_RenderLayerName_MetaData), Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_RemoveRenderLayer_Statics::NewProp_RenderLayerName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_RemoveRenderLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_RemoveRenderLayer_Statics::NewProp_RenderLayerName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_RemoveRenderLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Layers" },
		{ "ModuleRelativePath", "Public/Graph/MoviePipelineRenderLayerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_RemoveRenderLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem, nullptr, "RemoveRenderLayer", nullptr, nullptr, Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_RemoveRenderLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_RemoveRenderLayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_RemoveRenderLayer_Statics::MoviePipelineRenderLayerSubsystem_eventRemoveRenderLayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_RemoveRenderLayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_RemoveRenderLayer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_RemoveRenderLayer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_RemoveRenderLayer_Statics::MoviePipelineRenderLayerSubsystem_eventRemoveRenderLayer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_RemoveRenderLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_RemoveRenderLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_Reset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_Reset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Layers" },
		{ "Comment", "/** Clear out all tracked render layers and collections. */" },
		{ "ModuleRelativePath", "Public/Graph/MoviePipelineRenderLayerSubsystem.h" },
		{ "ToolTip", "Clear out all tracked render layers and collections." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem, nullptr, "Reset", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_Reset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_Reset_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_SetActiveRenderLayerByName_Statics
	{
		struct MoviePipelineRenderLayerSubsystem_eventSetActiveRenderLayerByName_Parms
		{
			FString RenderLayerName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderLayerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RenderLayerName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_SetActiveRenderLayerByName_Statics::NewProp_RenderLayerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_SetActiveRenderLayerByName_Statics::NewProp_RenderLayerName = { "RenderLayerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoviePipelineRenderLayerSubsystem_eventSetActiveRenderLayerByName_Parms, RenderLayerName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_SetActiveRenderLayerByName_Statics::NewProp_RenderLayerName_MetaData), Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_SetActiveRenderLayerByName_Statics::NewProp_RenderLayerName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_SetActiveRenderLayerByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_SetActiveRenderLayerByName_Statics::NewProp_RenderLayerName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_SetActiveRenderLayerByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Layers" },
		{ "Comment", "/** Previews the layer with the given name. The layer needs to have been registered with AddRenderLayer(). */" },
		{ "ModuleRelativePath", "Public/Graph/MoviePipelineRenderLayerSubsystem.h" },
		{ "ToolTip", "Previews the layer with the given name. The layer needs to have been registered with AddRenderLayer()." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_SetActiveRenderLayerByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem, nullptr, "SetActiveRenderLayerByName", nullptr, nullptr, Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_SetActiveRenderLayerByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_SetActiveRenderLayerByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_SetActiveRenderLayerByName_Statics::MoviePipelineRenderLayerSubsystem_eventSetActiveRenderLayerByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_SetActiveRenderLayerByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_SetActiveRenderLayerByName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_SetActiveRenderLayerByName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_SetActiveRenderLayerByName_Statics::MoviePipelineRenderLayerSubsystem_eventSetActiveRenderLayerByName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_SetActiveRenderLayerByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_SetActiveRenderLayerByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_SetActiveRenderLayerByObj_Statics
	{
		struct MoviePipelineRenderLayerSubsystem_eventSetActiveRenderLayerByObj_Parms
		{
			UMoviePipelineRenderLayer* RenderLayer;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderLayer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_SetActiveRenderLayerByObj_Statics::NewProp_RenderLayer = { "RenderLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoviePipelineRenderLayerSubsystem_eventSetActiveRenderLayerByObj_Parms, RenderLayer), Z_Construct_UClass_UMoviePipelineRenderLayer_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_SetActiveRenderLayerByObj_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_SetActiveRenderLayerByObj_Statics::NewProp_RenderLayer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_SetActiveRenderLayerByObj_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Layers" },
		{ "Comment", "/** Previews the given layer. The layer does not need to have been registered with AddRenderLayer(). */" },
		{ "ModuleRelativePath", "Public/Graph/MoviePipelineRenderLayerSubsystem.h" },
		{ "ToolTip", "Previews the given layer. The layer does not need to have been registered with AddRenderLayer()." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_SetActiveRenderLayerByObj_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem, nullptr, "SetActiveRenderLayerByObj", nullptr, nullptr, Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_SetActiveRenderLayerByObj_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_SetActiveRenderLayerByObj_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_SetActiveRenderLayerByObj_Statics::MoviePipelineRenderLayerSubsystem_eventSetActiveRenderLayerByObj_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_SetActiveRenderLayerByObj_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_SetActiveRenderLayerByObj_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_SetActiveRenderLayerByObj_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_SetActiveRenderLayerByObj_Statics::MoviePipelineRenderLayerSubsystem_eventSetActiveRenderLayerByObj_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_SetActiveRenderLayerByObj()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_SetActiveRenderLayerByObj_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoviePipelineRenderLayerSubsystem);
	UClass* Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem_NoRegister()
	{
		return UMoviePipelineRenderLayerSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RenderLayers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderLayers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RenderLayers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveRenderLayer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActiveRenderLayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveCollection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActiveCollection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveModifier_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActiveModifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisualizationRenderLayer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VisualizationRenderLayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisualizationEmptyCollection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VisualizationEmptyCollection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisualizationModifier_HideWorld_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VisualizationModifier_HideWorld;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisualizationModifier_VisibleCollections_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VisualizationModifier_VisibleCollections;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_AddRenderLayer, "AddRenderLayer" }, // 2352292446
		{ &Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_ClearActiveRenderLayer, "ClearActiveRenderLayer" }, // 3222272160
		{ &Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_ClearCollectionPreview, "ClearCollectionPreview" }, // 1512162998
		{ &Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_ClearModifierPreview, "ClearModifierPreview" }, // 1178409286
		{ &Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_GetActiveRenderLayer, "GetActiveRenderLayer" }, // 2093769866
		{ &Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_GetFromWorld, "GetFromWorld" }, // 4272468266
		{ &Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_GetRenderLayers, "GetRenderLayers" }, // 1781925308
		{ &Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_PreviewCollection, "PreviewCollection" }, // 2947203372
		{ &Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_PreviewModifier, "PreviewModifier" }, // 259751799
		{ &Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_RemoveRenderLayer, "RemoveRenderLayer" }, // 3215887541
		{ &Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_Reset, "Reset" }, // 3160809982
		{ &Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_SetActiveRenderLayerByName, "SetActiveRenderLayerByName" }, // 79778904
		{ &Z_Construct_UFunction_UMoviePipelineRenderLayerSubsystem_SetActiveRenderLayerByObj, "SetActiveRenderLayerByObj" }, // 1283557034
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The primary means of controlling render layers in MRQ. Render layers can be added/registered with the subsystem, then\n * made active in order to view them. Collections and modifiers can also be viewed, but they do not need to be added to\n * the subsystem ahead of time.\n */" },
		{ "IncludePath", "Graph/MoviePipelineRenderLayerSubsystem.h" },
		{ "ModuleRelativePath", "Public/Graph/MoviePipelineRenderLayerSubsystem.h" },
		{ "ToolTip", "The primary means of controlling render layers in MRQ. Render layers can be added/registered with the subsystem, then\nmade active in order to view them. Collections and modifiers can also be viewed, but they do not need to be added to\nthe subsystem ahead of time." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem_Statics::NewProp_RenderLayers_Inner = { "RenderLayers", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMoviePipelineRenderLayer_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem_Statics::NewProp_RenderLayers_MetaData[] = {
		{ "Comment", "/** Render layers which have been added/registered with the subsystem. These can be found by name. */" },
		{ "ModuleRelativePath", "Public/Graph/MoviePipelineRenderLayerSubsystem.h" },
		{ "ToolTip", "Render layers which have been added/registered with the subsystem. These can be found by name." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem_Statics::NewProp_RenderLayers = { "RenderLayers", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoviePipelineRenderLayerSubsystem, RenderLayers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem_Statics::NewProp_RenderLayers_MetaData), Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem_Statics::NewProp_RenderLayers_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem_Statics::NewProp_ActiveRenderLayer_MetaData[] = {
		{ "Comment", "/** The render layer that is currently being viewed/previewed. */" },
		{ "ModuleRelativePath", "Public/Graph/MoviePipelineRenderLayerSubsystem.h" },
		{ "ToolTip", "The render layer that is currently being viewed/previewed." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem_Statics::NewProp_ActiveRenderLayer = { "ActiveRenderLayer", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoviePipelineRenderLayerSubsystem, ActiveRenderLayer), Z_Construct_UClass_UMoviePipelineRenderLayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem_Statics::NewProp_ActiveRenderLayer_MetaData), Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem_Statics::NewProp_ActiveRenderLayer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem_Statics::NewProp_ActiveCollection_MetaData[] = {
		{ "Comment", "/** The collection that is currently being viewed/previewed. */" },
		{ "ModuleRelativePath", "Public/Graph/MoviePipelineRenderLayerSubsystem.h" },
		{ "ToolTip", "The collection that is currently being viewed/previewed." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem_Statics::NewProp_ActiveCollection = { "ActiveCollection", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoviePipelineRenderLayerSubsystem, ActiveCollection), Z_Construct_UClass_UMoviePipelineCollection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem_Statics::NewProp_ActiveCollection_MetaData), Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem_Statics::NewProp_ActiveCollection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem_Statics::NewProp_ActiveModifier_MetaData[] = {
		{ "Comment", "/** The modifier that is currently being viewed/previewed. */" },
		{ "ModuleRelativePath", "Public/Graph/MoviePipelineRenderLayerSubsystem.h" },
		{ "ToolTip", "The modifier that is currently being viewed/previewed." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem_Statics::NewProp_ActiveModifier = { "ActiveModifier", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoviePipelineRenderLayerSubsystem, ActiveModifier), Z_Construct_UClass_UMoviePipelineCollectionModifier_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem_Statics::NewProp_ActiveModifier_MetaData), Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem_Statics::NewProp_ActiveModifier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem_Statics::NewProp_VisualizationRenderLayer_MetaData[] = {
		{ "Comment", "/** A render layer dedicated to visualizing collections and modifiers. */" },
		{ "ModuleRelativePath", "Public/Graph/MoviePipelineRenderLayerSubsystem.h" },
		{ "ToolTip", "A render layer dedicated to visualizing collections and modifiers." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem_Statics::NewProp_VisualizationRenderLayer = { "VisualizationRenderLayer", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoviePipelineRenderLayerSubsystem, VisualizationRenderLayer), Z_Construct_UClass_UMoviePipelineRenderLayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem_Statics::NewProp_VisualizationRenderLayer_MetaData), Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem_Statics::NewProp_VisualizationRenderLayer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem_Statics::NewProp_VisualizationEmptyCollection_MetaData[] = {
		{ "Comment", "/** Empty collection used for visualization purposes (in conjunction w/ the viz render layer). */" },
		{ "ModuleRelativePath", "Public/Graph/MoviePipelineRenderLayerSubsystem.h" },
		{ "ToolTip", "Empty collection used for visualization purposes (in conjunction w/ the viz render layer)." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem_Statics::NewProp_VisualizationEmptyCollection = { "VisualizationEmptyCollection", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoviePipelineRenderLayerSubsystem, VisualizationEmptyCollection), Z_Construct_UClass_UMoviePipelineCollection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem_Statics::NewProp_VisualizationEmptyCollection_MetaData), Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem_Statics::NewProp_VisualizationEmptyCollection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem_Statics::NewProp_VisualizationModifier_HideWorld_MetaData[] = {
		{ "Comment", "/** A modifier used for visualization purposes (to hide the entire world). */" },
		{ "ModuleRelativePath", "Public/Graph/MoviePipelineRenderLayerSubsystem.h" },
		{ "ToolTip", "A modifier used for visualization purposes (to hide the entire world)." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem_Statics::NewProp_VisualizationModifier_HideWorld = { "VisualizationModifier_HideWorld", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoviePipelineRenderLayerSubsystem, VisualizationModifier_HideWorld), Z_Construct_UClass_UMoviePipelineVisibilityModifier_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem_Statics::NewProp_VisualizationModifier_HideWorld_MetaData), Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem_Statics::NewProp_VisualizationModifier_HideWorld_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem_Statics::NewProp_VisualizationModifier_VisibleCollections_MetaData[] = {
		{ "Comment", "/** A modifier used for visualization purposes (to show collections used with the modifier). */" },
		{ "ModuleRelativePath", "Public/Graph/MoviePipelineRenderLayerSubsystem.h" },
		{ "ToolTip", "A modifier used for visualization purposes (to show collections used with the modifier)." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem_Statics::NewProp_VisualizationModifier_VisibleCollections = { "VisualizationModifier_VisibleCollections", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoviePipelineRenderLayerSubsystem, VisualizationModifier_VisibleCollections), Z_Construct_UClass_UMoviePipelineVisibilityModifier_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem_Statics::NewProp_VisualizationModifier_VisibleCollections_MetaData), Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem_Statics::NewProp_VisualizationModifier_VisibleCollections_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem_Statics::NewProp_RenderLayers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem_Statics::NewProp_RenderLayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem_Statics::NewProp_ActiveRenderLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem_Statics::NewProp_ActiveCollection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem_Statics::NewProp_ActiveModifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem_Statics::NewProp_VisualizationRenderLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem_Statics::NewProp_VisualizationEmptyCollection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem_Statics::NewProp_VisualizationModifier_HideWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem_Statics::NewProp_VisualizationModifier_VisibleCollections,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineRenderLayerSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem_Statics::ClassParams = {
		&UMoviePipelineRenderLayerSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem()
	{
		if (!Z_Registration_Info_UClass_UMoviePipelineRenderLayerSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoviePipelineRenderLayerSubsystem.OuterSingleton, Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMoviePipelineRenderLayerSubsystem.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMoviePipelineRenderLayerSubsystem>()
	{
		return UMoviePipelineRenderLayerSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineRenderLayerSubsystem);
	UMoviePipelineRenderLayerSubsystem::~UMoviePipelineRenderLayerSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MoviePipelineRenderLayerSubsystem_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MoviePipelineRenderLayerSubsystem_h_Statics::EnumInfo[] = {
		{ EMoviePipelineCollectionCommonQueryMode_StaticEnum, TEXT("EMoviePipelineCollectionCommonQueryMode"), &Z_Registration_Info_UEnum_EMoviePipelineCollectionCommonQueryMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1813519214U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MoviePipelineRenderLayerSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMoviePipelineCollection, UMoviePipelineCollection::StaticClass, TEXT("UMoviePipelineCollection"), &Z_Registration_Info_UClass_UMoviePipelineCollection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoviePipelineCollection), 2542747113U) },
		{ Z_Construct_UClass_UMoviePipelineCollectionModifier, UMoviePipelineCollectionModifier::StaticClass, TEXT("UMoviePipelineCollectionModifier"), &Z_Registration_Info_UClass_UMoviePipelineCollectionModifier, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoviePipelineCollectionModifier), 1413735489U) },
		{ Z_Construct_UClass_UMoviePipelineMaterialModifier, UMoviePipelineMaterialModifier::StaticClass, TEXT("UMoviePipelineMaterialModifier"), &Z_Registration_Info_UClass_UMoviePipelineMaterialModifier, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoviePipelineMaterialModifier), 954950103U) },
		{ Z_Construct_UClass_UMoviePipelineVisibilityModifier, UMoviePipelineVisibilityModifier::StaticClass, TEXT("UMoviePipelineVisibilityModifier"), &Z_Registration_Info_UClass_UMoviePipelineVisibilityModifier, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoviePipelineVisibilityModifier), 340790393U) },
		{ Z_Construct_UClass_UMoviePipelineCollectionQuery, UMoviePipelineCollectionQuery::StaticClass, TEXT("UMoviePipelineCollectionQuery"), &Z_Registration_Info_UClass_UMoviePipelineCollectionQuery, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoviePipelineCollectionQuery), 3099024690U) },
		{ Z_Construct_UClass_UMoviePipelineCollectionCommonQuery, UMoviePipelineCollectionCommonQuery::StaticClass, TEXT("UMoviePipelineCollectionCommonQuery"), &Z_Registration_Info_UClass_UMoviePipelineCollectionCommonQuery, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoviePipelineCollectionCommonQuery), 989079501U) },
		{ Z_Construct_UClass_UMoviePipelineRenderLayer, UMoviePipelineRenderLayer::StaticClass, TEXT("UMoviePipelineRenderLayer"), &Z_Registration_Info_UClass_UMoviePipelineRenderLayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoviePipelineRenderLayer), 4285308841U) },
		{ Z_Construct_UClass_UMoviePipelineRenderLayerSubsystem, UMoviePipelineRenderLayerSubsystem::StaticClass, TEXT("UMoviePipelineRenderLayerSubsystem"), &Z_Registration_Info_UClass_UMoviePipelineRenderLayerSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoviePipelineRenderLayerSubsystem), 3942763717U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MoviePipelineRenderLayerSubsystem_h_2748179658(TEXT("/Script/MovieRenderPipelineCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MoviePipelineRenderLayerSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MoviePipelineRenderLayerSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MoviePipelineRenderLayerSubsystem_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MoviePipelineRenderLayerSubsystem_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
