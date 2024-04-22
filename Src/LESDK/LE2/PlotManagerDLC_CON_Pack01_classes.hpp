/*
#############################################################################################
# Mass Effect 2 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.5_Beta-Rev.60-MELE
# ========================================================================================= #
# File: PlotManagerDLC_CON_Pack01_classes.hpp
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL, SirCxyrtyx
# Thanks: HOOAH07, lowHertz
#############################################################################################
*/


#pragma once


#ifdef _MSC_VER
	#pragma pack ( push, 0x4 )
#endif
#define LESDK_IN_GENERATED


/*
# ========================================================================================= #
# Constants
# ========================================================================================= #
*/


/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class PlotManagerDLC_CON_Pack01.BioAutoConditionals
// 0x0000 (0x0060 - 0x0060)
class UBioAutoConditionals : public UBioConditionals
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool F1532 ( class ABioWorldInfo* bioWorld, int Argument );
	bool F1531 ( class ABioWorldInfo* bioWorld, int Argument );
	bool F1526 ( class ABioWorldInfo* bioWorld, int Argument );
};



#undef LESDK_IN_GENERATED

#ifdef _MSC_VER
	#pragma pack ( pop )
#endif
