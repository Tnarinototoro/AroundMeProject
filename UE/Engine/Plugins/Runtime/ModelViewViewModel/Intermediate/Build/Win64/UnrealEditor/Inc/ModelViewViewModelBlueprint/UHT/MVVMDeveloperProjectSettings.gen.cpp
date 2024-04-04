// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MVVMDeveloperProjectSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMVVMDeveloperProjectSettings() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	MODELVIEWVIEWMODEL_API UEnum* Z_Construct_UEnum_ModelViewViewModel_EMVVMExecutionMode();
	MODELVIEWVIEWMODELBLUEPRINT_API UClass* Z_Construct_UClass_UMVVMDeveloperProjectSettings();
	MODELVIEWVIEWMODELBLUEPRINT_API UClass* Z_Construct_UClass_UMVVMDeveloperProjectSettings_NoRegister();
	MODELVIEWVIEWMODELBLUEPRINT_API UEnum* Z_Construct_UEnum_ModelViewViewModelBlueprint_EFilterFlag();
	MODELVIEWVIEWMODELBLUEPRINT_API UEnum* Z_Construct_UEnum_ModelViewViewModelBlueprint_EMVVMBlueprintViewModelContextCreationType();
	MODELVIEWVIEWMODELBLUEPRINT_API UEnum* Z_Construct_UEnum_ModelViewViewModelBlueprint_EMVVMDeveloperConversionFunctionFilterType();
	MODELVIEWVIEWMODELBLUEPRINT_API UScriptStruct* Z_Construct_UScriptStruct_FMVVMDeveloperProjectWidgetSettings();
	MODELVIEWVIEWMODELBLUEPRINT_API UScriptStruct* Z_Construct_UScriptStruct_FMVVMViewBindingFilterSettings();
	UPackage* Z_Construct_UPackage__Script_ModelViewViewModelBlueprint();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MVVMDeveloperProjectWidgetSettings;
