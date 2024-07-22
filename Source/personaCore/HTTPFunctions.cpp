// Fill out your copyright notice in the Description page of Project Settings.


#include "HTTPFunctions.h"

#include "Logging/LogMacros.h"
#include "Engine.h"

#include "GenericPlatform/GenericPlatformHttp.h"
#include "HttpModule.h"
#include "Interfaces/IHttpRequest.h"
#include "Interfaces/IHttpResponse.h"
#include "Json.h"

FString UHTTPFunctions::DecodeUrlString(FString encodedString)
{
	FString decodedString = FGenericPlatformHttp::UrlDecode(encodedString);
	return decodedString;
}

FString UHTTPFunctions::EncodeUrlString(FString stringToEncode)
{
	FString encodedString = FGenericPlatformHttp::UrlEncode(stringToEncode);
	return encodedString;
}

