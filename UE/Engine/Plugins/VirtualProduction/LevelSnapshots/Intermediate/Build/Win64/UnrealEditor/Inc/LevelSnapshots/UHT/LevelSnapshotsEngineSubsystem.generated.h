// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LevelSnapshotsEngineSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPostApplySnapshotEventData_Blueprint;
struct FPostTakeSnapshotEventData_Blueprint;
struct FPreApplySnapshotEventData_Blueprint;
struct FPreTakeSnapshotEventData_Blueprint;
#ifdef LEVELSNAPSHOTS_LevelSnapshotsEngineSubsystem_generated_h
#error "LevelSnapshotsEngineSubsystem.generated.h already included, missing '#pragma once' in LevelSnapshotsEngineSubsystem.h"
#endif
#define LEVELSNAPSHOTS_LevelSnapshotsEngineSubsystem_generated_h

#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_LevelSnapshotsEngineSubsystem_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLevelSnapshotEvent_Blueprint_Statics; \
	static class UScriptStruct* StaticStruct();


template<> LEVELSNAPSHOTS_API UScriptStruct* StaticStruct<struct FLevelSnapshotEvent_Blueprint>();

#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_LevelSnapshotsEngineSubsystem_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPreTakeSnapshotEventData_Blueprint_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FLevelSnapshotEvent_Blueprint Super;


template<> LEVELSNAPSHOTS_API UScriptStruct* StaticStruct<struct FPreTakeSnapshotEventData_Blueprint>();

#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_LevelSnapshotsEngineSubsystem_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPostTakeSnapshotEventData_Blueprint_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FLevelSnapshotEvent_Blueprint Super;


template<> LEVELSNAPSHOTS_API UScriptStruct* StaticStruct<struct FPostTakeSnapshotEventData_Blueprint>();

#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_LevelSnapshotsEngineSubsystem_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPreApplySnapshotEventData_Blueprint_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FLevelSnapshotEvent_Blueprint Super;


template<> LEVELSNAPSHOTS_API UScriptStruct* StaticStruct<struct FPreApplySnapshotEventData_Blueprint>();

#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_LevelSnapshotsEngineSubsystem_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPostApplySnapshotEventData_Blueprint_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FLevelSnapshotEvent_Blueprint Super;


template<> LEVELSNAPSHOTS_API UScriptStruct* StaticStruct<struct FPostApplySnapshotEventData_Blueprint>();

#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_LevelSnapshotsEngineSubsystem_h_47_DELEGATE \
static void FPreTakeSnapshotEvent_DelegateWrapper(const FMulticastScriptDelegate& PreTakeSnapshotEvent, FPreTakeSnapshotEventData_Blueprint const& EventData);


#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_LevelSnapshotsEngineSubsystem_h_52_DELEGATE \
static void FPostTakeSnapshotEvent_DelegateWrapper(const FMulticastScriptDelegate& PostTakeSnapshotEvent, FPostTakeSnapshotEventData_Blueprint const& EventData);


#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_LevelSnapshotsEngineSubsystem_h_57_DELEGATE \
static void FPreApplySnapshotEvent_DelegateWrapper(const FMulticastScriptDelegate& PreApplySnapshotEvent, FPreApplySnapshotEventData_Blueprint const& EventData);


#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_LevelSnapshotsEngineSubsystem_h_62_DELEGATE \
static void FPostApplySnapshotEvent_DelegateWrapper(const FMulticastScriptDelegate& PostApplySnapshotEvent, FPostApplySnapshotEventData_Blueprint const& EventData);


#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_LevelSnapshotsEngineSubsystem_h_44_SPARSE_DATA
#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_LevelSnapshotsEngineSubsystem_h_44_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_LevelSnapshotsEngineSubsystem_h_44_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_LevelSnapshotsEngineSubsystem_h_44_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_LevelSnapshotsEngineSubsystem_h_44_ACCESSORS
#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_LevelSnapshotsEngineSubsystem_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelSnapshotsEngineSubsystem(); \
	friend struct Z_Construct_UClass_ULevelSnapshotsEngineSubsystem_Statics; \
public: \
	DECLARE_CLASS(ULevelSnapshotsEngineSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LevelSnapshots"), NO_API) \
	DECLARE_SERIALIZER(ULevelSnapshotsEngineSubsystem)


#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_LevelSnapshotsEngineSubsystem_h_44_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelSnapshotsEngineSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULevelSnapshotsEngineSubsystem(ULevelSnapshotsEngineSubsystem&&); \
	NO_API ULevelSnapshotsEngineSubsystem(const ULevelSnapshotsEngineSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelSnapshotsEngineSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelSnapshotsEngineSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULevelSnapshotsEngineSubsystem) \
	NO_API virtual ~ULevelSnapshotsEngineSubsystem();


#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_LevelSnapshotsEngineSubsystem_h_41_PROLOG
#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_LevelSnapshotsEngineSubsystem_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_LevelSnapshotsEngineSubsystem_h_44_SPARSE_DATA \
	FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_LevelSnapshotsEngineSubsystem_h_44_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_LevelSnapshotsEngineSubsystem_h_44_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_LevelSnapshotsEngineSubsystem_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_LevelSnapshotsEngineSubsystem_h_44_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_LevelSnapshotsEngineSubsystem_h_44_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_LevelSnapshotsEngineSubsystem_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LEVELSNAPSHOTS_API UClass* StaticClass<class ULevelSnapshotsEngineSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_LevelSnapshotsEngineSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
