// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Calibrators/CameraNodalOffsetAlgoManual.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraNodalOffsetAlgoManual() {}
// Cross Module References
	CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_UCameraNodalOffsetAlgo();
	CAMERACALIBRATIONEDITOR_API UClass* Z_Construct_UClass_UCameraNodalOffsetAlgoManual();
	CAMERACALIBRATIONEDITOR_API UClass* Z_Construct_UClass_UCameraNodalOffsetAlgoManual_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CameraCalibrationEditor();
// End Cross Module References
	void UCameraNodalOffsetAlgoManual::StaticRegisterNativesUCameraNodalOffsetAlgoManual()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraNodalOffsetAlgoManual);
	UClass* Z_Construct_UClass_UCameraNodalOffsetAlgoManual_NoRegister()
	{
		return UCameraNodalOffsetAlgoManual::StaticClass();
	}
	struct Z_Construct_UClass_UCameraNodalOffsetAlgoManual_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCameraNodalOffsetAlgoManual_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCameraNodalOffsetAlgo,
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraNodalOffsetAlgoManual_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraNodalOffsetAlgoManual_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Nodal Offset \"algo\" for making manual adjustments to the nodal offset using location and rotation widgets\n */" },
		{ "IncludePath", "Calibrators/CameraNodalOffsetAlgoManual.h" },
		{ "ModuleRelativePath", "Private/Calibrators/CameraNodalOffsetAlgoManual.h" },
		{ "ToolTip", "Nodal Offset \"algo\" for making manual adjustments to the nodal offset using location and rotation widgets" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCameraNodalOffsetAlgoManual_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraNodalOffsetAlgoManual>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraNodalOffsetAlgoManual_Statics::ClassParams = {
		&UCameraNodalOffsetAlgoManual::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraNodalOffsetAlgoManual_Statics::Class_MetaDataParams), Z_Construct_UClass_UCameraNodalOffsetAlgoManual_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UCameraNodalOffsetAlgoManual()
	{
		if (!Z_Registration_Info_UClass_UCameraNodalOffsetAlgoManual.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraNodalOffsetAlgoManual.OuterSingleton, Z_Construct_UClass_UCameraNodalOffsetAlgoManual_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCameraNodalOffsetAlgoManual.OuterSingleton;
	}
	template<> CAMERACALIBRATIONEDITOR_API UClass* StaticClass<UCameraNodalOffsetAlgoManual>()
	{
		return UCameraNodalOffsetAlgoManual::StaticClass();
	}
	UCameraNodalOffsetAlgoManual::UCameraNodalOffsetAlgoManual(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraNodalOffsetAlgoManual);
	UCameraNodalOffsetAlgoManual::~UCameraNodalOffsetAlgoManual() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraNodalOffsetAlgoManual_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraNodalOffsetAlgoManual_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCameraNodalOffsetAlgoManual, UCameraNodalOffsetAlgoManual::StaticClass, TEXT("UCameraNodalOffsetAlgoManual"), &Z_Registration_Info_UClass_UCameraNodalOffsetAlgoManual, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraNodalOffsetAlgoManual), 319765075U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraNodalOffsetAlgoManual_h_2307652574(TEXT("/Script/CameraCalibrationEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraNodalOffsetAlgoManual_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraNodalOffsetAlgoManual_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
