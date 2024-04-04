// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/Fullscreen/VPFullScreenUserWidget_PostProcessWithSVE.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVPFullScreenUserWidget_PostProcessWithSVE() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_VPUtilities();
	VPUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase();
	VPUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessWithSVE();
// End Cross Module References

static_assert(std::is_polymorphic<FVPFullScreenUserWidget_PostProcessWithSVE>() == std::is_polymorphic<FVPFullScreenUserWidget_PostProcessBase>(), "USTRUCT FVPFullScreenUserWidget_PostProcessWithSVE cannot be polymorphic unless super FVPFullScreenUserWidget_PostProcessBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VPFullScreenUserWidget_PostProcessWithSVE;
class UScriptStruct* FVPFullScreenUserWidget_PostProcessWithSVE::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VPFullScreenUserWidget_PostProcessWithSVE.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VPFullScreenUserWidget_PostProcessWithSVE.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessWithSVE, (UObject*)Z_Construct_UPackage__Script_VPUtilities(), TEXT("VPFullScreenUserWidget_PostProcessWithSVE"));
	}
	return Z_Registration_Info_UScriptStruct_VPFullScreenUserWidget_PostProcessWithSVE.OuterSingleton;
}
template<> VPUTILITIES_API UScriptStruct* StaticStruct<FVPFullScreenUserWidget_PostProcessWithSVE>()
{
	return FVPFullScreenUserWidget_PostProcessWithSVE::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessWithSVE_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessWithSVE_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Renders widget in post process phase by using Scene View Extensions (SVE).\n */" },
		{ "ModuleRelativePath", "Public/Widgets/Fullscreen/VPFullScreenUserWidget_PostProcessWithSVE.h" },
		{ "ToolTip", "Renders widget in post process phase by using Scene View Extensions (SVE)." },
	};
#endif
	void* Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessWithSVE_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVPFullScreenUserWidget_PostProcessWithSVE>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessWithSVE_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VPUtilities,
		Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase,
		&NewStructOps,
		"VPFullScreenUserWidget_PostProcessWithSVE",
		nullptr,
		0,
		sizeof(FVPFullScreenUserWidget_PostProcessWithSVE),
		alignof(FVPFullScreenUserWidget_PostProcessWithSVE),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessWithSVE_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessWithSVE_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessWithSVE()
	{
		if (!Z_Registration_Info_UScriptStruct_VPFullScreenUserWidget_PostProcessWithSVE.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VPFullScreenUserWidget_PostProcessWithSVE.InnerSingleton, Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessWithSVE_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VPFullScreenUserWidget_PostProcessWithSVE.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_Fullscreen_VPFullScreenUserWidget_PostProcessWithSVE_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_Fullscreen_VPFullScreenUserWidget_PostProcessWithSVE_h_Statics::ScriptStructInfo[] = {
		{ FVPFullScreenUserWidget_PostProcessWithSVE::StaticStruct, Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessWithSVE_Statics::NewStructOps, TEXT("VPFullScreenUserWidget_PostProcessWithSVE"), &Z_Registration_Info_UScriptStruct_VPFullScreenUserWidget_PostProcessWithSVE, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVPFullScreenUserWidget_PostProcessWithSVE), 3090235083U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_Fullscreen_VPFullScreenUserWidget_PostProcessWithSVE_h_3561831723(TEXT("/Script/VPUtilities"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_Fullscreen_VPFullScreenUserWidget_PostProcessWithSVE_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_Fullscreen_VPFullScreenUserWidget_PostProcessWithSVE_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
