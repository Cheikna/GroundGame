// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "GroundGameGameMode.h"
#include "GroundGameHUD.h"
#include "GroundGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGroundGameGameMode::AGroundGameGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AGroundGameHUD::StaticClass();
}
