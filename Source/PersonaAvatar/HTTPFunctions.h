// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "HTTPFunctions.generated.h"

/**
 * 
 */
UCLASS()
class PERSONAAVATAR_API UHTTPFunctions : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintPure, Category = "helloidiot|HTML")
	static FString DecodeUrlString(FString encodedString);
	UFUNCTION(BlueprintPure, Category = "helloidiot|HTML")
	static FString EncodeUrlString(FString stringToEncode);
	
};
