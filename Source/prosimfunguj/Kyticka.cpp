// Fill out your copyright notice in the Description page of Project Settings.


#include "Kyticka.h"

// Sets default values
AKyticka::AKyticka()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("StaticMeshComponent");

}

// Called when the game starts or when spawned
void AKyticka::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AKyticka::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FRotator Spin = GetActorRotation();
	Spin.Yaw += 5;
	SetActorRotation(Spin);

}

