// Copyright Epic Games, Inc. All Rights Reserved.

#include "Test26GameMode.h"
#include "Test26Character.h"
#include "UObject/ConstructorHelpers.h"

ATest26GameMode::ATest26GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
