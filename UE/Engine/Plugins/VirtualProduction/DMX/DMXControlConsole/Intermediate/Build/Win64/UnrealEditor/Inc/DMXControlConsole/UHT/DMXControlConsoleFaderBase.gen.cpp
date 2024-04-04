// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/DMXControlConsoleFaderBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXControlConsoleFaderBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DMXCONTROLCONSOLE_API UClass* Z_Construct_UClass_UDMXControlConsoleFaderBase();
	DMXCONTROLCONSOLE_API UClass* Z_Construct_UClass_UDMXControlConsoleFaderBase_NoRegister();
	DMXCONTROLCONSOLE_API UClass* Z_Construct_UClass_UDMXControlConsoleFaderGroupElement_NoRegister();
	DMXCONTROLCONSOLE_API UClass* Z_Construct_UClass_UDMXControlConsoleFloatOscillator_NoRegister();
	DMXPROTOCOL_API UEnum* Z_Construct_UEnum_DMXProtocol_EDMXFixtureSignalFormat();
	UPackage* Z_Construct_UPackage__Script_DMXControlConsole();
// End Cross Module References
	void UDMXControlConsoleFaderBase::StaticRegisterNativesUDMXControlConsoleFaderBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXControlConsoleFaderBase);
	UClass* Z_Construct_UClass_UDMXControlConsoleFaderBase_NoRegister()
	{
		return UDMXControlConsoleFaderBase::StaticClass();
	}
	struct Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FaderName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FaderName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DataType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DataType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UniverseID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UniverseID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartingAddress_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartingAddress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndingAddress_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EndingAddress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_DefaultValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinValue_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_MinValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxValue_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaxValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseLSBMode_MetaData[];
#endif
		static void NewProp_bUseLSBMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLSBMode;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatOscillatorClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_FloatOscillatorClass;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatOscillator_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FloatOscillator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsMuted_MetaData[];
#endif
		static void NewProp_bIsMuted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMuted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLocked_MetaData[];
#endif
		static void NewProp_bIsLocked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLocked;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanEditDMXAssignment_MetaData[];
