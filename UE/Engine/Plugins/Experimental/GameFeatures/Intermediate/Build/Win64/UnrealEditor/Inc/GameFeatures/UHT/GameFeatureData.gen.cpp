// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameFeatureData.h"
#include "../../Source/Runtime/Engine/Classes/Engine/AssetManagerTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameFeatureData() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo();
	GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureAction_NoRegister();
	GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureData();
	GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameFeatures();
// End Cross Module References
	DEFINE_FUNCTION(UGameFeatureData::execGetPluginName)
	{
		P_GET_OBJECT(UGameFeatureData,Z_Param_GFD);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_PluginName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameFeatureData::GetPluginName(Z_Param_GFD,Z_Param_Out_PluginName);
		P_NATIVE_END;
	}
	void UGameFeatureData::StaticRegisterNativesUGameFeatureData()
	{
		UClass* Class = UGameFeatureData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPluginName", &UGameFeatureData::execGetPluginName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameFeatureData_GetPluginName_Statics
	{
		struct GameFeatureData_eventGetPluginName_Parms
		{
			const UGameFeatureData* GFD;
			FString PluginName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GFD_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GFD;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PluginName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameFeatureData_GetPluginName_Statics::NewProp_GFD_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameFeatureData_GetPluginName_Statics::NewProp_GFD = { "GFD", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameFeatureData_eventGetPluginName_Parms, GFD), Z_Construct_UClass_UGameFeatureData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameFeatureData_GetPluginName_Statics::NewProp_GFD_MetaData), Z_Construct_UFunction_UGameFeatureData_GetPluginName_Statics::NewProp_GFD_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameFeatureData_GetPluginName_Statics::NewProp_PluginName = { "PluginName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameFeatureData_eventGetPluginName_Parms, PluginName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameFeatureData_GetPluginName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameFeatureData_GetPluginName_Statics::NewProp_GFD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameFeatureData_GetPluginName_Statics::NewProp_PluginName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameFeatureData_GetPluginName_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameFeature" },
		{ "ModuleRelativePath", "Public/GameFeatureData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameFeatureData_GetPluginName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameFeatureData, nullptr, "GetPluginName", nullptr, nullptr, Z_Construct_UFunction_UGameFeatureData_GetPluginName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameFeatureData_GetPluginName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameFeatureData_GetPluginName_Statics::GameFeatureData_eventGetPluginName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameFeatureData_GetPluginName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameFeatureData_GetPluginName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameFeatureData_GetPluginName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGameFeatureData_GetPluginName_Statics::GameFeatureData_eventGetPluginName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGameFeatureData_GetPluginName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameFeatureData_GetPluginName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameFeatureData);
	UClass* Z_Construct_UClass_UGameFeatureData_NoRegister()
	{
		return UGameFeatureData::StaticClass();
	}
	struct Z_Construct_UClass_UGameFeatureData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actions_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Actions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Actions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrimaryAssetTypesToScan_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryAssetTypesToScan_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PrimaryAssetTypesToScan;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameFeatureData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_GameFeatures,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureData_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameFeatureData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameFeatureData_GetPluginName, "GetPluginName" }, // 2017996202
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureData_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameFeatureData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Data related to a game feature, a collection of code and content that adds a separable discrete feature to the game */" },
		{ "IncludePath", "GameFeatureData.h" },
		{ "ModuleRelativePath", "Public/GameFeatureData.h" },
		{ "ToolTip", "Data related to a game feature, a collection of code and content that adds a separable discrete feature to the game" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameFeatureData_Statics::NewProp_Actions_Inner_MetaData[] = {
		{ "Category", "Actions" },
		{ "Comment", "/** List of actions to perform as this game feature is loaded/activated/deactivated/unloaded */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameFeatureData.h" },
		{ "ToolTip", "List of actions to perform as this game feature is loaded/activated/deactivated/unloaded" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGameFeatureData_Statics::NewProp_Actions_Inner = { "Actions", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UGameFeatureAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureData_Statics::NewProp_Actions_Inner_MetaData), Z_Construct_UClass_UGameFeatureData_Statics::NewProp_Actions_Inner_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameFeatureData_Statics::NewProp_Actions_MetaData[] = {
		{ "Category", "Actions" },
		{ "Comment", "/** List of actions to perform as this game feature is loaded/activated/deactivated/unloaded */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameFeatureData.h" },
		{ "ToolTip", "List of actions to perform as this game feature is loaded/activated/deactivated/unloaded" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameFeatureData_Statics::NewProp_Actions = { "Actions", nullptr, (EPropertyFlags)0x0024088000010009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameFeatureData, Actions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureData_Statics::NewProp_Actions_MetaData), Z_Construct_UClass_UGameFeatureData_Statics::NewProp_Actions_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameFeatureData_Statics::NewProp_PrimaryAssetTypesToScan_Inner = { "PrimaryAssetTypesToScan", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo, METADATA_PARAMS(0, nullptr) }; // 3456912308
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameFeatureData_Statics::NewProp_PrimaryAssetTypesToScan_MetaData[] = {
		{ "Category", "Game Feature | Asset Manager" },
		{ "Comment", "/** List of asset types to scan at startup */" },
		{ "ModuleRelativePath", "Public/GameFeatureData.h" },
		{ "TitleProperty", "PrimaryAssetType" },
		{ "ToolTip", "List of asset types to scan at startup" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameFeatureData_Statics::NewProp_PrimaryAssetTypesToScan = { "PrimaryAssetTypesToScan", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameFeatureData, PrimaryAssetTypesToScan), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureData_Statics::NewProp_PrimaryAssetTypesToScan_MetaData), Z_Construct_UClass_UGameFeatureData_Statics::NewProp_PrimaryAssetTypesToScan_MetaData) }; // 3456912308
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameFeatureData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeatureData_Statics::NewProp_Actions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeatureData_Statics::NewProp_Actions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeatureData_Statics::NewProp_PrimaryAssetTypesToScan_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeatureData_Statics::NewProp_PrimaryAssetTypesToScan,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameFeatureData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameFeatureData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameFeatureData_Statics::ClassParams = {
		&UGameFeatureData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameFeatureData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureData_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureData_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameFeatureData_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureData_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGameFeatureData()
	{
		if (!Z_Registration_Info_UClass_UGameFeatureData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameFeatureData.OuterSingleton, Z_Construct_UClass_UGameFeatureData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameFeatureData.OuterSingleton;
	}
	template<> GAMEFEATURES_API UClass* StaticClass<UGameFeatureData>()
	{
		return UGameFeatureData::StaticClass();
	}
	UGameFeatureData::UGameFeatureData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameFeatureData);
	UGameFeatureData::~UGameFeatureData() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameFeatureData, UGameFeatureData::StaticClass, TEXT("UGameFeatureData"), &Z_Registration_Info_UClass_UGameFeatureData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameFeatureData), 300068009U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureData_h_2150234000(TEXT("/Script/GameFeatures"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
