// Copyright Epic Games, Inc. All Rights Reserved.

#include "BaseProyectGameMode.h"
#include "BaseProyectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABaseProyectGameMode::ABaseProyectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
