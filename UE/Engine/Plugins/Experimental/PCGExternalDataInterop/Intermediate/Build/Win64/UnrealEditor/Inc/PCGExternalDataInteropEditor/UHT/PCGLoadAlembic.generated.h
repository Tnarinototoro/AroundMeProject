// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCGLoadAlembic.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
enum class EPCGLoadAlembicStandardSetup : uint8;
struct FPCGDataCollection;
struct FPCGLoadAlembicBPData;
#ifdef PCGEXTERNALDATAINTEROPEDITOR_PCGLoadAlembic_generated_h
#error "PCGLoadAlembic.generated.h already included, missing '#pragma once' in PCGLoadAlembic.h"
#endif
#define PCGEXTERNALDATAINTEROPEDITOR_PCGLoadAlembic_generated_h

#define FID_Engine_Plugins_Experimental_PCGExternalDataInterop_Source_PCGExternalDataInteropEditor_Public_PCGLoadAlembic_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPCGLoadAlembicBPData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> PCGEXTERNALDATAINTEROPEDITOR_API UScriptStruct* StaticStruct<struct FPCGLoadAlembicBPData>();

#define FID_Engine_Plugins_Experimental_PCGExternalDataInterop_Source_PCGExternalDataInteropEditor_Public_PCGLoadAlembic_h_34_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_PCGExternalDataInterop_Source_PCGExternalDataInteropEditor_Public_PCGLoadAlembic_h_34_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_PCGExternalDataInterop_Source_PCGExternalDataInteropEditor_Public_PCGLoadAlembic_h_34_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_PCGExternalDataInterop_Source_PCGExternalDataInteropEditor_Public_PCGLoadAlembic_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetupFromStandard); \
	DECLARE_FUNCTION(execLoadAlembicFileToPCG);


#define FID_Engine_Plugins_Experimental_PCGExternalDataInterop_Source_PCGExternalDataInteropEditor_Public_PCGLoadAlembic_h_34_ACCESSORS
#define FID_Engine_Plugins_Experimental_PCGExternalDataInterop_Source_PCGExternalDataInteropEditor_Public_PCGLoadAlembic_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGLoadAlembicFunctionLibrary(); \
	friend struct Z_Construct_UClass_UPCGLoadAlembicFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UPCGLoadAlembicFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExternalDataInteropEditor"), NO_API) \
	DECLARE_SERIALIZER(UPCGLoadAlembicFunctionLibrary)


#define FID_Engine_Plugins_Experimental_PCGExternalDataInterop_Source_PCGExternalDataInteropEditor_Public_PCGLoadAlembic_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGLoadAlembicFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPCGLoadAlembicFunctionLibrary(UPCGLoadAlembicFunctionLibrary&&); \
	NO_API UPCGLoadAlembicFunctionLibrary(const UPCGLoadAlembicFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGLoadAlembicFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGLoadAlembicFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGLoadAlembicFunctionLibrary) \
	NO_API virtual ~UPCGLoadAlembicFunctionLibrary();


#define FID_Engine_Plugins_Experimental_PCGExternalDataInterop_Source_PCGExternalDataInteropEditor_Public_PCGLoadAlembic_h_31_PROLOG
#define FID_Engine_Plugins_Experimental_PCGExternalDataInterop_Source_PCGExternalDataInteropEditor_Public_PCGLoadAlembic_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PCGExternalDataInterop_Source_PCGExternalDataInteropEditor_Public_PCGLoadAlembic_h_34_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_PCGExternalDataInterop_Source_PCGExternalDataInteropEditor_Public_PCGLoadAlembic_h_34_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_PCGExternalDataInterop_Source_PCGExternalDataInteropEditor_Public_PCGLoadAlembic_h_34_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_PCGExternalDataInterop_Source_PCGExternalDataInteropEditor_Public_PCGLoadAlembic_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PCGExternalDataInterop_Source_PCGExternalDataInteropEditor_Public_PCGLoadAlembic_h_34_ACCESSORS \
	FID_Engine_Plugins_Experimental_PCGExternalDataInterop_Source_PCGExternalDataInteropEditor_Public_PCGLoadAlembic_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PCGExternalDataInterop_Source_PCGExternalDataInteropEditor_Public_PCGLoadAlembic_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PCGEXTERNALDATAINTEROPEDITOR_API UClass* StaticClass<class UPCGLoadAlembicFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_PCGExternalDataInterop_Source_PCGExternalDataInteropEditor_Public_PCGLoadAlembic_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
