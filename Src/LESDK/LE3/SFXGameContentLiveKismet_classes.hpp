/*
#############################################################################################
# Mass Effect 3 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.5_Beta-Rev.60-MELE
# ========================================================================================= #
# File: SFXGameContentLiveKismet_classes.hpp
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

#define CONST_INDEX_MISSION_COUNT                                10165
#define CONST_INDEX_ACTIVE_WORLD                                 10161
#define CONST_INDEX_CURRENT_VIEWING                              10162
#define CONST_INDEX_PREVIOUS_ACTIVE                              10163
#define CONST_INDEX_GALAXY_X                                     10041
#define CONST_INDEX_GALAXY_Y                                     10042
#define CONST_PLOTID_LE1                                         18752
#define CONST_PLOTID_LE2                                         18753
#define CONST_PLOTID_LE3                                         18756
#define CONST_PLOTID_UA1                                         18757
#define CONST_PLOTID_UA2                                         18754
#define CONST_PLOTID_UA3                                         18755
#define CONST_PLOTID_C1                                          18758
#define CONST_PLOTID_C2                                          18759
#define CONST_PLOTID_C3                                          18760
#define CONST_PLOTID_M1                                          18761
#define CONST_PLOTID_M2                                          18762
#define CONST_PLOTID_M3                                          18763

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum SFXGameContentLiveKismet.SFXSeqAct_TogglePlayerSaves.DISABLED_SAVE_REASON
/*enum DISABLED_SAVE_REASON
{
	DSR_LevelEvent1                                    = 0,
	DSR_LevelEvent2                                    = 1,
	DSR_LevelEvent3                                    = 2,
	DSR_UnsafeArea1                                    = 3,
	DSR_UnsafeArea2                                    = 4,
	DSR_UnsafeArea3                                    = 5,
	DSR_Combat1                                        = 6,
	DSR_Combat2                                        = 7,
	DSR_Combat3                                        = 8,
	DSR_Misc1                                          = 9,
	DSR_Misc2                                          = 10,
	DSR_Misc3                                          = 11,
	DSR_All                                            = 12,
	DSR_MAX                                            = 13
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class SFXGameContentLiveKismet.BioSeqAct_GiveMissionXP
// 0x0000 (0x010C - 0x010C)
class UBioSeqAct_GiveMissionXP : public UBioSeqAct_GiveMissionXP_NativeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	int eventGetObjClassVersion ( );
};

// Class SFXGameContentLiveKismet.SFXSeqAct_ClearAreaMap
// 0x0000 (0x00F8 - 0x00F8)
class USFXSeqAct_ClearAreaMap : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	int eventGetObjClassVersion ( );
	void Activated ( );
};

// Class SFXGameContentLiveKismet.SFXSeqAct_GetHenchmenInSquad
// 0x0030 (0x0128 - 0x00F8)
class USFXSeqAct_GetHenchmenInSquad : public USequenceAction
{
public:
	class APawn*                                       Hench1;                                           		// 0x00F8 (0x0008) [0x0000000000000000]              
	class APawn*                                       Hench2;                                           		// 0x0100 (0x0008) [0x0000000000000000]              
	float                                              hench_liara;                                      		// 0x0108 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              hench_kaidan;                                     		// 0x010C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              hench_ashley;                                     		// 0x0110 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              hench_garrus;                                     		// 0x0114 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              hench_edi;                                        		// 0x0118 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              hench_prothean;                                   		// 0x011C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              hench_marine;                                     		// 0x0120 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              hench_tali;                                       		// 0x0124 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void Activated ( );
	float GetPriority ( class APawn* Henchman );
};

// Class SFXGameContentLiveKismet.SFXSeqAct_GetTag
// 0x0010 (0x0108 - 0x00F8)
class USFXSeqAct_GetTag : public USequenceAction
{
public:
	struct SFXName                                     Tag;                                              		// 0x00F8 (0x0008) [0x0000000000000000]              
	struct SFXName                                     UniqueTag;                                        		// 0x0100 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void Activated ( );
};

// Class SFXGameContentLiveKismet.sfxseqact_leavemission
// 0x0010 (0x0108 - 0x00F8)
class Usfxseqact_leavemission : public USequenceAction
{
public:
	class TArray<struct FLeaveMissionData>             LeaveMissionArray;                                		// 0x00F8 (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void GrantAutomaticGawAssets ( );
	void eventActivated ( );
	class ABioWorldInfo* getWorld ( );
};

// Class SFXGameContentLiveKismet.SFXSeqAct_SaveGame
// 0x0019 (0x0125 - 0x010C)
class USFXSeqAct_SaveGame : public USeqAct_Latent
{
public:
	class USFXEngine*                                  CachedEngine;                                     		// 0x010C (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct SFXName                                     LevelNameDisplayOverride;                         		// 0x0114 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	float                                              ElapsedTime;                                      		// 0x011C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bFiredOutPin : 1;                                 		// 0x0120 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bForceAutoSave : 1;                               		// 0x0120 (0x0004) [0x0000000000002002] [0x00000002] ( CPF_Const | CPF_Transient )
	unsigned char                                      FinishState;                                      		// 0x0124 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	int eventGetObjClassVersion ( );
	void BeginSave ( struct FSFXSaveDescriptor Descriptor );
	void Deactivated ( );
	bool Update ( float DeltaTime );
	void Activated ( );
	class ABioPlayerController* GetBioPlayerController ( );
	bool CanSave ( class ABioPlayerController* PC );
};

// Class SFXGameContentLiveKismet.SFXSeqAct_SetTag
// 0x0010 (0x0108 - 0x00F8)
class USFXSeqAct_SetTag : public USequenceAction
{
public:
	struct SFXName                                     Tag;                                              		// 0x00F8 (0x0008) [0x0000000000000000]              
	struct SFXName                                     UniqueTag;                                        		// 0x0100 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void Activated ( );
};

// Class SFXGameContentLiveKismet.SFXSeqAct_SetWasInSquad
// 0x0024 (0x011C - 0x00F8)
class USFXSeqAct_SetWasInSquad : public USequenceAction
{
public:
	class TArray<int>                                  Index_InSquad;                                    		// 0x00F8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class TArray<int>                                  Index_WasInSquad;                                 		// 0x0108 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bSetNotRestore : 1;                               		// 0x0118 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void eventActivated ( );
	class ABioWorldInfo* getWorld ( );
};

// Class SFXGameContentLiveKismet.SFXSeqAct_TogglePlayerSaves
// 0x0009 (0x0101 - 0x00F8)
class USFXSeqAct_TogglePlayerSaves : public USequenceAction
{
public:
	class AActor*                                      Player;                                           		// 0x00F8 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Reason;                                           		// 0x0100 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	int eventGetObjClassVersion ( );
	void SetSavingPossible ( );
	void LogFlags ( );
	void Activated ( );
	bool GetReason ( unsigned char SetReason );
	void SetReason ( unsigned char SetReason, unsigned long bDisableSaves );
	int GetPlotID ( int ReasonID );
};

// Class SFXGameContentLiveKismet.SFXSeqCond_CanSpendTallentPoints
// 0x0008 (0x00E4 - 0x00DC)
class USFXSeqCond_CanSpendTallentPoints : public USequenceCondition
{
public:
	class USFXPowerLevelUpHelper*                      m_Helper;                                         		// 0x00DC (0x0008) [0x0000000004400008]              ( CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool CanSpendTallentPoints ( );
	void eventDeactivated ( );
	void eventActivated ( );
};

// Class SFXGameContentLiveKismet.SFXSeqAct_ToggleHelmet
// 0x0004 (0x00FC - 0x00F8)
class USFXSeqAct_ToggleHelmet : public USequenceAction
{
public:
	unsigned long                                      PlayerRequiresFullHelmet : 1;                     		// 0x00F8 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void eventPreVersionUpdated ( int OldVersion, int NewVersion );
	int eventGetObjClassVersion ( );
	void Activated ( );
};

// Class SFXGameContentLiveKismet.BioSeqAct_GetMembersOfSquad
// 0x0038 (0x0130 - 0x00F8)
class UBioSeqAct_GetMembersOfSquad : public USequenceAction
{
public:
	class TArray<class APawn*>                         m_aoActorList;                                    		// 0x00F8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class TArray<class UObject*>                       m_aoPassSquads;                                   		// 0x0108 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class APawn*                                       m_oCurrentMember;                                 		// 0x0118 (0x0008) [0x0000000000000000]              
	class APawn*                                       m_oOutputCurrentMember;                           		// 0x0120 (0x0008) [0x0000000000000000]              
	int                                                m_nIndex;                                         		// 0x0128 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bAlsoReturnDeadMembers : 1;                     		// 0x012C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	int eventGetObjClassVersion ( );
	void Activated ( );
	class APawn* FindAPawn ( );
};

// Class SFXGameContentLiveKismet.SFXSeqAct_GetMapName
// 0x0008 (0x0100 - 0x00F8)
class USFXSeqAct_GetMapName : public USequenceAction
{
public:
	struct SFXName                                     MapName;                                          		// 0x00F8 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void Activated ( );
};

// Class SFXGameContentLiveKismet.SFXSeqCond_CombatArea
// 0x0000 (0x00DC - 0x00DC)
class USFXSeqCond_CombatArea : public USequenceCondition
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void eventActivated ( );
};

// Class SFXGameContentLiveKismet.BioSeqAct_CancelHint
// 0x0000 (0x00F8 - 0x00F8)
class UBioSeqAct_CancelHint : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void Activated ( );
};

// Class SFXGameContentLiveKismet.BioSeqAct_CheckIfInVolume
// 0x0010 (0x0108 - 0x00F8)
class UBioSeqAct_CheckIfInVolume : public USequenceAction
{
public:
	class AActor*                                      m_oTarget;                                        		// 0x00F8 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      m_oVolume;                                        		// 0x0100 (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	int eventGetObjClassVersion ( );
	void Activated ( );
};

// Class SFXGameContentLiveKismet.BioSeqAct_ShowHint
// 0x0015 (0x010D - 0x00F8)
class UBioSeqAct_ShowHint : public USequenceAction
{
public:
	int                                                srXBoxMessage;                                    		// 0x00F8 (0x0004) [0x0000000000000000]              
	int                                                srPCMessage;                                      		// 0x00FC (0x0004) [0x0000000000000000]              
	int                                                srPS3Message;                                     		// 0x0100 (0x0004) [0x0000000000000000]              
	float                                              fDisplayTime;                                     		// 0x0104 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bCached : 1;                                      		// 0x0108 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      ForceVisible : 1;                                 		// 0x0108 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned char                                      Position;                                         		// 0x010C (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	int eventGetObjClassVersion ( );
	void Activated ( );
};

// Class SFXGameContentLiveKismet.SFXSeqAct_AddPawnToPerception
// 0x0010 (0x0108 - 0x00F8)
class USFXSeqAct_AddPawnToPerception : public USequenceAction
{
public:
	class TArray<class AActor*>                        m_aoPerceptors;                                   		// 0x00F8 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	int eventGetObjClassVersion ( );
	void Activated ( );
};

// Class SFXGameContentLiveKismet.SFXSeqAct_CompareAliveSquadMembers
// 0x0018 (0x0110 - 0x00F8)
class USFXSeqAct_CompareAliveSquadMembers : public USequenceAction
{
public:
	class TArray<class AActor*>                        Squads;                                           		// 0x00F8 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                AliveSquadMemberCount;                            		// 0x0108 (0x0004) [0x0000000000000000]              
	int                                                Threshold;                                        		// 0x010C (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void Activated ( );
};

// Class SFXGameContentLiveKismet.SFXSeqAct_ForcePlayerIntoCover
// 0x0018 (0x0110 - 0x00F8)
class USFXSeqAct_ForcePlayerIntoCover : public USequenceAction
{
public:
	class AController*                                 Player;                                           		// 0x00F8 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class ACoverLink*                                  Link;                                             		// 0x0100 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                SlotIdx;                                          		// 0x0108 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bDisableAnimatedTransition : 1;                   		// 0x010C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void Activated ( );
};

// Class SFXGameContentLiveKismet.SFXSeqAct_SetMusicID
// 0x0004 (0x00FC - 0x00F8)
class USFXSeqAct_SetMusicID : public USequenceAction
{
public:
	int                                                nMusicID;                                         		// 0x00F8 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void Activated ( );
};

// Class SFXGameContentLiveKismet.SFXSeqCond_HasWeaponClass
// 0x0014 (0x00F0 - 0x00DC)
class USFXSeqCond_HasWeaponClass : public USequenceCondition
{
public:
	class TArray<class UObject*>                       Targets;                                          		// 0x00DC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      MustBeEquipped : 1;                               		// 0x00EC (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bAssaultRifle : 1;                                		// 0x00EC (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bPistol : 1;                                      		// 0x00EC (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bSMG : 1;                                         		// 0x00EC (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bSniperRifle : 1;                                 		// 0x00EC (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bShotgun : 1;                                     		// 0x00EC (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned long                                      bHeavyWeapon : 1;                                 		// 0x00EC (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void Activated ( );
	bool GetIsWeaponOfRequestedClass ( class ASFXWeapon* WeaponToCheck );
};



#undef LESDK_IN_GENERATED

#ifdef _MSC_VER
	#pragma pack ( pop )
#endif
