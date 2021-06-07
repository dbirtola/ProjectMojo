// Copyright Epic Games, Inc. All Rights Reserved.

#include "MojoGameMode.h"
#include "MojoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMojoGameMode::AMojoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
