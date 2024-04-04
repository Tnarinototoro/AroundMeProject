// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SmartObjectUserComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmartObjectUserComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectSlotValidationFilter_NoRegister();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectUserComponent();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectUserComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SmartObjectsModule();
// End Cross Module References
	void USmartObjectUserComponent::StaticRegisterNativesUSmartObjectUserComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USmartObjectUserComponent);
	UClass* Z_Construct_UClass_USmartObjectUserComponent_NoRegister()
	{
		return USmartObjectUserComponent::StaticClass();
	}
	struct Z_Construct_UClass_USmartObjectUserComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValidationFilter_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ValidationFilter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USmartObjectUserComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectUserComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartObjectUserComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Gameplay" },
		{ "Comment", "/**\n * Smart Object User Component defines common settings for a Smart Object user.\n *\n * The validation settings for entries and exits are separate to allow to have more lax exit settings.\n * For example the entry settings might prevent to use Smart Object slots which are on water, but we could allow to exit in water.\n */" },
		{ "HideCategories", "Activation AssetUserData Collision Cooking HLOD Lighting LOD Mobile Mobility Navigation Physics RayTracing Rendering Tags TextureStreaming" },
		{ "IncludePath", "SmartObjectUserComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SmartObjectUserComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Smart Object User Component defines common settings for a Smart Object user.\n\nThe validation settings for entries and exits are separate to allow to have more lax exit settings.\nFor example the entry settings might prevent to use Smart Object slots which are on water, but we could allow to exit in water." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartObjectUserComponent_Statics::NewProp_ValidationFilter_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "Comment", "/** Validation filter used for entering testing entries for a Smart Object slot. */" },
		{ "ModuleRelativePath", "Public/SmartObjectUserComponent.h" },
		{ "ToolTip", "Validation filter used for entering testing entries for a Smart Object slot." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USmartObjectUserComponent_Statics::NewProp_ValidationFilter = { "ValidationFilter", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USmartObjectUserComponent, ValidationFilter), Z_Construct_UClass_UClass, Z_Construct_UClass_USmartObjectSlotValidationFilter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectUserComponent_Statics::NewProp_ValidationFilter_MetaData), Z_Construct_UClass_USmartObjectUserComponent_Statics::NewProp_ValidationFilter_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USmartObjectUserComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartObjectUserComponent_Statics::NewProp_ValidationFilter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USmartObjectUserComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USmartObjectUserComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USmartObjectUserComponent_Statics::ClassParams = {
		&USmartObjectUserComponent::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USmartObjectUserComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectUserComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectUserComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USmartObjectUserComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectUserComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USmartObjectUserComponent()
	{
		if (!Z_Registration_Info_UClass_USmartObjectUserComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USmartObjectUserComponent.OuterSingleton, Z_Construct_UClass_USmartObjectUserComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USmartObjectUserComponent.OuterSingleton;
	}
	template<> SMARTOBJECTSMODULE_API UClass* StaticClass<USmartObjectUserComponent>()
	{
		return USmartObjectUserComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USmartObjectUserComponent);
	USmartObjectUserComponent::~USmartObjectUserComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectUserComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectUserComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USmartObjectUserComponent, USmartObjectUserComponent::StaticClass, TEXT("USmartObjectUserComponent"), &Z_Registration_Info_UClass_USmartObjectUserComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USmartObjectUserComponent), 427791386U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectUserComponent_h_4169926921(TEXT("/Script/SmartObjectsModule"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectUserComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectUserComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
