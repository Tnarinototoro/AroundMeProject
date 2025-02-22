#include "DIY_EquipmentCommonInterface.h"

// 设置默认值
ADIY_EquipmentCommonInterface::ADIY_EquipmentCommonInterface()
{
	// 设置此 empty，以调用每个帧的 Tick()。如果不需要，可以禁用此功能以提高性能。
	PrimaryActorTick.bCanEverTick = true;
}

// 已在游戏开始或生成时调用
void ADIY_EquipmentCommonInterface::BeginPlay()
{
	Super::BeginPlay();
}

// 已调用每个帧
void ADIY_EquipmentCommonInterface::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// 调用以绑定要输出的功能
void ADIY_EquipmentCommonInterface::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}
