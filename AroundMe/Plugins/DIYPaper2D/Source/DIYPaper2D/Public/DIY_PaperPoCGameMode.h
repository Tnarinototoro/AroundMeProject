// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "DIY_PaperPoCGameMode.generated.h"

/** Spawns ADIY_LayeredPaperCharacter as the default pawn for the PoC map. */
UCLASS()
class DIYPAPER2D_API ADIY_PaperPoCGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ADIY_PaperPoCGameMode();
};
