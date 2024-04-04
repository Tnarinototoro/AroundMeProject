// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioModulationStatics.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USoundControlBus;
class USoundControlBusMix;
class USoundModulationGenerator;
class USoundModulationGeneratorADEnvelope;
class USoundModulationGeneratorEnvelopeFollower;
class USoundModulationGeneratorLFO;
class USoundModulationParameter;
class USoundModulatorBase;
struct FEnvelopeFollowerGeneratorParams;
struct FSoundControlBusMixStage;
struct FSoundModulationADEnvelopeParams;
struct FSoundModulationDestinationSettings;
struct FSoundModulationLFOParams;
#ifdef AUDIOMODULATION_AudioModulationStatics_generated_h
#error "AudioModulationStatics.generated.h already included, missing '#pragma once' in AudioModulationStatics.h"
#endif
#define AUDIOMODULATION_AudioModulationStatics_generated_h

#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationStatics_h_27_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationStatics_h_27_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationStatics_h_27_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationStatics_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetModulatorsFromDestination); \
	DECLARE_FUNCTION(execGetModulatorValue); \
	DECLARE_FUNCTION(execUpdateModulator); \
	DECLARE_FUNCTION(execUpdateMixFromObject); \
	DECLARE_FUNCTION(execUpdateMixByFilter); \
	DECLARE_FUNCTION(execDeactivateAllBusMixes); \
	DECLARE_FUNCTION(execClearAllGlobalBusMixValues); \
	DECLARE_FUNCTION(execClearGlobalBusMixValue); \
	DECLARE_FUNCTION(execSetGlobalBusMixValue); \
	DECLARE_FUNCTION(execUpdateMix); \
	DECLARE_FUNCTION(execLoadMixFromProfile); \
	DECLARE_FUNCTION(execSaveMixToProfile); \
	DECLARE_FUNCTION(execDeactivateGenerator); \
	DECLARE_FUNCTION(execDeactivateBusMix); \
	DECLARE_FUNCTION(execDeactivateBus); \
	DECLARE_FUNCTION(execCreateADEnvelopeGenerator); \
	DECLARE_FUNCTION(execCreateLFOGenerator); \
	DECLARE_FUNCTION(execCreateEnvelopeFollowerGenerator); \
	DECLARE_FUNCTION(execCreateModulationParameter); \
	DECLARE_FUNCTION(execCreateBusMix); \
	DECLARE_FUNCTION(execCreateBusMixStage); \
	DECLARE_FUNCTION(execCreateBus); \
	DECLARE_FUNCTION(execActivateGenerator); \
	DECLARE_FUNCTION(execActivateBusMix); \
	DECLARE_FUNCTION(execActivateBus);


#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationStatics_h_27_ACCESSORS
#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationStatics_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUAudioModulationStatics(); \
	friend struct Z_Construct_UClass_UAudioModulationStatics_Statics; \
public: \
	DECLARE_CLASS(UAudioModulationStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioModulation"), NO_API) \
	DECLARE_SERIALIZER(UAudioModulationStatics)


#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationStatics_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioModulationStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioModulationStatics) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioModulationStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioModulationStatics); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioModulationStatics(UAudioModulationStatics&&); \
	NO_API UAudioModulationStatics(const UAudioModulationStatics&); \
public: \
	NO_API virtual ~UAudioModulationStatics();


#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationStatics_h_24_PROLOG
#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationStatics_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationStatics_h_27_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationStatics_h_27_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationStatics_h_27_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationStatics_h_27_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationStatics_h_27_ACCESSORS \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationStatics_h_27_INCLASS \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationStatics_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOMODULATION_API UClass* StaticClass<class UAudioModulationStatics>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationStatics_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
