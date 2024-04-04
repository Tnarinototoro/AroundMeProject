// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeoReferencingSystem.h"
#include "CartesianCoordinates.h"
#include "GeographicCoordinates.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeoReferencingSystem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AInfo();
	GEOREFERENCING_API UClass* Z_Construct_UClass_AGeoReferencingSystem();
	GEOREFERENCING_API UClass* Z_Construct_UClass_AGeoReferencingSystem_NoRegister();
	GEOREFERENCING_API UEnum* Z_Construct_UEnum_GeoReferencing_EPlanetShape();
	GEOREFERENCING_API UScriptStruct* Z_Construct_UScriptStruct_FCartesianCoordinates();
	GEOREFERENCING_API UScriptStruct* Z_Construct_UScriptStruct_FGeographicCoordinates();
	UPackage* Z_Construct_UPackage__Script_GeoReferencing();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlanetShape;
	static UEnum* EPlanetShape_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPlanetShape.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPlanetShape.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeoReferencing_EPlanetShape, (UObject*)Z_Construct_UPackage__Script_GeoReferencing(), TEXT("EPlanetShape"));
		}
		return Z_Registration_Info_UEnum_EPlanetShape.OuterSingleton;
	}
	template<> GEOREFERENCING_API UEnum* StaticEnum<EPlanetShape>()
	{
		return EPlanetShape_StaticEnum();
	}
	struct Z_Construct_UEnum_GeoReferencing_EPlanetShape_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeoReferencing_EPlanetShape_Statics::Enumerators[] = {
		{ "EPlanetShape::FlatPlanet", (int64)EPlanetShape::FlatPlanet },
		{ "EPlanetShape::RoundPlanet", (int64)EPlanetShape::RoundPlanet },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeoReferencing_EPlanetShape_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FlatPlanet.Comment", "/**\n\x09 * The world geometry coordinates are expressed in a projected space such as a Mercator projection.\n\x09 * In this mode, Planet curvature is not considered and you might face errors related to projection on large environments\n\x09 */" },
		{ "FlatPlanet.DisplayName", "Flat Planet" },
		{ "FlatPlanet.Name", "EPlanetShape::FlatPlanet" },
		{ "FlatPlanet.ToolTip", "The world geometry coordinates are expressed in a projected space such as a Mercator projection.\nIn this mode, Planet curvature is not considered and you might face errors related to projection on large environments" },
		{ "ModuleRelativePath", "Public/GeoReferencingSystem.h" },
		{ "RoundPlanet.Comment", "/**\n\x09 * The world geometry coordinates are expressed in a planet wide Cartesian frame,\n\x09 * placed on a specific location or at earth, or at the planet center.\n\x09 * You might need dynamic rebasing to avoid precision issues at large scales.\n\x09 */" },
		{ "RoundPlanet.DisplayName", "Round Planet" },
		{ "RoundPlanet.Name", "EPlanetShape::RoundPlanet" },
		{ "RoundPlanet.ToolTip", "The world geometry coordinates are expressed in a planet wide Cartesian frame,\nplaced on a specific location or at earth, or at the planet center.\nYou might need dynamic rebasing to avoid precision issues at large scales." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeoReferencing_EPlanetShape_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeoReferencing,
		nullptr,
		"EPlanetShape",
		"EPlanetShape",
		Z_Construct_UEnum_GeoReferencing_EPlanetShape_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeoReferencing_EPlanetShape_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GeoReferencing_EPlanetShape_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GeoReferencing_EPlanetShape_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_GeoReferencing_EPlanetShape()
	{
		if (!Z_Registration_Info_UEnum_EPlanetShape.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlanetShape.InnerSingleton, Z_Construct_UEnum_GeoReferencing_EPlanetShape_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPlanetShape.InnerSingleton;
	}
	DEFINE_FUNCTION(AGeoReferencingSystem::execApplySettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplySettings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGeoReferencingSystem::execGetProjectedEllipsoidMinRadius)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=P_THIS->GetProjectedEllipsoidMinRadius();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGeoReferencingSystem::execGetProjectedEllipsoidMaxRadius)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=P_THIS->GetProjectedEllipsoidMaxRadius();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGeoReferencingSystem::execGetGeographicEllipsoidMinRadius)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=P_THIS->GetGeographicEllipsoidMinRadius();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGeoReferencingSystem::execGetGeographicEllipsoidMaxRadius)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=P_THIS->GetGeographicEllipsoidMaxRadius();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGeoReferencingSystem::execIsCRSStringValid)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CRSString);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Error);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCRSStringValid(Z_Param_CRSString,Z_Param_Out_Error);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGeoReferencingSystem::execGetPlanetCenterTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetPlanetCenterTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGeoReferencingSystem::execGetTangentTransformAtGeographicLocation)
	{
		P_GET_STRUCT_REF(FGeographicCoordinates,Z_Param_Out_GeographicCoordinates);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetTangentTransformAtGeographicLocation(Z_Param_Out_GeographicCoordinates);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGeoReferencingSystem::execGetTangentTransformAtEngineLocation)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_EngineCoordinates);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetTangentTransformAtEngineLocation(Z_Param_Out_EngineCoordinates);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGeoReferencingSystem::execGetENUVectorsAtGeographicLocation)
	{
		P_GET_STRUCT_REF(FGeographicCoordinates,Z_Param_Out_GeographicCoordinates);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_East);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_North);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Up);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetENUVectorsAtGeographicLocation(Z_Param_Out_GeographicCoordinates,Z_Param_Out_East,Z_Param_Out_North,Z_Param_Out_Up);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGeoReferencingSystem::execGetENUVectorsAtEngineLocation)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_EngineCoordinates);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_East);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_North);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Up);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetENUVectorsAtEngineLocation(Z_Param_Out_EngineCoordinates,Z_Param_Out_East,Z_Param_Out_North,Z_Param_Out_Up);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGeoReferencingSystem::execGeographicToEngine)
	{
		P_GET_STRUCT_REF(FGeographicCoordinates,Z_Param_Out_GeographicCoordinates);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_EngineCoordinates);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GeographicToEngine(Z_Param_Out_GeographicCoordinates,Z_Param_Out_EngineCoordinates);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGeoReferencingSystem::execEngineToGeographic)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_EngineCoordinates);
		P_GET_STRUCT_REF(FGeographicCoordinates,Z_Param_Out_GeographicCoordinates);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EngineToGeographic(Z_Param_Out_EngineCoordinates,Z_Param_Out_GeographicCoordinates);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGeoReferencingSystem::execK2_GetTangentTransformAtECEFLocation)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ECEFCoordinates);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->K2_GetTangentTransformAtECEFLocation(Z_Param_Out_ECEFCoordinates);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGeoReferencingSystem::execK2_GetTangentTransformAtProjectedLocation)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ProjectedCoordinates);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->K2_GetTangentTransformAtProjectedLocation(Z_Param_Out_ProjectedCoordinates);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGeoReferencingSystem::execK2_GetECEFENUVectorsAtECEFLocation)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ECEFCoordinates);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ECEFEast);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ECEFNorth);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ECEFUp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_GetECEFENUVectorsAtECEFLocation(Z_Param_Out_ECEFCoordinates,Z_Param_Out_ECEFEast,Z_Param_Out_ECEFNorth,Z_Param_Out_ECEFUp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGeoReferencingSystem::execK2_GetENUVectorsAtECEFLocation)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ECEFCoordinates);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_East);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_North);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Up);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_GetENUVectorsAtECEFLocation(Z_Param_Out_ECEFCoordinates,Z_Param_Out_East,Z_Param_Out_North,Z_Param_Out_Up);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGeoReferencingSystem::execK2_GetENUVectorsAtProjectedLocation)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ProjectedCoordinates);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_East);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_North);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Up);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_GetENUVectorsAtProjectedLocation(Z_Param_Out_ProjectedCoordinates,Z_Param_Out_East,Z_Param_Out_North,Z_Param_Out_Up);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGeoReferencingSystem::execK2_ECEFToGeographic)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ECEFCoordinates);
		P_GET_STRUCT_REF(FGeographicCoordinates,Z_Param_Out_GeographicCoordinates);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_ECEFToGeographic(Z_Param_Out_ECEFCoordinates,Z_Param_Out_GeographicCoordinates);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGeoReferencingSystem::execK2_GeographicToECEF)
	{
		P_GET_STRUCT_REF(FGeographicCoordinates,Z_Param_Out_GeographicCoordinates);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ECEFCoordinates);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_GeographicToECEF(Z_Param_Out_GeographicCoordinates,Z_Param_Out_ECEFCoordinates);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGeoReferencingSystem::execK2_ECEFToProjected)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ECEFCoordinates);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ProjectedCoordinates);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_ECEFToProjected(Z_Param_Out_ECEFCoordinates,Z_Param_Out_ProjectedCoordinates);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGeoReferencingSystem::execK2_ProjectedToECEF)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ProjectedCoordinates);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ECEFCoordinates);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_ProjectedToECEF(Z_Param_Out_ProjectedCoordinates,Z_Param_Out_ECEFCoordinates);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGeoReferencingSystem::execK2_GeographicToProjected)
	{
		P_GET_STRUCT_REF(FGeographicCoordinates,Z_Param_Out_GeographicCoordinates);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ProjectedCoordinates);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_GeographicToProjected(Z_Param_Out_GeographicCoordinates,Z_Param_Out_ProjectedCoordinates);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGeoReferencingSystem::execK2_ProjectedToGeographic)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ProjectedCoordinates);
		P_GET_STRUCT_REF(FGeographicCoordinates,Z_Param_Out_GeographicCoordinates);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_ProjectedToGeographic(Z_Param_Out_ProjectedCoordinates,Z_Param_Out_GeographicCoordinates);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGeoReferencingSystem::execK2_ECEFToEngine)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ECEFCoordinates);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_EngineCoordinates);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_ECEFToEngine(Z_Param_Out_ECEFCoordinates,Z_Param_Out_EngineCoordinates);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGeoReferencingSystem::execK2_EngineToECEF)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_EngineCoordinates);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ECEFCoordinates);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_EngineToECEF(Z_Param_Out_EngineCoordinates,Z_Param_Out_ECEFCoordinates);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGeoReferencingSystem::execK2_ProjectedToEngine)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ProjectedCoordinates);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_EngineCoordinates);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_ProjectedToEngine(Z_Param_Out_ProjectedCoordinates,Z_Param_Out_EngineCoordinates);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGeoReferencingSystem::execK2_EngineToProjected)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_EngineCoordinates);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ProjectedCoordinates);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_EngineToProjected(Z_Param_Out_EngineCoordinates,Z_Param_Out_ProjectedCoordinates);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGeoReferencingSystem::execGetTangentTransformAtECEFLocation)
	{
		P_GET_STRUCT_REF(FCartesianCoordinates,Z_Param_Out_ECEFCoordinates);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetTangentTransformAtECEFLocation(Z_Param_Out_ECEFCoordinates);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGeoReferencingSystem::execGetTangentTransformAtProjectedLocation)
	{
		P_GET_STRUCT_REF(FCartesianCoordinates,Z_Param_Out_ProjectedCoordinates);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetTangentTransformAtProjectedLocation(Z_Param_Out_ProjectedCoordinates);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGeoReferencingSystem::execGetECEFENUVectorsAtECEFLocation)
	{
		P_GET_STRUCT_REF(FCartesianCoordinates,Z_Param_Out_ECEFCoordinates);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ECEFEast);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ECEFNorth);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ECEFUp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetECEFENUVectorsAtECEFLocation(Z_Param_Out_ECEFCoordinates,Z_Param_Out_ECEFEast,Z_Param_Out_ECEFNorth,Z_Param_Out_ECEFUp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGeoReferencingSystem::execGetENUVectorsAtECEFLocation)
	{
		P_GET_STRUCT_REF(FCartesianCoordinates,Z_Param_Out_ECEFCoordinates);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_East);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_North);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Up);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetENUVectorsAtECEFLocation(Z_Param_Out_ECEFCoordinates,Z_Param_Out_East,Z_Param_Out_North,Z_Param_Out_Up);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGeoReferencingSystem::execGetENUVectorsAtProjectedLocation)
	{
		P_GET_STRUCT_REF(FCartesianCoordinates,Z_Param_Out_ProjectedCoordinates);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_East);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_North);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Up);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetENUVectorsAtProjectedLocation(Z_Param_Out_ProjectedCoordinates,Z_Param_Out_East,Z_Param_Out_North,Z_Param_Out_Up);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGeoReferencingSystem::execECEFToGeographic)
	{
		P_GET_STRUCT_REF(FCartesianCoordinates,Z_Param_Out_ECEFCoordinates);
		P_GET_STRUCT_REF(FGeographicCoordinates,Z_Param_Out_GeographicCoordinates);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ECEFToGeographic(Z_Param_Out_ECEFCoordinates,Z_Param_Out_GeographicCoordinates);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGeoReferencingSystem::execGeographicToECEF)
	{
		P_GET_STRUCT_REF(FGeographicCoordinates,Z_Param_Out_GeographicCoordinates);
		P_GET_STRUCT_REF(FCartesianCoordinates,Z_Param_Out_ECEFCoordinates);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GeographicToECEF(Z_Param_Out_GeographicCoordinates,Z_Param_Out_ECEFCoordinates);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGeoReferencingSystem::execECEFToProjected)
	{
		P_GET_STRUCT_REF(FCartesianCoordinates,Z_Param_Out_ECEFCoordinates);
		P_GET_STRUCT_REF(FCartesianCoordinates,Z_Param_Out_ProjectedCoordinates);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ECEFToProjected(Z_Param_Out_ECEFCoordinates,Z_Param_Out_ProjectedCoordinates);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGeoReferencingSystem::execProjectedToECEF)
	{
		P_GET_STRUCT_REF(FCartesianCoordinates,Z_Param_Out_ProjectedCoordinates);
		P_GET_STRUCT_REF(FCartesianCoordinates,Z_Param_Out_ECEFCoordinates);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ProjectedToECEF(Z_Param_Out_ProjectedCoordinates,Z_Param_Out_ECEFCoordinates);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGeoReferencingSystem::execGeographicToProjected)
	{
		P_GET_STRUCT_REF(FGeographicCoordinates,Z_Param_Out_GeographicCoordinates);
		P_GET_STRUCT_REF(FCartesianCoordinates,Z_Param_Out_ProjectedCoordinates);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GeographicToProjected(Z_Param_Out_GeographicCoordinates,Z_Param_Out_ProjectedCoordinates);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGeoReferencingSystem::execProjectedToGeographic)
	{
		P_GET_STRUCT_REF(FCartesianCoordinates,Z_Param_Out_ProjectedCoordinates);
		P_GET_STRUCT_REF(FGeographicCoordinates,Z_Param_Out_GeographicCoordinates);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ProjectedToGeographic(Z_Param_Out_ProjectedCoordinates,Z_Param_Out_GeographicCoordinates);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGeoReferencingSystem::execECEFToEngine)
	{
		P_GET_STRUCT_REF(FCartesianCoordinates,Z_Param_Out_ECEFCoordinates);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_EngineCoordinates);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ECEFToEngine(Z_Param_Out_ECEFCoordinates,Z_Param_Out_EngineCoordinates);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGeoReferencingSystem::execEngineToECEF)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_EngineCoordinates);
		P_GET_STRUCT_REF(FCartesianCoordinates,Z_Param_Out_ECEFCoordinates);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EngineToECEF(Z_Param_Out_EngineCoordinates,Z_Param_Out_ECEFCoordinates);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGeoReferencingSystem::execProjectedToEngine)
	{
		P_GET_STRUCT_REF(FCartesianCoordinates,Z_Param_Out_ProjectedCoordinates);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_EngineCoordinates);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ProjectedToEngine(Z_Param_Out_ProjectedCoordinates,Z_Param_Out_EngineCoordinates);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGeoReferencingSystem::execEngineToProjected)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_EngineCoordinates);
		P_GET_STRUCT_REF(FCartesianCoordinates,Z_Param_Out_ProjectedCoordinates);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EngineToProjected(Z_Param_Out_EngineCoordinates,Z_Param_Out_ProjectedCoordinates);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGeoReferencingSystem::execGetGeoReferencingSystem)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AGeoReferencingSystem**)Z_Param__Result=AGeoReferencingSystem::GetGeoReferencingSystem(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void AGeoReferencingSystem::StaticRegisterNativesAGeoReferencingSystem()
	{
		UClass* Class = AGeoReferencingSystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplySettings", &AGeoReferencingSystem::execApplySettings },
			{ "ECEFToEngine", &AGeoReferencingSystem::execECEFToEngine },
			{ "ECEFToGeographic", &AGeoReferencingSystem::execECEFToGeographic },
			{ "ECEFToProjected", &AGeoReferencingSystem::execECEFToProjected },
			{ "EngineToECEF", &AGeoReferencingSystem::execEngineToECEF },
			{ "EngineToGeographic", &AGeoReferencingSystem::execEngineToGeographic },
			{ "EngineToProjected", &AGeoReferencingSystem::execEngineToProjected },
			{ "GeographicToECEF", &AGeoReferencingSystem::execGeographicToECEF },
			{ "GeographicToEngine", &AGeoReferencingSystem::execGeographicToEngine },
			{ "GeographicToProjected", &AGeoReferencingSystem::execGeographicToProjected },
			{ "GetECEFENUVectorsAtECEFLocation", &AGeoReferencingSystem::execGetECEFENUVectorsAtECEFLocation },
			{ "GetENUVectorsAtECEFLocation", &AGeoReferencingSystem::execGetENUVectorsAtECEFLocation },
			{ "GetENUVectorsAtEngineLocation", &AGeoReferencingSystem::execGetENUVectorsAtEngineLocation },
			{ "GetENUVectorsAtGeographicLocation", &AGeoReferencingSystem::execGetENUVectorsAtGeographicLocation },
			{ "GetENUVectorsAtProjectedLocation", &AGeoReferencingSystem::execGetENUVectorsAtProjectedLocation },
			{ "GetGeographicEllipsoidMaxRadius", &AGeoReferencingSystem::execGetGeographicEllipsoidMaxRadius },
			{ "GetGeographicEllipsoidMinRadius", &AGeoReferencingSystem::execGetGeographicEllipsoidMinRadius },
			{ "GetGeoReferencingSystem", &AGeoReferencingSystem::execGetGeoReferencingSystem },
			{ "GetPlanetCenterTransform", &AGeoReferencingSystem::execGetPlanetCenterTransform },
			{ "GetProjectedEllipsoidMaxRadius", &AGeoReferencingSystem::execGetProjectedEllipsoidMaxRadius },
			{ "GetProjectedEllipsoidMinRadius", &AGeoReferencingSystem::execGetProjectedEllipsoidMinRadius },
			{ "GetTangentTransformAtECEFLocation", &AGeoReferencingSystem::execGetTangentTransformAtECEFLocation },
			{ "GetTangentTransformAtEngineLocation", &AGeoReferencingSystem::execGetTangentTransformAtEngineLocation },
			{ "GetTangentTransformAtGeographicLocation", &AGeoReferencingSystem::execGetTangentTransformAtGeographicLocation },
			{ "GetTangentTransformAtProjectedLocation", &AGeoReferencingSystem::execGetTangentTransformAtProjectedLocation },
			{ "IsCRSStringValid", &AGeoReferencingSystem::execIsCRSStringValid },
			{ "K2_ECEFToEngine", &AGeoReferencingSystem::execK2_ECEFToEngine },
			{ "K2_ECEFToGeographic", &AGeoReferencingSystem::execK2_ECEFToGeographic },
			{ "K2_ECEFToProjected", &AGeoReferencingSystem::execK2_ECEFToProjected },
			{ "K2_EngineToECEF", &AGeoReferencingSystem::execK2_EngineToECEF },
			{ "K2_EngineToProjected", &AGeoReferencingSystem::execK2_EngineToProjected },
			{ "K2_GeographicToECEF", &AGeoReferencingSystem::execK2_GeographicToECEF },
			{ "K2_GeographicToProjected", &AGeoReferencingSystem::execK2_GeographicToProjected },
			{ "K2_GetECEFENUVectorsAtECEFLocation", &AGeoReferencingSystem::execK2_GetECEFENUVectorsAtECEFLocation },
			{ "K2_GetENUVectorsAtECEFLocation", &AGeoReferencingSystem::execK2_GetENUVectorsAtECEFLocation },
			{ "K2_GetENUVectorsAtProjectedLocation", &AGeoReferencingSystem::execK2_GetENUVectorsAtProjectedLocation },
			{ "K2_GetTangentTransformAtECEFLocation", &AGeoReferencingSystem::execK2_GetTangentTransformAtECEFLocation },
			{ "K2_GetTangentTransformAtProjectedLocation", &AGeoReferencingSystem::execK2_GetTangentTransformAtProjectedLocation },
			{ "K2_ProjectedToECEF", &AGeoReferencingSystem::execK2_ProjectedToECEF },
			{ "K2_ProjectedToEngine", &AGeoReferencingSystem::execK2_ProjectedToEngine },
			{ "K2_ProjectedToGeographic", &AGeoReferencingSystem::execK2_ProjectedToGeographic },
			{ "ProjectedToECEF", &AGeoReferencingSystem::execProjectedToECEF },
			{ "ProjectedToEngine", &AGeoReferencingSystem::execProjectedToEngine },
			{ "ProjectedToGeographic", &AGeoReferencingSystem::execProjectedToGeographic },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGeoReferencingSystem_ApplySettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_ApplySettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeoReferencing|Misc" },
		{ "Comment", "/**\n\x09* In case you want to change the Origin or CRS definition properties during application execution, you need to call this function to update the internal transformation cache.\n\x09* Note this is not a recommended practice, because it will not move the level actors accordingly.\n\x09* Can be useful though if you rebase your actors yourself, or if you want to change one CRS used for displaying coordinates.\n\x09*/" },
		{ "DisplayName", "Apply Runtime Changes" },
		{ "ModuleRelativePath", "Public/GeoReferencingSystem.h" },
		{ "ToolTip", "In case you want to change the Origin or CRS definition properties during application execution, you need to call this function to update the internal transformation cache.\nNote this is not a recommended practice, because it will not move the level actors accordingly.\nCan be useful though if you rebase your actors yourself, or if you want to change one CRS used for displaying coordinates." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeoReferencingSystem_ApplySettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeoReferencingSystem, nullptr, "ApplySettings", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_ApplySettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGeoReferencingSystem_ApplySettings_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AGeoReferencingSystem_ApplySettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGeoReferencingSystem_ApplySettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeoReferencingSystem_ECEFToEngine_Statics
	{
		struct GeoReferencingSystem_eventECEFToEngine_Parms
		{
			FCartesianCoordinates ECEFCoordinates;
			FVector EngineCoordinates;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ECEFCoordinates_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ECEFCoordinates;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EngineCoordinates;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_ECEFToEngine_Statics::NewProp_ECEFCoordinates_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_ECEFToEngine_Statics::NewProp_ECEFCoordinates = { "ECEFCoordinates", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventECEFToEngine_Parms, ECEFCoordinates), Z_Construct_UScriptStruct_FCartesianCoordinates, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_ECEFToEngine_Statics::NewProp_ECEFCoordinates_MetaData), Z_Construct_UFunction_AGeoReferencingSystem_ECEFToEngine_Statics::NewProp_ECEFCoordinates_MetaData) }; // 2651159933
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_ECEFToEngine_Statics::NewProp_EngineCoordinates = { "EngineCoordinates", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventECEFToEngine_Parms, EngineCoordinates), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeoReferencingSystem_ECEFToEngine_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_ECEFToEngine_Statics::NewProp_ECEFCoordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_ECEFToEngine_Statics::NewProp_EngineCoordinates,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_ECEFToEngine_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeoReferencing|Transformations" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "FCartesianCoordinates is deprecated : Use the version that uses a FVector instead." },
		{ "ModuleRelativePath", "Public/GeoReferencingSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeoReferencingSystem_ECEFToEngine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeoReferencingSystem, nullptr, "ECEFToEngine", nullptr, nullptr, Z_Construct_UFunction_AGeoReferencingSystem_ECEFToEngine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_ECEFToEngine_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGeoReferencingSystem_ECEFToEngine_Statics::GeoReferencingSystem_eventECEFToEngine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_ECEFToEngine_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGeoReferencingSystem_ECEFToEngine_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_ECEFToEngine_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGeoReferencingSystem_ECEFToEngine_Statics::GeoReferencingSystem_eventECEFToEngine_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGeoReferencingSystem_ECEFToEngine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGeoReferencingSystem_ECEFToEngine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeoReferencingSystem_ECEFToGeographic_Statics
	{
		struct GeoReferencingSystem_eventECEFToGeographic_Parms
		{
			FCartesianCoordinates ECEFCoordinates;
			FGeographicCoordinates GeographicCoordinates;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ECEFCoordinates_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ECEFCoordinates;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GeographicCoordinates;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_ECEFToGeographic_Statics::NewProp_ECEFCoordinates_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_ECEFToGeographic_Statics::NewProp_ECEFCoordinates = { "ECEFCoordinates", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventECEFToGeographic_Parms, ECEFCoordinates), Z_Construct_UScriptStruct_FCartesianCoordinates, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_ECEFToGeographic_Statics::NewProp_ECEFCoordinates_MetaData), Z_Construct_UFunction_AGeoReferencingSystem_ECEFToGeographic_Statics::NewProp_ECEFCoordinates_MetaData) }; // 2651159933
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_ECEFToGeographic_Statics::NewProp_GeographicCoordinates = { "GeographicCoordinates", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventECEFToGeographic_Parms, GeographicCoordinates), Z_Construct_UScriptStruct_FGeographicCoordinates, METADATA_PARAMS(0, nullptr) }; // 1274992448
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeoReferencingSystem_ECEFToGeographic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_ECEFToGeographic_Statics::NewProp_ECEFCoordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_ECEFToGeographic_Statics::NewProp_GeographicCoordinates,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_ECEFToGeographic_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeoReferencing|Transformations" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "FCartesianCoordinates is deprecated : Use the version that uses a FVector instead." },
		{ "ModuleRelativePath", "Public/GeoReferencingSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeoReferencingSystem_ECEFToGeographic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeoReferencingSystem, nullptr, "ECEFToGeographic", nullptr, nullptr, Z_Construct_UFunction_AGeoReferencingSystem_ECEFToGeographic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_ECEFToGeographic_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGeoReferencingSystem_ECEFToGeographic_Statics::GeoReferencingSystem_eventECEFToGeographic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_ECEFToGeographic_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGeoReferencingSystem_ECEFToGeographic_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_ECEFToGeographic_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGeoReferencingSystem_ECEFToGeographic_Statics::GeoReferencingSystem_eventECEFToGeographic_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGeoReferencingSystem_ECEFToGeographic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGeoReferencingSystem_ECEFToGeographic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeoReferencingSystem_ECEFToProjected_Statics
	{
		struct GeoReferencingSystem_eventECEFToProjected_Parms
		{
			FCartesianCoordinates ECEFCoordinates;
			FCartesianCoordinates ProjectedCoordinates;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ECEFCoordinates_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ECEFCoordinates;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectedCoordinates;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_ECEFToProjected_Statics::NewProp_ECEFCoordinates_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_ECEFToProjected_Statics::NewProp_ECEFCoordinates = { "ECEFCoordinates", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventECEFToProjected_Parms, ECEFCoordinates), Z_Construct_UScriptStruct_FCartesianCoordinates, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_ECEFToProjected_Statics::NewProp_ECEFCoordinates_MetaData), Z_Construct_UFunction_AGeoReferencingSystem_ECEFToProjected_Statics::NewProp_ECEFCoordinates_MetaData) }; // 2651159933
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_ECEFToProjected_Statics::NewProp_ProjectedCoordinates = { "ProjectedCoordinates", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventECEFToProjected_Parms, ProjectedCoordinates), Z_Construct_UScriptStruct_FCartesianCoordinates, METADATA_PARAMS(0, nullptr) }; // 2651159933
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeoReferencingSystem_ECEFToProjected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_ECEFToProjected_Statics::NewProp_ECEFCoordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_ECEFToProjected_Statics::NewProp_ProjectedCoordinates,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_ECEFToProjected_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeoReferencing|Transformations" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "FCartesianCoordinates is deprecated : Use the version that uses a FVector instead." },
		{ "ModuleRelativePath", "Public/GeoReferencingSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeoReferencingSystem_ECEFToProjected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeoReferencingSystem, nullptr, "ECEFToProjected", nullptr, nullptr, Z_Construct_UFunction_AGeoReferencingSystem_ECEFToProjected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_ECEFToProjected_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGeoReferencingSystem_ECEFToProjected_Statics::GeoReferencingSystem_eventECEFToProjected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_ECEFToProjected_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGeoReferencingSystem_ECEFToProjected_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_ECEFToProjected_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGeoReferencingSystem_ECEFToProjected_Statics::GeoReferencingSystem_eventECEFToProjected_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGeoReferencingSystem_ECEFToProjected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGeoReferencingSystem_ECEFToProjected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeoReferencingSystem_EngineToECEF_Statics
	{
		struct GeoReferencingSystem_eventEngineToECEF_Parms
		{
			FVector EngineCoordinates;
			FCartesianCoordinates ECEFCoordinates;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EngineCoordinates_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EngineCoordinates;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ECEFCoordinates;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_EngineToECEF_Statics::NewProp_EngineCoordinates_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_EngineToECEF_Statics::NewProp_EngineCoordinates = { "EngineCoordinates", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventEngineToECEF_Parms, EngineCoordinates), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_EngineToECEF_Statics::NewProp_EngineCoordinates_MetaData), Z_Construct_UFunction_AGeoReferencingSystem_EngineToECEF_Statics::NewProp_EngineCoordinates_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_EngineToECEF_Statics::NewProp_ECEFCoordinates = { "ECEFCoordinates", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventEngineToECEF_Parms, ECEFCoordinates), Z_Construct_UScriptStruct_FCartesianCoordinates, METADATA_PARAMS(0, nullptr) }; // 2651159933
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeoReferencingSystem_EngineToECEF_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_EngineToECEF_Statics::NewProp_EngineCoordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_EngineToECEF_Statics::NewProp_ECEFCoordinates,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_EngineToECEF_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeoReferencing|Transformations" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "FCartesianCoordinates is deprecated : Use the version that uses a FVector instead." },
		{ "ModuleRelativePath", "Public/GeoReferencingSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeoReferencingSystem_EngineToECEF_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeoReferencingSystem, nullptr, "EngineToECEF", nullptr, nullptr, Z_Construct_UFunction_AGeoReferencingSystem_EngineToECEF_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_EngineToECEF_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGeoReferencingSystem_EngineToECEF_Statics::GeoReferencingSystem_eventEngineToECEF_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_EngineToECEF_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGeoReferencingSystem_EngineToECEF_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_EngineToECEF_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGeoReferencingSystem_EngineToECEF_Statics::GeoReferencingSystem_eventEngineToECEF_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGeoReferencingSystem_EngineToECEF()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGeoReferencingSystem_EngineToECEF_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeoReferencingSystem_EngineToGeographic_Statics
	{
		struct GeoReferencingSystem_eventEngineToGeographic_Parms
		{
			FVector EngineCoordinates;
			FGeographicCoordinates GeographicCoordinates;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EngineCoordinates_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EngineCoordinates;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GeographicCoordinates;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_EngineToGeographic_Statics::NewProp_EngineCoordinates_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_EngineToGeographic_Statics::NewProp_EngineCoordinates = { "EngineCoordinates", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventEngineToGeographic_Parms, EngineCoordinates), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_EngineToGeographic_Statics::NewProp_EngineCoordinates_MetaData), Z_Construct_UFunction_AGeoReferencingSystem_EngineToGeographic_Statics::NewProp_EngineCoordinates_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_EngineToGeographic_Statics::NewProp_GeographicCoordinates = { "GeographicCoordinates", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventEngineToGeographic_Parms, GeographicCoordinates), Z_Construct_UScriptStruct_FGeographicCoordinates, METADATA_PARAMS(0, nullptr) }; // 1274992448
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeoReferencingSystem_EngineToGeographic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_EngineToGeographic_Statics::NewProp_EngineCoordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_EngineToGeographic_Statics::NewProp_GeographicCoordinates,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_EngineToGeographic_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeoReferencing|Transformations" },
		{ "Comment", "/**\n\x09* Convert a Vector expressed in ENGINE space to the GEOGRAPHIC CRS\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeoReferencingSystem.h" },
		{ "ToolTip", "Convert a Vector expressed in ENGINE space to the GEOGRAPHIC CRS" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeoReferencingSystem_EngineToGeographic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeoReferencingSystem, nullptr, "EngineToGeographic", nullptr, nullptr, Z_Construct_UFunction_AGeoReferencingSystem_EngineToGeographic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_EngineToGeographic_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGeoReferencingSystem_EngineToGeographic_Statics::GeoReferencingSystem_eventEngineToGeographic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_EngineToGeographic_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGeoReferencingSystem_EngineToGeographic_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_EngineToGeographic_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGeoReferencingSystem_EngineToGeographic_Statics::GeoReferencingSystem_eventEngineToGeographic_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGeoReferencingSystem_EngineToGeographic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGeoReferencingSystem_EngineToGeographic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeoReferencingSystem_EngineToProjected_Statics
	{
		struct GeoReferencingSystem_eventEngineToProjected_Parms
		{
			FVector EngineCoordinates;
			FCartesianCoordinates ProjectedCoordinates;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EngineCoordinates_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EngineCoordinates;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectedCoordinates;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_EngineToProjected_Statics::NewProp_EngineCoordinates_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_EngineToProjected_Statics::NewProp_EngineCoordinates = { "EngineCoordinates", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventEngineToProjected_Parms, EngineCoordinates), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_EngineToProjected_Statics::NewProp_EngineCoordinates_MetaData), Z_Construct_UFunction_AGeoReferencingSystem_EngineToProjected_Statics::NewProp_EngineCoordinates_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_EngineToProjected_Statics::NewProp_ProjectedCoordinates = { "ProjectedCoordinates", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventEngineToProjected_Parms, ProjectedCoordinates), Z_Construct_UScriptStruct_FCartesianCoordinates, METADATA_PARAMS(0, nullptr) }; // 2651159933
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeoReferencingSystem_EngineToProjected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_EngineToProjected_Statics::NewProp_EngineCoordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_EngineToProjected_Statics::NewProp_ProjectedCoordinates,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_EngineToProjected_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeoReferencing|Transformations" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "FCartesianCoordinates is deprecated : Use the version that uses a FVector instead." },
		{ "ModuleRelativePath", "Public/GeoReferencingSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeoReferencingSystem_EngineToProjected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeoReferencingSystem, nullptr, "EngineToProjected", nullptr, nullptr, Z_Construct_UFunction_AGeoReferencingSystem_EngineToProjected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_EngineToProjected_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGeoReferencingSystem_EngineToProjected_Statics::GeoReferencingSystem_eventEngineToProjected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_EngineToProjected_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGeoReferencingSystem_EngineToProjected_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_EngineToProjected_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGeoReferencingSystem_EngineToProjected_Statics::GeoReferencingSystem_eventEngineToProjected_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGeoReferencingSystem_EngineToProjected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGeoReferencingSystem_EngineToProjected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeoReferencingSystem_GeographicToECEF_Statics
	{
		struct GeoReferencingSystem_eventGeographicToECEF_Parms
		{
			FGeographicCoordinates GeographicCoordinates;
			FCartesianCoordinates ECEFCoordinates;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeographicCoordinates_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GeographicCoordinates;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ECEFCoordinates;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_GeographicToECEF_Statics::NewProp_GeographicCoordinates_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_GeographicToECEF_Statics::NewProp_GeographicCoordinates = { "GeographicCoordinates", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventGeographicToECEF_Parms, GeographicCoordinates), Z_Construct_UScriptStruct_FGeographicCoordinates, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_GeographicToECEF_Statics::NewProp_GeographicCoordinates_MetaData), Z_Construct_UFunction_AGeoReferencingSystem_GeographicToECEF_Statics::NewProp_GeographicCoordinates_MetaData) }; // 1274992448
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_GeographicToECEF_Statics::NewProp_ECEFCoordinates = { "ECEFCoordinates", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventGeographicToECEF_Parms, ECEFCoordinates), Z_Construct_UScriptStruct_FCartesianCoordinates, METADATA_PARAMS(0, nullptr) }; // 2651159933
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeoReferencingSystem_GeographicToECEF_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_GeographicToECEF_Statics::NewProp_GeographicCoordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_GeographicToECEF_Statics::NewProp_ECEFCoordinates,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_GeographicToECEF_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeoReferencing|Transformations" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "FCartesianCoordinates is deprecated : Use the version that uses a FVector instead." },
		{ "ModuleRelativePath", "Public/GeoReferencingSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeoReferencingSystem_GeographicToECEF_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeoReferencingSystem, nullptr, "GeographicToECEF", nullptr, nullptr, Z_Construct_UFunction_AGeoReferencingSystem_GeographicToECEF_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_GeographicToECEF_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGeoReferencingSystem_GeographicToECEF_Statics::GeoReferencingSystem_eventGeographicToECEF_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_GeographicToECEF_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGeoReferencingSystem_GeographicToECEF_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_GeographicToECEF_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGeoReferencingSystem_GeographicToECEF_Statics::GeoReferencingSystem_eventGeographicToECEF_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGeoReferencingSystem_GeographicToECEF()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGeoReferencingSystem_GeographicToECEF_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeoReferencingSystem_GeographicToEngine_Statics
	{
		struct GeoReferencingSystem_eventGeographicToEngine_Parms
		{
			FGeographicCoordinates GeographicCoordinates;
			FVector EngineCoordinates;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeographicCoordinates_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GeographicCoordinates;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EngineCoordinates;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_GeographicToEngine_Statics::NewProp_GeographicCoordinates_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_GeographicToEngine_Statics::NewProp_GeographicCoordinates = { "GeographicCoordinates", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventGeographicToEngine_Parms, GeographicCoordinates), Z_Construct_UScriptStruct_FGeographicCoordinates, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_GeographicToEngine_Statics::NewProp_GeographicCoordinates_MetaData), Z_Construct_UFunction_AGeoReferencingSystem_GeographicToEngine_Statics::NewProp_GeographicCoordinates_MetaData) }; // 1274992448
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_GeographicToEngine_Statics::NewProp_EngineCoordinates = { "EngineCoordinates", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventGeographicToEngine_Parms, EngineCoordinates), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeoReferencingSystem_GeographicToEngine_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_GeographicToEngine_Statics::NewProp_GeographicCoordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_GeographicToEngine_Statics::NewProp_EngineCoordinates,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_GeographicToEngine_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeoReferencing|Transformations" },
		{ "Comment", "/**\n\x09* Convert a Vector expressed in GEOGRAPHIC CRS to ENGINE space\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeoReferencingSystem.h" },
		{ "ToolTip", "Convert a Vector expressed in GEOGRAPHIC CRS to ENGINE space" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeoReferencingSystem_GeographicToEngine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeoReferencingSystem, nullptr, "GeographicToEngine", nullptr, nullptr, Z_Construct_UFunction_AGeoReferencingSystem_GeographicToEngine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_GeographicToEngine_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGeoReferencingSystem_GeographicToEngine_Statics::GeoReferencingSystem_eventGeographicToEngine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_GeographicToEngine_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGeoReferencingSystem_GeographicToEngine_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_GeographicToEngine_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGeoReferencingSystem_GeographicToEngine_Statics::GeoReferencingSystem_eventGeographicToEngine_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGeoReferencingSystem_GeographicToEngine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGeoReferencingSystem_GeographicToEngine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeoReferencingSystem_GeographicToProjected_Statics
	{
		struct GeoReferencingSystem_eventGeographicToProjected_Parms
		{
			FGeographicCoordinates GeographicCoordinates;
			FCartesianCoordinates ProjectedCoordinates;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeographicCoordinates_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GeographicCoordinates;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectedCoordinates;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_GeographicToProjected_Statics::NewProp_GeographicCoordinates_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_GeographicToProjected_Statics::NewProp_GeographicCoordinates = { "GeographicCoordinates", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventGeographicToProjected_Parms, GeographicCoordinates), Z_Construct_UScriptStruct_FGeographicCoordinates, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_GeographicToProjected_Statics::NewProp_GeographicCoordinates_MetaData), Z_Construct_UFunction_AGeoReferencingSystem_GeographicToProjected_Statics::NewProp_GeographicCoordinates_MetaData) }; // 1274992448
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_GeographicToProjected_Statics::NewProp_ProjectedCoordinates = { "ProjectedCoordinates", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventGeographicToProjected_Parms, ProjectedCoordinates), Z_Construct_UScriptStruct_FCartesianCoordinates, METADATA_PARAMS(0, nullptr) }; // 2651159933
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeoReferencingSystem_GeographicToProjected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_GeographicToProjected_Statics::NewProp_GeographicCoordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_GeographicToProjected_Statics::NewProp_ProjectedCoordinates,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_GeographicToProjected_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeoReferencing|Transformations" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "FCartesianCoordinates is deprecated : Use the version that uses a FVector instead." },
		{ "ModuleRelativePath", "Public/GeoReferencingSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeoReferencingSystem_GeographicToProjected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeoReferencingSystem, nullptr, "GeographicToProjected", nullptr, nullptr, Z_Construct_UFunction_AGeoReferencingSystem_GeographicToProjected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_GeographicToProjected_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGeoReferencingSystem_GeographicToProjected_Statics::GeoReferencingSystem_eventGeographicToProjected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_GeographicToProjected_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGeoReferencingSystem_GeographicToProjected_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_GeographicToProjected_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGeoReferencingSystem_GeographicToProjected_Statics::GeoReferencingSystem_eventGeographicToProjected_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGeoReferencingSystem_GeographicToProjected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGeoReferencingSystem_GeographicToProjected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeoReferencingSystem_GetECEFENUVectorsAtECEFLocation_Statics
	{
		struct GeoReferencingSystem_eventGetECEFENUVectorsAtECEFLocation_Parms
		{
			FCartesianCoordinates ECEFCoordinates;
			FVector ECEFEast;
			FVector ECEFNorth;
			FVector ECEFUp;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ECEFCoordinates_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ECEFCoordinates;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ECEFEast;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ECEFNorth;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ECEFUp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_GetECEFENUVectorsAtECEFLocation_Statics::NewProp_ECEFCoordinates_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_GetECEFENUVectorsAtECEFLocation_Statics::NewProp_ECEFCoordinates = { "ECEFCoordinates", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventGetECEFENUVectorsAtECEFLocation_Parms, ECEFCoordinates), Z_Construct_UScriptStruct_FCartesianCoordinates, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_GetECEFENUVectorsAtECEFLocation_Statics::NewProp_ECEFCoordinates_MetaData), Z_Construct_UFunction_AGeoReferencingSystem_GetECEFENUVectorsAtECEFLocation_Statics::NewProp_ECEFCoordinates_MetaData) }; // 2651159933
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_GetECEFENUVectorsAtECEFLocation_Statics::NewProp_ECEFEast = { "ECEFEast", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventGetECEFENUVectorsAtECEFLocation_Parms, ECEFEast), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_GetECEFENUVectorsAtECEFLocation_Statics::NewProp_ECEFNorth = { "ECEFNorth", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventGetECEFENUVectorsAtECEFLocation_Parms, ECEFNorth), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_GetECEFENUVectorsAtECEFLocation_Statics::NewProp_ECEFUp = { "ECEFUp", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventGetECEFENUVectorsAtECEFLocation_Parms, ECEFUp), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeoReferencingSystem_GetECEFENUVectorsAtECEFLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_GetECEFENUVectorsAtECEFLocation_Statics::NewProp_ECEFCoordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_GetECEFENUVectorsAtECEFLocation_Statics::NewProp_ECEFEast,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_GetECEFENUVectorsAtECEFLocation_Statics::NewProp_ECEFNorth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_GetECEFENUVectorsAtECEFLocation_Statics::NewProp_ECEFUp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_GetECEFENUVectorsAtECEFLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeoReferencing|ENU" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "FCartesianCoordinates is deprecated : Use the version that uses a FVector instead." },
		{ "ModuleRelativePath", "Public/GeoReferencingSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeoReferencingSystem_GetECEFENUVectorsAtECEFLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeoReferencingSystem, nullptr, "GetECEFENUVectorsAtECEFLocation", nullptr, nullptr, Z_Construct_UFunction_AGeoReferencingSystem_GetECEFENUVectorsAtECEFLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_GetECEFENUVectorsAtECEFLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGeoReferencingSystem_GetECEFENUVectorsAtECEFLocation_Statics::GeoReferencingSystem_eventGetECEFENUVectorsAtECEFLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_GetECEFENUVectorsAtECEFLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGeoReferencingSystem_GetECEFENUVectorsAtECEFLocation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_GetECEFENUVectorsAtECEFLocation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGeoReferencingSystem_GetECEFENUVectorsAtECEFLocation_Statics::GeoReferencingSystem_eventGetECEFENUVectorsAtECEFLocation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGeoReferencingSystem_GetECEFENUVectorsAtECEFLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGeoReferencingSystem_GetECEFENUVectorsAtECEFLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtECEFLocation_Statics
	{
		struct GeoReferencingSystem_eventGetENUVectorsAtECEFLocation_Parms
		{
			FCartesianCoordinates ECEFCoordinates;
			FVector East;
			FVector North;
			FVector Up;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ECEFCoordinates_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ECEFCoordinates;
		static const UECodeGen_Private::FStructPropertyParams NewProp_East;
		static const UECodeGen_Private::FStructPropertyParams NewProp_North;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Up;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtECEFLocation_Statics::NewProp_ECEFCoordinates_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtECEFLocation_Statics::NewProp_ECEFCoordinates = { "ECEFCoordinates", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventGetENUVectorsAtECEFLocation_Parms, ECEFCoordinates), Z_Construct_UScriptStruct_FCartesianCoordinates, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtECEFLocation_Statics::NewProp_ECEFCoordinates_MetaData), Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtECEFLocation_Statics::NewProp_ECEFCoordinates_MetaData) }; // 2651159933
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtECEFLocation_Statics::NewProp_East = { "East", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventGetENUVectorsAtECEFLocation_Parms, East), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtECEFLocation_Statics::NewProp_North = { "North", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventGetENUVectorsAtECEFLocation_Parms, North), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtECEFLocation_Statics::NewProp_Up = { "Up", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventGetENUVectorsAtECEFLocation_Parms, Up), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtECEFLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtECEFLocation_Statics::NewProp_ECEFCoordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtECEFLocation_Statics::NewProp_East,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtECEFLocation_Statics::NewProp_North,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtECEFLocation_Statics::NewProp_Up,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtECEFLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeoReferencing|ENU" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "FCartesianCoordinates is deprecated : Use the version that uses a FVector instead." },
		{ "ModuleRelativePath", "Public/GeoReferencingSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtECEFLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeoReferencingSystem, nullptr, "GetENUVectorsAtECEFLocation", nullptr, nullptr, Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtECEFLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtECEFLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtECEFLocation_Statics::GeoReferencingSystem_eventGetENUVectorsAtECEFLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtECEFLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtECEFLocation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtECEFLocation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtECEFLocation_Statics::GeoReferencingSystem_eventGetENUVectorsAtECEFLocation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtECEFLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtECEFLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtEngineLocation_Statics
	{
		struct GeoReferencingSystem_eventGetENUVectorsAtEngineLocation_Parms
		{
			FVector EngineCoordinates;
			FVector East;
			FVector North;
			FVector Up;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EngineCoordinates_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EngineCoordinates;
		static const UECodeGen_Private::FStructPropertyParams NewProp_East;
		static const UECodeGen_Private::FStructPropertyParams NewProp_North;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Up;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtEngineLocation_Statics::NewProp_EngineCoordinates_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtEngineLocation_Statics::NewProp_EngineCoordinates = { "EngineCoordinates", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventGetENUVectorsAtEngineLocation_Parms, EngineCoordinates), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtEngineLocation_Statics::NewProp_EngineCoordinates_MetaData), Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtEngineLocation_Statics::NewProp_EngineCoordinates_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtEngineLocation_Statics::NewProp_East = { "East", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventGetENUVectorsAtEngineLocation_Parms, East), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtEngineLocation_Statics::NewProp_North = { "North", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventGetENUVectorsAtEngineLocation_Parms, North), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtEngineLocation_Statics::NewProp_Up = { "Up", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventGetENUVectorsAtEngineLocation_Parms, Up), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtEngineLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtEngineLocation_Statics::NewProp_EngineCoordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtEngineLocation_Statics::NewProp_East,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtEngineLocation_Statics::NewProp_North,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtEngineLocation_Statics::NewProp_Up,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtEngineLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeoReferencing|ENU" },
		{ "Comment", "/**\n\x09* Get the East North Up vectors at a specific location\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeoReferencingSystem.h" },
		{ "ToolTip", "Get the East North Up vectors at a specific location" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtEngineLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeoReferencingSystem, nullptr, "GetENUVectorsAtEngineLocation", nullptr, nullptr, Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtEngineLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtEngineLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtEngineLocation_Statics::GeoReferencingSystem_eventGetENUVectorsAtEngineLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtEngineLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtEngineLocation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtEngineLocation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtEngineLocation_Statics::GeoReferencingSystem_eventGetENUVectorsAtEngineLocation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtEngineLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtEngineLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtGeographicLocation_Statics
	{
		struct GeoReferencingSystem_eventGetENUVectorsAtGeographicLocation_Parms
		{
			FGeographicCoordinates GeographicCoordinates;
			FVector East;
			FVector North;
			FVector Up;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeographicCoordinates_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GeographicCoordinates;
		static const UECodeGen_Private::FStructPropertyParams NewProp_East;
		static const UECodeGen_Private::FStructPropertyParams NewProp_North;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Up;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtGeographicLocation_Statics::NewProp_GeographicCoordinates_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtGeographicLocation_Statics::NewProp_GeographicCoordinates = { "GeographicCoordinates", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventGetENUVectorsAtGeographicLocation_Parms, GeographicCoordinates), Z_Construct_UScriptStruct_FGeographicCoordinates, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtGeographicLocation_Statics::NewProp_GeographicCoordinates_MetaData), Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtGeographicLocation_Statics::NewProp_GeographicCoordinates_MetaData) }; // 1274992448
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtGeographicLocation_Statics::NewProp_East = { "East", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventGetENUVectorsAtGeographicLocation_Parms, East), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtGeographicLocation_Statics::NewProp_North = { "North", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventGetENUVectorsAtGeographicLocation_Parms, North), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtGeographicLocation_Statics::NewProp_Up = { "Up", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventGetENUVectorsAtGeographicLocation_Parms, Up), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtGeographicLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtGeographicLocation_Statics::NewProp_GeographicCoordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtGeographicLocation_Statics::NewProp_East,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtGeographicLocation_Statics::NewProp_North,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtGeographicLocation_Statics::NewProp_Up,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtGeographicLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeoReferencing|ENU" },
		{ "Comment", "/**\n\x09* Get the East North Up vectors at a specific location\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeoReferencingSystem.h" },
		{ "ToolTip", "Get the East North Up vectors at a specific location" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtGeographicLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeoReferencingSystem, nullptr, "GetENUVectorsAtGeographicLocation", nullptr, nullptr, Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtGeographicLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtGeographicLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtGeographicLocation_Statics::GeoReferencingSystem_eventGetENUVectorsAtGeographicLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtGeographicLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtGeographicLocation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtGeographicLocation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtGeographicLocation_Statics::GeoReferencingSystem_eventGetENUVectorsAtGeographicLocation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtGeographicLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtGeographicLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtProjectedLocation_Statics
	{
		struct GeoReferencingSystem_eventGetENUVectorsAtProjectedLocation_Parms
		{
			FCartesianCoordinates ProjectedCoordinates;
			FVector East;
			FVector North;
			FVector Up;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectedCoordinates_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectedCoordinates;
		static const UECodeGen_Private::FStructPropertyParams NewProp_East;
		static const UECodeGen_Private::FStructPropertyParams NewProp_North;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Up;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtProjectedLocation_Statics::NewProp_ProjectedCoordinates_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtProjectedLocation_Statics::NewProp_ProjectedCoordinates = { "ProjectedCoordinates", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventGetENUVectorsAtProjectedLocation_Parms, ProjectedCoordinates), Z_Construct_UScriptStruct_FCartesianCoordinates, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtProjectedLocation_Statics::NewProp_ProjectedCoordinates_MetaData), Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtProjectedLocation_Statics::NewProp_ProjectedCoordinates_MetaData) }; // 2651159933
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtProjectedLocation_Statics::NewProp_East = { "East", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventGetENUVectorsAtProjectedLocation_Parms, East), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtProjectedLocation_Statics::NewProp_North = { "North", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventGetENUVectorsAtProjectedLocation_Parms, North), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtProjectedLocation_Statics::NewProp_Up = { "Up", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventGetENUVectorsAtProjectedLocation_Parms, Up), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtProjectedLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtProjectedLocation_Statics::NewProp_ProjectedCoordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtProjectedLocation_Statics::NewProp_East,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtProjectedLocation_Statics::NewProp_North,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtProjectedLocation_Statics::NewProp_Up,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtProjectedLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeoReferencing|ENU" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "FCartesianCoordinates is deprecated : Use the version that uses a FVector instead." },
		{ "ModuleRelativePath", "Public/GeoReferencingSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtProjectedLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeoReferencingSystem, nullptr, "GetENUVectorsAtProjectedLocation", nullptr, nullptr, Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtProjectedLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtProjectedLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtProjectedLocation_Statics::GeoReferencingSystem_eventGetENUVectorsAtProjectedLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtProjectedLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtProjectedLocation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtProjectedLocation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtProjectedLocation_Statics::GeoReferencingSystem_eventGetENUVectorsAtProjectedLocation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtProjectedLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtProjectedLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeoReferencingSystem_GetGeographicEllipsoidMaxRadius_Statics
	{
		struct GeoReferencingSystem_eventGetGeographicEllipsoidMaxRadius_Parms
		{
			double ReturnValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_AGeoReferencingSystem_GetGeographicEllipsoidMaxRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventGetGeographicEllipsoidMaxRadius_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeoReferencingSystem_GetGeographicEllipsoidMaxRadius_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_GetGeographicEllipsoidMaxRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_GetGeographicEllipsoidMaxRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeoReferencing|Ellipsoid" },
		{ "Comment", "/**\n\x09* Find the underlying Geographic CRS Ellipsoid and return its maximum radius\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeoReferencingSystem.h" },
		{ "ToolTip", "Find the underlying Geographic CRS Ellipsoid and return its maximum radius" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeoReferencingSystem_GetGeographicEllipsoidMaxRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeoReferencingSystem, nullptr, "GetGeographicEllipsoidMaxRadius", nullptr, nullptr, Z_Construct_UFunction_AGeoReferencingSystem_GetGeographicEllipsoidMaxRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_GetGeographicEllipsoidMaxRadius_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGeoReferencingSystem_GetGeographicEllipsoidMaxRadius_Statics::GeoReferencingSystem_eventGetGeographicEllipsoidMaxRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_GetGeographicEllipsoidMaxRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGeoReferencingSystem_GetGeographicEllipsoidMaxRadius_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_GetGeographicEllipsoidMaxRadius_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGeoReferencingSystem_GetGeographicEllipsoidMaxRadius_Statics::GeoReferencingSystem_eventGetGeographicEllipsoidMaxRadius_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGeoReferencingSystem_GetGeographicEllipsoidMaxRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGeoReferencingSystem_GetGeographicEllipsoidMaxRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeoReferencingSystem_GetGeographicEllipsoidMinRadius_Statics
	{
		struct GeoReferencingSystem_eventGetGeographicEllipsoidMinRadius_Parms
		{
			double ReturnValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_AGeoReferencingSystem_GetGeographicEllipsoidMinRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventGetGeographicEllipsoidMinRadius_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeoReferencingSystem_GetGeographicEllipsoidMinRadius_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_GetGeographicEllipsoidMinRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_GetGeographicEllipsoidMinRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeoReferencing|Ellipsoid" },
		{ "Comment", "/**\n\x09* Find the underlying Geographic CRS Ellipsoid and return its minimum radius\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeoReferencingSystem.h" },
		{ "ToolTip", "Find the underlying Geographic CRS Ellipsoid and return its minimum radius" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeoReferencingSystem_GetGeographicEllipsoidMinRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeoReferencingSystem, nullptr, "GetGeographicEllipsoidMinRadius", nullptr, nullptr, Z_Construct_UFunction_AGeoReferencingSystem_GetGeographicEllipsoidMinRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_GetGeographicEllipsoidMinRadius_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGeoReferencingSystem_GetGeographicEllipsoidMinRadius_Statics::GeoReferencingSystem_eventGetGeographicEllipsoidMinRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_GetGeographicEllipsoidMinRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGeoReferencingSystem_GetGeographicEllipsoidMinRadius_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_GetGeographicEllipsoidMinRadius_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGeoReferencingSystem_GetGeographicEllipsoidMinRadius_Statics::GeoReferencingSystem_eventGetGeographicEllipsoidMinRadius_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGeoReferencingSystem_GetGeographicEllipsoidMinRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGeoReferencingSystem_GetGeographicEllipsoidMinRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeoReferencingSystem_GetGeoReferencingSystem_Statics
	{
		struct GeoReferencingSystem_eventGetGeoReferencingSystem_Parms
		{
			UObject* WorldContextObject;
			AGeoReferencingSystem* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_GetGeoReferencingSystem_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventGetGeoReferencingSystem_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_GetGeoReferencingSystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventGetGeoReferencingSystem_Parms, ReturnValue), Z_Construct_UClass_AGeoReferencingSystem_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeoReferencingSystem_GetGeoReferencingSystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_GetGeoReferencingSystem_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_GetGeoReferencingSystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_GetGeoReferencingSystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeoReferencing" },
		{ "ModuleRelativePath", "Public/GeoReferencingSystem.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeoReferencingSystem_GetGeoReferencingSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeoReferencingSystem, nullptr, "GetGeoReferencingSystem", nullptr, nullptr, Z_Construct_UFunction_AGeoReferencingSystem_GetGeoReferencingSystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_GetGeoReferencingSystem_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGeoReferencingSystem_GetGeoReferencingSystem_Statics::GeoReferencingSystem_eventGetGeoReferencingSystem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_GetGeoReferencingSystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGeoReferencingSystem_GetGeoReferencingSystem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_GetGeoReferencingSystem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGeoReferencingSystem_GetGeoReferencingSystem_Statics::GeoReferencingSystem_eventGetGeoReferencingSystem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGeoReferencingSystem_GetGeoReferencingSystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGeoReferencingSystem_GetGeoReferencingSystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeoReferencingSystem_GetPlanetCenterTransform_Statics
	{
		struct GeoReferencingSystem_eventGetPlanetCenterTransform_Parms
		{
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_GetPlanetCenterTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventGetPlanetCenterTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeoReferencingSystem_GetPlanetCenterTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_GetPlanetCenterTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_GetPlanetCenterTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeoReferencing|Misc" },
		{ "Comment", "/**\n\x09* Set this transform to an Ellipsoid to have it positioned tangent to the origin.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeoReferencingSystem.h" },
		{ "ToolTip", "Set this transform to an Ellipsoid to have it positioned tangent to the origin." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeoReferencingSystem_GetPlanetCenterTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeoReferencingSystem, nullptr, "GetPlanetCenterTransform", nullptr, nullptr, Z_Construct_UFunction_AGeoReferencingSystem_GetPlanetCenterTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_GetPlanetCenterTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGeoReferencingSystem_GetPlanetCenterTransform_Statics::GeoReferencingSystem_eventGetPlanetCenterTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_GetPlanetCenterTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGeoReferencingSystem_GetPlanetCenterTransform_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_GetPlanetCenterTransform_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGeoReferencingSystem_GetPlanetCenterTransform_Statics::GeoReferencingSystem_eventGetPlanetCenterTransform_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGeoReferencingSystem_GetPlanetCenterTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGeoReferencingSystem_GetPlanetCenterTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeoReferencingSystem_GetProjectedEllipsoidMaxRadius_Statics
	{
		struct GeoReferencingSystem_eventGetProjectedEllipsoidMaxRadius_Parms
		{
			double ReturnValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_AGeoReferencingSystem_GetProjectedEllipsoidMaxRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventGetProjectedEllipsoidMaxRadius_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeoReferencingSystem_GetProjectedEllipsoidMaxRadius_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_GetProjectedEllipsoidMaxRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_GetProjectedEllipsoidMaxRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeoReferencing|Ellipsoid" },
		{ "Comment", "/**\n\x09* Find the underlying Projected CRS Ellipsoid and return its maximum radius\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeoReferencingSystem.h" },
		{ "ToolTip", "Find the underlying Projected CRS Ellipsoid and return its maximum radius" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeoReferencingSystem_GetProjectedEllipsoidMaxRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeoReferencingSystem, nullptr, "GetProjectedEllipsoidMaxRadius", nullptr, nullptr, Z_Construct_UFunction_AGeoReferencingSystem_GetProjectedEllipsoidMaxRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_GetProjectedEllipsoidMaxRadius_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGeoReferencingSystem_GetProjectedEllipsoidMaxRadius_Statics::GeoReferencingSystem_eventGetProjectedEllipsoidMaxRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_GetProjectedEllipsoidMaxRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGeoReferencingSystem_GetProjectedEllipsoidMaxRadius_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_GetProjectedEllipsoidMaxRadius_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGeoReferencingSystem_GetProjectedEllipsoidMaxRadius_Statics::GeoReferencingSystem_eventGetProjectedEllipsoidMaxRadius_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGeoReferencingSystem_GetProjectedEllipsoidMaxRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGeoReferencingSystem_GetProjectedEllipsoidMaxRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeoReferencingSystem_GetProjectedEllipsoidMinRadius_Statics
	{
		struct GeoReferencingSystem_eventGetProjectedEllipsoidMinRadius_Parms
		{
			double ReturnValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_AGeoReferencingSystem_GetProjectedEllipsoidMinRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventGetProjectedEllipsoidMinRadius_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeoReferencingSystem_GetProjectedEllipsoidMinRadius_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_GetProjectedEllipsoidMinRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_GetProjectedEllipsoidMinRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeoReferencing|Ellipsoid" },
		{ "Comment", "/**\n\x09* Find the underlying Projected CRS Ellipsoid and return its minimum radius\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeoReferencingSystem.h" },
		{ "ToolTip", "Find the underlying Projected CRS Ellipsoid and return its minimum radius" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeoReferencingSystem_GetProjectedEllipsoidMinRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeoReferencingSystem, nullptr, "GetProjectedEllipsoidMinRadius", nullptr, nullptr, Z_Construct_UFunction_AGeoReferencingSystem_GetProjectedEllipsoidMinRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_GetProjectedEllipsoidMinRadius_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGeoReferencingSystem_GetProjectedEllipsoidMinRadius_Statics::GeoReferencingSystem_eventGetProjectedEllipsoidMinRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_GetProjectedEllipsoidMinRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGeoReferencingSystem_GetProjectedEllipsoidMinRadius_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_GetProjectedEllipsoidMinRadius_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGeoReferencingSystem_GetProjectedEllipsoidMinRadius_Statics::GeoReferencingSystem_eventGetProjectedEllipsoidMinRadius_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGeoReferencingSystem_GetProjectedEllipsoidMinRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGeoReferencingSystem_GetProjectedEllipsoidMinRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtECEFLocation_Statics
	{
		struct GeoReferencingSystem_eventGetTangentTransformAtECEFLocation_Parms
		{
			FCartesianCoordinates ECEFCoordinates;
			FTransform ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ECEFCoordinates_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ECEFCoordinates;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtECEFLocation_Statics::NewProp_ECEFCoordinates_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtECEFLocation_Statics::NewProp_ECEFCoordinates = { "ECEFCoordinates", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventGetTangentTransformAtECEFLocation_Parms, ECEFCoordinates), Z_Construct_UScriptStruct_FCartesianCoordinates, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtECEFLocation_Statics::NewProp_ECEFCoordinates_MetaData), Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtECEFLocation_Statics::NewProp_ECEFCoordinates_MetaData) }; // 2651159933
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtECEFLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventGetTangentTransformAtECEFLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtECEFLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtECEFLocation_Statics::NewProp_ECEFCoordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtECEFLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtECEFLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeoReferencing|TangentTransforms" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "FCartesianCoordinates is deprecated : Use the version that uses a FVector instead." },
		{ "ModuleRelativePath", "Public/GeoReferencingSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtECEFLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeoReferencingSystem, nullptr, "GetTangentTransformAtECEFLocation", nullptr, nullptr, Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtECEFLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtECEFLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtECEFLocation_Statics::GeoReferencingSystem_eventGetTangentTransformAtECEFLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtECEFLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtECEFLocation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtECEFLocation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtECEFLocation_Statics::GeoReferencingSystem_eventGetTangentTransformAtECEFLocation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtECEFLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtECEFLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtEngineLocation_Statics
	{
		struct GeoReferencingSystem_eventGetTangentTransformAtEngineLocation_Parms
		{
			FVector EngineCoordinates;
			FTransform ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EngineCoordinates_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EngineCoordinates;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtEngineLocation_Statics::NewProp_EngineCoordinates_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtEngineLocation_Statics::NewProp_EngineCoordinates = { "EngineCoordinates", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventGetTangentTransformAtEngineLocation_Parms, EngineCoordinates), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtEngineLocation_Statics::NewProp_EngineCoordinates_MetaData), Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtEngineLocation_Statics::NewProp_EngineCoordinates_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtEngineLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventGetTangentTransformAtEngineLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtEngineLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtEngineLocation_Statics::NewProp_EngineCoordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtEngineLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtEngineLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeoReferencing|TangentTransforms" },
		{ "Comment", "/**\n\x09* Get the the transform to locate an object tangent to Ellipsoid at a specific location\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeoReferencingSystem.h" },
		{ "ToolTip", "Get the the transform to locate an object tangent to Ellipsoid at a specific location" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtEngineLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeoReferencingSystem, nullptr, "GetTangentTransformAtEngineLocation", nullptr, nullptr, Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtEngineLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtEngineLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtEngineLocation_Statics::GeoReferencingSystem_eventGetTangentTransformAtEngineLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtEngineLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtEngineLocation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtEngineLocation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtEngineLocation_Statics::GeoReferencingSystem_eventGetTangentTransformAtEngineLocation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtEngineLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtEngineLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtGeographicLocation_Statics
	{
		struct GeoReferencingSystem_eventGetTangentTransformAtGeographicLocation_Parms
		{
			FGeographicCoordinates GeographicCoordinates;
			FTransform ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeographicCoordinates_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GeographicCoordinates;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtGeographicLocation_Statics::NewProp_GeographicCoordinates_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtGeographicLocation_Statics::NewProp_GeographicCoordinates = { "GeographicCoordinates", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventGetTangentTransformAtGeographicLocation_Parms, GeographicCoordinates), Z_Construct_UScriptStruct_FGeographicCoordinates, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtGeographicLocation_Statics::NewProp_GeographicCoordinates_MetaData), Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtGeographicLocation_Statics::NewProp_GeographicCoordinates_MetaData) }; // 1274992448
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtGeographicLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventGetTangentTransformAtGeographicLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtGeographicLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtGeographicLocation_Statics::NewProp_GeographicCoordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtGeographicLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtGeographicLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeoReferencing|TangentTransforms" },
		{ "Comment", "/**\n\x09* Get the the transform to locate an object tangent to Ellipsoid at a specific location\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeoReferencingSystem.h" },
		{ "ToolTip", "Get the the transform to locate an object tangent to Ellipsoid at a specific location" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtGeographicLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeoReferencingSystem, nullptr, "GetTangentTransformAtGeographicLocation", nullptr, nullptr, Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtGeographicLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtGeographicLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtGeographicLocation_Statics::GeoReferencingSystem_eventGetTangentTransformAtGeographicLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtGeographicLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtGeographicLocation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtGeographicLocation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtGeographicLocation_Statics::GeoReferencingSystem_eventGetTangentTransformAtGeographicLocation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtGeographicLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtGeographicLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtProjectedLocation_Statics
	{
		struct GeoReferencingSystem_eventGetTangentTransformAtProjectedLocation_Parms
		{
			FCartesianCoordinates ProjectedCoordinates;
			FTransform ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectedCoordinates_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectedCoordinates;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtProjectedLocation_Statics::NewProp_ProjectedCoordinates_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtProjectedLocation_Statics::NewProp_ProjectedCoordinates = { "ProjectedCoordinates", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventGetTangentTransformAtProjectedLocation_Parms, ProjectedCoordinates), Z_Construct_UScriptStruct_FCartesianCoordinates, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtProjectedLocation_Statics::NewProp_ProjectedCoordinates_MetaData), Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtProjectedLocation_Statics::NewProp_ProjectedCoordinates_MetaData) }; // 2651159933
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtProjectedLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventGetTangentTransformAtProjectedLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtProjectedLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtProjectedLocation_Statics::NewProp_ProjectedCoordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtProjectedLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtProjectedLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeoReferencing|TangentTransforms" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "FCartesianCoordinates is deprecated : Use the version that uses a FVector instead." },
		{ "ModuleRelativePath", "Public/GeoReferencingSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtProjectedLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeoReferencingSystem, nullptr, "GetTangentTransformAtProjectedLocation", nullptr, nullptr, Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtProjectedLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtProjectedLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtProjectedLocation_Statics::GeoReferencingSystem_eventGetTangentTransformAtProjectedLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtProjectedLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtProjectedLocation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtProjectedLocation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtProjectedLocation_Statics::GeoReferencingSystem_eventGetTangentTransformAtProjectedLocation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtProjectedLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtProjectedLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeoReferencingSystem_IsCRSStringValid_Statics
	{
		struct GeoReferencingSystem_eventIsCRSStringValid_Parms
		{
			FString CRSString;
			FString Error;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_CRSString;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Error;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_IsCRSStringValid_Statics::NewProp_CRSString = { "CRSString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventIsCRSStringValid_Parms, CRSString), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_IsCRSStringValid_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventIsCRSStringValid_Parms, Error), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AGeoReferencingSystem_IsCRSStringValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GeoReferencingSystem_eventIsCRSStringValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_IsCRSStringValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeoReferencingSystem_eventIsCRSStringValid_Parms), &Z_Construct_UFunction_AGeoReferencingSystem_IsCRSStringValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeoReferencingSystem_IsCRSStringValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_IsCRSStringValid_Statics::NewProp_CRSString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_IsCRSStringValid_Statics::NewProp_Error,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_IsCRSStringValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_IsCRSStringValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeoReferencing|Misc" },
		{ "Comment", "/**\n\x09* Check if the string corresponds to a valid CRS descriptor\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeoReferencingSystem.h" },
		{ "ToolTip", "Check if the string corresponds to a valid CRS descriptor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeoReferencingSystem_IsCRSStringValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeoReferencingSystem, nullptr, "IsCRSStringValid", nullptr, nullptr, Z_Construct_UFunction_AGeoReferencingSystem_IsCRSStringValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_IsCRSStringValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGeoReferencingSystem_IsCRSStringValid_Statics::GeoReferencingSystem_eventIsCRSStringValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_IsCRSStringValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGeoReferencingSystem_IsCRSStringValid_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_IsCRSStringValid_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGeoReferencingSystem_IsCRSStringValid_Statics::GeoReferencingSystem_eventIsCRSStringValid_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGeoReferencingSystem_IsCRSStringValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGeoReferencingSystem_IsCRSStringValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeoReferencingSystem_K2_ECEFToEngine_Statics
	{
		struct GeoReferencingSystem_eventK2_ECEFToEngine_Parms
		{
			FVector ECEFCoordinates;
			FVector EngineCoordinates;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ECEFCoordinates_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ECEFCoordinates;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EngineCoordinates;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_K2_ECEFToEngine_Statics::NewProp_ECEFCoordinates_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_K2_ECEFToEngine_Statics::NewProp_ECEFCoordinates = { "ECEFCoordinates", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventK2_ECEFToEngine_Parms, ECEFCoordinates), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_K2_ECEFToEngine_Statics::NewProp_ECEFCoordinates_MetaData), Z_Construct_UFunction_AGeoReferencingSystem_K2_ECEFToEngine_Statics::NewProp_ECEFCoordinates_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_K2_ECEFToEngine_Statics::NewProp_EngineCoordinates = { "EngineCoordinates", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventK2_ECEFToEngine_Parms, EngineCoordinates), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeoReferencingSystem_K2_ECEFToEngine_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_K2_ECEFToEngine_Statics::NewProp_ECEFCoordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_K2_ECEFToEngine_Statics::NewProp_EngineCoordinates,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_K2_ECEFToEngine_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeoReferencing|Transformations" },
		{ "Comment", "/**\n\x09* Convert a Vector expressed in ECEF CRS to ENGINE space\n\x09*/" },
		{ "DisplayName", "ECEF To Engine" },
		{ "ModuleRelativePath", "Public/GeoReferencingSystem.h" },
		{ "ToolTip", "Convert a Vector expressed in ECEF CRS to ENGINE space" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeoReferencingSystem_K2_ECEFToEngine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeoReferencingSystem, nullptr, "K2_ECEFToEngine", nullptr, nullptr, Z_Construct_UFunction_AGeoReferencingSystem_K2_ECEFToEngine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_K2_ECEFToEngine_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGeoReferencingSystem_K2_ECEFToEngine_Statics::GeoReferencingSystem_eventK2_ECEFToEngine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_K2_ECEFToEngine_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGeoReferencingSystem_K2_ECEFToEngine_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_K2_ECEFToEngine_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGeoReferencingSystem_K2_ECEFToEngine_Statics::GeoReferencingSystem_eventK2_ECEFToEngine_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGeoReferencingSystem_K2_ECEFToEngine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGeoReferencingSystem_K2_ECEFToEngine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeoReferencingSystem_K2_ECEFToGeographic_Statics
	{
		struct GeoReferencingSystem_eventK2_ECEFToGeographic_Parms
		{
			FVector ECEFCoordinates;
			FGeographicCoordinates GeographicCoordinates;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ECEFCoordinates_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ECEFCoordinates;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GeographicCoordinates;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_K2_ECEFToGeographic_Statics::NewProp_ECEFCoordinates_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_K2_ECEFToGeographic_Statics::NewProp_ECEFCoordinates = { "ECEFCoordinates", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventK2_ECEFToGeographic_Parms, ECEFCoordinates), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_K2_ECEFToGeographic_Statics::NewProp_ECEFCoordinates_MetaData), Z_Construct_UFunction_AGeoReferencingSystem_K2_ECEFToGeographic_Statics::NewProp_ECEFCoordinates_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_K2_ECEFToGeographic_Statics::NewProp_GeographicCoordinates = { "GeographicCoordinates", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventK2_ECEFToGeographic_Parms, GeographicCoordinates), Z_Construct_UScriptStruct_FGeographicCoordinates, METADATA_PARAMS(0, nullptr) }; // 1274992448
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeoReferencingSystem_K2_ECEFToGeographic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_K2_ECEFToGeographic_Statics::NewProp_ECEFCoordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_K2_ECEFToGeographic_Statics::NewProp_GeographicCoordinates,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_K2_ECEFToGeographic_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeoReferencing|Transformations" },
		{ "Comment", "/**\n\x09* Convert a Coordinate expressed in ECEF CRS to GEOGRAPHIC CRS\n\x09*/" },
		{ "DisplayName", "ECEF To Geographic" },
		{ "ModuleRelativePath", "Public/GeoReferencingSystem.h" },
		{ "ToolTip", "Convert a Coordinate expressed in ECEF CRS to GEOGRAPHIC CRS" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeoReferencingSystem_K2_ECEFToGeographic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeoReferencingSystem, nullptr, "K2_ECEFToGeographic", nullptr, nullptr, Z_Construct_UFunction_AGeoReferencingSystem_K2_ECEFToGeographic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_K2_ECEFToGeographic_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGeoReferencingSystem_K2_ECEFToGeographic_Statics::GeoReferencingSystem_eventK2_ECEFToGeographic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_K2_ECEFToGeographic_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGeoReferencingSystem_K2_ECEFToGeographic_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_K2_ECEFToGeographic_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGeoReferencingSystem_K2_ECEFToGeographic_Statics::GeoReferencingSystem_eventK2_ECEFToGeographic_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGeoReferencingSystem_K2_ECEFToGeographic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGeoReferencingSystem_K2_ECEFToGeographic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeoReferencingSystem_K2_ECEFToProjected_Statics
	{
		struct GeoReferencingSystem_eventK2_ECEFToProjected_Parms
		{
			FVector ECEFCoordinates;
			FVector ProjectedCoordinates;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ECEFCoordinates_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ECEFCoordinates;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectedCoordinates;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_K2_ECEFToProjected_Statics::NewProp_ECEFCoordinates_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_K2_ECEFToProjected_Statics::NewProp_ECEFCoordinates = { "ECEFCoordinates", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventK2_ECEFToProjected_Parms, ECEFCoordinates), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_K2_ECEFToProjected_Statics::NewProp_ECEFCoordinates_MetaData), Z_Construct_UFunction_AGeoReferencingSystem_K2_ECEFToProjected_Statics::NewProp_ECEFCoordinates_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_K2_ECEFToProjected_Statics::NewProp_ProjectedCoordinates = { "ProjectedCoordinates", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventK2_ECEFToProjected_Parms, ProjectedCoordinates), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeoReferencingSystem_K2_ECEFToProjected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_K2_ECEFToProjected_Statics::NewProp_ECEFCoordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_K2_ECEFToProjected_Statics::NewProp_ProjectedCoordinates,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_K2_ECEFToProjected_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeoReferencing|Transformations" },
		{ "Comment", "/**\n\x09* Convert a Coordinate expressed in ECEF CRS to PROJECTED CRS\n\x09*/" },
		{ "DisplayName", "ECEF To Projected" },
		{ "ModuleRelativePath", "Public/GeoReferencingSystem.h" },
		{ "ToolTip", "Convert a Coordinate expressed in ECEF CRS to PROJECTED CRS" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeoReferencingSystem_K2_ECEFToProjected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeoReferencingSystem, nullptr, "K2_ECEFToProjected", nullptr, nullptr, Z_Construct_UFunction_AGeoReferencingSystem_K2_ECEFToProjected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_K2_ECEFToProjected_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGeoReferencingSystem_K2_ECEFToProjected_Statics::GeoReferencingSystem_eventK2_ECEFToProjected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_K2_ECEFToProjected_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGeoReferencingSystem_K2_ECEFToProjected_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_K2_ECEFToProjected_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGeoReferencingSystem_K2_ECEFToProjected_Statics::GeoReferencingSystem_eventK2_ECEFToProjected_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGeoReferencingSystem_K2_ECEFToProjected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGeoReferencingSystem_K2_ECEFToProjected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeoReferencingSystem_K2_EngineToECEF_Statics
	{
		struct GeoReferencingSystem_eventK2_EngineToECEF_Parms
		{
			FVector EngineCoordinates;
			FVector ECEFCoordinates;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EngineCoordinates_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EngineCoordinates;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ECEFCoordinates;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_K2_EngineToECEF_Statics::NewProp_EngineCoordinates_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_K2_EngineToECEF_Statics::NewProp_EngineCoordinates = { "EngineCoordinates", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventK2_EngineToECEF_Parms, EngineCoordinates), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_K2_EngineToECEF_Statics::NewProp_EngineCoordinates_MetaData), Z_Construct_UFunction_AGeoReferencingSystem_K2_EngineToECEF_Statics::NewProp_EngineCoordinates_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_K2_EngineToECEF_Statics::NewProp_ECEFCoordinates = { "ECEFCoordinates", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventK2_EngineToECEF_Parms, ECEFCoordinates), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeoReferencingSystem_K2_EngineToECEF_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_K2_EngineToECEF_Statics::NewProp_EngineCoordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_K2_EngineToECEF_Statics::NewProp_ECEFCoordinates,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_K2_EngineToECEF_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeoReferencing|Transformations" },
		{ "Comment", "/**\n\x09* Convert a Vector expressed in ENGINE space to the ECEF CRS\n\x09*/" },
		{ "DisplayName", "Engine To ECEF" },
		{ "ModuleRelativePath", "Public/GeoReferencingSystem.h" },
		{ "ToolTip", "Convert a Vector expressed in ENGINE space to the ECEF CRS" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeoReferencingSystem_K2_EngineToECEF_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeoReferencingSystem, nullptr, "K2_EngineToECEF", nullptr, nullptr, Z_Construct_UFunction_AGeoReferencingSystem_K2_EngineToECEF_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_K2_EngineToECEF_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGeoReferencingSystem_K2_EngineToECEF_Statics::GeoReferencingSystem_eventK2_EngineToECEF_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_K2_EngineToECEF_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGeoReferencingSystem_K2_EngineToECEF_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_K2_EngineToECEF_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGeoReferencingSystem_K2_EngineToECEF_Statics::GeoReferencingSystem_eventK2_EngineToECEF_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGeoReferencingSystem_K2_EngineToECEF()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGeoReferencingSystem_K2_EngineToECEF_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeoReferencingSystem_K2_EngineToProjected_Statics
	{
		struct GeoReferencingSystem_eventK2_EngineToProjected_Parms
		{
			FVector EngineCoordinates;
			FVector ProjectedCoordinates;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EngineCoordinates_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EngineCoordinates;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectedCoordinates;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_K2_EngineToProjected_Statics::NewProp_EngineCoordinates_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_K2_EngineToProjected_Statics::NewProp_EngineCoordinates = { "EngineCoordinates", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventK2_EngineToProjected_Parms, EngineCoordinates), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_K2_EngineToProjected_Statics::NewProp_EngineCoordinates_MetaData), Z_Construct_UFunction_AGeoReferencingSystem_K2_EngineToProjected_Statics::NewProp_EngineCoordinates_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_K2_EngineToProjected_Statics::NewProp_ProjectedCoordinates = { "ProjectedCoordinates", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventK2_EngineToProjected_Parms, ProjectedCoordinates), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeoReferencingSystem_K2_EngineToProjected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_K2_EngineToProjected_Statics::NewProp_EngineCoordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_K2_EngineToProjected_Statics::NewProp_ProjectedCoordinates,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_K2_EngineToProjected_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeoReferencing|Transformations" },
		{ "Comment", "/**\n\x09* Convert a Vector expressed in ENGINE space to the PROJECTED CRS\n\x09*/" },
		{ "DisplayName", "Engine To Projected" },
		{ "ModuleRelativePath", "Public/GeoReferencingSystem.h" },
		{ "ToolTip", "Convert a Vector expressed in ENGINE space to the PROJECTED CRS" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeoReferencingSystem_K2_EngineToProjected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeoReferencingSystem, nullptr, "K2_EngineToProjected", nullptr, nullptr, Z_Construct_UFunction_AGeoReferencingSystem_K2_EngineToProjected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_K2_EngineToProjected_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGeoReferencingSystem_K2_EngineToProjected_Statics::GeoReferencingSystem_eventK2_EngineToProjected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_K2_EngineToProjected_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGeoReferencingSystem_K2_EngineToProjected_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_K2_EngineToProjected_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGeoReferencingSystem_K2_EngineToProjected_Statics::GeoReferencingSystem_eventK2_EngineToProjected_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGeoReferencingSystem_K2_EngineToProjected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGeoReferencingSystem_K2_EngineToProjected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeoReferencingSystem_K2_GeographicToECEF_Statics
	{
		struct GeoReferencingSystem_eventK2_GeographicToECEF_Parms
		{
			FGeographicCoordinates GeographicCoordinates;
			FVector ECEFCoordinates;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeographicCoordinates_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GeographicCoordinates;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ECEFCoordinates;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_K2_GeographicToECEF_Statics::NewProp_GeographicCoordinates_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_K2_GeographicToECEF_Statics::NewProp_GeographicCoordinates = { "GeographicCoordinates", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventK2_GeographicToECEF_Parms, GeographicCoordinates), Z_Construct_UScriptStruct_FGeographicCoordinates, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_K2_GeographicToECEF_Statics::NewProp_GeographicCoordinates_MetaData), Z_Construct_UFunction_AGeoReferencingSystem_K2_GeographicToECEF_Statics::NewProp_GeographicCoordinates_MetaData) }; // 1274992448
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_K2_GeographicToECEF_Statics::NewProp_ECEFCoordinates = { "ECEFCoordinates", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventK2_GeographicToECEF_Parms, ECEFCoordinates), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeoReferencingSystem_K2_GeographicToECEF_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_K2_GeographicToECEF_Statics::NewProp_GeographicCoordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_K2_GeographicToECEF_Statics::NewProp_ECEFCoordinates,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_K2_GeographicToECEF_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeoReferencing|Transformations" },
		{ "Comment", "/**\n\x09* Convert a Coordinate expressed in GEOGRAPHIC CRS to ECEF CRS\n\x09*/" },
		{ "DisplayName", "Geographic To ECEF" },
		{ "ModuleRelativePath", "Public/GeoReferencingSystem.h" },
		{ "ToolTip", "Convert a Coordinate expressed in GEOGRAPHIC CRS to ECEF CRS" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeoReferencingSystem_K2_GeographicToECEF_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeoReferencingSystem, nullptr, "K2_GeographicToECEF", nullptr, nullptr, Z_Construct_UFunction_AGeoReferencingSystem_K2_GeographicToECEF_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_K2_GeographicToECEF_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGeoReferencingSystem_K2_GeographicToECEF_Statics::GeoReferencingSystem_eventK2_GeographicToECEF_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_K2_GeographicToECEF_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGeoReferencingSystem_K2_GeographicToECEF_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_K2_GeographicToECEF_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGeoReferencingSystem_K2_GeographicToECEF_Statics::GeoReferencingSystem_eventK2_GeographicToECEF_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGeoReferencingSystem_K2_GeographicToECEF()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGeoReferencingSystem_K2_GeographicToECEF_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeoReferencingSystem_K2_GeographicToProjected_Statics
	{
		struct GeoReferencingSystem_eventK2_GeographicToProjected_Parms
		{
			FGeographicCoordinates GeographicCoordinates;
			FVector ProjectedCoordinates;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeographicCoordinates_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GeographicCoordinates;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectedCoordinates;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_K2_GeographicToProjected_Statics::NewProp_GeographicCoordinates_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_K2_GeographicToProjected_Statics::NewProp_GeographicCoordinates = { "GeographicCoordinates", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventK2_GeographicToProjected_Parms, GeographicCoordinates), Z_Construct_UScriptStruct_FGeographicCoordinates, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_K2_GeographicToProjected_Statics::NewProp_GeographicCoordinates_MetaData), Z_Construct_UFunction_AGeoReferencingSystem_K2_GeographicToProjected_Statics::NewProp_GeographicCoordinates_MetaData) }; // 1274992448
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_K2_GeographicToProjected_Statics::NewProp_ProjectedCoordinates = { "ProjectedCoordinates", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventK2_GeographicToProjected_Parms, ProjectedCoordinates), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeoReferencingSystem_K2_GeographicToProjected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_K2_GeographicToProjected_Statics::NewProp_GeographicCoordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_K2_GeographicToProjected_Statics::NewProp_ProjectedCoordinates,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_K2_GeographicToProjected_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeoReferencing|Transformations" },
		{ "Comment", "/**\n\x09* Convert a Coordinate expressed in GEOGRAPHIC CRS to PROJECTED CRS\n\x09*/" },
		{ "DisplayName", "Geographic To Projected" },
		{ "ModuleRelativePath", "Public/GeoReferencingSystem.h" },
		{ "ToolTip", "Convert a Coordinate expressed in GEOGRAPHIC CRS to PROJECTED CRS" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeoReferencingSystem_K2_GeographicToProjected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeoReferencingSystem, nullptr, "K2_GeographicToProjected", nullptr, nullptr, Z_Construct_UFunction_AGeoReferencingSystem_K2_GeographicToProjected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_K2_GeographicToProjected_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGeoReferencingSystem_K2_GeographicToProjected_Statics::GeoReferencingSystem_eventK2_GeographicToProjected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_K2_GeographicToProjected_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGeoReferencingSystem_K2_GeographicToProjected_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_K2_GeographicToProjected_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGeoReferencingSystem_K2_GeographicToProjected_Statics::GeoReferencingSystem_eventK2_GeographicToProjected_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGeoReferencingSystem_K2_GeographicToProjected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGeoReferencingSystem_K2_GeographicToProjected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeoReferencingSystem_K2_GetECEFENUVectorsAtECEFLocation_Statics
	{
		struct GeoReferencingSystem_eventK2_GetECEFENUVectorsAtECEFLocation_Parms
		{
			FVector ECEFCoordinates;
			FVector ECEFEast;
			FVector ECEFNorth;
			FVector ECEFUp;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ECEFCoordinates_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ECEFCoordinates;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ECEFEast;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ECEFNorth;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ECEFUp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_K2_GetECEFENUVectorsAtECEFLocation_Statics::NewProp_ECEFCoordinates_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_K2_GetECEFENUVectorsAtECEFLocation_Statics::NewProp_ECEFCoordinates = { "ECEFCoordinates", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventK2_GetECEFENUVectorsAtECEFLocation_Parms, ECEFCoordinates), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_K2_GetECEFENUVectorsAtECEFLocation_Statics::NewProp_ECEFCoordinates_MetaData), Z_Construct_UFunction_AGeoReferencingSystem_K2_GetECEFENUVectorsAtECEFLocation_Statics::NewProp_ECEFCoordinates_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_K2_GetECEFENUVectorsAtECEFLocation_Statics::NewProp_ECEFEast = { "ECEFEast", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventK2_GetECEFENUVectorsAtECEFLocation_Parms, ECEFEast), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_K2_GetECEFENUVectorsAtECEFLocation_Statics::NewProp_ECEFNorth = { "ECEFNorth", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventK2_GetECEFENUVectorsAtECEFLocation_Parms, ECEFNorth), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_K2_GetECEFENUVectorsAtECEFLocation_Statics::NewProp_ECEFUp = { "ECEFUp", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventK2_GetECEFENUVectorsAtECEFLocation_Parms, ECEFUp), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeoReferencingSystem_K2_GetECEFENUVectorsAtECEFLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_K2_GetECEFENUVectorsAtECEFLocation_Statics::NewProp_ECEFCoordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_K2_GetECEFENUVectorsAtECEFLocation_Statics::NewProp_ECEFEast,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_K2_GetECEFENUVectorsAtECEFLocation_Statics::NewProp_ECEFNorth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_K2_GetECEFENUVectorsAtECEFLocation_Statics::NewProp_ECEFUp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_K2_GetECEFENUVectorsAtECEFLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeoReferencing|ENU" },
		{ "Comment", "/**\n\x09* Get the East North Up vectors at a specific location - Not in engine frame, but in pure ECEF Frame !\n\x09*/" },
		{ "DisplayName", "Get ECEF ENU Vectors At ECEF Location" },
		{ "ModuleRelativePath", "Public/GeoReferencingSystem.h" },
		{ "ToolTip", "Get the East North Up vectors at a specific location - Not in engine frame, but in pure ECEF Frame !" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeoReferencingSystem_K2_GetECEFENUVectorsAtECEFLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeoReferencingSystem, nullptr, "K2_GetECEFENUVectorsAtECEFLocation", nullptr, nullptr, Z_Construct_UFunction_AGeoReferencingSystem_K2_GetECEFENUVectorsAtECEFLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_K2_GetECEFENUVectorsAtECEFLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGeoReferencingSystem_K2_GetECEFENUVectorsAtECEFLocation_Statics::GeoReferencingSystem_eventK2_GetECEFENUVectorsAtECEFLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_K2_GetECEFENUVectorsAtECEFLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGeoReferencingSystem_K2_GetECEFENUVectorsAtECEFLocation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_K2_GetECEFENUVectorsAtECEFLocation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGeoReferencingSystem_K2_GetECEFENUVectorsAtECEFLocation_Statics::GeoReferencingSystem_eventK2_GetECEFENUVectorsAtECEFLocation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGeoReferencingSystem_K2_GetECEFENUVectorsAtECEFLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGeoReferencingSystem_K2_GetECEFENUVectorsAtECEFLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeoReferencingSystem_K2_GetENUVectorsAtECEFLocation_Statics
	{
		struct GeoReferencingSystem_eventK2_GetENUVectorsAtECEFLocation_Parms
		{
			FVector ECEFCoordinates;
			FVector East;
			FVector North;
			FVector Up;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ECEFCoordinates_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ECEFCoordinates;
		static const UECodeGen_Private::FStructPropertyParams NewProp_East;
		static const UECodeGen_Private::FStructPropertyParams NewProp_North;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Up;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_K2_GetENUVectorsAtECEFLocation_Statics::NewProp_ECEFCoordinates_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_K2_GetENUVectorsAtECEFLocation_Statics::NewProp_ECEFCoordinates = { "ECEFCoordinates", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventK2_GetENUVectorsAtECEFLocation_Parms, ECEFCoordinates), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_K2_GetENUVectorsAtECEFLocation_Statics::NewProp_ECEFCoordinates_MetaData), Z_Construct_UFunction_AGeoReferencingSystem_K2_GetENUVectorsAtECEFLocation_Statics::NewProp_ECEFCoordinates_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_K2_GetENUVectorsAtECEFLocation_Statics::NewProp_East = { "East", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventK2_GetENUVectorsAtECEFLocation_Parms, East), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_K2_GetENUVectorsAtECEFLocation_Statics::NewProp_North = { "North", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventK2_GetENUVectorsAtECEFLocation_Parms, North), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_K2_GetENUVectorsAtECEFLocation_Statics::NewProp_Up = { "Up", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventK2_GetENUVectorsAtECEFLocation_Parms, Up), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeoReferencingSystem_K2_GetENUVectorsAtECEFLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_K2_GetENUVectorsAtECEFLocation_Statics::NewProp_ECEFCoordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_K2_GetENUVectorsAtECEFLocation_Statics::NewProp_East,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_K2_GetENUVectorsAtECEFLocation_Statics::NewProp_North,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_K2_GetENUVectorsAtECEFLocation_Statics::NewProp_Up,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_K2_GetENUVectorsAtECEFLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeoReferencing|ENU" },
		{ "Comment", "/**\n\x09* Get the East North Up vectors at a specific location\n\x09*/" },
		{ "DisplayName", "Get ENU Vectors At ECEF Location" },
		{ "ModuleRelativePath", "Public/GeoReferencingSystem.h" },
		{ "ToolTip", "Get the East North Up vectors at a specific location" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeoReferencingSystem_K2_GetENUVectorsAtECEFLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeoReferencingSystem, nullptr, "K2_GetENUVectorsAtECEFLocation", nullptr, nullptr, Z_Construct_UFunction_AGeoReferencingSystem_K2_GetENUVectorsAtECEFLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_K2_GetENUVectorsAtECEFLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGeoReferencingSystem_K2_GetENUVectorsAtECEFLocation_Statics::GeoReferencingSystem_eventK2_GetENUVectorsAtECEFLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_K2_GetENUVectorsAtECEFLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGeoReferencingSystem_K2_GetENUVectorsAtECEFLocation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_K2_GetENUVectorsAtECEFLocation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGeoReferencingSystem_K2_GetENUVectorsAtECEFLocation_Statics::GeoReferencingSystem_eventK2_GetENUVectorsAtECEFLocation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGeoReferencingSystem_K2_GetENUVectorsAtECEFLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGeoReferencingSystem_K2_GetENUVectorsAtECEFLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeoReferencingSystem_K2_GetENUVectorsAtProjectedLocation_Statics
	{
		struct GeoReferencingSystem_eventK2_GetENUVectorsAtProjectedLocation_Parms
		{
			FVector ProjectedCoordinates;
			FVector East;
			FVector North;
			FVector Up;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectedCoordinates_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectedCoordinates;
		static const UECodeGen_Private::FStructPropertyParams NewProp_East;
		static const UECodeGen_Private::FStructPropertyParams NewProp_North;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Up;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_K2_GetENUVectorsAtProjectedLocation_Statics::NewProp_ProjectedCoordinates_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_K2_GetENUVectorsAtProjectedLocation_Statics::NewProp_ProjectedCoordinates = { "ProjectedCoordinates", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventK2_GetENUVectorsAtProjectedLocation_Parms, ProjectedCoordinates), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_K2_GetENUVectorsAtProjectedLocation_Statics::NewProp_ProjectedCoordinates_MetaData), Z_Construct_UFunction_AGeoReferencingSystem_K2_GetENUVectorsAtProjectedLocation_Statics::NewProp_ProjectedCoordinates_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_K2_GetENUVectorsAtProjectedLocation_Statics::NewProp_East = { "East", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventK2_GetENUVectorsAtProjectedLocation_Parms, East), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_K2_GetENUVectorsAtProjectedLocation_Statics::NewProp_North = { "North", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventK2_GetENUVectorsAtProjectedLocation_Parms, North), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_K2_GetENUVectorsAtProjectedLocation_Statics::NewProp_Up = { "Up", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventK2_GetENUVectorsAtProjectedLocation_Parms, Up), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeoReferencingSystem_K2_GetENUVectorsAtProjectedLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_K2_GetENUVectorsAtProjectedLocation_Statics::NewProp_ProjectedCoordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_K2_GetENUVectorsAtProjectedLocation_Statics::NewProp_East,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_K2_GetENUVectorsAtProjectedLocation_Statics::NewProp_North,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_K2_GetENUVectorsAtProjectedLocation_Statics::NewProp_Up,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_K2_GetENUVectorsAtProjectedLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeoReferencing|ENU" },
		{ "Comment", "/**\n\x09* Get the East North Up vectors at a specific location\n\x09*/" },
		{ "DisplayName", "Get ENU Vectors At Projected Location" },
		{ "ModuleRelativePath", "Public/GeoReferencingSystem.h" },
		{ "ToolTip", "Get the East North Up vectors at a specific location" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeoReferencingSystem_K2_GetENUVectorsAtProjectedLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeoReferencingSystem, nullptr, "K2_GetENUVectorsAtProjectedLocation", nullptr, nullptr, Z_Construct_UFunction_AGeoReferencingSystem_K2_GetENUVectorsAtProjectedLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_K2_GetENUVectorsAtProjectedLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGeoReferencingSystem_K2_GetENUVectorsAtProjectedLocation_Statics::GeoReferencingSystem_eventK2_GetENUVectorsAtProjectedLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_K2_GetENUVectorsAtProjectedLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGeoReferencingSystem_K2_GetENUVectorsAtProjectedLocation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_K2_GetENUVectorsAtProjectedLocation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGeoReferencingSystem_K2_GetENUVectorsAtProjectedLocation_Statics::GeoReferencingSystem_eventK2_GetENUVectorsAtProjectedLocation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGeoReferencingSystem_K2_GetENUVectorsAtProjectedLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGeoReferencingSystem_K2_GetENUVectorsAtProjectedLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeoReferencingSystem_K2_GetTangentTransformAtECEFLocation_Statics
	{
		struct GeoReferencingSystem_eventK2_GetTangentTransformAtECEFLocation_Parms
		{
			FVector ECEFCoordinates;
			FTransform ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ECEFCoordinates_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ECEFCoordinates;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_K2_GetTangentTransformAtECEFLocation_Statics::NewProp_ECEFCoordinates_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_K2_GetTangentTransformAtECEFLocation_Statics::NewProp_ECEFCoordinates = { "ECEFCoordinates", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventK2_GetTangentTransformAtECEFLocation_Parms, ECEFCoordinates), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_K2_GetTangentTransformAtECEFLocation_Statics::NewProp_ECEFCoordinates_MetaData), Z_Construct_UFunction_AGeoReferencingSystem_K2_GetTangentTransformAtECEFLocation_Statics::NewProp_ECEFCoordinates_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_K2_GetTangentTransformAtECEFLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventK2_GetTangentTransformAtECEFLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeoReferencingSystem_K2_GetTangentTransformAtECEFLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_K2_GetTangentTransformAtECEFLocation_Statics::NewProp_ECEFCoordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_K2_GetTangentTransformAtECEFLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_K2_GetTangentTransformAtECEFLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeoReferencing|TangentTransforms" },
		{ "Comment", "/**\n\x09* Get the the transform to locate an object tangent to Ellipsoid at a specific location\n\x09*/" },
		{ "DisplayName", "Get Tangent Transform At ECEFLocation" },
		{ "ModuleRelativePath", "Public/GeoReferencingSystem.h" },
		{ "ToolTip", "Get the the transform to locate an object tangent to Ellipsoid at a specific location" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeoReferencingSystem_K2_GetTangentTransformAtECEFLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeoReferencingSystem, nullptr, "K2_GetTangentTransformAtECEFLocation", nullptr, nullptr, Z_Construct_UFunction_AGeoReferencingSystem_K2_GetTangentTransformAtECEFLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_K2_GetTangentTransformAtECEFLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGeoReferencingSystem_K2_GetTangentTransformAtECEFLocation_Statics::GeoReferencingSystem_eventK2_GetTangentTransformAtECEFLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_K2_GetTangentTransformAtECEFLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGeoReferencingSystem_K2_GetTangentTransformAtECEFLocation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_K2_GetTangentTransformAtECEFLocation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGeoReferencingSystem_K2_GetTangentTransformAtECEFLocation_Statics::GeoReferencingSystem_eventK2_GetTangentTransformAtECEFLocation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGeoReferencingSystem_K2_GetTangentTransformAtECEFLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGeoReferencingSystem_K2_GetTangentTransformAtECEFLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeoReferencingSystem_K2_GetTangentTransformAtProjectedLocation_Statics
	{
		struct GeoReferencingSystem_eventK2_GetTangentTransformAtProjectedLocation_Parms
		{
			FVector ProjectedCoordinates;
			FTransform ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectedCoordinates_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectedCoordinates;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_K2_GetTangentTransformAtProjectedLocation_Statics::NewProp_ProjectedCoordinates_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_K2_GetTangentTransformAtProjectedLocation_Statics::NewProp_ProjectedCoordinates = { "ProjectedCoordinates", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventK2_GetTangentTransformAtProjectedLocation_Parms, ProjectedCoordinates), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_K2_GetTangentTransformAtProjectedLocation_Statics::NewProp_ProjectedCoordinates_MetaData), Z_Construct_UFunction_AGeoReferencingSystem_K2_GetTangentTransformAtProjectedLocation_Statics::NewProp_ProjectedCoordinates_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_K2_GetTangentTransformAtProjectedLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventK2_GetTangentTransformAtProjectedLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeoReferencingSystem_K2_GetTangentTransformAtProjectedLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_K2_GetTangentTransformAtProjectedLocation_Statics::NewProp_ProjectedCoordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_K2_GetTangentTransformAtProjectedLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_K2_GetTangentTransformAtProjectedLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeoReferencing|TangentTransforms" },
		{ "Comment", "/**\n\x09* Get the the transform to locate an object tangent to Ellipsoid at a specific location\n\x09*/" },
		{ "DisplayName", "Get Tangent Transform At Projected Location" },
		{ "ModuleRelativePath", "Public/GeoReferencingSystem.h" },
		{ "ToolTip", "Get the the transform to locate an object tangent to Ellipsoid at a specific location" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeoReferencingSystem_K2_GetTangentTransformAtProjectedLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeoReferencingSystem, nullptr, "K2_GetTangentTransformAtProjectedLocation", nullptr, nullptr, Z_Construct_UFunction_AGeoReferencingSystem_K2_GetTangentTransformAtProjectedLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_K2_GetTangentTransformAtProjectedLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGeoReferencingSystem_K2_GetTangentTransformAtProjectedLocation_Statics::GeoReferencingSystem_eventK2_GetTangentTransformAtProjectedLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_K2_GetTangentTransformAtProjectedLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGeoReferencingSystem_K2_GetTangentTransformAtProjectedLocation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_K2_GetTangentTransformAtProjectedLocation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGeoReferencingSystem_K2_GetTangentTransformAtProjectedLocation_Statics::GeoReferencingSystem_eventK2_GetTangentTransformAtProjectedLocation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGeoReferencingSystem_K2_GetTangentTransformAtProjectedLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGeoReferencingSystem_K2_GetTangentTransformAtProjectedLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeoReferencingSystem_K2_ProjectedToECEF_Statics
	{
		struct GeoReferencingSystem_eventK2_ProjectedToECEF_Parms
		{
			FVector ProjectedCoordinates;
			FVector ECEFCoordinates;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectedCoordinates_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectedCoordinates;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ECEFCoordinates;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_K2_ProjectedToECEF_Statics::NewProp_ProjectedCoordinates_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_K2_ProjectedToECEF_Statics::NewProp_ProjectedCoordinates = { "ProjectedCoordinates", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventK2_ProjectedToECEF_Parms, ProjectedCoordinates), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_K2_ProjectedToECEF_Statics::NewProp_ProjectedCoordinates_MetaData), Z_Construct_UFunction_AGeoReferencingSystem_K2_ProjectedToECEF_Statics::NewProp_ProjectedCoordinates_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_K2_ProjectedToECEF_Statics::NewProp_ECEFCoordinates = { "ECEFCoordinates", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventK2_ProjectedToECEF_Parms, ECEFCoordinates), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeoReferencingSystem_K2_ProjectedToECEF_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_K2_ProjectedToECEF_Statics::NewProp_ProjectedCoordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_K2_ProjectedToECEF_Statics::NewProp_ECEFCoordinates,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_K2_ProjectedToECEF_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeoReferencing|Transformations" },
		{ "Comment", "/**\n\x09* Convert a Coordinate expressed in PROJECTED CRS to ECEF CRS\n\x09*/" },
		{ "DisplayName", "Projected To ECEF" },
		{ "ModuleRelativePath", "Public/GeoReferencingSystem.h" },
		{ "ToolTip", "Convert a Coordinate expressed in PROJECTED CRS to ECEF CRS" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeoReferencingSystem_K2_ProjectedToECEF_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeoReferencingSystem, nullptr, "K2_ProjectedToECEF", nullptr, nullptr, Z_Construct_UFunction_AGeoReferencingSystem_K2_ProjectedToECEF_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_K2_ProjectedToECEF_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGeoReferencingSystem_K2_ProjectedToECEF_Statics::GeoReferencingSystem_eventK2_ProjectedToECEF_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_K2_ProjectedToECEF_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGeoReferencingSystem_K2_ProjectedToECEF_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_K2_ProjectedToECEF_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGeoReferencingSystem_K2_ProjectedToECEF_Statics::GeoReferencingSystem_eventK2_ProjectedToECEF_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGeoReferencingSystem_K2_ProjectedToECEF()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGeoReferencingSystem_K2_ProjectedToECEF_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeoReferencingSystem_K2_ProjectedToEngine_Statics
	{
		struct GeoReferencingSystem_eventK2_ProjectedToEngine_Parms
		{
			FVector ProjectedCoordinates;
			FVector EngineCoordinates;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectedCoordinates_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectedCoordinates;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EngineCoordinates;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_K2_ProjectedToEngine_Statics::NewProp_ProjectedCoordinates_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_K2_ProjectedToEngine_Statics::NewProp_ProjectedCoordinates = { "ProjectedCoordinates", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventK2_ProjectedToEngine_Parms, ProjectedCoordinates), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_K2_ProjectedToEngine_Statics::NewProp_ProjectedCoordinates_MetaData), Z_Construct_UFunction_AGeoReferencingSystem_K2_ProjectedToEngine_Statics::NewProp_ProjectedCoordinates_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_K2_ProjectedToEngine_Statics::NewProp_EngineCoordinates = { "EngineCoordinates", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventK2_ProjectedToEngine_Parms, EngineCoordinates), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeoReferencingSystem_K2_ProjectedToEngine_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_K2_ProjectedToEngine_Statics::NewProp_ProjectedCoordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_K2_ProjectedToEngine_Statics::NewProp_EngineCoordinates,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_K2_ProjectedToEngine_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeoReferencing|Transformations" },
		{ "Comment", "/**\n\x09* Convert a Vector expressed in PROJECTED CRS to ENGINE space\n\x09*/" },
		{ "DisplayName", "Projected To Engine" },
		{ "ModuleRelativePath", "Public/GeoReferencingSystem.h" },
		{ "ToolTip", "Convert a Vector expressed in PROJECTED CRS to ENGINE space" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeoReferencingSystem_K2_ProjectedToEngine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeoReferencingSystem, nullptr, "K2_ProjectedToEngine", nullptr, nullptr, Z_Construct_UFunction_AGeoReferencingSystem_K2_ProjectedToEngine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_K2_ProjectedToEngine_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGeoReferencingSystem_K2_ProjectedToEngine_Statics::GeoReferencingSystem_eventK2_ProjectedToEngine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_K2_ProjectedToEngine_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGeoReferencingSystem_K2_ProjectedToEngine_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_K2_ProjectedToEngine_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGeoReferencingSystem_K2_ProjectedToEngine_Statics::GeoReferencingSystem_eventK2_ProjectedToEngine_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGeoReferencingSystem_K2_ProjectedToEngine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGeoReferencingSystem_K2_ProjectedToEngine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeoReferencingSystem_K2_ProjectedToGeographic_Statics
	{
		struct GeoReferencingSystem_eventK2_ProjectedToGeographic_Parms
		{
			FVector ProjectedCoordinates;
			FGeographicCoordinates GeographicCoordinates;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectedCoordinates_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectedCoordinates;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GeographicCoordinates;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_K2_ProjectedToGeographic_Statics::NewProp_ProjectedCoordinates_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_K2_ProjectedToGeographic_Statics::NewProp_ProjectedCoordinates = { "ProjectedCoordinates", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventK2_ProjectedToGeographic_Parms, ProjectedCoordinates), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_K2_ProjectedToGeographic_Statics::NewProp_ProjectedCoordinates_MetaData), Z_Construct_UFunction_AGeoReferencingSystem_K2_ProjectedToGeographic_Statics::NewProp_ProjectedCoordinates_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_K2_ProjectedToGeographic_Statics::NewProp_GeographicCoordinates = { "GeographicCoordinates", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventK2_ProjectedToGeographic_Parms, GeographicCoordinates), Z_Construct_UScriptStruct_FGeographicCoordinates, METADATA_PARAMS(0, nullptr) }; // 1274992448
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeoReferencingSystem_K2_ProjectedToGeographic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_K2_ProjectedToGeographic_Statics::NewProp_ProjectedCoordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_K2_ProjectedToGeographic_Statics::NewProp_GeographicCoordinates,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_K2_ProjectedToGeographic_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeoReferencing|Transformations" },
		{ "Comment", "/**\n\x09* Convert a Coordinate expressed in PROJECTED CRS to GEOGRAPHIC CRS\n\x09*/" },
		{ "DisplayName", "Projected To Geographic" },
		{ "ModuleRelativePath", "Public/GeoReferencingSystem.h" },
		{ "ToolTip", "Convert a Coordinate expressed in PROJECTED CRS to GEOGRAPHIC CRS" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeoReferencingSystem_K2_ProjectedToGeographic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeoReferencingSystem, nullptr, "K2_ProjectedToGeographic", nullptr, nullptr, Z_Construct_UFunction_AGeoReferencingSystem_K2_ProjectedToGeographic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_K2_ProjectedToGeographic_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGeoReferencingSystem_K2_ProjectedToGeographic_Statics::GeoReferencingSystem_eventK2_ProjectedToGeographic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_K2_ProjectedToGeographic_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGeoReferencingSystem_K2_ProjectedToGeographic_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_K2_ProjectedToGeographic_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGeoReferencingSystem_K2_ProjectedToGeographic_Statics::GeoReferencingSystem_eventK2_ProjectedToGeographic_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGeoReferencingSystem_K2_ProjectedToGeographic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGeoReferencingSystem_K2_ProjectedToGeographic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeoReferencingSystem_ProjectedToECEF_Statics
	{
		struct GeoReferencingSystem_eventProjectedToECEF_Parms
		{
			FCartesianCoordinates ProjectedCoordinates;
			FCartesianCoordinates ECEFCoordinates;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectedCoordinates_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectedCoordinates;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ECEFCoordinates;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_ProjectedToECEF_Statics::NewProp_ProjectedCoordinates_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_ProjectedToECEF_Statics::NewProp_ProjectedCoordinates = { "ProjectedCoordinates", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventProjectedToECEF_Parms, ProjectedCoordinates), Z_Construct_UScriptStruct_FCartesianCoordinates, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_ProjectedToECEF_Statics::NewProp_ProjectedCoordinates_MetaData), Z_Construct_UFunction_AGeoReferencingSystem_ProjectedToECEF_Statics::NewProp_ProjectedCoordinates_MetaData) }; // 2651159933
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_ProjectedToECEF_Statics::NewProp_ECEFCoordinates = { "ECEFCoordinates", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventProjectedToECEF_Parms, ECEFCoordinates), Z_Construct_UScriptStruct_FCartesianCoordinates, METADATA_PARAMS(0, nullptr) }; // 2651159933
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeoReferencingSystem_ProjectedToECEF_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_ProjectedToECEF_Statics::NewProp_ProjectedCoordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_ProjectedToECEF_Statics::NewProp_ECEFCoordinates,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_ProjectedToECEF_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeoReferencing|Transformations" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "FCartesianCoordinates is deprecated : Use the version that uses a FVector instead." },
		{ "ModuleRelativePath", "Public/GeoReferencingSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeoReferencingSystem_ProjectedToECEF_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeoReferencingSystem, nullptr, "ProjectedToECEF", nullptr, nullptr, Z_Construct_UFunction_AGeoReferencingSystem_ProjectedToECEF_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_ProjectedToECEF_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGeoReferencingSystem_ProjectedToECEF_Statics::GeoReferencingSystem_eventProjectedToECEF_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_ProjectedToECEF_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGeoReferencingSystem_ProjectedToECEF_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_ProjectedToECEF_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGeoReferencingSystem_ProjectedToECEF_Statics::GeoReferencingSystem_eventProjectedToECEF_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGeoReferencingSystem_ProjectedToECEF()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGeoReferencingSystem_ProjectedToECEF_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeoReferencingSystem_ProjectedToEngine_Statics
	{
		struct GeoReferencingSystem_eventProjectedToEngine_Parms
		{
			FCartesianCoordinates ProjectedCoordinates;
			FVector EngineCoordinates;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectedCoordinates_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectedCoordinates;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EngineCoordinates;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_ProjectedToEngine_Statics::NewProp_ProjectedCoordinates_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_ProjectedToEngine_Statics::NewProp_ProjectedCoordinates = { "ProjectedCoordinates", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventProjectedToEngine_Parms, ProjectedCoordinates), Z_Construct_UScriptStruct_FCartesianCoordinates, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_ProjectedToEngine_Statics::NewProp_ProjectedCoordinates_MetaData), Z_Construct_UFunction_AGeoReferencingSystem_ProjectedToEngine_Statics::NewProp_ProjectedCoordinates_MetaData) }; // 2651159933
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_ProjectedToEngine_Statics::NewProp_EngineCoordinates = { "EngineCoordinates", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventProjectedToEngine_Parms, EngineCoordinates), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeoReferencingSystem_ProjectedToEngine_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_ProjectedToEngine_Statics::NewProp_ProjectedCoordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_ProjectedToEngine_Statics::NewProp_EngineCoordinates,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_ProjectedToEngine_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeoReferencing|Transformations" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "FCartesianCoordinates is deprecated : Use the version that uses a FVector instead." },
		{ "ModuleRelativePath", "Public/GeoReferencingSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeoReferencingSystem_ProjectedToEngine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeoReferencingSystem, nullptr, "ProjectedToEngine", nullptr, nullptr, Z_Construct_UFunction_AGeoReferencingSystem_ProjectedToEngine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_ProjectedToEngine_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGeoReferencingSystem_ProjectedToEngine_Statics::GeoReferencingSystem_eventProjectedToEngine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_ProjectedToEngine_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGeoReferencingSystem_ProjectedToEngine_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_ProjectedToEngine_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGeoReferencingSystem_ProjectedToEngine_Statics::GeoReferencingSystem_eventProjectedToEngine_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGeoReferencingSystem_ProjectedToEngine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGeoReferencingSystem_ProjectedToEngine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeoReferencingSystem_ProjectedToGeographic_Statics
	{
		struct GeoReferencingSystem_eventProjectedToGeographic_Parms
		{
			FCartesianCoordinates ProjectedCoordinates;
			FGeographicCoordinates GeographicCoordinates;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectedCoordinates_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectedCoordinates;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GeographicCoordinates;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_ProjectedToGeographic_Statics::NewProp_ProjectedCoordinates_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_ProjectedToGeographic_Statics::NewProp_ProjectedCoordinates = { "ProjectedCoordinates", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventProjectedToGeographic_Parms, ProjectedCoordinates), Z_Construct_UScriptStruct_FCartesianCoordinates, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_ProjectedToGeographic_Statics::NewProp_ProjectedCoordinates_MetaData), Z_Construct_UFunction_AGeoReferencingSystem_ProjectedToGeographic_Statics::NewProp_ProjectedCoordinates_MetaData) }; // 2651159933
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoReferencingSystem_ProjectedToGeographic_Statics::NewProp_GeographicCoordinates = { "GeographicCoordinates", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoReferencingSystem_eventProjectedToGeographic_Parms, GeographicCoordinates), Z_Construct_UScriptStruct_FGeographicCoordinates, METADATA_PARAMS(0, nullptr) }; // 1274992448
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeoReferencingSystem_ProjectedToGeographic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_ProjectedToGeographic_Statics::NewProp_ProjectedCoordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoReferencingSystem_ProjectedToGeographic_Statics::NewProp_GeographicCoordinates,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoReferencingSystem_ProjectedToGeographic_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeoReferencing|Transformations" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "FCartesianCoordinates is deprecated : Use the version that uses a FVector instead." },
		{ "ModuleRelativePath", "Public/GeoReferencingSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeoReferencingSystem_ProjectedToGeographic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeoReferencingSystem, nullptr, "ProjectedToGeographic", nullptr, nullptr, Z_Construct_UFunction_AGeoReferencingSystem_ProjectedToGeographic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_ProjectedToGeographic_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGeoReferencingSystem_ProjectedToGeographic_Statics::GeoReferencingSystem_eventProjectedToGeographic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_ProjectedToGeographic_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGeoReferencingSystem_ProjectedToGeographic_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoReferencingSystem_ProjectedToGeographic_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGeoReferencingSystem_ProjectedToGeographic_Statics::GeoReferencingSystem_eventProjectedToGeographic_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGeoReferencingSystem_ProjectedToGeographic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGeoReferencingSystem_ProjectedToGeographic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGeoReferencingSystem);
	UClass* Z_Construct_UClass_AGeoReferencingSystem_NoRegister()
	{
		return AGeoReferencingSystem::StaticClass();
	}
	struct Z_Construct_UClass_AGeoReferencingSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_PlanetShape_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlanetShape_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PlanetShape;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectedCRS_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ProjectedCRS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeographicCRS_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GeographicCRS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOriginAtPlanetCenter_MetaData[];
#endif
		static void NewProp_bOriginAtPlanetCenter_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOriginAtPlanetCenter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOriginLocationInProjectedCRS_MetaData[];
#endif
		static void NewProp_bOriginLocationInProjectedCRS_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOriginLocationInProjectedCRS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginLatitude_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_OriginLatitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginLongitude_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_OriginLongitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginAltitude_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_OriginAltitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginProjectedCoordinatesEasting_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_OriginProjectedCoordinatesEasting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginProjectedCoordinatesNorthing_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_OriginProjectedCoordinatesNorthing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginProjectedCoordinatesUp_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_OriginProjectedCoordinatesUp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGeoReferencingSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_GeoReferencing,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoReferencingSystem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AGeoReferencingSystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGeoReferencingSystem_ApplySettings, "ApplySettings" }, // 2423522091
		{ &Z_Construct_UFunction_AGeoReferencingSystem_ECEFToEngine, "ECEFToEngine" }, // 2819405791
		{ &Z_Construct_UFunction_AGeoReferencingSystem_ECEFToGeographic, "ECEFToGeographic" }, // 2704042065
		{ &Z_Construct_UFunction_AGeoReferencingSystem_ECEFToProjected, "ECEFToProjected" }, // 24957160
		{ &Z_Construct_UFunction_AGeoReferencingSystem_EngineToECEF, "EngineToECEF" }, // 3882962451
		{ &Z_Construct_UFunction_AGeoReferencingSystem_EngineToGeographic, "EngineToGeographic" }, // 2322715649
		{ &Z_Construct_UFunction_AGeoReferencingSystem_EngineToProjected, "EngineToProjected" }, // 1468344012
		{ &Z_Construct_UFunction_AGeoReferencingSystem_GeographicToECEF, "GeographicToECEF" }, // 3235431438
		{ &Z_Construct_UFunction_AGeoReferencingSystem_GeographicToEngine, "GeographicToEngine" }, // 2604429273
		{ &Z_Construct_UFunction_AGeoReferencingSystem_GeographicToProjected, "GeographicToProjected" }, // 733118990
		{ &Z_Construct_UFunction_AGeoReferencingSystem_GetECEFENUVectorsAtECEFLocation, "GetECEFENUVectorsAtECEFLocation" }, // 2142370637
		{ &Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtECEFLocation, "GetENUVectorsAtECEFLocation" }, // 1796746668
		{ &Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtEngineLocation, "GetENUVectorsAtEngineLocation" }, // 2042920772
		{ &Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtGeographicLocation, "GetENUVectorsAtGeographicLocation" }, // 2096582453
		{ &Z_Construct_UFunction_AGeoReferencingSystem_GetENUVectorsAtProjectedLocation, "GetENUVectorsAtProjectedLocation" }, // 4225044717
		{ &Z_Construct_UFunction_AGeoReferencingSystem_GetGeographicEllipsoidMaxRadius, "GetGeographicEllipsoidMaxRadius" }, // 2265037741
		{ &Z_Construct_UFunction_AGeoReferencingSystem_GetGeographicEllipsoidMinRadius, "GetGeographicEllipsoidMinRadius" }, // 1721885760
		{ &Z_Construct_UFunction_AGeoReferencingSystem_GetGeoReferencingSystem, "GetGeoReferencingSystem" }, // 1383663340
		{ &Z_Construct_UFunction_AGeoReferencingSystem_GetPlanetCenterTransform, "GetPlanetCenterTransform" }, // 353841953
		{ &Z_Construct_UFunction_AGeoReferencingSystem_GetProjectedEllipsoidMaxRadius, "GetProjectedEllipsoidMaxRadius" }, // 782317148
		{ &Z_Construct_UFunction_AGeoReferencingSystem_GetProjectedEllipsoidMinRadius, "GetProjectedEllipsoidMinRadius" }, // 3845256843
		{ &Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtECEFLocation, "GetTangentTransformAtECEFLocation" }, // 2634323924
		{ &Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtEngineLocation, "GetTangentTransformAtEngineLocation" }, // 1779989649
		{ &Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtGeographicLocation, "GetTangentTransformAtGeographicLocation" }, // 2084959163
		{ &Z_Construct_UFunction_AGeoReferencingSystem_GetTangentTransformAtProjectedLocation, "GetTangentTransformAtProjectedLocation" }, // 1776997312
		{ &Z_Construct_UFunction_AGeoReferencingSystem_IsCRSStringValid, "IsCRSStringValid" }, // 3435423886
		{ &Z_Construct_UFunction_AGeoReferencingSystem_K2_ECEFToEngine, "K2_ECEFToEngine" }, // 4193982182
		{ &Z_Construct_UFunction_AGeoReferencingSystem_K2_ECEFToGeographic, "K2_ECEFToGeographic" }, // 2816570287
		{ &Z_Construct_UFunction_AGeoReferencingSystem_K2_ECEFToProjected, "K2_ECEFToProjected" }, // 1090863409
		{ &Z_Construct_UFunction_AGeoReferencingSystem_K2_EngineToECEF, "K2_EngineToECEF" }, // 2194953070
		{ &Z_Construct_UFunction_AGeoReferencingSystem_K2_EngineToProjected, "K2_EngineToProjected" }, // 818814916
		{ &Z_Construct_UFunction_AGeoReferencingSystem_K2_GeographicToECEF, "K2_GeographicToECEF" }, // 3082854501
		{ &Z_Construct_UFunction_AGeoReferencingSystem_K2_GeographicToProjected, "K2_GeographicToProjected" }, // 1659987365
		{ &Z_Construct_UFunction_AGeoReferencingSystem_K2_GetECEFENUVectorsAtECEFLocation, "K2_GetECEFENUVectorsAtECEFLocation" }, // 3055756500
		{ &Z_Construct_UFunction_AGeoReferencingSystem_K2_GetENUVectorsAtECEFLocation, "K2_GetENUVectorsAtECEFLocation" }, // 917430812
		{ &Z_Construct_UFunction_AGeoReferencingSystem_K2_GetENUVectorsAtProjectedLocation, "K2_GetENUVectorsAtProjectedLocation" }, // 1459715302
		{ &Z_Construct_UFunction_AGeoReferencingSystem_K2_GetTangentTransformAtECEFLocation, "K2_GetTangentTransformAtECEFLocation" }, // 685360083
		{ &Z_Construct_UFunction_AGeoReferencingSystem_K2_GetTangentTransformAtProjectedLocation, "K2_GetTangentTransformAtProjectedLocation" }, // 703137337
		{ &Z_Construct_UFunction_AGeoReferencingSystem_K2_ProjectedToECEF, "K2_ProjectedToECEF" }, // 117818480
		{ &Z_Construct_UFunction_AGeoReferencingSystem_K2_ProjectedToEngine, "K2_ProjectedToEngine" }, // 2310880377
		{ &Z_Construct_UFunction_AGeoReferencingSystem_K2_ProjectedToGeographic, "K2_ProjectedToGeographic" }, // 1080989099
		{ &Z_Construct_UFunction_AGeoReferencingSystem_ProjectedToECEF, "ProjectedToECEF" }, // 3760025099
		{ &Z_Construct_UFunction_AGeoReferencingSystem_ProjectedToEngine, "ProjectedToEngine" }, // 3367550031
		{ &Z_Construct_UFunction_AGeoReferencingSystem_ProjectedToGeographic, "ProjectedToGeographic" }, // 2393447506
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoReferencingSystem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeoReferencingSystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * This AInfos enable you to define a correspondance between the UE origin and an actual geographic location on a planet\n * Once done it offers different functions to convert coordinates between UE and Geographic coordinates\n */" },
		{ "HideCategories", "Transform Replication Actor Cooking Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GeoReferencingSystem.h" },
		{ "ModuleRelativePath", "Public/GeoReferencingSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "This AInfos enable you to define a correspondance between the UE origin and an actual geographic location on a planet\nOnce done it offers different functions to convert coordinates between UE and Geographic coordinates" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AGeoReferencingSystem_Statics::NewProp_PlanetShape_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeoReferencingSystem_Statics::NewProp_PlanetShape_MetaData[] = {
		{ "Category", "GeoReferencing" },
		{ "Comment", "/**\n\x09* This mode has to be set consistently with the way you authored your ground geometry.\n\x09*  - For small environments, a projection is often applied and the world is considered as Flat\n\x09*  - For planet scale environments, projections is not suitable and the geometry is Rounded.\n\x09**/" },
		{ "ModuleRelativePath", "Public/GeoReferencingSystem.h" },
		{ "ToolTip", "This mode has to be set consistently with the way you authored your ground geometry.\n - For small environments, a projection is often applied and the world is considered as Flat\n - For planet scale environments, projections is not suitable and the geometry is Rounded." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AGeoReferencingSystem_Statics::NewProp_PlanetShape = { "PlanetShape", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeoReferencingSystem, PlanetShape), Z_Construct_UEnum_GeoReferencing_EPlanetShape, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoReferencingSystem_Statics::NewProp_PlanetShape_MetaData), Z_Construct_UClass_AGeoReferencingSystem_Statics::NewProp_PlanetShape_MetaData) }; // 1438832502
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeoReferencingSystem_Statics::NewProp_ProjectedCRS_MetaData[] = {
		{ "Category", "GeoReferencing" },
		{ "Comment", "/**\n\x09* String that describes the PROJECTED CRS of choice.\n\x09*    CRS can be identified by their code (EPSG:4326), a well-known text(WKT) string, or PROJ strings...\n\x09**/" },
		{ "ModuleRelativePath", "Public/GeoReferencingSystem.h" },
		{ "ToolTip", "String that describes the PROJECTED CRS of choice.\n   CRS can be identified by their code (EPSG:4326), a well-known text(WKT) string, or PROJ strings..." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AGeoReferencingSystem_Statics::NewProp_ProjectedCRS = { "ProjectedCRS", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeoReferencingSystem, ProjectedCRS), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoReferencingSystem_Statics::NewProp_ProjectedCRS_MetaData), Z_Construct_UClass_AGeoReferencingSystem_Statics::NewProp_ProjectedCRS_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeoReferencingSystem_Statics::NewProp_GeographicCRS_MetaData[] = {
		{ "Category", "GeoReferencing" },
		{ "Comment", "/**\n\x09* String that describes the GEOGRAPHIC CRS of choice.\n\x09*    CRS can be identified by their code (EPSG:4326), a well-known text(WKT) string, or PROJ strings...\n\x09**/" },
		{ "ModuleRelativePath", "Public/GeoReferencingSystem.h" },
		{ "ToolTip", "String that describes the GEOGRAPHIC CRS of choice.\n   CRS can be identified by their code (EPSG:4326), a well-known text(WKT) string, or PROJ strings..." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AGeoReferencingSystem_Statics::NewProp_GeographicCRS = { "GeographicCRS", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeoReferencingSystem, GeographicCRS), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoReferencingSystem_Statics::NewProp_GeographicCRS_MetaData), Z_Construct_UClass_AGeoReferencingSystem_Statics::NewProp_GeographicCRS_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeoReferencingSystem_Statics::NewProp_bOriginAtPlanetCenter_MetaData[] = {
		{ "Category", "GeoReferencing|Origin Location" },
		{ "Comment", "/**\n\x09* if true, the UE origin is located at the Planet Center, otherwise,\n\x09* the UE origin is assuming to be defined at one specific point of\n\x09* the planet surface, defined by the properties below.\n\x09**/" },
		{ "EditCondition", "PlanetShape==EPlanetShape::RoundPlanet" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/GeoReferencingSystem.h" },
		{ "ToolTip", "if true, the UE origin is located at the Planet Center, otherwise,\nthe UE origin is assuming to be defined at one specific point of\nthe planet surface, defined by the properties below." },
	};
#endif
	void Z_Construct_UClass_AGeoReferencingSystem_Statics::NewProp_bOriginAtPlanetCenter_SetBit(void* Obj)
	{
		((AGeoReferencingSystem*)Obj)->bOriginAtPlanetCenter = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeoReferencingSystem_Statics::NewProp_bOriginAtPlanetCenter = { "bOriginAtPlanetCenter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGeoReferencingSystem), &Z_Construct_UClass_AGeoReferencingSystem_Statics::NewProp_bOriginAtPlanetCenter_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoReferencingSystem_Statics::NewProp_bOriginAtPlanetCenter_MetaData), Z_Construct_UClass_AGeoReferencingSystem_Statics::NewProp_bOriginAtPlanetCenter_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeoReferencingSystem_Statics::NewProp_bOriginLocationInProjectedCRS_MetaData[] = {
		{ "Category", "GeoReferencing|Origin Location" },
		{ "Comment", "/**\n\x09* if true, the UE origin georeference is expressed in the PROJECTED CRS.\n\x09*     (NOT in ECEF ! - Projected worlds are the most frequent use case...)\n\x09* if false, the origin is located using geographic coordinates.\n\x09*\n\x09* WARNING : the location has to be expressed as Integer values because of accuracy.\n\x09* Be very careful about that when authoring your data in external tools !\n\x09**/" },
		{ "EditCondition", "bOriginAtPlanetCenter==false" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/GeoReferencingSystem.h" },
		{ "ToolTip", "if true, the UE origin georeference is expressed in the PROJECTED CRS.\n    (NOT in ECEF ! - Projected worlds are the most frequent use case...)\nif false, the origin is located using geographic coordinates.\n\nWARNING : the location has to be expressed as Integer values because of accuracy.\nBe very careful about that when authoring your data in external tools !" },
	};
#endif
	void Z_Construct_UClass_AGeoReferencingSystem_Statics::NewProp_bOriginLocationInProjectedCRS_SetBit(void* Obj)
	{
		((AGeoReferencingSystem*)Obj)->bOriginLocationInProjectedCRS = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeoReferencingSystem_Statics::NewProp_bOriginLocationInProjectedCRS = { "bOriginLocationInProjectedCRS", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGeoReferencingSystem), &Z_Construct_UClass_AGeoReferencingSystem_Statics::NewProp_bOriginLocationInProjectedCRS_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoReferencingSystem_Statics::NewProp_bOriginLocationInProjectedCRS_MetaData), Z_Construct_UClass_AGeoReferencingSystem_Statics::NewProp_bOriginLocationInProjectedCRS_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeoReferencingSystem_Statics::NewProp_OriginLatitude_MetaData[] = {
		{ "Category", "GeoReferencing|Origin Location" },
		{ "ClampMax", "90" },
		{ "ClampMin", "-90" },
		{ "Comment", "/**\n\x09* Latitude of UE Origin on planet\n\x09**/" },
		{ "EditCondition", "!bOriginLocationInProjectedCRS && !bOriginAtPlanetCenter" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/GeoReferencingSystem.h" },
		{ "ToolTip", "Latitude of UE Origin on planet" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_AGeoReferencingSystem_Statics::NewProp_OriginLatitude = { "OriginLatitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeoReferencingSystem, OriginLatitude), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoReferencingSystem_Statics::NewProp_OriginLatitude_MetaData), Z_Construct_UClass_AGeoReferencingSystem_Statics::NewProp_OriginLatitude_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeoReferencingSystem_Statics::NewProp_OriginLongitude_MetaData[] = {
		{ "Category", "GeoReferencing|Origin Location" },
		{ "ClampMax", "180" },
		{ "ClampMin", "-180" },
		{ "Comment", "/**\n\x09* Longitude of UE Origin on planet\n\x09**/" },
		{ "EditCondition", "!bOriginLocationInProjectedCRS && !bOriginAtPlanetCenter" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/GeoReferencingSystem.h" },
		{ "ToolTip", "Longitude of UE Origin on planet" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_AGeoReferencingSystem_Statics::NewProp_OriginLongitude = { "OriginLongitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeoReferencingSystem, OriginLongitude), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoReferencingSystem_Statics::NewProp_OriginLongitude_MetaData), Z_Construct_UClass_AGeoReferencingSystem_Statics::NewProp_OriginLongitude_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeoReferencingSystem_Statics::NewProp_OriginAltitude_MetaData[] = {
		{ "Category", "GeoReferencing|Origin Location" },
		{ "Comment", "/**\n\x09* Altitude of UE Origin on planet\n\x09**/" },
		{ "EditCondition", "!bOriginLocationInProjectedCRS && !bOriginAtPlanetCenter" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/GeoReferencingSystem.h" },
		{ "ToolTip", "Altitude of UE Origin on planet" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_AGeoReferencingSystem_Statics::NewProp_OriginAltitude = { "OriginAltitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeoReferencingSystem, OriginAltitude), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoReferencingSystem_Statics::NewProp_OriginAltitude_MetaData), Z_Construct_UClass_AGeoReferencingSystem_Statics::NewProp_OriginAltitude_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeoReferencingSystem_Statics::NewProp_OriginProjectedCoordinatesEasting_MetaData[] = {
		{ "Category", "GeoReferencing|Origin Location" },
		{ "Comment", "/**\n\x09* Easting position of UE Origin on planet, express in the Projected CRS Frame\n\x09**/" },
		{ "EditCondition", "bOriginLocationInProjectedCRS && !bOriginAtPlanetCenter" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/GeoReferencingSystem.h" },
		{ "ToolTip", "Easting position of UE Origin on planet, express in the Projected CRS Frame" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_AGeoReferencingSystem_Statics::NewProp_OriginProjectedCoordinatesEasting = { "OriginProjectedCoordinatesEasting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeoReferencingSystem, OriginProjectedCoordinatesEasting), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoReferencingSystem_Statics::NewProp_OriginProjectedCoordinatesEasting_MetaData), Z_Construct_UClass_AGeoReferencingSystem_Statics::NewProp_OriginProjectedCoordinatesEasting_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeoReferencingSystem_Statics::NewProp_OriginProjectedCoordinatesNorthing_MetaData[] = {
		{ "Category", "GeoReferencing|Origin Location" },
		{ "Comment", "/**\n\x09* Northing position of UE Origin on planet, express in the Projected CRS Frame\n\x09**/" },
		{ "EditCondition", "bOriginLocationInProjectedCRS && !bOriginAtPlanetCenter" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/GeoReferencingSystem.h" },
		{ "ToolTip", "Northing position of UE Origin on planet, express in the Projected CRS Frame" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_AGeoReferencingSystem_Statics::NewProp_OriginProjectedCoordinatesNorthing = { "OriginProjectedCoordinatesNorthing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeoReferencingSystem, OriginProjectedCoordinatesNorthing), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoReferencingSystem_Statics::NewProp_OriginProjectedCoordinatesNorthing_MetaData), Z_Construct_UClass_AGeoReferencingSystem_Statics::NewProp_OriginProjectedCoordinatesNorthing_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeoReferencingSystem_Statics::NewProp_OriginProjectedCoordinatesUp_MetaData[] = {
		{ "Category", "GeoReferencing|Origin Location" },
		{ "Comment", "/**\n\x09* Up position of UE Origin on planet, express in the Projected CRS Frame\n\x09**/" },
		{ "EditCondition", "bOriginLocationInProjectedCRS && !bOriginAtPlanetCenter" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/GeoReferencingSystem.h" },
		{ "ToolTip", "Up position of UE Origin on planet, express in the Projected CRS Frame" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_AGeoReferencingSystem_Statics::NewProp_OriginProjectedCoordinatesUp = { "OriginProjectedCoordinatesUp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeoReferencingSystem, OriginProjectedCoordinatesUp), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoReferencingSystem_Statics::NewProp_OriginProjectedCoordinatesUp_MetaData), Z_Construct_UClass_AGeoReferencingSystem_Statics::NewProp_OriginProjectedCoordinatesUp_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGeoReferencingSystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeoReferencingSystem_Statics::NewProp_PlanetShape_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeoReferencingSystem_Statics::NewProp_PlanetShape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeoReferencingSystem_Statics::NewProp_ProjectedCRS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeoReferencingSystem_Statics::NewProp_GeographicCRS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeoReferencingSystem_Statics::NewProp_bOriginAtPlanetCenter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeoReferencingSystem_Statics::NewProp_bOriginLocationInProjectedCRS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeoReferencingSystem_Statics::NewProp_OriginLatitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeoReferencingSystem_Statics::NewProp_OriginLongitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeoReferencingSystem_Statics::NewProp_OriginAltitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeoReferencingSystem_Statics::NewProp_OriginProjectedCoordinatesEasting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeoReferencingSystem_Statics::NewProp_OriginProjectedCoordinatesNorthing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeoReferencingSystem_Statics::NewProp_OriginProjectedCoordinatesUp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGeoReferencingSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGeoReferencingSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGeoReferencingSystem_Statics::ClassParams = {
		&AGeoReferencingSystem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGeoReferencingSystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGeoReferencingSystem_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoReferencingSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_AGeoReferencingSystem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoReferencingSystem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AGeoReferencingSystem()
	{
		if (!Z_Registration_Info_UClass_AGeoReferencingSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGeoReferencingSystem.OuterSingleton, Z_Construct_UClass_AGeoReferencingSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGeoReferencingSystem.OuterSingleton;
	}
	template<> GEOREFERENCING_API UClass* StaticClass<AGeoReferencingSystem>()
	{
		return AGeoReferencingSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGeoReferencingSystem);
	AGeoReferencingSystem::~AGeoReferencingSystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeoReferencingSystem_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeoReferencingSystem_h_Statics::EnumInfo[] = {
		{ EPlanetShape_StaticEnum, TEXT("EPlanetShape"), &Z_Registration_Info_UEnum_EPlanetShape, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1438832502U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeoReferencingSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGeoReferencingSystem, AGeoReferencingSystem::StaticClass, TEXT("AGeoReferencingSystem"), &Z_Registration_Info_UClass_AGeoReferencingSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGeoReferencingSystem), 3321576240U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeoReferencingSystem_h_3378540071(TEXT("/Script/GeoReferencing"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeoReferencingSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeoReferencingSystem_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeoReferencingSystem_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeoReferencingSystem_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
