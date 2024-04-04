// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CineCameraRigRail.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCineSplineComponent;
class UMaterialInterface;
class UTexture2D;
enum class ECineCameraRigRailDriveMode : uint8;
#ifdef CINECAMERARIGS_CineCameraRigRail_generated_h
#error "CineCameraRigRail.generated.h already included, missing '#pragma once' in CineCameraRigRail.h"
#endif
#define CINECAMERARIGS_CineCameraRigRail_generated_h

#define FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraRigRail_h_32_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraRigRail_h_32_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraRigRail_h_32_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraRigRail_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsSequencerDriven); \
	DECLARE_FUNCTION(execSetDisplaySpeedHeatmap); \
	DECLARE_FUNCTION(execSetDriveMode); \
	DECLARE_FUNCTION(execGetVelocityAtPosition); \
	DECLARE_FUNCTION(execSetSplineMeshTexture); \
	DECLARE_FUNCTION(execSetSplineMeshMaterial); \
	DECLARE_FUNCTION(execGetCineSplineComponent);


#if WITH_EDITOR
#define FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraRigRail_h_32_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnSequencerCheck);


#else
#define FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraRigRail_h_32_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraRigRail_h_32_ACCESSORS
#define FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraRigRail_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACineCameraRigRail(); \
	friend struct Z_Construct_UClass_ACineCameraRigRail_Statics; \
public: \
	DECLARE_CLASS(ACineCameraRigRail, ACameraRig_Rail, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CineCameraRigs"), NO_API) \
	DECLARE_SERIALIZER(ACineCameraRigRail)


#define FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraRigRail_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACineCameraRigRail(ACineCameraRigRail&&); \
	NO_API ACineCameraRigRail(const ACineCameraRigRail&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACineCameraRigRail); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACineCameraRigRail); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACineCameraRigRail) \
	NO_API virtual ~ACineCameraRigRail();


#define FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraRigRail_h_29_PROLOG
#define FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraRigRail_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraRigRail_h_32_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraRigRail_h_32_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraRigRail_h_32_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraRigRail_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraRigRail_h_32_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraRigRail_h_32_ACCESSORS \
	FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraRigRail_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraRigRail_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CINECAMERARIGS_API UClass* StaticClass<class ACineCameraRigRail>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraRigRail_h


#define FOREACH_ENUM_ECINECAMERARIGRAILDRIVEMODE(op) \
	op(ECineCameraRigRailDriveMode::Manual) \
	op(ECineCameraRigRailDriveMode::Duration) \
	op(ECineCameraRigRailDriveMode::Speed) 

enum class ECineCameraRigRailDriveMode : uint8;
template<> struct TIsUEnumClass<ECineCameraRigRailDriveMode> { enum { Value = true }; };
template<> CINECAMERARIGS_API UEnum* StaticEnum<ECineCameraRigRailDriveMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
