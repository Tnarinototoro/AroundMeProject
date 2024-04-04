// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EncodeRootBoneModifier.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMATIONMODIFIERLIBRARY_EncodeRootBoneModifier_generated_h
#error "EncodeRootBoneModifier.generated.h already included, missing '#pragma once' in EncodeRootBoneModifier.h"
#endif
#define ANIMATIONMODIFIERLIBRARY_EncodeRootBoneModifier_generated_h

#define FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_EncodeRootBoneModifier_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEncodeRootBoneWeightedBone_Statics; \
	ANIMATIONMODIFIERLIBRARY_API static class UScriptStruct* StaticStruct();


template<> ANIMATIONMODIFIERLIBRARY_API UScriptStruct* StaticStruct<struct FEncodeRootBoneWeightedBone>();

#define FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_EncodeRootBoneModifier_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEncodeRootBoneWeightedBoneAxis_Statics; \
	ANIMATIONMODIFIERLIBRARY_API static class UScriptStruct* StaticStruct(); \
	typedef FEncodeRootBoneWeightedBone Super;


template<> ANIMATIONMODIFIERLIBRARY_API UScriptStruct* StaticStruct<struct FEncodeRootBoneWeightedBoneAxis>();

#define FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_EncodeRootBoneModifier_h_41_SPARSE_DATA
#define FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_EncodeRootBoneModifier_h_41_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_EncodeRootBoneModifier_h_41_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_EncodeRootBoneModifier_h_41_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_EncodeRootBoneModifier_h_41_ACCESSORS
#define FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_EncodeRootBoneModifier_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEncodeRootBoneModifier(); \
	friend struct Z_Construct_UClass_UEncodeRootBoneModifier_Statics; \
public: \
	DECLARE_CLASS(UEncodeRootBoneModifier, UAnimationModifier, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AnimationModifierLibrary"), NO_API) \
	DECLARE_SERIALIZER(UEncodeRootBoneModifier)


#define FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_EncodeRootBoneModifier_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEncodeRootBoneModifier(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEncodeRootBoneModifier(UEncodeRootBoneModifier&&); \
	NO_API UEncodeRootBoneModifier(const UEncodeRootBoneModifier&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEncodeRootBoneModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEncodeRootBoneModifier); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEncodeRootBoneModifier) \
	NO_API virtual ~UEncodeRootBoneModifier();


#define FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_EncodeRootBoneModifier_h_38_PROLOG
#define FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_EncodeRootBoneModifier_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_EncodeRootBoneModifier_h_41_SPARSE_DATA \
	FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_EncodeRootBoneModifier_h_41_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_EncodeRootBoneModifier_h_41_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_EncodeRootBoneModifier_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_EncodeRootBoneModifier_h_41_ACCESSORS \
	FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_EncodeRootBoneModifier_h_41_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_EncodeRootBoneModifier_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMATIONMODIFIERLIBRARY_API UClass* StaticClass<class UEncodeRootBoneModifier>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_EncodeRootBoneModifier_h


#define FOREACH_ENUM_EENCODEROOTBONEAXIS(op) \
	op(EEncodeRootBoneAxis::X) \
	op(EEncodeRootBoneAxis::Y) \
	op(EEncodeRootBoneAxis::Z) 

enum class EEncodeRootBoneAxis : uint8;
template<> struct TIsUEnumClass<EEncodeRootBoneAxis> { enum { Value = true }; };
template<> ANIMATIONMODIFIERLIBRARY_API UEnum* StaticEnum<EEncodeRootBoneAxis>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
