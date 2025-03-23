#include "DIY_EquipmentManager.h"
#include "DIY_RobotHandController.h"
#include "DIY_RobotHand_HeadController.h"
#include "DIY_BagController.h"
#include "DIY_KagoController.h"
#include "DIY_ChestController.h"
#include "DIY_CapController.h"
#include "GameFramework/Character.h"
#include "DIY_EquipmentCommonLib.h"

UDIY_EquipmentManager::UDIY_EquipmentManager()
{
	PrimaryComponentTick.bCanEverTick = true;
	

	InitAllEquipments();


	//@TODO 
	//CurAllEquipModelType[] init should be processed at save object
	
}



void UDIY_EquipmentManager::RequestEquipModelTypeTo(EEquipmentsIndex inEquipIndex,int inModelType,bool forceReLoad)
{

	checkf(inEquipIndex<EEquipmentsIndex::Equip_Count,TEXT("input equipment index over the limit"));

	if(CurAllEquipModelType[(int)inEquipIndex]==inModelType&&!forceReLoad)
	return;

	if(inModelType<0)
	return;

	TSoftObjectPtr<USkeletalMesh>* needed_object_path=nullptr;

	switch (inEquipIndex)
	{
		case EEquipmentsIndex::Bag:
		{
			ensureMsgf(inModelType<SKMDepot_Bags.Num(),TEXT("bag requested to invalid model type"));
			needed_object_path=&SKMDepot_Bags[inModelType];
			break;
	    }
		case EEquipmentsIndex::Left_Hand:
		{
			ensureMsgf(inModelType<SKMDepot_Hands.Num(),TEXT("hand requested to invalid model type"));

			needed_object_path=&SKMDepot_Hands[inModelType];
			break;
	    }
		case EEquipmentsIndex::Right_Hand:
		{
			ensureMsgf(inModelType<SKMDepot_Hands.Num(),TEXT("hand requested to invalid model type"));

			needed_object_path=&SKMDepot_Hands[inModelType];


			break;
	    }
		case EEquipmentsIndex::Left_Hand_Head:
		{
			ensureMsgf(inModelType<SKMDepot_Hand_Heads.Num(),TEXT("hand head requested to invalid model type"));

			needed_object_path=&SKMDepot_Hand_Heads[inModelType];
			break;
	    }
		case EEquipmentsIndex::Right_Hand_Head:
		{
			ensureMsgf(inModelType<SKMDepot_Hand_Heads.Num(),TEXT("hand head requested to invalid model type"));
			needed_object_path=&SKMDepot_Hand_Heads[inModelType];
			break;
	    }
		case EEquipmentsIndex::Kago:
		{

			ensureMsgf(inModelType<SKMDepot_Kagos.Num(),TEXT("kago requested to invalid model type"));

			needed_object_path=&SKMDepot_Kagos[inModelType];
			break;
	    }
		case EEquipmentsIndex::Chest:
		{

			ensureMsgf(inModelType<SKMDepot_Chests.Num(),TEXT("chest requested to invalid model type"));

			needed_object_path=&SKMDepot_Chests[inModelType];
			break;
	    }
		case EEquipmentsIndex::Cap:
		{

			ensureMsgf(inModelType<SKMDepot_Caps.Num(),TEXT("cap requested to invalid model type"));
			needed_object_path=&SKMDepot_Caps[inModelType];
			break;
	    }

	
	default:
		break;
	}

	ensureMsgf(nullptr!=needed_object_path,TEXT("needed_object_path needs to be valid to create equipment"));

	DIY_EquipmentCommonLib::LoadSkeletonMeshAsync(this, AllEquipments[(int)inEquipIndex]->mEquipMentMesh, *needed_object_path);


	CurAllEquipModelType[(int)inEquipIndex]=inModelType;
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

	checkf((int32)EDIY_ChestType::Count == SKMDepot_Chests.Num(), TEXT("Chest num is invalid"));
	checkf((int32)EDIY_CapType::Count == SKMDepot_Caps.Num(), TEXT("Cap num is invalid"));
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
			//(X=-28.690009,Y=-3.189239,Z=-40.898868)
			//(Pitch=-0.883222,Yaw=-85.507022,Roll=-2.330402)
			AllEquipments[(int)EEquipmentsIndex::Bag]->mEquipMentMesh->SetRelativeLocation({-28.690009,-3.189239,-40.898868});
			AllEquipments[(int)EEquipmentsIndex::Bag]->mEquipMentMesh->SetRelativeRotation({-0.883222,-85.507022,-2.330402});
			
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

			
			cur_hand->Target_Hook->SetupAttachment(this);
			//(X=35.000000,Y=-60.000000,Z=20.000000)
			
			cur_hand->Target_Hook->SetRelativeLocation({35.f,-60.f,20.f});

			
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
			cur_hand->Target_Hook->SetupAttachment(this);
			cur_hand->Target_Hook->SetRelativeLocation({35.f,60.f,20.f});
			
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
		case (int)EEquipmentsIndex::Chest:
		{

			AllEquipments[(int)EEquipmentsIndex::Chest] = CreateDefaultSubobject<UDIY_ChestController>(TEXT("Chest"));
			
			
			AllEquipments[(int)EEquipmentsIndex::Chest]->mEquipMentMesh->SetupAttachment(this);

			AllEquipments[(int)EEquipmentsIndex::Chest]->mEquipIndex=EEquipmentsIndex::Chest;
			AllEquipments[(int)EEquipmentsIndex::Chest]->mEquipName=TEXT("Chest");
			AllEquipments[(int)EEquipmentsIndex::Chest]->mEquipModelType=(uint8)EDIY_ChestType::Original_Type;

			
			break;
		}
		case (int)EEquipmentsIndex::Cap:
		{

			AllEquipments[(int)EEquipmentsIndex::Cap] = CreateDefaultSubobject<UDIY_CapController>(TEXT("Cap"));
			
			
			AllEquipments[(int)EEquipmentsIndex::Cap]->mEquipMentMesh->SetupAttachment(this);

			AllEquipments[(int)EEquipmentsIndex::Cap]->mEquipIndex=EEquipmentsIndex::Cap;
			AllEquipments[(int)EEquipmentsIndex::Cap]->mEquipName=TEXT("Cap");
			AllEquipments[(int)EEquipmentsIndex::Cap]->mEquipModelType=(uint8)EDIY_CapType::Original_Type;

			
			break;
		}
		default:
			break;
		}
	}
}

void UDIY_EquipmentManager::RealizeAllEquipmentModels()
{
	RequestEquipModelTypeTo(EEquipmentsIndex::Bag,0,true);
	RequestEquipModelTypeTo(EEquipmentsIndex::Left_Hand,0,true);
	RequestEquipModelTypeTo(EEquipmentsIndex::Left_Hand_Head,0,true);
	RequestEquipModelTypeTo(EEquipmentsIndex::Right_Hand,0,true);
	RequestEquipModelTypeTo(EEquipmentsIndex::Right_Hand_Head,1,true);
	RequestEquipModelTypeTo(EEquipmentsIndex::Kago,0,true);
	RequestEquipModelTypeTo(EEquipmentsIndex::Chest,0,true);
	RequestEquipModelTypeTo(EEquipmentsIndex::Cap,0,true);


	
}
