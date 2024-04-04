// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Input/VCamInputDeviceConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVCamInputDeviceConfig() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_VCamCore();
	VCAMCORE_API UEnum* Z_Construct_UEnum_VCamCore_EVCamInputLoggingMode();
	VCAMCORE_API UEnum* Z_Construct_UEnum_VCamCore_EVCamInputMode();
	VCAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FVCamInputDeviceConfig();
	VCAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FVCamInputDeviceID();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVCamInputLoggingMode;
	static UEnum* EVCamInputLoggingMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVCamInputLoggingMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVCamInputLoggingMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VCamCore_EVCamInputLoggingMode, (UObject*)Z_Construct_UPackage__Script_VCamCore(), TEXT("EVCamInputLoggingMode"));
		}
		return Z_Registration_Info_UEnum_EVCamInputLoggingMode.OuterSingleton;
	}
	template<> VCAMCORE_API UEnum* StaticEnum<EVCamInputLoggingMode>()
	{
		return EVCamInputLoggingMode_StaticEnum();
	}
	struct Z_Construct_UEnum_VCamCore_EVCamInputLoggingMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VCamCore_EVCamInputLoggingMode_Statics::Enumerators[] = {
		{ "EVCamInputLoggingMode::None", (int64)EVCamInputLoggingMode::None },
		{ "EVCamInputLoggingMode::OnlyConsumable", (int64)EVCamInputLoggingMode::OnlyConsumable },
		{ "EVCamInputLoggingMode::OnlyGamepad", (int64)EVCamInputLoggingMode::OnlyGamepad },
		{ "EVCamInputLoggingMode::All", (int64)EVCamInputLoggingMode::All },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VCamCore_EVCamInputLoggingMode_Statics::Enum_MetaDataParams[] = {
		{ "All.Comment", "/** Log all input, regardless whether it is passed down to input actions or not (i.e. that passed filtering conditions). */" },
		{ "All.Name", "EVCamInputLoggingMode::All" },
		{ "All.ToolTip", "Log all input, regardless whether it is passed down to input actions or not (i.e. that passed filtering conditions)." },
		{ "ModuleRelativePath", "Public/Input/VCamInputDeviceConfig.h" },
		{ "None.Comment", "/** No logging */" },
		{ "None.Name", "EVCamInputLoggingMode::None" },
		{ "None.ToolTip", "No logging" },
		{ "OnlyConsumable.Comment", "/** Log only input that are passed down to the input actions (i.e. that passed filtering conditions) */" },
		{ "OnlyConsumable.Name", "EVCamInputLoggingMode::OnlyConsumable" },
		{ "OnlyConsumable.ToolTip", "Log only input that are passed down to the input actions (i.e. that passed filtering conditions)" },
		{ "OnlyGamepad.Comment", "/** Log all gamepad input regardless whether it is passed down to input actions or not (i.e. that passed filtering conditions) */" },
		{ "OnlyGamepad.Name", "EVCamInputLoggingMode::OnlyGamepad" },
		{ "OnlyGamepad.ToolTip", "Log all gamepad input regardless whether it is passed down to input actions or not (i.e. that passed filtering conditions)" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VCamCore_EVCamInputLoggingMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VCamCore,
		nullptr,
		"EVCamInputLoggingMode",
		"EVCamInputLoggingMode",
		Z_Construct_UEnum_VCamCore_EVCamInputLoggingMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VCamCore_EVCamInputLoggingMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VCamCore_EVCamInputLoggingMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VCamCore_EVCamInputLoggingMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_VCamCore_EVCamInputLoggingMode()
	{
		if (!Z_Registration_Info_UEnum_EVCamInputLoggingMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVCamInputLoggingMode.InnerSingleton, Z_Construct_UEnum_VCamCore_EVCamInputLoggingMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVCamInputLoggingMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVCamInputMode;
	static UEnum* EVCamInputMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVCamInputMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVCamInputMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VCamCore_EVCamInputMode, (UObject*)Z_Construct_UPackage__Script_VCamCore(), TEXT("EVCamInputMode"));
		}
		return Z_Registration_Info_UEnum_EVCamInputMode.OuterSingleton;
	}
	template<> VCAMCORE_API UEnum* StaticEnum<EVCamInputMode>()
	{
		return EVCamInputMode_StaticEnum();
	}
	struct Z_Construct_UEnum_VCamCore_EVCamInputMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VCamCore_EVCamInputMode_Statics::Enumerators[] = {
		{ "EVCamInputMode::ConsumeIfUsed", (int64)EVCamInputMode::ConsumeIfUsed },
		{ "EVCamInputMode::ConsumeDevice", (int64)EVCamInputMode::ConsumeDevice },
		{ "EVCamInputMode::DoNotConsume", (int64)EVCamInputMode::DoNotConsume },
		{ "EVCamInputMode::Ignore", (int64)EVCamInputMode::Ignore },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VCamCore_EVCamInputMode_Statics::Enum_MetaDataParams[] = {
		{ "ConsumeDevice.Comment", "/**\n\x09 * Input is passed to VCam input actions.\n\x09 * \n\x09 * For gamepads, input is always consumed even if no input action used it.\n\x09 * For keyboards, input is consumed if it was used by an input action (useful to continue to let the editor receive input).\n\x09 */" },
		{ "ConsumeDevice.Name", "EVCamInputMode::ConsumeDevice" },
		{ "ConsumeDevice.ToolTip", "Input is passed to VCam input actions.\n\nFor gamepads, input is always consumed even if no input action used it.\nFor keyboards, input is consumed if it was used by an input action (useful to continue to let the editor receive input)." },
		{ "ConsumeIfUsed.Comment", "/**\n\x09 * Input is passed to VCam input actions.\n\x09 * Input is consumed if the input action was configured to consume input. Otherwise it is passed down the engine's input stack.\n\x09 */" },
		{ "ConsumeIfUsed.Name", "EVCamInputMode::ConsumeIfUsed" },
		{ "ConsumeIfUsed.ToolTip", "Input is passed to VCam input actions.\nInput is consumed if the input action was configured to consume input. Otherwise it is passed down the engine's input stack." },
		{ "DoNotConsume.Comment", "/**\n\x09 * Input is passed to VCam input actions.\n\x09 * Input is not consumed - even if the input action was configured to consume input.\n\x09 * The input is passed down the remainder of the engine's input stack.\n\x09 */" },
		{ "DoNotConsume.Name", "EVCamInputMode::DoNotConsume" },
		{ "DoNotConsume.ToolTip", "Input is passed to VCam input actions.\nInput is not consumed - even if the input action was configured to consume input.\nThe input is passed down the remainder of the engine's input stack." },
		{ "Ignore.Comment", "/** Input is not passed to VCam input actions. */" },
		{ "Ignore.Name", "EVCamInputMode::Ignore" },
		{ "Ignore.ToolTip", "Input is not passed to VCam input actions." },
		{ "ModuleRelativePath", "Public/Input/VCamInputDeviceConfig.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VCamCore_EVCamInputMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VCamCore,
		nullptr,
		"EVCamInputMode",
		"EVCamInputMode",
		Z_Construct_UEnum_VCamCore_EVCamInputMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VCamCore_EVCamInputMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VCamCore_EVCamInputMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VCamCore_EVCamInputMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_VCamCore_EVCamInputMode()
	{
		if (!Z_Registration_Info_UEnum_EVCamInputMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVCamInputMode.InnerSingleton, Z_Construct_UEnum_VCamCore_EVCamInputMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVCamInputMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VCamInputDeviceID;
class UScriptStruct* FVCamInputDeviceID::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VCamInputDeviceID.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VCamInputDeviceID.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVCamInputDeviceID, (UObject*)Z_Construct_UPackage__Script_VCamCore(), TEXT("VCamInputDeviceID"));
	}
	return Z_Registration_Info_UScriptStruct_VCamInputDeviceID.OuterSingleton;
}
template<> VCAMCORE_API UScriptStruct* StaticStruct<FVCamInputDeviceID>()
{
	return FVCamInputDeviceID::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVCamInputDeviceID_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DeviceId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVCamInputDeviceID_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Input/VCamInputDeviceConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVCamInputDeviceID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVCamInputDeviceID>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVCamInputDeviceID_Statics::NewProp_DeviceId_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * The ID of an input device.\n\x09 *\n\x09 * Input device IDs start at 0 and increase by 1 as more devices connect. When a device disconnects, the ID is recycled\n\x09 * and becomes available for reassignment to the next device that connects; when a device connects, the lowest possible ID is reassigned.\n\x09 *\n\x09 * Example: suppose you have three gamepads called A, B, and VCamDevicePairingConfig.h\n\x09 * 1. Connect gamepad A > receives ID 0\n\x09 * 2. Connect gamepad B > receives ID 1\n\x09 * 3. Disconnect gamepad A > gamepad B will still have ID 1\n\x09 * 4. Connect the same gamepad A OR another gamepad C > receives ID 0.\n\x09 *\n\x09 * Note: Keyboards always have ID = 0, mice ID = -1.\n\x09 * Note: The first gamepad will have ID = 0 even though keyboards will also have ID 0.\n\x09 * \n\x09 * Default value of -10 means no input device. There is nothing special about -10 (-1 already used by mice).\n\x09 */" },
		{ "ModuleRelativePath", "Public/Input/VCamInputDeviceConfig.h" },
		{ "ToolTip", "The ID of an input device.\n\nInput device IDs start at 0 and increase by 1 as more devices connect. When a device disconnects, the ID is recycled\nand becomes available for reassignment to the next device that connects; when a device connects, the lowest possible ID is reassigned.\n\nExample: suppose you have three gamepads called A, B, and VCamDevicePairingConfig.h\n1. Connect gamepad A > receives ID 0\n2. Connect gamepad B > receives ID 1\n3. Disconnect gamepad A > gamepad B will still have ID 1\n4. Connect the same gamepad A OR another gamepad C > receives ID 0.\n\nNote: Keyboards always have ID = 0, mice ID = -1.\nNote: The first gamepad will have ID = 0 even though keyboards will also have ID 0.\n\nDefault value of -10 means no input device. There is nothing special about -10 (-1 already used by mice)." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVCamInputDeviceID_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVCamInputDeviceID, DeviceId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVCamInputDeviceID_Statics::NewProp_DeviceId_MetaData), Z_Construct_UScriptStruct_FVCamInputDeviceID_Statics::NewProp_DeviceId_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVCamInputDeviceID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVCamInputDeviceID_Statics::NewProp_DeviceId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVCamInputDeviceID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VCamCore,
		nullptr,
		&NewStructOps,
		"VCamInputDeviceID",
		Z_Construct_UScriptStruct_FVCamInputDeviceID_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVCamInputDeviceID_Statics::PropPointers),
		sizeof(FVCamInputDeviceID),
		alignof(FVCamInputDeviceID),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVCamInputDeviceID_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVCamInputDeviceID_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVCamInputDeviceID_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVCamInputDeviceID()
	{
		if (!Z_Registration_Info_UScriptStruct_VCamInputDeviceID.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VCamInputDeviceID.InnerSingleton, Z_Construct_UScriptStruct_FVCamInputDeviceID_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VCamInputDeviceID.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VCamInputDeviceConfig;
class UScriptStruct* FVCamInputDeviceConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VCamInputDeviceConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VCamInputDeviceConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVCamInputDeviceConfig, (UObject*)Z_Construct_UPackage__Script_VCamCore(), TEXT("VCamInputDeviceConfig"));
	}
	return Z_Registration_Info_UScriptStruct_VCamInputDeviceConfig.OuterSingleton;
}
template<> VCAMCORE_API UScriptStruct* StaticStruct<FVCamInputDeviceConfig>()
{
	return FVCamInputDeviceConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVCamInputDeviceConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowAllInputDevices_MetaData[];
#endif
		static void NewProp_bAllowAllInputDevices_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowAllInputDevices;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AllowedInputDeviceIds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowedInputDeviceIds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllowedInputDeviceIds;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InputMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InputMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LoggingMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoggingMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LoggingMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVCamInputDeviceConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Defines the input devices a UVCamComponent will accept input from. */" },
		{ "ModuleRelativePath", "Public/Input/VCamInputDeviceConfig.h" },
		{ "ToolTip", "Defines the input devices a UVCamComponent will accept input from." },
	};
#endif
	void* Z_Construct_UScriptStruct_FVCamInputDeviceConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVCamInputDeviceConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVCamInputDeviceConfig_Statics::NewProp_bAllowAllInputDevices_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * Determines how input devices are filtered:\n\x09 * True: Every device is allowed.\n\x09 * False: Only input from devices with the IDs in AllowedInputDeviceIds is allowed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Input/VCamInputDeviceConfig.h" },
		{ "ToolTip", "Determines how input devices are filtered:\nTrue: Every device is allowed.\nFalse: Only input from devices with the IDs in AllowedInputDeviceIds is allowed." },
	};
#endif
	void Z_Construct_UScriptStruct_FVCamInputDeviceConfig_Statics::NewProp_bAllowAllInputDevices_SetBit(void* Obj)
	{
		((FVCamInputDeviceConfig*)Obj)->bAllowAllInputDevices = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVCamInputDeviceConfig_Statics::NewProp_bAllowAllInputDevices = { "bAllowAllInputDevices", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVCamInputDeviceConfig), &Z_Construct_UScriptStruct_FVCamInputDeviceConfig_Statics::NewProp_bAllowAllInputDevices_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVCamInputDeviceConfig_Statics::NewProp_bAllowAllInputDevices_MetaData), Z_Construct_UScriptStruct_FVCamInputDeviceConfig_Statics::NewProp_bAllowAllInputDevices_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVCamInputDeviceConfig_Statics::NewProp_AllowedInputDeviceIds_Inner = { "AllowedInputDeviceIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVCamInputDeviceID, METADATA_PARAMS(0, nullptr) }; // 1154753020
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVCamInputDeviceConfig_Statics::NewProp_AllowedInputDeviceIds_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * List of input devices from which input can trigger input actions.\n\x09 * Typically this is used for gamepads.\n\x09 *\n\x09 * Input device IDs start at 0 and increase by 1 as more devices connect. When a device disconnects, the ID is recycled\n\x09 * and becomes available for reassignment to the next device that connects; when a device connects, the lowest possible ID is reassigned.\n\x09 *\n\x09 * Example: suppose you have three gamepads called A, B, and VCamDevicePairingConfig.h\n\x09 * 1. Connect gamepad A > receives ID 0\n\x09 * 2. Connect gamepad B > receives ID 1\n\x09 * 3. Disconnect gamepad A > gamepad B will still have ID 1\n\x09 * 4. Connect the same gamepad A OR another gamepad C > receives ID 0.\n\x09 *\n\x09 * Note: Keyboards always have ID = 0, mice ID = -1.\n\x09 * Note: The first gamepad will have ID = 0 even though keyboards will also have ID 0.\n\x09 */" },
		{ "EditCondition", "!bAllowAllInputDevices" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Input/VCamInputDeviceConfig.h" },
		{ "ToolTip", "List of input devices from which input can trigger input actions.\nTypically this is used for gamepads.\n\nInput device IDs start at 0 and increase by 1 as more devices connect. When a device disconnects, the ID is recycled\nand becomes available for reassignment to the next device that connects; when a device connects, the lowest possible ID is reassigned.\n\nExample: suppose you have three gamepads called A, B, and VCamDevicePairingConfig.h\n1. Connect gamepad A > receives ID 0\n2. Connect gamepad B > receives ID 1\n3. Disconnect gamepad A > gamepad B will still have ID 1\n4. Connect the same gamepad A OR another gamepad C > receives ID 0.\n\nNote: Keyboards always have ID = 0, mice ID = -1.\nNote: The first gamepad will have ID = 0 even though keyboards will also have ID 0." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVCamInputDeviceConfig_Statics::NewProp_AllowedInputDeviceIds = { "AllowedInputDeviceIds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVCamInputDeviceConfig, AllowedInputDeviceIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVCamInputDeviceConfig_Statics::NewProp_AllowedInputDeviceIds_MetaData), Z_Construct_UScriptStruct_FVCamInputDeviceConfig_Statics::NewProp_AllowedInputDeviceIds_MetaData) }; // 1154753020
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVCamInputDeviceConfig_Statics::NewProp_InputMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVCamInputDeviceConfig_Statics::NewProp_InputMode_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * Determines how input is to be treated (is it consumed? is it even allowed?).\n\x09 * Note: This applies only to gamepads and keyboards. VCam always ignores mouse input (including mouse buttons).\n\x09 */" },
		{ "ModuleRelativePath", "Public/Input/VCamInputDeviceConfig.h" },
		{ "ToolTip", "Determines how input is to be treated (is it consumed? is it even allowed?).\nNote: This applies only to gamepads and keyboards. VCam always ignores mouse input (including mouse buttons)." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVCamInputDeviceConfig_Statics::NewProp_InputMode = { "InputMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVCamInputDeviceConfig, InputMode), Z_Construct_UEnum_VCamCore_EVCamInputMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVCamInputDeviceConfig_Statics::NewProp_InputMode_MetaData), Z_Construct_UScriptStruct_FVCamInputDeviceConfig_Statics::NewProp_InputMode_MetaData) }; // 3497064612
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVCamInputDeviceConfig_Statics::NewProp_LoggingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVCamInputDeviceConfig_Statics::NewProp_LoggingMode_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * What type of input should be logged.\n\x09 *\n\x09 * Tip: Filter the log by LogVCamInputDebug.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Input/VCamInputDeviceConfig.h" },
		{ "ToolTip", "What type of input should be logged.\n\nTip: Filter the log by LogVCamInputDebug." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVCamInputDeviceConfig_Statics::NewProp_LoggingMode = { "LoggingMode", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVCamInputDeviceConfig, LoggingMode), Z_Construct_UEnum_VCamCore_EVCamInputLoggingMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVCamInputDeviceConfig_Statics::NewProp_LoggingMode_MetaData), Z_Construct_UScriptStruct_FVCamInputDeviceConfig_Statics::NewProp_LoggingMode_MetaData) }; // 2687595024
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVCamInputDeviceConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVCamInputDeviceConfig_Statics::NewProp_bAllowAllInputDevices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVCamInputDeviceConfig_Statics::NewProp_AllowedInputDeviceIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVCamInputDeviceConfig_Statics::NewProp_AllowedInputDeviceIds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVCamInputDeviceConfig_Statics::NewProp_InputMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVCamInputDeviceConfig_Statics::NewProp_InputMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVCamInputDeviceConfig_Statics::NewProp_LoggingMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVCamInputDeviceConfig_Statics::NewProp_LoggingMode,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVCamInputDeviceConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VCamCore,
		nullptr,
		&NewStructOps,
		"VCamInputDeviceConfig",
		Z_Construct_UScriptStruct_FVCamInputDeviceConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVCamInputDeviceConfig_Statics::PropPointers),
		sizeof(FVCamInputDeviceConfig),
		alignof(FVCamInputDeviceConfig),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVCamInputDeviceConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVCamInputDeviceConfig_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVCamInputDeviceConfig_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVCamInputDeviceConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_VCamInputDeviceConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VCamInputDeviceConfig.InnerSingleton, Z_Construct_UScriptStruct_FVCamInputDeviceConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VCamInputDeviceConfig.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Input_VCamInputDeviceConfig_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Input_VCamInputDeviceConfig_h_Statics::EnumInfo[] = {
		{ EVCamInputLoggingMode_StaticEnum, TEXT("EVCamInputLoggingMode"), &Z_Registration_Info_UEnum_EVCamInputLoggingMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2687595024U) },
		{ EVCamInputMode_StaticEnum, TEXT("EVCamInputMode"), &Z_Registration_Info_UEnum_EVCamInputMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3497064612U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Input_VCamInputDeviceConfig_h_Statics::ScriptStructInfo[] = {
		{ FVCamInputDeviceID::StaticStruct, Z_Construct_UScriptStruct_FVCamInputDeviceID_Statics::NewStructOps, TEXT("VCamInputDeviceID"), &Z_Registration_Info_UScriptStruct_VCamInputDeviceID, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVCamInputDeviceID), 1154753020U) },
		{ FVCamInputDeviceConfig::StaticStruct, Z_Construct_UScriptStruct_FVCamInputDeviceConfig_Statics::NewStructOps, TEXT("VCamInputDeviceConfig"), &Z_Registration_Info_UScriptStruct_VCamInputDeviceConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVCamInputDeviceConfig), 1066245811U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Input_VCamInputDeviceConfig_h_2176893353(TEXT("/Script/VCamCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Input_VCamInputDeviceConfig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Input_VCamInputDeviceConfig_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Input_VCamInputDeviceConfig_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Input_VCamInputDeviceConfig_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
