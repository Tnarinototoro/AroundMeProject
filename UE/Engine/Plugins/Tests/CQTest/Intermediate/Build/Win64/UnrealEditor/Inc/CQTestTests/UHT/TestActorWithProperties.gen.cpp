// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestActorWithProperties.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestActorWithProperties() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	CQTESTTESTS_API UClass* Z_Construct_UClass_ATestActorWithProperties();
	CQTESTTESTS_API UClass* Z_Construct_UClass_ATestActorWithProperties_NoRegister();
	CQTESTTESTS_API UEnum* Z_Construct_UEnum_CQTestTests_ETestInt16();
	CQTESTTESTS_API UEnum* Z_Construct_UEnum_CQTestTests_ETestInt32();
	CQTESTTESTS_API UEnum* Z_Construct_UEnum_CQTestTests_ETestInt64();
	CQTESTTESTS_API UEnum* Z_Construct_UEnum_CQTestTests_ETestInt8();
	CQTESTTESTS_API UEnum* Z_Construct_UEnum_CQTestTests_ETestUint16();
	CQTESTTESTS_API UEnum* Z_Construct_UEnum_CQTestTests_ETestUint32();
	CQTESTTESTS_API UEnum* Z_Construct_UEnum_CQTestTests_ETestUint64();
	CQTESTTESTS_API UEnum* Z_Construct_UEnum_CQTestTests_ETestUint8();
	CQTESTTESTS_API UScriptStruct* Z_Construct_UScriptStruct_FDerivedTestStruct();
	CQTESTTESTS_API UScriptStruct* Z_Construct_UScriptStruct_FOtherTestStruct();
	CQTESTTESTS_API UScriptStruct* Z_Construct_UScriptStruct_FTestStructWithProperties();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CQTestTests();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TestStructWithProperties;
