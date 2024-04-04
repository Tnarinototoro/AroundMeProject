// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/NiagaraDataChannel_Global.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataChannel_Global() {}
// Cross Module References
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannel();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannel_Global();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannel_Global_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannelHandler();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannelHandler_Global();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannelHandler_Global_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	void UNiagaraDataChannel_Global::StaticRegisterNativesUNiagaraDataChannel_Global()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataChannel_Global);
	UClass* Z_Construct_UClass_UNiagaraDataChannel_Global_NoRegister()
	{
		return UNiagaraDataChannel_Global::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataChannel_Global_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataChannel_Global_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataChannel,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannel_Global_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataChannel_Global_Statics::Class_MetaDataParams[] = {
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "NiagaraDataChannel_Global.h" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel_Global.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataChannel_Global_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataChannel_Global>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataChannel_Global_Statics::ClassParams = {
		&UNiagaraDataChannel_Global::StaticClass,
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
		0x000810A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannel_Global_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataChannel_Global_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UNiagaraDataChannel_Global()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataChannel_Global.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataChannel_Global.OuterSingleton, Z_Construct_UClass_UNiagaraDataChannel_Global_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataChannel_Global.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataChannel_Global>()
	{
		return UNiagaraDataChannel_Global::StaticClass();
	}
	UNiagaraDataChannel_Global::UNiagaraDataChannel_Global(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataChannel_Global);
	UNiagaraDataChannel_Global::~UNiagaraDataChannel_Global() {}
	void UNiagaraDataChannelHandler_Global::StaticRegisterNativesUNiagaraDataChannelHandler_Global()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataChannelHandler_Global);
	UClass* Z_Construct_UClass_UNiagaraDataChannelHandler_Global_NoRegister()
	{
		return UNiagaraDataChannelHandler_Global::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataChannelHandler_Global_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataChannelHandler_Global_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataChannelHandler,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannelHandler_Global_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataChannelHandler_Global_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\nBasic DataChannel handler that makes all data visible globally.\n*/" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "NiagaraDataChannel_Global.h" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel_Global.h" },
		{ "ToolTip", "Basic DataChannel handler that makes all data visible globally." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataChannelHandler_Global_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataChannelHandler_Global>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataChannelHandler_Global_Statics::ClassParams = {
		&UNiagaraDataChannelHandler_Global::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannelHandler_Global_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataChannelHandler_Global_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UNiagaraDataChannelHandler_Global()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataChannelHandler_Global.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataChannelHandler_Global.OuterSingleton, Z_Construct_UClass_UNiagaraDataChannelHandler_Global_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataChannelHandler_Global.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataChannelHandler_Global>()
	{
		return UNiagaraDataChannelHandler_Global::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataChannelHandler_Global);
	UNiagaraDataChannelHandler_Global::~UNiagaraDataChannelHandler_Global() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Global_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Global_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataChannel_Global, UNiagaraDataChannel_Global::StaticClass, TEXT("UNiagaraDataChannel_Global"), &Z_Registration_Info_UClass_UNiagaraDataChannel_Global, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataChannel_Global), 3145236258U) },
		{ Z_Construct_UClass_UNiagaraDataChannelHandler_Global, UNiagaraDataChannelHandler_Global::StaticClass, TEXT("UNiagaraDataChannelHandler_Global"), &Z_Registration_Info_UClass_UNiagaraDataChannelHandler_Global, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataChannelHandler_Global), 3617986821U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Global_h_1697652886(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Global_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Global_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
