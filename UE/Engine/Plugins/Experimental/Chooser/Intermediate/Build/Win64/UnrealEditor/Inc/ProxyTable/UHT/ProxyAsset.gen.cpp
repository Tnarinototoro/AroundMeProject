// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProxyAsset.h"
#include "InstancedStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProxyAsset() {}
// Cross Module References
	CHOOSER_API UClass* Z_Construct_UClass_UHasContextClass_NoRegister();
	CHOOSER_API UEnum* Z_Construct_UEnum_Chooser_EObjectChooserResultType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	PROXYTABLE_API UClass* Z_Construct_UClass_UProxyAsset();
	PROXYTABLE_API UClass* Z_Construct_UClass_UProxyAsset_NoRegister();
	STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
	UPackage* Z_Construct_UPackage__Script_ProxyTable();
// End Cross Module References
	void UProxyAsset::StaticRegisterNativesUProxyAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UProxyAsset);
	UClass* Z_Construct_UClass_UProxyAsset_NoRegister()
	{
		return UProxyAsset::StaticClass();
	}
	struct Z_Construct_UClass_UProxyAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_Type;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ResultType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResultType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ResultType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ContextData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ContextData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProxyTable_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProxyTable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_ContextClass;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProxyAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ProxyTable,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProxyAsset_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProxyAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ProxyAsset.h" },
		{ "ModuleRelativePath", "Public/ProxyAsset.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProxyAsset_Statics::NewProp_Type_MetaData[] = {
		{ "AllowAbstract", "TRUE" },
		{ "Category", "Proxy" },
		{ "ModuleRelativePath", "Public/ProxyAsset.h" },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UClass_UProxyAsset_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProxyAsset, Type), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProxyAsset_Statics::NewProp_Type_MetaData), Z_Construct_UClass_UProxyAsset_Statics::NewProp_Type_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UProxyAsset_Statics::NewProp_ResultType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProxyAsset_Statics::NewProp_ResultType_MetaData[] = {
		{ "Category", "Proxy" },
		{ "ModuleRelativePath", "Public/ProxyAsset.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UProxyAsset_Statics::NewProp_ResultType = { "ResultType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProxyAsset, ResultType), Z_Construct_UEnum_Chooser_EObjectChooserResultType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProxyAsset_Statics::NewProp_ResultType_MetaData), Z_Construct_UClass_UProxyAsset_Statics::NewProp_ResultType_MetaData) }; // 3416964923
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProxyAsset_Statics::NewProp_ContextData_Inner = { "ContextData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(0, nullptr) }; // 2114042832
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProxyAsset_Statics::NewProp_ContextData_MetaData[] = {
		{ "BaseStruct", "/Script/Chooser.ContextObjectTypeBase" },
		{ "Category", "Input" },
		{ "ExcludeBaseStruct", "" },
		{ "ModuleRelativePath", "Public/ProxyAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UProxyAsset_Statics::NewProp_ContextData = { "ContextData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProxyAsset, ContextData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProxyAsset_Statics::NewProp_ContextData_MetaData), Z_Construct_UClass_UProxyAsset_Statics::NewProp_ContextData_MetaData) }; // 2114042832
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProxyAsset_Statics::NewProp_ProxyTable_MetaData[] = {
		{ "BaseStruct", "/Script/ProxyTable.ChooserParameterProxyTableBase" },
		{ "Category", "Proxy Table Reference" },
		{ "ExcludeBaseStruct", "" },
		{ "ModuleRelativePath", "Public/ProxyAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProxyAsset_Statics::NewProp_ProxyTable = { "ProxyTable", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProxyAsset, ProxyTable), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProxyAsset_Statics::NewProp_ProxyTable_MetaData), Z_Construct_UClass_UProxyAsset_Statics::NewProp_ProxyTable_MetaData) }; // 2114042832
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProxyAsset_Statics::NewProp_Guid_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProxyAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProxyAsset_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProxyAsset, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProxyAsset_Statics::NewProp_Guid_MetaData), Z_Construct_UClass_UProxyAsset_Statics::NewProp_Guid_MetaData) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProxyAsset_Statics::NewProp_ContextClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProxyAsset.h" },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UClass_UProxyAsset_Statics::NewProp_ContextClass = { "ContextClass", nullptr, (EPropertyFlags)0x0014000820000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProxyAsset, ContextClass_DEPRECATED), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProxyAsset_Statics::NewProp_ContextClass_MetaData), Z_Construct_UClass_UProxyAsset_Statics::NewProp_ContextClass_MetaData) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProxyAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProxyAsset_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProxyAsset_Statics::NewProp_ResultType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProxyAsset_Statics::NewProp_ResultType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProxyAsset_Statics::NewProp_ContextData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProxyAsset_Statics::NewProp_ContextData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProxyAsset_Statics::NewProp_ProxyTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProxyAsset_Statics::NewProp_Guid,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProxyAsset_Statics::NewProp_ContextClass,
#endif // WITH_EDITORONLY_DATA
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UProxyAsset_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UHasContextClass_NoRegister, (int32)VTABLE_OFFSET(UProxyAsset, IHasContextClass), false },  // 1094683413
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProxyAsset_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProxyAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProxyAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UProxyAsset_Statics::ClassParams = {
		&UProxyAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UProxyAsset_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UProxyAsset_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x000800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProxyAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UProxyAsset_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProxyAsset_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UProxyAsset()
	{
		if (!Z_Registration_Info_UClass_UProxyAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProxyAsset.OuterSingleton, Z_Construct_UClass_UProxyAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UProxyAsset.OuterSingleton;
	}
	template<> PROXYTABLE_API UClass* StaticClass<UProxyAsset>()
	{
		return UProxyAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProxyAsset);
	UProxyAsset::~UProxyAsset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTable_Public_ProxyAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTable_Public_ProxyAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UProxyAsset, UProxyAsset::StaticClass, TEXT("UProxyAsset"), &Z_Registration_Info_UClass_UProxyAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProxyAsset), 2753294048U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTable_Public_ProxyAsset_h_562314090(TEXT("/Script/ProxyTable"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTable_Public_ProxyAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTable_Public_ProxyAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
