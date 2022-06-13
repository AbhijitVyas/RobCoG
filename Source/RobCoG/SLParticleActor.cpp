// Copyright 2017-2021, Institute for Artificial Intelligence - University of Bremen


#include "SLParticleActor.h"
#include <Runtime/Engine/Classes/Kismet/GameplayStatics.h>

// Sets default values
ASLParticleActor::ASLParticleActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = mesh;

}

// Called when the game starts or when spawned
void ASLParticleActor::BeginPlay()
{
	Super::BeginPlay();

	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASLParticleActor::StaticClass(), FoundActors);
	
	UE_LOG(LogTemp, Log, TEXT("This is total number of found actors of type AParticleAsset: %d"), FoundActors.Num());
}

// Called every frame
void ASLParticleActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

