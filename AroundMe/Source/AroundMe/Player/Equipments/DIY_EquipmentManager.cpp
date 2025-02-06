#include "DIY_EquipmentManager.h"
#include "DIY_RobotHandController.h"
#include "DIY_RobotHand_HeadController.h"
#include "DIY_BagController.h"
#include "DIY_KagoController.h"
#include "GameFramework/Character.h"
#include "DIY_EquipmentCommonLib.h"

UDIY_EquipmentManager::UDIY_EquipmentManager()
{
	PrimaryComponentTick.bCanEverTick = true;
	

	InitAllEquipments();
	
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

UDIY_EquipmentBase *UDIY_EquipmentManager::GetEquipAtIndex(EEquipmentsIndex inIndex)
{

	ensureMsgf((uint8)inIndex<(uint8)EEquipmentsIndex::Equip_Count,TEXT("GetEquipAtIndex inIndex over the limit"));
	ensureMsgf((uint8)inIndex<AllEquipments.Num(),TEXT("GetEquipAtIndex inIndex over the array num"));

	return AllEquipments[(uint8)inIndex];
}

USkeletalMeshComponent *UDIY_EquipmentManager::GetEquipSKMAtIndex(EEquipmentsIndex inIndex)
{
	ensureMsgf((uint8)inIndex<(uint8)EEquipmentsIndex::Equip_Count,TEXT("GetEquipAtIndex inIndex over the limit"));
	ensureMsgf((uint8)inIndex<AllEquipments.Num(),TEXT("GetEquipAtIndex inIndex over the array num"));

	ensureMsgf(nullptr!=AllEquipments[(uint8)inIndex]->mEquipMentMesh,TEXT("current index skm shall never be null"));
    return AllEquipments[(uint8)inIndex]->mEquipMentMesh;
}

void UDIY_EquipmentManager::BeginPlay()
{
	Super::BeginPlay();
	
	checkf((int32)EDIY_RobotHandType::Count == SKMDepot_Hands.Num(), TEXT("RobotHand num is invalid"));
	checkf((int32)EDIY_RobotHand_HeadType::Count == SKMDepot_Hand_Heads.Num(), TEXT("RobotHand num is invalid"));
	checkf((int32)EDIY_BagType::Count == SKMDepot_Bags.Num(), TEXT("RobotHand num is invalid"));
	checkf((int32)EDIY_KagoType::Count == SKMDepot_Kagos.Num(), TEXT("Kago num is invalid"));
	RealizeAllEquipmentModels();
}

void UDIY_EquipmentManager::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);



}


void UDIY_EquipmentManager::PostInitProperties()
{
	Super::PostInitProperties();
	

}

