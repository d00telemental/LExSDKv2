/*
#############################################################################################
# Mass Effect 2 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.5_Beta-Rev.60-MELE
# ========================================================================================= #
# File: SFXGameContent_f_structs.hpp
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
# Function Structs
# ========================================================================================= #
*/

// Function SFXGameContent.SFXSeqAct_TextureBlockConfig.Activated
// [0x00020002] 
struct USFXSeqAct_TextureBlockConfig_execActivated_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              

	 USFXSeqAct_TextureBlockConfig_execActivated_Parms() { memset(this, 0, sizeof *this); }
	~USFXSeqAct_TextureBlockConfig_execActivated_Parms() {}
};

// Function SFXGameContent.SFXSeqAct_SaveGame.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
struct USFXSeqAct_SaveGame_eventGetObjClassVersion_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXSeqAct_SaveGame_eventGetObjClassVersion_Parms() { memset(this, 0, sizeof *this); }
	~USFXSeqAct_SaveGame_eventGetObjClassVersion_Parms() {}
};

// Function SFXGameContent.SFXSeqAct_SaveGame.BeginSave
// [0x00020002] 
struct USFXSeqAct_SaveGame_execBeginSave_Parms
{
	union { struct FSFXSaveDescriptor                  Descriptor; };                                    		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class ABioPlayerController*                     PC;                                               		// 0x0028 (0x0008) [0x0000000000000000]              

	 USFXSeqAct_SaveGame_execBeginSave_Parms() { memset(this, 0, sizeof *this); }
	~USFXSeqAct_SaveGame_execBeginSave_Parms() {}
};

// Function SFXGameContent.SFXSeqAct_SaveGame.Deactivated
// [0x00020002] 
struct USFXSeqAct_SaveGame_execDeactivated_Parms
{

	 USFXSeqAct_SaveGame_execDeactivated_Parms() { memset(this, 0, sizeof *this); }
	~USFXSeqAct_SaveGame_execDeactivated_Parms() {}
};

// Function SFXGameContent.SFXSeqAct_SaveGame.Update
// [0x00020002] 
struct USFXSeqAct_SaveGame_execUpdate_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPlayerController*                     PC;                                               		// 0x0008 (0x0008) [0x0000000000000000]              
	// class USFXEngine*                               Engine;                                           		// 0x0010 (0x0008) [0x0000000000000000]              

	 USFXSeqAct_SaveGame_execUpdate_Parms() { memset(this, 0, sizeof *this); }
	~USFXSeqAct_SaveGame_execUpdate_Parms() {}
};

// Function SFXGameContent.SFXSeqAct_SaveGame.Activated
// [0x00820002] 
struct USFXSeqAct_SaveGame_execActivated_Parms
{
	// class ABioPlayerController*                     PC;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	// class USFXEngine*                               Engine;                                           		// 0x0008 (0x0008) [0x0000000000000000]              
	// class ASFXPRI*                                  PRI;                                              		// 0x0010 (0x0008) [0x0000000000000000]              
	// unsigned long                                   bOptionCanAutoSave;                               		// 0x0018 (0x0004) [0x0000000000000000]              
	// union { struct FSFXSaveDescriptor               SaveDescriptor; };                                		// 0x001C (0x0028) [0x0000000000400000]              ( CPF_NeedCtorLink )

	 USFXSeqAct_SaveGame_execActivated_Parms() { memset(this, 0, sizeof *this); }
	~USFXSeqAct_SaveGame_execActivated_Parms() {}
};

// Function SFXGameContent.SFXSeqAct_SaveGame.GetBioPlayerController
// [0x00020003] ( FUNC_Final )
struct USFXSeqAct_SaveGame_execGetBioPlayerController_Parms
{
	class ABioPlayerController*                        ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UObject*                                  ChkTarget;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	// class ABioPlayerController*                     PC;                                               		// 0x0010 (0x0008) [0x0000000000000000]              

	 USFXSeqAct_SaveGame_execGetBioPlayerController_Parms() { memset(this, 0, sizeof *this); }
	~USFXSeqAct_SaveGame_execGetBioPlayerController_Parms() {}
};

