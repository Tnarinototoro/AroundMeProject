// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeLightNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EInterchangeLightUnits : uint8;
struct FLinearColor;
#ifdef INTERCHANGENODES_InterchangeLightNode_generated_h
#error "InterchangeLightNode.generated.h already included, missing '#pragma once' in InterchangeLightNode.h"
#endif
#define INTERCHANGENODES_InterchangeLightNode_generated_h

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_23_SPARSE_DATA
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_23_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCustomUseTemperature); \
	DECLARE_FUNCTION(execGetCustomUseTemperature); \
	DECLARE_FUNCTION(execSetCustomTemperature); \
	DECLARE_FUNCTION(execGetCustomTemperature); \
	DECLARE_FUNCTION(execSetCustomIntensity); \
	DECLARE_FUNCTION(execGetCustomIntensity); \
	DECLARE_FUNCTION(execSetCustomLightColor); \
	DECLARE_FUNCTION(execGetCustomLightColor);


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_23_ACCESSORS
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeBaseLightNode(); \
	friend struct Z_Construct_UClass_UInterchangeBaseLightNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangeBaseLightNode, UInterchangeBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeBaseLightNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeBaseLightNode(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInterchangeBaseLightNode(UInterchangeBaseLightNode&&); \
	NO_API UInterchangeBaseLightNode(const UInterchangeBaseLightNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeBaseLightNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeBaseLightNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeBaseLightNode) \
	NO_API virtual ~UInterchangeBaseLightNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_20_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_23_SPARSE_DATA \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_23_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_23_ACCESSORS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGENODES_API UClass* StaticClass<class UInterchangeBaseLightNode>();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_68_SPARSE_DATA
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_68_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_68_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCustomIESTexture); \
	DECLARE_FUNCTION(execGetCustomIESTexture); \
	DECLARE_FUNCTION(execSetCustomAttenuationRadius); \
	DECLARE_FUNCTION(execGetCustomAttenuationRadius); \
	DECLARE_FUNCTION(execSetCustomIntensityUnits); \
	DECLARE_FUNCTION(execGetCustomIntensityUnits);


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_68_ACCESSORS
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_68_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeLightNode(); \
	friend struct Z_Construct_UClass_UInterchangeLightNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangeLightNode, UInterchangeBaseLightNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeLightNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_68_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeLightNode(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInterchangeLightNode(UInterchangeLightNode&&); \
	NO_API UInterchangeLightNode(const UInterchangeLightNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeLightNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeLightNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeLightNode) \
	NO_API virtual ~UInterchangeLightNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_65_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_68_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_68_SPARSE_DATA \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_68_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_68_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_68_ACCESSORS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_68_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_68_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGENODES_API UClass* StaticClass<class UInterchangeLightNode>();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_102_SPARSE_DATA
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_102_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_102_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_102_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCustomLightFalloffExponent); \
	DECLARE_FUNCTION(execGetCustomLightFalloffExponent); \
	DECLARE_FUNCTION(execSetCustomUseInverseSquaredFalloff); \
	DECLARE_FUNCTION(execGetCustomUseInverseSquaredFalloff);


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_102_ACCESSORS
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_102_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangePointLightNode(); \
	friend struct Z_Construct_UClass_UInterchangePointLightNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangePointLightNode, UInterchangeLightNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), NO_API) \
	DECLARE_SERIALIZER(UInterchangePointLightNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_102_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangePointLightNode(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInterchangePointLightNode(UInterchangePointLightNode&&); \
	NO_API UInterchangePointLightNode(const UInterchangePointLightNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangePointLightNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangePointLightNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangePointLightNode) \
	NO_API virtual ~UInterchangePointLightNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_99_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_102_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_102_SPARSE_DATA \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_102_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_102_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_102_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_102_ACCESSORS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_102_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_102_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGENODES_API UClass* StaticClass<class UInterchangePointLightNode>();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_128_SPARSE_DATA
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_128_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_128_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_128_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCustomOuterConeAngle); \
	DECLARE_FUNCTION(execGetCustomOuterConeAngle); \
	DECLARE_FUNCTION(execSetCustomInnerConeAngle); \
	DECLARE_FUNCTION(execGetCustomInnerConeAngle);


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_128_ACCESSORS
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_128_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeSpotLightNode(); \
	friend struct Z_Construct_UClass_UInterchangeSpotLightNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangeSpotLightNode, UInterchangePointLightNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeSpotLightNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_128_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeSpotLightNode(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInterchangeSpotLightNode(UInterchangeSpotLightNode&&); \
	NO_API UInterchangeSpotLightNode(const UInterchangeSpotLightNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeSpotLightNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeSpotLightNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeSpotLightNode) \
	NO_API virtual ~UInterchangeSpotLightNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_125_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_128_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_128_SPARSE_DATA \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_128_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_128_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_128_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_128_ACCESSORS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_128_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_128_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGENODES_API UClass* StaticClass<class UInterchangeSpotLightNode>();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_155_SPARSE_DATA
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_155_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_155_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_155_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCustomSourceHeight); \
	DECLARE_FUNCTION(execGetCustomSourceHeight); \
	DECLARE_FUNCTION(execSetCustomSourceWidth); \
	DECLARE_FUNCTION(execGetCustomSourceWidth);


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_155_ACCESSORS
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_155_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeRectLightNode(); \
	friend struct Z_Construct_UClass_UInterchangeRectLightNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangeRectLightNode, UInterchangeLightNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeRectLightNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_155_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeRectLightNode(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInterchangeRectLightNode(UInterchangeRectLightNode&&); \
	NO_API UInterchangeRectLightNode(const UInterchangeRectLightNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeRectLightNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeRectLightNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeRectLightNode) \
	NO_API virtual ~UInterchangeRectLightNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_152_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_155_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_155_SPARSE_DATA \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_155_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_155_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_155_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_155_ACCESSORS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_155_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_155_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGENODES_API UClass* StaticClass<class UInterchangeRectLightNode>();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_181_SPARSE_DATA
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_181_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_181_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_181_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_181_ACCESSORS
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_181_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeDirectionalLightNode(); \
	friend struct Z_Construct_UClass_UInterchangeDirectionalLightNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangeDirectionalLightNode, UInterchangeBaseLightNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeDirectionalLightNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_181_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeDirectionalLightNode(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInterchangeDirectionalLightNode(UInterchangeDirectionalLightNode&&); \
	NO_API UInterchangeDirectionalLightNode(const UInterchangeDirectionalLightNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeDirectionalLightNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeDirectionalLightNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeDirectionalLightNode) \
	NO_API virtual ~UInterchangeDirectionalLightNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_178_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_181_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_181_SPARSE_DATA \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_181_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_181_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_181_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_181_ACCESSORS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_181_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_181_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGENODES_API UClass* StaticClass<class UInterchangeDirectionalLightNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h


#define FOREACH_ENUM_EINTERCHANGELIGHTUNITS(op) \
	op(EInterchangeLightUnits::Unitless) \
	op(EInterchangeLightUnits::Candelas) \
	op(EInterchangeLightUnits::Lumens) \
	op(EInterchangeLightUnits::EV) 

enum class EInterchangeLightUnits : uint8;
template<> struct TIsUEnumClass<EInterchangeLightUnits> { enum { Value = true }; };
template<> INTERCHANGENODES_API UEnum* StaticEnum<EInterchangeLightUnits>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
