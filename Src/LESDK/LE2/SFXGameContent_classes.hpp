/*
#############################################################################################
# Mass Effect 2 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.5_Beta-Rev.60-MELE
# ========================================================================================= #
# File: SFXGameContent_classes.hpp
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

#define CONST_DIV_MAX                                            1.05
#define CONST_DIV_HEROIC                                         1.3
#define CONST_DIV_HARD                                           2.0
#define CONST_DIV_COMMON                                         4.0
#define CONST_DIV_EASY                                           10.0
#define CONST_SKILL4                                             2.0
#define CONST_SKILL3                                             1.7
#define CONST_SKILL2                                             1.4
#define CONST_SKILL1                                             1.2
#define CONST_INDEX_INTIM_MAX                                    592
#define CONST_INDEX_INTIM_HEROIC                                 591
#define CONST_INDEX_INTIM_HARD                                   590
#define CONST_INDEX_INTIM_COMMON                                 589
#define CONST_INDEX_INTIM_EASY                                   588
#define CONST_INDEX_CHARM_MAX                                    587
#define CONST_INDEX_CHARM_HEROIC                                 586
#define CONST_INDEX_CHARM_HARD                                   585
#define CONST_INDEX_CHARM_COMMON                                 584
#define CONST_INDEX_CHARM_EASY                                   583
#define CONST_INDEX_RENEGADE_POTENTIAL                           582
#define CONST_INDEX_PARAGON_POTENTIAL                            581
#define CONST_INDEX_MISSIONS_TOTAL                               168
#define CONST_m_fTimeBetweenUpdates                              0.5f
#define CONST_InputPinStart                                      0
#define CONST_InputPinStopCombat                                 1
#define CONST_InputPinStopRespawns                               2
#define CONST_OutputPinSpawnPawn                                 0
#define CONST_OutputPinRespawnsDone                              1
#define CONST_OutputPinFightDone                                 2
#define CONST_InputPinSpawn                                      0
#define CONST_InputPinEnable                                     1
#define CONST_InputPinDisable                                    2
#define CONST_OutputPinFailed                                    1
#define CONST_OutputPinFailedDisabled                            2
#define CONST_OutputPinFailedBudget                              3
#define CONST_OutputPinFailedBlocked                             4

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum SFXGameContent.SFXSeqAct_GetActorHealth.EGetHealthType
/*enum EGetHealthType
{
	GetHealthType_Current                              = 0,
	GetHealthType_Percent                              = 1,
	GetHealthType_Maximum                              = 2,
	GetHealthType_MAX                                  = 3
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class SFXGameContent.SFXSeqAct_TextureBlockConfig
// 0x0004 (0x00FC - 0x00F8)
class USFXSeqAct_TextureBlockConfig : public USequenceAction
{
public:
	int                                                TextureBlockBehavior;                             		// 0x00F8 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void Activated ( );
};

// Class SFXGameContent.SFXSeqAct_SaveGame
// 0x0010 (0x011C - 0x010C)
class USFXSeqAct_SaveGame : public USeqAct_Latent
{
public:
	class USFXEngine*                                  CachedEngine;                                     		// 0x010C (0x0008) [0x0000000000002000]              ( CPF_Transient )
	float                                              ElapsedTime;                                      		// 0x0114 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bFiredOutPin : 1;                                 		// 0x0118 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bForceAutoSave : 1;                               		// 0x0118 (0x0004) [0x0000000000002002] [0x00000002] ( CPF_Const | CPF_Transient )

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

// Class SFXGameContent.SFXSeqAct_SystemsHandleArriveOnNormandy
// 0x0000 (0x00F8 - 0x00F8)
class USFXSeqAct_SystemsHandleArriveOnNormandy : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	int eventGetObjClassVersion ( );
	void HandleRestockAmmo ( class ASFXInventoryManager* oInventory );
	void HandleRestockMediGel ( class ASFXInventoryManager* oInventory );
	void Activated ( );
};

// Class SFXGameContent.SFXSeqAct_ChooseLoadout
// 0x0000 (0x01C8 - 0x01C8)
class USFXSeqAct_ChooseLoadout : public USFXSeqAct_ChooseLoadoutBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void Activated ( );
};

// Class SFXGameContent.BioSeqAct_SetPlotPersuadeCheck
// 0x0010 (0x0108 - 0x00F8)
class UBioSeqAct_SetPlotPersuadeCheck : public USequenceAction
{
public:
	class TArray<struct FLevelCompletionData>          CharmPersuadeDefs;                                		// 0x00F8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void eventActivated ( );
	class ABioWorldInfo* getWorld ( );
};

// Class SFXGameContent.SFXSeqAct_SetAreaMap
// 0x0049 (0x0141 - 0x00F8)
class USFXSeqAct_SetAreaMap : public USequenceAction
{
public:
	class FString                                      m_sAreaMapGuiResource;                            		// 0x00F8 (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FVector                                     RefPoint1_Image_Px;                               		// 0x0108 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     RefPoint2_Image_Px;                               		// 0x0114 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  MapAsset;                                         		// 0x0120 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      Ref1;                                             		// 0x0128 (0x0008) [0x0000000000000000]              
	class AActor*                                      Ref2;                                             		// 0x0130 (0x0008) [0x0000000000000000]              
	class UGFxMovieInfo*                               m_oAreaMapReference;                              		// 0x0138 (0x0008) [0x0000000000000000]              
	unsigned char                                      MapLayout;                                        		// 0x0140 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	int eventGetObjClassVersion ( );
	void Activated ( );
};

// Class SFXGameContent.BioSeqAct_ShowHint
// 0x0015 (0x010D - 0x00F8)
class UBioSeqAct_ShowHint : public USequenceAction
{
public:
	int                                                srXBoxMessage;                                    		// 0x00F8 (0x0004) [0x0000000000000000]              
	int                                                srPCMessage;                                      		// 0x00FC (0x0004) [0x0000000000000000]              
	int                                                srPS3Message;                                     		// 0x0100 (0x0004) [0x0000000000000000]              
	float                                              fDisplayTime;                                     		// 0x0104 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bCached : 1;                                      		// 0x0108 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bForceVisible : 1;                                		// 0x0108 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned char                                      Position;                                         		// 0x010C (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	int eventGetObjClassVersion ( );
	void Activated ( );
};

// Class SFXGameContent.BioSeqAct_GetMembersOfSquad
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

// Class SFXGameContent.BioBaseSquadDesign
// 0x0000 (0x02E4 - 0x02E4)
class ABioBaseSquadDesign : public ABioBaseSquad
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.BioBaseSquadDesignCombat
// 0x0000 (0x02E4 - 0x02E4)
class ABioBaseSquadDesignCombat : public ABioBaseSquadDesign
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.BioFaction_Hostile1
// 0x0003 (0x0080 - 0x007D)
class UBioFaction_Hostile1 : public UBioFaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.BioFaction_Ambient
// 0x0003 (0x0080 - 0x007D)
class UBioFaction_Ambient : public UBioFaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.BioSeqAct_CombatController
// 0x0020 (0x0130 - 0x0110)
class UBioSeqAct_CombatController : public UBioSequenceLatentAction
{
public:
	class TArray<class UObject*>                       m_aoPassSquad;                                    		// 0x0110 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USFXCombatStateData*                         m_oCombatStateData;                               		// 0x0120 (0x0008) [0x0000000000000000]              
	float                                              m_fTimeSinceLastUpdate;                           		// 0x0128 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bDebugMode : 1;                                 		// 0x012C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      m_bNotifiedSpawnsDone : 1;                        		// 0x012C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bForceStopRespawns : 1;                         		// 0x012C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bNotifiedCombatDone : 1;                        		// 0x012C (0x0004) [0x0000000000000000] [0x00000008] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	int eventGetObjClassVersion ( );
	bool eventUpdate ( float DeltaTime );
	void Activated ( );
	class USFXCombatStateData* GetCombatData ( );
	void DebugLog ( class FString sMessage );
};

// Class SFXGameContent.BioSeqVar_CombatState
// 0x0008 (0x00BC - 0x00B4)
class UBioSeqVar_CombatState : public USeqVar_Object
{
public:
	class USFXCombatStateData*                         m_oCombatStateData;                               		// 0x00B4 (0x0008) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCombatStateData
// 0x0044 (0x00A4 - 0x0060)
class USFXCombatStateData : public UObject
{
public:
	struct FFactorySpawnRequest                        m_SpawnRequest;                                   		// 0x0060 (0x001C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class TArray<class ABioBaseSquad*>                 m_aoSquads;                                       		// 0x007C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nGlobalBudget;                                  		// 0x008C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                m_nActiveBudget;                                  		// 0x0090 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_fRespawnInterval;                               		// 0x0094 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_fRespawnTimer;                                  		// 0x0098 (0x0004) [0x0000000000000000]              
	int                                                m_nNumEnemies;                                    		// 0x009C (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bActive : 1;                                    		// 0x00A0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bBusySpawning : 1;                              		// 0x00A0 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bInfiniteGlobalBudget : 1;                      		// 0x00A0 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	int GetEnemyCount ( );
	void UpdateEnemyCount ( );
	void ReportSpawnResult ( unsigned long bSuccessfullySpawned );
	void ClearSpawnRequest ( );
	void RequestSpawn ( struct SFXName nmRequesterName, class TArray<class AActor*> aoSpawnPoints );
};

// Class SFXGameContent.BioSeqAct_RespawnFactory
// 0x0008 (0x0198 - 0x0190)
class UBioSeqAct_RespawnFactory : public USFXSeqAct_AIFactory
{
public:
	class USFXCombatStateData*                         m_oCombatStateData;                               		// 0x0190 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	int eventGetObjClassVersion ( );
	void Deactivated ( );
	void Activated ( );
	class USFXCombatStateData* GetCombatData ( );
};

// Class SFXGameContent.BioSeqAct_SpawnLocation
// 0x003C (0x014C - 0x0110)
class UBioSeqAct_SpawnLocation : public UBioSequenceLatentAction
{
public:
	class TArray<class AActor*>                        m_aoSpawnPoints;                                  		// 0x0110 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class TArray<class UObject*>                       m_aoPassSpawnPoints;                              		// 0x0120 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USFXCombatStateData*                         m_oCombatStateData;                               		// 0x0130 (0x0008) [0x0000000000000000]              
	float                                              m_fSpawnDelayedTime;                              		// 0x0138 (0x0004) [0x0000000000000000]              
	int                                                m_nSpawnRetrys;                                   		// 0x013C (0x0004) [0x0000000000000000]              
	int                                                m_nLocalBudget;                                   		// 0x0140 (0x0004) [0x0000000000000000]              
	float                                              fSpawnDelay;                                      		// 0x0144 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      m_bInfiniteLocalBudget : 1;                       		// 0x0148 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bDisabled : 1;                                  		// 0x0148 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      m_bWaitingToSpawn : 1;                            		// 0x0148 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bWaitingForFactoryFeedback : 1;                 		// 0x0148 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bDebugMode : 1;                                   		// 0x0148 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	int eventGetObjClassVersion ( );
	bool CheckForFactoryFeedback ( );
	void AttemptSpawn ( );
	bool WaitToSpawn ( float DeltaTime );
	bool eventUpdate ( float DeltaTime );
	void QueueSpawn ( );
	void Activated ( );
	void DebugLog ( class FString sMessage );
	class USFXCombatStateData* GetCombatData ( );
};

// Class SFXGameContent.BioSquadCombat
// 0x0000 (0x02E4 - 0x02E4)
class ABioSquadCombat : public ABioBaseSquadDesignCombat
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXSeqAct_CompareAliveSquadMembers
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

// Class SFXGameContent.SFXSeqAct_ToggleSleeping
// 0x0004 (0x00FC - 0x00F8)
class USFXSeqAct_ToggleSleeping : public USequenceAction
{
public:
	float                                              fSleepPerceptionDistance;                         		// 0x00F8 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	int eventGetObjClassVersion ( );
	void Activated ( );
};

// Class SFXGameContent.BioSeqAct_CancelHint
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

// Class SFXGameContent.BioSeqAct_CheckIfInVolume
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

// Class SFXGameContent.SFXSeqAct_EnablePowers
// 0x0024 (0x011C - 0x00F8)
class USFXSeqAct_EnablePowers : public USequenceAction
{
public:
	class TArray<class APawn*>                         Pawns;                                            		// 0x00F8 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class TArray<struct SFXName>                       Powers;                                           		// 0x0108 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      Enable : 1;                                       		// 0x0118 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void Activated ( );
};

// Class SFXGameContent.SFXSeqAct_GetActorHealth
// 0x000D (0x0105 - 0x00F8)
class USFXSeqAct_GetActorHealth : public USequenceAction
{
public:
	class AActor*                                      Actor;                                            		// 0x00F8 (0x0008) [0x0000000000000000]              
	float                                              Health;                                           		// 0x0100 (0x0004) [0x0000000000000000]              
	unsigned char                                      GetHealthType;                                    		// 0x0104 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void eventActivated ( );
};



#undef LESDK_IN_GENERATED

#ifdef _MSC_VER
	#pragma pack ( pop )
#endif