// Copyright Epic Games, Inc. All Rights Reserved.

#include "EpicMegaJamGameMode.h"
#include "EpicMegaJamCharacter.h"
#include "UObject/ConstructorHelpers.h"

AEpicMegaJamGameMode::AEpicMegaJamGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
