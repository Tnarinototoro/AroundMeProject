// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DisplayClusterNetDriver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterNetDriver() {}
// Cross Module References
	DISPLAYCLUSTERREPLICATION_API UClass* Z_Construct_UClass_UDisplayClusterNetDriver();
	DISPLAYCLUSTERREPLICATION_API UClass* Z_Construct_UClass_UDisplayClusterNetDriver_NoRegister();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UIpNetDriver();
	UPackage* Z_Construct_UPackage__Script_DisplayClusterReplication();
// End Cross Module References
	void UDisplayClusterNetDriver::StaticRegisterNativesUDisplayClusterNetDriver()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplayClusterNetDriver);
	UClass* Z_Construct_UClass_UDisplayClusterNetDriver_NoRegister()
	{
		return UDisplayClusterNetDriver::StaticClass();
	}
	struct Z_Construct_UClass_UDisplayClusterNetDriver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplayClusterNetDriver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UIpNetDriver,
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterReplication,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterNetDriver_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterNetDriver_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Custom NetDriver for DisplayCluster.\n * Responsible for synchronous application of network packets across display cluster nodes.\n * Results in seamless image when used with Actor replication system.\n */" },
		{ "IncludePath", "DisplayClusterNetDriver.h" },
		{ "ModuleRelativePath", "Public/DisplayClusterNetDriver.h" },
		{ "ToolTip", "Custom NetDriver for DisplayCluster.\nResponsible for synchronous application of network packets across display cluster nodes.\nResults in seamless image when used with Actor replication system." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplayClusterNetDriver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplayClusterNetDriver>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplayClusterNetDriver_Statics::ClassParams = {
		&UDisplayClusterNetDriver::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterNetDriver_Statics::Class_MetaDataParams), Z_Construct_UClass_UDisplayClusterNetDriver_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UDisplayClusterNetDriver()
	{
		if (!Z_Registration_Info_UClass_UDisplayClusterNetDriver.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplayClusterNetDriver.OuterSingleton, Z_Construct_UClass_UDisplayClusterNetDriver_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDisplayClusterNetDriver.OuterSingleton;
	}
	template<> DISPLAYCLUSTERREPLICATION_API UClass* StaticClass<UDisplayClusterNetDriver>()
	{
		return UDisplayClusterNetDriver::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplayClusterNetDriver);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterReplication_Public_DisplayClusterNetDriver_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterReplication_Public_DisplayClusterNetDriver_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDisplayClusterNetDriver, UDisplayClusterNetDriver::StaticClass, TEXT("UDisplayClusterNetDriver"), &Z_Registration_Info_UClass_UDisplayClusterNetDriver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplayClusterNetDriver), 3028020085U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterReplication_Public_DisplayClusterNetDriver_h_2257605200(TEXT("/Script/DisplayClusterReplication"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterReplication_Public_DisplayClusterNetDriver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterReplication_Public_DisplayClusterNetDriver_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
