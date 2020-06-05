// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ObjectWithWorld.generated.h"

/** 
 * Object with access to the world
 * Outer must be Actor, ActorComponent or ObjectWithWorld
 */
UCLASS(Blueprintable, BlueprintType)
class JAMGAME_API UObjectWithWorld : public UObject
{
	GENERATED_BODY()

public:

	// Begin UObject interface
	virtual class UWorld* GetWorld() const override
	{
		if (const UObject* Outer = GetOuter()) 
		{
			if (Outer->IsA<AActor>() || Outer->IsA<UActorComponent>() || Outer->IsA<UObjectWithWorld>())
			{
				return Outer->GetWorld();
			}
		}
		return nullptr;
	}
	// End UObject interface

};