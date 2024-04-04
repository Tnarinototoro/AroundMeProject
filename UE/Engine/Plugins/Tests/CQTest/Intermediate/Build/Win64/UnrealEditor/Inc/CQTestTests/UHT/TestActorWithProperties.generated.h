// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TestActorWithProperties.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CQTESTTESTS_TestActorWithProperties_generated_h
#error "TestActorWithProperties.generated.h already included, missing '#pragma once' in TestActorWithProperties.h"
#endif
#define CQTESTTESTS_TestActorWithProperties_generated_h

#define FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_TestActorWithProperties_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTestStructWithProperties_Statics; \
	CQTESTTESTS_API static class UScriptStruct* StaticStruct();


template<> CQTESTTESTS_API UScriptStruct* StaticStruct<struct FTestStructWithProperties>();

#define FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_TestActorWithProperties_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDerivedTestStruct_Statics; \
	CQTESTTESTS_API static class UScriptStruct* StaticStruct(); \
	typedef FTestStructWithProperties Super;


template<> CQTESTTESTS_API UScriptStruct* StaticStruct<struct FDerivedTestStruct>();

#define FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_TestActorWithProperties_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOtherTestStruct_Statics; \
	CQTESTTESTS_API static class UScriptStruct* StaticStruct();


template<> CQTESTTESTS_API UScriptStruct* StaticStruct<struct FOtherTestStruct>();

#define FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_TestActorWithProperties_h_109_SPARSE_DATA
#define FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_TestActorWithProperties_h_109_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_TestActorWithProperties_h_109_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_TestActorWithProperties_h_109_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_TestActorWithProperties_h_109_ACCESSORS
#define FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_TestActorWithProperties_h_109_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATestActorWithProperties(); \
	friend struct Z_Construct_UClass_ATestActorWithProperties_Statics; \
public: \
	DECLARE_CLASS(ATestActorWithProperties, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CQTestTests"), NO_API) \
	DECLARE_SERIALIZER(ATestActorWithProperties)


#define FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_TestActorWithProperties_h_109_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATestActorWithProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestActorWithProperties(ATestActorWithProperties&&); \
	NO_API ATestActorWithProperties(const ATestActorWithProperties&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestActorWithProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestActorWithProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATestActorWithProperties) \
	NO_API virtual ~ATestActorWithProperties();


#define FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_TestActorWithProperties_h_106_PROLOG
#define FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_TestActorWithProperties_h_109_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_TestActorWithProperties_h_109_SPARSE_DATA \
	FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_TestActorWithProperties_h_109_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_TestActorWithProperties_h_109_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_TestActorWithProperties_h_109_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_TestActorWithProperties_h_109_ACCESSORS \
	FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_TestActorWithProperties_h_109_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_TestActorWithProperties_h_109_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CQTESTTESTS_API UClass* StaticClass<class ATestActorWithProperties>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_TestActorWithProperties_h


#define FOREACH_ENUM_ETESTUINT8(op) \
	op(ETestUint8::enumone) \
	op(ETestUint8::enumtwo) \
	op(ETestUint8::enumthree) 

enum class ETestUint8 : uint8;
template<> struct TIsUEnumClass<ETestUint8> { enum { Value = true }; };
template<> CQTESTTESTS_API UEnum* StaticEnum<ETestUint8>();

#define FOREACH_ENUM_ETESTINT8(op) \
	op(ETestInt8::enumone) \
	op(ETestInt8::enumtwo) \
	op(ETestInt8::enumthree) 

enum class ETestInt8 : int8;
template<> struct TIsUEnumClass<ETestInt8> { enum { Value = true }; };
template<> CQTESTTESTS_API UEnum* StaticEnum<ETestInt8>();

#define FOREACH_ENUM_ETESTINT16(op) \
	op(ETestInt16::enumone) \
	op(ETestInt16::enumtwo) \
	op(ETestInt16::enumthree) 

enum class ETestInt16 : int16;
template<> struct TIsUEnumClass<ETestInt16> { enum { Value = true }; };
template<> CQTESTTESTS_API UEnum* StaticEnum<ETestInt16>();

#define FOREACH_ENUM_ETESTUINT16(op) \
	op(ETestUint16::enumone) \
	op(ETestUint16::enumtwo) \
	op(ETestUint16::enumthree) 

enum class ETestUint16 : uint16;
template<> struct TIsUEnumClass<ETestUint16> { enum { Value = true }; };
template<> CQTESTTESTS_API UEnum* StaticEnum<ETestUint16>();

#define FOREACH_ENUM_ETESTINT32(op) \
	op(ETestInt32::enumone) \
	op(ETestInt32::enumtwo) \
	op(ETestInt32::enumthree) 

enum class ETestInt32 : int32;
template<> struct TIsUEnumClass<ETestInt32> { enum { Value = true }; };
template<> CQTESTTESTS_API UEnum* StaticEnum<ETestInt32>();

#define FOREACH_ENUM_ETESTUINT32(op) \
	op(ETestUint32::enumone) \
	op(ETestUint32::enumtwo) \
	op(ETestUint32::enumthree) 

enum class ETestUint32 : uint32;
template<> struct TIsUEnumClass<ETestUint32> { enum { Value = true }; };
template<> CQTESTTESTS_API UEnum* StaticEnum<ETestUint32>();

#define FOREACH_ENUM_ETESTINT64(op) \
	op(ETestInt64::enumone) \
	op(ETestInt64::enumtwo) \
	op(ETestInt64::enumthree) 

enum class ETestInt64 : int64;
template<> struct TIsUEnumClass<ETestInt64> { enum { Value = true }; };
template<> CQTESTTESTS_API UEnum* StaticEnum<ETestInt64>();

#define FOREACH_ENUM_ETESTUINT64(op) \
	op(ETestUint64::enumone) \
	op(ETestUint64::enumtwo) \
	op(ETestUint64::enumthree) 

enum class ETestUint64 : uint64;
template<> struct TIsUEnumClass<ETestUint64> { enum { Value = true }; };
template<> CQTESTTESTS_API UEnum* StaticEnum<ETestUint64>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
