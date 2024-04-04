// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassCrowdBubble.h"
#include "MassCrowdReplicatedAgent.h"
#include "Net/Serialization/FastArraySerializerImplementation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassCrowdBubble() {}
// Cross Module References
	MASSCROWD_API UClass* Z_Construct_UClass_AMassCrowdClientBubbleInfo();
	MASSCROWD_API UClass* Z_Construct_UClass_AMassCrowdClientBubbleInfo_NoRegister();
	MASSCROWD_API UScriptStruct* Z_Construct_UScriptStruct_FCrowdFastArrayItem();
	MASSCROWD_API UScriptStruct* Z_Construct_UScriptStruct_FMassCrowdClientBubbleSerializer();
	MASSREPLICATION_API UClass* Z_Construct_UClass_AMassClientBubbleInfoBase();
	MASSREPLICATION_API UScriptStruct* Z_Construct_UScriptStruct_FMassClientBubbleSerializerBase();
	UPackage* Z_Construct_UPackage__Script_MassCrowd();
// End Cross Module References

static_assert(std::is_polymorphic<FMassCrowdClientBubbleSerializer>() == std::is_polymorphic<FMassClientBubbleSerializerBase>(), "USTRUCT FMassCrowdClientBubbleSerializer cannot be polymorphic unless super FMassClientBubbleSerializerBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassCrowdClientBubbleSerializer;
class UScriptStruct* FMassCrowdClientBubbleSerializer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassCrowdClientBubbleSerializer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassCrowdClientBubbleSerializer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassCrowdClientBubbleSerializer, (UObject*)Z_Construct_UPackage__Script_MassCrowd(), TEXT("MassCrowdClientBubbleSerializer"));
	}
	return Z_Registration_Info_UScriptStruct_MassCrowdClientBubbleSerializer.OuterSingleton;
}
template<> MASSCROWD_API UScriptStruct* StaticStruct<FMassCrowdClientBubbleSerializer>()
{
	return FMassCrowdClientBubbleSerializer::StaticStruct();
}
#if defined(UE_NET_HAS_IRIS_FASTARRAY_BINDING) && UE_NET_HAS_IRIS_FASTARRAY_BINDING
	UE_NET_IMPLEMENT_FASTARRAY(FMassCrowdClientBubbleSerializer);
#else
	UE_NET_IMPLEMENT_FASTARRAY_STUB(FMassCrowdClientBubbleSerializer);
