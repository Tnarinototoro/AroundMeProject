// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassLWIClientActorSpawnerSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassLWIClientActorSpawnerSubsystem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	MASSACTORS_API UClass* Z_Construct_UClass_UMassActorSpawnerSubsystem();
	MASSLWI_API UClass* Z_Construct_UClass_UMassLWIClientActorSpawnerSubsystem();
	MASSLWI_API UClass* Z_Construct_UClass_UMassLWIClientActorSpawnerSubsystem_NoRegister();
	MASSLWI_API UScriptStruct* Z_Construct_UScriptStruct_FMassStoredActorsContainer();
	UPackage* Z_Construct_UPackage__Script_MassLWI();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassStoredActorsContainer;
class UScriptStruct* FMassStoredActorsContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassStoredActorsContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassStoredActorsContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassStoredActorsContainer, (UObject*)Z_Construct_UPackage__Script_MassLWI(), TEXT("MassStoredActorsContainer"));
	}
	return Z_Registration_Info_UScriptStruct_MassStoredActorsContainer.OuterSingleton;
}
template<> MASSLWI_API UScriptStruct* StaticStruct<FMassStoredActorsContainer>()
{
	return FMassStoredActorsContainer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassStoredActorsContainer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Container_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Container_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Container;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassStoredActorsContainer_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassLWIClientActorSpawnerSubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassStoredActorsContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassStoredActorsContainer>();
	}
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMassStoredActorsContainer_Statics::NewProp_Container_Inner = { "Container", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassStoredActorsContainer_Statics::NewProp_Container_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassLWIClientActorSpawnerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMassStoredActorsContainer_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassStoredActorsContainer, Container), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassStoredActorsContainer_Statics::NewProp_Container_MetaData), Z_Construct_UScriptStruct_FMassStoredActorsContainer_Statics::NewProp_Container_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassStoredActorsContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassStoredActorsContainer_Statics::NewProp_Container_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassStoredActorsContainer_Statics::NewProp_Container,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassStoredActorsContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassLWI,
		nullptr,
		&NewStructOps,
		"MassStoredActorsContainer",
		Z_Construct_UScriptStruct_FMassStoredActorsContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassStoredActorsContainer_Statics::PropPointers),
		sizeof(FMassStoredActorsContainer),
		alignof(FMassStoredActorsContainer),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassStoredActorsContainer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassStoredActorsContainer_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassStoredActorsContainer_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMassStoredActorsContainer()
	{
		if (!Z_Registration_Info_UScriptStruct_MassStoredActorsContainer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassStoredActorsContainer.InnerSingleton, Z_Construct_UScriptStruct_FMassStoredActorsContainer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassStoredActorsContainer.InnerSingleton;
	}
	void UMassLWIClientActorSpawnerSubsystem::StaticRegisterNativesUMassLWIClientActorSpawnerSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassLWIClientActorSpawnerSubsystem);
	UClass* Z_Construct_UClass_UMassLWIClientActorSpawnerSubsystem_NoRegister()
	{
		return UMassLWIClientActorSpawnerSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UMassLWIClientActorSpawnerSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PendingActors_ValueProp;
		static const UECodeGen_Private::FClassPropertyParams NewProp_PendingActors_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PendingActors_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PendingActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassLWIClientActorSpawnerSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassActorSpawnerSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MassLWI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassLWIClientActorSpawnerSubsystem_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassLWIClientActorSpawnerSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MassLWIClientActorSpawnerSubsystem.h" },
		{ "ModuleRelativePath", "Public/MassLWIClientActorSpawnerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassLWIClientActorSpawnerSubsystem_Statics::NewProp_PendingActors_ValueProp = { "PendingActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FMassStoredActorsContainer, METADATA_PARAMS(0, nullptr) }; // 2402574187
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMassLWIClientActorSpawnerSubsystem_Statics::NewProp_PendingActors_Key_KeyProp = { "PendingActors_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassLWIClientActorSpawnerSubsystem_Statics::NewProp_PendingActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassLWIClientActorSpawnerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMassLWIClientActorSpawnerSubsystem_Statics::NewProp_PendingActors = { "PendingActors", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassLWIClientActorSpawnerSubsystem, PendingActors), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassLWIClientActorSpawnerSubsystem_Statics::NewProp_PendingActors_MetaData), Z_Construct_UClass_UMassLWIClientActorSpawnerSubsystem_Statics::NewProp_PendingActors_MetaData) }; // 2402574187
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassLWIClientActorSpawnerSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassLWIClientActorSpawnerSubsystem_Statics::NewProp_PendingActors_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassLWIClientActorSpawnerSubsystem_Statics::NewProp_PendingActors_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassLWIClientActorSpawnerSubsystem_Statics::NewProp_PendingActors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassLWIClientActorSpawnerSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassLWIClientActorSpawnerSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassLWIClientActorSpawnerSubsystem_Statics::ClassParams = {
		&UMassLWIClientActorSpawnerSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassLWIClientActorSpawnerSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassLWIClientActorSpawnerSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassLWIClientActorSpawnerSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassLWIClientActorSpawnerSubsystem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassLWIClientActorSpawnerSubsystem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMassLWIClientActorSpawnerSubsystem()
	{
		if (!Z_Registration_Info_UClass_UMassLWIClientActorSpawnerSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassLWIClientActorSpawnerSubsystem.OuterSingleton, Z_Construct_UClass_UMassLWIClientActorSpawnerSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassLWIClientActorSpawnerSubsystem.OuterSingleton;
	}
	template<> MASSLWI_API UClass* StaticClass<UMassLWIClientActorSpawnerSubsystem>()
	{
		return UMassLWIClientActorSpawnerSubsystem::StaticClass();
	}
	UMassLWIClientActorSpawnerSubsystem::UMassLWIClientActorSpawnerSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassLWIClientActorSpawnerSubsystem);
	UMassLWIClientActorSpawnerSubsystem::~UMassLWIClientActorSpawnerSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLWI_Public_MassLWIClientActorSpawnerSubsystem_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLWI_Public_MassLWIClientActorSpawnerSubsystem_h_Statics::ScriptStructInfo[] = {
		{ FMassStoredActorsContainer::StaticStruct, Z_Construct_UScriptStruct_FMassStoredActorsContainer_Statics::NewStructOps, TEXT("MassStoredActorsContainer"), &Z_Registration_Info_UScriptStruct_MassStoredActorsContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassStoredActorsContainer), 2402574187U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLWI_Public_MassLWIClientActorSpawnerSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassLWIClientActorSpawnerSubsystem, UMassLWIClientActorSpawnerSubsystem::StaticClass, TEXT("UMassLWIClientActorSpawnerSubsystem"), &Z_Registration_Info_UClass_UMassLWIClientActorSpawnerSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassLWIClientActorSpawnerSubsystem), 2494309924U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLWI_Public_MassLWIClientActorSpawnerSubsystem_h_2252381332(TEXT("/Script/MassLWI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLWI_Public_MassLWIClientActorSpawnerSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLWI_Public_MassLWIClientActorSpawnerSubsystem_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLWI_Public_MassLWIClientActorSpawnerSubsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLWI_Public_MassLWIClientActorSpawnerSubsystem_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
