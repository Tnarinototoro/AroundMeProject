// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TargetingSystem/TargetingSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UTargetingPreset;
struct FCollisionQueryTaskData;
struct FHitResult;
struct FTargetingRequestHandle;
struct FTargetingSourceContext;
#ifdef TARGETINGSYSTEM_TargetingSubsystem_generated_h
#error "TargetingSubsystem.generated.h already included, missing '#pragma once' in TargetingSubsystem.h"
#endif
#define TARGETINGSYSTEM_TargetingSubsystem_generated_h

#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_TargetingSystem_TargetingSubsystem_h_82_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_TargetingSystem_TargetingSubsystem_h_82_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_TargetingSystem_TargetingSubsystem_h_82_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_TargetingSystem_TargetingSubsystem_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOverrideCollisionQueryTaskData); \
	DECLARE_FUNCTION(execGetTargetingResults); \
	DECLARE_FUNCTION(execGetTargetingResultsActors); \
	DECLARE_FUNCTION(execGetTargetingSourceContext); \
	DECLARE_FUNCTION(execStartAsyncTargetingRequest); \
	DECLARE_FUNCTION(execRemoveAsyncTargetingRequestWithHandle); \
	DECLARE_FUNCTION(execExecuteTargetingRequest);


#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_TargetingSystem_TargetingSubsystem_h_82_ACCESSORS
#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_TargetingSystem_TargetingSubsystem_h_82_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTargetingSubsystem(); \
	friend struct Z_Construct_UClass_UTargetingSubsystem_Statics; \
public: \
	DECLARE_CLASS(UTargetingSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TargetingSystem"), TARGETINGSYSTEM_API) \
	DECLARE_SERIALIZER(UTargetingSubsystem)


#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_TargetingSystem_TargetingSubsystem_h_82_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TARGETINGSYSTEM_API UTargetingSubsystem(UTargetingSubsystem&&); \
	TARGETINGSYSTEM_API UTargetingSubsystem(const UTargetingSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TARGETINGSYSTEM_API, UTargetingSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTargetingSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTargetingSubsystem) \
	TARGETINGSYSTEM_API virtual ~UTargetingSubsystem();


#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_TargetingSystem_TargetingSubsystem_h_79_PROLOG
#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_TargetingSystem_TargetingSubsystem_h_82_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_TargetingSystem_TargetingSubsystem_h_82_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_TargetingSystem_TargetingSubsystem_h_82_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_TargetingSystem_TargetingSubsystem_h_82_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_TargetingSystem_TargetingSubsystem_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_TargetingSystem_TargetingSubsystem_h_82_ACCESSORS \
	FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_TargetingSystem_TargetingSubsystem_h_82_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_TargetingSystem_TargetingSubsystem_h_82_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TARGETINGSYSTEM_API UClass* StaticClass<class UTargetingSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_TargetingSystem_TargetingSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
