// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "View/MVVMViewClass.h"
#include "Bindings/MVVMCompiledBindingLibrary.h"
#include "Types/MVVMViewModelContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMVVMViewClass() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	MODELVIEWVIEWMODEL_API UClass* Z_Construct_UClass_UMVVMViewClass();
	MODELVIEWVIEWMODEL_API UClass* Z_Construct_UClass_UMVVMViewClass_NoRegister();
	MODELVIEWVIEWMODEL_API UClass* Z_Construct_UClass_UMVVMViewModelContextResolver_NoRegister();
	MODELVIEWVIEWMODEL_API UEnum* Z_Construct_UEnum_ModelViewViewModel_EMVVMExecutionMode();
	MODELVIEWVIEWMODEL_API UScriptStruct* Z_Construct_UScriptStruct_FMVVMCompiledBindingLibrary();
	MODELVIEWVIEWMODEL_API UScriptStruct* Z_Construct_UScriptStruct_FMVVMVCompiledBinding();
	MODELVIEWVIEWMODEL_API UScriptStruct* Z_Construct_UScriptStruct_FMVVMVCompiledFieldId();
	MODELVIEWVIEWMODEL_API UScriptStruct* Z_Construct_UScriptStruct_FMVVMVCompiledFieldPath();
	MODELVIEWVIEWMODEL_API UScriptStruct* Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding();
	MODELVIEWVIEWMODEL_API UScriptStruct* Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator();
	MODELVIEWVIEWMODEL_API UScriptStruct* Z_Construct_UScriptStruct_FMVVMViewModelContext();
	UMG_API UClass* Z_Construct_UClass_UWidgetBlueprintGeneratedClassExtension();
	UPackage* Z_Construct_UPackage__Script_ModelViewViewModel();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MVVMViewClass_SourceCreator;
