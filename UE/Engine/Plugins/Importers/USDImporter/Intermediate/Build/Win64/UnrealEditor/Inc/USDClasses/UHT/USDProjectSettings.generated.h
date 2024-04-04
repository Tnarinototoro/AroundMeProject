// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "USDProjectSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef USDCLASSES_USDProjectSettings_generated_h
#error "USDProjectSettings.generated.h already included, missing '#pragma once' in USDProjectSettings.h"
#endif
#define USDCLASSES_USDProjectSettings_generated_h

#define FID_Engine_Plugins_Importers_USDImporter_Source_USDClasses_Public_USDProjectSettings_h_32_SPARSE_DATA
#define FID_Engine_Plugins_Importers_USDImporter_Source_USDClasses_Public_USDProjectSettings_h_32_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Importers_USDImporter_Source_USDClasses_Public_USDProjectSettings_h_32_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Importers_USDImporter_Source_USDClasses_Public_USDProjectSettings_h_32_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Importers_USDImporter_Source_USDClasses_Public_USDProjectSettings_h_32_ACCESSORS
#define FID_Engine_Plugins_Importers_USDImporter_Source_USDClasses_Public_USDProjectSettings_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUsdProjectSettings(); \
	friend struct Z_Construct_UClass_UUsdProjectSettings_Statics; \
public: \
	DECLARE_CLASS(UUsdProjectSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/USDClasses"), USDCLASSES_API) \
	DECLARE_SERIALIZER(UUsdProjectSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("USDImporter");} \



#define FID_Engine_Plugins_Importers_USDImporter_Source_USDClasses_Public_USDProjectSettings_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	USDCLASSES_API UUsdProjectSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USDCLASSES_API UUsdProjectSettings(UUsdProjectSettings&&); \
	USDCLASSES_API UUsdProjectSettings(const UUsdProjectSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(USDCLASSES_API, UUsdProjectSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUsdProjectSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUsdProjectSettings) \
	USDCLASSES_API virtual ~UUsdProjectSettings();


#define FID_Engine_Plugins_Importers_USDImporter_Source_USDClasses_Public_USDProjectSettings_h_29_PROLOG
#define FID_Engine_Plugins_Importers_USDImporter_Source_USDClasses_Public_USDProjectSettings_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDClasses_Public_USDProjectSettings_h_32_SPARSE_DATA \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDClasses_Public_USDProjectSettings_h_32_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDClasses_Public_USDProjectSettings_h_32_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDClasses_Public_USDProjectSettings_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDClasses_Public_USDProjectSettings_h_32_ACCESSORS \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDClasses_Public_USDProjectSettings_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDClasses_Public_USDProjectSettings_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> USDCLASSES_API UClass* StaticClass<class UUsdProjectSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Importers_USDImporter_Source_USDClasses_Public_USDProjectSettings_h


#define FOREACH_ENUM_EUSDSAVEDIALOGBEHAVIOR(op) \
	op(EUsdSaveDialogBehavior::NeverSave) \
	op(EUsdSaveDialogBehavior::AlwaysSave) \
	op(EUsdSaveDialogBehavior::ShowPrompt) 

enum class EUsdSaveDialogBehavior : uint8;
template<> struct TIsUEnumClass<EUsdSaveDialogBehavior> { enum { Value = true }; };
template<> USDCLASSES_API UEnum* StaticEnum<EUsdSaveDialogBehavior>();

#define FOREACH_ENUM_EUSDEDITININSTANCEBEHAVIOR(op) \
	op(EUsdEditInInstanceBehavior::Ignore) \
	op(EUsdEditInInstanceBehavior::RemoveInstanceable) \
	op(EUsdEditInInstanceBehavior::ShowPrompt) 

enum class EUsdEditInInstanceBehavior : uint8;
template<> struct TIsUEnumClass<EUsdEditInInstanceBehavior> { enum { Value = true }; };
template<> USDCLASSES_API UEnum* StaticEnum<EUsdEditInInstanceBehavior>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
