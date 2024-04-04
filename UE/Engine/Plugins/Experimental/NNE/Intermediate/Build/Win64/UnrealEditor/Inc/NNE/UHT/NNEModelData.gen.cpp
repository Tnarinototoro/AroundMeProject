// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NNEModelData.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNNEModelData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
	NNE_API UClass* Z_Construct_UClass_UNNEModelData();
	NNE_API UClass* Z_Construct_UClass_UNNEModelData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NNE();
// End Cross Module References
	void UNNEModelData::StaticRegisterNativesUNNEModelData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNNEModelData);
	UClass* Z_Construct_UClass_UNNEModelData_NoRegister()
	{
		return UNNEModelData::StaticClass();
	}
	struct Z_Construct_UClass_UNNEModelData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AssetImportData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNNEModelData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NNE,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNNEModelData_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNNEModelData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "NNE" },
		{ "Comment", "/**\n * This class represents assets that store neural network model data.\n *\n * Neural network models typically consist of a graph of operations and corresponding parameters as e.g. weights.\n * UNNEModelData assets store such model data as imported e.g. by the UNNEModelDataFactory class.\n * An INNERuntime object retrieved by UE::NNE::GetRuntime<T>(const FString& Name) can be used to create an inferable neural network model.\n */" },
		{ "IncludePath", "NNEModelData.h" },
		{ "ModuleRelativePath", "Public/NNEModelData.h" },
		{ "ToolTip", "This class represents assets that store neural network model data.\n\nNeural network models typically consist of a graph of operations and corresponding parameters as e.g. weights.\nUNNEModelData assets store such model data as imported e.g. by the UNNEModelDataFactory class.\nAn INNERuntime object retrieved by UE::NNE::GetRuntime<T>(const FString& Name) can be used to create an inferable neural network model." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNNEModelData_Statics::NewProp_AssetImportData_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "Comment", "/**\n\x09 * Importing data used for this asset.\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NNEModelData.h" },
		{ "ToolTip", "Importing data used for this asset." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNNEModelData_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x00160008000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNNEModelData, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNNEModelData_Statics::NewProp_AssetImportData_MetaData), Z_Construct_UClass_UNNEModelData_Statics::NewProp_AssetImportData_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNNEModelData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNNEModelData_Statics::NewProp_AssetImportData,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNNEModelData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNNEModelData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNNEModelData_Statics::ClassParams = {
		&UNNEModelData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UNNEModelData_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UNNEModelData_Statics::PropPointers), 0),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNNEModelData_Statics::Class_MetaDataParams), Z_Construct_UClass_UNNEModelData_Statics::Class_MetaDataParams)
	};
#if WITH_EDITORONLY_DATA
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNNEModelData_Statics::PropPointers) < 2048);
#endif
	UClass* Z_Construct_UClass_UNNEModelData()
	{
		if (!Z_Registration_Info_UClass_UNNEModelData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNNEModelData.OuterSingleton, Z_Construct_UClass_UNNEModelData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNNEModelData.OuterSingleton;
	}
	template<> NNE_API UClass* StaticClass<UNNEModelData>()
	{
		return UNNEModelData::StaticClass();
	}
	UNNEModelData::UNNEModelData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNNEModelData);
	UNNEModelData::~UNNEModelData() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UNNEModelData)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNE_Source_NNE_Public_NNEModelData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNE_Source_NNE_Public_NNEModelData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNNEModelData, UNNEModelData::StaticClass, TEXT("UNNEModelData"), &Z_Registration_Info_UClass_UNNEModelData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNNEModelData), 3089431369U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNE_Source_NNE_Public_NNEModelData_h_743900125(TEXT("/Script/NNE"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNE_Source_NNE_Public_NNEModelData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNE_Source_NNE_Public_NNEModelData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
