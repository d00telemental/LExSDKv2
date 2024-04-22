/*
#############################################################################################
# Mass Effect 2 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.5_Beta-Rev.60-MELE
# ========================================================================================= #
# File: SFXGameContent_Powers_f_structs.hpp
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

// Function SFXGameContent_Powers.SFXPowerScript_PassivePower.RemovePowerBonusEffect
// [0x00020002] 
struct USFXPowerScript_PassivePower_execRemovePowerBonusEffect_Parms
{
	class AActor*                                      oTarget;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      ClassName;                                        		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct SFXName                                     nmCategory;                                       		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      PowerClass;                                       		// 0x0018 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0020 (0x0008) [0x0000000000000000]              
	// class USFXGameEffect_PowerBonus*                Effect;                                           		// 0x0028 (0x0008) [0x0000000000000000]              
	// int                                             nIndex;                                           		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_PassivePower.ApplyPowerBonusEffect
// [0x00020002] 
struct USFXPowerScript_PassivePower_execApplyPowerBonusEffect_Parms
{
	class AActor*                                      oTarget;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      ClassName;                                        		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fEffectValue;                                     		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct SFXName                                     nmCategory;                                       		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      PowerClass;                                       		// 0x001C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0024 (0x0008) [0x0000000000000000]              
	// class USFXGameEffect_PowerBonus*                Effect;                                           		// 0x002C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_PassivePower.ApplyHealthModifier
// [0x00024002] 
struct USFXPowerScript_PassivePower_execApplyHealthModifier_Parms
{
	float                                              fHealthModifier;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Target;                                           		// 0x0004 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXGameContent_Powers.SFXPowerScript_PassivePower.ApplyWeaponDamageModifier
// [0x00024002] 
struct USFXPowerScript_PassivePower_execApplyWeaponDamageModifier_Parms
{
	float                                              fDamageModifier;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Target;                                           		// 0x0004 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXGameContent_Powers.SFXPowerScript_PassivePower.ApplyPowerCooldownModifier
// [0x00024002] 
struct USFXPowerScript_PassivePower_execApplyPowerCooldownModifier_Parms
{
	float                                              fCooldownModifier;                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Target;                                           		// 0x0004 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXGameContent_Powers.SFXPowerScript_PassivePower.ApplyPassiveBonus
// [0x00024002] 
struct USFXPowerScript_PassivePower_execApplyPassiveBonus_Parms
{
	class UClass*                                      EffectClass;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fModifier;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Target;                                           		// 0x000C (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_PassivePower.ApplyGlobalBonus
// [0x00020000] 
struct USFXPowerScript_PassivePower_execApplyGlobalBonus_Parms
{
};

// Function SFXGameContent_Powers.SFXPowerScript_PassivePower.OnSquadMemberAdded
// [0x00020002] 
struct USFXPowerScript_PassivePower_execOnSquadMemberAdded_Parms
{
	class APawn*                                       Pawn;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent_Powers.SFXPowerScript_PassivePower.OnPowersLoaded
// [0x00020002] 
struct USFXPowerScript_PassivePower_execOnPowersLoaded_Parms
{
};

// Function SFXGameContent_Powers.SFXPowerScript_PassivePower.OnPowerRankIncreased
// [0x00020002] 
struct USFXPowerScript_PassivePower_execOnPowerRankIncreased_Parms
{
};

// Function SFXGameContent_Powers.SFXPowerScript_PassivePower.InitializePowerScript
// [0x00020802] ( FUNC_Event )
struct USFXPowerScript_PassivePower_eventInitializePowerScript_Parms
{
};

// Function SFXGameContent_Powers.SFXPowerScript_HenchmanPassive.ApplyGlobalBonus
// [0x00020002] 
struct USFXPowerScript_HenchmanPassive_execApplyGlobalBonus_Parms
{
	// float                                           fHealthIncrease;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           fWeaponDamageIncrease;                            		// 0x0004 (0x0004) [0x0000000000000000]              
	// class USFXPower_HenchmanPassive*                oPassivePower;                                    		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_TaliPassive.ApplyGlobalBonus
// [0x00020002] 
struct USFXPowerScript_TaliPassive_execApplyGlobalBonus_Parms
{
	// class USFXPower_TaliPassive*                    oPassivePower;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	// float                                           DurationBonus;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_CombatDroneDeath.OnImpact
// [0x00820802] ( FUNC_Event )
struct USFXPowerScript_CombatDroneDeath_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ASFXGame*                                 oGame;                                            		// 0x001C (0x0008) [0x0000000000000000]              
	// class ASFXObjectPool*                           oPool;                                            		// 0x0024 (0x0008) [0x0000000000000000]              
	// struct FVector                                  DirectionToSprayParticles;                        		// 0x002C (0x000C) [0x0000000000000000]              
	// class AEmitter*                                 oEmitter;                                         		// 0x0038 (0x0008) [0x0000000000000000]              
	// class ASFXPawn_EngineerCombatDrone*             CombatDrone;                                      		// 0x0040 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_CombatDroneDeath.StartPhase
// [0x00020802] ( FUNC_Event )
struct USFXPowerScript_CombatDroneDeath_eventStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.SFXPowerScript_CombatDroneAttack.ShouldUsePower
// [0x00420002] 
struct USFXPowerScript_CombatDroneAttack_execShouldUsePower_Parms
{
	class AActor*                                      Caster;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Target;                                           		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class FString                                      sOptionalInfo;                                    		// 0x0010 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0020 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.SFXPowerScript_CombatDroneAttack.OnImpact
// [0x00020802] ( FUNC_Event )
struct USFXPowerScript_CombatDroneAttack_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 oPawn;                                            		// 0x001C (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 oCasterPawn;                                      		// 0x0024 (0x0008) [0x0000000000000000]              
	// class ABioWorldInfo*                            pWorldInfo;                                       		// 0x002C (0x0008) [0x0000000000000000]              
	// class ABioPlayerController*                     pController;                                      		// 0x0034 (0x0008) [0x0000000000000000]              
	// class ASFXAI_Core*                              oController;                                      		// 0x003C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_CombatDroneAttack.StartPhase
// [0x00020802] ( FUNC_Event )
struct USFXPowerScript_CombatDroneAttack_eventStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.SFXPawn_EngineerTechDrone.SpawnDeathVFX
// [0x00020002] 
struct ASFXPawn_EngineerTechDrone_execSpawnDeathVFX_Parms
{
	// class ASFXGame*                                 oGame;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// class ASFXObjectPool*                           oPool;                                            		// 0x0008 (0x0008) [0x0000000000000000]              
	// class ASFXEmitter*                              oEmitter;                                         		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPawn_EngineerTechDrone.Died
// [0x00020802] ( FUNC_Event )
struct ASFXPawn_EngineerTechDrone_eventDied_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x001C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 HitPawn;                                          		// 0x0020 (0x0008) [0x0000000000000000]              
	// class USFXPower_CombatDrone_Tech*               TechDronePower;                                   		// 0x0028 (0x0008) [0x0000000000000000]              
	// unsigned long                                   bResult;                                          		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioShieldJackScript.ShouldUsePower
// [0x00420002] 
struct UBioShieldJackScript_execShouldUsePower_Parms
{
	class AActor*                                      Caster;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Target;                                           		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class FString                                      sOptionalInfo;                                    		// 0x0010 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0020 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 oPawn;                                            		// 0x0024 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioShieldJackScript.GetCurrentEnergyShields
// [0x00020002] 
struct UBioShieldJackScript_execGetCurrentEnergyShields_Parms
{
	class ABioPawn*                                    oPawn;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           fEnergyShieldsLeft;                               		// 0x000C (0x0004) [0x0000000000000000]              
	// class ASFXShield_Energy*                        EnergyShield;                                     		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioShieldJackScript.SpawnImpactVFX
// [0x00020002] 
struct UBioShieldJackScript_execSpawnImpactVFX_Parms
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UParticleSystem*                             PS;                                               		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ASFXGame*                                 oGame;                                            		// 0x0014 (0x0008) [0x0000000000000000]              
	// class ASFXObjectPool*                           oPool;                                            		// 0x001C (0x0008) [0x0000000000000000]              
	// class ASFXEmitter*                              oEmitter;                                         		// 0x0024 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioShieldJackScript.OnImpact
// [0x00020802] ( FUNC_Event )
struct UBioShieldJackScript_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 oTargetPawn;                                      		// 0x001C (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 oCasterPawn;                                      		// 0x0024 (0x0008) [0x0000000000000000]              
	// class ASFXShield_Base*                          MyShields;                                        		// 0x002C (0x0008) [0x0000000000000000]              
	// float                                           fEnergyShields;                                   		// 0x0034 (0x0004) [0x0000000000000000]              
	// float                                           fPowerDamage;                                     		// 0x0038 (0x0004) [0x0000000000000000]              
	// float                                           fMachineHealth;                                   		// 0x003C (0x0004) [0x0000000000000000]              
	// float                                           fStealAmount;                                     		// 0x0040 (0x0004) [0x0000000000000000]              
	// class UClass*                                   DamageClass;                                      		// 0x0044 (0x0008) [0x0000000000000000]              
	// class ABioVisualEffect*                         oVisualEffect;                                    		// 0x004C (0x0008) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             CasterManager;                                    		// 0x0054 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioShieldJackScript.StartPhase
// [0x00020802] ( FUNC_Event )
struct UBioShieldJackScript_eventStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.SFXGameEffect_HenchmenIgnorePawn.OnRemoved
// [0x00020002] 
struct USFXGameEffect_HenchmenIgnorePawn_execOnRemoved_Parms
{
	// class ABioAiController*                         Controller;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	// class ABioPlayerController*                     PlayerController;                                 		// 0x0008 (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 PlayerPawn;                                       		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXGameEffect_HenchmenIgnorePawn.OnApplied
// [0x00020002] 
struct USFXGameEffect_HenchmenIgnorePawn_execOnApplied_Parms
{
	// class ABioAiController*                         Controller;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	// class ABioPlayerController*                     PlayerController;                                 		// 0x0008 (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 PlayerPawn;                                       		// 0x0010 (0x0008) [0x0000000000000000]              
	// class ASFXAI_Core*                              AICore;                                           		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioHackingScript.ShouldUsePower
// [0x00420002] 
struct UBioHackingScript_execShouldUsePower_Parms
{
	class AActor*                                      Caster;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Target;                                           		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class FString                                      sOptionalInfo;                                    		// 0x0010 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0020 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 oPawn;                                            		// 0x0024 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioHackingScript.IsHacked
// [0x00020002] 
struct UBioHackingScript_execIsHacked_Parms
{
	class ABioPawn*                                    oPawn;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x000C (0x0008) [0x0000000000000000]              
	// class USFXGameEffect*                           oEffect;                                          		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioHackingScript.RemoveWeakerHack
// [0x00020002] 
struct UBioHackingScript_execRemoveWeakerHack_Parms
{
	class ABioPawn*                                    oPawn;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fNewDuration;                                     		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0010 (0x0008) [0x0000000000000000]              
	// class USFXGameEffect*                           oEffect;                                          		// 0x0018 (0x0008) [0x0000000000000000]              
	// struct SFXName                                  EffectCategory;                                   		// 0x0020 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioHackingScript.UnHackPreviousTargets
// [0x00020002] 
struct UBioHackingScript_execUnHackPreviousTargets_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0008 (0x0008) [0x0000000000000000]              
	// class AActor*                                   oActor;                                           		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioHackingScript.OnImpact
// [0x00020802] ( FUNC_Event )
struct UBioHackingScript_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           Duration;                                         		// 0x001C (0x0004) [0x0000000000000000]              
	// class ABioPawn*                                 oPawn;                                            		// 0x0020 (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 oCasterPawn;                                      		// 0x0028 (0x0008) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0030 (0x0008) [0x0000000000000000]              
	// class USFXGameEffect_GiveShield*                Effect;                                           		// 0x0038 (0x0008) [0x0000000000000000]              
	// float                                           fShieldStrength;                                  		// 0x0040 (0x0004) [0x0000000000000000]              
	// class USFXGameEffect_AIHacking*                 HackingEffect;                                    		// 0x0044 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioHackingScript.StartPhase
// [0x00020802] ( FUNC_Event )
struct UBioHackingScript_eventStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.SFXGameEffect_IgnorePawn.OnRemoved
// [0x00020002] 
struct USFXGameEffect_IgnorePawn_execOnRemoved_Parms
{
	// class ASFXAI_Core*                              oController;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXGameEffect_IgnorePawn.OnApplied
// [0x00020002] 
struct USFXGameEffect_IgnorePawn_execOnApplied_Parms
{
	// class ASFXAI_Core*                              oController;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPawn_EngineerCombatDrone.PlayDeathVocalization
// [0x00020000] 
struct ASFXPawn_EngineerCombatDrone_execPlayDeathVocalization_Parms
{
	class ABioPawn*                                    Killer;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent_Powers.SFXPawn_EngineerCombatDrone.Destroyed
// [0x00820902] ( FUNC_Simulated | FUNC_Event )
struct ASFXPawn_EngineerCombatDrone_eventDestroyed_Parms
{
	// class ASFXGame*                                 oGame;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// class ASFXObjectPool*                           oPool;                                            		// 0x0008 (0x0008) [0x0000000000000000]              
	// struct FVector                                  DirectionToSprayParticles;                        		// 0x0010 (0x000C) [0x0000000000000000]              
	// class AEmitter*                                 oEmitter;                                         		// 0x001C (0x0008) [0x0000000000000000]              
	// class USFXModule_Damage*                        DamageModule;                                     		// 0x0024 (0x0008) [0x0000000000000000]              
	// class ASFXAI_Core*                              oAI;                                              		// 0x002C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPawn_EngineerCombatDrone.Died
// [0x00020802] ( FUNC_Event )
struct ASFXPawn_EngineerCombatDrone_eventDied_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x001C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.SFXPawn_EngineerCombatDrone.SetDroneColor2
// [0x00020002] 
struct ASFXPawn_EngineerCombatDrone_execSetDroneColor2_Parms
{
	struct FVector                                     NewColor;                                         		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent_Powers.SFXPawn_EngineerCombatDrone.SetDroneColor
// [0x00020002] 
struct ASFXPawn_EngineerCombatDrone_execSetDroneColor_Parms
{
	struct FVector                                     NewColor;                                         		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent_Powers.SFXPawn_EngineerCombatDrone.PostBeginPlay
// [0x00020002] 
struct ASFXPawn_EngineerCombatDrone_execPostBeginPlay_Parms
{
};

// Function SFXGameContent_Powers.SFXPawn_EngineerCombatDrone.OnDroneKilled
// [0x00120000] 
struct ASFXPawn_EngineerCombatDrone_execOnDroneKilled_Parms
{
};

// Function SFXGameContent_Powers.SFXPower_CombatDrone.GetHealthMultiplier
// [0x00020002] 
struct USFXPower_CombatDrone_execGetHealthMultiplier_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.BioCombatDroneScript.ShouldUsePower
// [0x00420002] 
struct UBioCombatDroneScript_execShouldUsePower_Parms
{
	class AActor*                                      Caster;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Target;                                           		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class FString                                      sOptionalInfo;                                    		// 0x0010 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0020 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.BioCombatDroneScript.OnDroneKilled
// [0x00020002] 
struct UBioCombatDroneScript_execOnDroneKilled_Parms
{
};

// Function SFXGameContent_Powers.BioCombatDroneScript.DespawnDrone
// [0x00020002] 
struct UBioCombatDroneScript_execDespawnDrone_Parms
{
};

// Function SFXGameContent_Powers.BioCombatDroneScript.OnOwnerDied
// [0x00020002] 
struct UBioCombatDroneScript_execOnOwnerDied_Parms
{
};

// Function SFXGameContent_Powers.BioCombatDroneScript.OnPowerRankIncreased
// [0x00020002] 
struct UBioCombatDroneScript_execOnPowerRankIncreased_Parms
{
};

// Function SFXGameContent_Powers.BioCombatDroneScript.SpawnDrone
// [0x00024002] 
struct UBioCombatDroneScript_execSpawnDrone_Parms
{
	class ABioPawn*                                    oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DroneClass;                                       		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Location;                                         		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    Rotation;                                         		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              HealthMultiplier;                                 		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Lifetime;                                         		// 0x002C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bCustomColor;                                     		// 0x0030 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     CustomColor;                                      		// 0x0034 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bCustomColor2;                                    		// 0x0040 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     CustomColor2;                                     		// 0x0044 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      DroneTarget;                                      		// 0x0050 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class ABioPawn*                                    ReturnValue;                                      		// 0x0058 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXModule_Damage*                        DamageModule;                                     		// 0x0060 (0x0008) [0x0000000000000000]              
	// class ASFXPawn_EngineerCombatDrone*             SFXDrone;                                         		// 0x0068 (0x0008) [0x0000000000000000]              
	// float                                           fBonus;                                           		// 0x0070 (0x0004) [0x0000000000000000]              
	// class USFXPower*                                oPower;                                           		// 0x0074 (0x0008) [0x0000000000000000]              
	// class ASFXAI_Core*                              DroneAI;                                          		// 0x007C (0x0008) [0x0000000000000000]              
	// unsigned long                                   bPlayerSquad;                                     		// 0x0084 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioCombatDroneScript.GetSpawnLocation
// [0x00820002] 
struct UBioCombatDroneScript_execGetSpawnLocation_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  SpawnLocation;                                    		// 0x000C (0x000C) [0x0000000000000000]              
	// class TArray<struct FVector>                    SpawnLocations;                                   		// 0x0018 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class ABioPawn*                                 PlayerPartyTarget;                                		// 0x0028 (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 CasterPawn;                                       		// 0x0030 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioCombatDroneScript.GetBackLocation
// [0x00020002] 
struct UBioCombatDroneScript_execGetBackLocation_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x0008 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.BioCombatDroneScript.GetFrontLocation
// [0x00824002] 
struct UBioCombatDroneScript_execGetFrontLocation_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              YawOffset;                                        		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FRotator                                 Rotation;                                         		// 0x0018 (0x000C) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioCombatDroneScript.IsSafeSpawnLocation
// [0x00C20002] 
struct UBioCombatDroneScript_execIsSafeSpawnLocation_Parms
{
	struct FVector                                     SpawnLocation;                                    		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  FloorLocation;                                    		// 0x0010 (0x000C) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioCombatDroneScript.IsDroneAlive
// [0x00020002] 
struct UBioCombatDroneScript_execIsDroneAlive_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.BioCombatDroneScript.StartPhase
// [0x00820802] ( FUNC_Event )
struct UBioCombatDroneScript_eventStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  vDroneLocation;                                   		// 0x0014 (0x000C) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioCombatDroneScript.CanStartPower
// [0x00020802] ( FUNC_Event )
struct UBioCombatDroneScript_eventCanStartPower_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.BioWeaponPowerScript.ShouldUsePower
// [0x00420002] 
struct UBioWeaponPowerScript_execShouldUsePower_Parms
{
	class AActor*                                      Caster;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Target;                                           		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class FString                                      sOptionalInfo;                                    		// 0x0010 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0020 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class APawn*                                    CasterAsPawn;                                     		// 0x0024 (0x0008) [0x0000000000000000]              
	// class ASFXWeapon*                               Weapon;                                           		// 0x002C (0x0008) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0034 (0x0008) [0x0000000000000000]              
	// class USFXGameEffect*                           Effect;                                           		// 0x003C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioWeaponPowerScript.ApplyPowerEffects
// [0x00020000] 
struct UBioWeaponPowerScript_execApplyPowerEffects_Parms
{
	class ABioPawn*                                    oPawn;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class ASFXWeapon*                                  oWeapon;                                          		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent_Powers.BioWeaponPowerScript.SetWeaponPower
// [0x00020002] 
struct UBioWeaponPowerScript_execSetWeaponPower_Parms
{
	class ABioPawn*                                    oPawn;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class ASFXWeapon*                                  oWeapon;                                          		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bOverrideCurrentPower;                            		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ASFXHeavyWeapon*                          oHeavyWeapon;                                     		// 0x0018 (0x0008) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0020 (0x0008) [0x0000000000000000]              
	// class USFXGameEffect_WeaponVFXChange*           WeaponVFXEffect;                                  		// 0x0028 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioWeaponPowerScript.ReloadAmmoPower
// [0x00020002] 
struct UBioWeaponPowerScript_execReloadAmmoPower_Parms
{
	class ABioPawn*                                    Target;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class ASFXWeapon*                                  Weapon;                                           		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent_Powers.BioWeaponPowerScript.StartPhase
// [0x00020802] ( FUNC_Event )
struct UBioWeaponPowerScript_eventStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 oCasterPawn;                                      		// 0x0014 (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 oSquadMember;                                     		// 0x001C (0x0008) [0x0000000000000000]              
	// class ABioBaseSquad*                            oSquad;                                           		// 0x0024 (0x0008) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioWeaponPowerScript.ApplyToSquadMembers
// [0x00020002] 
struct UBioWeaponPowerScript_execApplyToSquadMembers_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.BioWeaponPowerScript.GetDuration
// [0x00020102] ( FUNC_Simulated )
struct UBioWeaponPowerScript_execGetDuration_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.BioWeaponPowerScript.GetElapsedTime
// [0x00020102] ( FUNC_Simulated )
struct UBioWeaponPowerScript_execGetElapsedTime_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.BioWeaponPowerScript.CanStartPower
// [0x00020802] ( FUNC_Event )
struct UBioWeaponPowerScript_eventCanStartPower_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 CasterAsPawn;                                     		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXGameEffect_AmmoPower.RemoveWeaponHologram
// [0x00020002] 
struct USFXGameEffect_AmmoPower_execRemoveWeaponHologram_Parms
{
};

// Function SFXGameContent_Powers.SFXGameEffect_AmmoPower.EnableWeaponHologram
// [0x00020002] 
struct USFXGameEffect_AmmoPower_execEnableWeaponHologram_Parms
{
};

// Function SFXGameContent_Powers.SFXGameEffect_AmmoPower.OnWeaponUnequip
// [0x00020002] 
struct USFXGameEffect_AmmoPower_execOnWeaponUnequip_Parms
{
	class ASFXWeapon*                                  Weapon;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent_Powers.SFXGameEffect_AmmoPower.OnWeaponEquip
// [0x00020002] 
struct USFXGameEffect_AmmoPower_execOnWeaponEquip_Parms
{
	class ASFXWeapon*                                  Weapon;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent_Powers.SFXGameEffect_AmmoPower.OnWeaponReload
// [0x00020000] 
struct USFXGameEffect_AmmoPower_execOnWeaponReload_Parms
{
	class ASFXWeapon*                                  Weapon;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent_Powers.SFXGameEffect_AmmoPower.GetDamageVocProbabilityMod
// [0x00020002] 
struct USFXGameEffect_AmmoPower_execGetDamageVocProbabilityMod_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.SFXGameEffect_AmmoPower.OnWeaponImpact
// [0x00020002] 
struct USFXGameEffect_AmmoPower_execOnWeaponImpact_Parms
{
	class ASFXWeapon*                                  Weapon;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FImpactInfo                                 Impact;                                           		// 0x0008 (0x0060) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent_Powers.SFXGameEffect_AmmoPower.OnRemoved
// [0x00020002] 
struct USFXGameEffect_AmmoPower_execOnRemoved_Parms
{
	// class ABioPawn*                                 oPawn;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXGameEffect_AmmoPower.OnApplied
// [0x00020002] 
struct USFXGameEffect_AmmoPower_execOnApplied_Parms
{
};

// Function SFXGameContent_Powers.BioCarnageScript.ApplyPowerEffects
// [0x00020002] 
struct UBioCarnageScript_execApplyPowerEffects_Parms
{
	class ABioPawn*                                    oPawn;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class ASFXWeapon*                                  oWeapon;                                          		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0010 (0x0008) [0x0000000000000000]              
	// class USFXGameEffect_IncendiaryAmmo*            oEffect;                                          		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioCarnageScript.OnImpact
// [0x00020802] ( FUNC_Event )
struct UBioCarnageScript_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bSuccess;                                         		// 0x001C (0x0004) [0x0000000000000000]              
	// class APawn*                                    oPawn;                                            		// 0x0020 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioCarnageScript.StartPhase
// [0x00020802] ( FUNC_Event )
struct UBioCarnageScript_eventStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.BioCarnageScript.ApplyToSquadMembers
// [0x00020002] 
struct UBioCarnageScript_execApplyToSquadMembers_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.BioCarnageScript.InitializePowerScript
// [0x00020802] ( FUNC_Event )
struct UBioCarnageScript_eventInitializePowerScript_Parms
{
};

// Function SFXGameContent_Powers.SFXGameEffect_IncendiaryAmmo.CauseAnimatedReaction
// [0x00020002] 
struct USFXGameEffect_IncendiaryAmmo_execCauseAnimatedReaction_Parms
{
	class AActor*                                      oHitActor;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDelay;                                           		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ABioPawn*                                 oPawn;                                            		// 0x000C (0x0008) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0014 (0x0008) [0x0000000000000000]              
	// class USFXGameEffect_DelayedCustomAction*       oEffect;                                          		// 0x001C (0x0008) [0x0000000000000000]              
	// float                                           Random;                                           		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXGameEffect_IncendiaryAmmo.AddGameEffects
// [0x00020002] 
struct USFXGameEffect_IncendiaryAmmo_execAddGameEffects_Parms
{
	class AActor*                                      oTarget;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDamagePerSecond;                                 		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ABioPawn*                                    BPInstigator;                                     		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0018 (0x0008) [0x0000000000000000]              
	// class USFXGameEffect_HeavyFireDamage*           Effect;                                           		// 0x0020 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXGameEffect_IncendiaryAmmo.DoEvolvedAoEImpact
// [0x00020002] 
struct USFXGameEffect_IncendiaryAmmo_execDoEvolvedAoEImpact_Parms
{
	struct FImpactInfo                                 Impact;                                           		// 0x0000 (0x0060) [0x0000000000000080]              ( CPF_Parm )
	class ABioPawn*                                    WeaponOwner;                                      		// 0x0060 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class ASFXWeapon*                                  Weapon;                                           		// 0x0068 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ABioPawn*                                 oNearbyPawn;                                      		// 0x0070 (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 oPawn;                                            		// 0x0078 (0x0008) [0x0000000000000000]              
	// class ABioPlayerSquad*                          oPlayerSquad;                                     		// 0x0080 (0x0008) [0x0000000000000000]              
	// int                                             nImpactedCount;                                   		// 0x0088 (0x0004) [0x0000000000000000]              
	// float                                           fDelay;                                           		// 0x008C (0x0004) [0x0000000000000000]              
	// float                                           fDamage;                                          		// 0x0090 (0x0004) [0x0000000000000000]              
	// float                                           fAnimatedReactionChance;                          		// 0x0094 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXGameEffect_IncendiaryAmmo.GetDamageVocProbabilityMod
// [0x00020002] 
struct USFXGameEffect_IncendiaryAmmo_execGetDamageVocProbabilityMod_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.SFXGameEffect_IncendiaryAmmo.OnWeaponImpact
// [0x00020002] 
struct USFXGameEffect_IncendiaryAmmo_execOnWeaponImpact_Parms
{
	class ASFXWeapon*                                  Weapon;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FImpactInfo                                 Impact;                                           		// 0x0008 (0x0060) [0x0000000000000080]              ( CPF_Parm )
	// class ABioPawn*                                 oPawn;                                            		// 0x0068 (0x0008) [0x0000000000000000]              
	// class AActor*                                   oHitActor;                                        		// 0x0070 (0x0008) [0x0000000000000000]              
	// float                                           fExtraDamage;                                     		// 0x0078 (0x0004) [0x0000000000000000]              
	// class ABioPawn*                                 WeaponOwner;                                      		// 0x007C (0x0008) [0x0000000000000000]              
	// float                                           fAnimatedReactionChance;                          		// 0x0084 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioReactionPowerScript.GetIncreasedReaction
// [0x00020002] 
struct UBioReactionPowerScript_execGetIncreasedReaction_Parms
{
	class AActor*                                      oTarget;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Reaction;                                         		// 0x0008 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0009 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.BioReactionPowerScript.GetCombatReaction
// [0x00024002] 
struct UBioReactionPowerScript_execGetCombatReaction_Parms
{
	int                                                PowerRank;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oTarget;                                          		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReactionStacks;                                   		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0010 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             TargetPhysicsLevel;                               		// 0x0014 (0x0004) [0x0000000000000000]              
	// unsigned char                                   Reaction;                                         		// 0x0018 (0x0001) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioPlayerMeleeScript.EndPhase
// [0x00020802] ( FUNC_Event )
struct UBioPlayerMeleeScript_eventEndPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.BioPlayerMeleeScript.RemoveMeleeEffects
// [0x00020002] 
struct UBioPlayerMeleeScript_execRemoveMeleeEffects_Parms
{
	class ABioPawn*                                    oPawn;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioPlayerMeleeScript.OnImpact
// [0x00820802] ( FUNC_Event )
struct UBioPlayerMeleeScript_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  vMomentum;                                        		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0028 (0x000C) [0x0000000000000000]              
	// class ABioPlayerController*                     pController;                                      		// 0x0034 (0x0008) [0x0000000000000000]              
	// class ABioWorldInfo*                            pWorldInfo;                                       		// 0x003C (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 oPawn;                                            		// 0x0044 (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 oCasterPawn;                                      		// 0x004C (0x0008) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             GEModule;                                         		// 0x0054 (0x0008) [0x0000000000000000]              
	// float                                           fDamage;                                          		// 0x005C (0x0004) [0x0000000000000000]              
	// class ABioPlayerController*                     oPlayerController;                                		// 0x0060 (0x0008) [0x0000000000000000]              
	// class ASFXAI_Core*                              AI;                                               		// 0x0068 (0x0008) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             TargetGEModule;                                   		// 0x0070 (0x0008) [0x0000000000000000]              
	// int                                             nMaxPhysicsLevel;                                 		// 0x0078 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bIsRobot;                                         		// 0x007C (0x0004) [0x0000000000000000]              
	// class TArray<unsigned char>                     Parts;                                            		// 0x0080 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class USFXModule_Damage*                        DmgModule;                                        		// 0x0090 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioPlayerMeleeScript.Tick
// [0x00020002] 
struct UBioPlayerMeleeScript_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent_Powers.BioPlayerMeleeScript.StartPhase
// [0x00820802] ( FUNC_Event )
struct UBioPlayerMeleeScript_eventStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPlayerController*                     Controller;                                       		// 0x0014 (0x0008) [0x0000000000000000]              
	// struct FVector                                  EnemyDirection;                                   		// 0x001C (0x000C) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXGameEffect_CryoAmmo.GetDamageVocProbabilityMod
// [0x00020002] 
struct USFXGameEffect_CryoAmmo_execGetDamageVocProbabilityMod_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.SFXGameEffect_CryoAmmo.OnWeaponImpact
// [0x00020002] 
struct USFXGameEffect_CryoAmmo_execOnWeaponImpact_Parms
{
	class ASFXWeapon*                                  Weapon;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FImpactInfo                                 Impact;                                           		// 0x0008 (0x0060) [0x0000000000000080]              ( CPF_Parm )
	// class ABioPawn*                                 oPawn;                                            		// 0x0068 (0x0008) [0x0000000000000000]              
	// class AActor*                                   oHitActor;                                        		// 0x0070 (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 WeaponOwner;                                      		// 0x0078 (0x0008) [0x0000000000000000]              
	// float                                           fDamage;                                          		// 0x0080 (0x0004) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0084 (0x0008) [0x0000000000000000]              
	// class USFXGameEffect_DelayedCryoFreeze*         FreezeEffect;                                     		// 0x008C (0x0008) [0x0000000000000000]              
	// float                                           fScaledFreezeChance;                              		// 0x0094 (0x0004) [0x0000000000000000]              
	// float                                           fScaledFreezeDuration;                            		// 0x0098 (0x0004) [0x0000000000000000]              
	// float                                           fPhysLevelResistance;                             		// 0x009C (0x0004) [0x0000000000000000]              
	// float                                           fDelay;                                           		// 0x00A0 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPower_BioticCharge.GetConeAngle
// [0x00020002] 
struct USFXPower_BioticCharge_execGetConeAngle_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.SFXPowerScript_BioticCharge.DebugDraw_Power
// [0x00020002] 
struct USFXPowerScript_BioticCharge_execDebugDraw_Power_Parms
{
	class ABioHUD*                                     H;                                                		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent_Powers.SFXPowerScript_BioticCharge.ShouldUsePower
// [0x00420002] 
struct USFXPowerScript_BioticCharge_execShouldUsePower_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Target;                                           		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class FString                                      sOptionalInfo;                                    		// 0x0010 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0020 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.SFXPowerScript_BioticCharge.PlayFailedChargeEffects
// [0x00020002] 
struct USFXPowerScript_BioticCharge_execPlayFailedChargeEffects_Parms
{
	// class ABioVisualEffect*                         Effect;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_BioticCharge.SpawnProjectile
// [0x00020002] 
struct USFXPowerScript_BioticCharge_execSpawnProjectile_Parms
{
};

// Function SFXGameContent_Powers.SFXPowerScript_BioticCharge.TimeStinger
// [0x00040003] ( FUNC_Final )
struct USFXPowerScript_BioticCharge_execTimeStinger_Parms
{
};

// Function SFXGameContent_Powers.SFXPowerScript_BioticCharge.OnRagdollPhysicsImpact
// [0x00020002] 
struct USFXPowerScript_BioticCharge_execOnRagdollPhysicsImpact_Parms
{
	class APawn*                                       oPawn;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpactActor;                                     		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     vImpactDir;                                       		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class ABioPawn*                                 oBioPawn;                                         		// 0x001C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_BioticCharge.DoChargeImpact
// [0x00824002] 
struct USFXPowerScript_BioticCharge_execDoChargeImpact_Parms
{
	class ABioPawn*                                    OwnerPawn;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class ABioPawn*                                    HitBioPawn;                                       		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bUseOwnerRotation;                                		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// float                                           fBioticMultiplier;                                		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FVector                                  Momentum;                                         		// 0x0018 (0x000C) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0024 (0x0008) [0x0000000000000000]              
	// struct SFXName                                  BoneName;                                         		// 0x002C (0x0008) [0x0000000000000000]              
	// class TArray<unsigned char>                     Parts;                                            		// 0x0034 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class ASFXAI_Core*                              AI;                                               		// 0x0044 (0x0008) [0x0000000000000000]              
	// class USFXModule_Damage*                        DmgModule;                                        		// 0x004C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_BioticCharge.DoImpact
// [0x00040003] ( FUNC_Final )
struct USFXPowerScript_BioticCharge_execDoImpact_Parms
{
	// class APawn*                                    HitPawn;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 OwnerPawn;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 HitBioPawn;                                       		// 0x0010 (0x0008) [0x0000000000000000]              
	// unsigned long                                   bCachedTargetImpacted;                            		// 0x0018 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bAoEPower;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           fRadius;                                          		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           fDistance;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_BioticCharge.Impact
// [0x00020002] 
struct USFXPowerScript_BioticCharge_execImpact_Parms
{
	// class APlayerController*                        PC;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	// float                                           fShieldDuration;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           fShieldStrength;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0010 (0x0008) [0x0000000000000000]              
	// class USFXGameEffect_GiveShield*                ShieldEffect;                                     		// 0x0018 (0x0008) [0x0000000000000000]              
	// class ABioVisualEffect*                         ShieldVFX;                                        		// 0x0020 (0x0008) [0x0000000000000000]              
	// class AEmitter*                                 TeleportIn;                                       		// 0x0028 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_BioticCharge.Teleport
// [0x00020002] 
struct USFXPowerScript_BioticCharge_execTeleport_Parms
{
};

// Function SFXGameContent_Powers.SFXPowerScript_BioticCharge.StartTeleport
// [0x00020002] 
struct USFXPowerScript_BioticCharge_execStartTeleport_Parms
{
	// class ASFXEmitter*                              TeleportOut;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_BioticCharge.StartPhase
// [0x00020002] 
struct USFXPowerScript_BioticCharge_execStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class APlayerController*                        PC;                                               		// 0x0014 (0x0008) [0x0000000000000000]              
	// class ASFXPlayerCamera*                         Camera;                                           		// 0x001C (0x0008) [0x0000000000000000]              
	// float                                           fDistanceToTarget;                                		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_BioticCharge.Tick
// [0x00020002] 
struct USFXPowerScript_BioticCharge_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Idx;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// class TArray<class USequenceEvent*>             EventsList;                                       		// 0x0008 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class USequenceEvent*                           Event;                                            		// 0x0018 (0x0008) [0x0000000000000000]              
	// class USeqEvent_Touch*                          TouchEvent;                                       		// 0x0020 (0x0008) [0x0000000000000000]              
	// unsigned long                                   OldOverlapping;                                   		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_BioticCharge.FinalizePawnMove
// [0x00C44003] ( FUNC_Final )
struct USFXPowerScript_BioticCharge_execFinalizePawnMove_Parms
{
	struct FVector                                     Loc;                                              		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     TargetLoc;                                        		// 0x000C (0x000C) [0x0000000000000190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )
	// struct FVector                                  Dir;                                              		// 0x0018 (0x000C) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_BioticCharge.ValidateTarget
// [0x00820002] 
struct USFXPowerScript_BioticCharge_execValidateTarget_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  NewLocation;                                      		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FVector                                  NewTargetLocation;                                		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Dir;                                              		// 0x001C (0x000C) [0x0000000000000000]              
	// float                                           MoveDist;                                         		// 0x0028 (0x0004) [0x0000000000000000]              
	// class ABioPawn*                                 oTargetPawn;                                      		// 0x002C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_BioticCharge.FindSpace
// [0x00C20002] 
struct USFXPowerScript_BioticCharge_execFindSpace_Parms
{
	struct FVector                                     NearLocation;                                     		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     Extent;                                           		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      TraceActor;                                       		// 0x0018 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0020 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  HitLocation;                                      		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0030 (0x000C) [0x0000000000000000]              
	// struct FVector                                  UnitX;                                            		// 0x003C (0x000C) [0x0000000000000000]              
	// struct FVector                                  UnitY;                                            		// 0x0048 (0x000C) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_BioticCharge.TryMove
// [0x00020002] 
struct USFXPowerScript_BioticCharge_execTryMove_Parms
{
	struct FVector                                     NewLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Dir;                                              		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       CollisionActor;                                   		// 0x0018 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0020 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.SFXPowerScript_BioticCharge.CollectVolumes
// [0x00820002] 
struct USFXPowerScript_BioticCharge_execCollectVolumes_Parms
{
	// class APlayerController*                        PC;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	// class ATriggerVolume*                           ChkVolume;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	// class TArray<class ATriggerVolume*>             AllVolumes;                                       		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class ANavigationPoint*                         Nav;                                              		// 0x0020 (0x0008) [0x0000000000000000]              
	// class ANavigationPoint*                         TargetNav;                                        		// 0x0028 (0x0008) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x0030 (0x0004) [0x0000000000000000]              
	// int                                             VolumeIdx;                                        		// 0x0034 (0x0004) [0x0000000000000000]              
	// struct FCharge_PendingVolume                    NewVolume;                                        		// 0x0038 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Extent;                                           		// 0x0044 (0x000C) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_BioticCharge.ValidateTargetLocation
// [0x00020003] ( FUNC_Final )
struct USFXPowerScript_BioticCharge_execValidateTargetLocation_Parms
{
	struct FVector                                     TargetLocation;                                   		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ANavigationPoint*                         TargetAnchor;                                     		// 0x0010 (0x0008) [0x0000000000000000]              
	// class ANavigationPoint*                         Nav;                                              		// 0x0018 (0x0008) [0x0000000000000000]              
	// class AActor*                                   FirstTarget;                                      		// 0x0020 (0x0008) [0x0000000000000000]              
	// float                                           DistToAnchor;                                     		// 0x0028 (0x0004) [0x0000000000000000]              
	// class APlayerController*                        PC;                                               		// 0x002C (0x0008) [0x0000000000000000]              
	// float                                           CylHeight;                                        		// 0x0034 (0x0004) [0x0000000000000000]              
	// float                                           CylWidth;                                         		// 0x0038 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_BioticCharge.TestPathReachability
// [0x00C20003] ( FUNC_Final )
struct USFXPowerScript_BioticCharge_execTestPathReachability_Parms
{
	struct FVector                                     StartLocation;                                    		// 0x0000 (0x000C) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	class ANavigationPoint*                            Anchor;                                           		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Extent;                                           		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0020 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  AnchorLocation;                                   		// 0x0024 (0x000C) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_BioticCharge.NewVector
// [0x00820003] ( FUNC_Final )
struct USFXPowerScript_BioticCharge_execNewVector_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Z;                                                		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  V;                                                		// 0x0018 (0x000C) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_BioticCharge.CanStartPower
// [0x00820802] ( FUNC_Event )
struct USFXPowerScript_BioticCharge_eventCanStartPower_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPlayerController*                     PC;                                               		// 0x000C (0x0008) [0x0000000000000000]              
	// struct FVector                                  TargetLocation;                                   		// 0x0014 (0x000C) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_CryoAmmo.ApplyPowerEffects
// [0x00020002] 
struct USFXPowerScript_CryoAmmo_execApplyPowerEffects_Parms
{
	class ABioPawn*                                    oPawn;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class ASFXWeapon*                                  oWeapon;                                          		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0010 (0x0008) [0x0000000000000000]              
	// class USFXGameEffect_CryoAmmo*                  oEffect;                                          		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_CryoAmmo.StartPhase
// [0x00020802] ( FUNC_Event )
struct USFXPowerScript_CryoAmmo_eventStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.SFXPowerScript_CryoAmmo.ApplyToSquadMembers
// [0x00020002] 
struct USFXPowerScript_CryoAmmo_execApplyToSquadMembers_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.SFXPowerScript_CryoAmmo.InitializePowerScript
// [0x00020802] ( FUNC_Event )
struct USFXPowerScript_CryoAmmo_eventInitializePowerScript_Parms
{
};

// Function SFXGameContent_Powers.SFXPowerScript_FirstAid.GetHUDWheelIconInfo
// [0x00020002] 
struct USFXPowerScript_FirstAid_execGetHUDWheelIconInfo_Parms
{
	class ABioPawn*                                    OwnerPawn;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class FString                                      ReturnValue;                                      		// 0x0008 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// class UBioEpicPawnBehavior*                     oBehavior;                                        		// 0x0018 (0x0008) [0x0000000000000000]              
	// class ABioPlayerSquad*                          oPlayerSquad;                                     		// 0x0020 (0x0008) [0x0000000000000000]              
	// int                                             nCount;                                           		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_FirstAid.ShouldUsePower
// [0x00420002] 
struct USFXPowerScript_FirstAid_execShouldUsePower_Parms
{
	class AActor*                                      Caster;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Target;                                           		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class FString                                      sOptionalInfo;                                    		// 0x0010 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0020 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 BioCaster;                                        		// 0x0024 (0x0008) [0x0000000000000000]              
	// class UBioEpicPawnBehavior*                     oBehavior;                                        		// 0x002C (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 BioMember;                                        		// 0x0034 (0x0008) [0x0000000000000000]              
	// class ABioAiController*                         oController;                                      		// 0x003C (0x0008) [0x0000000000000000]              
	// class ABioPlayerSquad*                          oPlayerSquad;                                     		// 0x0044 (0x0008) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x004C (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_FirstAid.CountMediGel
// [0x00020003] ( FUNC_Final )
struct USFXPowerScript_FirstAid_execCountMediGel_Parms
{
	class ABioPlayerSquad*                             oPlayerSquad;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ASFXInventoryManager*                     oInventory;                                       		// 0x000C (0x0008) [0x0000000000000000]              
	// int                                             nCurrentAmount;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_FirstAid.OnImpact
// [0x00020802] ( FUNC_Event )
struct USFXPowerScript_FirstAid_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 BioCaster;                                        		// 0x001C (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 BioMember;                                        		// 0x0024 (0x0008) [0x0000000000000000]              
	// class ABioVisualEffect*                         Effect;                                           		// 0x002C (0x0008) [0x0000000000000000]              
	// unsigned long                                   bActionTaken;                                     		// 0x0034 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bApplyCrust;                                      		// 0x0038 (0x0004) [0x0000000000000000]              
	// int                                             nHealCount;                                       		// 0x003C (0x0004) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0040 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_FirstAid.StartPhase
// [0x00020802] ( FUNC_Event )
struct USFXPowerScript_FirstAid_eventStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.SFXPowerScript_FirstAid.CanStartPower
// [0x00020802] ( FUNC_Event )
struct USFXPowerScript_FirstAid_eventCanStartPower_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class FString                                   EmptyString;                                      		// 0x000C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SFXGameContent_Powers.SFXPowerScript_PullProjectile.ShouldUsePower
// [0x00420002] 
struct USFXPowerScript_PullProjectile_execShouldUsePower_Parms
{
	class AActor*                                      Caster;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Target;                                           		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class FString                                      sOptionalInfo;                                    		// 0x0010 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0020 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 oPawn;                                            		// 0x0024 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_PullProjectile.OnRagdollPhysicsImpact
// [0x00020002] 
struct USFXPowerScript_PullProjectile_execOnRagdollPhysicsImpact_Parms
{
	class APawn*                                       oPawn;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpactActor;                                     		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     vImpactDir;                                       		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent_Powers.SFXPowerScript_PullProjectile.DropCurrentTargets
// [0x00020002] 
struct USFXPowerScript_PullProjectile_execDropCurrentTargets_Parms
{
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class USFXGameEffect*                           oEffect;                                          		// 0x0008 (0x0008) [0x0000000000000000]              
	// class AActor*                                   oActor;                                           		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_PullProjectile.EffectPull
// [0x00020002] 
struct USFXPowerScript_PullProjectile_execEffectPull_Parms
{
	class ABioPawn*                                    oCasterPawn;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct SFXName                                     nmCategory;                                       		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     vForce;                                           		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              fGravityRampUpTime;                               		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fMinVelocity;                                     		// 0x002C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fMinForceMult;                                    		// 0x0030 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct SFXName                                     nmPowerName;                                      		// 0x0034 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x003C (0x0008) [0x0000000000000000]              
	// class USFXGameEffect_Pull*                      oPullEffect;                                      		// 0x0044 (0x0008) [0x0000000000000000]              
	// class ABioVisualEffect*                         oVisualEffect;                                    		// 0x004C (0x0008) [0x0000000000000000]              
	// class USFXGameEffect*                           oEffect;                                          		// 0x0054 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_PullProjectile.OnImpact
// [0x00820802] ( FUNC_Event )
struct USFXPowerScript_PullProjectile_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 oPawn;                                            		// 0x001C (0x0008) [0x0000000000000000]              
	// float                                           fDuration;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
	// class ABioPawn*                                 oCasterPawn;                                      		// 0x0028 (0x0008) [0x0000000000000000]              
	// struct FVector                                  Direction;                                        		// 0x0030 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Force;                                            		// 0x003C (0x000C) [0x0000000000000000]              
	// float                                           fGravityRampUpTime;                               		// 0x0048 (0x0004) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x004C (0x000C) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_PullProjectile.OnProjectileExploded
// [0x00020002] 
struct USFXPowerScript_PullProjectile_execOnProjectileExploded_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Velocity;                                         		// 0x0020 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent_Powers.SFXPowerScript_PullProjectile.StartPhase
// [0x00020802] ( FUNC_Event )
struct USFXPowerScript_PullProjectile_eventStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.SFXPower_PullProjectile.GetForcePerSecond
// [0x00020002] 
struct USFXPower_PullProjectile_execGetForcePerSecond_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.SFXProjectile_Power_SuperSeeking.InitializeRotation
// [0x00820002] 
struct ASFXProjectile_Power_SuperSeeking_execInitializeRotation_Parms
{
	class APawn*                                       oCasterPawn;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ABioPlayerController*                     PC;                                               		// 0x0008 (0x0008) [0x0000000000000000]              
	// struct FRotator                                 Offset;                                           		// 0x0010 (0x000C) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXProjectile_Power_Seeking.Recycle
// [0x00020102] ( FUNC_Simulated )
struct ASFXProjectile_Power_Seeking_execRecycle_Parms
{
};

// Function SFXGameContent_Powers.SFXProjectile_Power_Seeking.InitializeRotation
// [0x00020000] 
struct ASFXProjectile_Power_Seeking_execInitializeRotation_Parms
{
	class APawn*                                       oCasterPawn;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent_Powers.SFXProjectile_Power_Seeking.InitializePowerProjectile
// [0x00020002] 
struct ASFXProjectile_Power_Seeking_execInitializePowerProjectile_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fTravelSpeed;                                     		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fRadius;                                          		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UBioPower*                                   oPower;                                           		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class APawn*                                    oCasterPawn;                                      		// 0x001C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXProjectile_Power_Seeking.CanLockOn
// [0x00020002] 
struct ASFXProjectile_Power_Seeking_execCanLockOn_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       CasterPawn;                                       		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AKActor*                                  oKActor;                                          		// 0x0014 (0x0008) [0x0000000000000000]              
	// class USFXSelectionModule*                      Module;                                           		// 0x001C (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 oPawn;                                            		// 0x0024 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXProjectile_Power_Seeking.Tick
// [0x00820102] ( FUNC_Simulated )
struct ASFXProjectile_Power_Seeking_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FQuat                                    Q;                                                		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FVector                                  V;                                                		// 0x0020 (0x000C) [0x0000000000000000]              
	// float                                           Dist;                                             		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXProjectile_Power_Seeking.ShouldModifyVelocity
// [0x00020002] 
struct ASFXProjectile_Power_Seeking_execShouldModifyVelocity_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.SFXProjectile_Power_Seeking.ChordLength
// [0x00020003] ( FUNC_Final )
struct ASFXProjectile_Power_Seeking_execChordLength_Parms
{
	float                                              ChordLen;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Theta;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           CircleRadius;                                     		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXProjectile_Power_Seeking.GetAimLocation
// [0x00820002] 
struct ASFXProjectile_Power_Seeking_execGetAimLocation_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x0008 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  AimLocation;                                      		// 0x0014 (0x000C) [0x0000000000000000]              
	// class ABioPawn*                                 oPawn;                                            		// 0x0020 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXProjectile_Power_Seeking.AcquireTarget
// [0x00820002] 
struct ASFXProjectile_Power_Seeking_execAcquireTarget_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  V;                                                		// 0x0008 (0x000C) [0x0000000000000000]              
	// float                                           Dist;                                             		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           RadsToTarget;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FQuat                                    Q;                                                		// 0x0020 (0x0010) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_Shockwave.ShouldUsePower
// [0x00420002] 
struct USFXPowerScript_Shockwave_execShouldUsePower_Parms
{
	class AActor*                                      Caster;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Target;                                           		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class FString                                      sOptionalInfo;                                    		// 0x0010 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0020 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 oPawn;                                            		// 0x0024 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_Shockwave.OnRagdollPhysicsImpact
// [0x00020002] 
struct USFXPowerScript_Shockwave_execOnRagdollPhysicsImpact_Parms
{
	class APawn*                                       oPawn;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpactActor;                                     		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     vImpactDir;                                       		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class ABioPawn*                                 oBioPawn;                                         		// 0x001C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_Shockwave.SpawnImpactVFX
// [0x00820002] 
struct USFXPowerScript_Shockwave_execSpawnImpactVFX_Parms
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UParticleSystem*                             PS;                                               		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ASFXGame*                                 oGame;                                            		// 0x0014 (0x0008) [0x0000000000000000]              
	// class ASFXObjectPool*                           oPool;                                            		// 0x001C (0x0008) [0x0000000000000000]              
	// class ASFXEmitter*                              oEmitter;                                         		// 0x0024 (0x0008) [0x0000000000000000]              
	// struct FRotator                                 Rotation;                                         		// 0x002C (0x000C) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_Shockwave.DoImpact
// [0x00820002] 
struct USFXPowerScript_Shockwave_execDoImpact_Parms
{
	class ABioPawn*                                    oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Location;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              Radius;                                           		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Force;                                            		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              GravityValue;                                     		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              GravityDuration;                                  		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fResistanceDamage;                                		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class TArray<unsigned char>                        AnimatedReactions;                                		// 0x0028 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct SFXName                                     Category;                                         		// 0x0038 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class AActor*                                   HitActor;                                         		// 0x0040 (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 HitPawn;                                          		// 0x0048 (0x0008) [0x0000000000000000]              
	// struct FVector                                  Momentum;                                         		// 0x0050 (0x000C) [0x0000000000000000]              
	// struct FVector                                  FloorLocation;                                    		// 0x005C (0x000C) [0x0000000000000000]              
	// class ABioVisualEffect*                         oVisualEffect;                                    		// 0x0068 (0x0008) [0x0000000000000000]              
	// float                                           fBioticMultiplier;                                		// 0x0070 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bHitSomething;                                    		// 0x0074 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_Shockwave.MoveShockwave
// [0x00020002] 
struct USFXPowerScript_Shockwave_execMoveShockwave_Parms
{
};

// Function SFXGameContent_Powers.SFXPowerScript_Shockwave.StartShockwave
// [0x00020002] 
struct USFXPowerScript_Shockwave_execStartShockwave_Parms
{
};

// Function SFXGameContent_Powers.SFXPowerScript_Shockwave.StartPhase
// [0x00820802] ( FUNC_Event )
struct USFXPowerScript_Shockwave_eventStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           fDistance;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FVector                                  TargetLocation;                                   		// 0x0018 (0x000C) [0x0000000000000000]              
	// class ABioPawn*                                 TargetPawn;                                       		// 0x0024 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_VanguardPassive.ApplyGlobalBonus
// [0x00020002] 
struct USFXPowerScript_VanguardPassive_execApplyGlobalBonus_Parms
{
	// float                                           fCooldownReduction;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           fWeaponDamageIncrease;                            		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           fPowerDamageIncrease;                             		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           fPowerDurationIncrease;                           		// 0x000C (0x0004) [0x0000000000000000]              
	// class USFXPower_VanguardPassive*                oPassivePower;                                    		// 0x0010 (0x0008) [0x0000000000000000]              
	// float                                           fHealthIncrease;                                  		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXGameEffect_Reave.GetDamageType
// [0x00020002] 
struct USFXGameEffect_Reave_execGetDamageType_Parms
{
	class UClass*                                      ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.SFXGameEffect_Reave.OnUpdate
// [0x00020002] 
struct USFXGameEffect_Reave_execOnUpdate_Parms
{
	float                                              DeltaSeconds;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class USFXModule_Damage*                        DmgModule;                                        		// 0x0004 (0x0008) [0x0000000000000000]              
	// float                                           fHealthRemaining;                                 		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           fStealAmount;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	// class ABioPawn*                                 OwnerPawn;                                        		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXGameEffect_Reave.OnApplied
// [0x00020002] 
struct USFXGameEffect_Reave_execOnApplied_Parms
{
};

// Function SFXGameContent_Powers.SFXPowerScript_Reave.ShouldUsePower
// [0x00420002] 
struct USFXPowerScript_Reave_execShouldUsePower_Parms
{
	class AActor*                                      Caster;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Target;                                           		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class FString                                      sOptionalInfo;                                    		// 0x0010 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0020 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 oPawn;                                            		// 0x0024 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_Reave.SpawnImpactVFX
// [0x00020002] 
struct USFXPowerScript_Reave_execSpawnImpactVFX_Parms
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UParticleSystem*                             PS;                                               		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ASFXGame*                                 oGame;                                            		// 0x0014 (0x0008) [0x0000000000000000]              
	// class ASFXObjectPool*                           oPool;                                            		// 0x001C (0x0008) [0x0000000000000000]              
	// class ASFXEmitter*                              oEmitter;                                         		// 0x0024 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_Reave.OnImpact
// [0x00020802] ( FUNC_Event )
struct USFXPowerScript_Reave_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 oTargetPawn;                                      		// 0x001C (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 oCasterPawn;                                      		// 0x0024 (0x0008) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x002C (0x0008) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             CasterManager;                                    		// 0x0034 (0x0008) [0x0000000000000000]              
	// class USFXGameEffect_Reave*                     Reave;                                            		// 0x003C (0x0008) [0x0000000000000000]              
	// class ABioVisualEffect*                         oVisualEffect;                                    		// 0x0044 (0x0008) [0x0000000000000000]              
	// class ABioVisualEffect*                         oHealVisualEffect;                                		// 0x004C (0x0008) [0x0000000000000000]              
	// float                                           fHealthBonus;                                     		// 0x0054 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_Reave.StartPhase
// [0x00020802] ( FUNC_Event )
struct USFXPowerScript_Reave_eventStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.SFXCustomAction_MechDogBite.Cleanup
// [0x00020000] 
struct USFXCustomAction_MechDogBite_execCleanup_Parms
{
};

// Function SFXGameContent_Powers.SFXCustomAction_MechDogBite.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_MechDogBite_execStopCustomAction_Parms
{
};

// Function SFXGameContent_Powers.SFXCustomAction_MechDogBite.BodyStanceAnimEndNotification
// [0x00020002] 
struct USFXCustomAction_MechDogBite_execBodyStanceAnimEndNotification_Parms
{
	class UAnimNodeSequence*                           SeqNode;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              PlayedTime;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ExcessTime;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent_Powers.SFXCustomAction_MechDogBite.Impact
// [0x00820002] 
struct USFXCustomAction_MechDogBite_execImpact_Parms
{
	// class ABioPawn*                                 HitPawn;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class ABioPlayerController*                     PC;                                               		// 0x0008 (0x0008) [0x0000000000000000]              
	// float                                           fDamage;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           fFinalDamage;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	// class USFXPower_MechDog*                        oPower;                                           		// 0x0018 (0x0008) [0x0000000000000000]              
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x0020 (0x0028) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXCustomAction_MechDogBite.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_MechDogBite_execStartCustomAction_Parms
{
};

// Function SFXGameContent_Powers.SFXGameEffect_CloakVFX.EndStealthVFX
// [0x00020002] 
struct USFXGameEffect_CloakVFX_execEndStealthVFX_Parms
{
	// class UActorComponent*                          Comp;                                             		// 0x0000 (0x0008) [0x0000000004000000]              ( CPF_EditInline )
	// class ABioPawn*                                 oPawn;                                            		// 0x0008 (0x0008) [0x0000000000000000]              
	// class ABioVisualEffect*                         Effect;                                           		// 0x0010 (0x0008) [0x0000000000000000]              
	// class ASFXWeapon_HeavyPistol_Base*              Pistol;                                           		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXGameEffect_CloakVFX.RestoreMeshMaterials
// [0x00020002] 
struct USFXGameEffect_CloakVFX_execRestoreMeshMaterials_Parms
{
	class USkeletalMeshComponent*                      Mesh;                                             		// 0x0000 (0x0008) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	// int                                             nIndex;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             nMatIndex;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             nCount;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXGameEffect_CloakVFX.TransitionOff
// [0x00020002] 
struct USFXGameEffect_CloakVFX_execTransitionOff_Parms
{
	// class ABioPawn*                                 oPawn;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXGameEffect_CloakVFX.DelayedTransitionOff
// [0x00020002] 
struct USFXGameEffect_CloakVFX_execDelayedTransitionOff_Parms
{
	// class ABioPawn*                                 oPawn;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXGameEffect_CloakVFX.OnRemoved
// [0x00020002] 
struct USFXGameEffect_CloakVFX_execOnRemoved_Parms
{
	// class ABioPawn*                                 oPawn;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// float                                           fDelay;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXGameEffect_CloakVFX.OnUpdate
// [0x00020002] 
struct USFXGameEffect_CloakVFX_execOnUpdate_Parms
{
	float                                              DeltaSeconds;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ABioPawn*                                 oPawn;                                            		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXGameEffect_CloakVFX.StartTransition
// [0x00020002] 
struct USFXGameEffect_CloakVFX_execStartTransition_Parms
{
	// class ABioPawn*                                 oPawn;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXGameEffect_CloakVFX.SwapMeshMaterials
// [0x00020002] 
struct USFXGameEffect_CloakVFX_execSwapMeshMaterials_Parms
{
	class USkeletalMeshComponent*                      oSkeletalMesh;                                    		// 0x0000 (0x0008) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	// int                                             nIndex;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             nCount;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	// class UMaterialInstanceConstant*                Instance;                                         		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXGameEffect_CloakVFX.SwapInvisibleMaterials
// [0x00020002] 
struct USFXGameEffect_CloakVFX_execSwapInvisibleMaterials_Parms
{
	// class UActorComponent*                          Comp;                                             		// 0x0000 (0x0008) [0x0000000004000000]              ( CPF_EditInline )
	// class UMaterialInstanceConstant*                Instance;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 oPawn;                                            		// 0x0010 (0x0008) [0x0000000000000000]              
	// class ASFXWeapon_HeavyPistol_Base*              Pistol;                                           		// 0x0018 (0x0008) [0x0000000000000000]              
	// class ASFXPawn_Player*                          PlayerPawn;                                       		// 0x0020 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXGameEffect_CloakVFX.StoreMeshMaterials
// [0x00020002] 
struct USFXGameEffect_CloakVFX_execStoreMeshMaterials_Parms
{
	class USkeletalMeshComponent*                      oSkeletalMesh;                                    		// 0x0000 (0x0008) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	// class UMaterialInterface*                       MatInterface;                                     		// 0x0008 (0x0008) [0x0000000000000000]              
	// int                                             nIndex;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             nCount;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXGameEffect_CloakVFX.StoreStartingMaterials
// [0x00020002] 
struct USFXGameEffect_CloakVFX_execStoreStartingMaterials_Parms
{
	// class UActorComponent*                          Comp;                                             		// 0x0000 (0x0008) [0x0000000004000000]              ( CPF_EditInline )
	// class ABioPawn*                                 oPawn;                                            		// 0x0008 (0x0008) [0x0000000000000000]              
	// class ASFXWeapon_HeavyPistol_Base*              Pistol;                                           		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXGameEffect_CloakVFX.OnApplied
// [0x00020002] 
struct USFXGameEffect_CloakVFX_execOnApplied_Parms
{
	// class ABioPawn*                                 oPawn;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXGameEffect_OverheatWeapons.OnRemoved
// [0x00020002] 
struct USFXGameEffect_OverheatWeapons_execOnRemoved_Parms
{
};

// Function SFXGameContent_Powers.SFXGameEffect_OverheatWeapons.OverheatWeapon
// [0x00020002] 
struct USFXGameEffect_OverheatWeapons_execOverheatWeapon_Parms
{
	// class ASFXWeapon*                               oWeapon;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXGameEffect_OverheatWeapons.OnUpdate
// [0x00020002] 
struct USFXGameEffect_OverheatWeapons_execOnUpdate_Parms
{
	float                                              DeltaSeconds;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent_Powers.SFXGameEffect_OverheatWeapons.OnApplied
// [0x00020002] 
struct USFXGameEffect_OverheatWeapons_execOnApplied_Parms
{
	// class ASFXGame*                                 oGame;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// class USkeletalMeshComponent*                   oSkeletalMesh;                                    		// 0x0008 (0x0008) [0x0000000004000000]              ( CPF_EditInline )
};

// Function SFXGameContent_Powers.SFXPowerScript_Cloak.ShouldUsePower
// [0x00420002] 
struct USFXPowerScript_Cloak_execShouldUsePower_Parms
{
	class AActor*                                      Caster;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Target;                                           		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class FString                                      sOptionalInfo;                                    		// 0x0010 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0020 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 oCasterPawn;                                      		// 0x0024 (0x0008) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x002C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_Cloak.OnCloakEnded
// [0x00020002] 
struct USFXPowerScript_Cloak_execOnCloakEnded_Parms
{
	// float                                           fCooldown;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_Cloak.OnImpact
// [0x00020802] ( FUNC_Event )
struct USFXPowerScript_Cloak_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x001C (0x0008) [0x0000000000000000]              
	// class APawn*                                    oPawn;                                            		// 0x0024 (0x0008) [0x0000000000000000]              
	// class USFXGameEffect*                           oEffect;                                          		// 0x002C (0x0008) [0x0000000000000000]              
	// class USFXGameEffect_Cloak*                     oCloakEffect;                                     		// 0x0034 (0x0008) [0x0000000000000000]              
	// float                                           fDuration;                                        		// 0x003C (0x0004) [0x0000000000000000]              
	// float                                           fDamageMultiplier;                                		// 0x0040 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_Cloak.AdjustCooldown
// [0x00420802] ( FUNC_Event )
struct USFXPowerScript_Cloak_eventAdjustCooldown_Parms
{
	float                                              fCoolDownTime;                                    		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.SFXPowerScript_Cloak.StartPhase
// [0x00020802] ( FUNC_Event )
struct USFXPowerScript_Cloak_eventStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.SFXPower_Cloak_NPC.GetDamageMultiplier
// [0x00020002] 
struct USFXPower_Cloak_NPC_execGetDamageMultiplier_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.SFXPowerScript_CombatDroneAttack_NPC.ShouldUsePower
// [0x00420002] 
struct USFXPowerScript_CombatDroneAttack_NPC_execShouldUsePower_Parms
{
	class AActor*                                      Caster;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Target;                                           		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class FString                                      sOptionalInfo;                                    		// 0x0010 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0020 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.SFXPowerScript_CombatDroneAttack_NPC.OnImpact
// [0x00020802] ( FUNC_Event )
struct USFXPowerScript_CombatDroneAttack_NPC_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 oPawn;                                            		// 0x001C (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 oCasterPawn;                                      		// 0x0024 (0x0008) [0x0000000000000000]              
	// class ABioWorldInfo*                            pWorldInfo;                                       		// 0x002C (0x0008) [0x0000000000000000]              
	// class ABioPlayerController*                     pController;                                      		// 0x0034 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_CombatDroneAttack_NPC.StartPhase
// [0x00020802] ( FUNC_Event )
struct USFXPowerScript_CombatDroneAttack_NPC_eventStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.SFXPowerScript_LightMechShock.OnImpact
// [0x00820802] ( FUNC_Event )
struct USFXPowerScript_LightMechShock_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  vMomentum;                                        		// 0x001C (0x000C) [0x0000000000000000]              
	// class ABioPlayerController*                     pController;                                      		// 0x0028 (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 oImpactedPawn;                                    		// 0x0030 (0x0008) [0x0000000000000000]              
	// class ABioWorldInfo*                            pWorldInfo;                                       		// 0x0038 (0x0008) [0x0000000000000000]              
	// class ABioVisualEffect*                         oVisualEffect;                                    		// 0x0040 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_LightMechShock.StartPhase
// [0x00020802] ( FUNC_Event )
struct USFXPowerScript_LightMechShock_eventStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.SFXPowerScript_RobotDeathExplosion.EndPhase
// [0x00020802] ( FUNC_Event )
struct USFXPowerScript_RobotDeathExplosion_eventEndPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 oPawn;                                            		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_RobotDeathExplosion.OnImpact
// [0x00820802] ( FUNC_Event )
struct USFXPowerScript_RobotDeathExplosion_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  vMomentum;                                        		// 0x001C (0x000C) [0x0000000000000000]              
	// class ABioPawn*                                 oImpactedPawn;                                    		// 0x0028 (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 oCasterPawn;                                      		// 0x0030 (0x0008) [0x0000000000000000]              
	// struct FVector                                  vDirection;                                       		// 0x0038 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0044 (0x000C) [0x0000000000000000]              
	// float                                           fForce;                                           		// 0x0050 (0x0004) [0x0000000000000000]              
	// float                                           fDamage;                                          		// 0x0054 (0x0004) [0x0000000000000000]              
	// class ABioWorldInfo*                            pWorldInfo;                                       		// 0x0058 (0x0008) [0x0000000000000000]              
	// class ABioPlayerController*                     pController;                                      		// 0x0060 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_RobotDeathExplosion.StartPhase
// [0x00020802] ( FUNC_Event )
struct USFXPowerScript_RobotDeathExplosion_eventStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UBioPawnBehavior*                         oBPB;                                             		// 0x0014 (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 oPawn;                                            		// 0x001C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_MechDogBite.OnImpact
// [0x00820802] ( FUNC_Event )
struct USFXPowerScript_MechDogBite_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  vMomentum;                                        		// 0x001C (0x000C) [0x0000000000000000]              
	// class ASFXPlayerCamera*                         Camera;                                           		// 0x0028 (0x0008) [0x0000000000000000]              
	// class ABioPlayerController*                     pController;                                      		// 0x0030 (0x0008) [0x0000000000000000]              
	// class ABioWorldInfo*                            pWorldInfo;                                       		// 0x0038 (0x0008) [0x0000000000000000]              
	// float                                           fDamage;                                          		// 0x0040 (0x0004) [0x0000000000000000]              
	// class ABioPawn*                                 oImpactedPawn;                                    		// 0x0044 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_MechDogBite.StartPhase
// [0x00020802] ( FUNC_Event )
struct USFXPowerScript_MechDogBite_eventStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.SFXPowerScript_MechDogTaser.OnImpact
// [0x00820802] ( FUNC_Event )
struct USFXPowerScript_MechDogTaser_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPlayerController*                     pController;                                      		// 0x001C (0x0008) [0x0000000000000000]              
	// struct FVector                                  vMomentum;                                        		// 0x0024 (0x000C) [0x0000000000000000]              
	// class ABioPawn*                                 oImpactedPawn;                                    		// 0x0030 (0x0008) [0x0000000000000000]              
	// class ABioWorldInfo*                            pWorldInfo;                                       		// 0x0038 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_MechDogTaser.StartPhase
// [0x00020802] ( FUNC_Event )
struct USFXPowerScript_MechDogTaser_eventStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.SFXPower_Overload.GetOverheatLength
// [0x00020002] 
struct USFXPower_Overload_execGetOverheatLength_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.SFXPower_Overload.GetRobotStunLength
// [0x00020002] 
struct USFXPower_Overload_execGetRobotStunLength_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.SFXPowerScript_Overload.ShouldUsePower
// [0x00420002] 
struct USFXPowerScript_Overload_execShouldUsePower_Parms
{
	class AActor*                                      Caster;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Target;                                           		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class FString                                      sOptionalInfo;                                    		// 0x0010 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0020 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 oPawn;                                            		// 0x0024 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_Overload.SpawnBigImpactVFX
// [0x00020002] 
struct USFXPowerScript_Overload_execSpawnBigImpactVFX_Parms
{
	class AActor*                                      oImpacted;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ASFXGame*                                 oGame;                                            		// 0x0008 (0x0008) [0x0000000000000000]              
	// class ASFXObjectPool*                           oPool;                                            		// 0x0010 (0x0008) [0x0000000000000000]              
	// class ABioPlayerController*                     pController;                                      		// 0x0018 (0x0008) [0x0000000000000000]              
	// class ABioVisualEffect*                         oVisualEffect;                                    		// 0x0020 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_Overload.ExplodeEnemy
// [0x00020002] 
struct USFXPowerScript_Overload_execExplodeEnemy_Parms
{
	class ABioPawn*                                    oPawn;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class ABioPawn*                                    oCaster;                                          		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent_Powers.SFXPowerScript_Overload.CanEnemyBeExploded
// [0x00020002] 
struct USFXPowerScript_Overload_execCanEnemyBeExploded_Parms
{
	class ABioPawn*                                    oPawn;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.SFXPowerScript_Overload.TurnOnDeathPower
// [0x00020002] 
struct USFXPowerScript_Overload_execTurnOnDeathPower_Parms
{
	class AActor*                                      oImpacted;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ABioPawn*                                 oPawn;                                            		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_Overload.StunRobot
// [0x00020002] 
struct USFXPowerScript_Overload_execStunRobot_Parms
{
	class ABioPawn*                                    oPawn;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ASFXAI_Core*                              AI;                                               		// 0x000C (0x0008) [0x0000000000000000]              
	// float                                           fStunLength;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_Overload.OnImpact
// [0x00820802] ( FUNC_Event )
struct USFXPowerScript_Overload_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 oPawn;                                            		// 0x001C (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Momentum;                                         		// 0x0030 (0x000C) [0x0000000000000000]              
	// float                                           fDamage;                                          		// 0x003C (0x0004) [0x0000000000000000]              
	// float                                           fStunLength;                                      		// 0x0040 (0x0004) [0x0000000000000000]              
	// float                                           fOverheatLength;                                  		// 0x0044 (0x0004) [0x0000000000000000]              
	// class UClass*                                   DamageClass;                                      		// 0x0048 (0x0008) [0x0000000000000000]              
	// unsigned long                                   bIsRobot;                                         		// 0x0050 (0x0004) [0x0000000000000000]              
	// class USFXPower*                                StealthPower;                                     		// 0x0054 (0x0008) [0x0000000000000000]              
	// class ASFXShield_Base*                          ShieldCheck;                                      		// 0x005C (0x0008) [0x0000000000000000]              
	// unsigned long                                   bHadEnergyShields;                                		// 0x0064 (0x0004) [0x0000000000000000]              
	// class ABioPlayerController*                     PC;                                               		// 0x0068 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_Overload.StartPhase
// [0x00020802] ( FUNC_Event )
struct USFXPowerScript_Overload_eventStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.SFXPowerScript_Varren.OnImpact
// [0x00820802] ( FUNC_Event )
struct USFXPowerScript_Varren_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  vMomentum;                                        		// 0x001C (0x000C) [0x0000000000000000]              
	// class ASFXPlayerCamera*                         Camera;                                           		// 0x0028 (0x0008) [0x0000000000000000]              
	// class ABioPlayerController*                     pController;                                      		// 0x0030 (0x0008) [0x0000000000000000]              
	// class ABioWorldInfo*                            pWorldInfo;                                       		// 0x0038 (0x0008) [0x0000000000000000]              
	// float                                           fDamage;                                          		// 0x0040 (0x0004) [0x0000000000000000]              
	// class ABioPawn*                                 oImpactedPawn;                                    		// 0x0044 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_Varren.StartPhase
// [0x00020802] ( FUNC_Event )
struct USFXPowerScript_Varren_eventStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.BioCrushScript.ShouldUsePower
// [0x00420002] 
struct UBioCrushScript_execShouldUsePower_Parms
{
	class AActor*                                      Caster;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Target;                                           		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class FString                                      sOptionalInfo;                                    		// 0x0010 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0020 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 oPawn;                                            		// 0x0024 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioCrushScript.OnRagdollPhysicsImpact
// [0x00820002] 
struct UBioCrushScript_execOnRagdollPhysicsImpact_Parms
{
	class APawn*                                       oPawn;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpactActor;                                     		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     vImpactDir;                                       		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class ABioPawn*                                 oBioPawn;                                         		// 0x001C (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 oCaster;                                          		// 0x0024 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x002C (0x000C) [0x0000000000000000]              
	// struct FVector                                  Momentum;                                         		// 0x0038 (0x000C) [0x0000000000000000]              
	// float                                           fVelocity;                                        		// 0x0044 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioCrushScript.OnImpact
// [0x00020802] ( FUNC_Event )
struct UBioCrushScript_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 oCasterPawn;                                      		// 0x001C (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 oPawn;                                            		// 0x0024 (0x0008) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x002C (0x0008) [0x0000000000000000]              
	// class USFXGameEffect_Crush*                     oCrushEffect;                                     		// 0x0034 (0x0008) [0x0000000000000000]              
	// class ABioVisualEffect*                         oVisualEffect;                                    		// 0x003C (0x0008) [0x0000000000000000]              
	// float                                           fRagdollDuration;                                 		// 0x0044 (0x0004) [0x0000000000000000]              
	// float                                           fSlamDelay;                                       		// 0x0048 (0x0004) [0x0000000000000000]              
	// float                                           fBioticMultiplier;                                		// 0x004C (0x0004) [0x0000000000000000]              
	// class ASFXKActor*                               oSFXKActor;                                       		// 0x0050 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioCrushScript.StartPhase
// [0x00020802] ( FUNC_Event )
struct UBioCrushScript_eventStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.BioSingularityScript.ShouldUsePower
// [0x00420002] 
struct UBioSingularityScript_execShouldUsePower_Parms
{
	class AActor*                                      Caster;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Target;                                           		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class FString                                      sOptionalInfo;                                    		// 0x0010 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0020 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.BioSingularityScript.OnPowerRankIncreased
// [0x00020002] 
struct UBioSingularityScript_execOnPowerRankIncreased_Parms
{
};

// Function SFXGameContent_Powers.BioSingularityScript.OnRagdollPhysicsImpact
// [0x00020002] 
struct UBioSingularityScript_execOnRagdollPhysicsImpact_Parms
{
	class APawn*                                       oPawn;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpactActor;                                     		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     vImpactDir;                                       		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent_Powers.BioSingularityScript.ApplyVFX
// [0x00020002] 
struct UBioSingularityScript_execApplyVFX_Parms
{
	class AActor*                                      oImpacted;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ABioVisualEffect*                         Effect;                                           		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioSingularityScript.SpawnSingularity
// [0x00020002] 
struct UBioSingularityScript_execSpawnSingularity_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Location;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// float                                           fDrawScale;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioSingularityScript.TurnOffSingularity
// [0x00020002] 
struct UBioSingularityScript_execTurnOffSingularity_Parms
{
	// class AActor*                                   oActor;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioSingularityScript.CanPutInSingularity
// [0x00020002] 
struct UBioSingularityScript_execCanPutInSingularity_Parms
{
	class AActor*                                      oActor;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x000C (0x0008) [0x0000000000000000]              
	// class USFXGameEffect*                           oEffect;                                          		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioSingularityScript.ImpactNewTarget
// [0x00C20002] 
struct UBioSingularityScript_execImpactNewTarget_Parms
{
	class AActor*                                      oImpacted;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fEffectDuration;                                  		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0010 (0x0008) [0x0000000000000000]              
	// class USFXGameEffect_Singularity*               oSingularityEffect;                               		// 0x0018 (0x0008) [0x0000000000000000]              
	// float                                           fDuration;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0024 (0x000C) [0x0000000000000000]              
	// class USFXGameEffect*                           oEffect;                                          		// 0x0030 (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 oPawn;                                            		// 0x0038 (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 oCasterPawn;                                      		// 0x0040 (0x0008) [0x0000000000000000]              
	// int                                             PhysicsLevel;                                     		// 0x0048 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioSingularityScript.Tick
// [0x00020802] ( FUNC_Event )
struct UBioSingularityScript_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AActor*                                   NearbyActor;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
	// float                                           fEffectDuration;                                  		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioSingularityScript.OnProjectileExploded
// [0x00020002] 
struct UBioSingularityScript_execOnProjectileExploded_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Velocity;                                         		// 0x0020 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent_Powers.BioSingularityScript.StartPhase
// [0x00020802] ( FUNC_Event )
struct UBioSingularityScript_eventStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.BioSingularityScript.InitializePowerScript
// [0x00020802] ( FUNC_Event )
struct UBioSingularityScript_eventInitializePowerScript_Parms
{
};

// Function SFXGameContent_Powers.SFXPower_Singularity_NPC.GetDamage
// [0x00020002] 
struct USFXPower_Singularity_NPC_execGetDamage_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.BioWarpScript.ShouldUsePower
// [0x00420002] 
struct UBioWarpScript_execShouldUsePower_Parms
{
	class AActor*                                      Caster;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Target;                                           		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class FString                                      sOptionalInfo;                                    		// 0x0010 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0020 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 oPawn;                                            		// 0x0024 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioWarpScript.TurnOffScriptSingularity
// [0x00020002] 
struct UBioWarpScript_execTurnOffScriptSingularity_Parms
{
	class ABioPawn*                                    PowerCaster;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct SFXName                                     PowerName;                                        		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class UBioPower*                                oPower;                                           		// 0x0010 (0x0008) [0x0000000000000000]              
	// class UBioSingularityScript*                    oPowerScript;                                     		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioWarpScript.StopSingularity
// [0x00020002] 
struct UBioWarpScript_execStopSingularity_Parms
{
	class ABioPawn*                                    oImpacted;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0008 (0x0008) [0x0000000000000000]              
	// class USFXGameEffect*                           oEffect;                                          		// 0x0010 (0x0008) [0x0000000000000000]              
	// class USFXGameEffect_Singularity*               oSingularityEffect;                               		// 0x0018 (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 PowerCaster;                                      		// 0x0020 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioWarpScript.SpawnBigImpactVFX
// [0x00820002] 
struct UBioWarpScript_execSpawnBigImpactVFX_Parms
{
	class AActor*                                      oImpacted;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ASFXGame*                                 oGame;                                            		// 0x0008 (0x0008) [0x0000000000000000]              
	// class ASFXObjectPool*                           oPool;                                            		// 0x0010 (0x0008) [0x0000000000000000]              
	// struct FVector                                  DirectionToSprayParticles;                        		// 0x0018 (0x000C) [0x0000000000000000]              
	// class AEmitter*                                 oEmitter;                                         		// 0x0024 (0x0008) [0x0000000000000000]              
	// float                                           fVFXIntensity;                                    		// 0x002C (0x0004) [0x0000000000000000]              
	// class ABioPlayerController*                     pController;                                      		// 0x0030 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioWarpScript.DetonateBiotics
// [0x00820002] 
struct UBioWarpScript_execDetonateBiotics_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// float                                           fRadius;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           fForce;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FVector                                  vHitLocation;                                     		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  vDirection;                                       		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FVector                                  vForce;                                           		// 0x0030 (0x000C) [0x0000000000000000]              
	// class ABioPawn*                                 oNearbyPawn;                                      		// 0x003C (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 oCasterPawn;                                      		// 0x0044 (0x0008) [0x0000000000000000]              
	// float                                           fDamage;                                          		// 0x004C (0x0004) [0x0000000000000000]              
	// float                                           fBioticMultiplier;                                		// 0x0050 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioWarpScript.OnImpact
// [0x00820802] ( FUNC_Event )
struct UBioWarpScript_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 oPawn;                                            		// 0x001C (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 oCasterPawn;                                      		// 0x0024 (0x0008) [0x0000000000000000]              
	// float                                           fDamage;                                          		// 0x002C (0x0004) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0030 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Momentum;                                         		// 0x003C (0x000C) [0x0000000000000000]              
	// float                                           fBioticMultiplier;                                		// 0x0048 (0x0004) [0x0000000000000000]              
	// struct FVector                                  vDirection;                                       		// 0x004C (0x000C) [0x0000000000000000]              
	// struct FVector                                  vForce;                                           		// 0x0058 (0x000C) [0x0000000000000000]              
	// class ABioWorldInfo*                            pWorldInfo;                                       		// 0x0064 (0x0008) [0x0000000000000000]              
	// class ABioPlayerController*                     pController;                                      		// 0x006C (0x0008) [0x0000000000000000]              
	// class ASFXShield_Base*                          ShieldCheck;                                      		// 0x0074 (0x0008) [0x0000000000000000]              
	// unsigned long                                   bHadBioticShields;                                		// 0x007C (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioWarpScript.StartPhase
// [0x00020802] ( FUNC_Event )
struct UBioWarpScript_eventStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.SFXPower_Warp_NPC.GetDamage
// [0x00020002] 
struct USFXPower_Warp_NPC_execGetDamage_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.SFXPowerScript_MirandaPassive.ApplyGlobalBonus
// [0x00020002] 
struct USFXPowerScript_MirandaPassive_execApplyGlobalBonus_Parms
{
	// float                                           fHealthIncrease;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           fWeaponDamageIncrease;                            		// 0x0004 (0x0004) [0x0000000000000000]              
	// class USFXPower_MirandaPassive*                 oPassivePower;                                    		// 0x0008 (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 OwnerPawn;                                        		// 0x0010 (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 oSquadMember;                                     		// 0x0018 (0x0008) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_Singularity_NPC.OnOwnerDied
// [0x00020002] 
struct USFXPowerScript_Singularity_NPC_execOnOwnerDied_Parms
{
};

// Function SFXGameContent_Powers.SFXPowerScript_Singularity_NPC.ImpactNewTarget
// [0x00C20002] 
struct USFXPowerScript_Singularity_NPC_execImpactNewTarget_Parms
{
	class AActor*                                      oImpacted;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fEffectDuration;                                  		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 oPawn;                                            		// 0x0010 (0x0008) [0x0000000000000000]              
	// class USFXPower_Singularity_NPC*                oNPCPower;                                        		// 0x0018 (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 oCasterPawn;                                      		// 0x0020 (0x0008) [0x0000000000000000]              
	// struct FVector                                  Momentum;                                         		// 0x0028 (0x000C) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_Singularity_NPC.OnProjectileExploded
// [0x00020002] 
struct USFXPowerScript_Singularity_NPC_execOnProjectileExploded_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Velocity;                                         		// 0x0020 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent_Powers.SFXPowerScript_Singularity_NPC.StartPhase
// [0x00020802] ( FUNC_Event )
struct USFXPowerScript_Singularity_NPC_eventStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.SFXProjectile_Power_Seeking_NPC.Tick
// [0x00820102] ( FUNC_Simulated )
struct ASFXProjectile_Power_Seeking_NPC_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  DesiredOrientation;                               		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FVector                                  CurrentOrientation;                               		// 0x0010 (0x000C) [0x0000000000000000]              
	// float                                           fAngle;                                           		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           fTargetVelocity;                                  		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           fAngleChange;                                     		// 0x0024 (0x0004) [0x0000000000000000]              
	// struct FVector                                  Extent;                                           		// 0x0028 (0x000C) [0x0000000000000000]              
	// class ABioPawn*                                 oPawn;                                            		// 0x0034 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXProjectile_Power_Seeking_NPC.GetAimLocation
// [0x00820002] 
struct ASFXProjectile_Power_Seeking_NPC_execGetAimLocation_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x0008 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  AimLocation;                                      		// 0x0014 (0x000C) [0x0000000000000000]              
	// float                                           fDistance;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           fTimeToHit;                                       		// 0x0024 (0x0004) [0x0000000000000000]              
	// float                                           fVelocity;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
	// class ABioPawn*                                 oPawn;                                            		// 0x002C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXProjectile_Power_Seeking_NPC.InitializePowerProjectile
// [0x00020002] 
struct ASFXProjectile_Power_Seeking_NPC_execInitializePowerProjectile_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fTravelSpeed;                                     		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fRadius;                                          		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UBioPower*                                   oPower;                                           		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bResult;                                          		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPower_DefensiveShieldBase.GetShieldValue
// [0x00020002] 
struct USFXPower_DefensiveShieldBase_execGetShieldValue_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.SFXPowerScript_DefensiveShieldBase.ShouldUsePower
// [0x00420002] 
struct USFXPowerScript_DefensiveShieldBase_execShouldUsePower_Parms
{
	class AActor*                                      Caster;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Target;                                           		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class FString                                      sOptionalInfo;                                    		// 0x0010 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0020 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 oPawn;                                            		// 0x0024 (0x0008) [0x0000000000000000]              
	// class ASFXAI_Core*                              AI;                                               		// 0x002C (0x0008) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0034 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_DefensiveShieldBase.OnImpact
// [0x00020802] ( FUNC_Event )
struct USFXPowerScript_DefensiveShieldBase_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x001C (0x0008) [0x0000000000000000]              
	// class USFXGameEffect_GiveShield*                ShieldEffect;                                     		// 0x0024 (0x0008) [0x0000000000000000]              
	// float                                           fDuration;                                        		// 0x002C (0x0004) [0x0000000000000000]              
	// float                                           fVFXDuration;                                     		// 0x0030 (0x0004) [0x0000000000000000]              
	// float                                           fShieldBonus;                                     		// 0x0034 (0x0004) [0x0000000000000000]              
	// class ABioPawn*                                 oCasterPawn;                                      		// 0x0038 (0x0008) [0x0000000000000000]              
	// float                                           fBaseMaxShields;                                  		// 0x0040 (0x0004) [0x0000000000000000]              
	// class ASFXShield_Base*                          Shields;                                          		// 0x0044 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_DefensiveShieldBase.OnShieldDestroyed
// [0x00020002] 
struct USFXPowerScript_DefensiveShieldBase_execOnShieldDestroyed_Parms
{
	class AActor*                                      ShieldActor;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class ASFXShield_Base*                             Shield;                                           		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.SFXPowerScript_DefensiveShieldBase.InitializePowerScript
// [0x00020802] ( FUNC_Event )
struct USFXPowerScript_DefensiveShieldBase_eventInitializePowerScript_Parms
{
	// class ASFXShield_Base*                          Shield;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 OwnerPawn;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
};



#undef LESDK_IN_GENERATED

#ifdef _MSC_VER
	#pragma pack ( pop )
#endif
