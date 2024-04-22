/*
#############################################################################################
# Mass Effect 2 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.5_Beta-Rev.60-MELE
# ========================================================================================= #
# File: SFXGameContentDLC_PRO_Gulp01_functions.cpp
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL, SirCxyrtyx
# Thanks: HOOAH07, lowHertz
#############################################################################################
*/


#include "../Includes.LE2.hpp"


#ifdef _MSC_VER
	#pragma pack ( push, 0x4 )
#endif
#define LESDK_IN_GENERATED


/*
# ========================================================================================= #
# Functions
# ========================================================================================= #
*/



class UClass* USFXGameEffect_Gear_GulpHelmet::pClassPointer = NULL;

class UClass* USFXGameEffect_Gear_GulpHelmet::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContentDLC_PRO_Gulp01.SFXGameEffect_Gear_GulpHelmet" );

		return pClassPointer;
	};



#undef LESDK_IN_GENERATED

#ifdef _MSC_VER
	#pragma pack ( pop )
#endif
