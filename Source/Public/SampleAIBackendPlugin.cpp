#include "SampleAIBackendPrivatePCH.h"

#include "ModuleManager.h"
#include "ModuleInterface.h"

class FSampleAIBackendPlugin : public IModuleInterface
{
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};

IMPLEMENT_MODULE( FSampleAIBackendPlugin, SampleAIBackend )

void FSampleAIBackendPlugin::StartupModule()
{
	
}


void FSampleAIBackendPlugin::ShutdownModule()
{
	
}



