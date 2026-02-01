// All rights reserved to ShadowCandle Studio

#include "DIY_EquipmentBase.h"
#include "../../GameUtilities/Logs/DIY_LogHelper.h"
UDIY_EquipmentBase::UDIY_EquipmentBase()
{
}

void UDIY_EquipmentBase::SetParentEquipment(UActorComponent *inParentEquipment)
{
    ParentEquipment = inParentEquipment;
}

void UDIY_EquipmentBase::AddChildEquipment(UActorComponent *inChildEquipment)
{
    ChildEquipments.Add(inChildEquipment);
}
