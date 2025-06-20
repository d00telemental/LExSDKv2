/*
#############################################################################################
# Mass Effect 2 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.5_Beta-Rev.60-MELE
# ========================================================================================= #
# File: SFXGameDLC_PRE_Cerberus_functions.cpp
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL, SirCxyrtyx
# Thanks: HOOAH07, lowHertz
#############################################################################################
*/


#include "LESDK/Includes.LE2.hpp"


#ifdef _MSC_VER
	#pragma pack ( push, 0x4 )
#endif
#define LESDK_IN_GENERATED


/*
# ========================================================================================= #
# Functions
# ========================================================================================= #
*/



class UClass* USFXGameEffect_Gear_CerberusHealthBonus::pClassPointer = NULL;

class UClass* USFXGameEffect_Gear_CerberusHealthBonus::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameDLC_PRE_Cerberus.SFXGameEffect_Gear_CerberusHealthBonus" );

		return pClassPointer;
	};



class UClass* USFXGameEffect_Gear_CerberusHvyWpnMagazines::pClassPointer = NULL;

class UClass* USFXGameEffect_Gear_CerberusHvyWpnMagazines::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameDLC_PRE_Cerberus.SFXGameEffect_Gear_CerberusHvyWpnMagazines" );

		return pClassPointer;
	};



class UClass* USFXGameEffect_Gear_CerberusShieldBonus::pClassPointer = NULL;

class UClass* USFXGameEffect_Gear_CerberusShieldBonus::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameDLC_PRE_Cerberus.SFXGameEffect_Gear_CerberusShieldBonus" );

		return pClassPointer;
	};



#undef LESDK_IN_GENERATED

#ifdef _MSC_VER
	#pragma pack ( pop )
#endif
