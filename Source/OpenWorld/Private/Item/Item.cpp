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

	//float DeltaZ = Amplitude * FMath::Sin(RunningTime * TimeConstant);
	//AddActorWorldOffset(FVector(MovementRate * DeltaTime, 0.0f, DeltaZ)); //Speed(cm/s) * Deltaitme(s/f) = cm/f
	//AddActorWorldRotation(FRotator(0.f, RotationRate * DeltaTime, 0.f)); //Rotation(deg/s) * Deltaitme(s/f) = deg/f
	
	DRAW_SPHERE_DEBUG_SingleFrame(GetActorLocation());
	DRAW_LINEANDPOINT_DEBUG_SingleFrame(GetActorLocation(), GetActorLocation() + GetActorForwardVector() * 300);
}

