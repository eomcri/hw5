// Copyright Epic Games, Inc. All Rights Reserved.

#include "hw5GameMode.h"
#include "hw5Character.h"
#include "UObject/ConstructorHelpers.h"

Ahw5GameMode::Ahw5GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
