/*
#############################################################################################
# Mass Effect 3 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.5_Beta-Rev.60-MELE
# ========================================================================================= #
# File: WinDrv_classes.hpp
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

// Class WinDrv.WindowsClient
// 0x01B8 (0x0234 - 0x007C)
class UWindowsClient : public UClient
{
public:
	unsigned char                                      UnknownData00[ 0x16C ];                           		// 0x007C (0x016C) MISSED OFFSET
	class UClass*                                      AudioDeviceClass;                                 		// 0x01E8 (0x0008) [0x0000000000004000]              ( CPF_Config )
	unsigned char                                      UnknownData01[ 0x30 ];                            		// 0x01F0 (0x0030) MISSED OFFSET
	int                                                AllowJoystickInput;                               		// 0x0220 (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned char                                      UnknownData02[ 0x10 ];                            		// 0x0224 (0x0010) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class WinDrv.XnaForceFeedbackManager
// 0x0000 (0x0078 - 0x0078)
class UXnaForceFeedbackManager : public UForceFeedbackManager
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
