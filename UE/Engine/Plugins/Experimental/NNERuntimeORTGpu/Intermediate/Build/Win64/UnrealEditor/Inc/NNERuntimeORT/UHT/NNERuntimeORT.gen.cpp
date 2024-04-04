// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NNERuntimeORT/Private/NNERuntimeORT.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNNERuntimeORT() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	NNE_API UClass* Z_Construct_UClass_UNNERuntime_NoRegister();
	NNE_API UClass* Z_Construct_UClass_UNNERuntimeGPU_NoRegister();
	NNERUNTIMEORT_API UClass* Z_Construct_UClass_UNNERuntimeORTGpuImpl();
	NNERUNTIMEORT_API UClass* Z_Construct_UClass_UNNERuntimeORTGpuImpl_NoRegister();
	NNERUNTIMEORT_API UEnum* Z_Construct_UEnum_NNERuntimeORT_ENNERuntimeORTGpuProvider();
	UPackage* Z_Construct_UPackage__Script_NNERuntimeORT();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENNERuntimeORTGpuProvider;
	static UEnum* ENNERuntimeORTGpuProvider_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENNERuntimeORTGpuProvider.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENNERuntimeORTGpuProvider.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NNERuntimeORT_ENNERuntimeORTGpuProvider, (UObject*)Z_Construct_UPackage__Script_NNERuntimeORT(), TEXT("ENNERuntimeORTGpuProvider"));
		}
		return Z_Registration_Info_UEnum_ENNERuntimeORTGpuProvider.OuterSingleton;
	}
	template<> NNERUNTIMEORT_API UEnum* StaticEnum<ENNERuntimeORTGpuProvider>()
	{
		return ENNERuntimeORTGpuProvider_StaticEnum();
	}
	struct Z_Construct_UEnum_NNERuntimeORT_ENNERuntimeORTGpuProvider_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NNERuntimeORT_ENNERuntimeORTGpuProvider_Statics::Enumerators[] = {
		{ "ENNERuntimeORTGpuProvider::None", (int64)ENNERuntimeORTGpuProvider::None },
		{ "ENNERuntimeORTGpuProvider::Dml", (int64)ENNERuntimeORTGpuProvider::Dml },
		{ "ENNERuntimeORTGpuProvider::Cuda", (int64)ENNERuntimeORTGpuProvider::Cuda },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NNERuntimeORT_ENNERuntimeORTGpuProvider_Statics::Enum_MetaDataParams[] = {
		{ "Cuda.Name", "ENNERuntimeORTGpuProvider::Cuda" },
		{ "Dml.Name", "ENNERuntimeORTGpuProvider::Dml" },
		{ "ModuleRelativePath", "Private/NNERuntimeORT.h" },
		{ "None.Name", "ENNERuntimeORTGpuProvider::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NNERuntimeORT_ENNERuntimeORTGpuProvider_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NNERuntimeORT,
		nullptr,
		"ENNERuntimeORTGpuProvider",
		"ENNERuntimeORTGpuProvider",
		Z_Construct_UEnum_NNERuntimeORT_ENNERuntimeORTGpuProvider_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NNERuntimeORT_ENNERuntimeORTGpuProvider_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NNERuntimeORT_ENNERuntimeORTGpuProvider_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NNERuntimeORT_ENNERuntimeORTGpuProvider_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_NNERuntimeORT_ENNERuntimeORTGpuProvider()
	{
		if (!Z_Registration_Info_UEnum_ENNERuntimeORTGpuProvider.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENNERuntimeORTGpuProvider.InnerSingleton, Z_Construct_UEnum_NNERuntimeORT_ENNERuntimeORTGpuProvider_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENNERuntimeORTGpuProvider.InnerSingleton;
	}
	void UNNERuntimeORTGpuImpl::StaticRegisterNativesUNNERuntimeORTGpuImpl()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNNERuntimeORTGpuImpl);
	UClass* Z_Construct_UClass_UNNERuntimeORTGpuImpl_NoRegister()
	{
		return UNNERuntimeORTGpuImpl::StaticClass();
	}
	struct Z_Construct_UClass_UNNERuntimeORTGpuImpl_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNNERuntimeORTGpuImpl_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NNERuntimeORT,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNNERuntimeORTGpuImpl_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNNERuntimeORTGpuImpl_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NNERuntimeORT.h" },
		{ "ModuleRelativePath", "Private/NNERuntimeORT.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UNNERuntimeORTGpuImpl_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UNNERuntime_NoRegister, (int32)VTABLE_OFFSET(UNNERuntimeORTGpuImpl, INNERuntime), false },  // 2701313674
			{ Z_Construct_UClass_UNNERuntimeGPU_NoRegister, (int32)VTABLE_OFFSET(UNNERuntimeORTGpuImpl, INNERuntimeGPU), false },  // 2288300070
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNNERuntimeORTGpuImpl_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNNERuntimeORTGpuImpl_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNNERuntimeORTGpuImpl>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNNERuntimeORTGpuImpl_Statics::ClassParams = {
		&UNNERuntimeORTGpuImpl::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNNERuntimeORTGpuImpl_Statics::Class_MetaDataParams), Z_Construct_UClass_UNNERuntimeORTGpuImpl_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UNNERuntimeORTGpuImpl()
	{
		if (!Z_Registration_Info_UClass_UNNERuntimeORTGpuImpl.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNNERuntimeORTGpuImpl.OuterSingleton, Z_Construct_UClass_UNNERuntimeORTGpuImpl_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNNERuntimeORTGpuImpl.OuterSingleton;
	}
	template<> NNERUNTIMEORT_API UClass* StaticClass<UNNERuntimeORTGpuImpl>()
	{
		return UNNERuntimeORTGpuImpl::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNNERuntimeORTGpuImpl);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNERuntimeORTGpu_Source_NNERuntimeORT_Private_NNERuntimeORT_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNERuntimeORTGpu_Source_NNERuntimeORT_Private_NNERuntimeORT_h_Statics::EnumInfo[] = {
		{ ENNERuntimeORTGpuProvider_StaticEnum, TEXT("ENNERuntimeORTGpuProvider"), &Z_Registration_Info_UEnum_ENNERuntimeORTGpuProvider, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1586688905U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNERuntimeORTGpu_Source_NNERuntimeORT_Private_NNERuntimeORT_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNNERuntimeORTGpuImpl, UNNERuntimeORTGpuImpl::StaticClass, TEXT("UNNERuntimeORTGpuImpl"), &Z_Registration_Info_UClass_UNNERuntimeORTGpuImpl, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNNERuntimeORTGpuImpl), 2515308953U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNERuntimeORTGpu_Source_NNERuntimeORT_Private_NNERuntimeORT_h_1570792340(TEXT("/Script/NNERuntimeORT"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNERuntimeORTGpu_Source_NNERuntimeORT_Private_NNERuntimeORT_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNERuntimeORTGpu_Source_NNERuntimeORT_Private_NNERuntimeORT_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNERuntimeORTGpu_Source_NNERuntimeORT_Private_NNERuntimeORT_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNERuntimeORTGpu_Source_NNERuntimeORT_Private_NNERuntimeORT_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
