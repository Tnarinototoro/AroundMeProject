// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChooserFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UChooserTable;
class UObject;
struct FChooserEvaluationContext;
struct FInstancedStruct;
#ifdef CHOOSER_ChooserFunctionLibrary_generated_h
#error "ChooserFunctionLibrary.generated.h already included, missing '#pragma once' in ChooserFunctionLibrary.h"
#endif
#define CHOOSER_ChooserFunctionLibrary_generated_h

#define FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_ChooserFunctionLibrary_h_17_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_ChooserFunctionLibrary_h_17_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_ChooserFunctionLibrary_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_ChooserFunctionLibrary_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMakeChooserEvaluationContext); \
	DECLARE_FUNCTION(execMakeEvaluateChooser); \
	DECLARE_FUNCTION(execAddChooserObjectInput); \
	DECLARE_FUNCTION(execEvaluateObjectChooserBaseMulti); \
	DECLARE_FUNCTION(execEvaluateObjectChooserBase); \
	DECLARE_FUNCTION(execEvaluateChooserMulti); \
	DECLARE_FUNCTION(execEvaluateChooser);


#define FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_ChooserFunctionLibrary_h_17_ACCESSORS
#define FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_ChooserFunctionLibrary_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUChooserFunctionLibrary(); \
	friend struct Z_Construct_UClass_UChooserFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UChooserFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Chooser"), NO_API) \
	DECLARE_SERIALIZER(UChooserFunctionLibrary)


#define FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_ChooserFunctionLibrary_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChooserFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChooserFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChooserFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChooserFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChooserFunctionLibrary(UChooserFunctionLibrary&&); \
	NO_API UChooserFunctionLibrary(const UChooserFunctionLibrary&); \
public: \
	NO_API virtual ~UChooserFunctionLibrary();


#define FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_ChooserFunctionLibrary_h_14_PROLOG
#define FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_ChooserFunctionLibrary_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_ChooserFunctionLibrary_h_17_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_ChooserFunctionLibrary_h_17_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_ChooserFunctionLibrary_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_ChooserFunctionLibrary_h_17_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_ChooserFunctionLibrary_h_17_ACCESSORS \
	FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_ChooserFunctionLibrary_h_17_INCLASS \
	FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_ChooserFunctionLibrary_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHOOSER_API UClass* StaticClass<class UChooserFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_ChooserFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
