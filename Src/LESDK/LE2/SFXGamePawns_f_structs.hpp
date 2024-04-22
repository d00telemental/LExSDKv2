/*
#############################################################################################
# Mass Effect 2 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.5_Beta-Rev.60-MELE
# ========================================================================================= #
# File: SFXGamePawns_f_structs.hpp
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

// Function SFXGamePawns.SFXAI_LightMech.CanCustomActionTerminateEarly
// [0x00020002] 
struct ASFXAI_LightMech_execCanCustomActionTerminateEarly_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGamePawns.SFXAI_LightMech.PeriodicMoveCheck
// [0x00020002] 
struct ASFXAI_LightMech_execPeriodicMoveCheck_Parms
{
	// float                                           vDistSq;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SFXGamePawns.SFXAI_LightMech.SetMovementSpeed
// [0x00020002] 
struct ASFXAI_LightMech_execSetMovementSpeed_Parms
{
	// float                                           fDistanceSquared;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SFXGamePawns.SFXAI_LightMech.DoSuicideBlast
// [0x00020002] 
struct ASFXAI_LightMech_execDoSuicideBlast_Parms
{
};

// Function SFXGamePawns.SFXAI_LightMech.NotifyLimbDetached
// [0x00020002] 
struct ASFXAI_LightMech_execNotifyLimbDetached_Parms
{
	unsigned char                                      ePartGroup;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGamePawns.SFXAI_LightMech.SetLeftArmIKEnabled
// [0x00020002] 
struct ASFXAI_LightMech_execSetLeftArmIKEnabled_Parms
{
	unsigned long                                      bEnabled;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class USkelControlLimb*                         IKNode;                                           		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function SFXGamePawns.SFXAI_LightMech.NotifyFireLineBlocked
// [0x00020002] 
struct ASFXAI_LightMech_execNotifyFireLineBlocked_Parms
{
};

// Function SFXGamePawns.SFXAI_LightMech.Initialize
// [0x00020002] 
struct ASFXAI_LightMech_execInitialize_Parms
{
};

// Function SFXGamePawns.SFXAI_Turret.Initialize
// [0x00020002] 
struct ASFXAI_Turret_execInitialize_Parms
{
};

// Function SFXGamePawns.SFXAI_MechanicalTurret.Initialize
// [0x00020002] 
struct ASFXAI_MechanicalTurret_execInitialize_Parms
{
};

// Function SFXGamePawns.SFXAI_MechanicalTurret.GetAimLocation
// [0x00820002] 
struct ASFXAI_MechanicalTurret_execGetAimLocation_Parms
{
	int                                                EnemyIdx;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     StartLoc;                                         		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x0010 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  vAimLoc;                                          		// 0x001C (0x000C) [0x0000000000000000]              
	// class ABioPawn*                                 oEnemyPawn;                                       		// 0x0028 (0x0008) [0x0000000000000000]              
};

// Function SFXGamePawns.SFXAI_MechDog.SelectTarget
// [0x00020002] 
struct ASFXAI_MechDog_execSelectTarget_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bSelectTarget;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SFXGamePawns.SFXAI_MechDog.SetMovementSpeed
// [0x00020002] 
struct ASFXAI_MechDog_execSetMovementSpeed_Parms
{
	// float                                           fDistanceSquared;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SFXGamePawns.SFXAI_MechDog.StartRunning
// [0x00020002] 
struct ASFXAI_MechDog_execStartRunning_Parms
{
};

// Function SFXGamePawns.SFXAI_MechDog.MechDogRun
// [0x00020002] 
struct ASFXAI_MechDog_execMechDogRun_Parms
{
	// class ABioAiController*                         oAI;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	// class ASFXAI_MechDog*                           oMechDog;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SFXGamePawns.SFXAI_MechDog.NotifyTakeHit
// [0x00020002] 
struct ASFXAI_MechDog_execNotifyTakeHit_Parms
{
	class AController*                                 InstigatedBy;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                Damage;                                           		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0018 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0020 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGamePawns.SFXAI_MechDog.PeriodicMoveCheck
// [0x00020002] 
struct ASFXAI_MechDog_execPeriodicMoveCheck_Parms
{
	// float                                           vDistSq;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SFXGamePawns.SFXAI_MechDog.GetCustomActionState
// [0x00020002] 
struct ASFXAI_MechDog_execGetCustomActionState_Parms
{
	unsigned char                                      eAction;                                          		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct SFXName                                     ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGamePawns.SFXAI_MechDog.CheckForGrowl
// [0x00020002] 
struct ASFXAI_MechDog_execCheckForGrowl_Parms
{
};

// Function SFXGamePawns.SFXAI_MechDog.IsWithinMeleeRange
// [0x00020002] 
struct ASFXAI_MechDog_execIsWithinMeleeRange_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           vDistSq;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SFXGamePawns.SFXAI_MechDog.Initialize
// [0x00020002] 
struct ASFXAI_MechDog_execInitialize_Parms
{
	// class USFXPower*                                oPower;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGamePawns.SFXPawn_AssaultDrone.CanBeBioticCharged
// [0x00020002] 
struct ASFXPawn_AssaultDrone_execCanBeBioticCharged_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGamePawns.SFXPawn_LightMech.CanPlayDeathEffect
// [0x00020002] 
struct ASFXPawn_LightMech_execCanPlayDeathEffect_Parms
{
	class USFXGameEffect*                              GE;                                               		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGamePawns.SFXPawn_MechDog.CanPlayDeathEffect
// [0x00020002] 
struct ASFXPawn_MechDog_execCanPlayDeathEffect_Parms
{
	class USFXGameEffect*                              GE;                                               		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGamePawns.SFXPawn_RocketDrone.CanBeBioticCharged
// [0x00020002] 
struct ASFXPawn_RocketDrone_execCanBeBioticCharged_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};



#undef LESDK_IN_GENERATED

#ifdef _MSC_VER
	#pragma pack ( pop )
#endif
