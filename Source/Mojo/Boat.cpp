// Fill out your copyright notice in the Description page of Project Settings.

#include "Boat.h"

// Sets default values
ABoat::ABoat()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABoat::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABoat::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
/*

void ABoat::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	FName PropertyName = (PropertyChangedEvent.Property != NULL) ? PropertyChangedEvent.Property->GetFName() : NAME_None;
	if (PropertyName == GET_MEMBER_NAME_CHECKED(ABoat, BoatSegments))
	{
		BPUpgradeBoat();
	}
}
*/
