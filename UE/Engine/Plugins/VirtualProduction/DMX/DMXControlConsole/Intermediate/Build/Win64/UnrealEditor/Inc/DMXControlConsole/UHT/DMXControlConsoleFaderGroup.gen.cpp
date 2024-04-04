// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/DMXControlConsoleFaderGroup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXControlConsoleFaderGroup() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	DMXCONTROLCONSOLE_API UClass* Z_Construct_UClass_UDMXControlConsoleFaderGroup();
	DMXCONTROLCONSOLE_API UClass* Z_Construct_UClass_UDMXControlConsoleFaderGroup_NoRegister();
	DMXCONTROLCONSOLE_API UClass* Z_Construct_UClass_UDMXControlConsoleFaderGroupElement_NoRegister();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXEntityFixturePatch_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DMXControlConsole();
// End Cross Module References
	void UDMXControlConsoleFaderGroup::StaticRegisterNativesUDMXControlConsoleFaderGroup()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXControlConsoleFaderGroup);
	UClass* Z_Construct_UClass_UDMXControlConsoleFaderGroup_NoRegister()
	{
		return UDMXControlConsoleFaderGroup::StaticClass();
	}
	struct Z_Construct_UClass_UDMXControlConsoleFaderGroup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilterString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilterString;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FaderGroupName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FaderGroupName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoftFixturePatchPtr_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SoftFixturePatchPtr;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedWeakFixturePatch_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_CachedWeakFixturePatch;
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_Elements_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Elements_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Elements;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsMuted_MetaData[];
#endif
		static void NewProp_bIsMuted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMuted;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EditorColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsExpanded_MetaData[];
#endif
		static void NewProp_bIsExpanded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsExpanded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsActive_MetaData[];
