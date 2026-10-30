// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Commandlets/Commandlet.h"
#include "DIY_PaperPoCBuildCommandlet.generated.h"

/** Builds the Paper2D PoC assets (textures, sprites, flipbooks, data assets) and the test map. */
UCLASS()
class DIYPAPER2DEDITOR_API UDIY_PaperPoCBuildCommandlet : public UCommandlet
{
	GENERATED_BODY()

public:
	UDIY_PaperPoCBuildCommandlet();

	virtual int32 Main(const FString& Params) override;
};
