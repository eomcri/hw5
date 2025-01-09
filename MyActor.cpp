// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"
#include "Math/UnrealMathUtility.h"
#include "Engine/Engine.h"

// Sets default values
AMyActor::AMyActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	start = FVector2D(0, 0);
}


// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	Move();
}

int32 AMyActor::Step(){
	return FMath::RandRange(0,1);
}

void AMyActor::Move(){
	FVector2D befPos = start;
	FVector2D newPos;
	for (int i = 0; i < 10; i++){
		int32 step = Step();
		newPos = FVector2D(befPos.X + step, befPos.Y + step);
		UE_LOG(LogTemp, Warning, TEXT("Move to %2f, %2f"), newPos.X, newPos.Y);
		float distance = FMath::Sqrt(FMath::Pow(newPos.X - befPos.X,2)+FMath::Pow(newPos.Y - befPos.Y,2));
		UE_LOG(LogTemp, Warning, TEXT("Distance: %2f"), distance);
		befPos = newPos;
	}
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

