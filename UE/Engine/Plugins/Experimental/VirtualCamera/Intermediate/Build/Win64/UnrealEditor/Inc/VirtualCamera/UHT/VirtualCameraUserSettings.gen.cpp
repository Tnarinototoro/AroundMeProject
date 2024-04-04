// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VirtualCameraUserSettings.h"
#include "../../Source/Runtime/Engine/Classes/GameFramework/PlayerInput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVirtualCameraUserSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionKeyMapping();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputAxisKeyMapping();
	UPackage* Z_Construct_UPackage__Script_VirtualCamera();
	VIRTUALCAMERA_API UClass* Z_Construct_UClass_UVirtualCameraUserSettings();
	VIRTUALCAMERA_API UClass* Z_Construct_UClass_UVirtualCameraUserSettings_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UVirtualCameraUserSettings::execGetAxisMappingsByName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InAxisName);
		P_GET_TARRAY_REF(FInputAxisKeyMapping,Z_Param_Out_OutMappings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAxisMappingsByName(Z_Param_InAxisName,Z_Param_Out_OutMappings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVirtualCameraUserSettings::execGetActionMappingsByName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InActionName);
		P_GET_TARRAY_REF(FInputActionKeyMapping,Z_Param_Out_OutMappings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetActionMappingsByName(Z_Param_InActionName,Z_Param_Out_OutMappings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVirtualCameraUserSettings::execInjectGamepadKeybinds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InjectGamepadKeybinds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVirtualCameraUserSettings::execSetTeleportOnStart)
	{
		P_GET_UBOOL(Z_Param_bInTeleportOnStart);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTeleportOnStart(Z_Param_bInTeleportOnStart);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVirtualCameraUserSettings::execGetTeleportOnStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetTeleportOnStart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVirtualCameraUserSettings::execSetShouldDisplayFilmLeader)
	{
		P_GET_UBOOL(Z_Param_bInDisplayFilmLeader);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShouldDisplayFilmLeader(Z_Param_bInDisplayFilmLeader);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVirtualCameraUserSettings::execGetShouldDisplayFilmLeader)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetShouldDisplayFilmLeader();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVirtualCameraUserSettings::execSetSavedVirtualCameraFilmbackPresetName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InFilmback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSavedVirtualCameraFilmbackPresetName(Z_Param_InFilmback);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVirtualCameraUserSettings::execGetSavedVirtualCameraFilmbackPresetName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetSavedVirtualCameraFilmbackPresetName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVirtualCameraUserSettings::execSetShouldOverrideCameraSettingsOnTeleport)
	{
		P_GET_UBOOL(Z_Param_bInOverrideCameraSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShouldOverrideCameraSettingsOnTeleport(Z_Param_bInOverrideCameraSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVirtualCameraUserSettings::execGetShouldOverrideCameraSettingsOnTeleport)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetShouldOverrideCameraSettingsOnTeleport();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVirtualCameraUserSettings::execSetIsMapGrayscle)
	{
		P_GET_UBOOL(Z_Param_bInIsMapGrayscle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsMapGrayscle(Z_Param_bInIsMapGrayscle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVirtualCameraUserSettings::execIsMapGrayscle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMapGrayscle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVirtualCameraUserSettings::execSetMaxJoysticksSpeed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InMaxJoysticksSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxJoysticksSpeed(Z_Param_InMaxJoysticksSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVirtualCameraUserSettings::execGetMaxJoysticksSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxJoysticksSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVirtualCameraUserSettings::execSetJoysticksSpeed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InJoysticksSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetJoysticksSpeed(Z_Param_InJoysticksSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVirtualCameraUserSettings::execGetJoysticksSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetJoysticksSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVirtualCameraUserSettings::execSetFocusInterpSpeed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InFocusInterpSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFocusInterpSpeed(Z_Param_InFocusInterpSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVirtualCameraUserSettings::execGetFocusInterpSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetFocusInterpSpeed();
		P_NATIVE_END;
	}
	void UVirtualCameraUserSettings::StaticRegisterNativesUVirtualCameraUserSettings()
	{
		UClass* Class = UVirtualCameraUserSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActionMappingsByName", &UVirtualCameraUserSettings::execGetActionMappingsByName },
			{ "GetAxisMappingsByName", &UVirtualCameraUserSettings::execGetAxisMappingsByName },
			{ "GetFocusInterpSpeed", &UVirtualCameraUserSettings::execGetFocusInterpSpeed },
			{ "GetJoysticksSpeed", &UVirtualCameraUserSettings::execGetJoysticksSpeed },
			{ "GetMaxJoysticksSpeed", &UVirtualCameraUserSettings::execGetMaxJoysticksSpeed },
			{ "GetSavedVirtualCameraFilmbackPresetName", &UVirtualCameraUserSettings::execGetSavedVirtualCameraFilmbackPresetName },
			{ "GetShouldDisplayFilmLeader", &UVirtualCameraUserSettings::execGetShouldDisplayFilmLeader },
			{ "GetShouldOverrideCameraSettingsOnTeleport", &UVirtualCameraUserSettings::execGetShouldOverrideCameraSettingsOnTeleport },
			{ "GetTeleportOnStart", &UVirtualCameraUserSettings::execGetTeleportOnStart },
			{ "InjectGamepadKeybinds", &UVirtualCameraUserSettings::execInjectGamepadKeybinds },
			{ "IsMapGrayscle", &UVirtualCameraUserSettings::execIsMapGrayscle },
			{ "SetFocusInterpSpeed", &UVirtualCameraUserSettings::execSetFocusInterpSpeed },
			{ "SetIsMapGrayscle", &UVirtualCameraUserSettings::execSetIsMapGrayscle },
			{ "SetJoysticksSpeed", &UVirtualCameraUserSettings::execSetJoysticksSpeed },
			{ "SetMaxJoysticksSpeed", &UVirtualCameraUserSettings::execSetMaxJoysticksSpeed },
			{ "SetSavedVirtualCameraFilmbackPresetName", &UVirtualCameraUserSettings::execSetSavedVirtualCameraFilmbackPresetName },
			{ "SetShouldDisplayFilmLeader", &UVirtualCameraUserSettings::execSetShouldDisplayFilmLeader },
			{ "SetShouldOverrideCameraSettingsOnTeleport", &UVirtualCameraUserSettings::execSetShouldOverrideCameraSettingsOnTeleport },
			{ "SetTeleportOnStart", &UVirtualCameraUserSettings::execSetTeleportOnStart },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVirtualCameraUserSettings_GetActionMappingsByName_Statics
	{
		struct VirtualCameraUserSettings_eventGetActionMappingsByName_Parms
		{
			FName InActionName;
			TArray<FInputActionKeyMapping> OutMappings;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InActionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InActionName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutMappings_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutMappings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraUserSettings_GetActionMappingsByName_Statics::NewProp_InActionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVirtualCameraUserSettings_GetActionMappingsByName_Statics::NewProp_InActionName = { "InActionName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VirtualCameraUserSettings_eventGetActionMappingsByName_Parms, InActionName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraUserSettings_GetActionMappingsByName_Statics::NewProp_InActionName_MetaData), Z_Construct_UFunction_UVirtualCameraUserSettings_GetActionMappingsByName_Statics::NewProp_InActionName_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVirtualCameraUserSettings_GetActionMappingsByName_Statics::NewProp_OutMappings_Inner = { "OutMappings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputActionKeyMapping, METADATA_PARAMS(0, nullptr) }; // 2286118914
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVirtualCameraUserSettings_GetActionMappingsByName_Statics::NewProp_OutMappings = { "OutMappings", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VirtualCameraUserSettings_eventGetActionMappingsByName_Parms, OutMappings), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2286118914
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCameraUserSettings_GetActionMappingsByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraUserSettings_GetActionMappingsByName_Statics::NewProp_InActionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraUserSettings_GetActionMappingsByName_Statics::NewProp_OutMappings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraUserSettings_GetActionMappingsByName_Statics::NewProp_OutMappings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraUserSettings_GetActionMappingsByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Retrieve all VirtualCamera action mappings by a certain name. */" },
		{ "ModuleRelativePath", "Public/VirtualCameraUserSettings.h" },
		{ "ToolTip", "Retrieve all VirtualCamera action mappings by a certain name." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraUserSettings_GetActionMappingsByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraUserSettings, nullptr, "GetActionMappingsByName", nullptr, nullptr, Z_Construct_UFunction_UVirtualCameraUserSettings_GetActionMappingsByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraUserSettings_GetActionMappingsByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVirtualCameraUserSettings_GetActionMappingsByName_Statics::VirtualCameraUserSettings_eventGetActionMappingsByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraUserSettings_GetActionMappingsByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVirtualCameraUserSettings_GetActionMappingsByName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraUserSettings_GetActionMappingsByName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVirtualCameraUserSettings_GetActionMappingsByName_Statics::VirtualCameraUserSettings_eventGetActionMappingsByName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVirtualCameraUserSettings_GetActionMappingsByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraUserSettings_GetActionMappingsByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCameraUserSettings_GetAxisMappingsByName_Statics
	{
		struct VirtualCameraUserSettings_eventGetAxisMappingsByName_Parms
		{
			FName InAxisName;
			TArray<FInputAxisKeyMapping> OutMappings;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAxisName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InAxisName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutMappings_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutMappings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraUserSettings_GetAxisMappingsByName_Statics::NewProp_InAxisName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVirtualCameraUserSettings_GetAxisMappingsByName_Statics::NewProp_InAxisName = { "InAxisName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VirtualCameraUserSettings_eventGetAxisMappingsByName_Parms, InAxisName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraUserSettings_GetAxisMappingsByName_Statics::NewProp_InAxisName_MetaData), Z_Construct_UFunction_UVirtualCameraUserSettings_GetAxisMappingsByName_Statics::NewProp_InAxisName_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVirtualCameraUserSettings_GetAxisMappingsByName_Statics::NewProp_OutMappings_Inner = { "OutMappings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputAxisKeyMapping, METADATA_PARAMS(0, nullptr) }; // 2462345991
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVirtualCameraUserSettings_GetAxisMappingsByName_Statics::NewProp_OutMappings = { "OutMappings", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VirtualCameraUserSettings_eventGetAxisMappingsByName_Parms, OutMappings), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2462345991
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCameraUserSettings_GetAxisMappingsByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraUserSettings_GetAxisMappingsByName_Statics::NewProp_InAxisName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraUserSettings_GetAxisMappingsByName_Statics::NewProp_OutMappings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraUserSettings_GetAxisMappingsByName_Statics::NewProp_OutMappings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraUserSettings_GetAxisMappingsByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Retrieve all VirtualCamera axis mappings by a certain name. */" },
		{ "ModuleRelativePath", "Public/VirtualCameraUserSettings.h" },
		{ "ToolTip", "Retrieve all VirtualCamera axis mappings by a certain name." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraUserSettings_GetAxisMappingsByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraUserSettings, nullptr, "GetAxisMappingsByName", nullptr, nullptr, Z_Construct_UFunction_UVirtualCameraUserSettings_GetAxisMappingsByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraUserSettings_GetAxisMappingsByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVirtualCameraUserSettings_GetAxisMappingsByName_Statics::VirtualCameraUserSettings_eventGetAxisMappingsByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraUserSettings_GetAxisMappingsByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVirtualCameraUserSettings_GetAxisMappingsByName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraUserSettings_GetAxisMappingsByName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVirtualCameraUserSettings_GetAxisMappingsByName_Statics::VirtualCameraUserSettings_eventGetAxisMappingsByName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVirtualCameraUserSettings_GetAxisMappingsByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraUserSettings_GetAxisMappingsByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCameraUserSettings_GetFocusInterpSpeed_Statics
	{
		struct VirtualCameraUserSettings_eventGetFocusInterpSpeed_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVirtualCameraUserSettings_GetFocusInterpSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VirtualCameraUserSettings_eventGetFocusInterpSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCameraUserSettings_GetFocusInterpSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraUserSettings_GetFocusInterpSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraUserSettings_GetFocusInterpSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/** Get FocusInterpSpeed variable */" },
		{ "ModuleRelativePath", "Public/VirtualCameraUserSettings.h" },
		{ "ToolTip", "Get FocusInterpSpeed variable" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraUserSettings_GetFocusInterpSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraUserSettings, nullptr, "GetFocusInterpSpeed", nullptr, nullptr, Z_Construct_UFunction_UVirtualCameraUserSettings_GetFocusInterpSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraUserSettings_GetFocusInterpSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVirtualCameraUserSettings_GetFocusInterpSpeed_Statics::VirtualCameraUserSettings_eventGetFocusInterpSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraUserSettings_GetFocusInterpSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVirtualCameraUserSettings_GetFocusInterpSpeed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraUserSettings_GetFocusInterpSpeed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVirtualCameraUserSettings_GetFocusInterpSpeed_Statics::VirtualCameraUserSettings_eventGetFocusInterpSpeed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVirtualCameraUserSettings_GetFocusInterpSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraUserSettings_GetFocusInterpSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCameraUserSettings_GetJoysticksSpeed_Statics
	{
		struct VirtualCameraUserSettings_eventGetJoysticksSpeed_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVirtualCameraUserSettings_GetJoysticksSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VirtualCameraUserSettings_eventGetJoysticksSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCameraUserSettings_GetJoysticksSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraUserSettings_GetJoysticksSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraUserSettings_GetJoysticksSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/** Get JoysticksSpeed variable */" },
		{ "ModuleRelativePath", "Public/VirtualCameraUserSettings.h" },
		{ "ToolTip", "Get JoysticksSpeed variable" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraUserSettings_GetJoysticksSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraUserSettings, nullptr, "GetJoysticksSpeed", nullptr, nullptr, Z_Construct_UFunction_UVirtualCameraUserSettings_GetJoysticksSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraUserSettings_GetJoysticksSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVirtualCameraUserSettings_GetJoysticksSpeed_Statics::VirtualCameraUserSettings_eventGetJoysticksSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraUserSettings_GetJoysticksSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVirtualCameraUserSettings_GetJoysticksSpeed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraUserSettings_GetJoysticksSpeed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVirtualCameraUserSettings_GetJoysticksSpeed_Statics::VirtualCameraUserSettings_eventGetJoysticksSpeed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVirtualCameraUserSettings_GetJoysticksSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraUserSettings_GetJoysticksSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCameraUserSettings_GetMaxJoysticksSpeed_Statics
	{
		struct VirtualCameraUserSettings_eventGetMaxJoysticksSpeed_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVirtualCameraUserSettings_GetMaxJoysticksSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VirtualCameraUserSettings_eventGetMaxJoysticksSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCameraUserSettings_GetMaxJoysticksSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraUserSettings_GetMaxJoysticksSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraUserSettings_GetMaxJoysticksSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/** Get MaxJoysticksSpeed variable */" },
		{ "ModuleRelativePath", "Public/VirtualCameraUserSettings.h" },
		{ "ToolTip", "Get MaxJoysticksSpeed variable" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraUserSettings_GetMaxJoysticksSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraUserSettings, nullptr, "GetMaxJoysticksSpeed", nullptr, nullptr, Z_Construct_UFunction_UVirtualCameraUserSettings_GetMaxJoysticksSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraUserSettings_GetMaxJoysticksSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVirtualCameraUserSettings_GetMaxJoysticksSpeed_Statics::VirtualCameraUserSettings_eventGetMaxJoysticksSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraUserSettings_GetMaxJoysticksSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVirtualCameraUserSettings_GetMaxJoysticksSpeed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraUserSettings_GetMaxJoysticksSpeed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVirtualCameraUserSettings_GetMaxJoysticksSpeed_Statics::VirtualCameraUserSettings_eventGetMaxJoysticksSpeed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVirtualCameraUserSettings_GetMaxJoysticksSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraUserSettings_GetMaxJoysticksSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCameraUserSettings_GetSavedVirtualCameraFilmbackPresetName_Statics
	{
		struct VirtualCameraUserSettings_eventGetSavedVirtualCameraFilmbackPresetName_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVirtualCameraUserSettings_GetSavedVirtualCameraFilmbackPresetName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VirtualCameraUserSettings_eventGetSavedVirtualCameraFilmbackPresetName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCameraUserSettings_GetSavedVirtualCameraFilmbackPresetName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraUserSettings_GetSavedVirtualCameraFilmbackPresetName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraUserSettings_GetSavedVirtualCameraFilmbackPresetName_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/** Get VirtualCameraFilmback variable */" },
		{ "ModuleRelativePath", "Public/VirtualCameraUserSettings.h" },
		{ "ToolTip", "Get VirtualCameraFilmback variable" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraUserSettings_GetSavedVirtualCameraFilmbackPresetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraUserSettings, nullptr, "GetSavedVirtualCameraFilmbackPresetName", nullptr, nullptr, Z_Construct_UFunction_UVirtualCameraUserSettings_GetSavedVirtualCameraFilmbackPresetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraUserSettings_GetSavedVirtualCameraFilmbackPresetName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVirtualCameraUserSettings_GetSavedVirtualCameraFilmbackPresetName_Statics::VirtualCameraUserSettings_eventGetSavedVirtualCameraFilmbackPresetName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraUserSettings_GetSavedVirtualCameraFilmbackPresetName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVirtualCameraUserSettings_GetSavedVirtualCameraFilmbackPresetName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraUserSettings_GetSavedVirtualCameraFilmbackPresetName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVirtualCameraUserSettings_GetSavedVirtualCameraFilmbackPresetName_Statics::VirtualCameraUserSettings_eventGetSavedVirtualCameraFilmbackPresetName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVirtualCameraUserSettings_GetSavedVirtualCameraFilmbackPresetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraUserSettings_GetSavedVirtualCameraFilmbackPresetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCameraUserSettings_GetShouldDisplayFilmLeader_Statics
	{
		struct VirtualCameraUserSettings_eventGetShouldDisplayFilmLeader_Parms
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
	void Z_Construct_UFunction_UVirtualCameraUserSettings_GetShouldDisplayFilmLeader_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VirtualCameraUserSettings_eventGetShouldDisplayFilmLeader_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVirtualCameraUserSettings_GetShouldDisplayFilmLeader_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VirtualCameraUserSettings_eventGetShouldDisplayFilmLeader_Parms), &Z_Construct_UFunction_UVirtualCameraUserSettings_GetShouldDisplayFilmLeader_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCameraUserSettings_GetShouldDisplayFilmLeader_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraUserSettings_GetShouldDisplayFilmLeader_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraUserSettings_GetShouldDisplayFilmLeader_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/** Get bDisplayFilmLeader variable */" },
		{ "ModuleRelativePath", "Public/VirtualCameraUserSettings.h" },
		{ "ToolTip", "Get bDisplayFilmLeader variable" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraUserSettings_GetShouldDisplayFilmLeader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraUserSettings, nullptr, "GetShouldDisplayFilmLeader", nullptr, nullptr, Z_Construct_UFunction_UVirtualCameraUserSettings_GetShouldDisplayFilmLeader_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraUserSettings_GetShouldDisplayFilmLeader_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVirtualCameraUserSettings_GetShouldDisplayFilmLeader_Statics::VirtualCameraUserSettings_eventGetShouldDisplayFilmLeader_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraUserSettings_GetShouldDisplayFilmLeader_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVirtualCameraUserSettings_GetShouldDisplayFilmLeader_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraUserSettings_GetShouldDisplayFilmLeader_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVirtualCameraUserSettings_GetShouldDisplayFilmLeader_Statics::VirtualCameraUserSettings_eventGetShouldDisplayFilmLeader_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVirtualCameraUserSettings_GetShouldDisplayFilmLeader()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraUserSettings_GetShouldDisplayFilmLeader_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCameraUserSettings_GetShouldOverrideCameraSettingsOnTeleport_Statics
	{
		struct VirtualCameraUserSettings_eventGetShouldOverrideCameraSettingsOnTeleport_Parms
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
	void Z_Construct_UFunction_UVirtualCameraUserSettings_GetShouldOverrideCameraSettingsOnTeleport_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VirtualCameraUserSettings_eventGetShouldOverrideCameraSettingsOnTeleport_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVirtualCameraUserSettings_GetShouldOverrideCameraSettingsOnTeleport_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VirtualCameraUserSettings_eventGetShouldOverrideCameraSettingsOnTeleport_Parms), &Z_Construct_UFunction_UVirtualCameraUserSettings_GetShouldOverrideCameraSettingsOnTeleport_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCameraUserSettings_GetShouldOverrideCameraSettingsOnTeleport_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraUserSettings_GetShouldOverrideCameraSettingsOnTeleport_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraUserSettings_GetShouldOverrideCameraSettingsOnTeleport_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/** Get bOverrideCameraSettingsOnTeleportToScreenshot variable */" },
		{ "ModuleRelativePath", "Public/VirtualCameraUserSettings.h" },
		{ "ToolTip", "Get bOverrideCameraSettingsOnTeleportToScreenshot variable" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraUserSettings_GetShouldOverrideCameraSettingsOnTeleport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraUserSettings, nullptr, "GetShouldOverrideCameraSettingsOnTeleport", nullptr, nullptr, Z_Construct_UFunction_UVirtualCameraUserSettings_GetShouldOverrideCameraSettingsOnTeleport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraUserSettings_GetShouldOverrideCameraSettingsOnTeleport_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVirtualCameraUserSettings_GetShouldOverrideCameraSettingsOnTeleport_Statics::VirtualCameraUserSettings_eventGetShouldOverrideCameraSettingsOnTeleport_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraUserSettings_GetShouldOverrideCameraSettingsOnTeleport_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVirtualCameraUserSettings_GetShouldOverrideCameraSettingsOnTeleport_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraUserSettings_GetShouldOverrideCameraSettingsOnTeleport_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVirtualCameraUserSettings_GetShouldOverrideCameraSettingsOnTeleport_Statics::VirtualCameraUserSettings_eventGetShouldOverrideCameraSettingsOnTeleport_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVirtualCameraUserSettings_GetShouldOverrideCameraSettingsOnTeleport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraUserSettings_GetShouldOverrideCameraSettingsOnTeleport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCameraUserSettings_GetTeleportOnStart_Statics
	{
		struct VirtualCameraUserSettings_eventGetTeleportOnStart_Parms
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
	void Z_Construct_UFunction_UVirtualCameraUserSettings_GetTeleportOnStart_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VirtualCameraUserSettings_eventGetTeleportOnStart_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVirtualCameraUserSettings_GetTeleportOnStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VirtualCameraUserSettings_eventGetTeleportOnStart_Parms), &Z_Construct_UFunction_UVirtualCameraUserSettings_GetTeleportOnStart_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCameraUserSettings_GetTeleportOnStart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraUserSettings_GetTeleportOnStart_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraUserSettings_GetTeleportOnStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/** Get bTeleportOnStart variable */" },
		{ "ModuleRelativePath", "Public/VirtualCameraUserSettings.h" },
		{ "ToolTip", "Get bTeleportOnStart variable" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraUserSettings_GetTeleportOnStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraUserSettings, nullptr, "GetTeleportOnStart", nullptr, nullptr, Z_Construct_UFunction_UVirtualCameraUserSettings_GetTeleportOnStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraUserSettings_GetTeleportOnStart_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVirtualCameraUserSettings_GetTeleportOnStart_Statics::VirtualCameraUserSettings_eventGetTeleportOnStart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraUserSettings_GetTeleportOnStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVirtualCameraUserSettings_GetTeleportOnStart_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraUserSettings_GetTeleportOnStart_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVirtualCameraUserSettings_GetTeleportOnStart_Statics::VirtualCameraUserSettings_eventGetTeleportOnStart_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVirtualCameraUserSettings_GetTeleportOnStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraUserSettings_GetTeleportOnStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCameraUserSettings_InjectGamepadKeybinds_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraUserSettings_InjectGamepadKeybinds_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/** Fills the Axis/Action mappings with assosiated gamepad bindings */" },
		{ "ModuleRelativePath", "Public/VirtualCameraUserSettings.h" },
		{ "ToolTip", "Fills the Axis/Action mappings with assosiated gamepad bindings" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraUserSettings_InjectGamepadKeybinds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraUserSettings, nullptr, "InjectGamepadKeybinds", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraUserSettings_InjectGamepadKeybinds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVirtualCameraUserSettings_InjectGamepadKeybinds_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UVirtualCameraUserSettings_InjectGamepadKeybinds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraUserSettings_InjectGamepadKeybinds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCameraUserSettings_IsMapGrayscle_Statics
	{
		struct VirtualCameraUserSettings_eventIsMapGrayscle_Parms
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
	void Z_Construct_UFunction_UVirtualCameraUserSettings_IsMapGrayscle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VirtualCameraUserSettings_eventIsMapGrayscle_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVirtualCameraUserSettings_IsMapGrayscle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VirtualCameraUserSettings_eventIsMapGrayscle_Parms), &Z_Construct_UFunction_UVirtualCameraUserSettings_IsMapGrayscle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCameraUserSettings_IsMapGrayscle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraUserSettings_IsMapGrayscle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraUserSettings_IsMapGrayscle_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/** Get bIsMapGrayscale variable */" },
		{ "ModuleRelativePath", "Public/VirtualCameraUserSettings.h" },
		{ "ToolTip", "Get bIsMapGrayscale variable" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraUserSettings_IsMapGrayscle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraUserSettings, nullptr, "IsMapGrayscle", nullptr, nullptr, Z_Construct_UFunction_UVirtualCameraUserSettings_IsMapGrayscle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraUserSettings_IsMapGrayscle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVirtualCameraUserSettings_IsMapGrayscle_Statics::VirtualCameraUserSettings_eventIsMapGrayscle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraUserSettings_IsMapGrayscle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVirtualCameraUserSettings_IsMapGrayscle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraUserSettings_IsMapGrayscle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVirtualCameraUserSettings_IsMapGrayscle_Statics::VirtualCameraUserSettings_eventIsMapGrayscle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVirtualCameraUserSettings_IsMapGrayscle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraUserSettings_IsMapGrayscle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCameraUserSettings_SetFocusInterpSpeed_Statics
	{
		struct VirtualCameraUserSettings_eventSetFocusInterpSpeed_Parms
		{
			float InFocusInterpSpeed;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InFocusInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InFocusInterpSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraUserSettings_SetFocusInterpSpeed_Statics::NewProp_InFocusInterpSpeed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVirtualCameraUserSettings_SetFocusInterpSpeed_Statics::NewProp_InFocusInterpSpeed = { "InFocusInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VirtualCameraUserSettings_eventSetFocusInterpSpeed_Parms, InFocusInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraUserSettings_SetFocusInterpSpeed_Statics::NewProp_InFocusInterpSpeed_MetaData), Z_Construct_UFunction_UVirtualCameraUserSettings_SetFocusInterpSpeed_Statics::NewProp_InFocusInterpSpeed_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCameraUserSettings_SetFocusInterpSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraUserSettings_SetFocusInterpSpeed_Statics::NewProp_InFocusInterpSpeed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraUserSettings_SetFocusInterpSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/** Set FocusInterpSpeed variable */" },
		{ "ModuleRelativePath", "Public/VirtualCameraUserSettings.h" },
		{ "ToolTip", "Set FocusInterpSpeed variable" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraUserSettings_SetFocusInterpSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraUserSettings, nullptr, "SetFocusInterpSpeed", nullptr, nullptr, Z_Construct_UFunction_UVirtualCameraUserSettings_SetFocusInterpSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraUserSettings_SetFocusInterpSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVirtualCameraUserSettings_SetFocusInterpSpeed_Statics::VirtualCameraUserSettings_eventSetFocusInterpSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraUserSettings_SetFocusInterpSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVirtualCameraUserSettings_SetFocusInterpSpeed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraUserSettings_SetFocusInterpSpeed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVirtualCameraUserSettings_SetFocusInterpSpeed_Statics::VirtualCameraUserSettings_eventSetFocusInterpSpeed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVirtualCameraUserSettings_SetFocusInterpSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraUserSettings_SetFocusInterpSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCameraUserSettings_SetIsMapGrayscle_Statics
	{
		struct VirtualCameraUserSettings_eventSetIsMapGrayscle_Parms
		{
			bool bInIsMapGrayscle;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInIsMapGrayscle_MetaData[];
#endif
		static void NewProp_bInIsMapGrayscle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInIsMapGrayscle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraUserSettings_SetIsMapGrayscle_Statics::NewProp_bInIsMapGrayscle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UVirtualCameraUserSettings_SetIsMapGrayscle_Statics::NewProp_bInIsMapGrayscle_SetBit(void* Obj)
	{
		((VirtualCameraUserSettings_eventSetIsMapGrayscle_Parms*)Obj)->bInIsMapGrayscle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVirtualCameraUserSettings_SetIsMapGrayscle_Statics::NewProp_bInIsMapGrayscle = { "bInIsMapGrayscle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VirtualCameraUserSettings_eventSetIsMapGrayscle_Parms), &Z_Construct_UFunction_UVirtualCameraUserSettings_SetIsMapGrayscle_Statics::NewProp_bInIsMapGrayscle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraUserSettings_SetIsMapGrayscle_Statics::NewProp_bInIsMapGrayscle_MetaData), Z_Construct_UFunction_UVirtualCameraUserSettings_SetIsMapGrayscle_Statics::NewProp_bInIsMapGrayscle_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCameraUserSettings_SetIsMapGrayscle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraUserSettings_SetIsMapGrayscle_Statics::NewProp_bInIsMapGrayscle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraUserSettings_SetIsMapGrayscle_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/** Set bIsMapGrayscale variable */" },
		{ "ModuleRelativePath", "Public/VirtualCameraUserSettings.h" },
		{ "ToolTip", "Set bIsMapGrayscale variable" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraUserSettings_SetIsMapGrayscle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraUserSettings, nullptr, "SetIsMapGrayscle", nullptr, nullptr, Z_Construct_UFunction_UVirtualCameraUserSettings_SetIsMapGrayscle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraUserSettings_SetIsMapGrayscle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVirtualCameraUserSettings_SetIsMapGrayscle_Statics::VirtualCameraUserSettings_eventSetIsMapGrayscle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraUserSettings_SetIsMapGrayscle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVirtualCameraUserSettings_SetIsMapGrayscle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraUserSettings_SetIsMapGrayscle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVirtualCameraUserSettings_SetIsMapGrayscle_Statics::VirtualCameraUserSettings_eventSetIsMapGrayscle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVirtualCameraUserSettings_SetIsMapGrayscle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraUserSettings_SetIsMapGrayscle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCameraUserSettings_SetJoysticksSpeed_Statics
	{
		struct VirtualCameraUserSettings_eventSetJoysticksSpeed_Parms
		{
			float InJoysticksSpeed;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InJoysticksSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InJoysticksSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraUserSettings_SetJoysticksSpeed_Statics::NewProp_InJoysticksSpeed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVirtualCameraUserSettings_SetJoysticksSpeed_Statics::NewProp_InJoysticksSpeed = { "InJoysticksSpeed", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VirtualCameraUserSettings_eventSetJoysticksSpeed_Parms, InJoysticksSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraUserSettings_SetJoysticksSpeed_Statics::NewProp_InJoysticksSpeed_MetaData), Z_Construct_UFunction_UVirtualCameraUserSettings_SetJoysticksSpeed_Statics::NewProp_InJoysticksSpeed_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCameraUserSettings_SetJoysticksSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraUserSettings_SetJoysticksSpeed_Statics::NewProp_InJoysticksSpeed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraUserSettings_SetJoysticksSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/** Set JoysticksSpeed variable */" },
		{ "ModuleRelativePath", "Public/VirtualCameraUserSettings.h" },
		{ "ToolTip", "Set JoysticksSpeed variable" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraUserSettings_SetJoysticksSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraUserSettings, nullptr, "SetJoysticksSpeed", nullptr, nullptr, Z_Construct_UFunction_UVirtualCameraUserSettings_SetJoysticksSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraUserSettings_SetJoysticksSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVirtualCameraUserSettings_SetJoysticksSpeed_Statics::VirtualCameraUserSettings_eventSetJoysticksSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraUserSettings_SetJoysticksSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVirtualCameraUserSettings_SetJoysticksSpeed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraUserSettings_SetJoysticksSpeed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVirtualCameraUserSettings_SetJoysticksSpeed_Statics::VirtualCameraUserSettings_eventSetJoysticksSpeed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVirtualCameraUserSettings_SetJoysticksSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraUserSettings_SetJoysticksSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCameraUserSettings_SetMaxJoysticksSpeed_Statics
	{
		struct VirtualCameraUserSettings_eventSetMaxJoysticksSpeed_Parms
		{
			float InMaxJoysticksSpeed;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InMaxJoysticksSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InMaxJoysticksSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraUserSettings_SetMaxJoysticksSpeed_Statics::NewProp_InMaxJoysticksSpeed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVirtualCameraUserSettings_SetMaxJoysticksSpeed_Statics::NewProp_InMaxJoysticksSpeed = { "InMaxJoysticksSpeed", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VirtualCameraUserSettings_eventSetMaxJoysticksSpeed_Parms, InMaxJoysticksSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraUserSettings_SetMaxJoysticksSpeed_Statics::NewProp_InMaxJoysticksSpeed_MetaData), Z_Construct_UFunction_UVirtualCameraUserSettings_SetMaxJoysticksSpeed_Statics::NewProp_InMaxJoysticksSpeed_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCameraUserSettings_SetMaxJoysticksSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraUserSettings_SetMaxJoysticksSpeed_Statics::NewProp_InMaxJoysticksSpeed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraUserSettings_SetMaxJoysticksSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/** Set MaxJoysticksSpeed variable */" },
		{ "ModuleRelativePath", "Public/VirtualCameraUserSettings.h" },
		{ "ToolTip", "Set MaxJoysticksSpeed variable" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraUserSettings_SetMaxJoysticksSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraUserSettings, nullptr, "SetMaxJoysticksSpeed", nullptr, nullptr, Z_Construct_UFunction_UVirtualCameraUserSettings_SetMaxJoysticksSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraUserSettings_SetMaxJoysticksSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVirtualCameraUserSettings_SetMaxJoysticksSpeed_Statics::VirtualCameraUserSettings_eventSetMaxJoysticksSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraUserSettings_SetMaxJoysticksSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVirtualCameraUserSettings_SetMaxJoysticksSpeed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraUserSettings_SetMaxJoysticksSpeed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVirtualCameraUserSettings_SetMaxJoysticksSpeed_Statics::VirtualCameraUserSettings_eventSetMaxJoysticksSpeed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVirtualCameraUserSettings_SetMaxJoysticksSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraUserSettings_SetMaxJoysticksSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCameraUserSettings_SetSavedVirtualCameraFilmbackPresetName_Statics
	{
		struct VirtualCameraUserSettings_eventSetSavedVirtualCameraFilmbackPresetName_Parms
		{
			FString InFilmback;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InFilmback_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InFilmback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraUserSettings_SetSavedVirtualCameraFilmbackPresetName_Statics::NewProp_InFilmback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVirtualCameraUserSettings_SetSavedVirtualCameraFilmbackPresetName_Statics::NewProp_InFilmback = { "InFilmback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VirtualCameraUserSettings_eventSetSavedVirtualCameraFilmbackPresetName_Parms, InFilmback), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraUserSettings_SetSavedVirtualCameraFilmbackPresetName_Statics::NewProp_InFilmback_MetaData), Z_Construct_UFunction_UVirtualCameraUserSettings_SetSavedVirtualCameraFilmbackPresetName_Statics::NewProp_InFilmback_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCameraUserSettings_SetSavedVirtualCameraFilmbackPresetName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraUserSettings_SetSavedVirtualCameraFilmbackPresetName_Statics::NewProp_InFilmback,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraUserSettings_SetSavedVirtualCameraFilmbackPresetName_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/** Set VirtualCameraFilmback variable */" },
		{ "ModuleRelativePath", "Public/VirtualCameraUserSettings.h" },
		{ "ToolTip", "Set VirtualCameraFilmback variable" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraUserSettings_SetSavedVirtualCameraFilmbackPresetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraUserSettings, nullptr, "SetSavedVirtualCameraFilmbackPresetName", nullptr, nullptr, Z_Construct_UFunction_UVirtualCameraUserSettings_SetSavedVirtualCameraFilmbackPresetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraUserSettings_SetSavedVirtualCameraFilmbackPresetName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVirtualCameraUserSettings_SetSavedVirtualCameraFilmbackPresetName_Statics::VirtualCameraUserSettings_eventSetSavedVirtualCameraFilmbackPresetName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraUserSettings_SetSavedVirtualCameraFilmbackPresetName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVirtualCameraUserSettings_SetSavedVirtualCameraFilmbackPresetName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraUserSettings_SetSavedVirtualCameraFilmbackPresetName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVirtualCameraUserSettings_SetSavedVirtualCameraFilmbackPresetName_Statics::VirtualCameraUserSettings_eventSetSavedVirtualCameraFilmbackPresetName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVirtualCameraUserSettings_SetSavedVirtualCameraFilmbackPresetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraUserSettings_SetSavedVirtualCameraFilmbackPresetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCameraUserSettings_SetShouldDisplayFilmLeader_Statics
	{
		struct VirtualCameraUserSettings_eventSetShouldDisplayFilmLeader_Parms
		{
			bool bInDisplayFilmLeader;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInDisplayFilmLeader_MetaData[];
#endif
		static void NewProp_bInDisplayFilmLeader_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInDisplayFilmLeader;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraUserSettings_SetShouldDisplayFilmLeader_Statics::NewProp_bInDisplayFilmLeader_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UVirtualCameraUserSettings_SetShouldDisplayFilmLeader_Statics::NewProp_bInDisplayFilmLeader_SetBit(void* Obj)
	{
		((VirtualCameraUserSettings_eventSetShouldDisplayFilmLeader_Parms*)Obj)->bInDisplayFilmLeader = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVirtualCameraUserSettings_SetShouldDisplayFilmLeader_Statics::NewProp_bInDisplayFilmLeader = { "bInDisplayFilmLeader", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VirtualCameraUserSettings_eventSetShouldDisplayFilmLeader_Parms), &Z_Construct_UFunction_UVirtualCameraUserSettings_SetShouldDisplayFilmLeader_Statics::NewProp_bInDisplayFilmLeader_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraUserSettings_SetShouldDisplayFilmLeader_Statics::NewProp_bInDisplayFilmLeader_MetaData), Z_Construct_UFunction_UVirtualCameraUserSettings_SetShouldDisplayFilmLeader_Statics::NewProp_bInDisplayFilmLeader_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCameraUserSettings_SetShouldDisplayFilmLeader_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraUserSettings_SetShouldDisplayFilmLeader_Statics::NewProp_bInDisplayFilmLeader,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraUserSettings_SetShouldDisplayFilmLeader_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/** Set bDisplayFilmLeader variable */" },
		{ "ModuleRelativePath", "Public/VirtualCameraUserSettings.h" },
		{ "ToolTip", "Set bDisplayFilmLeader variable" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraUserSettings_SetShouldDisplayFilmLeader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraUserSettings, nullptr, "SetShouldDisplayFilmLeader", nullptr, nullptr, Z_Construct_UFunction_UVirtualCameraUserSettings_SetShouldDisplayFilmLeader_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraUserSettings_SetShouldDisplayFilmLeader_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVirtualCameraUserSettings_SetShouldDisplayFilmLeader_Statics::VirtualCameraUserSettings_eventSetShouldDisplayFilmLeader_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraUserSettings_SetShouldDisplayFilmLeader_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVirtualCameraUserSettings_SetShouldDisplayFilmLeader_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraUserSettings_SetShouldDisplayFilmLeader_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVirtualCameraUserSettings_SetShouldDisplayFilmLeader_Statics::VirtualCameraUserSettings_eventSetShouldDisplayFilmLeader_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVirtualCameraUserSettings_SetShouldDisplayFilmLeader()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraUserSettings_SetShouldDisplayFilmLeader_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCameraUserSettings_SetShouldOverrideCameraSettingsOnTeleport_Statics
	{
		struct VirtualCameraUserSettings_eventSetShouldOverrideCameraSettingsOnTeleport_Parms
		{
			bool bInOverrideCameraSettings;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInOverrideCameraSettings_MetaData[];
#endif
		static void NewProp_bInOverrideCameraSettings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInOverrideCameraSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraUserSettings_SetShouldOverrideCameraSettingsOnTeleport_Statics::NewProp_bInOverrideCameraSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UVirtualCameraUserSettings_SetShouldOverrideCameraSettingsOnTeleport_Statics::NewProp_bInOverrideCameraSettings_SetBit(void* Obj)
	{
		((VirtualCameraUserSettings_eventSetShouldOverrideCameraSettingsOnTeleport_Parms*)Obj)->bInOverrideCameraSettings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVirtualCameraUserSettings_SetShouldOverrideCameraSettingsOnTeleport_Statics::NewProp_bInOverrideCameraSettings = { "bInOverrideCameraSettings", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VirtualCameraUserSettings_eventSetShouldOverrideCameraSettingsOnTeleport_Parms), &Z_Construct_UFunction_UVirtualCameraUserSettings_SetShouldOverrideCameraSettingsOnTeleport_Statics::NewProp_bInOverrideCameraSettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraUserSettings_SetShouldOverrideCameraSettingsOnTeleport_Statics::NewProp_bInOverrideCameraSettings_MetaData), Z_Construct_UFunction_UVirtualCameraUserSettings_SetShouldOverrideCameraSettingsOnTeleport_Statics::NewProp_bInOverrideCameraSettings_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCameraUserSettings_SetShouldOverrideCameraSettingsOnTeleport_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraUserSettings_SetShouldOverrideCameraSettingsOnTeleport_Statics::NewProp_bInOverrideCameraSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraUserSettings_SetShouldOverrideCameraSettingsOnTeleport_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/** Set bOverrideCameraSettingsOnTeleportToScreenshot variable */" },
		{ "ModuleRelativePath", "Public/VirtualCameraUserSettings.h" },
		{ "ToolTip", "Set bOverrideCameraSettingsOnTeleportToScreenshot variable" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraUserSettings_SetShouldOverrideCameraSettingsOnTeleport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraUserSettings, nullptr, "SetShouldOverrideCameraSettingsOnTeleport", nullptr, nullptr, Z_Construct_UFunction_UVirtualCameraUserSettings_SetShouldOverrideCameraSettingsOnTeleport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraUserSettings_SetShouldOverrideCameraSettingsOnTeleport_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVirtualCameraUserSettings_SetShouldOverrideCameraSettingsOnTeleport_Statics::VirtualCameraUserSettings_eventSetShouldOverrideCameraSettingsOnTeleport_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraUserSettings_SetShouldOverrideCameraSettingsOnTeleport_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVirtualCameraUserSettings_SetShouldOverrideCameraSettingsOnTeleport_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraUserSettings_SetShouldOverrideCameraSettingsOnTeleport_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVirtualCameraUserSettings_SetShouldOverrideCameraSettingsOnTeleport_Statics::VirtualCameraUserSettings_eventSetShouldOverrideCameraSettingsOnTeleport_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVirtualCameraUserSettings_SetShouldOverrideCameraSettingsOnTeleport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraUserSettings_SetShouldOverrideCameraSettingsOnTeleport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCameraUserSettings_SetTeleportOnStart_Statics
	{
		struct VirtualCameraUserSettings_eventSetTeleportOnStart_Parms
		{
			bool bInTeleportOnStart;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInTeleportOnStart_MetaData[];
#endif
		static void NewProp_bInTeleportOnStart_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInTeleportOnStart;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraUserSettings_SetTeleportOnStart_Statics::NewProp_bInTeleportOnStart_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UVirtualCameraUserSettings_SetTeleportOnStart_Statics::NewProp_bInTeleportOnStart_SetBit(void* Obj)
	{
		((VirtualCameraUserSettings_eventSetTeleportOnStart_Parms*)Obj)->bInTeleportOnStart = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVirtualCameraUserSettings_SetTeleportOnStart_Statics::NewProp_bInTeleportOnStart = { "bInTeleportOnStart", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VirtualCameraUserSettings_eventSetTeleportOnStart_Parms), &Z_Construct_UFunction_UVirtualCameraUserSettings_SetTeleportOnStart_Statics::NewProp_bInTeleportOnStart_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraUserSettings_SetTeleportOnStart_Statics::NewProp_bInTeleportOnStart_MetaData), Z_Construct_UFunction_UVirtualCameraUserSettings_SetTeleportOnStart_Statics::NewProp_bInTeleportOnStart_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCameraUserSettings_SetTeleportOnStart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraUserSettings_SetTeleportOnStart_Statics::NewProp_bInTeleportOnStart,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraUserSettings_SetTeleportOnStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/** Set bTeleportOnStart variable */" },
		{ "ModuleRelativePath", "Public/VirtualCameraUserSettings.h" },
		{ "ToolTip", "Set bTeleportOnStart variable" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraUserSettings_SetTeleportOnStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraUserSettings, nullptr, "SetTeleportOnStart", nullptr, nullptr, Z_Construct_UFunction_UVirtualCameraUserSettings_SetTeleportOnStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraUserSettings_SetTeleportOnStart_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVirtualCameraUserSettings_SetTeleportOnStart_Statics::VirtualCameraUserSettings_eventSetTeleportOnStart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraUserSettings_SetTeleportOnStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVirtualCameraUserSettings_SetTeleportOnStart_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraUserSettings_SetTeleportOnStart_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVirtualCameraUserSettings_SetTeleportOnStart_Statics::VirtualCameraUserSettings_eventSetTeleportOnStart_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVirtualCameraUserSettings_SetTeleportOnStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraUserSettings_SetTeleportOnStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVirtualCameraUserSettings);
	UClass* Z_Construct_UClass_UVirtualCameraUserSettings_NoRegister()
	{
		return UVirtualCameraUserSettings::StaticClass();
	}
	struct Z_Construct_UClass_UVirtualCameraUserSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FocusInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FocusInterpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JoysticksSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_JoysticksSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxJoysticksSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxJoysticksSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsMapGrayscale_MetaData[];
#endif
		static void NewProp_bIsMapGrayscale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMapGrayscale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideCameraSettingsOnTeleportToScreenshot_MetaData[];
#endif
		static void NewProp_bOverrideCameraSettingsOnTeleportToScreenshot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideCameraSettingsOnTeleportToScreenshot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VirtualCameraFilmback_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_VirtualCameraFilmback;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayFilmLeader_MetaData[];
#endif
		static void NewProp_bDisplayFilmLeader_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayFilmLeader;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTeleportOnStart_MetaData[];
#endif
		static void NewProp_bTeleportOnStart_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTeleportOnStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultVCamClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_DefaultVCamClass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AxisMappings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AxisMappings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AxisMappings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActionMappings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionMappings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActionMappings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVirtualCameraUserSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VirtualCamera,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualCameraUserSettings_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UVirtualCameraUserSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVirtualCameraUserSettings_GetActionMappingsByName, "GetActionMappingsByName" }, // 1305638286
		{ &Z_Construct_UFunction_UVirtualCameraUserSettings_GetAxisMappingsByName, "GetAxisMappingsByName" }, // 2204241324
		{ &Z_Construct_UFunction_UVirtualCameraUserSettings_GetFocusInterpSpeed, "GetFocusInterpSpeed" }, // 1477439418
		{ &Z_Construct_UFunction_UVirtualCameraUserSettings_GetJoysticksSpeed, "GetJoysticksSpeed" }, // 1645429015
		{ &Z_Construct_UFunction_UVirtualCameraUserSettings_GetMaxJoysticksSpeed, "GetMaxJoysticksSpeed" }, // 2592693978
		{ &Z_Construct_UFunction_UVirtualCameraUserSettings_GetSavedVirtualCameraFilmbackPresetName, "GetSavedVirtualCameraFilmbackPresetName" }, // 524817769
		{ &Z_Construct_UFunction_UVirtualCameraUserSettings_GetShouldDisplayFilmLeader, "GetShouldDisplayFilmLeader" }, // 398027675
		{ &Z_Construct_UFunction_UVirtualCameraUserSettings_GetShouldOverrideCameraSettingsOnTeleport, "GetShouldOverrideCameraSettingsOnTeleport" }, // 1885383809
		{ &Z_Construct_UFunction_UVirtualCameraUserSettings_GetTeleportOnStart, "GetTeleportOnStart" }, // 1080758663
		{ &Z_Construct_UFunction_UVirtualCameraUserSettings_InjectGamepadKeybinds, "InjectGamepadKeybinds" }, // 162679567
		{ &Z_Construct_UFunction_UVirtualCameraUserSettings_IsMapGrayscle, "IsMapGrayscle" }, // 2619331447
		{ &Z_Construct_UFunction_UVirtualCameraUserSettings_SetFocusInterpSpeed, "SetFocusInterpSpeed" }, // 2868944003
		{ &Z_Construct_UFunction_UVirtualCameraUserSettings_SetIsMapGrayscle, "SetIsMapGrayscle" }, // 1994105560
		{ &Z_Construct_UFunction_UVirtualCameraUserSettings_SetJoysticksSpeed, "SetJoysticksSpeed" }, // 1438361090
		{ &Z_Construct_UFunction_UVirtualCameraUserSettings_SetMaxJoysticksSpeed, "SetMaxJoysticksSpeed" }, // 2462092130
		{ &Z_Construct_UFunction_UVirtualCameraUserSettings_SetSavedVirtualCameraFilmbackPresetName, "SetSavedVirtualCameraFilmbackPresetName" }, // 322186356
		{ &Z_Construct_UFunction_UVirtualCameraUserSettings_SetShouldDisplayFilmLeader, "SetShouldDisplayFilmLeader" }, // 2203113359
		{ &Z_Construct_UFunction_UVirtualCameraUserSettings_SetShouldOverrideCameraSettingsOnTeleport, "SetShouldOverrideCameraSettingsOnTeleport" }, // 635851615
		{ &Z_Construct_UFunction_UVirtualCameraUserSettings_SetTeleportOnStart, "SetTeleportOnStart" }, // 485454483
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualCameraUserSettings_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualCameraUserSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Virtual Camera User Settings\n */" },
		{ "IncludePath", "VirtualCameraUserSettings.h" },
		{ "ModuleRelativePath", "Public/VirtualCameraUserSettings.h" },
		{ "ToolTip", "Virtual Camera User Settings" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualCameraUserSettings_Statics::NewProp_FocusInterpSpeed_MetaData[] = {
		{ "Category", "VirtualCamera" },
		{ "ClampMax", "50.0" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/** Controls interpolation speed when smoothing when changing focus distance. This is used to set the value of FocusSmoothingInterpSpeed in the Virtual camera CineCamera component */" },
		{ "DisplayName", "Focus Interpolation Speed" },
		{ "ModuleRelativePath", "Public/VirtualCameraUserSettings.h" },
		{ "ToolTip", "Controls interpolation speed when smoothing when changing focus distance. This is used to set the value of FocusSmoothingInterpSpeed in the Virtual camera CineCamera component" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVirtualCameraUserSettings_Statics::NewProp_FocusInterpSpeed = { "FocusInterpSpeed", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVirtualCameraUserSettings, FocusInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualCameraUserSettings_Statics::NewProp_FocusInterpSpeed_MetaData), Z_Construct_UClass_UVirtualCameraUserSettings_Statics::NewProp_FocusInterpSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualCameraUserSettings_Statics::NewProp_JoysticksSpeed_MetaData[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/** Controls how fast the camera moves when using joysticks */" },
		{ "DisplayName", "Joysticks Speed" },
		{ "ModuleRelativePath", "Public/VirtualCameraUserSettings.h" },
		{ "ToolTip", "Controls how fast the camera moves when using joysticks" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVirtualCameraUserSettings_Statics::NewProp_JoysticksSpeed = { "JoysticksSpeed", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVirtualCameraUserSettings, JoysticksSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualCameraUserSettings_Statics::NewProp_JoysticksSpeed_MetaData), Z_Construct_UClass_UVirtualCameraUserSettings_Statics::NewProp_JoysticksSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualCameraUserSettings_Statics::NewProp_MaxJoysticksSpeed_MetaData[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/** Sets the maximum possible joystick speed */" },
		{ "DisplayName", "Max Joysticks Speed" },
		{ "ModuleRelativePath", "Public/VirtualCameraUserSettings.h" },
		{ "ToolTip", "Sets the maximum possible joystick speed" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVirtualCameraUserSettings_Statics::NewProp_MaxJoysticksSpeed = { "MaxJoysticksSpeed", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVirtualCameraUserSettings, MaxJoysticksSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualCameraUserSettings_Statics::NewProp_MaxJoysticksSpeed_MetaData), Z_Construct_UClass_UVirtualCameraUserSettings_Statics::NewProp_MaxJoysticksSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualCameraUserSettings_Statics::NewProp_bIsMapGrayscale_MetaData[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/** Whether the map is displayed using grayscale or full color */" },
		{ "DisplayName", "Display Map In Grayscale" },
		{ "ModuleRelativePath", "Public/VirtualCameraUserSettings.h" },
		{ "ToolTip", "Whether the map is displayed using grayscale or full color" },
	};
#endif
	void Z_Construct_UClass_UVirtualCameraUserSettings_Statics::NewProp_bIsMapGrayscale_SetBit(void* Obj)
	{
		((UVirtualCameraUserSettings*)Obj)->bIsMapGrayscale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVirtualCameraUserSettings_Statics::NewProp_bIsMapGrayscale = { "bIsMapGrayscale", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVirtualCameraUserSettings), &Z_Construct_UClass_UVirtualCameraUserSettings_Statics::NewProp_bIsMapGrayscale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualCameraUserSettings_Statics::NewProp_bIsMapGrayscale_MetaData), Z_Construct_UClass_UVirtualCameraUserSettings_Statics::NewProp_bIsMapGrayscale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualCameraUserSettings_Statics::NewProp_bOverrideCameraSettingsOnTeleportToScreenshot_MetaData[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/** Whether to change camera lens and fstop when teleporting to a screenshot to those with which the screenshot was taken */" },
		{ "DisplayName", "Override Camera Settings On Teleporting To Screenshot" },
		{ "ModuleRelativePath", "Public/VirtualCameraUserSettings.h" },
		{ "ToolTip", "Whether to change camera lens and fstop when teleporting to a screenshot to those with which the screenshot was taken" },
	};
#endif
	void Z_Construct_UClass_UVirtualCameraUserSettings_Statics::NewProp_bOverrideCameraSettingsOnTeleportToScreenshot_SetBit(void* Obj)
	{
		((UVirtualCameraUserSettings*)Obj)->bOverrideCameraSettingsOnTeleportToScreenshot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVirtualCameraUserSettings_Statics::NewProp_bOverrideCameraSettingsOnTeleportToScreenshot = { "bOverrideCameraSettingsOnTeleportToScreenshot", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVirtualCameraUserSettings), &Z_Construct_UClass_UVirtualCameraUserSettings_Statics::NewProp_bOverrideCameraSettingsOnTeleportToScreenshot_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualCameraUserSettings_Statics::NewProp_bOverrideCameraSettingsOnTeleportToScreenshot_MetaData), Z_Construct_UClass_UVirtualCameraUserSettings_Statics::NewProp_bOverrideCameraSettingsOnTeleportToScreenshot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualCameraUserSettings_Statics::NewProp_VirtualCameraFilmback_MetaData[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/** Stores the filmback preset name selected by the user */" },
		{ "DisplayName", "Virtual Camera Filmback" },
		{ "ModuleRelativePath", "Public/VirtualCameraUserSettings.h" },
		{ "ToolTip", "Stores the filmback preset name selected by the user" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVirtualCameraUserSettings_Statics::NewProp_VirtualCameraFilmback = { "VirtualCameraFilmback", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVirtualCameraUserSettings, VirtualCameraFilmback), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualCameraUserSettings_Statics::NewProp_VirtualCameraFilmback_MetaData), Z_Construct_UClass_UVirtualCameraUserSettings_Statics::NewProp_VirtualCameraFilmback_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualCameraUserSettings_Statics::NewProp_bDisplayFilmLeader_MetaData[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/** Whether to display film leader when recording a take */" },
		{ "DisplayName", "Display Film Leader" },
		{ "ModuleRelativePath", "Public/VirtualCameraUserSettings.h" },
		{ "ToolTip", "Whether to display film leader when recording a take" },
	};
#endif
	void Z_Construct_UClass_UVirtualCameraUserSettings_Statics::NewProp_bDisplayFilmLeader_SetBit(void* Obj)
	{
		((UVirtualCameraUserSettings*)Obj)->bDisplayFilmLeader = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVirtualCameraUserSettings_Statics::NewProp_bDisplayFilmLeader = { "bDisplayFilmLeader", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVirtualCameraUserSettings), &Z_Construct_UClass_UVirtualCameraUserSettings_Statics::NewProp_bDisplayFilmLeader_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualCameraUserSettings_Statics::NewProp_bDisplayFilmLeader_MetaData), Z_Construct_UClass_UVirtualCameraUserSettings_Statics::NewProp_bDisplayFilmLeader_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualCameraUserSettings_Statics::NewProp_bTeleportOnStart_MetaData[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/** Whether to teleport to the home bookmark when VCam starts */" },
		{ "DisplayName", "Teleport To Home On Start" },
		{ "ModuleRelativePath", "Public/VirtualCameraUserSettings.h" },
		{ "ToolTip", "Whether to teleport to the home bookmark when VCam starts" },
	};
#endif
	void Z_Construct_UClass_UVirtualCameraUserSettings_Statics::NewProp_bTeleportOnStart_SetBit(void* Obj)
	{
		((UVirtualCameraUserSettings*)Obj)->bTeleportOnStart = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVirtualCameraUserSettings_Statics::NewProp_bTeleportOnStart = { "bTeleportOnStart", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVirtualCameraUserSettings), &Z_Construct_UClass_UVirtualCameraUserSettings_Statics::NewProp_bTeleportOnStart_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualCameraUserSettings_Statics::NewProp_bTeleportOnStart_MetaData), Z_Construct_UClass_UVirtualCameraUserSettings_Statics::NewProp_bTeleportOnStart_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualCameraUserSettings_Statics::NewProp_DefaultVCamClass_MetaData[] = {
		{ "Category", "VirtualCamera|Presets" },
		{ "Comment", "/** Default Vcam Class for Vcam Operator Panel */" },
		{ "ModuleRelativePath", "Public/VirtualCameraUserSettings.h" },
		{ "ToolTip", "Default Vcam Class for Vcam Operator Panel" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UVirtualCameraUserSettings_Statics::NewProp_DefaultVCamClass = { "DefaultVCamClass", nullptr, (EPropertyFlags)0x0014000000004005, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVirtualCameraUserSettings, DefaultVCamClass), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualCameraUserSettings_Statics::NewProp_DefaultVCamClass_MetaData), Z_Construct_UClass_UVirtualCameraUserSettings_Statics::NewProp_DefaultVCamClass_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVirtualCameraUserSettings_Statics::NewProp_AxisMappings_Inner = { "AxisMappings", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputAxisKeyMapping, METADATA_PARAMS(0, nullptr) }; // 2462345991
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualCameraUserSettings_Statics::NewProp_AxisMappings_MetaData[] = {
		{ "Category", "VirtualCamera" },
		{ "DisplayName", "VirtualCamera Axis Mappings" },
		{ "ModuleRelativePath", "Public/VirtualCameraUserSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVirtualCameraUserSettings_Statics::NewProp_AxisMappings = { "AxisMappings", nullptr, (EPropertyFlags)0x0010000000004004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVirtualCameraUserSettings, AxisMappings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualCameraUserSettings_Statics::NewProp_AxisMappings_MetaData), Z_Construct_UClass_UVirtualCameraUserSettings_Statics::NewProp_AxisMappings_MetaData) }; // 2462345991
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVirtualCameraUserSettings_Statics::NewProp_ActionMappings_Inner = { "ActionMappings", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputActionKeyMapping, METADATA_PARAMS(0, nullptr) }; // 2286118914
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualCameraUserSettings_Statics::NewProp_ActionMappings_MetaData[] = {
		{ "Category", "VirtualCamera" },
		{ "DisplayName", "VirtualCamera Action Mappings" },
		{ "ModuleRelativePath", "Public/VirtualCameraUserSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVirtualCameraUserSettings_Statics::NewProp_ActionMappings = { "ActionMappings", nullptr, (EPropertyFlags)0x0010000000004004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVirtualCameraUserSettings, ActionMappings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualCameraUserSettings_Statics::NewProp_ActionMappings_MetaData), Z_Construct_UClass_UVirtualCameraUserSettings_Statics::NewProp_ActionMappings_MetaData) }; // 2286118914
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVirtualCameraUserSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualCameraUserSettings_Statics::NewProp_FocusInterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualCameraUserSettings_Statics::NewProp_JoysticksSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualCameraUserSettings_Statics::NewProp_MaxJoysticksSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualCameraUserSettings_Statics::NewProp_bIsMapGrayscale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualCameraUserSettings_Statics::NewProp_bOverrideCameraSettingsOnTeleportToScreenshot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualCameraUserSettings_Statics::NewProp_VirtualCameraFilmback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualCameraUserSettings_Statics::NewProp_bDisplayFilmLeader,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualCameraUserSettings_Statics::NewProp_bTeleportOnStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualCameraUserSettings_Statics::NewProp_DefaultVCamClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualCameraUserSettings_Statics::NewProp_AxisMappings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualCameraUserSettings_Statics::NewProp_AxisMappings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualCameraUserSettings_Statics::NewProp_ActionMappings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualCameraUserSettings_Statics::NewProp_ActionMappings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVirtualCameraUserSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVirtualCameraUserSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVirtualCameraUserSettings_Statics::ClassParams = {
		&UVirtualCameraUserSettings::StaticClass,
		"VirtualCamera",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVirtualCameraUserSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualCameraUserSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualCameraUserSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UVirtualCameraUserSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualCameraUserSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UVirtualCameraUserSettings()
	{
		if (!Z_Registration_Info_UClass_UVirtualCameraUserSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVirtualCameraUserSettings.OuterSingleton, Z_Construct_UClass_UVirtualCameraUserSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVirtualCameraUserSettings.OuterSingleton;
	}
	template<> VIRTUALCAMERA_API UClass* StaticClass<UVirtualCameraUserSettings>()
	{
		return UVirtualCameraUserSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVirtualCameraUserSettings);
	UVirtualCameraUserSettings::~UVirtualCameraUserSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_VirtualCameraUserSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_VirtualCameraUserSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVirtualCameraUserSettings, UVirtualCameraUserSettings::StaticClass, TEXT("UVirtualCameraUserSettings"), &Z_Registration_Info_UClass_UVirtualCameraUserSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVirtualCameraUserSettings), 1536416703U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_VirtualCameraUserSettings_h_372500808(TEXT("/Script/VirtualCamera"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_VirtualCameraUserSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_VirtualCameraUserSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
