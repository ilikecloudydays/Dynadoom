// Fill out your copyright notice in the Description page of Project Settings.


#include "Menu/GetSteamID.h"
#include "ThirdParty/Steamworks/Steamv151/sdk/public/steam/steam_api.h"

FString UGetSteamID::GetSteamID64()
{
	FString outID = "";
	
	if (SteamUser() == nullptr)
		return "false";

	CSteamID steamID = SteamUser()->GetSteamID();
	uint64 intID = steamID.ConvertToUint64();

	outID = FString::Printf(TEXT("%lld"), intID);

	return outID;
}

FString UGetSteamID::GetSteamID32()
{
	FString outID = "";
	CSteamID steamID = SteamUser()->GetSteamID();
	uint64 intID = steamID.ConvertToUint64();

	outID = FString::FromInt(intID);

	return outID;
}