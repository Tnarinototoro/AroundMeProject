// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChooserPropertyAccess.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChooserPropertyAccess() {}
// Cross Module References
	CHOOSER_API UClass* Z_Construct_UClass_UHasContextClass();
	CHOOSER_API UClass* Z_Construct_UClass_UHasContextClass_NoRegister();
	CHOOSER_API UEnum* Z_Construct_UEnum_Chooser_EContextObjectDirection();
	CHOOSER_API UEnum* Z_Construct_UEnum_Chooser_EObjectChooserResultType();
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FChooserEnumPropertyBinding();
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FChooserObjectPropertyBinding();
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FChooserPropertyBinding();
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FChooserStructPropertyBinding();
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FContextObjectTypeBase();
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FContextObjectTypeClass();
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FContextObjectTypeStruct();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UEnum();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
	UPackage* Z_Construct_UPackage__Script_Chooser();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EObjectChooserResultType;
	static UEnum* EObjectChooserResultType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EObjectChooserResultType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EObjectChooserResultType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Chooser_EObjectChooserResultType, (UObject*)Z_Construct_UPackage__Script_Chooser(), TEXT("EObjectChooserResultType"));
		}
		return Z_Registration_Info_UEnum_EObjectChooserResultType.OuterSingleton;
	}
	template<> CHOOSER_API UEnum* StaticEnum<EObjectChooserResultType>()
	{
		return EObjectChooserResultType_StaticEnum();
	}
	struct Z_Construct_UEnum_Chooser_EObjectChooserResultType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Chooser_EObjectChooserResultType_Statics::Enumerators[] = {
		{ "EObjectChooserResultType::ObjectResult", (int64)EObjectChooserResultType::ObjectResult },
		{ "EObjectChooserResultType::ClassResult", (int64)EObjectChooserResultType::ClassResult },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Chooser_EObjectChooserResultType_Statics::Enum_MetaDataParams[] = {
		{ "ClassResult.Name", "EObjectChooserResultType::ClassResult" },
		{ "ModuleRelativePath", "Public/ChooserPropertyAccess.h" },
		{ "ObjectResult.Name", "EObjectChooserResultType::ObjectResult" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Chooser_EObjectChooserResultType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Chooser,
		nullptr,
		"EObjectChooserResultType",
		"EObjectChooserResultType",
		Z_Construct_UEnum_Chooser_EObjectChooserResultType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Chooser_EObjectChooserResultType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Chooser_EObjectChooserResultType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Chooser_EObjectChooserResultType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Chooser_EObjectChooserResultType()
	{
		if (!Z_Registration_Info_UEnum_EObjectChooserResultType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EObjectChooserResultType.InnerSingleton, Z_Construct_UEnum_Chooser_EObjectChooserResultType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EObjectChooserResultType.InnerSingleton;
	}
	void UHasContextClass::StaticRegisterNativesUHasContextClass()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHasContextClass);
	UClass* Z_Construct_UClass_UHasContextClass_NoRegister()
	{
		return UHasContextClass::StaticClass();
	}
	struct Z_Construct_UClass_UHasContextClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHasContextClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Chooser,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHasContextClass_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHasContextClass_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChooserPropertyAccess.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHasContextClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IHasContextClass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHasContextClass_Statics::ClassParams = {
		&UHasContextClass::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHasContextClass_Statics::Class_MetaDataParams), Z_Construct_UClass_UHasContextClass_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UHasContextClass()
	{
		if (!Z_Registration_Info_UClass_UHasContextClass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHasContextClass.OuterSingleton, Z_Construct_UClass_UHasContextClass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHasContextClass.OuterSingleton;
	}
	template<> CHOOSER_API UClass* StaticClass<UHasContextClass>()
	{
		return UHasContextClass::StaticClass();
	}
	UHasContextClass::UHasContextClass(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHasContextClass);
	UHasContextClass::~UHasContextClass() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChooserPropertyBinding;
class UScriptStruct* FChooserPropertyBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChooserPropertyBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChooserPropertyBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChooserPropertyBinding, (UObject*)Z_Construct_UPackage__Script_Chooser(), TEXT("ChooserPropertyBinding"));
	}
	return Z_Registration_Info_UScriptStruct_ChooserPropertyBinding.OuterSingleton;
}
template<> CHOOSER_API UScriptStruct* StaticStruct<FChooserPropertyBinding>()
{
	return FChooserPropertyBinding::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChooserPropertyBinding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyBindingChain_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyBindingChain_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PropertyBindingChain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ContextIndex;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChooserPropertyBinding_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChooserPropertyAccess.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChooserPropertyBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChooserPropertyBinding>();
	}
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FChooserPropertyBinding_Statics::NewProp_PropertyBindingChain_Inner = { "PropertyBindingChain", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChooserPropertyBinding_Statics::NewProp_PropertyBindingChain_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChooserPropertyAccess.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChooserPropertyBinding_Statics::NewProp_PropertyBindingChain = { "PropertyBindingChain", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChooserPropertyBinding, PropertyBindingChain), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChooserPropertyBinding_Statics::NewProp_PropertyBindingChain_MetaData), Z_Construct_UScriptStruct_FChooserPropertyBinding_Statics::NewProp_PropertyBindingChain_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChooserPropertyBinding_Statics::NewProp_ContextIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChooserPropertyAccess.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChooserPropertyBinding_Statics::NewProp_ContextIndex = { "ContextIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChooserPropertyBinding, ContextIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChooserPropertyBinding_Statics::NewProp_ContextIndex_MetaData), Z_Construct_UScriptStruct_FChooserPropertyBinding_Statics::NewProp_ContextIndex_MetaData) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChooserPropertyBinding_Statics::NewProp_DisplayName_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChooserPropertyAccess.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChooserPropertyBinding_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChooserPropertyBinding, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChooserPropertyBinding_Statics::NewProp_DisplayName_MetaData), Z_Construct_UScriptStruct_FChooserPropertyBinding_Statics::NewProp_DisplayName_MetaData) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChooserPropertyBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChooserPropertyBinding_Statics::NewProp_PropertyBindingChain_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChooserPropertyBinding_Statics::NewProp_PropertyBindingChain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChooserPropertyBinding_Statics::NewProp_ContextIndex,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChooserPropertyBinding_Statics::NewProp_DisplayName,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChooserPropertyBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Chooser,
		nullptr,
		&NewStructOps,
		"ChooserPropertyBinding",
		Z_Construct_UScriptStruct_FChooserPropertyBinding_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChooserPropertyBinding_Statics::PropPointers),
		sizeof(FChooserPropertyBinding),
		alignof(FChooserPropertyBinding),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChooserPropertyBinding_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChooserPropertyBinding_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChooserPropertyBinding_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FChooserPropertyBinding()
	{
		if (!Z_Registration_Info_UScriptStruct_ChooserPropertyBinding.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChooserPropertyBinding.InnerSingleton, Z_Construct_UScriptStruct_FChooserPropertyBinding_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChooserPropertyBinding.InnerSingleton;
	}

static_assert(std::is_polymorphic<FChooserEnumPropertyBinding>() == std::is_polymorphic<FChooserPropertyBinding>(), "USTRUCT FChooserEnumPropertyBinding cannot be polymorphic unless super FChooserPropertyBinding is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChooserEnumPropertyBinding;
class UScriptStruct* FChooserEnumPropertyBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChooserEnumPropertyBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChooserEnumPropertyBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChooserEnumPropertyBinding, (UObject*)Z_Construct_UPackage__Script_Chooser(), TEXT("ChooserEnumPropertyBinding"));
	}
	return Z_Registration_Info_UScriptStruct_ChooserEnumPropertyBinding.OuterSingleton;
}
template<> CHOOSER_API UScriptStruct* StaticStruct<FChooserEnumPropertyBinding>()
{
	return FChooserEnumPropertyBinding::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChooserEnumPropertyBinding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Enum_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Enum;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChooserEnumPropertyBinding_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChooserPropertyAccess.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChooserEnumPropertyBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChooserEnumPropertyBinding>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChooserEnumPropertyBinding_Statics::NewProp_Enum_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChooserPropertyAccess.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FChooserEnumPropertyBinding_Statics::NewProp_Enum = { "Enum", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChooserEnumPropertyBinding, Enum), Z_Construct_UClass_UEnum, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChooserEnumPropertyBinding_Statics::NewProp_Enum_MetaData), Z_Construct_UScriptStruct_FChooserEnumPropertyBinding_Statics::NewProp_Enum_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChooserEnumPropertyBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChooserEnumPropertyBinding_Statics::NewProp_Enum,
	};
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChooserEnumPropertyBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Chooser,
		Z_Construct_UScriptStruct_FChooserPropertyBinding,
		&NewStructOps,
		"ChooserEnumPropertyBinding",
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FChooserEnumPropertyBinding_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChooserEnumPropertyBinding_Statics::PropPointers), 0),
		sizeof(FChooserEnumPropertyBinding),
		alignof(FChooserEnumPropertyBinding),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChooserEnumPropertyBinding_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChooserEnumPropertyBinding_Statics::Struct_MetaDataParams)
	};
