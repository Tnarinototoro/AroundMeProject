// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/SearchProjectSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ASSETSEARCH_SearchProjectSettings_generated_h
#error "SearchProjectSettings.generated.h already included, missing '#pragma once' in SearchProjectSettings.h"
#endif
#define ASSETSEARCH_SearchProjectSettings_generated_h

#define FID_Engine_Plugins_Editor_AssetSearch_Source_Private_Settings_SearchProjectSettings_h_23_SPARSE_DATA
#define FID_Engine_Plugins_Editor_AssetSearch_Source_Private_Settings_SearchProjectSettings_h_23_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Editor_AssetSearch_Source_Private_Settings_SearchProjectSettings_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Editor_AssetSearch_Source_Private_Settings_SearchProjectSettings_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Editor_AssetSearch_Source_Private_Settings_SearchProjectSettings_h_23_ACCESSORS
#define FID_Engine_Plugins_Editor_AssetSearch_Source_Private_Settings_SearchProjectSettings_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSearchProjectSettings(); \
	friend struct Z_Construct_UClass_USearchProjectSettings_Statics; \
public: \
	DECLARE_CLASS(USearchProjectSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AssetSearch"), NO_API) \
	DECLARE_SERIALIZER(USearchProjectSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Plugins_Editor_AssetSearch_Source_Private_Settings_SearchProjectSettings_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USearchProjectSettings(USearchProjectSettings&&); \
	NO_API USearchProjectSettings(const USearchProjectSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USearchProjectSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USearchProjectSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USearchProjectSettings) \
	NO_API virtual ~USearchProjectSettings();


#define FID_Engine_Plugins_Editor_AssetSearch_Source_Private_Settings_SearchProjectSettings_h_20_PROLOG
#define FID_Engine_Plugins_Editor_AssetSearch_Source_Private_Settings_SearchProjectSettings_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_AssetSearch_Source_Private_Settings_SearchProjectSettings_h_23_SPARSE_DATA \
	FID_Engine_Plugins_Editor_AssetSearch_Source_Private_Settings_SearchProjectSettings_h_23_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Editor_AssetSearch_Source_Private_Settings_SearchProjectSettings_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Editor_AssetSearch_Source_Private_Settings_SearchProjectSettings_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_AssetSearch_Source_Private_Settings_SearchProjectSettings_h_23_ACCESSORS \
	FID_Engine_Plugins_Editor_AssetSearch_Source_Private_Settings_SearchProjectSettings_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_AssetSearch_Source_Private_Settings_SearchProjectSettings_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASSETSEARCH_API UClass* StaticClass<class USearchProjectSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_AssetSearch_Source_Private_Settings_SearchProjectSettings_h


#define FOREACH_ENUM_ESEARCHINTERMEDIATESTORAGE(op) \
	op(ESearchIntermediateStorage::DerivedDataCache) \
	op(ESearchIntermediateStorage::AssetTagData) 

enum class ESearchIntermediateStorage : uint8;
template<> struct TIsUEnumClass<ESearchIntermediateStorage> { enum { Value = true }; };
template<> ASSETSEARCH_API UEnum* StaticEnum<ESearchIntermediateStorage>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
