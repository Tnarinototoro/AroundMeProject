// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViewModels/HierarchyEditor/NiagaraHierarchyViewModelBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraHierarchyViewModelBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraHierarchyCategory();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraHierarchyCategory_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraHierarchyDataRefreshContext();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraHierarchyDataRefreshContext_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraHierarchyItem();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraHierarchyItem_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraHierarchyItemBase();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraHierarchyItemBase_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraHierarchyMenuContext();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraHierarchyMenuContext_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraHierarchyObjectProperty();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraHierarchyObjectProperty_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraHierarchyRoot();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraHierarchyRoot_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraHierarchySection();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraHierarchySection_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraHierarchyViewModelBase();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraHierarchyViewModelBase_NoRegister();
	NIAGARAEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraHierarchyIdentity();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraHierarchyIdentity;
class UScriptStruct* FNiagaraHierarchyIdentity::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraHierarchyIdentity.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraHierarchyIdentity.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraHierarchyIdentity, (UObject*)Z_Construct_UPackage__Script_NiagaraEditor(), TEXT("NiagaraHierarchyIdentity"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraHierarchyIdentity.OuterSingleton;
}
template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<FNiagaraHierarchyIdentity>()
{
	return FNiagaraHierarchyIdentity::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraHierarchyIdentity_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Guids_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Guids_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Guids;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Names_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Names_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Names;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraHierarchyIdentity_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ViewModels/HierarchyEditor/NiagaraHierarchyViewModelBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraHierarchyIdentity_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraHierarchyIdentity>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraHierarchyIdentity_Statics::NewProp_Guids_Inner = { "Guids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraHierarchyIdentity_Statics::NewProp_Guids_MetaData[] = {
		{ "Comment", "/** An array of guids that have to be satisfied in order to match. */" },
		{ "ModuleRelativePath", "Public/ViewModels/HierarchyEditor/NiagaraHierarchyViewModelBase.h" },
		{ "ToolTip", "An array of guids that have to be satisfied in order to match." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraHierarchyIdentity_Statics::NewProp_Guids = { "Guids", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraHierarchyIdentity, Guids), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraHierarchyIdentity_Statics::NewProp_Guids_MetaData), Z_Construct_UScriptStruct_FNiagaraHierarchyIdentity_Statics::NewProp_Guids_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraHierarchyIdentity_Statics::NewProp_Names_Inner = { "Names", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraHierarchyIdentity_Statics::NewProp_Names_MetaData[] = {
		{ "Comment", "/** Optionally, an array of names can be specified in place of guids. If guids & names are present, guids have to be satisfied first, then names. */" },
		{ "ModuleRelativePath", "Public/ViewModels/HierarchyEditor/NiagaraHierarchyViewModelBase.h" },
		{ "ToolTip", "Optionally, an array of names can be specified in place of guids. If guids & names are present, guids have to be satisfied first, then names." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraHierarchyIdentity_Statics::NewProp_Names = { "Names", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraHierarchyIdentity, Names), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraHierarchyIdentity_Statics::NewProp_Names_MetaData), Z_Construct_UScriptStruct_FNiagaraHierarchyIdentity_Statics::NewProp_Names_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraHierarchyIdentity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraHierarchyIdentity_Statics::NewProp_Guids_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraHierarchyIdentity_Statics::NewProp_Guids,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraHierarchyIdentity_Statics::NewProp_Names_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraHierarchyIdentity_Statics::NewProp_Names,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraHierarchyIdentity_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
		nullptr,
		&NewStructOps,
		"NiagaraHierarchyIdentity",
		Z_Construct_UScriptStruct_FNiagaraHierarchyIdentity_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraHierarchyIdentity_Statics::PropPointers),
		sizeof(FNiagaraHierarchyIdentity),
		alignof(FNiagaraHierarchyIdentity),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraHierarchyIdentity_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraHierarchyIdentity_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraHierarchyIdentity_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraHierarchyIdentity()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraHierarchyIdentity.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraHierarchyIdentity.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraHierarchyIdentity_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraHierarchyIdentity.InnerSingleton;
	}
	void UNiagaraHierarchyDataRefreshContext::StaticRegisterNativesUNiagaraHierarchyDataRefreshContext()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraHierarchyDataRefreshContext);
	UClass* Z_Construct_UClass_UNiagaraHierarchyDataRefreshContext_NoRegister()
	{
		return UNiagaraHierarchyDataRefreshContext::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraHierarchyDataRefreshContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_IdentityToObjectMap_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_IdentityToObjectMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IdentityToObjectMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_IdentityToObjectMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraHierarchyDataRefreshContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchyDataRefreshContext_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraHierarchyDataRefreshContext_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A base class that is used to refresh data that represents external data. Inherit from this class if you need more context data. */" },
		{ "IncludePath", "ViewModels/HierarchyEditor/NiagaraHierarchyViewModelBase.h" },
		{ "ModuleRelativePath", "Public/ViewModels/HierarchyEditor/NiagaraHierarchyViewModelBase.h" },
		{ "ToolTip", "A base class that is used to refresh data that represents external data. Inherit from this class if you need more context data." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraHierarchyDataRefreshContext_Statics::NewProp_IdentityToObjectMap_ValueProp = { "IdentityToObjectMap", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraHierarchyDataRefreshContext_Statics::NewProp_IdentityToObjectMap_Key_KeyProp = { "IdentityToObjectMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraHierarchyIdentity, METADATA_PARAMS(0, nullptr) }; // 2181774492
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraHierarchyDataRefreshContext_Statics::NewProp_IdentityToObjectMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/ViewModels/HierarchyEditor/NiagaraHierarchyViewModelBase.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNiagaraHierarchyDataRefreshContext_Statics::NewProp_IdentityToObjectMap = { "IdentityToObjectMap", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraHierarchyDataRefreshContext, IdentityToObjectMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchyDataRefreshContext_Statics::NewProp_IdentityToObjectMap_MetaData), Z_Construct_UClass_UNiagaraHierarchyDataRefreshContext_Statics::NewProp_IdentityToObjectMap_MetaData) }; // 2181774492
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraHierarchyDataRefreshContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraHierarchyDataRefreshContext_Statics::NewProp_IdentityToObjectMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraHierarchyDataRefreshContext_Statics::NewProp_IdentityToObjectMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraHierarchyDataRefreshContext_Statics::NewProp_IdentityToObjectMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraHierarchyDataRefreshContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraHierarchyDataRefreshContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraHierarchyDataRefreshContext_Statics::ClassParams = {
		&UNiagaraHierarchyDataRefreshContext::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraHierarchyDataRefreshContext_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchyDataRefreshContext_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchyDataRefreshContext_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraHierarchyDataRefreshContext_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchyDataRefreshContext_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UNiagaraHierarchyDataRefreshContext()
	{
		if (!Z_Registration_Info_UClass_UNiagaraHierarchyDataRefreshContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraHierarchyDataRefreshContext.OuterSingleton, Z_Construct_UClass_UNiagaraHierarchyDataRefreshContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraHierarchyDataRefreshContext.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraHierarchyDataRefreshContext>()
	{
		return UNiagaraHierarchyDataRefreshContext::StaticClass();
	}
	UNiagaraHierarchyDataRefreshContext::UNiagaraHierarchyDataRefreshContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraHierarchyDataRefreshContext);
	UNiagaraHierarchyDataRefreshContext::~UNiagaraHierarchyDataRefreshContext() {}
	void UNiagaraHierarchyItemBase::StaticRegisterNativesUNiagaraHierarchyItemBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraHierarchyItemBase);
	UClass* Z_Construct_UClass_UNiagaraHierarchyItemBase_NoRegister()
	{
		return UNiagaraHierarchyItemBase::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraHierarchyItemBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Children_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Children_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Children;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Identity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraHierarchyItemBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchyItemBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraHierarchyItemBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ViewModels/HierarchyEditor/NiagaraHierarchyViewModelBase.h" },
		{ "ModuleRelativePath", "Public/ViewModels/HierarchyEditor/NiagaraHierarchyViewModelBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraHierarchyItemBase_Statics::NewProp_Children_Inner = { "Children", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNiagaraHierarchyItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraHierarchyItemBase_Statics::NewProp_Children_MetaData[] = {
		{ "ModuleRelativePath", "Public/ViewModels/HierarchyEditor/NiagaraHierarchyViewModelBase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraHierarchyItemBase_Statics::NewProp_Children = { "Children", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraHierarchyItemBase, Children), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchyItemBase_Statics::NewProp_Children_MetaData), Z_Construct_UClass_UNiagaraHierarchyItemBase_Statics::NewProp_Children_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraHierarchyItemBase_Statics::NewProp_Identity_MetaData[] = {
		{ "ModuleRelativePath", "Public/ViewModels/HierarchyEditor/NiagaraHierarchyViewModelBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraHierarchyItemBase_Statics::NewProp_Identity = { "Identity", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraHierarchyItemBase, Identity), Z_Construct_UScriptStruct_FNiagaraHierarchyIdentity, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchyItemBase_Statics::NewProp_Identity_MetaData), Z_Construct_UClass_UNiagaraHierarchyItemBase_Statics::NewProp_Identity_MetaData) }; // 2181774492
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraHierarchyItemBase_Statics::NewProp_Guid_MetaData[] = {
		{ "Comment", "/** An optional guid; can be used if hierarchy items represent outside items */" },
		{ "ModuleRelativePath", "Public/ViewModels/HierarchyEditor/NiagaraHierarchyViewModelBase.h" },
		{ "ToolTip", "An optional guid; can be used if hierarchy items represent outside items" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraHierarchyItemBase_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0020080020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraHierarchyItemBase, Guid_DEPRECATED), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchyItemBase_Statics::NewProp_Guid_MetaData), Z_Construct_UClass_UNiagaraHierarchyItemBase_Statics::NewProp_Guid_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraHierarchyItemBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraHierarchyItemBase_Statics::NewProp_Children_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraHierarchyItemBase_Statics::NewProp_Children,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraHierarchyItemBase_Statics::NewProp_Identity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraHierarchyItemBase_Statics::NewProp_Guid,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraHierarchyItemBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraHierarchyItemBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraHierarchyItemBase_Statics::ClassParams = {
		&UNiagaraHierarchyItemBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraHierarchyItemBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchyItemBase_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchyItemBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraHierarchyItemBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchyItemBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UNiagaraHierarchyItemBase()
	{
		if (!Z_Registration_Info_UClass_UNiagaraHierarchyItemBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraHierarchyItemBase.OuterSingleton, Z_Construct_UClass_UNiagaraHierarchyItemBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraHierarchyItemBase.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraHierarchyItemBase>()
	{
		return UNiagaraHierarchyItemBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraHierarchyItemBase);
	void UNiagaraHierarchyRoot::StaticRegisterNativesUNiagaraHierarchyRoot()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraHierarchyRoot);
	UClass* Z_Construct_UClass_UNiagaraHierarchyRoot_NoRegister()
	{
		return UNiagaraHierarchyRoot::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraHierarchyRoot_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Sections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Sections;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraHierarchyRoot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraHierarchyItemBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchyRoot_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraHierarchyRoot_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ViewModels/HierarchyEditor/NiagaraHierarchyViewModelBase.h" },
		{ "ModuleRelativePath", "Public/ViewModels/HierarchyEditor/NiagaraHierarchyViewModelBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraHierarchyRoot_Statics::NewProp_Sections_Inner = { "Sections", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNiagaraHierarchySection_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraHierarchyRoot_Statics::NewProp_Sections_MetaData[] = {
		{ "ModuleRelativePath", "Public/ViewModels/HierarchyEditor/NiagaraHierarchyViewModelBase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraHierarchyRoot_Statics::NewProp_Sections = { "Sections", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraHierarchyRoot, Sections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchyRoot_Statics::NewProp_Sections_MetaData), Z_Construct_UClass_UNiagaraHierarchyRoot_Statics::NewProp_Sections_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraHierarchyRoot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraHierarchyRoot_Statics::NewProp_Sections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraHierarchyRoot_Statics::NewProp_Sections,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraHierarchyRoot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraHierarchyRoot>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraHierarchyRoot_Statics::ClassParams = {
		&UNiagaraHierarchyRoot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraHierarchyRoot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchyRoot_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchyRoot_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraHierarchyRoot_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchyRoot_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UNiagaraHierarchyRoot()
	{
		if (!Z_Registration_Info_UClass_UNiagaraHierarchyRoot.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraHierarchyRoot.OuterSingleton, Z_Construct_UClass_UNiagaraHierarchyRoot_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraHierarchyRoot.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraHierarchyRoot>()
	{
		return UNiagaraHierarchyRoot::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraHierarchyRoot);
	void UNiagaraHierarchyItem::StaticRegisterNativesUNiagaraHierarchyItem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraHierarchyItem);
	UClass* Z_Construct_UClass_UNiagaraHierarchyItem_NoRegister()
	{
		return UNiagaraHierarchyItem::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraHierarchyItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraHierarchyItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraHierarchyItemBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchyItem_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraHierarchyItem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ViewModels/HierarchyEditor/NiagaraHierarchyViewModelBase.h" },
		{ "ModuleRelativePath", "Public/ViewModels/HierarchyEditor/NiagaraHierarchyViewModelBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraHierarchyItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraHierarchyItem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraHierarchyItem_Statics::ClassParams = {
		&UNiagaraHierarchyItem::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchyItem_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraHierarchyItem_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UNiagaraHierarchyItem()
	{
		if (!Z_Registration_Info_UClass_UNiagaraHierarchyItem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraHierarchyItem.OuterSingleton, Z_Construct_UClass_UNiagaraHierarchyItem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraHierarchyItem.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraHierarchyItem>()
	{
		return UNiagaraHierarchyItem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraHierarchyItem);
	void UNiagaraHierarchyCategory::StaticRegisterNativesUNiagaraHierarchyCategory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraHierarchyCategory);
	UClass* Z_Construct_UClass_UNiagaraHierarchyCategory_NoRegister()
	{
		return UNiagaraHierarchyCategory::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraHierarchyCategory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Category;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tooltip_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Tooltip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Section;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraHierarchyCategory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraHierarchyItemBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchyCategory_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraHierarchyCategory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ViewModels/HierarchyEditor/NiagaraHierarchyViewModelBase.h" },
		{ "ModuleRelativePath", "Public/ViewModels/HierarchyEditor/NiagaraHierarchyViewModelBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraHierarchyCategory_Statics::NewProp_Category_MetaData[] = {
		{ "ModuleRelativePath", "Public/ViewModels/HierarchyEditor/NiagaraHierarchyViewModelBase.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraHierarchyCategory_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraHierarchyCategory, Category), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchyCategory_Statics::NewProp_Category_MetaData), Z_Construct_UClass_UNiagaraHierarchyCategory_Statics::NewProp_Category_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraHierarchyCategory_Statics::NewProp_Tooltip_MetaData[] = {
		{ "Category", "Category" },
		{ "Comment", "/** The tooltip used when the user is hovering this category */" },
		{ "ModuleRelativePath", "Public/ViewModels/HierarchyEditor/NiagaraHierarchyViewModelBase.h" },
		{ "MultiLine", "true" },
		{ "ToolTip", "The tooltip used when the user is hovering this category" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNiagaraHierarchyCategory_Statics::NewProp_Tooltip = { "Tooltip", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraHierarchyCategory, Tooltip), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchyCategory_Statics::NewProp_Tooltip_MetaData), Z_Construct_UClass_UNiagaraHierarchyCategory_Statics::NewProp_Tooltip_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraHierarchyCategory_Statics::NewProp_Section_MetaData[] = {
		{ "ModuleRelativePath", "Public/ViewModels/HierarchyEditor/NiagaraHierarchyViewModelBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraHierarchyCategory_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraHierarchyCategory, Section), Z_Construct_UClass_UNiagaraHierarchySection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchyCategory_Statics::NewProp_Section_MetaData), Z_Construct_UClass_UNiagaraHierarchyCategory_Statics::NewProp_Section_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraHierarchyCategory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraHierarchyCategory_Statics::NewProp_Category,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraHierarchyCategory_Statics::NewProp_Tooltip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraHierarchyCategory_Statics::NewProp_Section,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraHierarchyCategory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraHierarchyCategory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraHierarchyCategory_Statics::ClassParams = {
		&UNiagaraHierarchyCategory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraHierarchyCategory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchyCategory_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchyCategory_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraHierarchyCategory_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchyCategory_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UNiagaraHierarchyCategory()
	{
		if (!Z_Registration_Info_UClass_UNiagaraHierarchyCategory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraHierarchyCategory.OuterSingleton, Z_Construct_UClass_UNiagaraHierarchyCategory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraHierarchyCategory.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraHierarchyCategory>()
	{
		return UNiagaraHierarchyCategory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraHierarchyCategory);
	UNiagaraHierarchyCategory::~UNiagaraHierarchyCategory() {}
	void UNiagaraHierarchySection::StaticRegisterNativesUNiagaraHierarchySection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraHierarchySection);
	UClass* Z_Construct_UClass_UNiagaraHierarchySection_NoRegister()
	{
		return UNiagaraHierarchySection::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraHierarchySection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Section;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tooltip_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Tooltip;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraHierarchySection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraHierarchyItemBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchySection_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraHierarchySection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ViewModels/HierarchyEditor/NiagaraHierarchyViewModelBase.h" },
		{ "ModuleRelativePath", "Public/ViewModels/HierarchyEditor/NiagaraHierarchyViewModelBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraHierarchySection_Statics::NewProp_Section_MetaData[] = {
		{ "ModuleRelativePath", "Public/ViewModels/HierarchyEditor/NiagaraHierarchyViewModelBase.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraHierarchySection_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraHierarchySection, Section), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchySection_Statics::NewProp_Section_MetaData), Z_Construct_UClass_UNiagaraHierarchySection_Statics::NewProp_Section_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraHierarchySection_Statics::NewProp_Tooltip_MetaData[] = {
		{ "Category", "Section" },
		{ "Comment", "/** The tooltip used when the user is hovering this section */" },
		{ "ModuleRelativePath", "Public/ViewModels/HierarchyEditor/NiagaraHierarchyViewModelBase.h" },
		{ "MultiLine", "true" },
		{ "ToolTip", "The tooltip used when the user is hovering this section" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNiagaraHierarchySection_Statics::NewProp_Tooltip = { "Tooltip", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraHierarchySection, Tooltip), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchySection_Statics::NewProp_Tooltip_MetaData), Z_Construct_UClass_UNiagaraHierarchySection_Statics::NewProp_Tooltip_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraHierarchySection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraHierarchySection_Statics::NewProp_Section,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraHierarchySection_Statics::NewProp_Tooltip,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraHierarchySection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraHierarchySection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraHierarchySection_Statics::ClassParams = {
		&UNiagaraHierarchySection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraHierarchySection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchySection_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchySection_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraHierarchySection_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchySection_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UNiagaraHierarchySection()
	{
		if (!Z_Registration_Info_UClass_UNiagaraHierarchySection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraHierarchySection.OuterSingleton, Z_Construct_UClass_UNiagaraHierarchySection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraHierarchySection.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraHierarchySection>()
	{
		return UNiagaraHierarchySection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraHierarchySection);
	UNiagaraHierarchySection::~UNiagaraHierarchySection() {}
	void UNiagaraHierarchyObjectProperty::StaticRegisterNativesUNiagaraHierarchyObjectProperty()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraHierarchyObjectProperty);
	UClass* Z_Construct_UClass_UNiagaraHierarchyObjectProperty_NoRegister()
	{
		return UNiagaraHierarchyObjectProperty::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraHierarchyObjectProperty_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraHierarchyObjectProperty_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraHierarchyItem,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchyObjectProperty_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraHierarchyObjectProperty_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ViewModels/HierarchyEditor/NiagaraHierarchyViewModelBase.h" },
		{ "ModuleRelativePath", "Public/ViewModels/HierarchyEditor/NiagaraHierarchyViewModelBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraHierarchyObjectProperty_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraHierarchyObjectProperty>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraHierarchyObjectProperty_Statics::ClassParams = {
		&UNiagaraHierarchyObjectProperty::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchyObjectProperty_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraHierarchyObjectProperty_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UNiagaraHierarchyObjectProperty()
	{
		if (!Z_Registration_Info_UClass_UNiagaraHierarchyObjectProperty.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraHierarchyObjectProperty.OuterSingleton, Z_Construct_UClass_UNiagaraHierarchyObjectProperty_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraHierarchyObjectProperty.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraHierarchyObjectProperty>()
	{
		return UNiagaraHierarchyObjectProperty::StaticClass();
	}
	UNiagaraHierarchyObjectProperty::UNiagaraHierarchyObjectProperty() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraHierarchyObjectProperty);
	UNiagaraHierarchyObjectProperty::~UNiagaraHierarchyObjectProperty() {}
	void UNiagaraHierarchyMenuContext::StaticRegisterNativesUNiagaraHierarchyMenuContext()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraHierarchyMenuContext);
	UClass* Z_Construct_UClass_UNiagaraHierarchyMenuContext_NoRegister()
	{
		return UNiagaraHierarchyMenuContext::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraHierarchyMenuContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraHierarchyMenuContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchyMenuContext_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraHierarchyMenuContext_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ViewModels/HierarchyEditor/NiagaraHierarchyViewModelBase.h" },
		{ "ModuleRelativePath", "Public/ViewModels/HierarchyEditor/NiagaraHierarchyViewModelBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraHierarchyMenuContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraHierarchyMenuContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraHierarchyMenuContext_Statics::ClassParams = {
		&UNiagaraHierarchyMenuContext::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchyMenuContext_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraHierarchyMenuContext_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UNiagaraHierarchyMenuContext()
	{
		if (!Z_Registration_Info_UClass_UNiagaraHierarchyMenuContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraHierarchyMenuContext.OuterSingleton, Z_Construct_UClass_UNiagaraHierarchyMenuContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraHierarchyMenuContext.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraHierarchyMenuContext>()
	{
		return UNiagaraHierarchyMenuContext::StaticClass();
	}
	UNiagaraHierarchyMenuContext::UNiagaraHierarchyMenuContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraHierarchyMenuContext);
	UNiagaraHierarchyMenuContext::~UNiagaraHierarchyMenuContext() {}
	void UNiagaraHierarchyViewModelBase::StaticRegisterNativesUNiagaraHierarchyViewModelBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraHierarchyViewModelBase);
	UClass* Z_Construct_UClass_UNiagaraHierarchyViewModelBase_NoRegister()
	{
		return UNiagaraHierarchyViewModelBase::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraHierarchyViewModelBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HierarchyRoot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HierarchyRoot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RefreshContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RefreshContext;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraHierarchyViewModelBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchyViewModelBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraHierarchyViewModelBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ViewModels/HierarchyEditor/NiagaraHierarchyViewModelBase.h" },
		{ "ModuleRelativePath", "Public/ViewModels/HierarchyEditor/NiagaraHierarchyViewModelBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraHierarchyViewModelBase_Statics::NewProp_HierarchyRoot_MetaData[] = {
		{ "ModuleRelativePath", "Public/ViewModels/HierarchyEditor/NiagaraHierarchyViewModelBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraHierarchyViewModelBase_Statics::NewProp_HierarchyRoot = { "HierarchyRoot", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraHierarchyViewModelBase, HierarchyRoot), Z_Construct_UClass_UNiagaraHierarchyRoot_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchyViewModelBase_Statics::NewProp_HierarchyRoot_MetaData), Z_Construct_UClass_UNiagaraHierarchyViewModelBase_Statics::NewProp_HierarchyRoot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraHierarchyViewModelBase_Statics::NewProp_RefreshContext_MetaData[] = {
		{ "ModuleRelativePath", "Public/ViewModels/HierarchyEditor/NiagaraHierarchyViewModelBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraHierarchyViewModelBase_Statics::NewProp_RefreshContext = { "RefreshContext", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraHierarchyViewModelBase, RefreshContext), Z_Construct_UClass_UNiagaraHierarchyDataRefreshContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchyViewModelBase_Statics::NewProp_RefreshContext_MetaData), Z_Construct_UClass_UNiagaraHierarchyViewModelBase_Statics::NewProp_RefreshContext_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraHierarchyViewModelBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraHierarchyViewModelBase_Statics::NewProp_HierarchyRoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraHierarchyViewModelBase_Statics::NewProp_RefreshContext,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraHierarchyViewModelBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraHierarchyViewModelBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraHierarchyViewModelBase_Statics::ClassParams = {
		&UNiagaraHierarchyViewModelBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraHierarchyViewModelBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchyViewModelBase_Statics::PropPointers),
		0,
		0x000000A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchyViewModelBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraHierarchyViewModelBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchyViewModelBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UNiagaraHierarchyViewModelBase()
	{
		if (!Z_Registration_Info_UClass_UNiagaraHierarchyViewModelBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraHierarchyViewModelBase.OuterSingleton, Z_Construct_UClass_UNiagaraHierarchyViewModelBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraHierarchyViewModelBase.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraHierarchyViewModelBase>()
	{
		return UNiagaraHierarchyViewModelBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraHierarchyViewModelBase);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_HierarchyEditor_NiagaraHierarchyViewModelBase_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_HierarchyEditor_NiagaraHierarchyViewModelBase_h_Statics::ScriptStructInfo[] = {
		{ FNiagaraHierarchyIdentity::StaticStruct, Z_Construct_UScriptStruct_FNiagaraHierarchyIdentity_Statics::NewStructOps, TEXT("NiagaraHierarchyIdentity"), &Z_Registration_Info_UScriptStruct_NiagaraHierarchyIdentity, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraHierarchyIdentity), 2181774492U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_HierarchyEditor_NiagaraHierarchyViewModelBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraHierarchyDataRefreshContext, UNiagaraHierarchyDataRefreshContext::StaticClass, TEXT("UNiagaraHierarchyDataRefreshContext"), &Z_Registration_Info_UClass_UNiagaraHierarchyDataRefreshContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraHierarchyDataRefreshContext), 3777824263U) },
		{ Z_Construct_UClass_UNiagaraHierarchyItemBase, UNiagaraHierarchyItemBase::StaticClass, TEXT("UNiagaraHierarchyItemBase"), &Z_Registration_Info_UClass_UNiagaraHierarchyItemBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraHierarchyItemBase), 2969939446U) },
		{ Z_Construct_UClass_UNiagaraHierarchyRoot, UNiagaraHierarchyRoot::StaticClass, TEXT("UNiagaraHierarchyRoot"), &Z_Registration_Info_UClass_UNiagaraHierarchyRoot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraHierarchyRoot), 3948478989U) },
		{ Z_Construct_UClass_UNiagaraHierarchyItem, UNiagaraHierarchyItem::StaticClass, TEXT("UNiagaraHierarchyItem"), &Z_Registration_Info_UClass_UNiagaraHierarchyItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraHierarchyItem), 4026465173U) },
		{ Z_Construct_UClass_UNiagaraHierarchyCategory, UNiagaraHierarchyCategory::StaticClass, TEXT("UNiagaraHierarchyCategory"), &Z_Registration_Info_UClass_UNiagaraHierarchyCategory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraHierarchyCategory), 3689465403U) },
		{ Z_Construct_UClass_UNiagaraHierarchySection, UNiagaraHierarchySection::StaticClass, TEXT("UNiagaraHierarchySection"), &Z_Registration_Info_UClass_UNiagaraHierarchySection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraHierarchySection), 366671431U) },
		{ Z_Construct_UClass_UNiagaraHierarchyObjectProperty, UNiagaraHierarchyObjectProperty::StaticClass, TEXT("UNiagaraHierarchyObjectProperty"), &Z_Registration_Info_UClass_UNiagaraHierarchyObjectProperty, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraHierarchyObjectProperty), 3608833679U) },
		{ Z_Construct_UClass_UNiagaraHierarchyMenuContext, UNiagaraHierarchyMenuContext::StaticClass, TEXT("UNiagaraHierarchyMenuContext"), &Z_Registration_Info_UClass_UNiagaraHierarchyMenuContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraHierarchyMenuContext), 4010512634U) },
		{ Z_Construct_UClass_UNiagaraHierarchyViewModelBase, UNiagaraHierarchyViewModelBase::StaticClass, TEXT("UNiagaraHierarchyViewModelBase"), &Z_Registration_Info_UClass_UNiagaraHierarchyViewModelBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraHierarchyViewModelBase), 2382989605U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_HierarchyEditor_NiagaraHierarchyViewModelBase_h_4111913792(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_HierarchyEditor_NiagaraHierarchyViewModelBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_HierarchyEditor_NiagaraHierarchyViewModelBase_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_HierarchyEditor_NiagaraHierarchyViewModelBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_HierarchyEditor_NiagaraHierarchyViewModelBase_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
