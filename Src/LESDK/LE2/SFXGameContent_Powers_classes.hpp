/*
#############################################################################################
# Mass Effect 2 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.5_Beta-Rev.60-MELE
# ========================================================================================= #
# File: SFXGameContent_Powers_classes.hpp
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

#define CONST_TELEPORT_HEIGHT_THRESHOLD                          1000.f
#define CONST_TELEPORT_VISIBLE_THRESHOLD                         0.5f

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

// Class SFXGameContent_Powers.SFXPower_HenchmanPassive
// 0x0020 (0x01DC - 0x01BC)
class USFXPower_HenchmanPassive : public USFXPower_PassivePower
{
public:
	class TArray<float>                                HealthBonus;                                      		// 0x01BC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class TArray<float>                                WeaponDamageBonus;                                		// 0x01CC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_TaliPassive
// 0x0010 (0x01EC - 0x01DC)
class USFXPower_TaliPassive : public USFXPower_HenchmanPassive
{
public:
	class TArray<float>                                DurationBonus;                                    		// 0x01DC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_TaliPassive_Evolved2
// 0x0000 (0x01EC - 0x01EC)
class USFXPower_TaliPassive_Evolved2 : public USFXPower_TaliPassive
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_TaliPassive_Evolved1
// 0x0000 (0x01EC - 0x01EC)
class USFXPower_TaliPassive_Evolved1 : public USFXPower_TaliPassive
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPowerScript_PassivePower
// 0x0000 (0x00EC - 0x00EC)
class USFXPowerScript_PassivePower : public UBioPowerScriptDesign
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void RemovePowerBonusEffect ( class AActor* oTarget, class UClass* ClassName, struct SFXName nmCategory, class UClass* PowerClass );
	void ApplyPowerBonusEffect ( class AActor* oTarget, class UClass* ClassName, float fEffectValue, struct SFXName nmCategory, class UClass* PowerClass );
	void ApplyHealthModifier ( float fHealthModifier, class AActor* Target );
	void ApplyWeaponDamageModifier ( float fDamageModifier, class AActor* Target );
	void ApplyPowerCooldownModifier ( float fCooldownModifier, class AActor* Target );
	void ApplyPassiveBonus ( class UClass* EffectClass, float fModifier, class AActor* Target );
	void ApplyGlobalBonus ( );
	void OnSquadMemberAdded ( class APawn* Pawn );
	void OnPowersLoaded ( );
	void OnPowerRankIncreased ( );
	void eventInitializePowerScript ( );
};

// Class SFXGameContent_Powers.SFXPowerScript_HenchmanPassive
// 0x0000 (0x00EC - 0x00EC)
class USFXPowerScript_HenchmanPassive : public USFXPowerScript_PassivePower
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void ApplyGlobalBonus ( );
};

// Class SFXGameContent_Powers.SFXPowerScript_TaliPassive
// 0x0000 (0x00EC - 0x00EC)
class USFXPowerScript_TaliPassive : public USFXPowerScript_HenchmanPassive
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void ApplyGlobalBonus ( );
};

// Class SFXGameContent_Powers.SFXPower_ShieldJack
// 0x0010 (0x01BC - 0x01AC)
class USFXPower_ShieldJack : public USFXPower
{
public:
	class TArray<float>                                ShieldBonusDuration;                              		// 0x01AC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_ShieldJack_Evolved2
// 0x0000 (0x01BC - 0x01BC)
class USFXPower_ShieldJack_Evolved2 : public USFXPower_ShieldJack
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_ShieldJack_Evolved1
// 0x0000 (0x01BC - 0x01BC)
class USFXPower_ShieldJack_Evolved1 : public USFXPower_ShieldJack
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_LoyaltyRequirement
// 0x0000 (0x01AC - 0x01AC)
class USFXPower_LoyaltyRequirement : public USFXPower
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_CombatDroneAttack
// 0x001C (0x01C8 - 0x01AC)
class USFXPower_CombatDroneAttack : public USFXPower
{
public:
	class TArray<unsigned char>                        AnimatedReactions;                                		// 0x01AC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      DamageClass;                                      		// 0x01BC (0x0008) [0x0000000000000000]              
	unsigned long                                      bPlayAnimatedReaction : 1;                        		// 0x01C4 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_CombatDroneShock
// 0x0000 (0x01C8 - 0x01C8)
class USFXPower_CombatDroneShock : public USFXPower_CombatDroneAttack
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPowerScript_CombatDroneDeath
// 0x0010 (0x00FC - 0x00EC)
class USFXPowerScript_CombatDroneDeath : public UBioPowerScriptDesign
{
public:
	class USFXPower_CombatDroneDeath*                  m_oPower;                                         		// 0x00EC (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             PS_DeathVFX;                                      		// 0x00F4 (0x0008) [0x0000000004000000]              ( CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
	bool eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
};

// Class SFXGameContent_Powers.SFXPower_CombatDroneDeath
// 0x0000 (0x01AC - 0x01AC)
class USFXPower_CombatDroneDeath : public USFXPower
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPowerScript_CombatDroneAttack
// 0x0018 (0x0104 - 0x00EC)
class USFXPowerScript_CombatDroneAttack : public UBioPowerScriptDesign
{
public:
	class USFXPower_CombatDroneAttack*                 m_oPower;                                         		// 0x00EC (0x0008) [0x0000000000000000]              
	class UForceFeedbackWaveform*                      PlayerIsMeleedWaveForm;                           		// 0x00F4 (0x0008) [0x0000000000000000]              
	class UWwiseEvent*                                 NormalImpactSound;                                		// 0x00FC (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool ShouldUsePower ( class AActor* Caster, class AActor* Target, class FString* sOptionalInfo );
	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
	bool eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
};

// Class SFXGameContent_Powers.SFXPower_CombatDrone
// 0x0044 (0x01F0 - 0x01AC)
class USFXPower_CombatDrone : public USFXPower
{
public:
	class TArray<float>                                DroneAttackRate;                                  		// 0x01AC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class TArray<float>                                DroneHealthMultiplier;                            		// 0x01BC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      DroneClass;                                       		// 0x01CC (0x0008) [0x0000000000000000]              
	struct FVector                                     CustomDroneColor;                                 		// 0x01D4 (0x000C) [0x0000000000000000]              
	struct FVector                                     CustomDroneColor2;                                		// 0x01E0 (0x000C) [0x0000000000000000]              
	unsigned long                                      bCustomDroneColor : 1;                            		// 0x01EC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCustomDroneColor2 : 1;                           		// 0x01EC (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	float GetHealthMultiplier ( );
};

// Class SFXGameContent_Powers.SFXPower_CombatDrone_Tech
// 0x0008 (0x01F8 - 0x01F0)
class USFXPower_CombatDrone_Tech : public USFXPower_CombatDrone
{
public:
	float                                              ExplosionRadius;                                  		// 0x01F0 (0x0004) [0x0000000000000000]              
	float                                              ExplosionDamage;                                  		// 0x01F4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_CombatDrone_Tech_Hench
// 0x0000 (0x01F8 - 0x01F8)
class USFXPower_CombatDrone_Tech_Hench : public USFXPower_CombatDrone_Tech
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_CombatDrone_Tech_Tali
// 0x0000 (0x01F8 - 0x01F8)
class USFXPower_CombatDrone_Tech_Tali : public USFXPower_CombatDrone_Tech_Hench
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_CombatDrone_Rocket
// 0x0000 (0x01F0 - 0x01F0)
class USFXPower_CombatDrone_Rocket : public USFXPower_CombatDrone
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_CombatDrone_Rocket_Hench
// 0x0000 (0x01F0 - 0x01F0)
class USFXPower_CombatDrone_Rocket_Hench : public USFXPower_CombatDrone_Rocket
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_CombatDrone_Rocket_Tali
// 0x0000 (0x01F0 - 0x01F0)
class USFXPower_CombatDrone_Rocket_Tali : public USFXPower_CombatDrone_Rocket_Hench
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_CombatDrone_Tali
// 0x0000 (0x01F0 - 0x01F0)
class USFXPower_CombatDrone_Tali : public USFXPower_CombatDrone
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_AIHacking
// 0x0010 (0x01BC - 0x01AC)
class USFXPower_AIHacking : public USFXPower
{
public:
	class TArray<float>                                ShieldStrength;                                   		// 0x01AC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_AIHacking_Tali
// 0x0000 (0x01BC - 0x01BC)
class USFXPower_AIHacking_Tali : public USFXPower_AIHacking
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_AIHacking_Radius
// 0x0000 (0x01BC - 0x01BC)
class USFXPower_AIHacking_Radius : public USFXPower_AIHacking
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_AIHacking_Radius_Hench
// 0x0000 (0x01BC - 0x01BC)
class USFXPower_AIHacking_Radius_Hench : public USFXPower_AIHacking_Radius
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_AIHacking_Heavy
// 0x0000 (0x01BC - 0x01BC)
class USFXPower_AIHacking_Heavy : public USFXPower_AIHacking
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_AIHacking_Heavy_Hench
// 0x0000 (0x01BC - 0x01BC)
class USFXPower_AIHacking_Heavy_Hench : public USFXPower_AIHacking_Heavy
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPawn_EngineerCombatDrone
// 0x004C (0x0BB0 - 0x0B64)
class ASFXPawn_EngineerCombatDrone : public ASFXPawn
{
public:
	struct FScriptDelegate                             __OnDroneKilled__Delegate;                        		// 0x0B64 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FVector                                     DroneColor;                                       		// 0x0B74 (0x000C) [0x0000000000000000]              
	struct FVector                                     DroneColor2;                                      		// 0x0B80 (0x000C) [0x0000000000000000]              
	class ABioPawn*                                    Caster;                                           		// 0x0B8C (0x0008) [0x0000000000000000]              
	class UParticleSystemComponent*                    PSC_Active;                                       		// 0x0B94 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    PSC_Spawn;                                        		// 0x0B9C (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystem*                             PS_DeathVFX;                                      		// 0x0BA4 (0x0008) [0x0000000004000000]              ( CPF_EditInline )
	unsigned long                                      bCustomColor : 1;                                 		// 0x0BAC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCustomColor2 : 1;                                		// 0x0BAC (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void PlayDeathVocalization ( class ABioPawn* Killer );
	void eventDestroyed ( );
	bool eventDied ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation );
	void SetDroneColor2 ( struct FVector NewColor );
	void SetDroneColor ( struct FVector NewColor );
	void PostBeginPlay ( );
	void OnDroneKilled ( );
};

// Class SFXGameContent_Powers.SFXPawn_EngineerTechDrone
// 0x0020 (0x0BD0 - 0x0BB0)
class ASFXPawn_EngineerTechDrone : public ASFXPawn_EngineerCombatDrone
{
public:
	class TArray<unsigned char>                        AnimatedReactions;                                		// 0x0BB0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UParticleSystem*                             DeathEffect;                                      		// 0x0BC0 (0x0008) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	class UWwiseEvent*                                 ExplosionSound;                                   		// 0x0BC8 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void SpawnDeathVFX ( );
	bool eventDied ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation );
};

// Class SFXGameContent_Powers.SFXPawn_EngineerTechDrone_Tali
// 0x0000 (0x0BD0 - 0x0BD0)
class ASFXPawn_EngineerTechDrone_Tali : public ASFXPawn_EngineerTechDrone
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPawn_EngineerRocketDrone
// 0x0000 (0x0BB0 - 0x0BB0)
class ASFXPawn_EngineerRocketDrone : public ASFXPawn_EngineerCombatDrone
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPawn_EngineerRocketDrone_Tali
// 0x0000 (0x0BB0 - 0x0BB0)
class ASFXPawn_EngineerRocketDrone_Tali : public ASFXPawn_EngineerRocketDrone
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPawn_EngineerCombatDrone_Tali
// 0x0000 (0x0BB0 - 0x0BB0)
class ASFXPawn_EngineerCombatDrone_Tali : public ASFXPawn_EngineerCombatDrone
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXGameEffect_PowerBonus
// 0x000B (0x009C - 0x0091)
class USFXGameEffect_PowerBonus : public USFXGameEffect
{
public:
	class UClass*                                      PowerClass;                                       		// 0x0094 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXDamageType_CombatDroneShock
// 0x0003 (0x0114 - 0x0111)
class USFXDamageType_CombatDroneShock : public USFXDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXDamageType_ImprovedShieldJack
// 0x0000 (0x0114 - 0x0114)
class USFXDamageType_ImprovedShieldJack : public USFXDamageType_ShieldJack
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.BioShieldJackScript
// 0x0020 (0x010C - 0x00EC)
class UBioShieldJackScript : public UBioPowerScriptDesign
{
public:
	class USFXPower_ShieldJack*                        m_oPower;                                         		// 0x00EC (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             HealEffect;                                       		// 0x00F4 (0x0008) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	class UBioVFXTemplate*                             m_oCrustEffect;                                   		// 0x00FC (0x0008) [0x0000000000000000]              
	class UWwiseEvent*                                 Hit;                                              		// 0x0104 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool ShouldUsePower ( class AActor* Caster, class AActor* Target, class FString* sOptionalInfo );
	float GetCurrentEnergyShields ( class ABioPawn* oPawn );
	void SpawnImpactVFX ( struct FVector Location, class UParticleSystem* PS );
	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
	bool eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
};

// Class SFXGameContent_Powers.SFXGameEffect_HenchmenIgnorePawn
// 0x0003 (0x0094 - 0x0091)
class USFXGameEffect_HenchmenIgnorePawn : public USFXGameEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void OnRemoved ( );
	void OnApplied ( );
};

// Class SFXGameContent_Powers.BioHackingScript
// 0x0028 (0x0114 - 0x00EC)
class UBioHackingScript : public UBioPowerScriptDesign
{
public:
	class TArray<class AActor*>                        m_oCurrentHackedTargets;                          		// 0x00EC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USFXPower_AIHacking*                         m_oPower;                                         		// 0x00FC (0x0008) [0x0000000000000000]              
	class UBioVFXTemplate*                             m_VFXTemplate;                                    		// 0x0104 (0x0008) [0x0000000000000000]              
	class UWwiseEvent*                                 ImpactSound;                                      		// 0x010C (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool ShouldUsePower ( class AActor* Caster, class AActor* Target, class FString* sOptionalInfo );
	bool IsHacked ( class ABioPawn* oPawn );
	bool RemoveWeakerHack ( class ABioPawn* oPawn, float fNewDuration );
	void UnHackPreviousTargets ( class AActor* oCaster );
	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
	bool eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
};

// Class SFXGameContent_Powers.SFXGameEffect_IgnorePawn
// 0x0003 (0x0094 - 0x0091)
class USFXGameEffect_IgnorePawn : public USFXGameEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void OnRemoved ( );
	void OnApplied ( );
};

// Class SFXGameContent_Powers.BioCombatDroneScript
// 0x0020 (0x010C - 0x00EC)
class UBioCombatDroneScript : public UBioPowerScriptDesign
{
public:
	class AActor*                                      DroneActor;                                       		// 0x00EC (0x0008) [0x0000000000000000]              
	class USFXPower_CombatDrone*                       m_oPower;                                         		// 0x00F4 (0x0008) [0x0000000000000000]              
	float                                              m_fDroneOffset;                                   		// 0x00FC (0x0004) [0x0000000000000000]              
	int                                                NotRecommended_DroneDeployed;                     		// 0x0100 (0x0004) [0x0000000000000000]              
	float                                              PlayerRightYawOffset;                             		// 0x0104 (0x0004) [0x0000000000000000]              
	float                                              PlayerLeftYawOffset;                              		// 0x0108 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool ShouldUsePower ( class AActor* Caster, class AActor* Target, class FString* sOptionalInfo );
	void OnDroneKilled ( );
	void DespawnDrone ( );
	void OnOwnerDied ( );
	void OnPowerRankIncreased ( );
	class ABioPawn* SpawnDrone ( class ABioPawn* oCaster, class UClass* DroneClass, struct FVector Location, struct FRotator Rotation, float HealthMultiplier, float Lifetime, unsigned long bCustomColor, struct FVector CustomColor, unsigned long bCustomColor2, struct FVector CustomColor2, class AActor* DroneTarget );
	struct FVector GetSpawnLocation ( );
	struct FVector GetBackLocation ( class AActor* Target );
	struct FVector GetFrontLocation ( class AActor* Target, float YawOffset );
	bool IsSafeSpawnLocation ( struct FVector* SpawnLocation );
	bool IsDroneAlive ( );
	bool eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
	bool eventCanStartPower ( class AActor* oCaster );
};

// Class SFXGameContent_Powers.BioWeaponPowerScript
// 0x0038 (0x0124 - 0x00EC)
class UBioWeaponPowerScript : public UBioPowerScriptDesign
{
public:
	class UClass*                                      WeaponPowerEffectClass;                           		// 0x00EC (0x0008) [0x0000000000000000]              
	class UStaticMesh*                                 oTracer;                                          		// 0x00F4 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             oImpactVFX;                                       		// 0x00FC (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             oMuzzleVFX;                                       		// 0x0104 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             oMuzzleLoopVFX;                                   		// 0x010C (0x0008) [0x0000000000000000]              
	class AActor*                                      m_oCaster;                                        		// 0x0114 (0x0008) [0x0000000000000000]              
	int                                                NotRecommended_HeavyWeaponEquipped;               		// 0x011C (0x0004) [0x0000000000000000]              
	unsigned long                                      bModifyTracer : 1;                                		// 0x0120 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bModifyImpactVFX : 1;                             		// 0x0120 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bModifyMuzzle : 1;                                		// 0x0120 (0x0004) [0x0000000000000000] [0x00000004] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool ShouldUsePower ( class AActor* Caster, class AActor* Target, class FString* sOptionalInfo );
	void ApplyPowerEffects ( class ABioPawn* oPawn, class ASFXWeapon* oWeapon );
	bool SetWeaponPower ( class ABioPawn* oPawn, class ASFXWeapon* oWeapon, unsigned long bOverrideCurrentPower );
	void ReloadAmmoPower ( class ABioPawn* Target, class ASFXWeapon* Weapon );
	bool eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
	bool ApplyToSquadMembers ( );
	float GetDuration ( );
	float GetElapsedTime ( );
	bool eventCanStartPower ( class AActor* oCaster );
};

// Class SFXGameContent_Powers.SFXGameEffect_AmmoPower
// 0x003B (0x00CC - 0x0091)
class USFXGameEffect_AmmoPower : public USFXGameEffect
{
public:
	class UParticleSystem*                             HologramTemplate;                                 		// 0x0094 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             IconTemplate;                                     		// 0x009C (0x0008) [0x0000000000000000]              
	class ASFXWeapon*                                  OwnerWeapon;                                      		// 0x00A4 (0x0008) [0x0000000000000000]              
	class ABioPawn*                                    OwnerPawn;                                        		// 0x00AC (0x0008) [0x0000000000000000]              
	class UWwiseEvent*                                 NormalImpactSound;                                		// 0x00B4 (0x0008) [0x0000000000000000]              
	class UWwiseEvent*                                 WeaponFireSound;                                  		// 0x00BC (0x0008) [0x0000000000000000]              
	float                                              BulletsPerSecond;                                 		// 0x00C4 (0x0004) [0x0000000000000000]              
	unsigned long                                      bWeaponUnequipped : 1;                            		// 0x00C8 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void RemoveWeaponHologram ( );
	void EnableWeaponHologram ( );
	void OnWeaponUnequip ( class ASFXWeapon* Weapon );
	void OnWeaponEquip ( class ASFXWeapon* Weapon );
	void OnWeaponReload ( class ASFXWeapon* Weapon );
	float GetDamageVocProbabilityMod ( );
	void OnWeaponImpact ( class ASFXWeapon* Weapon, struct FImpactInfo Impact );
	void OnRemoved ( );
	void OnApplied ( );
};

// Class SFXGameContent_Powers.BioCarnageScript
// 0x0008 (0x012C - 0x0124)
class UBioCarnageScript : public UBioWeaponPowerScript
{
public:
	class USFXPower_IncendiaryAmmo*                    m_oPower;                                         		// 0x0124 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void ApplyPowerEffects ( class ABioPawn* oPawn, class ASFXWeapon* oWeapon );
	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
	bool eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
	bool ApplyToSquadMembers ( );
	void eventInitializePowerScript ( );
};

// Class SFXGameContent_Powers.SFXPower_IncendiaryAmmo
// 0x0028 (0x01D4 - 0x01AC)
class USFXPower_IncendiaryAmmo : public USFXPower
{
public:
	class TArray<float>                                ReactionChance;                                   		// 0x01AC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              AreaExplosionRadius;                              		// 0x01BC (0x0004) [0x0000000000000000]              
	float                                              AreaExplosionChance;                              		// 0x01C0 (0x0004) [0x0000000000000000]              
	float                                              AreaExplosionDamage;                              		// 0x01C4 (0x0004) [0x0000000000000000]              
	float                                              RobotDamageMultiplier;                            		// 0x01C8 (0x0004) [0x0000000000000000]              
	float                                              fFlameDuration;                                   		// 0x01CC (0x0004) [0x0000000000000000]              
	unsigned long                                      bSquadPower : 1;                                  		// 0x01D0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bSpawnImpactFlames : 1;                           		// 0x01D0 (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXGameEffect_IncendiaryAmmo
// 0x0038 (0x0104 - 0x00CC)
class USFXGameEffect_IncendiaryAmmo : public USFXGameEffect_AmmoPower
{
public:
	class UParticleSystem*                             PS_ImpactEffect;                                  		// 0x00CC (0x0008) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	class UParticleSystem*                             PS_FlameEffect;                                   		// 0x00D4 (0x0008) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	class UParticleSystem*                             PS_FireSpreadEffect;                              		// 0x00DC (0x0008) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	float                                              AreaExplosionChance;                              		// 0x00E4 (0x0004) [0x0000000000000000]              
	float                                              AreaExplosionDamage;                              		// 0x00E8 (0x0004) [0x0000000000000000]              
	float                                              AreaExplosionRadius;                              		// 0x00EC (0x0004) [0x0000000000000000]              
	float                                              RobotDamageMultiplier;                            		// 0x00F0 (0x0004) [0x0000000000000000]              
	float                                              AnimatedReactionChance;                           		// 0x00F4 (0x0004) [0x0000000000000000]              
	float                                              Damage;                                           		// 0x00F8 (0x0004) [0x0000000000000000]              
	float                                              DamageDuration;                                   		// 0x00FC (0x0004) [0x0000000000000000]              
	unsigned long                                      bSpawnImpactFlames : 1;                           		// 0x0100 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void CauseAnimatedReaction ( class AActor* oHitActor, float fDelay );
	void AddGameEffects ( class AActor* oTarget, float fDuration, float fDamagePerSecond, class ABioPawn* BPInstigator );
	void DoEvolvedAoEImpact ( struct FImpactInfo Impact, class ABioPawn* WeaponOwner, class ASFXWeapon* Weapon );
	float GetDamageVocProbabilityMod ( );
	void OnWeaponImpact ( class ASFXWeapon* Weapon, struct FImpactInfo Impact );
};

// Class SFXGameContent_Powers.BioReactionPowerScript
// 0x0018 (0x0104 - 0x00EC)
class UBioReactionPowerScript : public UBioPowerScriptDesign
{
public:
	unsigned char                                      Rank1Reactions[ 0x6 ];                            		// 0x00EC (0x0006) [0x0000000000000000]              
	unsigned char                                      Rank2Reactions[ 0x6 ];                            		// 0x00F2 (0x0006) [0x0000000000000000]              
	unsigned char                                      Rank3Reactions[ 0x6 ];                            		// 0x00F8 (0x0006) [0x0000000000000000]              
	unsigned char                                      Rank4Reactions[ 0x6 ];                            		// 0x00FE (0x0006) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	unsigned char GetIncreasedReaction ( class AActor* oTarget, unsigned char Reaction );
	unsigned char GetCombatReaction ( int PowerRank, class AActor* oTarget, unsigned long ReactionStacks );
};

// Class SFXGameContent_Powers.BioPlayerMeleeScript
// 0x00BC (0x01C0 - 0x0104)
class UBioPlayerMeleeScript : public UBioReactionPowerScript
{
public:
	struct FInterpCurveFloat                           SlowDown;                                         		// 0x0104 (0x0014) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScreenShakeStruct                          Shake;                                            		// 0x0118 (0x0070) [0x0000000000000000]              
	struct FVector                                     m_vCasterLocation;                                		// 0x0188 (0x000C) [0x0000000000000000]              
	struct FVector                                     LungeDirection;                                   		// 0x0194 (0x000C) [0x0000000000000000]              
	class UForceFeedbackWaveform*                      PlayerPerformsMeleeWaveForm;                      		// 0x01A0 (0x0008) [0x0000000000000000]              
	class UForceFeedbackWaveform*                      PlayerIsMeleedWaveForm;                           		// 0x01A8 (0x0008) [0x0000000000000000]              
	class USFXPower_PlayerMelee*                       m_oPower;                                         		// 0x01B0 (0x0008) [0x0000000000000000]              
	float                                              RecentlyMeleedTime;                               		// 0x01B8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              MeleeCooldown;                                    		// 0x01BC (0x0004) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventEndPhase ( unsigned char ePhase, class AActor* oCaster );
	void RemoveMeleeEffects ( class ABioPawn* oPawn );
	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
	void Tick ( float DeltaTime );
	bool eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
};

// Class SFXGameContent_Powers.SFXPower_PlayerMelee
// 0x000C (0x01B8 - 0x01AC)
class USFXPower_PlayerMelee : public USFXPower
{
public:
	class UWwiseEvent*                                 WwiseImpactEvent;                                 		// 0x01AC (0x0008) [0x0000000000000000]              
	int                                                MaxPhysicsLevel;                                  		// 0x01B4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXDamageType_BioticCharge
// 0x0003 (0x0114 - 0x0111)
class USFXDamageType_BioticCharge : public USFXDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXDamageType_CryoAmmo
// 0x0003 (0x0114 - 0x0111)
class USFXDamageType_CryoAmmo : public USFXDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXDamageType_Shockwave
// 0x0003 (0x0114 - 0x0111)
class USFXDamageType_Shockwave : public USFXDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXGameEffect_CryoAmmo
// 0x0014 (0x00E0 - 0x00CC)
class USFXGameEffect_CryoAmmo : public USFXGameEffect_AmmoPower
{
public:
	class UParticleSystem*                             ImpactEffect;                                     		// 0x00CC (0x0008) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	float                                              Damage;                                           		// 0x00D4 (0x0004) [0x0000000000000000]              
	float                                              FreezeChance;                                     		// 0x00D8 (0x0004) [0x0000000000000000]              
	float                                              FreezeDuration;                                   		// 0x00DC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	float GetDamageVocProbabilityMod ( );
	void OnWeaponImpact ( class ASFXWeapon* Weapon, struct FImpactInfo Impact );
};

// Class SFXGameContent_Powers.SFXPower_BioticCharge
// 0x0040 (0x01EC - 0x01AC)
class USFXPower_BioticCharge : public USFXPower
{
public:
	class TArray<unsigned char>                        AnimatedReactions;                                		// 0x01AC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class TArray<float>                                BioticShieldStrength;                             		// 0x01BC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class TArray<float>                                BioticShieldDuration;                             		// 0x01CC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              StingerDuration;                                  		// 0x01DC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              StingerSlowPct;                                   		// 0x01E0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PhysicsImpactDamageMult;                          		// 0x01E4 (0x0004) [0x0000000000000000]              
	float                                              FrozenTargetForceMult;                            		// 0x01E8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	float GetConeAngle ( );
};

// Class SFXGameContent_Powers.SFXPowerScript_BioticCharge
// 0x0150 (0x023C - 0x00EC)
class USFXPowerScript_BioticCharge : public UBioPowerScriptDesign
{
public:
	struct FInterpCurveFloat                           TimeCurve;                                        		// 0x00EC (0x0014) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class FString                                      FailedLineCheckName;                              		// 0x0100 (0x0010) [0x0000000000402001]              ( CPF_Edit | CPF_Transient | CPF_NeedCtorLink )
	class TArray<struct FCharge_PendingVolume>         VolumeList;                                       		// 0x0110 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FScreenShakeStruct                          HitShake;                                         		// 0x0120 (0x0070) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     CachedTeleportLocation;                           		// 0x0190 (0x000C) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FVector                                     CachedTargetLocation;                             		// 0x019C (0x000C) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FVector                                     FailedLineCheckStart;                             		// 0x01A8 (0x000C) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FVector                                     FailedLineCheckEnd;                               		// 0x01B4 (0x000C) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	class USFXPower_BioticCharge*                      LocalPower;                                       		// 0x01C0 (0x0008) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	class APawn*                                       Caster;                                           		// 0x01C8 (0x0008) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	class APawn*                                       CachedTarget;                                     		// 0x01D0 (0x0008) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	class UParticleSystem*                             PS_TeleportIn;                                    		// 0x01D8 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             PS_TeleportOut;                                   		// 0x01E0 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UBioVFXTemplate*                             CrustEffect;                                      		// 0x01E8 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class ASFXProjectile_Power_BioticCharge*           ChargeProjectile;                                 		// 0x01F0 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class USFXCameraTransition_VanguardSlam*           CamTransition;                                    		// 0x01F8 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UForceFeedbackWaveform*                      HitForceFeedback;                                 		// 0x0200 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UWwiseEvent*                                 ChargeCast;                                       		// 0x0208 (0x0008) [0x0000000000000000]              
	class UWwiseEvent*                                 ChargeImpact;                                     		// 0x0210 (0x0008) [0x0000000000000000]              
	float                                              TeleportStartDelay;                               		// 0x0218 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TeleportDelay;                                    		// 0x021C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ImpactDelay;                                      		// 0x0220 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ImpactDelay_Min;                                  		// 0x0224 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ImpactDelay_Max;                                  		// 0x0228 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TimeStingerDelay;                                 		// 0x022C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CounterTimeScaleValue;                            		// 0x0230 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CameraImpactDelay;                                		// 0x0234 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bFailedToMoveCaster : 1;                          		// 0x0238 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bCollectedVolumes : 1;                            		// 0x0238 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bLineCheckToHead : 1;                             		// 0x0238 (0x0004) [0x0000000000000000] [0x00000004] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void DebugDraw_Power ( class ABioHUD* H );
	bool ShouldUsePower ( class AActor* oCaster, class AActor* Target, class FString* sOptionalInfo );
	void PlayFailedChargeEffects ( );
	void SpawnProjectile ( );
	void TimeStinger ( );
	void OnRagdollPhysicsImpact ( class APawn* oPawn, class AActor* oImpactActor, struct FVector vImpactDir );
	void DoChargeImpact ( class ABioPawn* OwnerPawn, class ABioPawn* HitBioPawn, unsigned long bUseOwnerRotation );
	void DoImpact ( );
	void Impact ( );
	void Teleport ( );
	void StartTeleport ( );
	bool StartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
	void Tick ( float DeltaTime );
	void FinalizePawnMove ( struct FVector* Loc, struct FVector* TargetLoc );
	bool ValidateTarget ( );
	bool FindSpace ( struct FVector Extent, class AActor* TraceActor, struct FVector* NearLocation );
	bool TryMove ( struct FVector NewLocation, struct FVector Dir, class APawn* CollisionActor );
	void CollectVolumes ( );
	bool ValidateTargetLocation ( struct FVector TargetLocation );
	bool TestPathReachability ( class ANavigationPoint* Anchor, struct FVector Extent, struct FVector* StartLocation );
	struct FVector NewVector ( float X, float Y, float Z );
	bool eventCanStartPower ( class AActor* oCaster );
};

// Class SFXGameContent_Powers.SFXPower_BioticCharge_Slam
// 0x0000 (0x01EC - 0x01EC)
class USFXPower_BioticCharge_Slam : public USFXPower_BioticCharge
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_BioticCharge_Radius
// 0x0000 (0x01EC - 0x01EC)
class USFXPower_BioticCharge_Radius : public USFXPower_BioticCharge
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_CryoAmmo
// 0x0014 (0x01C0 - 0x01AC)
class USFXPower_CryoAmmo : public USFXPower
{
public:
	class TArray<float>                                FreezeChance;                                     		// 0x01AC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bSquadPower : 1;                                  		// 0x01BC (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPowerScript_CryoAmmo
// 0x0008 (0x012C - 0x0124)
class USFXPowerScript_CryoAmmo : public UBioWeaponPowerScript
{
public:
	class USFXPower_CryoAmmo*                          m_oPower;                                         		// 0x0124 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void ApplyPowerEffects ( class ABioPawn* oPawn, class ASFXWeapon* oWeapon );
	bool eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
	bool ApplyToSquadMembers ( );
	void eventInitializePowerScript ( );
};

// Class SFXGameContent_Powers.SFXPower_CryoAmmo_Evolved1
// 0x0000 (0x01C0 - 0x01C0)
class USFXPower_CryoAmmo_Evolved1 : public USFXPower_CryoAmmo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_CryoAmmo_Evolved2
// 0x0000 (0x01C0 - 0x01C0)
class USFXPower_CryoAmmo_Evolved2 : public USFXPower_CryoAmmo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_CryoAmmo_Vanguard
// 0x0000 (0x01C0 - 0x01C0)
class USFXPower_CryoAmmo_Vanguard : public USFXPower_CryoAmmo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_IncendiaryAmmo_Vanguard
// 0x0000 (0x01D4 - 0x01D4)
class USFXPower_IncendiaryAmmo_Vanguard : public USFXPower_IncendiaryAmmo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_IncendiaryAmmo_Radius
// 0x0000 (0x01D4 - 0x01D4)
class USFXPower_IncendiaryAmmo_Radius : public USFXPower_IncendiaryAmmo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_IncendiaryAmmo_Squad
// 0x0000 (0x01D4 - 0x01D4)
class USFXPower_IncendiaryAmmo_Squad : public USFXPower_IncendiaryAmmo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_FirstAid
// 0x0000 (0x01AC - 0x01AC)
class USFXPower_FirstAid : public USFXPower
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPowerScript_FirstAid
// 0x0010 (0x00FC - 0x00EC)
class USFXPowerScript_FirstAid : public UBioPowerScriptDesign
{
public:
	class USFXPower_FirstAid*                          m_oPower;                                         		// 0x00EC (0x0008) [0x0000000000000000]              
	class UBioVFXTemplate*                             m_oCrustEffect;                                   		// 0x00F4 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	class FString GetHUDWheelIconInfo ( class ABioPawn* OwnerPawn );
	bool ShouldUsePower ( class AActor* Caster, class AActor* Target, class FString* sOptionalInfo );
	int CountMediGel ( class ABioPlayerSquad* oPlayerSquad );
	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
	bool eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
	bool eventCanStartPower ( class AActor* oCaster );
};

// Class SFXGameContent_Powers.SFXPower_PlayerMeleePistol
// 0x0000 (0x01B8 - 0x01B8)
class USFXPower_PlayerMeleePistol : public USFXPower_PlayerMelee
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_Pull
// 0x0030 (0x01DC - 0x01AC)
class USFXPower_Pull : public USFXPower
{
public:
	class TArray<float>                                GravityRampUpTime;                                		// 0x01AC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class TArray<unsigned char>                        AnimatedReactions;                                		// 0x01BC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              PhysicsImpactDamageMult;                          		// 0x01CC (0x0004) [0x0000000000000000]              
	float                                              MinimumVelocity;                                  		// 0x01D0 (0x0004) [0x0000000000000000]              
	float                                              MinimumVelocityForceMult;                         		// 0x01D4 (0x0004) [0x0000000000000000]              
	unsigned long                                      bSingleTarget : 1;                                		// 0x01D8 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPowerScript_PullProjectile
// 0x003C (0x0128 - 0x00EC)
class USFXPowerScript_PullProjectile : public UBioPowerScriptDesign
{
public:
	class TArray<class AActor*>                        m_oCurrentPulledTargets;                          		// 0x00EC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USFXPower_Pull*                              m_oPower;                                         		// 0x00FC (0x0008) [0x0000000000000000]              
	class UBioVFXTemplate*                             m_oCrustEffect;                                   		// 0x0104 (0x0008) [0x0000000000000000]              
	class UWwiseEvent*                                 ResistanceImpactSound;                            		// 0x010C (0x0008) [0x0000000000000000]              
	class UWwiseEvent*                                 NormalImpactSound;                                		// 0x0114 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             PS_AoE;                                           		// 0x011C (0x0008) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	unsigned long                                      bDroppedTargets : 1;                              		// 0x0124 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool ShouldUsePower ( class AActor* Caster, class AActor* Target, class FString* sOptionalInfo );
	void OnRagdollPhysicsImpact ( class APawn* oPawn, class AActor* oImpactActor, struct FVector vImpactDir );
	void DropCurrentTargets ( );
	void EffectPull ( class ABioPawn* oCasterPawn, class AActor* oImpacted, float fDuration, struct SFXName nmCategory, struct FVector vForce, float fGravityRampUpTime, float fMinVelocity, float fMinForceMult, struct SFXName nmPowerName );
	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
	void OnProjectileExploded ( class AActor* oCaster, struct FVector HitLocation, struct FVector HitNormal, struct FVector Velocity );
	bool eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
};

// Class SFXGameContent_Powers.SFXPower_Pull_Heavy
// 0x0000 (0x01DC - 0x01DC)
class USFXPower_Pull_Heavy : public USFXPower_Pull
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_Pull_Radius
// 0x0000 (0x01DC - 0x01DC)
class USFXPower_Pull_Radius : public USFXPower_Pull
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_PullProjectile
// 0x0000 (0x01DC - 0x01DC)
class USFXPower_PullProjectile : public USFXPower_Pull
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	float GetForcePerSecond ( );
};

// Class SFXGameContent_Powers.SFXProjectile_Power_Seeking
// 0x0038 (0x04CC - 0x0494)
class ASFXProjectile_Power_Seeking : public ASFXProjectile_Power
{
public:
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x0494 (0x000C) MISSED OFFSET
	struct FQuat                                       StartRotation;                                    		// 0x04A0 (0x0010) [0x0000000000002000]              ( CPF_Transient )
	class AActor*                                      AcquiredTarget;                                   		// 0x04B0 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	float                                              TimeAlive;                                        		// 0x04B8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              CurveShape;                                       		// 0x04BC (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              UpperBound;                                       		// 0x04C0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              InterpRate;                                       		// 0x04C4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bExplodeNextFrame : 1;                            		// 0x04C8 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void Recycle ( );
	void InitializeRotation ( class APawn* oCasterPawn );
	bool InitializePowerProjectile ( class AActor* oCaster, float fTravelSpeed, float fRadius, class UBioPower* oPower );
	bool CanLockOn ( class AActor* Target, class APawn* CasterPawn );
	void Tick ( float DeltaTime );
	bool ShouldModifyVelocity ( );
	float ChordLength ( float ChordLen, float Theta );
	struct FVector GetAimLocation ( class AActor* Target );
	void AcquireTarget ( class AActor* Target );
};

// Class SFXGameContent_Powers.SFXProjectile_Power_SuperSeeking
// 0x0000 (0x04CC - 0x04CC)
class ASFXProjectile_Power_SuperSeeking : public ASFXProjectile_Power_Seeking
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void InitializeRotation ( class APawn* oCasterPawn );
};

// Class SFXGameContent_Powers.SFXPower_PullProjectile_Heavy
// 0x0000 (0x01DC - 0x01DC)
class USFXPower_PullProjectile_Heavy : public USFXPower_Pull_Heavy
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_PullProjectile_Radius
// 0x0000 (0x01DC - 0x01DC)
class USFXPower_PullProjectile_Radius : public USFXPower_Pull_Radius
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_Pull_Vanguard
// 0x0000 (0x01DC - 0x01DC)
class USFXPower_Pull_Vanguard : public USFXPower_PullProjectile
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_Shockwave
// 0x0074 (0x0220 - 0x01AC)
class USFXPower_Shockwave : public USFXPower
{
public:
	class TArray<float>                                GravityLevel;                                     		// 0x01AC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class TArray<float>                                GravityDuration;                                  		// 0x01BC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class TArray<float>                                NumShockwaveImpacts;                              		// 0x01CC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class TArray<float>                                ShockwaveJumpDistance;                            		// 0x01DC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class TArray<float>                                TimeBetweenImpacts;                               		// 0x01EC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class TArray<float>                                ShockwaveRadius;                                  		// 0x01FC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class TArray<unsigned char>                        AnimatedReactions;                                		// 0x020C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              PhysicsImpactDamageMult;                          		// 0x021C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_Shockwave_Vanguard
// 0x0000 (0x0220 - 0x0220)
class USFXPower_Shockwave_Vanguard : public USFXPower_Shockwave
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_Shockwave_Evolved1
// 0x0000 (0x0220 - 0x0220)
class USFXPower_Shockwave_Evolved1 : public USFXPower_Shockwave
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_Shockwave_Evolved2
// 0x0000 (0x0220 - 0x0220)
class USFXPower_Shockwave_Evolved2 : public USFXPower_Shockwave
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPowerScript_Shockwave
// 0x0168 (0x0254 - 0x00EC)
class USFXPowerScript_Shockwave : public UBioPowerScriptDesign
{
public:
	class TArray<class AActor*>                        ImpactedActors;                                   		// 0x00EC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScreenShakeStruct                          NormalCameraShake;                                		// 0x00FC (0x0070) [0x0000000000000000]              
	struct FScreenShakeStruct                          HitCameraShake;                                   		// 0x016C (0x0070) [0x0000000000000000]              
	struct FVector                                     m_vShockwaveLocation;                             		// 0x01DC (0x000C) [0x0000000000000000]              
	struct FVector                                     m_vShockwaveDirection;                            		// 0x01E8 (0x000C) [0x0000000000000000]              
	class USFXPower_Shockwave*                         m_oPower;                                         		// 0x01F4 (0x0008) [0x0000000000000000]              
	class ABioPawn*                                    m_oCaster;                                        		// 0x01FC (0x0008) [0x0000000000000000]              
	class UForceFeedbackWaveform*                      WaveForm;                                         		// 0x0204 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             ShockwaveEffect;                                  		// 0x020C (0x0008) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	class UParticleSystem*                             HitWaveEffect;                                    		// 0x0214 (0x0008) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	class UBioVFXTemplate*                             m_oCrustEffect;                                   		// 0x021C (0x0008) [0x0000000000000000]              
	class UWwiseEvent*                                 ImpactSound;                                      		// 0x0224 (0x0008) [0x0000000000000000]              
	float                                              m_fShockwaveJumpDistance;                         		// 0x022C (0x0004) [0x0000000000000000]              
	int                                                m_nNumShockwaveImpacts;                           		// 0x0230 (0x0004) [0x0000000000000000]              
	float                                              m_fTimeBetweenImpacts;                            		// 0x0234 (0x0004) [0x0000000000000000]              
	float                                              m_fShockwaveRadius;                               		// 0x0238 (0x0004) [0x0000000000000000]              
	float                                              m_fGravityLevel;                                  		// 0x023C (0x0004) [0x0000000000000000]              
	float                                              m_fGravityDuration;                               		// 0x0240 (0x0004) [0x0000000000000000]              
	float                                              m_fForce;                                         		// 0x0244 (0x0004) [0x0000000000000000]              
	float                                              m_fDamage;                                        		// 0x0248 (0x0004) [0x0000000000000000]              
	float                                              m_fMinDistanceFromShepard;                        		// 0x024C (0x0004) [0x0000000000000000]              
	float                                              FirstShockwaveDelay;                              		// 0x0250 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool ShouldUsePower ( class AActor* Caster, class AActor* Target, class FString* sOptionalInfo );
	void OnRagdollPhysicsImpact ( class APawn* oPawn, class AActor* oImpactActor, struct FVector vImpactDir );
	void SpawnImpactVFX ( struct FVector Location, class UParticleSystem* PS );
	void DoImpact ( class ABioPawn* oCaster, struct FVector Location, float Radius, float Force, float GravityValue, float GravityDuration, float fResistanceDamage, class TArray<unsigned char> AnimatedReactions, struct SFXName Category );
	void MoveShockwave ( );
	void StartShockwave ( );
	bool eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
};

// Class SFXGameContent_Powers.SFXPower_VanguardPassive
// 0x0050 (0x020C - 0x01BC)
class USFXPower_VanguardPassive : public USFXPower_PassivePower
{
public:
	class TArray<float>                                HealthBonus;                                      		// 0x01BC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class TArray<float>                                CooldownReduction;                                		// 0x01CC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class TArray<float>                                WeaponDamageBonus;                                		// 0x01DC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class TArray<float>                                PowerDamageIncrease;                              		// 0x01EC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class TArray<float>                                PowerDurationIncrease;                            		// 0x01FC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPowerScript_VanguardPassive
// 0x0000 (0x00EC - 0x00EC)
class USFXPowerScript_VanguardPassive : public USFXPowerScript_PassivePower
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void ApplyGlobalBonus ( );
};

// Class SFXGameContent_Powers.SFXPower_VanguardPassive_Evolved1
// 0x0000 (0x020C - 0x020C)
class USFXPower_VanguardPassive_Evolved1 : public USFXPower_VanguardPassive
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_VanguardPassive_Evolved2
// 0x0000 (0x020C - 0x020C)
class USFXPower_VanguardPassive_Evolved2 : public USFXPower_VanguardPassive
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXProjectile_Power_BioticCharge
// 0x0000 (0x0330 - 0x0330)
class ASFXProjectile_Power_BioticCharge : public ASFXProjectile
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXDamageType_Reave
// 0x0003 (0x0114 - 0x0111)
class USFXDamageType_Reave : public USFXDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXGameEffect_Reave
// 0x0008 (0x009C - 0x0094)
class USFXGameEffect_Reave : public USFXGameEffect_DamageOverTime
{
public:
	float                                              HealthRegenMult;                                  		// 0x0094 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsMachine : 1;                                   		// 0x0098 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	class UClass* GetDamageType ( );
	void OnUpdate ( float DeltaSeconds );
	void OnApplied ( );
};

// Class SFXGameContent_Powers.SFXPower_Reave
// 0x0040 (0x01EC - 0x01AC)
class USFXPower_Reave : public USFXPower
{
public:
	class TArray<float>                                HealthRegenMult;                                  		// 0x01AC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class TArray<unsigned char>                        AnimatedReactions;                                		// 0x01BC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class TArray<unsigned char>                        ResistanceReactions;                              		// 0x01CC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class TArray<float>                                HealthBonusDuration;                              		// 0x01DC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPowerScript_Reave
// 0x0020 (0x010C - 0x00EC)
class USFXPowerScript_Reave : public UBioPowerScriptDesign
{
public:
	class USFXPower_Reave*                             m_oPower;                                         		// 0x00EC (0x0008) [0x0000000000000000]              
	class UBioVFXTemplate*                             m_oCrustEffect;                                   		// 0x00F4 (0x0008) [0x0000000000000000]              
	class UBioVFXTemplate*                             m_oHealCrustEffect;                               		// 0x00FC (0x0008) [0x0000000000000000]              
	class UWwiseEvent*                                 HealSound;                                        		// 0x0104 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool ShouldUsePower ( class AActor* Caster, class AActor* Target, class FString* sOptionalInfo );
	void SpawnImpactVFX ( struct FVector Location, class UParticleSystem* PS );
	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
	bool eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
};

// Class SFXGameContent_Powers.SFXPower_Reave_Evolved1
// 0x0000 (0x01EC - 0x01EC)
class USFXPower_Reave_Evolved1 : public USFXPower_Reave
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_Reave_Evolved2
// 0x0000 (0x01EC - 0x01EC)
class USFXPower_Reave_Evolved2 : public USFXPower_Reave
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_Reave_Evolved1_Player
// 0x0000 (0x01EC - 0x01EC)
class USFXPower_Reave_Evolved1_Player : public USFXPower_Reave_Evolved1
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_Reave_Evolved2_Player
// 0x0000 (0x01EC - 0x01EC)
class USFXPower_Reave_Evolved2_Player : public USFXPower_Reave_Evolved2
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_Reave_Player
// 0x0000 (0x01EC - 0x01EC)
class USFXPower_Reave_Player : public USFXPower_Reave
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXCustomAction_MechDogBite
// 0x008F (0x0120 - 0x0091)
class USFXCustomAction_MechDogBite : public UBioCustomAction
{
public:
	struct FScreenShakeStruct                          HitShake;                                         		// 0x0094 (0x0070) [0x0000000000000001]              ( CPF_Edit )
	struct FBodyStance                                 BS_Swipe;                                         		// 0x0104 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	class UAnimSet*                                    BiteAnimset;                                      		// 0x0110 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UForceFeedbackWaveform*                      HitForceFeedback;                                 		// 0x0118 (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void Cleanup ( );
	void StopCustomAction ( );
	void BodyStanceAnimEndNotification ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	void Impact ( );
	void StartCustomAction ( );
};

// Class SFXGameContent_Powers.SFXPower_MechDog
// 0x0018 (0x01C4 - 0x01AC)
class USFXPower_MechDog : public USFXPower
{
public:
	struct FVector2D                                   DamageNPC;                                        		// 0x01AC (0x0008) [0x0000000000000000]              
	struct FVector2D                                   ForceNPC;                                         		// 0x01B4 (0x0008) [0x0000000000000000]              
	class UWwiseEvent*                                 WwiseImpactEvent;                                 		// 0x01BC (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXDamageType_CombatDroneAttack_NPC
// 0x0000 (0x0114 - 0x0114)
class USFXDamageType_CombatDroneAttack_NPC : public USFXDamageType_Default
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXGameEffect_CloakVFX
// 0x0067 (0x00F8 - 0x0091)
class USFXGameEffect_CloakVFX : public USFXGameEffect
{
public:
	class TArray<struct FMaterialMapStruct>            MaterialMap;                                      		// 0x0094 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UMaterialInstance*                           EyeInvisibleMaterial;                             		// 0x00A4 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInstance*                           InvisibleMaterial;                                		// 0x00AC (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UBioVFXTemplate*                             StartCrustVFX;                                    		// 0x00B4 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UBioVFXTemplate*                             EndCrustVFX;                                      		// 0x00BC (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class ABioVisualEffect*                            StartCrust;                                       		// 0x00C4 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UWwiseEvent*                                 CloakActivatedSound;                              		// 0x00CC (0x0008) [0x0000000000000000]              
	class UWwiseEvent*                                 CloakDeactivatedSound;                            		// 0x00D4 (0x0008) [0x0000000000000000]              
	float                                              TransitionPosition;                               		// 0x00DC (0x0004) [0x0000000000000000]              
	float                                              ParameterTransitionTime;                          		// 0x00E0 (0x0004) [0x0000000000000000]              
	float                                              CrustEffectTime;                                  		// 0x00E4 (0x0004) [0x0000000000000000]              
	float                                              EndTransitionDeltaTime;                           		// 0x00E8 (0x0004) [0x0000000000000000]              
	int                                                MaleEyesMaterialID;                               		// 0x00EC (0x0004) [0x0000000000000000]              
	int                                                FemaleEyesMaterialID;                             		// 0x00F0 (0x0004) [0x0000000000000000]              
	unsigned long                                      bMaterialsSwapped : 1;                            		// 0x00F4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bScaleDownParameter : 1;                          		// 0x00F4 (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void EndStealthVFX ( );
	void RestoreMeshMaterials ( class USkeletalMeshComponent* Mesh );
	void TransitionOff ( );
	void DelayedTransitionOff ( );
	void OnRemoved ( );
	void OnUpdate ( float DeltaSeconds );
	void StartTransition ( );
	void SwapMeshMaterials ( class USkeletalMeshComponent* oSkeletalMesh );
	void SwapInvisibleMaterials ( );
	void StoreMeshMaterials ( class USkeletalMeshComponent* oSkeletalMesh );
	void StoreStartingMaterials ( );
	void OnApplied ( );
};

// Class SFXGameContent_Powers.SFXGameEffect_OverheatWeapons
// 0x0023 (0x00B4 - 0x0091)
class USFXGameEffect_OverheatWeapons : public USFXGameEffect
{
public:
	class ABioPawn*                                    Pawn;                                             		// 0x0094 (0x0008) [0x0000000000000000]              
	class ASFXWeapon*                                  Weapon;                                           		// 0x009C (0x0008) [0x0000000000000000]              
	class UParticleSystemComponent*                    OverheatPSCO;                                     		// 0x00A4 (0x0008) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              OverheatFrequency;                                		// 0x00AC (0x0004) [0x0000000000000000]              
	float                                              OverheatTimer;                                    		// 0x00B0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void OnRemoved ( );
	void OverheatWeapon ( );
	void OnUpdate ( float DeltaSeconds );
	void OnApplied ( );
};

// Class SFXGameContent_Powers.SFXPawn_EngineerCombatDrone_NPC
// 0x0000 (0x0BB0 - 0x0BB0)
class ASFXPawn_EngineerCombatDrone_NPC : public ASFXPawn_EngineerCombatDrone
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_Cloak
// 0x0014 (0x01C0 - 0x01AC)
class USFXPower_Cloak : public USFXPower
{
public:
	class TArray<float>                                DamageBonus;                                      		// 0x01AC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bBreakCloakOnAttack : 1;                          		// 0x01BC (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPowerScript_Cloak
// 0x0014 (0x0100 - 0x00EC)
class USFXPowerScript_Cloak : public UBioPowerScriptDesign
{
public:
	class USFXPower_Cloak*                             m_oPower;                                         		// 0x00EC (0x0008) [0x0000000000000000]              
	struct SFXName                                     EffectCategory;                                   		// 0x00F4 (0x0008) [0x0000000000000000]              
	unsigned long                                      bCloakEnded : 1;                                  		// 0x00FC (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool ShouldUsePower ( class AActor* Caster, class AActor* Target, class FString* sOptionalInfo );
	void OnCloakEnded ( );
	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
	bool eventAdjustCooldown ( float* fCoolDownTime );
	bool eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
};

// Class SFXGameContent_Powers.SFXPower_Cloak_Damage
// 0x0000 (0x01C0 - 0x01C0)
class USFXPower_Cloak_Damage : public USFXPower_Cloak
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_Cloak_Enhanced
// 0x0000 (0x01C0 - 0x01C0)
class USFXPower_Cloak_Enhanced : public USFXPower_Cloak
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_Cloak_NPC
// 0x0000 (0x01C0 - 0x01C0)
class USFXPower_Cloak_NPC : public USFXPower_Cloak
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	float GetDamageMultiplier ( );
};

// Class SFXGameContent_Powers.SFXPower_CombatDroneAttack_NPC
// 0x0010 (0x01BC - 0x01AC)
class USFXPower_CombatDroneAttack_NPC : public USFXPower
{
public:
	class TArray<unsigned char>                        AnimatedReactions;                                		// 0x01AC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPowerScript_CombatDroneAttack_NPC
// 0x0018 (0x0104 - 0x00EC)
class USFXPowerScript_CombatDroneAttack_NPC : public UBioPowerScriptDesign
{
public:
	class USFXPower_CombatDroneAttack_NPC*             m_oPower;                                         		// 0x00EC (0x0008) [0x0000000000000000]              
	class UForceFeedbackWaveform*                      ImpactShake;                                      		// 0x00F4 (0x0008) [0x0000000000000000]              
	class UWwiseEvent*                                 NormalImpactSound;                                		// 0x00FC (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool ShouldUsePower ( class AActor* Caster, class AActor* Target, class FString* sOptionalInfo );
	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
	bool eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
};

// Class SFXGameContent_Powers.SFXPower_LightMechShock
// 0x0008 (0x01B4 - 0x01AC)
class USFXPower_LightMechShock : public USFXPower
{
public:
	struct FVector2D                                   DamageNPC;                                        		// 0x01AC (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPowerScript_LightMechShock
// 0x0088 (0x0174 - 0x00EC)
class USFXPowerScript_LightMechShock : public UBioPowerScriptDesign
{
public:
	struct FScreenShakeStruct                          HitShake;                                         		// 0x00EC (0x0070) [0x0000000000000001]              ( CPF_Edit )
	class USFXPower_LightMechShock*                    m_oPower;                                         		// 0x015C (0x0008) [0x0000000000000000]              
	class UForceFeedbackWaveform*                      PlayerIsMeleedWaveForm;                           		// 0x0164 (0x0008) [0x0000000000000000]              
	class UBioVFXTemplate*                             m_oCrustEffect;                                   		// 0x016C (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
	bool eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
};

// Class SFXGameContent_Powers.SFXPower_RobotDeathExplosion
// 0x0014 (0x01C0 - 0x01AC)
class USFXPower_RobotDeathExplosion : public USFXPower
{
public:
	struct FVector2D                                   DamageNPC;                                        		// 0x01AC (0x0008) [0x0000000000000000]              
	struct FVector2D                                   ForceNPC;                                         		// 0x01B4 (0x0008) [0x0000000000000000]              
	int                                                MaxRagdollLevel;                                  		// 0x01BC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPowerScript_RobotDeathExplosion
// 0x0080 (0x016C - 0x00EC)
class USFXPowerScript_RobotDeathExplosion : public UBioPowerScriptDesign
{
public:
	struct FScreenShakeStruct                          HitShake;                                         		// 0x00EC (0x0070) [0x0000000000000001]              ( CPF_Edit )
	class USFXPower_RobotDeathExplosion*               m_oPower;                                         		// 0x015C (0x0008) [0x0000000000000000]              
	class UForceFeedbackWaveform*                      PlayerIsMeleedWaveForm;                           		// 0x0164 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventEndPhase ( unsigned char ePhase, class AActor* oCaster );
	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
	bool eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
};

// Class SFXGameContent_Powers.SFXPower_MechDeathExplosion
// 0x0000 (0x01C0 - 0x01C0)
class USFXPower_MechDeathExplosion : public USFXPower_RobotDeathExplosion
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPowerScript_MechDogBite
// 0x0094 (0x0180 - 0x00EC)
class USFXPowerScript_MechDogBite : public UBioPowerScriptDesign
{
public:
	struct FInterpCurveFloat                           SlowDown;                                         		// 0x00EC (0x0014) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScreenShakeStruct                          Shake;                                            		// 0x0100 (0x0070) [0x0000000000000000]              
	class USFXPower_Varren*                            m_oPower;                                         		// 0x0170 (0x0008) [0x0000000000000000]              
	class UForceFeedbackWaveform*                      PlayerIsMeleedWaveForm;                           		// 0x0178 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
	bool eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
};

// Class SFXGameContent_Powers.SFXPower_MechDogTaser
// 0x0008 (0x01B4 - 0x01AC)
class USFXPower_MechDogTaser : public USFXPower
{
public:
	struct FVector2D                                   DamageNPC;                                        		// 0x01AC (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPowerScript_MechDogTaser
// 0x0008 (0x00F4 - 0x00EC)
class USFXPowerScript_MechDogTaser : public UBioPowerScriptDesign
{
public:
	class USFXPower_MechDogTaser*                      m_oPower;                                         		// 0x00EC (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
	bool eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
};

// Class SFXGameContent_Powers.SFXPower_Overload
// 0x0024 (0x01D0 - 0x01AC)
class USFXPower_Overload : public USFXPower
{
public:
	class TArray<float>                                RobotStunLength;                                  		// 0x01AC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class TArray<float>                                OverheatLength;                                   		// 0x01BC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bExplodesRobots : 1;                              		// 0x01CC (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	float GetOverheatLength ( );
	float GetRobotStunLength ( );
};

// Class SFXGameContent_Powers.SFXPowerScript_Overload
// 0x0098 (0x0184 - 0x00EC)
class USFXPowerScript_Overload : public UBioPowerScriptDesign
{
public:
	struct FScreenShakeStruct                          DetonationCameraShake;                            		// 0x00EC (0x0070) [0x0000000000000001]              ( CPF_Edit )
	class USFXPower_Overload*                          m_oPower;                                         		// 0x015C (0x0008) [0x0000000000000000]              
	class UBioVFXTemplate*                             m_oCrustEffect;                                   		// 0x0164 (0x0008) [0x0000000000000000]              
	class UForceFeedbackWaveform*                      PlayerIsMeleedWaveForm;                           		// 0x016C (0x0008) [0x0000000000000000]              
	class UWwiseEvent*                                 NormalImpactSound;                                		// 0x0174 (0x0008) [0x0000000000000000]              
	class UWwiseEvent*                                 HeavyImpactSound;                                 		// 0x017C (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool ShouldUsePower ( class AActor* Caster, class AActor* Target, class FString* sOptionalInfo );
	void SpawnBigImpactVFX ( class AActor* oImpacted );
	void ExplodeEnemy ( class ABioPawn* oPawn, class ABioPawn* oCaster );
	bool CanEnemyBeExploded ( class ABioPawn* oPawn );
	void TurnOnDeathPower ( class AActor* oImpacted );
	void StunRobot ( class ABioPawn* oPawn, float fDuration );
	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
	bool eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
};

// Class SFXGameContent_Powers.SFXPower_Overload_Heavy
// 0x0000 (0x01D0 - 0x01D0)
class USFXPower_Overload_Heavy : public USFXPower_Overload
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_Overload_Radius
// 0x0000 (0x01D0 - 0x01D0)
class USFXPower_Overload_Radius : public USFXPower_Overload
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_Varren
// 0x0018 (0x01C4 - 0x01AC)
class USFXPower_Varren : public USFXPower
{
public:
	struct FVector2D                                   DamageNPC;                                        		// 0x01AC (0x0008) [0x0000000000000000]              
	struct FVector2D                                   ForceNPC;                                         		// 0x01B4 (0x0008) [0x0000000000000000]              
	class UWwiseEvent*                                 WwiseImpactEvent;                                 		// 0x01BC (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPowerScript_Varren
// 0x0094 (0x0180 - 0x00EC)
class USFXPowerScript_Varren : public UBioPowerScriptDesign
{
public:
	struct FInterpCurveFloat                           SlowDown;                                         		// 0x00EC (0x0014) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScreenShakeStruct                          Shake;                                            		// 0x0100 (0x0070) [0x0000000000000000]              
	class USFXPower_Varren*                            m_oPower;                                         		// 0x0170 (0x0008) [0x0000000000000000]              
	class UForceFeedbackWaveform*                      PlayerIsMeleedWaveForm;                           		// 0x0178 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
	bool eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
};

// Class SFXGameContent_Powers.BioCrushScript
// 0x0098 (0x0184 - 0x00EC)
class UBioCrushScript : public UBioPowerScriptDesign
{
public:
	class TArray<unsigned char>                        AnimatedReactions;                                		// 0x00EC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScreenShakeStruct                          HitCameraShake;                                   		// 0x00FC (0x0070) [0x0000000000000000]              
	class USFXPower_Crush*                             m_oPower;                                         		// 0x016C (0x0008) [0x0000000000000000]              
	class UBioVFXTemplate*                             m_oCrustEffect;                                   		// 0x0174 (0x0008) [0x0000000000000000]              
	class UWwiseEvent*                                 SlamImpact;                                       		// 0x017C (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool ShouldUsePower ( class AActor* Caster, class AActor* Target, class FString* sOptionalInfo );
	void OnRagdollPhysicsImpact ( class APawn* oPawn, class AActor* oImpactActor, struct FVector vImpactDir );
	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
	bool eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
};

// Class SFXGameContent_Powers.SFXPower_Crush
// 0x0034 (0x01E0 - 0x01AC)
class USFXPower_Crush : public USFXPower
{
public:
	class TArray<float>                                UpwardForce;                                      		// 0x01AC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class TArray<float>                                SlamDownForce;                                    		// 0x01BC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class TArray<float>                                SlamDelay;                                        		// 0x01CC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              PhysicsImpactDamageMult;                          		// 0x01DC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.BioSingularityScript
// 0x0084 (0x0170 - 0x00EC)
class UBioSingularityScript : public UBioPowerScriptDesign
{
public:
	class TArray<class AActor*>                        AffectedActors;                                   		// 0x00EC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FVector                                     m_vSingularityLocation;                           		// 0x00FC (0x000C) [0x0000000000000000]              
	class USFXPower_Singularity*                       m_oPower;                                         		// 0x0108 (0x0008) [0x0000000000000000]              
	class AActor*                                      m_oCaster;                                        		// 0x0110 (0x0008) [0x0000000000000000]              
	class ASFXEmitter*                                 VFX_Emitter;                                      		// 0x0118 (0x0008) [0x0000000000000000]              
	class UBioVFXTemplate*                             m_oCrustEffect;                                   		// 0x0120 (0x0008) [0x0000000000000000]              
	class UWwiseEvent*                                 NormalImpactSound;                                		// 0x0128 (0x0008) [0x0000000000000000]              
	class UWwiseEvent*                                 Release;                                          		// 0x0130 (0x0008) [0x0000000000000000]              
	class UWwiseEvent*                                 LoopingSound;                                     		// 0x0138 (0x0008) [0x0000000000000000]              
	class UWwiseEvent*                                 StopLoopingSound;                                 		// 0x0140 (0x0008) [0x0000000000000000]              
	float                                              m_fSingularityRadius;                             		// 0x0148 (0x0004) [0x0000000000000000]              
	float                                              m_fSingularityTimer;                              		// 0x014C (0x0004) [0x0000000000000000]              
	float                                              m_fSingularityDuration;                           		// 0x0150 (0x0004) [0x0000000000000000]              
	float                                              m_fSingularityForce;                              		// 0x0154 (0x0004) [0x0000000000000000]              
	float                                              m_fSingularityCharges;                            		// 0x0158 (0x0004) [0x0000000000000000]              
	float                                              m_fHitCasterMinDuration;                          		// 0x015C (0x0004) [0x0000000000000000]              
	float                                              m_fSingularityForceInterval;                      		// 0x0160 (0x0004) [0x0000000000000000]              
	float                                              m_fLookupActorTimer;                              		// 0x0164 (0x0004) [0x0000000000000000]              
	float                                              m_fLookupActorInterval;                           		// 0x0168 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bSingularityActive : 1;                         		// 0x016C (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool ShouldUsePower ( class AActor* Caster, class AActor* Target, class FString* sOptionalInfo );
	void OnPowerRankIncreased ( );
	void OnRagdollPhysicsImpact ( class APawn* oPawn, class AActor* oImpactActor, struct FVector vImpactDir );
	void ApplyVFX ( class AActor* oImpacted, float fDuration );
	void SpawnSingularity ( class AActor* oCaster, struct FVector Location );
	void TurnOffSingularity ( );
	bool CanPutInSingularity ( class AActor* oActor );
	bool ImpactNewTarget ( class AActor* oImpacted, float* fEffectDuration );
	void eventTick ( float DeltaTime );
	void OnProjectileExploded ( class AActor* oCaster, struct FVector HitLocation, struct FVector HitNormal, struct FVector Velocity );
	bool eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
	void eventInitializePowerScript ( );
};

// Class SFXGameContent_Powers.SFXPower_Singularity
// 0x005C (0x0208 - 0x01AC)
class USFXPower_Singularity : public USFXPower
{
public:
	class TArray<float>                                DrawScale;                                        		// 0x01AC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class TArray<float>                                NumCharges;                                       		// 0x01BC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class TArray<float>                                EnemyChargeUse;                                   		// 0x01CC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class TArray<float>                                SingularityDuration;                              		// 0x01DC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class TArray<unsigned char>                        AnimatedReactions;                                		// 0x01EC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UParticleSystem*                             PS_SingularityVFX;                                		// 0x01FC (0x0008) [0x0000000004000000]              ( CPF_EditInline )
	float                                              PhysicsImpactDamageMult;                          		// 0x0204 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_Singularity_NPC
// 0x0008 (0x0210 - 0x0208)
class USFXPower_Singularity_NPC : public USFXPower_Singularity
{
public:
	struct FVector2D                                   DamageNPC;                                        		// 0x0208 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	float GetDamage ( );
};

// Class SFXGameContent_Powers.BioWarpScript
// 0x00A0 (0x01A4 - 0x0104)
class UBioWarpScript : public UBioReactionPowerScript
{
public:
	struct FScreenShakeStruct                          DetonationCameraShake;                            		// 0x0104 (0x0070) [0x0000000000000001]              ( CPF_Edit )
	class USFXPower_Warp*                              m_oPower;                                         		// 0x0174 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             PS_DetonationEffect;                              		// 0x017C (0x0008) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	class UForceFeedbackWaveform*                      PlayerIsMeleedWaveForm;                           		// 0x0184 (0x0008) [0x0000000000000000]              
	class UWwiseEvent*                                 NormalImpactSound;                                		// 0x018C (0x0008) [0x0000000000000000]              
	class UWwiseEvent*                                 HeavyImpactSound;                                 		// 0x0194 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             DetonationTargetEffect;                           		// 0x019C (0x0008) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool ShouldUsePower ( class AActor* Caster, class AActor* Target, class FString* sOptionalInfo );
	void TurnOffScriptSingularity ( class ABioPawn* PowerCaster, struct SFXName PowerName );
	void StopSingularity ( class ABioPawn* oImpacted );
	void SpawnBigImpactVFX ( class AActor* oImpacted );
	void DetonateBiotics ( class AActor* oCaster, class AActor* oImpacted );
	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
	bool eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
};

// Class SFXGameContent_Powers.SFXPower_Warp
// 0x0044 (0x01F0 - 0x01AC)
class USFXPower_Warp : public USFXPower
{
public:
	class TArray<float>                                ComboRadius;                                      		// 0x01AC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class TArray<float>                                ComboForce;                                       		// 0x01BC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class TArray<float>                                ComboVFXIntensity;                                		// 0x01CC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class TArray<unsigned char>                        AnimatedReactions;                                		// 0x01DC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bSingleTarget : 1;                                		// 0x01EC (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_WarpProjectile
// 0x0000 (0x01F0 - 0x01F0)
class USFXPower_WarpProjectile : public USFXPower_Warp
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_Warp_NPC
// 0x0008 (0x01F8 - 0x01F0)
class USFXPower_Warp_NPC : public USFXPower_WarpProjectile
{
public:
	struct FVector2D                                   DamageNPC;                                        		// 0x01F0 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	float GetDamage ( );
};

// Class SFXGameContent_Powers.SFXPower_Crush_Evolved1
// 0x0000 (0x01E0 - 0x01E0)
class USFXPower_Crush_Evolved1 : public USFXPower_Crush
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_Crush_Evolved2
// 0x0000 (0x01E0 - 0x01E0)
class USFXPower_Crush_Evolved2 : public USFXPower_Crush
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_MirandaPassive
// 0x0020 (0x01FC - 0x01DC)
class USFXPower_MirandaPassive : public USFXPower_HenchmanPassive
{
public:
	class TArray<float>                                SquadHealthBonus;                                 		// 0x01DC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class TArray<float>                                SquadWeaponDamageBonus;                           		// 0x01EC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPowerScript_MirandaPassive
// 0x0000 (0x00EC - 0x00EC)
class USFXPowerScript_MirandaPassive : public USFXPowerScript_HenchmanPassive
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void ApplyGlobalBonus ( );
};

// Class SFXGameContent_Powers.SFXPower_MirandaPassive_Evolved1
// 0x0000 (0x01FC - 0x01FC)
class USFXPower_MirandaPassive_Evolved1 : public USFXPower_MirandaPassive
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_MirandaPassive_Evolved2
// 0x0000 (0x01FC - 0x01FC)
class USFXPower_MirandaPassive_Evolved2 : public USFXPower_MirandaPassive
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_Overload_Heavy_Hench
// 0x0000 (0x01D0 - 0x01D0)
class USFXPower_Overload_Heavy_Hench : public USFXPower_Overload_Heavy
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_Overload_Miranda
// 0x0000 (0x01D0 - 0x01D0)
class USFXPower_Overload_Miranda : public USFXPower_Overload
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_Overload_Radius_Hench
// 0x0000 (0x01D0 - 0x01D0)
class USFXPower_Overload_Radius_Hench : public USFXPower_Overload_Radius
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXProjectile_Power_Singularity
// 0x0000 (0x04CC - 0x04CC)
class ASFXProjectile_Power_Singularity : public ASFXProjectile_Power_SuperSeeking
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_Singularity_Heavy
// 0x0000 (0x0208 - 0x0208)
class USFXPower_Singularity_Heavy : public USFXPower_Singularity
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_Singularity_Radius
// 0x0000 (0x0208 - 0x0208)
class USFXPower_Singularity_Radius : public USFXPower_Singularity
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPowerScript_Singularity_NPC
// 0x0004 (0x0174 - 0x0170)
class USFXPowerScript_Singularity_NPC : public UBioSingularityScript
{
public:
	unsigned long                                      bOwnerDied : 1;                                   		// 0x0170 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void OnOwnerDied ( );
	bool ImpactNewTarget ( class AActor* oImpacted, float* fEffectDuration );
	void OnProjectileExploded ( class AActor* oCaster, struct FVector HitLocation, struct FVector HitNormal, struct FVector Velocity );
	bool eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
};

// Class SFXGameContent_Powers.SFXProjectile_Power_Seeking_NPC
// 0x0008 (0x04D4 - 0x04CC)
class ASFXProjectile_Power_Seeking_NPC : public ASFXProjectile_Power_Seeking
{
public:
	float                                              MaxAngleChange;                                   		// 0x04CC (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      bHoming : 1;                                      		// 0x04D0 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void Tick ( float DeltaTime );
	struct FVector GetAimLocation ( class AActor* Target );
	bool InitializePowerProjectile ( class AActor* oCaster, float fTravelSpeed, float fRadius, class UBioPower* oPower );
};

// Class SFXGameContent_Powers.SFXPower_Warp_Heavy
// 0x0000 (0x01F0 - 0x01F0)
class USFXPower_Warp_Heavy : public USFXPower_Warp
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_Warp_Radius
// 0x0000 (0x01F0 - 0x01F0)
class USFXPower_Warp_Radius : public USFXPower_Warp
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_Warp_Heavy_Hench
// 0x0000 (0x01F0 - 0x01F0)
class USFXPower_Warp_Heavy_Hench : public USFXPower_Warp_Heavy
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_Warp_Miranda
// 0x0000 (0x01F0 - 0x01F0)
class USFXPower_Warp_Miranda : public USFXPower_Warp
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_Warp_Radius_Hench
// 0x0000 (0x01F0 - 0x01F0)
class USFXPower_Warp_Radius_Hench : public USFXPower_Warp_Radius
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_WarpProjectile_Heavy
// 0x0000 (0x01F0 - 0x01F0)
class USFXPower_WarpProjectile_Heavy : public USFXPower_Warp_Heavy
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_WarpProjectile_Radius
// 0x0000 (0x01F0 - 0x01F0)
class USFXPower_WarpProjectile_Radius : public USFXPower_Warp_Radius
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_DefensiveShieldBase
// 0x0028 (0x01D4 - 0x01AC)
class USFXPower_DefensiveShieldBase : public USFXPower
{
public:
	class TArray<float>                                ShieldValue;                                      		// 0x01AC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      ShieldClass;                                      		// 0x01BC (0x0008) [0x0000000000000000]              
	class UBioVFXTemplate*                             CrustEffect;                                      		// 0x01C4 (0x0008) [0x0000000000000000]              
	float                                              AIShieldDestroyedDelay;                           		// 0x01CC (0x0004) [0x0000000000000000]              
	float                                              AIShotAtDelay;                                    		// 0x01D0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	float GetShieldValue ( );
};

// Class SFXGameContent_Powers.SFXPowerScript_DefensiveShieldBase
// 0x0010 (0x00FC - 0x00EC)
class USFXPowerScript_DefensiveShieldBase : public UBioPowerScriptDesign
{
public:
	class USFXPower_DefensiveShieldBase*               m_oPower;                                         		// 0x00EC (0x0008) [0x0000000000000000]              
	class ABioVisualEffect*                            ShieldVFX;                                        		// 0x00F4 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool ShouldUsePower ( class AActor* Caster, class AActor* Target, class FString* sOptionalInfo );
	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
	void OnShieldDestroyed ( class AActor* ShieldActor, class ASFXShield_Base* Shield );
	void eventInitializePowerScript ( );
};

// Class SFXGameContent_Powers.SFXPower_Barrier
// 0x0000 (0x01D4 - 0x01D4)
class USFXPower_Barrier : public USFXPower_DefensiveShieldBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPowerScript_Barrier
// 0x0000 (0x00FC - 0x00FC)
class USFXPowerScript_Barrier : public USFXPowerScript_DefensiveShieldBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_Barrier_Heavy
// 0x0000 (0x01D4 - 0x01D4)
class USFXPower_Barrier_Heavy : public USFXPower_Barrier
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_Barrier_Damage
// 0x0000 (0x01D4 - 0x01D4)
class USFXPower_Barrier_Damage : public USFXPower_Barrier
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_IncendiaryAmmo_Jacob
// 0x0000 (0x01D4 - 0x01D4)
class USFXPower_IncendiaryAmmo_Jacob : public USFXPower_IncendiaryAmmo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_IncendiaryAmmo_Radius_Hench
// 0x0000 (0x01D4 - 0x01D4)
class USFXPower_IncendiaryAmmo_Radius_Hench : public USFXPower_IncendiaryAmmo_Radius
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_IncendiaryAmmo_Squad_Hench
// 0x0000 (0x01D4 - 0x01D4)
class USFXPower_IncendiaryAmmo_Squad_Hench : public USFXPower_IncendiaryAmmo_Squad
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_JacobPassive
// 0x0000 (0x01DC - 0x01DC)
class USFXPower_JacobPassive : public USFXPower_HenchmanPassive
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPowerScript_JacobPassive
// 0x0000 (0x00EC - 0x00EC)
class USFXPowerScript_JacobPassive : public USFXPowerScript_HenchmanPassive
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_JacobPassive_Evolved1
// 0x0000 (0x01DC - 0x01DC)
class USFXPower_JacobPassive_Evolved1 : public USFXPower_JacobPassive
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_JacobPassive_Evolved2
// 0x0000 (0x01DC - 0x01DC)
class USFXPower_JacobPassive_Evolved2 : public USFXPower_JacobPassive
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_Pull_Heavy_Hench
// 0x0000 (0x01DC - 0x01DC)
class USFXPower_Pull_Heavy_Hench : public USFXPower_Pull_Heavy
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_Pull_Hench
// 0x0000 (0x01DC - 0x01DC)
class USFXPower_Pull_Hench : public USFXPower_Pull
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_Pull_Radius_Hench
// 0x0000 (0x01DC - 0x01DC)
class USFXPower_Pull_Radius_Hench : public USFXPower_Pull_Radius
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.SFXPower_Pull_Jacob
// 0x0000 (0x01DC - 0x01DC)
class USFXPower_Pull_Jacob : public USFXPower_Pull_Hench
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