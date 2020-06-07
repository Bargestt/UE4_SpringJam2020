// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBlueprintFunctionLibrary.h"
#include "Components/ExponentialHeightFogComponent.h"

void UMyBlueprintFunctionLibrary::SetFogDensities(class UExponentialHeightFogComponent* FogComponent, float MainDensity, float SecondDensity)
{
	if (FogComponent)
	{
		FogComponent->SecondFogData.FogDensity = SecondDensity;
		FogComponent->SetFogDensity(MainDensity);
	}
}