// Function SFXGameContent.SFXSeqAct_SaveGame.CanSave
// [0x00020002] 
struct USFXSeqAct_SaveGame_execCanSave_Parms
{
	class ABioPlayerController*                        PC;                                               		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXEngine*                               Engine;                                           		// 0x000C (0x0008) [0x0000000000000000]              
	// class ULocalPlayer*                             LP;                                               		// 0x0014 (0x0008) [0x0000000000000000]              

	 USFXSeqAct_SaveGame_execCanSave_Parms() { memset(this, 0, sizeof *this); }
	~USFXSeqAct_SaveGame_execCanSave_Parms() {}
};

// Function SFXGameContent.SFXSeqAct_ResourceSnapshot.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
struct USFXSeqAct_ResourceSnapshot_eventGetObjClassVersion_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXSeqAct_ResourceSnapshot_eventGetObjClassVersion_Parms() { memset(this, 0, sizeof *this); }
	~USFXSeqAct_ResourceSnapshot_eventGetObjClassVersion_Parms() {}
};

// Function SFXGameContent.SFXSeqAct_ResourceSnapshot.Activated
// [0x00820002] 
struct USFXSeqAct_ResourceSnapshot_execActivated_Parms
{
	// class ABioWorldInfo*                            oWorldInfo;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UBioGlobalVariableTable*                  oGV;                                              		// 0x0008 (0x0008) [0x0000000000000000]              
	// class USFXGameConfig*                           gameconfig;                                       		// 0x0010 (0x0008) [0x0000000000000000]              
	// union { struct FTreasureBudget                  LevelBudget; };                                   		// 0x0018 (0x0018) [0x0000000000000000]              

	 USFXSeqAct_ResourceSnapshot_execActivated_Parms() { memset(this, 0, sizeof *this); }
	~USFXSeqAct_ResourceSnapshot_execActivated_Parms() {}
};

// Function SFXGameContent.SFXSeqAct_ExplodingPlaceable.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
struct USFXSeqAct_ExplodingPlaceable_eventGetObjClassVersion_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXSeqAct_ExplodingPlaceable_eventGetObjClassVersion_Parms() { memset(this, 0, sizeof *this); }
	~USFXSeqAct_ExplodingPlaceable_eventGetObjClassVersion_Parms() {}
};

// Function SFXGameContent.SFXSeqAct_ExplodingPlaceable.Activated
// [0x00820002] 
struct USFXSeqAct_ExplodingPlaceable_execActivated_Parms
{
	// class ABioPlayerController*                     PlayerController;                                 		// 0x0000 (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 PlayerPawn;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
	// class AActor*                                   NearbyActor;                                      		// 0x0010 (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 NearbyPawn;                                       		// 0x0018 (0x0008) [0x0000000000000000]              
	// union { struct FVector                          vMomentum; };                                     		// 0x0020 (0x000C) [0x0000000000000000]              
	// class UObject*                                  Target;                                           		// 0x002C (0x0008) [0x0000000000000000]              
	// class AActor*                                   TargetActor;                                      		// 0x0034 (0x0008) [0x0000000000000000]              
	// union { struct FVector                          TraceLocation; };                                 		// 0x003C (0x000C) [0x0000000000000000]              
	// class AController*                              InstigatorController;                             		// 0x0048 (0x0008) [0x0000000000000000]              

	 USFXSeqAct_ExplodingPlaceable_execActivated_Parms() { memset(this, 0, sizeof *this); }
	~USFXSeqAct_ExplodingPlaceable_execActivated_Parms() {}
};

// Function SFXGameContent.SFXSeqAct_SystemsHandleArriveOnNormandy.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
struct USFXSeqAct_SystemsHandleArriveOnNormandy_eventGetObjClassVersion_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXSeqAct_SystemsHandleArriveOnNormandy_eventGetObjClassVersion_Parms() { memset(this, 0, sizeof *this); }
	~USFXSeqAct_SystemsHandleArriveOnNormandy_eventGetObjClassVersion_Parms() {}
};

