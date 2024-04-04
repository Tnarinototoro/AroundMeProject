// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SmartObjectBlueprintFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UBlackboardComponent;
class UBTNode;
class UObject;
class USmartObjectBehaviorDefinition;
struct FBlackboardKeySelector;
struct FSmartObjectClaimHandle;
struct FSmartObjectSlotHandle;
#ifdef SMARTOBJECTSMODULE_SmartObjectBlueprintFunctionLibrary_generated_h
#error "SmartObjectBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in SmartObjectBlueprintFunctionLibrary.h"
#endif
#define SMARTOBJECTSMODULE_SmartObjectBlueprintFunctionLibrary_generated_h

#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectBlueprintFunctionLibrary_h_18_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectBlueprintFunctionLibrary_h_18_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectBlueprintFunctionLibrary_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectBlueprintFunctionLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetBlackboardValueAsSOClaimHandle); \
	DECLARE_FUNCTION(execSetBlackboardValueAsSOClaimHandle); \
	DECLARE_FUNCTION(execSetMultipleSmartObjectsEnabled); \
	DECLARE_FUNCTION(execMarkSmartObjectSlotAsFree); \
	DECLARE_FUNCTION(execMarkSmartObjectSlotAsOccupied); \
	DECLARE_FUNCTION(execMarkSmartObjectSlotAsClaimed); \
	DECLARE_FUNCTION(execSetSmartObjectEnabled); \
	DECLARE_FUNCTION(execRemoveMultipleSmartObjects); \
	DECLARE_FUNCTION(execRemoveSmartObject); \
	DECLARE_FUNCTION(execAddMultipleSmartObjects); \
	DECLARE_FUNCTION(execAddSmartObject); \
	DECLARE_FUNCTION(execAddOrRemoveMultipleSmartObjects); \
	DECLARE_FUNCTION(execAddOrRemoveSmartObject); \
	DECLARE_FUNCTION(execIsValidSmartObjectClaimHandle); \
	DECLARE_FUNCTION(execSetValueAsSOClaimHandle); \
	DECLARE_FUNCTION(execGetValueAsSOClaimHandle);


#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectBlueprintFunctionLibrary_h_18_ACCESSORS
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectBlueprintFunctionLibrary_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSmartObjectBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_USmartObjectBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(USmartObjectBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SmartObjectsModule"), NO_API) \
	DECLARE_SERIALIZER(USmartObjectBlueprintFunctionLibrary)


#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectBlueprintFunctionLibrary_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USmartObjectBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USmartObjectBlueprintFunctionLibrary(USmartObjectBlueprintFunctionLibrary&&); \
	NO_API USmartObjectBlueprintFunctionLibrary(const USmartObjectBlueprintFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USmartObjectBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USmartObjectBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USmartObjectBlueprintFunctionLibrary) \
	NO_API virtual ~USmartObjectBlueprintFunctionLibrary();


#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectBlueprintFunctionLibrary_h_15_PROLOG
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectBlueprintFunctionLibrary_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectBlueprintFunctionLibrary_h_18_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectBlueprintFunctionLibrary_h_18_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectBlueprintFunctionLibrary_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectBlueprintFunctionLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectBlueprintFunctionLibrary_h_18_ACCESSORS \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectBlueprintFunctionLibrary_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectBlueprintFunctionLibrary_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SMARTOBJECTSMODULE_API UClass* StaticClass<class USmartObjectBlueprintFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectBlueprintFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
