// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StateTreeSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STATETREEMODULE_StateTreeSettings_generated_h
#error "StateTreeSettings.generated.h already included, missing '#pragma once' in StateTreeSettings.h"
#endif
#define STATETREEMODULE_StateTreeSettings_generated_h

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeSettings_h_14_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeSettings_h_14_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeSettings_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeSettings_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeSettings_h_14_ACCESSORS
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeSettings_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStateTreeSettings(); \
	friend struct Z_Construct_UClass_UStateTreeSettings_Statics; \
public: \
	DECLARE_CLASS(UStateTreeSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/StateTreeModule"), NO_API) \
	DECLARE_SERIALIZER(UStateTreeSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("StateTree");} \



#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeSettings_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStateTreeSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStateTreeSettings(UStateTreeSettings&&); \
	NO_API UStateTreeSettings(const UStateTreeSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStateTreeSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStateTreeSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStateTreeSettings) \
	NO_API virtual ~UStateTreeSettings();


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeSettings_h_11_PROLOG
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeSettings_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeSettings_h_14_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeSettings_h_14_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeSettings_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeSettings_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeSettings_h_14_ACCESSORS \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeSettings_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeSettings_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STATETREEMODULE_API UClass* StaticClass<class UStateTreeSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
