// Copyright Epic Games, Inc. All Rights Reserved.

#include "Coding1GameMode.h"
#include "Coding1Character.h"
#include "UObject/ConstructorHelpers.h"

ACoding1GameMode::ACoding1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