class UScriptStruct* FMVVMDeveloperProjectWidgetSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MVVMDeveloperProjectWidgetSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MVVMDeveloperProjectWidgetSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMVVMDeveloperProjectWidgetSettings, (UObject*)Z_Construct_UPackage__Script_ModelViewViewModelBlueprint(), TEXT("MVVMDeveloperProjectWidgetSettings"));
	}
	return Z_Registration_Info_UScriptStruct_MVVMDeveloperProjectWidgetSettings.OuterSingleton;
}
template<> MODELVIEWVIEWMODELBLUEPRINT_API UScriptStruct* StaticStruct<FMVVMDeveloperProjectWidgetSettings>()
{
	return FMVVMDeveloperProjectWidgetSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMVVMDeveloperProjectWidgetSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FNamePropertyParams NewProp_DisallowedFieldNames_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisallowedFieldNames_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_DisallowedFieldNames;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AdvancedFieldNames_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdvancedFieldNames_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_AdvancedFieldNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMDeveloperProjectWidgetSettings_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/MVVMDeveloperProjectSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMVVMDeveloperProjectWidgetSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMVVMDeveloperProjectWidgetSettings>();
	}
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMVVMDeveloperProjectWidgetSettings_Statics::NewProp_DisallowedFieldNames_ElementProp = { "DisallowedFieldNames", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMDeveloperProjectWidgetSettings_Statics::NewProp_DisallowedFieldNames_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "Comment", "/** Properties or functions name that should not be use for binding (read or write). */" },
		{ "ModuleRelativePath", "Public/MVVMDeveloperProjectSettings.h" },
		{ "ToolTip", "Properties or functions name that should not be use for binding (read or write)." },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FMVVMDeveloperProjectWidgetSettings_Statics::NewProp_DisallowedFieldNames = { "DisallowedFieldNames", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMDeveloperProjectWidgetSettings, DisallowedFieldNames), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMDeveloperProjectWidgetSettings_Statics::NewProp_DisallowedFieldNames_MetaData), Z_Construct_UScriptStruct_FMVVMDeveloperProjectWidgetSettings_Statics::NewProp_DisallowedFieldNames_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMVVMDeveloperProjectWidgetSettings_Statics::NewProp_AdvancedFieldNames_ElementProp = { "AdvancedFieldNames", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMDeveloperProjectWidgetSettings_Statics::NewProp_AdvancedFieldNames_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "Comment", "/** Properties or functions name that are displayed in the advanced category. */" },
		{ "ModuleRelativePath", "Public/MVVMDeveloperProjectSettings.h" },
		{ "ToolTip", "Properties or functions name that are displayed in the advanced category." },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FMVVMDeveloperProjectWidgetSettings_Statics::NewProp_AdvancedFieldNames = { "AdvancedFieldNames", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMDeveloperProjectWidgetSettings, AdvancedFieldNames), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMDeveloperProjectWidgetSettings_Statics::NewProp_AdvancedFieldNames_MetaData), Z_Construct_UScriptStruct_FMVVMDeveloperProjectWidgetSettings_Statics::NewProp_AdvancedFieldNames_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMVVMDeveloperProjectWidgetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMDeveloperProjectWidgetSettings_Statics::NewProp_DisallowedFieldNames_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMDeveloperProjectWidgetSettings_Statics::NewProp_DisallowedFieldNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMDeveloperProjectWidgetSettings_Statics::NewProp_AdvancedFieldNames_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMDeveloperProjectWidgetSettings_Statics::NewProp_AdvancedFieldNames,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMVVMDeveloperProjectWidgetSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModelViewViewModelBlueprint,
		nullptr,
		&NewStructOps,
		"MVVMDeveloperProjectWidgetSettings",
		Z_Construct_UScriptStruct_FMVVMDeveloperProjectWidgetSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMDeveloperProjectWidgetSettings_Statics::PropPointers),
		sizeof(FMVVMDeveloperProjectWidgetSettings),
		alignof(FMVVMDeveloperProjectWidgetSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMDeveloperProjectWidgetSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMVVMDeveloperProjectWidgetSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMDeveloperProjectWidgetSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMVVMDeveloperProjectWidgetSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_MVVMDeveloperProjectWidgetSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MVVMDeveloperProjectWidgetSettings.InnerSingleton, Z_Construct_UScriptStruct_FMVVMDeveloperProjectWidgetSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MVVMDeveloperProjectWidgetSettings.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFilterFlag;
	static UEnum* EFilterFlag_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFilterFlag.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFilterFlag.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModelViewViewModelBlueprint_EFilterFlag, (UObject*)Z_Construct_UPackage__Script_ModelViewViewModelBlueprint(), TEXT("EFilterFlag"));
		}
		return Z_Registration_Info_UEnum_EFilterFlag.OuterSingleton;
	}
	template<> MODELVIEWVIEWMODELBLUEPRINT_API UEnum* StaticEnum<EFilterFlag>()
	{
		return EFilterFlag_StaticEnum();
	}
	struct Z_Construct_UEnum_ModelViewViewModelBlueprint_EFilterFlag_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ModelViewViewModelBlueprint_EFilterFlag_Statics::Enumerators[] = {
		{ "EFilterFlag::None", (int64)EFilterFlag::None },
		{ "EFilterFlag::All", (int64)EFilterFlag::All },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ModelViewViewModelBlueprint_EFilterFlag_Statics::Enum_MetaDataParams[] = {
		{ "All.Name", "EFilterFlag::All" },
		{ "ModuleRelativePath", "Public/MVVMDeveloperProjectSettings.h" },
		{ "None.Name", "EFilterFlag::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModelViewViewModelBlueprint_EFilterFlag_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ModelViewViewModelBlueprint,
		nullptr,
		"EFilterFlag",
		"EFilterFlag",
		Z_Construct_UEnum_ModelViewViewModelBlueprint_EFilterFlag_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ModelViewViewModelBlueprint_EFilterFlag_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ModelViewViewModelBlueprint_EFilterFlag_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ModelViewViewModelBlueprint_EFilterFlag_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ModelViewViewModelBlueprint_EFilterFlag()
	{
		if (!Z_Registration_Info_UEnum_EFilterFlag.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFilterFlag.InnerSingleton, Z_Construct_UEnum_ModelViewViewModelBlueprint_EFilterFlag_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFilterFlag.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MVVMViewBindingFilterSettings;
class UScriptStruct* FMVVMViewBindingFilterSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MVVMViewBindingFilterSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MVVMViewBindingFilterSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMVVMViewBindingFilterSettings, (UObject*)Z_Construct_UPackage__Script_ModelViewViewModelBlueprint(), TEXT("MVVMViewBindingFilterSettings"));
	}
	return Z_Registration_Info_UScriptStruct_MVVMViewBindingFilterSettings.OuterSingleton;
}
template<> MODELVIEWVIEWMODELBLUEPRINT_API UScriptStruct* StaticStruct<FMVVMViewBindingFilterSettings>()
{
	return FMVVMViewBindingFilterSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMVVMViewBindingFilterSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_FilterFlags_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilterFlags_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FilterFlags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewBindingFilterSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MVVMDeveloperProjectSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMVVMViewBindingFilterSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMVVMViewBindingFilterSettings>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMVVMViewBindingFilterSettings_Statics::NewProp_FilterFlags_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewBindingFilterSettings_Statics::NewProp_FilterFlags_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "Comment", "/** Filter out the properties and functions that are not valid in the context of the binding. */" },
		{ "ModuleRelativePath", "Public/MVVMDeveloperProjectSettings.h" },
		{ "ToolTip", "Filter out the properties and functions that are not valid in the context of the binding." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMVVMViewBindingFilterSettings_Statics::NewProp_FilterFlags = { "FilterFlags", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMViewBindingFilterSettings, FilterFlags), Z_Construct_UEnum_ModelViewViewModelBlueprint_EFilterFlag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewBindingFilterSettings_Statics::NewProp_FilterFlags_MetaData), Z_Construct_UScriptStruct_FMVVMViewBindingFilterSettings_Statics::NewProp_FilterFlags_MetaData) }; // 1774890943
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMVVMViewBindingFilterSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewBindingFilterSettings_Statics::NewProp_FilterFlags_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewBindingFilterSettings_Statics::NewProp_FilterFlags,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMVVMViewBindingFilterSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModelViewViewModelBlueprint,
		nullptr,
		&NewStructOps,
		"MVVMViewBindingFilterSettings",
		Z_Construct_UScriptStruct_FMVVMViewBindingFilterSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewBindingFilterSettings_Statics::PropPointers),
		sizeof(FMVVMViewBindingFilterSettings),
		alignof(FMVVMViewBindingFilterSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewBindingFilterSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMVVMViewBindingFilterSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewBindingFilterSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMVVMViewBindingFilterSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_MVVMViewBindingFilterSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MVVMViewBindingFilterSettings.InnerSingleton, Z_Construct_UScriptStruct_FMVVMViewBindingFilterSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MVVMViewBindingFilterSettings.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMVVMDeveloperConversionFunctionFilterType;
	static UEnum* EMVVMDeveloperConversionFunctionFilterType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMVVMDeveloperConversionFunctionFilterType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMVVMDeveloperConversionFunctionFilterType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModelViewViewModelBlueprint_EMVVMDeveloperConversionFunctionFilterType, (UObject*)Z_Construct_UPackage__Script_ModelViewViewModelBlueprint(), TEXT("EMVVMDeveloperConversionFunctionFilterType"));
		}
		return Z_Registration_Info_UEnum_EMVVMDeveloperConversionFunctionFilterType.OuterSingleton;
	}
	template<> MODELVIEWVIEWMODELBLUEPRINT_API UEnum* StaticEnum<EMVVMDeveloperConversionFunctionFilterType>()
	{
		return EMVVMDeveloperConversionFunctionFilterType_StaticEnum();
	}
	struct Z_Construct_UEnum_ModelViewViewModelBlueprint_EMVVMDeveloperConversionFunctionFilterType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ModelViewViewModelBlueprint_EMVVMDeveloperConversionFunctionFilterType_Statics::Enumerators[] = {
		{ "EMVVMDeveloperConversionFunctionFilterType::BlueprintActionRegistry", (int64)EMVVMDeveloperConversionFunctionFilterType::BlueprintActionRegistry },
		{ "EMVVMDeveloperConversionFunctionFilterType::AllowedList", (int64)EMVVMDeveloperConversionFunctionFilterType::AllowedList },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ModelViewViewModelBlueprint_EMVVMDeveloperConversionFunctionFilterType_Statics::Enum_MetaDataParams[] = {
		{ "AllowedList.Comment", "/**\n *\n */" },
		{ "AllowedList.Name", "EMVVMDeveloperConversionFunctionFilterType::AllowedList" },
		{ "BlueprintActionRegistry.Comment", "/**\n *\n */" },
		{ "BlueprintActionRegistry.Name", "EMVVMDeveloperConversionFunctionFilterType::BlueprintActionRegistry" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/MVVMDeveloperProjectSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModelViewViewModelBlueprint_EMVVMDeveloperConversionFunctionFilterType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ModelViewViewModelBlueprint,
		nullptr,
		"EMVVMDeveloperConversionFunctionFilterType",
		"EMVVMDeveloperConversionFunctionFilterType",
		Z_Construct_UEnum_ModelViewViewModelBlueprint_EMVVMDeveloperConversionFunctionFilterType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ModelViewViewModelBlueprint_EMVVMDeveloperConversionFunctionFilterType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ModelViewViewModelBlueprint_EMVVMDeveloperConversionFunctionFilterType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ModelViewViewModelBlueprint_EMVVMDeveloperConversionFunctionFilterType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ModelViewViewModelBlueprint_EMVVMDeveloperConversionFunctionFilterType()
	{
		if (!Z_Registration_Info_UEnum_EMVVMDeveloperConversionFunctionFilterType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMVVMDeveloperConversionFunctionFilterType.InnerSingleton, Z_Construct_UEnum_ModelViewViewModelBlueprint_EMVVMDeveloperConversionFunctionFilterType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMVVMDeveloperConversionFunctionFilterType.InnerSingleton;
	}
	void UMVVMDeveloperProjectSettings::StaticRegisterNativesUMVVMDeveloperProjectSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMVVMDeveloperProjectSettings);
	UClass* Z_Construct_UClass_UMVVMDeveloperProjectSettings_NoRegister()
	{
		return UMVVMDeveloperProjectSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FieldSelectorPermissions_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FieldSelectorPermissions_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldSelectorPermissions_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_FieldSelectorPermissions;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AllowedExecutionMode_ElementProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AllowedExecutionMode_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowedExecutionMode_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_AllowedExecutionMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AllowedContextCreationType_ElementProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AllowedContextCreationType_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowedContextCreationType_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_AllowedContextCreationType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowBindingFromDetailView_MetaData[];
#endif
		static void NewProp_bAllowBindingFromDetailView_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowBindingFromDetailView;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowGeneratedViewModelSetter_MetaData[];
#endif
		static void NewProp_bAllowGeneratedViewModelSetter_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowGeneratedViewModelSetter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowLongSourcePath_MetaData[];
#endif
		static void NewProp_bAllowLongSourcePath_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowLongSourcePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowDetailViewOptionInBindingPanel_MetaData[];
#endif
		static void NewProp_bShowDetailViewOptionInBindingPanel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowDetailViewOptionInBindingPanel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowViewSettings_MetaData[];
#endif
		static void NewProp_bShowViewSettings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowViewSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowConversionFunctionGeneratedGraphInEditor_MetaData[];
#endif
		static void NewProp_bAllowConversionFunctionGeneratedGraphInEditor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowConversionFunctionGeneratedGraphInEditor;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ConversionFunctionFilter_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConversionFunctionFilter_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ConversionFunctionFilter;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AllowedClassForConversionFunctions_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowedClassForConversionFunctions_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_AllowedClassForConversionFunctions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilterSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FilterSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelViewViewModelBlueprint,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements the settings for the MVVM Editor\n */" },
		{ "IncludePath", "MVVMDeveloperProjectSettings.h" },
		{ "ModuleRelativePath", "Public/MVVMDeveloperProjectSettings.h" },
		{ "ToolTip", "Implements the settings for the MVVM Editor" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_FieldSelectorPermissions_ValueProp = { "FieldSelectorPermissions", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FMVVMDeveloperProjectWidgetSettings, METADATA_PARAMS(0, nullptr) }; // 4094201349
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_FieldSelectorPermissions_Key_KeyProp = { "FieldSelectorPermissions_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_FieldSelectorPermissions_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "Comment", "/** Permission list for filtering which properties are visible in UI. */" },
		{ "ModuleRelativePath", "Public/MVVMDeveloperProjectSettings.h" },
		{ "ToolTip", "Permission list for filtering which properties are visible in UI." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_FieldSelectorPermissions = { "FieldSelectorPermissions", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMVVMDeveloperProjectSettings, FieldSelectorPermissions), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_FieldSelectorPermissions_MetaData), Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_FieldSelectorPermissions_MetaData) }; // 4094201349
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_AllowedExecutionMode_ElementProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_AllowedExecutionMode_ElementProp = { "AllowedExecutionMode", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_ModelViewViewModel_EMVVMExecutionMode, METADATA_PARAMS(0, nullptr) }; // 4090638343
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_AllowedExecutionMode_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "Comment", "/** Permission list for filtering which execution mode is allowed. */" },
		{ "ModuleRelativePath", "Public/MVVMDeveloperProjectSettings.h" },
		{ "ToolTip", "Permission list for filtering which execution mode is allowed." },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_AllowedExecutionMode = { "AllowedExecutionMode", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMVVMDeveloperProjectSettings, AllowedExecutionMode), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_AllowedExecutionMode_MetaData), Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_AllowedExecutionMode_MetaData) }; // 4090638343
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_AllowedContextCreationType_ElementProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_AllowedContextCreationType_ElementProp = { "AllowedContextCreationType", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_ModelViewViewModelBlueprint_EMVVMBlueprintViewModelContextCreationType, METADATA_PARAMS(0, nullptr) }; // 2860116427
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_AllowedContextCreationType_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "Comment", "/** Permission list for filtering which context creation type is allowed. */" },
		{ "ModuleRelativePath", "Public/MVVMDeveloperProjectSettings.h" },
		{ "ToolTip", "Permission list for filtering which context creation type is allowed." },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_AllowedContextCreationType = { "AllowedContextCreationType", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMVVMDeveloperProjectSettings, AllowedContextCreationType), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_AllowedContextCreationType_MetaData), Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_AllowedContextCreationType_MetaData) }; // 2860116427
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_bAllowBindingFromDetailView_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "Comment", "/** Binding can be made from the DetailView Bind option. */" },
		{ "ModuleRelativePath", "Public/MVVMDeveloperProjectSettings.h" },
		{ "ToolTip", "Binding can be made from the DetailView Bind option." },
	};
