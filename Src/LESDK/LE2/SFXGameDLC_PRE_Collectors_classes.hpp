/*
#############################################################################################
# Mass Effect 2 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.5_Beta-Rev.60-MELE
# ========================================================================================= #
# File: SFXGameDLC_PRE_Collectors_classes.hpp
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

// Class SFXGameDLC_PRE_Collectors.SFXGameEffect_Gear_CollectorsHealthBonus
// 0x0000 (0x0098 - 0x0098)
class USFXGameEffect_Gear_CollectorsHealthBonus : public USFXGameEffect_PassiveHealthBonus
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameDLC_PRE_Collectors.SFXGameEffect_Gear_CollectorsRegenBonus
// 0x0000 (0x0094 - 0x0094)
class USFXGameEffect_Gear_CollectorsRegenBonus : public USFXGameEffect_PassiveShieldRegenBonus
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameDLC_PRE_Collectors.SFXGameEffect_Gear_CollectorsStormSpeed
// 0x0000 (0x0098 - 0x0098)
class USFXGameEffect_Gear_CollectorsStormSpeed : public USFXGameEffect_PassiveStormSpeedBonus
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
