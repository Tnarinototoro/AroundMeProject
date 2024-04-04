// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ContextualAnimSceneActorComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAnimMontage;
class UContextualAnimSceneActorComponent;
class USkinnedMeshComponent;
struct FBranchingPointNotifyPayload;
struct FContextualAnimIKTarget;
struct FContextualAnimSceneBindings;
#ifdef CONTEXTUALANIMATION_ContextualAnimSceneActorComponent_generated_h
#error "ContextualAnimSceneActorComponent.generated.h already included, missing '#pragma once' in ContextualAnimSceneActorComponent.h"
#endif
#define CONTEXTUALANIMATION_ContextualAnimSceneActorComponent_generated_h

#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_16_DELEGATE \
CONTEXTUALANIMATION_API void FContextualAnimSceneActorCompDelegate_DelegateWrapper(const FMulticastScriptDelegate& ContextualAnimSceneActorCompDelegate, UContextualAnimSceneActorComponent* SceneActorComponent);


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_17_DELEGATE \
CONTEXTUALANIMATION_API void FContextualAnimPlayMontageNotifyBeginDelegate_DelegateWrapper(const FMulticastScriptDelegate& ContextualAnimPlayMontageNotifyBeginDelegate, UContextualAnimSceneActorComponent* SceneActorComponent, FName NotifyName);


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FContextualAnimWarpTarget_Statics; \
	CONTEXTUALANIMATION_API static class UScriptStruct* StaticStruct();


template<> CONTEXTUALANIMATION_API UScriptStruct* StaticStruct<struct FContextualAnimWarpTarget>();

#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_50_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FContextualAnimRepData_Statics; \
	CONTEXTUALANIMATION_API static class UScriptStruct* StaticStruct();


template<> CONTEXTUALANIMATION_API UScriptStruct* StaticStruct<struct FContextualAnimRepData>();

#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_64_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FContextualAnimRepBindingsData_Statics; \
	CONTEXTUALANIMATION_API static class UScriptStruct* StaticStruct(); \
	typedef FContextualAnimRepData Super;


template<> CONTEXTUALANIMATION_API UScriptStruct* StaticStruct<struct FContextualAnimRepBindingsData>();

#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_84_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FContextualAnimRepLateJoinData_Statics; \
	CONTEXTUALANIMATION_API static class UScriptStruct* StaticStruct(); \
	typedef FContextualAnimRepData Super;


template<> CONTEXTUALANIMATION_API UScriptStruct* StaticStruct<struct FContextualAnimRepLateJoinData>();

#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_110_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FContextualAnimRepTransitionData_Statics; \
	CONTEXTUALANIMATION_API static class UScriptStruct* StaticStruct(); \
	typedef FContextualAnimRepData Super;


template<> CONTEXTUALANIMATION_API UScriptStruct* StaticStruct<struct FContextualAnimRepTransitionData>();

#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_137_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_137_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_137_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_137_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerEarlyOutContextualAnimScene_Validate(); \
	virtual void ServerEarlyOutContextualAnimScene_Implementation(); \
	virtual bool ServerStartContextualAnimScene_Validate(FContextualAnimSceneBindings const& ); \
	virtual void ServerStartContextualAnimScene_Implementation(FContextualAnimSceneBindings const& InBindings); \
 \
	DECLARE_FUNCTION(execServerEarlyOutContextualAnimScene); \
	DECLARE_FUNCTION(execServerStartContextualAnimScene); \
	DECLARE_FUNCTION(execOnPlayMontageNotifyBegin); \
	DECLARE_FUNCTION(execOnMontageBlendingOut); \
	DECLARE_FUNCTION(execOnRep_TransitionData); \
	DECLARE_FUNCTION(execOnRep_RepTransitionSingleActor); \
	DECLARE_FUNCTION(execOnRep_LateJoinData); \
	DECLARE_FUNCTION(execOnRep_Bindings); \
	DECLARE_FUNCTION(execOnTickPose); \
	DECLARE_FUNCTION(execTransitionSingleActor); \
	DECLARE_FUNCTION(execTransitionContextualAnimScene); \
	DECLARE_FUNCTION(execLateJoinContextualAnimScene); \
	DECLARE_FUNCTION(execStartContextualAnimScene); \
	DECLARE_FUNCTION(execGetIKTargetByGoalName); \
	DECLARE_FUNCTION(execGetIKTargets); \
	DECLARE_FUNCTION(execOnLeftScene); \
	DECLARE_FUNCTION(execOnJoinedScene);


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_137_ACCESSORS
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_137_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_137_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUContextualAnimSceneActorComponent(); \
	friend struct Z_Construct_UClass_UContextualAnimSceneActorComponent_Statics; \
public: \
	DECLARE_CLASS(UContextualAnimSceneActorComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ContextualAnimation"), NO_API) \
	DECLARE_SERIALIZER(UContextualAnimSceneActorComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UContextualAnimSceneActorComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		RepBindings=NETFIELD_REP_START, \
		RepLateJoinData, \
		RepTransitionData, \
		RepTransitionSingleActorData, \
		NETFIELD_REP_END=RepTransitionSingleActorData	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_137_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UContextualAnimSceneActorComponent(UContextualAnimSceneActorComponent&&); \
	NO_API UContextualAnimSceneActorComponent(const UContextualAnimSceneActorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UContextualAnimSceneActorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContextualAnimSceneActorComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UContextualAnimSceneActorComponent) \
	NO_API virtual ~UContextualAnimSceneActorComponent();


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_134_PROLOG
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_137_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_137_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_137_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_137_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_137_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_137_ACCESSORS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_137_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_137_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_137_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONTEXTUALANIMATION_API UClass* StaticClass<class UContextualAnimSceneActorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