class UScriptStruct* FTestStructWithProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TestStructWithProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TestStructWithProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestStructWithProperties, (UObject*)Z_Construct_UPackage__Script_CQTestTests(), TEXT("TestStructWithProperties"));
	}
	return Z_Registration_Info_UScriptStruct_TestStructWithProperties.OuterSingleton;
}
template<> CQTESTTESTS_API UScriptStruct* StaticStruct<FTestStructWithProperties>()
{
	return FTestStructWithProperties::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTestStructWithProperties_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StructInt32Property_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StructInt32Property;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StructArrayProperty_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StructArrayProperty_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StructArrayProperty;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestStructWithProperties_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// -----------------------------------------------------------------------------\n" },
		{ "ModuleRelativePath", "Private/TestActorWithProperties.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTestStructWithProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestStructWithProperties>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestStructWithProperties_Statics::NewProp_StructInt32Property_MetaData[] = {
		{ "ModuleRelativePath", "Private/TestActorWithProperties.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTestStructWithProperties_Statics::NewProp_StructInt32Property = { "StructInt32Property", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestStructWithProperties, StructInt32Property), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestStructWithProperties_Statics::NewProp_StructInt32Property_MetaData), Z_Construct_UScriptStruct_FTestStructWithProperties_Statics::NewProp_StructInt32Property_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTestStructWithProperties_Statics::NewProp_StructArrayProperty_Inner = { "StructArrayProperty", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestStructWithProperties_Statics::NewProp_StructArrayProperty_MetaData[] = {
		{ "ModuleRelativePath", "Private/TestActorWithProperties.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTestStructWithProperties_Statics::NewProp_StructArrayProperty = { "StructArrayProperty", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestStructWithProperties, StructArrayProperty), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestStructWithProperties_Statics::NewProp_StructArrayProperty_MetaData), Z_Construct_UScriptStruct_FTestStructWithProperties_Statics::NewProp_StructArrayProperty_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTestStructWithProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestStructWithProperties_Statics::NewProp_StructInt32Property,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestStructWithProperties_Statics::NewProp_StructArrayProperty_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestStructWithProperties_Statics::NewProp_StructArrayProperty,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestStructWithProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CQTestTests,
		nullptr,
		&NewStructOps,
		"TestStructWithProperties",
		Z_Construct_UScriptStruct_FTestStructWithProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestStructWithProperties_Statics::PropPointers),
		sizeof(FTestStructWithProperties),
		alignof(FTestStructWithProperties),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestStructWithProperties_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTestStructWithProperties_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestStructWithProperties_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTestStructWithProperties()
	{
		if (!Z_Registration_Info_UScriptStruct_TestStructWithProperties.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TestStructWithProperties.InnerSingleton, Z_Construct_UScriptStruct_FTestStructWithProperties_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TestStructWithProperties.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDerivedTestStruct>() == std::is_polymorphic<FTestStructWithProperties>(), "USTRUCT FDerivedTestStruct cannot be polymorphic unless super FTestStructWithProperties is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DerivedTestStruct;
class UScriptStruct* FDerivedTestStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DerivedTestStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DerivedTestStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDerivedTestStruct, (UObject*)Z_Construct_UPackage__Script_CQTestTests(), TEXT("DerivedTestStruct"));
	}
	return Z_Registration_Info_UScriptStruct_DerivedTestStruct.OuterSingleton;
}
template<> CQTESTTESTS_API UScriptStruct* StaticStruct<FDerivedTestStruct>()
{
	return FDerivedTestStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDerivedTestStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDerivedTestStruct_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/TestActorWithProperties.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDerivedTestStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDerivedTestStruct>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDerivedTestStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CQTestTests,
		Z_Construct_UScriptStruct_FTestStructWithProperties,
		&NewStructOps,
		"DerivedTestStruct",
		nullptr,
		0,
		sizeof(FDerivedTestStruct),
		alignof(FDerivedTestStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDerivedTestStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDerivedTestStruct_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDerivedTestStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_DerivedTestStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DerivedTestStruct.InnerSingleton, Z_Construct_UScriptStruct_FDerivedTestStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DerivedTestStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OtherTestStruct;
class UScriptStruct* FOtherTestStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OtherTestStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OtherTestStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOtherTestStruct, (UObject*)Z_Construct_UPackage__Script_CQTestTests(), TEXT("OtherTestStruct"));
	}
	return Z_Registration_Info_UScriptStruct_OtherTestStruct.OuterSingleton;
}
template<> CQTESTTESTS_API UScriptStruct* StaticStruct<FOtherTestStruct>()
{
	return FOtherTestStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOtherTestStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StructFloatProperty_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StructFloatProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StructInt64Property_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_StructInt64Property;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StructMapProperty_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StructMapProperty_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StructMapProperty_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_StructMapProperty;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOtherTestStruct_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/TestActorWithProperties.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOtherTestStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOtherTestStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOtherTestStruct_Statics::NewProp_StructFloatProperty_MetaData[] = {
		{ "ModuleRelativePath", "Private/TestActorWithProperties.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOtherTestStruct_Statics::NewProp_StructFloatProperty = { "StructFloatProperty", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOtherTestStruct, StructFloatProperty), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOtherTestStruct_Statics::NewProp_StructFloatProperty_MetaData), Z_Construct_UScriptStruct_FOtherTestStruct_Statics::NewProp_StructFloatProperty_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOtherTestStruct_Statics::NewProp_StructInt64Property_MetaData[] = {
		{ "ModuleRelativePath", "Private/TestActorWithProperties.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FOtherTestStruct_Statics::NewProp_StructInt64Property = { "StructInt64Property", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOtherTestStruct, StructInt64Property), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOtherTestStruct_Statics::NewProp_StructInt64Property_MetaData), Z_Construct_UScriptStruct_FOtherTestStruct_Statics::NewProp_StructInt64Property_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOtherTestStruct_Statics::NewProp_StructMapProperty_ValueProp = { "StructMapProperty", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOtherTestStruct_Statics::NewProp_StructMapProperty_Key_KeyProp = { "StructMapProperty_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOtherTestStruct_Statics::NewProp_StructMapProperty_MetaData[] = {
		{ "ModuleRelativePath", "Private/TestActorWithProperties.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FOtherTestStruct_Statics::NewProp_StructMapProperty = { "StructMapProperty", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOtherTestStruct, StructMapProperty), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOtherTestStruct_Statics::NewProp_StructMapProperty_MetaData), Z_Construct_UScriptStruct_FOtherTestStruct_Statics::NewProp_StructMapProperty_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOtherTestStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOtherTestStruct_Statics::NewProp_StructFloatProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOtherTestStruct_Statics::NewProp_StructInt64Property,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOtherTestStruct_Statics::NewProp_StructMapProperty_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOtherTestStruct_Statics::NewProp_StructMapProperty_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOtherTestStruct_Statics::NewProp_StructMapProperty,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOtherTestStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CQTestTests,
		nullptr,
		&NewStructOps,
		"OtherTestStruct",
		Z_Construct_UScriptStruct_FOtherTestStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOtherTestStruct_Statics::PropPointers),
		sizeof(FOtherTestStruct),
		alignof(FOtherTestStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOtherTestStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOtherTestStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOtherTestStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOtherTestStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_OtherTestStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OtherTestStruct.InnerSingleton, Z_Construct_UScriptStruct_FOtherTestStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OtherTestStruct.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETestUint8;
	static UEnum* ETestUint8_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETestUint8.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETestUint8.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CQTestTests_ETestUint8, (UObject*)Z_Construct_UPackage__Script_CQTestTests(), TEXT("ETestUint8"));
		}
		return Z_Registration_Info_UEnum_ETestUint8.OuterSingleton;
	}
	template<> CQTESTTESTS_API UEnum* StaticEnum<ETestUint8>()
	{
		return ETestUint8_StaticEnum();
	}
	struct Z_Construct_UEnum_CQTestTests_ETestUint8_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CQTestTests_ETestUint8_Statics::Enumerators[] = {
		{ "ETestUint8::enumone", (int64)ETestUint8::enumone },
		{ "ETestUint8::enumtwo", (int64)ETestUint8::enumtwo },
		{ "ETestUint8::enumthree", (int64)ETestUint8::enumthree },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CQTestTests_ETestUint8_Statics::Enum_MetaDataParams[] = {
		{ "enumone.Name", "ETestUint8::enumone" },
		{ "enumthree.Name", "ETestUint8::enumthree" },
		{ "enumtwo.Name", "ETestUint8::enumtwo" },
		{ "ModuleRelativePath", "Private/TestActorWithProperties.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CQTestTests_ETestUint8_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CQTestTests,
		nullptr,
		"ETestUint8",
		"ETestUint8",
		Z_Construct_UEnum_CQTestTests_ETestUint8_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CQTestTests_ETestUint8_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CQTestTests_ETestUint8_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CQTestTests_ETestUint8_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_CQTestTests_ETestUint8()
	{
		if (!Z_Registration_Info_UEnum_ETestUint8.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETestUint8.InnerSingleton, Z_Construct_UEnum_CQTestTests_ETestUint8_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETestUint8.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETestInt8;
	static UEnum* ETestInt8_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETestInt8.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETestInt8.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CQTestTests_ETestInt8, (UObject*)Z_Construct_UPackage__Script_CQTestTests(), TEXT("ETestInt8"));
		}
		return Z_Registration_Info_UEnum_ETestInt8.OuterSingleton;
	}
	template<> CQTESTTESTS_API UEnum* StaticEnum<ETestInt8>()
	{
		return ETestInt8_StaticEnum();
	}
	struct Z_Construct_UEnum_CQTestTests_ETestInt8_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CQTestTests_ETestInt8_Statics::Enumerators[] = {
		{ "ETestInt8::enumone", (int64)ETestInt8::enumone },
		{ "ETestInt8::enumtwo", (int64)ETestInt8::enumtwo },
		{ "ETestInt8::enumthree", (int64)ETestInt8::enumthree },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CQTestTests_ETestInt8_Statics::Enum_MetaDataParams[] = {
		{ "enumone.Name", "ETestInt8::enumone" },
		{ "enumthree.Name", "ETestInt8::enumthree" },
		{ "enumtwo.Name", "ETestInt8::enumtwo" },
		{ "ModuleRelativePath", "Private/TestActorWithProperties.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CQTestTests_ETestInt8_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CQTestTests,
		nullptr,
		"ETestInt8",
		"ETestInt8",
		Z_Construct_UEnum_CQTestTests_ETestInt8_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CQTestTests_ETestInt8_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CQTestTests_ETestInt8_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CQTestTests_ETestInt8_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_CQTestTests_ETestInt8()
	{
		if (!Z_Registration_Info_UEnum_ETestInt8.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETestInt8.InnerSingleton, Z_Construct_UEnum_CQTestTests_ETestInt8_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETestInt8.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETestInt16;
	static UEnum* ETestInt16_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETestInt16.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETestInt16.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CQTestTests_ETestInt16, (UObject*)Z_Construct_UPackage__Script_CQTestTests(), TEXT("ETestInt16"));
		}
		return Z_Registration_Info_UEnum_ETestInt16.OuterSingleton;
	}
	template<> CQTESTTESTS_API UEnum* StaticEnum<ETestInt16>()
	{
		return ETestInt16_StaticEnum();
	}
	struct Z_Construct_UEnum_CQTestTests_ETestInt16_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CQTestTests_ETestInt16_Statics::Enumerators[] = {
		{ "ETestInt16::enumone", (int64)ETestInt16::enumone },
		{ "ETestInt16::enumtwo", (int64)ETestInt16::enumtwo },
		{ "ETestInt16::enumthree", (int64)ETestInt16::enumthree },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CQTestTests_ETestInt16_Statics::Enum_MetaDataParams[] = {
		{ "enumone.Name", "ETestInt16::enumone" },
		{ "enumthree.Name", "ETestInt16::enumthree" },
		{ "enumtwo.Name", "ETestInt16::enumtwo" },
		{ "ModuleRelativePath", "Private/TestActorWithProperties.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CQTestTests_ETestInt16_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CQTestTests,
		nullptr,
		"ETestInt16",
		"ETestInt16",
		Z_Construct_UEnum_CQTestTests_ETestInt16_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CQTestTests_ETestInt16_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CQTestTests_ETestInt16_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CQTestTests_ETestInt16_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_CQTestTests_ETestInt16()
	{
		if (!Z_Registration_Info_UEnum_ETestInt16.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETestInt16.InnerSingleton, Z_Construct_UEnum_CQTestTests_ETestInt16_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETestInt16.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETestUint16;
	static UEnum* ETestUint16_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETestUint16.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETestUint16.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CQTestTests_ETestUint16, (UObject*)Z_Construct_UPackage__Script_CQTestTests(), TEXT("ETestUint16"));
		}
		return Z_Registration_Info_UEnum_ETestUint16.OuterSingleton;
	}
	template<> CQTESTTESTS_API UEnum* StaticEnum<ETestUint16>()
	{
		return ETestUint16_StaticEnum();
	}
	struct Z_Construct_UEnum_CQTestTests_ETestUint16_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CQTestTests_ETestUint16_Statics::Enumerators[] = {
		{ "ETestUint16::enumone", (int64)ETestUint16::enumone },
		{ "ETestUint16::enumtwo", (int64)ETestUint16::enumtwo },
		{ "ETestUint16::enumthree", (int64)ETestUint16::enumthree },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CQTestTests_ETestUint16_Statics::Enum_MetaDataParams[] = {
		{ "enumone.Name", "ETestUint16::enumone" },
		{ "enumthree.Name", "ETestUint16::enumthree" },
		{ "enumtwo.Name", "ETestUint16::enumtwo" },
		{ "ModuleRelativePath", "Private/TestActorWithProperties.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CQTestTests_ETestUint16_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CQTestTests,
		nullptr,
		"ETestUint16",
		"ETestUint16",
		Z_Construct_UEnum_CQTestTests_ETestUint16_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CQTestTests_ETestUint16_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CQTestTests_ETestUint16_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CQTestTests_ETestUint16_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_CQTestTests_ETestUint16()
	{
		if (!Z_Registration_Info_UEnum_ETestUint16.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETestUint16.InnerSingleton, Z_Construct_UEnum_CQTestTests_ETestUint16_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETestUint16.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETestInt32;
	static UEnum* ETestInt32_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETestInt32.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETestInt32.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CQTestTests_ETestInt32, (UObject*)Z_Construct_UPackage__Script_CQTestTests(), TEXT("ETestInt32"));
		}
		return Z_Registration_Info_UEnum_ETestInt32.OuterSingleton;
	}
	template<> CQTESTTESTS_API UEnum* StaticEnum<ETestInt32>()
	{
		return ETestInt32_StaticEnum();
	}
	struct Z_Construct_UEnum_CQTestTests_ETestInt32_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CQTestTests_ETestInt32_Statics::Enumerators[] = {
		{ "ETestInt32::enumone", (int64)ETestInt32::enumone },
		{ "ETestInt32::enumtwo", (int64)ETestInt32::enumtwo },
		{ "ETestInt32::enumthree", (int64)ETestInt32::enumthree },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CQTestTests_ETestInt32_Statics::Enum_MetaDataParams[] = {
		{ "enumone.Name", "ETestInt32::enumone" },
		{ "enumthree.Name", "ETestInt32::enumthree" },
		{ "enumtwo.Name", "ETestInt32::enumtwo" },
		{ "ModuleRelativePath", "Private/TestActorWithProperties.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CQTestTests_ETestInt32_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CQTestTests,
		nullptr,
		"ETestInt32",
		"ETestInt32",
		Z_Construct_UEnum_CQTestTests_ETestInt32_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CQTestTests_ETestInt32_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CQTestTests_ETestInt32_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CQTestTests_ETestInt32_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_CQTestTests_ETestInt32()
	{
		if (!Z_Registration_Info_UEnum_ETestInt32.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETestInt32.InnerSingleton, Z_Construct_UEnum_CQTestTests_ETestInt32_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETestInt32.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETestUint32;
	static UEnum* ETestUint32_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETestUint32.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETestUint32.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CQTestTests_ETestUint32, (UObject*)Z_Construct_UPackage__Script_CQTestTests(), TEXT("ETestUint32"));
		}
		return Z_Registration_Info_UEnum_ETestUint32.OuterSingleton;
	}
	template<> CQTESTTESTS_API UEnum* StaticEnum<ETestUint32>()
	{
		return ETestUint32_StaticEnum();
	}
	struct Z_Construct_UEnum_CQTestTests_ETestUint32_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CQTestTests_ETestUint32_Statics::Enumerators[] = {
		{ "ETestUint32::enumone", (int64)ETestUint32::enumone },
		{ "ETestUint32::enumtwo", (int64)ETestUint32::enumtwo },
		{ "ETestUint32::enumthree", (int64)ETestUint32::enumthree },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CQTestTests_ETestUint32_Statics::Enum_MetaDataParams[] = {
		{ "enumone.Name", "ETestUint32::enumone" },
		{ "enumthree.Name", "ETestUint32::enumthree" },
		{ "enumtwo.Name", "ETestUint32::enumtwo" },
		{ "ModuleRelativePath", "Private/TestActorWithProperties.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CQTestTests_ETestUint32_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CQTestTests,
		nullptr,
		"ETestUint32",
		"ETestUint32",
		Z_Construct_UEnum_CQTestTests_ETestUint32_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CQTestTests_ETestUint32_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CQTestTests_ETestUint32_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CQTestTests_ETestUint32_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_CQTestTests_ETestUint32()
	{
		if (!Z_Registration_Info_UEnum_ETestUint32.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETestUint32.InnerSingleton, Z_Construct_UEnum_CQTestTests_ETestUint32_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETestUint32.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETestInt64;
	static UEnum* ETestInt64_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETestInt64.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETestInt64.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CQTestTests_ETestInt64, (UObject*)Z_Construct_UPackage__Script_CQTestTests(), TEXT("ETestInt64"));
		}
		return Z_Registration_Info_UEnum_ETestInt64.OuterSingleton;
	}
	template<> CQTESTTESTS_API UEnum* StaticEnum<ETestInt64>()
	{
		return ETestInt64_StaticEnum();
	}
	struct Z_Construct_UEnum_CQTestTests_ETestInt64_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CQTestTests_ETestInt64_Statics::Enumerators[] = {
		{ "ETestInt64::enumone", (int64)ETestInt64::enumone },
		{ "ETestInt64::enumtwo", (int64)ETestInt64::enumtwo },
		{ "ETestInt64::enumthree", (int64)ETestInt64::enumthree },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CQTestTests_ETestInt64_Statics::Enum_MetaDataParams[] = {
		{ "enumone.Name", "ETestInt64::enumone" },
		{ "enumthree.Name", "ETestInt64::enumthree" },
		{ "enumtwo.Name", "ETestInt64::enumtwo" },
		{ "ModuleRelativePath", "Private/TestActorWithProperties.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CQTestTests_ETestInt64_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CQTestTests,
		nullptr,
		"ETestInt64",
		"ETestInt64",
		Z_Construct_UEnum_CQTestTests_ETestInt64_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CQTestTests_ETestInt64_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CQTestTests_ETestInt64_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CQTestTests_ETestInt64_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_CQTestTests_ETestInt64()
	{
		if (!Z_Registration_Info_UEnum_ETestInt64.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETestInt64.InnerSingleton, Z_Construct_UEnum_CQTestTests_ETestInt64_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETestInt64.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETestUint64;
	static UEnum* ETestUint64_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETestUint64.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETestUint64.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CQTestTests_ETestUint64, (UObject*)Z_Construct_UPackage__Script_CQTestTests(), TEXT("ETestUint64"));
		}
		return Z_Registration_Info_UEnum_ETestUint64.OuterSingleton;
	}
	template<> CQTESTTESTS_API UEnum* StaticEnum<ETestUint64>()
	{
		return ETestUint64_StaticEnum();
	}
	struct Z_Construct_UEnum_CQTestTests_ETestUint64_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CQTestTests_ETestUint64_Statics::Enumerators[] = {
		{ "ETestUint64::enumone", (int64)ETestUint64::enumone },
		{ "ETestUint64::enumtwo", (int64)ETestUint64::enumtwo },
		{ "ETestUint64::enumthree", (int64)ETestUint64::enumthree },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CQTestTests_ETestUint64_Statics::Enum_MetaDataParams[] = {
		{ "enumone.Name", "ETestUint64::enumone" },
		{ "enumthree.Name", "ETestUint64::enumthree" },
		{ "enumtwo.Name", "ETestUint64::enumtwo" },
		{ "ModuleRelativePath", "Private/TestActorWithProperties.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CQTestTests_ETestUint64_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CQTestTests,
		nullptr,
		"ETestUint64",
		"ETestUint64",
		Z_Construct_UEnum_CQTestTests_ETestUint64_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CQTestTests_ETestUint64_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CQTestTests_ETestUint64_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CQTestTests_ETestUint64_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_CQTestTests_ETestUint64()
	{
		if (!Z_Registration_Info_UEnum_ETestUint64.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETestUint64.InnerSingleton, Z_Construct_UEnum_CQTestTests_ETestUint64_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETestUint64.InnerSingleton;
	}
	void ATestActorWithProperties::StaticRegisterNativesATestActorWithProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATestActorWithProperties);
	UClass* Z_Construct_UClass_ATestActorWithProperties_NoRegister()
	{
		return ATestActorWithProperties::StaticClass();
	}
	struct Z_Construct_UClass_ATestActorWithProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoolProperty_MetaData[];
#endif
		static void NewProp_BoolProperty_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_BoolProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ByteProperty_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ByteProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Int8Property_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_Int8Property;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UInt8Property_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_UInt8Property;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UInt16Property_MetaData[];
#endif
		static const UECodeGen_Private::FUInt16PropertyParams NewProp_UInt16Property;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Int16Property_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_Int16Property;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UInt32Property_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_UInt32Property;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Int64Property_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Int64Property;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UInt64Property_MetaData[];
#endif
		static const UECodeGen_Private::FUInt64PropertyParams NewProp_UInt64Property;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StructProperty_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StructProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatProperty_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoubleProperty_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_DoubleProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Int32Property_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Int32Property;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestTObjectPtrProperty_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TestTObjectPtrProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterfaceProperty_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InterfaceProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NameProperty_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NameProperty;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ArrayProperty_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrayProperty_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ArrayProperty;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MapProperty_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MapProperty_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapProperty_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MapProperty;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SetProperty_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetProperty_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_SetProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VectorProperty_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorProperty;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Uint8EnumProperty_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Uint8EnumProperty_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Uint8EnumProperty;
		static const UECodeGen_Private::FInt8PropertyParams NewProp_Int8EnumProperty_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Int8EnumProperty_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Int8EnumProperty;
		static const UECodeGen_Private::FInt16PropertyParams NewProp_Int16EnumProperty_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Int16EnumProperty_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Int16EnumProperty;
		static const UECodeGen_Private::FUInt16PropertyParams NewProp_Uint16EnumProperty_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Uint16EnumProperty_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Uint16EnumProperty;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Int32EnumProperty_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Int32EnumProperty_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Int32EnumProperty;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Uint32EnumProperty_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Uint32EnumProperty_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Uint32EnumProperty;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Int64EnumProperty_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Int64EnumProperty_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Int64EnumProperty;
		static const UECodeGen_Private::FUInt64PropertyParams NewProp_Uint64EnumProperty_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Uint64EnumProperty_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Uint64EnumProperty;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ArrayOfObjectsProperty_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrayOfObjectsProperty_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ArrayOfObjectsProperty;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ArrayOfVectorsProperty_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrayOfVectorsProperty_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ArrayOfVectorsProperty;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ArrayOfStructsProperty_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrayOfStructsProperty_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ArrayOfStructsProperty;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestActorWithProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CQTestTests,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATestActorWithProperties_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestActorWithProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TestActorWithProperties.h" },
		{ "ModuleRelativePath", "Private/TestActorWithProperties.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_BoolProperty_MetaData[] = {
		{ "ModuleRelativePath", "Private/TestActorWithProperties.h" },
	};
#endif
	void Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_BoolProperty_SetBit(void* Obj)
	{
		((ATestActorWithProperties*)Obj)->BoolProperty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_BoolProperty = { "BoolProperty", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATestActorWithProperties), &Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_BoolProperty_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_BoolProperty_MetaData), Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_BoolProperty_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_ByteProperty_MetaData[] = {
		{ "ModuleRelativePath", "Private/TestActorWithProperties.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_ByteProperty = { "ByteProperty", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestActorWithProperties, ByteProperty), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_ByteProperty_MetaData), Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_ByteProperty_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Int8Property_MetaData[] = {
		{ "ModuleRelativePath", "Private/TestActorWithProperties.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Int8Property = { "Int8Property", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestActorWithProperties, Int8Property), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Int8Property_MetaData), Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Int8Property_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_UInt8Property_MetaData[] = {
		{ "ModuleRelativePath", "Private/TestActorWithProperties.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_UInt8Property = { "UInt8Property", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestActorWithProperties, UInt8Property), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_UInt8Property_MetaData), Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_UInt8Property_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_UInt16Property_MetaData[] = {
		{ "ModuleRelativePath", "Private/TestActorWithProperties.h" },
	};
#endif
	const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_UInt16Property = { "UInt16Property", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestActorWithProperties, UInt16Property), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_UInt16Property_MetaData), Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_UInt16Property_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Int16Property_MetaData[] = {
		{ "ModuleRelativePath", "Private/TestActorWithProperties.h" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Int16Property = { "Int16Property", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestActorWithProperties, Int16Property), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Int16Property_MetaData), Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Int16Property_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_UInt32Property_MetaData[] = {
		{ "ModuleRelativePath", "Private/TestActorWithProperties.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_UInt32Property = { "UInt32Property", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestActorWithProperties, UInt32Property), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_UInt32Property_MetaData), Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_UInt32Property_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Int64Property_MetaData[] = {
		{ "ModuleRelativePath", "Private/TestActorWithProperties.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Int64Property = { "Int64Property", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestActorWithProperties, Int64Property), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Int64Property_MetaData), Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Int64Property_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_UInt64Property_MetaData[] = {
		{ "ModuleRelativePath", "Private/TestActorWithProperties.h" },
	};
#endif
	const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_UInt64Property = { "UInt64Property", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestActorWithProperties, UInt64Property), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_UInt64Property_MetaData), Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_UInt64Property_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_StructProperty_MetaData[] = {
		{ "ModuleRelativePath", "Private/TestActorWithProperties.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_StructProperty = { "StructProperty", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestActorWithProperties, StructProperty), Z_Construct_UScriptStruct_FTestStructWithProperties, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_StructProperty_MetaData), Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_StructProperty_MetaData) }; // 2812353330
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_FloatProperty_MetaData[] = {
		{ "ModuleRelativePath", "Private/TestActorWithProperties.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_FloatProperty = { "FloatProperty", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestActorWithProperties, FloatProperty), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_FloatProperty_MetaData), Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_FloatProperty_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_DoubleProperty_MetaData[] = {
		{ "ModuleRelativePath", "Private/TestActorWithProperties.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_DoubleProperty = { "DoubleProperty", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestActorWithProperties, DoubleProperty), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_DoubleProperty_MetaData), Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_DoubleProperty_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Int32Property_MetaData[] = {
		{ "ModuleRelativePath", "Private/TestActorWithProperties.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Int32Property = { "Int32Property", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestActorWithProperties, Int32Property), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Int32Property_MetaData), Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Int32Property_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_TestTObjectPtrProperty_MetaData[] = {
		{ "ModuleRelativePath", "Private/TestActorWithProperties.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_TestTObjectPtrProperty = { "TestTObjectPtrProperty", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestActorWithProperties, TestTObjectPtrProperty), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_TestTObjectPtrProperty_MetaData), Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_TestTObjectPtrProperty_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_InterfaceProperty_MetaData[] = {
		{ "ModuleRelativePath", "Private/TestActorWithProperties.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_InterfaceProperty = { "InterfaceProperty", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestActorWithProperties, InterfaceProperty), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_InterfaceProperty_MetaData), Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_InterfaceProperty_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_NameProperty_MetaData[] = {
		{ "ModuleRelativePath", "Private/TestActorWithProperties.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_NameProperty = { "NameProperty", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestActorWithProperties, NameProperty), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_NameProperty_MetaData), Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_NameProperty_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_ArrayProperty_Inner = { "ArrayProperty", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_ArrayProperty_MetaData[] = {
		{ "ModuleRelativePath", "Private/TestActorWithProperties.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_ArrayProperty = { "ArrayProperty", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestActorWithProperties, ArrayProperty), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_ArrayProperty_MetaData), Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_ArrayProperty_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_MapProperty_ValueProp = { "MapProperty", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_MapProperty_Key_KeyProp = { "MapProperty_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_MapProperty_MetaData[] = {
		{ "ModuleRelativePath", "Private/TestActorWithProperties.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_MapProperty = { "MapProperty", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestActorWithProperties, MapProperty), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_MapProperty_MetaData), Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_MapProperty_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_SetProperty_ElementProp = { "SetProperty", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_SetProperty_MetaData[] = {
		{ "ModuleRelativePath", "Private/TestActorWithProperties.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_SetProperty = { "SetProperty", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestActorWithProperties, SetProperty), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_SetProperty_MetaData), Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_SetProperty_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_VectorProperty_MetaData[] = {
		{ "ModuleRelativePath", "Private/TestActorWithProperties.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_VectorProperty = { "VectorProperty", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestActorWithProperties, VectorProperty), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_VectorProperty_MetaData), Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_VectorProperty_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Uint8EnumProperty_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Uint8EnumProperty_MetaData[] = {
		{ "ModuleRelativePath", "Private/TestActorWithProperties.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Uint8EnumProperty = { "Uint8EnumProperty", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestActorWithProperties, Uint8EnumProperty), Z_Construct_UEnum_CQTestTests_ETestUint8, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Uint8EnumProperty_MetaData), Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Uint8EnumProperty_MetaData) }; // 2676615095
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Int8EnumProperty_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Int8EnumProperty_MetaData[] = {
		{ "ModuleRelativePath", "Private/TestActorWithProperties.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Int8EnumProperty = { "Int8EnumProperty", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestActorWithProperties, Int8EnumProperty), Z_Construct_UEnum_CQTestTests_ETestInt8, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Int8EnumProperty_MetaData), Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Int8EnumProperty_MetaData) }; // 1573489109
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Int16EnumProperty_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Int16EnumProperty_MetaData[] = {
		{ "ModuleRelativePath", "Private/TestActorWithProperties.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Int16EnumProperty = { "Int16EnumProperty", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestActorWithProperties, Int16EnumProperty), Z_Construct_UEnum_CQTestTests_ETestInt16, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Int16EnumProperty_MetaData), Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Int16EnumProperty_MetaData) }; // 1340284963
	const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Uint16EnumProperty_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Uint16EnumProperty_MetaData[] = {
		{ "ModuleRelativePath", "Private/TestActorWithProperties.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Uint16EnumProperty = { "Uint16EnumProperty", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestActorWithProperties, Uint16EnumProperty), Z_Construct_UEnum_CQTestTests_ETestUint16, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Uint16EnumProperty_MetaData), Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Uint16EnumProperty_MetaData) }; // 390744743
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Int32EnumProperty_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Int32EnumProperty_MetaData[] = {
		{ "ModuleRelativePath", "Private/TestActorWithProperties.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Int32EnumProperty = { "Int32EnumProperty", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestActorWithProperties, Int32EnumProperty), Z_Construct_UEnum_CQTestTests_ETestInt32, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Int32EnumProperty_MetaData), Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Int32EnumProperty_MetaData) }; // 3822320554
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Uint32EnumProperty_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Uint32EnumProperty_MetaData[] = {
		{ "ModuleRelativePath", "Private/TestActorWithProperties.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Uint32EnumProperty = { "Uint32EnumProperty", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestActorWithProperties, Uint32EnumProperty), Z_Construct_UEnum_CQTestTests_ETestUint32, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Uint32EnumProperty_MetaData), Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Uint32EnumProperty_MetaData) }; // 3233576380
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Int64EnumProperty_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Int64EnumProperty_MetaData[] = {
		{ "ModuleRelativePath", "Private/TestActorWithProperties.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Int64EnumProperty = { "Int64EnumProperty", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestActorWithProperties, Int64EnumProperty), Z_Construct_UEnum_CQTestTests_ETestInt64, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Int64EnumProperty_MetaData), Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Int64EnumProperty_MetaData) }; // 2023067020
	const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Uint64EnumProperty_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Uint64EnumProperty_MetaData[] = {
		{ "ModuleRelativePath", "Private/TestActorWithProperties.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Uint64EnumProperty = { "Uint64EnumProperty", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestActorWithProperties, Uint64EnumProperty), Z_Construct_UEnum_CQTestTests_ETestUint64, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Uint64EnumProperty_MetaData), Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Uint64EnumProperty_MetaData) }; // 533009419
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_ArrayOfObjectsProperty_Inner = { "ArrayOfObjectsProperty", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ATestActorWithProperties_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_ArrayOfObjectsProperty_MetaData[] = {
		{ "ModuleRelativePath", "Private/TestActorWithProperties.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_ArrayOfObjectsProperty = { "ArrayOfObjectsProperty", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestActorWithProperties, ArrayOfObjectsProperty), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_ArrayOfObjectsProperty_MetaData), Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_ArrayOfObjectsProperty_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_ArrayOfVectorsProperty_Inner = { "ArrayOfVectorsProperty", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_ArrayOfVectorsProperty_MetaData[] = {
		{ "ModuleRelativePath", "Private/TestActorWithProperties.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_ArrayOfVectorsProperty = { "ArrayOfVectorsProperty", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestActorWithProperties, ArrayOfVectorsProperty), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_ArrayOfVectorsProperty_MetaData), Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_ArrayOfVectorsProperty_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_ArrayOfStructsProperty_Inner = { "ArrayOfStructsProperty", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTestStructWithProperties, METADATA_PARAMS(0, nullptr) }; // 2812353330
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_ArrayOfStructsProperty_MetaData[] = {
		{ "ModuleRelativePath", "Private/TestActorWithProperties.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_ArrayOfStructsProperty = { "ArrayOfStructsProperty", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestActorWithProperties, ArrayOfStructsProperty), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_ArrayOfStructsProperty_MetaData), Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_ArrayOfStructsProperty_MetaData) }; // 2812353330
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATestActorWithProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_BoolProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_ByteProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Int8Property,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_UInt8Property,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_UInt16Property,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Int16Property,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_UInt32Property,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Int64Property,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_UInt64Property,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_StructProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_FloatProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_DoubleProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Int32Property,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_TestTObjectPtrProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_InterfaceProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_NameProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_ArrayProperty_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_ArrayProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_MapProperty_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_MapProperty_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_MapProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_SetProperty_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_SetProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_VectorProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Uint8EnumProperty_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Uint8EnumProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Int8EnumProperty_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Int8EnumProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Int16EnumProperty_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Int16EnumProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Uint16EnumProperty_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Uint16EnumProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Int32EnumProperty_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Int32EnumProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Uint32EnumProperty_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Uint32EnumProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Int64EnumProperty_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Int64EnumProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Uint64EnumProperty_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_Uint64EnumProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_ArrayOfObjectsProperty_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_ArrayOfObjectsProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_ArrayOfVectorsProperty_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_ArrayOfVectorsProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_ArrayOfStructsProperty_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestActorWithProperties_Statics::NewProp_ArrayOfStructsProperty,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestActorWithProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestActorWithProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATestActorWithProperties_Statics::ClassParams = {
		&ATestActorWithProperties::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATestActorWithProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATestActorWithProperties_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestActorWithProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_ATestActorWithProperties_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATestActorWithProperties_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ATestActorWithProperties()
	{
		if (!Z_Registration_Info_UClass_ATestActorWithProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATestActorWithProperties.OuterSingleton, Z_Construct_UClass_ATestActorWithProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATestActorWithProperties.OuterSingleton;
	}
	template<> CQTESTTESTS_API UClass* StaticClass<ATestActorWithProperties>()
	{
		return ATestActorWithProperties::StaticClass();
	}
	ATestActorWithProperties::ATestActorWithProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestActorWithProperties);
	ATestActorWithProperties::~ATestActorWithProperties() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_TestActorWithProperties_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_TestActorWithProperties_h_Statics::EnumInfo[] = {
		{ ETestUint8_StaticEnum, TEXT("ETestUint8"), &Z_Registration_Info_UEnum_ETestUint8, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2676615095U) },
		{ ETestInt8_StaticEnum, TEXT("ETestInt8"), &Z_Registration_Info_UEnum_ETestInt8, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1573489109U) },
		{ ETestInt16_StaticEnum, TEXT("ETestInt16"), &Z_Registration_Info_UEnum_ETestInt16, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1340284963U) },
		{ ETestUint16_StaticEnum, TEXT("ETestUint16"), &Z_Registration_Info_UEnum_ETestUint16, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 390744743U) },
		{ ETestInt32_StaticEnum, TEXT("ETestInt32"), &Z_Registration_Info_UEnum_ETestInt32, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3822320554U) },
		{ ETestUint32_StaticEnum, TEXT("ETestUint32"), &Z_Registration_Info_UEnum_ETestUint32, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3233576380U) },
		{ ETestInt64_StaticEnum, TEXT("ETestInt64"), &Z_Registration_Info_UEnum_ETestInt64, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2023067020U) },
		{ ETestUint64_StaticEnum, TEXT("ETestUint64"), &Z_Registration_Info_UEnum_ETestUint64, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 533009419U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_TestActorWithProperties_h_Statics::ScriptStructInfo[] = {
		{ FTestStructWithProperties::StaticStruct, Z_Construct_UScriptStruct_FTestStructWithProperties_Statics::NewStructOps, TEXT("TestStructWithProperties"), &Z_Registration_Info_UScriptStruct_TestStructWithProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestStructWithProperties), 2812353330U) },
		{ FDerivedTestStruct::StaticStruct, Z_Construct_UScriptStruct_FDerivedTestStruct_Statics::NewStructOps, TEXT("DerivedTestStruct"), &Z_Registration_Info_UScriptStruct_DerivedTestStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDerivedTestStruct), 1074187792U) },
		{ FOtherTestStruct::StaticStruct, Z_Construct_UScriptStruct_FOtherTestStruct_Statics::NewStructOps, TEXT("OtherTestStruct"), &Z_Registration_Info_UScriptStruct_OtherTestStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOtherTestStruct), 3703972146U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_TestActorWithProperties_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATestActorWithProperties, ATestActorWithProperties::StaticClass, TEXT("ATestActorWithProperties"), &Z_Registration_Info_UClass_ATestActorWithProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATestActorWithProperties), 2211434762U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_TestActorWithProperties_h_4005959969(TEXT("/Script/CQTestTests"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_TestActorWithProperties_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_TestActorWithProperties_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_TestActorWithProperties_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_TestActorWithProperties_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_TestActorWithProperties_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_TestActorWithProperties_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