#if WITH_EDITORONLY_DATA
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChooserEnumPropertyBinding_Statics::PropPointers) < 2048);
#endif
	UScriptStruct* Z_Construct_UScriptStruct_FChooserEnumPropertyBinding()
	{
		if (!Z_Registration_Info_UScriptStruct_ChooserEnumPropertyBinding.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChooserEnumPropertyBinding.InnerSingleton, Z_Construct_UScriptStruct_FChooserEnumPropertyBinding_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChooserEnumPropertyBinding.InnerSingleton;
	}

static_assert(std::is_polymorphic<FChooserObjectPropertyBinding>() == std::is_polymorphic<FChooserPropertyBinding>(), "USTRUCT FChooserObjectPropertyBinding cannot be polymorphic unless super FChooserPropertyBinding is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChooserObjectPropertyBinding;
class UScriptStruct* FChooserObjectPropertyBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChooserObjectPropertyBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChooserObjectPropertyBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChooserObjectPropertyBinding, (UObject*)Z_Construct_UPackage__Script_Chooser(), TEXT("ChooserObjectPropertyBinding"));
	}
	return Z_Registration_Info_UScriptStruct_ChooserObjectPropertyBinding.OuterSingleton;
}
template<> CHOOSER_API UScriptStruct* StaticStruct<FChooserObjectPropertyBinding>()
{
	return FChooserObjectPropertyBinding::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChooserObjectPropertyBinding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowedClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_AllowedClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChooserObjectPropertyBinding_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChooserPropertyAccess.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChooserObjectPropertyBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChooserObjectPropertyBinding>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChooserObjectPropertyBinding_Statics::NewProp_AllowedClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChooserPropertyAccess.h" },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UScriptStruct_FChooserObjectPropertyBinding_Statics::NewProp_AllowedClass = { "AllowedClass", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChooserObjectPropertyBinding, AllowedClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChooserObjectPropertyBinding_Statics::NewProp_AllowedClass_MetaData), Z_Construct_UScriptStruct_FChooserObjectPropertyBinding_Statics::NewProp_AllowedClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChooserObjectPropertyBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChooserObjectPropertyBinding_Statics::NewProp_AllowedClass,
	};
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChooserObjectPropertyBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Chooser,
		Z_Construct_UScriptStruct_FChooserPropertyBinding,
		&NewStructOps,
		"ChooserObjectPropertyBinding",
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FChooserObjectPropertyBinding_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChooserObjectPropertyBinding_Statics::PropPointers), 0),
		sizeof(FChooserObjectPropertyBinding),
		alignof(FChooserObjectPropertyBinding),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChooserObjectPropertyBinding_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChooserObjectPropertyBinding_Statics::Struct_MetaDataParams)
	};
