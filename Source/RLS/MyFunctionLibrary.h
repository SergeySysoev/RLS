// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class RLS_API UMyFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	// Get Sub Level name
	UFUNCTION(BlueprintPure, Category = NYTaskHelper)
		static FName Getactorstreaminglevelname(AActor* Actor);
};
