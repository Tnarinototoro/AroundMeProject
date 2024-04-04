// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassCommonFragments.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassCommonFragments() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	MASSCOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FAgentRadiusFragment();
	MASSCOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FObjectWrapperFragment();
	MASSCOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FTransformFragment();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassFragment();
	UPackage* Z_Construct_UPackage__Script_MassCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FTransformFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FTransformFragment cannot be polymorphic unless super FMassFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TransformFragment;
class UScriptStruct* FTransformFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TransformFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TransformFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTransformFragment, (UObject*)Z_Construct_UPackage__Script_MassCommon(), TEXT("TransformFragment"));
	}
	return Z_Registration_Info_UScriptStruct_TransformFragment.OuterSingleton;
}
template<> MASSCOMMON_API UScriptStruct* StaticStruct<FTransformFragment>()
{
	return FTransformFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTransformFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformFragment_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassCommonFragments.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTransformFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTransformFragment>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformFragment_Statics::NewProp_Transform_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassCommonFragments.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTransformFragment_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTransformFragment, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformFragment_Statics::NewProp_Transform_MetaData), Z_Construct_UScriptStruct_FTransformFragment_Statics::NewProp_Transform_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTransformFragment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformFragment_Statics::NewProp_Transform,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTransformFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassCommon,
		Z_Construct_UScriptStruct_FMassFragment,
		&NewStructOps,
		"TransformFragment",
		Z_Construct_UScriptStruct_FTransformFragment_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformFragment_Statics::PropPointers),
		sizeof(FTransformFragment),
		alignof(FTransformFragment),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTransformFragment_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformFragment_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTransformFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_TransformFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TransformFragment.InnerSingleton, Z_Construct_UScriptStruct_FTransformFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TransformFragment.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAgentRadiusFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FAgentRadiusFragment cannot be polymorphic unless super FMassFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AgentRadiusFragment;
class UScriptStruct* FAgentRadiusFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AgentRadiusFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AgentRadiusFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAgentRadiusFragment, (UObject*)Z_Construct_UPackage__Script_MassCommon(), TEXT("AgentRadiusFragment"));
	}
	return Z_Registration_Info_UScriptStruct_AgentRadiusFragment.OuterSingleton;
}
template<> MASSCOMMON_API UScriptStruct* StaticStruct<FAgentRadiusFragment>()
{
	return FAgentRadiusFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAgentRadiusFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgentRadiusFragment_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassCommonFragments.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAgentRadiusFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAgentRadiusFragment>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgentRadiusFragment_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/MassCommonFragments.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAgentRadiusFragment_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAgentRadiusFragment, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentRadiusFragment_Statics::NewProp_Radius_MetaData), Z_Construct_UScriptStruct_FAgentRadiusFragment_Statics::NewProp_Radius_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAgentRadiusFragment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgentRadiusFragment_Statics::NewProp_Radius,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAgentRadiusFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassCommon,
		Z_Construct_UScriptStruct_FMassFragment,
		&NewStructOps,
		"AgentRadiusFragment",
		Z_Construct_UScriptStruct_FAgentRadiusFragment_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentRadiusFragment_Statics::PropPointers),
		sizeof(FAgentRadiusFragment),
		alignof(FAgentRadiusFragment),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentRadiusFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAgentRadiusFragment_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentRadiusFragment_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAgentRadiusFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_AgentRadiusFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AgentRadiusFragment.InnerSingleton, Z_Construct_UScriptStruct_FAgentRadiusFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AgentRadiusFragment.InnerSingleton;
	}

static_assert(std::is_polymorphic<FObjectWrapperFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FObjectWrapperFragment cannot be polymorphic unless super FMassFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ObjectWrapperFragment;
class UScriptStruct* FObjectWrapperFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ObjectWrapperFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ObjectWrapperFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FObjectWrapperFragment, (UObject*)Z_Construct_UPackage__Script_MassCommon(), TEXT("ObjectWrapperFragment"));
	}
	return Z_Registration_Info_UScriptStruct_ObjectWrapperFragment.OuterSingleton;
}
template<> MASSCOMMON_API UScriptStruct* StaticStruct<FObjectWrapperFragment>()
{
	return FObjectWrapperFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FObjectWrapperFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectWrapperFragment_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** This is a common type for all the wrappers pointing at UObjects used to copy data from them or set data based on\n *\x09Mass simulation..\n */" },
		{ "ModuleRelativePath", "Public/MassCommonFragments.h" },
		{ "ToolTip", "This is a common type for all the wrappers pointing at UObjects used to copy data from them or set data based on\n   Mass simulation.." },
	};
#endif
	void* Z_Construct_UScriptStruct_FObjectWrapperFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FObjectWrapperFragment>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FObjectWrapperFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassCommon,
		Z_Construct_UScriptStruct_FMassFragment,
		&NewStructOps,
		"ObjectWrapperFragment",
		nullptr,
		0,
		sizeof(FObjectWrapperFragment),
		alignof(FObjectWrapperFragment),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectWrapperFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FObjectWrapperFragment_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FObjectWrapperFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_ObjectWrapperFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ObjectWrapperFragment.InnerSingleton, Z_Construct_UScriptStruct_FObjectWrapperFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ObjectWrapperFragment.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassCommon_Public_MassCommonFragments_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassCommon_Public_MassCommonFragments_h_Statics::ScriptStructInfo[] = {
		{ FTransformFragment::StaticStruct, Z_Construct_UScriptStruct_FTransformFragment_Statics::NewStructOps, TEXT("TransformFragment"), &Z_Registration_Info_UScriptStruct_TransformFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTransformFragment), 1054793616U) },
		{ FAgentRadiusFragment::StaticStruct, Z_Construct_UScriptStruct_FAgentRadiusFragment_Statics::NewStructOps, TEXT("AgentRadiusFragment"), &Z_Registration_Info_UScriptStruct_AgentRadiusFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAgentRadiusFragment), 435120176U) },
		{ FObjectWrapperFragment::StaticStruct, Z_Construct_UScriptStruct_FObjectWrapperFragment_Statics::NewStructOps, TEXT("ObjectWrapperFragment"), &Z_Registration_Info_UScriptStruct_ObjectWrapperFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FObjectWrapperFragment), 3749284739U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassCommon_Public_MassCommonFragments_h_1372733652(TEXT("/Script/MassCommon"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassCommon_Public_MassCommonFragments_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassCommon_Public_MassCommonFragments_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
