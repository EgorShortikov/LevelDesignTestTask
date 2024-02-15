// Copyright Epic Games, Inc. All Rights Reserved.

#include "LevelDesignTestTaskGameMode.h"
#include "LevelDesignTestTaskCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALevelDesignTestTaskGameMode::ALevelDesignTestTaskGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