// Function SFXGameContent.SFXSeqAct_SystemsHandleArriveOnNormandy.HandleRestockAmmo
// [0x00022002] 
struct USFXSeqAct_SystemsHandleArriveOnNormandy_execHandleRestockAmmo_Parms
{
	class ASFXInventoryManager*                        oInventory;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ASFXWeapon*                               Weapon;                                           		// 0x0008 (0x0008) [0x0000000000000000]              

	 USFXSeqAct_SystemsHandleArriveOnNormandy_execHandleRestockAmmo_Parms() { memset(this, 0, sizeof *this); }
	~USFXSeqAct_SystemsHandleArriveOnNormandy_execHandleRestockAmmo_Parms() {}
};

// Function SFXGameContent.SFXSeqAct_SystemsHandleArriveOnNormandy.HandleRestockMediGel
// [0x00022002] 
struct USFXSeqAct_SystemsHandleArriveOnNormandy_execHandleRestockMediGel_Parms
{
	class ASFXInventoryManager*                        oInventory;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 USFXSeqAct_SystemsHandleArriveOnNormandy_execHandleRestockMediGel_Parms() { memset(this, 0, sizeof *this); }
	~USFXSeqAct_SystemsHandleArriveOnNormandy_execHandleRestockMediGel_Parms() {}
};

// Function SFXGameContent.SFXSeqAct_SystemsHandleArriveOnNormandy.Activated
// [0x00020002] 
struct USFXSeqAct_SystemsHandleArriveOnNormandy_execActivated_Parms
{
	// class ABioPawn*                                 Pawn;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	// class ASFXInventoryManager*                     oInventory;                                       		// 0x0008 (0x0008) [0x0000000000000000]              

	 USFXSeqAct_SystemsHandleArriveOnNormandy_execActivated_Parms() { memset(this, 0, sizeof *this); }
	~USFXSeqAct_SystemsHandleArriveOnNormandy_execActivated_Parms() {}
};

// Function SFXGameContent.SFXSeqAct_ChooseLoadout.Activated
// [0x00020002] 
struct USFXSeqAct_ChooseLoadout_execActivated_Parms
{
	// class ABioPlayerController*                     PC;                                               		// 0x0000 (0x0008) [0x0000000000000000]              

	 USFXSeqAct_ChooseLoadout_execActivated_Parms() { memset(this, 0, sizeof *this); }
	~USFXSeqAct_ChooseLoadout_execActivated_Parms() {}
};

// Function SFXGameContent.BioSeqAct_ShowHint.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
struct UBioSeqAct_ShowHint_eventGetObjClassVersion_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UBioSeqAct_ShowHint_eventGetObjClassVersion_Parms() { memset(this, 0, sizeof *this); }
	~UBioSeqAct_ShowHint_eventGetObjClassVersion_Parms() {}
};

// Function SFXGameContent.BioSeqAct_ShowHint.Activated
// [0x00020002] 
struct UBioSeqAct_ShowHint_execActivated_Parms
{
	// class UMassEffectGuiManager*                    Manager;                                          		// 0x0000 (0x0008) [0x0000000000000000]              

	 UBioSeqAct_ShowHint_execActivated_Parms() { memset(this, 0, sizeof *this); }
	~UBioSeqAct_ShowHint_execActivated_Parms() {}
};

// Function SFXGameContent.BioSeqAct_SetPlotPersuadeCheck.Activated
// [0x00820802] ( FUNC_Event )
struct UBioSeqAct_SetPlotPersuadeCheck_eventActivated_Parms
{
	// class ABioWorldInfo*                            WorldInfo;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UBioGlobalVariableTable*                  VarTable;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// union { struct FLevelCompletionData             Info; };                                          		// 0x0010 (0x001C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             CompletedMissions;                                		// 0x002C (0x0004) [0x0000000000000000]              
	// int                                             ParagonPotential;                                 		// 0x0030 (0x0004) [0x0000000000000000]              
	// int                                             RenegadePotential;                                		// 0x0034 (0x0004) [0x0000000000000000]              
	// float                                           SkillMod;                                         		// 0x0038 (0x0004) [0x0000000000000000]              