#endif
	struct Z_Construct_UScriptStruct_FMassCrowdClientBubbleSerializer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Crowd_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Crowd_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Crowd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassCrowdClientBubbleSerializer_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Mass client bubble, there will be one of these per client and it will handle replicating the fast array of Agents between the server and clients */" },
		{ "ModuleRelativePath", "Public/MassCrowdBubble.h" },
		{ "ToolTip", "Mass client bubble, there will be one of these per client and it will handle replicating the fast array of Agents between the server and clients" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassCrowdClientBubbleSerializer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassCrowdClientBubbleSerializer>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassCrowdClientBubbleSerializer_Statics::NewProp_Crowd_Inner = { "Crowd", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCrowdFastArrayItem, METADATA_PARAMS(0, nullptr) }; // 1211495757
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassCrowdClientBubbleSerializer_Statics::NewProp_Crowd_MetaData[] = {
		{ "Comment", "/** Fast Array of Agents for efficient replication. Maintained as a freelist on the server, to keep index consistency as indexes are used as Handles into the Array \n\x09 *  Note array order is not guaranteed between server and client so handles will not be consistent between them, FMassNetworkID will be.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MassCrowdBubble.h" },
		{ "ToolTip", "Fast Array of Agents for efficient replication. Maintained as a freelist on the server, to keep index consistency as indexes are used as Handles into the Array\nNote array order is not guaranteed between server and client so handles will not be consistent between them, FMassNetworkID will be." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMassCrowdClientBubbleSerializer_Statics::NewProp_Crowd = { "Crowd", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassCrowdClientBubbleSerializer, Crowd), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassCrowdClientBubbleSerializer_Statics::NewProp_Crowd_MetaData), Z_Construct_UScriptStruct_FMassCrowdClientBubbleSerializer_Statics::NewProp_Crowd_MetaData) }; // 1211495757
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassCrowdClientBubbleSerializer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassCrowdClientBubbleSerializer_Statics::NewProp_Crowd_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassCrowdClientBubbleSerializer_Statics::NewProp_Crowd,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassCrowdClientBubbleSerializer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassCrowd,
		Z_Construct_UScriptStruct_FMassClientBubbleSerializerBase,
		&NewStructOps,
		"MassCrowdClientBubbleSerializer",
		Z_Construct_UScriptStruct_FMassCrowdClientBubbleSerializer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassCrowdClientBubbleSerializer_Statics::PropPointers),
		sizeof(FMassCrowdClientBubbleSerializer),
		alignof(FMassCrowdClientBubbleSerializer),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassCrowdClientBubbleSerializer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassCrowdClientBubbleSerializer_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassCrowdClientBubbleSerializer_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMassCrowdClientBubbleSerializer()
	{
		if (!Z_Registration_Info_UScriptStruct_MassCrowdClientBubbleSerializer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassCrowdClientBubbleSerializer.InnerSingleton, Z_Construct_UScriptStruct_FMassCrowdClientBubbleSerializer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassCrowdClientBubbleSerializer.InnerSingleton;
	}
	void AMassCrowdClientBubbleInfo::StaticRegisterNativesAMassCrowdClientBubbleInfo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMassCrowdClientBubbleInfo);
	UClass* Z_Construct_UClass_AMassCrowdClientBubbleInfo_NoRegister()
	{
		return AMassCrowdClientBubbleInfo::StaticClass();
	}
	struct Z_Construct_UClass_AMassCrowdClientBubbleInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrowdSerializer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CrowdSerializer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMassCrowdClientBubbleInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMassClientBubbleInfoBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MassCrowd,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMassCrowdClientBubbleInfo_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassCrowdClientBubbleInfo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *  This class will allow us to replicate Mass data based on the fidelity required for each player controller. There is one AMassReplicationActor per PlayerController and \n *  which is also its owner.\n */" },
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MassCrowdBubble.h" },
		{ "ModuleRelativePath", "Public/MassCrowdBubble.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "This class will allow us to replicate Mass data based on the fidelity required for each player controller. There is one AMassReplicationActor per PlayerController and\nwhich is also its owner." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassCrowdClientBubbleInfo_Statics::NewProp_CrowdSerializer_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassCrowdBubble.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMassCrowdClientBubbleInfo_Statics::NewProp_CrowdSerializer = { "CrowdSerializer", nullptr, (EPropertyFlags)0x0020080000002020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassCrowdClientBubbleInfo, CrowdSerializer), Z_Construct_UScriptStruct_FMassCrowdClientBubbleSerializer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassCrowdClientBubbleInfo_Statics::NewProp_CrowdSerializer_MetaData), Z_Construct_UClass_AMassCrowdClientBubbleInfo_Statics::NewProp_CrowdSerializer_MetaData) }; // 3006294510
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMassCrowdClientBubbleInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassCrowdClientBubbleInfo_Statics::NewProp_CrowdSerializer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMassCrowdClientBubbleInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMassCrowdClientBubbleInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMassCrowdClientBubbleInfo_Statics::ClassParams = {
		&AMassCrowdClientBubbleInfo::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMassCrowdClientBubbleInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMassCrowdClientBubbleInfo_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassCrowdClientBubbleInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_AMassCrowdClientBubbleInfo_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMassCrowdClientBubbleInfo_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMassCrowdClientBubbleInfo()
	{
		if (!Z_Registration_Info_UClass_AMassCrowdClientBubbleInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMassCrowdClientBubbleInfo.OuterSingleton, Z_Construct_UClass_AMassCrowdClientBubbleInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMassCrowdClientBubbleInfo.OuterSingleton;
	}
	template<> MASSCROWD_API UClass* StaticClass<AMassCrowdClientBubbleInfo>()
	{
		return AMassCrowdClientBubbleInfo::StaticClass();
	}

	void AMassCrowdClientBubbleInfo::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_CrowdSerializer(TEXT("CrowdSerializer"));

		const bool bIsValid = true
			&& Name_CrowdSerializer == ClassReps[(int32)ENetFields_Private::CrowdSerializer].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AMassCrowdClientBubbleInfo"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMassCrowdClientBubbleInfo);
	AMassCrowdClientBubbleInfo::~AMassCrowdClientBubbleInfo() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdBubble_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdBubble_h_Statics::ScriptStructInfo[] = {
		{ FMassCrowdClientBubbleSerializer::StaticStruct, Z_Construct_UScriptStruct_FMassCrowdClientBubbleSerializer_Statics::NewStructOps, TEXT("MassCrowdClientBubbleSerializer"), &Z_Registration_Info_UScriptStruct_MassCrowdClientBubbleSerializer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassCrowdClientBubbleSerializer), 3006294510U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdBubble_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMassCrowdClientBubbleInfo, AMassCrowdClientBubbleInfo::StaticClass, TEXT("AMassCrowdClientBubbleInfo"), &Z_Registration_Info_UClass_AMassCrowdClientBubbleInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMassCrowdClientBubbleInfo), 3762465469U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdBubble_h_1864822767(TEXT("/Script/MassCrowd"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdBubble_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdBubble_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdBubble_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdBubble_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
