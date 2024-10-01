// Copyright Sun BoHeng 2022

#pragma once

#include "Modules/ModuleManager.h"

class FRuntimeVertexPainterModule : public IModuleInterface
{
public:
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
