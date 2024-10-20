/*
#############################################################################################
# Mass Effect 2 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.5_Beta-Rev.60-MELE
# ========================================================================================= #
# File: SFXGameContentDLC_UPD_Patch02_f_structs.hpp
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

// Function SFXGameContentDLC_UPD_Patch02.SFXSeqAct_LegacyDataCallbackPatch02.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
struct USFXSeqAct_LegacyDataCallbackPatch02_eventGetObjClassVersion_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXSeqAct_LegacyDataCallbackPatch02_eventGetObjClassVersion_Parms() { memset(this, 0, sizeof *this); }
	~USFXSeqAct_LegacyDataCallbackPatch02_eventGetObjClassVersion_Parms() {}
};

// Function SFXGameContentDLC_UPD_Patch02.SFXSeqAct_LegacyDataCallbackPatch02.ApplyCanonPlotStates
// [0x00020003] ( FUNC_Final )
struct USFXSeqAct_LegacyDataCallbackPatch02_execApplyCanonPlotStates_Parms
{
	// class UBioGlobalVariableTable*                  VarTable;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// class USFXEngine*                               Engine;                                           		// 0x0008 (0x0008) [0x0000000000000000]              

	 USFXSeqAct_LegacyDataCallbackPatch02_execApplyCanonPlotStates_Parms() { memset(this, 0, sizeof *this); }
	~USFXSeqAct_LegacyDataCallbackPatch02_execApplyCanonPlotStates_Parms() {}
};

// Function SFXGameContentDLC_UPD_Patch02.SFXSeqAct_LegacyDataCallbackPatch02.ME2ImportPlotState
// [0x00020003] ( FUNC_Final )
struct USFXSeqAct_LegacyDataCallbackPatch02_execME2ImportPlotState_Parms
{
	// class ULocalPlayer*                             LocPlayer;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	// class USFXEngine*                               Engine;                                           		// 0x0008 (0x0008) [0x0000000000000000]              
	// class UBioGlobalVariableTable*                  VarTable;                                         		// 0x0010 (0x0008) [0x0000000000000000]              

	 USFXSeqAct_LegacyDataCallbackPatch02_execME2ImportPlotState_Parms() { memset(this, 0, sizeof *this); }
	~USFXSeqAct_LegacyDataCallbackPatch02_execME2ImportPlotState_Parms() {}
};

// Function SFXGameContentDLC_UPD_Patch02.SFXSeqAct_LegacyDataCallbackPatch02.UpdateOp
// [0x00020802] ( FUNC_Event )
struct USFXSeqAct_LegacyDataCallbackPatch02_eventUpdateOp_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ULocalPlayer*                             LocPlayer;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	// class USFXEngine*                               Engine;                                           		// 0x0010 (0x0008) [0x0000000000000000]              

	 USFXSeqAct_LegacyDataCallbackPatch02_eventUpdateOp_Parms() { memset(this, 0, sizeof *this); }
	~USFXSeqAct_LegacyDataCallbackPatch02_eventUpdateOp_Parms() {}
};

// Function SFXGameContentDLC_UPD_Patch02.SFXSeqAct_LegacyDataCallbackPatch02.Activated
// [0x00020802] ( FUNC_Event )
struct USFXSeqAct_LegacyDataCallbackPatch02_eventActivated_Parms
{

	 USFXSeqAct_LegacyDataCallbackPatch02_eventActivated_Parms() { memset(this, 0, sizeof *this); }
	~USFXSeqAct_LegacyDataCallbackPatch02_eventActivated_Parms() {}
};



#undef LESDK_IN_GENERATED

#ifdef _MSC_VER
	#pragma pack ( pop )
#endif
