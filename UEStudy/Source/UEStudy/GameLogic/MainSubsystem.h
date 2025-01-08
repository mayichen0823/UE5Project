// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "MainSubsystem.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class UESTUDY_API UMainSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
	
public:
	virtual bool ShouldCreateSubsystem(UObject* Outer) const;

	virtual void Initialize(FSubsystemCollectionBase& Collection);

	virtual void Deinitialize();
};