class UScriptStruct* FMVVMViewClass_SourceCreator::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MVVMViewClass_SourceCreator.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MVVMViewClass_SourceCreator.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator, (UObject*)Z_Construct_UPackage__Script_ModelViewViewModel(), TEXT("MVVMViewClass_SourceCreator"));
	}
	return Z_Registration_Info_UScriptStruct_MVVMViewClass_SourceCreator.OuterSingleton;
}
template<> MODELVIEWVIEWMODEL_API UScriptStruct* StaticStruct<FMVVMViewClass_SourceCreator>()
{
	return FMVVMViewClass_SourceCreator::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpectedSourceType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ExpectedSourceType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Resolver_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Resolver;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalViewModelInstance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalViewModelInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FieldPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentSourceName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParentSourceName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Flags;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCreateInstance_MetaData[];
#endif
		static void NewProp_bCreateInstance_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsUserWidgetProperty_MetaData[];
#endif
		static void NewProp_bIsUserWidgetProperty_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsUserWidgetProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOptional_MetaData[];
#endif
		static void NewProp_bOptional_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOptional;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Shared data to find or create a ViewModel at runtime.\n */" },
		{ "ModuleRelativePath", "Public/View/MVVMViewClass.h" },
		{ "ToolTip", "Shared data to find or create a ViewModel at runtime." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMVVMViewClass_SourceCreator>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_ExpectedSourceType_MetaData[] = {
		{ "Comment", "/** Class type to create a source at runtime. */" },
		{ "ModuleRelativePath", "Public/View/MVVMViewClass.h" },
		{ "ToolTip", "Class type to create a source at runtime." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_ExpectedSourceType = { "ExpectedSourceType", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMViewClass_SourceCreator, ExpectedSourceType), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_ExpectedSourceType_MetaData), Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_ExpectedSourceType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_Resolver_MetaData[] = {
		{ "Comment", "/** The resolver to fetch the source at runtime. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/View/MVVMViewClass.h" },
		{ "ToolTip", "The resolver to fetch the source at runtime." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_Resolver = { "Resolver", nullptr, (EPropertyFlags)0x0046000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMViewClass_SourceCreator, Resolver), Z_Construct_UClass_UMVVMViewModelContextResolver_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_Resolver_MetaData), Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_Resolver_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_GlobalViewModelInstance_MetaData[] = {
		{ "Comment", "/** Info to find the ViewModel instance at runtime. */" },
		{ "ModuleRelativePath", "Public/View/MVVMViewClass.h" },
		{ "ToolTip", "Info to find the ViewModel instance at runtime." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_GlobalViewModelInstance = { "GlobalViewModelInstance", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMViewClass_SourceCreator, GlobalViewModelInstance), Z_Construct_UScriptStruct_FMVVMViewModelContext, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_GlobalViewModelInstance_MetaData), Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_GlobalViewModelInstance_MetaData) }; // 3526783708
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_FieldPath_MetaData[] = {
		{ "Comment", "/**\n\x09 * A resolvable path to retrieve the source instance at runtime.\n\x09 * It can be a path \"Property = Object.Function.Object\".\n\x09 * It can be a UFunction's name of a FProperty's name.\n\x09 */" },
		{ "ModuleRelativePath", "Public/View/MVVMViewClass.h" },
		{ "ToolTip", "A resolvable path to retrieve the source instance at runtime.\nIt can be a path \"Property = Object.Function.Object\".\nIt can be a UFunction's name of a FProperty's name." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_FieldPath = { "FieldPath", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMViewClass_SourceCreator, FieldPath), Z_Construct_UScriptStruct_FMVVMVCompiledFieldPath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_FieldPath_MetaData), Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_FieldPath_MetaData) }; // 4174144784
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_PropertyName_MetaData[] = {
		{ "Comment", "/** The source name and the property's name of the view (if the flag IsUserWidgetProperty is set). */" },
		{ "ModuleRelativePath", "Public/View/MVVMViewClass.h" },
		{ "ToolTip", "The source name and the property's name of the view (if the flag IsUserWidgetProperty is set)." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMViewClass_SourceCreator, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_PropertyName_MetaData), Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_PropertyName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_ParentSourceName_MetaData[] = {
		{ "Comment", "/** The name of the parent source if it's the dynamic source. */" },
		{ "ModuleRelativePath", "Public/View/MVVMViewClass.h" },
		{ "ToolTip", "The name of the parent source if it's the dynamic source." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_ParentSourceName = { "ParentSourceName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMViewClass_SourceCreator, ParentSourceName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_ParentSourceName_MetaData), Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_ParentSourceName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_Flags_MetaData[] = {
		{ "ModuleRelativePath", "Public/View/MVVMViewClass.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMViewClass_SourceCreator, Flags), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_Flags_MetaData), Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_Flags_MetaData) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_bCreateInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/View/MVVMViewClass.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_bCreateInstance_SetBit(void* Obj)
	{
		((FMVVMViewClass_SourceCreator*)Obj)->bCreateInstance_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_bCreateInstance = { "bCreateInstance", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMVVMViewClass_SourceCreator), &Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_bCreateInstance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_bCreateInstance_MetaData), Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_bCreateInstance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_bIsUserWidgetProperty_MetaData[] = {
		{ "ModuleRelativePath", "Public/View/MVVMViewClass.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_bIsUserWidgetProperty_SetBit(void* Obj)
	{
		((FMVVMViewClass_SourceCreator*)Obj)->bIsUserWidgetProperty_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_bIsUserWidgetProperty = { "bIsUserWidgetProperty", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMVVMViewClass_SourceCreator), &Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_bIsUserWidgetProperty_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_bIsUserWidgetProperty_MetaData), Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_bIsUserWidgetProperty_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_bOptional_MetaData[] = {
		{ "ModuleRelativePath", "Public/View/MVVMViewClass.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_bOptional_SetBit(void* Obj)
	{
		((FMVVMViewClass_SourceCreator*)Obj)->bOptional_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_bOptional = { "bOptional", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMVVMViewClass_SourceCreator), &Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_bOptional_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_bOptional_MetaData), Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_bOptional_MetaData) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_ExpectedSourceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_Resolver,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_GlobalViewModelInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_FieldPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_ParentSourceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_Flags,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_bCreateInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_bIsUserWidgetProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_bOptional,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModelViewViewModel,
		nullptr,
		&NewStructOps,
		"MVVMViewClass_SourceCreator",
		Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::PropPointers),
		sizeof(FMVVMViewClass_SourceCreator),
		alignof(FMVVMViewClass_SourceCreator),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator()
	{
		if (!Z_Registration_Info_UScriptStruct_MVVMViewClass_SourceCreator.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MVVMViewClass_SourceCreator.InnerSingleton, Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MVVMViewClass_SourceCreator.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MVVMViewClass_CompiledBinding;
class UScriptStruct* FMVVMViewClass_CompiledBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MVVMViewClass_CompiledBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MVVMViewClass_CompiledBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding, (UObject*)Z_Construct_UPackage__Script_ModelViewViewModel(), TEXT("MVVMViewClass_CompiledBinding"));
	}
	return Z_Registration_Info_UScriptStruct_MVVMViewClass_CompiledBinding.OuterSingleton;
}
template<> MODELVIEWVIEWMODEL_API UScriptStruct* StaticStruct<FMVVMViewClass_CompiledBinding>()
{
	return FMVVMViewClass_CompiledBinding::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FieldId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourcePropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SourcePropertyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Binding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Binding;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ExecutionMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ExecutionMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EvaluateSourceCreatorIndex_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_EvaluateSourceCreatorIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Flags;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EditorId;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * A compiled and shared binding for ViewModel<->View\n */" },
		{ "ModuleRelativePath", "Public/View/MVVMViewClass.h" },
		{ "ToolTip", "A compiled and shared binding for ViewModel<->View" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMVVMViewClass_CompiledBinding>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::NewProp_FieldId_MetaData[] = {
		{ "ModuleRelativePath", "Public/View/MVVMViewClass.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::NewProp_FieldId = { "FieldId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMViewClass_CompiledBinding, FieldId), Z_Construct_UScriptStruct_FMVVMVCompiledFieldId, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::NewProp_FieldId_MetaData), Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::NewProp_FieldId_MetaData) }; // 1057992174
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::NewProp_SourcePropertyName_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "ModuleRelativePath", "Public/View/MVVMViewClass.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::NewProp_SourcePropertyName = { "SourcePropertyName", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMViewClass_CompiledBinding, SourcePropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::NewProp_SourcePropertyName_MetaData), Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::NewProp_SourcePropertyName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::NewProp_Binding_MetaData[] = {
		{ "ModuleRelativePath", "Public/View/MVVMViewClass.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::NewProp_Binding = { "Binding", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMViewClass_CompiledBinding, Binding), Z_Construct_UScriptStruct_FMVVMVCompiledBinding, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::NewProp_Binding_MetaData), Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::NewProp_Binding_MetaData) }; // 1547968502
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::NewProp_ExecutionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::NewProp_ExecutionMode_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "ModuleRelativePath", "Public/View/MVVMViewClass.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::NewProp_ExecutionMode = { "ExecutionMode", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMViewClass_CompiledBinding, ExecutionMode), Z_Construct_UEnum_ModelViewViewModel_EMVVMExecutionMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::NewProp_ExecutionMode_MetaData), Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::NewProp_ExecutionMode_MetaData) }; // 4090638343
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::NewProp_EvaluateSourceCreatorIndex_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "ModuleRelativePath", "Public/View/MVVMViewClass.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::NewProp_EvaluateSourceCreatorIndex = { "EvaluateSourceCreatorIndex", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMViewClass_CompiledBinding, EvaluateSourceCreatorIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::NewProp_EvaluateSourceCreatorIndex_MetaData), Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::NewProp_EvaluateSourceCreatorIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::NewProp_Flags_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "ModuleRelativePath", "Public/View/MVVMViewClass.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMViewClass_CompiledBinding, Flags), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::NewProp_Flags_MetaData), Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::NewProp_Flags_MetaData) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::NewProp_EditorId_MetaData[] = {
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Public/View/MVVMViewClass.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::NewProp_EditorId = { "EditorId", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMViewClass_CompiledBinding, EditorId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::NewProp_EditorId_MetaData), Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::NewProp_EditorId_MetaData) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::NewProp_FieldId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::NewProp_SourcePropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::NewProp_Binding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::NewProp_ExecutionMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::NewProp_ExecutionMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::NewProp_EvaluateSourceCreatorIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::NewProp_Flags,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::NewProp_EditorId,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModelViewViewModel,
		nullptr,
		&NewStructOps,
		"MVVMViewClass_CompiledBinding",
		Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::PropPointers),
		sizeof(FMVVMViewClass_CompiledBinding),
		alignof(FMVVMViewClass_CompiledBinding),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding()
	{
		if (!Z_Registration_Info_UScriptStruct_MVVMViewClass_CompiledBinding.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MVVMViewClass_CompiledBinding.InnerSingleton, Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MVVMViewClass_CompiledBinding.InnerSingleton;
	}
	void UMVVMViewClass::StaticRegisterNativesUMVVMViewClass()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMVVMViewClass);
	UClass* Z_Construct_UClass_UMVVMViewClass_NoRegister()
	{
		return UMVVMViewClass::StaticClass();
	}
	struct Z_Construct_UClass_UMVVMViewClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceCreators_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceCreators_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SourceCreators;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CompiledBindings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompiledBindings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CompiledBindings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BindingLibrary_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BindingLibrary;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInitializeSourcesOnConstruct_MetaData[];
#endif
		static void NewProp_bInitializeSourcesOnConstruct_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitializeSourcesOnConstruct;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInitializeBindingsOnConstruct_MetaData[];
#endif
		static void NewProp_bInitializeBindingsOnConstruct_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitializeBindingsOnConstruct;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMVVMViewClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidgetBlueprintGeneratedClassExtension,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelViewViewModel,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMViewClass_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMViewClass_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Shared between every instances of the same View class.\n */" },
		{ "IncludePath", "View/MVVMViewClass.h" },
		{ "ModuleRelativePath", "Public/View/MVVMViewClass.h" },
		{ "ToolTip", "Shared between every instances of the same View class." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMVVMViewClass_Statics::NewProp_SourceCreators_Inner = { "SourceCreators", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator, METADATA_PARAMS(0, nullptr) }; // 2450406992
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMViewClass_Statics::NewProp_SourceCreators_MetaData[] = {
		{ "Comment", "/** Data to retrieve/create the sources (could be viewmodel, widget, ...). */" },
		{ "ModuleRelativePath", "Public/View/MVVMViewClass.h" },
		{ "ToolTip", "Data to retrieve/create the sources (could be viewmodel, widget, ...)." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMVVMViewClass_Statics::NewProp_SourceCreators = { "SourceCreators", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMVVMViewClass, SourceCreators), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMViewClass_Statics::NewProp_SourceCreators_MetaData), Z_Construct_UClass_UMVVMViewClass_Statics::NewProp_SourceCreators_MetaData) }; // 2450406992
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMVVMViewClass_Statics::NewProp_CompiledBindings_Inner = { "CompiledBindings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding, METADATA_PARAMS(0, nullptr) }; // 3236081055
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMViewClass_Statics::NewProp_CompiledBindings_MetaData[] = {
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/View/MVVMViewClass.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMVVMViewClass_Statics::NewProp_CompiledBindings = { "CompiledBindings", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMVVMViewClass, CompiledBindings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMViewClass_Statics::NewProp_CompiledBindings_MetaData), Z_Construct_UClass_UMVVMViewClass_Statics::NewProp_CompiledBindings_MetaData) }; // 3236081055
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMViewClass_Statics::NewProp_BindingLibrary_MetaData[] = {
		{ "Comment", "/** All the bindings shared between all the View instance. */" },
		{ "ModuleRelativePath", "Public/View/MVVMViewClass.h" },
		{ "ToolTip", "All the bindings shared between all the View instance." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMVVMViewClass_Statics::NewProp_BindingLibrary = { "BindingLibrary", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMVVMViewClass, BindingLibrary), Z_Construct_UScriptStruct_FMVVMCompiledBindingLibrary, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMViewClass_Statics::NewProp_BindingLibrary_MetaData), Z_Construct_UClass_UMVVMViewClass_Statics::NewProp_BindingLibrary_MetaData) }; // 2654927736
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMViewClass_Statics::NewProp_bInitializeSourcesOnConstruct_MetaData[] = {
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/View/MVVMViewClass.h" },
	};
#endif
	void Z_Construct_UClass_UMVVMViewClass_Statics::NewProp_bInitializeSourcesOnConstruct_SetBit(void* Obj)
	{
		((UMVVMViewClass*)Obj)->bInitializeSourcesOnConstruct = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMVVMViewClass_Statics::NewProp_bInitializeSourcesOnConstruct = { "bInitializeSourcesOnConstruct", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMVVMViewClass), &Z_Construct_UClass_UMVVMViewClass_Statics::NewProp_bInitializeSourcesOnConstruct_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMViewClass_Statics::NewProp_bInitializeSourcesOnConstruct_MetaData), Z_Construct_UClass_UMVVMViewClass_Statics::NewProp_bInitializeSourcesOnConstruct_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMViewClass_Statics::NewProp_bInitializeBindingsOnConstruct_MetaData[] = {
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/View/MVVMViewClass.h" },
	};
#endif
	void Z_Construct_UClass_UMVVMViewClass_Statics::NewProp_bInitializeBindingsOnConstruct_SetBit(void* Obj)
	{
		((UMVVMViewClass*)Obj)->bInitializeBindingsOnConstruct = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMVVMViewClass_Statics::NewProp_bInitializeBindingsOnConstruct = { "bInitializeBindingsOnConstruct", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMVVMViewClass), &Z_Construct_UClass_UMVVMViewClass_Statics::NewProp_bInitializeBindingsOnConstruct_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMViewClass_Statics::NewProp_bInitializeBindingsOnConstruct_MetaData), Z_Construct_UClass_UMVVMViewClass_Statics::NewProp_bInitializeBindingsOnConstruct_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMVVMViewClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMViewClass_Statics::NewProp_SourceCreators_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMViewClass_Statics::NewProp_SourceCreators,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMViewClass_Statics::NewProp_CompiledBindings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMViewClass_Statics::NewProp_CompiledBindings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMViewClass_Statics::NewProp_BindingLibrary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMViewClass_Statics::NewProp_bInitializeSourcesOnConstruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMViewClass_Statics::NewProp_bInitializeBindingsOnConstruct,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMVVMViewClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMVVMViewClass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMVVMViewClass_Statics::ClassParams = {
		&UMVVMViewClass::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMVVMViewClass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMViewClass_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMViewClass_Statics::Class_MetaDataParams), Z_Construct_UClass_UMVVMViewClass_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMViewClass_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMVVMViewClass()
	{
		if (!Z_Registration_Info_UClass_UMVVMViewClass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMVVMViewClass.OuterSingleton, Z_Construct_UClass_UMVVMViewClass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMVVMViewClass.OuterSingleton;
	}
	template<> MODELVIEWVIEWMODEL_API UClass* StaticClass<UMVVMViewClass>()
	{
		return UMVVMViewClass::StaticClass();
	}
	UMVVMViewClass::UMVVMViewClass(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMVVMViewClass);
	UMVVMViewClass::~UMVVMViewClass() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMViewClass_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMViewClass_h_Statics::ScriptStructInfo[] = {
		{ FMVVMViewClass_SourceCreator::StaticStruct, Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewStructOps, TEXT("MVVMViewClass_SourceCreator"), &Z_Registration_Info_UScriptStruct_MVVMViewClass_SourceCreator, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMVVMViewClass_SourceCreator), 2450406992U) },
		{ FMVVMViewClass_CompiledBinding::StaticStruct, Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::NewStructOps, TEXT("MVVMViewClass_CompiledBinding"), &Z_Registration_Info_UScriptStruct_MVVMViewClass_CompiledBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMVVMViewClass_CompiledBinding), 3236081055U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMViewClass_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMVVMViewClass, UMVVMViewClass::StaticClass, TEXT("UMVVMViewClass"), &Z_Registration_Info_UClass_UMVVMViewClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMVVMViewClass), 4216443851U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMViewClass_h_455733751(TEXT("/Script/ModelViewViewModel"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMViewClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMViewClass_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMViewClass_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMViewClass_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
