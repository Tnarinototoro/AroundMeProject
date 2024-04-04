// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ICVFXTestControllerAutoTest.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AGameStateBase;
#ifdef ICVFXTESTING_ICVFXTestControllerAutoTest_generated_h
#error "ICVFXTestControllerAutoTest.generated.h already included, missing '#pragma once' in ICVFXTestControllerAutoTest.h"
#endif
#define ICVFXTESTING_ICVFXTestControllerAutoTest_generated_h

#define FID_Engine_Plugins_VirtualProduction_ICVFXTesting_Source_ICVFXTesting_Public_ICVFXTestControllerAutoTest_h_65_SPARSE_DATA
#define FID_Engine_Plugins_VirtualProduction_ICVFXTesting_Source_ICVFXTesting_Public_ICVFXTestControllerAutoTest_h_65_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_VirtualProduction_ICVFXTesting_Source_ICVFXTesting_Public_ICVFXTestControllerAutoTest_h_65_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_VirtualProduction_ICVFXTesting_Source_ICVFXTesting_Public_ICVFXTestControllerAutoTest_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnSoakTimeChanged); \
	DECLARE_FUNCTION(execOnGameStateSet); \
	DECLARE_FUNCTION(execOnWorldBeginPlay);


#define FID_Engine_Plugins_VirtualProduction_ICVFXTesting_Source_ICVFXTesting_Public_ICVFXTestControllerAutoTest_h_65_ACCESSORS
#define FID_Engine_Plugins_VirtualProduction_ICVFXTesting_Source_ICVFXTesting_Public_ICVFXTestControllerAutoTest_h_65_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUICVFXTestControllerAutoTest(); \
	friend struct Z_Construct_UClass_UICVFXTestControllerAutoTest_Statics; \
public: \
	DECLARE_CLASS(UICVFXTestControllerAutoTest, UICVFXTestControllerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ICVFXTesting"), NO_API) \
	DECLARE_SERIALIZER(UICVFXTestControllerAutoTest)


#define FID_Engine_Plugins_VirtualProduction_ICVFXTesting_Source_ICVFXTesting_Public_ICVFXTestControllerAutoTest_h_65_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UICVFXTestControllerAutoTest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UICVFXTestControllerAutoTest(UICVFXTestControllerAutoTest&&); \
	NO_API UICVFXTestControllerAutoTest(const UICVFXTestControllerAutoTest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UICVFXTestControllerAutoTest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UICVFXTestControllerAutoTest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UICVFXTestControllerAutoTest) \
	NO_API virtual ~UICVFXTestControllerAutoTest();


#define FID_Engine_Plugins_VirtualProduction_ICVFXTesting_Source_ICVFXTesting_Public_ICVFXTestControllerAutoTest_h_62_PROLOG
#define FID_Engine_Plugins_VirtualProduction_ICVFXTesting_Source_ICVFXTesting_Public_ICVFXTestControllerAutoTest_h_65_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_ICVFXTesting_Source_ICVFXTesting_Public_ICVFXTestControllerAutoTest_h_65_SPARSE_DATA \
	FID_Engine_Plugins_VirtualProduction_ICVFXTesting_Source_ICVFXTesting_Public_ICVFXTestControllerAutoTest_h_65_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_ICVFXTesting_Source_ICVFXTesting_Public_ICVFXTestControllerAutoTest_h_65_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_ICVFXTesting_Source_ICVFXTesting_Public_ICVFXTestControllerAutoTest_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ICVFXTesting_Source_ICVFXTesting_Public_ICVFXTestControllerAutoTest_h_65_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_ICVFXTesting_Source_ICVFXTesting_Public_ICVFXTestControllerAutoTest_h_65_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ICVFXTesting_Source_ICVFXTesting_Public_ICVFXTestControllerAutoTest_h_65_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ICVFXTESTING_API UClass* StaticClass<class UICVFXTestControllerAutoTest>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_ICVFXTesting_Source_ICVFXTesting_Public_ICVFXTestControllerAutoTest_h


#define FOREACH_ENUM_EICVFXAUTOTESTSTATE(op) \
	op(EICVFXAutoTestState::InitialLoad) \
	op(EICVFXAutoTestState::Soak) \
	op(EICVFXAutoTestState::TraverseTestLocations) \
	op(EICVFXAutoTestState::Finished) \
	op(EICVFXAutoTestState::Shutdown) 

enum class EICVFXAutoTestState : uint8;
template<> struct TIsUEnumClass<EICVFXAutoTestState> { enum { Value = true }; };
template<> ICVFXTESTING_API UEnum* StaticEnum<EICVFXAutoTestState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
