// Fill out your copyright notice in the Description page of Project Settings.


#include "MainSubsystem.h"

bool UMainSubsystem::ShouldCreateSubsystem(UObject* Outer) const
{
	Super::ShouldCreateSubsystem(Outer);
	return true;
		
}

void UMainSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
}

void UMainSubsystem::Deinitialize()
{
	Super::Deinitialize();
}
