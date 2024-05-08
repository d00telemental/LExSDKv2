/*
#############################################################################################
# Mass Effect 3 (Legendary Edition) (2.0.0.48602) SDK
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

// Function SFXGameContent.SFXGameInfoSP.AwardItem
// [0x00024002] 
struct ASFXGameInfoSP_execAwardItem_Parms
{
	union { struct SFXName                             ItemName; };                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    Level; };                                         		// 0x0008 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXEngine*                               oEngine;                                          		// 0x001C (0x0008) [0x0000000000000000]              
	// union { struct FTD                              TreasureData; };                                  		// 0x0024 (0x0054) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// unsigned long                                   bFoundData;                                       		// 0x0078 (0x0004) [0x0000000000000000]              
	// union { struct FLevelTreasureSaveRecord         NewTreasureRecord; };                             		// 0x007C (0x0020) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             idx;                                              		// 0x009C (0x0004) [0x0000000000000000]              
	// union { FString                                 S; };                                             		// 0x00A0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// union { struct SFXName                          N; };                                             		// 0x00B0 (0x0008) [0x0000000000000000]              

	 ASFXGameInfoSP_execAwardItem_Parms() { memset(this, 0, sizeof *this); }
	~ASFXGameInfoSP_execAwardItem_Parms() {}
};

// Function SFXGameContent.SFXGameInfoSP.AwardCredits
// [0x00024002] 
struct ASFXGameInfoSP_execAwardCredits_Parms
{
	int                                                Amount;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    Level; };                                         		// 0x0004 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bShowNotification;                                		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXEngine*                               oEngine;                                          		// 0x001C (0x0008) [0x0000000000000000]              
	// union { struct FTD                              TreasureData; };                                  		// 0x0024 (0x0054) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// unsigned long                                   bFoundData;                                       		// 0x0078 (0x0004) [0x0000000000000000]              
	// int                                             CreditBudget;                                     		// 0x007C (0x0004) [0x0000000000000000]              
	// int                                             CreditsSoFar;                                     		// 0x0080 (0x0004) [0x0000000000000000]              
	// int                                             idx;                                              		// 0x0084 (0x0004) [0x0000000000000000]              
	// class ASFXInventoryManager*                     Inventory;                                        		// 0x0088 (0x0008) [0x0000000000000000]              
	// union { struct FLevelTreasureSaveRecord         NewTreasureRecord; };                             		// 0x0090 (0x0020) [0x0000000000400000]              ( CPF_NeedCtorLink )

	 ASFXGameInfoSP_execAwardCredits_Parms() { memset(this, 0, sizeof *this); }
	~ASFXGameInfoSP_execAwardCredits_Parms() {}
};

// Function SFXGameContent.SFXGameInfoSP.AwardCreditPercent
// [0x00024002] 
struct ASFXGameInfoSP_execAwardCreditPercent_Parms
{
	float                                              fAmount;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    Level; };                                         		// 0x0004 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bShowNotifications;                               		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXEngine*                               oEngine;                                          		// 0x001C (0x0008) [0x0000000000000000]              
	// union { struct FTD                              TreasureData; };                                  		// 0x0024 (0x0054) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// unsigned long                                   bFoundData;                                       		// 0x0078 (0x0004) [0x0000000000000000]              
	// int                                             CreditBudget;                                     		// 0x007C (0x0004) [0x0000000000000000]              
	// class ASFXInventoryManager*                     Inventory;                                        		// 0x0080 (0x0008) [0x0000000000000000]              

	 ASFXGameInfoSP_execAwardCreditPercent_Parms() { memset(this, 0, sizeof *this); }
	~ASFXGameInfoSP_execAwardCreditPercent_Parms() {}
};

// Function SFXGameContent.SFXGameInfoSP.AwardXP
// [0x00024002] 
struct ASFXGameInfoSP_execAwardXP_Parms
{
	int                                                Amount;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    Level; };                                         		// 0x0004 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bShowNotifications;                               		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXEngine*                               oEngine;                                          		// 0x001C (0x0008) [0x0000000000000000]              
	// union { struct FTD                              TreasureData; };                                  		// 0x0024 (0x0054) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// unsigned long                                   bFoundData;                                       		// 0x0078 (0x0004) [0x0000000000000000]              
	// int                                             XPBudget;                                         		// 0x007C (0x0004) [0x0000000000000000]              
	// int                                             XPSoFar;                                          		// 0x0080 (0x0004) [0x0000000000000000]              
	// int                                             idx;                                              		// 0x0084 (0x0004) [0x0000000000000000]              
	// class ABioPlayerController*                     PC;                                               		// 0x0088 (0x0008) [0x0000000000000000]              
	// union { struct FLevelTreasureSaveRecord         NewTreasureRecord; };                             		// 0x0090 (0x0020) [0x0000000000400000]              ( CPF_NeedCtorLink )

	 ASFXGameInfoSP_execAwardXP_Parms() { memset(this, 0, sizeof *this); }
	~ASFXGameInfoSP_execAwardXP_Parms() {}
};

// Function SFXGameContent.SFXGameInfoSP.FindPlayerStart
// [0x00024002] 
struct ASFXGameInfoSP_execFindPlayerStart_Parms
{
	class AController*                                 Player;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      InTeam;                                           		// 0x0008 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	union { FString                                    IncomingName; };                                  		// 0x000C (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	class ANavigationPoint*                            ReturnValue;                                      		// 0x001C (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXEngine*                               Engine;                                           		// 0x0024 (0x0008) [0x0000000000000000]              
	// union { struct SFXName                          ATStart; };                                       		// 0x002C (0x0008) [0x0000000000000000]              
	// class AActor*                                   ChkActor;                                         		// 0x0034 (0x0008) [0x0000000000000000]              
	// class ABioStartLocation*                        ChkBioStartLocation;                              		// 0x003C (0x0008) [0x0000000000000000]              

	 ASFXGameInfoSP_execFindPlayerStart_Parms() { memset(this, 0, sizeof *this); }
	~ASFXGameInfoSP_execFindPlayerStart_Parms() {}
};

// Function SFXGameContent.SFXGameInfoSP.PostBeginPlay
// [0x00020902] ( FUNC_Simulated | FUNC_Event )
struct ASFXGameInfoSP_eventPostBeginPlay_Parms
{
	// class UEngine*                                  oEngine;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UClass*                                   TreasureClass;                                    		// 0x0008 (0x0008) [0x0000000000000000]              
	// class UObject*                                  DynamicLoadedClassObject;                         		// 0x0010 (0x0008) [0x0000000000000000]              

	 ASFXGameInfoSP_eventPostBeginPlay_Parms() { memset(this, 0, sizeof *this); }
	~ASFXGameInfoSP_eventPostBeginPlay_Parms() {}
};

// Function SFXGameContent.SFXGUI_HeavyWeaponReticle.TargetCanHitChanged
// [0x00020802] ( FUNC_Event )
struct USFXGUI_HeavyWeaponReticle_eventTargetCanHitChanged_Parms
{
	unsigned long                                      bCanHit;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 USFXGUI_HeavyWeaponReticle_eventTargetCanHitChanged_Parms() { memset(this, 0, sizeof *this); }
	~USFXGUI_HeavyWeaponReticle_eventTargetCanHitChanged_Parms() {}
};

// Function SFXGameContent.SFXGUI_HeavyWeaponReticle.WeaponAmmoChanged
// [0x00020802] ( FUNC_Event )
struct USFXGUI_HeavyWeaponReticle_eventWeaponAmmoChanged_Parms
{
	int                                                nAmmo;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 USFXGUI_HeavyWeaponReticle_eventWeaponAmmoChanged_Parms() { memset(this, 0, sizeof *this); }
	~USFXGUI_HeavyWeaponReticle_eventWeaponAmmoChanged_Parms() {}
};

// Function SFXGameContent.SFXGUI_HeavyWeaponReticle.OnReticleLoaded
// [0x00020002] 
struct USFXGUI_HeavyWeaponReticle_execOnReticleLoaded_Parms
{

	 USFXGUI_HeavyWeaponReticle_execOnReticleLoaded_Parms() { memset(this, 0, sizeof *this); }
	~USFXGUI_HeavyWeaponReticle_execOnReticleLoaded_Parms() {}
};

// Function SFXGameContent.SFXGUI_HeavyWeaponReticle.PerformReticleHide
// [0x00020802] ( FUNC_Event )
struct USFXGUI_HeavyWeaponReticle_eventPerformReticleHide_Parms
{
	unsigned long                                      bInstant;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 USFXGUI_HeavyWeaponReticle_eventPerformReticleHide_Parms() { memset(this, 0, sizeof *this); }
	~USFXGUI_HeavyWeaponReticle_eventPerformReticleHide_Parms() {}
};

// Function SFXGameContent.SFXGUI_HeavyWeaponReticle.PerformReticleShow
// [0x00020802] ( FUNC_Event )
struct USFXGUI_HeavyWeaponReticle_eventPerformReticleShow_Parms
{
	unsigned long                                      bInstant;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 USFXGUI_HeavyWeaponReticle_eventPerformReticleShow_Parms() { memset(this, 0, sizeof *this); }
	~USFXGUI_HeavyWeaponReticle_eventPerformReticleShow_Parms() {}
};

// Function SFXGameContent.SFXSeqAct_GiveStartingConsumables.Activated
// [0x00020002] 
struct USFXSeqAct_GiveStartingConsumables_execActivated_Parms
{
	// class AWorldInfo*                               WI;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	// class APlayerController*                        PC;                                               		// 0x0008 (0x0008) [0x0000000000000000]              
	// class ASFXPawn_Player*                          pPawn;                                            		// 0x0010 (0x0008) [0x0000000000000000]              
	// class ASFXInventoryManager*                     InvManager;                                       		// 0x0018 (0x0008) [0x0000000000000000]              
	// class ASFXWeapon*                               Weapon;                                           		// 0x0020 (0x0008) [0x0000000000000000]              
	// class ABioBaseSquad*                            pSquad;                                           		// 0x0028 (0x0008) [0x0000000000000000]              
	// class APawn*                                    MemberPawn;                                       		// 0x0030 (0x0008) [0x0000000000000000]              
	// class ASFXPawn_Henchman*                        HPawn;                                            		// 0x0038 (0x0008) [0x0000000000000000]              
	// class USFXModule_DamagePlayer*                  DamageModule;                                     		// 0x0040 (0x0008) [0x0000000000000000]              
	// int                                             MaxHealth;                                        		// 0x0048 (0x0004) [0x0000000000000000]              

	 USFXSeqAct_GiveStartingConsumables_execActivated_Parms() { memset(this, 0, sizeof *this); }
	~USFXSeqAct_GiveStartingConsumables_execActivated_Parms() {}
};

// Function SFXGameContent.SFXSeqAct_OpenWeaponSelection.OnMovieClosedDelegate
// [0x00020002] 
struct USFXSeqAct_OpenWeaponSelection_execOnMovieClosedDelegate_Parms
{
	class USFXGUIMovie*                                i_ScreenToClose;                                  		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXSeqAct_OpenWeaponSelection_execOnMovieClosedDelegate_Parms() { memset(this, 0, sizeof *this); }
	~USFXSeqAct_OpenWeaponSelection_execOnMovieClosedDelegate_Parms() {}
};

// Function SFXGameContent.SFXSeqAct_OpenWeaponSelection.UpdateOp
// [0x00020002] 
struct USFXSeqAct_OpenWeaponSelection_execUpdateOp_Parms
{
	float                                              fDeltaT;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXSeqAct_OpenWeaponSelection_execUpdateOp_Parms() { memset(this, 0, sizeof *this); }
	~USFXSeqAct_OpenWeaponSelection_execUpdateOp_Parms() {}
};

// Function SFXGameContent.SFXSeqAct_OpenWeaponSelection.Activated
// [0x00020002] 
struct USFXSeqAct_OpenWeaponSelection_execActivated_Parms
{
	// class USFXGUIInteraction*                       oGUI;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	// class USFXGUI_WeaponSelection*                  oWeapGUI;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// class ABioPlayerController*                     oPC;                                              		// 0x0010 (0x0008) [0x0000000000000000]              

	 USFXSeqAct_OpenWeaponSelection_execActivated_Parms() { memset(this, 0, sizeof *this); }
	~USFXSeqAct_OpenWeaponSelection_execActivated_Parms() {}
};

// Function SFXGameContent.SFXWeapon_Heavy_Beam_Base.GetAdjustedAim
// [0x00020102] ( FUNC_Simulated )
struct ASFXWeapon_Heavy_Beam_Base_execGetAdjustedAim_Parms
{
	union { struct FVector                             StartFireLoc; };                                  		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	union { struct FRotator                            ReturnValue; };                                   		// 0x000C (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 ASFXWeapon_Heavy_Beam_Base_execGetAdjustedAim_Parms() { memset(this, 0, sizeof *this); }
	~ASFXWeapon_Heavy_Beam_Base_execGetAdjustedAim_Parms() {}
};

// Function SFXGameContent.SFXWeapon_Heavy_Beam_Base.PreCalculateAdjustedAim
// [0x00080002] 
struct ASFXWeapon_Heavy_Beam_Base_execPreCalculateAdjustedAim_Parms
{
	float                                              fDeltaTime;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// union { struct FVector                          StartFireLoc; };                                  		// 0x0004 (0x000C) [0x0000000000000000]              
	// union { struct FRotator                         rTargetAim; };                                    		// 0x0010 (0x000C) [0x0000000000000000]              
	// union { struct FRotator                         rCurrentAim; };                                   		// 0x001C (0x000C) [0x0000000000000000]              
	// float                                           fInterpSpeed;                                     		// 0x0028 (0x0004) [0x0000000000000000]              
	// class ASFXAI_Core*                              AI;                                               		// 0x002C (0x0008) [0x0000000000000000]              

	 ASFXWeapon_Heavy_Beam_Base_execPreCalculateAdjustedAim_Parms() { memset(this, 0, sizeof *this); }
	~ASFXWeapon_Heavy_Beam_Base_execPreCalculateAdjustedAim_Parms() {}
};

// Function SFXGameContent.SFXWeapon_Heavy_Beam_Base.UpdateBeam
// [0x00020102] ( FUNC_Simulated )
struct ASFXWeapon_Heavy_Beam_Base_execUpdateBeam_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 ASFXWeapon_Heavy_Beam_Base_execUpdateBeam_Parms() { memset(this, 0, sizeof *this); }
	~ASFXWeapon_Heavy_Beam_Base_execUpdateBeam_Parms() {}
};

// Function SFXGameContent.SFXWeapon_Heavy_Beam_Base.ProcessInstantHit
// [0x00024102] ( FUNC_Simulated )
struct ASFXWeapon_Heavy_Beam_Base_execProcessInstantHit_Parms
{
	unsigned char                                      FiringMode;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FImpactInfo                         Impact; };                                        		// 0x0004 (0x0064) [0x0000000000000080]              ( CPF_Parm )
	int                                                NumHits;                                          		// 0x0068 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 ASFXWeapon_Heavy_Beam_Base_execProcessInstantHit_Parms() { memset(this, 0, sizeof *this); }
	~ASFXWeapon_Heavy_Beam_Base_execProcessInstantHit_Parms() {}
};

// Function SFXGameContent.SFXWeapon_Heavy_Beam_Base.CalcFireStart
// [0x00020002] 
struct ASFXWeapon_Heavy_Beam_Base_execCalcFireStart_Parms
{
	// union { struct FVector                          StartFireLoc; };                                  		// 0x0000 (0x000C) [0x0000000000000000]              
	// union { struct FVector                          FireDir; };                                       		// 0x000C (0x000C) [0x0000000000000000]              
	// union { struct FVector                          TargetLatVel; };                                  		// 0x0018 (0x000C) [0x0000000000000000]              
	// union { struct FVector                          ToTarget; };                                      		// 0x0024 (0x000C) [0x0000000000000000]              
	// class ASFXAI_Core*                              AI;                                               		// 0x0030 (0x0008) [0x0000000000000000]              
	// int                                             Direction;                                        		// 0x0038 (0x0004) [0x0000000000000000]              
	// float                                           fVelBasedTrackingOffset;                          		// 0x003C (0x0004) [0x0000000000000000]              
	// float                                           fPitchMaxError;                                   		// 0x0040 (0x0004) [0x0000000000000000]              
	// union { struct FVector                          TargetLoc; };                                     		// 0x0044 (0x000C) [0x0000000000000000]              

	 ASFXWeapon_Heavy_Beam_Base_execCalcFireStart_Parms() { memset(this, 0, sizeof *this); }
	~ASFXWeapon_Heavy_Beam_Base_execCalcFireStart_Parms() {}
};

// Function SFXGameContent.SFXWeapon_Heavy_Beam_Base.StopFire
// [0x00020102] ( FUNC_Simulated )
struct ASFXWeapon_Heavy_Beam_Base_execStopFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )

	 ASFXWeapon_Heavy_Beam_Base_execStopFire_Parms() { memset(this, 0, sizeof *this); }
	~ASFXWeapon_Heavy_Beam_Base_execStopFire_Parms() {}
};

// Function SFXGameContent.SFXWeapon_Heavy_Beam_Base.StartFire
// [0x00020102] ( FUNC_Simulated )
struct ASFXWeapon_Heavy_Beam_Base_execStartFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )

	 ASFXWeapon_Heavy_Beam_Base_execStartFire_Parms() { memset(this, 0, sizeof *this); }
	~ASFXWeapon_Heavy_Beam_Base_execStartFire_Parms() {}
};

// Function SFXGameContent.SFXWeapon_Heavy_Beam_Base.Tick
// [0x00020102] ( FUNC_Simulated )
struct ASFXWeapon_Heavy_Beam_Base_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 ASFXWeapon_Heavy_Beam_Base_execTick_Parms() { memset(this, 0, sizeof *this); }
	~ASFXWeapon_Heavy_Beam_Base_execTick_Parms() {}
};

// Function SFXGameContent.SFXWeapon_Heavy_Beam_Base.SpawnImpactEffects
// [0x00020102] ( FUNC_Simulated )
struct ASFXWeapon_Heavy_Beam_Base_execSpawnImpactEffects_Parms
{
	union { struct FImpactInfo                         Impact; };                                        		// 0x0000 (0x0064) [0x0000000000000080]              ( CPF_Parm )

	 ASFXWeapon_Heavy_Beam_Base_execSpawnImpactEffects_Parms() { memset(this, 0, sizeof *this); }
	~ASFXWeapon_Heavy_Beam_Base_execSpawnImpactEffects_Parms() {}
};

// Function SFXGameContent.SFXWeapon_Heavy_Beam_Base.GetWeaponSpecificImpactSound
// [0x00020102] ( FUNC_Simulated )
struct ASFXWeapon_Heavy_Beam_Base_execGetWeaponSpecificImpactSound_Parms
{
	class USFXPhysicalMaterialImpactSounds*            ImpactSounds;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UWwiseEvent*                                 ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 ASFXWeapon_Heavy_Beam_Base_execGetWeaponSpecificImpactSound_Parms() { memset(this, 0, sizeof *this); }
	~ASFXWeapon_Heavy_Beam_Base_execGetWeaponSpecificImpactSound_Parms() {}
};

// Function SFXGameContent.SFXWeapon_Heavy_Beam_Base.GetWeaponSpecificImpactEffect
// [0x00022102] ( FUNC_Simulated )
struct ASFXWeapon_Heavy_Beam_Base_execGetWeaponSpecificImpactEffect_Parms
{
	class USFXPhysicalMaterialImpactEffects*           ImpactEffects;                                    		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UParticleSystem*                             ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 ASFXWeapon_Heavy_Beam_Base_execGetWeaponSpecificImpactEffect_Parms() { memset(this, 0, sizeof *this); }
	~ASFXWeapon_Heavy_Beam_Base_execGetWeaponSpecificImpactEffect_Parms() {}
};

// Function SFXGameContent.SFXWeapon_Heavy_Beam_Base.GetWeaponSpecificDecalData
// [0x00420102] ( FUNC_Simulated )
struct ASFXWeapon_Heavy_Beam_Base_execGetWeaponSpecificDecalData_Parms
{
	class USFXPhysicalMaterialDecals*                  DecalEffects;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              FadeTime;                                         		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UDecalComponent*                             ReturnValue;                                      		// 0x000C (0x0008) [0x0000000004000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
	// int                                             DecalLength;                                      		// 0x0014 (0x0004) [0x0000000000000000]              

	 ASFXWeapon_Heavy_Beam_Base_execGetWeaponSpecificDecalData_Parms() { memset(this, 0, sizeof *this); }
	~ASFXWeapon_Heavy_Beam_Base_execGetWeaponSpecificDecalData_Parms() {}
};

// Function SFXGameContent.SFXWeapon_Heavy_Beam_Base.StopMuzzleFlashEffect
// [0x00020102] ( FUNC_Simulated )
struct ASFXWeapon_Heavy_Beam_Base_execStopMuzzleFlashEffect_Parms
{

	 ASFXWeapon_Heavy_Beam_Base_execStopMuzzleFlashEffect_Parms() { memset(this, 0, sizeof *this); }
	~ASFXWeapon_Heavy_Beam_Base_execStopMuzzleFlashEffect_Parms() {}
};

// Function SFXGameContent.SFXWeapon_Heavy_Beam_Base.PlayMuzzleFlashEffect
// [0x00020102] ( FUNC_Simulated )
struct ASFXWeapon_Heavy_Beam_Base_execPlayMuzzleFlashEffect_Parms
{

	 ASFXWeapon_Heavy_Beam_Base_execPlayMuzzleFlashEffect_Parms() { memset(this, 0, sizeof *this); }
	~ASFXWeapon_Heavy_Beam_Base_execPlayMuzzleFlashEffect_Parms() {}
};

// Function SFXGameContent.SFXWeapon_Heavy_Beam_Base.StretchDecal
// [0x00020102] ( FUNC_Simulated )
struct ASFXWeapon_Heavy_Beam_Base_execStretchDecal_Parms
{
	union { struct FImpactInfo                         Impact; };                                        		// 0x0000 (0x0064) [0x0000000000000080]              ( CPF_Parm )
	// class UPhysicalMaterial*                        ParentPhysMaterial;                               		// 0x0064 (0x0008) [0x0000000000000000]              
	// class UDecalComponent*                          ImpactDecal;                                      		// 0x006C (0x0008) [0x0000000004000000]              ( CPF_EditInline )
	// union { struct FVector                          Stretch; };                                       		// 0x0074 (0x000C) [0x0000000000000000]              
	// float                                           Rot;                                              		// 0x0080 (0x0004) [0x0000000000000000]              
	// float                                           StretchFactor;                                    		// 0x0084 (0x0004) [0x0000000000000000]              
	// union { struct FRotator                         NormRot; };                                       		// 0x0088 (0x000C) [0x0000000000000000]              
	// float                                           FadeTime;                                         		// 0x0094 (0x0004) [0x0000000000000000]              
	// class UMaterialInstanceTimeVarying*             MITV;                                             		// 0x0098 (0x0008) [0x0000000000000000]              

	 ASFXWeapon_Heavy_Beam_Base_execStretchDecal_Parms() { memset(this, 0, sizeof *this); }
	~ASFXWeapon_Heavy_Beam_Base_execStretchDecal_Parms() {}
};

// Function SFXGameContent.SFXWeapon_Heavy_Beam_Base.SpawnADecal
// [0x00020102] ( FUNC_Simulated )
struct ASFXWeapon_Heavy_Beam_Base_execSpawnADecal_Parms
{
	union { struct FImpactInfo                         Impact; };                                        		// 0x0000 (0x0064) [0x0000000000000080]              ( CPF_Parm )

	 ASFXWeapon_Heavy_Beam_Base_execSpawnADecal_Parms() { memset(this, 0, sizeof *this); }
	~ASFXWeapon_Heavy_Beam_Base_execSpawnADecal_Parms() {}
};

// Function SFXGameContent.SFXWeapon_Heavy_Beam_Base.InitDefaultDecalProperties
// [0x00020102] ( FUNC_Simulated )
struct ASFXWeapon_Heavy_Beam_Base_execInitDefaultDecalProperties_Parms
{

	 ASFXWeapon_Heavy_Beam_Base_execInitDefaultDecalProperties_Parms() { memset(this, 0, sizeof *this); }
	~ASFXWeapon_Heavy_Beam_Base_execInitDefaultDecalProperties_Parms() {}
};

// Function SFXGameContent.SFXWeapon_Heavy_LegionDisinfectionWeapon.OutOfAmmo
// [0x00020102] ( FUNC_Simulated )
struct ASFXWeapon_Heavy_LegionDisinfectionWeapon_execOutOfAmmo_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 ASFXWeapon_Heavy_LegionDisinfectionWeapon_execOutOfAmmo_Parms() { memset(this, 0, sizeof *this); }
	~ASFXWeapon_Heavy_LegionDisinfectionWeapon_execOutOfAmmo_Parms() {}
};

// Function SFXGameContent.SFXWeapon_Heavy_LegionDisinfectionWeapon.InitDefaultDecalProperties
// [0x00020100] ( FUNC_Simulated )
struct ASFXWeapon_Heavy_LegionDisinfectionWeapon_execInitDefaultDecalProperties_Parms
{

	 ASFXWeapon_Heavy_LegionDisinfectionWeapon_execInitDefaultDecalProperties_Parms() { memset(this, 0, sizeof *this); }
	~ASFXWeapon_Heavy_LegionDisinfectionWeapon_execInitDefaultDecalProperties_Parms() {}
};

// Function SFXGameContent.SFXWeapon_Heavy_LegionDisinfectionWeapon.Tick
// [0x00020102] ( FUNC_Simulated )
struct ASFXWeapon_Heavy_LegionDisinfectionWeapon_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             AmmoRounded;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           fMagSize;                                         		// 0x0008 (0x0004) [0x0000000000000000]              

	 ASFXWeapon_Heavy_LegionDisinfectionWeapon_execTick_Parms() { memset(this, 0, sizeof *this); }
	~ASFXWeapon_Heavy_LegionDisinfectionWeapon_execTick_Parms() {}
};

// Function SFXGameContent.SFXWeapon_Heavy_LegionDisinfectionWeapon.GetWeaponSpecificImpactSound
// [0x00020102] ( FUNC_Simulated )
struct ASFXWeapon_Heavy_LegionDisinfectionWeapon_execGetWeaponSpecificImpactSound_Parms
{
	class USFXPhysicalMaterialImpactSounds*            ImpactSounds;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UWwiseEvent*                                 ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 ASFXWeapon_Heavy_LegionDisinfectionWeapon_execGetWeaponSpecificImpactSound_Parms() { memset(this, 0, sizeof *this); }
	~ASFXWeapon_Heavy_LegionDisinfectionWeapon_execGetWeaponSpecificImpactSound_Parms() {}
};

// Function SFXGameContent.SFXWeapon_Heavy_LegionDisinfectionWeapon.GetWeaponSpecificImpactEffect
// [0x00022102] ( FUNC_Simulated )
struct ASFXWeapon_Heavy_LegionDisinfectionWeapon_execGetWeaponSpecificImpactEffect_Parms
{
	class USFXPhysicalMaterialImpactEffects*           ImpactEffects;                                    		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UParticleSystem*                             ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 ASFXWeapon_Heavy_LegionDisinfectionWeapon_execGetWeaponSpecificImpactEffect_Parms() { memset(this, 0, sizeof *this); }
	~ASFXWeapon_Heavy_LegionDisinfectionWeapon_execGetWeaponSpecificImpactEffect_Parms() {}
};

// Function SFXGameContent.SFXWeapon_Heavy_LegionDisinfectionWeapon.StopMuzzleFlashEffect
// [0x00020102] ( FUNC_Simulated )
struct ASFXWeapon_Heavy_LegionDisinfectionWeapon_execStopMuzzleFlashEffect_Parms
{

	 ASFXWeapon_Heavy_LegionDisinfectionWeapon_execStopMuzzleFlashEffect_Parms() { memset(this, 0, sizeof *this); }
	~ASFXWeapon_Heavy_LegionDisinfectionWeapon_execStopMuzzleFlashEffect_Parms() {}
};

// Function SFXGameContent.SFXWeapon_Heavy_LegionDisinfectionWeapon.StopFireSounds
// [0x00020102] ( FUNC_Simulated )
struct ASFXWeapon_Heavy_LegionDisinfectionWeapon_execStopFireSounds_Parms
{

	 ASFXWeapon_Heavy_LegionDisinfectionWeapon_execStopFireSounds_Parms() { memset(this, 0, sizeof *this); }
	~ASFXWeapon_Heavy_LegionDisinfectionWeapon_execStopFireSounds_Parms() {}
};

// Function SFXGameContent.SFXWeapon_Pistol_Predator.GetWeaponSpecificDecalData
// [0x00420102] ( FUNC_Simulated )
struct ASFXWeapon_Pistol_Predator_execGetWeaponSpecificDecalData_Parms
{
	class USFXPhysicalMaterialDecals*                  DecalEffects;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              FadeTime;                                         		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UDecalComponent*                             ReturnValue;                                      		// 0x000C (0x0008) [0x0000000004000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
	// int                                             DecalLength;                                      		// 0x0014 (0x0004) [0x0000000000000000]              

	 ASFXWeapon_Pistol_Predator_execGetWeaponSpecificDecalData_Parms() { memset(this, 0, sizeof *this); }
	~ASFXWeapon_Pistol_Predator_execGetWeaponSpecificDecalData_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_Revive.BodyStanceAnimEndNotification
// [0x00020000] 
struct USFXCustomAction_Revive_execBodyStanceAnimEndNotification_Parms
{
	class UAnimNodeSequence*                           SeqNode;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              PlayedTime;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ExcessTime;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 USFXCustomAction_Revive_execBodyStanceAnimEndNotification_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_Revive_execBodyStanceAnimEndNotification_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_Revive.Replicate
// [0x00020002] 
struct USFXCustomAction_Revive_execReplicate_Parms
{

	 USFXCustomAction_Revive_execReplicate_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_Revive_execReplicate_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_Revive.ClientDoCustomAction
// [0x00024002] 
struct USFXCustomAction_Revive_execClientDoCustomAction_Parms
{
	unsigned long                                      bForced;                                          		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 USFXCustomAction_Revive_execClientDoCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_Revive_execClientDoCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_Revive.CheckFiring
// [0x00020002] 
struct USFXCustomAction_Revive_execCheckFiring_Parms
{

	 USFXCustomAction_Revive_execCheckFiring_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_Revive_execCheckFiring_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_Revive.TickCustomAction
// [0x00020002] 
struct USFXCustomAction_Revive_execTickCustomAction_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 USFXCustomAction_Revive_execTickCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_Revive_execTickCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_Revive.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_Revive_execStopCustomAction_Parms
{

	 USFXCustomAction_Revive_execStopCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_Revive_execStopCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_Revive.Resurrect
// [0x00020002] 
struct USFXCustomAction_Revive_execResurrect_Parms
{
	// class UBioRemoteLogger*                         GLogger;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class USFXAccomplishmentManager*                AccManager;                                       		// 0x0008 (0x0008) [0x0000000000000000]              

	 USFXCustomAction_Revive_execResurrect_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_Revive_execResurrect_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_Revive.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_Revive_execStartCustomAction_Parms
{

	 USFXCustomAction_Revive_execStartCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_Revive_execStartCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_Revive.InternalCanDoCustomAction
// [0x00080002] 
struct USFXCustomAction_Revive_execInternalCanDoCustomAction_Parms
{
	class ABioPawn*                                    SyncPawn;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bForced;                                          		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXCustomAction_Revive_execInternalCanDoCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_Revive_execInternalCanDoCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_Reload.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_Reload_execStopCustomAction_Parms
{

	 USFXCustomAction_Reload_execStopCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_Reload_execStopCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_Reload.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_Reload_execStartCustomAction_Parms
{

	 USFXCustomAction_Reload_execStartCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_Reload_execStartCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_Reload.GetUsedAnimNames
// [0x00422802] ( FUNC_Event )
struct USFXCustomAction_Reload_eventGetUsedAnimNames_Parms
{
	union { TArray<struct SFXName>                     UsedAnims; };                                     		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

	 USFXCustomAction_Reload_eventGetUsedAnimNames_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_Reload_eventGetUsedAnimNames_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_ActivateWeaponFlashlight.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_ActivateWeaponFlashlight_execStopCustomAction_Parms
{

	 USFXCustomAction_ActivateWeaponFlashlight_execStopCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_ActivateWeaponFlashlight_execStopCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_ActivateWeaponFlashlight.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_ActivateWeaponFlashlight_execStartCustomAction_Parms
{

	 USFXCustomAction_ActivateWeaponFlashlight_execStartCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_ActivateWeaponFlashlight_execStartCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_MantleLookAt.FlinchActionOverride
// [0x00020002] 
struct USFXCustomAction_MantleLookAt_execFlinchActionOverride_Parms
{

	 USFXCustomAction_MantleLookAt_execFlinchActionOverride_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_MantleLookAt_execFlinchActionOverride_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_MantleLookAt.GetUsedAnimNames
// [0x00422802] ( FUNC_Event )
struct USFXCustomAction_MantleLookAt_eventGetUsedAnimNames_Parms
{
	union { TArray<struct SFXName>                     UsedAnims; };                                     		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

	 USFXCustomAction_MantleLookAt_eventGetUsedAnimNames_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_MantleLookAt_eventGetUsedAnimNames_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_MantleLookAt.GetEndBodyStanceAnim
// [0x00020002] 
struct USFXCustomAction_MantleLookAt_execGetEndBodyStanceAnim_Parms
{
	union { struct FBodyStance                         ReturnValue; };                                   		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

	 USFXCustomAction_MantleLookAt_execGetEndBodyStanceAnim_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_MantleLookAt_execGetEndBodyStanceAnim_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_MantleLookAt.GetLoopBodyStanceAnim
// [0x00020002] 
struct USFXCustomAction_MantleLookAt_execGetLoopBodyStanceAnim_Parms
{
	union { struct FBodyStance                         ReturnValue; };                                   		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

	 USFXCustomAction_MantleLookAt_execGetLoopBodyStanceAnim_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_MantleLookAt_execGetLoopBodyStanceAnim_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_MantleLookAt.GetStartBodyStanceAnim
// [0x00020002] 
struct USFXCustomAction_MantleLookAt_execGetStartBodyStanceAnim_Parms
{
	union { struct FBodyStance                         ReturnValue; };                                   		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

	 USFXCustomAction_MantleLookAt_execGetStartBodyStanceAnim_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_MantleLookAt_execGetStartBodyStanceAnim_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_CoverSlipLookAt.FlinchActionOverride
// [0x00020002] 
struct USFXCustomAction_CoverSlipLookAt_execFlinchActionOverride_Parms
{

	 USFXCustomAction_CoverSlipLookAt_execFlinchActionOverride_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_CoverSlipLookAt_execFlinchActionOverride_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_CoverSlipLookAt.GetUsedAnimNames
// [0x00422802] ( FUNC_Event )
struct USFXCustomAction_CoverSlipLookAt_eventGetUsedAnimNames_Parms
{
	union { TArray<struct SFXName>                     UsedAnims; };                                     		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

	 USFXCustomAction_CoverSlipLookAt_eventGetUsedAnimNames_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_CoverSlipLookAt_eventGetUsedAnimNames_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_CoverSlipLookAt.GetEndBodyStanceAnim
// [0x00020002] 
struct USFXCustomAction_CoverSlipLookAt_execGetEndBodyStanceAnim_Parms
{
	union { struct FBodyStance                         ReturnValue; };                                   		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

	 USFXCustomAction_CoverSlipLookAt_execGetEndBodyStanceAnim_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_CoverSlipLookAt_execGetEndBodyStanceAnim_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_CoverSlipLookAt.GetLoopBodyStanceAnim
// [0x00020002] 
struct USFXCustomAction_CoverSlipLookAt_execGetLoopBodyStanceAnim_Parms
{
	union { struct FBodyStance                         ReturnValue; };                                   		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

	 USFXCustomAction_CoverSlipLookAt_execGetLoopBodyStanceAnim_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_CoverSlipLookAt_execGetLoopBodyStanceAnim_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_CoverSlipLookAt.GetStartBodyStanceAnim
// [0x00020002] 
struct USFXCustomAction_CoverSlipLookAt_execGetStartBodyStanceAnim_Parms
{
	union { struct FBodyStance                         ReturnValue; };                                   		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

	 USFXCustomAction_CoverSlipLookAt_execGetStartBodyStanceAnim_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_CoverSlipLookAt_execGetStartBodyStanceAnim_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_StdCoverSlipLookAt.FlinchActionOverride
// [0x00020002] 
struct USFXCustomAction_StdCoverSlipLookAt_execFlinchActionOverride_Parms
{

	 USFXCustomAction_StdCoverSlipLookAt_execFlinchActionOverride_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_StdCoverSlipLookAt_execFlinchActionOverride_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_StdCoverSlipLookAt.GetUsedAnimNames
// [0x00422802] ( FUNC_Event )
struct USFXCustomAction_StdCoverSlipLookAt_eventGetUsedAnimNames_Parms
{
	union { TArray<struct SFXName>                     UsedAnims; };                                     		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

	 USFXCustomAction_StdCoverSlipLookAt_eventGetUsedAnimNames_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_StdCoverSlipLookAt_eventGetUsedAnimNames_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_StdCoverSlipLookAt.GetEndBodyStanceAnim
// [0x00020002] 
struct USFXCustomAction_StdCoverSlipLookAt_execGetEndBodyStanceAnim_Parms
{
	union { struct FBodyStance                         ReturnValue; };                                   		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

	 USFXCustomAction_StdCoverSlipLookAt_execGetEndBodyStanceAnim_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_StdCoverSlipLookAt_execGetEndBodyStanceAnim_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_StdCoverSlipLookAt.GetLoopBodyStanceAnim
// [0x00020002] 
struct USFXCustomAction_StdCoverSlipLookAt_execGetLoopBodyStanceAnim_Parms
{
	union { struct FBodyStance                         ReturnValue; };                                   		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

	 USFXCustomAction_StdCoverSlipLookAt_execGetLoopBodyStanceAnim_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_StdCoverSlipLookAt_execGetLoopBodyStanceAnim_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_StdCoverSlipLookAt.GetStartBodyStanceAnim
// [0x00020002] 
struct USFXCustomAction_StdCoverSlipLookAt_execGetStartBodyStanceAnim_Parms
{
	union { struct FBodyStance                         ReturnValue; };                                   		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

	 USFXCustomAction_StdCoverSlipLookAt_execGetStartBodyStanceAnim_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_StdCoverSlipLookAt_execGetStartBodyStanceAnim_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_SwatTurnLookAt.FlinchActionOverride
// [0x00020002] 
struct USFXCustomAction_SwatTurnLookAt_execFlinchActionOverride_Parms
{

	 USFXCustomAction_SwatTurnLookAt_execFlinchActionOverride_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_SwatTurnLookAt_execFlinchActionOverride_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_SwatTurnLookAt.GetUsedAnimNames
// [0x00422802] ( FUNC_Event )
struct USFXCustomAction_SwatTurnLookAt_eventGetUsedAnimNames_Parms
{
	union { TArray<struct SFXName>                     UsedAnims; };                                     		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

	 USFXCustomAction_SwatTurnLookAt_eventGetUsedAnimNames_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_SwatTurnLookAt_eventGetUsedAnimNames_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_SwatTurnLookAt.GetEndBodyStanceAnim
// [0x00020002] 
struct USFXCustomAction_SwatTurnLookAt_execGetEndBodyStanceAnim_Parms
{
	union { struct FBodyStance                         ReturnValue; };                                   		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

	 USFXCustomAction_SwatTurnLookAt_execGetEndBodyStanceAnim_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_SwatTurnLookAt_execGetEndBodyStanceAnim_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_SwatTurnLookAt.GetLoopBodyStanceAnim
// [0x00020002] 
struct USFXCustomAction_SwatTurnLookAt_execGetLoopBodyStanceAnim_Parms
{
	union { struct FBodyStance                         ReturnValue; };                                   		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

	 USFXCustomAction_SwatTurnLookAt_execGetLoopBodyStanceAnim_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_SwatTurnLookAt_execGetLoopBodyStanceAnim_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_SwatTurnLookAt.GetStartBodyStanceAnim
// [0x00020002] 
struct USFXCustomAction_SwatTurnLookAt_execGetStartBodyStanceAnim_Parms
{
	union { struct FBodyStance                         ReturnValue; };                                   		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

	 USFXCustomAction_SwatTurnLookAt_execGetStartBodyStanceAnim_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_SwatTurnLookAt_execGetStartBodyStanceAnim_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_StdSwatTurnLookAt.FlinchActionOverride
// [0x00020002] 
struct USFXCustomAction_StdSwatTurnLookAt_execFlinchActionOverride_Parms
{

	 USFXCustomAction_StdSwatTurnLookAt_execFlinchActionOverride_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_StdSwatTurnLookAt_execFlinchActionOverride_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_StdSwatTurnLookAt.GetUsedAnimNames
// [0x00422802] ( FUNC_Event )
struct USFXCustomAction_StdSwatTurnLookAt_eventGetUsedAnimNames_Parms
{
	union { TArray<struct SFXName>                     UsedAnims; };                                     		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

	 USFXCustomAction_StdSwatTurnLookAt_eventGetUsedAnimNames_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_StdSwatTurnLookAt_eventGetUsedAnimNames_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_StdSwatTurnLookAt.GetEndBodyStanceAnim
// [0x00020002] 
struct USFXCustomAction_StdSwatTurnLookAt_execGetEndBodyStanceAnim_Parms
{
	union { struct FBodyStance                         ReturnValue; };                                   		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

	 USFXCustomAction_StdSwatTurnLookAt_execGetEndBodyStanceAnim_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_StdSwatTurnLookAt_execGetEndBodyStanceAnim_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_StdSwatTurnLookAt.GetLoopBodyStanceAnim
// [0x00020002] 
struct USFXCustomAction_StdSwatTurnLookAt_execGetLoopBodyStanceAnim_Parms
{
	union { struct FBodyStance                         ReturnValue; };                                   		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

	 USFXCustomAction_StdSwatTurnLookAt_execGetLoopBodyStanceAnim_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_StdSwatTurnLookAt_execGetLoopBodyStanceAnim_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_StdSwatTurnLookAt.GetStartBodyStanceAnim
// [0x00020002] 
struct USFXCustomAction_StdSwatTurnLookAt_execGetStartBodyStanceAnim_Parms
{
	union { struct FBodyStance                         ReturnValue; };                                   		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

	 USFXCustomAction_StdSwatTurnLookAt_execGetStartBodyStanceAnim_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_StdSwatTurnLookAt_execGetStartBodyStanceAnim_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_GapJump.NotifyBump
// [0x00020002] 
struct USFXCustomAction_GapJump_execNotifyBump_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitNormal; };                                     		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 OtherPawn;                                        		// 0x0018 (0x0008) [0x0000000000000000]              
	// union { struct FVector                          Dir; };                                           		// 0x0020 (0x000C) [0x0000000000000000]              

	 USFXCustomAction_GapJump_execNotifyBump_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_GapJump_execNotifyBump_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_GapJump.EndThisCustomAction
// [0x00020002] 
struct USFXCustomAction_GapJump_execEndThisCustomAction_Parms
{

	 USFXCustomAction_GapJump_execEndThisCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_GapJump_execEndThisCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_GapJump.RemoveBlockingEndPoints
// [0x00020002] 
struct USFXCustomAction_GapJump_execRemoveBlockingEndPoints_Parms
{
	// class USFXCustomReachSpec*                      CustomReachSpec;                                  		// 0x0000 (0x0008) [0x0000000000000000]              

	 USFXCustomAction_GapJump_execRemoveBlockingEndPoints_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_GapJump_execRemoveBlockingEndPoints_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_GapJump.BlockMoveEndPoints
// [0x00020002] 
struct USFXCustomAction_GapJump_execBlockMoveEndPoints_Parms
{
	// class USFXCustomReachSpec*                      CustomReachSpec;                                  		// 0x0000 (0x0008) [0x0000000000000000]              

	 USFXCustomAction_GapJump_execBlockMoveEndPoints_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_GapJump_execBlockMoveEndPoints_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_GapJump.BodyStanceAnimEndNotification
// [0x00020002] 
struct USFXCustomAction_GapJump_execBodyStanceAnimEndNotification_Parms
{
	class UAnimNodeSequence*                           SeqNode;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              PlayedTime;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ExcessTime;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 USFXCustomAction_GapJump_execBodyStanceAnimEndNotification_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_GapJump_execBodyStanceAnimEndNotification_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_GapJump.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_GapJump_execStopCustomAction_Parms
{

	 USFXCustomAction_GapJump_execStopCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_GapJump_execStopCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_GapJump.StartAnimation
// [0x00020002] 
struct USFXCustomAction_GapJump_execStartAnimation_Parms
{

	 USFXCustomAction_GapJump_execStartAnimation_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_GapJump_execStartAnimation_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_GapJump.ReachedPrecisePosition
// [0x00020002] 
struct USFXCustomAction_GapJump_execReachedPrecisePosition_Parms
{

	 USFXCustomAction_GapJump_execReachedPrecisePosition_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_GapJump_execReachedPrecisePosition_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_GapJump.AlignmentTimeout
// [0x00020002] 
struct USFXCustomAction_GapJump_execAlignmentTimeout_Parms
{

	 USFXCustomAction_GapJump_execAlignmentTimeout_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_GapJump_execAlignmentTimeout_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_GapJump.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_GapJump_execStartCustomAction_Parms
{
	// class USFXJumpReachSpec*                        JumpSpec;                                         		// 0x0000 (0x0008) [0x0000000000000000]              

	 USFXCustomAction_GapJump_execStartCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_GapJump_execStartCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_GapJump.GetUsedAnimNames
// [0x00422802] ( FUNC_Event )
struct USFXCustomAction_GapJump_eventGetUsedAnimNames_Parms
{
	union { TArray<struct SFXName>                     UsedAnims; };                                     		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

	 USFXCustomAction_GapJump_eventGetUsedAnimNames_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_GapJump_eventGetUsedAnimNames_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_JumpDown.TickInput
// [0x00020002] 
struct USFXCustomAction_JumpDown_execTickInput_Parms
{
	class UBioPlayerInput*                             Input;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              DeltaTime;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 USFXCustomAction_JumpDown_execTickInput_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_JumpDown_execTickInput_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_JumpDown.PlayStartAnimation
// [0x00020002] 
struct USFXCustomAction_JumpDown_execPlayStartAnimation_Parms
{
	// class USFXCustomReachSpec*                      ReachSpec;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	// class ASFXNav_BlockingPathNode*                 StartPoint;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
	// class ASFXNav_BlockingPathNode*                 EndPoint;                                         		// 0x0010 (0x0008) [0x0000000000000000]              

	 USFXCustomAction_JumpDown_execPlayStartAnimation_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_JumpDown_execPlayStartAnimation_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PlayerMantleOverCover.GetEndAnim
// [0x00420002] 
struct USFXCustomAction_PlayerMantleOverCover_execGetEndAnim_Parms
{
	union { struct FBodyStance                         Stance; };                                        		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

	 USFXCustomAction_PlayerMantleOverCover_execGetEndAnim_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PlayerMantleOverCover_execGetEndAnim_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PlayerMantleOverCover.GetLoopAnim
// [0x00420002] 
struct USFXCustomAction_PlayerMantleOverCover_execGetLoopAnim_Parms
{
	union { struct FBodyStance                         Stance; };                                        		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

	 USFXCustomAction_PlayerMantleOverCover_execGetLoopAnim_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PlayerMantleOverCover_execGetLoopAnim_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PlayerMantleOverCover.GetStartAnim
// [0x00420002] 
struct USFXCustomAction_PlayerMantleOverCover_execGetStartAnim_Parms
{
	union { struct FBodyStance                         Stance; };                                        		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

	 USFXCustomAction_PlayerMantleOverCover_execGetStartAnim_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PlayerMantleOverCover_execGetStartAnim_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PlayerMantleOverCover.GetUsedAnimNames
// [0x00422802] ( FUNC_Event )
struct USFXCustomAction_PlayerMantleOverCover_eventGetUsedAnimNames_Parms
{
	union { TArray<struct SFXName>                     UsedAnims; };                                     		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

	 USFXCustomAction_PlayerMantleOverCover_eventGetUsedAnimNames_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PlayerMantleOverCover_eventGetUsedAnimNames_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PlayerMantleOverCover.BodyStanceAnimEndNotification
// [0x00020002] 
struct USFXCustomAction_PlayerMantleOverCover_execBodyStanceAnimEndNotification_Parms
{
	class UAnimNodeSequence*                           SeqNode;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              PlayedTime;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ExcessTime;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 USFXCustomAction_PlayerMantleOverCover_execBodyStanceAnimEndNotification_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PlayerMantleOverCover_execBodyStanceAnimEndNotification_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PlayerMantleOverCover.TickCustomAction
// [0x00020802] ( FUNC_Event )
struct USFXCustomAction_PlayerMantleOverCover_eventTickCustomAction_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// union { struct FRotator                         PawnRotation; };                                  		// 0x0004 (0x000C) [0x0000000000000000]              

	 USFXCustomAction_PlayerMantleOverCover_eventTickCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PlayerMantleOverCover_eventTickCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PlayerMantleOverCover.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_PlayerMantleOverCover_execStopCustomAction_Parms
{

	 USFXCustomAction_PlayerMantleOverCover_execStopCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PlayerMantleOverCover_execStopCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PlayerMantleOverCover.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_PlayerMantleOverCover_execStartCustomAction_Parms
{
	// unsigned long                                   bWasStorming;                                     		// 0x0000 (0x0004) [0x0000000000000000]              

	 USFXCustomAction_PlayerMantleOverCover_execStartCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PlayerMantleOverCover_execStartCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PlayerMantleUp.ClientDoCustomAction
// [0x00024002] 
struct USFXCustomAction_PlayerMantleUp_execClientDoCustomAction_Parms
{
	unsigned long                                      bForced;                                          		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 USFXCustomAction_PlayerMantleUp_execClientDoCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PlayerMantleUp_execClientDoCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PlayerMantleUp.ServerStartCustomAction
// [0x00024002] 
struct USFXCustomAction_PlayerMantleUp_execServerStartCustomAction_Parms
{
	int                                                NewAction;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ABioPawn*                                    Sync;                                             		// 0x0004 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                NewPowerAction;                                   		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 USFXCustomAction_PlayerMantleUp_execServerStartCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PlayerMantleUp_execServerStartCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PlayerMantleUp.Replicate
// [0x00020002] 
struct USFXCustomAction_PlayerMantleUp_execReplicate_Parms
{

	 USFXCustomAction_PlayerMantleUp_execReplicate_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PlayerMantleUp_execReplicate_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PlayerMantleUp.GetBodyStanceAnim
// [0x00020002] 
struct USFXCustomAction_PlayerMantleUp_execGetBodyStanceAnim_Parms
{
	union { struct FBodyStance                         ReturnValue; };                                   		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

	 USFXCustomAction_PlayerMantleUp_execGetBodyStanceAnim_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PlayerMantleUp_execGetBodyStanceAnim_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PlayerMantleUp.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_PlayerMantleUp_execStopCustomAction_Parms
{

	 USFXCustomAction_PlayerMantleUp_execStopCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PlayerMantleUp_execStopCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PlayerMantleUp.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_PlayerMantleUp_execStartCustomAction_Parms
{

	 USFXCustomAction_PlayerMantleUp_execStartCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PlayerMantleUp_execStartCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PlayerMantleUp.InternalCanDoCustomAction
// [0x00880002] 
struct USFXCustomAction_PlayerMantleUp_execInternalCanDoCustomAction_Parms
{
	class ABioPawn*                                    SyncPawn;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bForced;                                          		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// union { struct FCovPosInfo                      FoundCover; };                                    		// 0x0010 (0x0038) [0x0000000000000000]              

	 USFXCustomAction_PlayerMantleUp_execInternalCanDoCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PlayerMantleUp_execInternalCanDoCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PlayerMantleUp.GetUsedAnimNames
// [0x00422802] ( FUNC_Event )
struct USFXCustomAction_PlayerMantleUp_eventGetUsedAnimNames_Parms
{
	union { TArray<struct SFXName>                     UsedAnims; };                                     		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

	 USFXCustomAction_PlayerMantleUp_eventGetUsedAnimNames_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PlayerMantleUp_eventGetUsedAnimNames_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_SimpleMoveBase.ClientDoCustomAction
// [0x00024002] 
struct USFXCustomAction_SimpleMoveBase_execClientDoCustomAction_Parms
{
	unsigned long                                      bForced;                                          		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 USFXCustomAction_SimpleMoveBase_execClientDoCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_SimpleMoveBase_execClientDoCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_SimpleMoveBase.Replicate
// [0x00020002] 
struct USFXCustomAction_SimpleMoveBase_execReplicate_Parms
{

	 USFXCustomAction_SimpleMoveBase_execReplicate_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_SimpleMoveBase_execReplicate_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_SimpleMoveBase.CanBeInterrupted
// [0x00020002] 
struct USFXCustomAction_SimpleMoveBase_execCanBeInterrupted_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXCustomAction_SimpleMoveBase_execCanBeInterrupted_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_SimpleMoveBase_execCanBeInterrupted_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_SimpleMoveBase.DestTimeout
// [0x00020002] 
struct USFXCustomAction_SimpleMoveBase_execDestTimeout_Parms
{

	 USFXCustomAction_SimpleMoveBase_execDestTimeout_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_SimpleMoveBase_execDestTimeout_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_SimpleMoveBase.BodyStanceAnimEndNotification
// [0x00020002] 
struct USFXCustomAction_SimpleMoveBase_execBodyStanceAnimEndNotification_Parms
{
	class UAnimNodeSequence*                           SeqNode;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              PlayedTime;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ExcessTime;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 USFXCustomAction_SimpleMoveBase_execBodyStanceAnimEndNotification_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_SimpleMoveBase_execBodyStanceAnimEndNotification_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_SimpleMoveBase.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_SimpleMoveBase_execStopCustomAction_Parms
{
	// union { struct FBodyStance                      BS_ToPlay; };                                     		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

	 USFXCustomAction_SimpleMoveBase_execStopCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_SimpleMoveBase_execStopCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_SimpleMoveBase.PlayStartAnimation
// [0x00020002] 
struct USFXCustomAction_SimpleMoveBase_execPlayStartAnimation_Parms
{
	// float                                           DistToEnd;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           RootMotionScaleFactor;                            		// 0x0004 (0x0004) [0x0000000000000000]              
	// union { struct FBodyStance                      BS_ToPlay; };                                     		// 0x0008 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

	 USFXCustomAction_SimpleMoveBase_execPlayStartAnimation_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_SimpleMoveBase_execPlayStartAnimation_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_SimpleMoveBase.GetBodyStanceAnim
// [0x00020002] 
struct USFXCustomAction_SimpleMoveBase_execGetBodyStanceAnim_Parms
{
	union { struct FBodyStance                         ReturnValue; };                                   		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

	 USFXCustomAction_SimpleMoveBase_execGetBodyStanceAnim_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_SimpleMoveBase_execGetBodyStanceAnim_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_SimpleMoveBase.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_SimpleMoveBase_execStartCustomAction_Parms
{
	// class ANavigationPoint*                         Start;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// float                                           RotYaw;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// union { struct FRotator                         NewRotation; };                                   		// 0x000C (0x000C) [0x0000000000000000]              

	 USFXCustomAction_SimpleMoveBase_execStartCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_SimpleMoveBase_execStartCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_SimpleMoveBase.InternalCanDoCustomAction
// [0x00080002] 
struct USFXCustomAction_SimpleMoveBase_execInternalCanDoCustomAction_Parms
{
	class ABioPawn*                                    SyncPawn;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bForced;                                          		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXCustomAction_SimpleMoveBase_execInternalCanDoCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_SimpleMoveBase_execInternalCanDoCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_SimpleMoveBase.RemoveBlockingEndPoints
// [0x00020002] 
struct USFXCustomAction_SimpleMoveBase_execRemoveBlockingEndPoints_Parms
{
	// class USFXCustomReachSpec*                      CustomReachSpec;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
	// class ANavigationPoint*                         EndNav;                                           		// 0x0008 (0x0008) [0x0000000000000000]              

	 USFXCustomAction_SimpleMoveBase_execRemoveBlockingEndPoints_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_SimpleMoveBase_execRemoveBlockingEndPoints_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_SimpleMoveBase.BlockMoveEndPoints
// [0x00020002] 
struct USFXCustomAction_SimpleMoveBase_execBlockMoveEndPoints_Parms
{
	// class USFXCustomReachSpec*                      CustomReachSpec;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
	// class ANavigationPoint*                         EndNav;                                           		// 0x0008 (0x0008) [0x0000000000000000]              

	 USFXCustomAction_SimpleMoveBase_execBlockMoveEndPoints_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_SimpleMoveBase_execBlockMoveEndPoints_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_SimpleMoveBase.ReachedPrecisePosition
// [0x00020802] ( FUNC_Event )
struct USFXCustomAction_SimpleMoveBase_eventReachedPrecisePosition_Parms
{

	 USFXCustomAction_SimpleMoveBase_eventReachedPrecisePosition_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_SimpleMoveBase_eventReachedPrecisePosition_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_SimpleMoveBase.GetUsedAnimNames
// [0x00422802] ( FUNC_Event )
struct USFXCustomAction_SimpleMoveBase_eventGetUsedAnimNames_Parms
{
	union { TArray<struct SFXName>                     UsedAnims; };                                     		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

	 USFXCustomAction_SimpleMoveBase_eventGetUsedAnimNames_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_SimpleMoveBase_eventGetUsedAnimNames_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PlayerCoverSlipLeft.EndThisCustomAction
// [0x00020002] 
struct USFXCustomAction_PlayerCoverSlipLeft_execEndThisCustomAction_Parms
{

	 USFXCustomAction_PlayerCoverSlipLeft_execEndThisCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PlayerCoverSlipLeft_execEndThisCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PlayerCoverSlipLeft.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_PlayerCoverSlipLeft_execStartCustomAction_Parms
{

	 USFXCustomAction_PlayerCoverSlipLeft_execStartCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PlayerCoverSlipLeft_execStartCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PlayerCoverSlipLeftStanding.EndThisCustomAction
// [0x00020002] 
struct USFXCustomAction_PlayerCoverSlipLeftStanding_execEndThisCustomAction_Parms
{

	 USFXCustomAction_PlayerCoverSlipLeftStanding_execEndThisCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PlayerCoverSlipLeftStanding_execEndThisCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PlayerCoverSlipLeftStanding.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_PlayerCoverSlipLeftStanding_execStartCustomAction_Parms
{

	 USFXCustomAction_PlayerCoverSlipLeftStanding_execStartCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PlayerCoverSlipLeftStanding_execStartCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PlayerCoverSlipRight.EndThisCustomAction
// [0x00020002] 
struct USFXCustomAction_PlayerCoverSlipRight_execEndThisCustomAction_Parms
{

	 USFXCustomAction_PlayerCoverSlipRight_execEndThisCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PlayerCoverSlipRight_execEndThisCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PlayerCoverSlipRight.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_PlayerCoverSlipRight_execStartCustomAction_Parms
{

	 USFXCustomAction_PlayerCoverSlipRight_execStartCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PlayerCoverSlipRight_execStartCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PlayerCoverSlipRightStanding.EndThisCustomAction
// [0x00020002] 
struct USFXCustomAction_PlayerCoverSlipRightStanding_execEndThisCustomAction_Parms
{

	 USFXCustomAction_PlayerCoverSlipRightStanding_execEndThisCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PlayerCoverSlipRightStanding_execEndThisCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PlayerCoverSlipRightStanding.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_PlayerCoverSlipRightStanding_execStartCustomAction_Parms
{

	 USFXCustomAction_PlayerCoverSlipRightStanding_execStartCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PlayerCoverSlipRightStanding_execStartCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PlayerLadderClimbUp.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_PlayerLadderClimbUp_execStopCustomAction_Parms
{

	 USFXCustomAction_PlayerLadderClimbUp_execStopCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PlayerLadderClimbUp_execStopCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PlayerLadderClimbUp.PreAlignPawnLocation
// [0x00020002] 
struct USFXCustomAction_PlayerLadderClimbUp_execPreAlignPawnLocation_Parms
{
	// class ANavigationPoint*                         StartNode;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	// class ANavigationPoint*                         EndNode;                                          		// 0x0008 (0x0008) [0x0000000000000000]              
	// union { struct FVector                          PlayerOffset; };                                  		// 0x0010 (0x000C) [0x0000000000000000]              

	 USFXCustomAction_PlayerLadderClimbUp_execPreAlignPawnLocation_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PlayerLadderClimbUp_execPreAlignPawnLocation_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PlayerLadderClimbUp.SetMoveStage
// [0x00020002] 
struct USFXCustomAction_PlayerLadderClimbUp_execSetMoveStage_Parms
{
	unsigned char                                      NextStage;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// class ANavigationPoint*                         StartNode;                                        		// 0x0004 (0x0008) [0x0000000000000000]              
	// class ANavigationPoint*                         EndNode;                                          		// 0x000C (0x0008) [0x0000000000000000]              
	// union { struct FVector                          ToEnd; };                                         		// 0x0014 (0x000C) [0x0000000000000000]              
	// union { struct FVector                          StartLocation; };                                 		// 0x0020 (0x000C) [0x0000000000000000]              

	 USFXCustomAction_PlayerLadderClimbUp_execSetMoveStage_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PlayerLadderClimbUp_execSetMoveStage_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PlayerLadderClimbUp.TickCustomAction
// [0x00020002] 
struct USFXCustomAction_PlayerLadderClimbUp_execTickCustomAction_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ANavigationPoint*                         StartNode;                                        		// 0x0004 (0x0008) [0x0000000000000000]              
	// class ANavigationPoint*                         EndNode;                                          		// 0x000C (0x0008) [0x0000000000000000]              

	 USFXCustomAction_PlayerLadderClimbUp_execTickCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PlayerLadderClimbUp_execTickCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PlayerLadderClimbUp.SyncRotation
// [0x00020002] 
struct USFXCustomAction_PlayerLadderClimbUp_execSyncRotation_Parms
{
	float                                              Alpha;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ANavigationPoint*                         StartNode;                                        		// 0x0004 (0x0008) [0x0000000000000000]              
	// class ANavigationPoint*                         EndNode;                                          		// 0x000C (0x0008) [0x0000000000000000]              
	// union { struct FVector                          ToEnd2D; };                                       		// 0x0014 (0x000C) [0x0000000000000000]              
	// union { struct FRotator                         R; };                                             		// 0x0020 (0x000C) [0x0000000000000000]              

	 USFXCustomAction_PlayerLadderClimbUp_execSyncRotation_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PlayerLadderClimbUp_execSyncRotation_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PlayerLadderClimbUp.SyncJumpEntrance
// [0x00020002] 
struct USFXCustomAction_PlayerLadderClimbUp_execSyncJumpEntrance_Parms
{
	float                                              Alpha;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// union { struct FVector                          PlayerPos; };                                     		// 0x0004 (0x000C) [0x0000000000000000]              

	 USFXCustomAction_PlayerLadderClimbUp_execSyncJumpEntrance_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PlayerLadderClimbUp_execSyncJumpEntrance_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PlayerLadderClimbUp.TickAlignment
// [0x00020002] 
struct USFXCustomAction_PlayerLadderClimbUp_execTickAlignment_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// union { struct FVector                          PlayerOffset; };                                  		// 0x0004 (0x000C) [0x0000000000000000]              
	// float                                           Alpha;                                            		// 0x0010 (0x0004) [0x0000000000000000]              

	 USFXCustomAction_PlayerLadderClimbUp_execTickAlignment_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PlayerLadderClimbUp_execTickAlignment_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PlayerLadderClimbUp.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_PlayerLadderClimbUp_execStartCustomAction_Parms
{
	// class ASFXNav_LadderNode*                       LadderNode;                                       		// 0x0000 (0x0008) [0x0000000000000000]              

	 USFXCustomAction_PlayerLadderClimbUp_execStartCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PlayerLadderClimbUp_execStartCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PlayerLadderClimbUp.TickInput
// [0x00020002] 
struct USFXCustomAction_PlayerLadderClimbUp_execTickInput_Parms
{
	class UBioPlayerInput*                             Input;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              DeltaTime;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 USFXCustomAction_PlayerLadderClimbUp_execTickInput_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PlayerLadderClimbUp_execTickInput_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PlayerLadderClimbUp.GetUsedAnimNames
// [0x00422802] ( FUNC_Event )
struct USFXCustomAction_PlayerLadderClimbUp_eventGetUsedAnimNames_Parms
{
	union { TArray<struct SFXName>                     UsedAnims; };                                     		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

	 USFXCustomAction_PlayerLadderClimbUp_eventGetUsedAnimNames_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PlayerLadderClimbUp_eventGetUsedAnimNames_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PlayerLadderClimbDown.TickInput
// [0x00020002] 
struct USFXCustomAction_PlayerLadderClimbDown_execTickInput_Parms
{
	class UBioPlayerInput*                             Input;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              DeltaTime;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 USFXCustomAction_PlayerLadderClimbDown_execTickInput_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PlayerLadderClimbDown_execTickInput_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PlayerEvadeLeft.RollOverride
// [0x00020002] 
struct USFXCustomAction_PlayerEvadeLeft_execRollOverride_Parms
{

	 USFXCustomAction_PlayerEvadeLeft_execRollOverride_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PlayerEvadeLeft_execRollOverride_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PlayerEvadeLeft.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_PlayerEvadeLeft_execStartCustomAction_Parms
{
	// union { struct FVector                          ToEnd2D; };                                       		// 0x0000 (0x000C) [0x0000000000000000]              

	 USFXCustomAction_PlayerEvadeLeft_execStartCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PlayerEvadeLeft_execStartCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PlayerEvadeLeft.InternalCanDoCustomAction
// [0x00080002] 
struct USFXCustomAction_PlayerEvadeLeft_execInternalCanDoCustomAction_Parms
{
	class ABioPawn*                                    SyncPawn;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bForced;                                          		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXCustomAction_PlayerEvadeLeft_execInternalCanDoCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PlayerEvadeLeft_execInternalCanDoCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PlayerEvadeRight.RollOverride
// [0x00020002] 
struct USFXCustomAction_PlayerEvadeRight_execRollOverride_Parms
{

	 USFXCustomAction_PlayerEvadeRight_execRollOverride_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PlayerEvadeRight_execRollOverride_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PlayerEvadeRight.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_PlayerEvadeRight_execStartCustomAction_Parms
{
	// union { struct FVector                          ToEnd2D; };                                       		// 0x0000 (0x000C) [0x0000000000000000]              

	 USFXCustomAction_PlayerEvadeRight_execStartCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PlayerEvadeRight_execStartCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PlayerEvadeRight.InternalCanDoCustomAction
// [0x00080002] 
struct USFXCustomAction_PlayerEvadeRight_execInternalCanDoCustomAction_Parms
{
	class ABioPawn*                                    SyncPawn;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bForced;                                          		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXCustomAction_PlayerEvadeRight_execInternalCanDoCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PlayerEvadeRight_execInternalCanDoCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PlayerEvadeForward.ClientDoCustomActionImpact
// [0x00024002] 
struct USFXCustomAction_PlayerEvadeForward_execClientDoCustomActionImpact_Parms
{
	class AActor*                                      oActor;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ImpactCount;                                      		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bFirstTarget;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	union { struct FVector                             HitLocation; };                                   		// 0x0010 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	union { struct FVector                             HitNormal; };                                     		// 0x001C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                CustomActionReactionType;                         		// 0x0028 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class USFXModule_Timeline*                      TimeMod;                                          		// 0x002C (0x0008) [0x0000000000000000]              
	// class UBioCustomAction*                         Action;                                           		// 0x0034 (0x0008) [0x0000000000000000]              

	 USFXCustomAction_PlayerEvadeForward_execClientDoCustomActionImpact_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PlayerEvadeForward_execClientDoCustomActionImpact_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PlayerEvadeForward.RollOverride
// [0x00020002] 
struct USFXCustomAction_PlayerEvadeForward_execRollOverride_Parms
{

	 USFXCustomAction_PlayerEvadeForward_execRollOverride_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PlayerEvadeForward_execRollOverride_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PlayerEvadeForward.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_PlayerEvadeForward_execStopCustomAction_Parms
{

	 USFXCustomAction_PlayerEvadeForward_execStopCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PlayerEvadeForward_execStopCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PlayerEvadeForward.TurnOnHitWall
// [0x00020002] 
struct USFXCustomAction_PlayerEvadeForward_execTurnOnHitWall_Parms
{

	 USFXCustomAction_PlayerEvadeForward_execTurnOnHitWall_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PlayerEvadeForward_execTurnOnHitWall_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PlayerEvadeForward.NotifyHitWall
// [0x00020002] 
struct USFXCustomAction_PlayerEvadeForward_execNotifyHitWall_Parms
{
	union { struct FVector                             HitNormal; };                                     		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Wall;                                             		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPlayerController*                     oPlayer;                                          		// 0x0018 (0x0008) [0x0000000000000000]              

	 USFXCustomAction_PlayerEvadeForward_execNotifyHitWall_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PlayerEvadeForward_execNotifyHitWall_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PlayerEvadeForward.EndThisCustomAction
// [0x00020002] 
struct USFXCustomAction_PlayerEvadeForward_execEndThisCustomAction_Parms
{

	 USFXCustomAction_PlayerEvadeForward_execEndThisCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PlayerEvadeForward_execEndThisCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PlayerEvadeForward.SyncRotation
// [0x00020002] 
struct USFXCustomAction_PlayerEvadeForward_execSyncRotation_Parms
{
	float                                              Alpha;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             ToEnd2D; };                                       		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// union { struct FRotator                         R; };                                             		// 0x0010 (0x000C) [0x0000000000000000]              

	 USFXCustomAction_PlayerEvadeForward_execSyncRotation_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PlayerEvadeForward_execSyncRotation_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PlayerEvadeForward.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_PlayerEvadeForward_execStartCustomAction_Parms
{
	// union { struct FVector                          ToEnd2D; };                                       		// 0x0000 (0x000C) [0x0000000000000000]              

	 USFXCustomAction_PlayerEvadeForward_execStartCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PlayerEvadeForward_execStartCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PlayerEvadeForward.InternalCanDoCustomAction
// [0x00080002] 
struct USFXCustomAction_PlayerEvadeForward_execInternalCanDoCustomAction_Parms
{
	class ABioPawn*                                    SyncPawn;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bForced;                                          		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXCustomAction_PlayerEvadeForward_execInternalCanDoCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PlayerEvadeForward_execInternalCanDoCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PlayerEvadeBackwards.ClientDoCustomActionImpact
// [0x00024002] 
struct USFXCustomAction_PlayerEvadeBackwards_execClientDoCustomActionImpact_Parms
{
	class AActor*                                      oActor;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ImpactCount;                                      		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bFirstTarget;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	union { struct FVector                             HitLocation; };                                   		// 0x0010 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	union { struct FVector                             HitNormal; };                                     		// 0x001C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                CustomActionReactionType;                         		// 0x0028 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class USFXModule_Timeline*                      TimeMod;                                          		// 0x002C (0x0008) [0x0000000000000000]              
	// class UBioCustomAction*                         Action;                                           		// 0x0034 (0x0008) [0x0000000000000000]              

	 USFXCustomAction_PlayerEvadeBackwards_execClientDoCustomActionImpact_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PlayerEvadeBackwards_execClientDoCustomActionImpact_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PlayerEvadeBackwards.RollOverride
// [0x00020002] 
struct USFXCustomAction_PlayerEvadeBackwards_execRollOverride_Parms
{

	 USFXCustomAction_PlayerEvadeBackwards_execRollOverride_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PlayerEvadeBackwards_execRollOverride_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PlayerEvadeBackwards.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_PlayerEvadeBackwards_execStopCustomAction_Parms
{

	 USFXCustomAction_PlayerEvadeBackwards_execStopCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PlayerEvadeBackwards_execStopCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PlayerEvadeBackwards.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_PlayerEvadeBackwards_execStartCustomAction_Parms
{
	// union { struct FVector                          ToEnd2D; };                                       		// 0x0000 (0x000C) [0x0000000000000000]              

	 USFXCustomAction_PlayerEvadeBackwards_execStartCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PlayerEvadeBackwards_execStartCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PlayerEvadeBackwards.InternalCanDoCustomAction
// [0x00080002] 
struct USFXCustomAction_PlayerEvadeBackwards_execInternalCanDoCustomAction_Parms
{
	class ABioPawn*                                    SyncPawn;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bForced;                                          		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXCustomAction_PlayerEvadeBackwards_execInternalCanDoCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PlayerEvadeBackwards_execInternalCanDoCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_MantleMelee.EndThisCustomAction
// [0x00020002] 
struct USFXCustomAction_MantleMelee_execEndThisCustomAction_Parms
{

	 USFXCustomAction_MantleMelee_execEndThisCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_MantleMelee_execEndThisCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_MantleMelee.Breakout
// [0x00020002] 
struct USFXCustomAction_MantleMelee_execBreakout_Parms
{
	// class UBioPlayerInput*                          Input;                                            		// 0x0000 (0x0008) [0x0000000000000000]              

	 USFXCustomAction_MantleMelee_execBreakout_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_MantleMelee_execBreakout_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_MantleMelee.NotifyBump
// [0x00020002] 
struct USFXCustomAction_MantleMelee_execNotifyBump_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitNormal; };                                     		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXCustomAction_MantleMelee_execNotifyBump_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_MantleMelee_execNotifyBump_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_MantleMelee.ClientDoCustomActionImpact
// [0x00024002] 
struct USFXCustomAction_MantleMelee_execClientDoCustomActionImpact_Parms
{
	class AActor*                                      oActor;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ImpactCount;                                      		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bFirstTarget;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	union { struct FVector                             HitLocation; };                                   		// 0x0010 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	union { struct FVector                             HitNormal; };                                     		// 0x001C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                CustomActionReactionType;                         		// 0x0028 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class USFXModule_Timeline*                      TimeMod;                                          		// 0x002C (0x0008) [0x0000000000000000]              
	// class UBioCustomAction*                         Action;                                           		// 0x0034 (0x0008) [0x0000000000000000]              

	 USFXCustomAction_MantleMelee_execClientDoCustomActionImpact_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_MantleMelee_execClientDoCustomActionImpact_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_MantleMelee.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_MantleMelee_execStopCustomAction_Parms
{

	 USFXCustomAction_MantleMelee_execStopCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_MantleMelee_execStopCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_MantleMelee.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_MantleMelee_execStartCustomAction_Parms
{

	 USFXCustomAction_MantleMelee_execStartCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_MantleMelee_execStartCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_SyncCoverGrab.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_SyncCoverGrab_execStopCustomAction_Parms
{

	 USFXCustomAction_SyncCoverGrab_execStopCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_SyncCoverGrab_execStopCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_SyncCoverGrab.NonSyncedAction
// [0x00020002] 
struct USFXCustomAction_SyncCoverGrab_execNonSyncedAction_Parms
{

	 USFXCustomAction_SyncCoverGrab_execNonSyncedAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_SyncCoverGrab_execNonSyncedAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_SyncCoverGrab.SyncAttack
// [0x00020002] 
struct USFXCustomAction_SyncCoverGrab_execSyncAttack_Parms
{

	 USFXCustomAction_SyncCoverGrab_execSyncAttack_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_SyncCoverGrab_execSyncAttack_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_SyncCoverGrab.GetVictimAnim
// [0x00420002] 
struct USFXCustomAction_SyncCoverGrab_execGetVictimAnim_Parms
{
	union { struct FBodyStance                         Stance; };                                        		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

	 USFXCustomAction_SyncCoverGrab_execGetVictimAnim_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_SyncCoverGrab_execGetVictimAnim_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_SyncCoverGrab.GetAttackerAnim
// [0x00420002] 
struct USFXCustomAction_SyncCoverGrab_execGetAttackerAnim_Parms
{
	union { struct FBodyStance                         Stance; };                                        		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

	 USFXCustomAction_SyncCoverGrab_execGetAttackerAnim_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_SyncCoverGrab_execGetAttackerAnim_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_SyncCoverGrab.GetVictimPawn
// [0x00020002] 
struct USFXCustomAction_SyncCoverGrab_execGetVictimPawn_Parms
{
	class ABioPawn*                                    ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 FoundPawn;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 BestVictimPawn;                                   		// 0x0010 (0x0008) [0x0000000000000000]              
	// float                                           BestDistToPawnSq;                                 		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           PawnDistSq;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	// union { struct FVector                          VectToPawn; };                                    		// 0x0020 (0x000C) [0x0000000000000000]              
	// union { struct FVector                          VictimDest; };                                    		// 0x002C (0x000C) [0x0000000000000000]              

	 USFXCustomAction_SyncCoverGrab_execGetVictimPawn_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_SyncCoverGrab_execGetVictimPawn_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_SyncCoverGrab.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_SyncCoverGrab_execStartCustomAction_Parms
{
	// union { struct FVector                          CylLoc; };                                        		// 0x0000 (0x000C) [0x0000000000000000]              

	 USFXCustomAction_SyncCoverGrab_execStartCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_SyncCoverGrab_execStartCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_SyncCoverGrab.ShouldPlayMirrorAnim
// [0x00020002] 
struct USFXCustomAction_SyncCoverGrab_execShouldPlayMirrorAnim_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// union { struct FVector                          X; };                                             		// 0x0004 (0x000C) [0x0000000000000000]              
	// union { struct FVector                          Y; };                                             		// 0x0010 (0x000C) [0x0000000000000000]              
	// union { struct FVector                          Z; };                                             		// 0x001C (0x000C) [0x0000000000000000]              
	// union { struct FVector                          EndTrace; };                                      		// 0x0028 (0x000C) [0x0000000000000000]              
	// union { struct FVector                          Extent; };                                        		// 0x0034 (0x000C) [0x0000000000000000]              

	 USFXCustomAction_SyncCoverGrab_execShouldPlayMirrorAnim_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_SyncCoverGrab_execShouldPlayMirrorAnim_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_SyncCoverGrab.VerifyVictimDestIsClear
// [0x00020002] 
struct USFXCustomAction_SyncCoverGrab_execVerifyVictimDestIsClear_Parms
{
	class ABioPawn*                                    VictimPawn;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             DestinationPos; };                                		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// union { struct FVector                          StartTrace; };                                    		// 0x0018 (0x000C) [0x0000000000000000]              
	// union { struct FVector                          EndTrace; };                                      		// 0x0024 (0x000C) [0x0000000000000000]              
	// union { struct FVector                          HitLocation; };                                   		// 0x0030 (0x000C) [0x0000000000000000]              
	// union { struct FVector                          HitNormal; };                                     		// 0x003C (0x000C) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x0048 (0x0008) [0x0000000000000000]              
	// union { struct FVector                          Extent; };                                        		// 0x0050 (0x000C) [0x0000000000000000]              
	// class ABioPawn*                                 BlockingPawn;                                     		// 0x005C (0x0008) [0x0000000000000000]              

	 USFXCustomAction_SyncCoverGrab_execVerifyVictimDestIsClear_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_SyncCoverGrab_execVerifyVictimDestIsClear_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_SyncCoverGrab.InternalCanDoCustomAction
// [0x00080002] 
struct USFXCustomAction_SyncCoverGrab_execInternalCanDoCustomAction_Parms
{
	class ABioPawn*                                    SyncPawn;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bForced;                                          		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// union { struct FVector                          VictimDest; };                                    		// 0x0010 (0x000C) [0x0000000000000000]              

	 USFXCustomAction_SyncCoverGrab_execInternalCanDoCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_SyncCoverGrab_execInternalCanDoCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_SyncCoverGrab.StartMeleeAttack
// [0x00020002] 
struct USFXCustomAction_SyncCoverGrab_execStartMeleeAttack_Parms
{
	// class USFXSeqEvt_PerformedMeleeOverCover*       oMeleeEvent;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// class USequenceEvent*                           oSequenceEvent;                                   		// 0x0008 (0x0008) [0x0000000000000000]              

	 USFXCustomAction_SyncCoverGrab_execStartMeleeAttack_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_SyncCoverGrab_execStartMeleeAttack_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_SyncCoverMelee.MeleeImpact
// [0x00020002] 
struct USFXCustomAction_SyncCoverMelee_execMeleeImpact_Parms
{

	 USFXCustomAction_SyncCoverMelee_execMeleeImpact_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_SyncCoverMelee_execMeleeImpact_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_SyncCoverMelee.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_SyncCoverMelee_execStopCustomAction_Parms
{

	 USFXCustomAction_SyncCoverMelee_execStopCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_SyncCoverMelee_execStopCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_SyncCoverMelee.EndThisCustomAction
// [0x00020002] 
struct USFXCustomAction_SyncCoverMelee_execEndThisCustomAction_Parms
{
	// class ABioPlayerController*                     oPlayer;                                          		// 0x0000 (0x0008) [0x0000000000000000]              

	 USFXCustomAction_SyncCoverMelee_execEndThisCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_SyncCoverMelee_execEndThisCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_SyncCoverMelee.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_SyncCoverMelee_execStartCustomAction_Parms
{
	// class ASFXWeapon*                               Weapon;                                           		// 0x0000 (0x0008) [0x0000000000000000]              

	 USFXCustomAction_SyncCoverMelee_execStartCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_SyncCoverMelee_execStartCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_SyncCoverMelee.GetUsedAnimNames
// [0x00422802] ( FUNC_Event )
struct USFXCustomAction_SyncCoverMelee_eventGetUsedAnimNames_Parms
{
	union { TArray<struct SFXName>                     UsedAnims; };                                     		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

	 USFXCustomAction_SyncCoverMelee_eventGetUsedAnimNames_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_SyncCoverMelee_eventGetUsedAnimNames_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_CoverMeleeLeft.NonSyncedAction
// [0x00020002] 
struct USFXCustomAction_CoverMeleeLeft_execNonSyncedAction_Parms
{

	 USFXCustomAction_CoverMeleeLeft_execNonSyncedAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_CoverMeleeLeft_execNonSyncedAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_CoverMeleeRight.GetVictimPawn
// [0x00020002] 
struct USFXCustomAction_CoverMeleeRight_execGetVictimPawn_Parms
{
	class ABioPawn*                                    ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 FoundPawn;                                        		// 0x0008 (0x0008) [0x0000000000000000]              

	 USFXCustomAction_CoverMeleeRight_execGetVictimPawn_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_CoverMeleeRight_execGetVictimPawn_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_CoverMeleeRight.GetMeleeImpactParameters
// [0x00420002] 
struct USFXCustomAction_CoverMeleeRight_execGetMeleeImpactParameters_Parms
{
	union { struct FAreaEffectParameters               ImpactParams; };                                  		// 0x0000 (0x0020) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )

	 USFXCustomAction_CoverMeleeRight_execGetMeleeImpactParameters_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_CoverMeleeRight_execGetMeleeImpactParameters_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_CoverMeleeRight.NonSyncedAction
// [0x00020002] 
struct USFXCustomAction_CoverMeleeRight_execNonSyncedAction_Parms
{

	 USFXCustomAction_CoverMeleeRight_execNonSyncedAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_CoverMeleeRight_execNonSyncedAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_HvyCoverMeleeLeft.NonSyncedAction
// [0x00020002] 
struct USFXCustomAction_HvyCoverMeleeLeft_execNonSyncedAction_Parms
{

	 USFXCustomAction_HvyCoverMeleeLeft_execNonSyncedAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_HvyCoverMeleeLeft_execNonSyncedAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_HvyCoverMeleeRight.GetVictimPawn
// [0x00020002] 
struct USFXCustomAction_HvyCoverMeleeRight_execGetVictimPawn_Parms
{
	class ABioPawn*                                    ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 FoundPawn;                                        		// 0x0008 (0x0008) [0x0000000000000000]              

	 USFXCustomAction_HvyCoverMeleeRight_execGetVictimPawn_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_HvyCoverMeleeRight_execGetVictimPawn_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_HvyCoverMeleeRight.GetMeleeImpactParameters
// [0x00420002] 
struct USFXCustomAction_HvyCoverMeleeRight_execGetMeleeImpactParameters_Parms
{
	union { struct FAreaEffectParameters               ImpactParams; };                                  		// 0x0000 (0x0020) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )

	 USFXCustomAction_HvyCoverMeleeRight_execGetMeleeImpactParameters_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_HvyCoverMeleeRight_execGetMeleeImpactParameters_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_HvyCoverMeleeRight.NonSyncedAction
// [0x00020002] 
struct USFXCustomAction_HvyCoverMeleeRight_execNonSyncedAction_Parms
{

	 USFXCustomAction_HvyCoverMeleeRight_execNonSyncedAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_HvyCoverMeleeRight_execNonSyncedAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_RifleMeleeOne.StopMove
// [0x00020002] 
struct USFXCustomAction_RifleMeleeOne_execStopMove_Parms
{

	 USFXCustomAction_RifleMeleeOne_execStopMove_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_RifleMeleeOne_execStopMove_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_RifleMeleeOne.OnActorImpacted
// [0x00020002] 
struct USFXCustomAction_RifleMeleeOne_execOnActorImpacted_Parms
{
	unsigned char                                      Resistance;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitLocation; };                                   		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitNormal; };                                     		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0028 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bResult;                                          		// 0x002C (0x0004) [0x0000000000000000]              
	// class ASFXWeapon*                               Weapon;                                           		// 0x0030 (0x0008) [0x0000000000000000]              
	// class ASFXObjectPool*                           Pool;                                             		// 0x0038 (0x0008) [0x0000000000000000]              
	// class UParticleSystemComponent*                 ImpactPSC;                                        		// 0x0040 (0x0008) [0x0000000004000000]              ( CPF_EditInline )
	// class ABioPawn*                                 ImpactedPawn;                                     		// 0x0048 (0x0008) [0x0000000000000000]              

	 USFXCustomAction_RifleMeleeOne_execOnActorImpacted_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_RifleMeleeOne_execOnActorImpacted_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_RifleMeleeOne.ReplicateImpact
// [0x00024002] 
struct USFXCustomAction_RifleMeleeOne_execReplicateImpact_Parms
{
	class ABioPawn*                                    Target;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ImpactCount;                                      		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bFirstTarget;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	union { struct FVector                             HitLocation; };                                   		// 0x0010 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	union { struct FVector                             HitNormal; };                                     		// 0x001C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                CustomActionReactionType;                         		// 0x0028 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 USFXCustomAction_RifleMeleeOne_execReplicateImpact_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_RifleMeleeOne_execReplicateImpact_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_RifleMeleeOne.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_RifleMeleeOne_execStopCustomAction_Parms
{

	 USFXCustomAction_RifleMeleeOne_execStopCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_RifleMeleeOne_execStopCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_RifleMeleeOne.EndAction
// [0x00020002] 
struct USFXCustomAction_RifleMeleeOne_execEndAction_Parms
{

	 USFXCustomAction_RifleMeleeOne_execEndAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_RifleMeleeOne_execEndAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_RifleMeleeOne.HeavyMelee
// [0x00020002] 
struct USFXCustomAction_RifleMeleeOne_execHeavyMelee_Parms
{
	// class ABioPlayerController*                     BioPC;                                            		// 0x0000 (0x0008) [0x0000000000000000]              

	 USFXCustomAction_RifleMeleeOne_execHeavyMelee_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_RifleMeleeOne_execHeavyMelee_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_RifleMeleeOne.NoHeavyMelee
// [0x00020002] 
struct USFXCustomAction_RifleMeleeOne_execNoHeavyMelee_Parms
{

	 USFXCustomAction_RifleMeleeOne_execNoHeavyMelee_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_RifleMeleeOne_execNoHeavyMelee_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_RifleMeleeOne.DoRifleMeleeTwo
// [0x00020002] 
struct USFXCustomAction_RifleMeleeOne_execDoRifleMeleeTwo_Parms
{
	// class ABioPlayerController*                     BioPC;                                            		// 0x0000 (0x0008) [0x0000000000000000]              

	 USFXCustomAction_RifleMeleeOne_execDoRifleMeleeTwo_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_RifleMeleeOne_execDoRifleMeleeTwo_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_RifleMeleeOne.RifleMeleeSecondary
// [0x00020002] 
struct USFXCustomAction_RifleMeleeOne_execRifleMeleeSecondary_Parms
{

	 USFXCustomAction_RifleMeleeOne_execRifleMeleeSecondary_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_RifleMeleeOne_execRifleMeleeSecondary_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_RifleMeleeOne.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_RifleMeleeOne_execStartCustomAction_Parms
{

	 USFXCustomAction_RifleMeleeOne_execStartCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_RifleMeleeOne_execStartCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_RifleMeleeTwo.ReplicateImpact
// [0x00024002] 
struct USFXCustomAction_RifleMeleeTwo_execReplicateImpact_Parms
{
	class ABioPawn*                                    Target;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ImpactCount;                                      		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bFirstTarget;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	union { struct FVector                             HitLocation; };                                   		// 0x0010 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	union { struct FVector                             HitNormal; };                                     		// 0x001C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                CustomActionReactionType;                         		// 0x0028 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 USFXCustomAction_RifleMeleeTwo_execReplicateImpact_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_RifleMeleeTwo_execReplicateImpact_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_RifleMeleeTwo.HeavyMelee
// [0x00020002] 
struct USFXCustomAction_RifleMeleeTwo_execHeavyMelee_Parms
{
	// class ABioPlayerController*                     BioPC;                                            		// 0x0000 (0x0008) [0x0000000000000000]              

	 USFXCustomAction_RifleMeleeTwo_execHeavyMelee_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_RifleMeleeTwo_execHeavyMelee_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_RifleMeleeTwo.NoHeavyMelee
// [0x00020002] 
struct USFXCustomAction_RifleMeleeTwo_execNoHeavyMelee_Parms
{

	 USFXCustomAction_RifleMeleeTwo_execNoHeavyMelee_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_RifleMeleeTwo_execNoHeavyMelee_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_RifleMeleeTwo.DoRifleMeleeThree
// [0x00020002] 
struct USFXCustomAction_RifleMeleeTwo_execDoRifleMeleeThree_Parms
{
	// class ABioPlayerController*                     BioPC;                                            		// 0x0000 (0x0008) [0x0000000000000000]              

	 USFXCustomAction_RifleMeleeTwo_execDoRifleMeleeThree_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_RifleMeleeTwo_execDoRifleMeleeThree_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_RifleMeleeTwo.RifleMeleeThird
// [0x00020002] 
struct USFXCustomAction_RifleMeleeTwo_execRifleMeleeThird_Parms
{

	 USFXCustomAction_RifleMeleeTwo_execRifleMeleeThird_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_RifleMeleeTwo_execRifleMeleeThird_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_RifleMeleeThree.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_RifleMeleeThree_execStopCustomAction_Parms
{

	 USFXCustomAction_RifleMeleeThree_execStopCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_RifleMeleeThree_execStopCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_RifleMeleeThree.HeavyMelee
// [0x00020002] 
struct USFXCustomAction_RifleMeleeThree_execHeavyMelee_Parms
{
	// class ABioPlayerController*                     BioPC;                                            		// 0x0000 (0x0008) [0x0000000000000000]              

	 USFXCustomAction_RifleMeleeThree_execHeavyMelee_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_RifleMeleeThree_execHeavyMelee_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_RifleMeleeThree.NoHeavyMelee
// [0x00020002] 
struct USFXCustomAction_RifleMeleeThree_execNoHeavyMelee_Parms
{

	 USFXCustomAction_RifleMeleeThree_execNoHeavyMelee_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_RifleMeleeThree_execNoHeavyMelee_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_RifleMeleeThree.RifleMeleeThird
// [0x00020002] 
struct USFXCustomAction_RifleMeleeThree_execRifleMeleeThird_Parms
{

	 USFXCustomAction_RifleMeleeThree_execRifleMeleeThird_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_RifleMeleeThree_execRifleMeleeThird_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_RifleMeleeThree.ReplicateImpact
// [0x00024002] 
struct USFXCustomAction_RifleMeleeThree_execReplicateImpact_Parms
{
	class ABioPawn*                                    Target;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ImpactCount;                                      		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bFirstTarget;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	union { struct FVector                             HitLocation; };                                   		// 0x0010 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	union { struct FVector                             HitNormal; };                                     		// 0x001C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                CustomActionReactionType;                         		// 0x0028 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 USFXCustomAction_RifleMeleeThree_execReplicateImpact_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_RifleMeleeThree_execReplicateImpact_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PistolMeleeOne.StopMove
// [0x00020002] 
struct USFXCustomAction_PistolMeleeOne_execStopMove_Parms
{

	 USFXCustomAction_PistolMeleeOne_execStopMove_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PistolMeleeOne_execStopMove_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PistolMeleeOne.OnActorImpacted
// [0x00020002] 
struct USFXCustomAction_PistolMeleeOne_execOnActorImpacted_Parms
{
	unsigned char                                      Resistance;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitLocation; };                                   		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitNormal; };                                     		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0028 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bResult;                                          		// 0x002C (0x0004) [0x0000000000000000]              
	// class ASFXWeapon*                               Weapon;                                           		// 0x0030 (0x0008) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0038 (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 ImpactedPawn;                                     		// 0x0040 (0x0008) [0x0000000000000000]              
	// float                                           fDummyDamage;                                     		// 0x0048 (0x0004) [0x0000000000000000]              
	// union { struct FVector                          vDummyForce; };                                   		// 0x004C (0x000C) [0x0000000000000000]              

	 USFXCustomAction_PistolMeleeOne_execOnActorImpacted_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PistolMeleeOne_execOnActorImpacted_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PistolMeleeOne.ReplicateImpact
// [0x00024002] 
struct USFXCustomAction_PistolMeleeOne_execReplicateImpact_Parms
{
	class ABioPawn*                                    Target;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ImpactCount;                                      		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bFirstTarget;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	union { struct FVector                             HitLocation; };                                   		// 0x0010 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	union { struct FVector                             HitNormal; };                                     		// 0x001C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                CustomActionReactionType;                         		// 0x0028 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 USFXCustomAction_PistolMeleeOne_execReplicateImpact_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PistolMeleeOne_execReplicateImpact_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PistolMeleeOne.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_PistolMeleeOne_execStopCustomAction_Parms
{

	 USFXCustomAction_PistolMeleeOne_execStopCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PistolMeleeOne_execStopCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PistolMeleeOne.EndAction
// [0x00020002] 
struct USFXCustomAction_PistolMeleeOne_execEndAction_Parms
{

	 USFXCustomAction_PistolMeleeOne_execEndAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PistolMeleeOne_execEndAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PistolMeleeOne.HeavyMelee
// [0x00020002] 
struct USFXCustomAction_PistolMeleeOne_execHeavyMelee_Parms
{
	// class ABioPlayerController*                     BioPC;                                            		// 0x0000 (0x0008) [0x0000000000000000]              

	 USFXCustomAction_PistolMeleeOne_execHeavyMelee_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PistolMeleeOne_execHeavyMelee_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PistolMeleeOne.NoHeavyMelee
// [0x00020002] 
struct USFXCustomAction_PistolMeleeOne_execNoHeavyMelee_Parms
{

	 USFXCustomAction_PistolMeleeOne_execNoHeavyMelee_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PistolMeleeOne_execNoHeavyMelee_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PistolMeleeOne.DoPistolMeleeTwo
// [0x00020002] 
struct USFXCustomAction_PistolMeleeOne_execDoPistolMeleeTwo_Parms
{
	// class ABioPlayerController*                     BioPC;                                            		// 0x0000 (0x0008) [0x0000000000000000]              

	 USFXCustomAction_PistolMeleeOne_execDoPistolMeleeTwo_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PistolMeleeOne_execDoPistolMeleeTwo_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PistolMeleeOne.PistolMeleeSecondary
// [0x00020002] 
struct USFXCustomAction_PistolMeleeOne_execPistolMeleeSecondary_Parms
{

	 USFXCustomAction_PistolMeleeOne_execPistolMeleeSecondary_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PistolMeleeOne_execPistolMeleeSecondary_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PistolMeleeOne.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_PistolMeleeOne_execStartCustomAction_Parms
{

	 USFXCustomAction_PistolMeleeOne_execStartCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PistolMeleeOne_execStartCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PistolMeleeTwo.ReplicateImpact
// [0x00024002] 
struct USFXCustomAction_PistolMeleeTwo_execReplicateImpact_Parms
{
	class ABioPawn*                                    Target;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ImpactCount;                                      		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bFirstTarget;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	union { struct FVector                             HitLocation; };                                   		// 0x0010 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	union { struct FVector                             HitNormal; };                                     		// 0x001C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                CustomActionReactionType;                         		// 0x0028 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 USFXCustomAction_PistolMeleeTwo_execReplicateImpact_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PistolMeleeTwo_execReplicateImpact_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PistolMeleeTwo.HeavyMelee
// [0x00020002] 
struct USFXCustomAction_PistolMeleeTwo_execHeavyMelee_Parms
{
	// class ABioPlayerController*                     BioPC;                                            		// 0x0000 (0x0008) [0x0000000000000000]              

	 USFXCustomAction_PistolMeleeTwo_execHeavyMelee_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PistolMeleeTwo_execHeavyMelee_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PistolMeleeTwo.NoHeavyMelee
// [0x00020002] 
struct USFXCustomAction_PistolMeleeTwo_execNoHeavyMelee_Parms
{

	 USFXCustomAction_PistolMeleeTwo_execNoHeavyMelee_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PistolMeleeTwo_execNoHeavyMelee_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PistolMeleeTwo.DoPistolMeleeThree
// [0x00020002] 
struct USFXCustomAction_PistolMeleeTwo_execDoPistolMeleeThree_Parms
{
	// class ABioPlayerController*                     BioPC;                                            		// 0x0000 (0x0008) [0x0000000000000000]              

	 USFXCustomAction_PistolMeleeTwo_execDoPistolMeleeThree_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PistolMeleeTwo_execDoPistolMeleeThree_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PistolMeleeTwo.PistolMeleeThird
// [0x00020002] 
struct USFXCustomAction_PistolMeleeTwo_execPistolMeleeThird_Parms
{

	 USFXCustomAction_PistolMeleeTwo_execPistolMeleeThird_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PistolMeleeTwo_execPistolMeleeThird_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PistolMeleeThree.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_PistolMeleeThree_execStopCustomAction_Parms
{

	 USFXCustomAction_PistolMeleeThree_execStopCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PistolMeleeThree_execStopCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PistolMeleeThree.HeavyMelee
// [0x00020002] 
struct USFXCustomAction_PistolMeleeThree_execHeavyMelee_Parms
{
	// class ABioPlayerController*                     BioPC;                                            		// 0x0000 (0x0008) [0x0000000000000000]              

	 USFXCustomAction_PistolMeleeThree_execHeavyMelee_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PistolMeleeThree_execHeavyMelee_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PistolMeleeThree.NoHeavyMelee
// [0x00020002] 
struct USFXCustomAction_PistolMeleeThree_execNoHeavyMelee_Parms
{

	 USFXCustomAction_PistolMeleeThree_execNoHeavyMelee_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PistolMeleeThree_execNoHeavyMelee_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PistolMeleeThree.PistolMeleeThird
// [0x00020002] 
struct USFXCustomAction_PistolMeleeThree_execPistolMeleeThird_Parms
{

	 USFXCustomAction_PistolMeleeThree_execPistolMeleeThird_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PistolMeleeThree_execPistolMeleeThird_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_PistolMeleeThree.ReplicateImpact
// [0x00024002] 
struct USFXCustomAction_PistolMeleeThree_execReplicateImpact_Parms
{
	class ABioPawn*                                    Target;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ImpactCount;                                      		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bFirstTarget;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	union { struct FVector                             HitLocation; };                                   		// 0x0010 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	union { struct FVector                             HitNormal; };                                     		// 0x001C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                CustomActionReactionType;                         		// 0x0028 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 USFXCustomAction_PistolMeleeThree_execReplicateImpact_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_PistolMeleeThree_execReplicateImpact_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_FlinchBase.PlayImpactSound
// [0x00020002] 
struct USFXCustomAction_FlinchBase_execPlayImpactSound_Parms
{

	 USFXCustomAction_FlinchBase_execPlayImpactSound_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_FlinchBase_execPlayImpactSound_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_FlinchBase.PlayWhizSound
// [0x00020002] 
struct USFXCustomAction_FlinchBase_execPlayWhizSound_Parms
{

	 USFXCustomAction_FlinchBase_execPlayWhizSound_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_FlinchBase_execPlayWhizSound_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_FlinchBase.FlinchActionOverride
// [0x00020002] 
struct USFXCustomAction_FlinchBase_execFlinchActionOverride_Parms
{

	 USFXCustomAction_FlinchBase_execFlinchActionOverride_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_FlinchBase_execFlinchActionOverride_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_FlinchBase.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_FlinchBase_execStopCustomAction_Parms
{

	 USFXCustomAction_FlinchBase_execStopCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_FlinchBase_execStopCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_FlinchBase.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_FlinchBase_execStartCustomAction_Parms
{

	 USFXCustomAction_FlinchBase_execStartCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_FlinchBase_execStartCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_FlinchBase.GetBodyStanceAnim
// [0x00020002] 
struct USFXCustomAction_FlinchBase_execGetBodyStanceAnim_Parms
{
	union { struct FBodyStance                         ReturnValue; };                                   		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// float                                           F;                                                		// 0x0010 (0x0004) [0x0000000000000000]              

	 USFXCustomAction_FlinchBase_execGetBodyStanceAnim_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_FlinchBase_execGetBodyStanceAnim_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_FlinchBase.InternalCanDoCustomAction
// [0x00080002] 
struct USFXCustomAction_FlinchBase_execInternalCanDoCustomAction_Parms
{
	class ABioPawn*                                    SyncPawn;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bForced;                                          		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXCustomAction_FlinchBase_execInternalCanDoCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_FlinchBase_execInternalCanDoCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_FlinchBase.GetUsedAnimNames
// [0x00422802] ( FUNC_Event )
struct USFXCustomAction_FlinchBase_eventGetUsedAnimNames_Parms
{
	union { TArray<struct SFXName>                     UsedAnims; };                                     		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

	 USFXCustomAction_FlinchBase_eventGetUsedAnimNames_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_FlinchBase_eventGetUsedAnimNames_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Shockwave.PopulatePowerStatBarEvolves
// [0x00020002] 
struct USFXPowerCustomAction_Shockwave_execPopulatePowerStatBarEvolves_Parms
{

	 USFXPowerCustomAction_Shockwave_execPopulatePowerStatBarEvolves_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Shockwave_execPopulatePowerStatBarEvolves_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Shockwave.ApplyBonus
// [0x00024002] 
struct USFXPowerCustomAction_Shockwave_execApplyBonus_Parms
{
	union { struct SFXName                             Parameter; };                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class USFXGameEffect*                              Bonus;                                            		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bRemove;                                          		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 USFXPowerCustomAction_Shockwave_execApplyBonus_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Shockwave_execApplyBonus_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Shockwave.RecalculateAllPowerData
// [0x00024002] 
struct USFXPowerCustomAction_Shockwave_execRecalculateAllPowerData_Parms
{
	unsigned long                                      bReset;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 USFXPowerCustomAction_Shockwave_execRecalculateAllPowerData_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Shockwave_execRecalculateAllPowerData_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Shockwave.EvolvePower
// [0x00020002] 
struct USFXPowerCustomAction_Shockwave_execEvolvePower_Parms
{
	unsigned char                                      choice;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )

	 USFXPowerCustomAction_Shockwave_execEvolvePower_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Shockwave_execEvolvePower_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Shockwave.ShouldUsePower
// [0x00420002] 
struct USFXPowerCustomAction_Shockwave_execShouldUsePower_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    sOptionalInfo; };                                 		// 0x0008 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 oPawn;                                            		// 0x001C (0x0008) [0x0000000000000000]              

	 USFXPowerCustomAction_Shockwave_execShouldUsePower_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Shockwave_execShouldUsePower_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Shockwave.OnRagdollPhysicsImpact
// [0x00020002] 
struct USFXPowerCustomAction_Shockwave_execOnRagdollPhysicsImpact_Parms
{
	class APawn*                                       oPawn;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpactActor;                                     		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             vImpactDir; };                                    		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class ABioPawn*                                 oBioPawn;                                         		// 0x001C (0x0008) [0x0000000000000000]              

	 USFXPowerCustomAction_Shockwave_execOnRagdollPhysicsImpact_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Shockwave_execOnRagdollPhysicsImpact_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Shockwave.ClientDoPowerSubsequentImpact
// [0x00024002] 
struct USFXPowerCustomAction_Shockwave_execClientDoPowerSubsequentImpact_Parms
{
	class AActor*                                      oActor;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                CustomActionReactionType;                         		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              Duration;                                         		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                ImpactCount;                                      		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              Delay;                                            		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      DoCallback;                                       		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// union { struct FVector                          ImpactLocation; };                                		// 0x001C (0x000C) [0x0000000000000000]              

	 USFXPowerCustomAction_Shockwave_execClientDoPowerSubsequentImpact_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Shockwave_execClientDoPowerSubsequentImpact_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Shockwave.DoSubsequentImpact
// [0x00020002] 
struct USFXPowerCustomAction_Shockwave_execDoSubsequentImpact_Parms
{
	class AActor*                                      HitActor;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             ImpactLocation; };                                		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                nImpactCount;                                     		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ASFXPawn*                                 HitPawn;                                          		// 0x0018 (0x0008) [0x0000000000000000]              
	// union { struct FVector                          Momentum; };                                      		// 0x0020 (0x000C) [0x0000000000000000]              
	// union { struct FVector                          HitNormal; };                                     		// 0x002C (0x000C) [0x0000000000000000]              
	// unsigned char                                   Resistance;                                       		// 0x0038 (0x0001) [0x0000000000000000]              
	// class AActor*                                   oTargetOverride;                                  		// 0x003C (0x0008) [0x0000000000000000]              
	// float                                           fDamage;                                          		// 0x0044 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bHasReacted;                                      		// 0x0048 (0x0004) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x004C (0x0008) [0x0000000000000000]              
	// class USFXGameEffect*                           oEffect;                                          		// 0x0054 (0x0008) [0x0000000000000000]              
	// class USFXGameEffect_PowerCombo_Biotic*         BioticEffect;                                     		// 0x005C (0x0008) [0x0000000000000000]              
	// class UClass*                                   dmgType;                                          		// 0x0064 (0x0008) [0x0000000000000000]              
	// unsigned long                                   bRagdolled;                                       		// 0x006C (0x0004) [0x0000000000000000]              

	 USFXPowerCustomAction_Shockwave_execDoSubsequentImpact_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Shockwave_execDoSubsequentImpact_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Shockwave.DoImpact
// [0x00020002] 
struct USFXPowerCustomAction_Shockwave_execDoImpact_Parms
{
	union { struct FVector                             location; };                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	union { struct FRotator                            ProjectileRotation; };                            		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class AActor*                                   HitActor;                                         		// 0x0018 (0x0008) [0x0000000000000000]              
	// union { TArray<class AActor*>                   NearbyActors; };                                  		// 0x0020 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// union { struct FVector                          Param; };                                         		// 0x0030 (0x000C) [0x0000000000000000]              
	// int                                             nImpactCount;                                     		// 0x003C (0x0004) [0x0000000000000000]              
	// union { struct FAreaEffectParameters            Params; };                                        		// 0x0040 (0x0020) [0x0000000000000000]              

	 USFXPowerCustomAction_Shockwave_execDoImpact_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Shockwave_execDoImpact_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Shockwave.OnPowerDetonated
// [0x00024000] 
struct USFXPowerCustomAction_Shockwave_execOnPowerDetonated_Parms
{
	union { struct FVector                             HitLocation; };                                   		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitNormal; };                                     		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class ASFXProjectile_PowerCustomAction*            oProjectile;                                      		// 0x0018 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      HitActor;                                         		// 0x0020 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 USFXPowerCustomAction_Shockwave_execOnPowerDetonated_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Shockwave_execOnPowerDetonated_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Shockwave.ReleaseProjectilePower
// [0x00020002] 
struct USFXPowerCustomAction_Shockwave_execReleaseProjectilePower_Parms
{
	class ASFXProjectile_PowerCustomAction*            ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AActor*                                   HitActor;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// union { TArray<class AActor*>                   NearbyActors; };                                  		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             nImpactCount;                                     		// 0x0020 (0x0004) [0x0000000000000000]              
	// union { struct FAreaEffectParameters            Params; };                                        		// 0x0024 (0x0020) [0x0000000000000000]              

	 USFXPowerCustomAction_Shockwave_execReleaseProjectilePower_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Shockwave_execReleaseProjectilePower_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_BioticGrenade.PopulatePowerStatBarEvolves
// [0x00020002] 
struct USFXPowerCustomAction_BioticGrenade_execPopulatePowerStatBarEvolves_Parms
{

	 USFXPowerCustomAction_BioticGrenade_execPopulatePowerStatBarEvolves_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_BioticGrenade_execPopulatePowerStatBarEvolves_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_BioticGrenade.GetDefaultClientEffectParams
// [0x00020002] 
struct USFXPowerCustomAction_BioticGrenade_execGetDefaultClientEffectParams_Parms
{
	union { struct FVector                             ReturnValue; };                                   		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// union { struct FVector                          Param; };                                         		// 0x000C (0x000C) [0x0000000000000000]              

	 USFXPowerCustomAction_BioticGrenade_execGetDefaultClientEffectParams_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_BioticGrenade_execGetDefaultClientEffectParams_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_BioticGrenade.RecalculateAllPowerData
// [0x00024002] 
struct USFXPowerCustomAction_BioticGrenade_execRecalculateAllPowerData_Parms
{
	unsigned long                                      bReset;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 USFXPowerCustomAction_BioticGrenade_execRecalculateAllPowerData_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_BioticGrenade_execRecalculateAllPowerData_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_BioticGrenade.ResetPower
// [0x00020002] 
struct USFXPowerCustomAction_BioticGrenade_execResetPower_Parms
{

	 USFXPowerCustomAction_BioticGrenade_execResetPower_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_BioticGrenade_execResetPower_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_BioticGrenade.EvolvePower
// [0x00020002] 
struct USFXPowerCustomAction_BioticGrenade_execEvolvePower_Parms
{
	unsigned char                                      choice;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )

	 USFXPowerCustomAction_BioticGrenade_execEvolvePower_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_BioticGrenade_execEvolvePower_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_BioticGrenade.OnImpact
// [0x00020002] 
struct USFXPowerCustomAction_BioticGrenade_execOnImpact_Parms
{
	unsigned char                                      Resistance;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitLocation; };                                   		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitNormal; };                                     		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0028 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ASFXPawn*                                 oPawn;                                            		// 0x002C (0x0008) [0x0000000000000000]              

	 USFXPowerCustomAction_BioticGrenade_execOnImpact_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_BioticGrenade_execOnImpact_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_BioticGrenade.SpawnChildProjectiles
// [0x00020002] 
struct USFXPowerCustomAction_BioticGrenade_execSpawnChildProjectiles_Parms
{
	// int                                             Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ASFXProjectile_PowerCustomAction_BioticGrenade* Projectile;                                       		// 0x0004 (0x0008) [0x0000000000000000]              
	// union { struct FVector                          AttachPoint; };                                   		// 0x000C (0x000C) [0x0000000000000000]              
	// union { struct FRotator                         SpawnRotation; };                                 		// 0x0018 (0x000C) [0x0000000000000000]              

	 USFXPowerCustomAction_BioticGrenade_execSpawnChildProjectiles_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_BioticGrenade_execSpawnChildProjectiles_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_BioticGrenade.ReleasePower
// [0x00020002] 
struct USFXPowerCustomAction_BioticGrenade_execReleasePower_Parms
{

	 USFXPowerCustomAction_BioticGrenade_execReleasePower_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_BioticGrenade_execReleasePower_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_BioticGrenade.ApplyGrenadeBonus
// [0x00020002] 
struct USFXPowerCustomAction_BioticGrenade_execApplyGrenadeBonus_Parms
{
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0000 (0x0008) [0x0000000000000000]              

	 USFXPowerCustomAction_BioticGrenade_execApplyGrenadeBonus_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_BioticGrenade_execApplyGrenadeBonus_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_BioticGrenade.GetDamageType
// [0x00020002] 
struct USFXPowerCustomAction_BioticGrenade_execGetDamageType_Parms
{
	class UClass*                                      ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXPowerCustomAction_BioticGrenade_execGetDamageType_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_BioticGrenade_execGetDamageType_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_BioticGrenade.GetImpactDamage
// [0x00420002] 
struct USFXPowerCustomAction_BioticGrenade_execGetImpactDamage_Parms
{
	class AActor*                                      oImpacted;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0008 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0014 (0x0008) [0x0000000000000000]              
	// class USFXGameEffect*                           Effect;                                           		// 0x001C (0x0008) [0x0000000000000000]              

	 USFXPowerCustomAction_BioticGrenade_execGetImpactDamage_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_BioticGrenade_execGetImpactDamage_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_BioticGrenade.PlayDetonationEffects
// [0x00024002] 
struct USFXPowerCustomAction_BioticGrenade_execPlayDetonationEffects_Parms
{
	union { struct FVector                             ImpactLocation; };                                		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             ImpactNormal; };                                  		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class ASFXProjectile_PowerCustomAction*            oProjectile;                                      		// 0x0018 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 USFXPowerCustomAction_BioticGrenade_execPlayDetonationEffects_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_BioticGrenade_execPlayDetonationEffects_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_GrenadeBase.GetHUDWheelIconInfo
// [0x00020802] ( FUNC_Event )
struct USFXPowerCustomAction_GrenadeBase_eventGetHUDWheelIconInfo_Parms
{
	union { FString                                    ReturnValue; };                                   		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

	 USFXPowerCustomAction_GrenadeBase_eventGetHUDWheelIconInfo_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_GrenadeBase_eventGetHUDWheelIconInfo_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_GrenadeBase.ShouldUsePower
// [0x00420802] ( FUNC_Event )
struct USFXPowerCustomAction_GrenadeBase_eventShouldUsePower_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    sOptionalInfo; };                                 		// 0x0008 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXPowerCustomAction_GrenadeBase_eventShouldUsePower_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_GrenadeBase_eventShouldUsePower_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_GrenadeBase.GetGrenadeCount
// [0x00020002] 
struct USFXPowerCustomAction_GrenadeBase_execGetGrenadeCount_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ASFXInventoryManager*                     oInventory;                                       		// 0x0004 (0x0008) [0x0000000000000000]              

	 USFXPowerCustomAction_GrenadeBase_execGetGrenadeCount_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_GrenadeBase_execGetGrenadeCount_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_GrenadeBase.AdjustGrenadeCount
// [0x00020002] 
struct USFXPowerCustomAction_GrenadeBase_execAdjustGrenadeCount_Parms
{
	int                                                Amount;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 USFXPowerCustomAction_GrenadeBase_execAdjustGrenadeCount_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_GrenadeBase_execAdjustGrenadeCount_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_GrenadeBase.ReleasePower
// [0x00020002] 
struct USFXPowerCustomAction_GrenadeBase_execReleasePower_Parms
{
	// class ABioPlayerController*                     PC;                                               		// 0x0000 (0x0008) [0x0000000000000000]              

	 USFXPowerCustomAction_GrenadeBase_execReleasePower_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_GrenadeBase_execReleasePower_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_GrenadeBase.CanUsePower
// [0x00020002] 
struct USFXPowerCustomAction_GrenadeBase_execCanUsePower_Parms
{
	class AActor*                                      oTarget;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// union { FString                                 EmptyString; };                                   		// 0x000C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// unsigned long                                   Result;                                           		// 0x001C (0x0004) [0x0000000000000000]              

	 USFXPowerCustomAction_GrenadeBase_execCanUsePower_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_GrenadeBase_execCanUsePower_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_GrenadeBase.ApplyGrenadeBonus
// [0x00020000] 
struct USFXPowerCustomAction_GrenadeBase_execApplyGrenadeBonus_Parms
{

	 USFXPowerCustomAction_GrenadeBase_execApplyGrenadeBonus_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_GrenadeBase_execApplyGrenadeBonus_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_GrenadeBase.ResetPower
// [0x00020002] 
struct USFXPowerCustomAction_GrenadeBase_execResetPower_Parms
{

	 USFXPowerCustomAction_GrenadeBase_execResetPower_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_GrenadeBase_execResetPower_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_GrenadeBase.OnSquadMemberAdded
// [0x00020002] 
struct USFXPowerCustomAction_GrenadeBase_execOnSquadMemberAdded_Parms
{
	class APawn*                                       Pawn;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 USFXPowerCustomAction_GrenadeBase_execOnSquadMemberAdded_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_GrenadeBase_execOnSquadMemberAdded_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_GrenadeBase.OnPowerRankIncreased
// [0x00020002] 
struct USFXPowerCustomAction_GrenadeBase_execOnPowerRankIncreased_Parms
{

	 USFXPowerCustomAction_GrenadeBase_execOnPowerRankIncreased_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_GrenadeBase_execOnPowerRankIncreased_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_GrenadeBase.OnPowerAdded
// [0x00020002] 
struct USFXPowerCustomAction_GrenadeBase_execOnPowerAdded_Parms
{
	class USFXPowerCustomActionBase*                   Power;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ASFXInventoryManager*                     Inventory;                                        		// 0x0008 (0x0008) [0x0000000000000000]              

	 USFXPowerCustomAction_GrenadeBase_execOnPowerAdded_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_GrenadeBase_execOnPowerAdded_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_GrenadeBase.OnPowersLoaded
// [0x00020002] 
struct USFXPowerCustomAction_GrenadeBase_execOnPowersLoaded_Parms
{
	// class ASFXInventoryManager*                     Inventory;                                        		// 0x0000 (0x0008) [0x0000000000000000]              

	 USFXPowerCustomAction_GrenadeBase_execOnPowersLoaded_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_GrenadeBase_execOnPowersLoaded_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Throw.PopulatePowerStatBarEvolves
// [0x00020002] 
struct USFXPowerCustomAction_Throw_execPopulatePowerStatBarEvolves_Parms
{

	 USFXPowerCustomAction_Throw_execPopulatePowerStatBarEvolves_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Throw_execPopulatePowerStatBarEvolves_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Throw.EvolvePower
// [0x00020002] 
struct USFXPowerCustomAction_Throw_execEvolvePower_Parms
{
	unsigned char                                      choice;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )

	 USFXPowerCustomAction_Throw_execEvolvePower_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Throw_execEvolvePower_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Throw.ShouldUsePower
// [0x00420002] 
struct USFXPowerCustomAction_Throw_execShouldUsePower_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    sOptionalInfo; };                                 		// 0x0008 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 oPawn;                                            		// 0x001C (0x0008) [0x0000000000000000]              

	 USFXPowerCustomAction_Throw_execShouldUsePower_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Throw_execShouldUsePower_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Throw.OnRagdollPhysicsImpact
// [0x00020002] 
struct USFXPowerCustomAction_Throw_execOnRagdollPhysicsImpact_Parms
{
	class APawn*                                       oPawn;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpactActor;                                     		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             vImpactDir; };                                    		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class ABioPawn*                                 oBioPawn;                                         		// 0x001C (0x0008) [0x0000000000000000]              

	 USFXPowerCustomAction_Throw_execOnRagdollPhysicsImpact_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Throw_execOnRagdollPhysicsImpact_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Throw.ResetPower
// [0x00020002] 
struct USFXPowerCustomAction_Throw_execResetPower_Parms
{

	 USFXPowerCustomAction_Throw_execResetPower_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Throw_execResetPower_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Throw.OnImpact
// [0x00020002] 
struct USFXPowerCustomAction_Throw_execOnImpact_Parms
{
	unsigned char                                      Resistance;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitLocation; };                                   		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitNormal; };                                     		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0028 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ASFXPawn*                                 oPawn;                                            		// 0x002C (0x0008) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0034 (0x0008) [0x0000000000000000]              
	// class USFXGameEffect_PowerCombo_Biotic*         BioticEffect;                                     		// 0x003C (0x0008) [0x0000000000000000]              
	// class USFXGameEffect*                           oEffect;                                          		// 0x0044 (0x0008) [0x0000000000000000]              

	 USFXPowerCustomAction_Throw_execOnImpact_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Throw_execOnImpact_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Throw.GetImpactForce
// [0x00020002] 
struct USFXPowerCustomAction_Throw_execGetImpactForce_Parms
{
	class AActor*                                      oImpacted;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           fForce;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0010 (0x0008) [0x0000000000000000]              

	 USFXPowerCustomAction_Throw_execGetImpactForce_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Throw_execGetImpactForce_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_MultiProjectile.FindSecondTarget
// [0x00020002] 
struct USFXPowerCustomAction_MultiProjectile_execFindSecondTarget_Parms
{
	// union { TArray<class AActor*>                   NearbyActors; };                                  		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class AActor*                                   oActor;                                           		// 0x0010 (0x0008) [0x0000000000000000]              
	// class ASFXPawn_Player*                          Player;                                           		// 0x0018 (0x0008) [0x0000000000000000]              

	 USFXPowerCustomAction_MultiProjectile_execFindSecondTarget_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_MultiProjectile_execFindSecondTarget_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_MultiProjectile.ReleaseSecondProjectile
// [0x00020002] 
struct USFXPowerCustomAction_MultiProjectile_execReleaseSecondProjectile_Parms
{
	// unsigned char                                   eType;                                            		// 0x0000 (0x0001) [0x0000000000000000]              
	// class ABioPawn*                                 oPawnTarget;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
	// class ASFXProjectile_PowerCustomAction*         oProjectile;                                      		// 0x000C (0x0008) [0x0000000000000000]              

	 USFXPowerCustomAction_MultiProjectile_execReleaseSecondProjectile_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_MultiProjectile_execReleaseSecondProjectile_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_MultiProjectile.ReleasePower
// [0x00020002] 
struct USFXPowerCustomAction_MultiProjectile_execReleasePower_Parms
{

	 USFXPowerCustomAction_MultiProjectile_execReleasePower_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_MultiProjectile_execReleasePower_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Pull.PopulatePowerStatBarEvolves
// [0x00020002] 
struct USFXPowerCustomAction_Pull_execPopulatePowerStatBarEvolves_Parms
{

	 USFXPowerCustomAction_Pull_execPopulatePowerStatBarEvolves_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Pull_execPopulatePowerStatBarEvolves_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Pull.ApplyBonus
// [0x00024002] 
struct USFXPowerCustomAction_Pull_execApplyBonus_Parms
{
	union { struct SFXName                             Parameter; };                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class USFXGameEffect*                              Bonus;                                            		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bRemove;                                          		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 USFXPowerCustomAction_Pull_execApplyBonus_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Pull_execApplyBonus_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Pull.ResetPower
// [0x00020002] 
struct USFXPowerCustomAction_Pull_execResetPower_Parms
{

	 USFXPowerCustomAction_Pull_execResetPower_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Pull_execResetPower_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Pull.RecalculateAllPowerData
// [0x00024002] 
struct USFXPowerCustomAction_Pull_execRecalculateAllPowerData_Parms
{
	unsigned long                                      bReset;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 USFXPowerCustomAction_Pull_execRecalculateAllPowerData_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Pull_execRecalculateAllPowerData_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Pull.EvolvePower
// [0x00020002] 
struct USFXPowerCustomAction_Pull_execEvolvePower_Parms
{
	unsigned char                                      choice;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )

	 USFXPowerCustomAction_Pull_execEvolvePower_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Pull_execEvolvePower_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Pull.ShouldUsePower
// [0x00420002] 
struct USFXPowerCustomAction_Pull_execShouldUsePower_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    sOptionalInfo; };                                 		// 0x0008 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 oPawn;                                            		// 0x001C (0x0008) [0x0000000000000000]              

	 USFXPowerCustomAction_Pull_execShouldUsePower_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Pull_execShouldUsePower_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Pull.OnRagdollPhysicsImpact
// [0x00020002] 
struct USFXPowerCustomAction_Pull_execOnRagdollPhysicsImpact_Parms
{
	class APawn*                                       oPawn;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpactActor;                                     		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             vImpactDir; };                                    		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )

	 USFXPowerCustomAction_Pull_execOnRagdollPhysicsImpact_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Pull_execOnRagdollPhysicsImpact_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Pull.DropCurrentTargets
// [0x00020002] 
struct USFXPowerCustomAction_Pull_execDropCurrentTargets_Parms
{
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class USFXGameEffect*                           oEffect;                                          		// 0x0008 (0x0008) [0x0000000000000000]              
	// class AActor*                                   oActor;                                           		// 0x0010 (0x0008) [0x0000000000000000]              

	 USFXPowerCustomAction_Pull_execDropCurrentTargets_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Pull_execDropCurrentTargets_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Pull.OnImpact
// [0x00020002] 
struct USFXPowerCustomAction_Pull_execOnImpact_Parms
{
	unsigned char                                      Resistance;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitLocation; };                                   		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitNormal; };                                     		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0028 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ASFXPawn*                                 oPawn;                                            		// 0x002C (0x0008) [0x0000000000000000]              
	// union { struct FVector                          vForce; };                                        		// 0x0034 (0x000C) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0040 (0x0008) [0x0000000000000000]              
	// class USFXGameEffect_Pull*                      oPullEffect;                                      		// 0x0048 (0x0008) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0050 (0x0004) [0x0000000000000000]              

	 USFXPowerCustomAction_Pull_execOnImpact_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Pull_execOnImpact_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Pull.GetImpactForce
// [0x00020002] 
struct USFXPowerCustomAction_Pull_execGetImpactForce_Parms
{
	class AActor*                                      oImpacted;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXPowerCustomAction_Pull_execGetImpactForce_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Pull_execGetImpactForce_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Pull.StartPower
// [0x00020002] 
struct USFXPowerCustomAction_Pull_execStartPower_Parms
{

	 USFXPowerCustomAction_Pull_execStartPower_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Pull_execStartPower_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_AdeptMeleePassive.PopulatePowerStatBarEvolves
// [0x00020002] 
struct USFXPowerCustomAction_AdeptMeleePassive_execPopulatePowerStatBarEvolves_Parms
{

	 USFXPowerCustomAction_AdeptMeleePassive_execPopulatePowerStatBarEvolves_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_AdeptMeleePassive_execPopulatePowerStatBarEvolves_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_AdeptMeleePassive.ApplyBonus
// [0x00024002] 
struct USFXPowerCustomAction_AdeptMeleePassive_execApplyBonus_Parms
{
	union { struct SFXName                             Parameter; };                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class USFXGameEffect*                              Bonus;                                            		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bRemove;                                          		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 USFXPowerCustomAction_AdeptMeleePassive_execApplyBonus_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_AdeptMeleePassive_execApplyBonus_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_AdeptMeleePassive.RecalculateAllPowerData
// [0x00024002] 
struct USFXPowerCustomAction_AdeptMeleePassive_execRecalculateAllPowerData_Parms
{
	unsigned long                                      bReset;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 USFXPowerCustomAction_AdeptMeleePassive_execRecalculateAllPowerData_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_AdeptMeleePassive_execRecalculateAllPowerData_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_AdeptMeleePassive.EvolvePower
// [0x00020002] 
struct USFXPowerCustomAction_AdeptMeleePassive_execEvolvePower_Parms
{
	unsigned char                                      choice;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )

	 USFXPowerCustomAction_AdeptMeleePassive_execEvolvePower_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_AdeptMeleePassive_execEvolvePower_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_AdeptMeleePassive.OnHeavyMeleeKill
// [0x00020002] 
struct USFXPowerCustomAction_AdeptMeleePassive_execOnHeavyMeleeKill_Parms
{
	class AActor*                                      oImpacted;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0008 (0x0008) [0x0000000000000000]              

	 USFXPowerCustomAction_AdeptMeleePassive_execOnHeavyMeleeKill_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_AdeptMeleePassive_execOnHeavyMeleeKill_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_AdeptMeleePassive.ApplyGlobalBonus
// [0x00020002] 
struct USFXPowerCustomAction_AdeptMeleePassive_execApplyGlobalBonus_Parms
{

	 USFXPowerCustomAction_AdeptMeleePassive_execApplyGlobalBonus_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_AdeptMeleePassive_execApplyGlobalBonus_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Warp.PopulatePowerStatBarEvolves
// [0x00020002] 
struct USFXPowerCustomAction_Warp_execPopulatePowerStatBarEvolves_Parms
{

	 USFXPowerCustomAction_Warp_execPopulatePowerStatBarEvolves_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Warp_execPopulatePowerStatBarEvolves_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Warp.ApplyBonus
// [0x00024002] 
struct USFXPowerCustomAction_Warp_execApplyBonus_Parms
{
	union { struct SFXName                             Parameter; };                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class USFXGameEffect*                              Bonus;                                            		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bRemove;                                          		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 USFXPowerCustomAction_Warp_execApplyBonus_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Warp_execApplyBonus_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Warp.RecalculateAllPowerData
// [0x00024002] 
struct USFXPowerCustomAction_Warp_execRecalculateAllPowerData_Parms
{
	unsigned long                                      bReset;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 USFXPowerCustomAction_Warp_execRecalculateAllPowerData_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Warp_execRecalculateAllPowerData_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Warp.EvolvePower
// [0x00020002] 
struct USFXPowerCustomAction_Warp_execEvolvePower_Parms
{
	unsigned char                                      choice;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )

	 USFXPowerCustomAction_Warp_execEvolvePower_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Warp_execEvolvePower_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Warp.ShouldUsePower
// [0x00420002] 
struct USFXPowerCustomAction_Warp_execShouldUsePower_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    sOptionalInfo; };                                 		// 0x0008 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 oPawn;                                            		// 0x001C (0x0008) [0x0000000000000000]              

	 USFXPowerCustomAction_Warp_execShouldUsePower_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Warp_execShouldUsePower_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Warp.PlayImpactEffects
// [0x00020002] 
struct USFXPowerCustomAction_Warp_execPlayImpactEffects_Parms
{
	class AActor*                                      oImpacted;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             ImpactLocation; };                                		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             ImpactNormal; };                                  		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )

	 USFXPowerCustomAction_Warp_execPlayImpactEffects_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Warp_execPlayImpactEffects_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Warp.OnImpact
// [0x00020002] 
struct USFXPowerCustomAction_Warp_execOnImpact_Parms
{
	unsigned char                                      Resistance;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitLocation; };                                   		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitNormal; };                                     		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0028 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ASFXPawn*                                 ImpactedPawn;                                     		// 0x002C (0x0008) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0034 (0x0008) [0x0000000000000000]              
	// class USFXGameEffect_FireDamageOverTime*        DOTEffect;                                        		// 0x003C (0x0008) [0x0000000000000000]              
	// class UClass*                                   DamageType;                                       		// 0x0044 (0x0008) [0x0000000000000000]              
	// class USFXGameEffect_DeathEffect*               DeathEffect;                                      		// 0x004C (0x0008) [0x0000000000000000]              
	// float                                           fDamagePerSecond;                                 		// 0x0054 (0x0004) [0x0000000000000000]              
	// class USFXGameEffect_PowerCombo_Biotic*         BioticEffect;                                     		// 0x0058 (0x0008) [0x0000000000000000]              
	// class USFXGameEffect*                           oEffect;                                          		// 0x0060 (0x0008) [0x0000000000000000]              
	// union { struct FVector                          Param; };                                         		// 0x0068 (0x000C) [0x0000000000000000]              
	// float                                           fAssistAmount;                                    		// 0x0074 (0x0004) [0x0000000000000000]              

	 USFXPowerCustomAction_Warp_execOnImpact_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Warp_execOnImpact_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Warp.GetTotalDamage
// [0x00420002] 
struct USFXPowerCustomAction_Warp_execGetTotalDamage_Parms
{
	class AActor*                                      oImpacted;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0008 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXPowerCustomAction_Warp_execGetTotalDamage_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Warp_execGetTotalDamage_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Warp.GetImpactDamage
// [0x00420002] 
struct USFXPowerCustomAction_Warp_execGetImpactDamage_Parms
{
	class AActor*                                      oImpacted;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0008 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXPowerCustomAction_Warp_execGetImpactDamage_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Warp_execGetImpactDamage_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Singularity.CombatEnded
// [0x00020002] 
struct USFXPowerCustomAction_Singularity_execCombatEnded_Parms
{

	 USFXPowerCustomAction_Singularity_execCombatEnded_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Singularity_execCombatEnded_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Singularity.PopulatePowerStatBarEvolves
// [0x00020002] 
struct USFXPowerCustomAction_Singularity_execPopulatePowerStatBarEvolves_Parms
{

	 USFXPowerCustomAction_Singularity_execPopulatePowerStatBarEvolves_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Singularity_execPopulatePowerStatBarEvolves_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Singularity.OnOwnerDestroyed
// [0x00020002] 
struct USFXPowerCustomAction_Singularity_execOnOwnerDestroyed_Parms
{

	 USFXPowerCustomAction_Singularity_execOnOwnerDestroyed_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Singularity_execOnOwnerDestroyed_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Singularity.DoJoinInProgress
// [0x00020002] 
struct USFXPowerCustomAction_Singularity_execDoJoinInProgress_Parms
{

	 USFXPowerCustomAction_Singularity_execDoJoinInProgress_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Singularity_execDoJoinInProgress_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Singularity.ClientDoPowerSubsequentImpact
// [0x00024002] 
struct USFXPowerCustomAction_Singularity_execClientDoPowerSubsequentImpact_Parms
{
	class AActor*                                      oActor;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                CustomActionReactionType;                         		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              Duration;                                         		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                ImpactCount;                                      		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              Delay;                                            		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      DoCallback;                                       		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 USFXPowerCustomAction_Singularity_execClientDoPowerSubsequentImpact_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Singularity_execClientDoPowerSubsequentImpact_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Singularity.ApplyBonus
// [0x00024002] 
struct USFXPowerCustomAction_Singularity_execApplyBonus_Parms
{
	union { struct SFXName                             Parameter; };                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class USFXGameEffect*                              Bonus;                                            		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bRemove;                                          		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 USFXPowerCustomAction_Singularity_execApplyBonus_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Singularity_execApplyBonus_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Singularity.RecalculateAllPowerData
// [0x00024002] 
struct USFXPowerCustomAction_Singularity_execRecalculateAllPowerData_Parms
{
	unsigned long                                      bReset;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 USFXPowerCustomAction_Singularity_execRecalculateAllPowerData_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Singularity_execRecalculateAllPowerData_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Singularity.EvolvePower
// [0x00020002] 
struct USFXPowerCustomAction_Singularity_execEvolvePower_Parms
{
	unsigned char                                      choice;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )

	 USFXPowerCustomAction_Singularity_execEvolvePower_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Singularity_execEvolvePower_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Singularity.ShouldUsePower
// [0x00420002] 
struct USFXPowerCustomAction_Singularity_execShouldUsePower_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    sOptionalInfo; };                                 		// 0x0008 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 oPawn;                                            		// 0x001C (0x0008) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0024 (0x0008) [0x0000000000000000]              

	 USFXPowerCustomAction_Singularity_execShouldUsePower_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Singularity_execShouldUsePower_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Singularity.OnPowerRankIncreased
// [0x00020002] 
struct USFXPowerCustomAction_Singularity_execOnPowerRankIncreased_Parms
{

	 USFXPowerCustomAction_Singularity_execOnPowerRankIncreased_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Singularity_execOnPowerRankIncreased_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Singularity.OnRagdollPhysicsImpact
// [0x00020002] 
struct USFXPowerCustomAction_Singularity_execOnRagdollPhysicsImpact_Parms
{
	class APawn*                                       oPawn;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpactActor;                                     		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             vImpactDir; };                                    		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )

	 USFXPowerCustomAction_Singularity_execOnRagdollPhysicsImpact_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Singularity_execOnRagdollPhysicsImpact_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Singularity.SpawnSingularityVFX
// [0x00020003] ( FUNC_Final )
struct USFXPowerCustomAction_Singularity_execSpawnSingularityVFX_Parms
{
	// union { struct FVector                          vParams; };                                       		// 0x0000 (0x000C) [0x0000000000000000]              
	// class URvrClientEffectManager*                  Manager;                                          		// 0x000C (0x0008) [0x0000000000000000]              

	 USFXPowerCustomAction_Singularity_execSpawnSingularityVFX_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Singularity_execSpawnSingularityVFX_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Singularity.SpawnSingularity
// [0x00020002] 
struct USFXPowerCustomAction_Singularity_execSpawnSingularity_Parms
{

	 USFXPowerCustomAction_Singularity_execSpawnSingularity_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Singularity_execSpawnSingularity_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Singularity.OnExplosionImpact
// [0x00020002] 
struct USFXPowerCustomAction_Singularity_execOnExplosionImpact_Parms
{
	unsigned char                                      Resistance;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitLocation; };                                   		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitNormal; };                                     		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0028 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXPowerCustomAction_Singularity_execOnExplosionImpact_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Singularity_execOnExplosionImpact_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Singularity.SingularityExplosion
// [0x00020002] 
struct USFXPowerCustomAction_Singularity_execSingularityExplosion_Parms
{

	 USFXPowerCustomAction_Singularity_execSingularityExplosion_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Singularity_execSingularityExplosion_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Singularity.Internal_TurnOffSingularity
// [0x00020002] 
struct USFXPowerCustomAction_Singularity_execInternal_TurnOffSingularity_Parms
{
	// class AActor*                                   oActor;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0008 (0x0008) [0x0000000000000000]              
	// class USFXGameEffect*                           oEffect;                                          		// 0x0010 (0x0008) [0x0000000000000000]              

	 USFXPowerCustomAction_Singularity_execInternal_TurnOffSingularity_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Singularity_execInternal_TurnOffSingularity_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Singularity.TurnOffSingularity
// [0x00024002] 
struct USFXPowerCustomAction_Singularity_execTurnOffSingularity_Parms
{
	unsigned long                                      bDoReplication;                                   		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 USFXPowerCustomAction_Singularity_execTurnOffSingularity_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Singularity_execTurnOffSingularity_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Singularity.CanPutInSingularity
// [0x00020002] 
struct USFXPowerCustomAction_Singularity_execCanPutInSingularity_Parms
{
	class AActor*                                      oActor;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x000C (0x0008) [0x0000000000000000]              
	// class USFXGameEffect*                           oEffect;                                          		// 0x0014 (0x0008) [0x0000000000000000]              

	 USFXPowerCustomAction_Singularity_execCanPutInSingularity_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Singularity_execCanPutInSingularity_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Singularity.OnGameEffectEnded
// [0x00020002] 
struct USFXPowerCustomAction_Singularity_execOnGameEffectEnded_Parms
{
	class AActor*                                      oActor;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 USFXPowerCustomAction_Singularity_execOnGameEffectEnded_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Singularity_execOnGameEffectEnded_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Singularity.ImpactNewTarget
// [0x00020002] 
struct USFXPowerCustomAction_Singularity_execImpactNewTarget_Parms
{
	class AActor*                                      oImpacted;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x000C (0x0008) [0x0000000000000000]              
	// class USFXGameEffect_Singularity*               oSingularityEffect;                               		// 0x0014 (0x0008) [0x0000000000000000]              
	// class USFXGameEffect*                           oEffect;                                          		// 0x001C (0x0008) [0x0000000000000000]              
	// class ASFXPawn*                                 oPawn;                                            		// 0x0024 (0x0008) [0x0000000000000000]              
	// union { struct FVector                          VParam; };                                        		// 0x002C (0x000C) [0x0000000000000000]              
	// union { struct FVector                          vForce; };                                        		// 0x0038 (0x000C) [0x0000000000000000]              
	// union { struct FVector                          HitNormal; };                                     		// 0x0044 (0x000C) [0x0000000000000000]              
	// unsigned char                                   Resistance;                                       		// 0x0050 (0x0001) [0x0000000000000000]              
	// class AActor*                                   oTargetOverride;                                  		// 0x0054 (0x0008) [0x0000000000000000]              
	// class AActor*                                   oTarget;                                          		// 0x005C (0x0008) [0x0000000000000000]              
	// float                                           fDamage;                                          		// 0x0064 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bHasReacted;                                      		// 0x0068 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bRagdolled;                                       		// 0x006C (0x0004) [0x0000000000000000]              

	 USFXPowerCustomAction_Singularity_execImpactNewTarget_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Singularity_execImpactNewTarget_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Singularity.ApplyBioticComboEffect
// [0x00020002] 
struct USFXPowerCustomAction_Singularity_execApplyBioticComboEffect_Parms
{
	class AActor*                                      oTarget;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXGameEffect_PowerCombo_Biotic*         ComboEffect;                                      		// 0x000C (0x0008) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0014 (0x0008) [0x0000000000000000]              

	 USFXPowerCustomAction_Singularity_execApplyBioticComboEffect_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Singularity_execApplyBioticComboEffect_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Singularity.TickCustomAction
// [0x00020802] ( FUNC_Event )
struct USFXPowerCustomAction_Singularity_eventTickCustomAction_Parms
{
	float                                              fDeltaTime;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AActor*                                   NearbyActor;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
	// union { TArray<class AActor*>                   NearbyActors; };                                  		// 0x000C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class ABioWorldInfo*                            Info;                                             		// 0x001C (0x0008) [0x0000000000000000]              
	// class ABioPlayerController*                     PC;                                               		// 0x0024 (0x0008) [0x0000000000000000]              
	// unsigned char                                   Resistance;                                       		// 0x002C (0x0001) [0x0000000000000000]              
	// class AActor*                                   oTarget;                                          		// 0x0030 (0x0008) [0x0000000000000000]              
	// class AActor*                                   oTargetOverride;                                  		// 0x0038 (0x0008) [0x0000000000000000]              
	// float                                           fDamage;                                          		// 0x0040 (0x0004) [0x0000000000000000]              
	// union { struct FVector                          vForce; };                                        		// 0x0044 (0x000C) [0x0000000000000000]              
	// union { struct FVector                          vHitNormal; };                                    		// 0x0050 (0x000C) [0x0000000000000000]              

	 USFXPowerCustomAction_Singularity_eventTickCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Singularity_eventTickCustomAction_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Singularity.ClientDoCustomActionImpact
// [0x00024002] 
struct USFXPowerCustomAction_Singularity_execClientDoCustomActionImpact_Parms
{
	class AActor*                                      oActor;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ImpactCount;                                      		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bFirstTarget;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	union { struct FVector                             HitLocation; };                                   		// 0x0010 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	union { struct FVector                             HitNormal; };                                     		// 0x001C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                CustomActionReactionType;                         		// 0x0028 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 USFXPowerCustomAction_Singularity_execClientDoCustomActionImpact_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Singularity_execClientDoCustomActionImpact_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Singularity.OnPowerDetonated
// [0x00024002] 
struct USFXPowerCustomAction_Singularity_execOnPowerDetonated_Parms
{
	union { struct FVector                             HitLocation; };                                   		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitNormal; };                                     		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class ASFXProjectile_PowerCustomAction*            oProjectile;                                      		// 0x0018 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      HitActor;                                         		// 0x0020 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// union { struct FVector                          ProjectileVelocity; };                            		// 0x0028 (0x000C) [0x0000000000000000]              

	 USFXPowerCustomAction_Singularity_execOnPowerDetonated_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Singularity_execOnPowerDetonated_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Singularity.ReleasePower
// [0x00020002] 
struct USFXPowerCustomAction_Singularity_execReleasePower_Parms
{

	 USFXPowerCustomAction_Singularity_execReleasePower_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Singularity_execReleasePower_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Singularity.GetImpactForce
// [0x00020002] 
struct USFXPowerCustomAction_Singularity_execGetImpactForce_Parms
{
	class AActor*                                      oImpacted;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXPowerCustomAction_Singularity_execGetImpactForce_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Singularity_execGetImpactForce_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Singularity.StartCustomAction
// [0x00020002] 
struct USFXPowerCustomAction_Singularity_execStartCustomAction_Parms
{

	 USFXPowerCustomAction_Singularity_execStartCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Singularity_execStartCustomAction_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Singularity.OnPowersLoaded
// [0x00020002] 
struct USFXPowerCustomAction_Singularity_execOnPowersLoaded_Parms
{

	 USFXPowerCustomAction_Singularity_execOnPowersLoaded_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Singularity_execOnPowersLoaded_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_AdeptPassive.PopulatePowerStatBarEvolves
// [0x00020002] 
struct USFXPowerCustomAction_AdeptPassive_execPopulatePowerStatBarEvolves_Parms
{

	 USFXPowerCustomAction_AdeptPassive_execPopulatePowerStatBarEvolves_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_AdeptPassive_execPopulatePowerStatBarEvolves_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_AdeptPassive.RecalculateAllPowerData
// [0x00024002] 
struct USFXPowerCustomAction_AdeptPassive_execRecalculateAllPowerData_Parms
{
	unsigned long                                      bReset;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 USFXPowerCustomAction_AdeptPassive_execRecalculateAllPowerData_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_AdeptPassive_execRecalculateAllPowerData_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_AdeptPassive.EvolvePower
// [0x00020002] 
struct USFXPowerCustomAction_AdeptPassive_execEvolvePower_Parms
{
	unsigned char                                      choice;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )

	 USFXPowerCustomAction_AdeptPassive_execEvolvePower_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_AdeptPassive_execEvolvePower_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_AdeptPassive.OnBioticCombo
// [0x00020002] 
struct USFXPowerCustomAction_AdeptPassive_execOnBioticCombo_Parms
{
	class USFXPowerCustomAction*                       oPower;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class ABioPawn*                                    oTarget;                                          		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0010 (0x0008) [0x0000000000000000]              

	 USFXPowerCustomAction_AdeptPassive_execOnBioticCombo_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_AdeptPassive_execOnBioticCombo_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_AdeptPassive.ResetPower
// [0x00020002] 
struct USFXPowerCustomAction_AdeptPassive_execResetPower_Parms
{

	 USFXPowerCustomAction_AdeptPassive_execResetPower_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_AdeptPassive_execResetPower_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_AdeptPassive.ApplyGlobalBonus
// [0x00020002] 
struct USFXPowerCustomAction_AdeptPassive_execApplyGlobalBonus_Parms
{
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ABioPawn*                                 oSquadMember;                                     		// 0x000C (0x0008) [0x0000000000000000]              
	// float                                           fDurationBonus;                                   		// 0x0014 (0x0004) [0x0000000000000000]              

	 USFXPowerCustomAction_AdeptPassive_execApplyGlobalBonus_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_AdeptPassive_execApplyGlobalBonus_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Unity.RecalculateAllPowerData
// [0x00024002] 
struct USFXPowerCustomAction_Unity_execRecalculateAllPowerData_Parms
{
	unsigned long                                      bReset;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 USFXPowerCustomAction_Unity_execRecalculateAllPowerData_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Unity_execRecalculateAllPowerData_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Unity.GetHUDWheelIconInfo
// [0x00020802] ( FUNC_Event )
struct USFXPowerCustomAction_Unity_eventGetHUDWheelIconInfo_Parms
{
	union { FString                                    ReturnValue; };                                   		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

	 USFXPowerCustomAction_Unity_eventGetHUDWheelIconInfo_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Unity_eventGetHUDWheelIconInfo_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Unity.CountMediGel
// [0x00020002] 
struct USFXPowerCustomAction_Unity_execCountMediGel_Parms
{
	class ABioBaseSquad*                               oPlayerSquad;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ASFXInventoryManager*                     oInventory;                                       		// 0x000C (0x0008) [0x0000000000000000]              

	 USFXPowerCustomAction_Unity_execCountMediGel_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Unity_execCountMediGel_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Unity.ShouldUsePower
// [0x00420802] ( FUNC_Event )
struct USFXPowerCustomAction_Unity_eventShouldUsePower_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    sOptionalInfo; };                                 		// 0x0008 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXModule_Damage*                        DmgModule;                                        		// 0x001C (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 oSquadMember;                                     		// 0x0024 (0x0008) [0x0000000000000000]              
	// class ASFXShield_Base*                          Shields;                                          		// 0x002C (0x0008) [0x0000000000000000]              
	// unsigned long                                   bSquadHealthFull;                                 		// 0x0034 (0x0004) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0038 (0x0004) [0x0000000000000000]              

	 USFXPowerCustomAction_Unity_eventShouldUsePower_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Unity_eventShouldUsePower_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Unity.OnImpact
// [0x00020002] 
struct USFXPowerCustomAction_Unity_execOnImpact_Parms
{
	unsigned char                                      Resistance;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitLocation; };                                   		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitNormal; };                                     		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0028 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ASFXPawn_Henchman*                        Henchman;                                         		// 0x002C (0x0008) [0x0000000000000000]              
	// class ASFXPawn_Player*                          Player;                                           		// 0x0034 (0x0008) [0x0000000000000000]              
	// class ASFXGame*                                 Game;                                             		// 0x003C (0x0008) [0x0000000000000000]              
	// class ASFXGRI*                                  GRI;                                              		// 0x0044 (0x0008) [0x0000000000000000]              
	// class AWorldInfo*                               WI;                                               		// 0x004C (0x0008) [0x0000000000000000]              
	// class USFXDifficultyHandler*                    DH;                                               		// 0x0054 (0x0008) [0x0000000000000000]              
	// float                                           HealAmount;                                       		// 0x005C (0x0004) [0x0000000000000000]              

	 USFXPowerCustomAction_Unity_execOnImpact_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Unity_execOnImpact_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Unity.StartPower
// [0x00020002] 
struct USFXPowerCustomAction_Unity_execStartPower_Parms
{
	// class UBioGlobalVariableTable*                  GlobalVariables;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
	// unsigned long                                   bSuperMedigel;                                    		// 0x0008 (0x0004) [0x0000000000000000]              

	 USFXPowerCustomAction_Unity_execStartPower_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Unity_execStartPower_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Unity.CanUsePower
// [0x00020002] 
struct USFXPowerCustomAction_Unity_execCanUsePower_Parms
{
	class AActor*                                      oTarget;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// union { FString                                 EmptyString; };                                   		// 0x000C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

	 USFXPowerCustomAction_Unity_execCanUsePower_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Unity_execCanUsePower_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_AdeptPunch.StopMove
// [0x00020002] 
struct USFXCustomAction_AdeptPunch_execStopMove_Parms
{

	 USFXCustomAction_AdeptPunch_execStopMove_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_AdeptPunch_execStopMove_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_AdeptPunch.OnActorImpacted
// [0x00020002] 
struct USFXCustomAction_AdeptPunch_execOnActorImpacted_Parms
{
	unsigned char                                      Resistance;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitLocation; };                                   		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitNormal; };                                     		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0028 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 oPawn;                                            		// 0x002C (0x0008) [0x0000000000000000]              

	 USFXCustomAction_AdeptPunch_execOnActorImpacted_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_AdeptPunch_execOnActorImpacted_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_DisableAI.OnRemoved
// [0x00020002] 
struct USFXGameEffect_DisableAI_execOnRemoved_Parms
{
	// class ABioPawn*                                 oPawn;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// class ASFXAI_Core*                              oController;                                      		// 0x0008 (0x0008) [0x0000000000000000]              

	 USFXGameEffect_DisableAI_execOnRemoved_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_DisableAI_execOnRemoved_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_DisableAI.OnApplied
// [0x00020002] 
struct USFXGameEffect_DisableAI_execOnApplied_Parms
{
	// class ABioPawn*                                 oPawn;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// class ASFXAI_Core*                              oController;                                      		// 0x0008 (0x0008) [0x0000000000000000]              

	 USFXGameEffect_DisableAI_execOnApplied_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_DisableAI_execOnApplied_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_AntiGravity.OnRemoved
// [0x00020002] 
struct USFXGameEffect_AntiGravity_execOnRemoved_Parms
{
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class USFXGameEffect*                           oEffect;                                          		// 0x0008 (0x0008) [0x0000000000000000]              

	 USFXGameEffect_AntiGravity_execOnRemoved_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_AntiGravity_execOnRemoved_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_AntiGravity.OnApplied
// [0x00020002] 
struct USFXGameEffect_AntiGravity_execOnApplied_Parms
{
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class USFXGameEffect*                           oEffect;                                          		// 0x0008 (0x0008) [0x0000000000000000]              

	 USFXGameEffect_AntiGravity_execOnApplied_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_AntiGravity_execOnApplied_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_ArmorWeakness.OnRemoved
// [0x00020002] 
struct USFXGameEffect_ArmorWeakness_execOnRemoved_Parms
{
	// class USFXModule_Damage*                        DmgModule;                                        		// 0x0000 (0x0008) [0x0000000000000000]              

	 USFXGameEffect_ArmorWeakness_execOnRemoved_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_ArmorWeakness_execOnRemoved_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_ArmorWeakness.OnApplied
// [0x00020002] 
struct USFXGameEffect_ArmorWeakness_execOnApplied_Parms
{
	// class USFXModule_Damage*                        DmgModule;                                        		// 0x0000 (0x0008) [0x0000000000000000]              

	 USFXGameEffect_ArmorWeakness_execOnApplied_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_ArmorWeakness_execOnApplied_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_BioticPowerDamageTakenBonus.OnRemoved
// [0x00020002] 
struct USFXGameEffect_BioticPowerDamageTakenBonus_execOnRemoved_Parms
{
	// class USFXModule_Damage*                        DmgModule;                                        		// 0x0000 (0x0008) [0x0000000000000000]              

	 USFXGameEffect_BioticPowerDamageTakenBonus_execOnRemoved_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_BioticPowerDamageTakenBonus_execOnRemoved_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_BioticPowerDamageTakenBonus.OnApplied
// [0x00020002] 
struct USFXGameEffect_BioticPowerDamageTakenBonus_execOnApplied_Parms
{
	// class USFXModule_Damage*                        DmgModule;                                        		// 0x0000 (0x0008) [0x0000000000000000]              

	 USFXGameEffect_BioticPowerDamageTakenBonus_execOnApplied_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_BioticPowerDamageTakenBonus_execOnApplied_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_CryoFreeze.OnRemoved
// [0x00020002] 
struct USFXGameEffect_CryoFreeze_execOnRemoved_Parms
{

	 USFXGameEffect_CryoFreeze_execOnRemoved_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_CryoFreeze_execOnRemoved_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_CryoFreeze.OnUpdate
// [0x00820002] 
struct USFXGameEffect_CryoFreeze_execOnUpdate_Parms
{
	float                                              DeltaSeconds;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// union { struct FRvrClientEffectTarget           TargetInfo; };                                    		// 0x0004 (0x007C) [0x0000000000000000]              

	 USFXGameEffect_CryoFreeze_execOnUpdate_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_CryoFreeze_execOnUpdate_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_CryoFreeze.OnApplied
// [0x00020002] 
struct USFXGameEffect_CryoFreeze_execOnApplied_Parms
{
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0000 (0x0008) [0x0000000000000000]              

	 USFXGameEffect_CryoFreeze_execOnApplied_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_CryoFreeze_execOnApplied_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_CryoFreeze.OnFrozenPawnDied
// [0x00120000] 
struct USFXGameEffect_CryoFreeze_execOnFrozenPawnDied_Parms
{
	class ABioPawn*                                    oPawn;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 USFXGameEffect_CryoFreeze_execOnFrozenPawnDied_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_CryoFreeze_execOnFrozenPawnDied_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_DamageImmunity.OnRemoved
// [0x00020002] 
struct USFXGameEffect_DamageImmunity_execOnRemoved_Parms
{
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class USFXGameEffect*                           Effect;                                           		// 0x0008 (0x0008) [0x0000000000000000]              

	 USFXGameEffect_DamageImmunity_execOnRemoved_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_DamageImmunity_execOnRemoved_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_DamageImmunity.OnApplied
// [0x00020002] 
struct USFXGameEffect_DamageImmunity_execOnApplied_Parms
{

	 USFXGameEffect_DamageImmunity_execOnApplied_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_DamageImmunity_execOnApplied_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_DelayedCryoFreeze.OnRemoved
// [0x00020002] 
struct USFXGameEffect_DelayedCryoFreeze_execOnRemoved_Parms
{
	// class USFXGameEffect_CryoFreeze*                FreezeEffect;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	// class USFXGameEffect_HealthRegenPenalty*        HoTDebuffEffect;                                  		// 0x0008 (0x0008) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0010 (0x0008) [0x0000000000000000]              

	 USFXGameEffect_DelayedCryoFreeze_execOnRemoved_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_DelayedCryoFreeze_execOnRemoved_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_DelayedCryoFreeze.OnUpdate
// [0x00820002] 
struct USFXGameEffect_DelayedCryoFreeze_execOnUpdate_Parms
{
	float                                              DeltaSeconds;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// union { struct FRvrClientEffectTarget           TargetInfo; };                                    		// 0x0004 (0x007C) [0x0000000000000000]              

	 USFXGameEffect_DelayedCryoFreeze_execOnUpdate_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_DelayedCryoFreeze_execOnUpdate_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_DelayedCryoFreeze.OnApplied
// [0x00820002] 
struct USFXGameEffect_DelayedCryoFreeze_execOnApplied_Parms
{
	// union { struct FRvrClientEffectTarget           TargetInfo; };                                    		// 0x0000 (0x007C) [0x0000000000000000]              
	// class UBioCustomAction*                         Action;                                           		// 0x007C (0x0008) [0x0000000000000000]              

	 USFXGameEffect_DelayedCryoFreeze_execOnApplied_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_DelayedCryoFreeze_execOnApplied_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_DelayedCryoFreeze.OnFrozenPawnDied
// [0x00120000] 
struct USFXGameEffect_DelayedCryoFreeze_execOnFrozenPawnDied_Parms
{
	class ABioPawn*                                    oPawn;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 USFXGameEffect_DelayedCryoFreeze_execOnFrozenPawnDied_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_DelayedCryoFreeze_execOnFrozenPawnDied_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_PowerCombo_Cryo.OnImpact
// [0x00820002] 
struct USFXGameEffect_PowerCombo_Cryo_execOnImpact_Parms
{
	unsigned char                                      Resistance;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitLocation; };                                   		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitNormal; };                                     		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0028 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 oPawn;                                            		// 0x002C (0x0008) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0034 (0x0008) [0x0000000000000000]              
	// union { struct FRvrClientEffectTarget           TargetInfo; };                                    		// 0x003C (0x007C) [0x0000000000000000]              
	// class USFXGameEffect_MovementSpeedBonus*        SpeedEffect;                                      		// 0x00B8 (0x0008) [0x0000000000000000]              
	// float                                           SlowDuration;                                     		// 0x00C0 (0x0004) [0x0000000000000000]              
	// class USFXGameEffect*                           Effect;                                           		// 0x00C4 (0x0008) [0x0000000000000000]              
	// int                                             nMaxRagdoll;                                      		// 0x00CC (0x0004) [0x0000000000000000]              

	 USFXGameEffect_PowerCombo_Cryo_execOnImpact_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_PowerCombo_Cryo_execOnImpact_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_ElectricComboBeam.OnRemoved
// [0x00020002] 
struct USFXGameEffect_ElectricComboBeam_execOnRemoved_Parms
{
	// class ABioPawn*                                 SourcePawn;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AKActor*                                  oKActor;                                          		// 0x0008 (0x0008) [0x0000000000000000]              

	 USFXGameEffect_ElectricComboBeam_execOnRemoved_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_ElectricComboBeam_execOnRemoved_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_ElectricComboBeam.OnUpdate
// [0x00020002] 
struct USFXGameEffect_ElectricComboBeam_execOnUpdate_Parms
{
	float                                              DeltaSeconds;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 USFXGameEffect_ElectricComboBeam_execOnUpdate_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_ElectricComboBeam_execOnUpdate_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_ElectricComboBeam.PlayBeamEffect
// [0x00020003] ( FUNC_Final )
struct USFXGameEffect_ElectricComboBeam_execPlayBeamEffect_Parms
{
	class UParticleSystemComponent*                    PS;                                               		// 0x0000 (0x0008) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	union { struct FVector                             TargetLocation; };                                		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )

	 USFXGameEffect_ElectricComboBeam_execPlayBeamEffect_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_ElectricComboBeam_execPlayBeamEffect_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_ElectricComboBeam.OnApplied
// [0x00820002] 
struct USFXGameEffect_ElectricComboBeam_execOnApplied_Parms
{
	// class ASFXKActor*                               oKActor;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// union { struct FRvrClientEffectTarget           CETarget; };                                      		// 0x0008 (0x007C) [0x0000000000000000]              
	// class ABioPawn*                                 SourcePawn;                                       		// 0x0084 (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 OwnerPawn;                                        		// 0x008C (0x0008) [0x0000000000000000]              

	 USFXGameEffect_ElectricComboBeam_execOnApplied_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_ElectricComboBeam_execOnApplied_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_FireDamageOverTime.DoDamage
// [0x00020002] 
struct USFXGameEffect_FireDamageOverTime_execDoDamage_Parms
{
	// unsigned char                                   Resistance;                                       		// 0x0000 (0x0001) [0x0000000000000000]              
	// class AActor*                                   oTargetOverride;                                  		// 0x0004 (0x0008) [0x0000000000000000]              
	// class AActor*                                   oTarget;                                          		// 0x000C (0x0008) [0x0000000000000000]              
	// union { struct FVector                          HitNormal; };                                     		// 0x0014 (0x000C) [0x0000000000000000]              
	// union { struct FVector                          Force; };                                         		// 0x0020 (0x000C) [0x0000000000000000]              
	// float                                           fDamage;                                          		// 0x002C (0x0004) [0x0000000000000000]              
	// class ABioPawn*                                 oTargetPawn;                                      		// 0x0030 (0x0008) [0x0000000000000000]              

	 USFXGameEffect_FireDamageOverTime_execDoDamage_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_FireDamageOverTime_execDoDamage_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_FireDamageOverTime.AddFireDamage
// [0x00020002] 
struct USFXGameEffect_FireDamageOverTime_execAddFireDamage_Parms
{
	float                                              AddedDamage;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              NewDuration;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class USFXGameEffect_PowerCombo_Fire*           ComboEffect;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0010 (0x0008) [0x0000000000000000]              

	 USFXGameEffect_FireDamageOverTime_execAddFireDamage_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_FireDamageOverTime_execAddFireDamage_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_FireDamageOverTime.OnApplied
// [0x00020002] 
struct USFXGameEffect_FireDamageOverTime_execOnApplied_Parms
{
	// class ABioPlayerController*                     PC;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 Target;                                           		// 0x0008 (0x0008) [0x0000000000000000]              

	 USFXGameEffect_FireDamageOverTime_execOnApplied_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_FireDamageOverTime_execOnApplied_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_PowerCombo_Fire.OnImpact
// [0x00020002] 
struct USFXGameEffect_PowerCombo_Fire_execOnImpact_Parms
{
	unsigned char                                      Resistance;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitLocation; };                                   		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitNormal; };                                     		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0028 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 oPawn;                                            		// 0x002C (0x0008) [0x0000000000000000]              
	// class USFXGameEffect_FireDamageOverTime*        Effect;                                           		// 0x0034 (0x0008) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x003C (0x0008) [0x0000000000000000]              
	// class ASFXDuringAsyncWorkTicker*                oTicker;                                          		// 0x0044 (0x0008) [0x0000000000000000]              
	// union { struct SFXName                          BoneName; };                                      		// 0x004C (0x0008) [0x0000000000000000]              
	// int                                             nIndex;                                           		// 0x0054 (0x0004) [0x0000000000000000]              
	// union { struct FVector                          BoneLocation; };                                  		// 0x0058 (0x000C) [0x0000000000000000]              
	// int                                             nFlameCount;                                      		// 0x0064 (0x0004) [0x0000000000000000]              

	 USFXGameEffect_PowerCombo_Fire_execOnImpact_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_PowerCombo_Fire_execOnImpact_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_PowerCombo_Fire.OnPowerComboDetonated
// [0x00020002] 
struct USFXGameEffect_PowerCombo_Fire_execOnPowerComboDetonated_Parms
{
	class USFXPowerCustomAction*                       DetonationPower;                                  		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitLocation; };                                   		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitNormal; };                                     		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )

	 USFXGameEffect_PowerCombo_Fire_execOnPowerComboDetonated_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_PowerCombo_Fire_execOnPowerComboDetonated_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_HealShieldOverTime.OnUpdate
// [0x00020002] 
struct USFXGameEffect_HealShieldOverTime_execOnUpdate_Parms
{
	float                                              DeltaSeconds;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ABioPawn*                                 oPawn;                                            		// 0x0004 (0x0008) [0x0000000000000000]              
	// float                                           RegenAmount;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	// class ASFXShield_Base*                          oShield;                                          		// 0x0010 (0x0008) [0x0000000000000000]              

	 USFXGameEffect_HealShieldOverTime_execOnUpdate_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_HealShieldOverTime_execOnUpdate_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_MaxGrenadeBonus.OnRemoved
// [0x00020002] 
struct USFXGameEffect_MaxGrenadeBonus_execOnRemoved_Parms
{
	// class ABioPawn*                                 BP;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	// class ASFXInventoryManager*                     Inv;                                              		// 0x0008 (0x0008) [0x0000000000000000]              

	 USFXGameEffect_MaxGrenadeBonus_execOnRemoved_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_MaxGrenadeBonus_execOnRemoved_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_MaxGrenadeBonus.OnApplied
// [0x00020002] 
struct USFXGameEffect_MaxGrenadeBonus_execOnApplied_Parms
{
	// class ABioPawn*                                 BP;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	// class ASFXInventoryManager*                     Inv;                                              		// 0x0008 (0x0008) [0x0000000000000000]              

	 USFXGameEffect_MaxGrenadeBonus_execOnApplied_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_MaxGrenadeBonus_execOnApplied_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_PowerCombo_Biotic.OnPowerComboDetonated
// [0x00020002] 
struct USFXGameEffect_PowerCombo_Biotic_execOnPowerComboDetonated_Parms
{
	class USFXPowerCustomAction*                       DetonationPower;                                  		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitLocation; };                                   		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitNormal; };                                     		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )

	 USFXGameEffect_PowerCombo_Biotic_execOnPowerComboDetonated_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_PowerCombo_Biotic_execOnPowerComboDetonated_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_PowerCombo_Electric.OnImpact
// [0x00020002] 
struct USFXGameEffect_PowerCombo_Electric_execOnImpact_Parms
{
	unsigned char                                      Resistance;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitLocation; };                                   		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitNormal; };                                     		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0028 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x002C (0x0008) [0x0000000000000000]              
	// class USFXGameEffect_ElectricComboBeam*         BeamEffect;                                       		// 0x0034 (0x0008) [0x0000000000000000]              

	 USFXGameEffect_PowerCombo_Electric_execOnImpact_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_PowerCombo_Electric_execOnImpact_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_Pull.OnRemoved
// [0x00020002] 
struct USFXGameEffect_Pull_execOnRemoved_Parms
{
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0000 (0x0008) [0x0000000000000000]              

	 USFXGameEffect_Pull_execOnRemoved_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_Pull_execOnRemoved_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_Pull.MoveActor
// [0x00020002] 
struct USFXGameEffect_Pull_execMoveActor_Parms
{
	union { struct FVector                             vForce; };                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )

	 USFXGameEffect_Pull_execMoveActor_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_Pull_execMoveActor_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_Pull.OnUpdate
// [0x00020002] 
struct USFXGameEffect_Pull_execOnUpdate_Parms
{
	float                                              DeltaSeconds;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 USFXGameEffect_Pull_execOnUpdate_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_Pull_execOnUpdate_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_Pull.OnApplied
// [0x00020002] 
struct USFXGameEffect_Pull_execOnApplied_Parms
{
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class USFXGameEffect*                           Effect;                                           		// 0x0008 (0x0008) [0x0000000000000000]              

	 USFXGameEffect_Pull_execOnApplied_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_Pull_execOnApplied_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_Ragdoll.OnRemoved
// [0x00020002] 
struct USFXGameEffect_Ragdoll_execOnRemoved_Parms
{
	// class ABioPawn*                                 Pawn;                                             		// 0x0000 (0x0008) [0x0000000000000000]              

	 USFXGameEffect_Ragdoll_execOnRemoved_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_Ragdoll_execOnRemoved_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_Ragdoll.OnApplied
// [0x00020002] 
struct USFXGameEffect_Ragdoll_execOnApplied_Parms
{
	// class ABioPawn*                                 Pawn;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	// union { struct FVector                          impulse; };                                       		// 0x0008 (0x000C) [0x0000000000000000]              
	// union { struct FVector                          HitLocation; };                                   		// 0x0014 (0x000C) [0x0000000000000000]              

	 USFXGameEffect_Ragdoll_execOnApplied_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_Ragdoll_execOnApplied_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_ShockwaveLift.HasOtherGravityEffects
// [0x00020002] 
struct USFXGameEffect_ShockwaveLift_execHasOtherGravityEffects_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0004 (0x0008) [0x0000000000000000]              
	// class USFXGameEffect*                           oEffect;                                          		// 0x000C (0x0008) [0x0000000000000000]              

	 USFXGameEffect_ShockwaveLift_execHasOtherGravityEffects_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_ShockwaveLift_execHasOtherGravityEffects_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_ShockwaveLift.OnRemoved
// [0x00020002] 
struct USFXGameEffect_ShockwaveLift_execOnRemoved_Parms
{

	 USFXGameEffect_ShockwaveLift_execOnRemoved_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_ShockwaveLift_execOnRemoved_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_ShockwaveLift.OnUpdate
// [0x00020002] 
struct USFXGameEffect_ShockwaveLift_execOnUpdate_Parms
{
	float                                              DeltaSeconds;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// union { struct FVector                          Force; };                                         		// 0x0004 (0x000C) [0x0000000000000000]              

	 USFXGameEffect_ShockwaveLift_execOnUpdate_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_ShockwaveLift_execOnUpdate_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_ShockwaveLift.OnApplied
// [0x00020002] 
struct USFXGameEffect_ShockwaveLift_execOnApplied_Parms
{

	 USFXGameEffect_ShockwaveLift_execOnApplied_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_ShockwaveLift_execOnApplied_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_Singularity.OutOfRangeCheck
// [0x00020002] 
struct USFXGameEffect_Singularity_execOutOfRangeCheck_Parms
{
	float                                              Distance;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0008 (0x0008) [0x0000000000000000]              

	 USFXGameEffect_Singularity_execOutOfRangeCheck_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_Singularity_execOutOfRangeCheck_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_Singularity.IsStillInSingularity
// [0x00020002] 
struct USFXGameEffect_Singularity_execIsStillInSingularity_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0004 (0x0008) [0x0000000000000000]              
	// class USFXGameEffect*                           oEffect;                                          		// 0x000C (0x0008) [0x0000000000000000]              

	 USFXGameEffect_Singularity_execIsStillInSingularity_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_Singularity_execIsStillInSingularity_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_Singularity.OnRemoved
// [0x00020002] 
struct USFXGameEffect_Singularity_execOnRemoved_Parms
{
	// class ABioPawn*                                 oBioPawn;                                         		// 0x0000 (0x0008) [0x0000000000000000]              

	 USFXGameEffect_Singularity_execOnRemoved_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_Singularity_execOnRemoved_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_Singularity.AddForceToActor
// [0x00020002] 
struct USFXGameEffect_Singularity_execAddForceToActor_Parms
{
	union { struct FVector                             vForce; };                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )

	 USFXGameEffect_Singularity_execAddForceToActor_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_Singularity_execAddForceToActor_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_Singularity.InitialMovement
// [0x00020002] 
struct USFXGameEffect_Singularity_execInitialMovement_Parms
{
	// union { struct FVector                          Direction; };                                     		// 0x0000 (0x000C) [0x0000000000000000]              

	 USFXGameEffect_Singularity_execInitialMovement_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_Singularity_execInitialMovement_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_Singularity.UpdateActor
// [0x00020002] 
struct USFXGameEffect_Singularity_execUpdateActor_Parms
{
	// union { struct FVector                          Direction; };                                     		// 0x0000 (0x000C) [0x0000000000000000]              
	// float                                           Distance;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           fVelocity;                                        		// 0x0010 (0x0004) [0x0000000000000000]              

	 USFXGameEffect_Singularity_execUpdateActor_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_Singularity_execUpdateActor_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_Singularity.OnApplied
// [0x00020002] 
struct USFXGameEffect_Singularity_execOnApplied_Parms
{

	 USFXGameEffect_Singularity_execOnApplied_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_Singularity_execOnApplied_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_Stasis.OnRemoved
// [0x00020002] 
struct USFXGameEffect_Stasis_execOnRemoved_Parms
{

	 USFXGameEffect_Stasis_execOnRemoved_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_Stasis_execOnRemoved_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_Stasis.UnStasisTarget
// [0x00020002] 
struct USFXGameEffect_Stasis_execUnStasisTarget_Parms
{
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class USFXGameEffect*                           Effect;                                           		// 0x0008 (0x0008) [0x0000000000000000]              

	 USFXGameEffect_Stasis_execUnStasisTarget_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_Stasis_execUnStasisTarget_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_Stasis.OnUpdate
// [0x00020002] 
struct USFXGameEffect_Stasis_execOnUpdate_Parms
{
	float                                              DeltaSeconds;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 USFXGameEffect_Stasis_execOnUpdate_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_Stasis_execOnUpdate_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_Stasis.NullVelocity
// [0x00020002] 
struct USFXGameEffect_Stasis_execNullVelocity_Parms
{
	float                                              DeltaSeconds;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// union { struct FVector                          LinearForce; };                                   		// 0x0004 (0x000C) [0x0000000000000000]              
	// union { struct FVector                          AngularForce; };                                  		// 0x0010 (0x000C) [0x0000000000000000]              

	 USFXGameEffect_Stasis_execNullVelocity_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_Stasis_execNullVelocity_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_Stasis.StartCrustVFX
// [0x00820003] ( FUNC_Final )
struct USFXGameEffect_Stasis_execStartCrustVFX_Parms
{
	// class URvrClientEffectManager*                  Manager;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// union { struct FRvrClientEffectTarget           Target; };                                        		// 0x0008 (0x007C) [0x0000000000000000]              

	 USFXGameEffect_Stasis_execStartCrustVFX_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_Stasis_execStartCrustVFX_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_Stasis.OnApplied
// [0x00020002] 
struct USFXGameEffect_Stasis_execOnApplied_Parms
{
	// class ASFXAI_Core*                              AI;                                               		// 0x0000 (0x0008) [0x0000000000000000]              

	 USFXGameEffect_Stasis_execOnApplied_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_Stasis_execOnApplied_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Stasis.PopulatePowerStatBarEvolves
// [0x00020002] 
struct USFXPowerCustomAction_Stasis_execPopulatePowerStatBarEvolves_Parms
{

	 USFXPowerCustomAction_Stasis_execPopulatePowerStatBarEvolves_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Stasis_execPopulatePowerStatBarEvolves_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Stasis.RecalculateAllPowerData
// [0x00024002] 
struct USFXPowerCustomAction_Stasis_execRecalculateAllPowerData_Parms
{
	unsigned long                                      bReset;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 USFXPowerCustomAction_Stasis_execRecalculateAllPowerData_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Stasis_execRecalculateAllPowerData_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Stasis.EvolvePower
// [0x00020002] 
struct USFXPowerCustomAction_Stasis_execEvolvePower_Parms
{
	unsigned char                                      choice;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )

	 USFXPowerCustomAction_Stasis_execEvolvePower_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Stasis_execEvolvePower_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Stasis.ShouldUsePower
// [0x00420002] 
struct USFXPowerCustomAction_Stasis_execShouldUsePower_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    sOptionalInfo; };                                 		// 0x0008 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ASFXPawn*                                 oPawn;                                            		// 0x001C (0x0008) [0x0000000000000000]              

	 USFXPowerCustomAction_Stasis_execShouldUsePower_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Stasis_execShouldUsePower_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Stasis.OnGameEffectEnded
// [0x00020002] 
struct USFXPowerCustomAction_Stasis_execOnGameEffectEnded_Parms
{
	class AActor*                                      oActor;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 USFXPowerCustomAction_Stasis_execOnGameEffectEnded_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Stasis_execOnGameEffectEnded_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Stasis.OnOwnerDestroyed
// [0x00020002] 
struct USFXPowerCustomAction_Stasis_execOnOwnerDestroyed_Parms
{

	 USFXPowerCustomAction_Stasis_execOnOwnerDestroyed_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Stasis_execOnOwnerDestroyed_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Stasis.DoJoinInProgress
// [0x00020002] 
struct USFXPowerCustomAction_Stasis_execDoJoinInProgress_Parms
{
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class USFXGameEffect*                           oEffect;                                          		// 0x0008 (0x0008) [0x0000000000000000]              
	// class AActor*                                   oActor;                                           		// 0x0010 (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 BP;                                               		// 0x0018 (0x0008) [0x0000000000000000]              

	 USFXPowerCustomAction_Stasis_execDoJoinInProgress_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Stasis_execDoJoinInProgress_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Stasis.UnStasisCurrentTargets
// [0x00020002] 
struct USFXPowerCustomAction_Stasis_execUnStasisCurrentTargets_Parms
{
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class USFXGameEffect*                           oEffect;                                          		// 0x0008 (0x0008) [0x0000000000000000]              
	// class AActor*                                   oActor;                                           		// 0x0010 (0x0008) [0x0000000000000000]              

	 USFXPowerCustomAction_Stasis_execUnStasisCurrentTargets_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Stasis_execUnStasisCurrentTargets_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Stasis.ClientImpactClearEffects
// [0x00020002] 
struct USFXPowerCustomAction_Stasis_execClientImpactClearEffects_Parms
{
	class AActor*                                      oImpacted;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0008 (0x0008) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0010 (0x0004) [0x0000000000000000]              

	 USFXPowerCustomAction_Stasis_execClientImpactClearEffects_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Stasis_execClientImpactClearEffects_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Stasis.ImpactStasis
// [0x00020002] 
struct USFXPowerCustomAction_Stasis_execImpactStasis_Parms
{
	class AActor*                                      oImpacted;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x000C (0x0008) [0x0000000000000000]              
	// class USFXGameEffect_Stasis*                    StasisEffect;                                     		// 0x0014 (0x0008) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x001C (0x0004) [0x0000000000000000]              

	 USFXPowerCustomAction_Stasis_execImpactStasis_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Stasis_execImpactStasis_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Stasis.ImpactPushAway
// [0x00020002] 
struct USFXPowerCustomAction_Stasis_execImpactPushAway_Parms
{
	class AActor*                                      oImpacted;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// float                                           fDamage;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	// union { struct FVector                          vForce; };                                        		// 0x000C (0x000C) [0x0000000000000000]              
	// union { struct FVector                          HitNormal; };                                     		// 0x0018 (0x000C) [0x0000000000000000]              
	// class AActor*                                   oTargetOverride;                                  		// 0x0024 (0x0008) [0x0000000000000000]              
	// unsigned long                                   bImpacted;                                        		// 0x002C (0x0004) [0x0000000000000000]              
	// unsigned char                                   Resistance;                                       		// 0x0030 (0x0001) [0x0000000000000000]              

	 USFXPowerCustomAction_Stasis_execImpactPushAway_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Stasis_execImpactPushAway_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Stasis.OnImpact
// [0x00020002] 
struct USFXPowerCustomAction_Stasis_execOnImpact_Parms
{
	unsigned char                                      Resistance;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitLocation; };                                   		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitNormal; };                                     		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0028 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x002C (0x0008) [0x0000000000000000]              
	// float                                           fDuration;                                        		// 0x0034 (0x0004) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0038 (0x0004) [0x0000000000000000]              

	 USFXPowerCustomAction_Stasis_execOnImpact_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Stasis_execOnImpact_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Stasis.TickCustomAction
// [0x00020802] ( FUNC_Event )
struct USFXPowerCustomAction_Stasis_eventTickCustomAction_Parms
{
	float                                              fDeltaTime;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 USFXPowerCustomAction_Stasis_eventTickCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Stasis_eventTickCustomAction_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Stasis.ClientEndStasisEffect
// [0x00020003] ( FUNC_Final )
struct USFXPowerCustomAction_Stasis_execClientEndStasisEffect_Parms
{
	class AActor*                                      oActor;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0008 (0x0008) [0x0000000000000000]              
	// class USFXGameEffect_Stasis*                    Effect;                                           		// 0x0010 (0x0008) [0x0000000000000000]              

	 USFXPowerCustomAction_Stasis_execClientEndStasisEffect_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Stasis_execClientEndStasisEffect_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Stasis.ClientDoCustomActionImpact
// [0x00024002] 
struct USFXPowerCustomAction_Stasis_execClientDoCustomActionImpact_Parms
{
	class AActor*                                      oActor;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ImpactCount;                                      		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bFirstTarget;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	union { struct FVector                             HitLocation; };                                   		// 0x0010 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	union { struct FVector                             HitNormal; };                                     		// 0x001C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                CustomActionReactionType;                         		// 0x0028 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 USFXPowerCustomAction_Stasis_execClientDoCustomActionImpact_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Stasis_execClientDoCustomActionImpact_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Stasis.ClientDoPowerSubsequentImpact
// [0x00024002] 
struct USFXPowerCustomAction_Stasis_execClientDoPowerSubsequentImpact_Parms
{
	class AActor*                                      oActor;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                CustomActionReactionType;                         		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              Duration;                                         		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                ImpactCount;                                      		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              Delay;                                            		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      DoCallback;                                       		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 USFXPowerCustomAction_Stasis_execClientDoPowerSubsequentImpact_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Stasis_execClientDoPowerSubsequentImpact_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Stasis.StopStasisBubble
// [0x00020002] 
struct USFXPowerCustomAction_Stasis_execStopStasisBubble_Parms
{
	unsigned long                                      bReplicate;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 USFXPowerCustomAction_Stasis_execStopStasisBubble_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Stasis_execStopStasisBubble_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Stasis.StartStasisBubbleVFX
// [0x00020003] ( FUNC_Final )
struct USFXPowerCustomAction_Stasis_execStartStasisBubbleVFX_Parms
{
	// union { struct FVector                          VParam; };                                        		// 0x0000 (0x000C) [0x0000000000000000]              
	// class URvrClientEffectManager*                  Manager;                                          		// 0x000C (0x0008) [0x0000000000000000]              

	 USFXPowerCustomAction_Stasis_execStartStasisBubbleVFX_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Stasis_execStartStasisBubbleVFX_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Stasis.OnPowerDetonated
// [0x00024002] 
struct USFXPowerCustomAction_Stasis_execOnPowerDetonated_Parms
{
	union { struct FVector                             HitLocation; };                                   		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitNormal; };                                     		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class ASFXProjectile_PowerCustomAction*            oProjectile;                                      		// 0x0018 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      HitActor;                                         		// 0x0020 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 USFXPowerCustomAction_Stasis_execOnPowerDetonated_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Stasis_execOnPowerDetonated_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Stasis.StartPowerCooldown
// [0x00020002] 
struct USFXPowerCustomAction_Stasis_execStartPowerCooldown_Parms
{

	 USFXPowerCustomAction_Stasis_execStartPowerCooldown_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Stasis_execStartPowerCooldown_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Stasis.StartCustomAction
// [0x00020002] 
struct USFXPowerCustomAction_Stasis_execStartCustomAction_Parms
{

	 USFXPowerCustomAction_Stasis_execStartCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Stasis_execStartCustomAction_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_WeaponDamageTakenBonus.OnRemoved
// [0x00020002] 
struct USFXGameEffect_WeaponDamageTakenBonus_execOnRemoved_Parms
{
	// class USFXModule_Damage*                        DmgModule;                                        		// 0x0000 (0x0008) [0x0000000000000000]              

	 USFXGameEffect_WeaponDamageTakenBonus_execOnRemoved_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_WeaponDamageTakenBonus_execOnRemoved_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_WeaponDamageTakenBonus.OnApplied
// [0x00020002] 
struct USFXGameEffect_WeaponDamageTakenBonus_execOnApplied_Parms
{
	// class USFXModule_Damage*                        DmgModule;                                        		// 0x0000 (0x0008) [0x0000000000000000]              

	 USFXGameEffect_WeaponDamageTakenBonus_execOnApplied_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_WeaponDamageTakenBonus_execOnApplied_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_WeightCapacity.OnRemoved
// [0x00020002] 
struct USFXGameEffect_WeightCapacity_execOnRemoved_Parms
{
	// class ASFXPawn_Player*                          Player;                                           		// 0x0000 (0x0008) [0x0000000000000000]              

	 USFXGameEffect_WeightCapacity_execOnRemoved_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_WeightCapacity_execOnRemoved_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_WeightCapacity.OnApplied
// [0x00020002] 
struct USFXGameEffect_WeightCapacity_execOnApplied_Parms
{
	// class ASFXPawn_Player*                          Player;                                           		// 0x0000 (0x0008) [0x0000000000000000]              

	 USFXGameEffect_WeightCapacity_execOnApplied_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_WeightCapacity_execOnApplied_Parms() {}
};

// Function SFXGameContent.SFXPlaceable.ActivatePlaceable
// [0x00020102] ( FUNC_Simulated )
struct ASFXPlaceable_execActivatePlaceable_Parms
{

	 ASFXPlaceable_execActivatePlaceable_Parms() { memset(this, 0, sizeof *this); }
	~ASFXPlaceable_execActivatePlaceable_Parms() {}
};

// Function SFXGameContent.SFXPlaceable.DeactivatePlaceable
// [0x00020102] ( FUNC_Simulated )
struct ASFXPlaceable_execDeactivatePlaceable_Parms
{

	 ASFXPlaceable_execDeactivatePlaceable_Parms() { memset(this, 0, sizeof *this); }
	~ASFXPlaceable_execDeactivatePlaceable_Parms() {}
};

// Function SFXGameContent.SFXPlaceable.AllowPlaceableDamageEvents
// [0x00020002] 
struct ASFXPlaceable_execAllowPlaceableDamageEvents_Parms
{
	class AController*                                 EventInstigator;                                  		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 ASFXPlaceable_execAllowPlaceableDamageEvents_Parms() { memset(this, 0, sizeof *this); }
	~ASFXPlaceable_execAllowPlaceableDamageEvents_Parms() {}
};

// Function SFXGameContent.SFXPlaceable.ImpactWithPower
// [0x00020102] ( FUNC_Simulated )
struct ASFXPlaceable_execImpactWithPower_Parms
{
	unsigned char                                      Resistance;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       Caster;                                           		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitLocation; };                                   		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitNormal; };                                     		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             Force; };                                         		// 0x0028 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0034 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x003C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 ASFXPlaceable_execImpactWithPower_Parms() { memset(this, 0, sizeof *this); }
	~ASFXPlaceable_execImpactWithPower_Parms() {}
};

// Function SFXGameContent.SFXPlaceable.AreaDamage
// [0x00020002] 
struct ASFXPlaceable_execAreaDamage_Parms
{
	float                                              Damage;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Force;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              ImpactRadius;                                     		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AActor*                                   NearbyActor;                                      		// 0x0014 (0x0008) [0x0000000000000000]              
	// union { struct FVector                          HitNormal; };                                     		// 0x001C (0x000C) [0x0000000000000000]              
	// class AActor*                                   TargetOverride;                                   		// 0x0028 (0x0008) [0x0000000000000000]              
	// unsigned char                                   Resistance;                                       		// 0x0030 (0x0001) [0x0000000000000000]              
	// union { struct FVector                          vForce; };                                        		// 0x0034 (0x000C) [0x0000000000000000]              

	 ASFXPlaceable_execAreaDamage_Parms() { memset(this, 0, sizeof *this); }
	~ASFXPlaceable_execAreaDamage_Parms() {}
};

// Function SFXGameContent.SFXPlaceable.AreaDamageForActor
// [0x00020000] 
struct ASFXPlaceable_execAreaDamageForActor_Parms
{
	class AActor*                                      HitActor;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 ASFXPlaceable_execAreaDamageForActor_Parms() { memset(this, 0, sizeof *this); }
	~ASFXPlaceable_execAreaDamageForActor_Parms() {}
};

// Function SFXGameContent.SFXPlaceable.PlaceableDestroyed
// [0x00020102] ( FUNC_Simulated )
struct ASFXPlaceable_execPlaceableDestroyed_Parms
{

	 ASFXPlaceable_execPlaceableDestroyed_Parms() { memset(this, 0, sizeof *this); }
	~ASFXPlaceable_execPlaceableDestroyed_Parms() {}
};

// Function SFXGameContent.SFXPlaceable.ResetPlaceable
// [0x00020102] ( FUNC_Simulated )
struct ASFXPlaceable_execResetPlaceable_Parms
{

	 ASFXPlaceable_execResetPlaceable_Parms() { memset(this, 0, sizeof *this); }
	~ASFXPlaceable_execResetPlaceable_Parms() {}
};

// Function SFXGameContent.SFXPlaceable.ReplicatedEvent
// [0x00020902] ( FUNC_Simulated | FUNC_Event )
struct ASFXPlaceable_eventReplicatedEvent_Parms
{
	union { struct SFXName                             VarName; };                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 ASFXPlaceable_eventReplicatedEvent_Parms() { memset(this, 0, sizeof *this); }
	~ASFXPlaceable_eventReplicatedEvent_Parms() {}
};

// Function SFXGameContent.SFXProjectile_PowerCustomAction_SuperSeeking.InitializeRotation
// [0x00020002] 
struct ASFXProjectile_PowerCustomAction_SuperSeeking_execInitializeRotation_Parms
{
	class APawn*                                       oCasterPawn;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ABioPlayerController*                     PC;                                               		// 0x0008 (0x0008) [0x0000000000000000]              
	// float                                           fAngle;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	// union { struct FVector                          vToTarget; };                                     		// 0x0014 (0x000C) [0x0000000000000000]              
	// union { struct FRotator                         rToTarget; };                                     		// 0x0020 (0x000C) [0x0000000000000000]              
	// union { struct FRotator                         rDeltaRot; };                                     		// 0x002C (0x000C) [0x0000000000000000]              
	// union { struct FQuat                            qToTarget; };                                     		// 0x0040 (0x0010) [0x0000000000000000]              
	// union { struct FQuat                            qCameraRot; };                                    		// 0x0050 (0x0010) [0x0000000000000000]              
	// union { struct FQuat                            qDeltaRot; };                                     		// 0x0060 (0x0010) [0x0000000000000000]              
	// float                                           fPitchRatio;                                      		// 0x0070 (0x0004) [0x0000000000000000]              
	// union { struct FQuat                            AimOffset; };                                     		// 0x0080 (0x0010) [0x0000000000000000]              
	// float                                           fAimScale;                                        		// 0x0090 (0x0004) [0x0000000000000000]              

	 ASFXProjectile_PowerCustomAction_SuperSeeking_execInitializeRotation_Parms() { memset(this, 0, sizeof *this); }
	~ASFXProjectile_PowerCustomAction_SuperSeeking_execInitializeRotation_Parms() {}
};

// Function SFXGameContent.SFXProjectile_PowerCustomAction_SuperSeeking.TickAimRotation
// [0x00020102] ( FUNC_Simulated )
struct ASFXProjectile_PowerCustomAction_SuperSeeking_execTickAimRotation_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             SeekVector; };                                    		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// float                                           Factor;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	// union { struct FQuat                            Q; };                                             		// 0x0020 (0x0010) [0x0000000000000000]              

	 ASFXProjectile_PowerCustomAction_SuperSeeking_execTickAimRotation_Parms() { memset(this, 0, sizeof *this); }
	~ASFXProjectile_PowerCustomAction_SuperSeeking_execTickAimRotation_Parms() {}
};

// Function SFXGameContent.SFXProjectile_PowerCustomAction_Seeking.Tick_Prediction
// [0x00020002] 
struct ASFXProjectile_PowerCustomAction_Seeking_execTick_Prediction_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ASFXProjectile_PowerCustomAction_Seeking* oTargetProjectile;                                		// 0x0004 (0x0008) [0x0000000000000000]              
	// union { struct FRotator                         NewRotation; };                                   		// 0x000C (0x000C) [0x0000000000000000]              

	 ASFXProjectile_PowerCustomAction_Seeking_execTick_Prediction_Parms() { memset(this, 0, sizeof *this); }
	~ASFXProjectile_PowerCustomAction_Seeking_execTick_Prediction_Parms() {}
};

// Function SFXGameContent.SFXProjectile_PowerCustomAction_Seeking.Recycle
// [0x00020102] ( FUNC_Simulated )
struct ASFXProjectile_PowerCustomAction_Seeking_execRecycle_Parms
{

	 ASFXProjectile_PowerCustomAction_Seeking_execRecycle_Parms() { memset(this, 0, sizeof *this); }
	~ASFXProjectile_PowerCustomAction_Seeking_execRecycle_Parms() {}
};

// Function SFXGameContent.SFXProjectile_PowerCustomAction_Seeking.InitializeRotation
// [0x00020000] 
struct ASFXProjectile_PowerCustomAction_Seeking_execInitializeRotation_Parms
{
	class APawn*                                       oCasterPawn;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 ASFXProjectile_PowerCustomAction_Seeking_execInitializeRotation_Parms() { memset(this, 0, sizeof *this); }
	~ASFXProjectile_PowerCustomAction_Seeking_execInitializeRotation_Parms() {}
};

// Function SFXGameContent.SFXProjectile_PowerCustomAction_Seeking.InitializePowerProjectile
// [0x00020102] ( FUNC_Simulated )
struct ASFXProjectile_PowerCustomAction_Seeking_execInitializePowerProjectile_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fTravelSpeed;                                     		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fRadius;                                          		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class USFXPowerCustomAction*                       oPower;                                           		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class APawn*                                    oCasterPawn;                                      		// 0x001C (0x0008) [0x0000000000000000]              

	 ASFXProjectile_PowerCustomAction_Seeking_execInitializePowerProjectile_Parms() { memset(this, 0, sizeof *this); }
	~ASFXProjectile_PowerCustomAction_Seeking_execInitializePowerProjectile_Parms() {}
};

// Function SFXGameContent.SFXProjectile_PowerCustomAction_Seeking.PawnEvadedPower
// [0x00020002] 
struct ASFXProjectile_PowerCustomAction_Seeking_execPawnEvadedPower_Parms
{
	class ABioPawn*                                    Pawn;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { struct SFXName                             Label; };                                         		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              TimeBeforeImpact;                                 		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 ASFXProjectile_PowerCustomAction_Seeking_execPawnEvadedPower_Parms() { memset(this, 0, sizeof *this); }
	~ASFXProjectile_PowerCustomAction_Seeking_execPawnEvadedPower_Parms() {}
};

// Function SFXGameContent.SFXProjectile_PowerCustomAction_Seeking.CanLockOn
// [0x00020102] ( FUNC_Simulated )
struct ASFXProjectile_PowerCustomAction_Seeking_execCanLockOn_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       CasterPawn;                                       		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AKActor*                                  oKActor;                                          		// 0x0014 (0x0008) [0x0000000000000000]              
	// class USFXSelectionModule*                      Module;                                           		// 0x001C (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 oPawn;                                            		// 0x0024 (0x0008) [0x0000000000000000]              
	// class ASFXPlaceable*                            oCP;                                              		// 0x002C (0x0008) [0x0000000000000000]              

	 ASFXProjectile_PowerCustomAction_Seeking_execCanLockOn_Parms() { memset(this, 0, sizeof *this); }
	~ASFXProjectile_PowerCustomAction_Seeking_execCanLockOn_Parms() {}
};

// Function SFXGameContent.SFXProjectile_PowerCustomAction_Seeking.Tick
// [0x00020102] ( FUNC_Simulated )
struct ASFXProjectile_PowerCustomAction_Seeking_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 ASFXProjectile_PowerCustomAction_Seeking_execTick_Parms() { memset(this, 0, sizeof *this); }
	~ASFXProjectile_PowerCustomAction_Seeking_execTick_Parms() {}
};

// Function SFXGameContent.SFXProjectile_PowerCustomAction_Seeking.TickAimRotation
// [0x00020102] ( FUNC_Simulated )
struct ASFXProjectile_PowerCustomAction_Seeking_execTickAimRotation_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             SeekVector; };                                    		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// union { struct FQuat                            Q; };                                             		// 0x0010 (0x0010) [0x0000000000000000]              

	 ASFXProjectile_PowerCustomAction_Seeking_execTickAimRotation_Parms() { memset(this, 0, sizeof *this); }
	~ASFXProjectile_PowerCustomAction_Seeking_execTickAimRotation_Parms() {}
};

// Function SFXGameContent.SFXProjectile_PowerCustomAction_Seeking.TickAim
// [0x00020102] ( FUNC_Simulated )
struct ASFXProjectile_PowerCustomAction_Seeking_execTickAim_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// union { struct FVector                          V; };                                             		// 0x0004 (0x000C) [0x0000000000000000]              
	// float                                           Dist;                                             		// 0x0010 (0x0004) [0x0000000000000000]              

	 ASFXProjectile_PowerCustomAction_Seeking_execTickAim_Parms() { memset(this, 0, sizeof *this); }
	~ASFXProjectile_PowerCustomAction_Seeking_execTickAim_Parms() {}
};

// Function SFXGameContent.SFXProjectile_PowerCustomAction_Seeking.GetAimLocation
// [0x00020102] ( FUNC_Simulated )
struct ASFXProjectile_PowerCustomAction_Seeking_execGetAimLocation_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             ReturnValue; };                                   		// 0x0008 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// union { struct FVector                          AimLocation; };                                   		// 0x0014 (0x000C) [0x0000000000000000]              
	// class ABioPawn*                                 oPawn;                                            		// 0x0020 (0x0008) [0x0000000000000000]              
	// class ASFXPlaceable*                            CP;                                               		// 0x0028 (0x0008) [0x0000000000000000]              
	// class USFXSimpleUseModule*                      UseModule;                                        		// 0x0030 (0x0008) [0x0000000000000000]              

	 ASFXProjectile_PowerCustomAction_Seeking_execGetAimLocation_Parms() { memset(this, 0, sizeof *this); }
	~ASFXProjectile_PowerCustomAction_Seeking_execGetAimLocation_Parms() {}
};

// Function SFXGameContent.SFXProjectile_PowerCustomAction_Seeking.Timer
// [0x00020002] 
struct ASFXProjectile_PowerCustomAction_Seeking_execTimer_Parms
{
	// class APawn*                                    PawnTarget;                                       		// 0x0000 (0x0008) [0x0000000000000000]              

	 ASFXProjectile_PowerCustomAction_Seeking_execTimer_Parms() { memset(this, 0, sizeof *this); }
	~ASFXProjectile_PowerCustomAction_Seeking_execTimer_Parms() {}
};

// Function SFXGameContent.SFXProjectile_PowerCustomAction_Seeking.ReplicatedEvent
// [0x00020902] ( FUNC_Simulated | FUNC_Event )
struct ASFXProjectile_PowerCustomAction_Seeking_eventReplicatedEvent_Parms
{
	union { struct SFXName                             VarName; };                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 ASFXProjectile_PowerCustomAction_Seeking_eventReplicatedEvent_Parms() { memset(this, 0, sizeof *this); }
	~ASFXProjectile_PowerCustomAction_Seeking_eventReplicatedEvent_Parms() {}
};

// Function SFXGameContent.SFXProjectile_PowerCustomAction_Shockwave.ReplicateExplode
// [0x00020000] 
struct ASFXProjectile_PowerCustomAction_Shockwave_execReplicateExplode_Parms
{
	union { struct FVector                             HitLocation; };                                   		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitNormal; };                                     		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )

	 ASFXProjectile_PowerCustomAction_Shockwave_execReplicateExplode_Parms() { memset(this, 0, sizeof *this); }
	~ASFXProjectile_PowerCustomAction_Shockwave_execReplicateExplode_Parms() {}
};

// Function SFXGameContent.SFXProjectile_PowerCustomAction_Shockwave.Tick
// [0x00020102] ( FUNC_Simulated )
struct ASFXProjectile_PowerCustomAction_Shockwave_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 ASFXProjectile_PowerCustomAction_Shockwave_execTick_Parms() { memset(this, 0, sizeof *this); }
	~ASFXProjectile_PowerCustomAction_Shockwave_execTick_Parms() {}
};

// Function SFXGameContent.SFXProjectile_PowerCustomAction_Shockwave.InitializePowerProjectile
// [0x00020102] ( FUNC_Simulated )
struct ASFXProjectile_PowerCustomAction_Shockwave_execInitializePowerProjectile_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fTravelSpeed;                                     		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fRadius;                                          		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class USFXPowerCustomAction*                       oPower;                                           		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPlayerController*                     PC;                                               		// 0x001C (0x0008) [0x0000000000000000]              

	 ASFXProjectile_PowerCustomAction_Shockwave_execInitializePowerProjectile_Parms() { memset(this, 0, sizeof *this); }
	~ASFXProjectile_PowerCustomAction_Shockwave_execInitializePowerProjectile_Parms() {}
};

// Function SFXGameContent.SFXProjectile_PowerCustomAction_Shockwave.ProcessTouch
// [0x00020002] 
struct ASFXProjectile_PowerCustomAction_Shockwave_execProcessTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitLocation; };                                   		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitNormal; };                                     		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )

	 ASFXProjectile_PowerCustomAction_Shockwave_execProcessTouch_Parms() { memset(this, 0, sizeof *this); }
	~ASFXProjectile_PowerCustomAction_Shockwave_execProcessTouch_Parms() {}
};

// Function SFXGameContent.SFXProjectile_PowerCustomAction_Shockwave.HitWall
// [0x00020802] ( FUNC_Event )
struct ASFXProjectile_PowerCustomAction_Shockwave_eventHitWall_Parms
{
	union { struct FVector                             HitNormal; };                                     		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Wall;                                             		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         WallComp;                                         		// 0x0014 (0x0008) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )

	 ASFXProjectile_PowerCustomAction_Shockwave_eventHitWall_Parms() { memset(this, 0, sizeof *this); }
	~ASFXProjectile_PowerCustomAction_Shockwave_eventHitWall_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_ConstraintDmgBonus.OnRemoved
// [0x00020002] 
struct USFXGameEffect_ConstraintDmgBonus_execOnRemoved_Parms
{
	// class ASFXWeapon*                               Weapon;                                           		// 0x0000 (0x0008) [0x0000000000000000]              

	 USFXGameEffect_ConstraintDmgBonus_execOnRemoved_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_ConstraintDmgBonus_execOnRemoved_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_ConstraintDmgBonus.OnApplied
// [0x00020002] 
struct USFXGameEffect_ConstraintDmgBonus_execOnApplied_Parms
{
	// class ASFXWeapon*                               Weapon;                                           		// 0x0000 (0x0008) [0x0000000000000000]              

	 USFXGameEffect_ConstraintDmgBonus_execOnApplied_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_ConstraintDmgBonus_execOnApplied_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_SpareAmmo.OnRemoved
// [0x00020002] 
struct USFXGameEffect_SpareAmmo_execOnRemoved_Parms
{
	// class ASFXWeapon*                               Weapon;                                           		// 0x0000 (0x0008) [0x0000000000000000]              

	 USFXGameEffect_SpareAmmo_execOnRemoved_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_SpareAmmo_execOnRemoved_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_SpareAmmo.OnApplied
// [0x00020002] 
struct USFXGameEffect_SpareAmmo_execOnApplied_Parms
{
	// class ASFXWeapon*                               Weapon;                                           		// 0x0000 (0x0008) [0x0000000000000000]              

	 USFXGameEffect_SpareAmmo_execOnApplied_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_SpareAmmo_execOnApplied_Parms() {}
};

// Function SFXGameContent.SFXGUI_StandardSniperZoomReticle.ZoomChanged
// [0x00020802] ( FUNC_Event )
struct USFXGUI_StandardSniperZoomReticle_eventZoomChanged_Parms
{
	int                                                nZoom;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 USFXGUI_StandardSniperZoomReticle_eventZoomChanged_Parms() { memset(this, 0, sizeof *this); }
	~USFXGUI_StandardSniperZoomReticle_eventZoomChanged_Parms() {}
};

// Function SFXGameContent.SFXGUI_StandardSniperZoomReticle.WeaponAmmoChanged
// [0x00020802] ( FUNC_Event )
struct USFXGUI_StandardSniperZoomReticle_eventWeaponAmmoChanged_Parms
{
	int                                                nAmmo;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 USFXGUI_StandardSniperZoomReticle_eventWeaponAmmoChanged_Parms() { memset(this, 0, sizeof *this); }
	~USFXGUI_StandardSniperZoomReticle_eventWeaponAmmoChanged_Parms() {}
};

// Function SFXGameContent.SFXGUI_StandardSniperZoomReticle.DistanceToTargetChanged
// [0x00020802] ( FUNC_Event )
struct USFXGUI_StandardSniperZoomReticle_eventDistanceToTargetChanged_Parms
{
	float                                              fDistance;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 USFXGUI_StandardSniperZoomReticle_eventDistanceToTargetChanged_Parms() { memset(this, 0, sizeof *this); }
	~USFXGUI_StandardSniperZoomReticle_eventDistanceToTargetChanged_Parms() {}
};

// Function SFXGameContent.SFXGUI_StandardSniperZoomReticle.OnReticleLoaded
// [0x00020002] 
struct USFXGUI_StandardSniperZoomReticle_execOnReticleLoaded_Parms
{
	// class UGFxValue*                                distanceMC;                                       		// 0x0000 (0x0008) [0x0000000000000000]              

	 USFXGUI_StandardSniperZoomReticle_execOnReticleLoaded_Parms() { memset(this, 0, sizeof *this); }
	~USFXGUI_StandardSniperZoomReticle_execOnReticleLoaded_Parms() {}
};

// Function SFXGameContent.SFXGUI_StandardSniperZoomReticle.PerformReticleHide
// [0x00020802] ( FUNC_Event )
struct USFXGUI_StandardSniperZoomReticle_eventPerformReticleHide_Parms
{
	unsigned long                                      bInstant;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 USFXGUI_StandardSniperZoomReticle_eventPerformReticleHide_Parms() { memset(this, 0, sizeof *this); }
	~USFXGUI_StandardSniperZoomReticle_eventPerformReticleHide_Parms() {}
};

// Function SFXGameContent.SFXGUI_StandardSniperZoomReticle.PerformReticleShow
// [0x00020802] ( FUNC_Event )
struct USFXGUI_StandardSniperZoomReticle_eventPerformReticleShow_Parms
{
	unsigned long                                      bInstant;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 USFXGUI_StandardSniperZoomReticle_eventPerformReticleShow_Parms() { memset(this, 0, sizeof *this); }
	~USFXGUI_StandardSniperZoomReticle_eventPerformReticleShow_Parms() {}
};

// Function SFXGameContent.SFXWeapon_SMG_Shuriken.GetWeaponSpecificDecalData
// [0x00420102] ( FUNC_Simulated )
struct ASFXWeapon_SMG_Shuriken_execGetWeaponSpecificDecalData_Parms
{
	class USFXPhysicalMaterialDecals*                  DecalEffects;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              FadeTime;                                         		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UDecalComponent*                             ReturnValue;                                      		// 0x000C (0x0008) [0x0000000004000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
	// int                                             DecalLength;                                      		// 0x0014 (0x0004) [0x0000000000000000]              

	 ASFXWeapon_SMG_Shuriken_execGetWeaponSpecificDecalData_Parms() { memset(this, 0, sizeof *this); }
	~ASFXWeapon_SMG_Shuriken_execGetWeaponSpecificDecalData_Parms() {}
};

// Function SFXGameContent.SFXSeqAct_EndObjective.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
struct USFXSeqAct_EndObjective_eventGetObjClassVersion_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXSeqAct_EndObjective_eventGetObjClassVersion_Parms() { memset(this, 0, sizeof *this); }
	~USFXSeqAct_EndObjective_eventGetObjClassVersion_Parms() {}
};

// Function SFXGameContent.SFXSeqAct_EndObjective.Activated
// [0x00020002] 
struct USFXSeqAct_EndObjective_execActivated_Parms
{
	// class USFXGUIInteraction*                       oGUI;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	// class USFXGUI_Markers*                          oObjectiveMarkers;                                		// 0x0008 (0x0008) [0x0000000000000000]              
	// class USFXModule_MarkerObjective*               ObjModNewObjective;                               		// 0x0010 (0x0008) [0x0000000000000000]              

	 USFXSeqAct_EndObjective_execActivated_Parms() { memset(this, 0, sizeof *this); }
	~USFXSeqAct_EndObjective_execActivated_Parms() {}
};

// Function SFXGameContent.SFXSeqAct_SetObjective.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
struct USFXSeqAct_SetObjective_eventGetObjClassVersion_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXSeqAct_SetObjective_eventGetObjClassVersion_Parms() { memset(this, 0, sizeof *this); }
	~USFXSeqAct_SetObjective_eventGetObjClassVersion_Parms() {}
};

// Function SFXGameContent.SFXSeqAct_SetObjective.Activated
// [0x00020002] 
struct USFXSeqAct_SetObjective_execActivated_Parms
{
	// class USFXModule_MarkerObjectiveSP*             ObjModNewObjective;                               		// 0x0000 (0x0008) [0x0000000000000000]              
	// class USFXGUIInteraction*                       oGUI;                                             		// 0x0008 (0x0008) [0x0000000000000000]              
	// class USFXGUI_Markers*                          oObjectiveMarkers;                                		// 0x0010 (0x0008) [0x0000000000000000]              
	// class ABioWorldInfo*                            oWorldInfo;                                       		// 0x0018 (0x0008) [0x0000000000000000]              
	// unsigned long                                   ShouldDisplayObjective;                           		// 0x0020 (0x0004) [0x0000000000000000]              

	 USFXSeqAct_SetObjective_execActivated_Parms() { memset(this, 0, sizeof *this); }
	~USFXSeqAct_SetObjective_execActivated_Parms() {}
};

// Function SFXGameContent.SFXSeqAct_ToggleTutorialTracking.Activated
// [0x00020002] 
struct USFXSeqAct_ToggleTutorialTracking_execActivated_Parms
{
	// class ASFXGame*                                 oGame;                                            		// 0x0000 (0x0008) [0x0000000000000000]              

	 USFXSeqAct_ToggleTutorialTracking_execActivated_Parms() { memset(this, 0, sizeof *this); }
	~USFXSeqAct_ToggleTutorialTracking_execActivated_Parms() {}
};

// Function SFXGameContent.BioPlaypenVolumeAdditive.UnTouch
// [0x00020802] ( FUNC_Event )
struct ABioPlaypenVolumeAdditive_eventUnTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ABioPawn*                                 Pawn;                                             		// 0x0008 (0x0008) [0x0000000000000000]              
	// class ABioAiController*                         Controller;                                       		// 0x0010 (0x0008) [0x0000000000000000]              

	 ABioPlaypenVolumeAdditive_eventUnTouch_Parms() { memset(this, 0, sizeof *this); }
	~ABioPlaypenVolumeAdditive_eventUnTouch_Parms() {}
};

// Function SFXGameContent.BioPlaypenVolumeAdditive.Touch
// [0x00020802] ( FUNC_Event )
struct ABioPlaypenVolumeAdditive_eventTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         OtherComp;                                        		// 0x0008 (0x0008) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	union { struct FVector                             HitLocation; };                                   		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitNormal; };                                     		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class ABioPawn*                                 Pawn;                                             		// 0x0028 (0x0008) [0x0000000000000000]              
	// class ABioAiController*                         Controller;                                       		// 0x0030 (0x0008) [0x0000000000000000]              
	// int                                             i;                                                		// 0x0038 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bPreviouslyInPlaypen;                             		// 0x003C (0x0004) [0x0000000000000000]              
	// class ABioPlaypenVolume*                        oPlaypen;                                         		// 0x0040 (0x0008) [0x0000000000000000]              

	 ABioPlaypenVolumeAdditive_eventTouch_Parms() { memset(this, 0, sizeof *this); }
	~ABioPlaypenVolumeAdditive_eventTouch_Parms() {}
};

// Function SFXGameContent.SFXAI_Trooper.DrawDifficulty
// [0x00020002] 
struct ASFXAI_Trooper_execDrawDifficulty_Parms
{
	class UBioCheatManager*                            CM;                                               		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class USFXDifficultyHandler*                    DH;                                               		// 0x0008 (0x0008) [0x0000000000000000]              
	// union { struct SFXName                          ParamName; };                                     		// 0x0010 (0x0008) [0x0000000000000000]              
	// union { struct SFXName                          CategoryName; };                                  		// 0x0018 (0x0008) [0x0000000000000000]              
	// class USFXModule_Damage*                        DmgMod;                                           		// 0x0020 (0x0008) [0x0000000000000000]              

	 ASFXAI_Trooper_execDrawDifficulty_Parms() { memset(this, 0, sizeof *this); }
	~ASFXAI_Trooper_execDrawDifficulty_Parms() {}
};

// Function SFXGameContent.SFXAI_Trooper.Initialize
// [0x00020002] 
struct ASFXAI_Trooper_execInitialize_Parms
{
	// class USFXDifficultyHandler*                    DH;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	// class USFXModule_Damage*                        DmgMod;                                           		// 0x0008 (0x0008) [0x0000000000000000]              

	 ASFXAI_Trooper_execInitialize_Parms() { memset(this, 0, sizeof *this); }
	~ASFXAI_Trooper_execInitialize_Parms() {}
};

// Function SFXGameContent.SFXAI_Trooper.OnShouldThrowGrenade
// [0x00020002] 
struct ASFXAI_Trooper_execOnShouldThrowGrenade_Parms
{
	class USequenceAction*                             Seq;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 ASFXAI_Trooper_execOnShouldThrowGrenade_Parms() { memset(this, 0, sizeof *this); }
	~ASFXAI_Trooper_execOnShouldThrowGrenade_Parms() {}
};

// Function SFXGameContent.SFXAI_Trooper.ShouldUseGrenade
// [0x00020003] ( FUNC_Final )
struct ASFXAI_Trooper_execShouldUseGrenade_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXPowerCustomAction*                    Power;                                            		// 0x0004 (0x0008) [0x0000000000000000]              
	// int                                             FireTargetIndex;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           GlobalGrenadeCooldown;                            		// 0x0010 (0x0004) [0x0000000000000000]              

	 ASFXAI_Trooper_execShouldUseGrenade_Parms() { memset(this, 0, sizeof *this); }
	~ASFXAI_Trooper_execShouldUseGrenade_Parms() {}
};

// Function SFXGameContent.SFXAICmd_Base_Cover.NotifyMoodChange
// [0x00020002] 
struct USFXAICmd_Base_Cover_execNotifyMoodChange_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXAICmd_Base_Cover_execNotifyMoodChange_Parms() { memset(this, 0, sizeof *this); }
	~USFXAICmd_Base_Cover_execNotifyMoodChange_Parms() {}
};

// Function SFXGameContent.SFXAICmd_Base_Cover.NotifyPendingPowerImpact
// [0x00020002] 
struct USFXAICmd_Base_Cover_execNotifyPendingPowerImpact_Parms
{
	union { struct SFXName                             Label; };                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              TimeBeforeImpact;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class USFXPowerCustomAction*                       Power;                                            		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class ASFXProjectile_PowerCustomAction*            Projectile;                                       		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// unsigned char                                   EvadeAction;                                      		// 0x001C (0x0001) [0x0000000000000000]              

	 USFXAICmd_Base_Cover_execNotifyPendingPowerImpact_Parms() { memset(this, 0, sizeof *this); }
	~USFXAICmd_Base_Cover_execNotifyPendingPowerImpact_Parms() {}
};

// Function SFXGameContent.SFXAICmd_Base_Cover.NotifyTakeHit
// [0x00020002] 
struct USFXAICmd_Base_Cover_execNotifyTakeHit_Parms
{
	class AController*                                 instigatedBy;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitLocation; };                                   		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                Damage;                                           		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0018 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             Momentum; };                                      		// 0x0020 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// unsigned char                                   EvadeAction;                                      		// 0x002C (0x0001) [0x0000000000000000]              

	 USFXAICmd_Base_Cover_execNotifyTakeHit_Parms() { memset(this, 0, sizeof *this); }
	~USFXAICmd_Base_Cover_execNotifyTakeHit_Parms() {}
};

// Function SFXGameContent.SFXAICmd_Base_Cover.ShouldAttack
// [0x00020002] 
struct USFXAICmd_Base_Cover_execShouldAttack_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           HealthPct;                                        		// 0x0004 (0x0004) [0x0000000000000000]              

	 USFXAICmd_Base_Cover_execShouldAttack_Parms() { memset(this, 0, sizeof *this); }
	~USFXAICmd_Base_Cover_execShouldAttack_Parms() {}
};

// Function SFXGameContent.SFXAICmd_Base_Cover.Resumed
// [0x00020002] 
struct USFXAICmd_Base_Cover_execResumed_Parms
{
	union { struct SFXName                             OldCommandName; };                                		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 USFXAICmd_Base_Cover_execResumed_Parms() { memset(this, 0, sizeof *this); }
	~USFXAICmd_Base_Cover_execResumed_Parms() {}
};

// Function SFXGameContent.SFXAICmd_Base_Cover.Pushed
// [0x00020002] 
struct USFXAICmd_Base_Cover_execPushed_Parms
{

	 USFXAICmd_Base_Cover_execPushed_Parms() { memset(this, 0, sizeof *this); }
	~USFXAICmd_Base_Cover_execPushed_Parms() {}
};

// Function SFXGameContent.SFXAmmoContainer.ReplicatedEvent
// [0x00020902] ( FUNC_Simulated | FUNC_Event )
struct ASFXAmmoContainer_eventReplicatedEvent_Parms
{
	union { struct SFXName                             VarName; };                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 ASFXAmmoContainer_eventReplicatedEvent_Parms() { memset(this, 0, sizeof *this); }
	~ASFXAmmoContainer_eventReplicatedEvent_Parms() {}
};

// Function SFXGameContent.SFXAmmoContainer.GiveTo
// [0x00020002] 
struct ASFXAmmoContainer_execGiveTo_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ABioPlayerController*                     PC;                                               		// 0x0008 (0x0008) [0x0000000000000000]              
	// class UBioRemoteLogger*                         GLogger;                                          		// 0x0010 (0x0008) [0x0000000000000000]              

	 ASFXAmmoContainer_execGiveTo_Parms() { memset(this, 0, sizeof *this); }
	~ASFXAmmoContainer_execGiveTo_Parms() {}
};

// Function SFXGameContent.SFXAmmoContainer.StartSleeping
// [0x00020002] 
struct ASFXAmmoContainer_execStartSleeping_Parms
{

	 ASFXAmmoContainer_execStartSleeping_Parms() { memset(this, 0, sizeof *this); }
	~ASFXAmmoContainer_execStartSleeping_Parms() {}
};

// Function SFXGameContent.SFXAmmoContainer.SetRespawn
// [0x00020002] 
struct ASFXAmmoContainer_execSetRespawn_Parms
{

	 ASFXAmmoContainer_execSetRespawn_Parms() { memset(this, 0, sizeof *this); }
	~ASFXAmmoContainer_execSetRespawn_Parms() {}
};

// Function SFXGameContent.SFXAmmoContainer.SetInitialState
// [0x00020902] ( FUNC_Simulated | FUNC_Event )
struct ASFXAmmoContainer_eventSetInitialState_Parms
{

	 ASFXAmmoContainer_eventSetInitialState_Parms() { memset(this, 0, sizeof *this); }
	~ASFXAmmoContainer_eventSetInitialState_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_AILadderClimbUp.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_AILadderClimbUp_execStopCustomAction_Parms
{

	 USFXCustomAction_AILadderClimbUp_execStopCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_AILadderClimbUp_execStopCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_AILadderClimbUp.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_AILadderClimbUp_execStartCustomAction_Parms
{
	// class ASFXNav_LadderNode*                       LadderNode;                                       		// 0x0000 (0x0008) [0x0000000000000000]              

	 USFXCustomAction_AILadderClimbUp_execStartCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_AILadderClimbUp_execStartCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_AIMantleUp.GetBodyStanceAnim
// [0x00020002] 
struct USFXCustomAction_AIMantleUp_execGetBodyStanceAnim_Parms
{
	union { struct FBodyStance                         ReturnValue; };                                   		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

	 USFXCustomAction_AIMantleUp_execGetBodyStanceAnim_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_AIMantleUp_execGetBodyStanceAnim_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_AIMantleUp.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_AIMantleUp_execStartCustomAction_Parms
{

	 USFXCustomAction_AIMantleUp_execStartCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_AIMantleUp_execStartCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_AIMantleUp.GetUsedAnimNames
// [0x00422802] ( FUNC_Event )
struct USFXCustomAction_AIMantleUp_eventGetUsedAnimNames_Parms
{
	union { TArray<struct SFXName>                     UsedAnims; };                                     		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

	 USFXCustomAction_AIMantleUp_eventGetUsedAnimNames_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_AIMantleUp_eventGetUsedAnimNames_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_BoostDown.SetMoveStage
// [0x00820002] 
struct USFXCustomAction_BoostDown_execSetMoveStage_Parms
{
	unsigned char                                      NextStage;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// union { struct FRvrClientEffectTarget           TargetInfo; };                                    		// 0x0004 (0x007C) [0x0000000000000000]              
	// float                                           DistToEnd;                                        		// 0x0080 (0x0004) [0x0000000000000000]              

	 USFXCustomAction_BoostDown_execSetMoveStage_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_BoostDown_execSetMoveStage_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_BoostDown.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_BoostDown_execStopCustomAction_Parms
{

	 USFXCustomAction_BoostDown_execStopCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_BoostDown_execStopCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_BoostUp.EndRocketBoots
// [0x00020002] 
struct USFXCustomAction_BoostUp_execEndRocketBoots_Parms
{

	 USFXCustomAction_BoostUp_execEndRocketBoots_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_BoostUp_execEndRocketBoots_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_BoostUp.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_BoostUp_execStopCustomAction_Parms
{
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class USFXGameEffect_RagdollRocket*             GameEffect;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
	// float                                           Duration;                                         		// 0x0010 (0x0004) [0x0000000000000000]              

	 USFXCustomAction_BoostUp_execStopCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_BoostUp_execStopCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_BoostUp.SetMoveStage
// [0x00020002] 
struct USFXCustomAction_BoostUp_execSetMoveStage_Parms
{
	unsigned char                                      NextStage;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )

	 USFXCustomAction_BoostUp_execSetMoveStage_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_BoostUp_execSetMoveStage_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_RagdollRocket.HasAntiGravity
// [0x00020002] 
struct USFXGameEffect_RagdollRocket_execHasAntiGravity_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0004 (0x0008) [0x0000000000000000]              
	// class USFXGameEffect*                           oEffect;                                          		// 0x000C (0x0008) [0x0000000000000000]              

	 USFXGameEffect_RagdollRocket_execHasAntiGravity_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_RagdollRocket_execHasAntiGravity_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_RagdollRocket.OnUpdate
// [0x00020002] 
struct USFXGameEffect_RagdollRocket_execOnUpdate_Parms
{
	float                                              DeltaSeconds;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// union { struct FVector                          Dir; };                                           		// 0x0004 (0x000C) [0x0000000000000000]              

	 USFXGameEffect_RagdollRocket_execOnUpdate_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_RagdollRocket_execOnUpdate_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_RagdollRocket.OnApplied
// [0x00020002] 
struct USFXGameEffect_RagdollRocket_execOnApplied_Parms
{

	 USFXGameEffect_RagdollRocket_execOnApplied_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_RagdollRocket_execOnApplied_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_DeathReaction.PlayImpactSound
// [0x00020002] 
struct USFXCustomAction_DeathReaction_execPlayImpactSound_Parms
{

	 USFXCustomAction_DeathReaction_execPlayImpactSound_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_DeathReaction_execPlayImpactSound_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_DeathReaction.BodyStanceAnimEndNotification
// [0x00020002] 
struct USFXCustomAction_DeathReaction_execBodyStanceAnimEndNotification_Parms
{
	class UAnimNodeSequence*                           SeqNode;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              PlayedTime;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ExcessTime;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 USFXCustomAction_DeathReaction_execBodyStanceAnimEndNotification_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_DeathReaction_execBodyStanceAnimEndNotification_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_DeathReaction.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_DeathReaction_execStartCustomAction_Parms
{

	 USFXCustomAction_DeathReaction_execStartCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_DeathReaction_execStartCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_DeathReaction_GibHeadshot.ActivateImpactEmitter
// [0x00020102] ( FUNC_Simulated )
struct USFXCustomAction_DeathReaction_GibHeadshot_execActivateImpactEmitter_Parms
{
	union { struct FVector                             HitLocation; };                                   		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitNormal; };                                     		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	union { struct SFXName                             BoneName; };                                      		// 0x0018 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ASFXObjectPool*                           Pool;                                             		// 0x0028 (0x0008) [0x0000000000000000]              
	// class UParticleSystemComponent*                 ImpactPSC;                                        		// 0x0030 (0x0008) [0x0000000004000000]              ( CPF_EditInline )

	 USFXCustomAction_DeathReaction_GibHeadshot_execActivateImpactEmitter_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_DeathReaction_GibHeadshot_execActivateImpactEmitter_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_DeathReaction_GibHeadshot.PrecacheVFX
// [0x00022002] 
struct USFXCustomAction_DeathReaction_GibHeadshot_execPrecacheVFX_Parms
{
	class ASFXObjectPool*                              ObjectPool;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class URvrClientEffectManager*                     ClientEffects;                                    		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 USFXCustomAction_DeathReaction_GibHeadshot_execPrecacheVFX_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_DeathReaction_GibHeadshot_execPrecacheVFX_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_DeathReaction_GibKnockback.StopAnim
// [0x00020002] 
struct USFXCustomAction_DeathReaction_GibKnockback_execStopAnim_Parms
{

	 USFXCustomAction_DeathReaction_GibKnockback_execStopAnim_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_DeathReaction_GibKnockback_execStopAnim_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_DeathReaction_GibKnockback.ActivateImpactEmitter
// [0x00020102] ( FUNC_Simulated )
struct USFXCustomAction_DeathReaction_GibKnockback_execActivateImpactEmitter_Parms
{
	union { struct FVector                             HitLocation; };                                   		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitNormal; };                                     		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	union { struct SFXName                             BoneName; };                                      		// 0x0018 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ASFXObjectPool*                           Pool;                                             		// 0x0028 (0x0008) [0x0000000000000000]              
	// class UParticleSystemComponent*                 ImpactPSC;                                        		// 0x0030 (0x0008) [0x0000000004000000]              ( CPF_EditInline )

	 USFXCustomAction_DeathReaction_GibKnockback_execActivateImpactEmitter_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_DeathReaction_GibKnockback_execActivateImpactEmitter_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_DeathReaction_GibKnockback.PrecacheVFX
// [0x00022002] 
struct USFXCustomAction_DeathReaction_GibKnockback_execPrecacheVFX_Parms
{
	class ASFXObjectPool*                              ObjectPool;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class URvrClientEffectManager*                     ClientEffects;                                    		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 USFXCustomAction_DeathReaction_GibKnockback_execPrecacheVFX_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_DeathReaction_GibKnockback_execPrecacheVFX_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_DeathReaction_Headshot_Cover.ActivateImpactEmitter
// [0x00020102] ( FUNC_Simulated )
struct USFXCustomAction_DeathReaction_Headshot_Cover_execActivateImpactEmitter_Parms
{
	union { struct FVector                             HitLocation; };                                   		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitNormal; };                                     		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	union { struct SFXName                             BoneName; };                                      		// 0x0018 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ASFXObjectPool*                           Pool;                                             		// 0x0028 (0x0008) [0x0000000000000000]              
	// class UParticleSystemComponent*                 ImpactPSC;                                        		// 0x0030 (0x0008) [0x0000000004000000]              ( CPF_EditInline )

	 USFXCustomAction_DeathReaction_Headshot_Cover_execActivateImpactEmitter_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_DeathReaction_Headshot_Cover_execActivateImpactEmitter_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_ShieldBreach.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_ShieldBreach_execStartCustomAction_Parms
{

	 USFXCustomAction_ShieldBreach_execStartCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_ShieldBreach_execStartCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_ShieldBreach.InternalCanDoCustomAction
// [0x00080002] 
struct USFXCustomAction_ShieldBreach_execInternalCanDoCustomAction_Parms
{
	class ABioPawn*                                    SyncPawn;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bForced;                                          		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXCustomAction_ShieldBreach_execInternalCanDoCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_ShieldBreach_execInternalCanDoCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_ShieldBreach.GetUsedAnimNames
// [0x00422802] ( FUNC_Event )
struct USFXCustomAction_ShieldBreach_eventGetUsedAnimNames_Parms
{
	union { TArray<struct SFXName>                     UsedAnims; };                                     		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

	 USFXCustomAction_ShieldBreach_eventGetUsedAnimNames_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_ShieldBreach_eventGetUsedAnimNames_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_TrooperMelee.ClientDoCustomActionImpact
// [0x00024002] 
struct USFXCustomAction_TrooperMelee_execClientDoCustomActionImpact_Parms
{
	class AActor*                                      oActor;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ImpactCount;                                      		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bFirstTarget;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	union { struct FVector                             HitLocation; };                                   		// 0x0010 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	union { struct FVector                             HitNormal; };                                     		// 0x001C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                CustomActionReactionType;                         		// 0x0028 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class USFXModule_Timeline*                      TimeMod;                                          		// 0x002C (0x0008) [0x0000000000000000]              
	// class UBioCustomAction*                         Action;                                           		// 0x0034 (0x0008) [0x0000000000000000]              

	 USFXCustomAction_TrooperMelee_execClientDoCustomActionImpact_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_TrooperMelee_execClientDoCustomActionImpact_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_TrooperStomp.OnTimelineImpact
// [0x00020002] 
struct USFXCustomAction_TrooperStomp_execOnTimelineImpact_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 USFXCustomAction_TrooperStomp_execOnTimelineImpact_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_TrooperStomp_execOnTimelineImpact_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_TrooperStomp.ClientDoCustomActionImpact
// [0x00024002] 
struct USFXCustomAction_TrooperStomp_execClientDoCustomActionImpact_Parms
{
	class AActor*                                      oActor;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ImpactCount;                                      		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bFirstTarget;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	union { struct FVector                             HitLocation; };                                   		// 0x0010 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	union { struct FVector                             HitNormal; };                                     		// 0x001C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                CustomActionReactionType;                         		// 0x0028 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class USFXModule_Timeline*                      TimeMod;                                          		// 0x002C (0x0008) [0x0000000000000000]              
	// class UBioCustomAction*                         Action;                                           		// 0x0034 (0x0008) [0x0000000000000000]              

	 USFXCustomAction_TrooperStomp_execClientDoCustomActionImpact_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_TrooperStomp_execClientDoCustomActionImpact_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_EnemyGrenade.GetProjectileAttachPoint
// [0x00420002] 
struct USFXPowerCustomAction_EnemyGrenade_execGetProjectileAttachPoint_Parms
{
	union { struct FVector                             AttachPoint; };                                   		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXPowerCustomAction_EnemyGrenade_execGetProjectileAttachPoint_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_EnemyGrenade_execGetProjectileAttachPoint_Parms() {}
};

// Function SFXGameContent.SFXWeapon_SMG_Hornet.GetWeaponSpecificImpactSound
// [0x00020102] ( FUNC_Simulated )
struct ASFXWeapon_SMG_Hornet_execGetWeaponSpecificImpactSound_Parms
{
	class USFXPhysicalMaterialImpactSounds*            ImpactSounds;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UWwiseEvent*                                 ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 ASFXWeapon_SMG_Hornet_execGetWeaponSpecificImpactSound_Parms() { memset(this, 0, sizeof *this); }
	~ASFXWeapon_SMG_Hornet_execGetWeaponSpecificImpactSound_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_CustomLoopingInteraction.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_CustomLoopingInteraction_execStartCustomAction_Parms
{
	// class ASFXNav_InteractionHenchCustom*           CustomInteractionPoint;                           		// 0x0000 (0x0008) [0x0000000000000000]              

	 USFXCustomAction_CustomLoopingInteraction_execStartCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_CustomLoopingInteraction_execStartCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_HenchBeckonFront.CanOverrideMoveWith
// [0x00020002] 
struct USFXCustomAction_HenchBeckonFront_execCanOverrideMoveWith_Parms
{
	int                                                OldCustomAction;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                NewCustomAction;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             idx;                                              		// 0x000C (0x0004) [0x0000000000000000]              
	// class UClass*                                   NewClass;                                         		// 0x0010 (0x0008) [0x0000000000000000]              
	// class UClass*                                   OldClass;                                         		// 0x0018 (0x0008) [0x0000000000000000]              

	 USFXCustomAction_HenchBeckonFront_execCanOverrideMoveWith_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_HenchBeckonFront_execCanOverrideMoveWith_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_HenchBeckonRear.CanOverrideMoveWith
// [0x00020002] 
struct USFXCustomAction_HenchBeckonRear_execCanOverrideMoveWith_Parms
{
	int                                                OldCustomAction;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                NewCustomAction;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             idx;                                              		// 0x000C (0x0004) [0x0000000000000000]              
	// class UClass*                                   NewClass;                                         		// 0x0010 (0x0008) [0x0000000000000000]              
	// class UClass*                                   OldClass;                                         		// 0x0018 (0x0008) [0x0000000000000000]              

	 USFXCustomAction_HenchBeckonRear_execCanOverrideMoveWith_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_HenchBeckonRear_execCanOverrideMoveWith_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_HenchCrouch.CanOverrideMoveWith
// [0x00020002] 
struct USFXCustomAction_HenchCrouch_execCanOverrideMoveWith_Parms
{
	int                                                OldCustomAction;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                NewCustomAction;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             idx;                                              		// 0x000C (0x0004) [0x0000000000000000]              
	// class UClass*                                   NewClass;                                         		// 0x0010 (0x0008) [0x0000000000000000]              
	// class UClass*                                   OldClass;                                         		// 0x0018 (0x0008) [0x0000000000000000]              

	 USFXCustomAction_HenchCrouch_execCanOverrideMoveWith_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_HenchCrouch_execCanOverrideMoveWith_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_HenchCrouch.TriggerEnd
// [0x00020002] 
struct USFXCustomAction_HenchCrouch_execTriggerEnd_Parms
{

	 USFXCustomAction_HenchCrouch_execTriggerEnd_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_HenchCrouch_execTriggerEnd_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_HenchCrouch.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_HenchCrouch_execStartCustomAction_Parms
{

	 USFXCustomAction_HenchCrouch_execStartCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_HenchCrouch_execStartCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_HenchInteractLow.CanOverrideMoveWith
// [0x00020002] 
struct USFXCustomAction_HenchInteractLow_execCanOverrideMoveWith_Parms
{
	int                                                OldCustomAction;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                NewCustomAction;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             idx;                                              		// 0x000C (0x0004) [0x0000000000000000]              
	// class UClass*                                   NewClass;                                         		// 0x0010 (0x0008) [0x0000000000000000]              
	// class UClass*                                   OldClass;                                         		// 0x0018 (0x0008) [0x0000000000000000]              

	 USFXCustomAction_HenchInteractLow_execCanOverrideMoveWith_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_HenchInteractLow_execCanOverrideMoveWith_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_HenchInteractLow.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_HenchInteractLow_execStopCustomAction_Parms
{

	 USFXCustomAction_HenchInteractLow_execStopCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_HenchInteractLow_execStopCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_HenchInteractLow.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_HenchInteractLow_execStartCustomAction_Parms
{

	 USFXCustomAction_HenchInteractLow_execStartCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_HenchInteractLow_execStartCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_HenchmanMelee.TryNextMelee
// [0x00020002] 
struct USFXCustomAction_HenchmanMelee_execTryNextMelee_Parms
{
	// union { struct FBodyStance                      BS_ToPlay; };                                     		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

	 USFXCustomAction_HenchmanMelee_execTryNextMelee_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_HenchmanMelee_execTryNextMelee_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_HenchmanMelee.CanContinueMelee
// [0x00020002] 
struct USFXCustomAction_HenchmanMelee_execCanContinueMelee_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 EnemyTarget;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
	// float                                           DistToTarget;                                     		// 0x000C (0x0004) [0x0000000000000000]              

	 USFXCustomAction_HenchmanMelee_execCanContinueMelee_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_HenchmanMelee_execCanContinueMelee_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_HenchmanMelee.BodyStanceAnimEndNotification
// [0x00020002] 
struct USFXCustomAction_HenchmanMelee_execBodyStanceAnimEndNotification_Parms
{
	class UAnimNodeSequence*                           SeqNode;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              PlayedTime;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ExcessTime;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// union { struct FBodyStance                      BS_ToPlay; };                                     		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

	 USFXCustomAction_HenchmanMelee_execBodyStanceAnimEndNotification_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_HenchmanMelee_execBodyStanceAnimEndNotification_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_HenchmanMelee.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_HenchmanMelee_execStopCustomAction_Parms
{
	// union { struct FBodyStance                      BS_ToPlay; };                                     		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

	 USFXCustomAction_HenchmanMelee_execStopCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_HenchmanMelee_execStopCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_HenchmanMelee.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_HenchmanMelee_execStartCustomAction_Parms
{
	// union { struct FBodyStance                      BS_ToPlay; };                                     		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

	 USFXCustomAction_HenchmanMelee_execStartCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_HenchmanMelee_execStartCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_HenchmanMelee.GetBodyStanceAnim
// [0x00020002] 
struct USFXCustomAction_HenchmanMelee_execGetBodyStanceAnim_Parms
{
	unsigned char                                      Stage;                                            		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FBodyStance                         ReturnValue; };                                   		// 0x0004 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// union { struct FBodyStance                      BS_Stance; };                                     		// 0x0014 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

	 USFXCustomAction_HenchmanMelee_execGetBodyStanceAnim_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_HenchmanMelee_execGetBodyStanceAnim_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_HenchmanMelee.ShouldUsePistolAnim
// [0x00020002] 
struct USFXCustomAction_HenchmanMelee_execShouldUsePistolAnim_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ASFXWeapon*                               HenchWeapon;                                      		// 0x0004 (0x0008) [0x0000000000000000]              

	 USFXCustomAction_HenchmanMelee_execShouldUsePistolAnim_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_HenchmanMelee_execShouldUsePistolAnim_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_HenchmanMelee.GetUsedAnimNames
// [0x00422802] ( FUNC_Event )
struct USFXCustomAction_HenchmanMelee_eventGetUsedAnimNames_Parms
{
	union { TArray<struct SFXName>                     UsedAnims; };                                     		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

	 USFXCustomAction_HenchmanMelee_eventGetUsedAnimNames_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_HenchmanMelee_eventGetUsedAnimNames_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_HenchOmniTool.CanOverrideMoveWith
// [0x00020002] 
struct USFXCustomAction_HenchOmniTool_execCanOverrideMoveWith_Parms
{
	int                                                OldCustomAction;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                NewCustomAction;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             idx;                                              		// 0x000C (0x0004) [0x0000000000000000]              
	// class UClass*                                   NewClass;                                         		// 0x0010 (0x0008) [0x0000000000000000]              
	// class UClass*                                   OldClass;                                         		// 0x0018 (0x0008) [0x0000000000000000]              

	 USFXCustomAction_HenchOmniTool_execCanOverrideMoveWith_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_HenchOmniTool_execCanOverrideMoveWith_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_HenchOmniTool.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_HenchOmniTool_execStopCustomAction_Parms
{

	 USFXCustomAction_HenchOmniTool_execStopCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_HenchOmniTool_execStopCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_HenchOmniTool.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_HenchOmniTool_execStartCustomAction_Parms
{

	 USFXCustomAction_HenchOmniTool_execStartCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_HenchOmniTool_execStartCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_HenchOmniToolCrouch.CanOverrideMoveWith
// [0x00020002] 
struct USFXCustomAction_HenchOmniToolCrouch_execCanOverrideMoveWith_Parms
{
	int                                                OldCustomAction;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                NewCustomAction;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             idx;                                              		// 0x000C (0x0004) [0x0000000000000000]              
	// class UClass*                                   NewClass;                                         		// 0x0010 (0x0008) [0x0000000000000000]              
	// class UClass*                                   OldClass;                                         		// 0x0018 (0x0008) [0x0000000000000000]              

	 USFXCustomAction_HenchOmniToolCrouch_execCanOverrideMoveWith_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_HenchOmniToolCrouch_execCanOverrideMoveWith_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_HenchOmniToolCrouch.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_HenchOmniToolCrouch_execStopCustomAction_Parms
{

	 USFXCustomAction_HenchOmniToolCrouch_execStopCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_HenchOmniToolCrouch_execStopCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_HenchOmniToolCrouch.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_HenchOmniToolCrouch_execStartCustomAction_Parms
{

	 USFXCustomAction_HenchOmniToolCrouch_execStartCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_HenchOmniToolCrouch_execStartCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_HenchRollBackward.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_HenchRollBackward_execStopCustomAction_Parms
{

	 USFXCustomAction_HenchRollBackward_execStopCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_HenchRollBackward_execStopCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_HenchRollForward.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_HenchRollForward_execStopCustomAction_Parms
{

	 USFXCustomAction_HenchRollForward_execStopCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_HenchRollForward_execStopCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_HenchRollLeft.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_HenchRollLeft_execStopCustomAction_Parms
{

	 USFXCustomAction_HenchRollLeft_execStopCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_HenchRollLeft_execStopCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_HenchRollRight.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_HenchRollRight_execStopCustomAction_Parms
{

	 USFXCustomAction_HenchRollRight_execStopCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_HenchRollRight_execStopCustomAction_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_HenchStandIdle.CanOverrideMoveWith
// [0x00020002] 
struct USFXCustomAction_HenchStandIdle_execCanOverrideMoveWith_Parms
{
	int                                                OldCustomAction;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                NewCustomAction;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             idx;                                              		// 0x000C (0x0004) [0x0000000000000000]              
	// class UClass*                                   NewClass;                                         		// 0x0010 (0x0008) [0x0000000000000000]              
	// class UClass*                                   OldClass;                                         		// 0x0018 (0x0008) [0x0000000000000000]              

	 USFXCustomAction_HenchStandIdle_execCanOverrideMoveWith_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_HenchStandIdle_execCanOverrideMoveWith_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_HenchStandIdle.TriggerEnd
// [0x00020002] 
struct USFXCustomAction_HenchStandIdle_execTriggerEnd_Parms
{

	 USFXCustomAction_HenchStandIdle_execTriggerEnd_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_HenchStandIdle_execTriggerEnd_Parms() {}
};

// Function SFXGameContent.SFXCustomAction_HenchStandTyping.CanOverrideMoveWith
// [0x00020002] 
struct USFXCustomAction_HenchStandTyping_execCanOverrideMoveWith_Parms
{
	int                                                OldCustomAction;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                NewCustomAction;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             idx;                                              		// 0x000C (0x0004) [0x0000000000000000]              
	// class UClass*                                   NewClass;                                         		// 0x0010 (0x0008) [0x0000000000000000]              
	// class UClass*                                   OldClass;                                         		// 0x0018 (0x0008) [0x0000000000000000]              

	 USFXCustomAction_HenchStandTyping_execCanOverrideMoveWith_Parms() { memset(this, 0, sizeof *this); }
	~USFXCustomAction_HenchStandTyping_execCanOverrideMoveWith_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_BarrierLift.OnRemoved
// [0x00020002] 
struct USFXGameEffect_BarrierLift_execOnRemoved_Parms
{

	 USFXGameEffect_BarrierLift_execOnRemoved_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_BarrierLift_execOnRemoved_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_BarrierLift.UpdateRagdoll
// [0x00020003] ( FUNC_Final )
struct USFXGameEffect_BarrierLift_execUpdateRagdoll_Parms
{

	 USFXGameEffect_BarrierLift_execUpdateRagdoll_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_BarrierLift_execUpdateRagdoll_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_BarrierLift.OnApplied
// [0x00020002] 
struct USFXGameEffect_BarrierLift_execOnApplied_Parms
{

	 USFXGameEffect_BarrierLift_execOnApplied_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_BarrierLift_execOnApplied_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_DefensiveArmor.OnRemoved
// [0x00020002] 
struct USFXGameEffect_DefensiveArmor_execOnRemoved_Parms
{

	 USFXGameEffect_DefensiveArmor_execOnRemoved_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_DefensiveArmor_execOnRemoved_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_DefensiveArmor.TurnVFXOff
// [0x00020002] 
struct USFXGameEffect_DefensiveArmor_execTurnVFXOff_Parms
{

	 USFXGameEffect_DefensiveArmor_execTurnVFXOff_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_DefensiveArmor_execTurnVFXOff_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_DefensiveArmor.TurnVFXOn
// [0x00820002] 
struct USFXGameEffect_DefensiveArmor_execTurnVFXOn_Parms
{
	// union { struct FRvrClientEffectTarget           CETarget; };                                      		// 0x0000 (0x007C) [0x0000000000000000]              
	// class URvrClientEffectManager*                  Manager;                                          		// 0x007C (0x0008) [0x0000000000000000]              

	 USFXGameEffect_DefensiveArmor_execTurnVFXOn_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_DefensiveArmor_execTurnVFXOn_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_DefensiveArmor.OnUpdate
// [0x00020002] 
struct USFXGameEffect_DefensiveArmor_execOnUpdate_Parms
{
	float                                              DeltaSeconds;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ABioWorldInfo*                            Info;                                             		// 0x0004 (0x0008) [0x0000000000000000]              
	// class ABioPlayerController*                     PC;                                               		// 0x000C (0x0008) [0x0000000000000000]              

	 USFXGameEffect_DefensiveArmor_execOnUpdate_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_DefensiveArmor_execOnUpdate_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_DefensiveArmor.OnApplied
// [0x00020002] 
struct USFXGameEffect_DefensiveArmor_execOnApplied_Parms
{

	 USFXGameEffect_DefensiveArmor_execOnApplied_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_DefensiveArmor_execOnApplied_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_DefensiveShield.RestoreSaveState
// [0x00020002] 
struct USFXPowerCustomAction_DefensiveShield_execRestoreSaveState_Parms
{
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0000 (0x0008) [0x0000000000000000]              

	 USFXPowerCustomAction_DefensiveShield_execRestoreSaveState_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_DefensiveShield_execRestoreSaveState_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_DefensiveShield.ShouldUsePower
// [0x00420802] ( FUNC_Event )
struct USFXPowerCustomAction_DefensiveShield_eventShouldUsePower_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    sOptionalInfo; };                                 		// 0x0008 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x001C (0x0008) [0x0000000000000000]              

	 USFXPowerCustomAction_DefensiveShield_eventShouldUsePower_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_DefensiveShield_eventShouldUsePower_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_DefensiveShield.DoJoinInProgress
// [0x00020002] 
struct USFXPowerCustomAction_DefensiveShield_execDoJoinInProgress_Parms
{
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0000 (0x0008) [0x0000000000000000]              

	 USFXPowerCustomAction_DefensiveShield_execDoJoinInProgress_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_DefensiveShield_execDoJoinInProgress_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_DefensiveShield.CanUsePower
// [0x00020002] 
struct USFXPowerCustomAction_DefensiveShield_execCanUsePower_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x000C (0x0008) [0x0000000000000000]              
	// class USFXEngine*                               Engine;                                           		// 0x0014 (0x0008) [0x0000000000000000]              

	 USFXPowerCustomAction_DefensiveShield_execCanUsePower_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_DefensiveShield_execCanUsePower_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_DefensiveShield.RecalculateAllPowerData
// [0x00024002] 
struct USFXPowerCustomAction_DefensiveShield_execRecalculateAllPowerData_Parms
{
	unsigned long                                      bReset;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 USFXPowerCustomAction_DefensiveShield_execRecalculateAllPowerData_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_DefensiveShield_execRecalculateAllPowerData_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_DefensiveShield.ResetPower
// [0x00020002] 
struct USFXPowerCustomAction_DefensiveShield_execResetPower_Parms
{

	 USFXPowerCustomAction_DefensiveShield_execResetPower_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_DefensiveShield_execResetPower_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_DefensiveShield.ClientDoPowerSubsequentImpact
// [0x00024002] 
struct USFXPowerCustomAction_DefensiveShield_execClientDoPowerSubsequentImpact_Parms
{
	class AActor*                                      oActor;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                CustomActionReactionType;                         		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              Duration;                                         		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                ImpactCount;                                      		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              Delay;                                            		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      DoCallback;                                       		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 USFXPowerCustomAction_DefensiveShield_execClientDoPowerSubsequentImpact_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_DefensiveShield_execClientDoPowerSubsequentImpact_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_DefensiveShield.TryApplyArmor
// [0x00020002] 
struct USFXPowerCustomAction_DefensiveShield_execTryApplyArmor_Parms
{
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0000 (0x0008) [0x0000000000000000]              

	 USFXPowerCustomAction_DefensiveShield_execTryApplyArmor_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_DefensiveShield_execTryApplyArmor_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_DefensiveShield.SetupEffect
// [0x00020003] ( FUNC_Final )
struct USFXPowerCustomAction_DefensiveShield_execSetupEffect_Parms
{
	class USFXGameEffect_DefensiveArmor*               Effect;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 USFXPowerCustomAction_DefensiveShield_execSetupEffect_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_DefensiveShield_execSetupEffect_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_DefensiveShield.ApplyArmor
// [0x00020002] 
struct USFXPowerCustomAction_DefensiveShield_execApplyArmor_Parms
{
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class USFXGameEffect_DefensiveArmor*            ArmorEffect;                                      		// 0x0008 (0x0008) [0x0000000000000000]              

	 USFXPowerCustomAction_DefensiveShield_execApplyArmor_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_DefensiveShield_execApplyArmor_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_DefensiveShield.RemoveArmor
// [0x00020002] 
struct USFXPowerCustomAction_DefensiveShield_execRemoveArmor_Parms
{
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0000 (0x0008) [0x0000000000000000]              

	 USFXPowerCustomAction_DefensiveShield_execRemoveArmor_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_DefensiveShield_execRemoveArmor_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_DefensiveShield.OnImpact
// [0x00020002] 
struct USFXPowerCustomAction_DefensiveShield_execOnImpact_Parms
{
	unsigned char                                      Resistance;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitLocation; };                                   		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitNormal; };                                     		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0028 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x002C (0x0008) [0x0000000000000000]              

	 USFXPowerCustomAction_DefensiveShield_execOnImpact_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_DefensiveShield_execOnImpact_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_OverloadChain.OnRemoved
// [0x00020002] 
struct USFXGameEffect_OverloadChain_execOnRemoved_Parms
{
	// class ABioPawn*                                 oLastHitPawn;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AKActor*                                  oKActor;                                          		// 0x0008 (0x0008) [0x0000000000000000]              

	 USFXGameEffect_OverloadChain_execOnRemoved_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_OverloadChain_execOnRemoved_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_OverloadChain.ImpactAdditionalTarget
// [0x00020002] 
struct USFXGameEffect_OverloadChain_execImpactAdditionalTarget_Parms
{
	class AActor*                                      oActor;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x000C (0x0008) [0x0000000000000000]              
	// class USFXGameEffect_OverloadChain*             Effect;                                           		// 0x0014 (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 oPawn;                                            		// 0x001C (0x0008) [0x0000000000000000]              

	 USFXGameEffect_OverloadChain_execImpactAdditionalTarget_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_OverloadChain_execImpactAdditionalTarget_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_OverloadChain.SelectAndImpactNextTarget
// [0x00020002] 
struct USFXGameEffect_OverloadChain_execSelectAndImpactNextTarget_Parms
{
	// union { TArray<class AActor*>                   NearbyActors; };                                  		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// union { struct FAreaEffectParameters            Param; };                                         		// 0x0010 (0x0020) [0x0000000000000000]              
	// class AActor*                                   oActor;                                           		// 0x0030 (0x0008) [0x0000000000000000]              

	 USFXGameEffect_OverloadChain_execSelectAndImpactNextTarget_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_OverloadChain_execSelectAndImpactNextTarget_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_OverloadChain.OnUpdate
// [0x00020002] 
struct USFXGameEffect_OverloadChain_execOnUpdate_Parms
{
	float                                              DeltaSeconds;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 USFXGameEffect_OverloadChain_execOnUpdate_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_OverloadChain_execOnUpdate_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_OverloadChain.PlayBeamEffect
// [0x00020003] ( FUNC_Final )
struct USFXGameEffect_OverloadChain_execPlayBeamEffect_Parms
{
	class UParticleSystemComponent*                    PS;                                               		// 0x0000 (0x0008) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	union { struct FVector                             TargetLocation; };                                		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )

	 USFXGameEffect_OverloadChain_execPlayBeamEffect_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_OverloadChain_execPlayBeamEffect_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_OverloadChain.OnApplied
// [0x00020002] 
struct USFXGameEffect_OverloadChain_execOnApplied_Parms
{
	// class ASFXPawn*                                 oTargetPawn;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// class ASFXPawn*                                 oLastHitPawn;                                     		// 0x0008 (0x0008) [0x0000000000000000]              
	// union { struct FVector                          HitNormal; };                                     		// 0x0010 (0x000C) [0x0000000000000000]              
	// class UClass*                                   DamageType;                                       		// 0x001C (0x0008) [0x0000000000000000]              
	// class ASFXKActor*                               oKActor;                                          		// 0x0024 (0x0008) [0x0000000000000000]              
	// float                                           fDamage;                                          		// 0x002C (0x0004) [0x0000000000000000]              
	// union { struct FVector                          vForce; };                                        		// 0x0030 (0x000C) [0x0000000000000000]              
	// class AActor*                                   oTargetOverride;                                  		// 0x003C (0x0008) [0x0000000000000000]              
	// unsigned char                                   Resistance;                                       		// 0x0044 (0x0001) [0x0000000000000000]              
	// unsigned long                                   bAssistApplied;                                   		// 0x0048 (0x0004) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x004C (0x0008) [0x0000000000000000]              

	 USFXGameEffect_OverloadChain_execOnApplied_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_OverloadChain_execOnApplied_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Overload.PopulatePowerStatBarEvolves
// [0x00020002] 
struct USFXPowerCustomAction_Overload_execPopulatePowerStatBarEvolves_Parms
{

	 USFXPowerCustomAction_Overload_execPopulatePowerStatBarEvolves_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Overload_execPopulatePowerStatBarEvolves_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Overload.ApplyBonus
// [0x00024002] 
struct USFXPowerCustomAction_Overload_execApplyBonus_Parms
{
	union { struct SFXName                             Parameter; };                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class USFXGameEffect*                              Bonus;                                            		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bRemove;                                          		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 USFXPowerCustomAction_Overload_execApplyBonus_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Overload_execApplyBonus_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Overload.RecalculateAllPowerData
// [0x00024002] 
struct USFXPowerCustomAction_Overload_execRecalculateAllPowerData_Parms
{
	unsigned long                                      bReset;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 USFXPowerCustomAction_Overload_execRecalculateAllPowerData_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Overload_execRecalculateAllPowerData_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Overload.EvolvePower
// [0x00020002] 
struct USFXPowerCustomAction_Overload_execEvolvePower_Parms
{
	unsigned char                                      choice;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )

	 USFXPowerCustomAction_Overload_execEvolvePower_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Overload_execEvolvePower_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Overload.ShouldUsePower
// [0x00420002] 
struct USFXPowerCustomAction_Overload_execShouldUsePower_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    sOptionalInfo; };                                 		// 0x0008 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 oPawn;                                            		// 0x001C (0x0008) [0x0000000000000000]              

	 USFXPowerCustomAction_Overload_execShouldUsePower_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Overload_execShouldUsePower_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Overload.ClientDoPowerSubsequentImpact
// [0x00024002] 
struct USFXPowerCustomAction_Overload_execClientDoPowerSubsequentImpact_Parms
{
	class AActor*                                      oActor;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                CustomActionReactionType;                         		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              Duration;                                         		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                ImpactCount;                                      		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              Delay;                                            		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      DoCallback;                                       		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class USFXGameEffect_OverloadChain*             Effect;                                           		// 0x001C (0x0008) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0024 (0x0008) [0x0000000000000000]              
	// int                                             i;                                                		// 0x002C (0x0004) [0x0000000000000000]              

	 USFXPowerCustomAction_Overload_execClientDoPowerSubsequentImpact_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Overload_execClientDoPowerSubsequentImpact_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Overload.TestAchievement
// [0x00020002] 
struct USFXPowerCustomAction_Overload_execTestAchievement_Parms
{
	class AActor*                                      oTarget;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ASFXShield_Base*                          Shield;                                           		// 0x0008 (0x0008) [0x0000000000000000]              
	// class USFXModule_Damage*                        DamageMod;                                        		// 0x0010 (0x0008) [0x0000000000000000]              
	// class ABioPlayerController*                     PC;                                               		// 0x0018 (0x0008) [0x0000000000000000]              
	// class ASFXInventoryManager*                     InvManager;                                       		// 0x0020 (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 Player;                                           		// 0x0028 (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 TargetBP;                                         		// 0x0030 (0x0008) [0x0000000000000000]              

	 USFXPowerCustomAction_Overload_execTestAchievement_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Overload_execTestAchievement_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Overload.CreateOverloadChainEffect
// [0x00020002] 
struct USFXPowerCustomAction_Overload_execCreateOverloadChainEffect_Parms
{
	class USFXModule_GameEffectManager*                oManager;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class USFXGameEffect_OverloadChain*                ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXGameEffect_OverloadChain*             Effect;                                           		// 0x0010 (0x0008) [0x0000000000000000]              

	 USFXPowerCustomAction_Overload_execCreateOverloadChainEffect_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Overload_execCreateOverloadChainEffect_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Overload.OnImpact
// [0x00020002] 
struct USFXPowerCustomAction_Overload_execOnImpact_Parms
{
	unsigned char                                      Resistance;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitLocation; };                                   		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitNormal; };                                     		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0028 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x002C (0x0008) [0x0000000000000000]              
	// class USFXGameEffect_OverloadChain*             Effect;                                           		// 0x0034 (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 oPawn;                                            		// 0x003C (0x0008) [0x0000000000000000]              

	 USFXPowerCustomAction_Overload_execOnImpact_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Overload_execOnImpact_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Overload.GetImpactForce
// [0x00020002] 
struct USFXPowerCustomAction_Overload_execGetImpactForce_Parms
{
	class AActor*                                      oImpacted;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXPowerCustomAction_Overload_execGetImpactForce_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Overload_execGetImpactForce_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Overload.GetImpactDamage
// [0x00420002] 
struct USFXPowerCustomAction_Overload_execGetImpactDamage_Parms
{
	class AActor*                                      oImpacted;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0008 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXPowerCustomAction_Overload_execGetImpactDamage_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Overload_execGetImpactDamage_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Overload.OnPowerDetonated
// [0x00024002] 
struct USFXPowerCustomAction_Overload_execOnPowerDetonated_Parms
{
	union { struct FVector                             HitLocation; };                                   		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitNormal; };                                     		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class ASFXProjectile_PowerCustomAction*            oProjectile;                                      		// 0x0018 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      HitActor;                                         		// 0x0020 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 USFXPowerCustomAction_Overload_execOnPowerDetonated_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Overload_execOnPowerDetonated_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Reave.PopulatePowerStatBarEvolves
// [0x00020002] 
struct USFXPowerCustomAction_Reave_execPopulatePowerStatBarEvolves_Parms
{

	 USFXPowerCustomAction_Reave_execPopulatePowerStatBarEvolves_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Reave_execPopulatePowerStatBarEvolves_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Reave.EvolvePower
// [0x00020002] 
struct USFXPowerCustomAction_Reave_execEvolvePower_Parms
{
	unsigned char                                      choice;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )

	 USFXPowerCustomAction_Reave_execEvolvePower_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Reave_execEvolvePower_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Reave.RecalculateAllPowerData
// [0x00024002] 
struct USFXPowerCustomAction_Reave_execRecalculateAllPowerData_Parms
{
	unsigned long                                      bReset;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 USFXPowerCustomAction_Reave_execRecalculateAllPowerData_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Reave_execRecalculateAllPowerData_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Reave.ShouldUsePower
// [0x00420002] 
struct USFXPowerCustomAction_Reave_execShouldUsePower_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    sOptionalInfo; };                                 		// 0x0008 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 oPawn;                                            		// 0x001C (0x0008) [0x0000000000000000]              

	 USFXPowerCustomAction_Reave_execShouldUsePower_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Reave_execShouldUsePower_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Reave.StopSounds
// [0x00020002] 
struct USFXPowerCustomAction_Reave_execStopSounds_Parms
{

	 USFXPowerCustomAction_Reave_execStopSounds_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Reave_execStopSounds_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Reave.OnImpact
// [0x00820002] 
struct USFXPowerCustomAction_Reave_execOnImpact_Parms
{
	unsigned char                                      Resistance;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitLocation; };                                   		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitNormal; };                                     		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0028 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 oTargetPawn;                                      		// 0x002C (0x0008) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0034 (0x0008) [0x0000000000000000]              
	// class USFXGameEffect_Reave*                     Reave;                                            		// 0x003C (0x0008) [0x0000000000000000]              
	// union { struct FRvrClientEffectTarget           CETarget; };                                      		// 0x0044 (0x007C) [0x0000000000000000]              

	 USFXPowerCustomAction_Reave_execOnImpact_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Reave_execOnImpact_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Reave.GetImpactDamage
// [0x00420002] 
struct USFXPowerCustomAction_Reave_execGetImpactDamage_Parms
{
	class AActor*                                      oImpacted;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0008 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXPowerCustomAction_Reave_execGetImpactDamage_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Reave_execGetImpactDamage_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Reave.OnPowerDetonated
// [0x00024002] 
struct USFXPowerCustomAction_Reave_execOnPowerDetonated_Parms
{
	union { struct FVector                             HitLocation; };                                   		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitNormal; };                                     		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class ASFXProjectile_PowerCustomAction*            oProjectile;                                      		// 0x0018 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      HitActor;                                         		// 0x0020 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 USFXPowerCustomAction_Reave_execOnPowerDetonated_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Reave_execOnPowerDetonated_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_CryoBlast.PopulatePowerStatBarEvolves
// [0x00020002] 
struct USFXPowerCustomAction_CryoBlast_execPopulatePowerStatBarEvolves_Parms
{

	 USFXPowerCustomAction_CryoBlast_execPopulatePowerStatBarEvolves_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_CryoBlast_execPopulatePowerStatBarEvolves_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_CryoBlast.ApplyBonus
// [0x00024002] 
struct USFXPowerCustomAction_CryoBlast_execApplyBonus_Parms
{
	union { struct SFXName                             Parameter; };                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class USFXGameEffect*                              Bonus;                                            		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bRemove;                                          		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 USFXPowerCustomAction_CryoBlast_execApplyBonus_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_CryoBlast_execApplyBonus_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_CryoBlast.EvolvePower
// [0x00020002] 
struct USFXPowerCustomAction_CryoBlast_execEvolvePower_Parms
{
	unsigned char                                      choice;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )

	 USFXPowerCustomAction_CryoBlast_execEvolvePower_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_CryoBlast_execEvolvePower_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_CryoBlast.RecalculateAllPowerData
// [0x00024002] 
struct USFXPowerCustomAction_CryoBlast_execRecalculateAllPowerData_Parms
{
	unsigned long                                      bReset;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 USFXPowerCustomAction_CryoBlast_execRecalculateAllPowerData_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_CryoBlast_execRecalculateAllPowerData_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_CryoBlast.GetDefaultClientEffectParams
// [0x00020002] 
struct USFXPowerCustomAction_CryoBlast_execGetDefaultClientEffectParams_Parms
{
	union { struct FVector                             ReturnValue; };                                   		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// union { struct FVector                          Param; };                                         		// 0x000C (0x000C) [0x0000000000000000]              

	 USFXPowerCustomAction_CryoBlast_execGetDefaultClientEffectParams_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_CryoBlast_execGetDefaultClientEffectParams_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_CryoBlast.ShouldUsePower
// [0x00420002] 
struct USFXPowerCustomAction_CryoBlast_execShouldUsePower_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    sOptionalInfo; };                                 		// 0x0008 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXPowerCustomAction_CryoBlast_execShouldUsePower_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_CryoBlast_execShouldUsePower_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_CryoBlast.ClientDoPowerSubsequentImpact
// [0x00024002] 
struct USFXPowerCustomAction_CryoBlast_execClientDoPowerSubsequentImpact_Parms
{
	class AActor*                                      oActor;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                CustomActionReactionType;                         		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              Duration;                                         		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                ImpactCount;                                      		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              Delay;                                            		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      DoCallback;                                       		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 USFXPowerCustomAction_CryoBlast_execClientDoPowerSubsequentImpact_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_CryoBlast_execClientDoPowerSubsequentImpact_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_CryoBlast.OnFrozenPawnDied
// [0x00020003] ( FUNC_Final )
struct USFXPowerCustomAction_CryoBlast_execOnFrozenPawnDied_Parms
{
	class ABioPawn*                                    oPawn;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// union { TArray<class AActor*>                   NearbyActors; };                                  		// 0x0008 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class AActor*                                   NearbyActor;                                      		// 0x0018 (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 NearbyPawn;                                       		// 0x0020 (0x0008) [0x0000000000000000]              
	// unsigned char                                   Resistance;                                       		// 0x0028 (0x0001) [0x0000000000000000]              
	// class AActor*                                   oTargetOverride;                                  		// 0x002C (0x0008) [0x0000000000000000]              
	// union { struct FVector                          Params; };                                        		// 0x0034 (0x000C) [0x0000000000000000]              
	// float                                           fDamage;                                          		// 0x0040 (0x0004) [0x0000000000000000]              
	// union { struct FVector                          vForce; };                                        		// 0x0044 (0x000C) [0x0000000000000000]              
	// float                                           fDelay;                                           		// 0x0050 (0x0004) [0x0000000000000000]              
	// float                                           fDuration;                                        		// 0x0054 (0x0004) [0x0000000000000000]              

	 USFXPowerCustomAction_CryoBlast_execOnFrozenPawnDied_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_CryoBlast_execOnFrozenPawnDied_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_CryoBlast.ApplySlowdownEffect
// [0x00820003] ( FUNC_Final )
struct USFXPowerCustomAction_CryoBlast_execApplySlowdownEffect_Parms
{
	class ABioPawn*                                    oPawn;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              Duration;                                         		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x000C (0x0008) [0x0000000000000000]              
	// union { struct FRvrClientEffectTarget           TargetInfo; };                                    		// 0x0014 (0x007C) [0x0000000000000000]              
	// class USFXGameEffect_MovementSpeedBonus*        SpeedEffect;                                      		// 0x0090 (0x0008) [0x0000000000000000]              
	// class USFXGameEffect*                           Effect;                                           		// 0x0098 (0x0008) [0x0000000000000000]              

	 USFXPowerCustomAction_CryoBlast_execApplySlowdownEffect_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_CryoBlast_execApplySlowdownEffect_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_CryoBlast.ApplyFreezeEffect
// [0x00020003] ( FUNC_Final )
struct USFXPowerCustomAction_CryoBlast_execApplyFreezeEffect_Parms
{
	class ABioPawn*                                    oPawn;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              Duration;                                         		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDelay;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bCallbackOnDeath;                                 		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0014 (0x0008) [0x0000000000000000]              
	// class USFXGameEffect_DelayedCryoFreeze*         FreezeEffect;                                     		// 0x001C (0x0008) [0x0000000000000000]              

	 USFXPowerCustomAction_CryoBlast_execApplyFreezeEffect_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_CryoBlast_execApplyFreezeEffect_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_CryoBlast.OnImpact
// [0x00020002] 
struct USFXPowerCustomAction_CryoBlast_execOnImpact_Parms
{
	unsigned char                                      Resistance;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitLocation; };                                   		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitNormal; };                                     		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0028 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ASFXPawn*                                 oImpactedPawn;                                    		// 0x002C (0x0008) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0034 (0x0008) [0x0000000000000000]              
	// float                                           fDelay;                                           		// 0x003C (0x0004) [0x0000000000000000]              
	// float                                           fDuration;                                        		// 0x0040 (0x0004) [0x0000000000000000]              

	 USFXPowerCustomAction_CryoBlast_execOnImpact_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_CryoBlast_execOnImpact_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Barrier.PopulatePowerStatBarEvolves
// [0x00020002] 
struct USFXPowerCustomAction_Barrier_execPopulatePowerStatBarEvolves_Parms
{

	 USFXPowerCustomAction_Barrier_execPopulatePowerStatBarEvolves_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Barrier_execPopulatePowerStatBarEvolves_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Barrier.ApplyBonus
// [0x00024002] 
struct USFXPowerCustomAction_Barrier_execApplyBonus_Parms
{
	union { struct SFXName                             Parameter; };                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class USFXGameEffect*                              Bonus;                                            		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bRemove;                                          		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 USFXPowerCustomAction_Barrier_execApplyBonus_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Barrier_execApplyBonus_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Barrier.EvolvePower
// [0x00020002] 
struct USFXPowerCustomAction_Barrier_execEvolvePower_Parms
{
	unsigned char                                      choice;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )

	 USFXPowerCustomAction_Barrier_execEvolvePower_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Barrier_execEvolvePower_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Barrier.RecalculateAllPowerData
// [0x00024002] 
struct USFXPowerCustomAction_Barrier_execRecalculateAllPowerData_Parms
{
	unsigned long                                      bReset;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 USFXPowerCustomAction_Barrier_execRecalculateAllPowerData_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Barrier_execRecalculateAllPowerData_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Barrier.OnBlastImpact
// [0x00020002] 
struct USFXPowerCustomAction_Barrier_execOnBlastImpact_Parms
{
	unsigned char                                      Resistance;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitLocation; };                                   		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitNormal; };                                     		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0028 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ASFXPawn*                                 oPawn;                                            		// 0x002C (0x0008) [0x0000000000000000]              
	// unsigned long                                   bRagdolled;                                       		// 0x0034 (0x0004) [0x0000000000000000]              

	 USFXPowerCustomAction_Barrier_execOnBlastImpact_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Barrier_execOnBlastImpact_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Barrier.ClientDoPowerSubsequentImpact
// [0x00024002] 
struct USFXPowerCustomAction_Barrier_execClientDoPowerSubsequentImpact_Parms
{
	class AActor*                                      oActor;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                CustomActionReactionType;                         		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              Duration;                                         		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                ImpactCount;                                      		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              Delay;                                            		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      DoCallback;                                       		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 USFXPowerCustomAction_Barrier_execClientDoPowerSubsequentImpact_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Barrier_execClientDoPowerSubsequentImpact_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Barrier.DoBlast
// [0x00020002] 
struct USFXPowerCustomAction_Barrier_execDoBlast_Parms
{
	// class UBioCheatManager*                         CheatManager;                                     		// 0x0000 (0x0008) [0x0000000000000000]              

	 USFXPowerCustomAction_Barrier_execDoBlast_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Barrier_execDoBlast_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Barrier.RemoveArmor
// [0x00020002] 
struct USFXPowerCustomAction_Barrier_execRemoveArmor_Parms
{

	 USFXPowerCustomAction_Barrier_execRemoveArmor_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Barrier_execRemoveArmor_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Barrier.StartPowerCooldown
// [0x00020000] 
struct USFXPowerCustomAction_Barrier_execStartPowerCooldown_Parms
{

	 USFXPowerCustomAction_Barrier_execStartPowerCooldown_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Barrier_execStartPowerCooldown_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Barrier.ApplyArmor
// [0x00020002] 
struct USFXPowerCustomAction_Barrier_execApplyArmor_Parms
{
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0000 (0x0008) [0x0000000000000000]              

	 USFXPowerCustomAction_Barrier_execApplyArmor_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Barrier_execApplyArmor_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Barrier.StartCustomAction
// [0x00020002] 
struct USFXPowerCustomAction_Barrier_execStartCustomAction_Parms
{
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0000 (0x0008) [0x0000000000000000]              

	 USFXPowerCustomAction_Barrier_execStartCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Barrier_execStartCustomAction_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_KaidenPassive.PopulatePowerStatBarEvolves
// [0x00020002] 
struct USFXPowerCustomAction_KaidenPassive_execPopulatePowerStatBarEvolves_Parms
{

	 USFXPowerCustomAction_KaidenPassive_execPopulatePowerStatBarEvolves_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_KaidenPassive_execPopulatePowerStatBarEvolves_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_KaidenPassive.EvolvePower
// [0x00020002] 
struct USFXPowerCustomAction_KaidenPassive_execEvolvePower_Parms
{
	unsigned char                                      choice;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )

	 USFXPowerCustomAction_KaidenPassive_execEvolvePower_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_KaidenPassive_execEvolvePower_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_KaidenPassive.ResetPower
// [0x00020002] 
struct USFXPowerCustomAction_KaidenPassive_execResetPower_Parms
{
	// class ABioPawn*                                 oSquadMember;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0008 (0x0008) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0010 (0x0004) [0x0000000000000000]              

	 USFXPowerCustomAction_KaidenPassive_execResetPower_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_KaidenPassive_execResetPower_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_KaidenPassive.ApplyGlobalBonus
// [0x00020002] 
struct USFXPowerCustomAction_KaidenPassive_execApplyGlobalBonus_Parms
{
	// class ABioPawn*                                 oSquadMember;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0008 (0x0008) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0010 (0x0004) [0x0000000000000000]              

	 USFXPowerCustomAction_KaidenPassive_execApplyGlobalBonus_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_KaidenPassive_execApplyGlobalBonus_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_HenchmanPassive.RecalculateAllPowerData
// [0x00024002] 
struct USFXPowerCustomAction_HenchmanPassive_execRecalculateAllPowerData_Parms
{
	unsigned long                                      bReset;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 USFXPowerCustomAction_HenchmanPassive_execRecalculateAllPowerData_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_HenchmanPassive_execRecalculateAllPowerData_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_HenchmanPassive.ApplyGlobalBonus
// [0x00020002] 
struct USFXPowerCustomAction_HenchmanPassive_execApplyGlobalBonus_Parms
{

	 USFXPowerCustomAction_HenchmanPassive_execApplyGlobalBonus_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_HenchmanPassive_execApplyGlobalBonus_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_AmmoPower.OnUpdate
// [0x00020802] ( FUNC_Event )
struct USFXGameEffect_AmmoPower_eventOnUpdate_Parms
{
	float                                              DeltaSeconds;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ABioWorldInfo*                            Info;                                             		// 0x0004 (0x0008) [0x0000000000000000]              
	// class ABioPlayerController*                     PC;                                               		// 0x000C (0x0008) [0x0000000000000000]              

	 USFXGameEffect_AmmoPower_eventOnUpdate_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_AmmoPower_eventOnUpdate_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_AmmoPower.OnWeaponUnequip
// [0x00020002] 
struct USFXGameEffect_AmmoPower_execOnWeaponUnequip_Parms
{
	class ASFXWeapon*                                  Weapon;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 USFXGameEffect_AmmoPower_execOnWeaponUnequip_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_AmmoPower_execOnWeaponUnequip_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_AmmoPower.OnWeaponEquip
// [0x00020002] 
struct USFXGameEffect_AmmoPower_execOnWeaponEquip_Parms
{
	class ASFXWeapon*                                  Weapon;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 USFXGameEffect_AmmoPower_execOnWeaponEquip_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_AmmoPower_execOnWeaponEquip_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_AmmoPower.OnWeaponReload
// [0x00020000] 
struct USFXGameEffect_AmmoPower_execOnWeaponReload_Parms
{
	class ASFXWeapon*                                  Weapon;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 USFXGameEffect_AmmoPower_execOnWeaponReload_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_AmmoPower_execOnWeaponReload_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_AmmoPower.GetDamageVocProbabilityMod
// [0x00020002] 
struct USFXGameEffect_AmmoPower_execGetDamageVocProbabilityMod_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXGameEffect_AmmoPower_execGetDamageVocProbabilityMod_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_AmmoPower_execGetDamageVocProbabilityMod_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_AmmoPower.OnWeaponImpact
// [0x00020002] 
struct USFXGameEffect_AmmoPower_execOnWeaponImpact_Parms
{
	class ASFXWeapon*                                  Weapon;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { struct FImpactInfo                         Impact; };                                        		// 0x0008 (0x0064) [0x0000000000000080]              ( CPF_Parm )

	 USFXGameEffect_AmmoPower_execOnWeaponImpact_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_AmmoPower_execOnWeaponImpact_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_AmmoPower.OnRemoved
// [0x00020002] 
struct USFXGameEffect_AmmoPower_execOnRemoved_Parms
{

	 USFXGameEffect_AmmoPower_execOnRemoved_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_AmmoPower_execOnRemoved_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_AmmoPower.GetBulletsPerSecond
// [0x00020002] 
struct USFXGameEffect_AmmoPower_execGetBulletsPerSecond_Parms
{
	class ASFXWeapon*                                  Weapon;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           RateOfFire;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	// class ASFXWeapon_Shotgun_Base*                  oShotgun;                                         		// 0x0010 (0x0008) [0x0000000000000000]              

	 USFXGameEffect_AmmoPower_execGetBulletsPerSecond_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_AmmoPower_execGetBulletsPerSecond_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_AmmoPower.GetWeaponDamage
// [0x00020002] 
struct USFXGameEffect_AmmoPower_execGetWeaponDamage_Parms
{
	class ASFXWeapon*                                  Weapon;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { struct FImpactInfo                         Impact; };                                        		// 0x0008 (0x0064) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x006C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           fDamage;                                          		// 0x0070 (0x0004) [0x0000000000000000]              

	 USFXGameEffect_AmmoPower_execGetWeaponDamage_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_AmmoPower_execGetWeaponDamage_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_AmmoPower.GetHitTarget
// [0x00020002] 
struct USFXGameEffect_AmmoPower_execGetHitTarget_Parms
{
	union { struct FImpactInfo                         Impact; };                                        		// 0x0000 (0x0064) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      ReturnValue;                                      		// 0x0064 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 oPawn;                                            		// 0x006C (0x0008) [0x0000000000000000]              

	 USFXGameEffect_AmmoPower_execGetHitTarget_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_AmmoPower_execGetHitTarget_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_AmmoPower.SetupFromWeapon
// [0x00020002] 
struct USFXGameEffect_AmmoPower_execSetupFromWeapon_Parms
{

	 USFXGameEffect_AmmoPower_execSetupFromWeapon_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_AmmoPower_execSetupFromWeapon_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_AmmoPower.OnApplied
// [0x00020002] 
struct USFXGameEffect_AmmoPower_execOnApplied_Parms
{

	 USFXGameEffect_AmmoPower_execOnApplied_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_AmmoPower_execOnApplied_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_AmmoPower.DelayedSetWeaponPower
// [0x00020003] ( FUNC_Final )
struct USFXPowerCustomAction_AmmoPower_execDelayedSetWeaponPower_Parms
{

	 USFXPowerCustomAction_AmmoPower_execDelayedSetWeaponPower_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_AmmoPower_execDelayedSetWeaponPower_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_AmmoPower.ClientDoCustomActionImpact
// [0x00024002] 
struct USFXPowerCustomAction_AmmoPower_execClientDoCustomActionImpact_Parms
{
	class AActor*                                      oActor;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ImpactCount;                                      		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bFirstTarget;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	union { struct FVector                             HitLocation; };                                   		// 0x0010 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	union { struct FVector                             HitNormal; };                                     		// 0x001C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                CustomActionReactionType;                         		// 0x0028 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 USFXPowerCustomAction_AmmoPower_execClientDoCustomActionImpact_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_AmmoPower_execClientDoCustomActionImpact_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_AmmoPower.DoJoinInProgress
// [0x00020002] 
struct USFXPowerCustomAction_AmmoPower_execDoJoinInProgress_Parms
{
	// class ASFXWeapon*                               Weapon;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0008 (0x0008) [0x0000000000000000]              

	 USFXPowerCustomAction_AmmoPower_execDoJoinInProgress_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_AmmoPower_execDoJoinInProgress_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_AmmoPower.SetupEffect
// [0x00024000] 
struct USFXPowerCustomAction_AmmoPower_execSetupEffect_Parms
{
	class USFXGameEffect_AmmoPower*                    Effect;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class ABioPawn*                                    oPawn;                                            		// 0x0008 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 USFXPowerCustomAction_AmmoPower_execSetupEffect_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_AmmoPower_execSetupEffect_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_AmmoPower.OnPowerRankIncreased
// [0x00020002] 
struct USFXPowerCustomAction_AmmoPower_execOnPowerRankIncreased_Parms
{
	// class ASFXWeapon*                               Weapon;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0008 (0x0008) [0x0000000000000000]              

	 USFXPowerCustomAction_AmmoPower_execOnPowerRankIncreased_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_AmmoPower_execOnPowerRankIncreased_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_AmmoPower.ShouldUsePower
// [0x00420002] 
struct USFXPowerCustomAction_AmmoPower_execShouldUsePower_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    sOptionalInfo; };                                 		// 0x0008 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ASFXWeapon*                               Weapon;                                           		// 0x001C (0x0008) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0024 (0x0008) [0x0000000000000000]              
	// class USFXGameEffect*                           Effect;                                           		// 0x002C (0x0008) [0x0000000000000000]              

	 USFXPowerCustomAction_AmmoPower_execShouldUsePower_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_AmmoPower_execShouldUsePower_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_AmmoPower.DoConcussiveShotSpecialImpact
// [0x00020000] 
struct USFXPowerCustomAction_AmmoPower_execDoConcussiveShotSpecialImpact_Parms
{
	class AActor*                                      oImpacted;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              ImpactEffectDuration;                             		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 USFXPowerCustomAction_AmmoPower_execDoConcussiveShotSpecialImpact_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_AmmoPower_execDoConcussiveShotSpecialImpact_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_AmmoPower.ClientDoPowerSubsequentImpact
// [0x00024002] 
struct USFXPowerCustomAction_AmmoPower_execClientDoPowerSubsequentImpact_Parms
{
	class AActor*                                      oActor;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                CustomActionReactionType;                         		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              Duration;                                         		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                ImpactCount;                                      		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              Delay;                                            		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      DoCallback;                                       		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 USFXPowerCustomAction_AmmoPower_execClientDoPowerSubsequentImpact_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_AmmoPower_execClientDoPowerSubsequentImpact_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_AmmoPower.ReplicateConcussiveShotSpecialImpact
// [0x00020002] 
struct USFXPowerCustomAction_AmmoPower_execReplicateConcussiveShotSpecialImpact_Parms
{
	class ABioPawn*                                    oImpacted;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              DurationOfEffect;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 USFXPowerCustomAction_AmmoPower_execReplicateConcussiveShotSpecialImpact_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_AmmoPower_execReplicateConcussiveShotSpecialImpact_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_AmmoPower.ConcussiveShotCustomImpact
// [0x00020000] 
struct USFXPowerCustomAction_AmmoPower_execConcussiveShotCustomImpact_Parms
{
	unsigned char                                      Resistance;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitLocation; };                                   		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitNormal; };                                     		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )

	 USFXPowerCustomAction_AmmoPower_execConcussiveShotCustomImpact_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_AmmoPower_execConcussiveShotCustomImpact_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_AmmoPower.ApplyPowerEffects
// [0x00020000] 
struct USFXPowerCustomAction_AmmoPower_execApplyPowerEffects_Parms
{
	class ABioPawn*                                    oPawn;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class ASFXWeapon*                                  oWeapon;                                          		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 USFXPowerCustomAction_AmmoPower_execApplyPowerEffects_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_AmmoPower_execApplyPowerEffects_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_AmmoPower.SetWeaponPower
// [0x00020002] 
struct USFXPowerCustomAction_AmmoPower_execSetWeaponPower_Parms
{
	class ABioPawn*                                    oPawn;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class ASFXWeapon*                                  oWeapon;                                          		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bOverrideCurrentPower;                            		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ASFXHeavyWeapon*                          oHeavyWeapon;                                     		// 0x0018 (0x0008) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0020 (0x0008) [0x0000000000000000]              
	// class USFXGameEffect_WeaponVFXChange*           WeaponVFXEffect;                                  		// 0x0028 (0x0008) [0x0000000000000000]              

	 USFXPowerCustomAction_AmmoPower_execSetWeaponPower_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_AmmoPower_execSetWeaponPower_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_AmmoPower.DeferedSetWeaponPower
// [0x00020002] 
struct USFXPowerCustomAction_AmmoPower_execDeferedSetWeaponPower_Parms
{

	 USFXPowerCustomAction_AmmoPower_execDeferedSetWeaponPower_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_AmmoPower_execDeferedSetWeaponPower_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_AmmoPower.OnImpact
// [0x00020002] 
struct USFXPowerCustomAction_AmmoPower_execOnImpact_Parms
{
	unsigned char                                      Resistance;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitLocation; };                                   		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitNormal; };                                     		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0028 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 oPawn;                                            		// 0x002C (0x0008) [0x0000000000000000]              

	 USFXPowerCustomAction_AmmoPower_execOnImpact_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_AmmoPower_execOnImpact_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_AmmoPower.ReloadAmmoPower
// [0x00020002] 
struct USFXPowerCustomAction_AmmoPower_execReloadAmmoPower_Parms
{
	class ABioPawn*                                    Target;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class ASFXWeapon*                                  Weapon;                                           		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 USFXPowerCustomAction_AmmoPower_execReloadAmmoPower_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_AmmoPower_execReloadAmmoPower_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_AmmoPower.StopOmniTool
// [0x00020003] ( FUNC_Final )
struct USFXPowerCustomAction_AmmoPower_execStopOmniTool_Parms
{

	 USFXPowerCustomAction_AmmoPower_execStopOmniTool_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_AmmoPower_execStopOmniTool_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_AmmoPower.StartCustomAction
// [0x00020002] 
struct USFXPowerCustomAction_AmmoPower_execStartCustomAction_Parms
{

	 USFXPowerCustomAction_AmmoPower_execStartCustomAction_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_AmmoPower_execStartCustomAction_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_AmmoPower.CanUsePower
// [0x00020002] 
struct USFXPowerCustomAction_AmmoPower_execCanUsePower_Parms
{
	class AActor*                                      oTarget;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ASFXWeapon*                               Weapon;                                           		// 0x000C (0x0008) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0014 (0x0008) [0x0000000000000000]              
	// class USFXGameEffect*                           Effect;                                           		// 0x001C (0x0008) [0x0000000000000000]              

	 USFXPowerCustomAction_AmmoPower_execCanUsePower_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_AmmoPower_execCanUsePower_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_AmmoPower.PrecacheVFX
// [0x00022002] 
struct USFXPowerCustomAction_AmmoPower_execPrecacheVFX_Parms
{
	class ASFXObjectPool*                              ObjectPool;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class URvrClientEffectManager*                     ClientEffects;                                    		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 USFXPowerCustomAction_AmmoPower_execPrecacheVFX_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_AmmoPower_execPrecacheVFX_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_IncendiaryAmmo.AddGameEffects
// [0x00020002] 
struct USFXGameEffect_IncendiaryAmmo_execAddGameEffects_Parms
{
	class AActor*                                      oTarget;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0008 (0x0008) [0x0000000000000000]              

	 USFXGameEffect_IncendiaryAmmo_execAddGameEffects_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_IncendiaryAmmo_execAddGameEffects_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_IncendiaryAmmo.GetDamageVocProbabilityMod
// [0x00020002] 
struct USFXGameEffect_IncendiaryAmmo_execGetDamageVocProbabilityMod_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXGameEffect_IncendiaryAmmo_execGetDamageVocProbabilityMod_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_IncendiaryAmmo_execGetDamageVocProbabilityMod_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_IncendiaryAmmo.OnWeaponImpact
// [0x00020002] 
struct USFXGameEffect_IncendiaryAmmo_execOnWeaponImpact_Parms
{
	class ASFXWeapon*                                  Weapon;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { struct FImpactInfo                         Impact; };                                        		// 0x0008 (0x0064) [0x0000000000000080]              ( CPF_Parm )
	// class AActor*                                   oHitActor;                                        		// 0x006C (0x0008) [0x0000000000000000]              
	// float                                           fExtraDamage;                                     		// 0x0074 (0x0004) [0x0000000000000000]              
	// float                                           LastExplosionTime;                                		// 0x0078 (0x0004) [0x0000000000000000]              
	// class USFXGameEffect_FireDamageOverTime*        DamageEffect;                                     		// 0x007C (0x0008) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0084 (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 HitPawn;                                          		// 0x008C (0x0008) [0x0000000000000000]              
	// float                                           fZeroDamage;                                      		// 0x0094 (0x0004) [0x0000000000000000]              
	// union { struct FVector                          fZeroForce; };                                    		// 0x0098 (0x000C) [0x0000000000000000]              
	// class AActor*                                   oTargetOverride;                                  		// 0x00A4 (0x0008) [0x0000000000000000]              
	// unsigned char                                   Resistance;                                       		// 0x00AC (0x0001) [0x0000000000000000]              

	 USFXGameEffect_IncendiaryAmmo_execOnWeaponImpact_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_IncendiaryAmmo_execOnWeaponImpact_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_IncendiaryAmmo.OnRemoved
// [0x00020002] 
struct USFXGameEffect_IncendiaryAmmo_execOnRemoved_Parms
{
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0000 (0x0008) [0x0000000000000000]              

	 USFXGameEffect_IncendiaryAmmo_execOnRemoved_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_IncendiaryAmmo_execOnRemoved_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_IncendiaryAmmo.OnApplied
// [0x00020002] 
struct USFXGameEffect_IncendiaryAmmo_execOnApplied_Parms
{
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0000 (0x0008) [0x0000000000000000]              

	 USFXGameEffect_IncendiaryAmmo_execOnApplied_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_IncendiaryAmmo_execOnApplied_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_IncendiaryAmmo.PrecacheVFX
// [0x00022002] 
struct USFXGameEffect_IncendiaryAmmo_execPrecacheVFX_Parms
{
	class ASFXObjectPool*                              ObjectPool;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class URvrClientEffectManager*                     ClientEffects;                                    		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 USFXGameEffect_IncendiaryAmmo_execPrecacheVFX_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_IncendiaryAmmo_execPrecacheVFX_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_IncendiaryAmmo.PopulatePowerStatBarEvolves
// [0x00020002] 
struct USFXPowerCustomAction_IncendiaryAmmo_execPopulatePowerStatBarEvolves_Parms
{

	 USFXPowerCustomAction_IncendiaryAmmo_execPopulatePowerStatBarEvolves_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_IncendiaryAmmo_execPopulatePowerStatBarEvolves_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_IncendiaryAmmo.ApplyBonus
// [0x00024002] 
struct USFXPowerCustomAction_IncendiaryAmmo_execApplyBonus_Parms
{
	union { struct SFXName                             Parameter; };                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class USFXGameEffect*                              Bonus;                                            		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bRemove;                                          		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 USFXPowerCustomAction_IncendiaryAmmo_execApplyBonus_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_IncendiaryAmmo_execApplyBonus_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_IncendiaryAmmo.RecalculateAllPowerData
// [0x00024002] 
struct USFXPowerCustomAction_IncendiaryAmmo_execRecalculateAllPowerData_Parms
{
	unsigned long                                      bReset;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 USFXPowerCustomAction_IncendiaryAmmo_execRecalculateAllPowerData_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_IncendiaryAmmo_execRecalculateAllPowerData_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_IncendiaryAmmo.ResetPower
// [0x00020002] 
struct USFXPowerCustomAction_IncendiaryAmmo_execResetPower_Parms
{

	 USFXPowerCustomAction_IncendiaryAmmo_execResetPower_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_IncendiaryAmmo_execResetPower_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_IncendiaryAmmo.EvolvePower
// [0x00020002] 
struct USFXPowerCustomAction_IncendiaryAmmo_execEvolvePower_Parms
{
	unsigned char                                      choice;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )

	 USFXPowerCustomAction_IncendiaryAmmo_execEvolvePower_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_IncendiaryAmmo_execEvolvePower_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_IncendiaryAmmo.GetIncendiaryAmmoEffect
// [0x00020002] 
struct USFXPowerCustomAction_IncendiaryAmmo_execGetIncendiaryAmmoEffect_Parms
{
	class USFXGameEffect_IncendiaryAmmo*               ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0008 (0x0008) [0x0000000000000000]              
	// class USFXGameEffect*                           Effect;                                           		// 0x0010 (0x0008) [0x0000000000000000]              

	 USFXPowerCustomAction_IncendiaryAmmo_execGetIncendiaryAmmoEffect_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_IncendiaryAmmo_execGetIncendiaryAmmoEffect_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_IncendiaryAmmo.OnActorImpacted
// [0x00020002] 
struct USFXPowerCustomAction_IncendiaryAmmo_execOnActorImpacted_Parms
{
	unsigned char                                      Resistance;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitLocation; };                                   		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitNormal; };                                     		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0028 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 oPawn;                                            		// 0x002C (0x0008) [0x0000000000000000]              
	// class USFXGameEffect_IncendiaryAmmo*            IncendiaryAmmoEffect;                             		// 0x0034 (0x0008) [0x0000000000000000]              

	 USFXPowerCustomAction_IncendiaryAmmo_execOnActorImpacted_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_IncendiaryAmmo_execOnActorImpacted_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_IncendiaryAmmo.DoConcussiveShotSpecialImpact
// [0x00020002] 
struct USFXPowerCustomAction_IncendiaryAmmo_execDoConcussiveShotSpecialImpact_Parms
{
	class AActor*                                      oImpacted;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              ImpactEffectDuration;                             		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x000C (0x0008) [0x0000000000000000]              
	// class USFXGameEffect_FireDamageOverTime*        DamageEffect;                                     		// 0x0014 (0x0008) [0x0000000000000000]              

	 USFXPowerCustomAction_IncendiaryAmmo_execDoConcussiveShotSpecialImpact_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_IncendiaryAmmo_execDoConcussiveShotSpecialImpact_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_IncendiaryAmmo.ConcussiveShotCustomImpact
// [0x00020002] 
struct USFXPowerCustomAction_IncendiaryAmmo_execConcussiveShotCustomImpact_Parms
{
	unsigned char                                      Resistance;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitLocation; };                                   		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitNormal; };                                     		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class ABioPawn*                                 oImpactedPawn;                                    		// 0x0028 (0x0008) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0030 (0x0008) [0x0000000000000000]              

	 USFXPowerCustomAction_IncendiaryAmmo_execConcussiveShotCustomImpact_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_IncendiaryAmmo_execConcussiveShotCustomImpact_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_IncendiaryAmmo.ClientDoPowerSubsequentImpact
// [0x00024002] 
struct USFXPowerCustomAction_IncendiaryAmmo_execClientDoPowerSubsequentImpact_Parms
{
	class AActor*                                      oActor;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                CustomActionReactionType;                         		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              Duration;                                         		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                ImpactCount;                                      		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              Delay;                                            		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      DoCallback;                                       		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 USFXPowerCustomAction_IncendiaryAmmo_execClientDoPowerSubsequentImpact_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_IncendiaryAmmo_execClientDoPowerSubsequentImpact_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_IncendiaryAmmo.ClientDoCustomActionImpact
// [0x00024002] 
struct USFXPowerCustomAction_IncendiaryAmmo_execClientDoCustomActionImpact_Parms
{
	class AActor*                                      oActor;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ImpactCount;                                      		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bFirstTarget;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	union { struct FVector                             HitLocation; };                                   		// 0x0010 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	union { struct FVector                             HitNormal; };                                     		// 0x001C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                CustomActionReactionType;                         		// 0x0028 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class USFXGameEffect_IncendiaryAmmo*            IncendiaryAmmoEffect;                             		// 0x002C (0x0008) [0x0000000000000000]              

	 USFXPowerCustomAction_IncendiaryAmmo_execClientDoCustomActionImpact_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_IncendiaryAmmo_execClientDoCustomActionImpact_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_IncendiaryAmmo.DoEvolvedAoEImpact
// [0x00020002] 
struct USFXPowerCustomAction_IncendiaryAmmo_execDoEvolvedAoEImpact_Parms
{
	union { struct FImpactInfo                         Impact; };                                        		// 0x0000 (0x0064) [0x0000000000000080]              ( CPF_Parm )
	class USFXGameEffect_IncendiaryAmmo*               Effect;                                           		// 0x0064 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ABioPawn*                                 oPawn;                                            		// 0x006C (0x0008) [0x0000000000000000]              

	 USFXPowerCustomAction_IncendiaryAmmo_execDoEvolvedAoEImpact_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_IncendiaryAmmo_execDoEvolvedAoEImpact_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_IncendiaryAmmo.SpawnRandomImpactVFX
// [0x00040003] ( FUNC_Final )
struct USFXPowerCustomAction_IncendiaryAmmo_execSpawnRandomImpactVFX_Parms
{
	class ABioPawn*                                    Pawn;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UParticleSystem*                             ImpactParticleSystem;                             		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      inInstigator;                                     		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ASFXDuringAsyncWorkTicker*                oTicker;                                          		// 0x0018 (0x0008) [0x0000000000000000]              
	// union { struct SFXName                          BoneName; };                                      		// 0x0020 (0x0008) [0x0000000000000000]              

	 USFXPowerCustomAction_IncendiaryAmmo_execSpawnRandomImpactVFX_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_IncendiaryAmmo_execSpawnRandomImpactVFX_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_IncendiaryAmmo.SetupEffect
// [0x00024002] 
struct USFXPowerCustomAction_IncendiaryAmmo_execSetupEffect_Parms
{
	class USFXGameEffect_AmmoPower*                    Effect;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class ABioPawn*                                    oPawn;                                            		// 0x0008 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class USFXGameEffect_IncendiaryAmmo*            effectIncendiaryAmmo;                             		// 0x0010 (0x0008) [0x0000000000000000]              
	// float                                           fEffectValue;                                     		// 0x0018 (0x0004) [0x0000000000000000]              

	 USFXPowerCustomAction_IncendiaryAmmo_execSetupEffect_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_IncendiaryAmmo_execSetupEffect_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_IncendiaryAmmo.GetDamageType
// [0x00020003] ( FUNC_Final )
struct USFXPowerCustomAction_IncendiaryAmmo_execGetDamageType_Parms
{
	class UClass*                                      ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXPowerCustomAction_IncendiaryAmmo_execGetDamageType_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_IncendiaryAmmo_execGetDamageType_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_IncendiaryAmmo.ApplyPowerEffects
// [0x00020002] 
struct USFXPowerCustomAction_IncendiaryAmmo_execApplyPowerEffects_Parms
{
	class ABioPawn*                                    oPawn;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class ASFXWeapon*                                  oWeapon;                                          		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0010 (0x0008) [0x0000000000000000]              
	// class USFXGameEffect_IncendiaryAmmo*            oEffect;                                          		// 0x0018 (0x0008) [0x0000000000000000]              

	 USFXPowerCustomAction_IncendiaryAmmo_execApplyPowerEffects_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_IncendiaryAmmo_execApplyPowerEffects_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_IncendiaryAmmo.PrecacheVFX
// [0x00022002] 
struct USFXPowerCustomAction_IncendiaryAmmo_execPrecacheVFX_Parms
{
	class ASFXObjectPool*                              ObjectPool;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class URvrClientEffectManager*                     ClientEffects;                                    		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 USFXPowerCustomAction_IncendiaryAmmo_execPrecacheVFX_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_IncendiaryAmmo_execPrecacheVFX_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_WeaponVFXChange.OnRemoved
// [0x00020002] 
struct USFXGameEffect_WeaponVFXChange_execOnRemoved_Parms
{

	 USFXGameEffect_WeaponVFXChange_execOnRemoved_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_WeaponVFXChange_execOnRemoved_Parms() {}
};

// Function SFXGameContent.SFXGameEffect_WeaponVFXChange.OnApplied
// [0x00020002] 
struct USFXGameEffect_WeaponVFXChange_execOnApplied_Parms
{

	 USFXGameEffect_WeaponVFXChange_execOnApplied_Parms() { memset(this, 0, sizeof *this); }
	~USFXGameEffect_WeaponVFXChange_execOnApplied_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_FragGrenade.PopulatePowerStatBarEvolves
// [0x00020002] 
struct USFXPowerCustomAction_FragGrenade_execPopulatePowerStatBarEvolves_Parms
{

	 USFXPowerCustomAction_FragGrenade_execPopulatePowerStatBarEvolves_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_FragGrenade_execPopulatePowerStatBarEvolves_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_FragGrenade.GetDefaultClientEffectParams
// [0x00020002] 
struct USFXPowerCustomAction_FragGrenade_execGetDefaultClientEffectParams_Parms
{
	union { struct FVector                             ReturnValue; };                                   		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// union { struct FVector                          Param; };                                         		// 0x000C (0x000C) [0x0000000000000000]              

	 USFXPowerCustomAction_FragGrenade_execGetDefaultClientEffectParams_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_FragGrenade_execGetDefaultClientEffectParams_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_FragGrenade.RecalculateAllPowerData
// [0x00024002] 
struct USFXPowerCustomAction_FragGrenade_execRecalculateAllPowerData_Parms
{
	unsigned long                                      bReset;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 USFXPowerCustomAction_FragGrenade_execRecalculateAllPowerData_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_FragGrenade_execRecalculateAllPowerData_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_FragGrenade.EvolvePower
// [0x00020002] 
struct USFXPowerCustomAction_FragGrenade_execEvolvePower_Parms
{
	unsigned char                                      choice;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )

	 USFXPowerCustomAction_FragGrenade_execEvolvePower_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_FragGrenade_execEvolvePower_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_FragGrenade.OnImpact
// [0x00020002] 
struct USFXPowerCustomAction_FragGrenade_execOnImpact_Parms
{
	unsigned char                                      Resistance;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitLocation; };                                   		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitNormal; };                                     		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0028 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x002C (0x0008) [0x0000000000000000]              
	// class USFXGameEffect_DamageOverTime*            Effect;                                           		// 0x0034 (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 oPawn;                                            		// 0x003C (0x0008) [0x0000000000000000]              

	 USFXPowerCustomAction_FragGrenade_execOnImpact_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_FragGrenade_execOnImpact_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_FragGrenade.ApplyGrenadeBonus
// [0x00020002] 
struct USFXPowerCustomAction_FragGrenade_execApplyGrenadeBonus_Parms
{
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0000 (0x0008) [0x0000000000000000]              

	 USFXPowerCustomAction_FragGrenade_execApplyGrenadeBonus_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_FragGrenade_execApplyGrenadeBonus_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_FragGrenade.GetDamageType
// [0x00020002] 
struct USFXPowerCustomAction_FragGrenade_execGetDamageType_Parms
{
	class UClass*                                      ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXPowerCustomAction_FragGrenade_execGetDamageType_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_FragGrenade_execGetDamageType_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_FragGrenade.GetImpactDamage
// [0x00420002] 
struct USFXPowerCustomAction_FragGrenade_execGetImpactDamage_Parms
{
	class AActor*                                      oImpacted;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0008 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXPowerCustomAction_FragGrenade_execGetImpactDamage_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_FragGrenade_execGetImpactDamage_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_FragGrenade.PlayDetonationEffects
// [0x00024002] 
struct USFXPowerCustomAction_FragGrenade_execPlayDetonationEffects_Parms
{
	union { struct FVector                             ImpactLocation; };                                		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             ImpactNormal; };                                  		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class ASFXProjectile_PowerCustomAction*            oProjectile;                                      		// 0x0018 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 USFXPowerCustomAction_FragGrenade_execPlayDetonationEffects_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_FragGrenade_execPlayDetonationEffects_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Carnage.PopulatePowerStatBarEvolves
// [0x00020002] 
struct USFXPowerCustomAction_Carnage_execPopulatePowerStatBarEvolves_Parms
{

	 USFXPowerCustomAction_Carnage_execPopulatePowerStatBarEvolves_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Carnage_execPopulatePowerStatBarEvolves_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Carnage.EvolvePower
// [0x00020002] 
struct USFXPowerCustomAction_Carnage_execEvolvePower_Parms
{
	unsigned char                                      choice;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )

	 USFXPowerCustomAction_Carnage_execEvolvePower_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Carnage_execEvolvePower_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Carnage.ShouldUsePower
// [0x00420002] 
struct USFXPowerCustomAction_Carnage_execShouldUsePower_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    sOptionalInfo; };                                 		// 0x0008 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 oPawn;                                            		// 0x001C (0x0008) [0x0000000000000000]              

	 USFXPowerCustomAction_Carnage_execShouldUsePower_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Carnage_execShouldUsePower_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Carnage.PlayDetonationEffects
// [0x00024002] 
struct USFXPowerCustomAction_Carnage_execPlayDetonationEffects_Parms
{
	union { struct FVector                             ImpactLocation; };                                		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             ImpactNormal; };                                  		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class ASFXProjectile_PowerCustomAction*            oProjectile;                                      		// 0x0018 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 USFXPowerCustomAction_Carnage_execPlayDetonationEffects_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Carnage_execPlayDetonationEffects_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Carnage.GetProjectileAttachPoint
// [0x00420002] 
struct USFXPowerCustomAction_Carnage_execGetProjectileAttachPoint_Parms
{
	union { struct FVector                             AttachPoint; };                                   		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// union { struct FRotator                         Rotation; };                                      		// 0x0010 (0x000C) [0x0000000000000000]              

	 USFXPowerCustomAction_Carnage_execGetProjectileAttachPoint_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Carnage_execGetProjectileAttachPoint_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Carnage.ReleasePower
// [0x00020002] 
struct USFXPowerCustomAction_Carnage_execReleasePower_Parms
{
	// union { struct FVector                          EffectLocation; };                                		// 0x0000 (0x000C) [0x0000000000000000]              
	// union { struct FRotator                         EffectRotation; };                                		// 0x000C (0x000C) [0x0000000000000000]              

	 USFXPowerCustomAction_Carnage_execReleasePower_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Carnage_execReleasePower_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Carnage.PrecacheVFX
// [0x00022002] 
struct USFXPowerCustomAction_Carnage_execPrecacheVFX_Parms
{
	class ASFXObjectPool*                              ObjectPool;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class URvrClientEffectManager*                     ClientEffects;                                    		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 USFXPowerCustomAction_Carnage_execPrecacheVFX_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Carnage_execPrecacheVFX_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Carnage.OnImpact
// [0x00020002] 
struct USFXPowerCustomAction_Carnage_execOnImpact_Parms
{
	unsigned char                                      Resistance;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitLocation; };                                   		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitNormal; };                                     		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0028 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x002C (0x0008) [0x0000000000000000]              
	// class USFXGameEffect_DamageOverTime*            Effect;                                           		// 0x0034 (0x0008) [0x0000000000000000]              
	// class UClass*                                   DamageType;                                       		// 0x003C (0x0008) [0x0000000000000000]              
	// float                                           fDamagePerSecond;                                 		// 0x0044 (0x0004) [0x0000000000000000]              
	// class ASFXPawn*                                 oPawn;                                            		// 0x0048 (0x0008) [0x0000000000000000]              
	// union { struct FVector                          Param; };                                         		// 0x0050 (0x000C) [0x0000000000000000]              

	 USFXPowerCustomAction_Carnage_execOnImpact_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Carnage_execOnImpact_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Carnage.GetTotalDamage
// [0x00420002] 
struct USFXPowerCustomAction_Carnage_execGetTotalDamage_Parms
{
	class AActor*                                      oImpacted;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0008 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      bIsDamageOverTime;                                		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           fDamage;                                          		// 0x0018 (0x0004) [0x0000000000000000]              

	 USFXPowerCustomAction_Carnage_execGetTotalDamage_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Carnage_execGetTotalDamage_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Carnage.GetImpactDamage
// [0x00420002] 
struct USFXPowerCustomAction_Carnage_execGetImpactDamage_Parms
{
	class AActor*                                      oImpacted;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0008 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXPowerCustomAction_Carnage_execGetImpactDamage_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Carnage_execGetImpactDamage_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Carnage.DoPowerDetonatedForActor
// [0x00024002] 
struct USFXPowerCustomAction_Carnage_execDoPowerDetonatedForActor_Parms
{
	class AActor*                                      oActor;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitLocation; };                                   		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitNormal; };                                     		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                nImpactCount;                                     		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bFirstTarget;                                     		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ASFXProjectile_PowerCustomAction*            oProjectile;                                      		// 0x0028 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0030 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 ImpactedPawn;                                     		// 0x0034 (0x0008) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x003C (0x0008) [0x0000000000000000]              
	// class USFXGameEffect_DeathEffect*               DeathEffect;                                      		// 0x0044 (0x0008) [0x0000000000000000]              

	 USFXPowerCustomAction_Carnage_execDoPowerDetonatedForActor_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Carnage_execDoPowerDetonatedForActor_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Fortification.PopulatePowerStatBarEvolves
// [0x00020002] 
struct USFXPowerCustomAction_Fortification_execPopulatePowerStatBarEvolves_Parms
{

	 USFXPowerCustomAction_Fortification_execPopulatePowerStatBarEvolves_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Fortification_execPopulatePowerStatBarEvolves_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Fortification.EvolvePower
// [0x00020002] 
struct USFXPowerCustomAction_Fortification_execEvolvePower_Parms
{
	unsigned char                                      choice;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )

	 USFXPowerCustomAction_Fortification_execEvolvePower_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Fortification_execEvolvePower_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Fortification.RecalculateAllPowerData
// [0x00024002] 
struct USFXPowerCustomAction_Fortification_execRecalculateAllPowerData_Parms
{
	unsigned long                                      bReset;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 USFXPowerCustomAction_Fortification_execRecalculateAllPowerData_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Fortification_execRecalculateAllPowerData_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Fortification.RemoveArmor
// [0x00020002] 
struct USFXPowerCustomAction_Fortification_execRemoveArmor_Parms
{
	// class UBioCheatManager*                         CheatManager;                                     		// 0x0000 (0x0008) [0x0000000000000000]              

	 USFXPowerCustomAction_Fortification_execRemoveArmor_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Fortification_execRemoveArmor_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Fortification.StartPowerCooldown
// [0x00020000] 
struct USFXPowerCustomAction_Fortification_execStartPowerCooldown_Parms
{

	 USFXPowerCustomAction_Fortification_execStartPowerCooldown_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Fortification_execStartPowerCooldown_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_Fortification.ApplyArmor
// [0x00020002] 
struct USFXPowerCustomAction_Fortification_execApplyArmor_Parms
{
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0000 (0x0008) [0x0000000000000000]              

	 USFXPowerCustomAction_Fortification_execApplyArmor_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_Fortification_execApplyArmor_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_JimmyPassive.PopulatePowerStatBarEvolves
// [0x00020002] 
struct USFXPowerCustomAction_JimmyPassive_execPopulatePowerStatBarEvolves_Parms
{

	 USFXPowerCustomAction_JimmyPassive_execPopulatePowerStatBarEvolves_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_JimmyPassive_execPopulatePowerStatBarEvolves_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_JimmyPassive.EvolvePower
// [0x00020002] 
struct USFXPowerCustomAction_JimmyPassive_execEvolvePower_Parms
{
	unsigned char                                      choice;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )

	 USFXPowerCustomAction_JimmyPassive_execEvolvePower_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_JimmyPassive_execEvolvePower_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_JimmyPassive.ResetPower
// [0x00020002] 
struct USFXPowerCustomAction_JimmyPassive_execResetPower_Parms
{
	// class ABioPawn*                                 oSquadMember;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0008 (0x0008) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0010 (0x0004) [0x0000000000000000]              

	 USFXPowerCustomAction_JimmyPassive_execResetPower_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_JimmyPassive_execResetPower_Parms() {}
};

// Function SFXGameContent.SFXPowerCustomAction_JimmyPassive.ApplyGlobalBonus
// [0x00020002] 
struct USFXPowerCustomAction_JimmyPassive_execApplyGlobalBonus_Parms
{
	// class ABioPawn*                                 oSquadMember;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0008 (0x0008) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0010 (0x0004) [0x0000000000000000]              

	 USFXPowerCustomAction_JimmyPassive_execApplyGlobalBonus_Parms() { memset(this, 0, sizeof *this); }
	~USFXPowerCustomAction_JimmyPassive_execApplyGlobalBonus_Parms() {}
};

// Function SFXGameContent.SFXGUI_ShotgunReticle.ResetReticle
// [0x00024802] ( FUNC_Event )
struct USFXGUI_ShotgunReticle_eventResetReticle_Parms
{
	unsigned long                                      bUnsubscribe;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// union { struct FASDisplayInfo                   disp; };                                          		// 0x0004 (0x002C) [0x0000000000000000]              

	 USFXGUI_ShotgunReticle_eventResetReticle_Parms() { memset(this, 0, sizeof *this); }
	~USFXGUI_ShotgunReticle_eventResetReticle_Parms() {}
};

// Function SFXGameContent.SFXGUI_ShotgunReticle.TargetCanHitChanged
// [0x00020802] ( FUNC_Event )
struct USFXGUI_ShotgunReticle_eventTargetCanHitChanged_Parms
{
	unsigned long                                      bInSights;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 USFXGUI_ShotgunReticle_eventTargetCanHitChanged_Parms() { memset(this, 0, sizeof *this); }
	~USFXGUI_ShotgunReticle_eventTargetCanHitChanged_Parms() {}
};

// Function SFXGameContent.SFXGUI_ShotgunReticle.Update
// [0x00020802] ( FUNC_Event )
struct USFXGUI_ShotgunReticle_eventUpdate_Parms
{
	float                                              fDeltaT;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           fRadiiSum;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             nSumCount;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             nIndex;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           fCurrentRadius;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
	// class ASFXPlayerInventoryManager*               pInvManager;                                      		// 0x0014 (0x0008) [0x0000000000000000]              

	 USFXGUI_ShotgunReticle_eventUpdate_Parms() { memset(this, 0, sizeof *this); }
	~USFXGUI_ShotgunReticle_eventUpdate_Parms() {}
};

// Function SFXGameContent.SFXGUI_ShotgunReticle.PerformReticleHide
// [0x00020802] ( FUNC_Event )
struct USFXGUI_ShotgunReticle_eventPerformReticleHide_Parms
{
	unsigned long                                      bInstant;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 USFXGUI_ShotgunReticle_eventPerformReticleHide_Parms() { memset(this, 0, sizeof *this); }
	~USFXGUI_ShotgunReticle_eventPerformReticleHide_Parms() {}
};

// Function SFXGameContent.SFXGUI_ShotgunReticle.PerformReticleShow
// [0x00020802] ( FUNC_Event )
struct USFXGUI_ShotgunReticle_eventPerformReticleShow_Parms
{
	unsigned long                                      bInstant;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 USFXGUI_ShotgunReticle_eventPerformReticleShow_Parms() { memset(this, 0, sizeof *this); }
	~USFXGUI_ShotgunReticle_eventPerformReticleShow_Parms() {}
};

// Function SFXGameContent.SFXGUI_ShotgunReticle.OnReticleLoaded
// [0x00020002] 
struct USFXGUI_ShotgunReticle_execOnReticleLoaded_Parms
{

	 USFXGUI_ShotgunReticle_execOnReticleLoaded_Parms() { memset(this, 0, sizeof *this); }
	~USFXGUI_ShotgunReticle_execOnReticleLoaded_Parms() {}
};



#undef LESDK_IN_GENERATED

#ifdef _MSC_VER
	#pragma pack ( pop )
#endif