void UDIY_EquipmentManager::InitAllEquipments()
{

	AllEquipments.Init(nullptr, (int)EEquipmentsIndex::Equip_Count);
	
	for (int equip_index = 0; equip_index < (int)EEquipmentsIndex::Equip_Count; ++equip_index)
	{
		
		switch (equip_index)
		{
			case (int)EEquipmentsIndex::Bag:
		{

			
			AllEquipments[(int)EEquipmentsIndex::Bag] = CreateDefaultSubobject<UDIY_BagController>(TEXT("Bag"));

			
			// FAttachmentTransformRules rule(EAttachmentRule::KeepRelative,false);
			// AllEquipments[(int)EEquipmentsIndex::Bag]->mEquipMentMesh->AttachToComponent(this,rule);
			AllEquipments[(int)EEquipmentsIndex::Bag]->mEquipMentMesh->SetupAttachment(this);
			AllEquipments[(int)EEquipmentsIndex::Bag]->mEquipMentMesh->SetRelativeLocation({0.f,0.f,0.f});
			
			AllEquipments[(int)EEquipmentsIndex::Bag]->mEquipIndex=EEquipmentsIndex::Bag;
			AllEquipments[(int)EEquipmentsIndex::Bag]->mEquipName=TEXT("Bag");
			AllEquipments[(int)EEquipmentsIndex::Bag]->mEquipModelType=(uint8)EDIY_BagType::RustOld_Type;
			
			break;
		}

		case (int)EEquipmentsIndex::Left_Hand:
		{

			
			AllEquipments[(int)EEquipmentsIndex::Left_Hand] = CreateDefaultSubobject<UDIY_RobotHandController>(TEXT("Left_Hand"));
			
			
			
			// FAttachmentTransformRules rule(EAttachmentRule::KeepRelative,false);
			// cur_scene_compo->AttachToComponent(GetEuqipmentEntityAs_SceneCompo(EEquipmentsIndex::Bag),rule,TEXT("arm_l"));
			
			AllEquipments[(int)EEquipmentsIndex::Left_Hand]->mEquipMentMesh->SetupAttachment(AllEquipments[(int)EEquipmentsIndex::Bag]->mEquipMentMesh,TEXT("arm_l"));
			AllEquipments[(int)EEquipmentsIndex::Left_Hand]->mEquipIndex=EEquipmentsIndex::Left_Hand;
			AllEquipments[(int)EEquipmentsIndex::Left_Hand]->mEquipName=TEXT("Left_Hand");
			AllEquipments[(int)EEquipmentsIndex::Left_Hand]->mEquipModelType=(uint8)EDIY_RobotHandType::RustOld_Type;

			UDIY_RobotHandController* cur_hand=Cast<UDIY_RobotHandController>(AllEquipments[(int)EEquipmentsIndex::Left_Hand]);

			
			cur_hand->Target_Point->SetupAttachment(this);
			
			
			cur_hand->Target_Point->SetRelativeLocation({0.f,0.f,0.f});

			
			//EASY_LOG_MAINPLAYER("xxxxxxxxx manager parent is %s",*this->GetAttachParent()->GetName());
			break;
		}
		case (int)EEquipmentsIndex::Right_Hand:
		{
		
			AllEquipments[(int)EEquipmentsIndex::Right_Hand] = CreateDefaultSubobject<UDIY_RobotHandController>(TEXT("Right_Hand"));

		
			
			
			// FAttachmentTransformRules rule(EAttachmentRule::KeepRelative,false);
			// cur_scene_compo->AttachToComponent(GetEuqipmentEntityAs_SceneCompo(EEquipmentsIndex::Bag),rule,TEXT("arm_r"));



           





			AllEquipments[(int)EEquipmentsIndex::Right_Hand]->mEquipMentMesh->SetupAttachment(AllEquipments[(int)EEquipmentsIndex::Bag]->mEquipMentMesh,TEXT("arm_r"));

			AllEquipments[(int)EEquipmentsIndex::Right_Hand]->mEquipIndex=EEquipmentsIndex::Right_Hand;
			AllEquipments[(int)EEquipmentsIndex::Right_Hand]->mEquipName=TEXT("Right_Hand");
			AllEquipments[(int)EEquipmentsIndex::Right_Hand]->mEquipModelType=(uint8)EDIY_RobotHandType::RustOld_Type;

			UDIY_RobotHandController* cur_hand=Cast<UDIY_RobotHandController>(AllEquipments[(int)EEquipmentsIndex::Right_Hand]);
			cur_hand->Target_Point->SetupAttachment(this);
			cur_hand->Target_Point->SetRelativeLocation({0.f,0.f,0.f});
			this->GetName();
			break;
		}
		case (int)EEquipmentsIndex::Left_Hand_Head:
		{

			AllEquipments[(int)EEquipmentsIndex::Left_Hand_Head] = CreateDefaultSubobject<UDIY_RobotHand_HeadController>(TEXT("Left_Hand_Head"));
			
			
			
			// FAttachmentTransformRules rule(EAttachmentRule::KeepRelative,false);
			// cur_scene_compo->AttachToComponent(GetEuqipmentEntityAs_SceneCompo(EEquipmentsIndex::Left_Hand),rule,TEXT("armhead_l_00"));

			AllEquipments[(int)EEquipmentsIndex::Left_Hand_Head]->mEquipMentMesh->SetupAttachment(AllEquipments[(int)EEquipmentsIndex::Left_Hand]->mEquipMentMesh,TEXT("armhead_l_00"));


			AllEquipments[(int)EEquipmentsIndex::Left_Hand_Head]->mEquipIndex=EEquipmentsIndex::Left_Hand_Head;
			AllEquipments[(int)EEquipmentsIndex::Left_Hand_Head]->mEquipName=TEXT("Left_Hand_Head");
			AllEquipments[(int)EEquipmentsIndex::Left_Hand_Head]->mEquipModelType=(uint8)EDIY_RobotHand_HeadType::Claw_Type;
			break;
		}
		case (int)EEquipmentsIndex::Right_Hand_Head:
		{

			AllEquipments[(int)EEquipmentsIndex::Right_Hand_Head] = CreateDefaultSubobject<UDIY_RobotHand_HeadController>(TEXT("Right_Hand_Head"));
			
			// FAttachmentTransformRules rule(EAttachmentRule::KeepRelative,false);
			// cur_scene_compo->AttachToComponent(GetEuqipmentEntityAs_SceneCompo(EEquipmentsIndex::Right_Hand),rule,TEXT("armhead_l_00"));

			AllEquipments[(int)EEquipmentsIndex::Right_Hand_Head]->mEquipMentMesh->SetupAttachment(AllEquipments[(int)EEquipmentsIndex::Right_Hand]->mEquipMentMesh,TEXT("armhead_l_00"));

			AllEquipments[(int)EEquipmentsIndex::Right_Hand_Head]->mEquipIndex=EEquipmentsIndex::Right_Hand_Head;
			AllEquipments[(int)EEquipmentsIndex::Right_Hand_Head]->mEquipName=TEXT("Right_Hand_Head");
			AllEquipments[(int)EEquipmentsIndex::Right_Hand_Head]->mEquipModelType=(uint8)EDIY_RobotHand_HeadType::Drill_Type;

			
			break;
		}
		case (int)EEquipmentsIndex::Kago:
		{

			AllEquipments[(int)EEquipmentsIndex::Kago] = CreateDefaultSubobject<UDIY_KagoController>(TEXT("Kago"));
			
			
			AllEquipments[(int)EEquipmentsIndex::Kago]->mEquipMentMesh->SetupAttachment(AllEquipments[(int)EEquipmentsIndex::Bag]->mEquipMentMesh,TEXT("kago"));

			AllEquipments[(int)EEquipmentsIndex::Kago]->mEquipIndex=EEquipmentsIndex::Kago;
			AllEquipments[(int)EEquipmentsIndex::Kago]->mEquipName=TEXT("Kago");
			AllEquipments[(int)EEquipmentsIndex::Kago]->mEquipModelType=(uint8)EDIY_KagoType::RustOld_Type;

			
			break;
		}
		default:
			break;
		}
	}
}

