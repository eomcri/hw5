// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterMovementManager.h"
#include "Math/UnrealMathUtility.h"
#include "Engine/Engine.h"

// Sets default values
ACharacterMovementManager::ACharacterMovementManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	start = FVector2D(0, 0);
}


// Called when the game starts or when spawned
void ACharacterMovementManager::BeginPlay()
{
	Super::BeginPlay();
	Move();
}

int32 ACharacterMovementManager::Step(){
	return FMath::RandRange(0,1);
}

void ACharacterMovementManager::Move(){
	FVector2D curPos = start;
	for (int i = 0; i < 10; i++){
		int32 step = Step();
		curPos = FVector2D(curPos.X + step, curPos.Y + step);
		UE_LOG(LogTemp, Warning, TEXT("Move to %f, %f"), curPos.X, curPos.Y);
	}
}

// Called every frame
void ACharacterMovementManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

