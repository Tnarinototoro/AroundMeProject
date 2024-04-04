// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EvaluateProxyNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEvaluateProxyNode() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	PROXYTABLE_API UClass* Z_Construct_UClass_UProxyAsset_NoRegister();
	PROXYTABLEUNCOOKED_API UClass* Z_Construct_UClass_UK2Node_EvaluateProxy();
	PROXYTABLEUNCOOKED_API UClass* Z_Construct_UClass_UK2Node_EvaluateProxy2();
	PROXYTABLEUNCOOKED_API UClass* Z_Construct_UClass_UK2Node_EvaluateProxy2_NoRegister();
	PROXYTABLEUNCOOKED_API UClass* Z_Construct_UClass_UK2Node_EvaluateProxy_NoRegister();
	PROXYTABLEUNCOOKED_API UEnum* Z_Construct_UEnum_ProxyTableUncooked_EEvaluateProxyMode();
	UPackage* Z_Construct_UPackage__Script_ProxyTableUncooked();
// End Cross Module References
	void UK2Node_EvaluateProxy::StaticRegisterNativesUK2Node_EvaluateProxy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_EvaluateProxy);
	UClass* Z_Construct_UClass_UK2Node_EvaluateProxy_NoRegister()
	{
		return UK2Node_EvaluateProxy::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_EvaluateProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Proxy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Proxy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_EvaluateProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_ProxyTableUncooked,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_EvaluateProxy_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_EvaluateProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EvaluateProxyNode.h" },
		{ "ModuleRelativePath", "Private/EvaluateProxyNode.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_EvaluateProxy_Statics::NewProp_Proxy_MetaData[] = {
		{ "Category", "Proxy" },
		{ "ModuleRelativePath", "Private/EvaluateProxyNode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UK2Node_EvaluateProxy_Statics::NewProp_Proxy = { "Proxy", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UK2Node_EvaluateProxy, Proxy), Z_Construct_UClass_UProxyAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_EvaluateProxy_Statics::NewProp_Proxy_MetaData), Z_Construct_UClass_UK2Node_EvaluateProxy_Statics::NewProp_Proxy_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_EvaluateProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_EvaluateProxy_Statics::NewProp_Proxy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_EvaluateProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_EvaluateProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_EvaluateProxy_Statics::ClassParams = {
		&UK2Node_EvaluateProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_EvaluateProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_EvaluateProxy_Statics::PropPointers),
		0,
		0x010800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_EvaluateProxy_Statics::Class_MetaDataParams), Z_Construct_UClass_UK2Node_EvaluateProxy_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_EvaluateProxy_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UK2Node_EvaluateProxy()
	{
		if (!Z_Registration_Info_UClass_UK2Node_EvaluateProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_EvaluateProxy.OuterSingleton, Z_Construct_UClass_UK2Node_EvaluateProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_EvaluateProxy.OuterSingleton;
	}
	template<> PROXYTABLEUNCOOKED_API UClass* StaticClass<UK2Node_EvaluateProxy>()
	{
		return UK2Node_EvaluateProxy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_EvaluateProxy);
	UK2Node_EvaluateProxy::~UK2Node_EvaluateProxy() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEvaluateProxyMode;
	static UEnum* EEvaluateProxyMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEvaluateProxyMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEvaluateProxyMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProxyTableUncooked_EEvaluateProxyMode, (UObject*)Z_Construct_UPackage__Script_ProxyTableUncooked(), TEXT("EEvaluateProxyMode"));
		}
		return Z_Registration_Info_UEnum_EEvaluateProxyMode.OuterSingleton;
	}
	template<> PROXYTABLEUNCOOKED_API UEnum* StaticEnum<EEvaluateProxyMode>()
	{
		return EEvaluateProxyMode_StaticEnum();
	}
	struct Z_Construct_UEnum_ProxyTableUncooked_EEvaluateProxyMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ProxyTableUncooked_EEvaluateProxyMode_Statics::Enumerators[] = {
		{ "EEvaluateProxyMode::FirstResult", (int64)EEvaluateProxyMode::FirstResult },
		{ "EEvaluateProxyMode::AllResults", (int64)EEvaluateProxyMode::AllResults },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ProxyTableUncooked_EEvaluateProxyMode_Statics::Enum_MetaDataParams[] = {
		{ "AllResults.Name", "EEvaluateProxyMode::AllResults" },
		{ "FirstResult.Name", "EEvaluateProxyMode::FirstResult" },
		{ "ModuleRelativePath", "Private/EvaluateProxyNode.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProxyTableUncooked_EEvaluateProxyMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ProxyTableUncooked,
		nullptr,
		"EEvaluateProxyMode",
		"EEvaluateProxyMode",
		Z_Construct_UEnum_ProxyTableUncooked_EEvaluateProxyMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ProxyTableUncooked_EEvaluateProxyMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProxyTableUncooked_EEvaluateProxyMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProxyTableUncooked_EEvaluateProxyMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ProxyTableUncooked_EEvaluateProxyMode()
	{
		if (!Z_Registration_Info_UEnum_EEvaluateProxyMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEvaluateProxyMode.InnerSingleton, Z_Construct_UEnum_ProxyTableUncooked_EEvaluateProxyMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEvaluateProxyMode.InnerSingleton;
	}
	void UK2Node_EvaluateProxy2::StaticRegisterNativesUK2Node_EvaluateProxy2()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_EvaluateProxy2);
	UClass* Z_Construct_UClass_UK2Node_EvaluateProxy2_NoRegister()
	{
		return UK2Node_EvaluateProxy2::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_EvaluateProxy2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Proxy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Proxy;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Mode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_EvaluateProxy2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_ProxyTableUncooked,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_EvaluateProxy2_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_EvaluateProxy2_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//----------------------------------------------------------------------------------------------\n// UK2Node_EvaluateChooser2\n// New Implementation of EvaluateChooser with support for passing in/out multiple objects and structs\n" },
		{ "IncludePath", "EvaluateProxyNode.h" },
		{ "ModuleRelativePath", "Private/EvaluateProxyNode.h" },
		{ "ToolTip", "UK2Node_EvaluateChooser2\nNew Implementation of EvaluateChooser with support for passing in/out multiple objects and structs" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_EvaluateProxy2_Statics::NewProp_Proxy_MetaData[] = {
		{ "Category", "Proxy" },
		{ "ModuleRelativePath", "Private/EvaluateProxyNode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UK2Node_EvaluateProxy2_Statics::NewProp_Proxy = { "Proxy", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UK2Node_EvaluateProxy2, Proxy), Z_Construct_UClass_UProxyAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_EvaluateProxy2_Statics::NewProp_Proxy_MetaData), Z_Construct_UClass_UK2Node_EvaluateProxy2_Statics::NewProp_Proxy_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UK2Node_EvaluateProxy2_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_EvaluateProxy2_Statics::NewProp_Mode_MetaData[] = {
		{ "Category", "Chooser" },
		{ "ModuleRelativePath", "Private/EvaluateProxyNode.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UK2Node_EvaluateProxy2_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UK2Node_EvaluateProxy2, Mode), Z_Construct_UEnum_ProxyTableUncooked_EEvaluateProxyMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_EvaluateProxy2_Statics::NewProp_Mode_MetaData), Z_Construct_UClass_UK2Node_EvaluateProxy2_Statics::NewProp_Mode_MetaData) }; // 3015414838
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_EvaluateProxy2_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_EvaluateProxy2_Statics::NewProp_Proxy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_EvaluateProxy2_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_EvaluateProxy2_Statics::NewProp_Mode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_EvaluateProxy2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_EvaluateProxy2>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_EvaluateProxy2_Statics::ClassParams = {
		&UK2Node_EvaluateProxy2::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_EvaluateProxy2_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_EvaluateProxy2_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_EvaluateProxy2_Statics::Class_MetaDataParams), Z_Construct_UClass_UK2Node_EvaluateProxy2_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_EvaluateProxy2_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UK2Node_EvaluateProxy2()
	{
		if (!Z_Registration_Info_UClass_UK2Node_EvaluateProxy2.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_EvaluateProxy2.OuterSingleton, Z_Construct_UClass_UK2Node_EvaluateProxy2_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_EvaluateProxy2.OuterSingleton;
	}
	template<> PROXYTABLEUNCOOKED_API UClass* StaticClass<UK2Node_EvaluateProxy2>()
	{
		return UK2Node_EvaluateProxy2::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_EvaluateProxy2);
	UK2Node_EvaluateProxy2::~UK2Node_EvaluateProxy2() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTableUncooked_Private_EvaluateProxyNode_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTableUncooked_Private_EvaluateProxyNode_h_Statics::EnumInfo[] = {
		{ EEvaluateProxyMode_StaticEnum, TEXT("EEvaluateProxyMode"), &Z_Registration_Info_UEnum_EEvaluateProxyMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3015414838U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTableUncooked_Private_EvaluateProxyNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_EvaluateProxy, UK2Node_EvaluateProxy::StaticClass, TEXT("UK2Node_EvaluateProxy"), &Z_Registration_Info_UClass_UK2Node_EvaluateProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_EvaluateProxy), 3404897011U) },
		{ Z_Construct_UClass_UK2Node_EvaluateProxy2, UK2Node_EvaluateProxy2::StaticClass, TEXT("UK2Node_EvaluateProxy2"), &Z_Registration_Info_UClass_UK2Node_EvaluateProxy2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_EvaluateProxy2), 3452811158U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTableUncooked_Private_EvaluateProxyNode_h_1668012820(TEXT("/Script/ProxyTableUncooked"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTableUncooked_Private_EvaluateProxyNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTableUncooked_Private_EvaluateProxyNode_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTableUncooked_Private_EvaluateProxyNode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTableUncooked_Private_EvaluateProxyNode_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
