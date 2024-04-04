// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFeaturesSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEFEATURES_GameFeaturesSubsystem_generated_h
#error "GameFeaturesSubsystem.generated.h already included, missing '#pragma once' in GameFeaturesSubsystem.h"
#endif
#define GAMEFEATURES_GameFeaturesSubsystem_generated_h

#define FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeaturesSubsystem_h_215_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameFeaturePluginIdentifier_Statics; \
	GAMEFEATURES_API static class UScriptStruct* StaticStruct();


template<> GAMEFEATURES_API UScriptStruct* StaticStruct<struct FGameFeaturePluginIdentifier>();

#define FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeaturesSubsystem_h_275_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInstallBundlePluginProtocolMetaData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GAMEFEATURES_API UScriptStruct* StaticStruct<struct FInstallBundlePluginProtocolMetaData>();

#define FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeaturesSubsystem_h_329_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeaturesSubsystem_h_329_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeaturesSubsystem_h_329_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeaturesSubsystem_h_329_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeaturesSubsystem_h_329_ACCESSORS
#define FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeaturesSubsystem_h_329_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameFeaturesSubsystem(); \
	friend struct Z_Construct_UClass_UGameFeaturesSubsystem_Statics; \
public: \
	DECLARE_CLASS(UGameFeaturesSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameFeatures"), NO_API) \
	DECLARE_SERIALIZER(UGameFeaturesSubsystem)


#define FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeaturesSubsystem_h_329_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameFeaturesSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameFeaturesSubsystem(UGameFeaturesSubsystem&&); \
	NO_API UGameFeaturesSubsystem(const UGameFeaturesSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameFeaturesSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameFeaturesSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGameFeaturesSubsystem) \
	NO_API virtual ~UGameFeaturesSubsystem();


#define FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeaturesSubsystem_h_326_PROLOG
#define FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeaturesSubsystem_h_329_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeaturesSubsystem_h_329_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeaturesSubsystem_h_329_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeaturesSubsystem_h_329_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeaturesSubsystem_h_329_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeaturesSubsystem_h_329_ACCESSORS \
	FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeaturesSubsystem_h_329_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeaturesSubsystem_h_329_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEFEATURES_API UClass* StaticClass<class UGameFeaturesSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeaturesSubsystem_h


#define FOREACH_ENUM_EGAMEFEATURETARGETSTATE(op) \
	op(EGameFeatureTargetState::Installed) \
	op(EGameFeatureTargetState::Registered) \
	op(EGameFeatureTargetState::Loaded) \
	op(EGameFeatureTargetState::Active) \
	op(EGameFeatureTargetState::Count) 

enum class EGameFeatureTargetState : uint8;
template<> struct TIsUEnumClass<EGameFeatureTargetState> { enum { Value = true }; };
template<> GAMEFEATURES_API UEnum* StaticEnum<EGameFeatureTargetState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
