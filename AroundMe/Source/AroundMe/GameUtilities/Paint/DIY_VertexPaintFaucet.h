#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "DIY_VertexPaintFaucet.generated.h"

UCLASS(ClassGroup = (Paint), meta = (BlueprintSpawnableComponent))
class AROUNDME_API UDIY_VertexPaintFaucet : public USceneComponent
{
	GENERATED_BODY()

public:

	UDIY_VertexPaintFaucet();




public:
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "UDIY_VertexPaintFaucet")
   
	class UStaticMeshComponent * FaucetModel{ nullptr };

	
	
	
	

	
};