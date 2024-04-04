// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AjaMediaSource.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AJAMEDIA_AjaMediaSource_generated_h
#error "AjaMediaSource.generated.h already included, missing '#pragma once' in AjaMediaSource.h"
#endif
#define AJAMEDIA_AjaMediaSource_generated_h

#define FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaMediaSource_h_38_SPARSE_DATA
#define FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaMediaSource_h_38_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaMediaSource_h_38_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaMediaSource_h_38_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaMediaSource_h_38_ACCESSORS
#define FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaMediaSource_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAjaMediaSource(); \
	friend struct Z_Construct_UClass_UAjaMediaSource_Statics; \
public: \
	DECLARE_CLASS(UAjaMediaSource, UCaptureCardMediaSource, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AjaMedia"), NO_API) \
	DECLARE_SERIALIZER(UAjaMediaSource)


#define FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaMediaSource_h_38_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAjaMediaSource(UAjaMediaSource&&); \
	NO_API UAjaMediaSource(const UAjaMediaSource&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAjaMediaSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAjaMediaSource); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAjaMediaSource) \
	NO_API virtual ~UAjaMediaSource();


#define FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaMediaSource_h_35_PROLOG
#define FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaMediaSource_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaMediaSource_h_38_SPARSE_DATA \
	FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaMediaSource_h_38_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaMediaSource_h_38_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaMediaSource_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaMediaSource_h_38_ACCESSORS \
	FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaMediaSource_h_38_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaMediaSource_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AJAMEDIA_API UClass* StaticClass<class UAjaMediaSource>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaMediaSource_h


#define FOREACH_ENUM_EAJAMEDIASOURCECOLORFORMAT(op) \
	op(EAjaMediaSourceColorFormat::YUV2_8bit) \
	op(EAjaMediaSourceColorFormat::YUV_10bit) 

enum class EAjaMediaSourceColorFormat : uint8;
template<> struct TIsUEnumClass<EAjaMediaSourceColorFormat> { enum { Value = true }; };
template<> AJAMEDIA_API UEnum* StaticEnum<EAjaMediaSourceColorFormat>();

#define FOREACH_ENUM_EAJAMEDIAAUDIOCHANNEL(op) \
	op(EAjaMediaAudioChannel::Channel6) \
	op(EAjaMediaAudioChannel::Channel8) 

enum class EAjaMediaAudioChannel : uint8;
template<> struct TIsUEnumClass<EAjaMediaAudioChannel> { enum { Value = true }; };
template<> AJAMEDIA_API UEnum* StaticEnum<EAjaMediaAudioChannel>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