#if WITH_EDITORONLY_DATA
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChooserObjectPropertyBinding_Statics::PropPointers) < 2048);
#endif
	UScriptStruct* Z_Construct_UScriptStruct_FChooserObjectPropertyBinding()
	{
		if (!Z_Registration_Info_UScriptStruct_ChooserObjectPropertyBinding.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChooserObjectPropertyBinding.InnerSingleton, Z_Construct_UScriptStruct_FChooserObjectPropertyBinding_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChooserObjectPropertyBinding.InnerSingleton;
	}

static_assert(std::is_polymorphic<FChooserStructPropertyBinding>() == std::is_polymorphic<FChooserPropertyBinding>(), "USTRUCT FChooserStructPropertyBinding cannot be polymorphic unless super FChooserPropertyBinding is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChooserStructPropertyBinding;
class UScriptStruct* FChooserStructPropertyBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChooserStructPropertyBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChooserStructPropertyBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChooserStructPropertyBinding, (UObject*)Z_Construct_UPackage__Script_Chooser(), TEXT("ChooserStructPropertyBinding"));
	}
	return Z_Registration_Info_UScriptStruct_ChooserStructPropertyBinding.OuterSingleton;
}
template<> CHOOSER_API UScriptStruct* StaticStruct<FChooserStructPropertyBinding>()
{
	return FChooserStructPropertyBinding::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChooserStructPropertyBinding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StructType_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StructType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChooserStructPropertyBinding_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChooserPropertyAccess.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChooserStructPropertyBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChooserStructPropertyBinding>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChooserStructPropertyBinding_Statics::NewProp_StructType_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChooserPropertyAccess.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FChooserStructPropertyBinding_Statics::NewProp_StructType = { "StructType", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChooserStructPropertyBinding, StructType), Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChooserStructPropertyBinding_Statics::NewProp_StructType_MetaData), Z_Construct_UScriptStruct_FChooserStructPropertyBinding_Statics::NewProp_StructType_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChooserStructPropertyBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChooserStructPropertyBinding_Statics::NewProp_StructType,
	};
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChooserStructPropertyBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Chooser,
		Z_Construct_UScriptStruct_FChooserPropertyBinding,
		&NewStructOps,
		"ChooserStructPropertyBinding",
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FChooserStructPropertyBinding_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChooserStructPropertyBinding_Statics::PropPointers), 0),
		sizeof(FChooserStructPropertyBinding),
		alignof(FChooserStructPropertyBinding),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChooserStructPropertyBinding_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChooserStructPropertyBinding_Statics::Struct_MetaDataParams)
	};
