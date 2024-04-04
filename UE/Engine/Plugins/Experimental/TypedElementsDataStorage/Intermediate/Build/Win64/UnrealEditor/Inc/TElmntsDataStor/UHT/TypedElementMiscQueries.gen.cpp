// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Queries/TypedElementMiscQueries.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementMiscQueries() {}
// Cross Module References
	TYPEDELEMENTFRAMEWORK_API UClass* Z_Construct_UClass_UTypedElementDataStorageFactory();
	TYPEDELEMENTSDATASTORAGE_API UClass* Z_Construct_UClass_UTypedElementRemoveSyncToWorldTagFactory();
	TYPEDELEMENTSDATASTORAGE_API UClass* Z_Construct_UClass_UTypedElementRemoveSyncToWorldTagFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TypedElementsDataStorage();
// End Cross Module References
	void UTypedElementRemoveSyncToWorldTagFactory::StaticRegisterNativesUTypedElementRemoveSyncToWorldTagFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTypedElementRemoveSyncToWorldTagFactory);
	UClass* Z_Construct_UClass_UTypedElementRemoveSyncToWorldTagFactory_NoRegister()
	{
		return UTypedElementRemoveSyncToWorldTagFactory::StaticClass();
	}
	struct Z_Construct_UClass_UTypedElementRemoveSyncToWorldTagFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTypedElementRemoveSyncToWorldTagFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTypedElementDataStorageFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementsDataStorage,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementRemoveSyncToWorldTagFactory_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypedElementRemoveSyncToWorldTagFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Removes all FTypedElementSyncBackToWorldTags at the end of an update cycle.\n */" },
		{ "IncludePath", "Queries/TypedElementMiscQueries.h" },
		{ "ModuleRelativePath", "Private/Queries/TypedElementMiscQueries.h" },
		{ "ToolTip", "Removes all FTypedElementSyncBackToWorldTags at the end of an update cycle." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTypedElementRemoveSyncToWorldTagFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTypedElementRemoveSyncToWorldTagFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTypedElementRemoveSyncToWorldTagFactory_Statics::ClassParams = {
		&UTypedElementRemoveSyncToWorldTagFactory::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementRemoveSyncToWorldTagFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UTypedElementRemoveSyncToWorldTagFactory_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UTypedElementRemoveSyncToWorldTagFactory()
	{
		if (!Z_Registration_Info_UClass_UTypedElementRemoveSyncToWorldTagFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTypedElementRemoveSyncToWorldTagFactory.OuterSingleton, Z_Construct_UClass_UTypedElementRemoveSyncToWorldTagFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTypedElementRemoveSyncToWorldTagFactory.OuterSingleton;
	}
	template<> TYPEDELEMENTSDATASTORAGE_API UClass* StaticClass<UTypedElementRemoveSyncToWorldTagFactory>()
	{
		return UTypedElementRemoveSyncToWorldTagFactory::StaticClass();
	}
	UTypedElementRemoveSyncToWorldTagFactory::UTypedElementRemoveSyncToWorldTagFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTypedElementRemoveSyncToWorldTagFactory);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorage_Private_Queries_TypedElementMiscQueries_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorage_Private_Queries_TypedElementMiscQueries_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTypedElementRemoveSyncToWorldTagFactory, UTypedElementRemoveSyncToWorldTagFactory::StaticClass, TEXT("UTypedElementRemoveSyncToWorldTagFactory"), &Z_Registration_Info_UClass_UTypedElementRemoveSyncToWorldTagFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTypedElementRemoveSyncToWorldTagFactory), 2079969641U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorage_Private_Queries_TypedElementMiscQueries_h_2028822918(TEXT("/Script/TypedElementsDataStorage"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorage_Private_Queries_TypedElementMiscQueries_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorage_Private_Queries_TypedElementMiscQueries_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
