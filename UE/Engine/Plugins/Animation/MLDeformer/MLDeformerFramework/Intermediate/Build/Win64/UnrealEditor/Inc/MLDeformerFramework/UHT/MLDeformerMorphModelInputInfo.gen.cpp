// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MLDeformerMorphModelInputInfo.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMLDeformerMorphModelInputInfo() {}
// Cross Module References
	MLDEFORMERFRAMEWORK_API UClass* Z_Construct_UClass_UMLDeformerInputInfo();
	MLDEFORMERFRAMEWORK_API UClass* Z_Construct_UClass_UMLDeformerMorphModelInputInfo();
	MLDEFORMERFRAMEWORK_API UClass* Z_Construct_UClass_UMLDeformerMorphModelInputInfo_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MLDeformerFramework();
// End Cross Module References
	void UMLDeformerMorphModelInputInfo::StaticRegisterNativesUMLDeformerMorphModelInputInfo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMLDeformerMorphModelInputInfo);
	UClass* Z_Construct_UClass_UMLDeformerMorphModelInputInfo_NoRegister()
	{
		return UMLDeformerMorphModelInputInfo::StaticClass();
	}
	struct Z_Construct_UClass_UMLDeformerMorphModelInputInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InputItemMaskBuffer_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputItemMaskBuffer_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InputItemMaskBuffer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMLDeformerMorphModelInputInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMLDeformerInputInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_MLDeformerFramework,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerMorphModelInputInfo_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerMorphModelInputInfo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MLDeformerMorphModelInputInfo.h" },
		{ "ModuleRelativePath", "Public/MLDeformerMorphModelInputInfo.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMLDeformerMorphModelInputInfo_Statics::NewProp_InputItemMaskBuffer_Inner = { "InputItemMaskBuffer", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerMorphModelInputInfo_Statics::NewProp_InputItemMaskBuffer_MetaData[] = {
		{ "Comment", "/**\n\x09 * The buffer of mask values, which contains one float per imported vertex, for all input items.\n\x09 * An input item is an input bone or curve (or other thing).\n\x09 * The buffer first contains all masks for all input bones followed by all curve masks.\n\x09 * Each mask contains GetNumBaseMeshVerts() number of floats.\n\x09 * This data is stripped at cook time, as it is not needed at runtime.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MLDeformerMorphModelInputInfo.h" },
		{ "ToolTip", "The buffer of mask values, which contains one float per imported vertex, for all input items.\nAn input item is an input bone or curve (or other thing).\nThe buffer first contains all masks for all input bones followed by all curve masks.\nEach mask contains GetNumBaseMeshVerts() number of floats.\nThis data is stripped at cook time, as it is not needed at runtime." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMLDeformerMorphModelInputInfo_Statics::NewProp_InputItemMaskBuffer = { "InputItemMaskBuffer", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMLDeformerMorphModelInputInfo, InputItemMaskBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerMorphModelInputInfo_Statics::NewProp_InputItemMaskBuffer_MetaData), Z_Construct_UClass_UMLDeformerMorphModelInputInfo_Statics::NewProp_InputItemMaskBuffer_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMLDeformerMorphModelInputInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerMorphModelInputInfo_Statics::NewProp_InputItemMaskBuffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerMorphModelInputInfo_Statics::NewProp_InputItemMaskBuffer,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMLDeformerMorphModelInputInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMLDeformerMorphModelInputInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMLDeformerMorphModelInputInfo_Statics::ClassParams = {
		&UMLDeformerMorphModelInputInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UMLDeformerMorphModelInputInfo_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerMorphModelInputInfo_Statics::PropPointers), 0),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerMorphModelInputInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_UMLDeformerMorphModelInputInfo_Statics::Class_MetaDataParams)
	};
#if WITH_EDITORONLY_DATA
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerMorphModelInputInfo_Statics::PropPointers) < 2048);
#endif
	UClass* Z_Construct_UClass_UMLDeformerMorphModelInputInfo()
	{
		if (!Z_Registration_Info_UClass_UMLDeformerMorphModelInputInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMLDeformerMorphModelInputInfo.OuterSingleton, Z_Construct_UClass_UMLDeformerMorphModelInputInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMLDeformerMorphModelInputInfo.OuterSingleton;
	}
	template<> MLDEFORMERFRAMEWORK_API UClass* StaticClass<UMLDeformerMorphModelInputInfo>()
	{
		return UMLDeformerMorphModelInputInfo::StaticClass();
	}
	UMLDeformerMorphModelInputInfo::UMLDeformerMorphModelInputInfo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMLDeformerMorphModelInputInfo);
	UMLDeformerMorphModelInputInfo::~UMLDeformerMorphModelInputInfo() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMLDeformerMorphModelInputInfo)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerMorphModelInputInfo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerMorphModelInputInfo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMLDeformerMorphModelInputInfo, UMLDeformerMorphModelInputInfo::StaticClass, TEXT("UMLDeformerMorphModelInputInfo"), &Z_Registration_Info_UClass_UMLDeformerMorphModelInputInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMLDeformerMorphModelInputInfo), 2169882343U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerMorphModelInputInfo_h_2541844527(TEXT("/Script/MLDeformerFramework"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerMorphModelInputInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerMorphModelInputInfo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
