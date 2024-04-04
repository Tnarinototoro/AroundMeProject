// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/PCGEditorGraphSchemaActions.h"
#include "PCGSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGEditorGraphSchemaActions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
	PCG_API UClass* Z_Construct_UClass_UPCGSettings_NoRegister();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGPreConfiguredSettingsInfo();
	PCGEDITOR_API UEnum* Z_Construct_UEnum_PCGEditor_EPCGEditorNewSettingsBehavior();
	PCGEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewBlueprintElement();
	PCGEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewComment();
	PCGEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewGetParameterElement();
	PCGEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewNativeElement();
	PCGEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewReroute();
	PCGEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewSettingsElement();
	PCGEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewSubgraphElement();
	UPackage* Z_Construct_UPackage__Script_PCGEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGEditorNewSettingsBehavior;
	static UEnum* EPCGEditorNewSettingsBehavior_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGEditorNewSettingsBehavior.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGEditorNewSettingsBehavior.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGEditor_EPCGEditorNewSettingsBehavior, (UObject*)Z_Construct_UPackage__Script_PCGEditor(), TEXT("EPCGEditorNewSettingsBehavior"));
		}
		return Z_Registration_Info_UEnum_EPCGEditorNewSettingsBehavior.OuterSingleton;
	}
	template<> PCGEDITOR_API UEnum* StaticEnum<EPCGEditorNewSettingsBehavior>()
	{
		return EPCGEditorNewSettingsBehavior_StaticEnum();
	}
	struct Z_Construct_UEnum_PCGEditor_EPCGEditorNewSettingsBehavior_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCGEditor_EPCGEditorNewSettingsBehavior_Statics::Enumerators[] = {
		{ "EPCGEditorNewSettingsBehavior::Normal", (int64)EPCGEditorNewSettingsBehavior::Normal },
		{ "EPCGEditorNewSettingsBehavior::ForceCopy", (int64)EPCGEditorNewSettingsBehavior::ForceCopy },
		{ "EPCGEditorNewSettingsBehavior::ForceInstance", (int64)EPCGEditorNewSettingsBehavior::ForceInstance },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCGEditor_EPCGEditorNewSettingsBehavior_Statics::Enum_MetaDataParams[] = {
		{ "ForceCopy.Name", "EPCGEditorNewSettingsBehavior::ForceCopy" },
		{ "ForceInstance.Name", "EPCGEditorNewSettingsBehavior::ForceInstance" },
		{ "ModuleRelativePath", "Private/PCGEditorGraphSchemaActions.h" },
		{ "Normal.Name", "EPCGEditorNewSettingsBehavior::Normal" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGEditor_EPCGEditorNewSettingsBehavior_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCGEditor,
		nullptr,
		"EPCGEditorNewSettingsBehavior",
		"EPCGEditorNewSettingsBehavior",
		Z_Construct_UEnum_PCGEditor_EPCGEditorNewSettingsBehavior_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCGEditor_EPCGEditorNewSettingsBehavior_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGEditor_EPCGEditorNewSettingsBehavior_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGEditor_EPCGEditorNewSettingsBehavior_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_PCGEditor_EPCGEditorNewSettingsBehavior()
	{
		if (!Z_Registration_Info_UEnum_EPCGEditorNewSettingsBehavior.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGEditorNewSettingsBehavior.InnerSingleton, Z_Construct_UEnum_PCGEditor_EPCGEditorNewSettingsBehavior_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGEditorNewSettingsBehavior.InnerSingleton;
	}

static_assert(std::is_polymorphic<FPCGEditorGraphSchemaAction_NewNativeElement>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FPCGEditorGraphSchemaAction_NewNativeElement cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PCGEditorGraphSchemaAction_NewNativeElement;
class UScriptStruct* FPCGEditorGraphSchemaAction_NewNativeElement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PCGEditorGraphSchemaAction_NewNativeElement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PCGEditorGraphSchemaAction_NewNativeElement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewNativeElement, (UObject*)Z_Construct_UPackage__Script_PCGEditor(), TEXT("PCGEditorGraphSchemaAction_NewNativeElement"));
	}
	return Z_Registration_Info_UScriptStruct_PCGEditorGraphSchemaAction_NewNativeElement.OuterSingleton;
}
template<> PCGEDITOR_API UScriptStruct* StaticStruct<FPCGEditorGraphSchemaAction_NewNativeElement>()
{
	return FPCGEditorGraphSchemaAction_NewNativeElement::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewNativeElement_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SettingsClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SettingsClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreconfiguredInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreconfiguredInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewNativeElement_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/PCGEditorGraphSchemaActions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewNativeElement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGEditorGraphSchemaAction_NewNativeElement>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewNativeElement_Statics::NewProp_SettingsClass_MetaData[] = {
		{ "ModuleRelativePath", "Private/PCGEditorGraphSchemaActions.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewNativeElement_Statics::NewProp_SettingsClass = { "SettingsClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGEditorGraphSchemaAction_NewNativeElement, SettingsClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UPCGSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewNativeElement_Statics::NewProp_SettingsClass_MetaData), Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewNativeElement_Statics::NewProp_SettingsClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewNativeElement_Statics::NewProp_PreconfiguredInfo_MetaData[] = {
		{ "ModuleRelativePath", "Private/PCGEditorGraphSchemaActions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewNativeElement_Statics::NewProp_PreconfiguredInfo = { "PreconfiguredInfo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGEditorGraphSchemaAction_NewNativeElement, PreconfiguredInfo), Z_Construct_UScriptStruct_FPCGPreConfiguredSettingsInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewNativeElement_Statics::NewProp_PreconfiguredInfo_MetaData), Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewNativeElement_Statics::NewProp_PreconfiguredInfo_MetaData) }; // 1717054666
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewNativeElement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewNativeElement_Statics::NewProp_SettingsClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewNativeElement_Statics::NewProp_PreconfiguredInfo,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewNativeElement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PCGEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"PCGEditorGraphSchemaAction_NewNativeElement",
		Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewNativeElement_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewNativeElement_Statics::PropPointers),
		sizeof(FPCGEditorGraphSchemaAction_NewNativeElement),
		alignof(FPCGEditorGraphSchemaAction_NewNativeElement),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewNativeElement_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewNativeElement_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewNativeElement_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewNativeElement()
	{
		if (!Z_Registration_Info_UScriptStruct_PCGEditorGraphSchemaAction_NewNativeElement.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PCGEditorGraphSchemaAction_NewNativeElement.InnerSingleton, Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewNativeElement_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PCGEditorGraphSchemaAction_NewNativeElement.InnerSingleton;
	}

static_assert(std::is_polymorphic<FPCGEditorGraphSchemaAction_NewGetParameterElement>() == std::is_polymorphic<FPCGEditorGraphSchemaAction_NewNativeElement>(), "USTRUCT FPCGEditorGraphSchemaAction_NewGetParameterElement cannot be polymorphic unless super FPCGEditorGraphSchemaAction_NewNativeElement is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PCGEditorGraphSchemaAction_NewGetParameterElement;
class UScriptStruct* FPCGEditorGraphSchemaAction_NewGetParameterElement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PCGEditorGraphSchemaAction_NewGetParameterElement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PCGEditorGraphSchemaAction_NewGetParameterElement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewGetParameterElement, (UObject*)Z_Construct_UPackage__Script_PCGEditor(), TEXT("PCGEditorGraphSchemaAction_NewGetParameterElement"));
	}
	return Z_Registration_Info_UScriptStruct_PCGEditorGraphSchemaAction_NewGetParameterElement.OuterSingleton;
}
template<> PCGEDITOR_API UScriptStruct* StaticStruct<FPCGEditorGraphSchemaAction_NewGetParameterElement>()
{
	return FPCGEditorGraphSchemaAction_NewGetParameterElement::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewGetParameterElement_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewGetParameterElement_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/PCGEditorGraphSchemaActions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewGetParameterElement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGEditorGraphSchemaAction_NewGetParameterElement>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewGetParameterElement_Statics::NewProp_PropertyGuid_MetaData[] = {
		{ "ModuleRelativePath", "Private/PCGEditorGraphSchemaActions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewGetParameterElement_Statics::NewProp_PropertyGuid = { "PropertyGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGEditorGraphSchemaAction_NewGetParameterElement, PropertyGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewGetParameterElement_Statics::NewProp_PropertyGuid_MetaData), Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewGetParameterElement_Statics::NewProp_PropertyGuid_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewGetParameterElement_Statics::NewProp_PropertyName_MetaData[] = {
		{ "ModuleRelativePath", "Private/PCGEditorGraphSchemaActions.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewGetParameterElement_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGEditorGraphSchemaAction_NewGetParameterElement, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewGetParameterElement_Statics::NewProp_PropertyName_MetaData), Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewGetParameterElement_Statics::NewProp_PropertyName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewGetParameterElement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewGetParameterElement_Statics::NewProp_PropertyGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewGetParameterElement_Statics::NewProp_PropertyName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewGetParameterElement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PCGEditor,
		Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewNativeElement,
		&NewStructOps,
		"PCGEditorGraphSchemaAction_NewGetParameterElement",
		Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewGetParameterElement_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewGetParameterElement_Statics::PropPointers),
		sizeof(FPCGEditorGraphSchemaAction_NewGetParameterElement),
		alignof(FPCGEditorGraphSchemaAction_NewGetParameterElement),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewGetParameterElement_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewGetParameterElement_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewGetParameterElement_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewGetParameterElement()
	{
		if (!Z_Registration_Info_UScriptStruct_PCGEditorGraphSchemaAction_NewGetParameterElement.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PCGEditorGraphSchemaAction_NewGetParameterElement.InnerSingleton, Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewGetParameterElement_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PCGEditorGraphSchemaAction_NewGetParameterElement.InnerSingleton;
	}

static_assert(std::is_polymorphic<FPCGEditorGraphSchemaAction_NewSettingsElement>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FPCGEditorGraphSchemaAction_NewSettingsElement cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PCGEditorGraphSchemaAction_NewSettingsElement;
class UScriptStruct* FPCGEditorGraphSchemaAction_NewSettingsElement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PCGEditorGraphSchemaAction_NewSettingsElement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PCGEditorGraphSchemaAction_NewSettingsElement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewSettingsElement, (UObject*)Z_Construct_UPackage__Script_PCGEditor(), TEXT("PCGEditorGraphSchemaAction_NewSettingsElement"));
	}
	return Z_Registration_Info_UScriptStruct_PCGEditorGraphSchemaAction_NewSettingsElement.OuterSingleton;
}
template<> PCGEDITOR_API UScriptStruct* StaticStruct<FPCGEditorGraphSchemaAction_NewSettingsElement>()
{
	return FPCGEditorGraphSchemaAction_NewSettingsElement::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewSettingsElement_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SettingsObjectPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SettingsObjectPath;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Behavior_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Behavior_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Behavior;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewSettingsElement_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/PCGEditorGraphSchemaActions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewSettingsElement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGEditorGraphSchemaAction_NewSettingsElement>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewSettingsElement_Statics::NewProp_SettingsObjectPath_MetaData[] = {
		{ "ModuleRelativePath", "Private/PCGEditorGraphSchemaActions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewSettingsElement_Statics::NewProp_SettingsObjectPath = { "SettingsObjectPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGEditorGraphSchemaAction_NewSettingsElement, SettingsObjectPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewSettingsElement_Statics::NewProp_SettingsObjectPath_MetaData), Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewSettingsElement_Statics::NewProp_SettingsObjectPath_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewSettingsElement_Statics::NewProp_Behavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewSettingsElement_Statics::NewProp_Behavior_MetaData[] = {
		{ "ModuleRelativePath", "Private/PCGEditorGraphSchemaActions.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewSettingsElement_Statics::NewProp_Behavior = { "Behavior", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGEditorGraphSchemaAction_NewSettingsElement, Behavior), Z_Construct_UEnum_PCGEditor_EPCGEditorNewSettingsBehavior, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewSettingsElement_Statics::NewProp_Behavior_MetaData), Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewSettingsElement_Statics::NewProp_Behavior_MetaData) }; // 2677742241
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewSettingsElement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewSettingsElement_Statics::NewProp_SettingsObjectPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewSettingsElement_Statics::NewProp_Behavior_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewSettingsElement_Statics::NewProp_Behavior,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewSettingsElement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PCGEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"PCGEditorGraphSchemaAction_NewSettingsElement",
		Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewSettingsElement_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewSettingsElement_Statics::PropPointers),
		sizeof(FPCGEditorGraphSchemaAction_NewSettingsElement),
		alignof(FPCGEditorGraphSchemaAction_NewSettingsElement),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewSettingsElement_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewSettingsElement_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewSettingsElement_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewSettingsElement()
	{
		if (!Z_Registration_Info_UScriptStruct_PCGEditorGraphSchemaAction_NewSettingsElement.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PCGEditorGraphSchemaAction_NewSettingsElement.InnerSingleton, Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewSettingsElement_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PCGEditorGraphSchemaAction_NewSettingsElement.InnerSingleton;
	}

static_assert(std::is_polymorphic<FPCGEditorGraphSchemaAction_NewBlueprintElement>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FPCGEditorGraphSchemaAction_NewBlueprintElement cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PCGEditorGraphSchemaAction_NewBlueprintElement;
class UScriptStruct* FPCGEditorGraphSchemaAction_NewBlueprintElement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PCGEditorGraphSchemaAction_NewBlueprintElement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PCGEditorGraphSchemaAction_NewBlueprintElement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewBlueprintElement, (UObject*)Z_Construct_UPackage__Script_PCGEditor(), TEXT("PCGEditorGraphSchemaAction_NewBlueprintElement"));
	}
	return Z_Registration_Info_UScriptStruct_PCGEditorGraphSchemaAction_NewBlueprintElement.OuterSingleton;
}
template<> PCGEDITOR_API UScriptStruct* StaticStruct<FPCGEditorGraphSchemaAction_NewBlueprintElement>()
{
	return FPCGEditorGraphSchemaAction_NewBlueprintElement::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewBlueprintElement_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintClassPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlueprintClassPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreconfiguredInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreconfiguredInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewBlueprintElement_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/PCGEditorGraphSchemaActions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewBlueprintElement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGEditorGraphSchemaAction_NewBlueprintElement>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewBlueprintElement_Statics::NewProp_BlueprintClassPath_MetaData[] = {
		{ "ModuleRelativePath", "Private/PCGEditorGraphSchemaActions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewBlueprintElement_Statics::NewProp_BlueprintClassPath = { "BlueprintClassPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGEditorGraphSchemaAction_NewBlueprintElement, BlueprintClassPath), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewBlueprintElement_Statics::NewProp_BlueprintClassPath_MetaData), Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewBlueprintElement_Statics::NewProp_BlueprintClassPath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewBlueprintElement_Statics::NewProp_PreconfiguredInfo_MetaData[] = {
		{ "ModuleRelativePath", "Private/PCGEditorGraphSchemaActions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewBlueprintElement_Statics::NewProp_PreconfiguredInfo = { "PreconfiguredInfo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGEditorGraphSchemaAction_NewBlueprintElement, PreconfiguredInfo), Z_Construct_UScriptStruct_FPCGPreConfiguredSettingsInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewBlueprintElement_Statics::NewProp_PreconfiguredInfo_MetaData), Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewBlueprintElement_Statics::NewProp_PreconfiguredInfo_MetaData) }; // 1717054666
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewBlueprintElement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewBlueprintElement_Statics::NewProp_BlueprintClassPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewBlueprintElement_Statics::NewProp_PreconfiguredInfo,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewBlueprintElement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PCGEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"PCGEditorGraphSchemaAction_NewBlueprintElement",
		Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewBlueprintElement_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewBlueprintElement_Statics::PropPointers),
		sizeof(FPCGEditorGraphSchemaAction_NewBlueprintElement),
		alignof(FPCGEditorGraphSchemaAction_NewBlueprintElement),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewBlueprintElement_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewBlueprintElement_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewBlueprintElement_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewBlueprintElement()
	{
		if (!Z_Registration_Info_UScriptStruct_PCGEditorGraphSchemaAction_NewBlueprintElement.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PCGEditorGraphSchemaAction_NewBlueprintElement.InnerSingleton, Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewBlueprintElement_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PCGEditorGraphSchemaAction_NewBlueprintElement.InnerSingleton;
	}

static_assert(std::is_polymorphic<FPCGEditorGraphSchemaAction_NewSubgraphElement>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FPCGEditorGraphSchemaAction_NewSubgraphElement cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PCGEditorGraphSchemaAction_NewSubgraphElement;
class UScriptStruct* FPCGEditorGraphSchemaAction_NewSubgraphElement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PCGEditorGraphSchemaAction_NewSubgraphElement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PCGEditorGraphSchemaAction_NewSubgraphElement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewSubgraphElement, (UObject*)Z_Construct_UPackage__Script_PCGEditor(), TEXT("PCGEditorGraphSchemaAction_NewSubgraphElement"));
	}
	return Z_Registration_Info_UScriptStruct_PCGEditorGraphSchemaAction_NewSubgraphElement.OuterSingleton;
}
template<> PCGEDITOR_API UScriptStruct* StaticStruct<FPCGEditorGraphSchemaAction_NewSubgraphElement>()
{
	return FPCGEditorGraphSchemaAction_NewSubgraphElement::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewSubgraphElement_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubgraphObjectPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SubgraphObjectPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewSubgraphElement_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/PCGEditorGraphSchemaActions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewSubgraphElement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGEditorGraphSchemaAction_NewSubgraphElement>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewSubgraphElement_Statics::NewProp_SubgraphObjectPath_MetaData[] = {
		{ "ModuleRelativePath", "Private/PCGEditorGraphSchemaActions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewSubgraphElement_Statics::NewProp_SubgraphObjectPath = { "SubgraphObjectPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGEditorGraphSchemaAction_NewSubgraphElement, SubgraphObjectPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewSubgraphElement_Statics::NewProp_SubgraphObjectPath_MetaData), Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewSubgraphElement_Statics::NewProp_SubgraphObjectPath_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewSubgraphElement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewSubgraphElement_Statics::NewProp_SubgraphObjectPath,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewSubgraphElement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PCGEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"PCGEditorGraphSchemaAction_NewSubgraphElement",
		Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewSubgraphElement_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewSubgraphElement_Statics::PropPointers),
		sizeof(FPCGEditorGraphSchemaAction_NewSubgraphElement),
		alignof(FPCGEditorGraphSchemaAction_NewSubgraphElement),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewSubgraphElement_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewSubgraphElement_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewSubgraphElement_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewSubgraphElement()
	{
		if (!Z_Registration_Info_UScriptStruct_PCGEditorGraphSchemaAction_NewSubgraphElement.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PCGEditorGraphSchemaAction_NewSubgraphElement.InnerSingleton, Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewSubgraphElement_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PCGEditorGraphSchemaAction_NewSubgraphElement.InnerSingleton;
	}

static_assert(std::is_polymorphic<FPCGEditorGraphSchemaAction_NewComment>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FPCGEditorGraphSchemaAction_NewComment cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PCGEditorGraphSchemaAction_NewComment;
class UScriptStruct* FPCGEditorGraphSchemaAction_NewComment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PCGEditorGraphSchemaAction_NewComment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PCGEditorGraphSchemaAction_NewComment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewComment, (UObject*)Z_Construct_UPackage__Script_PCGEditor(), TEXT("PCGEditorGraphSchemaAction_NewComment"));
	}
	return Z_Registration_Info_UScriptStruct_PCGEditorGraphSchemaAction_NewComment.OuterSingleton;
}
template<> PCGEDITOR_API UScriptStruct* StaticStruct<FPCGEditorGraphSchemaAction_NewComment>()
{
	return FPCGEditorGraphSchemaAction_NewComment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewComment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewComment_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to add a 'comment' node to the graph */" },
		{ "ModuleRelativePath", "Private/PCGEditorGraphSchemaActions.h" },
		{ "ToolTip", "Action to add a 'comment' node to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewComment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGEditorGraphSchemaAction_NewComment>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewComment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PCGEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"PCGEditorGraphSchemaAction_NewComment",
		nullptr,
		0,
		sizeof(FPCGEditorGraphSchemaAction_NewComment),
		alignof(FPCGEditorGraphSchemaAction_NewComment),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewComment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewComment_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewComment()
	{
		if (!Z_Registration_Info_UScriptStruct_PCGEditorGraphSchemaAction_NewComment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PCGEditorGraphSchemaAction_NewComment.InnerSingleton, Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewComment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PCGEditorGraphSchemaAction_NewComment.InnerSingleton;
	}

static_assert(std::is_polymorphic<FPCGEditorGraphSchemaAction_NewReroute>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FPCGEditorGraphSchemaAction_NewReroute cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PCGEditorGraphSchemaAction_NewReroute;
class UScriptStruct* FPCGEditorGraphSchemaAction_NewReroute::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PCGEditorGraphSchemaAction_NewReroute.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PCGEditorGraphSchemaAction_NewReroute.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewReroute, (UObject*)Z_Construct_UPackage__Script_PCGEditor(), TEXT("PCGEditorGraphSchemaAction_NewReroute"));
	}
	return Z_Registration_Info_UScriptStruct_PCGEditorGraphSchemaAction_NewReroute.OuterSingleton;
}
template<> PCGEDITOR_API UScriptStruct* StaticStruct<FPCGEditorGraphSchemaAction_NewReroute>()
{
	return FPCGEditorGraphSchemaAction_NewReroute::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewReroute_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewReroute_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/PCGEditorGraphSchemaActions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewReroute_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGEditorGraphSchemaAction_NewReroute>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewReroute_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PCGEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"PCGEditorGraphSchemaAction_NewReroute",
		nullptr,
		0,
		sizeof(FPCGEditorGraphSchemaAction_NewReroute),
		alignof(FPCGEditorGraphSchemaAction_NewReroute),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewReroute_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewReroute_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewReroute()
	{
		if (!Z_Registration_Info_UScriptStruct_PCGEditorGraphSchemaAction_NewReroute.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PCGEditorGraphSchemaAction_NewReroute.InnerSingleton, Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewReroute_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PCGEditorGraphSchemaAction_NewReroute.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCGEditor_Private_PCGEditorGraphSchemaActions_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCGEditor_Private_PCGEditorGraphSchemaActions_h_Statics::EnumInfo[] = {
		{ EPCGEditorNewSettingsBehavior_StaticEnum, TEXT("EPCGEditorNewSettingsBehavior"), &Z_Registration_Info_UEnum_EPCGEditorNewSettingsBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2677742241U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCGEditor_Private_PCGEditorGraphSchemaActions_h_Statics::ScriptStructInfo[] = {
		{ FPCGEditorGraphSchemaAction_NewNativeElement::StaticStruct, Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewNativeElement_Statics::NewStructOps, TEXT("PCGEditorGraphSchemaAction_NewNativeElement"), &Z_Registration_Info_UScriptStruct_PCGEditorGraphSchemaAction_NewNativeElement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGEditorGraphSchemaAction_NewNativeElement), 819769480U) },
		{ FPCGEditorGraphSchemaAction_NewGetParameterElement::StaticStruct, Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewGetParameterElement_Statics::NewStructOps, TEXT("PCGEditorGraphSchemaAction_NewGetParameterElement"), &Z_Registration_Info_UScriptStruct_PCGEditorGraphSchemaAction_NewGetParameterElement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGEditorGraphSchemaAction_NewGetParameterElement), 166662844U) },
		{ FPCGEditorGraphSchemaAction_NewSettingsElement::StaticStruct, Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewSettingsElement_Statics::NewStructOps, TEXT("PCGEditorGraphSchemaAction_NewSettingsElement"), &Z_Registration_Info_UScriptStruct_PCGEditorGraphSchemaAction_NewSettingsElement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGEditorGraphSchemaAction_NewSettingsElement), 3033673680U) },
		{ FPCGEditorGraphSchemaAction_NewBlueprintElement::StaticStruct, Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewBlueprintElement_Statics::NewStructOps, TEXT("PCGEditorGraphSchemaAction_NewBlueprintElement"), &Z_Registration_Info_UScriptStruct_PCGEditorGraphSchemaAction_NewBlueprintElement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGEditorGraphSchemaAction_NewBlueprintElement), 3561169130U) },
		{ FPCGEditorGraphSchemaAction_NewSubgraphElement::StaticStruct, Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewSubgraphElement_Statics::NewStructOps, TEXT("PCGEditorGraphSchemaAction_NewSubgraphElement"), &Z_Registration_Info_UScriptStruct_PCGEditorGraphSchemaAction_NewSubgraphElement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGEditorGraphSchemaAction_NewSubgraphElement), 437953211U) },
		{ FPCGEditorGraphSchemaAction_NewComment::StaticStruct, Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewComment_Statics::NewStructOps, TEXT("PCGEditorGraphSchemaAction_NewComment"), &Z_Registration_Info_UScriptStruct_PCGEditorGraphSchemaAction_NewComment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGEditorGraphSchemaAction_NewComment), 1542568168U) },
		{ FPCGEditorGraphSchemaAction_NewReroute::StaticStruct, Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewReroute_Statics::NewStructOps, TEXT("PCGEditorGraphSchemaAction_NewReroute"), &Z_Registration_Info_UScriptStruct_PCGEditorGraphSchemaAction_NewReroute, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGEditorGraphSchemaAction_NewReroute), 1677349337U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCGEditor_Private_PCGEditorGraphSchemaActions_h_2363533991(TEXT("/Script/PCGEditor"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCGEditor_Private_PCGEditorGraphSchemaActions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCGEditor_Private_PCGEditorGraphSchemaActions_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCGEditor_Private_PCGEditorGraphSchemaActions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCGEditor_Private_PCGEditorGraphSchemaActions_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
