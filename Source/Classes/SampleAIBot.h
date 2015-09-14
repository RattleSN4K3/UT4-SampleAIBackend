#pragma once

#include "UTBot.h"
#include "SampleAIBot.generated.h"

UCLASS()
class SAMPLEAIBACKEND_API ASampleAIBot : public AUTBot
{
	GENERATED_UCLASS_BODY()

	virtual bool IsTeammate(AActor* TestActor) override;

};