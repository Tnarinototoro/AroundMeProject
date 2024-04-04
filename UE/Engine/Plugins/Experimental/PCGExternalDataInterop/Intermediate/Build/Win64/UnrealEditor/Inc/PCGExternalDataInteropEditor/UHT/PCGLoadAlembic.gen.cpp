// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCGLoadAlembic.h"
#include "AbcImportSettings.h"
#include "Metadata/PCGAttributePropertySelector.h"
#include "PCGData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGLoadAlembic() {}
// Cross Module References
	ALEMBICLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FAbcConversionSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGDataCollection();
	PCGEXTERNALDATAINTEROP_API UEnum* Z_Construct_UEnum_PCGExternalDataInterop_EPCGLoadAlembicStandardSetup();
	PCGEXTERNALDATAINTEROPEDITOR_API UClass* Z_Construct_UClass_UPCGLoadAlembicFunctionLibrary();
	PCGEXTERNALDATAINTEROPEDITOR_API UClass* Z_Construct_UClass_UPCGLoadAlembicFunctionLibrary_NoRegister();
	PCGEXTERNALDATAINTEROPEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FPCGLoadAlembicBPData();
	UPackage* Z_Construct_UPackage__Script_PCGExternalDataInteropEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PCGLoadAlembicBPData;
class UScriptStruct* FPCGLoadAlembicBPData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PCGLoadAlembicBPData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PCGLoadAlembicBPData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGLoadAlembicBPData, (UObject*)Z_Construct_UPackage__Script_PCGExternalDataInteropEditor(), TEXT("PCGLoadAlembicBPData"));
	}
	return Z_Registration_Info_UScriptStruct_PCGLoadAlembicBPData.OuterSingleton;
}
template<> PCGEXTERNALDATAINTEROPEDITOR_API UScriptStruct* StaticStruct<FPCGLoadAlembicBPData>()
{
	return FPCGLoadAlembicBPData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPCGLoadAlembicBPData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlembicFilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AlembicFilePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConversionSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConversionSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bConversionFlipHandedness_MetaData[];
#endif
		static void NewProp_bConversionFlipHandedness_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConversionFlipHandedness;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeMapping_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeMapping_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeMapping_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_AttributeMapping;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGLoadAlembicBPData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PCGLoadAlembic.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPCGLoadAlembicBPData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGLoadAlembicBPData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGLoadAlembicBPData_Statics::NewProp_AlembicFilePath_MetaData[] = {
		{ "Category", "Alembic" },
		{ "FilePathFilter", "Alembic files (*.abc)|*.abc" },
		{ "ModuleRelativePath", "Public/PCGLoadAlembic.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGLoadAlembicBPData_Statics::NewProp_AlembicFilePath = { "AlembicFilePath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGLoadAlembicBPData, AlembicFilePath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGLoadAlembicBPData_Statics::NewProp_AlembicFilePath_MetaData), Z_Construct_UScriptStruct_FPCGLoadAlembicBPData_Statics::NewProp_AlembicFilePath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGLoadAlembicBPData_Statics::NewProp_ConversionSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Conversion settings that will be applied on the transform only */" },
		{ "ModuleRelativePath", "Public/PCGLoadAlembic.h" },
		{ "ToolTip", "Conversion settings that will be applied on the transform only" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGLoadAlembicBPData_Statics::NewProp_ConversionSettings = { "ConversionSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGLoadAlembicBPData, ConversionSettings), Z_Construct_UScriptStruct_FAbcConversionSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGLoadAlembicBPData_Statics::NewProp_ConversionSettings_MetaData), Z_Construct_UScriptStruct_FPCGLoadAlembicBPData_Statics::NewProp_ConversionSettings_MetaData) }; // 1847008104
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGLoadAlembicBPData_Statics::NewProp_bConversionFlipHandedness_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGLoadAlembic.h" },
		{ "Tooltip", "Flips rotation direction (W), useful together with swizzling" },
	};
#endif
	void Z_Construct_UScriptStruct_FPCGLoadAlembicBPData_Statics::NewProp_bConversionFlipHandedness_SetBit(void* Obj)
	{
		((FPCGLoadAlembicBPData*)Obj)->bConversionFlipHandedness = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGLoadAlembicBPData_Statics::NewProp_bConversionFlipHandedness = { "bConversionFlipHandedness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGLoadAlembicBPData), &Z_Construct_UScriptStruct_FPCGLoadAlembicBPData_Statics::NewProp_bConversionFlipHandedness_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGLoadAlembicBPData_Statics::NewProp_bConversionFlipHandedness_MetaData), Z_Construct_UScriptStruct_FPCGLoadAlembicBPData_Statics::NewProp_bConversionFlipHandedness_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGLoadAlembicBPData_Statics::NewProp_AttributeMapping_ValueProp = { "AttributeMapping", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(0, nullptr) }; // 1471452776
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPCGLoadAlembicBPData_Statics::NewProp_AttributeMapping_Key_KeyProp = { "AttributeMapping_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGLoadAlembicBPData_Statics::NewProp_AttributeMapping_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGLoadAlembic.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FPCGLoadAlembicBPData_Statics::NewProp_AttributeMapping = { "AttributeMapping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGLoadAlembicBPData, AttributeMapping), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGLoadAlembicBPData_Statics::NewProp_AttributeMapping_MetaData), Z_Construct_UScriptStruct_FPCGLoadAlembicBPData_Statics::NewProp_AttributeMapping_MetaData) }; // 1471452776
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGLoadAlembicBPData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGLoadAlembicBPData_Statics::NewProp_AlembicFilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGLoadAlembicBPData_Statics::NewProp_ConversionSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGLoadAlembicBPData_Statics::NewProp_bConversionFlipHandedness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGLoadAlembicBPData_Statics::NewProp_AttributeMapping_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGLoadAlembicBPData_Statics::NewProp_AttributeMapping_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGLoadAlembicBPData_Statics::NewProp_AttributeMapping,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGLoadAlembicBPData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PCGExternalDataInteropEditor,
		nullptr,
		&NewStructOps,
		"PCGLoadAlembicBPData",
		Z_Construct_UScriptStruct_FPCGLoadAlembicBPData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGLoadAlembicBPData_Statics::PropPointers),
		sizeof(FPCGLoadAlembicBPData),
		alignof(FPCGLoadAlembicBPData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGLoadAlembicBPData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGLoadAlembicBPData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGLoadAlembicBPData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPCGLoadAlembicBPData()
	{
		if (!Z_Registration_Info_UScriptStruct_PCGLoadAlembicBPData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PCGLoadAlembicBPData.InnerSingleton, Z_Construct_UScriptStruct_FPCGLoadAlembicBPData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PCGLoadAlembicBPData.InnerSingleton;
	}
	DEFINE_FUNCTION(UPCGLoadAlembicFunctionLibrary::execSetupFromStandard)
	{
		P_GET_STRUCT_REF(FPCGLoadAlembicBPData,Z_Param_Out_Data);
		P_GET_ENUM(EPCGLoadAlembicStandardSetup,Z_Param_InSetup);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPCGLoadAlembicFunctionLibrary::SetupFromStandard(Z_Param_Out_Data,EPCGLoadAlembicStandardSetup(Z_Param_InSetup));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGLoadAlembicFunctionLibrary::execLoadAlembicFileToPCG)
	{
		P_GET_STRUCT_REF(FPCGLoadAlembicBPData,Z_Param_Out_Settings);
		P_GET_STRUCT_REF(FPCGDataCollection,Z_Param_Out_Data);
		P_GET_OBJECT(UObject,Z_Param_TargetOuter);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPCGLoadAlembicFunctionLibrary::LoadAlembicFileToPCG(Z_Param_Out_Settings,Z_Param_Out_Data,Z_Param_TargetOuter);
		P_NATIVE_END;
	}
	void UPCGLoadAlembicFunctionLibrary::StaticRegisterNativesUPCGLoadAlembicFunctionLibrary()
	{
		UClass* Class = UPCGLoadAlembicFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadAlembicFileToPCG", &UPCGLoadAlembicFunctionLibrary::execLoadAlembicFileToPCG },
			{ "SetupFromStandard", &UPCGLoadAlembicFunctionLibrary::execSetupFromStandard },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPCGLoadAlembicFunctionLibrary_LoadAlembicFileToPCG_Statics
	{
		struct PCGLoadAlembicFunctionLibrary_eventLoadAlembicFileToPCG_Parms
		{
			FPCGLoadAlembicBPData Settings;
			FPCGDataCollection Data;
			UObject* TargetOuter;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetOuter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGLoadAlembicFunctionLibrary_LoadAlembicFileToPCG_Statics::NewProp_Settings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGLoadAlembicFunctionLibrary_LoadAlembicFileToPCG_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGLoadAlembicFunctionLibrary_eventLoadAlembicFileToPCG_Parms, Settings), Z_Construct_UScriptStruct_FPCGLoadAlembicBPData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGLoadAlembicFunctionLibrary_LoadAlembicFileToPCG_Statics::NewProp_Settings_MetaData), Z_Construct_UFunction_UPCGLoadAlembicFunctionLibrary_LoadAlembicFileToPCG_Statics::NewProp_Settings_MetaData) }; // 4227473497
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGLoadAlembicFunctionLibrary_LoadAlembicFileToPCG_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGLoadAlembicFunctionLibrary_eventLoadAlembicFileToPCG_Parms, Data), Z_Construct_UScriptStruct_FPCGDataCollection, METADATA_PARAMS(0, nullptr) }; // 3944208025
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGLoadAlembicFunctionLibrary_LoadAlembicFileToPCG_Statics::NewProp_TargetOuter = { "TargetOuter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGLoadAlembicFunctionLibrary_eventLoadAlembicFileToPCG_Parms, TargetOuter), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGLoadAlembicFunctionLibrary_LoadAlembicFileToPCG_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGLoadAlembicFunctionLibrary_LoadAlembicFileToPCG_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGLoadAlembicFunctionLibrary_LoadAlembicFileToPCG_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGLoadAlembicFunctionLibrary_LoadAlembicFileToPCG_Statics::NewProp_TargetOuter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGLoadAlembicFunctionLibrary_LoadAlembicFileToPCG_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|IO" },
		{ "ModuleRelativePath", "Public/PCGLoadAlembic.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGLoadAlembicFunctionLibrary_LoadAlembicFileToPCG_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGLoadAlembicFunctionLibrary, nullptr, "LoadAlembicFileToPCG", nullptr, nullptr, Z_Construct_UFunction_UPCGLoadAlembicFunctionLibrary_LoadAlembicFileToPCG_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGLoadAlembicFunctionLibrary_LoadAlembicFileToPCG_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGLoadAlembicFunctionLibrary_LoadAlembicFileToPCG_Statics::PCGLoadAlembicFunctionLibrary_eventLoadAlembicFileToPCG_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGLoadAlembicFunctionLibrary_LoadAlembicFileToPCG_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGLoadAlembicFunctionLibrary_LoadAlembicFileToPCG_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGLoadAlembicFunctionLibrary_LoadAlembicFileToPCG_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGLoadAlembicFunctionLibrary_LoadAlembicFileToPCG_Statics::PCGLoadAlembicFunctionLibrary_eventLoadAlembicFileToPCG_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGLoadAlembicFunctionLibrary_LoadAlembicFileToPCG()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGLoadAlembicFunctionLibrary_LoadAlembicFileToPCG_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGLoadAlembicFunctionLibrary_SetupFromStandard_Statics
	{
		struct PCGLoadAlembicFunctionLibrary_eventSetupFromStandard_Parms
		{
			FPCGLoadAlembicBPData Data;
			EPCGLoadAlembicStandardSetup InSetup;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InSetup_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InSetup;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGLoadAlembicFunctionLibrary_SetupFromStandard_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGLoadAlembicFunctionLibrary_eventSetupFromStandard_Parms, Data), Z_Construct_UScriptStruct_FPCGLoadAlembicBPData, METADATA_PARAMS(0, nullptr) }; // 4227473497
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPCGLoadAlembicFunctionLibrary_SetupFromStandard_Statics::NewProp_InSetup_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPCGLoadAlembicFunctionLibrary_SetupFromStandard_Statics::NewProp_InSetup = { "InSetup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGLoadAlembicFunctionLibrary_eventSetupFromStandard_Parms, InSetup), Z_Construct_UEnum_PCGExternalDataInterop_EPCGLoadAlembicStandardSetup, METADATA_PARAMS(0, nullptr) }; // 3482278336
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGLoadAlembicFunctionLibrary_SetupFromStandard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGLoadAlembicFunctionLibrary_SetupFromStandard_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGLoadAlembicFunctionLibrary_SetupFromStandard_Statics::NewProp_InSetup_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGLoadAlembicFunctionLibrary_SetupFromStandard_Statics::NewProp_InSetup,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGLoadAlembicFunctionLibrary_SetupFromStandard_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|IO" },
		{ "ModuleRelativePath", "Public/PCGLoadAlembic.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGLoadAlembicFunctionLibrary_SetupFromStandard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGLoadAlembicFunctionLibrary, nullptr, "SetupFromStandard", nullptr, nullptr, Z_Construct_UFunction_UPCGLoadAlembicFunctionLibrary_SetupFromStandard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGLoadAlembicFunctionLibrary_SetupFromStandard_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGLoadAlembicFunctionLibrary_SetupFromStandard_Statics::PCGLoadAlembicFunctionLibrary_eventSetupFromStandard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGLoadAlembicFunctionLibrary_SetupFromStandard_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGLoadAlembicFunctionLibrary_SetupFromStandard_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGLoadAlembicFunctionLibrary_SetupFromStandard_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGLoadAlembicFunctionLibrary_SetupFromStandard_Statics::PCGLoadAlembicFunctionLibrary_eventSetupFromStandard_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGLoadAlembicFunctionLibrary_SetupFromStandard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGLoadAlembicFunctionLibrary_SetupFromStandard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGLoadAlembicFunctionLibrary);
	UClass* Z_Construct_UClass_UPCGLoadAlembicFunctionLibrary_NoRegister()
	{
		return UPCGLoadAlembicFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UPCGLoadAlembicFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGLoadAlembicFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PCGExternalDataInteropEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGLoadAlembicFunctionLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPCGLoadAlembicFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPCGLoadAlembicFunctionLibrary_LoadAlembicFileToPCG, "LoadAlembicFileToPCG" }, // 2596746499
		{ &Z_Construct_UFunction_UPCGLoadAlembicFunctionLibrary_SetupFromStandard, "SetupFromStandard" }, // 2077608705
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGLoadAlembicFunctionLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGLoadAlembicFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PCGLoadAlembic.h" },
		{ "ModuleRelativePath", "Public/PCGLoadAlembic.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGLoadAlembicFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGLoadAlembicFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGLoadAlembicFunctionLibrary_Statics::ClassParams = {
		&UPCGLoadAlembicFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGLoadAlembicFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGLoadAlembicFunctionLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UPCGLoadAlembicFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UPCGLoadAlembicFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGLoadAlembicFunctionLibrary.OuterSingleton, Z_Construct_UClass_UPCGLoadAlembicFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGLoadAlembicFunctionLibrary.OuterSingleton;
	}
	template<> PCGEXTERNALDATAINTEROPEDITOR_API UClass* StaticClass<UPCGLoadAlembicFunctionLibrary>()
	{
		return UPCGLoadAlembicFunctionLibrary::StaticClass();
	}
	UPCGLoadAlembicFunctionLibrary::UPCGLoadAlembicFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGLoadAlembicFunctionLibrary);
	UPCGLoadAlembicFunctionLibrary::~UPCGLoadAlembicFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCGExternalDataInterop_Source_PCGExternalDataInteropEditor_Public_PCGLoadAlembic_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCGExternalDataInterop_Source_PCGExternalDataInteropEditor_Public_PCGLoadAlembic_h_Statics::ScriptStructInfo[] = {
		{ FPCGLoadAlembicBPData::StaticStruct, Z_Construct_UScriptStruct_FPCGLoadAlembicBPData_Statics::NewStructOps, TEXT("PCGLoadAlembicBPData"), &Z_Registration_Info_UScriptStruct_PCGLoadAlembicBPData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGLoadAlembicBPData), 4227473497U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCGExternalDataInterop_Source_PCGExternalDataInteropEditor_Public_PCGLoadAlembic_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGLoadAlembicFunctionLibrary, UPCGLoadAlembicFunctionLibrary::StaticClass, TEXT("UPCGLoadAlembicFunctionLibrary"), &Z_Registration_Info_UClass_UPCGLoadAlembicFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGLoadAlembicFunctionLibrary), 3327269530U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCGExternalDataInterop_Source_PCGExternalDataInteropEditor_Public_PCGLoadAlembic_h_4249953684(TEXT("/Script/PCGExternalDataInteropEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCGExternalDataInterop_Source_PCGExternalDataInteropEditor_Public_PCGLoadAlembic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCGExternalDataInterop_Source_PCGExternalDataInteropEditor_Public_PCGLoadAlembic_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCGExternalDataInterop_Source_PCGExternalDataInteropEditor_Public_PCGLoadAlembic_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCGExternalDataInterop_Source_PCGExternalDataInteropEditor_Public_PCGLoadAlembic_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
