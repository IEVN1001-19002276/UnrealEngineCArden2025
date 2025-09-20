// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActorTest.h"

// Sets default values
AMyActorTest::AMyActorTest()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MyFloatVariable = 50.0f;
	edad = 26;
	esInstructor = true;
	nombre = "Daniel Bueno";
	DemostrateFundamentals();

}

// Called when the game starts or when spawned
void AMyActorTest::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyActorTest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void AMyActorTest::DemostrateFundamentals() {
	//Operadores Aritmeticos
	int32 sum = edad + 30;
	float Product = MyFloatVariable * 2.5f;

	//Estructura de control 
	if (esInstructor) {
		//Imprime en consola
		UE_LOG(LogTemp, Warning, TEXT("%s es instructor y tiene %d años"), *nombre, edad);
		//Imprime en pantalla /viewport
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow,
			FString::Printf(TEXT("%s es instructor y tiene %d años"), *nombre, edad));
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("%s es instructor y tiene %d años"), *nombre, edad);
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow,
			FString::Printf(TEXT("%s es instructor y tiene %d años"), *nombre, edad));
	}
}
