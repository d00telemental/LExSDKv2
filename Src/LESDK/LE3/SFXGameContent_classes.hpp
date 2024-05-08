/*
#############################################################################################
# Mass Effect 3 (Legendary Edition) (2.0.0.48602) SDK
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

#define CONST_SHOTGUN_SMOOTHING_BUFFER                           3

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum SFXGameContent.SFXCustomAction_HenchmanMelee.HenchMeleeStage
/*enum HenchMeleeStage
{
	HM_Attack1                                         = 0,
	HM_Attack2                                         = 1,
	HM_Attack3                                         = 2,
	HM_MAX                                             = 3
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class SFXGameContent.SFXVocalizationManagerSP
// 0x0000 (0x02C0 - 0x02C0)
class ASFXVocalizationManagerSP : public ASFXVocalizationManager
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXGRISP
// 0x0003 (0x0380 - 0x037D)
class ASFXGRISP : public ASFXGRI
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXGameInfoSP
// 0x0000 (0x083C - 0x083C)
class ASFXGameInfoSP : public ASFXGame
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool AwardItem ( struct SFXName ItemName, FString const& Level );
	bool AwardCredits ( int Amount, FString const& Level, unsigned long bShowNotification );
	bool AwardCreditPercent ( float fAmount, FString const& Level, unsigned long bShowNotifications );
	bool AwardXP ( int Amount, FString const& Level, unsigned long bShowNotifications );
	class ANavigationPoint* FindPlayerStart ( class AController* Player, unsigned char InTeam, FString const& IncomingName );
	void eventPostBeginPlay ( );
};

// Class SFXGameContent.SFXDamageType_AssaultRifle
// 0x0000 (0x0130 - 0x0130)
class USFXDamageType_AssaultRifle : public USFXDamageType_Weapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_HeavyPistol
// 0x0000 (0x0130 - 0x0130)
class USFXDamageType_HeavyPistol : public USFXDamageType_Weapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_MattockAssaultRifle
// 0x0000 (0x0130 - 0x0130)
class USFXDamageType_MattockAssaultRifle : public USFXDamageType_Weapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXGUI_HeavyWeaponReticle
// 0x0018 (0x00D0 - 0x00B8)
class USFXGUI_HeavyWeaponReticle : public USFXGUI_WeaponReticleBase
{
public:
	class UGFxValue*                                   m_oActualReticle;                                 		// 0x00B8 (0x0008) [0x0000000000000000]              
	class UGFxValue*                                   m_oAmmoText;                                      		// 0x00C0 (0x0008) [0x0000000000000000]              
	class UGFxValue*                                   m_oReticleBG;                                     		// 0x00C8 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void eventTargetCanHitChanged ( unsigned long bCanHit );
	void eventWeaponAmmoChanged ( int nAmmo );
	void OnReticleLoaded ( );
	void eventPerformReticleHide ( unsigned long bInstant );
	void eventPerformReticleShow ( unsigned long bInstant );
};

// Class SFXGameContent.SFXSeqAct_GiveStartingConsumables
// 0x0000 (0x00F8 - 0x00F8)
class USFXSeqAct_GiveStartingConsumables : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void Activated ( );
};

// Class SFXGameContent.SFXSeqAct_OpenWeaponSelection
// 0x0010 (0x0120 - 0x0110)
class USFXSeqAct_OpenWeaponSelection : public UBioSequenceLatentAction
{
public:
	class UGFxMovieInfo*                               WeaponSelectionMovieInfo;                         		// 0x0110 (0x0008) [0x0000000000000000]              
	int                                                MaxWeapons;                                       		// 0x0118 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      ShowAllWeapons : 1;                               		// 0x011C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bIsFinished : 1;                                  		// 0x011C (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool OnMovieClosedDelegate ( class USFXGUIMovie* i_ScreenToClose );
	bool UpdateOp ( float fDeltaT );
	void Activated ( );
};

// Class SFXGameContent.SFXShield_Energy_Player
// 0x0000 (0x04BC - 0x04BC)
class ASFXShield_Energy_Player : public ASFXShield_Player
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXWeapon_AssaultRifle_Avenger
// 0x0000 (0x10CC - 0x10CC)
class ASFXWeapon_AssaultRifle_Avenger : public ASFXWeapon_AssaultRifle_Base
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXWeapon_AssaultRifle_Mattock
// 0x0000 (0x10CC - 0x10CC)
class ASFXWeapon_AssaultRifle_Mattock : public ASFXWeapon_AssaultRifle_Base
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXWeapon_Heavy_Beam_Base
// 0x003C (0x1108 - 0x10CC)
class ASFXWeapon_Heavy_Beam_Base : public ASFXHeavyWeapon
{
public:
	struct FVector                                     vLastHitLocation;                                 		// 0x10CC (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FRotator                                    rPreCalAim;                                       		// 0x10D8 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   BeamInterpSpeed;                                  		// 0x10E4 (0x0008) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                DecalFrequency;                                   		// 0x10EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fCurrentBeamInterpTime;                           		// 0x10F0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              BeamInterpTime;                                   		// 0x10F4 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                LastDecalTime;                                    		// 0x10F8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              LastImpactTime;                                   		// 0x10FC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              VFXUpdateInterval;                                		// 0x1100 (0x0004) [0x0000000000000000]              
	unsigned long                                      bFiringContinuously : 1;                          		// 0x1104 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bIsFiring : 1;                                    		// 0x1104 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	struct FRotator GetAdjustedAim ( struct FVector const& StartFireLoc );
	void PreCalculateAdjustedAim ( float fDeltaTime );
	void UpdateBeam ( float DeltaTime );
	void ProcessInstantHit ( unsigned char FiringMode, struct FImpactInfo const& Impact, int NumHits );
	void CalcFireStart ( );
	void StopFire ( unsigned char FireModeNum );
	void StartFire ( unsigned char FireModeNum );
	void Tick ( float DeltaTime );
	void SpawnImpactEffects ( struct FImpactInfo const& Impact );
	class UWwiseEvent* GetWeaponSpecificImpactSound ( class USFXPhysicalMaterialImpactSounds* ImpactSounds );
	class UParticleSystem* GetWeaponSpecificImpactEffect ( class USFXPhysicalMaterialImpactEffects* ImpactEffects );
	class UDecalComponent* GetWeaponSpecificDecalData ( class USFXPhysicalMaterialDecals* DecalEffects, float* FadeTime );
	void StopMuzzleFlashEffect ( );
	void PlayMuzzleFlashEffect ( );
	void StretchDecal ( struct FImpactInfo const& Impact );
	void SpawnADecal ( struct FImpactInfo const& Impact );
	void InitDefaultDecalProperties ( );
};

// Class SFXGameContent.SFXWeapon_Heavy_LegionDisinfectionWeapon
// 0x003C (0x1144 - 0x1108)
class ASFXWeapon_Heavy_LegionDisinfectionWeapon : public ASFXWeapon_Heavy_Beam_Base
{
public:
	FString                                            AmmoAmountRTPC;                                   		// 0x1108 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FGuid                                       ClientEffectFiringGuid;                           		// 0x1118 (0x0010) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_FiringTemplate;                                		// 0x1128 (0x0008) [0x0000000000000000]              
	float                                              RechargeRatePerSecond;                            		// 0x1130 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              RechargeDelay;                                    		// 0x1134 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              StoppedFiringTimeStamp;                           		// 0x1138 (0x0004) [0x0000000000000000]              
	float                                              AccumulatedAmmo;                                  		// 0x113C (0x0004) [0x0000000000000000]              
	unsigned long                                      bRecharging : 1;                                  		// 0x1140 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bFireSoundPlaying : 1;                            		// 0x1140 (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool OutOfAmmo ( );
	void InitDefaultDecalProperties ( );
	void Tick ( float DeltaTime );
	class UWwiseEvent* GetWeaponSpecificImpactSound ( class USFXPhysicalMaterialImpactSounds* ImpactSounds );
	class UParticleSystem* GetWeaponSpecificImpactEffect ( class USFXPhysicalMaterialImpactEffects* ImpactEffects );
	void StopMuzzleFlashEffect ( );
	void StopFireSounds ( );
};

// Class SFXGameContent.SFXWeapon_Pistol_Predator
// 0x0000 (0x10C8 - 0x10C8)
class ASFXWeapon_Pistol_Predator : public ASFXWeapon_Pistol_Base
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	class UDecalComponent* GetWeaponSpecificDecalData ( class USFXPhysicalMaterialDecals* DecalEffects, float* FadeTime );
};

// Class SFXGameContent.SFXTreasureDataLive
// 0x0000 (0x0080 - 0x0080)
class USFXTreasureDataLive : public USFXTreasureData
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCharacterClass_Content
// 0x0003 (0x0230 - 0x022D)
class USFXCharacterClass_Content : public USFXCharacterClass
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_Revive
// 0x000E (0x014C - 0x013E)
class USFXCustomAction_Revive : public USFXCustomAction_SingleAnim
{
public:
	class ASFXPawn_PlayerParty*                        DownedPlayer;                                     		// 0x0140 (0x0008) [0x0000000000000000]              
	unsigned long                                      bSuccessRevive : 1;                               		// 0x0148 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void BodyStanceAnimEndNotification ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	void Replicate ( );
	void ClientDoCustomAction ( unsigned long bForced );
	void CheckFiring ( );
	void TickCustomAction ( float DeltaTime );
	void StopCustomAction ( );
	void Resurrect ( );
	void StartCustomAction ( );
	bool InternalCanDoCustomAction ( class ABioPawn* SyncPawn, unsigned long bForced );
};

// Class SFXGameContent.SFXCustomAction_Reload
// 0x0018 (0x0128 - 0x0110)
class USFXCustomAction_Reload : public USFXCustomAction_ReloadBase
{
public:
	struct FBodyStance                                 BS_Anim;                                          		// 0x0110 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              fAnimBlendInTime;                                 		// 0x0120 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fAnimBlendOutTime;                                		// 0x0124 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void StopCustomAction ( );
	void StartCustomAction ( );
	void eventGetUsedAnimNames ( TArray<struct SFXName>* UsedAnims );
};

// Class SFXGameContent.SFXCustomAction_ActivateWeaponFlashlight
// 0x000A (0x0148 - 0x013E)
class USFXCustomAction_ActivateWeaponFlashlight : public USFXCustomAction_SingleAnim
{
public:
	class USFXAnimSetCookSpec*                         AnimInfo;                                         		// 0x0140 (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void StopCustomAction ( );
	void StartCustomAction ( );
};

// Class SFXGameContent.SFXCustomAction_MantleLookAt
// 0x0062 (0x01E8 - 0x0186)
class USFXCustomAction_MantleLookAt : public USFXCustomAction_LookAtLoop
{
public:
	struct FBodyStance                                 BS_Mid_Cov_Right_Start;                           		// 0x0188 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Mid_Cov_Right_Loop;                            		// 0x0198 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Mid_Cov_Right_End;                             		// 0x01A8 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Mid_Cov_Left_Start;                            		// 0x01B8 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Mid_Cov_Left_Loop;                             		// 0x01C8 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Mid_Cov_Left_End;                              		// 0x01D8 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void FlinchActionOverride ( );
	void eventGetUsedAnimNames ( TArray<struct SFXName>* UsedAnims );
	struct FBodyStance GetEndBodyStanceAnim ( );
	struct FBodyStance GetLoopBodyStanceAnim ( );
	struct FBodyStance GetStartBodyStanceAnim ( );
};

// Class SFXGameContent.SFXCustomAction_CoverSlipLookAt
// 0x0062 (0x01E8 - 0x0186)
class USFXCustomAction_CoverSlipLookAt : public USFXCustomAction_LookAtLoop
{
public:
	struct FBodyStance                                 BS_Mid_Cov_Right_Start;                           		// 0x0188 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Mid_Cov_Right_Loop;                            		// 0x0198 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Mid_Cov_Right_End;                             		// 0x01A8 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Mid_Cov_Left_Start;                            		// 0x01B8 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Mid_Cov_Left_Loop;                             		// 0x01C8 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Mid_Cov_Left_End;                              		// 0x01D8 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void FlinchActionOverride ( );
	void eventGetUsedAnimNames ( TArray<struct SFXName>* UsedAnims );
	struct FBodyStance GetEndBodyStanceAnim ( );
	struct FBodyStance GetLoopBodyStanceAnim ( );
	struct FBodyStance GetStartBodyStanceAnim ( );
};

// Class SFXGameContent.SFXCustomAction_StdCoverSlipLookAt
// 0x0062 (0x01E8 - 0x0186)
class USFXCustomAction_StdCoverSlipLookAt : public USFXCustomAction_LookAtLoop
{
public:
	struct FBodyStance                                 BS_Std_Cov_Right_Start;                           		// 0x0188 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Std_Cov_Right_Loop;                            		// 0x0198 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Std_Cov_Right_End;                             		// 0x01A8 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Std_Cov_Left_Start;                            		// 0x01B8 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Std_Cov_Left_Loop;                             		// 0x01C8 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Std_Cov_Left_End;                              		// 0x01D8 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void FlinchActionOverride ( );
	void eventGetUsedAnimNames ( TArray<struct SFXName>* UsedAnims );
	struct FBodyStance GetEndBodyStanceAnim ( );
	struct FBodyStance GetLoopBodyStanceAnim ( );
	struct FBodyStance GetStartBodyStanceAnim ( );
};

// Class SFXGameContent.SFXCustomAction_SwatTurnLookAt
// 0x0062 (0x01E8 - 0x0186)
class USFXCustomAction_SwatTurnLookAt : public USFXCustomAction_LookAtLoop
{
public:
	struct FBodyStance                                 BS_Mid_Cov_Right_Start;                           		// 0x0188 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Mid_Cov_Right_Loop;                            		// 0x0198 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Mid_Cov_Right_End;                             		// 0x01A8 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Mid_Cov_Left_Start;                            		// 0x01B8 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Mid_Cov_Left_Loop;                             		// 0x01C8 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Mid_Cov_Left_End;                              		// 0x01D8 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void FlinchActionOverride ( );
	void eventGetUsedAnimNames ( TArray<struct SFXName>* UsedAnims );
	struct FBodyStance GetEndBodyStanceAnim ( );
	struct FBodyStance GetLoopBodyStanceAnim ( );
	struct FBodyStance GetStartBodyStanceAnim ( );
};

// Class SFXGameContent.SFXCustomAction_StdSwatTurnLookAt
// 0x0062 (0x01E8 - 0x0186)
class USFXCustomAction_StdSwatTurnLookAt : public USFXCustomAction_LookAtLoop
{
public:
	struct FBodyStance                                 BS_Std_Cov_Right_Start;                           		// 0x0188 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Std_Cov_Right_Loop;                            		// 0x0198 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Std_Cov_Right_End;                             		// 0x01A8 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Std_Cov_Left_Start;                            		// 0x01B8 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Std_Cov_Left_Loop;                             		// 0x01C8 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Std_Cov_Left_End;                              		// 0x01D8 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void FlinchActionOverride ( );
	void eventGetUsedAnimNames ( TArray<struct SFXName>* UsedAnims );
	struct FBodyStance GetEndBodyStanceAnim ( );
	struct FBodyStance GetLoopBodyStanceAnim ( );
	struct FBodyStance GetStartBodyStanceAnim ( );
};

// Class SFXGameContent.SFXCustomAction_GapJump
// 0x004B (0x0158 - 0x010D)
class USFXCustomAction_GapJump : public UBioCustomAction
{
public:
	struct FBodyStance                                 BS_Anim;                                          		// 0x0110 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class ASFXNav_JumpNode*                            StartPoint;                                       		// 0x0120 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class ASFXNav_JumpNode*                            EndPoint;                                         		// 0x0128 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class ASFXReachSpecPlaceholderCylinder*            BlockingStartCylinder;                            		// 0x0130 (0x0008) [0x0000000000000000]              
	class ASFXReachSpecPlaceholderCylinder*            BlockingEndCylinder;                              		// 0x0138 (0x0008) [0x0000000000000000]              
	float                                              fAnimPlayRate;                                    		// 0x0140 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fAnimBlendInTime;                                 		// 0x0144 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fAnimBlendOutTime;                                		// 0x0148 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fAnimStartTime;                                   		// 0x014C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fAnimDuration;                                    		// 0x0150 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      ERootMotionMode;                                  		// 0x0154 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      RootBoneX;                                        		// 0x0155 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      RootBoneY;                                        		// 0x0156 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      RootBoneZ;                                        		// 0x0157 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool NotifyBump ( class AActor* Other, struct FVector const& HitNormal );
	void EndThisCustomAction ( );
	void RemoveBlockingEndPoints ( );
	void BlockMoveEndPoints ( );
	void BodyStanceAnimEndNotification ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	void StopCustomAction ( );
	void StartAnimation ( );
	void ReachedPrecisePosition ( );
	void AlignmentTimeout ( );
	void StartCustomAction ( );
	void eventGetUsedAnimNames ( TArray<struct SFXName>* UsedAnims );
};

// Class SFXGameContent.SFXCustomAction_StandingGapJump
// 0x0000 (0x0158 - 0x0158)
class USFXCustomAction_StandingGapJump : public USFXCustomAction_GapJump
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_JumpDown
// 0x0000 (0x01A4 - 0x01A4)
class USFXCustomAction_JumpDown : public USFXCustomAction_BoostDownBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void TickInput ( class UBioPlayerInput* Input, float DeltaTime );
	void PlayStartAnimation ( );
};

// Class SFXGameContent.SFXCustomAction_PlayerMantleOverCover
// 0x0094 (0x05C8 - 0x0534)
class USFXCustomAction_PlayerMantleOverCover : public USFXCustomAction_MantleOverCoverBase
{
public:
	struct FBodyStance                                 BS_CoverStart;                                    		// 0x0534 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_StandingStart;                                 		// 0x0544 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_QuickStandingStart;                            		// 0x0554 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_CoverLoop;                                     		// 0x0564 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_StandingLoop;                                  		// 0x0574 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_QuickStandingLoop;                             		// 0x0584 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_CoverEnd;                                      		// 0x0594 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_StandingEnd;                                   		// 0x05A4 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_QuickStandingEnd;                              		// 0x05B4 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bStartFromCover : 1;                              		// 0x05C4 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bStartFromStorm : 1;                              		// 0x05C4 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void GetEndAnim ( struct FBodyStance* Stance );
	void GetLoopAnim ( struct FBodyStance* Stance );
	void GetStartAnim ( struct FBodyStance* Stance );
	void eventGetUsedAnimNames ( TArray<struct SFXName>* UsedAnims );
	void BodyStanceAnimEndNotification ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	void eventTickCustomAction ( float DeltaTime );
	void StopCustomAction ( );
	void StartCustomAction ( );
};

// Class SFXGameContent.SFXCustomAction_SimpleMoveBase
// 0x0045 (0x0152 - 0x010D)
class USFXCustomAction_SimpleMoveBase : public UBioCustomAction
{
public:
	struct FBodyStance                                 BS_Anim;                                          		// 0x0110 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class ASFXReachSpecPlaceholderCylinder*            BlockingStartCylinder;                            		// 0x0120 (0x0008) [0x0000000000000000]              
	class ASFXReachSpecPlaceholderCylinder*            BlockingEndCylinder;                              		// 0x0128 (0x0008) [0x0000000000000000]              
	class UReachSpec*                                  MovementPath;                                     		// 0x0130 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	float                                              MoveDistance;                                     		// 0x0138 (0x0004) [0x0000000000000000]              
	float                                              fBlendInTime;                                     		// 0x013C (0x0004) [0x0000000000000000]              
	float                                              fBlendOutTime;                                    		// 0x0140 (0x0004) [0x0000000000000000]              
	unsigned long                                      bAlignPawnBeforeMove : 1;                         		// 0x0144 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	unsigned char                                      BlendType;                                        		// 0x0148 (0x0001) [0x0000000000000000]              
	unsigned char                                      RootBoneX;                                        		// 0x0149 (0x0001) [0x0000000000000000]              
	unsigned char                                      RootBoneY;                                        		// 0x014A (0x0001) [0x0000000000000000]              
	unsigned char                                      RootBoneZ;                                        		// 0x014B (0x0001) [0x0000000000000000]              
	unsigned char                                      RMM;                                              		// 0x014C (0x0001) [0x0000000000000000]              
	unsigned char                                      RootRotationPitch;                                		// 0x014D (0x0001) [0x0000000000000000]              
	unsigned char                                      RootRotationYaw;                                  		// 0x014E (0x0001) [0x0000000000000000]              
	unsigned char                                      RootRotationRoll;                                 		// 0x014F (0x0001) [0x0000000000000000]              
	unsigned char                                      RMRM;                                             		// 0x0150 (0x0001) [0x0000000000000000]              
	unsigned char                                      MovePhysics;                                      		// 0x0151 (0x0001) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void ClientDoCustomAction ( unsigned long bForced );
	void Replicate ( );
	bool CanBeInterrupted ( );
	void DestTimeout ( );
	void BodyStanceAnimEndNotification ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	void StopCustomAction ( );
	void PlayStartAnimation ( );
	struct FBodyStance GetBodyStanceAnim ( );
	void StartCustomAction ( );
	bool InternalCanDoCustomAction ( class ABioPawn* SyncPawn, unsigned long bForced );
	void RemoveBlockingEndPoints ( );
	void BlockMoveEndPoints ( );
	void eventReachedPrecisePosition ( );
	void eventGetUsedAnimNames ( TArray<struct SFXName>* UsedAnims );
};

// Class SFXGameContent.SFXCustomAction_PlayerMantleUp
// 0x002E (0x0180 - 0x0152)
class USFXCustomAction_PlayerMantleUp : public USFXCustomAction_SimpleMoveBase
{
public:
	struct FBodyStance                                 BS_MantleUpOutOfCover;                            		// 0x0154 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_MantleUpInCover;                               		// 0x0164 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class ACoverSlotMarker*                            StartingSlot;                                     		// 0x0174 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bStartInCover : 1;                                		// 0x017C (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void ClientDoCustomAction ( unsigned long bForced );
	void ServerStartCustomAction ( int NewAction, class ABioPawn* Sync, int NewPowerAction );
	void Replicate ( );
	struct FBodyStance GetBodyStanceAnim ( );
	void StopCustomAction ( );
	void StartCustomAction ( );
	bool InternalCanDoCustomAction ( class ABioPawn* SyncPawn, unsigned long bForced );
	void eventGetUsedAnimNames ( TArray<struct SFXName>* UsedAnims );
};

// Class SFXGameContent.SFXCustomAction_PlayerCoverSlipLeft
// 0x0000 (0x0140 - 0x0140)
class USFXCustomAction_PlayerCoverSlipLeft : public USFXCustomAction_CoverSlipBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void EndThisCustomAction ( );
	void StartCustomAction ( );
};

// Class SFXGameContent.SFXCustomAction_PlayerCoverSlipLeftStanding
// 0x0000 (0x0140 - 0x0140)
class USFXCustomAction_PlayerCoverSlipLeftStanding : public USFXCustomAction_CoverSlipBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void EndThisCustomAction ( );
	void StartCustomAction ( );
};

// Class SFXGameContent.SFXCustomAction_PlayerCoverSlipRight
// 0x0000 (0x0140 - 0x0140)
class USFXCustomAction_PlayerCoverSlipRight : public USFXCustomAction_CoverSlipBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void EndThisCustomAction ( );
	void StartCustomAction ( );
};

// Class SFXGameContent.SFXCustomAction_PlayerCoverSlipRightStanding
// 0x0000 (0x0140 - 0x0140)
class USFXCustomAction_PlayerCoverSlipRightStanding : public USFXCustomAction_CoverSlipBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void EndThisCustomAction ( );
	void StartCustomAction ( );
};

// Class SFXGameContent.SFXCustomAction_PlayerLadderClimbUp
// 0x0034 (0x01EC - 0x01B8)
class USFXCustomAction_PlayerLadderClimbUp : public USFXCustomAction_ClimbUpBase
{
public:
	struct FBodyStance                                 BS_CloseLadderEnter;                              		// 0x01B8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FBodyStance                                 BS_FarLadderEnter;                                		// 0x01C8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UAnimSet*                                    LadderAnimSet;                                    		// 0x01D8 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	float                                              DecayRate;                                        		// 0x01E0 (0x0004) [0x0000000000000000]              
	float                                              CloseEnterDistance;                               		// 0x01E4 (0x0004) [0x0000000000000000]              
	float                                              JumpStartDistance;                                		// 0x01E8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void StopCustomAction ( );
	void PreAlignPawnLocation ( );
	void SetMoveStage ( unsigned char NextStage );
	void TickCustomAction ( float DeltaTime );
	void SyncRotation ( float Alpha );
	void SyncJumpEntrance ( float Alpha );
	void TickAlignment ( float DeltaTime );
	void StartCustomAction ( );
	void TickInput ( class UBioPlayerInput* Input, float DeltaTime );
	void eventGetUsedAnimNames ( TArray<struct SFXName>* UsedAnims );
};

// Class SFXGameContent.SFXCustomAction_PlayerLadderClimbDown
// 0x0000 (0x01B0 - 0x01B0)
class USFXCustomAction_PlayerLadderClimbDown : public USFXCustomAction_LadderClimbDownBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void TickInput ( class UBioPlayerInput* Input, float DeltaTime );
};

// Class SFXGameContent.SFXCustomAction_PlayerEvadeLeft
// 0x0004 (0x0144 - 0x0140)
class USFXCustomAction_PlayerEvadeLeft : public USFXCustomAction_PlayerEvadeBase
{
public:
	float                                              MoveDist;                                         		// 0x0140 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void RollOverride ( );
	void StartCustomAction ( );
	bool InternalCanDoCustomAction ( class ABioPawn* SyncPawn, unsigned long bForced );
};

// Class SFXGameContent.SFXCustomAction_PlayerEvadeRight
// 0x0004 (0x0144 - 0x0140)
class USFXCustomAction_PlayerEvadeRight : public USFXCustomAction_PlayerEvadeBase
{
public:
	float                                              MoveDist;                                         		// 0x0140 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void RollOverride ( );
	void StartCustomAction ( );
	bool InternalCanDoCustomAction ( class ABioPawn* SyncPawn, unsigned long bForced );
};

// Class SFXGameContent.SFXCustomAction_PlayerEvadeForward
// 0x0014 (0x0154 - 0x0140)
class USFXCustomAction_PlayerEvadeForward : public USFXCustomAction_PlayerEvadeBase
{
public:
	struct FVector                                     MoveOffset;                                       		// 0x0140 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              MoveDist;                                         		// 0x014C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bHitWallEnabled : 1;                              		// 0x0150 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void ClientDoCustomActionImpact ( class AActor* oActor, int ImpactCount, unsigned long bFirstTarget, struct FVector const& HitLocation, struct FVector const& HitNormal, int CustomActionReactionType );
	void RollOverride ( );
	void StopCustomAction ( );
	void TurnOnHitWall ( );
	bool NotifyHitWall ( struct FVector const& HitNormal, class AActor* Wall );
	void EndThisCustomAction ( );
	void SyncRotation ( float Alpha, struct FVector const& ToEnd2D );
	void StartCustomAction ( );
	bool InternalCanDoCustomAction ( class ABioPawn* SyncPawn, unsigned long bForced );
};

// Class SFXGameContent.SFXCustomAction_PlayerEvadeBackwards
// 0x0004 (0x0144 - 0x0140)
class USFXCustomAction_PlayerEvadeBackwards : public USFXCustomAction_PlayerEvadeBase
{
public:
	float                                              MoveDist;                                         		// 0x0140 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void ClientDoCustomActionImpact ( class AActor* oActor, int ImpactCount, unsigned long bFirstTarget, struct FVector const& HitLocation, struct FVector const& HitNormal, int CustomActionReactionType );
	void RollOverride ( );
	void StopCustomAction ( );
	void StartCustomAction ( );
	bool InternalCanDoCustomAction ( class ABioPawn* SyncPawn, unsigned long bForced );
};

// Class SFXGameContent.SFXCustomAction_MantleMelee
// 0x0010 (0x0260 - 0x0250)
class USFXCustomAction_MantleMelee : public USFXCustomAction_PlayerMeleeBase
{
public:
	TArray<class AActor*>                              HitActors;                                        		// 0x0250 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void EndThisCustomAction ( );
	void Breakout ( );
	bool NotifyBump ( class AActor* Other, struct FVector const& HitNormal );
	void ClientDoCustomActionImpact ( class AActor* oActor, int ImpactCount, unsigned long bFirstTarget, struct FVector const& HitLocation, struct FVector const& HitNormal, int CustomActionReactionType );
	void StopCustomAction ( );
	void StartCustomAction ( );
};

// Class SFXGameContent.SFXCustomAction_SyncCoverGrab
// 0x0067 (0x020C - 0x01A5)
class USFXCustomAction_SyncCoverGrab : public USFXCustomAction_ClassMelee
{
public:
	struct FBodyStance                                 BS_AttackerMirror;                                		// 0x01A8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FBodyStance                                 BS_VictimMirror;                                  		// 0x01B8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FBasedPosition                              VictimLocation;                                   		// 0x01C8 (0x0038) [0x0000000000000000]              
	class ASFXReachSpecPlaceholderCylinder*            PlaceholderCylinder;                              		// 0x0200 (0x0008) [0x0000000000000000]              
	unsigned long                                      bMirroredAttack : 1;                              		// 0x0208 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void StopCustomAction ( );
	void NonSyncedAction ( );
	void SyncAttack ( );
	void GetVictimAnim ( struct FBodyStance* Stance );
	void GetAttackerAnim ( struct FBodyStance* Stance );
	class ABioPawn* GetVictimPawn ( );
	void StartCustomAction ( );
	bool ShouldPlayMirrorAnim ( );
	bool VerifyVictimDestIsClear ( class ABioPawn* VictimPawn, struct FVector const& DestinationPos );
	bool InternalCanDoCustomAction ( class ABioPawn* SyncPawn, unsigned long bForced );
	void StartMeleeAttack ( );
};

// Class SFXGameContent.SFXCustomAction_SyncCoverMelee
// 0x0010 (0x0260 - 0x0250)
class USFXCustomAction_SyncCoverMelee : public USFXCustomAction_PlayerMeleeBase
{
public:
	struct FBodyStance                                 BS_AnimPistol;                                    		// 0x0250 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void MeleeImpact ( );
	void StopCustomAction ( );
	void EndThisCustomAction ( );
	void StartCustomAction ( );
	void eventGetUsedAnimNames ( TArray<struct SFXName>* UsedAnims );
};

// Class SFXGameContent.SFXCustomAction_CoverMeleeRight
// 0x0000 (0x0250 - 0x0250)
class USFXCustomAction_CoverMeleeRight : public USFXCustomAction_PlayerMeleeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	class ABioPawn* GetVictimPawn ( );
	void GetMeleeImpactParameters ( struct FAreaEffectParameters* ImpactParams );
	void NonSyncedAction ( );
};

// Class SFXGameContent.SFXCustomAction_CoverMeleeLeft
// 0x0000 (0x0250 - 0x0250)
class USFXCustomAction_CoverMeleeLeft : public USFXCustomAction_CoverMeleeRight
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void NonSyncedAction ( );
};

// Class SFXGameContent.SFXCustomAction_StdCoverMeleeLeft
// 0x0000 (0x0250 - 0x0250)
class USFXCustomAction_StdCoverMeleeLeft : public USFXCustomAction_CoverMeleeLeft
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_StdCoverMeleeRight
// 0x0000 (0x0250 - 0x0250)
class USFXCustomAction_StdCoverMeleeRight : public USFXCustomAction_CoverMeleeRight
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_HvyCoverMeleeRight
// 0x0000 (0x0250 - 0x0250)
class USFXCustomAction_HvyCoverMeleeRight : public USFXCustomAction_PlayerMeleeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	class ABioPawn* GetVictimPawn ( );
	void GetMeleeImpactParameters ( struct FAreaEffectParameters* ImpactParams );
	void NonSyncedAction ( );
};

// Class SFXGameContent.SFXCustomAction_HvyCoverMeleeLeft
// 0x0000 (0x0250 - 0x0250)
class USFXCustomAction_HvyCoverMeleeLeft : public USFXCustomAction_HvyCoverMeleeRight
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void NonSyncedAction ( );
};

// Class SFXGameContent.SFXCustomAction_HvyStdCoverMeleeLeft
// 0x0000 (0x0250 - 0x0250)
class USFXCustomAction_HvyStdCoverMeleeLeft : public USFXCustomAction_HvyCoverMeleeLeft
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_HvyStdCoverMeleeRight
// 0x0000 (0x0250 - 0x0250)
class USFXCustomAction_HvyStdCoverMeleeRight : public USFXCustomAction_HvyCoverMeleeRight
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_RifleMeleeOne
// 0x0004 (0x0254 - 0x0250)
class USFXCustomAction_RifleMeleeOne : public USFXCustomAction_PlayerMeleeBase
{
public:
	float                                              BladeImpactScale;                                 		// 0x0250 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void StopMove ( );
	bool OnActorImpacted ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector const& HitLocation, struct FVector const& HitNormal );
	void ReplicateImpact ( class ABioPawn* Target, int ImpactCount, unsigned long bFirstTarget, struct FVector const& HitLocation, struct FVector const& HitNormal, int CustomActionReactionType );
	void StopCustomAction ( );
	void EndAction ( );
	void HeavyMelee ( );
	void NoHeavyMelee ( );
	void DoRifleMeleeTwo ( );
	void RifleMeleeSecondary ( );
	void StartCustomAction ( );
};

// Class SFXGameContent.SFXCustomAction_RifleMeleeTwo
// 0x0000 (0x0254 - 0x0254)
class USFXCustomAction_RifleMeleeTwo : public USFXCustomAction_RifleMeleeOne
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void ReplicateImpact ( class ABioPawn* Target, int ImpactCount, unsigned long bFirstTarget, struct FVector const& HitLocation, struct FVector const& HitNormal, int CustomActionReactionType );
	void HeavyMelee ( );
	void NoHeavyMelee ( );
	void DoRifleMeleeThree ( );
	void RifleMeleeThird ( );
};

// Class SFXGameContent.SFXCustomAction_RifleMeleeThree
// 0x0000 (0x0254 - 0x0254)
class USFXCustomAction_RifleMeleeThree : public USFXCustomAction_RifleMeleeTwo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void StopCustomAction ( );
	void HeavyMelee ( );
	void NoHeavyMelee ( );
	void RifleMeleeThird ( );
	void ReplicateImpact ( class ABioPawn* Target, int ImpactCount, unsigned long bFirstTarget, struct FVector const& HitLocation, struct FVector const& HitNormal, int CustomActionReactionType );
};

// Class SFXGameContent.SFXCustomAction_PistolMeleeOne
// 0x0000 (0x0250 - 0x0250)
class USFXCustomAction_PistolMeleeOne : public USFXCustomAction_PlayerMeleeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void StopMove ( );
	bool OnActorImpacted ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector const& HitLocation, struct FVector const& HitNormal );
	void ReplicateImpact ( class ABioPawn* Target, int ImpactCount, unsigned long bFirstTarget, struct FVector const& HitLocation, struct FVector const& HitNormal, int CustomActionReactionType );
	void StopCustomAction ( );
	void EndAction ( );
	void HeavyMelee ( );
	void NoHeavyMelee ( );
	void DoPistolMeleeTwo ( );
	void PistolMeleeSecondary ( );
	void StartCustomAction ( );
};

// Class SFXGameContent.SFXCustomAction_PistolMeleeTwo
// 0x0000 (0x0250 - 0x0250)
class USFXCustomAction_PistolMeleeTwo : public USFXCustomAction_PistolMeleeOne
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void ReplicateImpact ( class ABioPawn* Target, int ImpactCount, unsigned long bFirstTarget, struct FVector const& HitLocation, struct FVector const& HitNormal, int CustomActionReactionType );
	void HeavyMelee ( );
	void NoHeavyMelee ( );
	void DoPistolMeleeThree ( );
	void PistolMeleeThird ( );
};

// Class SFXGameContent.SFXCustomAction_PistolMeleeThree
// 0x0000 (0x0250 - 0x0250)
class USFXCustomAction_PistolMeleeThree : public USFXCustomAction_PistolMeleeTwo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void StopCustomAction ( );
	void HeavyMelee ( );
	void NoHeavyMelee ( );
	void PistolMeleeThird ( );
	void ReplicateImpact ( class ABioPawn* Target, int ImpactCount, unsigned long bFirstTarget, struct FVector const& HitLocation, struct FVector const& HitNormal, int CustomActionReactionType );
};

// Class SFXGameContent.SFXCustomAction_PlayerStandardImpact
// 0x0003 (0x015C - 0x0159)
class USFXCustomAction_PlayerStandardImpact : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_PlayerStandardImpactForward
// 0x0003 (0x015C - 0x0159)
class USFXCustomAction_PlayerStandardImpactForward : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_PlayerStandardImpactLeft
// 0x0003 (0x015C - 0x0159)
class USFXCustomAction_PlayerStandardImpactLeft : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_PlayerStandardImpactRight
// 0x0003 (0x015C - 0x0159)
class USFXCustomAction_PlayerStandardImpactRight : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_PlayerMeleed
// 0x0003 (0x015C - 0x0159)
class USFXCustomAction_PlayerMeleed : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_KnockbackImpactForward
// 0x0003 (0x015C - 0x0159)
class USFXCustomAction_KnockbackImpactForward : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_MeleedLeft
// 0x0003 (0x015C - 0x0159)
class USFXCustomAction_MeleedLeft : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_MeleedRight
// 0x0003 (0x015C - 0x0159)
class USFXCustomAction_MeleedRight : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_KnockbackImpact
// 0x0003 (0x015C - 0x0159)
class USFXCustomAction_KnockbackImpact : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_KnockbackImpactLeft
// 0x0003 (0x015C - 0x0159)
class USFXCustomAction_KnockbackImpactLeft : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_KnockbackImpactRight
// 0x0003 (0x015C - 0x0159)
class USFXCustomAction_KnockbackImpactRight : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_MeleedForward
// 0x0003 (0x015C - 0x0159)
class USFXCustomAction_MeleedForward : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_FlinchBase
// 0x00CC (0x020A - 0x013E)
class USFXCustomAction_FlinchBase : public USFXCustomAction_SingleAnim
{
public:
	struct FBodyStance                                 BS_Reaction;                                      		// 0x0140 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_ReactionAlt;                                   		// 0x0150 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_ReactionMidRight;                              		// 0x0160 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_ReactionAltMidRight;                           		// 0x0170 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_ReactionMidLeft;                               		// 0x0180 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_ReactionAltMidLeft;                            		// 0x0190 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_ReactionStdRight;                              		// 0x01A0 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_ReactionAltStdRight;                           		// 0x01B0 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_ReactionStdLeft;                               		// 0x01C0 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_ReactionAltStdLeft;                            		// 0x01D0 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UAnimSet*                                    AnimSet;                                          		// 0x01E0 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UWwiseEvent*                                 CloseCallSoundPlayer;                             		// 0x01E8 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UWwiseEvent*                                 CloseCallImpactSoundPlayer;                       		// 0x01F0 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UWwiseEvent*                                 CloseCallSoundHench;                              		// 0x01F8 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UWwiseEvent*                                 CloseCallImpactSoundHench;                        		// 0x0200 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      CoverType;                                        		// 0x0208 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      CoverAction;                                      		// 0x0209 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void PlayImpactSound ( );
	void PlayWhizSound ( );
	void FlinchActionOverride ( );
	void StopCustomAction ( );
	void StartCustomAction ( );
	struct FBodyStance GetBodyStanceAnim ( );
	bool InternalCanDoCustomAction ( class ABioPawn* SyncPawn, unsigned long bForced );
	void eventGetUsedAnimNames ( TArray<struct SFXName>* UsedAnims );
};

// Class SFXGameContent.SFXCustomAction_FlinchLight
// 0x0002 (0x020C - 0x020A)
class USFXCustomAction_FlinchLight : public USFXCustomAction_FlinchBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_FlinchHeavy
// 0x0002 (0x020C - 0x020A)
class USFXCustomAction_FlinchHeavy : public USFXCustomAction_FlinchBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_PlayerOnFire
// 0x0003 (0x015C - 0x0159)
class USFXCustomAction_PlayerOnFire : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCharacterClass_Adept
// 0x0000 (0x0230 - 0x0230)
class USFXCharacterClass_Adept : public USFXCharacterClass_Content
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXPowerCustomAction_Shockwave
// 0x018B (0x094C - 0x07C1)
class USFXPowerCustomAction_Shockwave : public USFXPowerCustomAction
{
public:
	struct FPowerData                                  NumShockwaveImpacts;                              		// 0x07C4 (0x0034) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  GravityLevel;                                     		// 0x07F8 (0x0034) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  GravityDuration;                                  		// 0x082C (0x0034) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  TimeBetweenImpacts;                               		// 0x0860 (0x0034) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  LiftDuration;                                     		// 0x0894 (0x0034) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  Range;                                            		// 0x08C8 (0x0034) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray<class AActor*>                              ImpactedActors;                                   		// 0x08FC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      ImpactRumbleClass;                                		// 0x090C (0x0008) [0x0000000000000000]              
	class UClass*                                      ImpactScreenShakeClass;                           		// 0x0914 (0x0008) [0x0000000000000000]              
	class UClass*                                      ImpactActorScreenShakeClass;                      		// 0x091C (0x0008) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_ShockwaveImpact;                               		// 0x0924 (0x0008) [0x0000000000000000]              
	class UWwiseEvent*                                 ImpactActorSound;                                 		// 0x092C (0x0008) [0x0000000000000000]              
	float                                              Evolve_DamageBonus;                               		// 0x0934 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_RadiusBonus;                               		// 0x0938 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_BioticComboMult;                           		// 0x093C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_CooldownBonus;                             		// 0x0940 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_NumShockwavesBonus;                        		// 0x0944 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                NumTargetsHit;                                    		// 0x0948 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void PopulatePowerStatBarEvolves ( );
	void ApplyBonus ( struct SFXName Parameter, class USFXGameEffect* Bonus, unsigned long bRemove );
	void RecalculateAllPowerData ( unsigned long bReset );
	void EvolvePower ( unsigned char choice );
	bool ShouldUsePower ( class AActor* Target, FString* sOptionalInfo );
	void OnRagdollPhysicsImpact ( class APawn* oPawn, class AActor* oImpactActor, struct FVector const& vImpactDir );
	void ClientDoPowerSubsequentImpact ( class AActor* oActor, int CustomActionReactionType, float Duration, int ImpactCount, float Delay, unsigned long DoCallback );
	void DoSubsequentImpact ( class AActor* HitActor, struct FVector const& ImpactLocation, int nImpactCount );
	void DoImpact ( struct FVector const& location, struct FRotator const& ProjectileRotation );
	void OnPowerDetonated ( struct FVector const& HitLocation, struct FVector const& HitNormal, class ASFXProjectile_PowerCustomAction* oProjectile, class AActor* HitActor );
	class ASFXProjectile_PowerCustomAction* ReleaseProjectilePower ( );
};

// Class SFXGameContent.SFXPowerCustomAction_GrenadeBase
// 0x0007 (0x07C8 - 0x07C1)
class USFXPowerCustomAction_GrenadeBase : public USFXPowerCustomAction
{
public:
	int                                                srNoGrenades;                                     		// 0x07C4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	FString eventGetHUDWheelIconInfo ( );
	bool eventShouldUsePower ( class AActor* Target, FString* sOptionalInfo );
	int GetGrenadeCount ( );
	void AdjustGrenadeCount ( int Amount );
	void ReleasePower ( );
	bool CanUsePower ( class AActor* oTarget );
	void ApplyGrenadeBonus ( );
	void ResetPower ( );
	void OnSquadMemberAdded ( class APawn* Pawn );
	void OnPowerRankIncreased ( );
	void OnPowerAdded ( class USFXPowerCustomActionBase* Power );
	void OnPowersLoaded ( );
};

// Class SFXGameContent.SFXPowerCustomAction_BioticGrenade
// 0x0074 (0x083C - 0x07C8)
class USFXPowerCustomAction_BioticGrenade : public USFXPowerCustomAction_GrenadeBase
{
public:
	struct FPowerData                                  MaxGrenadeBonus;                                  		// 0x07C8 (0x0034) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	class URvrClientEffectInterface*                   CE_GrenadeImpact;                                 		// 0x07FC (0x0008) [0x0000000000000000]              
	float                                              Evolve_DamageBonus;                               		// 0x0804 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_ForceBonus;                                		// 0x0808 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_DamageBonus2;                              		// 0x080C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_ForceBonus2;                               		// 0x0810 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_RadiusBonus;                               		// 0x0814 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                Evolve_GrenadeCountBonus;                         		// 0x0818 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_ShieldDamageBonus;                         		// 0x081C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_ArmorDamageBonus;                          		// 0x0820 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_DoTDamage;                                 		// 0x0824 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_DoTDuration;                               		// 0x0828 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_BioticWeaknessDamageBonus;                 		// 0x082C (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                NumChildPieces;                                   		// 0x0830 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                AdditionalChildPieces;                            		// 0x0834 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                Rank2GrenadeUpgrade;                              		// 0x0838 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void PopulatePowerStatBarEvolves ( );
	struct FVector GetDefaultClientEffectParams ( );
	void RecalculateAllPowerData ( unsigned long bReset );
	void ResetPower ( );
	void EvolvePower ( unsigned char choice );
	bool OnImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector const& HitLocation, struct FVector const& HitNormal );
	void SpawnChildProjectiles ( );
	void ReleasePower ( );
	void ApplyGrenadeBonus ( );
	class UClass* GetDamageType ( );
	float GetImpactDamage ( class AActor* oImpacted, class UClass** DamageType );
	void PlayDetonationEffects ( struct FVector const& ImpactLocation, struct FVector const& ImpactNormal, class ASFXProjectile_PowerCustomAction* oProjectile );
};

// Class SFXGameContent.SFXPowerCustomAction_MultiProjectile
// 0x004B (0x080C - 0x07C1)
class USFXPowerCustomAction_MultiProjectile : public USFXPowerCustomAction
{
public:
	struct FAreaEffectParameters                       SecondTargetParams;                               		// 0x07C4 (0x0020) [0x0000000000004000]              ( CPF_Config )
	struct FVector                                     SecondLocation;                                   		// 0x07E4 (0x000C) [0x0000000000000000]              
	class AActor*                                      SecondTarget;                                     		// 0x07F0 (0x0008) [0x0000000000000000]              
	float                                              SecondProjectileDelay;                            		// 0x07F8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              SecondProjectileSpeedPercent;                     		// 0x07FC (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              SecondProjectileMaxRange;                         		// 0x0800 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              CastConeHalfAngleDeg;                             		// 0x0804 (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned long                                      bSecondProjectile : 1;                            		// 0x0808 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void FindSecondTarget ( );
	void ReleaseSecondProjectile ( );
	void ReleasePower ( );
};

// Class SFXGameContent.SFXPowerCustomAction_Throw
// 0x0014 (0x0820 - 0x080C)
class USFXPowerCustomAction_Throw : public USFXPowerCustomAction_MultiProjectile
{
public:
	float                                              Evolve_ForceBonus;                                		// 0x080C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_RadiusBonus;                               		// 0x0810 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_CooldownBonus;                             		// 0x0814 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              FrozenForceBonus;                                 		// 0x0818 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_BioticComboMult;                           		// 0x081C (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void PopulatePowerStatBarEvolves ( );
	void EvolvePower ( unsigned char choice );
	bool ShouldUsePower ( class AActor* Target, FString* sOptionalInfo );
	void OnRagdollPhysicsImpact ( class APawn* oPawn, class AActor* oImpactActor, struct FVector const& vImpactDir );
	void ResetPower ( );
	bool OnImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector const& HitLocation, struct FVector const& HitNormal );
	float GetImpactForce ( class AActor* oImpacted );
};

// Class SFXGameContent.SFXPowerCustomAction_Pull
// 0x006C (0x0878 - 0x080C)
class USFXPowerCustomAction_Pull : public USFXPowerCustomAction_MultiProjectile
{
public:
	struct FPowerData                                  Evolve_DoTDamagePerSec;                           		// 0x080C (0x0034) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray<class AActor*>                              m_oCurrentPulledTargets;                          		// 0x0840 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray<struct SFXName>                             EffectsToRemove;                                  		// 0x0850 (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	float                                              Evolve_DurationBonus;                             		// 0x0860 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_RadiusBonus;                               		// 0x0864 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_ExtraDamage;                               		// 0x0868 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_RechargeBonus;                             		// 0x086C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              MinimumVelocity;                                  		// 0x0870 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              MinimumVelocityForceMult;                         		// 0x0874 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void PopulatePowerStatBarEvolves ( );
	void ApplyBonus ( struct SFXName Parameter, class USFXGameEffect* Bonus, unsigned long bRemove );
	void ResetPower ( );
	void RecalculateAllPowerData ( unsigned long bReset );
	void EvolvePower ( unsigned char choice );
	bool ShouldUsePower ( class AActor* Target, FString* sOptionalInfo );
	void OnRagdollPhysicsImpact ( class APawn* oPawn, class AActor* oImpactActor, struct FVector const& vImpactDir );
	void DropCurrentTargets ( );
	bool OnImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector const& HitLocation, struct FVector const& HitNormal );
	float GetImpactForce ( class AActor* oImpacted );
	void StartPower ( );
};

// Class SFXGameContent.SFXPowerCustomAction_AdeptMeleePassive
// 0x008C (0x0A2C - 0x09A0)
class USFXPowerCustomAction_AdeptMeleePassive : public USFXPowerCustomAction_MeleePassivePower
{
public:
	struct FPowerData                                  HealthShieldBonus;                                		// 0x09A0 (0x0034) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  MeleeDamageBonus;                                 		// 0x09D4 (0x0034) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	float                                              Evolve_MeleeDamageBonus1;                         		// 0x0A08 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_MeleeDamageBonus2;                         		// 0x0A0C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_HealthShieldBonus1;                        		// 0x0A10 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_HealthShieldBonus2;                        		// 0x0A14 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_MeleeSpreeBonus;                           		// 0x0A18 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_ShieldRegenBonus;                          		// 0x0A1C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_PowerSpreeBonus;                           		// 0x0A20 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_MeleeSpreeDuration;                        		// 0x0A24 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_PowerSpreeDuration;                        		// 0x0A28 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void PopulatePowerStatBarEvolves ( );
	void ApplyBonus ( struct SFXName Parameter, class USFXGameEffect* Bonus, unsigned long bRemove );
	void RecalculateAllPowerData ( unsigned long bReset );
	void EvolvePower ( unsigned char choice );
	void OnHeavyMeleeKill ( class AActor* oImpacted );
	void ApplyGlobalBonus ( );
};

// Class SFXGameContent.SFXPowerCustomAction_Warp
// 0x00C3 (0x0884 - 0x07C1)
class USFXPowerCustomAction_Warp : public USFXPowerCustomAction
{
public:
	struct FPowerData                                  ArmorWeakness;                                    		// 0x07C4 (0x0034) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  Evolve_DebuffDamageTakenDuration;                 		// 0x07F8 (0x0034) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FAreaEffectParameters                       BioticExplosionParameters;                        		// 0x082C (0x0020) [0x0000000000004000]              ( CPF_Config )
	class URvrClientEffectInterface*                   CE_DeathEffect;                                   		// 0x084C (0x0008) [0x0000000000000000]              
	float                                              Evolve_DamageBonus;                               		// 0x0854 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_DamageBonus2;                              		// 0x0858 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_DoTDuration;                               		// 0x085C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_DebuffWeaponDamageTakenStrength;           		// 0x0860 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_DebuffBioticDamageTakenStrength;           		// 0x0864 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_CooldownBonus;                             		// 0x0868 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_ComboForce;                                		// 0x086C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_ComboDamage;                               		// 0x0870 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_ComboRadius;                               		// 0x0874 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_ArmorWeaknessBonus;                        		// 0x0878 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_ShieldDamageBonus;                         		// 0x087C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              InstantDamagePercent;                             		// 0x0880 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void PopulatePowerStatBarEvolves ( );
	void ApplyBonus ( struct SFXName Parameter, class USFXGameEffect* Bonus, unsigned long bRemove );
	void RecalculateAllPowerData ( unsigned long bReset );
	void EvolvePower ( unsigned char choice );
	bool ShouldUsePower ( class AActor* Target, FString* sOptionalInfo );
	void PlayImpactEffects ( class AActor* oImpacted, struct FVector const& ImpactLocation, struct FVector const& ImpactNormal );
	bool OnImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector const& HitLocation, struct FVector const& HitNormal );
	float GetTotalDamage ( class AActor* oImpacted, class UClass** DamageType );
	float GetImpactDamage ( class AActor* oImpacted, class UClass** DamageType );
};

// Class SFXGameContent.SFXPowerCustomAction_Singularity
// 0x0247 (0x0A08 - 0x07C1)
class USFXPowerCustomAction_Singularity : public USFXPowerCustomAction
{
public:
	struct FPowerData                                  Evolve_DoTDamage;                                 		// 0x07C4 (0x0034) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  DetonateForce;                                    		// 0x07F8 (0x0034) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  DetonateDamage;                                   		// 0x082C (0x0034) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  DetonateRadius;                                   		// 0x0860 (0x0034) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  NumCharges;                                       		// 0x0894 (0x0034) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  SingularityDuration;                              		// 0x08C8 (0x0034) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  PushAwayForce;                                    		// 0x08FC (0x0034) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray<class AActor*>                              AffectedActors;                                   		// 0x0930 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray<class AActor*>                              ComboAppliedActors;                               		// 0x0940 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FAreaEffectParameters                       ExplosionParam;                                   		// 0x0950 (0x0020) [0x0000000000004000]              ( CPF_Config )
	struct FGuid                                       SingularityGuid;                                  		// 0x0970 (0x0010) [0x0000000000000000]              
	struct FVector                                     m_vSingularityLocation;                           		// 0x0980 (0x000C) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_Singularity;                                   		// 0x098C (0x0008) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_GrowingSingularity;                            		// 0x0994 (0x0008) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_ExplodingSingularity;                          		// 0x099C (0x0008) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_TargetCrust;                                   		// 0x09A4 (0x0008) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_DrainTargetCrust;                              		// 0x09AC (0x0008) [0x0000000000000000]              
	class UWwiseEvent*                                 Release;                                          		// 0x09B4 (0x0008) [0x0000000000000000]              
	float                                              Evolve_RadiusBonus;                               		// 0x09BC (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_DurationBonus;                             		// 0x09C0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_ExpandAmount;                              		// 0x09C4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_ExpandDuration;                            		// 0x09C8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_AdditionalCharges;                         		// 0x09CC (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_RechargeSpeed;                             		// 0x09D0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                DetonateMaxRagdollCount;                          		// 0x09D4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              m_fSingularityRadius;                             		// 0x09D8 (0x0004) [0x0000000000000000]              
	float                                              m_fSingularityTimer;                              		// 0x09DC (0x0004) [0x0000000000000000]              
	float                                              m_fSingularityCharges;                            		// 0x09E0 (0x0004) [0x0000000000000000]              
	float                                              m_fHitPlayerMinDuration;                          		// 0x09E4 (0x0004) [0x0000000000000000]              
	float                                              m_fLookupActorTimer;                              		// 0x09E8 (0x0004) [0x0000000000000000]              
	float                                              m_fLookupActorInterval;                           		// 0x09EC (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              m_fGrowTimer;                                     		// 0x09F0 (0x0004) [0x0000000000000000]              
	float                                              NonRagdollChargeUse;                              		// 0x09F4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              RagdollChargeUse;                                 		// 0x09F8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              ComboNonRagdollDuration;                          		// 0x09FC (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_DamageBonus;                               		// 0x0A00 (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned long                                      m_bSingularityActive : 1;                         		// 0x0A04 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      Patch4IterationApplied : 1;                       		// 0x0A04 (0x0004) [0x0000000000004000] [0x00000002] ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void CombatEnded ( );
	void PopulatePowerStatBarEvolves ( );
	void OnOwnerDestroyed ( );
	void DoJoinInProgress ( );
	void ClientDoPowerSubsequentImpact ( class AActor* oActor, int CustomActionReactionType, float Duration, int ImpactCount, float Delay, unsigned long DoCallback );
	void ApplyBonus ( struct SFXName Parameter, class USFXGameEffect* Bonus, unsigned long bRemove );
	void RecalculateAllPowerData ( unsigned long bReset );
	void EvolvePower ( unsigned char choice );
	bool ShouldUsePower ( class AActor* Target, FString* sOptionalInfo );
	void OnPowerRankIncreased ( );
	void OnRagdollPhysicsImpact ( class APawn* oPawn, class AActor* oImpactActor, struct FVector const& vImpactDir );
	void SpawnSingularityVFX ( );
	void SpawnSingularity ( );
	bool OnExplosionImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector const& HitLocation, struct FVector const& HitNormal );
	void SingularityExplosion ( );
	void Internal_TurnOffSingularity ( );
	void TurnOffSingularity ( unsigned long bDoReplication );
	bool CanPutInSingularity ( class AActor* oActor );
	void OnGameEffectEnded ( class AActor* oActor );
	bool ImpactNewTarget ( class AActor* oImpacted );
	bool ApplyBioticComboEffect ( class AActor* oTarget );
	void eventTickCustomAction ( float fDeltaTime );
	void ClientDoCustomActionImpact ( class AActor* oActor, int ImpactCount, unsigned long bFirstTarget, struct FVector const& HitLocation, struct FVector const& HitNormal, int CustomActionReactionType );
	void OnPowerDetonated ( struct FVector const& HitLocation, struct FVector const& HitNormal, class ASFXProjectile_PowerCustomAction* oProjectile, class AActor* HitActor );
	void ReleasePower ( );
	float GetImpactForce ( class AActor* oImpacted );
	void StartCustomAction ( );
	void OnPowersLoaded ( );
};

// Class SFXGameContent.SFXPowerCustomAction_AdeptPassive
// 0x0094 (0x088C - 0x07F8)
class USFXPowerCustomAction_AdeptPassive : public USFXPowerCustomAction_ParagonRenegade
{
public:
	struct FPowerData                                  PowerDamage;                                      		// 0x07F8 (0x0034) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  WeightCapacity;                                   		// 0x082C (0x0034) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct SFXName                                     BioticComboEffectName;                            		// 0x0860 (0x0008) [0x0000000000000000]              
	float                                              Evolve_HenchmanPowerBonus;                        		// 0x0868 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_ParagonRenegadeBonus;                      		// 0x086C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_DamageAndForceBonus;                       		// 0x0870 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_DamageAndForceBonus2;                      		// 0x0874 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_DamageForceDurationBonus;                  		// 0x0878 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_ComboCooldownBonus;                        		// 0x087C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_PowerDurationBonus;                        		// 0x0880 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_ComboBonusDuration;                        		// 0x0884 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_WeightCapacityBonus;                       		// 0x0888 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void PopulatePowerStatBarEvolves ( );
	void RecalculateAllPowerData ( unsigned long bReset );
	void EvolvePower ( unsigned char choice );
	void OnBioticCombo ( class USFXPowerCustomAction* oPower, class ABioPawn* oTarget );
	void ResetPower ( );
	void ApplyGlobalBonus ( );
};

// Class SFXGameContent.SFXPowerCustomAction_Unity
// 0x0043 (0x0804 - 0x07C1)
class USFXPowerCustomAction_Unity : public USFXPowerCustomAction
{
public:
	struct FPowerData                                  ShieldHealAmount;                                 		// 0x07C4 (0x0034) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                srNoMedigel;                                      		// 0x07F8 (0x0004) [0x0000000000000000]              
	int                                                SuperMedigelPlotInt;                              		// 0x07FC (0x0004) [0x0000000000000000]              
	float                                              SuperMedigelChance;                               		// 0x0800 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void RecalculateAllPowerData ( unsigned long bReset );
	FString eventGetHUDWheelIconInfo ( );
	int CountMediGel ( class ABioBaseSquad* oPlayerSquad );
	bool eventShouldUsePower ( class AActor* Target, FString* sOptionalInfo );
	bool OnImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector const& HitLocation, struct FVector const& HitNormal );
	void StartPower ( );
	bool CanUsePower ( class AActor* oTarget );
};

// Class SFXGameContent.SFXCustomAction_AdeptPunch
// 0x0000 (0x01A8 - 0x01A8)
class USFXCustomAction_AdeptPunch : public USFXCustomAction_PlayerHeavyMeleeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void StopMove ( );
	bool OnActorImpacted ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector const& HitLocation, struct FVector const& HitNormal );
};

// Class SFXGameContent.SFXCustomAction_AdeptSyncCoverGrab
// 0x0000 (0x020C - 0x020C)
class USFXCustomAction_AdeptSyncCoverGrab : public USFXCustomAction_SyncCoverGrab
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_AdeptHeavyMelee
// 0x0000 (0x0138 - 0x0138)
class USFXDamageType_AdeptHeavyMelee : public USFXDamageType_HeavyMelee
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXSeqEvt_PerformedMeleeOverCover
// 0x0002 (0x0128 - 0x0126)
class USFXSeqEvt_PerformedMeleeOverCover : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_Meleed
// 0x0003 (0x015C - 0x0159)
class USFXCustomAction_Meleed : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXGameEffect_DisableAI
// 0x0002 (0x0094 - 0x0092)
class USFXGameEffect_DisableAI : public USFXGameEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void OnRemoved ( );
	void OnApplied ( );
};

// Class SFXGameContent.SFXCustomAction_PlayerKnockbackImpact
// 0x0003 (0x015C - 0x0159)
class USFXCustomAction_PlayerKnockbackImpact : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_PlayerStaggerImpact
// 0x0003 (0x015C - 0x0159)
class USFXCustomAction_PlayerStaggerImpact : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_AdeptHeavyMelee_NoRagdoll
// 0x0000 (0x0138 - 0x0138)
class USFXDamageType_AdeptHeavyMelee_NoRagdoll : public USFXDamageType_AdeptHeavyMelee
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_BioticExplosion
// 0x0003 (0x0138 - 0x0135)
class USFXDamageType_BioticExplosion : public USFXDamageType_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_BioticExplosion_NoRagdoll
// 0x0000 (0x0138 - 0x0138)
class USFXDamageType_BioticExplosion_NoRagdoll : public USFXDamageType_BioticExplosion
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_BioticGrenade
// 0x0003 (0x0138 - 0x0135)
class USFXDamageType_BioticGrenade : public USFXDamageType_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_BioticGrenade_NoRagdoll
// 0x0000 (0x0138 - 0x0138)
class USFXDamageType_BioticGrenade_NoRagdoll : public USFXDamageType_BioticGrenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_CryoExplosion
// 0x0000 (0x0138 - 0x0138)
class USFXDamageType_CryoExplosion : public USFXDamageType_Power_Freeze
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_ElectricCombo
// 0x0003 (0x0138 - 0x0135)
class USFXDamageType_ElectricCombo : public USFXDamageType_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_FireExplosion
// 0x0000 (0x0138 - 0x0138)
class USFXDamageType_FireExplosion : public USFXDamageType_Power_Fire
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_Warp
// 0x0000 (0x0138 - 0x0138)
class USFXDamageType_Warp : public USFXDamageType_Power_Fire
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_ImprovedWarp
// 0x0000 (0x0138 - 0x0138)
class USFXDamageType_ImprovedWarp : public USFXDamageType_Warp
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_WarpDoT
// 0x0003 (0x0138 - 0x0135)
class USFXDamageType_WarpDoT : public USFXDamageType_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_ImprovedWarpDoT
// 0x0000 (0x0138 - 0x0138)
class USFXDamageType_ImprovedWarpDoT : public USFXDamageType_WarpDoT
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_Pull
// 0x0003 (0x013C - 0x0139)
class USFXDamageType_Pull : public USFXDamageType_Power_Ragdoll
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_Pull_DoT
// 0x0000 (0x013C - 0x013C)
class USFXDamageType_Pull_DoT : public USFXDamageType_Pull
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_Shockwave
// 0x0003 (0x0138 - 0x0135)
class USFXDamageType_Shockwave : public USFXDamageType_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_Shockwave_NoRagdoll
// 0x0000 (0x0138 - 0x0138)
class USFXDamageType_Shockwave_NoRagdoll : public USFXDamageType_Shockwave
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_Singularity
// 0x0003 (0x0138 - 0x0135)
class USFXDamageType_Singularity : public USFXDamageType_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_Singularity_DoT
// 0x0000 (0x0138 - 0x0138)
class USFXDamageType_Singularity_DoT : public USFXDamageType_Singularity
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_Singularity_Explosion
// 0x0000 (0x0138 - 0x0138)
class USFXDamageType_Singularity_Explosion : public USFXDamageType_Singularity
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_Singularity_NoRagdoll
// 0x0000 (0x0138 - 0x0138)
class USFXDamageType_Singularity_NoRagdoll : public USFXDamageType_Singularity
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_Throw
// 0x0003 (0x013C - 0x0139)
class USFXDamageType_Throw : public USFXDamageType_Power_Ragdoll
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXGameEffect_AntiGravity
// 0x0000 (0x0094 - 0x0094)
class USFXGameEffect_AntiGravity : public USFXGameEffect_PhysicsPower
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void OnRemoved ( );
	void OnApplied ( );
};

// Class SFXGameContent.SFXGameEffect_ArmorWeakness
// 0x0002 (0x0094 - 0x0092)
class USFXGameEffect_ArmorWeakness : public USFXGameEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void OnRemoved ( );
	void OnApplied ( );
};

// Class SFXGameContent.SFXGameEffect_BioticPowerDamageTakenBonus
// 0x0002 (0x0094 - 0x0092)
class USFXGameEffect_BioticPowerDamageTakenBonus : public USFXGameEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void OnRemoved ( );
	void OnApplied ( );
};

// Class SFXGameContent.SFXGameEffect_CryoFreeze
// 0x0057 (0x0118 - 0x00C1)
class USFXGameEffect_CryoFreeze : public USFXGameEffect_WeldPhysics
{
public:
	struct FScriptDelegate                             __OnFrozenPawnDied__Delegate;                     		// 0x00C4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FGuid                                       FreezeCrustGuid;                                  		// 0x00D4 (0x0010) [0x0000000000000000]              
	class USFXGameEffect_PhysicsDamageMultiplier*      PhysicsDamageMultiplier;                          		// 0x00E4 (0x0008) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_FreezeTemplate;                                		// 0x00EC (0x0008) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_DeathEffect;                                   		// 0x00F4 (0x0008) [0x0000000000000000]              
	class ABioPawn*                                    OwnerPawn;                                        		// 0x00FC (0x0008) [0x0000000000000000]              
	class UWwiseEvent*                                 FrozenDeathSound;                                 		// 0x0104 (0x0008) [0x0000000000000000]              
	float                                              ThawTime;                                         		// 0x010C (0x0004) [0x0000000000000000]              
	float                                              FrozenPhysicsDamageIncrease;                      		// 0x0110 (0x0004) [0x0000000000000000]              
	unsigned long                                      bThawStarted : 1;                                 		// 0x0114 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bOwnerDied : 1;                                   		// 0x0114 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bPlayFrozenDeathSound : 1;                        		// 0x0114 (0x0004) [0x0000000000000000] [0x00000004] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void OnRemoved ( );
	void OnUpdate ( float DeltaSeconds );
	void OnApplied ( );
	void OnFrozenPawnDied ( class ABioPawn* oPawn );
};

// Class SFXGameContent.SFXGameEffect_DamageImmunity
// 0x0002 (0x0094 - 0x0092)
class USFXGameEffect_DamageImmunity : public USFXGameEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void OnRemoved ( );
	void OnApplied ( );
};

// Class SFXGameContent.SFXGameEffect_DelayedCryoFreeze
// 0x0056 (0x00E8 - 0x0092)
class USFXGameEffect_DelayedCryoFreeze : public USFXGameEffect
{
public:
	struct FScriptDelegate                             __OnFrozenPawnDied__Delegate;                     		// 0x0094 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FGuid                                       FreezeCrustGuid;                                  		// 0x00A4 (0x0010) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_DeathEffect;                                   		// 0x00B4 (0x0008) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_FreezeTemplate;                                		// 0x00BC (0x0008) [0x0000000000000000]              
	class UWwiseEvent*                                 FrozenDeathSound;                                 		// 0x00C4 (0x0008) [0x0000000000000000]              
	class UWwiseEvent*                                 FreezingSound;                                    		// 0x00CC (0x0008) [0x0000000000000000]              
	class ABioPawn*                                    OwnerPawn;                                        		// 0x00D4 (0x0008) [0x0000000000000000]              
	class USFXPowerCustomAction*                       Power;                                            		// 0x00DC (0x0008) [0x1000000000000000]              
	unsigned long                                      bPlayFrozenDeathSound : 1;                        		// 0x00E4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bOwnerDied : 1;                                   		// 0x00E4 (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void OnRemoved ( );
	void OnUpdate ( float DeltaSeconds );
	void OnApplied ( );
	void OnFrozenPawnDied ( class ABioPawn* oPawn );
};

// Class SFXGameContent.SFXGameEffect_PowerCombo_Cryo
// 0x0018 (0x0160 - 0x0148)
class USFXGameEffect_PowerCombo_Cryo : public USFXGameEffect_PowerCombo
{
public:
	struct FVector2D                                   FreezeDuration;                                   		// 0x0148 (0x0008) [0x0000000000004000]              ( CPF_Config )
	class URvrClientEffectInterface*                   CE_HalfFrozenTemplate;                            		// 0x0150 (0x0008) [0x0000000000000000]              
	float                                              ResistanceDurationMultiplier;                     		// 0x0158 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              SpeedReduction;                                   		// 0x015C (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool OnImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector const& HitLocation, struct FVector const& HitNormal );
};

// Class SFXGameContent.SFXGameEffect_ElectricComboBeam
// 0x003A (0x00CC - 0x0092)
class USFXGameEffect_ElectricComboBeam : public USFXGameEffect
{
public:
	class AActor*                                      SourceActor;                                      		// 0x0094 (0x0008) [0x0000000000000000]              
	class UParticleSystemComponent*                    PSC_Beam;                                         		// 0x009C (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct SFXName                                     BeamAttachBoneName;                               		// 0x00A4 (0x0008) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_ImpactTemplate;                                		// 0x00AC (0x0008) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_CrustTemplate;                                 		// 0x00B4 (0x0008) [0x0000000000000000]              
	class UWwiseEvent*                                 BeamSound;                                        		// 0x00BC (0x0008) [0x0000000000000000]              
	float                                              CrustDuration;                                    		// 0x00C4 (0x0004) [0x0000000000000000]              
	unsigned long                                      bBeamActive : 1;                                  		// 0x00C8 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void OnRemoved ( );
	void OnUpdate ( float DeltaSeconds );
	void PlayBeamEffect ( class UParticleSystemComponent* PS, struct FVector const& TargetLocation );
	void OnApplied ( );
};

// Class SFXGameContent.SFXGameEffect_FireDamageOverTime
// 0x0014 (0x00B4 - 0x00A0)
class USFXGameEffect_FireDamageOverTime : public USFXGameEffect_DamageOverTime
{
public:
	class USFXPowerCustomAction*                       ComboPower;                                       		// 0x00A0 (0x0008) [0x1000000000000000]              
	float                                              TotalDamageDone;                                  		// 0x00A8 (0x0004) [0x0000000000000000]              
	float                                              PowerComboDamageThreshold;                        		// 0x00AC (0x0004) [0x0000000000000000]              
	unsigned long                                      bComboEffectApplied : 1;                          		// 0x00B0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCanCauseCombo : 1;                               		// 0x00B0 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bCanTriggerAchievement : 1;                       		// 0x00B0 (0x0004) [0x0000000000000000] [0x00000004] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void DoDamage ( );
	void AddFireDamage ( float AddedDamage, float NewDuration );
	void OnApplied ( );
};

// Class SFXGameContent.SFXGameEffect_PowerCombo_Fire
// 0x0024 (0x016C - 0x0148)
class USFXGameEffect_PowerCombo_Fire : public USFXGameEffect_PowerCombo
{
public:
	struct FVector2D                                   DamagePerSecond;                                  		// 0x0148 (0x0008) [0x0000000000004000]              ( CPF_Config )
	struct FVector2D                                   DoTDuration;                                      		// 0x0150 (0x0008) [0x0000000000004000]              ( CPF_Config )
	class UParticleSystem*                             PS_FlameEffect;                                   		// 0x0158 (0x0008) [0x0000000004000000]              ( CPF_EditInline )
	int                                                NumFlameEffects;                                  		// 0x0160 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                NumFlameEffectsMP;                                		// 0x0164 (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned long                                      bHideBodyOnDetonation : 1;                        		// 0x0168 (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool OnImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector const& HitLocation, struct FVector const& HitNormal );
	void OnPowerComboDetonated ( class USFXPowerCustomAction* DetonationPower, struct FVector const& HitLocation, struct FVector const& HitNormal );
};

// Class SFXGameContent.SFXGameEffect_HealShieldOverTime
// 0x0002 (0x0094 - 0x0092)
class USFXGameEffect_HealShieldOverTime : public USFXGameEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void OnUpdate ( float DeltaSeconds );
};

// Class SFXGameContent.SFXGameEffect_MaxGrenadeBonus
// 0x0002 (0x0094 - 0x0092)
class USFXGameEffect_MaxGrenadeBonus : public USFXGameEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void OnRemoved ( );
	void OnApplied ( );
};

// Class SFXGameContent.SFXGameEffect_PowerCombo_Biotic
// 0x0000 (0x0148 - 0x0148)
class USFXGameEffect_PowerCombo_Biotic : public USFXGameEffect_PowerCombo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void OnPowerComboDetonated ( class USFXPowerCustomAction* DetonationPower, struct FVector const& HitLocation, struct FVector const& HitNormal );
};

// Class SFXGameContent.SFXShake_Power_BioticCombo
// 0x0000 (0x00E0 - 0x00E0)
class USFXShake_Power_BioticCombo : public USFXShake_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXRumble_Power_BioticCombo
// 0x0000 (0x0070 - 0x0070)
class USFXRumble_Power_BioticCombo : public USFXRumble_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXShake_Power_CryoCombo
// 0x0000 (0x00E0 - 0x00E0)
class USFXShake_Power_CryoCombo : public USFXShake_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXRumble_Power_CryoCombo
// 0x0000 (0x0070 - 0x0070)
class USFXRumble_Power_CryoCombo : public USFXRumble_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXGameEffect_PowerCombo_Electric
// 0x0004 (0x014C - 0x0148)
class USFXGameEffect_PowerCombo_Electric : public USFXGameEffect_PowerCombo
{
public:
	float                                              BeamDuration;                                     		// 0x0148 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool OnImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector const& HitLocation, struct FVector const& HitNormal );
};

// Class SFXGameContent.SFXShake_Power_ElectricCombo
// 0x0000 (0x00E0 - 0x00E0)
class USFXShake_Power_ElectricCombo : public USFXShake_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXRumble_Power_ElectricCombo
// 0x0000 (0x0070 - 0x0070)
class USFXRumble_Power_ElectricCombo : public USFXRumble_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXShake_Power_FireCombo
// 0x0000 (0x00E0 - 0x00E0)
class USFXShake_Power_FireCombo : public USFXShake_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXRumble_Power_FireCombo
// 0x0000 (0x0070 - 0x0070)
class USFXRumble_Power_FireCombo : public USFXRumble_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXGameEffect_Pull
// 0x0048 (0x00DC - 0x0094)
class USFXGameEffect_Pull : public USFXGameEffect_PhysicsPower
{
public:
	struct FVector                                     ForceVector;                                      		// 0x0094 (0x000C) [0x0000000000000000]              
	struct FVector                                     Direction;                                        		// 0x00A0 (0x000C) [0x0000000000000000]              
	struct SFXName                                     BoneName;                                         		// 0x00AC (0x0008) [0x0000000000000000]              
	class ABioPawn*                                    Caster;                                           		// 0x00B4 (0x0008) [0x0000000000000000]              
	class ABioPawn*                                    OwnerPawn;                                        		// 0x00BC (0x0008) [0x0000000000000000]              
	float                                              Force;                                            		// 0x00C4 (0x0004) [0x0000000000000000]              
	float                                              MinimumVelocity;                                  		// 0x00C8 (0x0004) [0x0000000000000000]              
	float                                              MinimumVelocityForceMult;                         		// 0x00CC (0x0004) [0x0000000000000000]              
	float                                              minHeightForBodyFallSound;                        		// 0x00D0 (0x0004) [0x0000000000000000]              
	float                                              DamagePerSecond;                                  		// 0x00D4 (0x0004) [0x0000000000000000]              
	float                                              TargetExtraDamage;                                		// 0x00D8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void OnRemoved ( );
	void MoveActor ( struct FVector const& vForce );
	void OnUpdate ( float DeltaSeconds );
	void OnApplied ( );
};

// Class SFXGameContent.SFXGameEffect_Ragdoll
// 0x0000 (0x0094 - 0x0094)
class USFXGameEffect_Ragdoll : public USFXGameEffect_PhysicsPower
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void OnRemoved ( );
	void OnApplied ( );
};

// Class SFXGameContent.SFXGameEffect_ShockwaveLift
// 0x0008 (0x009C - 0x0094)
class USFXGameEffect_ShockwaveLift : public USFXGameEffect_PhysicsPower
{
public:
	float                                              GravityValue;                                     		// 0x0094 (0x0004) [0x0000000000000000]              
	float                                              ForceDrag;                                        		// 0x0098 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool HasOtherGravityEffects ( );
	void OnRemoved ( );
	void OnUpdate ( float DeltaSeconds );
	void OnApplied ( );
};

// Class SFXGameContent.SFXGameEffect_Singularity
// 0x0048 (0x00DC - 0x0094)
class USFXGameEffect_Singularity : public USFXGameEffect_PhysicsPower
{
public:
	struct FVector                                     SingularityLocation;                              		// 0x0094 (0x000C) [0x0000000000000000]              
	class ABioPawn*                                    Caster;                                           		// 0x00A0 (0x0008) [0x0000000000000000]              
	class ABioPawn*                                    OwnerPawn;                                        		// 0x00A8 (0x0008) [0x0000000000000000]              
	struct SFXName                                     BoneName;                                         		// 0x00B0 (0x0008) [0x0000000000000000]              
	class USFXPowerCustomAction_Singularity*           Power;                                            		// 0x00B8 (0x0008) [0x1000000000000000]              
	float                                              InnerRadius;                                      		// 0x00C0 (0x0004) [0x0000000000000000]              
	float                                              UpdateInterval;                                   		// 0x00C4 (0x0004) [0x0000000000000000]              
	float                                              SingularityRadius;                                		// 0x00C8 (0x0004) [0x0000000000000000]              
	float                                              ForcePerSecond;                                   		// 0x00CC (0x0004) [0x0000000000000000]              
	float                                              DamagePerSecond;                                  		// 0x00D0 (0x0004) [0x0000000000000000]              
	float                                              minHeightForBodyFallSound;                        		// 0x00D4 (0x0004) [0x0000000000000000]              
	unsigned long                                      bApplied : 1;                                     		// 0x00D8 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool OutOfRangeCheck ( float Distance );
	bool IsStillInSingularity ( );
	void OnRemoved ( );
	void AddForceToActor ( struct FVector const& vForce );
	void InitialMovement ( );
	void UpdateActor ( );
	void OnApplied ( );
};

// Class SFXGameContent.SFXGameEffect_Stasis
// 0x003B (0x00FC - 0x00C1)
class USFXGameEffect_Stasis : public USFXGameEffect_WeldPhysics
{
public:
	struct FGuid                                       StasisCrustGuid;                                  		// 0x00C4 (0x0010) [0x0000000000000000]              
	class ABioPawn*                                    OwnerPawn;                                        		// 0x00D4 (0x0008) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_StasisCrust;                                   		// 0x00DC (0x0008) [0x0000000000000000]              
	class USFXPowerCustomAction_Stasis*                Power;                                            		// 0x00E4 (0x0008) [0x1000000000000000]              
	float                                              ForceDrag;                                        		// 0x00EC (0x0004) [0x0000000000000000]              
	float                                              InitialHealth;                                    		// 0x00F0 (0x0004) [0x0000000000000000]              
	float                                              HealthThreshold;                                  		// 0x00F4 (0x0004) [0x0000000000000000]              
	unsigned long                                      StopAllVelocity : 1;                              		// 0x00F8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bWasInMatinee : 1;                                		// 0x00F8 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bWasDisabled : 1;                                 		// 0x00F8 (0x0004) [0x0000000000000000] [0x00000004] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void OnRemoved ( );
	void UnStasisTarget ( );
	void OnUpdate ( float DeltaSeconds );
	void NullVelocity ( float DeltaSeconds );
	void StartCrustVFX ( );
	void OnApplied ( );
};

// Class SFXGameContent.SFXPowerCustomAction_Stasis
// 0x0154 (0x0915 - 0x07C1)
class USFXPowerCustomAction_Stasis : public USFXPowerCustomAction
{
public:
	struct FPowerData                                  StasisBubbleRadius;                               		// 0x07C4 (0x0034) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  HealthDamageThreshold;                            		// 0x07F8 (0x0034) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  PushAwayForce;                                    		// 0x082C (0x0034) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray<class AActor*>                              m_oAffectedTargets;                               		// 0x0860 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray<class AActor*>                              m_oCurrentStasisTargets;                          		// 0x0870 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray<struct SFXName>                             EffectsToRemove;                                  		// 0x0880 (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FAreaEffectParameters                       StasisBubbleParameters;                           		// 0x0890 (0x0020) [0x0000000000004000]              ( CPF_Config )
	struct FGuid                                       StasisBubbleGuid;                                 		// 0x08B0 (0x0010) [0x0000000000000000]              
	struct FVector                                     StasisBubbleLocation;                             		// 0x08C0 (0x000C) [0x0000000000000000]              
	struct FVector                                     StasisBubbleNormal;                               		// 0x08CC (0x000C) [0x0000000000002000]              ( CPF_Transient )
	class ASFXPawn*                                    LastImpactedPawn;                                 		// 0x08D8 (0x0008) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_StasisBubble;                                  		// 0x08E0 (0x0008) [0x0000000000000000]              
	float                                              StasisBubbleTimer;                                		// 0x08E8 (0x0004) [0x0000000000000000]              
	float                                              LookForActorsTimer;                               		// 0x08EC (0x0004) [0x0000000000000000]              
	float                                              LookForActorsInterval;                            		// 0x08F0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_DurationBonus;                             		// 0x08F4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_CooldownBonus;                             		// 0x08F8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_VulnerableDamageBonus;                     		// 0x08FC (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_NoCooldownChance;                          		// 0x0900 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_DamageTakenBonus;                          		// 0x0904 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_HealthThresholdPct;                        		// 0x0908 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                TargetImmuneToStasis;                             		// 0x090C (0x0004) [0x0000000000000000]              
	unsigned long                                      bStasisBubbleActive : 1;                          		// 0x0910 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bClientCanProcessNoCooldown : 1;                  		// 0x0910 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned char                                      ClientNoCooldown;                                 		// 0x0914 (0x0001) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void PopulatePowerStatBarEvolves ( );
	void RecalculateAllPowerData ( unsigned long bReset );
	void EvolvePower ( unsigned char choice );
	bool ShouldUsePower ( class AActor* Target, FString* sOptionalInfo );
	void OnGameEffectEnded ( class AActor* oActor );
	void OnOwnerDestroyed ( );
	void DoJoinInProgress ( );
	void UnStasisCurrentTargets ( );
	void ClientImpactClearEffects ( class AActor* oImpacted );
	void ImpactStasis ( class AActor* oImpacted, float fDuration );
	void ImpactPushAway ( class AActor* oImpacted );
	bool OnImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector const& HitLocation, struct FVector const& HitNormal );
	void eventTickCustomAction ( float fDeltaTime );
	void ClientEndStasisEffect ( class AActor* oActor );
	void ClientDoCustomActionImpact ( class AActor* oActor, int ImpactCount, unsigned long bFirstTarget, struct FVector const& HitLocation, struct FVector const& HitNormal, int CustomActionReactionType );
	void ClientDoPowerSubsequentImpact ( class AActor* oActor, int CustomActionReactionType, float Duration, int ImpactCount, float Delay, unsigned long DoCallback );
	void StopStasisBubble ( unsigned long bReplicate );
	void StartStasisBubbleVFX ( );
	void OnPowerDetonated ( struct FVector const& HitLocation, struct FVector const& HitNormal, class ASFXProjectile_PowerCustomAction* oProjectile, class AActor* HitActor );
	void StartPowerCooldown ( );
	void StartCustomAction ( );
};

// Class SFXGameContent.SFXGameEffect_WeaponDamageTakenBonus
// 0x0002 (0x0094 - 0x0092)
class USFXGameEffect_WeaponDamageTakenBonus : public USFXGameEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void OnRemoved ( );
	void OnApplied ( );
};

// Class SFXGameContent.SFXGameEffect_WeightCapacity
// 0x0002 (0x0094 - 0x0092)
class USFXGameEffect_WeightCapacity : public USFXGameEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void OnRemoved ( );
	void OnApplied ( );
};

// Class SFXGameContent.SFXPlaceable
// 0x0004 (0x031C - 0x0318)
class ASFXPlaceable : public ASFXPlaceableBase
{
public:
	unsigned long                                      bReplicatedIsDestroyed : 1;                       		// 0x0318 (0x0004) [0x0000000100000020] [0x00000001] ( CPF_Net | CPF_RepNotify )
	unsigned long                                      bReplicatedIsDeactivated : 1;                     		// 0x0318 (0x0004) [0x0000000100000020] [0x00000002] ( CPF_Net | CPF_RepNotify )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void ActivatePlaceable ( );
	void DeactivatePlaceable ( );
	bool AllowPlaceableDamageEvents ( class AController* EventInstigator );
	bool ImpactWithPower ( unsigned char Resistance, class APawn* Caster, struct FVector const& HitLocation, struct FVector const& HitNormal, float Damage, struct FVector const& Force, class UClass* DamageType );
	void AreaDamage ( float Damage, float Force, class UClass* DamageType, float ImpactRadius );
	void AreaDamageForActor ( class AActor* HitActor );
	void PlaceableDestroyed ( );
	void ResetPlaceable ( );
	void eventReplicatedEvent ( struct SFXName VarName );
};

// Class SFXGameContent.SFXSeqEvt_PlaceableReset
// 0x0002 (0x0128 - 0x0126)
class USFXSeqEvt_PlaceableReset : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXSeqEvt_PlaceableDestroyed
// 0x0002 (0x0128 - 0x0126)
class USFXSeqEvt_PlaceableDestroyed : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXSeqEvt_PlaceableDeactivated
// 0x0002 (0x0128 - 0x0126)
class USFXSeqEvt_PlaceableDeactivated : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXSeqEvt_PlaceableActivated
// 0x0002 (0x0128 - 0x0126)
class USFXSeqEvt_PlaceableActivated : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXProjectile_PowerCustomAction_BioticGrenade
// 0x0000 (0x05F4 - 0x05F4)
class ASFXProjectile_PowerCustomAction_BioticGrenade : public ASFXProjectile_PowerCustomAction_Grenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXRumble_Power_FragGrenade
// 0x0000 (0x0070 - 0x0070)
class USFXRumble_Power_FragGrenade : public USFXRumble_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXShake_Power_FragGrenade
// 0x0000 (0x00E0 - 0x00E0)
class USFXShake_Power_FragGrenade : public USFXShake_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXProjectile_PowerCustomAction_Seeking
// 0x003D (0x0605 - 0x05C8)
class ASFXProjectile_PowerCustomAction_Seeking : public ASFXProjectile_PowerCustomAction
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x05C8 (0x0008) MISSED OFFSET
	struct FQuat                                       StartRotation;                                    		// 0x05D0 (0x0010) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     LastValidSeekLocation;                            		// 0x05E0 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              TimeAlive;                                        		// 0x05EC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              CurveShape;                                       		// 0x05F0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              UpperBound;                                       		// 0x05F4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              InterpRate;                                       		// 0x05F8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              PawnEvadedStopSeekingTime;                        		// 0x05FC (0x0004) [0x0000000000000000]              
	unsigned long                                      bSeekingEnabled : 1;                              		// 0x0600 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bExplodeNextFrame : 1;                            		// 0x0600 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bPawnEvaded : 1;                                  		// 0x0600 (0x0004) [0x0000000100002020] [0x00000004] ( CPF_Net | CPF_Transient | CPF_RepNotify )
	unsigned char                                      SeekAimNode;                                      		// 0x0604 (0x0001) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void Tick_Prediction ( float DeltaTime );
	void Recycle ( );
	void InitializeRotation ( class APawn* oCasterPawn );
	bool InitializePowerProjectile ( class AActor* oCaster, float fTravelSpeed, float fRadius, class USFXPowerCustomAction* oPower );
	void PawnEvadedPower ( class ABioPawn* Pawn, struct SFXName Label, float TimeBeforeImpact );
	bool CanLockOn ( class AActor* Target, class APawn* CasterPawn );
	void Tick ( float DeltaTime );
	void TickAimRotation ( float DeltaTime, struct FVector const& SeekVector );
	void TickAim ( float DeltaTime );
	struct FVector GetAimLocation ( class AActor* Target );
	void Timer ( );
	void eventReplicatedEvent ( struct SFXName VarName );
};

// Class SFXGameContent.SFXProjectile_PowerCustomAction_SuperSeeking
// 0x0027 (0x062C - 0x0605)
class ASFXProjectile_PowerCustomAction_SuperSeeking : public ASFXProjectile_PowerCustomAction_Seeking
{
public:
	struct FVector2D                                   DownwardPitchScale;                               		// 0x0608 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   DownwardPitchScaleRange;                          		// 0x0610 (0x0008) [0x0000000000000000]              
	float                                              CornerStrength;                                   		// 0x0618 (0x0004) [0x0000000000000000]              
	float                                              ApexDist;                                         		// 0x061C (0x0004) [0x0000000000000000]              
	float                                              MaxAngleOffset;                                   		// 0x0620 (0x0004) [0x0000000000000000]              
	float                                              OffsetAimMaxDistance;                             		// 0x0624 (0x0004) [0x0000000000000000]              
	float                                              OffsetAimMinDistance;                             		// 0x0628 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void InitializeRotation ( class APawn* oCasterPawn );
	void TickAimRotation ( float DeltaTime, struct FVector const& SeekVector );
};

// Class SFXGameContent.SFXProjectile_PowerCustomAction_Shockwave
// 0x0028 (0x05F0 - 0x05C8)
class ASFXProjectile_PowerCustomAction_Shockwave : public ASFXProjectile_PowerCustomAction
{
public:
	class USFXPowerCustomAction_Shockwave*             ShockwavePower;                                   		// 0x05C8 (0x0008) [0x1000000000000000]              
	class UWwiseEvent*                                 LastShockwaveSound;                               		// 0x05D0 (0x0008) [0x0000000000000000]              
	class UWwiseEvent*                                 HenchmanLastShockwaveSound;                       		// 0x05D8 (0x0008) [0x0000000000000000]              
	float                                              TimeBetweenImpacts;                               		// 0x05E0 (0x0004) [0x0000000000000000]              
	float                                              TimeToNextImpact;                                 		// 0x05E4 (0x0004) [0x0000000000000000]              
	float                                              FirstImpactDelay;                                 		// 0x05E8 (0x0004) [0x0000000000000000]              
	int                                                NumShockwaves;                                    		// 0x05EC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void ReplicateExplode ( struct FVector const& HitLocation, struct FVector const& HitNormal );
	void Tick ( float DeltaTime );
	bool InitializePowerProjectile ( class AActor* oCaster, float fTravelSpeed, float fRadius, class USFXPowerCustomAction* oPower );
	void ProcessTouch ( class AActor* Other, struct FVector const& HitLocation, struct FVector const& HitNormal );
	void eventHitWall ( struct FVector const& HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp );
};

// Class SFXGameContent.SFXRumble_Power_HeavyImpact
// 0x0000 (0x0070 - 0x0070)
class USFXRumble_Power_HeavyImpact : public USFXRumble_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXShake_Power_Shockwave
// 0x0000 (0x00E0 - 0x00E0)
class USFXShake_Power_Shockwave : public USFXShake_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXShake_Power_HeavyImpact
// 0x0000 (0x00E0 - 0x00E0)
class USFXShake_Power_HeavyImpact : public USFXShake_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXShield_Biotic_Player
// 0x0000 (0x04BC - 0x04BC)
class ASFXShield_Biotic_Player : public ASFXShield_Player
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXGameEffect_ConstraintDmgBonus
// 0x0002 (0x0094 - 0x0092)
class USFXGameEffect_ConstraintDmgBonus : public USFXGameEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void OnRemoved ( );
	void OnApplied ( );
};

// Class SFXGameContent.SFXGameEffect_HealthPercentBonus
// 0x0000 (0x009C - 0x009C)
class USFXGameEffect_HealthPercentBonus : public USFXGameEffect_HealthBonus
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXGameEffect_MeleeDamageBonus
// 0x0000 (0x00B0 - 0x00B0)
class USFXGameEffect_MeleeDamageBonus : public USFXGameEffect_PowerBonus
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXGameEffect_PartBasedArmor_HealthBonus
// 0x0000 (0x009C - 0x009C)
class USFXGameEffect_PartBasedArmor_HealthBonus : public USFXGameEffect_HealthPercentBonus
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXGameEffect_PowerBonus_Cooldown
// 0x0000 (0x00B0 - 0x00B0)
class USFXGameEffect_PowerBonus_Cooldown : public USFXGameEffect_PowerBonus
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXGameEffect_PowerBonus_Damage
// 0x0000 (0x00B0 - 0x00B0)
class USFXGameEffect_PowerBonus_Damage : public USFXGameEffect_PowerBonus
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXGameEffect_ShieldPercentBonus
// 0x0000 (0x009C - 0x009C)
class USFXGameEffect_ShieldPercentBonus : public USFXGameEffect_ShieldBonus
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXGameEffect_SpareAmmo
// 0x0006 (0x0098 - 0x0092)
class USFXGameEffect_SpareAmmo : public USFXGameEffect
{
public:
	int                                                AmmoIncrease;                                     		// 0x0094 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void OnRemoved ( );
	void OnApplied ( );
};

// Class SFXGameContent.SFXDamageType_SniperRifle
// 0x0000 (0x0130 - 0x0130)
class USFXDamageType_SniperRifle : public USFXDamageType_Weapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXGUI_StandardSniperZoomReticle
// 0x0030 (0x00E8 - 0x00B8)
class USFXGUI_StandardSniperZoomReticle : public USFXGUI_WeaponReticleBase
{
public:
	FString                                            m_sSniperReticleSubMovie;                         		// 0x00B8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxValue*                                   m_oActualReticle;                                 		// 0x00C8 (0x0008) [0x0000000000000000]              
	class UGFxValue*                                   m_oZoomText;                                      		// 0x00D0 (0x0008) [0x0000000000000000]              
	class UGFxValue*                                   m_oDistanceText;                                  		// 0x00D8 (0x0008) [0x0000000000000000]              
	class UGFxValue*                                   m_oAmmoText;                                      		// 0x00E0 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void eventZoomChanged ( int nZoom );
	void eventWeaponAmmoChanged ( int nAmmo );
	void eventDistanceToTargetChanged ( float fDistance );
	void OnReticleLoaded ( );
	void eventPerformReticleHide ( unsigned long bInstant );
	void eventPerformReticleShow ( unsigned long bInstant );
};

// Class SFXGameContent.SFXWeapon_SniperRifle_Mantis
// 0x0000 (0x1154 - 0x1154)
class ASFXWeapon_SniperRifle_Mantis : public ASFXWeapon_SniperRifle_Base
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_AutoPistol
// 0x0000 (0x0130 - 0x0130)
class USFXDamageType_AutoPistol : public USFXDamageType_Weapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXWeapon_SMG_Shuriken
// 0x0000 (0x10C8 - 0x10C8)
class ASFXWeapon_SMG_Shuriken : public ASFXWeapon_SMG_Base
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	class UDecalComponent* GetWeaponSpecificDecalData ( class USFXPhysicalMaterialDecals* DecalEffects, float* FadeTime );
};

// Class SFXGameContent.SFXSeqAct_EndObjective
// 0x0008 (0x0100 - 0x00F8)
class USFXSeqAct_EndObjective : public USequenceAction
{
public:
	class AActor*                                      oTarget;                                          		// 0x00F8 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	int eventGetObjClassVersion ( );
	void Activated ( );
};

// Class SFXGameContent.SFXSeqAct_SetObjective
// 0x0035 (0x012D - 0x00F8)
class USFXSeqAct_SetObjective : public USequenceAction
{
public:
	FString                                            sObjectiveType;                                   		// 0x00F8 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FVector                                     vMarkerOffset;                                    		// 0x0108 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      oTarget;                                          		// 0x0114 (0x0008) [0x0000000000000000]              
	struct SFXName                                     BoneToAttachTo;                                   		// 0x011C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                srObjective;                                      		// 0x0124 (0x0004) [0x0000000000000000]              
	unsigned long                                      MarkerIsLocationless : 1;                         		// 0x0128 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      DisplayMarkerOnSpawn : 1;                         		// 0x0128 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned char                                      MarkerType;                                       		// 0x012C (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	int eventGetObjClassVersion ( );
	void Activated ( );
};

// Class SFXGameContent.SFXSeqAct_ToggleTutorialTracking
// 0x0000 (0x00F8 - 0x00F8)
class USFXSeqAct_ToggleTutorialTracking : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void Activated ( );
};

// Class SFXGameContent.BioPlaypenVolumeAdditive
// 0x0000 (0x02C8 - 0x02C8)
class ABioPlaypenVolumeAdditive : public ABioPlaypenVolume
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void eventUnTouch ( class AActor* Other );
	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector const& HitLocation, struct FVector const& HitNormal );
};

// Class SFXGameContent.SFXAI_Trooper
// 0x0018 (0x08B4 - 0x089C)
class ASFXAI_Trooper : public ASFXAI_Cover
{
public:
	struct SFXName                                     GrenadeAttack;                                    		// 0x089C (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              LastGrenadeTime;                                  		// 0x08A4 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	float                                              GrenadeInterval;                                  		// 0x08A8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              GrenadeConeAngle;                                 		// 0x08AC (0x0004) [0x0000000000000000]              
	unsigned long                                      bThrowGrenade : 1;                                		// 0x08B0 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void DrawDifficulty ( class UBioCheatManager* CM );
	void Initialize ( );
	void OnShouldThrowGrenade ( class USequenceAction* Seq );
	bool ShouldUseGrenade ( );
};

// Class SFXGameContent.SFXAICmd_Base_Cover
// 0x0000 (0x00D4 - 0x00D4)
class USFXAICmd_Base_Cover : public USFXAICommand_Base_Combat
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool NotifyMoodChange ( );
	void NotifyPendingPowerImpact ( struct SFXName Label, float TimeBeforeImpact, class USFXPowerCustomAction* Power, class ASFXProjectile_PowerCustomAction* Projectile );
	void NotifyTakeHit ( class AController* instigatedBy, struct FVector const& HitLocation, int Damage, class UClass* DamageType, struct FVector const& Momentum );
	bool ShouldAttack ( );
	void Resumed ( struct SFXName OldCommandName );
	void Pushed ( );
};

// Class SFXGameContent.SFXAICmd_Base_Trooper
// 0x0000 (0x00D4 - 0x00D4)
class USFXAICmd_Base_Trooper : public USFXAICmd_Base_Cover
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXAICmd_Reaction_ShotInCover
// 0x0000 (0x00D4 - 0x00D4)
class USFXAICmd_Reaction_ShotInCover : public USFXAICommand_Base_Combat
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXAmmoContainer
// 0x0008 (0x02B4 - 0x02AC)
class ASFXAmmoContainer : public ASFXDroppedAmmo
{
public:
	float                                              RespawnTime;                                      		// 0x02AC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bRespawns : 1;                                    		// 0x02B0 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bAmmoMeshVisible : 1;                             		// 0x02B0 (0x0004) [0x0000000100000020] [0x00000002] ( CPF_Net | CPF_RepNotify )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void eventReplicatedEvent ( struct SFXName VarName );
	void GiveTo ( class APawn* P );
	void StartSleeping ( );
	void SetRespawn ( );
	void eventSetInitialState ( );
};

// Class SFXGameContent.SFXCustomAction_AILadderClimbDown
// 0x0000 (0x01B0 - 0x01B0)
class USFXCustomAction_AILadderClimbDown : public USFXCustomAction_LadderClimbDownBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_AILadderClimbUp
// 0x0008 (0x01C0 - 0x01B8)
class USFXCustomAction_AILadderClimbUp : public USFXCustomAction_ClimbUpBase
{
public:
	class UAnimSet*                                    LadderAnimSet;                                    		// 0x01B8 (0x0008) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void StopCustomAction ( );
	void StartCustomAction ( );
};

// Class SFXGameContent.SFXCustomAction_AIMantleOverCover
// 0x0000 (0x0534 - 0x0534)
class USFXCustomAction_AIMantleOverCover : public USFXCustomAction_MantleOverCoverBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_AIMantleUp
// 0x0026 (0x0178 - 0x0152)
class USFXCustomAction_AIMantleUp : public USFXCustomAction_SimpleMoveBase
{
public:
	struct FBodyStance                                 BS_MantleUpOutOfCover;                            		// 0x0154 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_MantleUpInCover;                               		// 0x0164 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bStartInCover : 1;                                		// 0x0174 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	struct FBodyStance GetBodyStanceAnim ( );
	void StartCustomAction ( );
	void eventGetUsedAnimNames ( TArray<struct SFXName>* UsedAnims );
};

// Class SFXGameContent.SFXCustomAction_AISwatTurnLeft
// 0x0000 (0x0220 - 0x0220)
class USFXCustomAction_AISwatTurnLeft : public USFXCustomAction_SwatTurn
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_AISwatTurnRight
// 0x0000 (0x0220 - 0x0220)
class USFXCustomAction_AISwatTurnRight : public USFXCustomAction_SwatTurn
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_AnimRagdollSingularity
// 0x0003 (0x0154 - 0x0151)
class USFXCustomAction_AnimRagdollSingularity : public USFXCustomAction_AnimatedRagdoll
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_BoostDown
// 0x0028 (0x01CC - 0x01A4)
class USFXCustomAction_BoostDown : public USFXCustomAction_BoostDownBase
{
public:
	struct FGuid                                       LoopVFXGuid;                                      		// 0x01A4 (0x0010) [0x0000000000000000]              
	class URvrClientEffectInterface*                   LoopTemplate;                                     		// 0x01B4 (0x0008) [0x0000000000000000]              
	class URvrClientEffectInterface*                   LandingTemplate;                                  		// 0x01BC (0x0008) [0x0000000000000000]              
	class UWwiseEvent*                                 StopRocketEffect;                                 		// 0x01C4 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void SetMoveStage ( unsigned char NextStage );
	void StopCustomAction ( );
};

// Class SFXGameContent.SFXCustomAction_BoostUp
// 0x0030 (0x01E8 - 0x01B8)
class USFXCustomAction_BoostUp : public USFXCustomAction_ClimbUpBase
{
public:
	struct FGuid                                       LoopVFXGuid;                                      		// 0x01B8 (0x0010) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_BoostStart;                                    		// 0x01C8 (0x0008) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_BoostLoop;                                     		// 0x01D0 (0x0008) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_BoostEnd;                                      		// 0x01D8 (0x0008) [0x0000000000000000]              
	class UWwiseEvent*                                 StopRocketEffect;                                 		// 0x01E0 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void EndRocketBoots ( );
	void StopCustomAction ( );
	void SetMoveStage ( unsigned char NextStage );
};

// Class SFXGameContent.SFXGameEffect_RagdollRocket
// 0x0014 (0x00A8 - 0x0094)
class USFXGameEffect_RagdollRocket : public USFXGameEffect_PhysicsPower
{
public:
	class ABioPawn*                                    OwnerPawn;                                        		// 0x0094 (0x0008) [0x0000000000000000]              
	float                                              ForceMultiplier;                                  		// 0x009C (0x0004) [0x0000000000000000]              
	float                                              LeftForce;                                        		// 0x00A0 (0x0004) [0x0000000000000000]              
	float                                              RightForce;                                       		// 0x00A4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool HasAntiGravity ( );
	void OnUpdate ( float DeltaSeconds );
	void OnApplied ( );
};

// Class SFXGameContent.SFXCustomAction_CoverSlipLeft
// 0x0000 (0x0140 - 0x0140)
class USFXCustomAction_CoverSlipLeft : public USFXCustomAction_CoverSlipBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_CoverSlipLeftStanding
// 0x0000 (0x0140 - 0x0140)
class USFXCustomAction_CoverSlipLeftStanding : public USFXCustomAction_CoverSlipBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_CoverSlipRight
// 0x0000 (0x0140 - 0x0140)
class USFXCustomAction_CoverSlipRight : public USFXCustomAction_CoverSlipBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_CoverSlipRightStanding
// 0x0000 (0x0140 - 0x0140)
class USFXCustomAction_CoverSlipRightStanding : public USFXCustomAction_CoverSlipBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_DeathReaction
// 0x0027 (0x0180 - 0x0159)
class USFXCustomAction_DeathReaction : public USFXCustomAction_DamageReaction
{
public:
	class UWwiseEvent*                                 MetalImpactSoundPlayer;                           		// 0x015C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UWwiseEvent*                                 MetalImpactSoundHench;                            		// 0x0164 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UWwiseEvent*                                 FleshImpactSoundPlayer;                           		// 0x016C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UWwiseEvent*                                 FleshImpactSoundHench;                            		// 0x0174 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bPlayDeathImpact : 1;                             		// 0x017C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void PlayImpactSound ( );
	void BodyStanceAnimEndNotification ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	void StartCustomAction ( );
};

// Class SFXGameContent.SFXCustomAction_DeathReaction_Corkscrew
// 0x0000 (0x0180 - 0x0180)
class USFXCustomAction_DeathReaction_Corkscrew : public USFXCustomAction_DeathReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_DeathReaction_GibHeadshot
// 0x0000 (0x0180 - 0x0180)
class USFXCustomAction_DeathReaction_GibHeadshot : public USFXCustomAction_DeathReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void ActivateImpactEmitter ( struct FVector const& HitLocation, struct FVector const& HitNormal, struct SFXName BoneName, class UClass* DamageType );
	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
};

// Class SFXGameContent.SFXCustomAction_DeathReaction_GibKnockback
// 0x0000 (0x0180 - 0x0180)
class USFXCustomAction_DeathReaction_GibKnockback : public USFXCustomAction_DeathReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void StopAnim ( );
	void ActivateImpactEmitter ( struct FVector const& HitLocation, struct FVector const& HitNormal, struct SFXName BoneName, class UClass* DamageType );
	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
};

// Class SFXGameContent.SFXCustomAction_DeathReaction_Headshot_Cover
// 0x0003 (0x015C - 0x0159)
class USFXCustomAction_DeathReaction_Headshot_Cover : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void ActivateImpactEmitter ( struct FVector const& HitLocation, struct FVector const& HitNormal, struct SFXName BoneName, class UClass* DamageType );
};

// Class SFXGameContent.SFXCustomAction_DeathReaction_HeavyLeftArm
// 0x0000 (0x0180 - 0x0180)
class USFXCustomAction_DeathReaction_HeavyLeftArm : public USFXCustomAction_DeathReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_DeathReaction_HeavyRightArm
// 0x0000 (0x0180 - 0x0180)
class USFXCustomAction_DeathReaction_HeavyRightArm : public USFXCustomAction_DeathReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_DeathReaction_LeftArm
// 0x0000 (0x0180 - 0x0180)
class USFXCustomAction_DeathReaction_LeftArm : public USFXCustomAction_DeathReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_DeathReaction_LeftLeg
// 0x0000 (0x0180 - 0x0180)
class USFXCustomAction_DeathReaction_LeftLeg : public USFXCustomAction_DeathReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_DeathReaction_RightArm
// 0x0000 (0x0180 - 0x0180)
class USFXCustomAction_DeathReaction_RightArm : public USFXCustomAction_DeathReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_DeathReaction_RightLeg
// 0x0000 (0x0180 - 0x0180)
class USFXCustomAction_DeathReaction_RightLeg : public USFXCustomAction_DeathReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_DeathReaction_Stomach
// 0x0000 (0x0180 - 0x0180)
class USFXCustomAction_DeathReaction_Stomach : public USFXCustomAction_DeathReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_Freezing
// 0x0003 (0x015C - 0x0159)
class USFXCustomAction_Freezing : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_FreezingII
// 0x0003 (0x015C - 0x0159)
class USFXCustomAction_FreezingII : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_FreezingIII
// 0x0003 (0x015C - 0x0159)
class USFXCustomAction_FreezingIII : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_GreatPain
// 0x0003 (0x015C - 0x0159)
class USFXCustomAction_GreatPain : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_GreatPainII
// 0x0003 (0x015C - 0x0159)
class USFXCustomAction_GreatPainII : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_IdleInspectWeapon
// 0x0003 (0x017C - 0x0179)
class USFXCustomAction_IdleInspectWeapon : public USFXCustomAction_LoopingInteraction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_IdleListening
// 0x0003 (0x017C - 0x0179)
class USFXCustomAction_IdleListening : public USFXCustomAction_LoopingInteraction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_IdleListening2
// 0x0003 (0x017C - 0x0179)
class USFXCustomAction_IdleListening2 : public USFXCustomAction_LoopingInteraction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_IdleListening3
// 0x0003 (0x017C - 0x0179)
class USFXCustomAction_IdleListening3 : public USFXCustomAction_LoopingInteraction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_IdleStandGuard
// 0x0003 (0x017C - 0x0179)
class USFXCustomAction_IdleStandGuard : public USFXCustomAction_LoopingInteraction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_IdleTalking
// 0x0003 (0x017C - 0x0179)
class USFXCustomAction_IdleTalking : public USFXCustomAction_LoopingInteraction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_IdleTalking2
// 0x0003 (0x017C - 0x0179)
class USFXCustomAction_IdleTalking2 : public USFXCustomAction_LoopingInteraction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_IdleTalking3
// 0x0003 (0x017C - 0x0179)
class USFXCustomAction_IdleTalking3 : public USFXCustomAction_LoopingInteraction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_IdleUseConsole
// 0x0003 (0x017C - 0x0179)
class USFXCustomAction_IdleUseConsole : public USFXCustomAction_LoopingInteraction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_OnFire
// 0x0003 (0x015C - 0x0159)
class USFXCustomAction_OnFire : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_OnFireII
// 0x0003 (0x015C - 0x0159)
class USFXCustomAction_OnFireII : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_RollBackward
// 0x0002 (0x0140 - 0x013E)
class USFXCustomAction_RollBackward : public USFXCustomAction_SingleAnim
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_RollForward
// 0x0002 (0x0140 - 0x013E)
class USFXCustomAction_RollForward : public USFXCustomAction_SingleAnim
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_RollLeft
// 0x0002 (0x0140 - 0x013E)
class USFXCustomAction_RollLeft : public USFXCustomAction_SingleAnim
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_RollRight
// 0x0002 (0x0140 - 0x013E)
class USFXCustomAction_RollRight : public USFXCustomAction_SingleAnim
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_ShieldBreach
// 0x003A (0x0193 - 0x0159)
class USFXCustomAction_ShieldBreach : public USFXCustomAction_DamageReaction
{
public:
	struct FBodyStance                                 BS_Anims[ 0x3 ];                                  		// 0x015C (0x0030) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                RandPercent;                                      		// 0x018C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      VocEvents[ 0x3 ];                                 		// 0x0190 (0x0003) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void StartCustomAction ( );
	bool InternalCanDoCustomAction ( class ABioPawn* SyncPawn, unsigned long bForced );
	void eventGetUsedAnimNames ( TArray<struct SFXName>* UsedAnims );
};

// Class SFXGameContent.SFXCustomAction_StaggerImpact
// 0x0003 (0x015C - 0x0159)
class USFXCustomAction_StaggerImpact : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_StaggerImpactForward
// 0x0003 (0x015C - 0x0159)
class USFXCustomAction_StaggerImpactForward : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_StaggerImpactII
// 0x0003 (0x015C - 0x0159)
class USFXCustomAction_StaggerImpactII : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_StaggerImpactLeft
// 0x0003 (0x015C - 0x0159)
class USFXCustomAction_StaggerImpactLeft : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_StaggerImpactRight
// 0x0003 (0x015C - 0x0159)
class USFXCustomAction_StaggerImpactRight : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_StandardImpact
// 0x0003 (0x015C - 0x0159)
class USFXCustomAction_StandardImpact : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_StandardImpactForward
// 0x0003 (0x015C - 0x0159)
class USFXCustomAction_StandardImpactForward : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_StandardImpactII
// 0x0003 (0x015C - 0x0159)
class USFXCustomAction_StandardImpactII : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_StandardImpactKnee
// 0x0003 (0x015C - 0x0159)
class USFXCustomAction_StandardImpactKnee : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_StandardImpactLeft
// 0x0003 (0x015C - 0x0159)
class USFXCustomAction_StandardImpactLeft : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_StandardImpactRight
// 0x0003 (0x015C - 0x0159)
class USFXCustomAction_StandardImpactRight : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_TrooperMelee
// 0x0002 (0x0140 - 0x013E)
class USFXCustomAction_TrooperMelee : public USFXCustomAction_SingleAnim
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void ClientDoCustomActionImpact ( class AActor* oActor, int ImpactCount, unsigned long bFirstTarget, struct FVector const& HitLocation, struct FVector const& HitNormal, int CustomActionReactionType );
};

// Class SFXGameContent.SFXCustomAction_TrooperStomp
// 0x0002 (0x0140 - 0x013E)
class USFXCustomAction_TrooperStomp : public USFXCustomAction_SingleAnim
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void OnTimelineImpact ( class AActor* Target );
	void ClientDoCustomActionImpact ( class AActor* oActor, int ImpactCount, unsigned long bFirstTarget, struct FVector const& HitLocation, struct FVector const& HitNormal, int CustomActionReactionType );
};

// Class SFXGameContent.SFXDamageType_EnemyGrenade
// 0x0002 (0x0130 - 0x012E)
class USFXDamageType_EnemyGrenade : public USFXDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_SMG_Tempest
// 0x0000 (0x0130 - 0x0130)
class USFXDamageType_SMG_Tempest : public USFXDamageType_AutoPistol
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_TacticalMachinePistol
// 0x0000 (0x0130 - 0x0130)
class USFXDamageType_TacticalMachinePistol : public USFXDamageType_SMG_Tempest
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXNav_InteractionHenchOmniToolCrouch
// 0x0000 (0x038C - 0x038C)
class ASFXNav_InteractionHenchOmniToolCrouch : public ASFXNav_InteractionPoint
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXNav_InteractionInspectWeapon
// 0x0000 (0x038C - 0x038C)
class ASFXNav_InteractionInspectWeapon : public ASFXNav_InteractionPoint
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXNav_InteractionStandGuard
// 0x0000 (0x038C - 0x038C)
class ASFXNav_InteractionStandGuard : public ASFXNav_InteractionPoint
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXPawn_Trooper
// 0x0000 (0x0FF8 - 0x0FF8)
class ASFXPawn_Trooper : public ASFXPawn
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXPowerCustomAction_EnemyGrenade
// 0x0003 (0x07C4 - 0x07C1)
class USFXPowerCustomAction_EnemyGrenade : public USFXPowerCustomAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool GetProjectileAttachPoint ( struct FVector* AttachPoint );
};

// Class SFXGameContent.SFXPowerCustomAction_CerberusGrenade
// 0x0000 (0x07C4 - 0x07C4)
class USFXPowerCustomAction_CerberusGrenade : public USFXPowerCustomAction_EnemyGrenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXProjectile_PowerCustomAction_CerberusFragGrenade
// 0x0000 (0x05F4 - 0x05F4)
class ASFXProjectile_PowerCustomAction_CerberusFragGrenade : public ASFXProjectile_PowerCustomAction_Grenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXRumble_MeleeHit
// 0x0000 (0x0068 - 0x0068)
class USFXRumble_MeleeHit : public UWaveFormBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXShake_MeleeHit
// 0x0000 (0x00D8 - 0x00D8)
class USFXShake_MeleeHit : public USFXCameraShakeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXWeapon_SMG_Hornet
// 0x0000 (0x10C8 - 0x10C8)
class ASFXWeapon_SMG_Hornet : public ASFXWeapon_SMG_Base
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	class UWwiseEvent* GetWeaponSpecificImpactSound ( class USFXPhysicalMaterialImpactSounds* ImpactSounds );
};

// Class SFXGameContent.SFXWeapon_AI_Hornet
// 0x0000 (0x10C8 - 0x10C8)
class ASFXWeapon_AI_Hornet : public ASFXWeapon_SMG_Hornet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_CustomLoopingInteraction
// 0x0003 (0x017C - 0x0179)
class USFXCustomAction_CustomLoopingInteraction : public USFXCustomAction_LoopingInteraction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void StartCustomAction ( );
};

// Class SFXGameContent.SFXNav_InteractionHenchCustom
// 0x0018 (0x03A4 - 0x038C)
class ASFXNav_InteractionHenchCustom : public ASFXNav_InteractionPoint
{
public:
	struct SFXName                                     StartAnim;                                        		// 0x038C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct SFXName                                     LoopAnim;                                         		// 0x0394 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct SFXName                                     EndAnim;                                          		// 0x039C (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_HenchBeckonFront
// 0x0003 (0x017C - 0x0179)
class USFXCustomAction_HenchBeckonFront : public USFXCustomAction_LoopingInteraction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool CanOverrideMoveWith ( int OldCustomAction, int NewCustomAction );
};

// Class SFXGameContent.SFXCustomAction_HenchBeckonRear
// 0x0003 (0x017C - 0x0179)
class USFXCustomAction_HenchBeckonRear : public USFXCustomAction_LoopingInteraction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool CanOverrideMoveWith ( int OldCustomAction, int NewCustomAction );
};

// Class SFXGameContent.SFXCustomAction_HenchCrouch
// 0x0000 (0x012C - 0x012C)
class USFXCustomAction_HenchCrouch : public USFXCustomAction_InteractionPointAnim
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool CanOverrideMoveWith ( int OldCustomAction, int NewCustomAction );
	void TriggerEnd ( );
	void StartCustomAction ( );
};

// Class SFXGameContent.SFXCustomAction_HenchInteractLow
// 0x001B (0x0194 - 0x0179)
class USFXCustomAction_HenchInteractLow : public USFXCustomAction_LoopingInteraction
{
public:
	struct FGuid                                       OmniToolGuid;                                     		// 0x017C (0x0010) [0x0000000000000000]              
	class URvrClientEffectInterface*                   OmniToolVFX;                                      		// 0x018C (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool CanOverrideMoveWith ( int OldCustomAction, int NewCustomAction );
	void StopCustomAction ( );
	void StartCustomAction ( );
};

// Class SFXGameContent.SFXCustomAction_HenchmanMelee
// 0x0098 (0x01A5 - 0x010D)
class USFXCustomAction_HenchmanMelee : public UBioCustomAction
{
public:
	struct FBodyStance                                 BS_Rifle1;                                        		// 0x0110 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Rifle2;                                        		// 0x0120 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Rifle3;                                        		// 0x0130 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Pistol1;                                       		// 0x0140 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Pistol2;                                       		// 0x0150 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Pistol3;                                       		// 0x0160 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class USFXTimelineData*                            Rifle1Timeline;                                   		// 0x0170 (0x0008) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	class USFXTimelineData*                            Rifle2Timeline;                                   		// 0x0178 (0x0008) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	class USFXTimelineData*                            Rifle3Timeline;                                   		// 0x0180 (0x0008) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	class USFXTimelineData*                            Pistol1Timeline;                                  		// 0x0188 (0x0008) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	class USFXTimelineData*                            Pistol2Timeline;                                  		// 0x0190 (0x0008) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	class USFXTimelineData*                            Pistol3Timeline;                                  		// 0x0198 (0x0008) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	unsigned long                                      bPistolMelee : 1;                                 		// 0x01A0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      MeleeStage;                                       		// 0x01A4 (0x0001) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void TryNextMelee ( );
	bool CanContinueMelee ( );
	void BodyStanceAnimEndNotification ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	void StopCustomAction ( );
	void StartCustomAction ( );
	struct FBodyStance GetBodyStanceAnim ( unsigned char Stage );
	bool ShouldUsePistolAnim ( );
	void eventGetUsedAnimNames ( TArray<struct SFXName>* UsedAnims );
};

// Class SFXGameContent.SFXCustomAction_HenchOmniTool
// 0x001B (0x0194 - 0x0179)
class USFXCustomAction_HenchOmniTool : public USFXCustomAction_LoopingInteraction
{
public:
	struct FGuid                                       OmniToolGuid;                                     		// 0x017C (0x0010) [0x0000000000000000]              
	class URvrClientEffectInterface*                   OmniToolVFX;                                      		// 0x018C (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool CanOverrideMoveWith ( int OldCustomAction, int NewCustomAction );
	void StopCustomAction ( );
	void StartCustomAction ( );
};

// Class SFXGameContent.SFXCustomAction_HenchOmniToolCrouch
// 0x001B (0x0194 - 0x0179)
class USFXCustomAction_HenchOmniToolCrouch : public USFXCustomAction_LoopingInteraction
{
public:
	struct FGuid                                       OmniToolGuid;                                     		// 0x017C (0x0010) [0x0000000000000000]              
	class URvrClientEffectInterface*                   OmniToolVFX;                                      		// 0x018C (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool CanOverrideMoveWith ( int OldCustomAction, int NewCustomAction );
	void StopCustomAction ( );
	void StartCustomAction ( );
};

// Class SFXGameContent.SFXCustomAction_HenchRollBackward
// 0x0002 (0x0140 - 0x013E)
class USFXCustomAction_HenchRollBackward : public USFXCustomAction_SingleAnim
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void StopCustomAction ( );
};

// Class SFXGameContent.SFXCustomAction_HenchRollForward
// 0x0002 (0x0140 - 0x013E)
class USFXCustomAction_HenchRollForward : public USFXCustomAction_SingleAnim
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void StopCustomAction ( );
};

// Class SFXGameContent.SFXCustomAction_HenchRollLeft
// 0x0002 (0x0140 - 0x013E)
class USFXCustomAction_HenchRollLeft : public USFXCustomAction_SingleAnim
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void StopCustomAction ( );
};

// Class SFXGameContent.SFXCustomAction_HenchRollRight
// 0x0002 (0x0140 - 0x013E)
class USFXCustomAction_HenchRollRight : public USFXCustomAction_SingleAnim
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void StopCustomAction ( );
};

// Class SFXGameContent.SFXCustomAction_HenchStandIdle
// 0x0000 (0x012C - 0x012C)
class USFXCustomAction_HenchStandIdle : public USFXCustomAction_InteractionPointAnim
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool CanOverrideMoveWith ( int OldCustomAction, int NewCustomAction );
	void TriggerEnd ( );
};

// Class SFXGameContent.SFXCustomAction_HenchStandTyping
// 0x0003 (0x017C - 0x0179)
class USFXCustomAction_HenchStandTyping : public USFXCustomAction_LoopingInteraction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool CanOverrideMoveWith ( int OldCustomAction, int NewCustomAction );
};

// Class SFXGameContent.SFXDamageType_BarrierBlast
// 0x0003 (0x0138 - 0x0135)
class USFXDamageType_BarrierBlast : public USFXDamageType_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_BarrierBlast_NoRagdoll
// 0x0000 (0x0138 - 0x0138)
class USFXDamageType_BarrierBlast_NoRagdoll : public USFXDamageType_BarrierBlast
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_CryoFreeze
// 0x0000 (0x0138 - 0x0138)
class USFXDamageType_CryoFreeze : public USFXDamageType_Power_Freeze
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_OverloadRobot
// 0x0000 (0x0138 - 0x0138)
class USFXDamageType_OverloadRobot : public USFXDamageType_Power_Electrocute
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_Overload
// 0x0000 (0x0138 - 0x0138)
class USFXDamageType_Overload : public USFXDamageType_OverloadRobot
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_ImprovedOverload
// 0x0000 (0x0138 - 0x0138)
class USFXDamageType_ImprovedOverload : public USFXDamageType_Overload
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_ImprovedOverloadRobot
// 0x0000 (0x0138 - 0x0138)
class USFXDamageType_ImprovedOverloadRobot : public USFXDamageType_OverloadRobot
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_Overload_Ragdoll
// 0x0000 (0x0138 - 0x0138)
class USFXDamageType_Overload_Ragdoll : public USFXDamageType_Overload
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_Reave
// 0x0000 (0x0138 - 0x0138)
class USFXDamageType_Reave : public USFXDamageType_Power_Fire
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_Reave_Improved
// 0x0000 (0x0138 - 0x0138)
class USFXDamageType_Reave_Improved : public USFXDamageType_Reave
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXGameEffect_BarrierLift
// 0x001E (0x00B0 - 0x0092)
class USFXGameEffect_BarrierLift : public USFXGameEffect
{
public:
	struct FVector                                     Force;                                            		// 0x0094 (0x000C) [0x0000000000000000]              
	class ABioPawn*                                    OwnerPawn;                                        		// 0x00A0 (0x0008) [0x0000000000000000]              
	float                                              UpdateInterval;                                   		// 0x00A8 (0x0004) [0x0000000000000000]              
	float                                              MinimumVelocity;                                  		// 0x00AC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void OnRemoved ( );
	void UpdateRagdoll ( );
	void OnApplied ( );
};

// Class SFXGameContent.SFXGameEffect_DefensiveArmor
// 0x0024 (0x00B8 - 0x0094)
class USFXGameEffect_DefensiveArmor : public USFXGameEffect_DamageTakenBonus
{
public:
	struct FGuid                                       GUID_ArmorCrustTemplate;                          		// 0x0094 (0x0010) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_ArmorCrustTemplate;                            		// 0x00A4 (0x0008) [0x0000000000000000]              
	class USFXPowerCustomAction_DefensiveShield*       Power;                                            		// 0x00AC (0x0008) [0x1000000000000000]              
	unsigned long                                      bArmorVFXOn : 1;                                  		// 0x00B4 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void OnRemoved ( );
	void TurnVFXOff ( );
	void TurnVFXOn ( );
	void OnUpdate ( float DeltaSeconds );
	void OnApplied ( );
};

// Class SFXGameContent.SFXPowerCustomAction_DefensiveShield
// 0x0077 (0x0838 - 0x07C1)
class USFXPowerCustomAction_DefensiveShield : public USFXPowerCustomAction
{
public:
	struct FPowerData                                  DamageReduction;                                  		// 0x07C4 (0x0034) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  EncumbrancePenalty;                               		// 0x07F8 (0x0034) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	class URvrClientEffectInterface*                   CE_ArmorCrustTemplate;                            		// 0x082C (0x0008) [0x0000000000000000]              
	unsigned long                                      bRemoveArmorApplyCooldown : 1;                    		// 0x0834 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void RestoreSaveState ( );
	bool eventShouldUsePower ( class AActor* Target, FString* sOptionalInfo );
	void DoJoinInProgress ( );
	bool CanUsePower ( class AActor* Target );
	void RecalculateAllPowerData ( unsigned long bReset );
	void ResetPower ( );
	void ClientDoPowerSubsequentImpact ( class AActor* oActor, int CustomActionReactionType, float Duration, int ImpactCount, float Delay, unsigned long DoCallback );
	void TryApplyArmor ( );
	void SetupEffect ( class USFXGameEffect_DefensiveArmor* Effect );
	void ApplyArmor ( );
	void RemoveArmor ( );
	bool OnImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector const& HitLocation, struct FVector const& HitNormal );
};

// Class SFXGameContent.SFXGameEffect_HenchmanArmorBonus_PowerCooldownBonus
// 0x0000 (0x00B0 - 0x00B0)
class USFXGameEffect_HenchmanArmorBonus_PowerCooldownBonus : public USFXGameEffect_PowerBonus_Cooldown
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXGameEffect_HenchmanArmorBonus_PowerDamageBonus
// 0x0000 (0x00B0 - 0x00B0)
class USFXGameEffect_HenchmanArmorBonus_PowerDamageBonus : public USFXGameEffect_PowerBonus_Damage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXGameEffect_OverloadChain
// 0x00BE (0x0150 - 0x0092)
class USFXGameEffect_OverloadChain : public USFXGameEffect
{
public:
	TArray<class AActor*>                              AffectedActors;                                   		// 0x0094 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      NormalDamageType;                                 		// 0x00A4 (0x0008) [0x0000000000000000]              
	class UClass*                                      RobotDamageType;                                  		// 0x00AC (0x0008) [0x0000000000000000]              
	class UClass*                                      OrganicRagdollDamageType;                         		// 0x00B4 (0x0008) [0x0000000000000000]              
	class UClass*                                      ImpactControllerRumble;                           		// 0x00BC (0x0008) [0x0000000000000000]              
	class UClass*                                      ImpactCameraShake;                                		// 0x00C4 (0x0008) [0x0000000000000000]              
	struct FVector                                     DamageOrigin;                                     		// 0x00CC (0x000C) [0x0000000000000000]              
	class AActor*                                      Target;                                           		// 0x00D8 (0x0008) [0x0000000000000000]              
	class USFXPowerCustomAction_Overload*              Power;                                            		// 0x00E0 (0x0008) [0x1000000000000000]              
	class ABioPawn*                                    Caster;                                           		// 0x00E8 (0x0008) [0x0000000000000000]              
	class AActor*                                      LastHitActor;                                     		// 0x00F0 (0x0008) [0x0000000000000000]              
	class UParticleSystemComponent*                    PSC_Beam;                                         		// 0x00F8 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct SFXName                                     BeamAttachBoneName;                               		// 0x0100 (0x0008) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_ImpactTemplate;                                		// 0x0108 (0x0008) [0x0000000000000000]              
	class UWwiseEvent*                                 BeamSound;                                        		// 0x0110 (0x0008) [0x0000000000000000]              
	int                                                NumChargesLeft;                                   		// 0x0118 (0x0004) [0x0000000000000000]              
	float                                              MaxJumpDistance;                                  		// 0x011C (0x0004) [0x0000000000000000]              
	float                                              JumpDelay;                                        		// 0x0120 (0x0004) [0x0000000000000000]              
	float                                              JumpTimer;                                        		// 0x0124 (0x0004) [0x0000000000000000]              
	int                                                RagdollOrganics;                                  		// 0x0128 (0x0004) [0x0000000000000000]              
	float                                              Damage;                                           		// 0x012C (0x0004) [0x0000000000000000]              
	int                                                CumulativeHits;                                   		// 0x0130 (0x0004) [0x0000000000000000]              
	float                                              DamageLossPerHit;                                 		// 0x0134 (0x0004) [0x0000000000000000]              
	float                                              Force;                                            		// 0x0138 (0x0004) [0x0000000000000000]              
	float                                              OrganicDamagePct;                                 		// 0x013C (0x0004) [0x0000000000000000]              
	float                                              ElectricComboDuration;                            		// 0x0140 (0x0004) [0x0000000000000000]              
	float                                              ShieldRegenPenalty;                               		// 0x0144 (0x0004) [0x0000000000000000]              
	float                                              ShieldRegenPenaltyDuration;                       		// 0x0148 (0x0004) [0x0000000000000000]              
	unsigned long                                      bEffectDone : 1;                                  		// 0x014C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bBeamActive : 1;                                  		// 0x014C (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void OnRemoved ( );
	bool ImpactAdditionalTarget ( class AActor* oActor );
	void SelectAndImpactNextTarget ( );
	void OnUpdate ( float DeltaSeconds );
	void PlayBeamEffect ( class UParticleSystemComponent* PS, struct FVector const& TargetLocation );
	void OnApplied ( );
};

// Class SFXGameContent.SFXPowerCustomAction_Overload
// 0x00A7 (0x0868 - 0x07C1)
class USFXPowerCustomAction_Overload : public USFXPowerCustomAction
{
public:
	struct FPowerData                                  NumCharges;                                       		// 0x07C4 (0x0034) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  MaxJumpDistance;                                  		// 0x07F8 (0x0034) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	class AActor*                                      LastHitActor;                                     		// 0x082C (0x0008) [0x0000000000002000]              ( CPF_Transient )
	class URvrClientEffectInterface*                   CE_HitWallTemplate;                               		// 0x0834 (0x0008) [0x0000000000000000]              
	float                                              Evolve_DamageBonus1;                              		// 0x083C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_DamageBonus2;                              		// 0x0840 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                Evolve_NumChargeBonus1;                           		// 0x0844 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                Evolve_NumChargeBonus2;                           		// 0x0848 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_CooldownBonus;                             		// 0x084C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_ShieldDamageBonus;                         		// 0x0850 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              ShieldRegenPenalty;                               		// 0x0854 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              ShieldRegenPenaltyDuration;                       		// 0x0858 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              OrganicDamageMultiplier;                          		// 0x085C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              JumpDelay;                                        		// 0x0860 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              DamageLossPerHit;                                 		// 0x0864 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void PopulatePowerStatBarEvolves ( );
	void ApplyBonus ( struct SFXName Parameter, class USFXGameEffect* Bonus, unsigned long bRemove );
	void RecalculateAllPowerData ( unsigned long bReset );
	void EvolvePower ( unsigned char choice );
	bool ShouldUsePower ( class AActor* Target, FString* sOptionalInfo );
	void ClientDoPowerSubsequentImpact ( class AActor* oActor, int CustomActionReactionType, float Duration, int ImpactCount, float Delay, unsigned long DoCallback );
	void TestAchievement ( class AActor* oTarget );
	class USFXGameEffect_OverloadChain* CreateOverloadChainEffect ( class USFXModule_GameEffectManager* oManager );
	bool OnImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector const& HitLocation, struct FVector const& HitNormal );
	float GetImpactForce ( class AActor* oImpacted );
	float GetImpactDamage ( class AActor* oImpacted, class UClass** DamageType );
	void OnPowerDetonated ( struct FVector const& HitLocation, struct FVector const& HitNormal, class ASFXProjectile_PowerCustomAction* oProjectile, class AActor* HitActor );
};

// Class SFXGameContent.SFXGameEffect_Reave
// 0x0000 (0x00A0 - 0x00A0)
class USFXGameEffect_Reave : public USFXGameEffect_DamageOverTime
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXPawn_Kaidan
// 0x0000 (0x10A4 - 0x10A4)
class ASFXPawn_Kaidan : public ASFXPawn_Henchman
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXPowerCustomAction_Reave
// 0x00A7 (0x0868 - 0x07C1)
class USFXPowerCustomAction_Reave : public USFXPowerCustomAction
{
public:
	struct FPowerData                                  DamageReduction;                                  		// 0x07C4 (0x0034) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	class UWwiseEvent*                                 HealSound;                                        		// 0x07F8 (0x0008) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_CasterCrustTemplateOrganic;                    		// 0x0800 (0x0008) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_CasterCrustTemplateRobotic;                    		// 0x0808 (0x0008) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_CasterCrustTemplateMiss;                       		// 0x0810 (0x0008) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_TargetCrustTemplateOrganic;                    		// 0x0818 (0x0008) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_TargetCrustTemplateRobotic;                    		// 0x0820 (0x0008) [0x0000000000000000]              
	class UWwiseEvent*                                 ConfirmStartSound;                                		// 0x0828 (0x0008) [0x0000000000000000]              
	class UWwiseEvent*                                 ConfirmStopSound;                                 		// 0x0830 (0x0008) [0x0000000000000000]              
	class UWwiseEvent*                                 HenchmanConfirmStartSound;                        		// 0x0838 (0x0008) [0x0000000000000000]              
	class UWwiseEvent*                                 HenchmanConfirmStopSound;                         		// 0x0840 (0x0008) [0x0000000000000000]              
	float                                              Evolve_DurationBonus;                             		// 0x0848 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_Radius;                                    		// 0x084C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_DamageReductionBonus;                      		// 0x0850 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_RechargeSpeedBonus;                        		// 0x0854 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_DamageBonus;                               		// 0x0858 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_DurationBonus2;                            		// 0x085C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_DamageReductionBonus2;                     		// 0x0860 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_ArmorBarrierBonus;                         		// 0x0864 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void PopulatePowerStatBarEvolves ( );
	void EvolvePower ( unsigned char choice );
	void RecalculateAllPowerData ( unsigned long bReset );
	bool ShouldUsePower ( class AActor* Target, FString* sOptionalInfo );
	void StopSounds ( );
	bool OnImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector const& HitLocation, struct FVector const& HitNormal );
	float GetImpactDamage ( class AActor* oImpacted, class UClass** DamageType );
	void OnPowerDetonated ( struct FVector const& HitLocation, struct FVector const& HitNormal, class ASFXProjectile_PowerCustomAction* oProjectile, class AActor* HitActor );
};

// Class SFXGameContent.SFXPowerCustomAction_CryoBlast
// 0x010F (0x08D0 - 0x07C1)
class USFXPowerCustomAction_CryoBlast : public USFXPowerCustomAction
{
public:
	struct FPowerData                                  ArmorWeakness;                                    		// 0x07C4 (0x0034) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  SpeedReduction;                                   		// 0x07F8 (0x0034) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  FreezeExplodeRadius;                              		// 0x082C (0x0034) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  DamageTakenBonus;                                 		// 0x0860 (0x0034) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	class URvrClientEffectInterface*                   CE_HalfFrozenTemplate;                            		// 0x0894 (0x0008) [0x0000000000000000]              
	class UWwiseEvent*                                 FreezeExplosionSound;                             		// 0x089C (0x0008) [0x0000000000000000]              
	float                                              SpeedReductionDurationMult;                       		// 0x08A4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_DurationBonus;                             		// 0x08A8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_RadiusBonus;                               		// 0x08AC (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_SpeedReductionBonus;                       		// 0x08B0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_CooldownBonus;                             		// 0x08B4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_FrozenDamageBonus;                         		// 0x08B8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_FreezeExplodeDurationMultiplier;           		// 0x08BC (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_ArmorWeaknessBonus;                        		// 0x08C0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_DamageTakenBonus;                          		// 0x08C4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              TimeDilationMin;                                  		// 0x08C8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              TimeDilationMax;                                  		// 0x08CC (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void PopulatePowerStatBarEvolves ( );
	void ApplyBonus ( struct SFXName Parameter, class USFXGameEffect* Bonus, unsigned long bRemove );
	void EvolvePower ( unsigned char choice );
	void RecalculateAllPowerData ( unsigned long bReset );
	struct FVector GetDefaultClientEffectParams ( );
	bool ShouldUsePower ( class AActor* Target, FString* sOptionalInfo );
	void ClientDoPowerSubsequentImpact ( class AActor* oActor, int CustomActionReactionType, float Duration, int ImpactCount, float Delay, unsigned long DoCallback );
	void OnFrozenPawnDied ( class ABioPawn* oPawn );
	void ApplySlowdownEffect ( class ABioPawn* oPawn, float Duration );
	void ApplyFreezeEffect ( class ABioPawn* oPawn, float Duration, float fDelay, unsigned long bCallbackOnDeath );
	bool OnImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector const& HitLocation, struct FVector const& HitNormal );
};

// Class SFXGameContent.SFXPowerCustomAction_Barrier
// 0x013C (0x0974 - 0x0838)
class USFXPowerCustomAction_Barrier : public USFXPowerCustomAction_DefensiveShield
{
public:
	struct FPowerData                                  BlastRadius;                                      		// 0x0838 (0x0034) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  BlastDamage;                                      		// 0x086C (0x0034) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  BlastForce;                                       		// 0x08A0 (0x0034) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  BlastLiftDuration;                                		// 0x08D4 (0x0034) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	class UClass*                                      BlastDamageType;                                  		// 0x0908 (0x0008) [0x0000000000000000]              
	class UClass*                                      RumbleClass;                                      		// 0x0910 (0x0008) [0x0000000000000000]              
	class UClass*                                      ScreenShakeClass;                                 		// 0x0918 (0x0008) [0x0000000000000000]              
	struct FAreaEffectParameters                       BlastParameters;                                  		// 0x0920 (0x0020) [0x0000000000004000]              ( CPF_Config )
	class URvrClientEffectInterface*                   CE_BlastEffect;                                   		// 0x0940 (0x0008) [0x0000000000000000]              
	class UWwiseEvent*                                 BlastSound;                                       		// 0x0948 (0x0008) [0x0000000000000000]              
	float                                              Evolve_DamageReductionBonus1;                     		// 0x0950 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_DamageReductionBonus2;                     		// 0x0954 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_BlastDamageBonus;                          		// 0x0958 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_ShieldRegenBonus;                          		// 0x095C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_PowerDamageBonus;                          		// 0x0960 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_EncumbranceBonus;                          		// 0x0964 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                BlastMaxTargets;                                  		// 0x0968 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              BlastDelay;                                       		// 0x096C (0x0004) [0x0000000000000000]              
	float                                              PostBlastEndAnimDelay;                            		// 0x0970 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void PopulatePowerStatBarEvolves ( );
	void ApplyBonus ( struct SFXName Parameter, class USFXGameEffect* Bonus, unsigned long bRemove );
	void EvolvePower ( unsigned char choice );
	void RecalculateAllPowerData ( unsigned long bReset );
	bool OnBlastImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector const& HitLocation, struct FVector const& HitNormal );
	void ClientDoPowerSubsequentImpact ( class AActor* oActor, int CustomActionReactionType, float Duration, int ImpactCount, float Delay, unsigned long DoCallback );
	void DoBlast ( );
	void RemoveArmor ( );
	void StartPowerCooldown ( );
	void ApplyArmor ( );
	void StartCustomAction ( );
};

// Class SFXGameContent.SFXPowerCustomAction_HenchmanPassive
// 0x00D0 (0x0894 - 0x07C4)
class USFXPowerCustomAction_HenchmanPassive : public USFXPowerCustomAction_PassivePower
{
public:
	struct FPowerData                                  HealthShieldBonus;                                		// 0x07C4 (0x0034) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FPowerData                                  WeaponDamageBonus;                                		// 0x07F8 (0x0034) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FPowerData                                  PowerDamageBonus;                                 		// 0x082C (0x0034) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FPowerData                                  PowerCooldownBonus;                               		// 0x0860 (0x0034) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void RecalculateAllPowerData ( unsigned long bReset );
	void ApplyGlobalBonus ( );
};

// Class SFXGameContent.SFXPowerCustomAction_KaidenPassive
// 0x0018 (0x08AC - 0x0894)
class USFXPowerCustomAction_KaidenPassive : public USFXPowerCustomAction_HenchmanPassive
{
public:
	float                                              Evolve_WeaponDamageBonus;                         		// 0x0894 (0x0004) [0x0000000000000000]              
	float                                              Evolve_HealthShieldBonus;                         		// 0x0898 (0x0004) [0x0000000000000000]              
	float                                              Evolve_BioticPowerDamageBonus;                    		// 0x089C (0x0004) [0x0000000000000000]              
	float                                              Evolve_TechPowerDamageBonus;                      		// 0x08A0 (0x0004) [0x0000000000000000]              
	float                                              Evolve_SquadPowerDamageBonus;                     		// 0x08A4 (0x0004) [0x0000000000000000]              
	float                                              Evolve_SquadShieldRechargeBonus;                  		// 0x08A8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void PopulatePowerStatBarEvolves ( );
	void EvolvePower ( unsigned char choice );
	void ResetPower ( );
	void ApplyGlobalBonus ( );
};

// Class SFXGameContent.SFXShield_Energy
// 0x0002 (0x03E8 - 0x03E6)
class ASFXShield_Energy : public ASFXShield_Base
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_HenchmanHeavyMelee
// 0x0002 (0x0140 - 0x013E)
class USFXCustomAction_HenchmanHeavyMelee : public USFXCustomAction_SingleAnim
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_Carnage
// 0x0003 (0x0138 - 0x0135)
class USFXDamageType_Carnage : public USFXDamageType_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_Carnage_DoT
// 0x0000 (0x0138 - 0x0138)
class USFXDamageType_Carnage_DoT : public USFXDamageType_Carnage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_Carnage_Improved
// 0x0000 (0x0138 - 0x0138)
class USFXDamageType_Carnage_Improved : public USFXDamageType_Carnage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_Carnage_Improved_DoT
// 0x0000 (0x0138 - 0x0138)
class USFXDamageType_Carnage_Improved_DoT : public USFXDamageType_Carnage_Improved
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_Carnage_Ragdoll
// 0x0003 (0x013C - 0x0139)
class USFXDamageType_Carnage_Ragdoll : public USFXDamageType_Power_Ragdoll
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_Carnage_Ragdoll_DoT
// 0x0000 (0x013C - 0x013C)
class USFXDamageType_Carnage_Ragdoll_DoT : public USFXDamageType_Carnage_Ragdoll
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_Carnage_Ragdoll_Improved
// 0x0000 (0x013C - 0x013C)
class USFXDamageType_Carnage_Ragdoll_Improved : public USFXDamageType_Carnage_Ragdoll
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_Carnage_Ragdoll_Improved_DoT
// 0x0000 (0x013C - 0x013C)
class USFXDamageType_Carnage_Ragdoll_Improved_DoT : public USFXDamageType_Carnage_Ragdoll_Improved
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_ConcussiveShot
// 0x0003 (0x0138 - 0x0135)
class USFXDamageType_ConcussiveShot : public USFXDamageType_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_ConcussiveShot_Incendiary
// 0x0000 (0x0138 - 0x0138)
class USFXDamageType_ConcussiveShot_Incendiary : public USFXDamageType_ConcussiveShot
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_FragGrenade
// 0x0003 (0x0138 - 0x0135)
class USFXDamageType_FragGrenade : public USFXDamageType_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_FragGrenade_Armor
// 0x0000 (0x0138 - 0x0138)
class USFXDamageType_FragGrenade_Armor : public USFXDamageType_FragGrenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_FragGrenade_Shields
// 0x0000 (0x0138 - 0x0138)
class USFXDamageType_FragGrenade_Shields : public USFXDamageType_FragGrenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_IncendiaryAmmo
// 0x0000 (0x0138 - 0x0138)
class USFXDamageType_IncendiaryAmmo : public USFXDamageType_Power_Fire
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_IncendiaryAmmoImproved
// 0x0000 (0x0138 - 0x0138)
class USFXDamageType_IncendiaryAmmoImproved : public USFXDamageType_IncendiaryAmmo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXGameEffect_AmmoPower
// 0x0042 (0x00D4 - 0x0092)
class USFXGameEffect_AmmoPower : public USFXGameEffect
{
public:
	class UParticleSystem*                             HologramTemplate;                                 		// 0x0094 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             IconTemplate;                                     		// 0x009C (0x0008) [0x0000000000000000]              
	class ASFXWeapon*                                  OwnerWeapon;                                      		// 0x00A4 (0x0008) [0x0000000000000000]              
	class ABioPawn*                                    OwnerPawn;                                        		// 0x00AC (0x0008) [0x0000000000000000]              
	class UWwiseEvent*                                 NormalImpactSound;                                		// 0x00B4 (0x0008) [0x0000000000000000]              
	class UWwiseEvent*                                 WeaponFireSound;                                  		// 0x00BC (0x0008) [0x0000000000000000]              
	class USFXPowerCustomAction_AmmoPower*             Power;                                            		// 0x00C4 (0x0008) [0x1000000000000000]              
	float                                              BulletsPerSecond;                                 		// 0x00CC (0x0004) [0x0000000000000000]              
	unsigned long                                      AddedByPlayer : 1;                                		// 0x00D0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bInCinematic : 1;                                 		// 0x00D0 (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void eventOnUpdate ( float DeltaSeconds );
	void OnWeaponUnequip ( class ASFXWeapon* Weapon );
	void OnWeaponEquip ( class ASFXWeapon* Weapon );
	void OnWeaponReload ( class ASFXWeapon* Weapon );
	float GetDamageVocProbabilityMod ( );
	void OnWeaponImpact ( class ASFXWeapon* Weapon, struct FImpactInfo const& Impact );
	void OnRemoved ( );
	float GetBulletsPerSecond ( class ASFXWeapon* Weapon );
	float GetWeaponDamage ( class ASFXWeapon* Weapon, struct FImpactInfo const& Impact );
	class AActor* GetHitTarget ( struct FImpactInfo const& Impact );
	void SetupFromWeapon ( );
	void OnApplied ( );
};

// Class SFXGameContent.SFXPowerCustomAction_AmmoPower
// 0x0088 (0x084C - 0x07C4)
class USFXPowerCustomAction_AmmoPower : public USFXPowerCustomAction_AmmoPowerBase
{
public:
	class UClass*                                      WeaponPowerEffectClass;                           		// 0x07C4 (0x0008) [0x0000000000000000]              
	class UClass*                                      ConcussiveShotDamageType;                         		// 0x07CC (0x0008) [0x0000000000000000]              
	struct FGuid                                       OmniToolGuid;                                     		// 0x07D4 (0x0010) [0x0000000000000000]              
	class UStaticMesh*                                 oTracer;                                          		// 0x07E4 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             oImpactVFX;                                       		// 0x07EC (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             oMuzzleVFX;                                       		// 0x07F4 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             oMuzzleLoopVFX;                                   		// 0x07FC (0x0008) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_ConcussiveShotImpact;                          		// 0x0804 (0x0008) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_ConcussiveShotProjectile;                      		// 0x080C (0x0008) [0x0000000000000000]              
	class UWwiseEvent*                                 ConcussiveShotImpactSound;                        		// 0x0814 (0x0008) [0x0000000000000000]              
	class UWwiseEvent*                                 LoadAmmoPowerSound;                               		// 0x081C (0x0008) [0x0000000000000000]              
	class UWwiseEvent*                                 HenchmanLoadAmmoPowerSound;                       		// 0x0824 (0x0008) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_OmniTool;                                      		// 0x082C (0x0008) [0x0000000000000000]              
	class ABioPawn*                                    DelayedSetWeaponPowerTarget;                      		// 0x0834 (0x0008) [0x1000000000000000]              
	float                                              SquadEffectiveness;                               		// 0x083C (0x0004) [0x0000000000000000]              
	int                                                NotRecommended_HeavyWeaponEquipped;               		// 0x0840 (0x0004) [0x0000000000000000]              
	float                                              OmniToolDuration;                                 		// 0x0844 (0x0004) [0x0000000000000000]              
	unsigned long                                      bModifyTracer : 1;                                		// 0x0848 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bModifyImpactVFX : 1;                             		// 0x0848 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bModifyMuzzle : 1;                                		// 0x0848 (0x0004) [0x0000000000000000] [0x00000004] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void DelayedSetWeaponPower ( );
	void ClientDoCustomActionImpact ( class AActor* oActor, int ImpactCount, unsigned long bFirstTarget, struct FVector const& HitLocation, struct FVector const& HitNormal, int CustomActionReactionType );
	void DoJoinInProgress ( );
	void SetupEffect ( class USFXGameEffect_AmmoPower* Effect, class ABioPawn* oPawn );
	void OnPowerRankIncreased ( );
	bool ShouldUsePower ( class AActor* Target, FString* sOptionalInfo );
	void DoConcussiveShotSpecialImpact ( class AActor* oImpacted, float ImpactEffectDuration );
	void ClientDoPowerSubsequentImpact ( class AActor* oActor, int CustomActionReactionType, float Duration, int ImpactCount, float Delay, unsigned long DoCallback );
	void ReplicateConcussiveShotSpecialImpact ( class ABioPawn* oImpacted, float DurationOfEffect );
	void ConcussiveShotCustomImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector const& HitLocation, struct FVector const& HitNormal );
	void ApplyPowerEffects ( class ABioPawn* oPawn, class ASFXWeapon* oWeapon );
	bool SetWeaponPower ( class ABioPawn* oPawn, class ASFXWeapon* oWeapon, unsigned long bOverrideCurrentPower );
	void DeferedSetWeaponPower ( );
	bool OnImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector const& HitLocation, struct FVector const& HitNormal );
	void ReloadAmmoPower ( class ABioPawn* Target, class ASFXWeapon* Weapon );
	void StopOmniTool ( );
	void StartCustomAction ( );
	bool CanUsePower ( class AActor* oTarget );
	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
};

// Class SFXGameContent.SFXGameEffect_FireDeath
// 0x0000 (0x00B4 - 0x00B4)
class USFXGameEffect_FireDeath : public USFXGameEffect_DeathEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXGameEffect_HenchmanArmorBonus_HealthBonus
// 0x0000 (0x009C - 0x009C)
class USFXGameEffect_HenchmanArmorBonus_HealthBonus : public USFXGameEffect_HealthPercentBonus
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXGameEffect_HenchmanArmorBonus_ShieldBonus
// 0x0000 (0x009C - 0x009C)
class USFXGameEffect_HenchmanArmorBonus_ShieldBonus : public USFXGameEffect_ShieldPercentBonus
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXGameEffect_IncendiaryAmmo
// 0x0038 (0x010C - 0x00D4)
class USFXGameEffect_IncendiaryAmmo : public USFXGameEffect_AmmoPower
{
public:
	class UClass*                                      DamageType;                                       		// 0x00D4 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             PS_FlameEffect;                                   		// 0x00DC (0x0008) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	class UParticleSystem*                             PS_FireSpreadEffect;                              		// 0x00E4 (0x0008) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	float                                              AreaExplosionChance;                              		// 0x00EC (0x0004) [0x0000000000000000]              
	float                                              Damage;                                           		// 0x00F0 (0x0004) [0x0000000000000000]              
	float                                              DoTDuration;                                      		// 0x00F4 (0x0004) [0x0000000000000000]              
	float                                              SpareAmmoBonus;                                   		// 0x00F8 (0x0004) [0x0000000000000000]              
	float                                              HeadShotDamageBonus;                              		// 0x00FC (0x0004) [0x0000000000000000]              
	float                                              LastTimeFlameSpawned;                             		// 0x0100 (0x0004) [0x0000000000000000]              
	float                                              MinTimeBetweenFlameSpawns;                        		// 0x0104 (0x0004) [0x0000000000000000]              
	unsigned long                                      bAreaExplosion : 1;                               		// 0x0108 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void AddGameEffects ( class AActor* oTarget );
	float GetDamageVocProbabilityMod ( );
	void OnWeaponImpact ( class ASFXWeapon* Weapon, struct FImpactInfo const& Impact );
	void OnRemoved ( );
	void OnApplied ( );
	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
};

// Class SFXGameContent.SFXPowerCustomAction_IncendiaryAmmo
// 0x00E0 (0x092C - 0x084C)
class USFXPowerCustomAction_IncendiaryAmmo : public USFXPowerCustomAction_AmmoPower
{
public:
	struct FPowerData                                  AreaExplosionRadius;                              		// 0x084C (0x0034) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  AreaExplosionChance;                              		// 0x0880 (0x0034) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  AreaExplosionDamage;                              		// 0x08B4 (0x0034) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FAreaEffectParameters                       AoEParams;                                        		// 0x08E8 (0x0020) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_AmmoIncrease;                              		// 0x0908 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_HeadShotDamage;                            		// 0x090C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_ArmorDamageBonus;                          		// 0x0910 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_DamageBonus;                               		// 0x0914 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_DamageBonus2;                              		// 0x0918 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              PanicChanceIncrease;                              		// 0x091C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              AreaExplosionVFXScale;                            		// 0x0920 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              DoTDuration;                                      		// 0x0924 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              DoTDamage;                                        		// 0x0928 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void PopulatePowerStatBarEvolves ( );
	void ApplyBonus ( struct SFXName Parameter, class USFXGameEffect* Bonus, unsigned long bRemove );
	void RecalculateAllPowerData ( unsigned long bReset );
	void ResetPower ( );
	void EvolvePower ( unsigned char choice );
	class USFXGameEffect_IncendiaryAmmo* GetIncendiaryAmmoEffect ( );
	bool OnActorImpacted ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector const& HitLocation, struct FVector const& HitNormal );
	void DoConcussiveShotSpecialImpact ( class AActor* oImpacted, float ImpactEffectDuration );
	void ConcussiveShotCustomImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector const& HitLocation, struct FVector const& HitNormal );
	void ClientDoPowerSubsequentImpact ( class AActor* oActor, int CustomActionReactionType, float Duration, int ImpactCount, float Delay, unsigned long DoCallback );
	void ClientDoCustomActionImpact ( class AActor* oActor, int ImpactCount, unsigned long bFirstTarget, struct FVector const& HitLocation, struct FVector const& HitNormal, int CustomActionReactionType );
	void DoEvolvedAoEImpact ( struct FImpactInfo const& Impact, class USFXGameEffect_IncendiaryAmmo* Effect );
	void SpawnRandomImpactVFX ( class ABioPawn* Pawn, class UParticleSystem* ImpactParticleSystem, class AActor* inInstigator );
	void SetupEffect ( class USFXGameEffect_AmmoPower* Effect, class ABioPawn* oPawn );
	class UClass* GetDamageType ( );
	void ApplyPowerEffects ( class ABioPawn* oPawn, class ASFXWeapon* oWeapon );
	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
};

// Class SFXGameContent.SFXGameEffect_WeaponVFXChange
// 0x002E (0x00C0 - 0x0092)
class USFXGameEffect_WeaponVFXChange : public USFXGameEffect
{
public:
	class UStaticMesh*                                 Tracer;                                           		// 0x0094 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             oMuzzleVFX;                                       		// 0x009C (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             oMuzzleLoopVFX;                                   		// 0x00A4 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             oImpactVFX;                                       		// 0x00AC (0x0008) [0x0000000000000000]              
	class ASFXWeapon*                                  OwnerWeapon;                                      		// 0x00B4 (0x0008) [0x0000000000000000]              
	unsigned long                                      bModifyTracer : 1;                                		// 0x00BC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bModifyMuzzleFlash : 1;                           		// 0x00BC (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bModifyImpactVFX : 1;                             		// 0x00BC (0x0004) [0x0000000000000000] [0x00000004] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void OnRemoved ( );
	void OnApplied ( );
};

// Class SFXGameContent.SFXPawn_Marine
// 0x0000 (0x10A4 - 0x10A4)
class ASFXPawn_Marine : public ASFXPawn_Henchman
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXPowerCustomAction_FragGrenade
// 0x005C (0x0824 - 0x07C8)
class USFXPowerCustomAction_FragGrenade : public USFXPowerCustomAction_GrenadeBase
{
public:
	struct FPowerData                                  MaxGrenadeBonus;                                  		// 0x07C8 (0x0034) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	class URvrClientEffectInterface*                   CE_GrenadeImpact;                                 		// 0x07FC (0x0008) [0x0000000000000000]              
	float                                              Evolve_DamageBonus;                               		// 0x0804 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_RadiusBonus;                               		// 0x0808 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                Evolve_GrenadeCountBonus;                         		// 0x080C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_ShieldDamageBonus;                         		// 0x0810 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_ArmorDamageBonus;                          		// 0x0814 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_DoTDamage;                                 		// 0x0818 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_DoTDuration;                               		// 0x081C (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                Rank2GrenadeUpgrade;                              		// 0x0820 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void PopulatePowerStatBarEvolves ( );
	struct FVector GetDefaultClientEffectParams ( );
	void RecalculateAllPowerData ( unsigned long bReset );
	void EvolvePower ( unsigned char choice );
	bool OnImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector const& HitLocation, struct FVector const& HitNormal );
	void ApplyGrenadeBonus ( );
	class UClass* GetDamageType ( );
	float GetImpactDamage ( class AActor* oImpacted, class UClass** DamageType );
	void PlayDetonationEffects ( struct FVector const& ImpactLocation, struct FVector const& ImpactNormal, class ASFXProjectile_PowerCustomAction* oProjectile );
};

// Class SFXGameContent.SFXPowerCustomAction_Carnage
// 0x0047 (0x0808 - 0x07C1)
class USFXPowerCustomAction_Carnage : public USFXPowerCustomAction
{
public:
	class URvrClientEffectInterface*                   CE_NormalImpact;                                  		// 0x07C4 (0x0008) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_CarnageDoTTemplate;                            		// 0x07CC (0x0008) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_DeathEffect;                                   		// 0x07D4 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             MuzzleEffect;                                     		// 0x07DC (0x0008) [0x0000000000000000]              
	float                                              MuzzleEffectLifetime;                             		// 0x07E4 (0x0004) [0x0000000000000000]              
	float                                              Evolve_DamageBonus;                               		// 0x07E8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_ImpactRadiusBonus;                         		// 0x07EC (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_RechargeSpeedBonus;                        		// 0x07F0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_DamageBonus2;                              		// 0x07F4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_ArmorDamagePct;                            		// 0x07F8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              InstantDamagePercent;                             		// 0x07FC (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              DoTDamagePercent;                                 		// 0x0800 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              DoTDuration;                                      		// 0x0804 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void PopulatePowerStatBarEvolves ( );
	void EvolvePower ( unsigned char choice );
	bool ShouldUsePower ( class AActor* Target, FString* sOptionalInfo );
	void PlayDetonationEffects ( struct FVector const& ImpactLocation, struct FVector const& ImpactNormal, class ASFXProjectile_PowerCustomAction* oProjectile );
	bool GetProjectileAttachPoint ( struct FVector* AttachPoint );
	void ReleasePower ( );
	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
	bool OnImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector const& HitLocation, struct FVector const& HitNormal );
	float GetTotalDamage ( class AActor* oImpacted, unsigned long bIsDamageOverTime, class UClass** DamageType );
	float GetImpactDamage ( class AActor* oImpacted, class UClass** DamageType );
	bool DoPowerDetonatedForActor ( class AActor* oActor, struct FVector const& HitLocation, struct FVector const& HitNormal, int nImpactCount, unsigned long bFirstTarget, class ASFXProjectile_PowerCustomAction* oProjectile );
};

// Class SFXGameContent.SFXPowerCustomAction_Fortification
// 0x0080 (0x08B8 - 0x0838)
class USFXPowerCustomAction_Fortification : public USFXPowerCustomAction_DefensiveShield
{
public:
	struct FPowerData                                  MeleeDamageBonus;                                 		// 0x0838 (0x0034) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  MeleeDamageBonusDuration;                         		// 0x086C (0x0034) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	float                                              Evolve_DamageReductionBonus1;                     		// 0x08A0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_DamageReductionBonus2;                     		// 0x08A4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_MeleeDamageBonus;                          		// 0x08A8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_ShieldRegenBonus;                          		// 0x08AC (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_PowerDamageBonus;                          		// 0x08B0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_EncumbranceBonus;                          		// 0x08B4 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void PopulatePowerStatBarEvolves ( );
	void EvolvePower ( unsigned char choice );
	void RecalculateAllPowerData ( unsigned long bReset );
	void RemoveArmor ( );
	void StartPowerCooldown ( );
	void ApplyArmor ( );
};

// Class SFXGameContent.SFXPowerCustomAction_JimmyPassive
// 0x001C (0x08B0 - 0x0894)
class USFXPowerCustomAction_JimmyPassive : public USFXPowerCustomAction_HenchmanPassive
{
public:
	float                                              Evolve_HealthShieldBonus;                         		// 0x0894 (0x0004) [0x0000000000000000]              
	float                                              Evolve_WeaponDamageBonus;                         		// 0x0898 (0x0004) [0x0000000000000000]              
	float                                              Evolve_PowerDamageBonus;                          		// 0x089C (0x0004) [0x0000000000000000]              
	float                                              Evolve_ShieldRegenBonus;                          		// 0x08A0 (0x0004) [0x0000000000000000]              
	float                                              Evolve_SquadHealthShieldBonus;                    		// 0x08A4 (0x0004) [0x0000000000000000]              
	float                                              Evolve_HealthShieldBonus2;                        		// 0x08A8 (0x0004) [0x0000000000000000]              
	float                                              Evolve_MeleeDamageBonus;                          		// 0x08AC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void PopulatePowerStatBarEvolves ( );
	void EvolvePower ( unsigned char choice );
	void ResetPower ( );
	void ApplyGlobalBonus ( );
};

// Class SFXGameContent.SFXProjectile_PowerCustomAction_Carnage
// 0x0000 (0x062C - 0x062C)
class ASFXProjectile_PowerCustomAction_Carnage : public ASFXProjectile_PowerCustomAction_SuperSeeking
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXProjectile_PowerCustomAction_FragGrenade
// 0x0000 (0x05F4 - 0x05F4)
class ASFXProjectile_PowerCustomAction_FragGrenade : public ASFXProjectile_PowerCustomAction_Grenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_Shotgun
// 0x0000 (0x0130 - 0x0130)
class USFXDamageType_Shotgun : public USFXDamageType_Weapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXGUI_ShotgunReticle
// 0x0020 (0x00D8 - 0x00B8)
class USFXGUI_ShotgunReticle : public USFXGUI_WeaponReticleBase
{
public:
	float                                              m_aRawBuffer[ 0x3 ];                              		// 0x00B8 (0x000C) [0x0000000000000000]              
	class UGFxValue*                                   CircleReticle;                                    		// 0x00C4 (0x0008) [0x0000000000000000]              
	int                                                m_nCurrentBufferIndex;                            		// 0x00CC (0x0004) [0x0000000000000000]              
	float                                              ReticleOpacity;                                   		// 0x00D0 (0x0004) [0x0000000000000000]              
	float                                              RadiusModifier;                                   		// 0x00D4 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void eventResetReticle ( unsigned long bUnsubscribe );
	void eventTargetCanHitChanged ( unsigned long bInSights );
	void eventUpdate ( float fDeltaT );
	void eventPerformReticleHide ( unsigned long bInstant );
	void eventPerformReticleShow ( unsigned long bInstant );
	void OnReticleLoaded ( );
};

// Class SFXGameContent.SFXWeapon_Shotgun_Katana
// 0x0000 (0x115C - 0x115C)
class ASFXWeapon_Shotgun_Katana : public ASFXWeapon_Shotgun_Base
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
