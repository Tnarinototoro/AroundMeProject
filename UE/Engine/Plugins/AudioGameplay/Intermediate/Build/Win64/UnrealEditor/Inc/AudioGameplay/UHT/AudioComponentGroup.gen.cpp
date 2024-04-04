// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioComponentGroup.h"
#include "AudioParameter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioComponentGroup() {}
// Cross Module References
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_UAudioParameterControllerInterface_NoRegister();
	AUDIOEXTENSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FAudioParameter();
	AUDIOGAMEPLAY_API UClass* Z_Construct_UClass_UAudioComponentGroup();
	AUDIOGAMEPLAY_API UClass* Z_Construct_UClass_UAudioComponentGroup_NoRegister();
	AUDIOGAMEPLAY_API UClass* Z_Construct_UClass_UAudioComponentGroupExtension_NoRegister();
	AUDIOGAMEPLAY_API UFunction* Z_Construct_UDelegateFunction_AudioGameplay_BoolParamCallback__DelegateSignature();
	AUDIOGAMEPLAY_API UFunction* Z_Construct_UDelegateFunction_AudioGameplay_SoundCallback__DelegateSignature();
	AUDIOGAMEPLAY_API UFunction* Z_Construct_UDelegateFunction_AudioGameplay_SoundGroupChanged__DelegateSignature();
	AUDIOGAMEPLAY_API UFunction* Z_Construct_UDelegateFunction_AudioGameplay_StringParamCallback__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AudioGameplay();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AudioGameplay_SoundGroupChanged__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AudioGameplay_SoundGroupChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AudioComponentGroup.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AudioGameplay_SoundGroupChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AudioGameplay, nullptr, "SoundGroupChanged__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioGameplay_SoundGroupChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AudioGameplay_SoundGroupChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_AudioGameplay_SoundGroupChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AudioGameplay_SoundGroupChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FSoundGroupChanged_DelegateWrapper(const FMulticastScriptDelegate& SoundGroupChanged)
{
	SoundGroupChanged.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_AudioGameplay_SoundCallback__DelegateSignature_Statics
	{
		struct _Script_AudioGameplay_eventSoundCallback_Parms
		{
			FName EventName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_EventName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AudioGameplay_SoundCallback__DelegateSignature_Statics::NewProp_EventName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_AudioGameplay_SoundCallback__DelegateSignature_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AudioGameplay_eventSoundCallback_Parms, EventName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioGameplay_SoundCallback__DelegateSignature_Statics::NewProp_EventName_MetaData), Z_Construct_UDelegateFunction_AudioGameplay_SoundCallback__DelegateSignature_Statics::NewProp_EventName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AudioGameplay_SoundCallback__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AudioGameplay_SoundCallback__DelegateSignature_Statics::NewProp_EventName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AudioGameplay_SoundCallback__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AudioComponentGroup.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AudioGameplay_SoundCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AudioGameplay, nullptr, "SoundCallback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AudioGameplay_SoundCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioGameplay_SoundCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AudioGameplay_SoundCallback__DelegateSignature_Statics::_Script_AudioGameplay_eventSoundCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioGameplay_SoundCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AudioGameplay_SoundCallback__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioGameplay_SoundCallback__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AudioGameplay_SoundCallback__DelegateSignature_Statics::_Script_AudioGameplay_eventSoundCallback_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AudioGameplay_SoundCallback__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AudioGameplay_SoundCallback__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FSoundCallback_DelegateWrapper(const FScriptDelegate& SoundCallback, FName const& EventName)
{
	struct _Script_AudioGameplay_eventSoundCallback_Parms
	{
		FName EventName;
	};
	_Script_AudioGameplay_eventSoundCallback_Parms Parms;
	Parms.EventName=EventName;
	SoundCallback.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AudioGameplay_BoolParamCallback__DelegateSignature_Statics
	{
		struct _Script_AudioGameplay_eventBoolParamCallback_Parms
		{
			bool ParamValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamValue_MetaData[];
#endif
		static void NewProp_ParamValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ParamValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AudioGameplay_BoolParamCallback__DelegateSignature_Statics::NewProp_ParamValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UDelegateFunction_AudioGameplay_BoolParamCallback__DelegateSignature_Statics::NewProp_ParamValue_SetBit(void* Obj)
	{
		((_Script_AudioGameplay_eventBoolParamCallback_Parms*)Obj)->ParamValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_AudioGameplay_BoolParamCallback__DelegateSignature_Statics::NewProp_ParamValue = { "ParamValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_AudioGameplay_eventBoolParamCallback_Parms), &Z_Construct_UDelegateFunction_AudioGameplay_BoolParamCallback__DelegateSignature_Statics::NewProp_ParamValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioGameplay_BoolParamCallback__DelegateSignature_Statics::NewProp_ParamValue_MetaData), Z_Construct_UDelegateFunction_AudioGameplay_BoolParamCallback__DelegateSignature_Statics::NewProp_ParamValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AudioGameplay_BoolParamCallback__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AudioGameplay_BoolParamCallback__DelegateSignature_Statics::NewProp_ParamValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AudioGameplay_BoolParamCallback__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AudioComponentGroup.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AudioGameplay_BoolParamCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AudioGameplay, nullptr, "BoolParamCallback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AudioGameplay_BoolParamCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioGameplay_BoolParamCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AudioGameplay_BoolParamCallback__DelegateSignature_Statics::_Script_AudioGameplay_eventBoolParamCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioGameplay_BoolParamCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AudioGameplay_BoolParamCallback__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioGameplay_BoolParamCallback__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AudioGameplay_BoolParamCallback__DelegateSignature_Statics::_Script_AudioGameplay_eventBoolParamCallback_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AudioGameplay_BoolParamCallback__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AudioGameplay_BoolParamCallback__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FBoolParamCallback_DelegateWrapper(const FScriptDelegate& BoolParamCallback, bool ParamValue)
{
	struct _Script_AudioGameplay_eventBoolParamCallback_Parms
	{
		bool ParamValue;
	};
	_Script_AudioGameplay_eventBoolParamCallback_Parms Parms;
	Parms.ParamValue=ParamValue ? true : false;
	BoolParamCallback.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AudioGameplay_StringParamCallback__DelegateSignature_Statics
	{
		struct _Script_AudioGameplay_eventStringParamCallback_Parms
		{
			FString Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AudioGameplay_StringParamCallback__DelegateSignature_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_AudioGameplay_StringParamCallback__DelegateSignature_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AudioGameplay_eventStringParamCallback_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioGameplay_StringParamCallback__DelegateSignature_Statics::NewProp_Value_MetaData), Z_Construct_UDelegateFunction_AudioGameplay_StringParamCallback__DelegateSignature_Statics::NewProp_Value_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AudioGameplay_StringParamCallback__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AudioGameplay_StringParamCallback__DelegateSignature_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AudioGameplay_StringParamCallback__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AudioComponentGroup.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AudioGameplay_StringParamCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AudioGameplay, nullptr, "StringParamCallback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AudioGameplay_StringParamCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioGameplay_StringParamCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AudioGameplay_StringParamCallback__DelegateSignature_Statics::_Script_AudioGameplay_eventStringParamCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioGameplay_StringParamCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AudioGameplay_StringParamCallback__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioGameplay_StringParamCallback__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AudioGameplay_StringParamCallback__DelegateSignature_Statics::_Script_AudioGameplay_eventStringParamCallback_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AudioGameplay_StringParamCallback__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AudioGameplay_StringParamCallback__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FStringParamCallback_DelegateWrapper(const FScriptDelegate& StringParamCallback, const FString& Value)
{
	struct _Script_AudioGameplay_eventStringParamCallback_Parms
	{
		FString Value;
	};
	_Script_AudioGameplay_eventStringParamCallback_Parms Parms;
	Parms.Value=Value;
	StringParamCallback.ProcessDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UAudioComponentGroup::execUnsubscribeObject)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnsubscribeObject(Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponentGroup::execSubscribeToBool)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParamName);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Delegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SubscribeToBool(Z_Param_ParamName,FBoolParamCallback(Z_Param_Delegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponentGroup::execSubscribeToEvent)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_EventName);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Delegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SubscribeToEvent(Z_Param_EventName,FSoundCallback(Z_Param_Delegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponentGroup::execSubscribeToStringParam)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParamName);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Delegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SubscribeToStringParam(Z_Param_ParamName,FStringParamCallback(Z_Param_Delegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponentGroup::execGetStringParamValue)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParamName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetStringParamValue(Z_Param_ParamName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponentGroup::execGetBoolParamValue)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParamName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetBoolParamValue(Z_Param_ParamName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponentGroup::execGetFloatParamValue)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParamName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetFloatParamValue(Z_Param_ParamName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponentGroup::execRemoveExtension)
	{
		P_GET_TINTERFACE(IAudioComponentGroupExtension,Z_Param_NewExtension);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveExtension(Z_Param_NewExtension);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponentGroup::execAddExtension)
	{
		P_GET_TINTERFACE(IAudioComponentGroupExtension,Z_Param_NewExtension);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddExtension(Z_Param_NewExtension);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponentGroup::execSetLowPassFilter)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InFrequency);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLowPassFilter(Z_Param_InFrequency);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponentGroup::execSetPitchMultiplier)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InPitch);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPitchMultiplier(Z_Param_InPitch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponentGroup::execSetVolumeMultiplier)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InVolume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVolumeMultiplier(Z_Param_InVolume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponentGroup::execDisableVirtualization)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableVirtualization();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponentGroup::execEnableVirtualization)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableVirtualization();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponentGroup::execAddExternalComponent)
	{
		P_GET_OBJECT(UAudioComponent,Z_Param_ComponentToAdd);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddExternalComponent(Z_Param_ComponentToAdd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponentGroup::execBroadcastEvent)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_EventName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadcastEvent(Z_Param_EventName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponentGroup::execBroadcastKill)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadcastKill();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponentGroup::execBroadcastStopAll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadcastStopAll();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponentGroup::execIsVirtualized)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsVirtualized();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponentGroup::execIsPlayingAny)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlayingAny();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponentGroup::execStopSound)
	{
		P_GET_OBJECT(USoundBase,Z_Param_Sound);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FadeTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopSound(Z_Param_Sound,Z_Param_FadeTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioComponentGroup::execStaticGetOrCreateComponentGroup)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAudioComponentGroup**)Z_Param__Result=UAudioComponentGroup::StaticGetOrCreateComponentGroup(Z_Param_Actor);
		P_NATIVE_END;
	}
	void UAudioComponentGroup::StaticRegisterNativesUAudioComponentGroup()
	{
		UClass* Class = UAudioComponentGroup::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddExtension", &UAudioComponentGroup::execAddExtension },
			{ "AddExternalComponent", &UAudioComponentGroup::execAddExternalComponent },
			{ "BroadcastEvent", &UAudioComponentGroup::execBroadcastEvent },
			{ "BroadcastKill", &UAudioComponentGroup::execBroadcastKill },
			{ "BroadcastStopAll", &UAudioComponentGroup::execBroadcastStopAll },
			{ "DisableVirtualization", &UAudioComponentGroup::execDisableVirtualization },
			{ "EnableVirtualization", &UAudioComponentGroup::execEnableVirtualization },
			{ "GetBoolParamValue", &UAudioComponentGroup::execGetBoolParamValue },
			{ "GetFloatParamValue", &UAudioComponentGroup::execGetFloatParamValue },
			{ "GetStringParamValue", &UAudioComponentGroup::execGetStringParamValue },
			{ "IsPlayingAny", &UAudioComponentGroup::execIsPlayingAny },
			{ "IsVirtualized", &UAudioComponentGroup::execIsVirtualized },
			{ "RemoveExtension", &UAudioComponentGroup::execRemoveExtension },
			{ "SetLowPassFilter", &UAudioComponentGroup::execSetLowPassFilter },
			{ "SetPitchMultiplier", &UAudioComponentGroup::execSetPitchMultiplier },
			{ "SetVolumeMultiplier", &UAudioComponentGroup::execSetVolumeMultiplier },
			{ "StaticGetOrCreateComponentGroup", &UAudioComponentGroup::execStaticGetOrCreateComponentGroup },
			{ "StopSound", &UAudioComponentGroup::execStopSound },
			{ "SubscribeToBool", &UAudioComponentGroup::execSubscribeToBool },
			{ "SubscribeToEvent", &UAudioComponentGroup::execSubscribeToEvent },
			{ "SubscribeToStringParam", &UAudioComponentGroup::execSubscribeToStringParam },
			{ "UnsubscribeObject", &UAudioComponentGroup::execUnsubscribeObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAudioComponentGroup_AddExtension_Statics
	{
		struct AudioComponentGroup_eventAddExtension_Parms
		{
			TScriptInterface<IAudioComponentGroupExtension> NewExtension;
		};
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_NewExtension;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UAudioComponentGroup_AddExtension_Statics::NewProp_NewExtension = { "NewExtension", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioComponentGroup_eventAddExtension_Parms, NewExtension), Z_Construct_UClass_UAudioComponentGroupExtension_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponentGroup_AddExtension_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponentGroup_AddExtension_Statics::NewProp_NewExtension,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponentGroup_AddExtension_Statics::Function_MetaDataParams[] = {
		{ "Category", "AudioComponentGroup" },
		{ "ModuleRelativePath", "Public/AudioComponentGroup.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponentGroup_AddExtension_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponentGroup, nullptr, "AddExtension", nullptr, nullptr, Z_Construct_UFunction_UAudioComponentGroup_AddExtension_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponentGroup_AddExtension_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioComponentGroup_AddExtension_Statics::AudioComponentGroup_eventAddExtension_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponentGroup_AddExtension_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioComponentGroup_AddExtension_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponentGroup_AddExtension_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAudioComponentGroup_AddExtension_Statics::AudioComponentGroup_eventAddExtension_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAudioComponentGroup_AddExtension()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioComponentGroup_AddExtension_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponentGroup_AddExternalComponent_Statics
	{
		struct AudioComponentGroup_eventAddExternalComponent_Parms
		{
			UAudioComponent* ComponentToAdd;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentToAdd_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ComponentToAdd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponentGroup_AddExternalComponent_Statics::NewProp_ComponentToAdd_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioComponentGroup_AddExternalComponent_Statics::NewProp_ComponentToAdd = { "ComponentToAdd", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioComponentGroup_eventAddExternalComponent_Parms, ComponentToAdd), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponentGroup_AddExternalComponent_Statics::NewProp_ComponentToAdd_MetaData), Z_Construct_UFunction_UAudioComponentGroup_AddExternalComponent_Statics::NewProp_ComponentToAdd_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponentGroup_AddExternalComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponentGroup_AddExternalComponent_Statics::NewProp_ComponentToAdd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponentGroup_AddExternalComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "AudioComponentGroup" },
		{ "Comment", "//Allow an externally created AudioComponent to share parameters with this SoundGroup\n" },
		{ "ModuleRelativePath", "Public/AudioComponentGroup.h" },
		{ "ToolTip", "Allow an externally created AudioComponent to share parameters with this SoundGroup" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponentGroup_AddExternalComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponentGroup, nullptr, "AddExternalComponent", nullptr, nullptr, Z_Construct_UFunction_UAudioComponentGroup_AddExternalComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponentGroup_AddExternalComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioComponentGroup_AddExternalComponent_Statics::AudioComponentGroup_eventAddExternalComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponentGroup_AddExternalComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioComponentGroup_AddExternalComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponentGroup_AddExternalComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAudioComponentGroup_AddExternalComponent_Statics::AudioComponentGroup_eventAddExternalComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAudioComponentGroup_AddExternalComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioComponentGroup_AddExternalComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponentGroup_BroadcastEvent_Statics
	{
		struct AudioComponentGroup_eventBroadcastEvent_Parms
		{
			FName EventName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_EventName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponentGroup_BroadcastEvent_Statics::NewProp_EventName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAudioComponentGroup_BroadcastEvent_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioComponentGroup_eventBroadcastEvent_Parms, EventName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponentGroup_BroadcastEvent_Statics::NewProp_EventName_MetaData), Z_Construct_UFunction_UAudioComponentGroup_BroadcastEvent_Statics::NewProp_EventName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponentGroup_BroadcastEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponentGroup_BroadcastEvent_Statics::NewProp_EventName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponentGroup_BroadcastEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "AudioComponentGroup" },
		{ "ModuleRelativePath", "Public/AudioComponentGroup.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponentGroup_BroadcastEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponentGroup, nullptr, "BroadcastEvent", nullptr, nullptr, Z_Construct_UFunction_UAudioComponentGroup_BroadcastEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponentGroup_BroadcastEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioComponentGroup_BroadcastEvent_Statics::AudioComponentGroup_eventBroadcastEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponentGroup_BroadcastEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioComponentGroup_BroadcastEvent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponentGroup_BroadcastEvent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAudioComponentGroup_BroadcastEvent_Statics::AudioComponentGroup_eventBroadcastEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAudioComponentGroup_BroadcastEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioComponentGroup_BroadcastEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponentGroup_BroadcastKill_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponentGroup_BroadcastKill_Statics::Function_MetaDataParams[] = {
		{ "Category", "AudioComponentGroup" },
		{ "ModuleRelativePath", "Public/AudioComponentGroup.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponentGroup_BroadcastKill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponentGroup, nullptr, "BroadcastKill", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponentGroup_BroadcastKill_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioComponentGroup_BroadcastKill_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAudioComponentGroup_BroadcastKill()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioComponentGroup_BroadcastKill_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponentGroup_BroadcastStopAll_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponentGroup_BroadcastStopAll_Statics::Function_MetaDataParams[] = {
		{ "Category", "AudioComponentGroup" },
		{ "ModuleRelativePath", "Public/AudioComponentGroup.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponentGroup_BroadcastStopAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponentGroup, nullptr, "BroadcastStopAll", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponentGroup_BroadcastStopAll_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioComponentGroup_BroadcastStopAll_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAudioComponentGroup_BroadcastStopAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioComponentGroup_BroadcastStopAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponentGroup_DisableVirtualization_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponentGroup_DisableVirtualization_Statics::Function_MetaDataParams[] = {
		{ "Category", "AudioComponentGroup" },
		{ "ModuleRelativePath", "Public/AudioComponentGroup.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponentGroup_DisableVirtualization_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponentGroup, nullptr, "DisableVirtualization", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponentGroup_DisableVirtualization_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioComponentGroup_DisableVirtualization_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAudioComponentGroup_DisableVirtualization()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioComponentGroup_DisableVirtualization_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponentGroup_EnableVirtualization_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponentGroup_EnableVirtualization_Statics::Function_MetaDataParams[] = {
		{ "Category", "AudioComponentGroup" },
		{ "ModuleRelativePath", "Public/AudioComponentGroup.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponentGroup_EnableVirtualization_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponentGroup, nullptr, "EnableVirtualization", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponentGroup_EnableVirtualization_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioComponentGroup_EnableVirtualization_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAudioComponentGroup_EnableVirtualization()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioComponentGroup_EnableVirtualization_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponentGroup_GetBoolParamValue_Statics
	{
		struct AudioComponentGroup_eventGetBoolParamValue_Parms
		{
			FName ParamName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParamName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponentGroup_GetBoolParamValue_Statics::NewProp_ParamName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAudioComponentGroup_GetBoolParamValue_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioComponentGroup_eventGetBoolParamValue_Parms, ParamName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponentGroup_GetBoolParamValue_Statics::NewProp_ParamName_MetaData), Z_Construct_UFunction_UAudioComponentGroup_GetBoolParamValue_Statics::NewProp_ParamName_MetaData) };
	void Z_Construct_UFunction_UAudioComponentGroup_GetBoolParamValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AudioComponentGroup_eventGetBoolParamValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioComponentGroup_GetBoolParamValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AudioComponentGroup_eventGetBoolParamValue_Parms), &Z_Construct_UFunction_UAudioComponentGroup_GetBoolParamValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponentGroup_GetBoolParamValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponentGroup_GetBoolParamValue_Statics::NewProp_ParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponentGroup_GetBoolParamValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponentGroup_GetBoolParamValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "AudioComponentGroup" },
		{ "ModuleRelativePath", "Public/AudioComponentGroup.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponentGroup_GetBoolParamValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponentGroup, nullptr, "GetBoolParamValue", nullptr, nullptr, Z_Construct_UFunction_UAudioComponentGroup_GetBoolParamValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponentGroup_GetBoolParamValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioComponentGroup_GetBoolParamValue_Statics::AudioComponentGroup_eventGetBoolParamValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponentGroup_GetBoolParamValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioComponentGroup_GetBoolParamValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponentGroup_GetBoolParamValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAudioComponentGroup_GetBoolParamValue_Statics::AudioComponentGroup_eventGetBoolParamValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAudioComponentGroup_GetBoolParamValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioComponentGroup_GetBoolParamValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponentGroup_GetFloatParamValue_Statics
	{
		struct AudioComponentGroup_eventGetFloatParamValue_Parms
		{
			FName ParamName;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParamName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponentGroup_GetFloatParamValue_Statics::NewProp_ParamName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAudioComponentGroup_GetFloatParamValue_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioComponentGroup_eventGetFloatParamValue_Parms, ParamName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponentGroup_GetFloatParamValue_Statics::NewProp_ParamName_MetaData), Z_Construct_UFunction_UAudioComponentGroup_GetFloatParamValue_Statics::NewProp_ParamName_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioComponentGroup_GetFloatParamValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioComponentGroup_eventGetFloatParamValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponentGroup_GetFloatParamValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponentGroup_GetFloatParamValue_Statics::NewProp_ParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponentGroup_GetFloatParamValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponentGroup_GetFloatParamValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "AudioComponentGroup" },
		{ "ModuleRelativePath", "Public/AudioComponentGroup.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponentGroup_GetFloatParamValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponentGroup, nullptr, "GetFloatParamValue", nullptr, nullptr, Z_Construct_UFunction_UAudioComponentGroup_GetFloatParamValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponentGroup_GetFloatParamValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioComponentGroup_GetFloatParamValue_Statics::AudioComponentGroup_eventGetFloatParamValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponentGroup_GetFloatParamValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioComponentGroup_GetFloatParamValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponentGroup_GetFloatParamValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAudioComponentGroup_GetFloatParamValue_Statics::AudioComponentGroup_eventGetFloatParamValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAudioComponentGroup_GetFloatParamValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioComponentGroup_GetFloatParamValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponentGroup_GetStringParamValue_Statics
	{
		struct AudioComponentGroup_eventGetStringParamValue_Parms
		{
			FName ParamName;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParamName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponentGroup_GetStringParamValue_Statics::NewProp_ParamName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAudioComponentGroup_GetStringParamValue_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioComponentGroup_eventGetStringParamValue_Parms, ParamName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponentGroup_GetStringParamValue_Statics::NewProp_ParamName_MetaData), Z_Construct_UFunction_UAudioComponentGroup_GetStringParamValue_Statics::NewProp_ParamName_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAudioComponentGroup_GetStringParamValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioComponentGroup_eventGetStringParamValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponentGroup_GetStringParamValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponentGroup_GetStringParamValue_Statics::NewProp_ParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponentGroup_GetStringParamValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponentGroup_GetStringParamValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "AudioComponentGroup" },
		{ "ModuleRelativePath", "Public/AudioComponentGroup.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponentGroup_GetStringParamValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponentGroup, nullptr, "GetStringParamValue", nullptr, nullptr, Z_Construct_UFunction_UAudioComponentGroup_GetStringParamValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponentGroup_GetStringParamValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioComponentGroup_GetStringParamValue_Statics::AudioComponentGroup_eventGetStringParamValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponentGroup_GetStringParamValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioComponentGroup_GetStringParamValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponentGroup_GetStringParamValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAudioComponentGroup_GetStringParamValue_Statics::AudioComponentGroup_eventGetStringParamValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAudioComponentGroup_GetStringParamValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioComponentGroup_GetStringParamValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponentGroup_IsPlayingAny_Statics
	{
		struct AudioComponentGroup_eventIsPlayingAny_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAudioComponentGroup_IsPlayingAny_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AudioComponentGroup_eventIsPlayingAny_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioComponentGroup_IsPlayingAny_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AudioComponentGroup_eventIsPlayingAny_Parms), &Z_Construct_UFunction_UAudioComponentGroup_IsPlayingAny_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponentGroup_IsPlayingAny_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponentGroup_IsPlayingAny_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponentGroup_IsPlayingAny_Statics::Function_MetaDataParams[] = {
		{ "Category", "AudioComponentGroup" },
		{ "ModuleRelativePath", "Public/AudioComponentGroup.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponentGroup_IsPlayingAny_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponentGroup, nullptr, "IsPlayingAny", nullptr, nullptr, Z_Construct_UFunction_UAudioComponentGroup_IsPlayingAny_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponentGroup_IsPlayingAny_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioComponentGroup_IsPlayingAny_Statics::AudioComponentGroup_eventIsPlayingAny_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponentGroup_IsPlayingAny_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioComponentGroup_IsPlayingAny_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponentGroup_IsPlayingAny_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAudioComponentGroup_IsPlayingAny_Statics::AudioComponentGroup_eventIsPlayingAny_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAudioComponentGroup_IsPlayingAny()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioComponentGroup_IsPlayingAny_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponentGroup_IsVirtualized_Statics
	{
		struct AudioComponentGroup_eventIsVirtualized_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAudioComponentGroup_IsVirtualized_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AudioComponentGroup_eventIsVirtualized_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioComponentGroup_IsVirtualized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AudioComponentGroup_eventIsVirtualized_Parms), &Z_Construct_UFunction_UAudioComponentGroup_IsVirtualized_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponentGroup_IsVirtualized_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponentGroup_IsVirtualized_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponentGroup_IsVirtualized_Statics::Function_MetaDataParams[] = {
		{ "Category", "AudioComponentGroup" },
		{ "ModuleRelativePath", "Public/AudioComponentGroup.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponentGroup_IsVirtualized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponentGroup, nullptr, "IsVirtualized", nullptr, nullptr, Z_Construct_UFunction_UAudioComponentGroup_IsVirtualized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponentGroup_IsVirtualized_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioComponentGroup_IsVirtualized_Statics::AudioComponentGroup_eventIsVirtualized_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponentGroup_IsVirtualized_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioComponentGroup_IsVirtualized_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponentGroup_IsVirtualized_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAudioComponentGroup_IsVirtualized_Statics::AudioComponentGroup_eventIsVirtualized_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAudioComponentGroup_IsVirtualized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioComponentGroup_IsVirtualized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponentGroup_RemoveExtension_Statics
	{
		struct AudioComponentGroup_eventRemoveExtension_Parms
		{
			TScriptInterface<IAudioComponentGroupExtension> NewExtension;
		};
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_NewExtension;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UAudioComponentGroup_RemoveExtension_Statics::NewProp_NewExtension = { "NewExtension", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioComponentGroup_eventRemoveExtension_Parms, NewExtension), Z_Construct_UClass_UAudioComponentGroupExtension_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponentGroup_RemoveExtension_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponentGroup_RemoveExtension_Statics::NewProp_NewExtension,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponentGroup_RemoveExtension_Statics::Function_MetaDataParams[] = {
		{ "Category", "AudioComponentGroup" },
		{ "ModuleRelativePath", "Public/AudioComponentGroup.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponentGroup_RemoveExtension_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponentGroup, nullptr, "RemoveExtension", nullptr, nullptr, Z_Construct_UFunction_UAudioComponentGroup_RemoveExtension_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponentGroup_RemoveExtension_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioComponentGroup_RemoveExtension_Statics::AudioComponentGroup_eventRemoveExtension_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponentGroup_RemoveExtension_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioComponentGroup_RemoveExtension_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponentGroup_RemoveExtension_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAudioComponentGroup_RemoveExtension_Statics::AudioComponentGroup_eventRemoveExtension_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAudioComponentGroup_RemoveExtension()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioComponentGroup_RemoveExtension_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponentGroup_SetLowPassFilter_Statics
	{
		struct AudioComponentGroup_eventSetLowPassFilter_Parms
		{
			float InFrequency;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InFrequency;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponentGroup_SetLowPassFilter_Statics::NewProp_InFrequency_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioComponentGroup_SetLowPassFilter_Statics::NewProp_InFrequency = { "InFrequency", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioComponentGroup_eventSetLowPassFilter_Parms, InFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponentGroup_SetLowPassFilter_Statics::NewProp_InFrequency_MetaData), Z_Construct_UFunction_UAudioComponentGroup_SetLowPassFilter_Statics::NewProp_InFrequency_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponentGroup_SetLowPassFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponentGroup_SetLowPassFilter_Statics::NewProp_InFrequency,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponentGroup_SetLowPassFilter_Statics::Function_MetaDataParams[] = {
		{ "Category", "AudioComponentGroup" },
		{ "ModuleRelativePath", "Public/AudioComponentGroup.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponentGroup_SetLowPassFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponentGroup, nullptr, "SetLowPassFilter", nullptr, nullptr, Z_Construct_UFunction_UAudioComponentGroup_SetLowPassFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponentGroup_SetLowPassFilter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioComponentGroup_SetLowPassFilter_Statics::AudioComponentGroup_eventSetLowPassFilter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponentGroup_SetLowPassFilter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioComponentGroup_SetLowPassFilter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponentGroup_SetLowPassFilter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAudioComponentGroup_SetLowPassFilter_Statics::AudioComponentGroup_eventSetLowPassFilter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAudioComponentGroup_SetLowPassFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioComponentGroup_SetLowPassFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponentGroup_SetPitchMultiplier_Statics
	{
		struct AudioComponentGroup_eventSetPitchMultiplier_Parms
		{
			float InPitch;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPitch_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InPitch;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponentGroup_SetPitchMultiplier_Statics::NewProp_InPitch_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioComponentGroup_SetPitchMultiplier_Statics::NewProp_InPitch = { "InPitch", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioComponentGroup_eventSetPitchMultiplier_Parms, InPitch), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponentGroup_SetPitchMultiplier_Statics::NewProp_InPitch_MetaData), Z_Construct_UFunction_UAudioComponentGroup_SetPitchMultiplier_Statics::NewProp_InPitch_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponentGroup_SetPitchMultiplier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponentGroup_SetPitchMultiplier_Statics::NewProp_InPitch,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponentGroup_SetPitchMultiplier_Statics::Function_MetaDataParams[] = {
		{ "Category", "AudioComponentGroup" },
		{ "ModuleRelativePath", "Public/AudioComponentGroup.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponentGroup_SetPitchMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponentGroup, nullptr, "SetPitchMultiplier", nullptr, nullptr, Z_Construct_UFunction_UAudioComponentGroup_SetPitchMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponentGroup_SetPitchMultiplier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioComponentGroup_SetPitchMultiplier_Statics::AudioComponentGroup_eventSetPitchMultiplier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponentGroup_SetPitchMultiplier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioComponentGroup_SetPitchMultiplier_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponentGroup_SetPitchMultiplier_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAudioComponentGroup_SetPitchMultiplier_Statics::AudioComponentGroup_eventSetPitchMultiplier_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAudioComponentGroup_SetPitchMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioComponentGroup_SetPitchMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponentGroup_SetVolumeMultiplier_Statics
	{
		struct AudioComponentGroup_eventSetVolumeMultiplier_Parms
		{
			float InVolume;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InVolume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InVolume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponentGroup_SetVolumeMultiplier_Statics::NewProp_InVolume_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioComponentGroup_SetVolumeMultiplier_Statics::NewProp_InVolume = { "InVolume", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioComponentGroup_eventSetVolumeMultiplier_Parms, InVolume), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponentGroup_SetVolumeMultiplier_Statics::NewProp_InVolume_MetaData), Z_Construct_UFunction_UAudioComponentGroup_SetVolumeMultiplier_Statics::NewProp_InVolume_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponentGroup_SetVolumeMultiplier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponentGroup_SetVolumeMultiplier_Statics::NewProp_InVolume,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponentGroup_SetVolumeMultiplier_Statics::Function_MetaDataParams[] = {
		{ "Category", "AudioComponentGroup" },
		{ "ModuleRelativePath", "Public/AudioComponentGroup.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponentGroup_SetVolumeMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponentGroup, nullptr, "SetVolumeMultiplier", nullptr, nullptr, Z_Construct_UFunction_UAudioComponentGroup_SetVolumeMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponentGroup_SetVolumeMultiplier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioComponentGroup_SetVolumeMultiplier_Statics::AudioComponentGroup_eventSetVolumeMultiplier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponentGroup_SetVolumeMultiplier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioComponentGroup_SetVolumeMultiplier_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponentGroup_SetVolumeMultiplier_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAudioComponentGroup_SetVolumeMultiplier_Statics::AudioComponentGroup_eventSetVolumeMultiplier_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAudioComponentGroup_SetVolumeMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioComponentGroup_SetVolumeMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponentGroup_StaticGetOrCreateComponentGroup_Statics
	{
		struct AudioComponentGroup_eventStaticGetOrCreateComponentGroup_Parms
		{
			AActor* Actor;
			UAudioComponentGroup* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioComponentGroup_StaticGetOrCreateComponentGroup_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioComponentGroup_eventStaticGetOrCreateComponentGroup_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponentGroup_StaticGetOrCreateComponentGroup_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioComponentGroup_StaticGetOrCreateComponentGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioComponentGroup_eventStaticGetOrCreateComponentGroup_Parms, ReturnValue), Z_Construct_UClass_UAudioComponentGroup_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponentGroup_StaticGetOrCreateComponentGroup_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UAudioComponentGroup_StaticGetOrCreateComponentGroup_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponentGroup_StaticGetOrCreateComponentGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponentGroup_StaticGetOrCreateComponentGroup_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponentGroup_StaticGetOrCreateComponentGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponentGroup_StaticGetOrCreateComponentGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "AudioComponentGroup" },
		{ "ModuleRelativePath", "Public/AudioComponentGroup.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponentGroup_StaticGetOrCreateComponentGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponentGroup, nullptr, "StaticGetOrCreateComponentGroup", nullptr, nullptr, Z_Construct_UFunction_UAudioComponentGroup_StaticGetOrCreateComponentGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponentGroup_StaticGetOrCreateComponentGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioComponentGroup_StaticGetOrCreateComponentGroup_Statics::AudioComponentGroup_eventStaticGetOrCreateComponentGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponentGroup_StaticGetOrCreateComponentGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioComponentGroup_StaticGetOrCreateComponentGroup_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponentGroup_StaticGetOrCreateComponentGroup_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAudioComponentGroup_StaticGetOrCreateComponentGroup_Statics::AudioComponentGroup_eventStaticGetOrCreateComponentGroup_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAudioComponentGroup_StaticGetOrCreateComponentGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioComponentGroup_StaticGetOrCreateComponentGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponentGroup_StopSound_Statics
	{
		struct AudioComponentGroup_eventStopSound_Parms
		{
			USoundBase* Sound;
			float FadeTime;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FadeTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioComponentGroup_StopSound_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioComponentGroup_eventStopSound_Parms, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponentGroup_StopSound_Statics::NewProp_FadeTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioComponentGroup_StopSound_Statics::NewProp_FadeTime = { "FadeTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioComponentGroup_eventStopSound_Parms, FadeTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponentGroup_StopSound_Statics::NewProp_FadeTime_MetaData), Z_Construct_UFunction_UAudioComponentGroup_StopSound_Statics::NewProp_FadeTime_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponentGroup_StopSound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponentGroup_StopSound_Statics::NewProp_Sound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponentGroup_StopSound_Statics::NewProp_FadeTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponentGroup_StopSound_Statics::Function_MetaDataParams[] = {
		{ "Category", "AudioComponentGroup" },
		{ "Comment", "// Stop all instances of this Sound on any internal or external components\n" },
		{ "CPP_Default_FadeTime", "0.000000" },
		{ "ModuleRelativePath", "Public/AudioComponentGroup.h" },
		{ "ToolTip", "Stop all instances of this Sound on any internal or external components" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponentGroup_StopSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponentGroup, nullptr, "StopSound", nullptr, nullptr, Z_Construct_UFunction_UAudioComponentGroup_StopSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponentGroup_StopSound_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioComponentGroup_StopSound_Statics::AudioComponentGroup_eventStopSound_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponentGroup_StopSound_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioComponentGroup_StopSound_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponentGroup_StopSound_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAudioComponentGroup_StopSound_Statics::AudioComponentGroup_eventStopSound_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAudioComponentGroup_StopSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioComponentGroup_StopSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponentGroup_SubscribeToBool_Statics
	{
		struct AudioComponentGroup_eventSubscribeToBool_Parms
		{
			FName ParamName;
			FScriptDelegate Delegate;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParamName;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponentGroup_SubscribeToBool_Statics::NewProp_ParamName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAudioComponentGroup_SubscribeToBool_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioComponentGroup_eventSubscribeToBool_Parms, ParamName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponentGroup_SubscribeToBool_Statics::NewProp_ParamName_MetaData), Z_Construct_UFunction_UAudioComponentGroup_SubscribeToBool_Statics::NewProp_ParamName_MetaData) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAudioComponentGroup_SubscribeToBool_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioComponentGroup_eventSubscribeToBool_Parms, Delegate), Z_Construct_UDelegateFunction_AudioGameplay_BoolParamCallback__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3471207359
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponentGroup_SubscribeToBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponentGroup_SubscribeToBool_Statics::NewProp_ParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponentGroup_SubscribeToBool_Statics::NewProp_Delegate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponentGroup_SubscribeToBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "AudioComponentGroup" },
		{ "ModuleRelativePath", "Public/AudioComponentGroup.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponentGroup_SubscribeToBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponentGroup, nullptr, "SubscribeToBool", nullptr, nullptr, Z_Construct_UFunction_UAudioComponentGroup_SubscribeToBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponentGroup_SubscribeToBool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioComponentGroup_SubscribeToBool_Statics::AudioComponentGroup_eventSubscribeToBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponentGroup_SubscribeToBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioComponentGroup_SubscribeToBool_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponentGroup_SubscribeToBool_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAudioComponentGroup_SubscribeToBool_Statics::AudioComponentGroup_eventSubscribeToBool_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAudioComponentGroup_SubscribeToBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioComponentGroup_SubscribeToBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponentGroup_SubscribeToEvent_Statics
	{
		struct AudioComponentGroup_eventSubscribeToEvent_Parms
		{
			FName EventName;
			FScriptDelegate Delegate;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_EventName;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponentGroup_SubscribeToEvent_Statics::NewProp_EventName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAudioComponentGroup_SubscribeToEvent_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioComponentGroup_eventSubscribeToEvent_Parms, EventName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponentGroup_SubscribeToEvent_Statics::NewProp_EventName_MetaData), Z_Construct_UFunction_UAudioComponentGroup_SubscribeToEvent_Statics::NewProp_EventName_MetaData) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAudioComponentGroup_SubscribeToEvent_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioComponentGroup_eventSubscribeToEvent_Parms, Delegate), Z_Construct_UDelegateFunction_AudioGameplay_SoundCallback__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 874300505
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponentGroup_SubscribeToEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponentGroup_SubscribeToEvent_Statics::NewProp_EventName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponentGroup_SubscribeToEvent_Statics::NewProp_Delegate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponentGroup_SubscribeToEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "AudioComponentGroup" },
		{ "ModuleRelativePath", "Public/AudioComponentGroup.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponentGroup_SubscribeToEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponentGroup, nullptr, "SubscribeToEvent", nullptr, nullptr, Z_Construct_UFunction_UAudioComponentGroup_SubscribeToEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponentGroup_SubscribeToEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioComponentGroup_SubscribeToEvent_Statics::AudioComponentGroup_eventSubscribeToEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponentGroup_SubscribeToEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioComponentGroup_SubscribeToEvent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponentGroup_SubscribeToEvent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAudioComponentGroup_SubscribeToEvent_Statics::AudioComponentGroup_eventSubscribeToEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAudioComponentGroup_SubscribeToEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioComponentGroup_SubscribeToEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponentGroup_SubscribeToStringParam_Statics
	{
		struct AudioComponentGroup_eventSubscribeToStringParam_Parms
		{
			FName ParamName;
			FScriptDelegate Delegate;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParamName;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponentGroup_SubscribeToStringParam_Statics::NewProp_ParamName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAudioComponentGroup_SubscribeToStringParam_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioComponentGroup_eventSubscribeToStringParam_Parms, ParamName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponentGroup_SubscribeToStringParam_Statics::NewProp_ParamName_MetaData), Z_Construct_UFunction_UAudioComponentGroup_SubscribeToStringParam_Statics::NewProp_ParamName_MetaData) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAudioComponentGroup_SubscribeToStringParam_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioComponentGroup_eventSubscribeToStringParam_Parms, Delegate), Z_Construct_UDelegateFunction_AudioGameplay_StringParamCallback__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2515649838
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponentGroup_SubscribeToStringParam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponentGroup_SubscribeToStringParam_Statics::NewProp_ParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponentGroup_SubscribeToStringParam_Statics::NewProp_Delegate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponentGroup_SubscribeToStringParam_Statics::Function_MetaDataParams[] = {
		{ "Category", "AudioComponentGroup" },
		{ "ModuleRelativePath", "Public/AudioComponentGroup.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponentGroup_SubscribeToStringParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponentGroup, nullptr, "SubscribeToStringParam", nullptr, nullptr, Z_Construct_UFunction_UAudioComponentGroup_SubscribeToStringParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponentGroup_SubscribeToStringParam_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioComponentGroup_SubscribeToStringParam_Statics::AudioComponentGroup_eventSubscribeToStringParam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponentGroup_SubscribeToStringParam_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioComponentGroup_SubscribeToStringParam_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponentGroup_SubscribeToStringParam_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAudioComponentGroup_SubscribeToStringParam_Statics::AudioComponentGroup_eventSubscribeToStringParam_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAudioComponentGroup_SubscribeToStringParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioComponentGroup_SubscribeToStringParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioComponentGroup_UnsubscribeObject_Statics
	{
		struct AudioComponentGroup_eventUnsubscribeObject_Parms
		{
			const UObject* Object;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponentGroup_UnsubscribeObject_Statics::NewProp_Object_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioComponentGroup_UnsubscribeObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioComponentGroup_eventUnsubscribeObject_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponentGroup_UnsubscribeObject_Statics::NewProp_Object_MetaData), Z_Construct_UFunction_UAudioComponentGroup_UnsubscribeObject_Statics::NewProp_Object_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioComponentGroup_UnsubscribeObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioComponentGroup_UnsubscribeObject_Statics::NewProp_Object,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioComponentGroup_UnsubscribeObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "AudioComponentGroup" },
		{ "Comment", "// remove any string, event, and bool subscriptions that are bound to this object\n" },
		{ "ModuleRelativePath", "Public/AudioComponentGroup.h" },
		{ "ToolTip", "remove any string, event, and bool subscriptions that are bound to this object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioComponentGroup_UnsubscribeObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioComponentGroup, nullptr, "UnsubscribeObject", nullptr, nullptr, Z_Construct_UFunction_UAudioComponentGroup_UnsubscribeObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponentGroup_UnsubscribeObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioComponentGroup_UnsubscribeObject_Statics::AudioComponentGroup_eventUnsubscribeObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponentGroup_UnsubscribeObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioComponentGroup_UnsubscribeObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioComponentGroup_UnsubscribeObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAudioComponentGroup_UnsubscribeObject_Statics::AudioComponentGroup_eventUnsubscribeObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAudioComponentGroup_UnsubscribeObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioComponentGroup_UnsubscribeObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioComponentGroup);
	UClass* Z_Construct_UClass_UAudioComponentGroup_NoRegister()
	{
		return UAudioComponentGroup::StaticClass();
	}
	struct Z_Construct_UClass_UAudioComponentGroup_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnStopped_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStopped;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnKilled_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnKilled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnVirtualized_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnVirtualized;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnUnvirtualized_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUnvirtualized;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Components_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Components_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Components;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParamsToSet_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamsToSet_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ParamsToSet;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PersistentParams_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PersistentParams_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PersistentParams;
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_Extensions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Extensions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Extensions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioComponentGroup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioGameplay,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponentGroup_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAudioComponentGroup_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAudioComponentGroup_AddExtension, "AddExtension" }, // 431791166
		{ &Z_Construct_UFunction_UAudioComponentGroup_AddExternalComponent, "AddExternalComponent" }, // 60684317
		{ &Z_Construct_UFunction_UAudioComponentGroup_BroadcastEvent, "BroadcastEvent" }, // 3606497273
		{ &Z_Construct_UFunction_UAudioComponentGroup_BroadcastKill, "BroadcastKill" }, // 4130401692
		{ &Z_Construct_UFunction_UAudioComponentGroup_BroadcastStopAll, "BroadcastStopAll" }, // 1957769708
		{ &Z_Construct_UFunction_UAudioComponentGroup_DisableVirtualization, "DisableVirtualization" }, // 2909134299
		{ &Z_Construct_UFunction_UAudioComponentGroup_EnableVirtualization, "EnableVirtualization" }, // 3189678095
		{ &Z_Construct_UFunction_UAudioComponentGroup_GetBoolParamValue, "GetBoolParamValue" }, // 2810722752
		{ &Z_Construct_UFunction_UAudioComponentGroup_GetFloatParamValue, "GetFloatParamValue" }, // 2284079401
		{ &Z_Construct_UFunction_UAudioComponentGroup_GetStringParamValue, "GetStringParamValue" }, // 723351076
		{ &Z_Construct_UFunction_UAudioComponentGroup_IsPlayingAny, "IsPlayingAny" }, // 1368904126
		{ &Z_Construct_UFunction_UAudioComponentGroup_IsVirtualized, "IsVirtualized" }, // 574846108
		{ &Z_Construct_UFunction_UAudioComponentGroup_RemoveExtension, "RemoveExtension" }, // 2449325577
		{ &Z_Construct_UFunction_UAudioComponentGroup_SetLowPassFilter, "SetLowPassFilter" }, // 99847581
		{ &Z_Construct_UFunction_UAudioComponentGroup_SetPitchMultiplier, "SetPitchMultiplier" }, // 2886610578
		{ &Z_Construct_UFunction_UAudioComponentGroup_SetVolumeMultiplier, "SetVolumeMultiplier" }, // 476947766
		{ &Z_Construct_UFunction_UAudioComponentGroup_StaticGetOrCreateComponentGroup, "StaticGetOrCreateComponentGroup" }, // 3736838740
		{ &Z_Construct_UFunction_UAudioComponentGroup_StopSound, "StopSound" }, // 815643394
		{ &Z_Construct_UFunction_UAudioComponentGroup_SubscribeToBool, "SubscribeToBool" }, // 525021768
		{ &Z_Construct_UFunction_UAudioComponentGroup_SubscribeToEvent, "SubscribeToEvent" }, // 537861114
		{ &Z_Construct_UFunction_UAudioComponentGroup_SubscribeToStringParam, "SubscribeToStringParam" }, // 1911377428
		{ &Z_Construct_UFunction_UAudioComponentGroup_UnsubscribeObject, "UnsubscribeObject" }, // 2218571066
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponentGroup_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponentGroup_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * Automatic Handler for voices and parameters across any number of AudioComponents\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "AudioComponentGroup.h" },
		{ "ModuleRelativePath", "Public/AudioComponentGroup.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "* Automatic Handler for voices and parameters across any number of AudioComponents" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponentGroup_Statics::NewProp_OnStopped_MetaData[] = {
		{ "Comment", "//~ End IAudioParameterControllerInterface interface\n" },
		{ "ModuleRelativePath", "Public/AudioComponentGroup.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAudioComponentGroup_Statics::NewProp_OnStopped = { "OnStopped", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioComponentGroup, OnStopped), Z_Construct_UDelegateFunction_AudioGameplay_SoundGroupChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponentGroup_Statics::NewProp_OnStopped_MetaData), Z_Construct_UClass_UAudioComponentGroup_Statics::NewProp_OnStopped_MetaData) }; // 399269702
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponentGroup_Statics::NewProp_OnKilled_MetaData[] = {
		{ "ModuleRelativePath", "Public/AudioComponentGroup.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAudioComponentGroup_Statics::NewProp_OnKilled = { "OnKilled", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioComponentGroup, OnKilled), Z_Construct_UDelegateFunction_AudioGameplay_SoundGroupChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponentGroup_Statics::NewProp_OnKilled_MetaData), Z_Construct_UClass_UAudioComponentGroup_Statics::NewProp_OnKilled_MetaData) }; // 399269702
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponentGroup_Statics::NewProp_OnVirtualized_MetaData[] = {
		{ "ModuleRelativePath", "Public/AudioComponentGroup.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAudioComponentGroup_Statics::NewProp_OnVirtualized = { "OnVirtualized", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioComponentGroup, OnVirtualized), Z_Construct_UDelegateFunction_AudioGameplay_SoundGroupChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponentGroup_Statics::NewProp_OnVirtualized_MetaData), Z_Construct_UClass_UAudioComponentGroup_Statics::NewProp_OnVirtualized_MetaData) }; // 399269702
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponentGroup_Statics::NewProp_OnUnvirtualized_MetaData[] = {
		{ "ModuleRelativePath", "Public/AudioComponentGroup.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAudioComponentGroup_Statics::NewProp_OnUnvirtualized = { "OnUnvirtualized", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioComponentGroup, OnUnvirtualized), Z_Construct_UDelegateFunction_AudioGameplay_SoundGroupChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponentGroup_Statics::NewProp_OnUnvirtualized_MetaData), Z_Construct_UClass_UAudioComponentGroup_Statics::NewProp_OnUnvirtualized_MetaData) }; // 399269702
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAudioComponentGroup_Statics::NewProp_Components_Inner = { "Components", nullptr, (EPropertyFlags)0x00040000000a0008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponentGroup_Statics::NewProp_Components_MetaData[] = {
		{ "Category", "AudioComponentGroup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AudioComponentGroup.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAudioComponentGroup_Statics::NewProp_Components = { "Components", nullptr, (EPropertyFlags)0x0024088000020009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioComponentGroup, Components), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponentGroup_Statics::NewProp_Components_MetaData), Z_Construct_UClass_UAudioComponentGroup_Statics::NewProp_Components_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioComponentGroup_Statics::NewProp_ParamsToSet_Inner = { "ParamsToSet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAudioParameter, METADATA_PARAMS(0, nullptr) }; // 1058137875
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponentGroup_Statics::NewProp_ParamsToSet_MetaData[] = {
		{ "ModuleRelativePath", "Public/AudioComponentGroup.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAudioComponentGroup_Statics::NewProp_ParamsToSet = { "ParamsToSet", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioComponentGroup, ParamsToSet), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponentGroup_Statics::NewProp_ParamsToSet_MetaData), Z_Construct_UClass_UAudioComponentGroup_Statics::NewProp_ParamsToSet_MetaData) }; // 1058137875
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioComponentGroup_Statics::NewProp_PersistentParams_Inner = { "PersistentParams", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAudioParameter, METADATA_PARAMS(0, nullptr) }; // 1058137875
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponentGroup_Statics::NewProp_PersistentParams_MetaData[] = {
		{ "Category", "AudioComponentGroup" },
		{ "ModuleRelativePath", "Public/AudioComponentGroup.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAudioComponentGroup_Statics::NewProp_PersistentParams = { "PersistentParams", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioComponentGroup, PersistentParams), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponentGroup_Statics::NewProp_PersistentParams_MetaData), Z_Construct_UClass_UAudioComponentGroup_Statics::NewProp_PersistentParams_MetaData) }; // 1058137875
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UAudioComponentGroup_Statics::NewProp_Extensions_Inner = { "Extensions", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAudioComponentGroupExtension_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioComponentGroup_Statics::NewProp_Extensions_MetaData[] = {
		{ "ModuleRelativePath", "Public/AudioComponentGroup.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAudioComponentGroup_Statics::NewProp_Extensions = { "Extensions", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioComponentGroup, Extensions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponentGroup_Statics::NewProp_Extensions_MetaData), Z_Construct_UClass_UAudioComponentGroup_Statics::NewProp_Extensions_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAudioComponentGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponentGroup_Statics::NewProp_OnStopped,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponentGroup_Statics::NewProp_OnKilled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponentGroup_Statics::NewProp_OnVirtualized,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponentGroup_Statics::NewProp_OnUnvirtualized,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponentGroup_Statics::NewProp_Components_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponentGroup_Statics::NewProp_Components,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponentGroup_Statics::NewProp_ParamsToSet_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponentGroup_Statics::NewProp_ParamsToSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponentGroup_Statics::NewProp_PersistentParams_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponentGroup_Statics::NewProp_PersistentParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponentGroup_Statics::NewProp_Extensions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioComponentGroup_Statics::NewProp_Extensions,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAudioComponentGroup_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAudioParameterControllerInterface_NoRegister, (int32)VTABLE_OFFSET(UAudioComponentGroup, IAudioParameterControllerInterface), false },  // 2237366973
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponentGroup_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioComponentGroup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioComponentGroup>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioComponentGroup_Statics::ClassParams = {
		&UAudioComponentGroup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAudioComponentGroup_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponentGroup_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponentGroup_Statics::Class_MetaDataParams), Z_Construct_UClass_UAudioComponentGroup_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioComponentGroup_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAudioComponentGroup()
	{
		if (!Z_Registration_Info_UClass_UAudioComponentGroup.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioComponentGroup.OuterSingleton, Z_Construct_UClass_UAudioComponentGroup_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAudioComponentGroup.OuterSingleton;
	}
	template<> AUDIOGAMEPLAY_API UClass* StaticClass<UAudioComponentGroup>()
	{
		return UAudioComponentGroup::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioComponentGroup);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioComponentGroup_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioComponentGroup_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAudioComponentGroup, UAudioComponentGroup::StaticClass, TEXT("UAudioComponentGroup"), &Z_Registration_Info_UClass_UAudioComponentGroup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioComponentGroup), 2980389066U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioComponentGroup_h_3924156012(TEXT("/Script/AudioGameplay"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioComponentGroup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioComponentGroup_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