#endif
	void Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_bAllowBindingFromDetailView_SetBit(void* Obj)
	{
		((UMVVMDeveloperProjectSettings*)Obj)->bAllowBindingFromDetailView = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_bAllowBindingFromDetailView = { "bAllowBindingFromDetailView", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMVVMDeveloperProjectSettings), &Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_bAllowBindingFromDetailView_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_bAllowBindingFromDetailView_MetaData), Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_bAllowBindingFromDetailView_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_bAllowGeneratedViewModelSetter_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "Comment", "/** When generating a source in the viewmodel editor, allow the compiler to generate a setter function. */" },
		{ "ModuleRelativePath", "Public/MVVMDeveloperProjectSettings.h" },
		{ "ToolTip", "When generating a source in the viewmodel editor, allow the compiler to generate a setter function." },
	};
#endif
	void Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_bAllowGeneratedViewModelSetter_SetBit(void* Obj)
	{
		((UMVVMDeveloperProjectSettings*)Obj)->bAllowGeneratedViewModelSetter = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_bAllowGeneratedViewModelSetter = { "bAllowGeneratedViewModelSetter", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMVVMDeveloperProjectSettings), &Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_bAllowGeneratedViewModelSetter_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_bAllowGeneratedViewModelSetter_MetaData), Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_bAllowGeneratedViewModelSetter_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_bAllowLongSourcePath_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "Comment", "/** When generating a binding with a long source path, allow the compiler to generate a new viewmodel source. */" },
		{ "ModuleRelativePath", "Public/MVVMDeveloperProjectSettings.h" },
		{ "ToolTip", "When generating a binding with a long source path, allow the compiler to generate a new viewmodel source." },
	};
