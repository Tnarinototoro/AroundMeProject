#include "DIY_InteractionUtility.h"
#include "DIY_TemperatureProcessor.h"

void UDIY_InteractionUtility::ApplyDamage(const FDIY_DamageInfo& inDamageInfo)
{
	AActor* DamageTaker = inDamageInfo.DamageTaker;


	if (nullptr != DamageTaker)
	{
		bool is_fire = UDIY_InteractionUtility::IsFlagSet(inDamageInfo.BulkDamageFlags, (uint8)EDIY_DamageInfoFlag::Is_Fire_Damage);
		bool is_water = UDIY_InteractionUtility::IsFlagSet(inDamageInfo.BulkDamageFlags, (uint8)EDIY_DamageInfoFlag::Is_Water_Damage);
		bool is_frozen = UDIY_InteractionUtility::IsFlagSet(inDamageInfo.BulkDamageFlags, (uint8)EDIY_DamageInfoFlag::Is_Frozen_Damage);
		
		//temperature check
		if (is_fire ||
			is_water ||
			is_frozen)
		{
			bool is_one_shot = UDIY_InteractionUtility::IsFlagSet(inDamageInfo.BulkDamageFlags, (uint8)EDIY_DamageInfoFlag::Is_One_Shot_Type);
			bool is_persistent_with_infinite_time = UDIY_InteractionUtility::IsFlagSet(inDamageInfo.BulkDamageFlags, (uint8)EDIY_DamageInfoFlag::Is_One_Shot_Persistent_Emissive_Type);
			bool is_persistent_with_duration = UDIY_InteractionUtility::IsFlagSet(inDamageInfo.BulkDamageFlags, (uint8)EDIY_DamageInfoFlag::Is_One_Shot_Persistent_Emissive_Type_Has_Specific_Duration);
			
			UDIY_TemperatureProcessor* cur_actor_possible_temperature_processor = DamageTaker->FindComponentByClass<UDIY_TemperatureProcessor>();
			ensureMsgf(nullptr != cur_actor_possible_temperature_processor,TEXT("You have applied damage with contradictive elements"));
			
			

			if (is_water)
			{
				cur_actor_possible_temperature_processor->AddInstantMoistureChange(10.0f);
			}
			else
			{
				cur_actor_possible_temperature_processor->AddInstantMoistureChange(-1.0);
			}


			if (is_one_shot)
			{
				cur_actor_possible_temperature_processor->AddInstantTemperatureChange(inDamageInfo.DamageAmount);
				return;
			}

			if (is_persistent_with_duration)
			{
				cur_actor_possible_temperature_processor->AddEndurateTemperatureHolder(
					UDIY_TemperatureProcessor::ETemperatureHolderType::Outer_shock,
					inDamageInfo.Damage_Float_0,
					inDamageInfo.Damage_Float_1);


				return;
			}
			if (is_persistent_with_infinite_time)
			{
				cur_actor_possible_temperature_processor->AddEndurateTemperatureHolder(
					UDIY_TemperatureProcessor::ETemperatureHolderType::Outer_shock,
					MAX_FLT-1.0f,
					inDamageInfo.Damage_Float_1);

				return;
			}
		}


	}
}
