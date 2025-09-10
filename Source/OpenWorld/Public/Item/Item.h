#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Item.generated.h"


UCLASS()
class OPENWORLD_API AItem : public AActor
{
	GENERATED_BODY()
	
public:	
	AItem();
	virtual void Tick(float DeltaTime) override;

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SineValues")
	float Amplitude = 0.25f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SineValues")
	float TimeConstant = 5.f;

	UFUNCTION(BlueprintPure)
	float GetSinValue();

	UFUNCTION(BlueprintPure)
	float GetCoSinValue();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "SineValues")
	float RunningTime;

private:
	float MovementRate = 50.f;
	float RotationRate = 45.f;
};
