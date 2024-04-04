// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Metadata/PCGMetadataStringOpElement.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PCG_PCGMetadataStringOpElement_generated_h
#error "PCGMetadataStringOpElement.generated.h already included, missing '#pragma once' in PCGMetadataStringOpElement.h"
#endif
#define PCG_PCGMetadataStringOpElement_generated_h

#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataStringOpElement_h_18_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataStringOpElement_h_18_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataStringOpElement_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataStringOpElement_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataStringOpElement_h_18_ACCESSORS
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataStringOpElement_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGMetadataStringOpSettings(); \
	friend struct Z_Construct_UClass_UPCGMetadataStringOpSettings_Statics; \
public: \
	DECLARE_CLASS(UPCGMetadataStringOpSettings, UPCGMetadataSettingsBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), NO_API) \
	DECLARE_SERIALIZER(UPCGMetadataStringOpSettings)


#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataStringOpElement_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGMetadataStringOpSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPCGMetadataStringOpSettings(UPCGMetadataStringOpSettings&&); \
	NO_API UPCGMetadataStringOpSettings(const UPCGMetadataStringOpSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGMetadataStringOpSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGMetadataStringOpSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGMetadataStringOpSettings) \
	NO_API virtual ~UPCGMetadataStringOpSettings();


#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataStringOpElement_h_15_PROLOG
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataStringOpElement_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataStringOpElement_h_18_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataStringOpElement_h_18_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataStringOpElement_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataStringOpElement_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataStringOpElement_h_18_ACCESSORS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataStringOpElement_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataStringOpElement_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PCG_API UClass* StaticClass<class UPCGMetadataStringOpSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataStringOpElement_h


#define FOREACH_ENUM_EPCGMETADATASTRINGOPERATION(op) \
	op(EPCGMetadataStringOperation::Append) 

enum class EPCGMetadataStringOperation : uint16;
template<> struct TIsUEnumClass<EPCGMetadataStringOperation> { enum { Value = true }; };
template<> PCG_API UEnum* StaticEnum<EPCGMetadataStringOperation>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
