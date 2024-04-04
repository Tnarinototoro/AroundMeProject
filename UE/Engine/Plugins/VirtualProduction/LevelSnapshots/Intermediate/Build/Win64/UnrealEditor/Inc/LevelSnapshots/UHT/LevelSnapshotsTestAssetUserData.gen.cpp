// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Private/Tests/Types/LevelSnapshotsTestAssetUserData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSnapshotsTestAssetUserData() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData();
	LEVELSNAPSHOTS_API UClass* Z_Construct_UClass_ULevelSnapshotsTestAssetUserData_MarkedTransient();
	LEVELSNAPSHOTS_API UClass* Z_Construct_UClass_ULevelSnapshotsTestAssetUserData_MarkedTransient_NoRegister();
	LEVELSNAPSHOTS_API UClass* Z_Construct_UClass_ULevelSnapshotsTestAssetUserData_Persistent();
	LEVELSNAPSHOTS_API UClass* Z_Construct_UClass_ULevelSnapshotsTestAssetUserData_Persistent_NoRegister();
	LEVELSNAPSHOTS_API UClass* Z_Construct_UClass_ULevelSnapshotsTestAssetUserData_TransientPackage();
	LEVELSNAPSHOTS_API UClass* Z_Construct_UClass_ULevelSnapshotsTestAssetUserData_TransientPackage_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LevelSnapshots();
