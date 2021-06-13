// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MojoController.generated.h"

/**
 * 
 */
//When the clip and/or ammo reserves are empty, what should happen?
UENUM(BlueprintType, meta = (Bitflags, UseEnumValuesAsMaskValuesInEditor = "true"))
enum class EInputDirection : uint8
{
	//A 0 entry required for compilation as an enum needs an explicit default value 
	None = 0 UMETA(Hidden),
    Forward = 1 << 0,
    Right = 1 << 1,
	Down = 1 << 2,
	Left = 1 << 3
};
ENUM_CLASS_FLAGS(EInputDirection);

UCLASS()
class MOJO_API AMojoController : public APlayerController
{
	GENERATED_BODY()

	protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Input", meta = (Bitmask, BitmaskEnum = "EInputDirection"))
	uint8 InputDirection = static_cast<uint8>(EInputDirection::None);
};
