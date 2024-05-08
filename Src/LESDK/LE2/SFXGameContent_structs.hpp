/*
#############################################################################################
# Mass Effect 2 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.5_Beta-Rev.60-MELE
# ========================================================================================= #
# File: SFXGameContent_structs.hpp
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

// ScriptStruct SFXGameContent.BioSeqAct_SetPlotPersuadeCheck.LevelCompletionData
// 0x001C
struct FLevelCompletionData
{
	FString                                            Label;                                            		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                PlotID;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                ParagonPoints;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                RenegadePoints;                                   		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGameContent.BioSeqAct_GiveMissionXP.MissionReward
// 0x0010
struct FMissionReward
{
	struct SFXName                                     MissionName;                                      		// 0x0000 (0x0008) [0x0000000000004000]              ( CPF_Config )
	int                                                XPReward;                                         		// 0x0008 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                RewardedPlotID;                                   		// 0x000C (0x0004) [0x0000000000004000]              ( CPF_Config )
};

// ScriptStruct SFXGameContent.SFXCombatStateData.FactorySpawnRequest
// 0x001C
struct FFactorySpawnRequest
{
	TArray<class AActor*>                              aoSpawnPoints;                                    		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct SFXName                                     nmRequester;                                      		// 0x0010 (0x0008) [0x0000000000000000]              
	unsigned long                                      bCompleted : 1;                                   		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bSuccess : 1;                                     		// 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
};



#undef LESDK_IN_GENERATED

#ifdef _MSC_VER
	#pragma pack ( pop )
#endif
