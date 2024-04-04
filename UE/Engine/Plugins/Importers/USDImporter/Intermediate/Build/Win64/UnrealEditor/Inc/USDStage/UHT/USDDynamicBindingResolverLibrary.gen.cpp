// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "USDDynamicBindingResolverLibrary.h"
#include "MovieSceneDynamicBinding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUSDDynamicBindingResolverLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneDynamicBindingResolveParams();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneDynamicBindingResolveResult();
	UPackage* Z_Construct_UPackage__Script_USDStage();
	USDSTAGE_API UClass* Z_Construct_UClass_UUsdDynamicBindingResolverLibrary();
	USDSTAGE_API UClass* Z_Construct_UClass_UUsdDynamicBindingResolverLibrary_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUsdDynamicBindingResolverLibrary::execResolveWithStageActor)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FMovieSceneDynamicBindingResolveParams,Z_Param_Out_Params);
		P_GET_PROPERTY(FStrProperty,Z_Param_StageActorIDNameFilter);
		P_GET_PROPERTY(FStrProperty,Z_Param_RootLayerFilter);
		P_GET_PROPERTY(FStrProperty,Z_Param_PrimPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMovieSceneDynamicBindingResolveResult*)Z_Param__Result=UUsdDynamicBindingResolverLibrary::ResolveWithStageActor(Z_Param_WorldContextObject,Z_Param_Out_Params,Z_Param_StageActorIDNameFilter,Z_Param_RootLayerFilter,Z_Param_PrimPath);
		P_NATIVE_END;
	}
	void UUsdDynamicBindingResolverLibrary::StaticRegisterNativesUUsdDynamicBindingResolverLibrary()
	{
		UClass* Class = UUsdDynamicBindingResolverLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ResolveWithStageActor", &UUsdDynamicBindingResolverLibrary::execResolveWithStageActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUsdDynamicBindingResolverLibrary_ResolveWithStageActor_Statics
	{
		struct UsdDynamicBindingResolverLibrary_eventResolveWithStageActor_Parms
		{
			UObject* WorldContextObject;
			FMovieSceneDynamicBindingResolveParams Params;
			FString StageActorIDNameFilter;
			FString RootLayerFilter;
			FString PrimPath;
			FMovieSceneDynamicBindingResolveResult ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StageActorIDNameFilter_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StageActorIDNameFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootLayerFilter_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RootLayerFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PrimPath;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdDynamicBindingResolverLibrary_ResolveWithStageActor_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UsdDynamicBindingResolverLibrary_eventResolveWithStageActor_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdDynamicBindingResolverLibrary_ResolveWithStageActor_Statics::NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUsdDynamicBindingResolverLibrary_ResolveWithStageActor_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UsdDynamicBindingResolverLibrary_eventResolveWithStageActor_Parms, Params), Z_Construct_UScriptStruct_FMovieSceneDynamicBindingResolveParams, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdDynamicBindingResolverLibrary_ResolveWithStageActor_Statics::NewProp_Params_MetaData), Z_Construct_UFunction_UUsdDynamicBindingResolverLibrary_ResolveWithStageActor_Statics::NewProp_Params_MetaData) }; // 1966279553
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdDynamicBindingResolverLibrary_ResolveWithStageActor_Statics::NewProp_StageActorIDNameFilter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdDynamicBindingResolverLibrary_ResolveWithStageActor_Statics::NewProp_StageActorIDNameFilter = { "StageActorIDNameFilter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UsdDynamicBindingResolverLibrary_eventResolveWithStageActor_Parms, StageActorIDNameFilter), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdDynamicBindingResolverLibrary_ResolveWithStageActor_Statics::NewProp_StageActorIDNameFilter_MetaData), Z_Construct_UFunction_UUsdDynamicBindingResolverLibrary_ResolveWithStageActor_Statics::NewProp_StageActorIDNameFilter_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdDynamicBindingResolverLibrary_ResolveWithStageActor_Statics::NewProp_RootLayerFilter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdDynamicBindingResolverLibrary_ResolveWithStageActor_Statics::NewProp_RootLayerFilter = { "RootLayerFilter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UsdDynamicBindingResolverLibrary_eventResolveWithStageActor_Parms, RootLayerFilter), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdDynamicBindingResolverLibrary_ResolveWithStageActor_Statics::NewProp_RootLayerFilter_MetaData), Z_Construct_UFunction_UUsdDynamicBindingResolverLibrary_ResolveWithStageActor_Statics::NewProp_RootLayerFilter_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdDynamicBindingResolverLibrary_ResolveWithStageActor_Statics::NewProp_PrimPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdDynamicBindingResolverLibrary_ResolveWithStageActor_Statics::NewProp_PrimPath = { "PrimPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UsdDynamicBindingResolverLibrary_eventResolveWithStageActor_Parms, PrimPath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdDynamicBindingResolverLibrary_ResolveWithStageActor_Statics::NewProp_PrimPath_MetaData), Z_Construct_UFunction_UUsdDynamicBindingResolverLibrary_ResolveWithStageActor_Statics::NewProp_PrimPath_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUsdDynamicBindingResolverLibrary_ResolveWithStageActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UsdDynamicBindingResolverLibrary_eventResolveWithStageActor_Parms, ReturnValue), Z_Construct_UScriptStruct_FMovieSceneDynamicBindingResolveResult, METADATA_PARAMS(0, nullptr) }; // 2093382815
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdDynamicBindingResolverLibrary_ResolveWithStageActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdDynamicBindingResolverLibrary_ResolveWithStageActor_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdDynamicBindingResolverLibrary_ResolveWithStageActor_Statics::NewProp_Params,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdDynamicBindingResolverLibrary_ResolveWithStageActor_Statics::NewProp_StageActorIDNameFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdDynamicBindingResolverLibrary_ResolveWithStageActor_Statics::NewProp_RootLayerFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdDynamicBindingResolverLibrary_ResolveWithStageActor_Statics::NewProp_PrimPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdDynamicBindingResolverLibrary_ResolveWithStageActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdDynamicBindingResolverLibrary_ResolveWithStageActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "USD|Dynamic Binding" },
		{ "Comment", "/**\n\x09 * Resolves a Sequencer Dynamic Binding described on Params, returning the actor or component that the Sequencer\n\x09 * should bind to\n\x09 * @param WorldContextObject - Some UObject that lives in the UWorld that we're talking about\n\x09 * @param Params - The binding to resolve\n\x09 * @param StageActorIDNameFilter - The \"ID Name\"/FName of a AUsdStageActor to restrict our search for actor and components to. Can be\n\x09 * empty.\n\x09 * @param RootLayerFilter - The root layer file path to restrict our search for actor and components to. This should match what is shown\n\x09 * on the Stage Actor's RootLayer property. Can be empty.\n\x09 * @param PrimPath - The path to the prim that generates the actor or component that this binding should resolve to\n\x09 * (e.g. '/cube')\n\x09 * @return The result struct containing the resolved UObject\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDDynamicBindingResolverLibrary.h" },
		{ "ToolTip", "Resolves a Sequencer Dynamic Binding described on Params, returning the actor or component that the Sequencer\nshould bind to\n@param WorldContextObject - Some UObject that lives in the UWorld that we're talking about\n@param Params - The binding to resolve\n@param StageActorIDNameFilter - The \"ID Name\"/FName of a AUsdStageActor to restrict our search for actor and components to. Can be\nempty.\n@param RootLayerFilter - The root layer file path to restrict our search for actor and components to. This should match what is shown\non the Stage Actor's RootLayer property. Can be empty.\n@param PrimPath - The path to the prim that generates the actor or component that this binding should resolve to\n(e.g. '/cube')\n@return The result struct containing the resolved UObject" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdDynamicBindingResolverLibrary_ResolveWithStageActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdDynamicBindingResolverLibrary, nullptr, "ResolveWithStageActor", nullptr, nullptr, Z_Construct_UFunction_UUsdDynamicBindingResolverLibrary_ResolveWithStageActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdDynamicBindingResolverLibrary_ResolveWithStageActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUsdDynamicBindingResolverLibrary_ResolveWithStageActor_Statics::UsdDynamicBindingResolverLibrary_eventResolveWithStageActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdDynamicBindingResolverLibrary_ResolveWithStageActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUsdDynamicBindingResolverLibrary_ResolveWithStageActor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdDynamicBindingResolverLibrary_ResolveWithStageActor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUsdDynamicBindingResolverLibrary_ResolveWithStageActor_Statics::UsdDynamicBindingResolverLibrary_eventResolveWithStageActor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUsdDynamicBindingResolverLibrary_ResolveWithStageActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdDynamicBindingResolverLibrary_ResolveWithStageActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUsdDynamicBindingResolverLibrary);
	UClass* Z_Construct_UClass_UUsdDynamicBindingResolverLibrary_NoRegister()
	{
		return UUsdDynamicBindingResolverLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UUsdDynamicBindingResolverLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUsdDynamicBindingResolverLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_USDStage,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUsdDynamicBindingResolverLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UUsdDynamicBindingResolverLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUsdDynamicBindingResolverLibrary_ResolveWithStageActor, "ResolveWithStageActor" }, // 3489629083
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUsdDynamicBindingResolverLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdDynamicBindingResolverLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "USDDynamicBindingResolverLibrary.h" },
		{ "ModuleRelativePath", "Public/USDDynamicBindingResolverLibrary.h" },
		{ "SequencerBindingResolverLibrary", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUsdDynamicBindingResolverLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUsdDynamicBindingResolverLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUsdDynamicBindingResolverLibrary_Statics::ClassParams = {
		&UUsdDynamicBindingResolverLibrary::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUsdDynamicBindingResolverLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UUsdDynamicBindingResolverLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UUsdDynamicBindingResolverLibrary()
	{
		if (!Z_Registration_Info_UClass_UUsdDynamicBindingResolverLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUsdDynamicBindingResolverLibrary.OuterSingleton, Z_Construct_UClass_UUsdDynamicBindingResolverLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUsdDynamicBindingResolverLibrary.OuterSingleton;
	}
	template<> USDSTAGE_API UClass* StaticClass<UUsdDynamicBindingResolverLibrary>()
	{
		return UUsdDynamicBindingResolverLibrary::StaticClass();
	}
	UUsdDynamicBindingResolverLibrary::UUsdDynamicBindingResolverLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUsdDynamicBindingResolverLibrary);
	UUsdDynamicBindingResolverLibrary::~UUsdDynamicBindingResolverLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDDynamicBindingResolverLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDDynamicBindingResolverLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUsdDynamicBindingResolverLibrary, UUsdDynamicBindingResolverLibrary::StaticClass, TEXT("UUsdDynamicBindingResolverLibrary"), &Z_Registration_Info_UClass_UUsdDynamicBindingResolverLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUsdDynamicBindingResolverLibrary), 42961151U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDDynamicBindingResolverLibrary_h_442768282(TEXT("/Script/USDStage"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDDynamicBindingResolverLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDDynamicBindingResolverLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
