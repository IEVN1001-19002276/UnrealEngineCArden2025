// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActorTest.generated.h"

UCLASS()
class UEARDENC_API AMyActorTest : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMyActorTest();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// EJEMPLO
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyActorTest")
	//float MyFloatVariable;
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyActorTest")
	//int32 edad;
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyActorTest")
	//bool esInstructor;
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyActorTest")
	//FString nombre;


	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyActorTest")
	//void MyFunction();
	
	//Bucles o Ciclos
	for (int32 i = 0; i < 5; i++) {
		FString DEbugMessage = FString::Printf(TEXT("loop interation:%d"), i);
		GEngine->AddOnScreenDebugMessage(-1, 5.0F, FColor::Green, DEbugMessage);
	}

};
