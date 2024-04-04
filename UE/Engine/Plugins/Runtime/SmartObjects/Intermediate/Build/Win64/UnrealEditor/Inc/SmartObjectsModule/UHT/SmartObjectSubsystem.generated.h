// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SmartObjectSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class USmartObjectBehaviorDefinition;
class USmartObjectComponent;
struct FGameplayTag;
struct FGameplayTagContainer;
struct FSmartObjectClaimHandle;
struct FSmartObjectHandle;
struct FSmartObjectRequest;
struct FSmartObjectRequestResult;
struct FSmartObjectSlotHandle;
#ifdef SMARTOBJECTSMODULE_SmartObjectSubsystem_generated_h
#error "SmartObjectSubsystem.generated.h already included, missing '#pragma once' in SmartObjectSubsystem.h"
#endif
#define SMARTOBJECTSMODULE_SmartObjectSubsystem_generated_h

#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSubsystem_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSmartObjectRequestFilter_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SMARTOBJECTSMODULE_API UScriptStruct* StaticStruct<struct FSmartObjectRequestFilter>();

#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSubsystem_h_90_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSmartObjectRequest_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SMARTOBJECTSMODULE_API UScriptStruct* StaticStruct<struct FSmartObjectRequest>();

#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSubsystem_h_113_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSmartObjectRequestResult_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SMARTOBJECTSMODULE_API UScriptStruct* StaticStruct<struct FSmartObjectRequestResult>();

#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSubsystem_h_167_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSmartObjectSlotEntranceHandle_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SMARTOBJECTSMODULE_API UScriptStruct* StaticStruct<struct FSmartObjectSlotEntranceHandle>();

#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSubsystem_h_226_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSmartObjectSlotEntranceLocationRequest_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SMARTOBJECTSMODULE_API UScriptStruct* StaticStruct<struct FSmartObjectSlotEntranceLocationRequest>();

#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSubsystem_h_274_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSmartObjectSlotEntranceLocationResult_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SMARTOBJECTSMODULE_API UScriptStruct* StaticStruct<struct FSmartObjectSlotEntranceLocationResult>();

#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSubsystem_h_346_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSubsystem_h_346_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSubsystem_h_346_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSubsystem_h_346_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSlotEnabled); \
	DECLARE_FUNCTION(execRemoveTagFromSlot); \
	DECLARE_FUNCTION(execAddTagToSlot); \
	DECLARE_FUNCTION(execGetSlotTags); \
	DECLARE_FUNCTION(execRemoveTagFromInstance); \
	DECLARE_FUNCTION(execAddTagToInstance); \
	DECLARE_FUNCTION(execGetInstanceTags); \
	DECLARE_FUNCTION(execGetSlotTransformFromRequestResult); \
	DECLARE_FUNCTION(execGetSlotTransform); \
	DECLARE_FUNCTION(execGetSlotLocation); \
	DECLARE_FUNCTION(execGetBehaviorDefinitionByRequestResult); \
	DECLARE_FUNCTION(execGetBehaviorDefinition); \
	DECLARE_FUNCTION(execRelease); \
	DECLARE_FUNCTION(execUse); \
	DECLARE_FUNCTION(execClaim); \
	DECLARE_FUNCTION(execFindSmartObjects_BP); \
	DECLARE_FUNCTION(execFindSmartObjects); \
	DECLARE_FUNCTION(execFindSmartObject); \
	DECLARE_FUNCTION(execGetSmartObjectComponentByRequestResult); \
	DECLARE_FUNCTION(execGetSmartObjectComponent); \
	DECLARE_FUNCTION(execSetEnabled);


#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSubsystem_h_346_ACCESSORS
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSubsystem_h_346_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSmartObjectSubsystem(); \
	friend struct Z_Construct_UClass_USmartObjectSubsystem_Statics; \
public: \
	DECLARE_CLASS(USmartObjectSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/SmartObjectsModule"), NO_API) \
	DECLARE_SERIALIZER(USmartObjectSubsystem) \
	static const TCHAR* StaticConfigName() {return TEXT("SmartObjects");} \



#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSubsystem_h_346_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USmartObjectSubsystem(USmartObjectSubsystem&&); \
	NO_API USmartObjectSubsystem(const USmartObjectSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USmartObjectSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USmartObjectSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USmartObjectSubsystem) \
	NO_API virtual ~USmartObjectSubsystem();


#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSubsystem_h_343_PROLOG
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSubsystem_h_346_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSubsystem_h_346_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSubsystem_h_346_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSubsystem_h_346_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSubsystem_h_346_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSubsystem_h_346_ACCESSORS \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSubsystem_h_346_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSubsystem_h_346_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SMARTOBJECTSMODULE_API UClass* StaticClass<class USmartObjectSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSubsystem_h


#define FOREACH_ENUM_FSMARTOBJECTSLOTENTRYSELECTIONMETHOD(op) \
	op(FSmartObjectSlotEntrySelectionMethod::First) \
	op(FSmartObjectSlotEntrySelectionMethod::NearestToSearchLocation) 

enum class FSmartObjectSlotEntrySelectionMethod : uint8;
template<> struct TIsUEnumClass<FSmartObjectSlotEntrySelectionMethod> { enum { Value = true }; };
template<> SMARTOBJECTSMODULE_API UEnum* StaticEnum<FSmartObjectSlotEntrySelectionMethod>();

#define FOREACH_ENUM_ESMARTOBJECTCOLLECTIONREGISTRATIONRESULT(op) \
	op(ESmartObjectCollectionRegistrationResult::Failed_InvalidCollection) \
	op(ESmartObjectCollectionRegistrationResult::Failed_AlreadyRegistered) \
	op(ESmartObjectCollectionRegistrationResult::Failed_NotFromPersistentLevel) \
	op(ESmartObjectCollectionRegistrationResult::Succeeded) 

enum class ESmartObjectCollectionRegistrationResult : uint8;
template<> struct TIsUEnumClass<ESmartObjectCollectionRegistrationResult> { enum { Value = true }; };
template<> SMARTOBJECTSMODULE_API UEnum* StaticEnum<ESmartObjectCollectionRegistrationResult>();

#define FOREACH_ENUM_ESMARTOBJECTUNREGISTRATIONMODE(op) \
	op(ESmartObjectUnregistrationMode::KeepRuntimeInstanceActiveIfPartOfCollection) \
	op(ESmartObjectUnregistrationMode::DestroyRuntimeInstance) 

enum class ESmartObjectUnregistrationMode : uint8;
template<> struct TIsUEnumClass<ESmartObjectUnregistrationMode> { enum { Value = true }; };
template<> SMARTOBJECTSMODULE_API UEnum* StaticEnum<ESmartObjectUnregistrationMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
