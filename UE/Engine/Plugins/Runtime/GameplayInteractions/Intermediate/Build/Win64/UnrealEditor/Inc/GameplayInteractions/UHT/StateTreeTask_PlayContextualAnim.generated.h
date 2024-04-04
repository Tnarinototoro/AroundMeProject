// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StateTree/StateTreeTask_PlayContextualAnim.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimMontage;
struct FBranchingPointNotifyPayload;
#ifdef GAMEPLAYINTERACTIONSMODULE_StateTreeTask_PlayContextualAnim_generated_h
#error "StateTreeTask_PlayContextualAnim.generated.h already included, missing '#pragma once' in StateTreeTask_PlayContextualAnim.h"
#endif
#define GAMEPLAYINTERACTIONSMODULE_StateTreeTask_PlayContextualAnim_generated_h

#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_StateTreeTask_PlayContextualAnim_h_31_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_StateTreeTask_PlayContextualAnim_h_31_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_StateTreeTask_PlayContextualAnim_h_31_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_StateTreeTask_PlayContextualAnim_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnNotifyBeginReceived); \
	DECLARE_FUNCTION(execOnMontageEnded);


#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_StateTreeTask_PlayContextualAnim_h_31_ACCESSORS
#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_StateTreeTask_PlayContextualAnim_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStateTreeTask_PlayContextualAnim_InstanceData(); \
	friend struct Z_Construct_UClass_UStateTreeTask_PlayContextualAnim_InstanceData_Statics; \
public: \
	DECLARE_CLASS(UStateTreeTask_PlayContextualAnim_InstanceData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayInteractionsModule"), NO_API) \
	DECLARE_SERIALIZER(UStateTreeTask_PlayContextualAnim_InstanceData)


#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_StateTreeTask_PlayContextualAnim_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStateTreeTask_PlayContextualAnim_InstanceData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStateTreeTask_PlayContextualAnim_InstanceData(UStateTreeTask_PlayContextualAnim_InstanceData&&); \
	NO_API UStateTreeTask_PlayContextualAnim_InstanceData(const UStateTreeTask_PlayContextualAnim_InstanceData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStateTreeTask_PlayContextualAnim_InstanceData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStateTreeTask_PlayContextualAnim_InstanceData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStateTreeTask_PlayContextualAnim_InstanceData) \
	NO_API virtual ~UStateTreeTask_PlayContextualAnim_InstanceData();


#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_StateTreeTask_PlayContextualAnim_h_28_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_StateTreeTask_PlayContextualAnim_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_StateTreeTask_PlayContextualAnim_h_31_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_StateTreeTask_PlayContextualAnim_h_31_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_StateTreeTask_PlayContextualAnim_h_31_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_StateTreeTask_PlayContextualAnim_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_StateTreeTask_PlayContextualAnim_h_31_ACCESSORS \
	FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_StateTreeTask_PlayContextualAnim_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_StateTreeTask_PlayContextualAnim_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYINTERACTIONSMODULE_API UClass* StaticClass<class UStateTreeTask_PlayContextualAnim_InstanceData>();

#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_StateTreeTask_PlayContextualAnim_h_145_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStateTreeTask_PlayContextualAnim_Statics; \
	GAMEPLAYINTERACTIONSMODULE_API static class UScriptStruct* StaticStruct(); \
	typedef FStateTreeTaskCommonBase Super;


template<> GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* StaticStruct<struct FStateTreeTask_PlayContextualAnim>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_StateTreeTask_PlayContextualAnim_h


#define FOREACH_ENUM_EPLAYCONTEXTUALANIMEXECUTIONMETHOD(op) \
	op(EPlayContextualAnimExecutionMethod::StartInteraction) \
	op(EPlayContextualAnimExecutionMethod::JoinInteraction) \
	op(EPlayContextualAnimExecutionMethod::TransitionAllActors) \
	op(EPlayContextualAnimExecutionMethod::TransitionSingleActor) 

enum class EPlayContextualAnimExecutionMethod : uint8;
template<> struct TIsUEnumClass<EPlayContextualAnimExecutionMethod> { enum { Value = true }; };
template<> GAMEPLAYINTERACTIONSMODULE_API UEnum* StaticEnum<EPlayContextualAnimExecutionMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
