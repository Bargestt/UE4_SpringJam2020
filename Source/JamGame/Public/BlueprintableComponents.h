// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/AudioComponent.h"
#include "Components/StaticMeshComponent.h"
#include "BlueprintableComponents.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class JAMGAME_API UBlueprintableAudioComponent : public UAudioComponent
{
	GENERATED_BODY()
	
};

/**
 *
 */
UCLASS(Blueprintable)
class JAMGAME_API UBlueprintableStaticMeshComponent : public UStaticMeshComponent
{
	GENERATED_BODY()

};