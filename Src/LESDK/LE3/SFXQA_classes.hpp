/*
#############################################################################################
# Mass Effect 3 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.5_Beta-Rev.60-MELE
# ========================================================================================= #
# File: SFXQA_classes.hpp
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

// Class SFXQA.BioSeqAct_IsSplinePilot
// 0x0004 (0x00FC - 0x00F8)
class UBioSeqAct_IsSplinePilot : public USequenceAction
{
public:
	int                                                bSplinePilot;                                     		// 0x00F8 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void Activated ( );
};



#undef LESDK_IN_GENERATED

#ifdef _MSC_VER
	#pragma pack ( pop )
#endif
