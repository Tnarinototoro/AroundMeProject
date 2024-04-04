// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Compatibility/TypedElementActorViewportProcessors.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementActorViewportProcessors() {}
// Cross Module References
	TYPEDELEMENTFRAMEWORK_API UClass* Z_Construct_UClass_UTypedElementDataStorageFactory();
	TYPEDELEMENTSDATASTORAGE_API UClass* Z_Construct_UClass_UTypedElementActorViewportFactory();
	TYPEDELEMENTSDATASTORAGE_API UClass* Z_Construct_UClass_UTypedElementActorViewportFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TypedElementsDataStorage();
// End Cross Module References
	void UTypedElementActorViewportFactory::StaticRegisterNativesUTypedElementActorViewportFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTypedElementActorViewportFactory);
	UClass* Z_Construct_UClass_UTypedElementActorViewportFactory_NoRegister()
	{
		return UTypedElementActorViewportFactory::StaticClass();
	}
	struct Z_Construct_UClass_UTypedElementActorViewportFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTypedElementActorViewportFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTypedElementDataStorageFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementsDataStorage,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementActorViewportFactory_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypedElementActorViewportFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Compatibility/TypedElementActorViewportProcessors.h" },
		{ "ModuleRelativePath", "Private/Compatibility/TypedElementActorViewportProcessors.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTypedElementActorViewportFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTypedElementActorViewportFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTypedElementActorViewportFactory_Statics::ClassParams = {
		&UTypedElementActorViewportFactory::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementActorViewportFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UTypedElementActorViewportFactory_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UTypedElementActorViewportFactory()
	{
		if (!Z_Registration_Info_UClass_UTypedElementActorViewportFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTypedElementActorViewportFactory.OuterSingleton, Z_Construct_UClass_UTypedElementActorViewportFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTypedElementActorViewportFactory.OuterSingleton;
	}
	template<> TYPEDELEMENTSDATASTORAGE_API UClass* StaticClass<UTypedElementActorViewportFactory>()
	{
		return UTypedElementActorViewportFactory::StaticClass();
	}
	UTypedElementActorViewportFactory::UTypedElementActorViewportFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTypedElementActorViewportFactory);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorage_Private_Compatibility_TypedElementActorViewportProcessors_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorage_Private_Compatibility_TypedElementActorViewportProcessors_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTypedElementActorViewportFactory, UTypedElementActorViewportFactory::StaticClass, TEXT("UTypedElementActorViewportFactory"), &Z_Registration_Info_UClass_UTypedElementActorViewportFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTypedElementActorViewportFactory), 631385134U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorage_Private_Compatibility_TypedElementActorViewportProcessors_h_667070631(TEXT("/Script/TypedElementsDataStorage"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorage_Private_Compatibility_TypedElementActorViewportProcessors_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorage_Private_Compatibility_TypedElementActorViewportProcessors_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
