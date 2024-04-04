// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/Fullscreen/VPFullScreenUserWidget_PostProcess.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVPFullScreenUserWidget_PostProcess() {}
// Cross Module References
	COMPOSURE_API UClass* Z_Construct_UClass_ACompositingElement_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPostProcessComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VPUtilities();
	VPUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess();
	VPUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase();
// End Cross Module References

static_assert(std::is_polymorphic<FVPFullScreenUserWidget_PostProcess>() == std::is_polymorphic<FVPFullScreenUserWidget_PostProcessBase>(), "USTRUCT FVPFullScreenUserWidget_PostProcess cannot be polymorphic unless super FVPFullScreenUserWidget_PostProcessBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VPFullScreenUserWidget_PostProcess;
class UScriptStruct* FVPFullScreenUserWidget_PostProcess::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VPFullScreenUserWidget_PostProcess.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VPFullScreenUserWidget_PostProcess.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess, (UObject*)Z_Construct_UPackage__Script_VPUtilities(), TEXT("VPFullScreenUserWidget_PostProcess"));
	}
	return Z_Registration_Info_UScriptStruct_VPFullScreenUserWidget_PostProcess.OuterSingleton;
}
template<> VPUTILITIES_API UScriptStruct* StaticStruct<FVPFullScreenUserWidget_PostProcess>()
{
	return FVPFullScreenUserWidget_PostProcess::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ComposureLayerTargets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComposureLayerTargets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ComposureLayerTargets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PostProcessComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessMaterialInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PostProcessMaterialInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Renders widget by adding it as a blend material.\n */" },
		{ "ModuleRelativePath", "Public/Widgets/Fullscreen/VPFullScreenUserWidget_PostProcess.h" },
		{ "ToolTip", "Renders widget by adding it as a blend material." },
	};
#endif
	void* Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVPFullScreenUserWidget_PostProcess>();
	}
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_ComposureLayerTargets_Inner = { "ComposureLayerTargets", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ACompositingElement_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_ComposureLayerTargets_MetaData[] = {
		{ "Category", "PostProcess" },
		{ "Comment", "/** List of composure layers that are expecting to use the WidgetRenderTarget. */" },
		{ "ModuleRelativePath", "Public/Widgets/Fullscreen/VPFullScreenUserWidget_PostProcess.h" },
		{ "ToolTip", "List of composure layers that are expecting to use the WidgetRenderTarget." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_ComposureLayerTargets = { "ComposureLayerTargets", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVPFullScreenUserWidget_PostProcess, ComposureLayerTargets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_ComposureLayerTargets_MetaData), Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_ComposureLayerTargets_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_PostProcessComponent_MetaData[] = {
		{ "Comment", "/** Post process component used to add the material to the post process chain. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Fullscreen/VPFullScreenUserWidget_PostProcess.h" },
		{ "ToolTip", "Post process component used to add the material to the post process chain." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_PostProcessComponent = { "PostProcessComponent", nullptr, (EPropertyFlags)0x0044000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVPFullScreenUserWidget_PostProcess, PostProcessComponent), Z_Construct_UClass_UPostProcessComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_PostProcessComponent_MetaData), Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_PostProcessComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_PostProcessMaterialInstance_MetaData[] = {
		{ "Comment", "/** The dynamic instance of the material that the render target is attached to. */" },
		{ "ModuleRelativePath", "Public/Widgets/Fullscreen/VPFullScreenUserWidget_PostProcess.h" },
		{ "ToolTip", "The dynamic instance of the material that the render target is attached to." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_PostProcessMaterialInstance = { "PostProcessMaterialInstance", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVPFullScreenUserWidget_PostProcess, PostProcessMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_PostProcessMaterialInstance_MetaData), Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_PostProcessMaterialInstance_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_ComposureLayerTargets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_ComposureLayerTargets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_PostProcessComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_PostProcessMaterialInstance,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VPUtilities,
		Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase,
		&NewStructOps,
		"VPFullScreenUserWidget_PostProcess",
		Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::PropPointers),
		sizeof(FVPFullScreenUserWidget_PostProcess),
		alignof(FVPFullScreenUserWidget_PostProcess),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess()
	{
		if (!Z_Registration_Info_UScriptStruct_VPFullScreenUserWidget_PostProcess.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VPFullScreenUserWidget_PostProcess.InnerSingleton, Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VPFullScreenUserWidget_PostProcess.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_Fullscreen_VPFullScreenUserWidget_PostProcess_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_Fullscreen_VPFullScreenUserWidget_PostProcess_h_Statics::ScriptStructInfo[] = {
		{ FVPFullScreenUserWidget_PostProcess::StaticStruct, Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewStructOps, TEXT("VPFullScreenUserWidget_PostProcess"), &Z_Registration_Info_UScriptStruct_VPFullScreenUserWidget_PostProcess, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVPFullScreenUserWidget_PostProcess), 249099624U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_Fullscreen_VPFullScreenUserWidget_PostProcess_h_3619845637(TEXT("/Script/VPUtilities"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_Fullscreen_VPFullScreenUserWidget_PostProcess_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_Fullscreen_VPFullScreenUserWidget_PostProcess_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
