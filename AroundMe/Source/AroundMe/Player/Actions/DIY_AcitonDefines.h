#pragma once

#include "CoreMinimal.h"
#include "DIY_AcitonDefines.generated.h"


UENUM(BlueprintType)
enum class EInputActionType : uint8
{
	Look_Action UMETA(DisplayName = "Look_Action"),
	Move_Action UMETA(DisplayName = "Move_Action"),
	Jump_Action UMETA(DisplayName = "Jump_Action"),
	Interact_Action UMETA(DisplayName = "Interact_Action"),
	Action_Count
};

UENUM(BlueprintType)
enum class EMainPlayerActingStateType : uint8
{
	State_Base_Motion,
	State_Building,
	State_Carrying,
	State_Farming,
	State_Gathering,
	State_Mining,
	State_PickingUp,
	State_WoodChopping,
	ActingState_Count
};