#if WITH_EDITORONLY_DATA
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChooserStructPropertyBinding_Statics::PropPointers) < 2048);
#endif
	UScriptStruct* Z_Construct_UScriptStruct_FChooserStructPropertyBinding()
	{
		if (!Z_Registration_Info_UScriptStruct_ChooserStructPropertyBinding.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChooserStructPropertyBinding.InnerSingleton, Z_Construct_UScriptStruct_FChooserStructPropertyBinding_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChooserStructPropertyBinding.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EContextObjectDirection;
	static UEnum* EContextObjectDirection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EContextObjectDirection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EContextObjectDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Chooser_EContextObjectDirection, (UObject*)Z_Construct_UPackage__Script_Chooser(), TEXT("EContextObjectDirection"));
		}
		return Z_Registration_Info_UEnum_EContextObjectDirection.OuterSingleton;
	}
	template<> CHOOSER_API UEnum* StaticEnum<EContextObjectDirection>()
	{
		return EContextObjectDirection_StaticEnum();
	}
	struct Z_Construct_UEnum_Chooser_EContextObjectDirection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Chooser_EContextObjectDirection_Statics::Enumerators[] = {
		{ "EContextObjectDirection::Read", (int64)EContextObjectDirection::Read },
		{ "EContextObjectDirection::Write", (int64)EContextObjectDirection::Write },
		{ "EContextObjectDirection::ReadWrite", (int64)EContextObjectDirection::ReadWrite },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Chooser_EContextObjectDirection_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChooserPropertyAccess.h" },
		{ "Read.Name", "EContextObjectDirection::Read" },
		{ "ReadWrite.Name", "EContextObjectDirection::ReadWrite" },
		{ "Write.Name", "EContextObjectDirection::Write" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Chooser_EContextObjectDirection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Chooser,
		nullptr,
		"EContextObjectDirection",
		"EContextObjectDirection",
		Z_Construct_UEnum_Chooser_EContextObjectDirection_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Chooser_EContextObjectDirection_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Chooser_EContextObjectDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Chooser_EContextObjectDirection_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Chooser_EContextObjectDirection()
	{
		if (!Z_Registration_Info_UEnum_EContextObjectDirection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EContextObjectDirection.InnerSingleton, Z_Construct_UEnum_Chooser_EContextObjectDirection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EContextObjectDirection.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ContextObjectTypeBase;
class UScriptStruct* FContextObjectTypeBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ContextObjectTypeBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ContextObjectTypeBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FContextObjectTypeBase, (UObject*)Z_Construct_UPackage__Script_Chooser(), TEXT("ContextObjectTypeBase"));
	}
	return Z_Registration_Info_UScriptStruct_ContextObjectTypeBase.OuterSingleton;
}
template<> CHOOSER_API UScriptStruct* StaticStruct<FContextObjectTypeBase>()
{
	return FContextObjectTypeBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FContextObjectTypeBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FIntPropertyParams NewProp_Direction_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextObjectTypeBase_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChooserPropertyAccess.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FContextObjectTypeBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FContextObjectTypeBase>();
	}
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FContextObjectTypeBase_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextObjectTypeBase_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "Type" },
		{ "ModuleRelativePath", "Public/ChooserPropertyAccess.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FContextObjectTypeBase_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContextObjectTypeBase, Direction), Z_Construct_UEnum_Chooser_EContextObjectDirection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextObjectTypeBase_Statics::NewProp_Direction_MetaData), Z_Construct_UScriptStruct_FContextObjectTypeBase_Statics::NewProp_Direction_MetaData) }; // 2091706882
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FContextObjectTypeBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextObjectTypeBase_Statics::NewProp_Direction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextObjectTypeBase_Statics::NewProp_Direction,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FContextObjectTypeBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Chooser,
		nullptr,
		&NewStructOps,
		"ContextObjectTypeBase",
		Z_Construct_UScriptStruct_FContextObjectTypeBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextObjectTypeBase_Statics::PropPointers),
		sizeof(FContextObjectTypeBase),
		alignof(FContextObjectTypeBase),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextObjectTypeBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FContextObjectTypeBase_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextObjectTypeBase_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FContextObjectTypeBase()
	{
		if (!Z_Registration_Info_UScriptStruct_ContextObjectTypeBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ContextObjectTypeBase.InnerSingleton, Z_Construct_UScriptStruct_FContextObjectTypeBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ContextObjectTypeBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FContextObjectTypeClass>() == std::is_polymorphic<FContextObjectTypeBase>(), "USTRUCT FContextObjectTypeClass cannot be polymorphic unless super FContextObjectTypeBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ContextObjectTypeClass;
class UScriptStruct* FContextObjectTypeClass::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ContextObjectTypeClass.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ContextObjectTypeClass.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FContextObjectTypeClass, (UObject*)Z_Construct_UPackage__Script_Chooser(), TEXT("ContextObjectTypeClass"));
	}
	return Z_Registration_Info_UScriptStruct_ContextObjectTypeClass.OuterSingleton;
}
template<> CHOOSER_API UScriptStruct* StaticStruct<FContextObjectTypeClass>()
{
	return FContextObjectTypeClass::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FContextObjectTypeClass_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_Class;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextObjectTypeClass_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChooserPropertyAccess.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FContextObjectTypeClass_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FContextObjectTypeClass>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextObjectTypeClass_Statics::NewProp_Class_MetaData[] = {
		{ "Category", "Type" },
		{ "ModuleRelativePath", "Public/ChooserPropertyAccess.h" },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UScriptStruct_FContextObjectTypeClass_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContextObjectTypeClass, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextObjectTypeClass_Statics::NewProp_Class_MetaData), Z_Construct_UScriptStruct_FContextObjectTypeClass_Statics::NewProp_Class_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FContextObjectTypeClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextObjectTypeClass_Statics::NewProp_Class,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FContextObjectTypeClass_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Chooser,
		Z_Construct_UScriptStruct_FContextObjectTypeBase,
		&NewStructOps,
		"ContextObjectTypeClass",
		Z_Construct_UScriptStruct_FContextObjectTypeClass_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextObjectTypeClass_Statics::PropPointers),
		sizeof(FContextObjectTypeClass),
		alignof(FContextObjectTypeClass),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextObjectTypeClass_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FContextObjectTypeClass_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextObjectTypeClass_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FContextObjectTypeClass()
	{
		if (!Z_Registration_Info_UScriptStruct_ContextObjectTypeClass.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ContextObjectTypeClass.InnerSingleton, Z_Construct_UScriptStruct_FContextObjectTypeClass_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ContextObjectTypeClass.InnerSingleton;
	}

static_assert(std::is_polymorphic<FContextObjectTypeStruct>() == std::is_polymorphic<FContextObjectTypeBase>(), "USTRUCT FContextObjectTypeStruct cannot be polymorphic unless super FContextObjectTypeBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ContextObjectTypeStruct;
class UScriptStruct* FContextObjectTypeStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ContextObjectTypeStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ContextObjectTypeStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FContextObjectTypeStruct, (UObject*)Z_Construct_UPackage__Script_Chooser(), TEXT("ContextObjectTypeStruct"));
	}
	return Z_Registration_Info_UScriptStruct_ContextObjectTypeStruct.OuterSingleton;
}
template<> CHOOSER_API UScriptStruct* StaticStruct<FContextObjectTypeStruct>()
{
	return FContextObjectTypeStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FContextObjectTypeStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Struct_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Struct;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextObjectTypeStruct_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChooserPropertyAccess.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FContextObjectTypeStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FContextObjectTypeStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextObjectTypeStruct_Statics::NewProp_Struct_MetaData[] = {
		{ "Category", "Type" },
		{ "ModuleRelativePath", "Public/ChooserPropertyAccess.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FContextObjectTypeStruct_Statics::NewProp_Struct = { "Struct", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContextObjectTypeStruct, Struct), Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextObjectTypeStruct_Statics::NewProp_Struct_MetaData), Z_Construct_UScriptStruct_FContextObjectTypeStruct_Statics::NewProp_Struct_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FContextObjectTypeStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextObjectTypeStruct_Statics::NewProp_Struct,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FContextObjectTypeStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Chooser,
		Z_Construct_UScriptStruct_FContextObjectTypeBase,
		&NewStructOps,
		"ContextObjectTypeStruct",
		Z_Construct_UScriptStruct_FContextObjectTypeStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextObjectTypeStruct_Statics::PropPointers),
		sizeof(FContextObjectTypeStruct),
		alignof(FContextObjectTypeStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextObjectTypeStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FContextObjectTypeStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextObjectTypeStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FContextObjectTypeStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_ContextObjectTypeStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ContextObjectTypeStruct.InnerSingleton, Z_Construct_UScriptStruct_FContextObjectTypeStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ContextObjectTypeStruct.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_ChooserPropertyAccess_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_ChooserPropertyAccess_h_Statics::EnumInfo[] = {
		{ EObjectChooserResultType_StaticEnum, TEXT("EObjectChooserResultType"), &Z_Registration_Info_UEnum_EObjectChooserResultType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3416964923U) },
		{ EContextObjectDirection_StaticEnum, TEXT("EContextObjectDirection"), &Z_Registration_Info_UEnum_EContextObjectDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2091706882U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_ChooserPropertyAccess_h_Statics::ScriptStructInfo[] = {
		{ FChooserPropertyBinding::StaticStruct, Z_Construct_UScriptStruct_FChooserPropertyBinding_Statics::NewStructOps, TEXT("ChooserPropertyBinding"), &Z_Registration_Info_UScriptStruct_ChooserPropertyBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChooserPropertyBinding), 3662209599U) },
		{ FChooserEnumPropertyBinding::StaticStruct, Z_Construct_UScriptStruct_FChooserEnumPropertyBinding_Statics::NewStructOps, TEXT("ChooserEnumPropertyBinding"), &Z_Registration_Info_UScriptStruct_ChooserEnumPropertyBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChooserEnumPropertyBinding), 490489282U) },
		{ FChooserObjectPropertyBinding::StaticStruct, Z_Construct_UScriptStruct_FChooserObjectPropertyBinding_Statics::NewStructOps, TEXT("ChooserObjectPropertyBinding"), &Z_Registration_Info_UScriptStruct_ChooserObjectPropertyBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChooserObjectPropertyBinding), 183169939U) },
		{ FChooserStructPropertyBinding::StaticStruct, Z_Construct_UScriptStruct_FChooserStructPropertyBinding_Statics::NewStructOps, TEXT("ChooserStructPropertyBinding"), &Z_Registration_Info_UScriptStruct_ChooserStructPropertyBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChooserStructPropertyBinding), 1018217836U) },
		{ FContextObjectTypeBase::StaticStruct, Z_Construct_UScriptStruct_FContextObjectTypeBase_Statics::NewStructOps, TEXT("ContextObjectTypeBase"), &Z_Registration_Info_UScriptStruct_ContextObjectTypeBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FContextObjectTypeBase), 969821102U) },
		{ FContextObjectTypeClass::StaticStruct, Z_Construct_UScriptStruct_FContextObjectTypeClass_Statics::NewStructOps, TEXT("ContextObjectTypeClass"), &Z_Registration_Info_UScriptStruct_ContextObjectTypeClass, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FContextObjectTypeClass), 2132248530U) },
		{ FContextObjectTypeStruct::StaticStruct, Z_Construct_UScriptStruct_FContextObjectTypeStruct_Statics::NewStructOps, TEXT("ContextObjectTypeStruct"), &Z_Registration_Info_UScriptStruct_ContextObjectTypeStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FContextObjectTypeStruct), 4076473053U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_ChooserPropertyAccess_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHasContextClass, UHasContextClass::StaticClass, TEXT("UHasContextClass"), &Z_Registration_Info_UClass_UHasContextClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHasContextClass), 1094683413U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_ChooserPropertyAccess_h_3853041777(TEXT("/Script/Chooser"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_ChooserPropertyAccess_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_ChooserPropertyAccess_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_ChooserPropertyAccess_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_ChooserPropertyAccess_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_ChooserPropertyAccess_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_ChooserPropertyAccess_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