#endif
	void Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_bAllowLongSourcePath_SetBit(void* Obj)
	{
		((UMVVMDeveloperProjectSettings*)Obj)->bAllowLongSourcePath = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_bAllowLongSourcePath = { "bAllowLongSourcePath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMVVMDeveloperProjectSettings), &Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_bAllowLongSourcePath_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_bAllowLongSourcePath_MetaData), Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_bAllowLongSourcePath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_bShowDetailViewOptionInBindingPanel_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "Comment", "/** For the binding list widget, allow the user to edit the binding in the detail view. */" },
		{ "ModuleRelativePath", "Public/MVVMDeveloperProjectSettings.h" },
		{ "ToolTip", "For the binding list widget, allow the user to edit the binding in the detail view." },
	};
#endif
	void Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_bShowDetailViewOptionInBindingPanel_SetBit(void* Obj)
	{
		((UMVVMDeveloperProjectSettings*)Obj)->bShowDetailViewOptionInBindingPanel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_bShowDetailViewOptionInBindingPanel = { "bShowDetailViewOptionInBindingPanel", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMVVMDeveloperProjectSettings), &Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_bShowDetailViewOptionInBindingPanel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_bShowDetailViewOptionInBindingPanel_MetaData), Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_bShowDetailViewOptionInBindingPanel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_bShowViewSettings_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "Comment", "/** For the binding list widget and the viewmodel panel, allow the user to edit the view settings in the detail view. */" },
		{ "ModuleRelativePath", "Public/MVVMDeveloperProjectSettings.h" },
		{ "ToolTip", "For the binding list widget and the viewmodel panel, allow the user to edit the view settings in the detail view." },
	};
