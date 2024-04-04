// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/NiagaraComponentPool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraComponentPool() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponentPool();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponentPool_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNCPool();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNCPoolElement();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NCPoolElement;
class UScriptStruct* FNCPoolElement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NCPoolElement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NCPoolElement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNCPoolElement, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NCPoolElement"));
	}
	return Z_Registration_Info_UScriptStruct_NCPoolElement.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNCPoolElement>()
{
	return FNCPoolElement::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNCPoolElement_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Component;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNCPoolElement_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraComponentPool.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNCPoolElement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNCPoolElement>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNCPoolElement_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NiagaraComponentPool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FNCPoolElement_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0014000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNCPoolElement, Component), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNCPoolElement_Statics::NewProp_Component_MetaData), Z_Construct_UScriptStruct_FNCPoolElement_Statics::NewProp_Component_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNCPoolElement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNCPoolElement_Statics::NewProp_Component,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNCPoolElement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NCPoolElement",
		Z_Construct_UScriptStruct_FNCPoolElement_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNCPoolElement_Statics::PropPointers),
		sizeof(FNCPoolElement),
		alignof(FNCPoolElement),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNCPoolElement_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNCPoolElement_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNCPoolElement_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FNCPoolElement()
	{
		if (!Z_Registration_Info_UScriptStruct_NCPoolElement.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NCPoolElement.InnerSingleton, Z_Construct_UScriptStruct_FNCPoolElement_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NCPoolElement.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NCPool;
class UScriptStruct* FNCPool::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NCPool.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NCPool.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNCPool, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NCPool"));
	}
	return Z_Registration_Info_UScriptStruct_NCPool.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNCPool>()
{
	return FNCPool::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNCPool_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_FreeElements_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FreeElements_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FreeElements;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNCPool_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraComponentPool.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNCPool_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNCPool>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNCPool_Statics::NewProp_FreeElements_Inner = { "FreeElements", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNCPoolElement, METADATA_PARAMS(0, nullptr) }; // 119199531
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNCPool_Statics::NewProp_FreeElements_MetaData[] = {
		{ "Comment", "//Collection of all currently allocated, free items ready to be grabbed for use.\n//TODO: Change this to a FIFO queue to get better usage. May need to make this whole class behave similar to TCircularQueue.\n" },
		{ "ModuleRelativePath", "Public/NiagaraComponentPool.h" },
		{ "ToolTip", "Collection of all currently allocated, free items ready to be grabbed for use.\nTODO: Change this to a FIFO queue to get better usage. May need to make this whole class behave similar to TCircularQueue." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNCPool_Statics::NewProp_FreeElements = { "FreeElements", nullptr, (EPropertyFlags)0x0010008000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNCPool, FreeElements), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNCPool_Statics::NewProp_FreeElements_MetaData), Z_Construct_UScriptStruct_FNCPool_Statics::NewProp_FreeElements_MetaData) }; // 119199531
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNCPool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNCPool_Statics::NewProp_FreeElements_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNCPool_Statics::NewProp_FreeElements,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNCPool_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NCPool",
		Z_Construct_UScriptStruct_FNCPool_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNCPool_Statics::PropPointers),
		sizeof(FNCPool),
		alignof(FNCPool),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNCPool_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNCPool_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNCPool_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FNCPool()
	{
		if (!Z_Registration_Info_UScriptStruct_NCPool.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NCPool.InnerSingleton, Z_Construct_UScriptStruct_FNCPool_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NCPool.InnerSingleton;
	}
	void UNiagaraComponentPool::StaticRegisterNativesUNiagaraComponentPool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraComponentPool);
	UClass* Z_Construct_UClass_UNiagaraComponentPool_NoRegister()
	{
		return UNiagaraComponentPool::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraComponentPool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldParticleSystemPools_ValueProp;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WorldParticleSystemPools_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldParticleSystemPools_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_WorldParticleSystemPools;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraComponentPool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponentPool_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponentPool_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraComponentPool.h" },
		{ "ModuleRelativePath", "Public/NiagaraComponentPool.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraComponentPool_Statics::NewProp_WorldParticleSystemPools_ValueProp = { "WorldParticleSystemPools", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FNCPool, METADATA_PARAMS(0, nullptr) }; // 3921612614
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraComponentPool_Statics::NewProp_WorldParticleSystemPools_Key_KeyProp = { "WorldParticleSystemPools_Key", nullptr, (EPropertyFlags)0x0004008000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponentPool_Statics::NewProp_WorldParticleSystemPools_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraComponentPool.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNiagaraComponentPool_Statics::NewProp_WorldParticleSystemPools = { "WorldParticleSystemPools", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraComponentPool, WorldParticleSystemPools), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponentPool_Statics::NewProp_WorldParticleSystemPools_MetaData), Z_Construct_UClass_UNiagaraComponentPool_Statics::NewProp_WorldParticleSystemPools_MetaData) }; // 3921612614
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraComponentPool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponentPool_Statics::NewProp_WorldParticleSystemPools_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponentPool_Statics::NewProp_WorldParticleSystemPools_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponentPool_Statics::NewProp_WorldParticleSystemPools,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraComponentPool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraComponentPool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraComponentPool_Statics::ClassParams = {
		&UNiagaraComponentPool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraComponentPool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponentPool_Statics::PropPointers),
		0,
		0x008800A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponentPool_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraComponentPool_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponentPool_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UNiagaraComponentPool()
	{
		if (!Z_Registration_Info_UClass_UNiagaraComponentPool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraComponentPool.OuterSingleton, Z_Construct_UClass_UNiagaraComponentPool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraComponentPool.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraComponentPool>()
	{
		return UNiagaraComponentPool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraComponentPool);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentPool_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentPool_h_Statics::ScriptStructInfo[] = {
		{ FNCPoolElement::StaticStruct, Z_Construct_UScriptStruct_FNCPoolElement_Statics::NewStructOps, TEXT("NCPoolElement"), &Z_Registration_Info_UScriptStruct_NCPoolElement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNCPoolElement), 119199531U) },
		{ FNCPool::StaticStruct, Z_Construct_UScriptStruct_FNCPool_Statics::NewStructOps, TEXT("NCPool"), &Z_Registration_Info_UScriptStruct_NCPool, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNCPool), 3921612614U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentPool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraComponentPool, UNiagaraComponentPool::StaticClass, TEXT("UNiagaraComponentPool"), &Z_Registration_Info_UClass_UNiagaraComponentPool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraComponentPool), 3277056622U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentPool_h_141799589(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentPool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentPool_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentPool_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentPool_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