// End Cross Module References
	void ULevelSnapshotsTestAssetUserData_Persistent::StaticRegisterNativesULevelSnapshotsTestAssetUserData_Persistent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelSnapshotsTestAssetUserData_Persistent);
	UClass* Z_Construct_UClass_ULevelSnapshotsTestAssetUserData_Persistent_NoRegister()
	{
		return ULevelSnapshotsTestAssetUserData_Persistent::StaticClass();
	}
	struct Z_Construct_UClass_ULevelSnapshotsTestAssetUserData_Persistent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelSnapshotsTestAssetUserData_Persistent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetUserData,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshots,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshotsTestAssetUserData_Persistent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSnapshotsTestAssetUserData_Persistent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// These classes do nothing special. See UActorComponent::AddAssetUserData: it only allows one instance per unique class... this is why we must create a few additional classes.\n" },
		{ "IncludePath", "Tests/Types/LevelSnapshotsTestAssetUserData.h" },
		{ "ModuleRelativePath", "Private/Tests/Types/LevelSnapshotsTestAssetUserData.h" },
		{ "ToolTip", "These classes do nothing special. See UActorComponent::AddAssetUserData: it only allows one instance per unique class... this is why we must create a few additional classes." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSnapshotsTestAssetUserData_Persistent_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "ModuleRelativePath", "Private/Tests/Types/LevelSnapshotsTestAssetUserData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULevelSnapshotsTestAssetUserData_Persistent_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelSnapshotsTestAssetUserData_Persistent, Value), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshotsTestAssetUserData_Persistent_Statics::NewProp_Value_MetaData), Z_Construct_UClass_ULevelSnapshotsTestAssetUserData_Persistent_Statics::NewProp_Value_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelSnapshotsTestAssetUserData_Persistent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSnapshotsTestAssetUserData_Persistent_Statics::NewProp_Value,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelSnapshotsTestAssetUserData_Persistent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelSnapshotsTestAssetUserData_Persistent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelSnapshotsTestAssetUserData_Persistent_Statics::ClassParams = {
		&ULevelSnapshotsTestAssetUserData_Persistent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULevelSnapshotsTestAssetUserData_Persistent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshotsTestAssetUserData_Persistent_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshotsTestAssetUserData_Persistent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULevelSnapshotsTestAssetUserData_Persistent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshotsTestAssetUserData_Persistent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ULevelSnapshotsTestAssetUserData_Persistent()
	{
		if (!Z_Registration_Info_UClass_ULevelSnapshotsTestAssetUserData_Persistent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelSnapshotsTestAssetUserData_Persistent.OuterSingleton, Z_Construct_UClass_ULevelSnapshotsTestAssetUserData_Persistent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelSnapshotsTestAssetUserData_Persistent.OuterSingleton;
	}
	template<> LEVELSNAPSHOTS_API UClass* StaticClass<ULevelSnapshotsTestAssetUserData_Persistent>()
	{
		return ULevelSnapshotsTestAssetUserData_Persistent::StaticClass();
	}
	ULevelSnapshotsTestAssetUserData_Persistent::ULevelSnapshotsTestAssetUserData_Persistent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelSnapshotsTestAssetUserData_Persistent);
	ULevelSnapshotsTestAssetUserData_Persistent::~ULevelSnapshotsTestAssetUserData_Persistent() {}
	void ULevelSnapshotsTestAssetUserData_MarkedTransient::StaticRegisterNativesULevelSnapshotsTestAssetUserData_MarkedTransient()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelSnapshotsTestAssetUserData_MarkedTransient);
	UClass* Z_Construct_UClass_ULevelSnapshotsTestAssetUserData_MarkedTransient_NoRegister()
	{
		return ULevelSnapshotsTestAssetUserData_MarkedTransient::StaticClass();
	}
	struct Z_Construct_UClass_ULevelSnapshotsTestAssetUserData_MarkedTransient_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelSnapshotsTestAssetUserData_MarkedTransient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetUserData,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshots,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshotsTestAssetUserData_MarkedTransient_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSnapshotsTestAssetUserData_MarkedTransient_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/Types/LevelSnapshotsTestAssetUserData.h" },
		{ "ModuleRelativePath", "Private/Tests/Types/LevelSnapshotsTestAssetUserData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSnapshotsTestAssetUserData_MarkedTransient_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "ModuleRelativePath", "Private/Tests/Types/LevelSnapshotsTestAssetUserData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULevelSnapshotsTestAssetUserData_MarkedTransient_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelSnapshotsTestAssetUserData_MarkedTransient, Value), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshotsTestAssetUserData_MarkedTransient_Statics::NewProp_Value_MetaData), Z_Construct_UClass_ULevelSnapshotsTestAssetUserData_MarkedTransient_Statics::NewProp_Value_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelSnapshotsTestAssetUserData_MarkedTransient_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSnapshotsTestAssetUserData_MarkedTransient_Statics::NewProp_Value,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelSnapshotsTestAssetUserData_MarkedTransient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelSnapshotsTestAssetUserData_MarkedTransient>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelSnapshotsTestAssetUserData_MarkedTransient_Statics::ClassParams = {
		&ULevelSnapshotsTestAssetUserData_MarkedTransient::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULevelSnapshotsTestAssetUserData_MarkedTransient_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshotsTestAssetUserData_MarkedTransient_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshotsTestAssetUserData_MarkedTransient_Statics::Class_MetaDataParams), Z_Construct_UClass_ULevelSnapshotsTestAssetUserData_MarkedTransient_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshotsTestAssetUserData_MarkedTransient_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ULevelSnapshotsTestAssetUserData_MarkedTransient()
	{
		if (!Z_Registration_Info_UClass_ULevelSnapshotsTestAssetUserData_MarkedTransient.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelSnapshotsTestAssetUserData_MarkedTransient.OuterSingleton, Z_Construct_UClass_ULevelSnapshotsTestAssetUserData_MarkedTransient_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelSnapshotsTestAssetUserData_MarkedTransient.OuterSingleton;
	}
	template<> LEVELSNAPSHOTS_API UClass* StaticClass<ULevelSnapshotsTestAssetUserData_MarkedTransient>()
	{
		return ULevelSnapshotsTestAssetUserData_MarkedTransient::StaticClass();
	}
	ULevelSnapshotsTestAssetUserData_MarkedTransient::ULevelSnapshotsTestAssetUserData_MarkedTransient(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelSnapshotsTestAssetUserData_MarkedTransient);
	ULevelSnapshotsTestAssetUserData_MarkedTransient::~ULevelSnapshotsTestAssetUserData_MarkedTransient() {}
	void ULevelSnapshotsTestAssetUserData_TransientPackage::StaticRegisterNativesULevelSnapshotsTestAssetUserData_TransientPackage()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelSnapshotsTestAssetUserData_TransientPackage);
	UClass* Z_Construct_UClass_ULevelSnapshotsTestAssetUserData_TransientPackage_NoRegister()
	{
		return ULevelSnapshotsTestAssetUserData_TransientPackage::StaticClass();
	}
	struct Z_Construct_UClass_ULevelSnapshotsTestAssetUserData_TransientPackage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelSnapshotsTestAssetUserData_TransientPackage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetUserData,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshots,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshotsTestAssetUserData_TransientPackage_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSnapshotsTestAssetUserData_TransientPackage_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/Types/LevelSnapshotsTestAssetUserData.h" },
		{ "ModuleRelativePath", "Private/Tests/Types/LevelSnapshotsTestAssetUserData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSnapshotsTestAssetUserData_TransientPackage_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "ModuleRelativePath", "Private/Tests/Types/LevelSnapshotsTestAssetUserData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULevelSnapshotsTestAssetUserData_TransientPackage_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelSnapshotsTestAssetUserData_TransientPackage, Value), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshotsTestAssetUserData_TransientPackage_Statics::NewProp_Value_MetaData), Z_Construct_UClass_ULevelSnapshotsTestAssetUserData_TransientPackage_Statics::NewProp_Value_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelSnapshotsTestAssetUserData_TransientPackage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSnapshotsTestAssetUserData_TransientPackage_Statics::NewProp_Value,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelSnapshotsTestAssetUserData_TransientPackage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelSnapshotsTestAssetUserData_TransientPackage>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelSnapshotsTestAssetUserData_TransientPackage_Statics::ClassParams = {
		&ULevelSnapshotsTestAssetUserData_TransientPackage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULevelSnapshotsTestAssetUserData_TransientPackage_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshotsTestAssetUserData_TransientPackage_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshotsTestAssetUserData_TransientPackage_Statics::Class_MetaDataParams), Z_Construct_UClass_ULevelSnapshotsTestAssetUserData_TransientPackage_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshotsTestAssetUserData_TransientPackage_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ULevelSnapshotsTestAssetUserData_TransientPackage()
	{
		if (!Z_Registration_Info_UClass_ULevelSnapshotsTestAssetUserData_TransientPackage.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelSnapshotsTestAssetUserData_TransientPackage.OuterSingleton, Z_Construct_UClass_ULevelSnapshotsTestAssetUserData_TransientPackage_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelSnapshotsTestAssetUserData_TransientPackage.OuterSingleton;
	}
	template<> LEVELSNAPSHOTS_API UClass* StaticClass<ULevelSnapshotsTestAssetUserData_TransientPackage>()
	{
		return ULevelSnapshotsTestAssetUserData_TransientPackage::StaticClass();
	}
	ULevelSnapshotsTestAssetUserData_TransientPackage::ULevelSnapshotsTestAssetUserData_TransientPackage(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelSnapshotsTestAssetUserData_TransientPackage);
	ULevelSnapshotsTestAssetUserData_TransientPackage::~ULevelSnapshotsTestAssetUserData_TransientPackage() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Private_Tests_Types_LevelSnapshotsTestAssetUserData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Private_Tests_Types_LevelSnapshotsTestAssetUserData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevelSnapshotsTestAssetUserData_Persistent, ULevelSnapshotsTestAssetUserData_Persistent::StaticClass, TEXT("ULevelSnapshotsTestAssetUserData_Persistent"), &Z_Registration_Info_UClass_ULevelSnapshotsTestAssetUserData_Persistent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelSnapshotsTestAssetUserData_Persistent), 3228945775U) },
		{ Z_Construct_UClass_ULevelSnapshotsTestAssetUserData_MarkedTransient, ULevelSnapshotsTestAssetUserData_MarkedTransient::StaticClass, TEXT("ULevelSnapshotsTestAssetUserData_MarkedTransient"), &Z_Registration_Info_UClass_ULevelSnapshotsTestAssetUserData_MarkedTransient, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelSnapshotsTestAssetUserData_MarkedTransient), 2032477968U) },
		{ Z_Construct_UClass_ULevelSnapshotsTestAssetUserData_TransientPackage, ULevelSnapshotsTestAssetUserData_TransientPackage::StaticClass, TEXT("ULevelSnapshotsTestAssetUserData_TransientPackage"), &Z_Registration_Info_UClass_ULevelSnapshotsTestAssetUserData_TransientPackage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelSnapshotsTestAssetUserData_TransientPackage), 3357678955U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Private_Tests_Types_LevelSnapshotsTestAssetUserData_h_3815099768(TEXT("/Script/LevelSnapshots"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Private_Tests_Types_LevelSnapshotsTestAssetUserData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Private_Tests_Types_LevelSnapshotsTestAssetUserData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
