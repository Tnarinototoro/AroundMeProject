// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BinkMoviePlayerSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BINKMEDIAPLAYER_BinkMoviePlayerSettings_generated_h
#error "BinkMoviePlayerSettings.generated.h already included, missing '#pragma once' in BinkMoviePlayerSettings.h"
#endif
#define BINKMEDIAPLAYER_BinkMoviePlayerSettings_generated_h

#define FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Private_BinkMoviePlayerSettings_h_67_SPARSE_DATA
#define FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Private_BinkMoviePlayerSettings_h_67_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Private_BinkMoviePlayerSettings_h_67_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Private_BinkMoviePlayerSettings_h_67_RPC_WRAPPERS
#define FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Private_BinkMoviePlayerSettings_h_67_ACCESSORS
#define FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Private_BinkMoviePlayerSettings_h_67_INCLASS \
private: \
	static void StaticRegisterNativesUBinkMoviePlayerSettings(); \
	friend struct Z_Construct_UClass_UBinkMoviePlayerSettings_Statics; \
public: \
	DECLARE_CLASS(UBinkMoviePlayerSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/BinkMediaPlayer"), NO_API) \
	DECLARE_SERIALIZER(UBinkMoviePlayerSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Private_BinkMoviePlayerSettings_h_67_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBinkMoviePlayerSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBinkMoviePlayerSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBinkMoviePlayerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBinkMoviePlayerSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBinkMoviePlayerSettings(UBinkMoviePlayerSettings&&); \
	NO_API UBinkMoviePlayerSettings(const UBinkMoviePlayerSettings&); \
public: \
	NO_API virtual ~UBinkMoviePlayerSettings();


#define FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Private_BinkMoviePlayerSettings_h_61_PROLOG
#define FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Private_BinkMoviePlayerSettings_h_67_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Private_BinkMoviePlayerSettings_h_67_SPARSE_DATA \
	FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Private_BinkMoviePlayerSettings_h_67_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Private_BinkMoviePlayerSettings_h_67_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Private_BinkMoviePlayerSettings_h_67_RPC_WRAPPERS \
	FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Private_BinkMoviePlayerSettings_h_67_ACCESSORS \
	FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Private_BinkMoviePlayerSettings_h_67_INCLASS \
	FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Private_BinkMoviePlayerSettings_h_67_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BINKMEDIAPLAYER_API UClass* StaticClass<class UBinkMoviePlayerSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Private_BinkMoviePlayerSettings_h


#define FOREACH_ENUM_EBINKMOVIEPLAYERBINKBUFFERMODES(op) \
	op(MP_Bink_Stream) \
	op(MP_Bink_PreloadAll) \
	op(MP_Bink_StreamUntilResident) 

enum EBinkMoviePlayerBinkBufferModes : int;
template<> BINKMEDIAPLAYER_API UEnum* StaticEnum<EBinkMoviePlayerBinkBufferModes>();

#define FOREACH_ENUM_EBINKMOVIEPLAYERBINKSOUNDTRACK(op) \
	op(MP_Bink_Sound_None) \
	op(MP_Bink_Sound_Simple) \
	op(MP_Bink_Sound_LanguageOverride) \
	op(MP_Bink_Sound_51) \
	op(MP_Bink_Sound_51LanguageOverride) \
	op(MP_Bink_Sound_71) \
	op(MP_Bink_Sound_71LanguageOverride) 

enum EBinkMoviePlayerBinkSoundTrack : int;
template<> BINKMEDIAPLAYER_API UEnum* StaticEnum<EBinkMoviePlayerBinkSoundTrack>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
