// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Utils/RenderGridRemoteControlUtils.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FColor;
struct FInstancedStruct;
struct FLinearColor;
#ifdef RENDERGRID_RenderGridRemoteControlUtils_generated_h
#error "RenderGridRemoteControlUtils.generated.h already included, missing '#pragma once' in RenderGridRemoteControlUtils.h"
#endif
#define RENDERGRID_RenderGridRemoteControlUtils_generated_h

#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_Utils_RenderGridRemoteControlUtils_h_15_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_Utils_RenderGridRemoteControlUtils_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_Utils_RenderGridRemoteControlUtils_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_Utils_RenderGridRemoteControlUtils_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLinearColorToJson); \
	DECLARE_FUNCTION(execColorToJson); \
	DECLARE_FUNCTION(execTransformToJson); \
	DECLARE_FUNCTION(execRotatorToJson); \
	DECLARE_FUNCTION(execVectorToJson); \
	DECLARE_FUNCTION(execStructToJson); \
	DECLARE_FUNCTION(execClassReferenceToJson); \
	DECLARE_FUNCTION(execObjectReferenceToJson); \
	DECLARE_FUNCTION(execTextToJson); \
	DECLARE_FUNCTION(execNameToJson); \
	DECLARE_FUNCTION(execStringToJson); \
	DECLARE_FUNCTION(execBooleanToJson); \
	DECLARE_FUNCTION(execFloatToJson); \
	DECLARE_FUNCTION(execInt64ToJson); \
	DECLARE_FUNCTION(execInt32ToJson); \
	DECLARE_FUNCTION(execByteToJson); \
	DECLARE_FUNCTION(execParseJsonAsLinearColor); \
	DECLARE_FUNCTION(execParseJsonAsColor); \
	DECLARE_FUNCTION(execParseJsonAsTransform); \
	DECLARE_FUNCTION(execParseJsonAsRotator); \
	DECLARE_FUNCTION(execParseJsonAsVector); \
	DECLARE_FUNCTION(execParseJsonAsStruct); \
	DECLARE_FUNCTION(execParseJsonAsClassReference); \
	DECLARE_FUNCTION(execParseJsonAsObjectReference); \
	DECLARE_FUNCTION(execParseJsonAsText); \
	DECLARE_FUNCTION(execParseJsonAsName); \
	DECLARE_FUNCTION(execParseJsonAsString); \
	DECLARE_FUNCTION(execParseJsonAsBoolean); \
	DECLARE_FUNCTION(execParseJsonAsFloat); \
	DECLARE_FUNCTION(execParseJsonAsInt64); \
	DECLARE_FUNCTION(execParseJsonAsInt32); \
	DECLARE_FUNCTION(execParseJsonAsByte);


#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_Utils_RenderGridRemoteControlUtils_h_15_ACCESSORS
#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_Utils_RenderGridRemoteControlUtils_h_15_INCLASS \
private: \
	static void StaticRegisterNativesURenderGridRemoteControlUtils(); \
	friend struct Z_Construct_UClass_URenderGridRemoteControlUtils_Statics; \
public: \
	DECLARE_CLASS(URenderGridRemoteControlUtils, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RenderGrid"), NO_API) \
	DECLARE_SERIALIZER(URenderGridRemoteControlUtils)


#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_Utils_RenderGridRemoteControlUtils_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URenderGridRemoteControlUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URenderGridRemoteControlUtils) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URenderGridRemoteControlUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URenderGridRemoteControlUtils); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URenderGridRemoteControlUtils(URenderGridRemoteControlUtils&&); \
	NO_API URenderGridRemoteControlUtils(const URenderGridRemoteControlUtils&); \
public: \
	NO_API virtual ~URenderGridRemoteControlUtils();


#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_Utils_RenderGridRemoteControlUtils_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_Utils_RenderGridRemoteControlUtils_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_Utils_RenderGridRemoteControlUtils_h_15_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_Utils_RenderGridRemoteControlUtils_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_Utils_RenderGridRemoteControlUtils_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_Utils_RenderGridRemoteControlUtils_h_15_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_Utils_RenderGridRemoteControlUtils_h_15_ACCESSORS \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_Utils_RenderGridRemoteControlUtils_h_15_INCLASS \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_Utils_RenderGridRemoteControlUtils_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RENDERGRID_API UClass* StaticClass<class URenderGridRemoteControlUtils>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_Utils_RenderGridRemoteControlUtils_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
