#include "DIY_EquipmentManager.h"
#include "DIY_RobotHandController.h"
#include "DIY_RobotHand_HeadController.h"
#include "DIY_BagController.h"
#include "DIY_KagoController.h"
#include "DIY_ChestController.h"
#include "DIY_CapController.h"
#include "../Items/DIY_ItemManager.h"
#include "GameFramework/Character.h"
#include "DIY_EquipmentCommonLib.h"

UDIY_EquipmentManager::UDIY_EquipmentManager()
{
    PrimaryComponentTick.bCanEverTick = true;
}

void UDIY_EquipmentManager::RequestEquipModelTypeTo(EEquipmentsIndex inEquipIndex, int inModelType, bool forceReLoad)
{

    checkf(inEquipIndex < EEquipmentsIndex::Equip_Count, TEXT("input equipment index over the limit"));
    UDIY_EquipmentBase *cur_equip = GetEquipAtIndex(inEquipIndex);

    if (cur_equip == nullptr)
    {
        return;
    }

    if (cur_equip->GetEquipModelType() == inModelType && !forceReLoad)
    {
        return;
    }

    if (inModelType < 0)
        return;

    UDIY_ItemManagerSubsystem *item_manager = UDIY_ItemManagerSubsystem::Get(GetWorld());
    if (nullptr == item_manager)
    {
        return;
    }
    UDIY_ItemManagerSubsystemHelperBase *helper = item_manager->SubsystemHelper;

    if (nullptr == helper)
    {
        return;
    }

    TSoftObjectPtr<USkeletalMesh> *needed_object_path = nullptr;

    switch (inEquipIndex)
    {
    case EEquipmentsIndex::Bag:
    {
        ensureMsgf(inModelType < helper->SKMDepot_Bags.Num(), TEXT("bag requested to invalid model type"));
        needed_object_path = &helper->SKMDepot_Bags[inModelType];
        break;
    }
    case EEquipmentsIndex::Left_Hand:
    {
        ensureMsgf(inModelType < helper->SKMDepot_Hands.Num(), TEXT("hand requested to invalid model type"));

        needed_object_path = &helper->SKMDepot_Hands[inModelType];
        break;
    }
    case EEquipmentsIndex::Right_Hand:
    {
        ensureMsgf(inModelType < helper->SKMDepot_Hands.Num(), TEXT("hand requested to invalid model type"));

        needed_object_path = &helper->SKMDepot_Hands[inModelType];

        break;
    }
    case EEquipmentsIndex::Left_Hand_Head:
    {
        ensureMsgf(inModelType < helper->SKMDepot_Hand_Heads.Num(), TEXT("hand head requested to invalid model type"));

        needed_object_path = &helper->SKMDepot_Hand_Heads[inModelType];
        break;
    }
    case EEquipmentsIndex::Right_Hand_Head:
    {
        ensureMsgf(inModelType < helper->SKMDepot_Hand_Heads.Num(), TEXT("hand head requested to invalid model type"));
        needed_object_path = &helper->SKMDepot_Hand_Heads[inModelType];
        break;
    }
    case EEquipmentsIndex::Kago:
    {

        ensureMsgf(inModelType < helper->SKMDepot_Kagos.Num(), TEXT("kago requested to invalid model type"));

        needed_object_path = &helper->SKMDepot_Kagos[inModelType];
        break;
    }
    case EEquipmentsIndex::Chest:
    {

        ensureMsgf(inModelType < helper->SKMDepot_Chests.Num(), TEXT("chest requested to invalid model type"));

        needed_object_path = &helper->SKMDepot_Chests[inModelType];
        break;
    }
    case EEquipmentsIndex::Cap:
    {

        ensureMsgf(inModelType < helper->SKMDepot_Caps.Num(), TEXT("cap requested to invalid model type"));
        needed_object_path = &helper->SKMDepot_Caps[inModelType];
        break;
    }

    default:
        break;
    }

    ensureMsgf(nullptr != needed_object_path, TEXT("needed_object_path needs to be valid to create equipment"));

    DIY_EquipmentCommonLib::LoadSkeletonMeshAsync(this, AllEquipments[(int)inEquipIndex], *needed_object_path);

    GetEquipAtIndex(inEquipIndex)->SetEquipModelType(inModelType);
}

UDIY_EquipmentBase *UDIY_EquipmentManager::GetEquipAtIndex(EEquipmentsIndex inIndex)
{

    ensureMsgf((uint8)inIndex < (uint8)EEquipmentsIndex::Equip_Count, TEXT("GetEquipAtIndex inIndex over the limit"));
    ensureMsgf((uint8)inIndex < AllEquipments.Num(), TEXT("GetEquipAtIndex inIndex over the array num"));

    return AllEquipments[(uint8)inIndex];
}

