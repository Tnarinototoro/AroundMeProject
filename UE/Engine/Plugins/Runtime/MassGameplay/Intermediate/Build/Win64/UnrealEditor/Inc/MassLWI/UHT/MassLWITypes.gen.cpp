// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassLWITypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassLWITypes() {}
// Cross Module References
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassSharedFragment();
	MASSLWI_API UClass* Z_Construct_UClass_AMassLWIStaticMeshManager_NoRegister();
	MASSLWI_API UScriptStruct* Z_Construct_UScriptStruct_FMassLWIManagerSharedFragment();
	UPackage* Z_Construct_UPackage__Script_MassLWI();
// End Cross Module References

static_assert(std::is_polymorphic<FMassLWIManagerSharedFragment>() == std::is_polymorphic<FMassSharedFragment>(), "USTRUCT FMassLWIManagerSharedFragment cannot be polymorphic unless super FMassSharedFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassLWIManagerSharedFragment;
class UScriptStruct* FMassLWIManagerSharedFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassLWIManagerSharedFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassLWIManagerSharedFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassLWIManagerSharedFragment, (UObject*)Z_Construct_UPackage__Script_MassLWI(), TEXT("MassLWIManagerSharedFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassLWIManagerSharedFragment.OuterSingleton;
}
template<> MASSLWI_API UScriptStruct* StaticStruct<FMassLWIManagerSharedFragment>()
{
	return FMassLWIManagerSharedFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassLWIManagerSharedFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LWIManager_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_LWIManager;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassLWIManagerSharedFragment_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassLWITypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassLWIManagerSharedFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassLWIManagerSharedFragment>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassLWIManagerSharedFragment_Statics::NewProp_LWIManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassLWITypes.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FMassLWIManagerSharedFragment_Statics::NewProp_LWIManager = { "LWIManager", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassLWIManagerSharedFragment, LWIManager), Z_Construct_UClass_AMassLWIStaticMeshManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassLWIManagerSharedFragment_Statics::NewProp_LWIManager_MetaData), Z_Construct_UScriptStruct_FMassLWIManagerSharedFragment_Statics::NewProp_LWIManager_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassLWIManagerSharedFragment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassLWIManagerSharedFragment_Statics::NewProp_LWIManager,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassLWIManagerSharedFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassLWI,
		Z_Construct_UScriptStruct_FMassSharedFragment,
		&NewStructOps,
		"MassLWIManagerSharedFragment",
		Z_Construct_UScriptStruct_FMassLWIManagerSharedFragment_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassLWIManagerSharedFragment_Statics::PropPointers),
		sizeof(FMassLWIManagerSharedFragment),
		alignof(FMassLWIManagerSharedFragment),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassLWIManagerSharedFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassLWIManagerSharedFragment_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassLWIManagerSharedFragment_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMassLWIManagerSharedFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_MassLWIManagerSharedFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassLWIManagerSharedFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassLWIManagerSharedFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassLWIManagerSharedFragment.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLWI_Public_MassLWITypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLWI_Public_MassLWITypes_h_Statics::ScriptStructInfo[] = {
		{ FMassLWIManagerSharedFragment::StaticStruct, Z_Construct_UScriptStruct_FMassLWIManagerSharedFragment_Statics::NewStructOps, TEXT("MassLWIManagerSharedFragment"), &Z_Registration_Info_UScriptStruct_MassLWIManagerSharedFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassLWIManagerSharedFragment), 209003458U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLWI_Public_MassLWITypes_h_2285098912(TEXT("/Script/MassLWI"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLWI_Public_MassLWITypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLWI_Public_MassLWITypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
