// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CaptureCardMediaSource.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MEDIAIOCORE_CaptureCardMediaSource_generated_h
#error "CaptureCardMediaSource.generated.h already included, missing '#pragma once' in CaptureCardMediaSource.h"
#endif
#define MEDIAIOCORE_CaptureCardMediaSource_generated_h

#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_CaptureCardMediaSource_h_54_SPARSE_DATA
#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_CaptureCardMediaSource_h_54_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_CaptureCardMediaSource_h_54_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_CaptureCardMediaSource_h_54_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_CaptureCardMediaSource_h_54_ACCESSORS
#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_CaptureCardMediaSource_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCaptureCardMediaSource(); \
	friend struct Z_Construct_UClass_UCaptureCardMediaSource_Statics; \
public: \
	DECLARE_CLASS(UCaptureCardMediaSource, UTimeSynchronizableMediaSource, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MediaIOCore"), NO_API) \
	DECLARE_SERIALIZER(UCaptureCardMediaSource)


#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_CaptureCardMediaSource_h_54_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCaptureCardMediaSource(UCaptureCardMediaSource&&); \
	NO_API UCaptureCardMediaSource(const UCaptureCardMediaSource&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCaptureCardMediaSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCaptureCardMediaSource); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UCaptureCardMediaSource) \
	NO_API virtual ~UCaptureCardMediaSource();


#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_CaptureCardMediaSource_h_51_PROLOG
#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_CaptureCardMediaSource_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_CaptureCardMediaSource_h_54_SPARSE_DATA \
	FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_CaptureCardMediaSource_h_54_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_CaptureCardMediaSource_h_54_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_CaptureCardMediaSource_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_CaptureCardMediaSource_h_54_ACCESSORS \
	FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_CaptureCardMediaSource_h_54_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_CaptureCardMediaSource_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MEDIAIOCORE_API UClass* StaticClass<class UCaptureCardMediaSource>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_CaptureCardMediaSource_h


#define FOREACH_ENUM_EMEDIAIOCORESOURCEENCODING(op) \
	op(EMediaIOCoreSourceEncoding::Linear) \
	op(EMediaIOCoreSourceEncoding::sRGB) \
	op(EMediaIOCoreSourceEncoding::ST2084) \
	op(EMediaIOCoreSourceEncoding::SLog3) 

enum class EMediaIOCoreSourceEncoding : uint8;
template<> struct TIsUEnumClass<EMediaIOCoreSourceEncoding> { enum { Value = true }; };
template<> MEDIAIOCORE_API UEnum* StaticEnum<EMediaIOCoreSourceEncoding>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