	 UBioSeqAct_SetPlotPersuadeCheck_eventActivated_Parms() { memset(this, 0, sizeof *this); }
	~UBioSeqAct_SetPlotPersuadeCheck_eventActivated_Parms() {}
};

// Function SFXGameContent.BioSeqAct_SetPlotPersuadeCheck.getWorld
// [0x00020002] 
struct UBioSeqAct_SetPlotPersuadeCheck_execgetWorld_Parms
{
	class ABioWorldInfo*                               ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UBioSeqAct_SetPlotPersuadeCheck_execgetWorld_Parms() { memset(this, 0, sizeof *this); }
	~UBioSeqAct_SetPlotPersuadeCheck_execgetWorld_Parms() {}
};

// Function SFXGameContent.BioSeqAct_GiveMissionXP.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
struct UBioSeqAct_GiveMissionXP_eventGetObjClassVersion_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UBioSeqAct_GiveMissionXP_eventGetObjClassVersion_Parms() { memset(this, 0, sizeof *this); }
	~UBioSeqAct_GiveMissionXP_eventGetObjClassVersion_Parms() {}
};

// Function SFXGameContent.BioSeqAct_GiveMissionXP.GetMissionXP
// [0x00840003] ( FUNC_Final )
struct UBioSeqAct_GiveMissionXP_execGetMissionXP_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// union { struct FMissionReward                   Reward; };                                        		// 0x0004 (0x0010) [0x0000000000000000]              
	// class UBioGlobalVariableTable*                  VarTable;                                         		// 0x0014 (0x0008) [0x0000000000000000]              

	 UBioSeqAct_GiveMissionXP_execGetMissionXP_Parms() { memset(this, 0, sizeof *this); }
	~UBioSeqAct_GiveMissionXP_execGetMissionXP_Parms() {}
};

// Function SFXGameContent.BioSeqAct_GiveMissionXP.Activated
// [0x00020002] 
struct UBioSeqAct_GiveMissionXP_execActivated_Parms
{
	// class ABioPawn*                                 Pawn;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             StartingLevel;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             StartingTalentPoints;                             		// 0x000C (0x0004) [0x0000000000000000]              

	 UBioSeqAct_GiveMissionXP_execActivated_Parms() { memset(this, 0, sizeof *this); }
	~UBioSeqAct_GiveMissionXP_execActivated_Parms() {}
};

// Function SFXGameContent.SFXSeqAct_SetAreaMap.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
struct USFXSeqAct_SetAreaMap_eventGetObjClassVersion_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXSeqAct_SetAreaMap_eventGetObjClassVersion_Parms() { memset(this, 0, sizeof *this); }
	~USFXSeqAct_SetAreaMap_eventGetObjClassVersion_Parms() {}
};

// Function SFXGameContent.SFXSeqAct_SetAreaMap.Activated
// [0x00020002] 
struct USFXSeqAct_SetAreaMap_execActivated_Parms
{
	// class ABioWorldInfo*                            oWorldInfo;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UMassEffectGuiManager*                    Manager;                                          		// 0x0008 (0x0008) [0x0000000000000000]              
	// class USFXAreaMapData*                          MapData;                                          		// 0x0010 (0x0008) [0x0000000000000000]              

	 USFXSeqAct_SetAreaMap_execActivated_Parms() { memset(this, 0, sizeof *this); }
	~USFXSeqAct_SetAreaMap_execActivated_Parms() {}
};

// Function SFXGameContent.BioSeqAct_GetMembersOfSquad.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
struct UBioSeqAct_GetMembersOfSquad_eventGetObjClassVersion_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UBioSeqAct_GetMembersOfSquad_eventGetObjClassVersion_Parms() { memset(this, 0, sizeof *this); }
	~UBioSeqAct_GetMembersOfSquad_eventGetObjClassVersion_Parms() {}
};