#endif
	void Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_bShowViewSettings_SetBit(void* Obj)
	{
		((UMVVMDeveloperProjectSettings*)Obj)->bShowViewSettings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_bShowViewSettings = { "bShowViewSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMVVMDeveloperProjectSettings), &Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_bShowViewSettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_bShowViewSettings_MetaData), Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_bShowViewSettings_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_bAllowConversionFunctionGeneratedGraphInEditor_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "Comment", "/** When a conversion function requires a wrapper graph, add and save the generated graph to the blueprint. */" },
		{ "ModuleRelativePath", "Public/MVVMDeveloperProjectSettings.h" },
		{ "ToolTip", "When a conversion function requires a wrapper graph, add and save the generated graph to the blueprint." },
	};
#endif
	void Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_bAllowConversionFunctionGeneratedGraphInEditor_SetBit(void* Obj)
	{
		((UMVVMDeveloperProjectSettings*)Obj)->bAllowConversionFunctionGeneratedGraphInEditor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_bAllowConversionFunctionGeneratedGraphInEditor = { "bAllowConversionFunctionGeneratedGraphInEditor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMVVMDeveloperProjectSettings), &Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_bAllowConversionFunctionGeneratedGraphInEditor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_bAllowConversionFunctionGeneratedGraphInEditor_MetaData), Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_bAllowConversionFunctionGeneratedGraphInEditor_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_ConversionFunctionFilter_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_ConversionFunctionFilter_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "Comment", "/** Permission list for filtering which execution mode is allowed. */" },
		{ "ModuleRelativePath", "Public/MVVMDeveloperProjectSettings.h" },
		{ "ToolTip", "Permission list for filtering which execution mode is allowed." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_ConversionFunctionFilter = { "ConversionFunctionFilter", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMVVMDeveloperProjectSettings, ConversionFunctionFilter), Z_Construct_UEnum_ModelViewViewModelBlueprint_EMVVMDeveloperConversionFunctionFilterType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_ConversionFunctionFilter_MetaData), Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_ConversionFunctionFilter_MetaData) }; // 1348743657
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_AllowedClassForConversionFunctions_ElementProp = { "AllowedClassForConversionFunctions", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_AllowedClassForConversionFunctions_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "Comment", "/** Individual class that are allowed to be uses as conversion functions. */" },
		{ "EditCondition", "ConversionFunctionFilter == EMVVMDeveloperConversionFunctionFilterType::AllowedList" },
		{ "ModuleRelativePath", "Public/MVVMDeveloperProjectSettings.h" },
		{ "ToolTip", "Individual class that are allowed to be uses as conversion functions." },
	};
