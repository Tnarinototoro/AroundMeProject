// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/ChaosClothAsset/ClothWeightMapPaintBrushOps.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothWeightMapPaintBrushOps() {}
// Cross Module References
	CHAOSCLOTHASSETEDITORTOOLS_API UClass* Z_Construct_UClass_UWeightMapEraseBrushOpProps();
	CHAOSCLOTHASSETEDITORTOOLS_API UClass* Z_Construct_UClass_UWeightMapEraseBrushOpProps_NoRegister();
	CHAOSCLOTHASSETEDITORTOOLS_API UClass* Z_Construct_UClass_UWeightMapPaintBrushOpProps();
	CHAOSCLOTHASSETEDITORTOOLS_API UClass* Z_Construct_UClass_UWeightMapPaintBrushOpProps_NoRegister();
	CHAOSCLOTHASSETEDITORTOOLS_API UClass* Z_Construct_UClass_UWeightMapSmoothBrushOpProps();
	CHAOSCLOTHASSETEDITORTOOLS_API UClass* Z_Construct_UClass_UWeightMapSmoothBrushOpProps_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshSculptBrushOpProps();
	UPackage* Z_Construct_UPackage__Script_ChaosClothAssetEditorTools();
// End Cross Module References
	void UWeightMapEraseBrushOpProps::StaticRegisterNativesUWeightMapEraseBrushOpProps()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWeightMapEraseBrushOpProps);
	UClass* Z_Construct_UClass_UWeightMapEraseBrushOpProps_NoRegister()
	{
		return UWeightMapEraseBrushOpProps::StaticClass();
	}
	struct Z_Construct_UClass_UWeightMapEraseBrushOpProps_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_AttributeValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWeightMapEraseBrushOpProps_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshSculptBrushOpProps,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosClothAssetEditorTools,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeightMapEraseBrushOpProps_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeightMapEraseBrushOpProps_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//\n// Erase Brush\n// \n" },
		{ "IncludePath", "ChaosClothAsset/ClothWeightMapPaintBrushOps.h" },
		{ "ModuleRelativePath", "Private/ChaosClothAsset/ClothWeightMapPaintBrushOps.h" },
		{ "ToolTip", "Erase Brush" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeightMapEraseBrushOpProps_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "Category", "EraseBrush" },
		{ "Comment", "/** Attribute to set as Erased value */" },
		{ "DisplayName", "Erase Attribute" },
		{ "ModuleRelativePath", "Private/ChaosClothAsset/ClothWeightMapPaintBrushOps.h" },
		{ "ToolTip", "Attribute to set as Erased value" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UWeightMapEraseBrushOpProps_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeightMapEraseBrushOpProps, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWeightMapEraseBrushOpProps_Statics::NewProp_AttributeValue_MetaData), Z_Construct_UClass_UWeightMapEraseBrushOpProps_Statics::NewProp_AttributeValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeightMapEraseBrushOpProps_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeightMapEraseBrushOpProps_Statics::NewProp_AttributeValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWeightMapEraseBrushOpProps_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeightMapEraseBrushOpProps>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeightMapEraseBrushOpProps_Statics::ClassParams = {
		&UWeightMapEraseBrushOpProps::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWeightMapEraseBrushOpProps_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWeightMapEraseBrushOpProps_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWeightMapEraseBrushOpProps_Statics::Class_MetaDataParams), Z_Construct_UClass_UWeightMapEraseBrushOpProps_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeightMapEraseBrushOpProps_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UWeightMapEraseBrushOpProps()
	{
		if (!Z_Registration_Info_UClass_UWeightMapEraseBrushOpProps.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeightMapEraseBrushOpProps.OuterSingleton, Z_Construct_UClass_UWeightMapEraseBrushOpProps_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWeightMapEraseBrushOpProps.OuterSingleton;
	}
	template<> CHAOSCLOTHASSETEDITORTOOLS_API UClass* StaticClass<UWeightMapEraseBrushOpProps>()
	{
		return UWeightMapEraseBrushOpProps::StaticClass();
	}
	UWeightMapEraseBrushOpProps::UWeightMapEraseBrushOpProps(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWeightMapEraseBrushOpProps);
	UWeightMapEraseBrushOpProps::~UWeightMapEraseBrushOpProps() {}
	void UWeightMapPaintBrushOpProps::StaticRegisterNativesUWeightMapPaintBrushOpProps()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWeightMapPaintBrushOpProps);
	UClass* Z_Construct_UClass_UWeightMapPaintBrushOpProps_NoRegister()
	{
		return UWeightMapPaintBrushOpProps::StaticClass();
	}
	struct Z_Construct_UClass_UWeightMapPaintBrushOpProps_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_AttributeValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWeightMapPaintBrushOpProps_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshSculptBrushOpProps,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosClothAssetEditorTools,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeightMapPaintBrushOpProps_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeightMapPaintBrushOpProps_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//\n// Paint Brush\n// \n" },
		{ "IncludePath", "ChaosClothAsset/ClothWeightMapPaintBrushOps.h" },
		{ "ModuleRelativePath", "Private/ChaosClothAsset/ClothWeightMapPaintBrushOps.h" },
		{ "ToolTip", "Paint Brush" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeightMapPaintBrushOpProps_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "Category", "PaintBrush" },
		{ "Comment", "/** The Attribute that will be assigned to triangles within the brush region */" },
		{ "DisplayName", "Value" },
		{ "ModuleRelativePath", "Private/ChaosClothAsset/ClothWeightMapPaintBrushOps.h" },
		{ "ToolTip", "The Attribute that will be assigned to triangles within the brush region" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UWeightMapPaintBrushOpProps_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeightMapPaintBrushOpProps, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWeightMapPaintBrushOpProps_Statics::NewProp_AttributeValue_MetaData), Z_Construct_UClass_UWeightMapPaintBrushOpProps_Statics::NewProp_AttributeValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeightMapPaintBrushOpProps_Statics::NewProp_Strength_MetaData[] = {
		{ "Category", "PaintBrush" },
		{ "ClampMax", "10." },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Strength of the Brush */" },
		{ "DisplayName", "Strength" },
		{ "ModuleRelativePath", "Private/ChaosClothAsset/ClothWeightMapPaintBrushOps.h" },
		{ "ToolTip", "Strength of the Brush" },
		{ "UIMax", "10." },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeightMapPaintBrushOpProps_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeightMapPaintBrushOpProps, Strength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWeightMapPaintBrushOpProps_Statics::NewProp_Strength_MetaData), Z_Construct_UClass_UWeightMapPaintBrushOpProps_Statics::NewProp_Strength_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeightMapPaintBrushOpProps_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeightMapPaintBrushOpProps_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeightMapPaintBrushOpProps_Statics::NewProp_Strength,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWeightMapPaintBrushOpProps_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeightMapPaintBrushOpProps>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeightMapPaintBrushOpProps_Statics::ClassParams = {
		&UWeightMapPaintBrushOpProps::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWeightMapPaintBrushOpProps_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWeightMapPaintBrushOpProps_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWeightMapPaintBrushOpProps_Statics::Class_MetaDataParams), Z_Construct_UClass_UWeightMapPaintBrushOpProps_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeightMapPaintBrushOpProps_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UWeightMapPaintBrushOpProps()
	{
		if (!Z_Registration_Info_UClass_UWeightMapPaintBrushOpProps.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeightMapPaintBrushOpProps.OuterSingleton, Z_Construct_UClass_UWeightMapPaintBrushOpProps_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWeightMapPaintBrushOpProps.OuterSingleton;
	}
	template<> CHAOSCLOTHASSETEDITORTOOLS_API UClass* StaticClass<UWeightMapPaintBrushOpProps>()
	{
		return UWeightMapPaintBrushOpProps::StaticClass();
	}
	UWeightMapPaintBrushOpProps::UWeightMapPaintBrushOpProps(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWeightMapPaintBrushOpProps);
	UWeightMapPaintBrushOpProps::~UWeightMapPaintBrushOpProps() {}
	void UWeightMapSmoothBrushOpProps::StaticRegisterNativesUWeightMapSmoothBrushOpProps()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWeightMapSmoothBrushOpProps);
	UClass* Z_Construct_UClass_UWeightMapSmoothBrushOpProps_NoRegister()
	{
		return UWeightMapSmoothBrushOpProps::StaticClass();
	}
	struct Z_Construct_UClass_UWeightMapSmoothBrushOpProps_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWeightMapSmoothBrushOpProps_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshSculptBrushOpProps,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosClothAssetEditorTools,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeightMapSmoothBrushOpProps_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeightMapSmoothBrushOpProps_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//\n// Smooth Brush\n// \n" },
		{ "IncludePath", "ChaosClothAsset/ClothWeightMapPaintBrushOps.h" },
		{ "ModuleRelativePath", "Private/ChaosClothAsset/ClothWeightMapPaintBrushOps.h" },
		{ "ToolTip", "Smooth Brush" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeightMapSmoothBrushOpProps_Statics::NewProp_Strength_MetaData[] = {
		{ "Category", "PaintBrush" },
		{ "ClampMax", "10." },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Strength" },
		{ "ModuleRelativePath", "Private/ChaosClothAsset/ClothWeightMapPaintBrushOps.h" },
		{ "UIMax", "10." },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeightMapSmoothBrushOpProps_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeightMapSmoothBrushOpProps, Strength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWeightMapSmoothBrushOpProps_Statics::NewProp_Strength_MetaData), Z_Construct_UClass_UWeightMapSmoothBrushOpProps_Statics::NewProp_Strength_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeightMapSmoothBrushOpProps_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeightMapSmoothBrushOpProps_Statics::NewProp_Strength,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWeightMapSmoothBrushOpProps_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeightMapSmoothBrushOpProps>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeightMapSmoothBrushOpProps_Statics::ClassParams = {
		&UWeightMapSmoothBrushOpProps::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWeightMapSmoothBrushOpProps_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWeightMapSmoothBrushOpProps_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWeightMapSmoothBrushOpProps_Statics::Class_MetaDataParams), Z_Construct_UClass_UWeightMapSmoothBrushOpProps_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeightMapSmoothBrushOpProps_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UWeightMapSmoothBrushOpProps()
	{
		if (!Z_Registration_Info_UClass_UWeightMapSmoothBrushOpProps.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeightMapSmoothBrushOpProps.OuterSingleton, Z_Construct_UClass_UWeightMapSmoothBrushOpProps_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWeightMapSmoothBrushOpProps.OuterSingleton;
	}
	template<> CHAOSCLOTHASSETEDITORTOOLS_API UClass* StaticClass<UWeightMapSmoothBrushOpProps>()
	{
		return UWeightMapSmoothBrushOpProps::StaticClass();
	}
	UWeightMapSmoothBrushOpProps::UWeightMapSmoothBrushOpProps(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWeightMapSmoothBrushOpProps);
	UWeightMapSmoothBrushOpProps::~UWeightMapSmoothBrushOpProps() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Private_ChaosClothAsset_ClothWeightMapPaintBrushOps_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Private_ChaosClothAsset_ClothWeightMapPaintBrushOps_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWeightMapEraseBrushOpProps, UWeightMapEraseBrushOpProps::StaticClass, TEXT("UWeightMapEraseBrushOpProps"), &Z_Registration_Info_UClass_UWeightMapEraseBrushOpProps, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeightMapEraseBrushOpProps), 3522171092U) },
		{ Z_Construct_UClass_UWeightMapPaintBrushOpProps, UWeightMapPaintBrushOpProps::StaticClass, TEXT("UWeightMapPaintBrushOpProps"), &Z_Registration_Info_UClass_UWeightMapPaintBrushOpProps, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeightMapPaintBrushOpProps), 2630359016U) },
		{ Z_Construct_UClass_UWeightMapSmoothBrushOpProps, UWeightMapSmoothBrushOpProps::StaticClass, TEXT("UWeightMapSmoothBrushOpProps"), &Z_Registration_Info_UClass_UWeightMapSmoothBrushOpProps, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeightMapSmoothBrushOpProps), 2724926979U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Private_ChaosClothAsset_ClothWeightMapPaintBrushOps_h_2018479198(TEXT("/Script/ChaosClothAssetEditorTools"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Private_ChaosClothAsset_ClothWeightMapPaintBrushOps_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Private_ChaosClothAsset_ClothWeightMapPaintBrushOps_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
