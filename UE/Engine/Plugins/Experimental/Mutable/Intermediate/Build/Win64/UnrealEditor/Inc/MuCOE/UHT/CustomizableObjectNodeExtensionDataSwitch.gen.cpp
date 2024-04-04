// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MuCOE/Nodes/CustomizableObjectNodeExtensionDataSwitch.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObjectNodeExtensionDataSwitch() {}
// Cross Module References
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectExtensionNode_NoRegister();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeExtensionDataSwitch();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeExtensionDataSwitch_NoRegister();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeSwitchBase();
	UPackage* Z_Construct_UPackage__Script_CustomizableObjectEditor();
// End Cross Module References
	void UCustomizableObjectNodeExtensionDataSwitch::StaticRegisterNativesUCustomizableObjectNodeExtensionDataSwitch()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectNodeExtensionDataSwitch);
	UClass* Z_Construct_UClass_UCustomizableObjectNodeExtensionDataSwitch_NoRegister()
	{
		return UCustomizableObjectNodeExtensionDataSwitch::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectNodeExtensionDataSwitch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectNodeExtensionDataSwitch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCustomizableObjectNodeSwitchBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeExtensionDataSwitch_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeExtensionDataSwitch_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MuCOE/Nodes/CustomizableObjectNodeExtensionDataSwitch.h" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeExtensionDataSwitch.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCustomizableObjectNodeExtensionDataSwitch_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UCustomizableObjectExtensionNode_NoRegister, (int32)VTABLE_OFFSET(UCustomizableObjectNodeExtensionDataSwitch, ICustomizableObjectExtensionNode), false },  // 721237540
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeExtensionDataSwitch_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectNodeExtensionDataSwitch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectNodeExtensionDataSwitch>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectNodeExtensionDataSwitch_Statics::ClassParams = {
		&UCustomizableObjectNodeExtensionDataSwitch::StaticClass,
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
		0x009000A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeExtensionDataSwitch_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomizableObjectNodeExtensionDataSwitch_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UCustomizableObjectNodeExtensionDataSwitch()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectNodeExtensionDataSwitch.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectNodeExtensionDataSwitch.OuterSingleton, Z_Construct_UClass_UCustomizableObjectNodeExtensionDataSwitch_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectNodeExtensionDataSwitch.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UCustomizableObjectNodeExtensionDataSwitch>()
	{
		return UCustomizableObjectNodeExtensionDataSwitch::StaticClass();
	}
	UCustomizableObjectNodeExtensionDataSwitch::UCustomizableObjectNodeExtensionDataSwitch(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectNodeExtensionDataSwitch);
	UCustomizableObjectNodeExtensionDataSwitch::~UCustomizableObjectNodeExtensionDataSwitch() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeExtensionDataSwitch_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeExtensionDataSwitch_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomizableObjectNodeExtensionDataSwitch, UCustomizableObjectNodeExtensionDataSwitch::StaticClass, TEXT("UCustomizableObjectNodeExtensionDataSwitch"), &Z_Registration_Info_UClass_UCustomizableObjectNodeExtensionDataSwitch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectNodeExtensionDataSwitch), 1801595264U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeExtensionDataSwitch_h_4222033026(TEXT("/Script/CustomizableObjectEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeExtensionDataSwitch_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeExtensionDataSwitch_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