#endif
	static_assert(TModels_V<CGetTypeHashable, FSoftClassPath>, "The structure 'FSoftClassPath' is used in a TSet but does not have a GetValueTypeHash defined");
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_AllowedClassForConversionFunctions = { "AllowedClassForConversionFunctions", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMVVMDeveloperProjectSettings, AllowedClassForConversionFunctions), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_AllowedClassForConversionFunctions_MetaData), Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_AllowedClassForConversionFunctions_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_FilterSettings_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "Comment", "/** Settings for filtering the list of available properties and functions on binding creation. */" },
		{ "ModuleRelativePath", "Public/MVVMDeveloperProjectSettings.h" },
		{ "ToolTip", "Settings for filtering the list of available properties and functions on binding creation." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_FilterSettings = { "FilterSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMVVMDeveloperProjectSettings, FilterSettings), Z_Construct_UScriptStruct_FMVVMViewBindingFilterSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_FilterSettings_MetaData), Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_FilterSettings_MetaData) }; // 280076058
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_FieldSelectorPermissions_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_FieldSelectorPermissions_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_FieldSelectorPermissions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_AllowedExecutionMode_ElementProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_AllowedExecutionMode_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_AllowedExecutionMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_AllowedContextCreationType_ElementProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_AllowedContextCreationType_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_AllowedContextCreationType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_bAllowBindingFromDetailView,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_bAllowGeneratedViewModelSetter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_bAllowLongSourcePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_bShowDetailViewOptionInBindingPanel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_bShowViewSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_bAllowConversionFunctionGeneratedGraphInEditor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_ConversionFunctionFilter_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_ConversionFunctionFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_AllowedClassForConversionFunctions_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_AllowedClassForConversionFunctions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::NewProp_FilterSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMVVMDeveloperProjectSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::ClassParams = {
		&UMVVMDeveloperProjectSettings::StaticClass,
		"ModelViewViewModel",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMVVMDeveloperProjectSettings()
	{
		if (!Z_Registration_Info_UClass_UMVVMDeveloperProjectSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMVVMDeveloperProjectSettings.OuterSingleton, Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMVVMDeveloperProjectSettings.OuterSingleton;
	}
	template<> MODELVIEWVIEWMODELBLUEPRINT_API UClass* StaticClass<UMVVMDeveloperProjectSettings>()
	{
		return UMVVMDeveloperProjectSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMVVMDeveloperProjectSettings);
	UMVVMDeveloperProjectSettings::~UMVVMDeveloperProjectSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMDeveloperProjectSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMDeveloperProjectSettings_h_Statics::EnumInfo[] = {
		{ EFilterFlag_StaticEnum, TEXT("EFilterFlag"), &Z_Registration_Info_UEnum_EFilterFlag, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1774890943U) },
		{ EMVVMDeveloperConversionFunctionFilterType_StaticEnum, TEXT("EMVVMDeveloperConversionFunctionFilterType"), &Z_Registration_Info_UEnum_EMVVMDeveloperConversionFunctionFilterType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1348743657U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMDeveloperProjectSettings_h_Statics::ScriptStructInfo[] = {
		{ FMVVMDeveloperProjectWidgetSettings::StaticStruct, Z_Construct_UScriptStruct_FMVVMDeveloperProjectWidgetSettings_Statics::NewStructOps, TEXT("MVVMDeveloperProjectWidgetSettings"), &Z_Registration_Info_UScriptStruct_MVVMDeveloperProjectWidgetSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMVVMDeveloperProjectWidgetSettings), 4094201349U) },
		{ FMVVMViewBindingFilterSettings::StaticStruct, Z_Construct_UScriptStruct_FMVVMViewBindingFilterSettings_Statics::NewStructOps, TEXT("MVVMViewBindingFilterSettings"), &Z_Registration_Info_UScriptStruct_MVVMViewBindingFilterSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMVVMViewBindingFilterSettings), 280076058U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMDeveloperProjectSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMVVMDeveloperProjectSettings, UMVVMDeveloperProjectSettings::StaticClass, TEXT("UMVVMDeveloperProjectSettings"), &Z_Registration_Info_UClass_UMVVMDeveloperProjectSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMVVMDeveloperProjectSettings), 1110363656U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMDeveloperProjectSettings_h_157555440(TEXT("/Script/ModelViewViewModelBlueprint"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMDeveloperProjectSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMDeveloperProjectSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMDeveloperProjectSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMDeveloperProjectSettings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMDeveloperProjectSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMDeveloperProjectSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
