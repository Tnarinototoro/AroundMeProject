// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MediaIOCoreDeinterlacer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaIOCoreDeinterlacer() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MEDIAIOCORE_API UClass* Z_Construct_UClass_UBlendDeinterlacer();
	MEDIAIOCORE_API UClass* Z_Construct_UClass_UBlendDeinterlacer_NoRegister();
	MEDIAIOCORE_API UClass* Z_Construct_UClass_UBobDeinterlacer();
	MEDIAIOCORE_API UClass* Z_Construct_UClass_UBobDeinterlacer_NoRegister();
	MEDIAIOCORE_API UClass* Z_Construct_UClass_UDiscardDeinterlacer();
	MEDIAIOCORE_API UClass* Z_Construct_UClass_UDiscardDeinterlacer_NoRegister();
	MEDIAIOCORE_API UClass* Z_Construct_UClass_UVideoDeinterlacer();
	MEDIAIOCORE_API UClass* Z_Construct_UClass_UVideoDeinterlacer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MediaIOCore();
// End Cross Module References
	void UVideoDeinterlacer::StaticRegisterNativesUVideoDeinterlacer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVideoDeinterlacer);
	UClass* Z_Construct_UClass_UVideoDeinterlacer_NoRegister()
	{
		return UVideoDeinterlacer::StaticClass();
	}
	struct Z_Construct_UClass_UVideoDeinterlacer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVideoDeinterlacer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaIOCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVideoDeinterlacer_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVideoDeinterlacer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Represents a deinterlacing algorithm. Will dictate how the incoming video signal is converted from interlace to a progressive signal.\n */" },
		{ "IncludePath", "MediaIOCoreDeinterlacer.h" },
		{ "ModuleRelativePath", "Public/MediaIOCoreDeinterlacer.h" },
		{ "ToolTip", "Represents a deinterlacing algorithm. Will dictate how the incoming video signal is converted from interlace to a progressive signal." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVideoDeinterlacer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVideoDeinterlacer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVideoDeinterlacer_Statics::ClassParams = {
		&UVideoDeinterlacer::StaticClass,
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
		0x001010A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVideoDeinterlacer_Statics::Class_MetaDataParams), Z_Construct_UClass_UVideoDeinterlacer_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UVideoDeinterlacer()
	{
		if (!Z_Registration_Info_UClass_UVideoDeinterlacer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVideoDeinterlacer.OuterSingleton, Z_Construct_UClass_UVideoDeinterlacer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVideoDeinterlacer.OuterSingleton;
	}
	template<> MEDIAIOCORE_API UClass* StaticClass<UVideoDeinterlacer>()
	{
		return UVideoDeinterlacer::StaticClass();
	}
	UVideoDeinterlacer::UVideoDeinterlacer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVideoDeinterlacer);
	UVideoDeinterlacer::~UVideoDeinterlacer() {}
	void UBobDeinterlacer::StaticRegisterNativesUBobDeinterlacer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBobDeinterlacer);
	UClass* Z_Construct_UClass_UBobDeinterlacer_NoRegister()
	{
		return UBobDeinterlacer::StaticClass();
	}
	struct Z_Construct_UClass_UBobDeinterlacer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBobDeinterlacer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVideoDeinterlacer,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaIOCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBobDeinterlacer_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBobDeinterlacer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Double field lines, keeping temporal resolution but halving texture vertical resolution. */" },
		{ "IncludePath", "MediaIOCoreDeinterlacer.h" },
		{ "ModuleRelativePath", "Public/MediaIOCoreDeinterlacer.h" },
		{ "ToolTip", "Double field lines, keeping temporal resolution but halving texture vertical resolution." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBobDeinterlacer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBobDeinterlacer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBobDeinterlacer_Statics::ClassParams = {
		&UBobDeinterlacer::StaticClass,
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
		0x001010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBobDeinterlacer_Statics::Class_MetaDataParams), Z_Construct_UClass_UBobDeinterlacer_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UBobDeinterlacer()
	{
		if (!Z_Registration_Info_UClass_UBobDeinterlacer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBobDeinterlacer.OuterSingleton, Z_Construct_UClass_UBobDeinterlacer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBobDeinterlacer.OuterSingleton;
	}
	template<> MEDIAIOCORE_API UClass* StaticClass<UBobDeinterlacer>()
	{
		return UBobDeinterlacer::StaticClass();
	}
	UBobDeinterlacer::UBobDeinterlacer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBobDeinterlacer);
	UBobDeinterlacer::~UBobDeinterlacer() {}
	void UBlendDeinterlacer::StaticRegisterNativesUBlendDeinterlacer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlendDeinterlacer);
	UClass* Z_Construct_UClass_UBlendDeinterlacer_NoRegister()
	{
		return UBlendDeinterlacer::StaticClass();
	}
	struct Z_Construct_UClass_UBlendDeinterlacer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlendDeinterlacer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVideoDeinterlacer,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaIOCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlendDeinterlacer_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendDeinterlacer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Blend the top and bottom field, keeping temporal resolution but halving texture vertical resoluton. */" },
		{ "IncludePath", "MediaIOCoreDeinterlacer.h" },
		{ "ModuleRelativePath", "Public/MediaIOCoreDeinterlacer.h" },
		{ "ToolTip", "Blend the top and bottom field, keeping temporal resolution but halving texture vertical resoluton." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlendDeinterlacer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlendDeinterlacer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlendDeinterlacer_Statics::ClassParams = {
		&UBlendDeinterlacer::StaticClass,
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
		0x001010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlendDeinterlacer_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlendDeinterlacer_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UBlendDeinterlacer()
	{
		if (!Z_Registration_Info_UClass_UBlendDeinterlacer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlendDeinterlacer.OuterSingleton, Z_Construct_UClass_UBlendDeinterlacer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBlendDeinterlacer.OuterSingleton;
	}
	template<> MEDIAIOCORE_API UClass* StaticClass<UBlendDeinterlacer>()
	{
		return UBlendDeinterlacer::StaticClass();
	}
	UBlendDeinterlacer::UBlendDeinterlacer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlendDeinterlacer);
	UBlendDeinterlacer::~UBlendDeinterlacer() {}
	void UDiscardDeinterlacer::StaticRegisterNativesUDiscardDeinterlacer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDiscardDeinterlacer);
	UClass* Z_Construct_UClass_UDiscardDeinterlacer_NoRegister()
	{
		return UDiscardDeinterlacer::StaticClass();
	}
	struct Z_Construct_UClass_UDiscardDeinterlacer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDiscardDeinterlacer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVideoDeinterlacer,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaIOCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDiscardDeinterlacer_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscardDeinterlacer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Discards one of the field entirely (based on InterlaceFieldOrder), halving both temporal and spatial resolutions. */" },
		{ "IncludePath", "MediaIOCoreDeinterlacer.h" },
		{ "ModuleRelativePath", "Public/MediaIOCoreDeinterlacer.h" },
		{ "ToolTip", "Discards one of the field entirely (based on InterlaceFieldOrder), halving both temporal and spatial resolutions." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDiscardDeinterlacer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDiscardDeinterlacer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDiscardDeinterlacer_Statics::ClassParams = {
		&UDiscardDeinterlacer::StaticClass,
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
		0x001010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDiscardDeinterlacer_Statics::Class_MetaDataParams), Z_Construct_UClass_UDiscardDeinterlacer_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UDiscardDeinterlacer()
	{
		if (!Z_Registration_Info_UClass_UDiscardDeinterlacer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDiscardDeinterlacer.OuterSingleton, Z_Construct_UClass_UDiscardDeinterlacer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDiscardDeinterlacer.OuterSingleton;
	}
	template<> MEDIAIOCORE_API UClass* StaticClass<UDiscardDeinterlacer>()
	{
		return UDiscardDeinterlacer::StaticClass();
	}
	UDiscardDeinterlacer::UDiscardDeinterlacer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDiscardDeinterlacer);
	UDiscardDeinterlacer::~UDiscardDeinterlacer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaIOCoreDeinterlacer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaIOCoreDeinterlacer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVideoDeinterlacer, UVideoDeinterlacer::StaticClass, TEXT("UVideoDeinterlacer"), &Z_Registration_Info_UClass_UVideoDeinterlacer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVideoDeinterlacer), 2132105314U) },
		{ Z_Construct_UClass_UBobDeinterlacer, UBobDeinterlacer::StaticClass, TEXT("UBobDeinterlacer"), &Z_Registration_Info_UClass_UBobDeinterlacer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBobDeinterlacer), 279151226U) },
		{ Z_Construct_UClass_UBlendDeinterlacer, UBlendDeinterlacer::StaticClass, TEXT("UBlendDeinterlacer"), &Z_Registration_Info_UClass_UBlendDeinterlacer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlendDeinterlacer), 782556689U) },
		{ Z_Construct_UClass_UDiscardDeinterlacer, UDiscardDeinterlacer::StaticClass, TEXT("UDiscardDeinterlacer"), &Z_Registration_Info_UClass_UDiscardDeinterlacer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDiscardDeinterlacer), 2568011641U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaIOCoreDeinterlacer_h_672029388(TEXT("/Script/MediaIOCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaIOCoreDeinterlacer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaIOCoreDeinterlacer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
