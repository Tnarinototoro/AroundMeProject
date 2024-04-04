// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViewModels/Stack/NiagaraStackInputCategory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraStackInputCategory() {}
// Cross Module References
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackCategory();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackCategory_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackInputCategory();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackInputCategory_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackItemContent();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackSpacer_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackSummaryCategory();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackSummaryCategory_NoRegister();
	NIAGARAEDITOR_API UEnum* Z_Construct_UEnum_NiagaraEditor_EStackParameterBehavior();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStackParameterBehavior;
	static UEnum* EStackParameterBehavior_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStackParameterBehavior.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStackParameterBehavior.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NiagaraEditor_EStackParameterBehavior, (UObject*)Z_Construct_UPackage__Script_NiagaraEditor(), TEXT("EStackParameterBehavior"));
		}
		return Z_Registration_Info_UEnum_EStackParameterBehavior.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UEnum* StaticEnum<EStackParameterBehavior>()
	{
		return EStackParameterBehavior_StaticEnum();
	}
	struct Z_Construct_UEnum_NiagaraEditor_EStackParameterBehavior_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NiagaraEditor_EStackParameterBehavior_Statics::Enumerators[] = {
		{ "EStackParameterBehavior::Dynamic", (int64)EStackParameterBehavior::Dynamic },
		{ "EStackParameterBehavior::Static", (int64)EStackParameterBehavior::Static },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NiagaraEditor_EStackParameterBehavior_Statics::Enum_MetaDataParams[] = {
		{ "Dynamic.Name", "EStackParameterBehavior::Dynamic" },
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackInputCategory.h" },
		{ "Static.Name", "EStackParameterBehavior::Static" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NiagaraEditor_EStackParameterBehavior_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NiagaraEditor,
		nullptr,
		"EStackParameterBehavior",
		"EStackParameterBehavior",
		Z_Construct_UEnum_NiagaraEditor_EStackParameterBehavior_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NiagaraEditor_EStackParameterBehavior_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NiagaraEditor_EStackParameterBehavior_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NiagaraEditor_EStackParameterBehavior_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_NiagaraEditor_EStackParameterBehavior()
	{
		if (!Z_Registration_Info_UEnum_EStackParameterBehavior.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStackParameterBehavior.InnerSingleton, Z_Construct_UEnum_NiagaraEditor_EStackParameterBehavior_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStackParameterBehavior.InnerSingleton;
	}
	void UNiagaraStackCategory::StaticRegisterNativesUNiagaraStackCategory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraStackCategory);
	UClass* Z_Construct_UClass_UNiagaraStackCategory_NoRegister()
	{
		return UNiagaraStackCategory::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraStackCategory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CategorySpacer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CategorySpacer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraStackCategory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraStackItemContent,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackCategory_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackCategory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ViewModels/Stack/NiagaraStackInputCategory.h" },
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackInputCategory.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackCategory_Statics::NewProp_CategorySpacer_MetaData[] = {
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackInputCategory.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraStackCategory_Statics::NewProp_CategorySpacer = { "CategorySpacer", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStackCategory, CategorySpacer), Z_Construct_UClass_UNiagaraStackSpacer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackCategory_Statics::NewProp_CategorySpacer_MetaData), Z_Construct_UClass_UNiagaraStackCategory_Statics::NewProp_CategorySpacer_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraStackCategory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStackCategory_Statics::NewProp_CategorySpacer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraStackCategory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraStackCategory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraStackCategory_Statics::ClassParams = {
		&UNiagaraStackCategory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraStackCategory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackCategory_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackCategory_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraStackCategory_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackCategory_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UNiagaraStackCategory()
	{
		if (!Z_Registration_Info_UClass_UNiagaraStackCategory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraStackCategory.OuterSingleton, Z_Construct_UClass_UNiagaraStackCategory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraStackCategory.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraStackCategory>()
	{
		return UNiagaraStackCategory::StaticClass();
	}
	UNiagaraStackCategory::UNiagaraStackCategory() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraStackCategory);
	UNiagaraStackCategory::~UNiagaraStackCategory() {}
	void UNiagaraStackInputCategory::StaticRegisterNativesUNiagaraStackInputCategory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraStackInputCategory);
	UClass* Z_Construct_UClass_UNiagaraStackInputCategory_NoRegister()
	{
		return UNiagaraStackInputCategory::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraStackInputCategory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraStackInputCategory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraStackCategory,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackInputCategory_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackInputCategory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ViewModels/Stack/NiagaraStackInputCategory.h" },
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackInputCategory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraStackInputCategory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraStackInputCategory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraStackInputCategory_Statics::ClassParams = {
		&UNiagaraStackInputCategory::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackInputCategory_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraStackInputCategory_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UNiagaraStackInputCategory()
	{
		if (!Z_Registration_Info_UClass_UNiagaraStackInputCategory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraStackInputCategory.OuterSingleton, Z_Construct_UClass_UNiagaraStackInputCategory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraStackInputCategory.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraStackInputCategory>()
	{
		return UNiagaraStackInputCategory::StaticClass();
	}
	UNiagaraStackInputCategory::UNiagaraStackInputCategory() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraStackInputCategory);
	UNiagaraStackInputCategory::~UNiagaraStackInputCategory() {}
	void UNiagaraStackSummaryCategory::StaticRegisterNativesUNiagaraStackSummaryCategory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraStackSummaryCategory);
	UClass* Z_Construct_UClass_UNiagaraStackSummaryCategory_NoRegister()
	{
		return UNiagaraStackSummaryCategory::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraStackSummaryCategory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraStackSummaryCategory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraStackCategory,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackSummaryCategory_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackSummaryCategory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ViewModels/Stack/NiagaraStackInputCategory.h" },
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackInputCategory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraStackSummaryCategory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraStackSummaryCategory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraStackSummaryCategory_Statics::ClassParams = {
		&UNiagaraStackSummaryCategory::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackSummaryCategory_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraStackSummaryCategory_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UNiagaraStackSummaryCategory()
	{
		if (!Z_Registration_Info_UClass_UNiagaraStackSummaryCategory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraStackSummaryCategory.OuterSingleton, Z_Construct_UClass_UNiagaraStackSummaryCategory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraStackSummaryCategory.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraStackSummaryCategory>()
	{
		return UNiagaraStackSummaryCategory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraStackSummaryCategory);
	UNiagaraStackSummaryCategory::~UNiagaraStackSummaryCategory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackInputCategory_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackInputCategory_h_Statics::EnumInfo[] = {
		{ EStackParameterBehavior_StaticEnum, TEXT("EStackParameterBehavior"), &Z_Registration_Info_UEnum_EStackParameterBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2942313535U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackInputCategory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraStackCategory, UNiagaraStackCategory::StaticClass, TEXT("UNiagaraStackCategory"), &Z_Registration_Info_UClass_UNiagaraStackCategory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraStackCategory), 3975520096U) },
		{ Z_Construct_UClass_UNiagaraStackInputCategory, UNiagaraStackInputCategory::StaticClass, TEXT("UNiagaraStackInputCategory"), &Z_Registration_Info_UClass_UNiagaraStackInputCategory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraStackInputCategory), 1398262507U) },
		{ Z_Construct_UClass_UNiagaraStackSummaryCategory, UNiagaraStackSummaryCategory::StaticClass, TEXT("UNiagaraStackSummaryCategory"), &Z_Registration_Info_UClass_UNiagaraStackSummaryCategory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraStackSummaryCategory), 481631537U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackInputCategory_h_2436860143(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackInputCategory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackInputCategory_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackInputCategory_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackInputCategory_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
