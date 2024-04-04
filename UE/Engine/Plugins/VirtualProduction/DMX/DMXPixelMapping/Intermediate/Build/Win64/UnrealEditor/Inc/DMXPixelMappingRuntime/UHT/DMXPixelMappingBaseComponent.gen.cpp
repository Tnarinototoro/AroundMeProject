// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/DMXPixelMappingBaseComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXPixelMappingBaseComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingBaseComponent();
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingBaseComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DMXPixelMappingRuntime();
// End Cross Module References
	DEFINE_FUNCTION(UDMXPixelMappingBaseComponent::execRenderAndSendDMX)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RenderAndSendDMX();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXPixelMappingBaseComponent::execRender)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Render();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXPixelMappingBaseComponent::execSendDMX)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendDMX();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXPixelMappingBaseComponent::execResetDMX)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetDMX();
		P_NATIVE_END;
	}
	void UDMXPixelMappingBaseComponent::StaticRegisterNativesUDMXPixelMappingBaseComponent()
	{
		UClass* Class = UDMXPixelMappingBaseComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Render", &UDMXPixelMappingBaseComponent::execRender },
			{ "RenderAndSendDMX", &UDMXPixelMappingBaseComponent::execRenderAndSendDMX },
			{ "ResetDMX", &UDMXPixelMappingBaseComponent::execResetDMX },
			{ "SendDMX", &UDMXPixelMappingBaseComponent::execSendDMX },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDMXPixelMappingBaseComponent_Render_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXPixelMappingBaseComponent_Render_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX|PixelMapping" },
		{ "Comment", "/** Render downsample texture for this component and all children */" },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingBaseComponent.h" },
		{ "ToolTip", "Render downsample texture for this component and all children" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXPixelMappingBaseComponent_Render_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXPixelMappingBaseComponent, nullptr, "Render", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXPixelMappingBaseComponent_Render_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDMXPixelMappingBaseComponent_Render_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UDMXPixelMappingBaseComponent_Render()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXPixelMappingBaseComponent_Render_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXPixelMappingBaseComponent_RenderAndSendDMX_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXPixelMappingBaseComponent_RenderAndSendDMX_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX|PixelMapping" },
		{ "Comment", "/** Render downsample texture and send DMX for this component and all children */" },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingBaseComponent.h" },
		{ "ToolTip", "Render downsample texture and send DMX for this component and all children" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXPixelMappingBaseComponent_RenderAndSendDMX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXPixelMappingBaseComponent, nullptr, "RenderAndSendDMX", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXPixelMappingBaseComponent_RenderAndSendDMX_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDMXPixelMappingBaseComponent_RenderAndSendDMX_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UDMXPixelMappingBaseComponent_RenderAndSendDMX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXPixelMappingBaseComponent_RenderAndSendDMX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXPixelMappingBaseComponent_ResetDMX_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXPixelMappingBaseComponent_ResetDMX_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX|PixelMapping" },
		{ "Comment", "/** Reset all sending DMX channels to 0 for this component and all children */" },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingBaseComponent.h" },
		{ "ToolTip", "Reset all sending DMX channels to 0 for this component and all children" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXPixelMappingBaseComponent_ResetDMX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXPixelMappingBaseComponent, nullptr, "ResetDMX", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXPixelMappingBaseComponent_ResetDMX_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDMXPixelMappingBaseComponent_ResetDMX_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UDMXPixelMappingBaseComponent_ResetDMX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXPixelMappingBaseComponent_ResetDMX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXPixelMappingBaseComponent_SendDMX_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXPixelMappingBaseComponent_SendDMX_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX|PixelMapping" },
		{ "Comment", "/** Send DMX values of this component and all children. */" },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingBaseComponent.h" },
		{ "ToolTip", "Send DMX values of this component and all children." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXPixelMappingBaseComponent_SendDMX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXPixelMappingBaseComponent, nullptr, "SendDMX", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXPixelMappingBaseComponent_SendDMX_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDMXPixelMappingBaseComponent_SendDMX_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UDMXPixelMappingBaseComponent_SendDMX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXPixelMappingBaseComponent_SendDMX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXPixelMappingBaseComponent);
	UClass* Z_Construct_UClass_UDMXPixelMappingBaseComponent_NoRegister()
	{
		return UDMXPixelMappingBaseComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDMXPixelMappingBaseComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExpanded_MetaData[];
#endif
		static void NewProp_bExpanded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExpanded;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Children_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Children_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Children;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Parent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeakParent_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_WeakParent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXPixelMappingBaseComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXPixelMappingRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingBaseComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UDMXPixelMappingBaseComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDMXPixelMappingBaseComponent_Render, "Render" }, // 1932381373
		{ &Z_Construct_UFunction_UDMXPixelMappingBaseComponent_RenderAndSendDMX, "RenderAndSendDMX" }, // 4285602187
		{ &Z_Construct_UFunction_UDMXPixelMappingBaseComponent_ResetDMX, "ResetDMX" }, // 1775477529
		{ &Z_Construct_UFunction_UDMXPixelMappingBaseComponent_SendDMX, "SendDMX" }, // 28508750
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingBaseComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingBaseComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for all DMX Pixel Mapping components. \n */" },
		{ "IncludePath", "Components/DMXPixelMappingBaseComponent.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingBaseComponent.h" },
		{ "ToolTip", "Base class for all DMX Pixel Mapping components." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingBaseComponent_Statics::NewProp_bExpanded_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingBaseComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDMXPixelMappingBaseComponent_Statics::NewProp_bExpanded_SetBit(void* Obj)
	{
		((UDMXPixelMappingBaseComponent*)Obj)->bExpanded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDMXPixelMappingBaseComponent_Statics::NewProp_bExpanded = { "bExpanded", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDMXPixelMappingBaseComponent), &Z_Construct_UClass_UDMXPixelMappingBaseComponent_Statics::NewProp_bExpanded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingBaseComponent_Statics::NewProp_bExpanded_MetaData), Z_Construct_UClass_UDMXPixelMappingBaseComponent_Statics::NewProp_bExpanded_MetaData) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDMXPixelMappingBaseComponent_Statics::NewProp_Children_Inner = { "Children", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDMXPixelMappingBaseComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingBaseComponent_Statics::NewProp_Children_MetaData[] = {
		{ "Comment", "/** Array of children belong to this component */" },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingBaseComponent.h" },
		{ "ToolTip", "Array of children belong to this component" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDMXPixelMappingBaseComponent_Statics::NewProp_Children = { "Children", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXPixelMappingBaseComponent, Children), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingBaseComponent_Statics::NewProp_Children_MetaData), Z_Construct_UClass_UDMXPixelMappingBaseComponent_Statics::NewProp_Children_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingBaseComponent_Statics::NewProp_Parent_MetaData[] = {
		{ "Comment", "/** Parent component */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Leads to entangled references. Use GetParent() or WeakParent instead." },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingBaseComponent.h" },
		{ "ToolTip", "Parent component" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDMXPixelMappingBaseComponent_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0014000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXPixelMappingBaseComponent, Parent_DEPRECATED), Z_Construct_UClass_UDMXPixelMappingBaseComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingBaseComponent_Statics::NewProp_Parent_MetaData), Z_Construct_UClass_UDMXPixelMappingBaseComponent_Statics::NewProp_Parent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingBaseComponent_Statics::NewProp_UserName_MetaData[] = {
		{ "Comment", "/** Custom user name for the component. Should be used if set. */" },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingBaseComponent.h" },
		{ "ToolTip", "Custom user name for the component. Should be used if set." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDMXPixelMappingBaseComponent_Statics::NewProp_UserName = { "UserName", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXPixelMappingBaseComponent, UserName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingBaseComponent_Statics::NewProp_UserName_MetaData), Z_Construct_UClass_UDMXPixelMappingBaseComponent_Statics::NewProp_UserName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingBaseComponent_Statics::NewProp_WeakParent_MetaData[] = {
		{ "Comment", "/** Parent component */" },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingBaseComponent.h" },
		{ "ToolTip", "Parent component" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UDMXPixelMappingBaseComponent_Statics::NewProp_WeakParent = { "WeakParent", nullptr, (EPropertyFlags)0x0044000400000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXPixelMappingBaseComponent, WeakParent), Z_Construct_UClass_UDMXPixelMappingBaseComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingBaseComponent_Statics::NewProp_WeakParent_MetaData), Z_Construct_UClass_UDMXPixelMappingBaseComponent_Statics::NewProp_WeakParent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXPixelMappingBaseComponent_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingBaseComponent_Statics::NewProp_bExpanded,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingBaseComponent_Statics::NewProp_Children_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingBaseComponent_Statics::NewProp_Children,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingBaseComponent_Statics::NewProp_Parent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingBaseComponent_Statics::NewProp_UserName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingBaseComponent_Statics::NewProp_WeakParent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXPixelMappingBaseComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXPixelMappingBaseComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXPixelMappingBaseComponent_Statics::ClassParams = {
		&UDMXPixelMappingBaseComponent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDMXPixelMappingBaseComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingBaseComponent_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingBaseComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDMXPixelMappingBaseComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingBaseComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDMXPixelMappingBaseComponent()
	{
		if (!Z_Registration_Info_UClass_UDMXPixelMappingBaseComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXPixelMappingBaseComponent.OuterSingleton, Z_Construct_UClass_UDMXPixelMappingBaseComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXPixelMappingBaseComponent.OuterSingleton;
	}
	template<> DMXPIXELMAPPINGRUNTIME_API UClass* StaticClass<UDMXPixelMappingBaseComponent>()
	{
		return UDMXPixelMappingBaseComponent::StaticClass();
	}
	UDMXPixelMappingBaseComponent::UDMXPixelMappingBaseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXPixelMappingBaseComponent);
	UDMXPixelMappingBaseComponent::~UDMXPixelMappingBaseComponent() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UDMXPixelMappingBaseComponent)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingBaseComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingBaseComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXPixelMappingBaseComponent, UDMXPixelMappingBaseComponent::StaticClass, TEXT("UDMXPixelMappingBaseComponent"), &Z_Registration_Info_UClass_UDMXPixelMappingBaseComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXPixelMappingBaseComponent), 3756661136U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingBaseComponent_h_3505164933(TEXT("/Script/DMXPixelMappingRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingBaseComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingBaseComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
