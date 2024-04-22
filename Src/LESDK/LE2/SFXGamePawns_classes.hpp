/*
#############################################################################################
# Mass Effect 2 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.5_Beta-Rev.60-MELE
# ========================================================================================= #
# File: SFXGamePawns_classes.hpp
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

// Class SFXGamePawns.SFXPawn_Tali
// 0x0000 (0x0B9C - 0x0B9C)
class ASFXPawn_Tali : public ASFXPawn_Henchman
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGamePawns.SFXCharacterClass_Vanguard
// 0x0003 (0x00A8 - 0x00A5)
class USFXCharacterClass_Vanguard : public USFXCharacterClass
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGamePawns.SFXAI_LightMech
// 0x001D (0x07AC - 0x078F)
class ASFXAI_LightMech : public ASFXAI_Core
{
public:
	struct FVector                                     CrawlTargetVector;                                		// 0x0790 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     m_vMoveTargetLocation;                            		// 0x079C (0x000C) [0x0000000000000000]              
	float                                              c_fMaxOffsetFromOriginalLocationSq;               		// 0x07A8 (0x0004) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool CanCustomActionTerminateEarly ( );
	void PeriodicMoveCheck ( );
	void SetMovementSpeed ( );
	void DoSuicideBlast ( );
	void NotifyLimbDetached ( unsigned char ePartGroup );
	void SetLeftArmIKEnabled ( unsigned long bEnabled );
	void NotifyFireLineBlocked ( );
	void Initialize ( );
};

// Class SFXGamePawns.SFXAI_Turret
// 0x0001 (0x0790 - 0x078F)
class ASFXAI_Turret : public ASFXAI_Core
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void Initialize ( );
};

// Class SFXGamePawns.SFXAI_MechanicalTurret
// 0x0000 (0x0790 - 0x0790)
class ASFXAI_MechanicalTurret : public ASFXAI_Turret
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void Initialize ( );
	struct FVector GetAimLocation ( int EnemyIdx, struct FVector StartLoc );
};

// Class SFXGamePawns.SFXAI_MechDog
// 0x003D (0x07CC - 0x078F)
class ASFXAI_MechDog : public ASFXAI_Core
{
public:
	struct FVector                                     m_vMoveTargetLocation;                            		// 0x0790 (0x000C) [0x0000000000000000]              
	class UWwiseEvent*                                 AboutToBiteGrowl;                                 		// 0x079C (0x0008) [0x0000000000000000]              
	class UWwiseEvent*                                 TargetAcquiredHowl;                               		// 0x07A4 (0x0008) [0x0000000000000000]              
	class UWwiseEvent*                                 ClosingOnTargetGrowl;                             		// 0x07AC (0x0008) [0x0000000000000000]              
	float                                              c_fMaxOffsetFromOriginalLocationSq;               		// 0x07B4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              fMeleeRange;                                      		// 0x07B8 (0x0004) [0x0000000000000000]              
	float                                              fGrowlRange;                                      		// 0x07BC (0x0004) [0x0000000000000000]              
	float                                              fFarRange;                                        		// 0x07C0 (0x0004) [0x0000000000000000]              
	float                                              fDistToTarget;                                    		// 0x07C4 (0x0004) [0x0000000000000000]              
	unsigned long                                      bHasHowled : 1;                                   		// 0x07C8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bWantsToGrowl : 1;                                		// 0x07C8 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bBitTarget : 1;                                 		// 0x07C8 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bHasBitten : 1;                                   		// 0x07C8 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      m_bSniffed : 1;                                   		// 0x07C8 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      m_bShouldRun : 1;                                 		// 0x07C8 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      m_bNoticedEnemies : 1;                            		// 0x07C8 (0x0004) [0x0000000000000000] [0x00000040] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool SelectTarget ( );
	void SetMovementSpeed ( );
	void StartRunning ( );
	void MechDogRun ( );
	void NotifyTakeHit ( class AController* InstigatedBy, struct FVector HitLocation, int Damage, class UClass* DamageType, struct FVector Momentum );
	void PeriodicMoveCheck ( );
	struct SFXName GetCustomActionState ( unsigned char eAction );
	void CheckForGrowl ( );
	bool IsWithinMeleeRange ( );
	void Initialize ( );
};

// Class SFXGamePawns.SFXPawn_AssaultDrone
// 0x0000 (0x0B64 - 0x0B64)
class ASFXPawn_AssaultDrone : public ASFXPawn
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool CanBeBioticCharged ( );
};

// Class SFXGamePawns.SFXPawn_LightMech
// 0x0000 (0x0B64 - 0x0B64)
class ASFXPawn_LightMech : public ASFXPawn
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool CanPlayDeathEffect ( class USFXGameEffect* GE );
};

// Class SFXGamePawns.SFXPawn_MechDog
// 0x0000 (0x0B64 - 0x0B64)
class ASFXPawn_MechDog : public ASFXPawn
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool CanPlayDeathEffect ( class USFXGameEffect* GE );
};

// Class SFXGamePawns.SFXPawn_RocketDrone
// 0x0000 (0x0B64 - 0x0B64)
class ASFXPawn_RocketDrone : public ASFXPawn
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool CanBeBioticCharged ( );
};

// Class SFXGamePawns.SFXPawn_Miranda
// 0x0000 (0x0B9C - 0x0B9C)
class ASFXPawn_Miranda : public ASFXPawn_Henchman
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGamePawns.SFXPawn_Jacob
// 0x0000 (0x0B9C - 0x0B9C)
class ASFXPawn_Jacob : public ASFXPawn_Henchman
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
