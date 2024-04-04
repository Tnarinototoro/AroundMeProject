// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GroomAsset.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMesh;
enum class EGroomInterpolationType : uint8;
struct FHairGroupsCardsSourceDescription;
struct FHairGroupsInterpolation;
struct FHairGroupsLOD;
struct FHairGroupsMaterial;
struct FHairGroupsMeshesSourceDescription;
struct FHairGroupsPhysics;
struct FHairGroupsRendering;
#ifdef HAIRSTRANDSCORE_GroomAsset_generated_h
#error "GroomAsset.generated.h already included, missing '#pragma once' in GroomAsset.h"
#endif
#define HAIRSTRANDSCORE_GroomAsset_generated_h

#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAsset_h_44_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHairGroupLODInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<struct FHairGroupLODInfo>();

#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAsset_h_56_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHairGroupInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<struct FHairGroupInfo>();

#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAsset_h_92_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHairGroupsMaterial_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<struct FHairGroupsMaterial>();

#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAsset_h_392_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHairGroupInfoWithVisibility_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FHairGroupInfo Super;


template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<struct FHairGroupInfoWithVisibility>();

#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAsset_h_423_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAsset_h_423_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAsset_h_423_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAsset_h_423_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetDeformedGroupSections); \
	DECLARE_FUNCTION(execGetDeformedGroupSections); \
	DECLARE_FUNCTION(execSetRiggedSkeletalMesh); \
	DECLARE_FUNCTION(execGetRiggedSkeletalMesh); \
	DECLARE_FUNCTION(execSetHairInterpolationType); \
	DECLARE_FUNCTION(execGetHairInterpolationType); \
	DECLARE_FUNCTION(execSetEnableSimulationCache); \
	DECLARE_FUNCTION(execGetEnableSimulationCache); \
	DECLARE_FUNCTION(execSetEnableGlobalInterpolation); \
	DECLARE_FUNCTION(execGetEnableGlobalInterpolation); \
	DECLARE_FUNCTION(execSetHairGroupsMaterials); \
	DECLARE_FUNCTION(execGetHairGroupsMaterials); \
	DECLARE_FUNCTION(execSetHairGroupsMeshes); \
	DECLARE_FUNCTION(execGetHairGroupsMeshes); \
	DECLARE_FUNCTION(execSetHairGroupsCards); \
	DECLARE_FUNCTION(execGetHairGroupsCards); \
	DECLARE_FUNCTION(execSetHairGroupsLOD); \
	DECLARE_FUNCTION(execGetHairGroupsLOD); \
	DECLARE_FUNCTION(execSetHairGroupsInterpolation); \
	DECLARE_FUNCTION(execGetHairGroupsInterpolation); \
	DECLARE_FUNCTION(execSetHairGroupsPhysics); \
	DECLARE_FUNCTION(execGetHairGroupsPhysics); \
	DECLARE_FUNCTION(execSetHairGroupsRendering); \
	DECLARE_FUNCTION(execGetHairGroupsRendering);


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAsset_h_423_ACCESSORS
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAsset_h_423_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UGroomAsset, NO_API)


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAsset_h_423_INCLASS \
private: \
	static void StaticRegisterNativesUGroomAsset(); \
	friend struct Z_Construct_UClass_UGroomAsset_Statics; \
public: \
	DECLARE_CLASS(UGroomAsset, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HairStrandsCore"), NO_API) \
	DECLARE_SERIALIZER(UGroomAsset) \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAsset_h_423_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UGroomAsset*>(this); }


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAsset_h_423_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGroomAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGroomAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGroomAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGroomAsset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGroomAsset(UGroomAsset&&); \
	NO_API UGroomAsset(const UGroomAsset&); \
public: \
	NO_API virtual ~UGroomAsset();


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAsset_h_420_PROLOG
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAsset_h_423_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAsset_h_423_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAsset_h_423_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAsset_h_423_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAsset_h_423_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAsset_h_423_ACCESSORS \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAsset_h_423_INCLASS \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAsset_h_423_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HAIRSTRANDSCORE_API UClass* StaticClass<class UGroomAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAsset_h


#define FOREACH_ENUM_EHAIRATLASTEXTURETYPE(op) \
	op(EHairAtlasTextureType::Depth) \
	op(EHairAtlasTextureType::Tangent) \
	op(EHairAtlasTextureType::Attribute) \
	op(EHairAtlasTextureType::Coverage) \
	op(EHairAtlasTextureType::AuxilaryData) \
	op(EHairAtlasTextureType::Material) 

enum class EHairAtlasTextureType : uint8;
template<> struct TIsUEnumClass<EHairAtlasTextureType> { enum { Value = true }; };
template<> HAIRSTRANDSCORE_API UEnum* StaticEnum<EHairAtlasTextureType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
