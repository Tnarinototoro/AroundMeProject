// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Compatibility/TypedElementActorTransformQueries.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementActorTransformQueries() {}
// Cross Module References
	TYPEDELEMENTFRAMEWORK_API UClass* Z_Construct_UClass_UTypedElementDataStorageFactory();
	TYPEDELEMENTSDATASTORAGE_API UClass* Z_Construct_UClass_UTypedElementActorTransformFactory();
	TYPEDELEMENTSDATASTORAGE_API UClass* Z_Construct_UClass_UTypedElementActorTransformFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TypedElementsDataStorage();
// End Cross Module References
	void UTypedElementActorTransformFactory::StaticRegisterNativesUTypedElementActorTransformFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTypedElementActorTransformFactory);
	UClass* Z_Construct_UClass_UTypedElementActorTransformFactory_NoRegister()
	{
		return UTypedElementActorTransformFactory::StaticClass();
	}
	struct Z_Construct_UClass_UTypedElementActorTransformFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTypedElementActorTransformFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTypedElementDataStorageFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementsDataStorage,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementActorTransformFactory_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypedElementActorTransformFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Compatibility/TypedElementActorTransformQueries.h" },
		{ "ModuleRelativePath", "Private/Compatibility/TypedElementActorTransformQueries.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTypedElementActorTransformFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTypedElementActorTransformFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTypedElementActorTransformFactory_Statics::ClassParams = {
		&UTypedElementActorTransformFactory::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementActorTransformFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UTypedElementActorTransformFactory_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UTypedElementActorTransformFactory()
	{
		if (!Z_Registration_Info_UClass_UTypedElementActorTransformFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTypedElementActorTransformFactory.OuterSingleton, Z_Construct_UClass_UTypedElementActorTransformFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTypedElementActorTransformFactory.OuterSingleton;
	}
	template<> TYPEDELEMENTSDATASTORAGE_API UClass* StaticClass<UTypedElementActorTransformFactory>()
	{
		return UTypedElementActorTransformFactory::StaticClass();
	}
	UTypedElementActorTransformFactory::UTypedElementActorTransformFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTypedElementActorTransformFactory);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorage_Private_Compatibility_TypedElementActorTransformQueries_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorage_Private_Compatibility_TypedElementActorTransformQueries_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTypedElementActorTransformFactory, UTypedElementActorTransformFactory::StaticClass, TEXT("UTypedElementActorTransformFactory"), &Z_Registration_Info_UClass_UTypedElementActorTransformFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTypedElementActorTransformFactory), 574589251U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorage_Private_Compatibility_TypedElementActorTransformQueries_h_881257776(TEXT("/Script/TypedElementsDataStorage"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorage_Private_Compatibility_TypedElementActorTransformQueries_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorage_Private_Compatibility_TypedElementActorTransformQueries_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
