// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "TGGameMode.h"
#include "TGHUD.h"
#include "TGCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATGGameMode::ATGGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATGHUD::StaticClass();
}