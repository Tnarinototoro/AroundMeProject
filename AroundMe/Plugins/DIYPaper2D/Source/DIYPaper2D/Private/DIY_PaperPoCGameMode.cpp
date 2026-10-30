// Copyright Epic Games, Inc. All Rights Reserved.

#include "DIY_PaperPoCGameMode.h"

#include "DIY_AnimalPaperCharacter.h"

ADIY_PaperPoCGameMode::ADIY_PaperPoCGameMode()
{
	DefaultPawnClass = ADIY_AnimalPaperCharacter::StaticClass();
}