#endif
		static void NewProp_bIsActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsActive;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXControlConsoleFaderGroup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXControlConsole,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleFaderGroup_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXControlConsoleFaderGroup_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A Group of Faders in the DMX Control Console */" },
		{ "IncludePath", "DMXControlConsoleFaderGroup.h" },
		{ "ModuleRelativePath", "Private/DMXControlConsoleFaderGroup.h" },
		{ "ToolTip", "A Group of Faders in the DMX Control Console" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXControlConsoleFaderGroup_Statics::NewProp_FilterString_MetaData[] = {
		{ "Comment", "/** Last string from Editor filtering */" },
		{ "ModuleRelativePath", "Private/DMXControlConsoleFaderGroup.h" },
		{ "ToolTip", "Last string from Editor filtering" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDMXControlConsoleFaderGroup_Statics::NewProp_FilterString = { "FilterString", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXControlConsoleFaderGroup, FilterString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleFaderGroup_Statics::NewProp_FilterString_MetaData), Z_Construct_UClass_UDMXControlConsoleFaderGroup_Statics::NewProp_FilterString_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXControlConsoleFaderGroup_Statics::NewProp_FaderGroupName_MetaData[] = {
		{ "Category", "DMX Fader Group" },
		{ "Comment", "/** Name identifier of this Fader Group */" },
		{ "ModuleRelativePath", "Private/DMXControlConsoleFaderGroup.h" },
		{ "ToolTip", "Name identifier of this Fader Group" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDMXControlConsoleFaderGroup_Statics::NewProp_FaderGroupName = { "FaderGroupName", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXControlConsoleFaderGroup, FaderGroupName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleFaderGroup_Statics::NewProp_FaderGroupName_MetaData), Z_Construct_UClass_UDMXControlConsoleFaderGroup_Statics::NewProp_FaderGroupName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXControlConsoleFaderGroup_Statics::NewProp_SoftFixturePatchPtr_MetaData[] = {
		{ "Comment", "/** Fixture Patch this Fader Group is based on */" },
		{ "ModuleRelativePath", "Private/DMXControlConsoleFaderGroup.h" },
		{ "ToolTip", "Fixture Patch this Fader Group is based on" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UDMXControlConsoleFaderGroup_Statics::NewProp_SoftFixturePatchPtr = { "SoftFixturePatchPtr", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXControlConsoleFaderGroup, SoftFixturePatchPtr), Z_Construct_UClass_UDMXEntityFixturePatch_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleFaderGroup_Statics::NewProp_SoftFixturePatchPtr_MetaData), Z_Construct_UClass_UDMXControlConsoleFaderGroup_Statics::NewProp_SoftFixturePatchPtr_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXControlConsoleFaderGroup_Statics::NewProp_CachedWeakFixturePatch_MetaData[] = {
		{ "Comment", "/** Cached fixture patch for faster access */" },
		{ "ModuleRelativePath", "Private/DMXControlConsoleFaderGroup.h" },
		{ "ToolTip", "Cached fixture patch for faster access" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UDMXControlConsoleFaderGroup_Statics::NewProp_CachedWeakFixturePatch = { "CachedWeakFixturePatch", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXControlConsoleFaderGroup, CachedWeakFixturePatch), Z_Construct_UClass_UDMXEntityFixturePatch_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleFaderGroup_Statics::NewProp_CachedWeakFixturePatch_MetaData), Z_Construct_UClass_UDMXControlConsoleFaderGroup_Statics::NewProp_CachedWeakFixturePatch_MetaData) };
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UDMXControlConsoleFaderGroup_Statics::NewProp_Elements_Inner = { "Elements", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDMXControlConsoleFaderGroupElement_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXControlConsoleFaderGroup_Statics::NewProp_Elements_MetaData[] = {
		{ "Comment", "/** Elements in this Fader Group */" },
		{ "ModuleRelativePath", "Private/DMXControlConsoleFaderGroup.h" },
		{ "ToolTip", "Elements in this Fader Group" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDMXControlConsoleFaderGroup_Statics::NewProp_Elements = { "Elements", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXControlConsoleFaderGroup, Elements), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleFaderGroup_Statics::NewProp_Elements_MetaData), Z_Construct_UClass_UDMXControlConsoleFaderGroup_Statics::NewProp_Elements_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXControlConsoleFaderGroup_Statics::NewProp_bIsMuted_MetaData[] = {
		{ "Category", "DMX Fader Group" },
		{ "Comment", "/** If true, the Fader Group doesn't send DMX */" },
		{ "ModuleRelativePath", "Private/DMXControlConsoleFaderGroup.h" },
		{ "ToolTip", "If true, the Fader Group doesn't send DMX" },
	};
#endif
	void Z_Construct_UClass_UDMXControlConsoleFaderGroup_Statics::NewProp_bIsMuted_SetBit(void* Obj)
	{
		((UDMXControlConsoleFaderGroup*)Obj)->bIsMuted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDMXControlConsoleFaderGroup_Statics::NewProp_bIsMuted = { "bIsMuted", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDMXControlConsoleFaderGroup), &Z_Construct_UClass_UDMXControlConsoleFaderGroup_Statics::NewProp_bIsMuted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleFaderGroup_Statics::NewProp_bIsMuted_MetaData), Z_Construct_UClass_UDMXControlConsoleFaderGroup_Statics::NewProp_bIsMuted_MetaData) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXControlConsoleFaderGroup_Statics::NewProp_EditorColor_MetaData[] = {
		{ "Category", "DMX Fader Group" },
		{ "Comment", "/** Color for Fader Group representation on the Editor */" },
		{ "ModuleRelativePath", "Private/DMXControlConsoleFaderGroup.h" },
		{ "ToolTip", "Color for Fader Group representation on the Editor" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXControlConsoleFaderGroup_Statics::NewProp_EditorColor = { "EditorColor", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXControlConsoleFaderGroup, EditorColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleFaderGroup_Statics::NewProp_EditorColor_MetaData), Z_Construct_UClass_UDMXControlConsoleFaderGroup_Statics::NewProp_EditorColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXControlConsoleFaderGroup_Statics::NewProp_bIsExpanded_MetaData[] = {
		{ "Comment", "/** Fader Group expansion state saved from the Editor */" },
		{ "ModuleRelativePath", "Private/DMXControlConsoleFaderGroup.h" },
		{ "ToolTip", "Fader Group expansion state saved from the Editor" },
	};
#endif
	void Z_Construct_UClass_UDMXControlConsoleFaderGroup_Statics::NewProp_bIsExpanded_SetBit(void* Obj)
	{
		((UDMXControlConsoleFaderGroup*)Obj)->bIsExpanded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDMXControlConsoleFaderGroup_Statics::NewProp_bIsExpanded = { "bIsExpanded", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDMXControlConsoleFaderGroup), &Z_Construct_UClass_UDMXControlConsoleFaderGroup_Statics::NewProp_bIsExpanded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleFaderGroup_Statics::NewProp_bIsExpanded_MetaData), Z_Construct_UClass_UDMXControlConsoleFaderGroup_Statics::NewProp_bIsExpanded_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXControlConsoleFaderGroup_Statics::NewProp_bIsActive_MetaData[] = {
		{ "Comment", "/** In Editor activity state of the Fader Group */" },
		{ "ModuleRelativePath", "Private/DMXControlConsoleFaderGroup.h" },
		{ "ToolTip", "In Editor activity state of the Fader Group" },
	};
#endif
	void Z_Construct_UClass_UDMXControlConsoleFaderGroup_Statics::NewProp_bIsActive_SetBit(void* Obj)
	{
		((UDMXControlConsoleFaderGroup*)Obj)->bIsActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDMXControlConsoleFaderGroup_Statics::NewProp_bIsActive = { "bIsActive", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDMXControlConsoleFaderGroup), &Z_Construct_UClass_UDMXControlConsoleFaderGroup_Statics::NewProp_bIsActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleFaderGroup_Statics::NewProp_bIsActive_MetaData), Z_Construct_UClass_UDMXControlConsoleFaderGroup_Statics::NewProp_bIsActive_MetaData) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXControlConsoleFaderGroup_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXControlConsoleFaderGroup_Statics::NewProp_FilterString,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXControlConsoleFaderGroup_Statics::NewProp_FaderGroupName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXControlConsoleFaderGroup_Statics::NewProp_SoftFixturePatchPtr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXControlConsoleFaderGroup_Statics::NewProp_CachedWeakFixturePatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXControlConsoleFaderGroup_Statics::NewProp_Elements_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXControlConsoleFaderGroup_Statics::NewProp_Elements,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXControlConsoleFaderGroup_Statics::NewProp_bIsMuted,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXControlConsoleFaderGroup_Statics::NewProp_EditorColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXControlConsoleFaderGroup_Statics::NewProp_bIsExpanded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXControlConsoleFaderGroup_Statics::NewProp_bIsActive,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXControlConsoleFaderGroup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXControlConsoleFaderGroup>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXControlConsoleFaderGroup_Statics::ClassParams = {
		&UDMXControlConsoleFaderGroup::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDMXControlConsoleFaderGroup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleFaderGroup_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleFaderGroup_Statics::Class_MetaDataParams), Z_Construct_UClass_UDMXControlConsoleFaderGroup_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleFaderGroup_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDMXControlConsoleFaderGroup()
	{
		if (!Z_Registration_Info_UClass_UDMXControlConsoleFaderGroup.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXControlConsoleFaderGroup.OuterSingleton, Z_Construct_UClass_UDMXControlConsoleFaderGroup_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXControlConsoleFaderGroup.OuterSingleton;
	}
	template<> DMXCONTROLCONSOLE_API UClass* StaticClass<UDMXControlConsoleFaderGroup>()
	{
		return UDMXControlConsoleFaderGroup::StaticClass();
	}
	UDMXControlConsoleFaderGroup::UDMXControlConsoleFaderGroup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXControlConsoleFaderGroup);
	UDMXControlConsoleFaderGroup::~UDMXControlConsoleFaderGroup() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Private_DMXControlConsoleFaderGroup_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Private_DMXControlConsoleFaderGroup_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXControlConsoleFaderGroup, UDMXControlConsoleFaderGroup::StaticClass, TEXT("UDMXControlConsoleFaderGroup"), &Z_Registration_Info_UClass_UDMXControlConsoleFaderGroup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXControlConsoleFaderGroup), 3513244081U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Private_DMXControlConsoleFaderGroup_h_3864254908(TEXT("/Script/DMXControlConsole"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Private_DMXControlConsoleFaderGroup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Private_DMXControlConsoleFaderGroup_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
