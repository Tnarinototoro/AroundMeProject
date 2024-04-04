// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MVVMBlueprintViewModelContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMVVMBlueprintViewModelContext() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	MODELVIEWVIEWMODEL_API UClass* Z_Construct_UClass_UMVVMViewModelBase_NoRegister();
	MODELVIEWVIEWMODEL_API UClass* Z_Construct_UClass_UMVVMViewModelContextResolver_NoRegister();
	MODELVIEWVIEWMODELBLUEPRINT_API UEnum* Z_Construct_UEnum_ModelViewViewModelBlueprint_EMVVMBlueprintViewModelContextCreationType();
	MODELVIEWVIEWMODELBLUEPRINT_API UScriptStruct* Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext();
	UPackage* Z_Construct_UPackage__Script_ModelViewViewModelBlueprint();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMVVMBlueprintViewModelContextCreationType;
	static UEnum* EMVVMBlueprintViewModelContextCreationType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMVVMBlueprintViewModelContextCreationType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMVVMBlueprintViewModelContextCreationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModelViewViewModelBlueprint_EMVVMBlueprintViewModelContextCreationType, (UObject*)Z_Construct_UPackage__Script_ModelViewViewModelBlueprint(), TEXT("EMVVMBlueprintViewModelContextCreationType"));
		}
		return Z_Registration_Info_UEnum_EMVVMBlueprintViewModelContextCreationType.OuterSingleton;
	}
	template<> MODELVIEWVIEWMODELBLUEPRINT_API UEnum* StaticEnum<EMVVMBlueprintViewModelContextCreationType>()
	{
		return EMVVMBlueprintViewModelContextCreationType_StaticEnum();
	}
	struct Z_Construct_UEnum_ModelViewViewModelBlueprint_EMVVMBlueprintViewModelContextCreationType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ModelViewViewModelBlueprint_EMVVMBlueprintViewModelContextCreationType_Statics::Enumerators[] = {
		{ "EMVVMBlueprintViewModelContextCreationType::Manual", (int64)EMVVMBlueprintViewModelContextCreationType::Manual },
		{ "EMVVMBlueprintViewModelContextCreationType::CreateInstance", (int64)EMVVMBlueprintViewModelContextCreationType::CreateInstance },
		{ "EMVVMBlueprintViewModelContextCreationType::GlobalViewModelCollection", (int64)EMVVMBlueprintViewModelContextCreationType::GlobalViewModelCollection },
		{ "EMVVMBlueprintViewModelContextCreationType::PropertyPath", (int64)EMVVMBlueprintViewModelContextCreationType::PropertyPath },
		{ "EMVVMBlueprintViewModelContextCreationType::Resolver", (int64)EMVVMBlueprintViewModelContextCreationType::Resolver },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ModelViewViewModelBlueprint_EMVVMBlueprintViewModelContextCreationType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "CreateInstance.Comment", "// A new instance of the viewmodel will be created when the widget is created.\n" },
		{ "CreateInstance.Name", "EMVVMBlueprintViewModelContextCreationType::CreateInstance" },
		{ "CreateInstance.ToolTip", "A new instance of the viewmodel will be created when the widget is created." },
		{ "GlobalViewModelCollection.Comment", "// The viewmodel exists and is added to the MVVMSubsystem. It will be fetched there.\n" },
		{ "GlobalViewModelCollection.Name", "EMVVMBlueprintViewModelContextCreationType::GlobalViewModelCollection" },
		{ "GlobalViewModelCollection.ToolTip", "The viewmodel exists and is added to the MVVMSubsystem. It will be fetched there." },
		{ "Manual.Comment", "/**\n *\n */// The viewmodel will be assigned later.\n" },
		{ "Manual.Name", "EMVVMBlueprintViewModelContextCreationType::Manual" },
		{ "Manual.ToolTip", "// The viewmodel will be assigned later." },
		{ "ModuleRelativePath", "Public/MVVMBlueprintViewModelContext.h" },
		{ "PropertyPath.Comment", "// The viewmodel will be fetched by evaluating a function or a property path.\n" },
		{ "PropertyPath.Name", "EMVVMBlueprintViewModelContextCreationType::PropertyPath" },
		{ "PropertyPath.ToolTip", "The viewmodel will be fetched by evaluating a function or a property path." },
		{ "Resolver.Comment", "// The viewmodel will be fetched by evaluating the resolver object.\n" },
		{ "Resolver.Name", "EMVVMBlueprintViewModelContextCreationType::Resolver" },
		{ "Resolver.ToolTip", "The viewmodel will be fetched by evaluating the resolver object." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModelViewViewModelBlueprint_EMVVMBlueprintViewModelContextCreationType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ModelViewViewModelBlueprint,
		nullptr,
		"EMVVMBlueprintViewModelContextCreationType",
		"EMVVMBlueprintViewModelContextCreationType",
		Z_Construct_UEnum_ModelViewViewModelBlueprint_EMVVMBlueprintViewModelContextCreationType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ModelViewViewModelBlueprint_EMVVMBlueprintViewModelContextCreationType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ModelViewViewModelBlueprint_EMVVMBlueprintViewModelContextCreationType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ModelViewViewModelBlueprint_EMVVMBlueprintViewModelContextCreationType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ModelViewViewModelBlueprint_EMVVMBlueprintViewModelContextCreationType()
	{
		if (!Z_Registration_Info_UEnum_EMVVMBlueprintViewModelContextCreationType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMVVMBlueprintViewModelContextCreationType.InnerSingleton, Z_Construct_UEnum_ModelViewViewModelBlueprint_EMVVMBlueprintViewModelContextCreationType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMVVMBlueprintViewModelContextCreationType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MVVMBlueprintViewModelContext;
class UScriptStruct* FMVVMBlueprintViewModelContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MVVMBlueprintViewModelContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MVVMBlueprintViewModelContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext, (UObject*)Z_Construct_UPackage__Script_ModelViewViewModelBlueprint(), TEXT("MVVMBlueprintViewModelContext"));
	}
	return Z_Registration_Info_UScriptStruct_MVVMBlueprintViewModelContext.OuterSingleton;
}
template<> MODELVIEWVIEWMODELBLUEPRINT_API UScriptStruct* StaticStruct<FMVVMBlueprintViewModelContext>()
{
	return FMVVMBlueprintViewModelContext::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewModelContextId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ViewModelContextId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NotifyFieldValueClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_NotifyFieldValueClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewModelClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ViewModelClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideDisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_OverrideDisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewModelName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ViewModelName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CreationType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreationType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CreationType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalViewModelIdentifier_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GlobalViewModelIdentifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewModelPropertyPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ViewModelPropertyPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Resolver_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Resolver;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCreateSetterFunction_MetaData[];
#endif
		static void NewProp_bCreateSetterFunction_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateSetterFunction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOptional_MetaData[];
#endif
		static void NewProp_bOptional_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOptional;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanRename_MetaData[];
#endif
		static void NewProp_bCanRename_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanRename;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanEdit_MetaData[];
#endif
		static void NewProp_bCanEdit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanEdit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanRemove_MetaData[];
#endif
		static void NewProp_bCanRemove_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanRemove;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/MVVMBlueprintViewModelContext.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMVVMBlueprintViewModelContext>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_ViewModelContextId_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "Comment", "/** When the view is spawn, create an instance of the viewmodel. */" },
		{ "DisplayName", "Viewmodel Context Id" },
		{ "ModuleRelativePath", "Public/MVVMBlueprintViewModelContext.h" },
		{ "ToolTip", "When the view is spawn, create an instance of the viewmodel." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_ViewModelContextId = { "ViewModelContextId", nullptr, (EPropertyFlags)0x0040040000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMBlueprintViewModelContext, ViewModelContextId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_ViewModelContextId_MetaData), Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_ViewModelContextId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_NotifyFieldValueClass_MetaData[] = {
		{ "AllowedClasses", "/Script/UMG.NotifyFieldValueChanged" },
		{ "Category", "Viewmodel" },
		{ "DisallowCreateNew", "" },
		{ "DisallowedClasses", "/Script/UMG.Widget" },
		{ "ModuleRelativePath", "Public/MVVMBlueprintViewModelContext.h" },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_NotifyFieldValueClass = { "NotifyFieldValueClass", nullptr, (EPropertyFlags)0x0044000002020001, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMBlueprintViewModelContext, NotifyFieldValueClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_NotifyFieldValueClass_MetaData), Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_NotifyFieldValueClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_ViewModelClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/MVVMBlueprintViewModelContext.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_ViewModelClass = { "ViewModelClass", nullptr, (EPropertyFlags)0x0044000020000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMBlueprintViewModelContext, ViewModelClass_DEPRECATED), Z_Construct_UClass_UClass, Z_Construct_UClass_UMVVMViewModelBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_ViewModelClass_MetaData), Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_ViewModelClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_OverrideDisplayName_MetaData[] = {
		{ "ModuleRelativePath", "Public/MVVMBlueprintViewModelContext.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_OverrideDisplayName = { "OverrideDisplayName", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMBlueprintViewModelContext, OverrideDisplayName_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_OverrideDisplayName_MetaData), Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_OverrideDisplayName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_ViewModelName_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "Comment", "/** Property name that will be generated. */" },
		{ "DisplayName", "Viewmodel Name" },
		{ "ModuleRelativePath", "Public/MVVMBlueprintViewModelContext.h" },
		{ "ToolTip", "Property name that will be generated." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_ViewModelName = { "ViewModelName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMBlueprintViewModelContext, ViewModelName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_ViewModelName_MetaData), Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_ViewModelName_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_CreationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_CreationType_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "Comment", "/** When the view is spawn, create an instance of the viewmodel. */" },
		{ "ModuleRelativePath", "Public/MVVMBlueprintViewModelContext.h" },
		{ "ToolTip", "When the view is spawn, create an instance of the viewmodel." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_CreationType = { "CreationType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMBlueprintViewModelContext, CreationType), Z_Construct_UEnum_ModelViewViewModelBlueprint_EMVVMBlueprintViewModelContextCreationType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_CreationType_MetaData), Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_CreationType_MetaData) }; // 2860116427
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_GlobalViewModelIdentifier_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "Comment", "/** Identifier of an already registered viewmodel. */" },
		{ "DisplayName", "Global Viewmodel Identifier" },
		{ "EditCondition", "CreationType == EMVVMBlueprintViewModelContextCreationType::GlobalViewModelCollection && bCanEdit" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MVVMBlueprintViewModelContext.h" },
		{ "ToolTip", "Identifier of an already registered viewmodel." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_GlobalViewModelIdentifier = { "GlobalViewModelIdentifier", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMBlueprintViewModelContext, GlobalViewModelIdentifier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_GlobalViewModelIdentifier_MetaData), Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_GlobalViewModelIdentifier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_ViewModelPropertyPath_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "Comment", "/** The Path to get the viewmodel instance. */" },
		{ "DisplayName", "Viewmodel Property Path" },
		{ "EditCondition", "CreationType == EMVVMBlueprintViewModelContextCreationType::PropertyPath && bCanEdit" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MVVMBlueprintViewModelContext.h" },
		{ "ToolTip", "The Path to get the viewmodel instance." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_ViewModelPropertyPath = { "ViewModelPropertyPath", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMBlueprintViewModelContext, ViewModelPropertyPath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_ViewModelPropertyPath_MetaData), Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_ViewModelPropertyPath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_Resolver_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "EditCondition", "CreationType == EMVVMBlueprintViewModelContextCreationType::Resolver && bCanEdit" },
		{ "EditConditionHides", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MVVMBlueprintViewModelContext.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_Resolver = { "Resolver", nullptr, (EPropertyFlags)0x0016040000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMBlueprintViewModelContext, Resolver), Z_Construct_UClass_UMVVMViewModelContextResolver_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_Resolver_MetaData), Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_Resolver_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_bCreateSetterFunction_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "Comment", "/**\n\x09 * Generate a public setter for this viewmodel.\n\x09 * @note Always true when the Creation Type is Manual.\n\x09 */" },
		{ "DisplanName", "Create Public Setter" },
		{ "EditCondition", "CreationType != EMVVMBlueprintViewModelContextCreationType::Manual && bCanEdit" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MVVMBlueprintViewModelContext.h" },
		{ "ToolTip", "Generate a public setter for this viewmodel.\n@note Always true when the Creation Type is Manual." },
	};
#endif
	void Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_bCreateSetterFunction_SetBit(void* Obj)
	{
		((FMVVMBlueprintViewModelContext*)Obj)->bCreateSetterFunction = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_bCreateSetterFunction = { "bCreateSetterFunction", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMVVMBlueprintViewModelContext), &Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_bCreateSetterFunction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_bCreateSetterFunction_MetaData), Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_bCreateSetterFunction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_bOptional_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "Comment", "/**\n\x09 * Optional. Will not warn if the instance is not set or found.\n\x09 * @note Always true when the Creation Type is Manual.\n\x09 */" },
		{ "EditCondition", "(CreationType == EMVVMBlueprintViewModelContextCreationType::GlobalViewModelCollection || CreationType == EMVVMBlueprintViewModelContextCreationType::PropertyPath) && bCanEdit" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MVVMBlueprintViewModelContext.h" },
		{ "ToolTip", "Optional. Will not warn if the instance is not set or found.\n@note Always true when the Creation Type is Manual." },
	};
#endif
	void Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_bOptional_SetBit(void* Obj)
	{
		((FMVVMBlueprintViewModelContext*)Obj)->bOptional = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_bOptional = { "bOptional", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMVVMBlueprintViewModelContext), &Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_bOptional_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_bOptional_MetaData), Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_bOptional_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_bCanRename_MetaData[] = {
		{ "Comment", "/** Can change the name in the editor. */" },
		{ "ModuleRelativePath", "Public/MVVMBlueprintViewModelContext.h" },
		{ "ToolTip", "Can change the name in the editor." },
	};
#endif
	void Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_bCanRename_SetBit(void* Obj)
	{
		((FMVVMBlueprintViewModelContext*)Obj)->bCanRename = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_bCanRename = { "bCanRename", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMVVMBlueprintViewModelContext), &Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_bCanRename_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_bCanRename_MetaData), Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_bCanRename_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_bCanEdit_MetaData[] = {
		{ "Comment", "/** Can change properties in the editor. */" },
		{ "ModuleRelativePath", "Public/MVVMBlueprintViewModelContext.h" },
		{ "ToolTip", "Can change properties in the editor." },
	};
#endif
	void Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_bCanEdit_SetBit(void* Obj)
	{
		((FMVVMBlueprintViewModelContext*)Obj)->bCanEdit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_bCanEdit = { "bCanEdit", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMVVMBlueprintViewModelContext), &Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_bCanEdit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_bCanEdit_MetaData), Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_bCanEdit_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_bCanRemove_MetaData[] = {
		{ "Comment", "/** Can remove the viewmodel in the editor. */" },
		{ "ModuleRelativePath", "Public/MVVMBlueprintViewModelContext.h" },
		{ "ToolTip", "Can remove the viewmodel in the editor." },
	};
#endif
	void Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_bCanRemove_SetBit(void* Obj)
	{
		((FMVVMBlueprintViewModelContext*)Obj)->bCanRemove = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_bCanRemove = { "bCanRemove", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMVVMBlueprintViewModelContext), &Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_bCanRemove_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_bCanRemove_MetaData), Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_bCanRemove_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_ViewModelContextId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_NotifyFieldValueClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_ViewModelClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_OverrideDisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_ViewModelName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_CreationType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_CreationType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_GlobalViewModelIdentifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_ViewModelPropertyPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_Resolver,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_bCreateSetterFunction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_bOptional,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_bCanRename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_bCanEdit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewProp_bCanRemove,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModelViewViewModelBlueprint,
		nullptr,
		&NewStructOps,
		"MVVMBlueprintViewModelContext",
		Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::PropPointers),
		sizeof(FMVVMBlueprintViewModelContext),
		alignof(FMVVMBlueprintViewModelContext),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext()
	{
		if (!Z_Registration_Info_UScriptStruct_MVVMBlueprintViewModelContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MVVMBlueprintViewModelContext.InnerSingleton, Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MVVMBlueprintViewModelContext.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMBlueprintViewModelContext_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMBlueprintViewModelContext_h_Statics::EnumInfo[] = {
		{ EMVVMBlueprintViewModelContextCreationType_StaticEnum, TEXT("EMVVMBlueprintViewModelContextCreationType"), &Z_Registration_Info_UEnum_EMVVMBlueprintViewModelContextCreationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2860116427U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMBlueprintViewModelContext_h_Statics::ScriptStructInfo[] = {
		{ FMVVMBlueprintViewModelContext::StaticStruct, Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics::NewStructOps, TEXT("MVVMBlueprintViewModelContext"), &Z_Registration_Info_UScriptStruct_MVVMBlueprintViewModelContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMVVMBlueprintViewModelContext), 398059915U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMBlueprintViewModelContext_h_2326975657(TEXT("/Script/ModelViewViewModelBlueprint"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMBlueprintViewModelContext_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMBlueprintViewModelContext_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMBlueprintViewModelContext_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMBlueprintViewModelContext_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
