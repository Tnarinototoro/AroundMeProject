// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ContextualAnimSceneAsset.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimSequenceBase;
enum class EContextualAnimCriterionToConsider : uint8;
enum class EContextualAnimPointType : uint8;
struct FContextualAnimPoint;
struct FContextualAnimQueryParams;
struct FContextualAnimQueryResult;
struct FContextualAnimSceneBindingContext;
#ifdef CONTEXTUALANIMATION_ContextualAnimSceneAsset_generated_h
#error "ContextualAnimSceneAsset.generated.h already included, missing '#pragma once' in ContextualAnimSceneAsset.h"
#endif
#define CONTEXTUALANIMATION_ContextualAnimSceneAsset_generated_h

#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_15_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_15_ACCESSORS
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUContextualAnimRolesAsset(); \
	friend struct Z_Construct_UClass_UContextualAnimRolesAsset_Statics; \
public: \
	DECLARE_CLASS(UContextualAnimRolesAsset, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ContextualAnimation"), NO_API) \
	DECLARE_SERIALIZER(UContextualAnimRolesAsset)


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UContextualAnimRolesAsset(UContextualAnimRolesAsset&&); \
	NO_API UContextualAnimRolesAsset(const UContextualAnimRolesAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UContextualAnimRolesAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContextualAnimRolesAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UContextualAnimRolesAsset) \
	NO_API virtual ~UContextualAnimRolesAsset();


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_15_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_15_ACCESSORS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONTEXTUALANIMATION_API UClass* StaticClass<class UContextualAnimRolesAsset>();

#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FContextualAnimSet_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTEXTUALANIMATION_API UScriptStruct* StaticStruct<struct FContextualAnimSet>();

#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_61_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FContextualAnimSceneSection_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTEXTUALANIMATION_API UScriptStruct* StaticStruct<struct FContextualAnimSceneSection>();

#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_105_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FContextualAnimPoint_Statics; \
	CONTEXTUALANIMATION_API static class UScriptStruct* StaticStruct();


template<> CONTEXTUALANIMATION_API UScriptStruct* StaticStruct<struct FContextualAnimPoint>();

#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_159_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FContextualAnimActorPreviewData_Statics; \
	CONTEXTUALANIMATION_API static class UScriptStruct* StaticStruct();


template<> CONTEXTUALANIMATION_API UScriptStruct* StaticStruct<struct FContextualAnimActorPreviewData>();

#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_183_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_183_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_183_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_183_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execQuery); \
	DECLARE_FUNCTION(execBP_GetStartAndEndTimeForWarpSection); \
	DECLARE_FUNCTION(execBP_GetIKTargetTransformForRoleAtTime); \
	DECLARE_FUNCTION(execBP_GetAlignmentTransformForRoleRelativeToWarpPoint); \
	DECLARE_FUNCTION(execBP_FindAnimSetIndexByAnimation); \
	DECLARE_FUNCTION(execBP_FindAnimationForRole); \
	DECLARE_FUNCTION(execGetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria); \
	DECLARE_FUNCTION(execGetAlignmentPointsForSecondaryRole); \
	DECLARE_FUNCTION(execGetRoles);


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_183_ACCESSORS
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_183_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUContextualAnimSceneAsset(); \
	friend struct Z_Construct_UClass_UContextualAnimSceneAsset_Statics; \
public: \
	DECLARE_CLASS(UContextualAnimSceneAsset, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ContextualAnimation"), NO_API) \
	DECLARE_SERIALIZER(UContextualAnimSceneAsset)


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_183_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UContextualAnimSceneAsset(UContextualAnimSceneAsset&&); \
	NO_API UContextualAnimSceneAsset(const UContextualAnimSceneAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UContextualAnimSceneAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContextualAnimSceneAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UContextualAnimSceneAsset) \
	NO_API virtual ~UContextualAnimSceneAsset();


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_180_PROLOG
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_183_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_183_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_183_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_183_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_183_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_183_ACCESSORS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_183_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_183_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONTEXTUALANIMATION_API UClass* StaticClass<class UContextualAnimSceneAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h


#define FOREACH_ENUM_ECONTEXTUALANIMPOINTTYPE(op) \
	op(EContextualAnimPointType::FirstFrame) \
	op(EContextualAnimPointType::SyncFrame) \
	op(EContextualAnimPointType::LastFrame) 

enum class EContextualAnimPointType : uint8;
template<> struct TIsUEnumClass<EContextualAnimPointType> { enum { Value = true }; };
template<> CONTEXTUALANIMATION_API UEnum* StaticEnum<EContextualAnimPointType>();

#define FOREACH_ENUM_ECONTEXTUALANIMCRITERIONTOCONSIDER(op) \
	op(EContextualAnimCriterionToConsider::All) \
	op(EContextualAnimCriterionToConsider::Spatial) \
	op(EContextualAnimCriterionToConsider::Other) 

enum class EContextualAnimCriterionToConsider : uint8;
template<> struct TIsUEnumClass<EContextualAnimCriterionToConsider> { enum { Value = true }; };
template<> CONTEXTUALANIMATION_API UEnum* StaticEnum<EContextualAnimCriterionToConsider>();

#define FOREACH_ENUM_ECONTEXTUALANIMACTORPREVIEWTYPE(op) \
	op(EContextualAnimActorPreviewType::SkeletalMesh) \
	op(EContextualAnimActorPreviewType::StaticMesh) \
	op(EContextualAnimActorPreviewType::Actor) \
	op(EContextualAnimActorPreviewType::None) 

enum class EContextualAnimActorPreviewType : uint8;
template<> struct TIsUEnumClass<EContextualAnimActorPreviewType> { enum { Value = true }; };
template<> CONTEXTUALANIMATION_API UEnum* StaticEnum<EContextualAnimActorPreviewType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
