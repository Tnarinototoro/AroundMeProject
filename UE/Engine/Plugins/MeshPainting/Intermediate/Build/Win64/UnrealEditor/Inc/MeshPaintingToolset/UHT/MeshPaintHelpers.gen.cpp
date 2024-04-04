// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshPaintHelpers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshPaintHelpers() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	MESHPAINTINGTOOLSET_API UClass* Z_Construct_UClass_UMeshPaintingSubsystem();
	MESHPAINTINGTOOLSET_API UClass* Z_Construct_UClass_UMeshPaintingSubsystem_NoRegister();
	MESHPAINTINGTOOLSET_API UEnum* Z_Construct_UEnum_MeshPaintingToolset_ETexturePaintWeightIndex();
	MESHPAINTINGTOOLSET_API UEnum* Z_Construct_UEnum_MeshPaintingToolset_ETexturePaintWeightTypes();
	UPackage* Z_Construct_UPackage__Script_MeshPaintingToolset();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETexturePaintWeightTypes;
	static UEnum* ETexturePaintWeightTypes_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETexturePaintWeightTypes.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETexturePaintWeightTypes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshPaintingToolset_ETexturePaintWeightTypes, (UObject*)Z_Construct_UPackage__Script_MeshPaintingToolset(), TEXT("ETexturePaintWeightTypes"));
		}
		return Z_Registration_Info_UEnum_ETexturePaintWeightTypes.OuterSingleton;
	}
	template<> MESHPAINTINGTOOLSET_API UEnum* StaticEnum<ETexturePaintWeightTypes>()
	{
		return ETexturePaintWeightTypes_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshPaintingToolset_ETexturePaintWeightTypes_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshPaintingToolset_ETexturePaintWeightTypes_Statics::Enumerators[] = {
		{ "ETexturePaintWeightTypes::AlphaLerp", (int64)ETexturePaintWeightTypes::AlphaLerp },
		{ "ETexturePaintWeightTypes::RGB", (int64)ETexturePaintWeightTypes::RGB },
		{ "ETexturePaintWeightTypes::ARGB", (int64)ETexturePaintWeightTypes::ARGB },
		{ "ETexturePaintWeightTypes::OneMinusARGB", (int64)ETexturePaintWeightTypes::OneMinusARGB },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshPaintingToolset_ETexturePaintWeightTypes_Statics::Enum_MetaDataParams[] = {
		{ "AlphaLerp.Comment", "/** Lerp Between Two Textures using Alpha Value */" },
		{ "AlphaLerp.DisplayName", "Alpha (Two Textures)" },
		{ "AlphaLerp.Name", "ETexturePaintWeightTypes::AlphaLerp" },
		{ "AlphaLerp.ToolTip", "Lerp Between Two Textures using Alpha Value" },
		{ "ARGB.Comment", "/**  Weighting Four Textures according to Channels*/" },
		{ "ARGB.DisplayName", "ARGB (Four Textures)" },
		{ "ARGB.Name", "ETexturePaintWeightTypes::ARGB" },
		{ "ARGB.ToolTip", "Weighting Four Textures according to Channels" },
		{ "ModuleRelativePath", "Public/MeshPaintHelpers.h" },
		{ "OneMinusARGB.Comment", "/**  Weighting Five Textures according to Channels */" },
		{ "OneMinusARGB.DisplayName", "ARGB - 1 (Five Textures)" },
		{ "OneMinusARGB.Name", "ETexturePaintWeightTypes::OneMinusARGB" },
		{ "OneMinusARGB.ToolTip", "Weighting Five Textures according to Channels" },
		{ "RGB.Comment", "/** Weighting Three Textures according to Channels*/" },
		{ "RGB.DisplayName", "RGB (Three Textures)" },
		{ "RGB.Name", "ETexturePaintWeightTypes::RGB" },
		{ "RGB.ToolTip", "Weighting Three Textures according to Channels" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshPaintingToolset_ETexturePaintWeightTypes_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshPaintingToolset,
		nullptr,
		"ETexturePaintWeightTypes",
		"ETexturePaintWeightTypes",
		Z_Construct_UEnum_MeshPaintingToolset_ETexturePaintWeightTypes_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshPaintingToolset_ETexturePaintWeightTypes_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshPaintingToolset_ETexturePaintWeightTypes_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshPaintingToolset_ETexturePaintWeightTypes_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_MeshPaintingToolset_ETexturePaintWeightTypes()
	{
		if (!Z_Registration_Info_UEnum_ETexturePaintWeightTypes.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETexturePaintWeightTypes.InnerSingleton, Z_Construct_UEnum_MeshPaintingToolset_ETexturePaintWeightTypes_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETexturePaintWeightTypes.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETexturePaintWeightIndex;
	static UEnum* ETexturePaintWeightIndex_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETexturePaintWeightIndex.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETexturePaintWeightIndex.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshPaintingToolset_ETexturePaintWeightIndex, (UObject*)Z_Construct_UPackage__Script_MeshPaintingToolset(), TEXT("ETexturePaintWeightIndex"));
		}
		return Z_Registration_Info_UEnum_ETexturePaintWeightIndex.OuterSingleton;
	}
	template<> MESHPAINTINGTOOLSET_API UEnum* StaticEnum<ETexturePaintWeightIndex>()
	{
		return ETexturePaintWeightIndex_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshPaintingToolset_ETexturePaintWeightIndex_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshPaintingToolset_ETexturePaintWeightIndex_Statics::Enumerators[] = {
		{ "ETexturePaintWeightIndex::TextureOne", (int64)ETexturePaintWeightIndex::TextureOne },
		{ "ETexturePaintWeightIndex::TextureTwo", (int64)ETexturePaintWeightIndex::TextureTwo },
		{ "ETexturePaintWeightIndex::TextureThree", (int64)ETexturePaintWeightIndex::TextureThree },
		{ "ETexturePaintWeightIndex::TextureFour", (int64)ETexturePaintWeightIndex::TextureFour },
		{ "ETexturePaintWeightIndex::TextureFive", (int64)ETexturePaintWeightIndex::TextureFive },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshPaintingToolset_ETexturePaintWeightIndex_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeshPaintHelpers.h" },
		{ "TextureFive.Name", "ETexturePaintWeightIndex::TextureFive" },
		{ "TextureFour.Name", "ETexturePaintWeightIndex::TextureFour" },
		{ "TextureOne.Name", "ETexturePaintWeightIndex::TextureOne" },
		{ "TextureThree.Name", "ETexturePaintWeightIndex::TextureThree" },
		{ "TextureTwo.Name", "ETexturePaintWeightIndex::TextureTwo" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshPaintingToolset_ETexturePaintWeightIndex_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshPaintingToolset,
		nullptr,
		"ETexturePaintWeightIndex",
		"ETexturePaintWeightIndex",
		Z_Construct_UEnum_MeshPaintingToolset_ETexturePaintWeightIndex_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshPaintingToolset_ETexturePaintWeightIndex_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshPaintingToolset_ETexturePaintWeightIndex_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshPaintingToolset_ETexturePaintWeightIndex_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_MeshPaintingToolset_ETexturePaintWeightIndex()
	{
		if (!Z_Registration_Info_UEnum_ETexturePaintWeightIndex.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETexturePaintWeightIndex.InnerSingleton, Z_Construct_UEnum_MeshPaintingToolset_ETexturePaintWeightIndex_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETexturePaintWeightIndex.InnerSingleton;
	}
	void UMeshPaintingSubsystem::StaticRegisterNativesUMeshPaintingSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshPaintingSubsystem);
	UClass* Z_Construct_UClass_UMeshPaintingSubsystem_NoRegister()
	{
		return UMeshPaintingSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UMeshPaintingSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverridePaintTexture_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_OverridePaintTexture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshPaintingSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshPaintingToolset,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshPaintingSubsystem_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshPaintingSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MeshPaintHelpers.h" },
		{ "ModuleRelativePath", "Public/MeshPaintHelpers.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshPaintingSubsystem_Statics::NewProp_OverridePaintTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshPaintHelpers.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UMeshPaintingSubsystem_Statics::NewProp_OverridePaintTexture = { "OverridePaintTexture", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshPaintingSubsystem, OverridePaintTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshPaintingSubsystem_Statics::NewProp_OverridePaintTexture_MetaData), Z_Construct_UClass_UMeshPaintingSubsystem_Statics::NewProp_OverridePaintTexture_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshPaintingSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshPaintingSubsystem_Statics::NewProp_OverridePaintTexture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshPaintingSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshPaintingSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshPaintingSubsystem_Statics::ClassParams = {
		&UMeshPaintingSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMeshPaintingSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMeshPaintingSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshPaintingSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeshPaintingSubsystem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshPaintingSubsystem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMeshPaintingSubsystem()
	{
		if (!Z_Registration_Info_UClass_UMeshPaintingSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshPaintingSubsystem.OuterSingleton, Z_Construct_UClass_UMeshPaintingSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeshPaintingSubsystem.OuterSingleton;
	}
	template<> MESHPAINTINGTOOLSET_API UClass* StaticClass<UMeshPaintingSubsystem>()
	{
		return UMeshPaintingSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshPaintingSubsystem);
	UMeshPaintingSubsystem::~UMeshPaintingSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_MeshPaintHelpers_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_MeshPaintHelpers_h_Statics::EnumInfo[] = {
		{ ETexturePaintWeightTypes_StaticEnum, TEXT("ETexturePaintWeightTypes"), &Z_Registration_Info_UEnum_ETexturePaintWeightTypes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1203282112U) },
		{ ETexturePaintWeightIndex_StaticEnum, TEXT("ETexturePaintWeightIndex"), &Z_Registration_Info_UEnum_ETexturePaintWeightIndex, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 435847409U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_MeshPaintHelpers_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMeshPaintingSubsystem, UMeshPaintingSubsystem::StaticClass, TEXT("UMeshPaintingSubsystem"), &Z_Registration_Info_UClass_UMeshPaintingSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshPaintingSubsystem), 448575077U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_MeshPaintHelpers_h_895503069(TEXT("/Script/MeshPaintingToolset"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_MeshPaintHelpers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_MeshPaintHelpers_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_MeshPaintHelpers_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_MeshPaintHelpers_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
