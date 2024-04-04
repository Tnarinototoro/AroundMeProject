// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCGSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PCG_PCGSettings_generated_h
#error "PCGSettings.generated.h already included, missing '#pragma once' in PCGSettings.h"
#endif
#define PCG_PCGSettings_generated_h

#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_61_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPCGPropertyAliases_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


template<> PCG_API UScriptStruct* StaticStruct<struct FPCGPropertyAliases>();

#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_70_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPCGSettingsOverridableParam_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


template<> PCG_API UScriptStruct* StaticStruct<struct FPCGSettingsOverridableParam>();

#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_111_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPCGPreConfiguredSettingsInfo_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


template<> PCG_API UScriptStruct* StaticStruct<struct FPCGPreConfiguredSettingsInfo>();

#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_146_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_146_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_146_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_146_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_146_ACCESSORS
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_146_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGSettingsInterface(); \
	friend struct Z_Construct_UClass_UPCGSettingsInterface_Statics; \
public: \
	DECLARE_CLASS(UPCGSettingsInterface, UPCGData, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCG"), NO_API) \
	DECLARE_SERIALIZER(UPCGSettingsInterface)


#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_146_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGSettingsInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPCGSettingsInterface(UPCGSettingsInterface&&); \
	NO_API UPCGSettingsInterface(const UPCGSettingsInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGSettingsInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGSettingsInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGSettingsInterface) \
	NO_API virtual ~UPCGSettingsInterface();


#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_143_PROLOG
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_146_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_146_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_146_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_146_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_146_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_146_ACCESSORS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_146_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_146_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PCG_API UClass* StaticClass<class UPCGSettingsInterface>();

#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_182_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_182_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_182_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_182_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_182_ACCESSORS
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_182_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UPCGSettings, NO_API)


#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_182_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGSettings(); \
	friend struct Z_Construct_UClass_UPCGSettings_Statics; \
public: \
	DECLARE_CLASS(UPCGSettings, UPCGSettingsInterface, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCG"), NO_API) \
	DECLARE_SERIALIZER(UPCGSettings) \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_182_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_182_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPCGSettings(UPCGSettings&&); \
	NO_API UPCGSettings(const UPCGSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGSettings); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGSettings) \
	NO_API virtual ~UPCGSettings();


#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_179_PROLOG
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_182_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_182_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_182_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_182_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_182_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_182_ACCESSORS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_182_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_182_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PCG_API UClass* StaticClass<class UPCGSettings>();

#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_428_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_428_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_428_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_428_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_428_ACCESSORS
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_428_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGSettingsInstance(); \
	friend struct Z_Construct_UClass_UPCGSettingsInstance_Statics; \
public: \
	DECLARE_CLASS(UPCGSettingsInstance, UPCGSettingsInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), NO_API) \
	DECLARE_SERIALIZER(UPCGSettingsInstance)


#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_428_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGSettingsInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPCGSettingsInstance(UPCGSettingsInstance&&); \
	NO_API UPCGSettingsInstance(const UPCGSettingsInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGSettingsInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGSettingsInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGSettingsInstance) \
	NO_API virtual ~UPCGSettingsInstance();


#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_425_PROLOG
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_428_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_428_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_428_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_428_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_428_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_428_ACCESSORS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_428_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_428_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PCG_API UClass* StaticClass<class UPCGSettingsInstance>();

#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_464_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_464_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_464_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_464_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_464_ACCESSORS
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_464_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGTrivialSettings(); \
	friend struct Z_Construct_UClass_UPCGTrivialSettings_Statics; \
public: \
	DECLARE_CLASS(UPCGTrivialSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), NO_API) \
	DECLARE_SERIALIZER(UPCGTrivialSettings)


#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_464_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPCGTrivialSettings(UPCGTrivialSettings&&); \
	NO_API UPCGTrivialSettings(const UPCGTrivialSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGTrivialSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGTrivialSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPCGTrivialSettings) \
	NO_API virtual ~UPCGTrivialSettings();


#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_461_PROLOG
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_464_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_464_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_464_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_464_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_464_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_464_ACCESSORS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_464_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_464_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PCG_API UClass* StaticClass<class UPCGTrivialSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h


#define FOREACH_ENUM_EPCGSETTINGSEXECUTIONMODE(op) \
	op(EPCGSettingsExecutionMode::Enabled) \
	op(EPCGSettingsExecutionMode::Debug) \
	op(EPCGSettingsExecutionMode::Isolated) \
	op(EPCGSettingsExecutionMode::Disabled) 

enum class EPCGSettingsExecutionMode : uint8;
template<> struct TIsUEnumClass<EPCGSettingsExecutionMode> { enum { Value = true }; };
template<> PCG_API UEnum* StaticEnum<EPCGSettingsExecutionMode>();

#define FOREACH_ENUM_EPCGSETTINGSTYPE(op) \
	op(EPCGSettingsType::InputOutput) \
	op(EPCGSettingsType::Spatial) \
	op(EPCGSettingsType::Density) \
	op(EPCGSettingsType::Blueprint) \
	op(EPCGSettingsType::Metadata) \
	op(EPCGSettingsType::Filter) \
	op(EPCGSettingsType::Sampler) \
	op(EPCGSettingsType::Spawner) \
	op(EPCGSettingsType::Subgraph) \
	op(EPCGSettingsType::Debug) \
	op(EPCGSettingsType::Generic) \
	op(EPCGSettingsType::Param) \
	op(EPCGSettingsType::HierarchicalGeneration) \
	op(EPCGSettingsType::ControlFlow) 

enum class EPCGSettingsType : uint8;
template<> struct TIsUEnumClass<EPCGSettingsType> { enum { Value = true }; };
template<> PCG_API UEnum* StaticEnum<EPCGSettingsType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