// Function SFXGameContent.BioSeqAct_GetMembersOfSquad.Activated
// [0x00020002] 
struct UBioSeqAct_GetMembersOfSquad_execActivated_Parms
{
	// class ABioBaseSquad*                            oCurrentSquad;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             N;                                                		// 0x000C (0x0004) [0x0000000000000000]              

	 UBioSeqAct_GetMembersOfSquad_execActivated_Parms() { memset(this, 0, sizeof *this); }
	~UBioSeqAct_GetMembersOfSquad_execActivated_Parms() {}
};

// Function SFXGameContent.BioSeqAct_GetMembersOfSquad.FindAPawn
// [0x00040003] ( FUNC_Final )
struct UBioSeqAct_GetMembersOfSquad_execFindAPawn_Parms
{
	class APawn*                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UBioSeqAct_GetMembersOfSquad_execFindAPawn_Parms() { memset(this, 0, sizeof *this); }
	~UBioSeqAct_GetMembersOfSquad_execFindAPawn_Parms() {}
};

// Function SFXGameContent.BioSeqAct_CombatController.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
struct UBioSeqAct_CombatController_eventGetObjClassVersion_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UBioSeqAct_CombatController_eventGetObjClassVersion_Parms() { memset(this, 0, sizeof *this); }
	~UBioSeqAct_CombatController_eventGetObjClassVersion_Parms() {}
};

// Function SFXGameContent.BioSeqAct_CombatController.Update
// [0x00020802] ( FUNC_Event )
struct UBioSeqAct_CombatController_eventUpdate_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             nNumEnemiesActive;                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// class ABioBaseSquad*                            oTempSquad;                                       		// 0x0010 (0x0008) [0x0000000000000000]              

	 UBioSeqAct_CombatController_eventUpdate_Parms() { memset(this, 0, sizeof *this); }
	~UBioSeqAct_CombatController_eventUpdate_Parms() {}
};

// Function SFXGameContent.BioSeqAct_CombatController.Activated
// [0x00020000] 
struct UBioSeqAct_CombatController_execActivated_Parms
{

	 UBioSeqAct_CombatController_execActivated_Parms() { memset(this, 0, sizeof *this); }
	~UBioSeqAct_CombatController_execActivated_Parms() {}
};

// Function SFXGameContent.BioSeqAct_CombatController.GetCombatData
// [0x00040003] ( FUNC_Final )
struct UBioSeqAct_CombatController_execGetCombatData_Parms
{
	class USFXCombatStateData*                         ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             nVarPin;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             nVariable;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	// class UBioSeqVar_CombatState*                   oTestCast;                                        		// 0x0010 (0x0008) [0x0000000000000000]              

	 UBioSeqAct_CombatController_execGetCombatData_Parms() { memset(this, 0, sizeof *this); }
	~UBioSeqAct_CombatController_execGetCombatData_Parms() {}
};

// Function SFXGameContent.BioSeqAct_CombatController.DebugLog
// [0x00020002] 
struct UBioSeqAct_CombatController_execDebugLog_Parms
{
	union { FString                                    sMessage; };                                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 UBioSeqAct_CombatController_execDebugLog_Parms() { memset(this, 0, sizeof *this); }
	~UBioSeqAct_CombatController_execDebugLog_Parms() {}
};

// Function SFXGameContent.SFXCombatStateData.GetEnemyCount
// [0x00020002] 
struct USFXCombatStateData_execGetEnemyCount_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXCombatStateData_execGetEnemyCount_Parms() { memset(this, 0, sizeof *this); }
	~USFXCombatStateData_execGetEnemyCount_Parms() {}
};

// Function SFXGameContent.SFXCombatStateData.UpdateEnemyCount
// [0x00020002] 
struct USFXCombatStateData_execUpdateEnemyCount_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              

	 USFXCombatStateData_execUpdateEnemyCount_Parms() { memset(this, 0, sizeof *this); }
	~USFXCombatStateData_execUpdateEnemyCount_Parms() {}
};

