/*
#############################################################################################
# Mass Effect 1 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.5_Beta-Rev.60-MELE
# ========================================================================================= #
# File: SFXStrategicAI_structs.hpp
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

// ScriptStruct SFXStrategicAI.BioBaseSquadDesign.WaypointRoute
// 0x001D
struct FWaypointRoute
{
	class ABioWaypointSet*                             Route;                                            		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class APawn*                                       AssignedSquadMember;                              		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class APawn*                                       oCurrentlyAssignedMember;                         		// 0x0010 (0x0008) [0x0000000000000000]              
	unsigned long                                      LowAgitation : 1;                                 		// 0x0018 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      HighAgitation : 1;                                		// 0x0018 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      SpeedRun : 1;                                     		// 0x0018 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned char                                      RouteType;                                        		// 0x001C (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXStrategicAI.BioBaseSquadDesign.LockedPoint
// 0x0010
struct FLockedPoint
{
	class ANavigationPoint*                            oPoint;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	class ABioPawn*                                    oLockedBy;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
};



#undef LESDK_IN_GENERATED

#ifdef _MSC_VER
	#pragma pack ( pop )
#endif