#endif
		static void NewProp_bCanEditDMXAssignment_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanEditDMXAssignment;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXControlConsole,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "DMX Fader DMX Fader|Oscillator" },
		{ "Comment", "/** Base class for a Fader in the DMX Control Console. */" },
		{ "IncludePath", "DMXControlConsoleFaderBase.h" },
		{ "ModuleRelativePath", "Private/DMXControlConsoleFaderBase.h" },
		{ "ToolTip", "Base class for a Fader in the DMX Control Console." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_FaderName_MetaData[] = {
		{ "Category", "DMX Fader" },
		{ "Comment", "/** Cached Name of the Fader */" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Private/DMXControlConsoleFaderBase.h" },
		{ "ToolTip", "Cached Name of the Fader" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_FaderName = { "FaderName", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXControlConsoleFaderBase, FaderName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_FaderName_MetaData), Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_FaderName_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_DataType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_DataType_MetaData[] = {
		{ "Category", "DMX Fader" },
		{ "Comment", "/** The number of channels this Fader uses */" },
		{ "DisplayPriority", "2" },
		{ "EditCondition", "bCanEditDMXAssignment" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Private/DMXControlConsoleFaderBase.h" },
		{ "ToolTip", "The number of channels this Fader uses" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXControlConsoleFaderBase, DataType), Z_Construct_UEnum_DMXProtocol_EDMXFixtureSignalFormat, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_DataType_MetaData), Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_DataType_MetaData) }; // 2409670111
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_UniverseID_MetaData[] = {
		{ "Category", "DMX Fader" },
		{ "Comment", "/** The universe the should send to fader */" },
		{ "DisplayPriority", "3" },
		{ "EditCondition", "bCanEditDMXAssignment" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Private/DMXControlConsoleFaderBase.h" },
		{ "ToolTip", "The universe the should send to fader" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_UniverseID = { "UniverseID", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXControlConsoleFaderBase, UniverseID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_UniverseID_MetaData), Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_UniverseID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_StartingAddress_MetaData[] = {
		{ "Category", "DMX Fader" },
		{ "Comment", "/** The starting channel Address to send DMX to */" },
		{ "DisplayPriority", "4" },
		{ "EditCondition", "bCanEditDMXAssignment" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Private/DMXControlConsoleFaderBase.h" },
		{ "ToolTip", "The starting channel Address to send DMX to" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_StartingAddress = { "StartingAddress", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXControlConsoleFaderBase, StartingAddress), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_StartingAddress_MetaData), Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_StartingAddress_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_EndingAddress_MetaData[] = {
		{ "Category", "DMX Fader" },
		{ "Comment", "/** The end channel Address to send DMX to */" },
		{ "DisplayPriority", "5" },
		{ "EditCondition", "bCanEditDMXAssignment" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Private/DMXControlConsoleFaderBase.h" },
		{ "ToolTip", "The end channel Address to send DMX to" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_EndingAddress = { "EndingAddress", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXControlConsoleFaderBase, EndingAddress), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_EndingAddress_MetaData), Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_EndingAddress_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "DMX Fader" },
		{ "Comment", "/** The current Fader Value */" },
		{ "DisplayPriority", "6" },
		{ "EditCondition", "!bIsLocked" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Private/DMXControlConsoleFaderBase.h" },
		{ "ToolTip", "The current Fader Value" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXControlConsoleFaderBase, Value), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_Value_MetaData), Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_Value_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Comment", "/** Fader's default Value */" },
		{ "ModuleRelativePath", "Private/DMXControlConsoleFaderBase.h" },
		{ "ToolTip", "Fader's default Value" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXControlConsoleFaderBase, DefaultValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_DefaultValue_MetaData), Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_DefaultValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_MinValue_MetaData[] = {
		{ "Category", "DMX Fader" },
		{ "Comment", "/** The minimum Fader Value */" },
		{ "DisplayPriority", "7" },
		{ "EditCondition", "!bIsLocked" },
		{ "ModuleRelativePath", "Private/DMXControlConsoleFaderBase.h" },
		{ "ToolTip", "The minimum Fader Value" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_MinValue = { "MinValue", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXControlConsoleFaderBase, MinValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_MinValue_MetaData), Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_MinValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_MaxValue_MetaData[] = {
		{ "Category", "DMX Fader" },
		{ "Comment", "/** The maximum Fader Value */" },
		{ "DisplayPriority", "8" },
		{ "EditCondition", "!bIsLocked" },
		{ "ModuleRelativePath", "Private/DMXControlConsoleFaderBase.h" },
		{ "ToolTip", "The maximum Fader Value" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_MaxValue = { "MaxValue", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXControlConsoleFaderBase, MaxValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_MaxValue_MetaData), Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_MaxValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_bUseLSBMode_MetaData[] = {
		{ "Category", "DMX Fader" },
		{ "Comment", "/** Use Least Significant Byte mode. Individual bytes(channels) be interpreted with the first bytes being the lowest part of the number(endianness). */" },
		{ "DisplayPriority", "9" },
		{ "EditCondition", "bCanEditDMXAssignment" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Private/DMXControlConsoleFaderBase.h" },
		{ "ToolTip", "Use Least Significant Byte mode. Individual bytes(channels) be interpreted with the first bytes being the lowest part of the number(endianness)." },
	};
#endif
	void Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_bUseLSBMode_SetBit(void* Obj)
	{
		((UDMXControlConsoleFaderBase*)Obj)->bUseLSBMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_bUseLSBMode = { "bUseLSBMode", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDMXControlConsoleFaderBase), &Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_bUseLSBMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_bUseLSBMode_MetaData), Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_bUseLSBMode_MetaData) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_FloatOscillatorClass_MetaData[] = {
		{ "Category", "DMX Fader|Oscillator" },
		{ "Comment", "/** Oscillator that is used for this fader */" },
		{ "DisplayName", "Oscillator Class" },
		{ "ModuleRelativePath", "Private/DMXControlConsoleFaderBase.h" },
		{ "ShowDisplayNames", "" },
		{ "ToolTip", "Oscillator that is used for this fader" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_FloatOscillatorClass = { "FloatOscillatorClass", nullptr, (EPropertyFlags)0x0024080800000001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXControlConsoleFaderBase, FloatOscillatorClass), Z_Construct_UClass_UDMXControlConsoleFloatOscillator_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_FloatOscillatorClass_MetaData), Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_FloatOscillatorClass_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_FloatOscillator_MetaData[] = {
		{ "Category", "DMX Fader|Oscillator" },
		{ "Comment", "/** Float Oscillator applied to this channel */" },
		{ "DisplayName", "Oscillator" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/DMXControlConsoleFaderBase.h" },
		{ "ToolTip", "Float Oscillator applied to this channel" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_FloatOscillator = { "FloatOscillator", nullptr, (EPropertyFlags)0x00260800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXControlConsoleFaderBase, FloatOscillator), Z_Construct_UClass_UDMXControlConsoleFloatOscillator_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_FloatOscillator_MetaData), Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_FloatOscillator_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_bIsMuted_MetaData[] = {
		{ "Comment", "/** If true, the fader doesn't send DMX */" },
		{ "ModuleRelativePath", "Private/DMXControlConsoleFaderBase.h" },
		{ "ToolTip", "If true, the fader doesn't send DMX" },
	};
#endif
	void Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_bIsMuted_SetBit(void* Obj)
	{
		((UDMXControlConsoleFaderBase*)Obj)->bIsMuted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_bIsMuted = { "bIsMuted", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDMXControlConsoleFaderBase), &Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_bIsMuted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_bIsMuted_MetaData), Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_bIsMuted_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_bIsLocked_MetaData[] = {
		{ "Category", "DMX Fader" },
		{ "Comment", "/** If true, Fader's value can't be changed */" },
		{ "ModuleRelativePath", "Private/DMXControlConsoleFaderBase.h" },
		{ "ToolTip", "If true, Fader's value can't be changed" },
	};
#endif
	void Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_bIsLocked_SetBit(void* Obj)
	{
		((UDMXControlConsoleFaderBase*)Obj)->bIsLocked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_bIsLocked = { "bIsLocked", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDMXControlConsoleFaderBase), &Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_bIsLocked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_bIsLocked_MetaData), Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_bIsLocked_MetaData) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_bCanEditDMXAssignment_MetaData[] = {
		{ "Comment", "/** If true, the property is editable in editor */" },
		{ "ModuleRelativePath", "Private/DMXControlConsoleFaderBase.h" },
		{ "ToolTip", "If true, the property is editable in editor" },
	};
#endif
	void Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_bCanEditDMXAssignment_SetBit(void* Obj)
	{
		((UDMXControlConsoleFaderBase*)Obj)->bCanEditDMXAssignment = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_bCanEditDMXAssignment = { "bCanEditDMXAssignment", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDMXControlConsoleFaderBase), &Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_bCanEditDMXAssignment_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_bCanEditDMXAssignment_MetaData), Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_bCanEditDMXAssignment_MetaData) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_FaderName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_DataType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_DataType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_UniverseID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_StartingAddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_EndingAddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_MinValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_MaxValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_bUseLSBMode,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_FloatOscillatorClass,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_FloatOscillator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_bIsMuted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_bIsLocked,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::NewProp_bCanEditDMXAssignment,
#endif // WITH_EDITORONLY_DATA
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UDMXControlConsoleFaderGroupElement_NoRegister, (int32)VTABLE_OFFSET(UDMXControlConsoleFaderBase, IDMXControlConsoleFaderGroupElement), false },  // 2118587309
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXControlConsoleFaderBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::ClassParams = {
		&UDMXControlConsoleFaderBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDMXControlConsoleFaderBase()
	{
		if (!Z_Registration_Info_UClass_UDMXControlConsoleFaderBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXControlConsoleFaderBase.OuterSingleton, Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXControlConsoleFaderBase.OuterSingleton;
	}
	template<> DMXCONTROLCONSOLE_API UClass* StaticClass<UDMXControlConsoleFaderBase>()
	{
		return UDMXControlConsoleFaderBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXControlConsoleFaderBase);
	UDMXControlConsoleFaderBase::~UDMXControlConsoleFaderBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Private_DMXControlConsoleFaderBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Private_DMXControlConsoleFaderBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXControlConsoleFaderBase, UDMXControlConsoleFaderBase::StaticClass, TEXT("UDMXControlConsoleFaderBase"), &Z_Registration_Info_UClass_UDMXControlConsoleFaderBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXControlConsoleFaderBase), 4225423199U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Private_DMXControlConsoleFaderBase_h_3657691861(TEXT("/Script/DMXControlConsole"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Private_DMXControlConsoleFaderBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Private_DMXControlConsoleFaderBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
