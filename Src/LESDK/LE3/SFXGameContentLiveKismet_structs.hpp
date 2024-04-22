/*
#############################################################################################
# Mass Effect 3 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.5_Beta-Rev.60-MELE
# ========================================================================================= #
# File: SFXGameContentLiveKismet_structs.hpp
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
# Script Structs
# ========================================================================================= #
*/

// ScriptStruct SFXGameContentLiveKismet.sfxseqact_leavemission.LeaveMissionData
// 0x0024
struct FLeaveMissionData
{
	struct SFXName                                     CurrentMap;                                       		// 0x0000 (0x0008) [0x0000000000004000]              ( CPF_Config )
	struct SFXName                                     NextMap;                                          		// 0x0008 (0x0008) [0x0000000000004000]              ( CPF_Config )
	struct SFXName                                     NextStart;                                        		// 0x0010 (0x0008) [0x0000000000004000]              ( CPF_Config )
	int                                                EndGmAct;                                         		// 0x0018 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              EndGmX;                                           		// 0x001C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              EndGmY;                                           		// 0x0020 (0x0004) [0x0000000000004000]              ( CPF_Config )
};



#undef LESDK_IN_GENERATED

#ifdef _MSC_VER
	#pragma pack ( pop )
#endif
