#include "Item/Item.h"
#include "engine/engine.h"
#include "OpenWorld/DebugMacros.h"

AItem::AItem()
{
	PrimaryActorTick.bCanEverTick = true;

	ItemMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ItemMeshComponent"));
	RootComponent = ItemMesh;
}

void AItem::BeginPlay()
{
	Super::BeginPlay();

}

float AItem::GetSinValue()
{
	return Amplitude * FMath::Sin(RunningTime * TimeConstant);
}

float AItem::GetCoSinValue()
{
	return Amplitude* FMath::Cos(RunningTime * TimeConstant);
}

void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	RunningTime += DeltaTime;
	
	float RotationRate = 45.f;
	AddActorLocalRotation(FRotator(0.f, DeltaTime * RotationRate, 0.f));
}

