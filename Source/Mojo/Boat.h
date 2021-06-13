// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Boat.generated.h"

UCLASS()
class MOJO_API ABoat : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABoat();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int BoatSegments{1};

	UFUNCTION(BlueprintImplementableEvent)
	void BPUpgradeBoat();
	
/*
virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
*/
	
};
