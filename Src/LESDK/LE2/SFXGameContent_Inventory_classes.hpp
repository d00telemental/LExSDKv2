/*
#############################################################################################
# Mass Effect 2 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.5_Beta-Rev.60-MELE
# ========================================================================================= #
# File: SFXGameContent_Inventory_classes.hpp
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

// Class SFXGameContent_Inventory.SFXWeapon_AssaultRifle
// 0x0008 (0x097C - 0x0974)
class ASFXWeapon_AssaultRifle : public ASFXWeapon_AssaultRifle_Base
{
public:
	int                                                ShotsTillMissTracer;                              		// 0x0974 (0x0004) [0x0000000000000000]              
	unsigned long                                      bPlayingMuzzleFlashEffect : 1;                    		// 0x0978 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	class UAnimNodeSequence* GetWeaponAnimNodeSeq ( );
	class UWwiseEvent* GetWeaponSpecificImpactSound ( class USFXPhysicalMaterialImpactSounds* ImpactSounds );
	class UParticleSystem* GetWeaponSpecificImpactEffect ( class USFXPhysicalMaterialImpactEffects* ImpactEffects );
	class UDecalComponent* GetWeaponSpecificDecalData ( class USFXPhysicalMaterialDecals* DecalEffects, float* FadeTime );
	void StopMuzzleFlashEffect ( );
	void PlayFireEffects ( unsigned char FiringMode, struct FVector HitLocation );
	void PlayMuzzleFlashEffect ( );
	bool ShouldSpawnTracerFX ( );
};

// Class SFXGameContent_Inventory.SFXDamageType_AssaultRifle
// 0x0000 (0x0114 - 0x0114)
class USFXDamageType_AssaultRifle : public USFXDamageType_Weapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Inventory.SFXDamageType_SniperRifle
// 0x0000 (0x0114 - 0x0114)
class USFXDamageType_SniperRifle : public USFXDamageType_Weapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Inventory.SFXWeapon_SniperRifle
// 0x0010 (0x0984 - 0x0974)
class ASFXWeapon_SniperRifle : public ASFXWeapon_SniperRifle_Base
{
public:
	class UWwiseEvent*                                 ActivateSniperZoomWwiseEvent;                     		// 0x0974 (0x0008) [0x0000000000000000]              
	class UWwiseEvent*                                 DeActivateSniperZoomWwiseEvent;                   		// 0x097C (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void SetZoomed ( unsigned long bState );
	class UWwiseEvent* GetWeaponSpecificImpactSound ( class USFXPhysicalMaterialImpactSounds* ImpactSounds );
	class UParticleSystem* GetWeaponSpecificImpactEffect ( class USFXPhysicalMaterialImpactEffects* ImpactEffects );
	class UDecalComponent* GetWeaponSpecificDecalData ( class USFXPhysicalMaterialDecals* DecalEffects, float* FadeTime );
};

// Class SFXGameContent_Inventory.SFXDamageType_Shotgun
// 0x0000 (0x0114 - 0x0114)
class USFXDamageType_Shotgun : public USFXDamageType_Weapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Inventory.SFXDamageType_FlakGun
// 0x0000 (0x0114 - 0x0114)
class USFXDamageType_FlakGun : public USFXDamageType_Shotgun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Inventory.SFXDamageType_HeavyShotgun
// 0x0000 (0x0114 - 0x0114)
class USFXDamageType_HeavyShotgun : public USFXDamageType_Shotgun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Inventory.SFXWeapon_Shotgun
// 0x0018 (0x098C - 0x0974)
class ASFXWeapon_Shotgun : public ASFXWeapon_Shotgun_Base
{
public:
	class TArray<struct FVector2D>                     PelletSpread;                                     		// 0x0974 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              fZoomAccuracyBonus;                               		// 0x0984 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              StartTraceAdjustDist;                             		// 0x0988 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	class UWwiseEvent* GetWeaponSpecificImpactSound ( class USFXPhysicalMaterialImpactSounds* ImpactSounds );
	class UParticleSystem* GetWeaponSpecificImpactEffect ( class USFXPhysicalMaterialImpactEffects* ImpactEffects );
	class UDecalComponent* GetWeaponSpecificDecalData ( class USFXPhysicalMaterialDecals* DecalEffects, float* FadeTime );
	void FirePellets ( struct FVector StartLocation, struct FRotator AimRotation, unsigned char FireMode );
	void DrawDebugShotgunCone ( struct FVector StartLocation, struct FRotator AimRot );
	void CustomFire ( );
	bool ShouldSpawnTracerFX ( );
};

// Class SFXGameContent_Inventory.SFXWeapon_FlakGun
// 0x0000 (0x098C - 0x098C)
class ASFXWeapon_FlakGun : public ASFXWeapon_Shotgun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	class UWwiseEvent* GetWeaponSpecificImpactSound ( class USFXPhysicalMaterialImpactSounds* ImpactSounds );
	class UParticleSystem* GetWeaponSpecificImpactEffect ( class USFXPhysicalMaterialImpactEffects* ImpactEffects );
	class UDecalComponent* GetWeaponSpecificDecalData ( class USFXPhysicalMaterialDecals* DecalEffects, float* FadeTime );
	void InitDefaultDecalProperties ( );
};

// Class SFXGameContent_Inventory.SFXWeapon_HeavyShotgun
// 0x0000 (0x098C - 0x098C)
class ASFXWeapon_HeavyShotgun : public ASFXWeapon_Shotgun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	class UWwiseEvent* GetWeaponSpecificImpactSound ( class USFXPhysicalMaterialImpactSounds* ImpactSounds );
	class UParticleSystem* GetWeaponSpecificImpactEffect ( class USFXPhysicalMaterialImpactEffects* ImpactEffects );
	class UDecalComponent* GetWeaponSpecificDecalData ( class USFXPhysicalMaterialDecals* DecalEffects, float* FadeTime );
};

// Class SFXGameContent_Inventory.SFXDamageType_AutoPistol
// 0x0000 (0x0114 - 0x0114)
class USFXDamageType_AutoPistol : public USFXDamageType_Weapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Inventory.SFXDamageType_SMG
// 0x0000 (0x0114 - 0x0114)
class USFXDamageType_SMG : public USFXDamageType_AutoPistol
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Inventory.SFXWeapon_AutoPistol
// 0x0000 (0x0974 - 0x0974)
class ASFXWeapon_AutoPistol : public ASFXWeapon_AutoPistol_Base
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	class UWwiseEvent* GetWeaponSpecificImpactSound ( class USFXPhysicalMaterialImpactSounds* ImpactSounds );
	class UParticleSystem* GetWeaponSpecificImpactEffect ( class USFXPhysicalMaterialImpactEffects* ImpactEffects );
	class UDecalComponent* GetWeaponSpecificDecalData ( class USFXPhysicalMaterialDecals* DecalEffects, float* FadeTime );
};

// Class SFXGameContent_Inventory.SFXWeapon_LightPistol
// 0x0000 (0x0974 - 0x0974)
class ASFXWeapon_LightPistol : public ASFXWeapon_AutoPistol
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Inventory.SFXWeapon_SMG
// 0x0000 (0x0974 - 0x0974)
class ASFXWeapon_SMG : public ASFXWeapon_AutoPistol
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	class UWwiseEvent* GetWeaponSpecificImpactSound ( class USFXPhysicalMaterialImpactSounds* ImpactSounds );
	class UParticleSystem* GetWeaponSpecificImpactEffect ( class USFXPhysicalMaterialImpactEffects* ImpactEffects );
	class UDecalComponent* GetWeaponSpecificDecalData ( class USFXPhysicalMaterialDecals* DecalEffects, float* FadeTime );
};

// Class SFXGameContent_Inventory.SFXDamageType_HeavyPistol
// 0x0000 (0x0114 - 0x0114)
class USFXDamageType_HeavyPistol : public USFXDamageType_Weapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Inventory.SFXDamageType_HandCannon
// 0x0000 (0x0114 - 0x0114)
class USFXDamageType_HandCannon : public USFXDamageType_HeavyPistol
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Inventory.SFXWeapon_HeavyPistol
// 0x0000 (0x0974 - 0x0974)
class ASFXWeapon_HeavyPistol : public ASFXWeapon_HeavyPistol_Base
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	class UWwiseEvent* GetWeaponSpecificImpactSound ( class USFXPhysicalMaterialImpactSounds* ImpactSounds );
	class UParticleSystem* GetWeaponSpecificImpactEffect ( class USFXPhysicalMaterialImpactEffects* ImpactEffects );
	class UDecalComponent* GetWeaponSpecificDecalData ( class USFXPhysicalMaterialDecals* DecalEffects, float* FadeTime );
};

// Class SFXGameContent_Inventory.SFXWeapon_HandCannon
// 0x0000 (0x0974 - 0x0974)
class ASFXWeapon_HandCannon : public ASFXWeapon_HeavyPistol
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	class UWwiseEvent* GetWeaponSpecificImpactSound ( class USFXPhysicalMaterialImpactSounds* ImpactSounds );
	class UParticleSystem* GetWeaponSpecificImpactEffect ( class USFXPhysicalMaterialImpactEffects* ImpactEffects );
	class UDecalComponent* GetWeaponSpecificDecalData ( class USFXPhysicalMaterialDecals* DecalEffects, float* FadeTime );
};

// Class SFXGameContent_Inventory.SFXDamageType_HeavyWeapon
// 0x0000 (0x0114 - 0x0114)
class USFXDamageType_HeavyWeapon : public USFXDamageType_Weapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Inventory.SFXDamageType_Grenade
// 0x0000 (0x0114 - 0x0114)
class USFXDamageType_Grenade : public USFXDamageType_HeavyWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Inventory.SFXHeavyWeapon_GrenadeLauncher
// 0x0000 (0x0974 - 0x0974)
class ASFXHeavyWeapon_GrenadeLauncher : public ASFXHeavyWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Inventory.SFXProjectile_Grenade
// 0x001C (0x042C - 0x0410)
class ASFXProjectile_Grenade : public ASFXProjectile_Explosive
{
public:
	class ABioPawn*                                    WeaponOwner;                                      		// 0x0410 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	class ASFXHeavyWeapon*                             Weapon;                                           		// 0x0418 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	class AActor*                                      AcquiredTarget;                                   		// 0x0420 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	float                                              MaxAngleChange;                                   		// 0x0428 (0x0004) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void Recycle ( );
	void DoImpact ( class AActor* InImpactedActor, class AController* InInstigatorController, float BaseDamage, float InDamageRadius, float Momentum, struct FVector HurtOrigin, unsigned long bFullDamage );
	void Tick ( float DeltaTime );
	struct FVector GetAimLocation ( );
	void Init ( struct FVector Direction );
};

// Class SFXGameContent_Inventory.SFXDamageType_MissileLauncher
// 0x0000 (0x0114 - 0x0114)
class USFXDamageType_MissileLauncher : public USFXDamageType_HeavyWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Inventory.SFXDamageType_Rocket
// 0x0000 (0x0114 - 0x0114)
class USFXDamageType_Rocket : public USFXDamageType_Grenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Inventory.SFXHeavyWeapon_MissileLauncher
// 0x0008 (0x097C - 0x0974)
class ASFXHeavyWeapon_MissileLauncher : public ASFXHeavyWeapon
{
public:
	class AActor*                                      CurrentTarget;                                    		// 0x0974 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void Tick ( float DeltaTime );
};

// Class SFXGameContent_Inventory.SFXProjectile_SeekingMissile
// 0x00C4 (0x04D4 - 0x0410)
class ASFXProjectile_SeekingMissile : public ASFXProjectile_Explosive
{
public:
	struct FQuat                                       QuatRotation;                                     		// 0x0410 (0x0010) [0x0000000000002000]              ( CPF_Transient )
	struct FQuat                                       Roll;                                             		// 0x0420 (0x0010) [0x0000000000002000]              ( CPF_Transient )
	struct FScreenShakeStruct                          HitShake;                                         		// 0x0430 (0x0070) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class ABioPawn*                                    AcquiredTarget;                                   		// 0x04A0 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	class UWwiseEventPairObject*                       LockedEvent;                                      		// 0x04A8 (0x0008) [0x0000000000000002]              ( CPF_Const )
	class UWwiseAudioComponent*                        LockedComponent;                                  		// 0x04B0 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UWwiseEvent*                                 ImpactSound0;                                     		// 0x04B8 (0x0008) [0x0000000000000002]              ( CPF_Const )
	float                                              TimeAlive;                                        		// 0x04C0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              CurveShape;                                       		// 0x04C4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              UpperBound;                                       		// 0x04C8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              MaxAngleChange;                                   		// 0x04CC (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      bExplodeNextFrame : 1;                            		// 0x04D0 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void Recycle ( );
	void DoImpact ( class AActor* InImpactedActor, class AController* InInstigatorController, float BaseDamage, float InDamageRadius, float Momentum, struct FVector HurtOrigin, unsigned long bFullDamage );
	void Destroyed ( );
	void ShutDown ( );
	void Init ( struct FVector Direction );
	void TickPlayer ( float DeltaTime );
	void TickNPC ( float DeltaTime );
	void Tick ( float DeltaTime );
	struct FVector GetAimLocation ( );
	void AcquireTarget ( );
};

// Class SFXGameContent_Inventory.SFXHeavyWeapon_RocketLauncher
// 0x0000 (0x097C - 0x097C)
class ASFXHeavyWeapon_RocketLauncher : public ASFXHeavyWeapon_MissileLauncher
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Inventory.SFXProjectile_Rocket
// 0x0078 (0x04A4 - 0x042C)
class ASFXProjectile_Rocket : public ASFXProjectile_Grenade
{
public:
	struct FScreenShakeStruct                          HitShake;                                         		// 0x042C (0x0070) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UWwiseEvent*                                 ImpactSound0;                                     		// 0x049C (0x0008) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void DoImpact ( class AActor* InImpactedActor, class AController* InInstigatorController, float BaseDamage, float InDamageRadius, float Momentum, struct FVector HurtOrigin, unsigned long bFullDamage );
};



#undef LESDK_IN_GENERATED

#ifdef _MSC_VER
	#pragma pack ( pop )
#endif