// Function SFXGameContent.SFXCombatStateData.ReportSpawnResult
// [0x00020002] 
struct USFXCombatStateData_execReportSpawnResult_Parms
{
	unsigned long                                      bSuccessfullySpawned;                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 USFXCombatStateData_execReportSpawnResult_Parms() { memset(this, 0, sizeof *this); }
	~USFXCombatStateData_execReportSpawnResult_Parms() {}
};

// Function SFXGameContent.SFXCombatStateData.ClearSpawnRequest
// [0x00020002] 
struct USFXCombatStateData_execClearSpawnRequest_Parms
{

	 USFXCombatStateData_execClearSpawnRequest_Parms() { memset(this, 0, sizeof *this); }
	~USFXCombatStateData_execClearSpawnRequest_Parms() {}
};

// Function SFXGameContent.SFXCombatStateData.RequestSpawn
// [0x00020002] 
struct USFXCombatStateData_execRequestSpawn_Parms
{
	union { struct SFXName                             nmRequesterName; };                               		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { TArray<class AActor*>                      aoSpawnPoints; };                                 		// 0x0008 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 USFXCombatStateData_execRequestSpawn_Parms() { memset(this, 0, sizeof *this); }
	~USFXCombatStateData_execRequestSpawn_Parms() {}
};

// Function SFXGameContent.BioSeqAct_RespawnFactory.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
struct UBioSeqAct_RespawnFactory_eventGetObjClassVersion_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UBioSeqAct_RespawnFactory_eventGetObjClassVersion_Parms() { memset(this, 0, sizeof *this); }
	~UBioSeqAct_RespawnFactory_eventGetObjClassVersion_Parms() {}
};

// Function SFXGameContent.BioSeqAct_RespawnFactory.Deactivated
// [0x00020002] 
struct UBioSeqAct_RespawnFactory_execDeactivated_Parms
{

	 UBioSeqAct_RespawnFactory_execDeactivated_Parms() { memset(this, 0, sizeof *this); }
	~UBioSeqAct_RespawnFactory_execDeactivated_Parms() {}
};

// Function SFXGameContent.BioSeqAct_RespawnFactory.Activated
// [0x00020002] 
struct UBioSeqAct_RespawnFactory_execActivated_Parms
{

	 UBioSeqAct_RespawnFactory_execActivated_Parms() { memset(this, 0, sizeof *this); }
	~UBioSeqAct_RespawnFactory_execActivated_Parms() {}
};

// Function SFXGameContent.BioSeqAct_RespawnFactory.GetCombatData
// [0x00040003] ( FUNC_Final )
struct UBioSeqAct_RespawnFactory_execGetCombatData_Parms
{
	class USFXCombatStateData*                         ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             nVarPin;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             nVariable;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	// class UBioSeqVar_CombatState*                   oTestCast;                                        		// 0x0010 (0x0008) [0x0000000000000000]              

	 UBioSeqAct_RespawnFactory_execGetCombatData_Parms() { memset(this, 0, sizeof *this); }
	~UBioSeqAct_RespawnFactory_execGetCombatData_Parms() {}
};

// Function SFXGameContent.BioSeqAct_SpawnLocation.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
struct UBioSeqAct_SpawnLocation_eventGetObjClassVersion_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UBioSeqAct_SpawnLocation_eventGetObjClassVersion_Parms() { memset(this, 0, sizeof *this); }
	~UBioSeqAct_SpawnLocation_eventGetObjClassVersion_Parms() {}
};

// Function SFXGameContent.BioSeqAct_SpawnLocation.CheckForFactoryFeedback
// [0x00020002] 
struct UBioSeqAct_SpawnLocation_execCheckForFactoryFeedback_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UBioSeqAct_SpawnLocation_execCheckForFactoryFeedback_Parms() { memset(this, 0, sizeof *this); }
	~UBioSeqAct_SpawnLocation_execCheckForFactoryFeedback_Parms() {}
};

// Function SFXGameContent.BioSeqAct_SpawnLocation.AttemptSpawn
// [0x00020002] 
struct UBioSeqAct_SpawnLocation_execAttemptSpawn_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// class AActor*                                   oCurrentSpawnPoint;                               		// 0x0004 (0x0008) [0x0000000000000000]              

	 UBioSeqAct_SpawnLocation_execAttemptSpawn_Parms() { memset(this, 0, sizeof *this); }
	~UBioSeqAct_SpawnLocation_execAttemptSpawn_Parms() {}
};

