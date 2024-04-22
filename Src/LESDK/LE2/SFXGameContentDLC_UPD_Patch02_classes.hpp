/*
#############################################################################################
# Mass Effect 2 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.5_Beta-Rev.60-MELE
# ========================================================================================= #
# File: SFXGameContentDLC_UPD_Patch02_classes.hpp
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

// Class SFXGameContentDLC_UPD_Patch02.SFXSeqAct_LegacyDataCallbackPatch02
// 0x0008 (0x0118 - 0x0110)
class USFXSeqAct_LegacyDataCallbackPatch02 : public UBioSequenceLatentAction
{
public:
	class ABioWorldInfo*                               BWI;                                              		// 0x0110 (0x0008) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	int eventGetObjClassVersion ( );
	void ApplyCanonPlotStates ( );
	void ME2ImportPlotState ( );
	bool eventUpdateOp ( float DeltaTime );
	void eventActivated ( );
};



#undef LESDK_IN_GENERATED

#ifdef _MSC_VER
	#pragma pack ( pop )
#endif
