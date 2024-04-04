// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorValidatorSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEditorValidatorBase;
class UObject;
enum class EDataValidationResult : uint8;
enum class EDataValidationUsecase : uint8;
struct FAssetData;
struct FValidateAssetsResults;
struct FValidateAssetsSettings;
#ifdef DATAVALIDATION_EditorValidatorSubsystem_generated_h
#error "EditorValidatorSubsystem.generated.h already included, missing '#pragma once' in EditorValidatorSubsystem.h"
#endif
#define DATAVALIDATION_EditorValidatorSubsystem_generated_h

#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FValidateAssetsDetails_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DATAVALIDATION_API UScriptStruct* StaticStruct<struct FValidateAssetsDetails>();

#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FValidateAssetsResults_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DATAVALIDATION_API UScriptStruct* StaticStruct<struct FValidateAssetsResults>();

#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_85_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FValidateAssetsSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DATAVALIDATION_API UScriptStruct* StaticStruct<struct FValidateAssetsSettings>();

#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_115_SPARSE_DATA
#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_115_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_115_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_115_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_115_ACCESSORS
#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_115_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataValidationSettings(); \
	friend struct Z_Construct_UClass_UDataValidationSettings_Statics; \
public: \
	DECLARE_CLASS(UDataValidationSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DataValidation"), NO_API) \
	DECLARE_SERIALIZER(UDataValidationSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_115_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataValidationSettings(UDataValidationSettings&&); \
	NO_API UDataValidationSettings(const UDataValidationSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataValidationSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataValidationSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDataValidationSettings) \
	NO_API virtual ~UDataValidationSettings();


#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_112_PROLOG
#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_115_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_115_SPARSE_DATA \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_115_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_115_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_115_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_115_ACCESSORS \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_115_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_115_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATAVALIDATION_API UClass* StaticClass<class UDataValidationSettings>();

#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_138_SPARSE_DATA
#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_138_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_138_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_138_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execValidateAssets); \
	DECLARE_FUNCTION(execValidateAssetsWithSettings); \
	DECLARE_FUNCTION(execIsAssetValid); \
	DECLARE_FUNCTION(execIsObjectValid); \
	DECLARE_FUNCTION(execAddValidator);


#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_138_ACCESSORS
#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_138_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorValidatorSubsystem(); \
	friend struct Z_Construct_UClass_UEditorValidatorSubsystem_Statics; \
public: \
	DECLARE_CLASS(UEditorValidatorSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DataValidation"), NO_API) \
	DECLARE_SERIALIZER(UEditorValidatorSubsystem) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_138_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorValidatorSubsystem(UEditorValidatorSubsystem&&); \
	NO_API UEditorValidatorSubsystem(const UEditorValidatorSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorValidatorSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorValidatorSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEditorValidatorSubsystem) \
	NO_API virtual ~UEditorValidatorSubsystem();


#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_135_PROLOG
#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_138_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_138_SPARSE_DATA \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_138_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_138_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_138_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_138_ACCESSORS \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_138_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_138_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATAVALIDATION_API UClass* StaticClass<class UEditorValidatorSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
