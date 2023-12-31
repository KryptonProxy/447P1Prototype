// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DemoActor.generated.h"

UCLASS()
class P1PROTOTYPE_API ADemoActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADemoActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void EnableMovement();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Demo C++ Stuff | Movement")
	float speed = 0;

	bool bIsMovementEnabled = false;

};