// Function SFXGameContent.BioSeqAct_SpawnLocation.WaitToSpawn
// [0x00020002] 
struct UBioSeqAct_SpawnLocation_execWaitToSpawn_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UBioSeqAct_SpawnLocation_execWaitToSpawn_Parms() { memset(this, 0, sizeof *this); }
	~UBioSeqAct_SpawnLocation_execWaitToSpawn_Parms() {}
};

// Function SFXGameContent.BioSeqAct_SpawnLocation.Update
// [0x00020802] ( FUNC_Event )
struct UBioSeqAct_SpawnLocation_eventUpdate_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// union { TArray<int>                             m_aoLocalBudgetArray; };                          		// 0x0008 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

	 UBioSeqAct_SpawnLocation_eventUpdate_Parms() { memset(this, 0, sizeof *this); }
	~UBioSeqAct_SpawnLocation_eventUpdate_Parms() {}
};

// Function SFXGameContent.BioSeqAct_SpawnLocation.QueueSpawn
// [0x00020002] 
struct UBioSeqAct_SpawnLocation_execQueueSpawn_Parms
{

	 UBioSeqAct_SpawnLocation_execQueueSpawn_Parms() { memset(this, 0, sizeof *this); }
	~UBioSeqAct_SpawnLocation_execQueueSpawn_Parms() {}
};

// Function SFXGameContent.BioSeqAct_SpawnLocation.Activated
// [0x00020000] 
struct UBioSeqAct_SpawnLocation_execActivated_Parms
{

	 UBioSeqAct_SpawnLocation_execActivated_Parms() { memset(this, 0, sizeof *this); }
	~UBioSeqAct_SpawnLocation_execActivated_Parms() {}
};

// Function SFXGameContent.BioSeqAct_SpawnLocation.DebugLog
// [0x00020002] 
struct UBioSeqAct_SpawnLocation_execDebugLog_Parms
{
	union { FString                                    sMessage; };                                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 UBioSeqAct_SpawnLocation_execDebugLog_Parms() { memset(this, 0, sizeof *this); }
	~UBioSeqAct_SpawnLocation_execDebugLog_Parms() {}
};

// Function SFXGameContent.BioSeqAct_SpawnLocation.GetCombatData
// [0x00040003] ( FUNC_Final )
struct UBioSeqAct_SpawnLocation_execGetCombatData_Parms
{
	class USFXCombatStateData*                         ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             nVarPin;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             nVariable;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	// class UBioSeqVar_CombatState*                   oTestCast;                                        		// 0x0010 (0x0008) [0x0000000000000000]              

	 UBioSeqAct_SpawnLocation_execGetCombatData_Parms() { memset(this, 0, sizeof *this); }
	~UBioSeqAct_SpawnLocation_execGetCombatData_Parms() {}
};

// Function SFXGameContent.BioSeqAct_CheckIfInVolume.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
struct UBioSeqAct_CheckIfInVolume_eventGetObjClassVersion_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UBioSeqAct_CheckIfInVolume_eventGetObjClassVersion_Parms() { memset(this, 0, sizeof *this); }
	~UBioSeqAct_CheckIfInVolume_eventGetObjClassVersion_Parms() {}
};

// Function SFXGameContent.BioSeqAct_CheckIfInVolume.Activated
// [0x00020002] 
struct UBioSeqAct_CheckIfInVolume_execActivated_Parms
{
	// class AActor*                                   oActor;                                           		// 0x0000 (0x0008) [0x0000000000000000]              

	 UBioSeqAct_CheckIfInVolume_execActivated_Parms() { memset(this, 0, sizeof *this); }
	~UBioSeqAct_CheckIfInVolume_execActivated_Parms() {}
};

