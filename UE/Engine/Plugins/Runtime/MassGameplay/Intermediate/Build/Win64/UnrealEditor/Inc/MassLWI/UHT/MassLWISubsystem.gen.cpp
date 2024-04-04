// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassLWISubsystem.h"
#include "MassEntityConfigAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassLWISubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	MASSLWI_API UClass* Z_Construct_UClass_AMassLWIStaticMeshManager_NoRegister();
	MASSLWI_API UClass* Z_Construct_UClass_UMassLWIClientActorSpawnerSubsystem_NoRegister();
	MASSLWI_API UClass* Z_Construct_UClass_UMassLWISubsystem();
	MASSLWI_API UClass* Z_Construct_UClass_UMassLWISubsystem_NoRegister();
	MASSSPAWNER_API UScriptStruct* Z_Construct_UScriptStruct_FMassEntityConfig();
	UPackage* Z_Construct_UPackage__Script_MassLWI();
// End Cross Module References
	void UMassLWISubsystem::StaticRegisterNativesUMassLWISubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassLWISubsystem);
	UClass* Z_Construct_UClass_UMassLWISubsystem_NoRegister()
	{
		return UMassLWISubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UMassLWISubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RegisteredManagers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredManagers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RegisteredManagers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LWISpawnerSubsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LWISpawnerSubsystem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassLWISubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MassLWI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassLWISubsystem_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassLWISubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MassLWISubsystem.h" },
		{ "ModuleRelativePath", "Public/MassLWISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMassLWISubsystem_Statics::NewProp_RegisteredManagers_Inner = { "RegisteredManagers", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AMassLWIStaticMeshManager_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassLWISubsystem_Statics::NewProp_RegisteredManagers_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassLWISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMassLWISubsystem_Statics::NewProp_RegisteredManagers = { "RegisteredManagers", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassLWISubsystem, RegisteredManagers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassLWISubsystem_Statics::NewProp_RegisteredManagers_MetaData), Z_Construct_UClass_UMassLWISubsystem_Statics::NewProp_RegisteredManagers_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassLWISubsystem_Statics::NewProp_DefaultConfig_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassLWISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassLWISubsystem_Statics::NewProp_DefaultConfig = { "DefaultConfig", nullptr, (EPropertyFlags)0x0020088000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassLWISubsystem, DefaultConfig), Z_Construct_UScriptStruct_FMassEntityConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassLWISubsystem_Statics::NewProp_DefaultConfig_MetaData), Z_Construct_UClass_UMassLWISubsystem_Statics::NewProp_DefaultConfig_MetaData) }; // 1992023501
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassLWISubsystem_Statics::NewProp_LWISpawnerSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassLWISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMassLWISubsystem_Statics::NewProp_LWISpawnerSubsystem = { "LWISpawnerSubsystem", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassLWISubsystem, LWISpawnerSubsystem), Z_Construct_UClass_UMassLWIClientActorSpawnerSubsystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassLWISubsystem_Statics::NewProp_LWISpawnerSubsystem_MetaData), Z_Construct_UClass_UMassLWISubsystem_Statics::NewProp_LWISpawnerSubsystem_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassLWISubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassLWISubsystem_Statics::NewProp_RegisteredManagers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassLWISubsystem_Statics::NewProp_RegisteredManagers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassLWISubsystem_Statics::NewProp_DefaultConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassLWISubsystem_Statics::NewProp_LWISpawnerSubsystem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassLWISubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassLWISubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassLWISubsystem_Statics::ClassParams = {
		&UMassLWISubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassLWISubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassLWISubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassLWISubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassLWISubsystem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassLWISubsystem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMassLWISubsystem()
	{
		if (!Z_Registration_Info_UClass_UMassLWISubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassLWISubsystem.OuterSingleton, Z_Construct_UClass_UMassLWISubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassLWISubsystem.OuterSingleton;
	}
	template<> MASSLWI_API UClass* StaticClass<UMassLWISubsystem>()
	{
		return UMassLWISubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassLWISubsystem);
	UMassLWISubsystem::~UMassLWISubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLWI_Public_MassLWISubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLWI_Public_MassLWISubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassLWISubsystem, UMassLWISubsystem::StaticClass, TEXT("UMassLWISubsystem"), &Z_Registration_Info_UClass_UMassLWISubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassLWISubsystem), 2222708648U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLWI_Public_MassLWISubsystem_h_1065898865(TEXT("/Script/MassLWI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLWI_Public_MassLWISubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLWI_Public_MassLWISubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
