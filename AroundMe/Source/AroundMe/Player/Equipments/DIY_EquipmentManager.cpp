#include "DIY_EquipmentManager.h"

UDIY_EquipmentManager::UDIY_EquipmentManager()
{
}

void UDIY_EquipmentManager::RequestChangeToNew_Hand(int32 HandIndex, EDIY_RobotHandType inTargetHandType)
{
}

void UDIY_EquipmentManager::RequestChangeToNew_HandHead(int32 HandIndex, EDIY_RobotHand_HeadType inTargetHandHead_Type)
{
}

void UDIY_EquipmentManager::RequestChangeToNew_Bag(EDIY_BagType inTargetBagType)
{
}

void UDIY_EquipmentManager::BeginPlay()
{
	Super::BeginPlay();

	checkf((int32)EDIY_RobotHandType::Count == SKMDepot_Hands.Num(), TEXT("RobotHand num is invalid"));
	checkf((int32)EDIY_RobotHand_HeadType::Count == SKMDepot_Hand_Heads.Num(), TEXT("RobotHand num is invalid"));
	checkf((int32)EDIY_BagType::Count == SKMDepot_Bags.Num(), TEXT("RobotHand num is invalid"));
}

void UDIY_EquipmentManager::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);



}
