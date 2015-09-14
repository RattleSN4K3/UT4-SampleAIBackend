#include "SampleAIBackendPrivatePCH.h"
#include "SampleAIBot.h"

ASampleAIBot::ASampleAIBot(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

bool ASampleAIBot::IsTeammate(AActor* TestActor)
{
	APlayerState* TestPS = Cast<APlayerState>(TestActor);
	if (!TestPS && Cast<AController>(TestActor)) TestPS = Cast<AController>(TestActor)->PlayerState;
	if (!TestPS && Cast<APawn>(TestActor)) TestPS = Cast<APawn>(TestActor)->PlayerState;

	if (PlayerState && TestPS)
	{
		// shoot at everyone if only 2 players playing
		AGameMode* Game = GetWorld()->GetAuthGameMode();
		bool bSkipCheck = Game && (Game->NumPlayers + Game->NumBots < 3);

		// only shoot/kill players with the same or higher score
		return !bSkipCheck && (PlayerState->Score > TestPS->Score);
	}

	// skip every player with an invalid PlayerState
	return true;
}