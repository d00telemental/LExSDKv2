/*
#############################################################################################
# Mass Effect 2 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.5_Beta-Rev.60-MELE
# ========================================================================================= #
# File: SFXGameContent_Inventory_f_structs.hpp
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

// Function SFXGameContent_Inventory.SFXWeapon_SMG.GetWeaponSpecificImpactSound
// [0x00020102] ( FUNC_Simulated )
struct ASFXWeapon_SMG_execGetWeaponSpecificImpactSound_Parms
{
	class USFXPhysicalMaterialImpactSounds*            ImpactSounds;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UWwiseEvent*                                 ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 ASFXWeapon_SMG_execGetWeaponSpecificImpactSound_Parms() { memset(this, 0, sizeof *this); }
	~ASFXWeapon_SMG_execGetWeaponSpecificImpactSound_Parms() {}
};

// Function SFXGameContent_Inventory.SFXWeapon_SMG.GetWeaponSpecificImpactEffect
// [0x00020102] ( FUNC_Simulated )
struct ASFXWeapon_SMG_execGetWeaponSpecificImpactEffect_Parms
{
	class USFXPhysicalMaterialImpactEffects*           ImpactEffects;                                    		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UParticleSystem*                             ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 ASFXWeapon_SMG_execGetWeaponSpecificImpactEffect_Parms() { memset(this, 0, sizeof *this); }
	~ASFXWeapon_SMG_execGetWeaponSpecificImpactEffect_Parms() {}
};

// Function SFXGameContent_Inventory.SFXWeapon_SMG.GetWeaponSpecificDecalData
// [0x00420102] ( FUNC_Simulated )
struct ASFXWeapon_SMG_execGetWeaponSpecificDecalData_Parms
{
	class USFXPhysicalMaterialDecals*                  DecalEffects;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              FadeTime;                                         		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UDecalComponent*                             ReturnValue;                                      		// 0x000C (0x0008) [0x0000000004000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
	// int                                             DecalLength;                                      		// 0x0014 (0x0004) [0x0000000000000000]              

	 ASFXWeapon_SMG_execGetWeaponSpecificDecalData_Parms() { memset(this, 0, sizeof *this); }
	~ASFXWeapon_SMG_execGetWeaponSpecificDecalData_Parms() {}
};

// Function SFXGameContent_Inventory.SFXWeapon_Needler.GetWeaponSpecificImpactSound
// [0x00020102] ( FUNC_Simulated )
struct ASFXWeapon_Needler_execGetWeaponSpecificImpactSound_Parms
{
	class USFXPhysicalMaterialImpactSounds*            ImpactSounds;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UWwiseEvent*                                 ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 ASFXWeapon_Needler_execGetWeaponSpecificImpactSound_Parms() { memset(this, 0, sizeof *this); }
	~ASFXWeapon_Needler_execGetWeaponSpecificImpactSound_Parms() {}
};

// Function SFXGameContent_Inventory.SFXWeapon_Needler.GetWeaponSpecificImpactEffect
// [0x00020102] ( FUNC_Simulated )
struct ASFXWeapon_Needler_execGetWeaponSpecificImpactEffect_Parms
{
	class USFXPhysicalMaterialImpactEffects*           ImpactEffects;                                    		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UParticleSystem*                             ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 ASFXWeapon_Needler_execGetWeaponSpecificImpactEffect_Parms() { memset(this, 0, sizeof *this); }
	~ASFXWeapon_Needler_execGetWeaponSpecificImpactEffect_Parms() {}
};

// Function SFXGameContent_Inventory.SFXWeapon_Needler.GetWeaponSpecificDecalData
// [0x00420102] ( FUNC_Simulated )
struct ASFXWeapon_Needler_execGetWeaponSpecificDecalData_Parms
{
	class USFXPhysicalMaterialDecals*                  DecalEffects;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              FadeTime;                                         		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UDecalComponent*                             ReturnValue;                                      		// 0x000C (0x0008) [0x0000000004000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
	// int                                             DecalLength;                                      		// 0x0014 (0x0004) [0x0000000000000000]              

	 ASFXWeapon_Needler_execGetWeaponSpecificDecalData_Parms() { memset(this, 0, sizeof *this); }
	~ASFXWeapon_Needler_execGetWeaponSpecificDecalData_Parms() {}
};

// Function SFXGameContent_Inventory.SFXWeapon_HeavyShotgun.GetWeaponSpecificImpactSound
// [0x00020102] ( FUNC_Simulated )
struct ASFXWeapon_HeavyShotgun_execGetWeaponSpecificImpactSound_Parms
{
	class USFXPhysicalMaterialImpactSounds*            ImpactSounds;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UWwiseEvent*                                 ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 ASFXWeapon_HeavyShotgun_execGetWeaponSpecificImpactSound_Parms() { memset(this, 0, sizeof *this); }
	~ASFXWeapon_HeavyShotgun_execGetWeaponSpecificImpactSound_Parms() {}
};

// Function SFXGameContent_Inventory.SFXWeapon_HeavyShotgun.GetWeaponSpecificImpactEffect
// [0x00020102] ( FUNC_Simulated )
struct ASFXWeapon_HeavyShotgun_execGetWeaponSpecificImpactEffect_Parms
{
	class USFXPhysicalMaterialImpactEffects*           ImpactEffects;                                    		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UParticleSystem*                             ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 ASFXWeapon_HeavyShotgun_execGetWeaponSpecificImpactEffect_Parms() { memset(this, 0, sizeof *this); }
	~ASFXWeapon_HeavyShotgun_execGetWeaponSpecificImpactEffect_Parms() {}
};

// Function SFXGameContent_Inventory.SFXWeapon_HeavyShotgun.GetWeaponSpecificDecalData
// [0x00420102] ( FUNC_Simulated )
struct ASFXWeapon_HeavyShotgun_execGetWeaponSpecificDecalData_Parms
{
	class USFXPhysicalMaterialDecals*                  DecalEffects;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              FadeTime;                                         		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UDecalComponent*                             ReturnValue;                                      		// 0x000C (0x0008) [0x0000000004000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
	// int                                             DecalLength;                                      		// 0x0014 (0x0004) [0x0000000000000000]              

	 ASFXWeapon_HeavyShotgun_execGetWeaponSpecificDecalData_Parms() { memset(this, 0, sizeof *this); }
	~ASFXWeapon_HeavyShotgun_execGetWeaponSpecificDecalData_Parms() {}
};

// Function SFXGameContent_Inventory.SFXWeapon_Shotgun.GetWeaponSpecificImpactSound
// [0x00020102] ( FUNC_Simulated )
struct ASFXWeapon_Shotgun_execGetWeaponSpecificImpactSound_Parms
{
	class USFXPhysicalMaterialImpactSounds*            ImpactSounds;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UWwiseEvent*                                 ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 ASFXWeapon_Shotgun_execGetWeaponSpecificImpactSound_Parms() { memset(this, 0, sizeof *this); }
	~ASFXWeapon_Shotgun_execGetWeaponSpecificImpactSound_Parms() {}
};

// Function SFXGameContent_Inventory.SFXWeapon_Shotgun.GetWeaponSpecificImpactEffect
// [0x00020102] ( FUNC_Simulated )
struct ASFXWeapon_Shotgun_execGetWeaponSpecificImpactEffect_Parms
{
	class USFXPhysicalMaterialImpactEffects*           ImpactEffects;                                    		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UParticleSystem*                             ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 ASFXWeapon_Shotgun_execGetWeaponSpecificImpactEffect_Parms() { memset(this, 0, sizeof *this); }
	~ASFXWeapon_Shotgun_execGetWeaponSpecificImpactEffect_Parms() {}
};

// Function SFXGameContent_Inventory.SFXWeapon_Shotgun.GetWeaponSpecificDecalData
// [0x00420102] ( FUNC_Simulated )
struct ASFXWeapon_Shotgun_execGetWeaponSpecificDecalData_Parms
{
	class USFXPhysicalMaterialDecals*                  DecalEffects;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              FadeTime;                                         		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UDecalComponent*                             ReturnValue;                                      		// 0x000C (0x0008) [0x0000000004000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
	// int                                             DecalLength;                                      		// 0x0014 (0x0004) [0x0000000000000000]              

	 ASFXWeapon_Shotgun_execGetWeaponSpecificDecalData_Parms() { memset(this, 0, sizeof *this); }
	~ASFXWeapon_Shotgun_execGetWeaponSpecificDecalData_Parms() {}
};

// Function SFXGameContent_Inventory.SFXWeapon_Shotgun.FirePellets
// [0x00820103] ( FUNC_Final | FUNC_Simulated )
struct ASFXWeapon_Shotgun_execFirePellets_Parms
{
	union { struct FVector                             StartLocation; };                                 		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	union { struct FRotator                            AimRotation; };                                   		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      FireMode;                                         		// 0x0018 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// union { struct FVector                          EndTrace; };                                      		// 0x001C (0x000C) [0x0000000000000000]              
	// union { TArray<struct FImpactInfo>              ImpactList; };                                    		// 0x0028 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// union { struct FImpactInfo                      RealImpact; };                                    		// 0x0038 (0x0060) [0x0000000000000000]              
	// int                                             PelletIdx;                                        		// 0x0098 (0x0004) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x009C (0x0004) [0x0000000000000000]              
	// union { struct FRotator                         AimRot; };                                        		// 0x00A0 (0x000C) [0x0000000000000000]              
	// unsigned long                                   bAudioWasSuppressed;                              		// 0x00AC (0x0004) [0x0000000000000000]              
	// unsigned long                                   bTracersWereSuppressed;                           		// 0x00B0 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bImpactsWereSuppressed;                           		// 0x00B4 (0x0004) [0x0000000000000000]              
	// class AActor*                                   Target;                                           		// 0x00B8 (0x0008) [0x0000000000000000]              

	 ASFXWeapon_Shotgun_execFirePellets_Parms() { memset(this, 0, sizeof *this); }
	~ASFXWeapon_Shotgun_execFirePellets_Parms() {}
};

// Function SFXGameContent_Inventory.SFXWeapon_Shotgun.DrawDebugShotgunCone
// [0x00020102] ( FUNC_Simulated )
struct ASFXWeapon_Shotgun_execDrawDebugShotgunCone_Parms
{
	union { struct FVector                             StartLocation; };                                 		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	union { struct FRotator                            AimRot; };                                        		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// float                                           ConeAngleRad;                                     		// 0x0018 (0x0004) [0x0000000000000000]              

	 ASFXWeapon_Shotgun_execDrawDebugShotgunCone_Parms() { memset(this, 0, sizeof *this); }
	~ASFXWeapon_Shotgun_execDrawDebugShotgunCone_Parms() {}
};

// Function SFXGameContent_Inventory.SFXWeapon_Shotgun.CustomFire
// [0x00820102] ( FUNC_Simulated )
struct ASFXWeapon_Shotgun_execCustomFire_Parms
{
	// class ABioPlayerController*                     PC;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	// union { struct FVector                          StartTrace; };                                    		// 0x0008 (0x000C) [0x0000000000000000]              
	// union { struct FRotator                         AimRot; };                                        		// 0x0014 (0x000C) [0x0000000000000000]              
	// class ABioPawn*                                 P;                                                		// 0x0020 (0x0008) [0x0000000000000000]              

	 ASFXWeapon_Shotgun_execCustomFire_Parms() { memset(this, 0, sizeof *this); }
	~ASFXWeapon_Shotgun_execCustomFire_Parms() {}
};

// Function SFXGameContent_Inventory.SFXWeapon_Shotgun.ShouldSpawnTracerFX
// [0x00020102] ( FUNC_Simulated )
struct ASFXWeapon_Shotgun_execShouldSpawnTracerFX_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 ASFXWeapon_Shotgun_execShouldSpawnTracerFX_Parms() { memset(this, 0, sizeof *this); }
	~ASFXWeapon_Shotgun_execShouldSpawnTracerFX_Parms() {}
};

// Function SFXGameContent_Inventory.SFXWeapon_AutoPistol.GetWeaponSpecificImpactSound
// [0x00020102] ( FUNC_Simulated )
struct ASFXWeapon_AutoPistol_execGetWeaponSpecificImpactSound_Parms
{
	class USFXPhysicalMaterialImpactSounds*            ImpactSounds;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UWwiseEvent*                                 ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 ASFXWeapon_AutoPistol_execGetWeaponSpecificImpactSound_Parms() { memset(this, 0, sizeof *this); }
	~ASFXWeapon_AutoPistol_execGetWeaponSpecificImpactSound_Parms() {}
};

// Function SFXGameContent_Inventory.SFXWeapon_AutoPistol.GetWeaponSpecificImpactEffect
// [0x00020102] ( FUNC_Simulated )
struct ASFXWeapon_AutoPistol_execGetWeaponSpecificImpactEffect_Parms
{
	class USFXPhysicalMaterialImpactEffects*           ImpactEffects;                                    		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UParticleSystem*                             ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 ASFXWeapon_AutoPistol_execGetWeaponSpecificImpactEffect_Parms() { memset(this, 0, sizeof *this); }
	~ASFXWeapon_AutoPistol_execGetWeaponSpecificImpactEffect_Parms() {}
};

// Function SFXGameContent_Inventory.SFXWeapon_AutoPistol.GetWeaponSpecificDecalData
// [0x00420102] ( FUNC_Simulated )
struct ASFXWeapon_AutoPistol_execGetWeaponSpecificDecalData_Parms
{
	class USFXPhysicalMaterialDecals*                  DecalEffects;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              FadeTime;                                         		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UDecalComponent*                             ReturnValue;                                      		// 0x000C (0x0008) [0x0000000004000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
	// int                                             DecalLength;                                      		// 0x0014 (0x0004) [0x0000000000000000]              

	 ASFXWeapon_AutoPistol_execGetWeaponSpecificDecalData_Parms() { memset(this, 0, sizeof *this); }
	~ASFXWeapon_AutoPistol_execGetWeaponSpecificDecalData_Parms() {}
};

// Function SFXGameContent_Inventory.SFXWeapon_AssaultRifle.GetWeaponAnimNodeSeq
// [0x00020102] ( FUNC_Simulated )
struct ASFXWeapon_AssaultRifle_execGetWeaponAnimNodeSeq_Parms
{
	class UAnimNodeSequence*                           ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USkeletalMeshComponent*                   SkelMesh;                                         		// 0x0008 (0x0008) [0x0000000004000000]              ( CPF_EditInline )
	// class UAnimNodeSequence*                        AnimSeq;                                          		// 0x0010 (0x0008) [0x0000000000000000]              

	 ASFXWeapon_AssaultRifle_execGetWeaponAnimNodeSeq_Parms() { memset(this, 0, sizeof *this); }
	~ASFXWeapon_AssaultRifle_execGetWeaponAnimNodeSeq_Parms() {}
};

// Function SFXGameContent_Inventory.SFXWeapon_AssaultRifle.GetWeaponSpecificImpactSound
// [0x00020102] ( FUNC_Simulated )
struct ASFXWeapon_AssaultRifle_execGetWeaponSpecificImpactSound_Parms
{
	class USFXPhysicalMaterialImpactSounds*            ImpactSounds;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UWwiseEvent*                                 ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 ASFXWeapon_AssaultRifle_execGetWeaponSpecificImpactSound_Parms() { memset(this, 0, sizeof *this); }
	~ASFXWeapon_AssaultRifle_execGetWeaponSpecificImpactSound_Parms() {}
};

// Function SFXGameContent_Inventory.SFXWeapon_AssaultRifle.GetWeaponSpecificImpactEffect
// [0x00020102] ( FUNC_Simulated )
struct ASFXWeapon_AssaultRifle_execGetWeaponSpecificImpactEffect_Parms
{
	class USFXPhysicalMaterialImpactEffects*           ImpactEffects;                                    		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UParticleSystem*                             ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 ASFXWeapon_AssaultRifle_execGetWeaponSpecificImpactEffect_Parms() { memset(this, 0, sizeof *this); }
	~ASFXWeapon_AssaultRifle_execGetWeaponSpecificImpactEffect_Parms() {}
};

// Function SFXGameContent_Inventory.SFXWeapon_AssaultRifle.GetWeaponSpecificDecalData
// [0x00420102] ( FUNC_Simulated )
struct ASFXWeapon_AssaultRifle_execGetWeaponSpecificDecalData_Parms
{
	class USFXPhysicalMaterialDecals*                  DecalEffects;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              FadeTime;                                         		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UDecalComponent*                             ReturnValue;                                      		// 0x000C (0x0008) [0x0000000004000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
	// int                                             DecalLength;                                      		// 0x0014 (0x0004) [0x0000000000000000]              

	 ASFXWeapon_AssaultRifle_execGetWeaponSpecificDecalData_Parms() { memset(this, 0, sizeof *this); }
	~ASFXWeapon_AssaultRifle_execGetWeaponSpecificDecalData_Parms() {}
};

// Function SFXGameContent_Inventory.SFXWeapon_AssaultRifle.StopMuzzleFlashEffect
// [0x00020102] ( FUNC_Simulated )
struct ASFXWeapon_AssaultRifle_execStopMuzzleFlashEffect_Parms
{

	 ASFXWeapon_AssaultRifle_execStopMuzzleFlashEffect_Parms() { memset(this, 0, sizeof *this); }
	~ASFXWeapon_AssaultRifle_execStopMuzzleFlashEffect_Parms() {}
};

// Function SFXGameContent_Inventory.SFXWeapon_AssaultRifle.PlayFireEffects
// [0x00024102] ( FUNC_Simulated )
struct ASFXWeapon_AssaultRifle_execPlayFireEffects_Parms
{
	unsigned char                                      FiringMode;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitLocation; };                                   		// 0x0004 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 ASFXWeapon_AssaultRifle_execPlayFireEffects_Parms() { memset(this, 0, sizeof *this); }
	~ASFXWeapon_AssaultRifle_execPlayFireEffects_Parms() {}
};

// Function SFXGameContent_Inventory.SFXWeapon_AssaultRifle.PlayMuzzleFlashEffect
// [0x00020102] ( FUNC_Simulated )
struct ASFXWeapon_AssaultRifle_execPlayMuzzleFlashEffect_Parms
{

	 ASFXWeapon_AssaultRifle_execPlayMuzzleFlashEffect_Parms() { memset(this, 0, sizeof *this); }
	~ASFXWeapon_AssaultRifle_execPlayMuzzleFlashEffect_Parms() {}
};

// Function SFXGameContent_Inventory.SFXWeapon_AssaultRifle.ShouldSpawnTracerFX
// [0x00020102] ( FUNC_Simulated )
struct ASFXWeapon_AssaultRifle_execShouldSpawnTracerFX_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 ASFXWeapon_AssaultRifle_execShouldSpawnTracerFX_Parms() { memset(this, 0, sizeof *this); }
	~ASFXWeapon_AssaultRifle_execShouldSpawnTracerFX_Parms() {}
};

// Function SFXGameContent_Inventory.SFXWeapon_SniperRifle.SetZoomed
// [0x00020102] ( FUNC_Simulated )
struct ASFXWeapon_SniperRifle_execSetZoomed_Parms
{
	unsigned long                                      bState;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 ASFXWeapon_SniperRifle_execSetZoomed_Parms() { memset(this, 0, sizeof *this); }
	~ASFXWeapon_SniperRifle_execSetZoomed_Parms() {}
};

// Function SFXGameContent_Inventory.SFXWeapon_SniperRifle.GetWeaponSpecificImpactSound
// [0x00020102] ( FUNC_Simulated )
struct ASFXWeapon_SniperRifle_execGetWeaponSpecificImpactSound_Parms
{
	class USFXPhysicalMaterialImpactSounds*            ImpactSounds;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UWwiseEvent*                                 ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 ASFXWeapon_SniperRifle_execGetWeaponSpecificImpactSound_Parms() { memset(this, 0, sizeof *this); }
	~ASFXWeapon_SniperRifle_execGetWeaponSpecificImpactSound_Parms() {}
};

// Function SFXGameContent_Inventory.SFXWeapon_SniperRifle.GetWeaponSpecificImpactEffect
// [0x00020102] ( FUNC_Simulated )
struct ASFXWeapon_SniperRifle_execGetWeaponSpecificImpactEffect_Parms
{
	class USFXPhysicalMaterialImpactEffects*           ImpactEffects;                                    		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UParticleSystem*                             ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 ASFXWeapon_SniperRifle_execGetWeaponSpecificImpactEffect_Parms() { memset(this, 0, sizeof *this); }
	~ASFXWeapon_SniperRifle_execGetWeaponSpecificImpactEffect_Parms() {}
};

// Function SFXGameContent_Inventory.SFXWeapon_SniperRifle.GetWeaponSpecificDecalData
// [0x00420102] ( FUNC_Simulated )
struct ASFXWeapon_SniperRifle_execGetWeaponSpecificDecalData_Parms
{
	class USFXPhysicalMaterialDecals*                  DecalEffects;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              FadeTime;                                         		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UDecalComponent*                             ReturnValue;                                      		// 0x000C (0x0008) [0x0000000004000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
	// int                                             DecalLength;                                      		// 0x0014 (0x0004) [0x0000000000000000]              

	 ASFXWeapon_SniperRifle_execGetWeaponSpecificDecalData_Parms() { memset(this, 0, sizeof *this); }
	~ASFXWeapon_SniperRifle_execGetWeaponSpecificDecalData_Parms() {}
};

// Function SFXGameContent_Inventory.SFXWeapon_HeavyPistol.GetWeaponSpecificImpactSound
// [0x00020102] ( FUNC_Simulated )
struct ASFXWeapon_HeavyPistol_execGetWeaponSpecificImpactSound_Parms
{
	class USFXPhysicalMaterialImpactSounds*            ImpactSounds;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UWwiseEvent*                                 ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 ASFXWeapon_HeavyPistol_execGetWeaponSpecificImpactSound_Parms() { memset(this, 0, sizeof *this); }
	~ASFXWeapon_HeavyPistol_execGetWeaponSpecificImpactSound_Parms() {}
};

// Function SFXGameContent_Inventory.SFXWeapon_HeavyPistol.GetWeaponSpecificImpactEffect
// [0x00020102] ( FUNC_Simulated )
struct ASFXWeapon_HeavyPistol_execGetWeaponSpecificImpactEffect_Parms
{
	class USFXPhysicalMaterialImpactEffects*           ImpactEffects;                                    		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UParticleSystem*                             ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 ASFXWeapon_HeavyPistol_execGetWeaponSpecificImpactEffect_Parms() { memset(this, 0, sizeof *this); }
	~ASFXWeapon_HeavyPistol_execGetWeaponSpecificImpactEffect_Parms() {}
};

// Function SFXGameContent_Inventory.SFXWeapon_HeavyPistol.GetWeaponSpecificDecalData
// [0x00420102] ( FUNC_Simulated )
struct ASFXWeapon_HeavyPistol_execGetWeaponSpecificDecalData_Parms
{
	class USFXPhysicalMaterialDecals*                  DecalEffects;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              FadeTime;                                         		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UDecalComponent*                             ReturnValue;                                      		// 0x000C (0x0008) [0x0000000004000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
	// int                                             DecalLength;                                      		// 0x0014 (0x0004) [0x0000000000000000]              

	 ASFXWeapon_HeavyPistol_execGetWeaponSpecificDecalData_Parms() { memset(this, 0, sizeof *this); }
	~ASFXWeapon_HeavyPistol_execGetWeaponSpecificDecalData_Parms() {}
};

// Function SFXGameContent_Inventory.SFXProjectile_Grenade.Recycle
// [0x00020102] ( FUNC_Simulated )
struct ASFXProjectile_Grenade_execRecycle_Parms
{

	 ASFXProjectile_Grenade_execRecycle_Parms() { memset(this, 0, sizeof *this); }
	~ASFXProjectile_Grenade_execRecycle_Parms() {}
};

// Function SFXGameContent_Inventory.SFXProjectile_Grenade.DoImpact
// [0x00020002] 
struct ASFXProjectile_Grenade_execDoImpact_Parms
{
	class AActor*                                      InImpactedActor;                                  		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 InInstigatorController;                           		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              BaseDamage;                                       		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              InDamageRadius;                                   		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Momentum;                                         		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HurtOrigin; };                                    		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bFullDamage;                                      		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ABioPawn*                                 HitPawn;                                          		// 0x002C (0x0008) [0x0000000000000000]              
	// float                                           RandomNumber;                                     		// 0x0034 (0x0004) [0x0000000000000000]              
	// union { TArray<unsigned char>                   Parts; };                                         		// 0x0038 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class USFXModule_Damage*                        DmgModule;                                        		// 0x0048 (0x0008) [0x0000000000000000]              

	 ASFXProjectile_Grenade_execDoImpact_Parms() { memset(this, 0, sizeof *this); }
	~ASFXProjectile_Grenade_execDoImpact_Parms() {}
};

// Function SFXGameContent_Inventory.SFXProjectile_Grenade.Tick
// [0x00820102] ( FUNC_Simulated )
struct ASFXProjectile_Grenade_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// union { struct FVector                          DesiredOrientation; };                            		// 0x0004 (0x000C) [0x0000000000000000]              
	// union { struct FVector                          CurrentOrientation; };                            		// 0x0010 (0x000C) [0x0000000000000000]              
	// float                                           fAngle;                                           		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           fTargetVelocity;                                  		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           fAngleChange;                                     		// 0x0024 (0x0004) [0x0000000000000000]              

	 ASFXProjectile_Grenade_execTick_Parms() { memset(this, 0, sizeof *this); }
	~ASFXProjectile_Grenade_execTick_Parms() {}
};

// Function SFXGameContent_Inventory.SFXProjectile_Grenade.GetAimLocation
// [0x00820002] 
struct ASFXProjectile_Grenade_execGetAimLocation_Parms
{
	union { struct FVector                             ReturnValue; };                                   		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// union { struct FVector                          NodeLocation; };                                  		// 0x000C (0x000C) [0x0000000000000000]              
	// class ABioPawn*                                 oPawn;                                            		// 0x0018 (0x0008) [0x0000000000000000]              

	 ASFXProjectile_Grenade_execGetAimLocation_Parms() { memset(this, 0, sizeof *this); }
	~ASFXProjectile_Grenade_execGetAimLocation_Parms() {}
};

// Function SFXGameContent_Inventory.SFXProjectile_Grenade.Init
// [0x00020002] 
struct ASFXProjectile_Grenade_execInit_Parms
{
	union { struct FVector                             Direction; };                                     		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class ABioPlayerController*                     PC;                                               		// 0x000C (0x0008) [0x0000000000000000]              

	 ASFXProjectile_Grenade_execInit_Parms() { memset(this, 0, sizeof *this); }
	~ASFXProjectile_Grenade_execInit_Parms() {}
};

// Function SFXGameContent_Inventory.SFXHeavyWeapon_MissileLauncher.Tick
// [0x00020102] ( FUNC_Simulated )
struct ASFXHeavyWeapon_MissileLauncher_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ABioPlayerController*                     BPC;                                              		// 0x0004 (0x0008) [0x0000000000000000]              

	 ASFXHeavyWeapon_MissileLauncher_execTick_Parms() { memset(this, 0, sizeof *this); }
	~ASFXHeavyWeapon_MissileLauncher_execTick_Parms() {}
};

// Function SFXGameContent_Inventory.SFXProjectile_SeekingMissile.Recycle
// [0x00020102] ( FUNC_Simulated )
struct ASFXProjectile_SeekingMissile_execRecycle_Parms
{

	 ASFXProjectile_SeekingMissile_execRecycle_Parms() { memset(this, 0, sizeof *this); }
	~ASFXProjectile_SeekingMissile_execRecycle_Parms() {}
};

// Function SFXGameContent_Inventory.SFXProjectile_SeekingMissile.DoImpact
// [0x00020002] 
struct ASFXProjectile_SeekingMissile_execDoImpact_Parms
{
	class AActor*                                      InImpactedActor;                                  		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 InInstigatorController;                           		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              BaseDamage;                                       		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              InDamageRadius;                                   		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Momentum;                                         		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HurtOrigin; };                                    		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bFullDamage;                                      		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ABioPawn*                                 HitPawn;                                          		// 0x002C (0x0008) [0x0000000000000000]              
	// class ABioWorldInfo*                            pWorldInfo;                                       		// 0x0034 (0x0008) [0x0000000000000000]              
	// class ABioPlayerController*                     pController;                                      		// 0x003C (0x0008) [0x0000000000000000]              
	// union { TArray<unsigned char>                   Parts; };                                         		// 0x0044 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class USFXModule_Damage*                        DmgModule;                                        		// 0x0054 (0x0008) [0x0000000000000000]              

	 ASFXProjectile_SeekingMissile_execDoImpact_Parms() { memset(this, 0, sizeof *this); }
	~ASFXProjectile_SeekingMissile_execDoImpact_Parms() {}
};

// Function SFXGameContent_Inventory.SFXProjectile_SeekingMissile.Destroyed
// [0x00020102] ( FUNC_Simulated )
struct ASFXProjectile_SeekingMissile_execDestroyed_Parms
{

	 ASFXProjectile_SeekingMissile_execDestroyed_Parms() { memset(this, 0, sizeof *this); }
	~ASFXProjectile_SeekingMissile_execDestroyed_Parms() {}
};

// Function SFXGameContent_Inventory.SFXProjectile_SeekingMissile.ShutDown
// [0x00020102] ( FUNC_Simulated )
struct ASFXProjectile_SeekingMissile_execShutDown_Parms
{

	 ASFXProjectile_SeekingMissile_execShutDown_Parms() { memset(this, 0, sizeof *this); }
	~ASFXProjectile_SeekingMissile_execShutDown_Parms() {}
};

// Function SFXGameContent_Inventory.SFXProjectile_SeekingMissile.Init
// [0x00020002] 
struct ASFXProjectile_SeekingMissile_execInit_Parms
{
	union { struct FVector                             Direction; };                                     		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )

	 ASFXProjectile_SeekingMissile_execInit_Parms() { memset(this, 0, sizeof *this); }
	~ASFXProjectile_SeekingMissile_execInit_Parms() {}
};

// Function SFXGameContent_Inventory.SFXProjectile_SeekingMissile.TickPlayer
// [0x00820102] ( FUNC_Simulated )
struct ASFXProjectile_SeekingMissile_execTickPlayer_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// union { struct FQuat                            Q; };                                             		// 0x0010 (0x0010) [0x0000000000000000]              
	// union { struct FVector                          V; };                                             		// 0x0020 (0x000C) [0x0000000000000000]              
	// float                                           T;                                                		// 0x002C (0x0004) [0x0000000000000000]              
	// float                                           Dist;                                             		// 0x0030 (0x0004) [0x0000000000000000]              

	 ASFXProjectile_SeekingMissile_execTickPlayer_Parms() { memset(this, 0, sizeof *this); }
	~ASFXProjectile_SeekingMissile_execTickPlayer_Parms() {}
};

// Function SFXGameContent_Inventory.SFXProjectile_SeekingMissile.TickNPC
// [0x00820102] ( FUNC_Simulated )
struct ASFXProjectile_SeekingMissile_execTickNPC_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// union { struct FVector                          DesiredOrientation; };                            		// 0x0004 (0x000C) [0x0000000000000000]              
	// union { struct FVector                          CurrentOrientation; };                            		// 0x0010 (0x000C) [0x0000000000000000]              
	// float                                           fAngle;                                           		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           fTargetVelocity;                                  		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           fAngleChange;                                     		// 0x0024 (0x0004) [0x0000000000000000]              

	 ASFXProjectile_SeekingMissile_execTickNPC_Parms() { memset(this, 0, sizeof *this); }
	~ASFXProjectile_SeekingMissile_execTickNPC_Parms() {}
};

// Function SFXGameContent_Inventory.SFXProjectile_SeekingMissile.Tick
// [0x00020102] ( FUNC_Simulated )
struct ASFXProjectile_SeekingMissile_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ABioPawn*                                 BP;                                               		// 0x0004 (0x0008) [0x0000000000000000]              
	// class ASFXHeavyWeapon_MissileLauncher*          W;                                                		// 0x000C (0x0008) [0x0000000000000000]              

	 ASFXProjectile_SeekingMissile_execTick_Parms() { memset(this, 0, sizeof *this); }
	~ASFXProjectile_SeekingMissile_execTick_Parms() {}
};

// Function SFXGameContent_Inventory.SFXProjectile_SeekingMissile.GetAimLocation
// [0x00820002] 
struct ASFXProjectile_SeekingMissile_execGetAimLocation_Parms
{
	union { struct FVector                             ReturnValue; };                                   		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// union { struct FVector                          NodeLocation; };                                  		// 0x000C (0x000C) [0x0000000000000000]              

	 ASFXProjectile_SeekingMissile_execGetAimLocation_Parms() { memset(this, 0, sizeof *this); }
	~ASFXProjectile_SeekingMissile_execGetAimLocation_Parms() {}
};

// Function SFXGameContent_Inventory.SFXProjectile_SeekingMissile.AcquireTarget
// [0x00020002] 
struct ASFXProjectile_SeekingMissile_execAcquireTarget_Parms
{
	// class ABioPawn*                                 BP;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	// class ASFXHeavyWeapon_MissileLauncher*          W;                                                		// 0x0008 (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 P;                                                		// 0x0010 (0x0008) [0x0000000000000000]              
	// union { TArray<class ABioPawn*>                 PossibleTargets; };                               		// 0x0018 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             RandIdx;                                          		// 0x0028 (0x0004) [0x0000000000000000]              

	 ASFXProjectile_SeekingMissile_execAcquireTarget_Parms() { memset(this, 0, sizeof *this); }
	~ASFXProjectile_SeekingMissile_execAcquireTarget_Parms() {}
};

// Function SFXGameContent_Inventory.SFXProjectile_Rocket.DoImpact
// [0x00020002] 
struct ASFXProjectile_Rocket_execDoImpact_Parms
{
	class AActor*                                      InImpactedActor;                                  		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 InInstigatorController;                           		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              BaseDamage;                                       		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              InDamageRadius;                                   		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Momentum;                                         		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HurtOrigin; };                                    		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bFullDamage;                                      		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ABioPawn*                                 HitPawn;                                          		// 0x002C (0x0008) [0x0000000000000000]              
	// class ABioWorldInfo*                            pWorldInfo;                                       		// 0x0034 (0x0008) [0x0000000000000000]              
	// class ABioPlayerController*                     pController;                                      		// 0x003C (0x0008) [0x0000000000000000]              

	 ASFXProjectile_Rocket_execDoImpact_Parms() { memset(this, 0, sizeof *this); }
	~ASFXProjectile_Rocket_execDoImpact_Parms() {}
};



#undef LESDK_IN_GENERATED

#ifdef _MSC_VER
	#pragma pack ( pop )
#endif
