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

	UWorld* World = GetWorld();
	FVector Location = GetActorLocation();
	FVector Forward = GetActorForwardVector();

	DRAW_SPHERE_DEBUG(Location);
	DRAW_LINEANDPOINT_DEBUG(Location, Location + Forward * 300);
}

void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	UE_LOG(LogTemp, Warning, TEXT("Hello World"));

	if (GEngine)
	{
		FString Message = FString::Printf(TEXT("DeltaTime: %f"), DeltaTime);
		GEngine->AddOnScreenDebugMessage(0, 60.f, FColor::Blue, Message);
	}
}

