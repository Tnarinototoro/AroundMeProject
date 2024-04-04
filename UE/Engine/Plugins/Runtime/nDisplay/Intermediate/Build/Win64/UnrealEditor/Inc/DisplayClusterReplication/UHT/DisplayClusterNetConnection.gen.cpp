// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DisplayClusterNetConnection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterNetConnection() {}
// Cross Module References
	DISPLAYCLUSTERREPLICATION_API UClass* Z_Construct_UClass_UDisplayClusterNetConnection();
	DISPLAYCLUSTERREPLICATION_API UClass* Z_Construct_UClass_UDisplayClusterNetConnection_NoRegister();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UIpConnection();
	UPackage* Z_Construct_UPackage__Script_DisplayClusterReplication();
// End Cross Module References
	void UDisplayClusterNetConnection::StaticRegisterNativesUDisplayClusterNetConnection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplayClusterNetConnection);
	UClass* Z_Construct_UClass_UDisplayClusterNetConnection_NoRegister()
	{
		return UDisplayClusterNetConnection::StaticClass();
	}
	struct Z_Construct_UClass_UDisplayClusterNetConnection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplayClusterNetConnection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UIpConnection,
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterReplication,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterNetConnection_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterNetConnection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DisplayClusterNetConnection.h" },
		{ "ModuleRelativePath", "Public/DisplayClusterNetConnection.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplayClusterNetConnection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplayClusterNetConnection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplayClusterNetConnection_Statics::ClassParams = {
		&UDisplayClusterNetConnection::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterNetConnection_Statics::Class_MetaDataParams), Z_Construct_UClass_UDisplayClusterNetConnection_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UDisplayClusterNetConnection()
	{
		if (!Z_Registration_Info_UClass_UDisplayClusterNetConnection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplayClusterNetConnection.OuterSingleton, Z_Construct_UClass_UDisplayClusterNetConnection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDisplayClusterNetConnection.OuterSingleton;
	}
	template<> DISPLAYCLUSTERREPLICATION_API UClass* StaticClass<UDisplayClusterNetConnection>()
	{
		return UDisplayClusterNetConnection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplayClusterNetConnection);
	UDisplayClusterNetConnection::~UDisplayClusterNetConnection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterReplication_Public_DisplayClusterNetConnection_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterReplication_Public_DisplayClusterNetConnection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDisplayClusterNetConnection, UDisplayClusterNetConnection::StaticClass, TEXT("UDisplayClusterNetConnection"), &Z_Registration_Info_UClass_UDisplayClusterNetConnection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplayClusterNetConnection), 3621568767U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterReplication_Public_DisplayClusterNetConnection_h_203560833(TEXT("/Script/DisplayClusterReplication"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterReplication_Public_DisplayClusterNetConnection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterReplication_Public_DisplayClusterNetConnection_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
