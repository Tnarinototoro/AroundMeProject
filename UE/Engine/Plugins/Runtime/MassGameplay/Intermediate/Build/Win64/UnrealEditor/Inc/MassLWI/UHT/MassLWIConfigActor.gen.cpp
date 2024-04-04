// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassLWIConfigActor.h"
#include "MassEntityConfigAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassLWIConfigActor() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	MASSLWI_API UClass* Z_Construct_UClass_AMassLWIConfigActor();
	MASSLWI_API UClass* Z_Construct_UClass_AMassLWIConfigActor_NoRegister();
	MASSSPAWNER_API UScriptStruct* Z_Construct_UScriptStruct_FMassEntityConfig();
	UPackage* Z_Construct_UPackage__Script_MassLWI();
// End Cross Module References
	void AMassLWIConfigActor::StaticRegisterNativesAMassLWIConfigActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMassLWIConfigActor);
	UClass* Z_Construct_UClass_AMassLWIConfigActor_NoRegister()
	{
		return AMassLWIConfigActor::StaticClass();
	}
	struct Z_Construct_UClass_AMassLWIConfigActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultConfig;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PerClassConfigs_ValueProp;
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_PerClassConfigs_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerClassConfigs_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PerClassConfigs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMassLWIConfigActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassLWI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMassLWIConfigActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassLWIConfigActor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Actor Input Collision Rendering Replication Partition HLOD Cooking" },
		{ "IncludePath", "MassLWIConfigActor.h" },
		{ "ModuleRelativePath", "Public/MassLWIConfigActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassLWIConfigActor_Statics::NewProp_DefaultConfig_MetaData[] = {
		{ "Category", "Derived Traits" },
		{ "ModuleRelativePath", "Public/MassLWIConfigActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMassLWIConfigActor_Statics::NewProp_DefaultConfig = { "DefaultConfig", nullptr, (EPropertyFlags)0x0020088000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassLWIConfigActor, DefaultConfig), Z_Construct_UScriptStruct_FMassEntityConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassLWIConfigActor_Statics::NewProp_DefaultConfig_MetaData), Z_Construct_UClass_AMassLWIConfigActor_Statics::NewProp_DefaultConfig_MetaData) }; // 1992023501
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMassLWIConfigActor_Statics::NewProp_PerClassConfigs_ValueProp = { "PerClassConfigs", nullptr, (EPropertyFlags)0x0000008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FMassEntityConfig, METADATA_PARAMS(0, nullptr) }; // 1992023501
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UClass_AMassLWIConfigActor_Statics::NewProp_PerClassConfigs_Key_KeyProp = { "PerClassConfigs_Key", nullptr, (EPropertyFlags)0x0004008000000001, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassLWIConfigActor_Statics::NewProp_PerClassConfigs_MetaData[] = {
		{ "Category", "Derived Traits" },
		{ "ModuleRelativePath", "Public/MassLWIConfigActor.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMassLWIConfigActor_Statics::NewProp_PerClassConfigs = { "PerClassConfigs", nullptr, (EPropertyFlags)0x0020088000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassLWIConfigActor, PerClassConfigs), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassLWIConfigActor_Statics::NewProp_PerClassConfigs_MetaData), Z_Construct_UClass_AMassLWIConfigActor_Statics::NewProp_PerClassConfigs_MetaData) }; // 1992023501
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMassLWIConfigActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassLWIConfigActor_Statics::NewProp_DefaultConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassLWIConfigActor_Statics::NewProp_PerClassConfigs_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassLWIConfigActor_Statics::NewProp_PerClassConfigs_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassLWIConfigActor_Statics::NewProp_PerClassConfigs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMassLWIConfigActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMassLWIConfigActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMassLWIConfigActor_Statics::ClassParams = {
		&AMassLWIConfigActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMassLWIConfigActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMassLWIConfigActor_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassLWIConfigActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AMassLWIConfigActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMassLWIConfigActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMassLWIConfigActor()
	{
		if (!Z_Registration_Info_UClass_AMassLWIConfigActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMassLWIConfigActor.OuterSingleton, Z_Construct_UClass_AMassLWIConfigActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMassLWIConfigActor.OuterSingleton;
	}
	template<> MASSLWI_API UClass* StaticClass<AMassLWIConfigActor>()
	{
		return AMassLWIConfigActor::StaticClass();
	}
	AMassLWIConfigActor::AMassLWIConfigActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMassLWIConfigActor);
	AMassLWIConfigActor::~AMassLWIConfigActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLWI_Public_MassLWIConfigActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLWI_Public_MassLWIConfigActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMassLWIConfigActor, AMassLWIConfigActor::StaticClass, TEXT("AMassLWIConfigActor"), &Z_Registration_Info_UClass_AMassLWIConfigActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMassLWIConfigActor), 3821732157U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLWI_Public_MassLWIConfigActor_h_1979530981(TEXT("/Script/MassLWI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLWI_Public_MassLWIConfigActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLWI_Public_MassLWIConfigActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
