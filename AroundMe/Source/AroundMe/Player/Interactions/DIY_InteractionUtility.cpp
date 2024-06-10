#include "DIY_InteractionUtility.h"
#include "DIY_TemperatureProcessor.h"
#include "DIY_SolidnessProcessor.h"
#include "DIY_ConductivityProcessor.h"
void UDIY_InteractionUtility::ApplyDamage(const FDIY_DamageInfo& inDamageInfo)
{
	AActor* DamageTaker = inDamageInfo.DamageTaker;


	if (nullptr != DamageTaker)
	{
		bool is_fire = UDIY_InteractionUtility::IsFlagSet(inDamageInfo.BulkDamageFlags, (uint8)EDIY_DamageInfoFlag::Is_Fire_Damage);
		bool is_water = UDIY_InteractionUtility::IsFlagSet(inDamageInfo.BulkDamageFlags, (uint8)EDIY_DamageInfoFlag::Is_Water_Damage);
		bool is_frozen = UDIY_InteractionUtility::IsFlagSet(inDamageInfo.BulkDamageFlags, (uint8)EDIY_DamageInfoFlag::Is_Frozen_Damage);
		
		//temperature check
		{
			if (is_fire ||
				is_water ||
				is_frozen)
			{
				bool is_one_shot = UDIY_InteractionUtility::IsFlagSet(inDamageInfo.BulkDamageFlags, (uint8)EDIY_DamageInfoFlag::Is_One_Shot_Type);
				bool is_persistent_with_infinite_time = UDIY_InteractionUtility::IsFlagSet(inDamageInfo.BulkDamageFlags, (uint8)EDIY_DamageInfoFlag::Is_One_Shot_Persistent_Emissive_Type);
				bool is_persistent_with_duration = UDIY_InteractionUtility::IsFlagSet(inDamageInfo.BulkDamageFlags, (uint8)EDIY_DamageInfoFlag::Is_One_Shot_Persistent_Emissive_Type_Has_Specific_Duration);

				UDIY_TemperatureProcessor* cur_actor_possible_temperature_processor = DamageTaker->FindComponentByClass<UDIY_TemperatureProcessor>();
				if (nullptr != cur_actor_possible_temperature_processor)
				{
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
						
					}

					if (is_persistent_with_duration)
					{
						cur_actor_possible_temperature_processor->AddEndurateTemperatureHolder(
							inDamageInfo.Damage_Float_0,
							inDamageInfo.Damage_Float_1);


						
					}
					if (is_persistent_with_infinite_time)
					{
						cur_actor_possible_temperature_processor->AddEndurateTemperatureHolder(
							MAX_FLT - 1.0f,
							inDamageInfo.Damage_Float_1);

						
					}
				}




			}
		}



		//solidness check
		{
			bool has_solid_attack = UDIY_InteractionUtility::IsFlagSet(inDamageInfo.BulkDamageFlags, (uint8)EDIY_DamageInfoFlag::Is_Solid_Damage);
			if (has_solid_attack)
			{
				UDIY_SolidnessProcessor* cur_actor_possible_solidness_processor = DamageTaker->FindComponentByClass<UDIY_SolidnessProcessor>();

				if (nullptr != cur_actor_possible_solidness_processor)
				{
					cur_actor_possible_solidness_processor->AcceptDamage(inDamageInfo.DamageAmount, inDamageInfo.Damage_Float_0);
				}

			}
		}

		//conductivity check
		{
			bool has_electricity_damage = UDIY_InteractionUtility::IsFlagSet(inDamageInfo.BulkDamageFlags, (uint8)EDIY_DamageInfoFlag::Is_Electricity_Damage);


			if (has_electricity_damage)
			{
				UDIY_ConductivityProcessor* cur_actor_possible_conduct_processor = DamageTaker->FindComponentByClass<UDIY_ConductivityProcessor>();

				if (nullptr != cur_actor_possible_conduct_processor)
				{
					cur_actor_possible_conduct_processor->AddInstantElectricityAmpere(inDamageInfo.DamageAmount);
				}
			}
		}
	}


}
