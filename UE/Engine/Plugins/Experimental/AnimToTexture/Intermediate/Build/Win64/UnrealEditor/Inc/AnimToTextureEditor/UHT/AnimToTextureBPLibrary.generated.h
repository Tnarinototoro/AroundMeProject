// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimToTextureBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimToTextureDataAsset;
class UMaterialInstanceConstant;
class USkeletalMesh;
class UStaticMesh;
#ifdef ANIMTOTEXTUREEDITOR_AnimToTextureBPLibrary_generated_h
#error "AnimToTextureBPLibrary.generated.h already included, missing '#pragma once' in AnimToTextureBPLibrary.h"
#endif
#define ANIMTOTEXTUREEDITOR_AnimToTextureBPLibrary_generated_h

#define FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTextureEditor_Public_AnimToTextureBPLibrary_h_23_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTextureEditor_Public_AnimToTextureBPLibrary_h_23_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTextureEditor_Public_AnimToTextureBPLibrary_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTextureEditor_Public_AnimToTextureBPLibrary_h_23_RPC_WRAPPERS
#if WITH_EDITOR
#define FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTextureEditor_Public_AnimToTextureBPLibrary_h_23_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateMaterialInstanceFromDataAsset); \
	DECLARE_FUNCTION(execSetLightMapIndex); \
	DECLARE_FUNCTION(execConvertSkeletalMeshToStaticMesh); \
	DECLARE_FUNCTION(execAnimationToTexture);


#else
#define FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTextureEditor_Public_AnimToTextureBPLibrary_h_23_EDITOR_ONLY_RPC_WRAPPERS
#endif //WITH_EDITOR
#define FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTextureEditor_Public_AnimToTextureBPLibrary_h_23_ACCESSORS
#define FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTextureEditor_Public_AnimToTextureBPLibrary_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUAnimToTextureBPLibrary(); \
	friend struct Z_Construct_UClass_UAnimToTextureBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UAnimToTextureBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimToTextureEditor"), NO_API) \
	DECLARE_SERIALIZER(UAnimToTextureBPLibrary)


#define FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTextureEditor_Public_AnimToTextureBPLibrary_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimToTextureBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimToTextureBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimToTextureBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimToTextureBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimToTextureBPLibrary(UAnimToTextureBPLibrary&&); \
	NO_API UAnimToTextureBPLibrary(const UAnimToTextureBPLibrary&); \
public: \
	NO_API virtual ~UAnimToTextureBPLibrary();


#define FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTextureEditor_Public_AnimToTextureBPLibrary_h_20_PROLOG
#define FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTextureEditor_Public_AnimToTextureBPLibrary_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTextureEditor_Public_AnimToTextureBPLibrary_h_23_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTextureEditor_Public_AnimToTextureBPLibrary_h_23_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTextureEditor_Public_AnimToTextureBPLibrary_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTextureEditor_Public_AnimToTextureBPLibrary_h_23_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTextureEditor_Public_AnimToTextureBPLibrary_h_23_EDITOR_ONLY_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTextureEditor_Public_AnimToTextureBPLibrary_h_23_ACCESSORS \
	FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTextureEditor_Public_AnimToTextureBPLibrary_h_23_INCLASS \
	FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTextureEditor_Public_AnimToTextureBPLibrary_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMTOTEXTUREEDITOR_API UClass* StaticClass<class UAnimToTextureBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTextureEditor_Public_AnimToTextureBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
