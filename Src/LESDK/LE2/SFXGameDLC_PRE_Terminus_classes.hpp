/*
#############################################################################################
# Mass Effect 2 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.5_Beta-Rev.60-MELE
# ========================================================================================= #
# File: SFXGameDLC_PRE_Terminus_classes.hpp
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

// Class SFXGameDLC_PRE_Terminus.SFXGameEffect_Gear_TerminusShieldBonus
// 0x0000 (0x0094 - 0x0094)
class USFXGameEffect_Gear_TerminusShieldBonus : public USFXGameEffect_PassiveShieldBonus
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameDLC_PRE_Terminus.SFXGameEffect_Gear_TerminusStormSpeed
// 0x0000 (0x0098 - 0x0098)
class USFXGameEffect_Gear_TerminusStormSpeed : public USFXGameEffect_PassiveStormSpeedBonus
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameDLC_PRE_Terminus.SFXGameEffect_Gear_TerminusWpnMagazines
// 0x0000 (0x0094 - 0x0094)
class USFXGameEffect_Gear_TerminusWpnMagazines : public USFXGameEffect_PassiveMaxAmmoBonus
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};



#undef LESDK_IN_GENERATED

#ifdef _MSC_VER
	#pragma pack ( pop )
#endif