USkeletalMeshComponent *UDIY_EquipmentManager::GetEquipSKMAtIndex(EEquipmentsIndex inIndex)
{
    ensureMsgf((uint8)inIndex < (uint8)EEquipmentsIndex::Equip_Count, TEXT("GetEquipAtIndex inIndex over the limit"));
    ensureMsgf((uint8)inIndex < AllEquipments.Num(), TEXT("GetEquipAtIndex inIndex over the array num"));

    ensureMsgf(nullptr != AllEquipments[(uint8)inIndex], TEXT("current index skm shall never be null"));
    return AllEquipments[(uint8)inIndex];
}
void UDIY_EquipmentManager::RegisterEquipment(UDIY_EquipmentBase *inEquipment, EEquipmentsIndex inIndex)
{
    if (AllEquipments.Num() == 0)
    {
        AllEquipments.Init(nullptr, (int32)EEquipmentsIndex::Equip_Count);
    }
    ensureAlwaysMsgf(AllEquipments.Num() == (uint8)EEquipmentsIndex::Equip_Count, TEXT("AllEquipments.Num() != (uint8)EEquipmentsIndex::Equip_Count"));
    ensureAlwaysMsgf((int32)inIndex < AllEquipments.Num(), TEXT("RegisterEquipment inIndex over the array num"));
    ensureAlwaysMsgf(nullptr == AllEquipments[(uint8)inIndex], TEXT("current index skm shall be null"));
    AllEquipments[(int32)inIndex] = inEquipment;
}
void UDIY_EquipmentManager::BeginPlay()
{
    Super::BeginPlay();
}

void UDIY_EquipmentManager::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

FVector UDIY_EquipmentManager::GetKagoRobotDumpItemPoint()
{
    UDIY_KagoController *kago_controller = Cast<UDIY_KagoController>(GetEquipAtIndex(EEquipmentsIndex::Kago));

    return kago_controller->HandHead_Releasing_Point->GetComponentLocation();
}

void UDIY_EquipmentManager::PostInitProperties()
{
    Super::PostInitProperties();
}

void UDIY_EquipmentManager::RealizeAllEquipmentModels()
{
    RequestEquipModelTypeTo(EEquipmentsIndex::Bag, (int32)EDIY_BagType::RustOld_Type, true);
    RequestEquipModelTypeTo(EEquipmentsIndex::Left_Hand, (int32)EDIY_RobotHandType::RustOld_Type, true);
    RequestEquipModelTypeTo(EEquipmentsIndex::Left_Hand_Head, (int32)EDIY_RobotHand_HeadType::Claw_Type, true);
    RequestEquipModelTypeTo(EEquipmentsIndex::Right_Hand, (int32)EDIY_RobotHandType::RustOld_Type, true);
    RequestEquipModelTypeTo(EEquipmentsIndex::Right_Hand_Head, (int32)EDIY_RobotHand_HeadType::Drill_Type, true);
    RequestEquipModelTypeTo(EEquipmentsIndex::Kago, (int32)EDIY_KagoType::RustOld_Type, true);
    RequestEquipModelTypeTo(EEquipmentsIndex::Chest, (int32)EDIY_ChestType::Original_Type, true);
    RequestEquipModelTypeTo(EEquipmentsIndex::Cap, (int32)EDIY_CapType::Original_Type, true);

    for (int i = 0; i < AllEquipments.Num(); i++)
    {

        GetEquipSKMAtIndex((EEquipmentsIndex)i)->SetCollisionEnabled(ECollisionEnabled::NoCollision);
        GetEquipSKMAtIndex((EEquipmentsIndex)i)->SetSimulatePhysics(false);
    }

    // bag
    AllEquipments[(int)EEquipmentsIndex::Bag]->SetParentEquipment(this);
    AllEquipments[(int)EEquipmentsIndex::Bag]->AddChildEquipment(AllEquipments[(int)EEquipmentsIndex::Left_Hand]);
    AllEquipments[(int)EEquipmentsIndex::Bag]->AddChildEquipment(AllEquipments[(int)EEquipmentsIndex::Right_Hand]);
    AllEquipments[(int)EEquipmentsIndex::Bag]->AddChildEquipment(AllEquipments[(int)EEquipmentsIndex::Kago]);

    // chest and cap stand-alone equipment
    AllEquipments[(int)EEquipmentsIndex::Chest]->SetParentEquipment(this);
    AllEquipments[(int)EEquipmentsIndex::Cap]->SetParentEquipment(this);

    // left hand
    AllEquipments[(int)EEquipmentsIndex::Left_Hand]->AddChildEquipment(AllEquipments[(int)EEquipmentsIndex::Left_Hand_Head]);
    AllEquipments[(int)EEquipmentsIndex::Left_Hand]->SetParentEquipment(AllEquipments[(int)EEquipmentsIndex::Bag]);

    // right hand
    AllEquipments[(int)EEquipmentsIndex::Right_Hand]->AddChildEquipment(AllEquipments[(int)EEquipmentsIndex::Right_Hand_Head]);
    AllEquipments[(int)EEquipmentsIndex::Right_Hand]->SetParentEquipment(AllEquipments[(int)EEquipmentsIndex::Bag]);

    // right hand head
    AllEquipments[(int)EEquipmentsIndex::Right_Hand_Head]->SetParentEquipment(AllEquipments[(int)EEquipmentsIndex::Right_Hand]);

    // left hand head
    AllEquipments[(int)EEquipmentsIndex::Left_Hand_Head]->SetParentEquipment(AllEquipments[(int)EEquipmentsIndex::Left_Hand]);

    // kago
    AllEquipments[(int)EEquipmentsIndex::Kago]->SetParentEquipment(AllEquipments[(int)EEquipmentsIndex::Bag]);
}
