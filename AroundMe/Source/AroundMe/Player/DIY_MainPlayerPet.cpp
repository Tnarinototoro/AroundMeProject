#include "DIY_MainPlayerPet.h"
#include "Equipments/DIY_EquipmentManager.h"
#include "Equipments/DIY_EquipmentBase.h"
#include "Equipments/DIY_RobotHandController.h"
#include "Equipments/DIY_RobotHand_HeadController.h"
#include "Equipments/DIY_KagoController.h"
#include "Equipments/DIY_ChestController.h"
#include "Equipments/DIY_BagController.h"
#include "Equipments/DIY_CapController.h"

void ADIY_MainPlayerPet::BeginPlay()
{
    Super::BeginPlay();
}

ADIY_MainPlayerPet::ADIY_MainPlayerPet()
{
}
void ADIY_MainPlayerPet::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    Super::EndPlay(EndPlayReason);
}

void ADIY_MainPlayerPet::Destroyed()
{

    Super::Destroyed();
}
