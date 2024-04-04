// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/TestReplicatedActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CQTESTTESTS_TestReplicatedActor_generated_h
#error "TestReplicatedActor.generated.h already included, missing '#pragma once' in TestReplicatedActor.h"
#endif
#define CQTESTTESTS_TestReplicatedActor_generated_h

#define FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_Components_TestReplicatedActor_h_14_SPARSE_DATA
#define FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_Components_TestReplicatedActor_h_14_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_Components_TestReplicatedActor_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_Components_TestReplicatedActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_Components_TestReplicatedActor_h_14_ACCESSORS
#define FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_Components_TestReplicatedActor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATestReplicatedActor(); \
	friend struct Z_Construct_UClass_ATestReplicatedActor_Statics; \
public: \
	DECLARE_CLASS(ATestReplicatedActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CQTestTests"), NO_API) \
	DECLARE_SERIALIZER(ATestReplicatedActor) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedInt=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedInt	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_Components_TestReplicatedActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestReplicatedActor(ATestReplicatedActor&&); \
	NO_API ATestReplicatedActor(const ATestReplicatedActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestReplicatedActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestReplicatedActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATestReplicatedActor) \
	NO_API virtual ~ATestReplicatedActor();


#define FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_Components_TestReplicatedActor_h_11_PROLOG
#define FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_Components_TestReplicatedActor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_Components_TestReplicatedActor_h_14_SPARSE_DATA \
	FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_Components_TestReplicatedActor_h_14_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_Components_TestReplicatedActor_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_Components_TestReplicatedActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_Components_TestReplicatedActor_h_14_ACCESSORS \
	FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_Components_TestReplicatedActor_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_Components_TestReplicatedActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CQTESTTESTS_API UClass* StaticClass<class ATestReplicatedActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_Components_TestReplicatedActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
