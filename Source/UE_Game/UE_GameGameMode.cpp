// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE_GameGameMode.h"
#include "UE_GameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE_GameGameMode::AUE_GameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
