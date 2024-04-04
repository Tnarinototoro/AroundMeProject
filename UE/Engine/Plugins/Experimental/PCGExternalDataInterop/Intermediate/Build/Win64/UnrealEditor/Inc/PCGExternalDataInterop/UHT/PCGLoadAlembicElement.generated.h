// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGLoadAlembicElement.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EPCGLoadAlembicStandardSetup : uint8;
#ifdef PCGEXTERNALDATAINTEROP_PCGLoadAlembicElement_generated_h
#error "PCGLoadAlembicElement.generated.h already included, missing '#pragma once' in PCGLoadAlembicElement.h"
#endif
#define PCGEXTERNALDATAINTEROP_PCGLoadAlembicElement_generated_h

#define FID_Engine_Plugins_Experimental_PCGExternalDataInterop_Source_PCGExternalDataInterop_Public_Elements_PCGLoadAlembicElement_h_21_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_PCGExternalDataInterop_Source_PCGExternalDataInterop_Public_Elements_PCGLoadAlembicElement_h_21_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_PCGExternalDataInterop_Source_PCGExternalDataInterop_Public_Elements_PCGLoadAlembicElement_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_PCGExternalDataInterop_Source_PCGExternalDataInterop_Public_Elements_PCGLoadAlembicElement_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetupFromStandard);


#define FID_Engine_Plugins_Experimental_PCGExternalDataInterop_Source_PCGExternalDataInterop_Public_Elements_PCGLoadAlembicElement_h_21_ACCESSORS
#define FID_Engine_Plugins_Experimental_PCGExternalDataInterop_Source_PCGExternalDataInterop_Public_Elements_PCGLoadAlembicElement_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGLoadAlembicSettings(); \
	friend struct Z_Construct_UClass_UPCGLoadAlembicSettings_Statics; \
public: \
	DECLARE_CLASS(UPCGLoadAlembicSettings, UPCGExternalDataSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExternalDataInterop"), NO_API) \
	DECLARE_SERIALIZER(UPCGLoadAlembicSettings)


#define FID_Engine_Plugins_Experimental_PCGExternalDataInterop_Source_PCGExternalDataInterop_Public_Elements_PCGLoadAlembicElement_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGLoadAlembicSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPCGLoadAlembicSettings(UPCGLoadAlembicSettings&&); \
	NO_API UPCGLoadAlembicSettings(const UPCGLoadAlembicSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGLoadAlembicSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGLoadAlembicSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGLoadAlembicSettings) \
	NO_API virtual ~UPCGLoadAlembicSettings();


#define FID_Engine_Plugins_Experimental_PCGExternalDataInterop_Source_PCGExternalDataInterop_Public_Elements_PCGLoadAlembicElement_h_18_PROLOG
#define FID_Engine_Plugins_Experimental_PCGExternalDataInterop_Source_PCGExternalDataInterop_Public_Elements_PCGLoadAlembicElement_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PCGExternalDataInterop_Source_PCGExternalDataInterop_Public_Elements_PCGLoadAlembicElement_h_21_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_PCGExternalDataInterop_Source_PCGExternalDataInterop_Public_Elements_PCGLoadAlembicElement_h_21_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_PCGExternalDataInterop_Source_PCGExternalDataInterop_Public_Elements_PCGLoadAlembicElement_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_PCGExternalDataInterop_Source_PCGExternalDataInterop_Public_Elements_PCGLoadAlembicElement_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PCGExternalDataInterop_Source_PCGExternalDataInterop_Public_Elements_PCGLoadAlembicElement_h_21_ACCESSORS \
	FID_Engine_Plugins_Experimental_PCGExternalDataInterop_Source_PCGExternalDataInterop_Public_Elements_PCGLoadAlembicElement_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PCGExternalDataInterop_Source_PCGExternalDataInterop_Public_Elements_PCGLoadAlembicElement_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PCGEXTERNALDATAINTEROP_API UClass* StaticClass<class UPCGLoadAlembicSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_PCGExternalDataInterop_Source_PCGExternalDataInterop_Public_Elements_PCGLoadAlembicElement_h


#define FOREACH_ENUM_EPCGLOADALEMBICSTANDARDSETUP(op) \
	op(EPCGLoadAlembicStandardSetup::None) \
	op(EPCGLoadAlembicStandardSetup::CitySample) 

enum class EPCGLoadAlembicStandardSetup : uint8;
template<> struct TIsUEnumClass<EPCGLoadAlembicStandardSetup> { enum { Value = true }; };
template<> PCGEXTERNALDATAINTEROP_API UEnum* StaticEnum<EPCGLoadAlembicStandardSetup>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
