/*
#############################################################################################
# Mass Effect 1 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.5_Beta-Rev.60-MELE
# ========================================================================================= #
# File: SFXVehicleResources_functions.cpp
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL, SirCxyrtyx
# Thanks: HOOAH07, lowHertz
#############################################################################################
*/


#include "../Includes.LE1.hpp"


#ifdef _MSC_VER
	#pragma pack ( push, 0x4 )
#endif
#define LESDK_IN_GENERATED


/*
# ========================================================================================= #
# Functions
# ========================================================================================= #
*/



class UClass* UBioVehicleResources::pClassPointer = NULL;

class UClass* UBioVehicleResources::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXVehicleResources.BioVehicleResources" );

		return pClassPointer;
	};



#undef LESDK_IN_GENERATED

#ifdef _MSC_VER
	#pragma pack ( pop )
#endif