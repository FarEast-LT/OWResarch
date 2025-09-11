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

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "SineValues")
	float RunningTime;

	UFUNCTION(BlueprintPure)
	float GetSinValue();

	UFUNCTION(BlueprintPure)
	float GetCoSinValue();

	template<typename T>
	T GetAvg(T Input01, T Input02);

private:
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* ItemMesh;
};

template<typename T>
inline T AItem::GetAvg(T Input01, T Input02)
{
	return (Input01 + Input02) / 2;
}
