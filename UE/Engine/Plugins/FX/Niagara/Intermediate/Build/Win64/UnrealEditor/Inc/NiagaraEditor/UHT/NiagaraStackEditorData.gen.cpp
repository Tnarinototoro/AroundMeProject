// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraStackEditorData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraStackEditorData() {}
// Cross Module References
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraEditorDataBase();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackEditorData();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackEditorData_NoRegister();
	NIAGARAEDITOR_API UEnum* Z_Construct_UEnum_NiagaraEditor_ENiagaraStackEntryInlineDisplayMode();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraStackEntryInlineDisplayMode;
	static UEnum* ENiagaraStackEntryInlineDisplayMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraStackEntryInlineDisplayMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraStackEntryInlineDisplayMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NiagaraEditor_ENiagaraStackEntryInlineDisplayMode, (UObject*)Z_Construct_UPackage__Script_NiagaraEditor(), TEXT("ENiagaraStackEntryInlineDisplayMode"));
		}
		return Z_Registration_Info_UEnum_ENiagaraStackEntryInlineDisplayMode.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UEnum* StaticEnum<ENiagaraStackEntryInlineDisplayMode>()
	{
		return ENiagaraStackEntryInlineDisplayMode_StaticEnum();
	}
	struct Z_Construct_UEnum_NiagaraEditor_ENiagaraStackEntryInlineDisplayMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NiagaraEditor_ENiagaraStackEntryInlineDisplayMode_Statics::Enumerators[] = {
		{ "ENiagaraStackEntryInlineDisplayMode::Expression", (int64)ENiagaraStackEntryInlineDisplayMode::Expression },
		{ "ENiagaraStackEntryInlineDisplayMode::GraphHorizontal", (int64)ENiagaraStackEntryInlineDisplayMode::GraphHorizontal },
		{ "ENiagaraStackEntryInlineDisplayMode::GraphVertical", (int64)ENiagaraStackEntryInlineDisplayMode::GraphVertical },
		{ "ENiagaraStackEntryInlineDisplayMode::GraphHybrid", (int64)ENiagaraStackEntryInlineDisplayMode::GraphHybrid },
		{ "ENiagaraStackEntryInlineDisplayMode::None", (int64)ENiagaraStackEntryInlineDisplayMode::None },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NiagaraEditor_ENiagaraStackEntryInlineDisplayMode_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/* Defines different modes for inline display in the stack. */" },
		{ "Expression.Name", "ENiagaraStackEntryInlineDisplayMode::Expression" },
		{ "GraphHorizontal.Name", "ENiagaraStackEntryInlineDisplayMode::GraphHorizontal" },
		{ "GraphHybrid.Name", "ENiagaraStackEntryInlineDisplayMode::GraphHybrid" },
		{ "GraphVertical.Name", "ENiagaraStackEntryInlineDisplayMode::GraphVertical" },
		{ "ModuleRelativePath", "Public/NiagaraStackEditorData.h" },
		{ "None.Name", "ENiagaraStackEntryInlineDisplayMode::None" },
		{ "ToolTip", "Defines different modes for inline display in the stack." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NiagaraEditor_ENiagaraStackEntryInlineDisplayMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NiagaraEditor,
		nullptr,
		"ENiagaraStackEntryInlineDisplayMode",
		"ENiagaraStackEntryInlineDisplayMode",
		Z_Construct_UEnum_NiagaraEditor_ENiagaraStackEntryInlineDisplayMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NiagaraEditor_ENiagaraStackEntryInlineDisplayMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NiagaraEditor_ENiagaraStackEntryInlineDisplayMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NiagaraEditor_ENiagaraStackEntryInlineDisplayMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_NiagaraEditor_ENiagaraStackEntryInlineDisplayMode()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraStackEntryInlineDisplayMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraStackEntryInlineDisplayMode.InnerSingleton, Z_Construct_UEnum_NiagaraEditor_ENiagaraStackEntryInlineDisplayMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraStackEntryInlineDisplayMode.InnerSingleton;
	}
	void UNiagaraStackEditorData::StaticRegisterNativesUNiagaraStackEditorData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraStackEditorData);
	UClass* Z_Construct_UClass_UNiagaraStackEditorData_NoRegister()
	{
		return UNiagaraStackEditorData::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraStackEditorData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHideDisabledModules_MetaData[];
#endif
		static void NewProp_bHideDisabledModules_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideDisabledModules;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_StackEntryKeyToExpandedMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StackEntryKeyToExpandedMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StackEntryKeyToExpandedMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_StackEntryKeyToExpandedMap;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StackEntryKeyToInlineDisplayModeMap_ValueProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_StackEntryKeyToInlineDisplayModeMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StackEntryKeyToInlineDisplayModeMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StackEntryKeyToInlineDisplayModeMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_StackEntryKeyToInlineDisplayModeMap;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_StackEntryKeyToExpandedOverviewMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StackEntryKeyToExpandedOverviewMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StackEntryKeyToExpandedOverviewMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_StackEntryKeyToExpandedOverviewMap;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FTextPropertyParams NewProp_StackEntryKeyToDisplayName_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StackEntryKeyToDisplayName_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StackEntryKeyToDisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_StackEntryKeyToDisplayName;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStrPropertyParams NewProp_DismissedStackIssueIds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DismissedStackIssueIds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DismissedStackIssueIds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraStackEditorData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraEditorDataBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackEditorData_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackEditorData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Editor only UI data for emitters. */" },
		{ "IncludePath", "NiagaraStackEditorData.h" },
		{ "ModuleRelativePath", "Public/NiagaraStackEditorData.h" },
		{ "ToolTip", "Editor only UI data for emitters." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_bHideDisabledModules_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraStackEditorData.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_bHideDisabledModules_SetBit(void* Obj)
	{
		((UNiagaraStackEditorData*)Obj)->bHideDisabledModules = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_bHideDisabledModules = { "bHideDisabledModules", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraStackEditorData), &Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_bHideDisabledModules_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_bHideDisabledModules_MetaData), Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_bHideDisabledModules_MetaData) };
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_StackEntryKeyToExpandedMap_ValueProp = { "StackEntryKeyToExpandedMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_StackEntryKeyToExpandedMap_Key_KeyProp = { "StackEntryKeyToExpandedMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_StackEntryKeyToExpandedMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraStackEditorData.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_StackEntryKeyToExpandedMap = { "StackEntryKeyToExpandedMap", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStackEditorData, StackEntryKeyToExpandedMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_StackEntryKeyToExpandedMap_MetaData), Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_StackEntryKeyToExpandedMap_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_StackEntryKeyToInlineDisplayModeMap_ValueProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_StackEntryKeyToInlineDisplayModeMap_ValueProp = { "StackEntryKeyToInlineDisplayModeMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UEnum_NiagaraEditor_ENiagaraStackEntryInlineDisplayMode, METADATA_PARAMS(0, nullptr) }; // 2416857194
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_StackEntryKeyToInlineDisplayModeMap_Key_KeyProp = { "StackEntryKeyToInlineDisplayModeMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_StackEntryKeyToInlineDisplayModeMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraStackEditorData.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_StackEntryKeyToInlineDisplayModeMap = { "StackEntryKeyToInlineDisplayModeMap", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStackEditorData, StackEntryKeyToInlineDisplayModeMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_StackEntryKeyToInlineDisplayModeMap_MetaData), Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_StackEntryKeyToInlineDisplayModeMap_MetaData) }; // 2416857194
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_StackEntryKeyToExpandedOverviewMap_ValueProp = { "StackEntryKeyToExpandedOverviewMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_StackEntryKeyToExpandedOverviewMap_Key_KeyProp = { "StackEntryKeyToExpandedOverviewMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_StackEntryKeyToExpandedOverviewMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraStackEditorData.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_StackEntryKeyToExpandedOverviewMap = { "StackEntryKeyToExpandedOverviewMap", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStackEditorData, StackEntryKeyToExpandedOverviewMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_StackEntryKeyToExpandedOverviewMap_MetaData), Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_StackEntryKeyToExpandedOverviewMap_MetaData) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_StackEntryKeyToDisplayName_ValueProp = { "StackEntryKeyToDisplayName", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_StackEntryKeyToDisplayName_Key_KeyProp = { "StackEntryKeyToDisplayName_Key", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_StackEntryKeyToDisplayName_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraStackEditorData.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_StackEntryKeyToDisplayName = { "StackEntryKeyToDisplayName", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStackEditorData, StackEntryKeyToDisplayName), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_StackEntryKeyToDisplayName_MetaData), Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_StackEntryKeyToDisplayName_MetaData) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_DismissedStackIssueIds_Inner = { "DismissedStackIssueIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_DismissedStackIssueIds_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraStackEditorData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_DismissedStackIssueIds = { "DismissedStackIssueIds", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStackEditorData, DismissedStackIssueIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_DismissedStackIssueIds_MetaData), Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_DismissedStackIssueIds_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraStackEditorData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_bHideDisabledModules,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_StackEntryKeyToExpandedMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_StackEntryKeyToExpandedMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_StackEntryKeyToExpandedMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_StackEntryKeyToInlineDisplayModeMap_ValueProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_StackEntryKeyToInlineDisplayModeMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_StackEntryKeyToInlineDisplayModeMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_StackEntryKeyToInlineDisplayModeMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_StackEntryKeyToExpandedOverviewMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_StackEntryKeyToExpandedOverviewMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_StackEntryKeyToExpandedOverviewMap,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_StackEntryKeyToDisplayName_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_StackEntryKeyToDisplayName_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_StackEntryKeyToDisplayName,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_DismissedStackIssueIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_DismissedStackIssueIds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraStackEditorData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraStackEditorData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraStackEditorData_Statics::ClassParams = {
		&UNiagaraStackEditorData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraStackEditorData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackEditorData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackEditorData_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraStackEditorData_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackEditorData_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UNiagaraStackEditorData()
	{
		if (!Z_Registration_Info_UClass_UNiagaraStackEditorData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraStackEditorData.OuterSingleton, Z_Construct_UClass_UNiagaraStackEditorData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraStackEditorData.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraStackEditorData>()
	{
		return UNiagaraStackEditorData::StaticClass();
	}
	UNiagaraStackEditorData::UNiagaraStackEditorData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraStackEditorData);
	UNiagaraStackEditorData::~UNiagaraStackEditorData() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraStackEditorData_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraStackEditorData_h_Statics::EnumInfo[] = {
		{ ENiagaraStackEntryInlineDisplayMode_StaticEnum, TEXT("ENiagaraStackEntryInlineDisplayMode"), &Z_Registration_Info_UEnum_ENiagaraStackEntryInlineDisplayMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2416857194U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraStackEditorData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraStackEditorData, UNiagaraStackEditorData::StaticClass, TEXT("UNiagaraStackEditorData"), &Z_Registration_Info_UClass_UNiagaraStackEditorData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraStackEditorData), 4121162111U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraStackEditorData_h_3316588560(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraStackEditorData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraStackEditorData_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraStackEditorData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraStackEditorData_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