void UDIY_EquipmentManager::RealizeAllEquipmentModels()
{
	DIY_EquipmentCommonLib::LoadSkeletonMeshAsync(this, AllEquipments[(int)EEquipmentsIndex::Bag]->mEquipMentMesh, SKMDepot_Bags[0]);
	DIY_EquipmentCommonLib::LoadSkeletonMeshAsync(this, AllEquipments[(int)EEquipmentsIndex::Left_Hand]->mEquipMentMesh, SKMDepot_Hands[0]);
	DIY_EquipmentCommonLib::LoadSkeletonMeshAsync(this, AllEquipments[(int)EEquipmentsIndex::Left_Hand_Head]->mEquipMentMesh, SKMDepot_Hand_Heads[0]);
	DIY_EquipmentCommonLib::LoadSkeletonMeshAsync(this, AllEquipments[(int)EEquipmentsIndex::Right_Hand]->mEquipMentMesh,  SKMDepot_Hands[0]);
	DIY_EquipmentCommonLib::LoadSkeletonMeshAsync(this, AllEquipments[(int)EEquipmentsIndex::Right_Hand_Head]->mEquipMentMesh, SKMDepot_Hand_Heads[1]);
	DIY_EquipmentCommonLib::LoadSkeletonMeshAsync(this, AllEquipments[(int)EEquipmentsIndex::Kago]->mEquipMentMesh, SKMDepot_Kagos[0]);
}
