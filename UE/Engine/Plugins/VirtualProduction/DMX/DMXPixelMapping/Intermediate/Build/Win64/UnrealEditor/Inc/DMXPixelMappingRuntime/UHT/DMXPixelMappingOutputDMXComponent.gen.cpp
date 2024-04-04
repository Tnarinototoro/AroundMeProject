// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/DMXPixelMappingOutputDMXComponent.h"
#include "Library/DMXEntityReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXPixelMappingOutputDMXComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DMXPIXELMAPPINGRENDERER_API UEnum* Z_Construct_UEnum_DMXPixelMappingRenderer_EDMXPixelBlendingQuality();
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingColorSpace_NoRegister();
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingOutputComponent();
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent();
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent_NoRegister();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXModulator_NoRegister();
	DMXRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDMXEntityFixturePatchRef();
	UPackage* Z_Construct_UPackage__Script_DMXPixelMappingRuntime();
// End Cross Module References
	DEFINE_FUNCTION(UDMXPixelMappingOutputDMXComponent::execRenderWithInputAndSendDMX)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RenderWithInputAndSendDMX();
		P_NATIVE_END;
	}
	void UDMXPixelMappingOutputDMXComponent::StaticRegisterNativesUDMXPixelMappingOutputDMXComponent()
	{
		UClass* Class = UDMXPixelMappingOutputDMXComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RenderWithInputAndSendDMX", &UDMXPixelMappingOutputDMXComponent::execRenderWithInputAndSendDMX },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDMXPixelMappingOutputDMXComponent_RenderWithInputAndSendDMX_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXPixelMappingOutputDMXComponent_RenderWithInputAndSendDMX_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX|PixelMapping" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Deprecated for performance reasons. Instead use 'Get DMX Pixel Mapping Renderer Component' and Render only once each tick" },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingOutputDMXComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXPixelMappingOutputDMXComponent_RenderWithInputAndSendDMX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent, nullptr, "RenderWithInputAndSendDMX", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXPixelMappingOutputDMXComponent_RenderWithInputAndSendDMX_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDMXPixelMappingOutputDMXComponent_RenderWithInputAndSendDMX_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UDMXPixelMappingOutputDMXComponent_RenderWithInputAndSendDMX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXPixelMappingOutputDMXComponent_RenderWithInputAndSendDMX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXPixelMappingOutputDMXComponent);
	UClass* Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent_NoRegister()
	{
		return UDMXPixelMappingOutputDMXComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CellBlendingQuality_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CellBlendingQuality_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CellBlendingQuality;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FixturePatchRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FixturePatchRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorSpaceClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ColorSpaceClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorSpace_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ColorSpace;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ModulatorClasses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModulatorClasses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ModulatorClasses;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Modulators_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Modulators_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Modulators;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDMXPixelMappingOutputComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXPixelMappingRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDMXPixelMappingOutputDMXComponent_RenderWithInputAndSendDMX, "RenderWithInputAndSendDMX" }, // 1779098224
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for components that contain a fixture patch to send DMX.\n * \n * For legacy reasons also used by deprecated DMXPixelMappingScreenComponent\n */" },
		{ "IncludePath", "Components/DMXPixelMappingOutputDMXComponent.h" },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingOutputDMXComponent.h" },
		{ "ToolTip", "Base class for components that contain a fixture patch to send DMX.\n\nFor legacy reasons also used by deprecated DMXPixelMappingScreenComponent" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent_Statics::NewProp_CellBlendingQuality_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent_Statics::NewProp_CellBlendingQuality_MetaData[] = {
		{ "Category", "Quality" },
		{ "Comment", "/** The quality level to use when averaging colors during downsampling. */" },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingOutputDMXComponent.h" },
		{ "ToolTip", "The quality level to use when averaging colors during downsampling." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent_Statics::NewProp_CellBlendingQuality = { "CellBlendingQuality", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXPixelMappingOutputDMXComponent, CellBlendingQuality), Z_Construct_UEnum_DMXPixelMappingRenderer_EDMXPixelBlendingQuality, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent_Statics::NewProp_CellBlendingQuality_MetaData), Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent_Statics::NewProp_CellBlendingQuality_MetaData) }; // 3871461642
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent_Statics::NewProp_FixturePatchRef_MetaData[] = {
		{ "Category", "Fixture Patch" },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingOutputDMXComponent.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent_Statics::NewProp_FixturePatchRef = { "FixturePatchRef", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXPixelMappingOutputDMXComponent, FixturePatchRef), Z_Construct_UScriptStruct_FDMXEntityFixturePatchRef, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent_Statics::NewProp_FixturePatchRef_MetaData), Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent_Statics::NewProp_FixturePatchRef_MetaData) }; // 1092920056
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent_Statics::NewProp_ColorSpaceClass_MetaData[] = {
		{ "Category", "Color Space" },
		{ "Comment", "/** Sets which color space Pixel Mapping sends */" },
		{ "DisplayName", "Output Mode" },
		{ "DisplayPriority", "2" },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingOutputDMXComponent.h" },
		{ "ShowDisplayNames", "" },
		{ "ToolTip", "Sets which color space Pixel Mapping sends" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent_Statics::NewProp_ColorSpaceClass = { "ColorSpaceClass", nullptr, (EPropertyFlags)0x0014000002002001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXPixelMappingOutputDMXComponent, ColorSpaceClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDMXPixelMappingColorSpace_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent_Statics::NewProp_ColorSpaceClass_MetaData), Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent_Statics::NewProp_ColorSpaceClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent_Statics::NewProp_ColorSpace_MetaData[] = {
		{ "Category", "Color Space" },
		{ "Comment", "/** The Color Space currently in use */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingOutputDMXComponent.h" },
		{ "ToolTip", "The Color Space currently in use" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent_Statics::NewProp_ColorSpace = { "ColorSpace", nullptr, (EPropertyFlags)0x00160000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXPixelMappingOutputDMXComponent, ColorSpace), Z_Construct_UClass_UDMXPixelMappingColorSpace_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent_Statics::NewProp_ColorSpace_MetaData), Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent_Statics::NewProp_ColorSpace_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent_Statics::NewProp_ModulatorClasses_Inner = { "ModulatorClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UDMXModulator_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent_Statics::NewProp_ModulatorClasses_MetaData[] = {
		{ "Category", "Output Modulators" },
		{ "Comment", "/** Modulators applied to the output before sending DMX */" },
		{ "DisplayName", "Output Modulators" },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingOutputDMXComponent.h" },
		{ "ToolTip", "Modulators applied to the output before sending DMX" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent_Statics::NewProp_ModulatorClasses = { "ModulatorClasses", nullptr, (EPropertyFlags)0x0014000000002015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXPixelMappingOutputDMXComponent, ModulatorClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent_Statics::NewProp_ModulatorClasses_MetaData), Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent_Statics::NewProp_ModulatorClasses_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent_Statics::NewProp_Modulators_Inner = { "Modulators", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDMXModulator_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent_Statics::NewProp_Modulators_MetaData[] = {
		{ "Comment", "/** The actual modulator instances */" },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingOutputDMXComponent.h" },
		{ "ToolTip", "The actual modulator instances" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent_Statics::NewProp_Modulators = { "Modulators", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXPixelMappingOutputDMXComponent, Modulators), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent_Statics::NewProp_Modulators_MetaData), Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent_Statics::NewProp_Modulators_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent_Statics::NewProp_CellBlendingQuality_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent_Statics::NewProp_CellBlendingQuality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent_Statics::NewProp_FixturePatchRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent_Statics::NewProp_ColorSpaceClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent_Statics::NewProp_ColorSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent_Statics::NewProp_ModulatorClasses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent_Statics::NewProp_ModulatorClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent_Statics::NewProp_Modulators_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent_Statics::NewProp_Modulators,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXPixelMappingOutputDMXComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent_Statics::ClassParams = {
		&UDMXPixelMappingOutputDMXComponent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent_Statics::PropPointers),
		0,
		0x009000A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent()
	{
		if (!Z_Registration_Info_UClass_UDMXPixelMappingOutputDMXComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXPixelMappingOutputDMXComponent.OuterSingleton, Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXPixelMappingOutputDMXComponent.OuterSingleton;
	}
	template<> DMXPIXELMAPPINGRUNTIME_API UClass* StaticClass<UDMXPixelMappingOutputDMXComponent>()
	{
		return UDMXPixelMappingOutputDMXComponent::StaticClass();
	}
	UDMXPixelMappingOutputDMXComponent::UDMXPixelMappingOutputDMXComponent() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXPixelMappingOutputDMXComponent);
	UDMXPixelMappingOutputDMXComponent::~UDMXPixelMappingOutputDMXComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingOutputDMXComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingOutputDMXComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent, UDMXPixelMappingOutputDMXComponent::StaticClass, TEXT("UDMXPixelMappingOutputDMXComponent"), &Z_Registration_Info_UClass_UDMXPixelMappingOutputDMXComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXPixelMappingOutputDMXComponent), 4217702324U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingOutputDMXComponent_h_448493193(TEXT("/Script/DMXPixelMappingRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingOutputDMXComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingOutputDMXComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
