// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UVTools/UVGenerationDataprepOperation.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DATASMITHIMPORTER_UVGenerationDataprepOperation_generated_h
#error "UVGenerationDataprepOperation.generated.h already included, missing '#pragma once' in UVGenerationDataprepOperation.h"
#endif
#define DATASMITHIMPORTER_UVGenerationDataprepOperation_generated_h

#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_UVTools_UVGenerationDataprepOperation_h_20_SPARSE_DATA
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_UVTools_UVGenerationDataprepOperation_h_20_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_UVTools_UVGenerationDataprepOperation_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_UVTools_UVGenerationDataprepOperation_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_UVTools_UVGenerationDataprepOperation_h_20_ACCESSORS
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_UVTools_UVGenerationDataprepOperation_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUVGenerationFlattenMappingOperation(); \
	friend struct Z_Construct_UClass_UUVGenerationFlattenMappingOperation_Statics; \
public: \
	DECLARE_CLASS(UUVGenerationFlattenMappingOperation, UDataprepOperation, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UUVGenerationFlattenMappingOperation)


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_UVTools_UVGenerationDataprepOperation_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUVGenerationFlattenMappingOperation(UUVGenerationFlattenMappingOperation&&); \
	NO_API UUVGenerationFlattenMappingOperation(const UUVGenerationFlattenMappingOperation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUVGenerationFlattenMappingOperation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUVGenerationFlattenMappingOperation); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUVGenerationFlattenMappingOperation) \
	NO_API virtual ~UUVGenerationFlattenMappingOperation();


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_UVTools_UVGenerationDataprepOperation_h_17_PROLOG
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_UVTools_UVGenerationDataprepOperation_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_UVTools_UVGenerationDataprepOperation_h_20_SPARSE_DATA \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_UVTools_UVGenerationDataprepOperation_h_20_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_UVTools_UVGenerationDataprepOperation_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_UVTools_UVGenerationDataprepOperation_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_UVTools_UVGenerationDataprepOperation_h_20_ACCESSORS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_UVTools_UVGenerationDataprepOperation_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_UVTools_UVGenerationDataprepOperation_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATASMITHIMPORTER_API UClass* StaticClass<class UUVGenerationFlattenMappingOperation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_UVTools_UVGenerationDataprepOperation_h


#define FOREACH_ENUM_EUNWRAPPEDUVDATASMITHOPERATIONCHANNELSELECTION(op) \
	op(EUnwrappedUVDatasmithOperationChannelSelection::FirstEmptyChannel) \
	op(EUnwrappedUVDatasmithOperationChannelSelection::SpecifyChannel) 

enum class EUnwrappedUVDatasmithOperationChannelSelection : uint8;
template<> struct TIsUEnumClass<EUnwrappedUVDatasmithOperationChannelSelection> { enum { Value = true }; };
template<> DATASMITHIMPORTER_API UEnum* StaticEnum<EUnwrappedUVDatasmithOperationChannelSelection>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
