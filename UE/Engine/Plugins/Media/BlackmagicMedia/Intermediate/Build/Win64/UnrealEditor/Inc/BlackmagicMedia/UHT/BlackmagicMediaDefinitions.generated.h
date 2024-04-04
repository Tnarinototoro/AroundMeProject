// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlackmagicMediaDefinitions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLACKMAGICMEDIA_BlackmagicMediaDefinitions_generated_h
#error "BlackmagicMediaDefinitions.generated.h already included, missing '#pragma once' in BlackmagicMediaDefinitions.h"
#endif
#define BLACKMAGICMEDIA_BlackmagicMediaDefinitions_generated_h

#define FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicMediaDefinitions_h_43_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBlackmagicMediaHDROptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> BLACKMAGICMEDIA_API UScriptStruct* StaticStruct<struct FBlackmagicMediaHDROptions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicMediaDefinitions_h


#define FOREACH_ENUM_EBLACKMAGICHDRMETADATAEOTF(op) \
	op(EBlackmagicHDRMetadataEOTF::SDR) \
	op(EBlackmagicHDRMetadataEOTF::HDR) \
	op(EBlackmagicHDRMetadataEOTF::PQ) \
	op(EBlackmagicHDRMetadataEOTF::HLG) 

enum class EBlackmagicHDRMetadataEOTF : uint8;
template<> struct TIsUEnumClass<EBlackmagicHDRMetadataEOTF> { enum { Value = true }; };
template<> BLACKMAGICMEDIA_API UEnum* StaticEnum<EBlackmagicHDRMetadataEOTF>();

#define FOREACH_ENUM_EBLACKMAGICHDRMETADATAGAMUT(op) \
	op(EBlackmagicHDRMetadataGamut::Rec709) \
	op(EBlackmagicHDRMetadataGamut::Rec2020) 

enum class EBlackmagicHDRMetadataGamut : uint8;
template<> struct TIsUEnumClass<EBlackmagicHDRMetadataGamut> { enum { Value = true }; };
template<> BLACKMAGICMEDIA_API UEnum* StaticEnum<EBlackmagicHDRMetadataGamut>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
