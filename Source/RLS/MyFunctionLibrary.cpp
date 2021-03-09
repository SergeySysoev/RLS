// Fill out your copyright notice in the Description page of Project Settings.


#include "MyFunctionLibrary.h"

FName UMyFunctionLibrary::Getactorstreaminglevelname(AActor* Actor)
{
	if (Actor != nullptr)
	{
		return Actor->GetLevel()->GetOuter()->GetFName();
	}
	return NAME_None;
}