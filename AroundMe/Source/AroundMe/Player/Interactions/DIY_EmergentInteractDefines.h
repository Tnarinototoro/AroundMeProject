
#pragma once

#include "CoreMinimal.h"
#include "DIY_EmergentInteractDefines.generated.h"

UENUM(BlueprintType)
enum class EDIY_InteractItemFlag : uint8 
{
  Static UMETA(Description = "Moveable?"),
  Obey_Physics_Rules UMETA(Description = "Will obey physics rules?"),

  Living_Thing UMETA(Description = "Whether this is a living thing? including animals plants"),
  Can_Be_Destroyed UMETA(Description ="Obeys physical rules ? solidness related"),
  React_To_Temperature UMETA(Description = "React to temperature?"),
  Has_Any_Conductivity UMETA(Description ="conductivity good then electricity comes in")

};

UENUM(BlueprintType)
enum class EDIY_DamageInfoFlag : uint8 
{
  Is_Fire_Damage,
  Is_Water_Damage,
  Is_Frozen_Damage,
  Is_Electricity_Damage,
  Is_Poison_Damage,
  //will lead to cutting or form transformation
  Is_Solid_Damage,
  Is_Mental_Damage,
  Is_Evil_Damage,
  Is_Divine_Damage,
  Is_One_Shot_Dead,
  Is_One_Shot_Type,
  Is_One_Shot_Persistent_Emissive_Type,
  Is_One_Shot_Persistent_Emissive_Type_Has_Specific_Duration,
 
  Damage_Flag_Count
  

};

USTRUCT(BlueprintType)
struct FDIY_DamageInfo
{
	GENERATED_BODY()




	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float DamageAmount{0.f};
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        int32 BulkDamageFlags{ 0 };
        
        
        
        
    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ToolTip = "duration length"))
        float Damage_Float_0{ 0.0f };   

        //temperature value
    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ToolTip = "temperature value"))
    float Damage_Float_1{ 0.0f };   
        
      //sphere ness or sth
        UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ToolTip = "sphere ness or sth"))
        float Damage_Float_2{ 0.0f };    



    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        AActor* DamageTaker 
    {
        nullptr
    };

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        AActor* DamageGiver
    {
        nullptr
    };

};

USTRUCT(BlueprintType)
struct FDIY_TemperatureAndMoistureAttr
{

    GENERATED_BODY()
    //attribute 
   // wood ? burnable? plastic?
   //int item_object_type{0}----->    abundant attribute   this can be represented by combustible_temperature etc



  // int item_quality_type{0};   ------> abudant attribute  this also can be represented by combustible_temperature

   //self emissive temperature , config type 
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float self_emissive_AddonTemperature_config{ 0.0f };


    //self emissive temperature , lasting duration config type
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float self_emissive_AddonTemperature_LastingDuration_config{ 9999.0f };


    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float self_combustible_temperature{ 100.00 };

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float self_thaw_temparature{ 26.0f };

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float self_frozen_temperature{ -1.0f };


};

USTRUCT(BlueprintType)
struct FDIY_ConductivityAttr
{

    GENERATED_BODY()
    //attribute 
    
    
    //0-1
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        float MetalSelf_Conductivity{ 0.f };

    //this should go to world settings
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        float R_scale{ 10.0f };
    //0-1
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        float Metal_Self_Purity{ 0.f };


};


USTRUCT(BlueprintType)
struct FDIY_SolidnessAttr
{

    GENERATED_BODY()
        //attribute 

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        float fresh_born_solidness{ 50.0f };
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        float cutting_damage_susceptibility{ 2.0f };
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        float blunt_damage_susceptibility{ 0.1f };
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        float sphereness{ 0.6 };

};
