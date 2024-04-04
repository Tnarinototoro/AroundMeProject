// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Metadata/PCGMetadataMakeRotator.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PCG_PCGMetadataMakeRotator_generated_h
#error "PCGMetadataMakeRotator.generated.h already included, missing '#pragma once' in PCGMetadataMakeRotator.h"
#endif
#define PCG_PCGMetadataMakeRotator_generated_h

#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMakeRotator_h_42_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMakeRotator_h_42_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMakeRotator_h_42_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMakeRotator_h_42_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMakeRotator_h_42_ACCESSORS
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMakeRotator_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGMetadataMakeRotatorSettings(); \
	friend struct Z_Construct_UClass_UPCGMetadataMakeRotatorSettings_Statics; \
public: \
	DECLARE_CLASS(UPCGMetadataMakeRotatorSettings, UPCGMetadataSettingsBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), NO_API) \
	DECLARE_SERIALIZER(UPCGMetadataMakeRotatorSettings)


#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMakeRotator_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGMetadataMakeRotatorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPCGMetadataMakeRotatorSettings(UPCGMetadataMakeRotatorSettings&&); \
	NO_API UPCGMetadataMakeRotatorSettings(const UPCGMetadataMakeRotatorSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGMetadataMakeRotatorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGMetadataMakeRotatorSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGMetadataMakeRotatorSettings) \
	NO_API virtual ~UPCGMetadataMakeRotatorSettings();


#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMakeRotator_h_39_PROLOG
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMakeRotator_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMakeRotator_h_42_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMakeRotator_h_42_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMakeRotator_h_42_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMakeRotator_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMakeRotator_h_42_ACCESSORS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMakeRotator_h_42_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMakeRotator_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PCG_API UClass* StaticClass<class UPCGMetadataMakeRotatorSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMakeRotator_h


#define FOREACH_ENUM_EPCGMETADATAMAKEROTATOROP(op) \
	op(EPCGMetadataMakeRotatorOp::MakeRotFromX) \
	op(EPCGMetadataMakeRotatorOp::MakeRotFromY) \
	op(EPCGMetadataMakeRotatorOp::MakeRotFromZ) \
	op(EPCGMetadataMakeRotatorOp::MakeRotFromXY) \
	op(EPCGMetadataMakeRotatorOp::MakeRotFromYX) \
	op(EPCGMetadataMakeRotatorOp::MakeRotFromXZ) \
	op(EPCGMetadataMakeRotatorOp::MakeRotFromZX) \
	op(EPCGMetadataMakeRotatorOp::MakeRotFromYZ) \
	op(EPCGMetadataMakeRotatorOp::MakeRotFromZY) \
	op(EPCGMetadataMakeRotatorOp::MakeRotFromAxes) \
	op(EPCGMetadataMakeRotatorOp::MakeRotFromAngles) 

enum class EPCGMetadataMakeRotatorOp : uint8;
template<> struct TIsUEnumClass<EPCGMetadataMakeRotatorOp> { enum { Value = true }; };
template<> PCG_API UEnum* StaticEnum<EPCGMetadataMakeRotatorOp>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
