// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/FractureToolConvert.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFractureToolConvert() {}
// Cross Module References
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureConvertSettings();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureConvertSettings_NoRegister();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureModalTool();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureReimportSettings();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureReimportSettings_NoRegister();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolConvert();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolConvert_NoRegister();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolSettings();
	UPackage* Z_Construct_UPackage__Script_FractureEditor();
// End Cross Module References
	void UFractureConvertSettings::StaticRegisterNativesUFractureConvertSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureConvertSettings);
	UClass* Z_Construct_UClass_UFractureConvertSettings_NoRegister()
	{
		return UFractureConvertSettings::StaticClass();
	}
	struct Z_Construct_UClass_UFractureConvertSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPromptForBaseName_MetaData[];
#endif
		static void NewProp_bPromptForBaseName_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPromptForBaseName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPerBone_MetaData[];
#endif
		static void NewProp_bPerBone_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPerBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCenterPivots_MetaData[];
#endif
		static void NewProp_bCenterPivots_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCenterPivots;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPlaceInWorld_MetaData[];
#endif
		static void NewProp_bPlaceInWorld_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlaceInWorld;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSelectNewActors_MetaData[];
#endif
		static void NewProp_bSelectNewActors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelectNewActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureConvertSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFractureToolSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFractureConvertSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureConvertSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Settings related to geometry collection -> static mesh conversion **/" },
		{ "IncludePath", "FractureToolConvert.h" },
		{ "ModuleRelativePath", "Private/FractureToolConvert.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Settings related to geometry collection -> static mesh conversion *" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureConvertSettings_Statics::NewProp_bPromptForBaseName_MetaData[] = {
		{ "Category", "AssetSettings" },
		{ "Comment", "/** Whether to prompt user for a location and base name for the generated meshes, or automatically place them next to the source geometry collections */" },
		{ "ModuleRelativePath", "Private/FractureToolConvert.h" },
		{ "ToolTip", "Whether to prompt user for a location and base name for the generated meshes, or automatically place them next to the source geometry collections" },
	};
#endif
	void Z_Construct_UClass_UFractureConvertSettings_Statics::NewProp_bPromptForBaseName_SetBit(void* Obj)
	{
		((UFractureConvertSettings*)Obj)->bPromptForBaseName = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFractureConvertSettings_Statics::NewProp_bPromptForBaseName = { "bPromptForBaseName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFractureConvertSettings), &Z_Construct_UClass_UFractureConvertSettings_Statics::NewProp_bPromptForBaseName_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFractureConvertSettings_Statics::NewProp_bPromptForBaseName_MetaData), Z_Construct_UClass_UFractureConvertSettings_Statics::NewProp_bPromptForBaseName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureConvertSettings_Statics::NewProp_bPerBone_MetaData[] = {
		{ "Category", "AssetSettings" },
		{ "Comment", "/** Whether to generate a separate mesh for each bone, or one combined mesh */" },
		{ "ModuleRelativePath", "Private/FractureToolConvert.h" },
		{ "ToolTip", "Whether to generate a separate mesh for each bone, or one combined mesh" },
	};
#endif
	void Z_Construct_UClass_UFractureConvertSettings_Statics::NewProp_bPerBone_SetBit(void* Obj)
	{
		((UFractureConvertSettings*)Obj)->bPerBone = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFractureConvertSettings_Statics::NewProp_bPerBone = { "bPerBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFractureConvertSettings), &Z_Construct_UClass_UFractureConvertSettings_Statics::NewProp_bPerBone_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFractureConvertSettings_Statics::NewProp_bPerBone_MetaData), Z_Construct_UClass_UFractureConvertSettings_Statics::NewProp_bPerBone_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureConvertSettings_Statics::NewProp_bCenterPivots_MetaData[] = {
		{ "Category", "GeometrySettings" },
		{ "Comment", "/** Whether to center the pivot for each mesh, or use the pivot from the geometry collection */" },
		{ "ModuleRelativePath", "Private/FractureToolConvert.h" },
		{ "ToolTip", "Whether to center the pivot for each mesh, or use the pivot from the geometry collection" },
	};
#endif
	void Z_Construct_UClass_UFractureConvertSettings_Statics::NewProp_bCenterPivots_SetBit(void* Obj)
	{
		((UFractureConvertSettings*)Obj)->bCenterPivots = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFractureConvertSettings_Statics::NewProp_bCenterPivots = { "bCenterPivots", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFractureConvertSettings), &Z_Construct_UClass_UFractureConvertSettings_Statics::NewProp_bCenterPivots_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFractureConvertSettings_Statics::NewProp_bCenterPivots_MetaData), Z_Construct_UClass_UFractureConvertSettings_Statics::NewProp_bCenterPivots_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureConvertSettings_Statics::NewProp_bPlaceInWorld_MetaData[] = {
		{ "Category", "ActorSettings" },
		{ "Comment", "/** Whether to place new static mesh actors in the level */" },
		{ "ModuleRelativePath", "Private/FractureToolConvert.h" },
		{ "ToolTip", "Whether to place new static mesh actors in the level" },
	};
#endif
	void Z_Construct_UClass_UFractureConvertSettings_Statics::NewProp_bPlaceInWorld_SetBit(void* Obj)
	{
		((UFractureConvertSettings*)Obj)->bPlaceInWorld = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFractureConvertSettings_Statics::NewProp_bPlaceInWorld = { "bPlaceInWorld", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFractureConvertSettings), &Z_Construct_UClass_UFractureConvertSettings_Statics::NewProp_bPlaceInWorld_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFractureConvertSettings_Statics::NewProp_bPlaceInWorld_MetaData), Z_Construct_UClass_UFractureConvertSettings_Statics::NewProp_bPlaceInWorld_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureConvertSettings_Statics::NewProp_bSelectNewActors_MetaData[] = {
		{ "Category", "ActorSettings" },
		{ "Comment", "/** Whether to select new static mesh actors */" },
		{ "EditCondition", "bPlaceInWorld" },
		{ "ModuleRelativePath", "Private/FractureToolConvert.h" },
		{ "ToolTip", "Whether to select new static mesh actors" },
	};
#endif
	void Z_Construct_UClass_UFractureConvertSettings_Statics::NewProp_bSelectNewActors_SetBit(void* Obj)
	{
		((UFractureConvertSettings*)Obj)->bSelectNewActors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFractureConvertSettings_Statics::NewProp_bSelectNewActors = { "bSelectNewActors", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFractureConvertSettings), &Z_Construct_UClass_UFractureConvertSettings_Statics::NewProp_bSelectNewActors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFractureConvertSettings_Statics::NewProp_bSelectNewActors_MetaData), Z_Construct_UClass_UFractureConvertSettings_Statics::NewProp_bSelectNewActors_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFractureConvertSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureConvertSettings_Statics::NewProp_bPromptForBaseName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureConvertSettings_Statics::NewProp_bPerBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureConvertSettings_Statics::NewProp_bCenterPivots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureConvertSettings_Statics::NewProp_bPlaceInWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureConvertSettings_Statics::NewProp_bSelectNewActors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureConvertSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureConvertSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureConvertSettings_Statics::ClassParams = {
		&UFractureConvertSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFractureConvertSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFractureConvertSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFractureConvertSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UFractureConvertSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFractureConvertSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UFractureConvertSettings()
	{
		if (!Z_Registration_Info_UClass_UFractureConvertSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureConvertSettings.OuterSingleton, Z_Construct_UClass_UFractureConvertSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureConvertSettings.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureConvertSettings>()
	{
		return UFractureConvertSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureConvertSettings);
	UFractureConvertSettings::~UFractureConvertSettings() {}
	void UFractureReimportSettings::StaticRegisterNativesUFractureReimportSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureReimportSettings);
	UClass* Z_Construct_UClass_UFractureReimportSettings_NoRegister()
	{
		return UFractureReimportSettings::StaticClass();
	}
	struct Z_Construct_UClass_UFractureReimportSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOddMaterialsAreInternal_MetaData[];
#endif
		static void NewProp_bOddMaterialsAreInternal_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOddMaterialsAreInternal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureReimportSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFractureToolSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFractureReimportSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureReimportSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Settings related to geometry collection -> static mesh conversion **/" },
		{ "IncludePath", "FractureToolConvert.h" },
		{ "ModuleRelativePath", "Private/FractureToolConvert.h" },
		{ "ToolTip", "Settings related to geometry collection -> static mesh conversion *" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureReimportSettings_Statics::NewProp_bOddMaterialsAreInternal_MetaData[] = {
		{ "Category", "ReimportSettings" },
		{ "Comment", "// If checked, materials will be updated on export to ensure that odd-numbered material IDs correspond to internal faces, and this will be used on re-import to assign correct material IDs\n" },
		{ "ModuleRelativePath", "Private/FractureToolConvert.h" },
		{ "ToolTip", "If checked, materials will be updated on export to ensure that odd-numbered material IDs correspond to internal faces, and this will be used on re-import to assign correct material IDs" },
	};
#endif
	void Z_Construct_UClass_UFractureReimportSettings_Statics::NewProp_bOddMaterialsAreInternal_SetBit(void* Obj)
	{
		((UFractureReimportSettings*)Obj)->bOddMaterialsAreInternal = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFractureReimportSettings_Statics::NewProp_bOddMaterialsAreInternal = { "bOddMaterialsAreInternal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFractureReimportSettings), &Z_Construct_UClass_UFractureReimportSettings_Statics::NewProp_bOddMaterialsAreInternal_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFractureReimportSettings_Statics::NewProp_bOddMaterialsAreInternal_MetaData), Z_Construct_UClass_UFractureReimportSettings_Statics::NewProp_bOddMaterialsAreInternal_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFractureReimportSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureReimportSettings_Statics::NewProp_bOddMaterialsAreInternal,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureReimportSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureReimportSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureReimportSettings_Statics::ClassParams = {
		&UFractureReimportSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFractureReimportSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFractureReimportSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFractureReimportSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UFractureReimportSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFractureReimportSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UFractureReimportSettings()
	{
		if (!Z_Registration_Info_UClass_UFractureReimportSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureReimportSettings.OuterSingleton, Z_Construct_UClass_UFractureReimportSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureReimportSettings.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureReimportSettings>()
	{
		return UFractureReimportSettings::StaticClass();
	}
	UFractureReimportSettings::UFractureReimportSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureReimportSettings);
	UFractureReimportSettings::~UFractureReimportSettings() {}
	void UFractureToolConvert::StaticRegisterNativesUFractureToolConvert()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureToolConvert);
	UClass* Z_Construct_UClass_UFractureToolConvert_NoRegister()
	{
		return UFractureToolConvert::StaticClass();
	}
	struct Z_Construct_UClass_UFractureToolConvert_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConvertSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ConvertSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReimportSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ReimportSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureToolConvert_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFractureModalTool,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolConvert_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolConvert_Statics::Class_MetaDataParams[] = {
		{ "Category", "FractureTools" },
		{ "DisplayName", "Convert Tool" },
		{ "IncludePath", "FractureToolConvert.h" },
		{ "ModuleRelativePath", "Private/FractureToolConvert.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolConvert_Statics::NewProp_ConvertSettings_MetaData[] = {
		{ "Category", "Slicing" },
		{ "ModuleRelativePath", "Private/FractureToolConvert.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFractureToolConvert_Statics::NewProp_ConvertSettings = { "ConvertSettings", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFractureToolConvert, ConvertSettings), Z_Construct_UClass_UFractureConvertSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolConvert_Statics::NewProp_ConvertSettings_MetaData), Z_Construct_UClass_UFractureToolConvert_Statics::NewProp_ConvertSettings_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolConvert_Statics::NewProp_ReimportSettings_MetaData[] = {
		{ "Category", "Slicing" },
		{ "ModuleRelativePath", "Private/FractureToolConvert.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFractureToolConvert_Statics::NewProp_ReimportSettings = { "ReimportSettings", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFractureToolConvert, ReimportSettings), Z_Construct_UClass_UFractureReimportSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolConvert_Statics::NewProp_ReimportSettings_MetaData), Z_Construct_UClass_UFractureToolConvert_Statics::NewProp_ReimportSettings_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFractureToolConvert_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureToolConvert_Statics::NewProp_ConvertSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureToolConvert_Statics::NewProp_ReimportSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureToolConvert_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureToolConvert>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureToolConvert_Statics::ClassParams = {
		&UFractureToolConvert::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFractureToolConvert_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolConvert_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolConvert_Statics::Class_MetaDataParams), Z_Construct_UClass_UFractureToolConvert_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolConvert_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UFractureToolConvert()
	{
		if (!Z_Registration_Info_UClass_UFractureToolConvert.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureToolConvert.OuterSingleton, Z_Construct_UClass_UFractureToolConvert_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureToolConvert.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureToolConvert>()
	{
		return UFractureToolConvert::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureToolConvert);
	UFractureToolConvert::~UFractureToolConvert() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolConvert_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolConvert_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFractureConvertSettings, UFractureConvertSettings::StaticClass, TEXT("UFractureConvertSettings"), &Z_Registration_Info_UClass_UFractureConvertSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureConvertSettings), 2196739570U) },
		{ Z_Construct_UClass_UFractureReimportSettings, UFractureReimportSettings::StaticClass, TEXT("UFractureReimportSettings"), &Z_Registration_Info_UClass_UFractureReimportSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureReimportSettings), 3642604831U) },
		{ Z_Construct_UClass_UFractureToolConvert, UFractureToolConvert::StaticClass, TEXT("UFractureToolConvert"), &Z_Registration_Info_UClass_UFractureToolConvert, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureToolConvert), 3665722952U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolConvert_h_1995323593(TEXT("/Script/FractureEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolConvert_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolConvert_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
