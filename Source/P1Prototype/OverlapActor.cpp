// Fill out your copyright notice in the Description page of Project Settings.


#include "OverlapActor.h"

// Sets default values
AOverlapActor::AOverlapActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	boxCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollider"));
	boxCollider->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
}

// Called when the game starts or when spawned
void AOverlapActor::BeginPlay()
{
	Super::BeginPlay();
	
	boxCollider->OnComponentBeginOverlap.AddDynamic(this, &AOverlapActor::OverlapConsolePrint);
}

// Called every frame
void AOverlapActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AOverlapActor::OverlapConsolePrint(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Cyan, TEXT("This fills a requirement. C++ is needlessly hard :("));
}

