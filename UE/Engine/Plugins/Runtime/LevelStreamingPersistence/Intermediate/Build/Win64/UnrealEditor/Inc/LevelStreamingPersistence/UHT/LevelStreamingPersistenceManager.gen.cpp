// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LevelStreamingPersistenceManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelStreamingPersistenceManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	LEVELSTREAMINGPERSISTENCE_API UClass* Z_Construct_UClass_ULevelStreamingPersistenceManager();
	LEVELSTREAMINGPERSISTENCE_API UClass* Z_Construct_UClass_ULevelStreamingPersistenceManager_NoRegister();
	LEVELSTREAMINGPERSISTENCE_API UClass* Z_Construct_UClass_ULevelStreamingPersistentPropertiesInfo();
	LEVELSTREAMINGPERSISTENCE_API UClass* Z_Construct_UClass_ULevelStreamingPersistentPropertiesInfo_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LevelStreamingPersistence();
// End Cross Module References
	void ULevelStreamingPersistentPropertiesInfo::StaticRegisterNativesULevelStreamingPersistentPropertiesInfo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelStreamingPersistentPropertiesInfo);
	UClass* Z_Construct_UClass_ULevelStreamingPersistentPropertiesInfo_NoRegister()
	{
		return ULevelStreamingPersistentPropertiesInfo::StaticClass();
	}
	struct Z_Construct_UClass_ULevelStreamingPersistentPropertiesInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelStreamingPersistentPropertiesInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelStreamingPersistence,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreamingPersistentPropertiesInfo_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreamingPersistentPropertiesInfo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Helper class to access FLevelStreamingPersistentProperty's Properties\n" },
		{ "IncludePath", "LevelStreamingPersistenceManager.h" },
		{ "ModuleRelativePath", "Public/LevelStreamingPersistenceManager.h" },
		{ "ToolTip", "Helper class to access FLevelStreamingPersistentProperty's Properties" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelStreamingPersistentPropertiesInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelStreamingPersistentPropertiesInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelStreamingPersistentPropertiesInfo_Statics::ClassParams = {
		&ULevelStreamingPersistentPropertiesInfo::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreamingPersistentPropertiesInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_ULevelStreamingPersistentPropertiesInfo_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ULevelStreamingPersistentPropertiesInfo()
	{
		if (!Z_Registration_Info_UClass_ULevelStreamingPersistentPropertiesInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelStreamingPersistentPropertiesInfo.OuterSingleton, Z_Construct_UClass_ULevelStreamingPersistentPropertiesInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelStreamingPersistentPropertiesInfo.OuterSingleton;
	}
	template<> LEVELSTREAMINGPERSISTENCE_API UClass* StaticClass<ULevelStreamingPersistentPropertiesInfo>()
	{
		return ULevelStreamingPersistentPropertiesInfo::StaticClass();
	}
	ULevelStreamingPersistentPropertiesInfo::ULevelStreamingPersistentPropertiesInfo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelStreamingPersistentPropertiesInfo);
	ULevelStreamingPersistentPropertiesInfo::~ULevelStreamingPersistentPropertiesInfo() {}
	void ULevelStreamingPersistenceManager::StaticRegisterNativesULevelStreamingPersistenceManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelStreamingPersistenceManager);
	UClass* Z_Construct_UClass_ULevelStreamingPersistenceManager_NoRegister()
	{
		return ULevelStreamingPersistenceManager::StaticClass();
	}
	struct Z_Construct_UClass_ULevelStreamingPersistenceManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PersistentPropertiesInfo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PersistentPropertiesInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelStreamingPersistenceManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelStreamingPersistence,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreamingPersistenceManager_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreamingPersistenceManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LevelStreamingPersistenceManager.h" },
		{ "ModuleRelativePath", "Public/LevelStreamingPersistenceManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreamingPersistenceManager_Statics::NewProp_PersistentPropertiesInfo_MetaData[] = {
		{ "Comment", "// Persistent Properties Info\n" },
		{ "ModuleRelativePath", "Public/LevelStreamingPersistenceManager.h" },
		{ "ToolTip", "Persistent Properties Info" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULevelStreamingPersistenceManager_Statics::NewProp_PersistentPropertiesInfo = { "PersistentPropertiesInfo", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelStreamingPersistenceManager, PersistentPropertiesInfo), Z_Construct_UClass_ULevelStreamingPersistentPropertiesInfo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreamingPersistenceManager_Statics::NewProp_PersistentPropertiesInfo_MetaData), Z_Construct_UClass_ULevelStreamingPersistenceManager_Statics::NewProp_PersistentPropertiesInfo_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelStreamingPersistenceManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreamingPersistenceManager_Statics::NewProp_PersistentPropertiesInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelStreamingPersistenceManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelStreamingPersistenceManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelStreamingPersistenceManager_Statics::ClassParams = {
		&ULevelStreamingPersistenceManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULevelStreamingPersistenceManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreamingPersistenceManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreamingPersistenceManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ULevelStreamingPersistenceManager_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreamingPersistenceManager_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ULevelStreamingPersistenceManager()
	{
		if (!Z_Registration_Info_UClass_ULevelStreamingPersistenceManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelStreamingPersistenceManager.OuterSingleton, Z_Construct_UClass_ULevelStreamingPersistenceManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelStreamingPersistenceManager.OuterSingleton;
	}
	template<> LEVELSTREAMINGPERSISTENCE_API UClass* StaticClass<ULevelStreamingPersistenceManager>()
	{
		return ULevelStreamingPersistenceManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelStreamingPersistenceManager);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_LevelStreamingPersistence_Source_LevelStreamingPersistence_Public_LevelStreamingPersistenceManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_LevelStreamingPersistence_Source_LevelStreamingPersistence_Public_LevelStreamingPersistenceManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevelStreamingPersistentPropertiesInfo, ULevelStreamingPersistentPropertiesInfo::StaticClass, TEXT("ULevelStreamingPersistentPropertiesInfo"), &Z_Registration_Info_UClass_ULevelStreamingPersistentPropertiesInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelStreamingPersistentPropertiesInfo), 1303482170U) },
		{ Z_Construct_UClass_ULevelStreamingPersistenceManager, ULevelStreamingPersistenceManager::StaticClass, TEXT("ULevelStreamingPersistenceManager"), &Z_Registration_Info_UClass_ULevelStreamingPersistenceManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelStreamingPersistenceManager), 3942555741U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_LevelStreamingPersistence_Source_LevelStreamingPersistence_Public_LevelStreamingPersistenceManager_h_23575834(TEXT("/Script/LevelStreamingPersistence"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_LevelStreamingPersistence_Source_LevelStreamingPersistence_Public_LevelStreamingPersistenceManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_LevelStreamingPersistence_Source_LevelStreamingPersistence_Public_LevelStreamingPersistenceManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
