#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "DIY_EquipmentCommonInterface.generated.h"

UCLASS()
class AROUNDME_API ADIY_EquipmentCommonInterface : public ACharacter
{
	GENERATED_BODY()

public:
	// 设置此 empty 属性的默认值
	ADIY_EquipmentCommonInterface();

protected:
	// 已在游戏开始或生成时调用
	virtual void BeginPlay() override;

public:
	// 已调用每个帧
	virtual void Tick(float DeltaTime) override;

	// 调用以绑定要输出的功能
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
