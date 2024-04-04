// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeGenericMaterialPipeline.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERCHANGEPIPELINES_InterchangeGenericMaterialPipeline_generated_h
#error "InterchangeGenericMaterialPipeline.generated.h already included, missing '#pragma once' in InterchangeGenericMaterialPipeline.h"
#endif
#define INTERCHANGEPIPELINES_InterchangeGenericMaterialPipeline_generated_h

#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMaterialPipeline_h_37_SPARSE_DATA
#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMaterialPipeline_h_37_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMaterialPipeline_h_37_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMaterialPipeline_h_37_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMaterialPipeline_h_37_ACCESSORS
#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMaterialPipeline_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeGenericMaterialPipeline(); \
	friend struct Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics; \
public: \
	DECLARE_CLASS(UInterchangeGenericMaterialPipeline, UInterchangePipelineBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangePipelines"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeGenericMaterialPipeline)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMaterialPipeline_h_37_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInterchangeGenericMaterialPipeline(UInterchangeGenericMaterialPipeline&&); \
	NO_API UInterchangeGenericMaterialPipeline(const UInterchangeGenericMaterialPipeline&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeGenericMaterialPipeline); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeGenericMaterialPipeline); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeGenericMaterialPipeline) \
	NO_API virtual ~UInterchangeGenericMaterialPipeline();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMaterialPipeline_h_34_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMaterialPipeline_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMaterialPipeline_h_37_SPARSE_DATA \
	FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMaterialPipeline_h_37_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMaterialPipeline_h_37_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMaterialPipeline_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMaterialPipeline_h_37_ACCESSORS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMaterialPipeline_h_37_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMaterialPipeline_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGEPIPELINES_API UClass* StaticClass<class UInterchangeGenericMaterialPipeline>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMaterialPipeline_h


#define FOREACH_ENUM_EINTERCHANGEMATERIALIMPORTOPTION(op) \
	op(EInterchangeMaterialImportOption::ImportAsMaterials) \
	op(EInterchangeMaterialImportOption::ImportAsMaterialInstances) 

enum class EInterchangeMaterialImportOption : uint8;
template<> struct TIsUEnumClass<EInterchangeMaterialImportOption> { enum { Value = true }; };
template<> INTERCHANGEPIPELINES_API UEnum* StaticEnum<EInterchangeMaterialImportOption>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
