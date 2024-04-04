// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterchangeDatasmithTranslator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeDatasmithTranslator() {}
// Cross Module References
	DATASMITHINTERCHANGE_API UClass* Z_Construct_UClass_UInterchangeDatasmithTranslator();
	DATASMITHINTERCHANGE_API UClass* Z_Construct_UClass_UInterchangeDatasmithTranslator_NoRegister();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeTranslatorBase();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeAnimationPayloadInterface_NoRegister();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeMeshPayloadInterface_NoRegister();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeTexturePayloadInterface_NoRegister();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeVariantSetPayloadInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DatasmithInterchange();
// End Cross Module References
	void UInterchangeDatasmithTranslator::StaticRegisterNativesUInterchangeDatasmithTranslator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeDatasmithTranslator);
	UClass* Z_Construct_UClass_UInterchangeDatasmithTranslator_NoRegister()
	{
		return UInterchangeDatasmithTranslator::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeDatasmithTranslator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeDatasmithTranslator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeTranslatorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithInterchange,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeDatasmithTranslator_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeDatasmithTranslator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "InterchangeDatasmithTranslator.h" },
		{ "ModuleRelativePath", "Public/InterchangeDatasmithTranslator.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UInterchangeDatasmithTranslator_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterchangeTexturePayloadInterface_NoRegister, (int32)VTABLE_OFFSET(UInterchangeDatasmithTranslator, IInterchangeTexturePayloadInterface), false },  // 469965785
			{ Z_Construct_UClass_UInterchangeMeshPayloadInterface_NoRegister, (int32)VTABLE_OFFSET(UInterchangeDatasmithTranslator, IInterchangeMeshPayloadInterface), false },  // 681125245
			{ Z_Construct_UClass_UInterchangeAnimationPayloadInterface_NoRegister, (int32)VTABLE_OFFSET(UInterchangeDatasmithTranslator, IInterchangeAnimationPayloadInterface), false },  // 739771593
			{ Z_Construct_UClass_UInterchangeVariantSetPayloadInterface_NoRegister, (int32)VTABLE_OFFSET(UInterchangeDatasmithTranslator, IInterchangeVariantSetPayloadInterface), false },  // 1075796063
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeDatasmithTranslator_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeDatasmithTranslator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeDatasmithTranslator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeDatasmithTranslator_Statics::ClassParams = {
		&UInterchangeDatasmithTranslator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeDatasmithTranslator_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeDatasmithTranslator_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UInterchangeDatasmithTranslator()
	{
		if (!Z_Registration_Info_UClass_UInterchangeDatasmithTranslator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeDatasmithTranslator.OuterSingleton, Z_Construct_UClass_UInterchangeDatasmithTranslator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeDatasmithTranslator.OuterSingleton;
	}
	template<> DATASMITHINTERCHANGE_API UClass* StaticClass<UInterchangeDatasmithTranslator>()
	{
		return UInterchangeDatasmithTranslator::StaticClass();
	}
	UInterchangeDatasmithTranslator::UInterchangeDatasmithTranslator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeDatasmithTranslator);
	UInterchangeDatasmithTranslator::~UInterchangeDatasmithTranslator() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithTranslator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithTranslator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeDatasmithTranslator, UInterchangeDatasmithTranslator::StaticClass, TEXT("UInterchangeDatasmithTranslator"), &Z_Registration_Info_UClass_UInterchangeDatasmithTranslator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeDatasmithTranslator), 3521167131U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithTranslator_h_1310817803(TEXT("/Script/DatasmithInterchange"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithTranslator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithTranslator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