// Function SFXGameContent.SFXSeqAct_ApplyImpulse.Activated
// [0x00820002] 
struct USFXSeqAct_ApplyImpulse_execActivated_Parms
{
	// class AActor*                                   InstigatorActor;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AActor*                                   ChkTarget;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	// class UObject*                                  ChkObject;                                        		// 0x0010 (0x0008) [0x0000000000000000]              
	// union { struct FVector                          Momentum; };                                      		// 0x0018 (0x000C) [0x0000000000000000]              

	 USFXSeqAct_ApplyImpulse_execActivated_Parms() { memset(this, 0, sizeof *this); }
	~USFXSeqAct_ApplyImpulse_execActivated_Parms() {}
};

// Function SFXGameContent.SFXSeqAct_CompareAliveSquadMembers.Activated
// [0x00020002] 
struct USFXSeqAct_CompareAliveSquadMembers_execActivated_Parms
{
	// int                                             nIndex;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ABioBaseSquad*                            Squad;                                            		// 0x0004 (0x0008) [0x0000000000000000]              

	 USFXSeqAct_CompareAliveSquadMembers_execActivated_Parms() { memset(this, 0, sizeof *this); }
	~USFXSeqAct_CompareAliveSquadMembers_execActivated_Parms() {}
};

// Function SFXGameContent.SFXSeqAct_LocationControlSpawnDoor.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
struct USFXSeqAct_LocationControlSpawnDoor_eventGetObjClassVersion_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXSeqAct_LocationControlSpawnDoor_eventGetObjClassVersion_Parms() { memset(this, 0, sizeof *this); }
	~USFXSeqAct_LocationControlSpawnDoor_eventGetObjClassVersion_Parms() {}
};

// Function SFXGameContent.SFXSeqAct_LocationControlSpawnDoor.Update
// [0x00020802] ( FUNC_Event )
struct USFXSeqAct_LocationControlSpawnDoor_eventUpdate_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ASFXDoor*                                 tempDoor;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// class AActor*                                   tempActor;                                        		// 0x0010 (0x0008) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0018 (0x0004) [0x0000000000000000]              

	 USFXSeqAct_LocationControlSpawnDoor_eventUpdate_Parms() { memset(this, 0, sizeof *this); }
	~USFXSeqAct_LocationControlSpawnDoor_eventUpdate_Parms() {}
};

// Function SFXGameContent.SFXSeqAct_LocationControlSpawnDoor.PawnIsInVolumes
// [0x00020002] 
struct USFXSeqAct_LocationControlSpawnDoor_execPawnIsInVolumes_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// class APawn*                                    aToucher;                                         		// 0x0008 (0x0008) [0x0000000000000000]              

	 USFXSeqAct_LocationControlSpawnDoor_execPawnIsInVolumes_Parms() { memset(this, 0, sizeof *this); }
	~USFXSeqAct_LocationControlSpawnDoor_execPawnIsInVolumes_Parms() {}
};

// Function SFXGameContent.SFXSeqAct_LocationControlSpawnDoor.Activated
// [0x00020000] 
struct USFXSeqAct_LocationControlSpawnDoor_execActivated_Parms
{

	 USFXSeqAct_LocationControlSpawnDoor_execActivated_Parms() { memset(this, 0, sizeof *this); }
	~USFXSeqAct_LocationControlSpawnDoor_execActivated_Parms() {}
};

// Function SFXGameContent.SFXSeqAct_LocationControlSpawnDoor.AllDoorsClosed
// [0x00020002] 
struct USFXSeqAct_LocationControlSpawnDoor_execAllDoorsClosed_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ASFXDoor*                                 oCurrentDoor;                                     		// 0x0004 (0x0008) [0x0000000000000000]              
	// int                                             I;                                                		// 0x000C (0x0004) [0x0000000000000000]              

	 USFXSeqAct_LocationControlSpawnDoor_execAllDoorsClosed_Parms() { memset(this, 0, sizeof *this); }
	~USFXSeqAct_LocationControlSpawnDoor_execAllDoorsClosed_Parms() {}
};



#undef LESDK_IN_GENERATED

#ifdef _MSC_VER
	#pragma pack ( pop )
#endif
