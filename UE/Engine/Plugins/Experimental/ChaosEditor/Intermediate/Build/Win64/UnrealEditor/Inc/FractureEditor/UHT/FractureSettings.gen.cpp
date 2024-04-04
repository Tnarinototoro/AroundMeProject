// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FractureSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFractureSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureSettings();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureSettings_NoRegister();
	GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollection_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FractureEditor();
// End Cross Module References
	void UFractureSettings::StaticRegisterNativesUFractureSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureSettings);
	UClass* Z_Construct_UClass_UFractureSettings_NoRegister()
	{
		return UFractureSettings::StaticClass();
	}
	struct Z_Construct_UClass_UFractureSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExplodeAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExplodeAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FractureLevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FractureLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHideUnselected_MetaData[];
#endif
		static void NewProp_bHideUnselected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideUnselected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RestCollection_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_RestCollection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFractureSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Settings specifically related to viewing fractured meshes **/" },
		{ "IncludePath", "FractureSettings.h" },
		{ "ModuleRelativePath", "Public/FractureSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Settings specifically related to viewing fractured meshes *" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureSettings_Statics::NewProp_ExplodeAmount_MetaData[] = {
		{ "Category", "ViewSettings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Amount to expand the displayed Geometry Collection bones into an 'exploded view' */" },
		{ "DisplayName", "Explode Amount" },
		{ "ModuleRelativePath", "Public/FractureSettings.h" },
		{ "ToolTip", "Amount to expand the displayed Geometry Collection bones into an 'exploded view'" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFractureSettings_Statics::NewProp_ExplodeAmount = { "ExplodeAmount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFractureSettings, ExplodeAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFractureSettings_Statics::NewProp_ExplodeAmount_MetaData), Z_Construct_UClass_UFractureSettings_Statics::NewProp_ExplodeAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureSettings_Statics::NewProp_FractureLevel_MetaData[] = {
		{ "Category", "ViewSettings" },
		{ "Comment", "/** Current level of the Geometry Collection displayed */" },
		{ "DisplayName", "Fracture Level" },
		{ "ModuleRelativePath", "Public/FractureSettings.h" },
		{ "ToolTip", "Current level of the Geometry Collection displayed" },
		{ "UIMin", "-1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFractureSettings_Statics::NewProp_FractureLevel = { "FractureLevel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFractureSettings, FractureLevel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFractureSettings_Statics::NewProp_FractureLevel_MetaData), Z_Construct_UClass_UFractureSettings_Statics::NewProp_FractureLevel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureSettings_Statics::NewProp_bHideUnselected_MetaData[] = {
		{ "Category", "ViewSettings" },
		{ "Comment", "/** When active, only show selected bones */" },
		{ "DisplayName", "Hide Unselected" },
		{ "ModuleRelativePath", "Public/FractureSettings.h" },
		{ "ToolTip", "When active, only show selected bones" },
	};
#endif
	void Z_Construct_UClass_UFractureSettings_Statics::NewProp_bHideUnselected_SetBit(void* Obj)
	{
		((UFractureSettings*)Obj)->bHideUnselected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFractureSettings_Statics::NewProp_bHideUnselected = { "bHideUnselected", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFractureSettings), &Z_Construct_UClass_UFractureSettings_Statics::NewProp_bHideUnselected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFractureSettings_Statics::NewProp_bHideUnselected_MetaData), Z_Construct_UClass_UFractureSettings_Statics::NewProp_bHideUnselected_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureSettings_Statics::NewProp_RestCollection_MetaData[] = {
		{ "Category", "ViewSettings" },
		{ "ModuleRelativePath", "Public/FractureSettings.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UFractureSettings_Statics::NewProp_RestCollection = { "RestCollection", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFractureSettings, RestCollection), Z_Construct_UClass_UGeometryCollection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFractureSettings_Statics::NewProp_RestCollection_MetaData), Z_Construct_UClass_UFractureSettings_Statics::NewProp_RestCollection_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFractureSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureSettings_Statics::NewProp_ExplodeAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureSettings_Statics::NewProp_FractureLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureSettings_Statics::NewProp_bHideUnselected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureSettings_Statics::NewProp_RestCollection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureSettings_Statics::ClassParams = {
		&UFractureSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFractureSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFractureSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFractureSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UFractureSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFractureSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UFractureSettings()
	{
		if (!Z_Registration_Info_UClass_UFractureSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureSettings.OuterSingleton, Z_Construct_UClass_UFractureSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureSettings.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureSettings>()
	{
		return UFractureSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureSettings);
	UFractureSettings::~UFractureSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFractureSettings, UFractureSettings::StaticClass, TEXT("UFractureSettings"), &Z_Registration_Info_UClass_UFractureSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureSettings), 1207147813U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureSettings_h_897391014(TEXT("/Script/FractureEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
