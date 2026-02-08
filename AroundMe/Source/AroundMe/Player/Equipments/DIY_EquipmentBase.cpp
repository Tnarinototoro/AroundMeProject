// All rights reserved to ShadowCandle Studio

#include "DIY_EquipmentBase.h"
#include "../../GameUtilities/Logs/DIY_LogHelper.h"
UDIY_EquipmentBase::UDIY_EquipmentBase()
{
    mEquipIndex = EEquipmentsIndex::Equip_Count;
}

void UDIY_EquipmentBase::SetParentEquipment(UActorComponent *inParentEquipment)
{
    ParentEquipment = inParentEquipment;
}

void UDIY_EquipmentBase::AddChildEquipment(UActorComponent *inChildEquipment)
{
    ChildEquipments.Add(inChildEquipment);
}

#if WITH_EDITOR
void UDIY_EquipmentBase::PostEditChangeProperty(FPropertyChangedEvent &PropertyChangedEvent)
{
    Super::PostEditChangeProperty(PropertyChangedEvent);

    if (PropertyChangedEvent.Property != nullptr)
    {
        const FName PropertyName = PropertyChangedEvent.MemberProperty->GetFName();

        // 如果修改的是 mEquipIndex
        if (PropertyName == GET_MEMBER_NAME_CHECKED(UDIY_EquipmentBase, mEquipIndex))
        {
            if (mEquipIndex != EEquipmentsIndex::Equip_Count)
            {
                // // 自动根据 Enum 的名称给组件改名，例如 "Left_Hand_Head_GEN_0"
                // // 这样在 Components 列表里一眼就能看出谁是谁
                // FString EnumName = StaticEnum<EEquipmentsIndex>()->GetNameStringByValue((int64)mEquipIndex);
                // FString NewName = FString::Printf(TEXT("%s_Slot"), *EnumName);

                // // 注意：Rename 在编辑器下可以改变组件在列表里的显示名称
                // this->Rename(*NewName);
            }
        }
    }
}

void UDIY_EquipmentBase::OnModelTypeChanged(uint32 lastModelType,uint32 newModelType)
{
    
}
void UDIY_EquipmentBase::CheckForErrors()
{
    Super::CheckForErrors();

    // 如果玩家没改 Index，直接在“Map Check”日志里抛出警告
    if (mEquipIndex == EEquipmentsIndex::Equip_Count)
    {
        // FMessageLog("MapCheck").Warning()->AddToken(FUObjectToken::Create(this))->AddToken(FTextToken::Create(FText::FromString(TEXT("装备组件未设置有效的 EquipIndex！请在 Details 面板修改。"))));
    }
}
#endif