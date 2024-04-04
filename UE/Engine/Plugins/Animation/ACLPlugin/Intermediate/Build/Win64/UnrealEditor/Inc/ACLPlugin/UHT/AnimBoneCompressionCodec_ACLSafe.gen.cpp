// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../ACLPlugin/Classes/AnimBoneCompressionCodec_ACLSafe.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimBoneCompressionCodec_ACLSafe() {}
// Cross Module References
	ACLPLUGIN_API UClass* Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase();
	ACLPLUGIN_API UClass* Z_Construct_UClass_UAnimBoneCompressionCodec_ACLSafe();
	ACLPLUGIN_API UClass* Z_Construct_UClass_UAnimBoneCompressionCodec_ACLSafe_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ACLPlugin();
// End Cross Module References
	void UAnimBoneCompressionCodec_ACLSafe::StaticRegisterNativesUAnimBoneCompressionCodec_ACLSafe()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimBoneCompressionCodec_ACLSafe);
	UClass* Z_Construct_UClass_UAnimBoneCompressionCodec_ACLSafe_NoRegister()
	{
		return UAnimBoneCompressionCodec_ACLSafe::StaticClass();
	}
	struct Z_Construct_UClass_UAnimBoneCompressionCodec_ACLSafe_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimBoneCompressionCodec_ACLSafe_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ACLPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionCodec_ACLSafe_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBoneCompressionCodec_ACLSafe_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Uses the open source Animation Compression Library with the safest and least destructive settings suitable when animations must be preserved with near raw fidelity. */" },
		{ "DisplayName", "Anim Compress ACL Safe" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimBoneCompressionCodec_ACLSafe.h" },
		{ "ModuleRelativePath", "Classes/AnimBoneCompressionCodec_ACLSafe.h" },
		{ "ToolTip", "Uses the open source Animation Compression Library with the safest and least destructive settings suitable when animations must be preserved with near raw fidelity." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimBoneCompressionCodec_ACLSafe_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimBoneCompressionCodec_ACLSafe>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimBoneCompressionCodec_ACLSafe_Statics::ClassParams = {
		&UAnimBoneCompressionCodec_ACLSafe::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000810A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionCodec_ACLSafe_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimBoneCompressionCodec_ACLSafe_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAnimBoneCompressionCodec_ACLSafe()
	{
		if (!Z_Registration_Info_UClass_UAnimBoneCompressionCodec_ACLSafe.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimBoneCompressionCodec_ACLSafe.OuterSingleton, Z_Construct_UClass_UAnimBoneCompressionCodec_ACLSafe_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimBoneCompressionCodec_ACLSafe.OuterSingleton;
	}
	template<> ACLPLUGIN_API UClass* StaticClass<UAnimBoneCompressionCodec_ACLSafe>()
	{
		return UAnimBoneCompressionCodec_ACLSafe::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimBoneCompressionCodec_ACLSafe);
	UAnimBoneCompressionCodec_ACLSafe::~UAnimBoneCompressionCodec_ACLSafe() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPlugin_Classes_AnimBoneCompressionCodec_ACLSafe_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPlugin_Classes_AnimBoneCompressionCodec_ACLSafe_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimBoneCompressionCodec_ACLSafe, UAnimBoneCompressionCodec_ACLSafe::StaticClass, TEXT("UAnimBoneCompressionCodec_ACLSafe"), &Z_Registration_Info_UClass_UAnimBoneCompressionCodec_ACLSafe, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimBoneCompressionCodec_ACLSafe), 1749841243U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPlugin_Classes_AnimBoneCompressionCodec_ACLSafe_h_116728768(TEXT("/Script/ACLPlugin"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPlugin_Classes_AnimBoneCompressionCodec_ACLSafe_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPlugin_Classes_AnimBoneCompressionCodec_ACLSafe_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
