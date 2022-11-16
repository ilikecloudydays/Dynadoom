// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GetSteamID.generated.h"

/**
 * 
 */
UCLASS()
class DYNADOOM_API UGetSteamID : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintPure, Category = "Steam")
		static FString GetSteamID64();

	UFUNCTION(BlueprintPure, Category = "Steam")
		static FString GetSteamID32();
};
