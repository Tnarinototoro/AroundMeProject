// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Internal/Param/AnimNextParameterBlockEntry.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNextParameterBlockEntry() {}
// Cross Module References
	ANIMNEXTUNCOOKEDONLY_API UClass* Z_Construct_UClass_UAnimNextParameterBlockEntry();
	ANIMNEXTUNCOOKEDONLY_API UClass* Z_Construct_UClass_UAnimNextParameterBlockEntry_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AnimNextUncookedOnly();
// End Cross Module References
	void UAnimNextParameterBlockEntry::StaticRegisterNativesUAnimNextParameterBlockEntry()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNextParameterBlockEntry);
	UClass* Z_Construct_UClass_UAnimNextParameterBlockEntry_NoRegister()
	{
		return UAnimNextParameterBlockEntry::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNextParameterBlockEntry_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNextParameterBlockEntry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNextUncookedOnly,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterBlockEntry_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextParameterBlockEntry_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Base class that defines an entry in a parameter block, e.g. a parameter binding */" },
		{ "IncludePath", "Param/AnimNextParameterBlockEntry.h" },
		{ "ModuleRelativePath", "Internal/Param/AnimNextParameterBlockEntry.h" },
		{ "ToolTip", "Base class that defines an entry in a parameter block, e.g. a parameter binding" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNextParameterBlockEntry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNextParameterBlockEntry>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNextParameterBlockEntry_Statics::ClassParams = {
		&UAnimNextParameterBlockEntry::StaticClass,
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
		0x000800A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterBlockEntry_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNextParameterBlockEntry_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAnimNextParameterBlockEntry()
	{
		if (!Z_Registration_Info_UClass_UAnimNextParameterBlockEntry.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNextParameterBlockEntry.OuterSingleton, Z_Construct_UClass_UAnimNextParameterBlockEntry_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimNextParameterBlockEntry.OuterSingleton;
	}
	template<> ANIMNEXTUNCOOKEDONLY_API UClass* StaticClass<UAnimNextParameterBlockEntry>()
	{
		return UAnimNextParameterBlockEntry::StaticClass();
	}
	UAnimNextParameterBlockEntry::UAnimNextParameterBlockEntry(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNextParameterBlockEntry);
	UAnimNextParameterBlockEntry::~UAnimNextParameterBlockEntry() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Param_AnimNextParameterBlockEntry_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Param_AnimNextParameterBlockEntry_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNextParameterBlockEntry, UAnimNextParameterBlockEntry::StaticClass, TEXT("UAnimNextParameterBlockEntry"), &Z_Registration_Info_UClass_UAnimNextParameterBlockEntry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNextParameterBlockEntry), 2360778195U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Param_AnimNextParameterBlockEntry_h_2997280706(TEXT("/Script/AnimNextUncookedOnly"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Param_AnimNextParameterBlockEntry_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Param_AnimNextParameterBlockEntry_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
