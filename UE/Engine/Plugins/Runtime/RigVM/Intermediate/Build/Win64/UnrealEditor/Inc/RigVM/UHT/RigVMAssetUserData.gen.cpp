// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMCore/RigVMAssetUserData.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMAssetUserData() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset_NoRegister();
	RIGVM_API UClass* Z_Construct_UClass_UDataAssetLink();
	RIGVM_API UClass* Z_Construct_UClass_UDataAssetLink_NoRegister();
	RIGVM_API UClass* Z_Construct_UClass_UNameSpacedUserData();
	RIGVM_API UClass* Z_Construct_UClass_UNameSpacedUserData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References
	void UNameSpacedUserData::StaticRegisterNativesUNameSpacedUserData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNameSpacedUserData);
	UClass* Z_Construct_UClass_UNameSpacedUserData_NoRegister()
	{
		return UNameSpacedUserData::StaticClass();
	}
	struct Z_Construct_UClass_UNameSpacedUserData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NameSpace_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NameSpace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNameSpacedUserData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetUserData,
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNameSpacedUserData_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNameSpacedUserData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* User data that can be attached to assets to provide namespaced data access.\n*/" },
		{ "IncludePath", "RigVMCore/RigVMAssetUserData.h" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMAssetUserData.h" },
		{ "ToolTip", "User data that can be attached to assets to provide namespaced data access." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNameSpacedUserData_Statics::NewProp_NameSpace_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** The namespace to use when looking up values inside of the user data. */" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMAssetUserData.h" },
		{ "ToolTip", "The namespace to use when looking up values inside of the user data." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNameSpacedUserData_Statics::NewProp_NameSpace = { "NameSpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNameSpacedUserData, NameSpace), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNameSpacedUserData_Statics::NewProp_NameSpace_MetaData), Z_Construct_UClass_UNameSpacedUserData_Statics::NewProp_NameSpace_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNameSpacedUserData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNameSpacedUserData_Statics::NewProp_NameSpace,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNameSpacedUserData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNameSpacedUserData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNameSpacedUserData_Statics::ClassParams = {
		&UNameSpacedUserData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNameSpacedUserData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNameSpacedUserData_Statics::PropPointers),
		0,
		0x003010A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNameSpacedUserData_Statics::Class_MetaDataParams), Z_Construct_UClass_UNameSpacedUserData_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNameSpacedUserData_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UNameSpacedUserData()
	{
		if (!Z_Registration_Info_UClass_UNameSpacedUserData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNameSpacedUserData.OuterSingleton, Z_Construct_UClass_UNameSpacedUserData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNameSpacedUserData.OuterSingleton;
	}
	template<> RIGVM_API UClass* StaticClass<UNameSpacedUserData>()
	{
		return UNameSpacedUserData::StaticClass();
	}
	UNameSpacedUserData::UNameSpacedUserData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNameSpacedUserData);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UNameSpacedUserData)
	DEFINE_FUNCTION(UDataAssetLink::execSetDataAsset)
	{
		P_GET_OBJECT(UDataAsset,Z_Param_InDataAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDataAsset(Z_Param_InDataAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataAssetLink::execGetDataAsset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDataAsset**)Z_Param__Result=P_THIS->GetDataAsset();
		P_NATIVE_END;
	}
	void UDataAssetLink::StaticRegisterNativesUDataAssetLink()
	{
		UClass* Class = UDataAssetLink::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDataAsset", &UDataAssetLink::execGetDataAsset },
			{ "SetDataAsset", &UDataAssetLink::execSetDataAsset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDataAssetLink_GetDataAsset_Statics
	{
		struct DataAssetLink_eventGetDataAsset_Parms
		{
			UDataAsset* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataAssetLink_GetDataAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataAssetLink_eventGetDataAsset_Parms, ReturnValue), Z_Construct_UClass_UDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataAssetLink_GetDataAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataAssetLink_GetDataAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataAssetLink_GetDataAsset_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMAssetUserData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataAssetLink_GetDataAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataAssetLink, nullptr, "GetDataAsset", nullptr, nullptr, Z_Construct_UFunction_UDataAssetLink_GetDataAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataAssetLink_GetDataAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDataAssetLink_GetDataAsset_Statics::DataAssetLink_eventGetDataAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataAssetLink_GetDataAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataAssetLink_GetDataAsset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataAssetLink_GetDataAsset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDataAssetLink_GetDataAsset_Statics::DataAssetLink_eventGetDataAsset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDataAssetLink_GetDataAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataAssetLink_GetDataAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataAssetLink_SetDataAsset_Statics
	{
		struct DataAssetLink_eventSetDataAsset_Parms
		{
			UDataAsset* InDataAsset;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InDataAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataAssetLink_SetDataAsset_Statics::NewProp_InDataAsset = { "InDataAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataAssetLink_eventSetDataAsset_Parms, InDataAsset), Z_Construct_UClass_UDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataAssetLink_SetDataAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataAssetLink_SetDataAsset_Statics::NewProp_InDataAsset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataAssetLink_SetDataAsset_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMAssetUserData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataAssetLink_SetDataAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataAssetLink, nullptr, "SetDataAsset", nullptr, nullptr, Z_Construct_UFunction_UDataAssetLink_SetDataAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataAssetLink_SetDataAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDataAssetLink_SetDataAsset_Statics::DataAssetLink_eventSetDataAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataAssetLink_SetDataAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataAssetLink_SetDataAsset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataAssetLink_SetDataAsset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDataAssetLink_SetDataAsset_Statics::DataAssetLink_eventSetDataAsset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDataAssetLink_SetDataAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataAssetLink_SetDataAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataAssetLink);
	UClass* Z_Construct_UClass_UDataAssetLink_NoRegister()
	{
		return UDataAssetLink::StaticClass();
	}
	struct Z_Construct_UClass_UDataAssetLink_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DataAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataAssetLink_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNameSpacedUserData,
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAssetLink_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UDataAssetLink_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDataAssetLink_GetDataAsset, "GetDataAsset" }, // 4033795787
		{ &Z_Construct_UFunction_UDataAssetLink_SetDataAsset, "SetDataAsset" }, // 730130615
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAssetLink_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataAssetLink_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Namespaced user data which provides access to a linked data asset\n*/" },
		{ "IncludePath", "RigVMCore/RigVMAssetUserData.h" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMAssetUserData.h" },
		{ "ToolTip", "Namespaced user data which provides access to a linked data asset" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataAssetLink_Statics::NewProp_DataAsset_MetaData[] = {
		{ "BlueprintGetter", "GetDataAsset" },
		{ "BlueprintSetter", "SetDataAsset" },
		{ "Category", "General" },
		{ "Comment", "/** If assigned, the data asset link will provide access to the data asset's content. */" },
		{ "DisplayAfter", "NameSpace" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMAssetUserData.h" },
		{ "ToolTip", "If assigned, the data asset link will provide access to the data asset's content." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDataAssetLink_Statics::NewProp_DataAsset = { "DataAsset", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataAssetLink, DataAsset), Z_Construct_UClass_UDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAssetLink_Statics::NewProp_DataAsset_MetaData), Z_Construct_UClass_UDataAssetLink_Statics::NewProp_DataAsset_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataAssetLink_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataAssetLink_Statics::NewProp_DataAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataAssetLink_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataAssetLink>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataAssetLink_Statics::ClassParams = {
		&UDataAssetLink::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDataAssetLink_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDataAssetLink_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAssetLink_Statics::Class_MetaDataParams), Z_Construct_UClass_UDataAssetLink_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAssetLink_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDataAssetLink()
	{
		if (!Z_Registration_Info_UClass_UDataAssetLink.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataAssetLink.OuterSingleton, Z_Construct_UClass_UDataAssetLink_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataAssetLink.OuterSingleton;
	}
	template<> RIGVM_API UClass* StaticClass<UDataAssetLink>()
	{
		return UDataAssetLink::StaticClass();
	}
	UDataAssetLink::UDataAssetLink(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataAssetLink);
	UDataAssetLink::~UDataAssetLink() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMAssetUserData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMAssetUserData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNameSpacedUserData, UNameSpacedUserData::StaticClass, TEXT("UNameSpacedUserData"), &Z_Registration_Info_UClass_UNameSpacedUserData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNameSpacedUserData), 2399652273U) },
		{ Z_Construct_UClass_UDataAssetLink, UDataAssetLink::StaticClass, TEXT("UDataAssetLink"), &Z_Registration_Info_UClass_UDataAssetLink, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataAssetLink), 4037319528U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMAssetUserData_h_3715851597(TEXT("/Script/RigVM"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMAssetUserData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMAssetUserData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
