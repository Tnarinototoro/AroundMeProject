// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Metadata/PCGMetadataMathsOpElement.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PCG_PCGMetadataMathsOpElement_generated_h
#error "PCGMetadataMathsOpElement.generated.h already included, missing '#pragma once' in PCGMetadataMathsOpElement.h"
#endif
#define PCG_PCGMetadataMathsOpElement_generated_h

#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMathsOpElement_h_48_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMathsOpElement_h_48_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMathsOpElement_h_48_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMathsOpElement_h_48_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMathsOpElement_h_48_ACCESSORS
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMathsOpElement_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGMetadataMathsSettings(); \
	friend struct Z_Construct_UClass_UPCGMetadataMathsSettings_Statics; \
public: \
	DECLARE_CLASS(UPCGMetadataMathsSettings, UPCGMetadataSettingsBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), NO_API) \
	DECLARE_SERIALIZER(UPCGMetadataMathsSettings)


#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMathsOpElement_h_48_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGMetadataMathsSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPCGMetadataMathsSettings(UPCGMetadataMathsSettings&&); \
	NO_API UPCGMetadataMathsSettings(const UPCGMetadataMathsSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGMetadataMathsSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGMetadataMathsSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGMetadataMathsSettings) \
	NO_API virtual ~UPCGMetadataMathsSettings();


#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMathsOpElement_h_45_PROLOG
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMathsOpElement_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMathsOpElement_h_48_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMathsOpElement_h_48_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMathsOpElement_h_48_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMathsOpElement_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMathsOpElement_h_48_ACCESSORS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMathsOpElement_h_48_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMathsOpElement_h_48_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PCG_API UClass* StaticClass<class UPCGMetadataMathsSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMathsOpElement_h


#define FOREACH_ENUM_EPCGMEDADATAMATHSOPERATION(op) \
	op(EPCGMedadataMathsOperation::UnaryOp) \
	op(EPCGMedadataMathsOperation::Sign) \
	op(EPCGMedadataMathsOperation::Frac) \
	op(EPCGMedadataMathsOperation::Truncate) \
	op(EPCGMedadataMathsOperation::Round) \
	op(EPCGMedadataMathsOperation::Sqrt) \
	op(EPCGMedadataMathsOperation::Abs) \
	op(EPCGMedadataMathsOperation::Floor) \
	op(EPCGMedadataMathsOperation::Ceil) \
	op(EPCGMedadataMathsOperation::OneMinus) \
	op(EPCGMedadataMathsOperation::BinaryOp) \
	op(EPCGMedadataMathsOperation::Add) \
	op(EPCGMedadataMathsOperation::Subtract) \
	op(EPCGMedadataMathsOperation::Multiply) \
	op(EPCGMedadataMathsOperation::Divide) \
	op(EPCGMedadataMathsOperation::Max) \
	op(EPCGMedadataMathsOperation::Min) \
	op(EPCGMedadataMathsOperation::Pow) \
	op(EPCGMedadataMathsOperation::ClampMin) \
	op(EPCGMedadataMathsOperation::ClampMax) \
	op(EPCGMedadataMathsOperation::Modulo) \
	op(EPCGMedadataMathsOperation::Set) \
	op(EPCGMedadataMathsOperation::TernaryOp) \
	op(EPCGMedadataMathsOperation::Clamp) \
	op(EPCGMedadataMathsOperation::Lerp) 

enum class EPCGMedadataMathsOperation : uint16;
template<> struct TIsUEnumClass<EPCGMedadataMathsOperation> { enum { Value = true }; };
template<> PCG_API UEnum* StaticEnum<EPCGMedadataMathsOperation>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
