#include "Item/Item.h"
#include "engine/engine.h"
#include "OpenWorld/DebugMacros.h"

AItem::AItem()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AItem::BeginPlay()
{
	Super::BeginPlay();
	

}

void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	float MovementRate = 50.f; // Speed(cm/s)
	float RotationRate = 45.f;

	AddActorWorldOffset(FVector(MovementRate * DeltaTime, 0.0f, 0.0f)); //Speed(cm/s) * Deltaitme(s/f) = cm/f
	AddActorWorldRotation(FRotator(0.f, RotationRate * DeltaTime, 0.f)); //Rotation(deg/s) * Deltaitme(s/f) = deg/f
	
	DRAW_SPHERE_DEBUG_SingleFrame(GetActorLocation());
	DRAW_LINEANDPOINT_DEBUG_SingleFrame(GetActorLocation(), GetActorLocation() + GetActorForwardVector() * 300);
}

