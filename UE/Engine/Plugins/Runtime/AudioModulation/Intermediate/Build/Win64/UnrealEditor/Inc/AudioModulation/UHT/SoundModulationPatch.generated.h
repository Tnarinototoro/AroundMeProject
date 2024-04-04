// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SoundModulationPatch.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUDIOMODULATION_SoundModulationPatch_generated_h
#error "SoundModulationPatch.generated.h already included, missing '#pragma once' in SoundModulationPatch.h"
#endif
#define AUDIOMODULATION_SoundModulationPatch_generated_h

#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationPatch_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSoundModulationTransform_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FWaveTableTransform Super;


template<> AUDIOMODULATION_API UScriptStruct* StaticStruct<struct FSoundModulationTransform>();

#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationPatch_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSoundControlModulationInput_Statics; \
	static class UScriptStruct* StaticStruct();


template<> AUDIOMODULATION_API UScriptStruct* StaticStruct<struct FSoundControlModulationInput>();

#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationPatch_h_52_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSoundControlModulationPatch_Statics; \
	static class UScriptStruct* StaticStruct();


template<> AUDIOMODULATION_API UScriptStruct* StaticStruct<struct FSoundControlModulationPatch>();

#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationPatch_h_69_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationPatch_h_69_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationPatch_h_69_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationPatch_h_69_RPC_WRAPPERS
#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationPatch_h_69_ACCESSORS
#if WITH_EDITORONLY_DATA
#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationPatch_h_69_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USoundModulationPatch, NO_API)


#else
#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationPatch_h_69_ARCHIVESERIALIZER
#endif
#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationPatch_h_69_INCLASS \
private: \
	static void StaticRegisterNativesUSoundModulationPatch(); \
	friend struct Z_Construct_UClass_USoundModulationPatch_Statics; \
public: \
	DECLARE_CLASS(USoundModulationPatch, USoundModulatorBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioModulation"), NO_API) \
	DECLARE_SERIALIZER(USoundModulationPatch) \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationPatch_h_69_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationPatch_h_69_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundModulationPatch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundModulationPatch) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundModulationPatch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundModulationPatch); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundModulationPatch(USoundModulationPatch&&); \
	NO_API USoundModulationPatch(const USoundModulationPatch&); \
public: \
	NO_API virtual ~USoundModulationPatch();


#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationPatch_h_66_PROLOG
#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationPatch_h_69_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationPatch_h_69_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationPatch_h_69_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationPatch_h_69_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationPatch_h_69_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationPatch_h_69_ACCESSORS \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationPatch_h_69_INCLASS \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationPatch_h_69_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOMODULATION_API UClass* StaticClass<class USoundModulationPatch>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationPatch_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
