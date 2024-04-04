// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Elements/PCGLoadAlembicElement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGLoadAlembicElement() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PCG_API UClass* Z_Construct_UClass_UPCGExternalDataSettings();
	PCGEXTERNALDATAINTEROP_API UClass* Z_Construct_UClass_UPCGLoadAlembicSettings();
	PCGEXTERNALDATAINTEROP_API UClass* Z_Construct_UClass_UPCGLoadAlembicSettings_NoRegister();
	PCGEXTERNALDATAINTEROP_API UEnum* Z_Construct_UEnum_PCGExternalDataInterop_EPCGLoadAlembicStandardSetup();
	UPackage* Z_Construct_UPackage__Script_PCGExternalDataInterop();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGLoadAlembicStandardSetup;
	static UEnum* EPCGLoadAlembicStandardSetup_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGLoadAlembicStandardSetup.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGLoadAlembicStandardSetup.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExternalDataInterop_EPCGLoadAlembicStandardSetup, (UObject*)Z_Construct_UPackage__Script_PCGExternalDataInterop(), TEXT("EPCGLoadAlembicStandardSetup"));
		}
		return Z_Registration_Info_UEnum_EPCGLoadAlembicStandardSetup.OuterSingleton;
	}
	template<> PCGEXTERNALDATAINTEROP_API UEnum* StaticEnum<EPCGLoadAlembicStandardSetup>()
	{
		return EPCGLoadAlembicStandardSetup_StaticEnum();
	}
	struct Z_Construct_UEnum_PCGExternalDataInterop_EPCGLoadAlembicStandardSetup_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCGExternalDataInterop_EPCGLoadAlembicStandardSetup_Statics::Enumerators[] = {
		{ "EPCGLoadAlembicStandardSetup::None", (int64)EPCGLoadAlembicStandardSetup::None },
		{ "EPCGLoadAlembicStandardSetup::CitySample", (int64)EPCGLoadAlembicStandardSetup::CitySample },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCGExternalDataInterop_EPCGLoadAlembicStandardSetup_Statics::Enum_MetaDataParams[] = {
		{ "CitySample.Name", "EPCGLoadAlembicStandardSetup::CitySample" },
		{ "CitySample.Tooltip", "Uses the same setup as in the City Sample demo: right handed Y-up and the orient and scale mapping to the rotation and scale, respectively" },
		{ "ModuleRelativePath", "Public/Elements/PCGLoadAlembicElement.h" },
		{ "None.Name", "EPCGLoadAlembicStandardSetup::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExternalDataInterop_EPCGLoadAlembicStandardSetup_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCGExternalDataInterop,
		nullptr,
		"EPCGLoadAlembicStandardSetup",
		"EPCGLoadAlembicStandardSetup",
		Z_Construct_UEnum_PCGExternalDataInterop_EPCGLoadAlembicStandardSetup_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExternalDataInterop_EPCGLoadAlembicStandardSetup_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExternalDataInterop_EPCGLoadAlembicStandardSetup_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExternalDataInterop_EPCGLoadAlembicStandardSetup_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_PCGExternalDataInterop_EPCGLoadAlembicStandardSetup()
	{
		if (!Z_Registration_Info_UEnum_EPCGLoadAlembicStandardSetup.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGLoadAlembicStandardSetup.InnerSingleton, Z_Construct_UEnum_PCGExternalDataInterop_EPCGLoadAlembicStandardSetup_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGLoadAlembicStandardSetup.InnerSingleton;
	}
	DEFINE_FUNCTION(UPCGLoadAlembicSettings::execSetupFromStandard)
	{
		P_GET_ENUM(EPCGLoadAlembicStandardSetup,Z_Param_InSetup);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupFromStandard(EPCGLoadAlembicStandardSetup(Z_Param_InSetup));
		P_NATIVE_END;
	}
	void UPCGLoadAlembicSettings::StaticRegisterNativesUPCGLoadAlembicSettings()
	{
		UClass* Class = UPCGLoadAlembicSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetupFromStandard", &UPCGLoadAlembicSettings::execSetupFromStandard },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPCGLoadAlembicSettings_SetupFromStandard_Statics
	{
		struct PCGLoadAlembicSettings_eventSetupFromStandard_Parms
		{
			EPCGLoadAlembicStandardSetup InSetup;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InSetup_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InSetup;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPCGLoadAlembicSettings_SetupFromStandard_Statics::NewProp_InSetup_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPCGLoadAlembicSettings_SetupFromStandard_Statics::NewProp_InSetup = { "InSetup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGLoadAlembicSettings_eventSetupFromStandard_Parms, InSetup), Z_Construct_UEnum_PCGExternalDataInterop_EPCGLoadAlembicStandardSetup, METADATA_PARAMS(0, nullptr) }; // 3482278336
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGLoadAlembicSettings_SetupFromStandard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGLoadAlembicSettings_SetupFromStandard_Statics::NewProp_InSetup_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGLoadAlembicSettings_SetupFromStandard_Statics::NewProp_InSetup,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGLoadAlembicSettings_SetupFromStandard_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|AlembicImport" },
		{ "ModuleRelativePath", "Public/Elements/PCGLoadAlembicElement.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGLoadAlembicSettings_SetupFromStandard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGLoadAlembicSettings, nullptr, "SetupFromStandard", nullptr, nullptr, Z_Construct_UFunction_UPCGLoadAlembicSettings_SetupFromStandard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGLoadAlembicSettings_SetupFromStandard_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGLoadAlembicSettings_SetupFromStandard_Statics::PCGLoadAlembicSettings_eventSetupFromStandard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGLoadAlembicSettings_SetupFromStandard_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGLoadAlembicSettings_SetupFromStandard_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGLoadAlembicSettings_SetupFromStandard_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGLoadAlembicSettings_SetupFromStandard_Statics::PCGLoadAlembicSettings_eventSetupFromStandard_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGLoadAlembicSettings_SetupFromStandard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGLoadAlembicSettings_SetupFromStandard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGLoadAlembicSettings);
	UClass* Z_Construct_UClass_UPCGLoadAlembicSettings_NoRegister()
	{
		return UPCGLoadAlembicSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGLoadAlembicSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlembicFilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AlembicFilePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConversionScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConversionScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConversionRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConversionRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bConversionFlipHandedness_MetaData[];
#endif
		static void NewProp_bConversionFlipHandedness_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConversionFlipHandedness;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FBytePropertyParams NewProp_Setup_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Setup_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Setup;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGLoadAlembicSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGExternalDataSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCGExternalDataInterop,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGLoadAlembicSettings_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPCGLoadAlembicSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPCGLoadAlembicSettings_SetupFromStandard, "SetupFromStandard" }, // 2383647249
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGLoadAlembicSettings_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGLoadAlembicSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Elements/PCGLoadAlembicElement.h" },
		{ "ModuleRelativePath", "Public/Elements/PCGLoadAlembicElement.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGLoadAlembicSettings_Statics::NewProp_AlembicFilePath_MetaData[] = {
		{ "Category", "Alembic" },
		{ "FilePathFilter", "Alembic files (*.abc)|*.abc" },
		{ "ModuleRelativePath", "Public/Elements/PCGLoadAlembicElement.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGLoadAlembicSettings_Statics::NewProp_AlembicFilePath = { "AlembicFilePath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGLoadAlembicSettings, AlembicFilePath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGLoadAlembicSettings_Statics::NewProp_AlembicFilePath_MetaData), Z_Construct_UClass_UPCGLoadAlembicSettings_Statics::NewProp_AlembicFilePath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGLoadAlembicSettings_Statics::NewProp_ConversionScale_MetaData[] = {
		{ "Category", "Alembic" },
		{ "Comment", "/** Scale to apply during import. Note that for both Max/Maya presets the value flips the Y axis. */" },
		{ "ModuleRelativePath", "Public/Elements/PCGLoadAlembicElement.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Scale to apply during import. Note that for both Max/Maya presets the value flips the Y axis." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGLoadAlembicSettings_Statics::NewProp_ConversionScale = { "ConversionScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGLoadAlembicSettings, ConversionScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGLoadAlembicSettings_Statics::NewProp_ConversionScale_MetaData), Z_Construct_UClass_UPCGLoadAlembicSettings_Statics::NewProp_ConversionScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGLoadAlembicSettings_Statics::NewProp_ConversionRotation_MetaData[] = {
		{ "Category", "Alembic" },
		{ "Comment", "/** Rotation in Euler angles applied during import. For Max, use (90, 0, 0). */" },
		{ "ModuleRelativePath", "Public/Elements/PCGLoadAlembicElement.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Rotation in Euler angles applied during import. For Max, use (90, 0, 0)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGLoadAlembicSettings_Statics::NewProp_ConversionRotation = { "ConversionRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGLoadAlembicSettings, ConversionRotation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGLoadAlembicSettings_Statics::NewProp_ConversionRotation_MetaData), Z_Construct_UClass_UPCGLoadAlembicSettings_Statics::NewProp_ConversionRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGLoadAlembicSettings_Statics::NewProp_bConversionFlipHandedness_MetaData[] = {
		{ "Category", "Alembic" },
		{ "ModuleRelativePath", "Public/Elements/PCGLoadAlembicElement.h" },
		{ "PCG_Overridable", "" },
		{ "Tooltip", "Flips rotation direction (W), useful together with swizzling" },
	};
#endif
	void Z_Construct_UClass_UPCGLoadAlembicSettings_Statics::NewProp_bConversionFlipHandedness_SetBit(void* Obj)
	{
		((UPCGLoadAlembicSettings*)Obj)->bConversionFlipHandedness = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGLoadAlembicSettings_Statics::NewProp_bConversionFlipHandedness = { "bConversionFlipHandedness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGLoadAlembicSettings), &Z_Construct_UClass_UPCGLoadAlembicSettings_Statics::NewProp_bConversionFlipHandedness_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGLoadAlembicSettings_Statics::NewProp_bConversionFlipHandedness_MetaData), Z_Construct_UClass_UPCGLoadAlembicSettings_Statics::NewProp_bConversionFlipHandedness_MetaData) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGLoadAlembicSettings_Statics::NewProp_Setup_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGLoadAlembicSettings_Statics::NewProp_Setup_MetaData[] = {
		{ "Category", "Alembic" },
		{ "DisplayName", "Setup from standard" },
		{ "ModuleRelativePath", "Public/Elements/PCGLoadAlembicElement.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGLoadAlembicSettings_Statics::NewProp_Setup = { "Setup", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGLoadAlembicSettings, Setup), Z_Construct_UEnum_PCGExternalDataInterop_EPCGLoadAlembicStandardSetup, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGLoadAlembicSettings_Statics::NewProp_Setup_MetaData), Z_Construct_UClass_UPCGLoadAlembicSettings_Statics::NewProp_Setup_MetaData) }; // 3482278336
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGLoadAlembicSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGLoadAlembicSettings_Statics::NewProp_AlembicFilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGLoadAlembicSettings_Statics::NewProp_ConversionScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGLoadAlembicSettings_Statics::NewProp_ConversionRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGLoadAlembicSettings_Statics::NewProp_bConversionFlipHandedness,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGLoadAlembicSettings_Statics::NewProp_Setup_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGLoadAlembicSettings_Statics::NewProp_Setup,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGLoadAlembicSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGLoadAlembicSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGLoadAlembicSettings_Statics::ClassParams = {
		&UPCGLoadAlembicSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPCGLoadAlembicSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGLoadAlembicSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGLoadAlembicSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGLoadAlembicSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGLoadAlembicSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPCGLoadAlembicSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGLoadAlembicSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGLoadAlembicSettings.OuterSingleton, Z_Construct_UClass_UPCGLoadAlembicSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGLoadAlembicSettings.OuterSingleton;
	}
	template<> PCGEXTERNALDATAINTEROP_API UClass* StaticClass<UPCGLoadAlembicSettings>()
	{
		return UPCGLoadAlembicSettings::StaticClass();
	}
	UPCGLoadAlembicSettings::UPCGLoadAlembicSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGLoadAlembicSettings);
	UPCGLoadAlembicSettings::~UPCGLoadAlembicSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCGExternalDataInterop_Source_PCGExternalDataInterop_Public_Elements_PCGLoadAlembicElement_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCGExternalDataInterop_Source_PCGExternalDataInterop_Public_Elements_PCGLoadAlembicElement_h_Statics::EnumInfo[] = {
		{ EPCGLoadAlembicStandardSetup_StaticEnum, TEXT("EPCGLoadAlembicStandardSetup"), &Z_Registration_Info_UEnum_EPCGLoadAlembicStandardSetup, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3482278336U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCGExternalDataInterop_Source_PCGExternalDataInterop_Public_Elements_PCGLoadAlembicElement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGLoadAlembicSettings, UPCGLoadAlembicSettings::StaticClass, TEXT("UPCGLoadAlembicSettings"), &Z_Registration_Info_UClass_UPCGLoadAlembicSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGLoadAlembicSettings), 3069256118U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCGExternalDataInterop_Source_PCGExternalDataInterop_Public_Elements_PCGLoadAlembicElement_h_696747556(TEXT("/Script/PCGExternalDataInterop"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCGExternalDataInterop_Source_PCGExternalDataInterop_Public_Elements_PCGLoadAlembicElement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCGExternalDataInterop_Source_PCGExternalDataInterop_Public_Elements_PCGLoadAlembicElement_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCGExternalDataInterop_Source_PCGExternalDataInterop_Public_Elements_PCGLoadAlembicElement_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCGExternalDataInterop_Source_PCGExternalDataInterop_Public_Elements_PCGLoadAlembicElement_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
