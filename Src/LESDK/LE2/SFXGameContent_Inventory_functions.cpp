/*
#############################################################################################
# Mass Effect 2 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.5_Beta-Rev.60-MELE
# ========================================================================================= #
# File: SFXGameContent_Inventory_functions.cpp
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL, SirCxyrtyx
# Thanks: HOOAH07, lowHertz
#############################################################################################
*/


#include "../Includes.LE2.hpp"


#ifdef _MSC_VER
	#pragma pack ( push, 0x4 )
#endif
#define LESDK_IN_GENERATED


/*
# ========================================================================================= #
# Functions
# ========================================================================================= #
*/



class UClass* ASFXWeapon_AssaultRifle::pClassPointer = NULL;

class UClass* ASFXWeapon_AssaultRifle::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Inventory.SFXWeapon_AssaultRifle" );

		return pClassPointer;
	};

// Function SFXGameContent_Inventory.SFXWeapon_AssaultRifle.GetWeaponAnimNodeSeq
// [0x00020102] ( FUNC_Simulated )
// Parameters infos:
// class UAnimNodeSequence*       ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UAnimNodeSequence* ASFXWeapon_AssaultRifle::GetWeaponAnimNodeSeq ( )
{
	static UFunction* pFnGetWeaponAnimNodeSeq = NULL;

	if ( ! pFnGetWeaponAnimNodeSeq )
		pFnGetWeaponAnimNodeSeq = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Inventory.SFXWeapon_AssaultRifle.GetWeaponAnimNodeSeq" );

	ASFXWeapon_AssaultRifle_execGetWeaponAnimNodeSeq_Parms GetWeaponAnimNodeSeq_Parms;

	this->ProcessEvent ( pFnGetWeaponAnimNodeSeq, &GetWeaponAnimNodeSeq_Parms, NULL );

	return GetWeaponAnimNodeSeq_Parms.ReturnValue;
};

// Function SFXGameContent_Inventory.SFXWeapon_AssaultRifle.GetWeaponSpecificImpactSound
// [0x00020102] ( FUNC_Simulated )
// Parameters infos:
// class UWwiseEvent*             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class USFXPhysicalMaterialImpactSounds* ImpactSounds                   ( CPF_Parm )

class UWwiseEvent* ASFXWeapon_AssaultRifle::GetWeaponSpecificImpactSound ( class USFXPhysicalMaterialImpactSounds* ImpactSounds )
{
	static UFunction* pFnGetWeaponSpecificImpactSound = NULL;

	if ( ! pFnGetWeaponSpecificImpactSound )
		pFnGetWeaponSpecificImpactSound = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Inventory.SFXWeapon_AssaultRifle.GetWeaponSpecificImpactSound" );

	ASFXWeapon_AssaultRifle_execGetWeaponSpecificImpactSound_Parms GetWeaponSpecificImpactSound_Parms;
	GetWeaponSpecificImpactSound_Parms.ImpactSounds = ImpactSounds;

	this->ProcessEvent ( pFnGetWeaponSpecificImpactSound, &GetWeaponSpecificImpactSound_Parms, NULL );

	return GetWeaponSpecificImpactSound_Parms.ReturnValue;
};

// Function SFXGameContent_Inventory.SFXWeapon_AssaultRifle.GetWeaponSpecificImpactEffect
// [0x00020102] ( FUNC_Simulated )
// Parameters infos:
// class UParticleSystem*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class USFXPhysicalMaterialImpactEffects* ImpactEffects                  ( CPF_Parm )

class UParticleSystem* ASFXWeapon_AssaultRifle::GetWeaponSpecificImpactEffect ( class USFXPhysicalMaterialImpactEffects* ImpactEffects )
{
	static UFunction* pFnGetWeaponSpecificImpactEffect = NULL;

	if ( ! pFnGetWeaponSpecificImpactEffect )
		pFnGetWeaponSpecificImpactEffect = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Inventory.SFXWeapon_AssaultRifle.GetWeaponSpecificImpactEffect" );

	ASFXWeapon_AssaultRifle_execGetWeaponSpecificImpactEffect_Parms GetWeaponSpecificImpactEffect_Parms;
	GetWeaponSpecificImpactEffect_Parms.ImpactEffects = ImpactEffects;

	this->ProcessEvent ( pFnGetWeaponSpecificImpactEffect, &GetWeaponSpecificImpactEffect_Parms, NULL );

	return GetWeaponSpecificImpactEffect_Parms.ReturnValue;
};

// Function SFXGameContent_Inventory.SFXWeapon_AssaultRifle.GetWeaponSpecificDecalData
// [0x00420102] ( FUNC_Simulated )
// Parameters infos:
// class UDecalComponent*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
// class USFXPhysicalMaterialDecals* DecalEffects                   ( CPF_Parm )
// float                          FadeTime                       ( CPF_Parm | CPF_OutParm )

class UDecalComponent* ASFXWeapon_AssaultRifle::GetWeaponSpecificDecalData ( class USFXPhysicalMaterialDecals* DecalEffects, float* FadeTime )
{
	static UFunction* pFnGetWeaponSpecificDecalData = NULL;

	if ( ! pFnGetWeaponSpecificDecalData )
		pFnGetWeaponSpecificDecalData = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Inventory.SFXWeapon_AssaultRifle.GetWeaponSpecificDecalData" );

	ASFXWeapon_AssaultRifle_execGetWeaponSpecificDecalData_Parms GetWeaponSpecificDecalData_Parms;
	GetWeaponSpecificDecalData_Parms.DecalEffects = DecalEffects;

	if ( FadeTime )
		GetWeaponSpecificDecalData_Parms.FadeTime = *FadeTime;

	this->ProcessEvent ( pFnGetWeaponSpecificDecalData, &GetWeaponSpecificDecalData_Parms, NULL );

	if ( FadeTime )
		*FadeTime = GetWeaponSpecificDecalData_Parms.FadeTime;

	return GetWeaponSpecificDecalData_Parms.ReturnValue;
};

// Function SFXGameContent_Inventory.SFXWeapon_AssaultRifle.StopMuzzleFlashEffect
// [0x00020102] ( FUNC_Simulated )
// Parameters infos:

void ASFXWeapon_AssaultRifle::StopMuzzleFlashEffect ( )
{
	static UFunction* pFnStopMuzzleFlashEffect = NULL;

	if ( ! pFnStopMuzzleFlashEffect )
		pFnStopMuzzleFlashEffect = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Inventory.SFXWeapon_AssaultRifle.StopMuzzleFlashEffect" );

	ASFXWeapon_AssaultRifle_execStopMuzzleFlashEffect_Parms StopMuzzleFlashEffect_Parms;

	this->ProcessEvent ( pFnStopMuzzleFlashEffect, &StopMuzzleFlashEffect_Parms, NULL );
};

// Function SFXGameContent_Inventory.SFXWeapon_AssaultRifle.PlayFireEffects
// [0x00024102] ( FUNC_Simulated )
// Parameters infos:
// unsigned char                  FiringMode                     ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_OptionalParm | CPF_Parm )

void ASFXWeapon_AssaultRifle::PlayFireEffects ( unsigned char FiringMode, struct FVector HitLocation )
{
	static UFunction* pFnPlayFireEffects = NULL;

	if ( ! pFnPlayFireEffects )
		pFnPlayFireEffects = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Inventory.SFXWeapon_AssaultRifle.PlayFireEffects" );

	ASFXWeapon_AssaultRifle_execPlayFireEffects_Parms PlayFireEffects_Parms;
	PlayFireEffects_Parms.FiringMode = FiringMode;
	memcpy ( &PlayFireEffects_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnPlayFireEffects, &PlayFireEffects_Parms, NULL );
};

// Function SFXGameContent_Inventory.SFXWeapon_AssaultRifle.PlayMuzzleFlashEffect
// [0x00020102] ( FUNC_Simulated )
// Parameters infos:

void ASFXWeapon_AssaultRifle::PlayMuzzleFlashEffect ( )
{
	static UFunction* pFnPlayMuzzleFlashEffect = NULL;

	if ( ! pFnPlayMuzzleFlashEffect )
		pFnPlayMuzzleFlashEffect = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Inventory.SFXWeapon_AssaultRifle.PlayMuzzleFlashEffect" );

	ASFXWeapon_AssaultRifle_execPlayMuzzleFlashEffect_Parms PlayMuzzleFlashEffect_Parms;

	this->ProcessEvent ( pFnPlayMuzzleFlashEffect, &PlayMuzzleFlashEffect_Parms, NULL );
};

// Function SFXGameContent_Inventory.SFXWeapon_AssaultRifle.ShouldSpawnTracerFX
// [0x00020102] ( FUNC_Simulated )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ASFXWeapon_AssaultRifle::ShouldSpawnTracerFX ( )
{
	static UFunction* pFnShouldSpawnTracerFX = NULL;

	if ( ! pFnShouldSpawnTracerFX )
		pFnShouldSpawnTracerFX = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Inventory.SFXWeapon_AssaultRifle.ShouldSpawnTracerFX" );

	ASFXWeapon_AssaultRifle_execShouldSpawnTracerFX_Parms ShouldSpawnTracerFX_Parms;

	this->ProcessEvent ( pFnShouldSpawnTracerFX, &ShouldSpawnTracerFX_Parms, NULL );

	return ShouldSpawnTracerFX_Parms.ReturnValue;
};



class UClass* USFXDamageType_AssaultRifle::pClassPointer = NULL;

class UClass* USFXDamageType_AssaultRifle::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Inventory.SFXDamageType_AssaultRifle" );

		return pClassPointer;
	};



class UClass* USFXDamageType_SniperRifle::pClassPointer = NULL;

class UClass* USFXDamageType_SniperRifle::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Inventory.SFXDamageType_SniperRifle" );

		return pClassPointer;
	};



class UClass* ASFXWeapon_SniperRifle::pClassPointer = NULL;

class UClass* ASFXWeapon_SniperRifle::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Inventory.SFXWeapon_SniperRifle" );

		return pClassPointer;
	};

// Function SFXGameContent_Inventory.SFXWeapon_SniperRifle.SetZoomed
// [0x00020102] ( FUNC_Simulated )
// Parameters infos:
// unsigned long                  bState                         ( CPF_Parm )

void ASFXWeapon_SniperRifle::SetZoomed ( unsigned long bState )
{
	static UFunction* pFnSetZoomed = NULL;

	if ( ! pFnSetZoomed )
		pFnSetZoomed = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Inventory.SFXWeapon_SniperRifle.SetZoomed" );

	ASFXWeapon_SniperRifle_execSetZoomed_Parms SetZoomed_Parms;
	SetZoomed_Parms.bState = bState;

	this->ProcessEvent ( pFnSetZoomed, &SetZoomed_Parms, NULL );
};

// Function SFXGameContent_Inventory.SFXWeapon_SniperRifle.GetWeaponSpecificImpactSound
// [0x00020102] ( FUNC_Simulated )
// Parameters infos:
// class UWwiseEvent*             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class USFXPhysicalMaterialImpactSounds* ImpactSounds                   ( CPF_Parm )

class UWwiseEvent* ASFXWeapon_SniperRifle::GetWeaponSpecificImpactSound ( class USFXPhysicalMaterialImpactSounds* ImpactSounds )
{
	static UFunction* pFnGetWeaponSpecificImpactSound = NULL;

	if ( ! pFnGetWeaponSpecificImpactSound )
		pFnGetWeaponSpecificImpactSound = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Inventory.SFXWeapon_SniperRifle.GetWeaponSpecificImpactSound" );

	ASFXWeapon_SniperRifle_execGetWeaponSpecificImpactSound_Parms GetWeaponSpecificImpactSound_Parms;
	GetWeaponSpecificImpactSound_Parms.ImpactSounds = ImpactSounds;

	this->ProcessEvent ( pFnGetWeaponSpecificImpactSound, &GetWeaponSpecificImpactSound_Parms, NULL );

	return GetWeaponSpecificImpactSound_Parms.ReturnValue;
};

// Function SFXGameContent_Inventory.SFXWeapon_SniperRifle.GetWeaponSpecificImpactEffect
// [0x00020102] ( FUNC_Simulated )
// Parameters infos:
// class UParticleSystem*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class USFXPhysicalMaterialImpactEffects* ImpactEffects                  ( CPF_Parm )

class UParticleSystem* ASFXWeapon_SniperRifle::GetWeaponSpecificImpactEffect ( class USFXPhysicalMaterialImpactEffects* ImpactEffects )
{
	static UFunction* pFnGetWeaponSpecificImpactEffect = NULL;

	if ( ! pFnGetWeaponSpecificImpactEffect )
		pFnGetWeaponSpecificImpactEffect = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Inventory.SFXWeapon_SniperRifle.GetWeaponSpecificImpactEffect" );

	ASFXWeapon_SniperRifle_execGetWeaponSpecificImpactEffect_Parms GetWeaponSpecificImpactEffect_Parms;
	GetWeaponSpecificImpactEffect_Parms.ImpactEffects = ImpactEffects;

	this->ProcessEvent ( pFnGetWeaponSpecificImpactEffect, &GetWeaponSpecificImpactEffect_Parms, NULL );

	return GetWeaponSpecificImpactEffect_Parms.ReturnValue;
};

// Function SFXGameContent_Inventory.SFXWeapon_SniperRifle.GetWeaponSpecificDecalData
// [0x00420102] ( FUNC_Simulated )
// Parameters infos:
// class UDecalComponent*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
// class USFXPhysicalMaterialDecals* DecalEffects                   ( CPF_Parm )
// float                          FadeTime                       ( CPF_Parm | CPF_OutParm )

class UDecalComponent* ASFXWeapon_SniperRifle::GetWeaponSpecificDecalData ( class USFXPhysicalMaterialDecals* DecalEffects, float* FadeTime )
{
	static UFunction* pFnGetWeaponSpecificDecalData = NULL;

	if ( ! pFnGetWeaponSpecificDecalData )
		pFnGetWeaponSpecificDecalData = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Inventory.SFXWeapon_SniperRifle.GetWeaponSpecificDecalData" );

	ASFXWeapon_SniperRifle_execGetWeaponSpecificDecalData_Parms GetWeaponSpecificDecalData_Parms;
	GetWeaponSpecificDecalData_Parms.DecalEffects = DecalEffects;

	if ( FadeTime )
		GetWeaponSpecificDecalData_Parms.FadeTime = *FadeTime;

	this->ProcessEvent ( pFnGetWeaponSpecificDecalData, &GetWeaponSpecificDecalData_Parms, NULL );

	if ( FadeTime )
		*FadeTime = GetWeaponSpecificDecalData_Parms.FadeTime;

	return GetWeaponSpecificDecalData_Parms.ReturnValue;
};



class UClass* USFXDamageType_Shotgun::pClassPointer = NULL;

class UClass* USFXDamageType_Shotgun::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Inventory.SFXDamageType_Shotgun" );

		return pClassPointer;
	};



class UClass* USFXDamageType_FlakGun::pClassPointer = NULL;

class UClass* USFXDamageType_FlakGun::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Inventory.SFXDamageType_FlakGun" );

		return pClassPointer;
	};



class UClass* USFXDamageType_HeavyShotgun::pClassPointer = NULL;

class UClass* USFXDamageType_HeavyShotgun::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Inventory.SFXDamageType_HeavyShotgun" );

		return pClassPointer;
	};



class UClass* ASFXWeapon_Shotgun::pClassPointer = NULL;

class UClass* ASFXWeapon_Shotgun::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Inventory.SFXWeapon_Shotgun" );

		return pClassPointer;
	};

// Function SFXGameContent_Inventory.SFXWeapon_Shotgun.GetWeaponSpecificImpactSound
// [0x00020102] ( FUNC_Simulated )
// Parameters infos:
// class UWwiseEvent*             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class USFXPhysicalMaterialImpactSounds* ImpactSounds                   ( CPF_Parm )

class UWwiseEvent* ASFXWeapon_Shotgun::GetWeaponSpecificImpactSound ( class USFXPhysicalMaterialImpactSounds* ImpactSounds )
{
	static UFunction* pFnGetWeaponSpecificImpactSound = NULL;

	if ( ! pFnGetWeaponSpecificImpactSound )
		pFnGetWeaponSpecificImpactSound = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Inventory.SFXWeapon_Shotgun.GetWeaponSpecificImpactSound" );

	ASFXWeapon_Shotgun_execGetWeaponSpecificImpactSound_Parms GetWeaponSpecificImpactSound_Parms;
	GetWeaponSpecificImpactSound_Parms.ImpactSounds = ImpactSounds;

	this->ProcessEvent ( pFnGetWeaponSpecificImpactSound, &GetWeaponSpecificImpactSound_Parms, NULL );

	return GetWeaponSpecificImpactSound_Parms.ReturnValue;
};

// Function SFXGameContent_Inventory.SFXWeapon_Shotgun.GetWeaponSpecificImpactEffect
// [0x00020102] ( FUNC_Simulated )
// Parameters infos:
// class UParticleSystem*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class USFXPhysicalMaterialImpactEffects* ImpactEffects                  ( CPF_Parm )

class UParticleSystem* ASFXWeapon_Shotgun::GetWeaponSpecificImpactEffect ( class USFXPhysicalMaterialImpactEffects* ImpactEffects )
{
	static UFunction* pFnGetWeaponSpecificImpactEffect = NULL;

	if ( ! pFnGetWeaponSpecificImpactEffect )
		pFnGetWeaponSpecificImpactEffect = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Inventory.SFXWeapon_Shotgun.GetWeaponSpecificImpactEffect" );

	ASFXWeapon_Shotgun_execGetWeaponSpecificImpactEffect_Parms GetWeaponSpecificImpactEffect_Parms;
	GetWeaponSpecificImpactEffect_Parms.ImpactEffects = ImpactEffects;

	this->ProcessEvent ( pFnGetWeaponSpecificImpactEffect, &GetWeaponSpecificImpactEffect_Parms, NULL );

	return GetWeaponSpecificImpactEffect_Parms.ReturnValue;
};

// Function SFXGameContent_Inventory.SFXWeapon_Shotgun.GetWeaponSpecificDecalData
// [0x00420102] ( FUNC_Simulated )
// Parameters infos:
// class UDecalComponent*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
// class USFXPhysicalMaterialDecals* DecalEffects                   ( CPF_Parm )
// float                          FadeTime                       ( CPF_Parm | CPF_OutParm )

class UDecalComponent* ASFXWeapon_Shotgun::GetWeaponSpecificDecalData ( class USFXPhysicalMaterialDecals* DecalEffects, float* FadeTime )
{
	static UFunction* pFnGetWeaponSpecificDecalData = NULL;

	if ( ! pFnGetWeaponSpecificDecalData )
		pFnGetWeaponSpecificDecalData = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Inventory.SFXWeapon_Shotgun.GetWeaponSpecificDecalData" );

	ASFXWeapon_Shotgun_execGetWeaponSpecificDecalData_Parms GetWeaponSpecificDecalData_Parms;
	GetWeaponSpecificDecalData_Parms.DecalEffects = DecalEffects;

	if ( FadeTime )
		GetWeaponSpecificDecalData_Parms.FadeTime = *FadeTime;

	this->ProcessEvent ( pFnGetWeaponSpecificDecalData, &GetWeaponSpecificDecalData_Parms, NULL );

	if ( FadeTime )
		*FadeTime = GetWeaponSpecificDecalData_Parms.FadeTime;

	return GetWeaponSpecificDecalData_Parms.ReturnValue;
};

// Function SFXGameContent_Inventory.SFXWeapon_Shotgun.FirePellets
// [0x00820103] ( FUNC_Final | FUNC_Simulated )
// Parameters infos:
// struct FVector                 StartLocation                  ( CPF_Parm )
// struct FRotator                AimRotation                    ( CPF_Parm )
// unsigned char                  FireMode                       ( CPF_Parm )

void ASFXWeapon_Shotgun::FirePellets ( struct FVector StartLocation, struct FRotator AimRotation, unsigned char FireMode )
{
	static UFunction* pFnFirePellets = NULL;

	if ( ! pFnFirePellets )
		pFnFirePellets = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Inventory.SFXWeapon_Shotgun.FirePellets" );

	ASFXWeapon_Shotgun_execFirePellets_Parms FirePellets_Parms;
	memcpy ( &FirePellets_Parms.StartLocation, &StartLocation, 0xC );
	memcpy ( &FirePellets_Parms.AimRotation, &AimRotation, 0xC );
	FirePellets_Parms.FireMode = FireMode;

	this->ProcessEvent ( pFnFirePellets, &FirePellets_Parms, NULL );
};

// Function SFXGameContent_Inventory.SFXWeapon_Shotgun.DrawDebugShotgunCone
// [0x00020102] ( FUNC_Simulated )
// Parameters infos:
// struct FVector                 StartLocation                  ( CPF_Parm )
// struct FRotator                AimRot                         ( CPF_Parm )

void ASFXWeapon_Shotgun::DrawDebugShotgunCone ( struct FVector StartLocation, struct FRotator AimRot )
{
	static UFunction* pFnDrawDebugShotgunCone = NULL;

	if ( ! pFnDrawDebugShotgunCone )
		pFnDrawDebugShotgunCone = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Inventory.SFXWeapon_Shotgun.DrawDebugShotgunCone" );

	ASFXWeapon_Shotgun_execDrawDebugShotgunCone_Parms DrawDebugShotgunCone_Parms;
	memcpy ( &DrawDebugShotgunCone_Parms.StartLocation, &StartLocation, 0xC );
	memcpy ( &DrawDebugShotgunCone_Parms.AimRot, &AimRot, 0xC );

	this->ProcessEvent ( pFnDrawDebugShotgunCone, &DrawDebugShotgunCone_Parms, NULL );
};

// Function SFXGameContent_Inventory.SFXWeapon_Shotgun.CustomFire
// [0x00820102] ( FUNC_Simulated )
// Parameters infos:

void ASFXWeapon_Shotgun::CustomFire ( )
{
	static UFunction* pFnCustomFire = NULL;

	if ( ! pFnCustomFire )
		pFnCustomFire = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Inventory.SFXWeapon_Shotgun.CustomFire" );

	ASFXWeapon_Shotgun_execCustomFire_Parms CustomFire_Parms;

	this->ProcessEvent ( pFnCustomFire, &CustomFire_Parms, NULL );
};

// Function SFXGameContent_Inventory.SFXWeapon_Shotgun.ShouldSpawnTracerFX
// [0x00020102] ( FUNC_Simulated )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ASFXWeapon_Shotgun::ShouldSpawnTracerFX ( )
{
	static UFunction* pFnShouldSpawnTracerFX = NULL;

	if ( ! pFnShouldSpawnTracerFX )
		pFnShouldSpawnTracerFX = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Inventory.SFXWeapon_Shotgun.ShouldSpawnTracerFX" );

	ASFXWeapon_Shotgun_execShouldSpawnTracerFX_Parms ShouldSpawnTracerFX_Parms;

	this->ProcessEvent ( pFnShouldSpawnTracerFX, &ShouldSpawnTracerFX_Parms, NULL );

	return ShouldSpawnTracerFX_Parms.ReturnValue;
};



class UClass* ASFXWeapon_FlakGun::pClassPointer = NULL;

class UClass* ASFXWeapon_FlakGun::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Inventory.SFXWeapon_FlakGun" );

		return pClassPointer;
	};

// Function SFXGameContent_Inventory.SFXWeapon_FlakGun.GetWeaponSpecificImpactSound
// [0x00020102] ( FUNC_Simulated )
// Parameters infos:
// class UWwiseEvent*             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class USFXPhysicalMaterialImpactSounds* ImpactSounds                   ( CPF_Parm )

class UWwiseEvent* ASFXWeapon_FlakGun::GetWeaponSpecificImpactSound ( class USFXPhysicalMaterialImpactSounds* ImpactSounds )
{
	static UFunction* pFnGetWeaponSpecificImpactSound = NULL;

	if ( ! pFnGetWeaponSpecificImpactSound )
		pFnGetWeaponSpecificImpactSound = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Inventory.SFXWeapon_FlakGun.GetWeaponSpecificImpactSound" );

	ASFXWeapon_FlakGun_execGetWeaponSpecificImpactSound_Parms GetWeaponSpecificImpactSound_Parms;
	GetWeaponSpecificImpactSound_Parms.ImpactSounds = ImpactSounds;

	this->ProcessEvent ( pFnGetWeaponSpecificImpactSound, &GetWeaponSpecificImpactSound_Parms, NULL );

	return GetWeaponSpecificImpactSound_Parms.ReturnValue;
};

// Function SFXGameContent_Inventory.SFXWeapon_FlakGun.GetWeaponSpecificImpactEffect
// [0x00020102] ( FUNC_Simulated )
// Parameters infos:
// class UParticleSystem*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class USFXPhysicalMaterialImpactEffects* ImpactEffects                  ( CPF_Parm )

class UParticleSystem* ASFXWeapon_FlakGun::GetWeaponSpecificImpactEffect ( class USFXPhysicalMaterialImpactEffects* ImpactEffects )
{
	static UFunction* pFnGetWeaponSpecificImpactEffect = NULL;

	if ( ! pFnGetWeaponSpecificImpactEffect )
		pFnGetWeaponSpecificImpactEffect = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Inventory.SFXWeapon_FlakGun.GetWeaponSpecificImpactEffect" );

	ASFXWeapon_FlakGun_execGetWeaponSpecificImpactEffect_Parms GetWeaponSpecificImpactEffect_Parms;
	GetWeaponSpecificImpactEffect_Parms.ImpactEffects = ImpactEffects;

	this->ProcessEvent ( pFnGetWeaponSpecificImpactEffect, &GetWeaponSpecificImpactEffect_Parms, NULL );

	return GetWeaponSpecificImpactEffect_Parms.ReturnValue;
};

// Function SFXGameContent_Inventory.SFXWeapon_FlakGun.GetWeaponSpecificDecalData
// [0x00420102] ( FUNC_Simulated )
// Parameters infos:
// class UDecalComponent*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
// class USFXPhysicalMaterialDecals* DecalEffects                   ( CPF_Parm )
// float                          FadeTime                       ( CPF_Parm | CPF_OutParm )

class UDecalComponent* ASFXWeapon_FlakGun::GetWeaponSpecificDecalData ( class USFXPhysicalMaterialDecals* DecalEffects, float* FadeTime )
{
	static UFunction* pFnGetWeaponSpecificDecalData = NULL;

	if ( ! pFnGetWeaponSpecificDecalData )
		pFnGetWeaponSpecificDecalData = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Inventory.SFXWeapon_FlakGun.GetWeaponSpecificDecalData" );

	ASFXWeapon_FlakGun_execGetWeaponSpecificDecalData_Parms GetWeaponSpecificDecalData_Parms;
	GetWeaponSpecificDecalData_Parms.DecalEffects = DecalEffects;

	if ( FadeTime )
		GetWeaponSpecificDecalData_Parms.FadeTime = *FadeTime;

	this->ProcessEvent ( pFnGetWeaponSpecificDecalData, &GetWeaponSpecificDecalData_Parms, NULL );

	if ( FadeTime )
		*FadeTime = GetWeaponSpecificDecalData_Parms.FadeTime;

	return GetWeaponSpecificDecalData_Parms.ReturnValue;
};

// Function SFXGameContent_Inventory.SFXWeapon_FlakGun.InitDefaultDecalProperties
// [0x00020102] ( FUNC_Simulated )
// Parameters infos:

void ASFXWeapon_FlakGun::InitDefaultDecalProperties ( )
{
	static UFunction* pFnInitDefaultDecalProperties = NULL;

	if ( ! pFnInitDefaultDecalProperties )
		pFnInitDefaultDecalProperties = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Inventory.SFXWeapon_FlakGun.InitDefaultDecalProperties" );

	ASFXWeapon_FlakGun_execInitDefaultDecalProperties_Parms InitDefaultDecalProperties_Parms;

	this->ProcessEvent ( pFnInitDefaultDecalProperties, &InitDefaultDecalProperties_Parms, NULL );
};



class UClass* ASFXWeapon_HeavyShotgun::pClassPointer = NULL;

class UClass* ASFXWeapon_HeavyShotgun::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Inventory.SFXWeapon_HeavyShotgun" );

		return pClassPointer;
	};

// Function SFXGameContent_Inventory.SFXWeapon_HeavyShotgun.GetWeaponSpecificImpactSound
// [0x00020102] ( FUNC_Simulated )
// Parameters infos:
// class UWwiseEvent*             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class USFXPhysicalMaterialImpactSounds* ImpactSounds                   ( CPF_Parm )

class UWwiseEvent* ASFXWeapon_HeavyShotgun::GetWeaponSpecificImpactSound ( class USFXPhysicalMaterialImpactSounds* ImpactSounds )
{
	static UFunction* pFnGetWeaponSpecificImpactSound = NULL;

	if ( ! pFnGetWeaponSpecificImpactSound )
		pFnGetWeaponSpecificImpactSound = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Inventory.SFXWeapon_HeavyShotgun.GetWeaponSpecificImpactSound" );

	ASFXWeapon_HeavyShotgun_execGetWeaponSpecificImpactSound_Parms GetWeaponSpecificImpactSound_Parms;
	GetWeaponSpecificImpactSound_Parms.ImpactSounds = ImpactSounds;

	this->ProcessEvent ( pFnGetWeaponSpecificImpactSound, &GetWeaponSpecificImpactSound_Parms, NULL );

	return GetWeaponSpecificImpactSound_Parms.ReturnValue;
};

// Function SFXGameContent_Inventory.SFXWeapon_HeavyShotgun.GetWeaponSpecificImpactEffect
// [0x00020102] ( FUNC_Simulated )
// Parameters infos:
// class UParticleSystem*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class USFXPhysicalMaterialImpactEffects* ImpactEffects                  ( CPF_Parm )

class UParticleSystem* ASFXWeapon_HeavyShotgun::GetWeaponSpecificImpactEffect ( class USFXPhysicalMaterialImpactEffects* ImpactEffects )
{
	static UFunction* pFnGetWeaponSpecificImpactEffect = NULL;

	if ( ! pFnGetWeaponSpecificImpactEffect )
		pFnGetWeaponSpecificImpactEffect = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Inventory.SFXWeapon_HeavyShotgun.GetWeaponSpecificImpactEffect" );

	ASFXWeapon_HeavyShotgun_execGetWeaponSpecificImpactEffect_Parms GetWeaponSpecificImpactEffect_Parms;
	GetWeaponSpecificImpactEffect_Parms.ImpactEffects = ImpactEffects;

	this->ProcessEvent ( pFnGetWeaponSpecificImpactEffect, &GetWeaponSpecificImpactEffect_Parms, NULL );

	return GetWeaponSpecificImpactEffect_Parms.ReturnValue;
};

// Function SFXGameContent_Inventory.SFXWeapon_HeavyShotgun.GetWeaponSpecificDecalData
// [0x00420102] ( FUNC_Simulated )
// Parameters infos:
// class UDecalComponent*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
// class USFXPhysicalMaterialDecals* DecalEffects                   ( CPF_Parm )
// float                          FadeTime                       ( CPF_Parm | CPF_OutParm )

class UDecalComponent* ASFXWeapon_HeavyShotgun::GetWeaponSpecificDecalData ( class USFXPhysicalMaterialDecals* DecalEffects, float* FadeTime )
{
	static UFunction* pFnGetWeaponSpecificDecalData = NULL;

	if ( ! pFnGetWeaponSpecificDecalData )
		pFnGetWeaponSpecificDecalData = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Inventory.SFXWeapon_HeavyShotgun.GetWeaponSpecificDecalData" );

	ASFXWeapon_HeavyShotgun_execGetWeaponSpecificDecalData_Parms GetWeaponSpecificDecalData_Parms;
	GetWeaponSpecificDecalData_Parms.DecalEffects = DecalEffects;

	if ( FadeTime )
		GetWeaponSpecificDecalData_Parms.FadeTime = *FadeTime;

	this->ProcessEvent ( pFnGetWeaponSpecificDecalData, &GetWeaponSpecificDecalData_Parms, NULL );

	if ( FadeTime )
		*FadeTime = GetWeaponSpecificDecalData_Parms.FadeTime;

	return GetWeaponSpecificDecalData_Parms.ReturnValue;
};



class UClass* USFXDamageType_AutoPistol::pClassPointer = NULL;

class UClass* USFXDamageType_AutoPistol::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Inventory.SFXDamageType_AutoPistol" );

		return pClassPointer;
	};



class UClass* USFXDamageType_SMG::pClassPointer = NULL;

class UClass* USFXDamageType_SMG::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Inventory.SFXDamageType_SMG" );

		return pClassPointer;
	};



class UClass* ASFXWeapon_AutoPistol::pClassPointer = NULL;

class UClass* ASFXWeapon_AutoPistol::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Inventory.SFXWeapon_AutoPistol" );

		return pClassPointer;
	};

// Function SFXGameContent_Inventory.SFXWeapon_AutoPistol.GetWeaponSpecificImpactSound
// [0x00020102] ( FUNC_Simulated )
// Parameters infos:
// class UWwiseEvent*             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class USFXPhysicalMaterialImpactSounds* ImpactSounds                   ( CPF_Parm )

class UWwiseEvent* ASFXWeapon_AutoPistol::GetWeaponSpecificImpactSound ( class USFXPhysicalMaterialImpactSounds* ImpactSounds )
{
	static UFunction* pFnGetWeaponSpecificImpactSound = NULL;

	if ( ! pFnGetWeaponSpecificImpactSound )
		pFnGetWeaponSpecificImpactSound = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Inventory.SFXWeapon_AutoPistol.GetWeaponSpecificImpactSound" );

	ASFXWeapon_AutoPistol_execGetWeaponSpecificImpactSound_Parms GetWeaponSpecificImpactSound_Parms;
	GetWeaponSpecificImpactSound_Parms.ImpactSounds = ImpactSounds;

	this->ProcessEvent ( pFnGetWeaponSpecificImpactSound, &GetWeaponSpecificImpactSound_Parms, NULL );

	return GetWeaponSpecificImpactSound_Parms.ReturnValue;
};

// Function SFXGameContent_Inventory.SFXWeapon_AutoPistol.GetWeaponSpecificImpactEffect
// [0x00020102] ( FUNC_Simulated )
// Parameters infos:
// class UParticleSystem*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class USFXPhysicalMaterialImpactEffects* ImpactEffects                  ( CPF_Parm )

class UParticleSystem* ASFXWeapon_AutoPistol::GetWeaponSpecificImpactEffect ( class USFXPhysicalMaterialImpactEffects* ImpactEffects )
{
	static UFunction* pFnGetWeaponSpecificImpactEffect = NULL;

	if ( ! pFnGetWeaponSpecificImpactEffect )
		pFnGetWeaponSpecificImpactEffect = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Inventory.SFXWeapon_AutoPistol.GetWeaponSpecificImpactEffect" );

	ASFXWeapon_AutoPistol_execGetWeaponSpecificImpactEffect_Parms GetWeaponSpecificImpactEffect_Parms;
	GetWeaponSpecificImpactEffect_Parms.ImpactEffects = ImpactEffects;

	this->ProcessEvent ( pFnGetWeaponSpecificImpactEffect, &GetWeaponSpecificImpactEffect_Parms, NULL );

	return GetWeaponSpecificImpactEffect_Parms.ReturnValue;
};

// Function SFXGameContent_Inventory.SFXWeapon_AutoPistol.GetWeaponSpecificDecalData
// [0x00420102] ( FUNC_Simulated )
// Parameters infos:
// class UDecalComponent*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
// class USFXPhysicalMaterialDecals* DecalEffects                   ( CPF_Parm )
// float                          FadeTime                       ( CPF_Parm | CPF_OutParm )

class UDecalComponent* ASFXWeapon_AutoPistol::GetWeaponSpecificDecalData ( class USFXPhysicalMaterialDecals* DecalEffects, float* FadeTime )
{
	static UFunction* pFnGetWeaponSpecificDecalData = NULL;

	if ( ! pFnGetWeaponSpecificDecalData )
		pFnGetWeaponSpecificDecalData = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Inventory.SFXWeapon_AutoPistol.GetWeaponSpecificDecalData" );

	ASFXWeapon_AutoPistol_execGetWeaponSpecificDecalData_Parms GetWeaponSpecificDecalData_Parms;
	GetWeaponSpecificDecalData_Parms.DecalEffects = DecalEffects;

	if ( FadeTime )
		GetWeaponSpecificDecalData_Parms.FadeTime = *FadeTime;

	this->ProcessEvent ( pFnGetWeaponSpecificDecalData, &GetWeaponSpecificDecalData_Parms, NULL );

	if ( FadeTime )
		*FadeTime = GetWeaponSpecificDecalData_Parms.FadeTime;

	return GetWeaponSpecificDecalData_Parms.ReturnValue;
};



class UClass* ASFXWeapon_LightPistol::pClassPointer = NULL;

class UClass* ASFXWeapon_LightPistol::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Inventory.SFXWeapon_LightPistol" );

		return pClassPointer;
	};



class UClass* ASFXWeapon_SMG::pClassPointer = NULL;

class UClass* ASFXWeapon_SMG::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Inventory.SFXWeapon_SMG" );

		return pClassPointer;
	};

// Function SFXGameContent_Inventory.SFXWeapon_SMG.GetWeaponSpecificImpactSound
// [0x00020102] ( FUNC_Simulated )
// Parameters infos:
// class UWwiseEvent*             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class USFXPhysicalMaterialImpactSounds* ImpactSounds                   ( CPF_Parm )

class UWwiseEvent* ASFXWeapon_SMG::GetWeaponSpecificImpactSound ( class USFXPhysicalMaterialImpactSounds* ImpactSounds )
{
	static UFunction* pFnGetWeaponSpecificImpactSound = NULL;

	if ( ! pFnGetWeaponSpecificImpactSound )
		pFnGetWeaponSpecificImpactSound = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Inventory.SFXWeapon_SMG.GetWeaponSpecificImpactSound" );

	ASFXWeapon_SMG_execGetWeaponSpecificImpactSound_Parms GetWeaponSpecificImpactSound_Parms;
	GetWeaponSpecificImpactSound_Parms.ImpactSounds = ImpactSounds;

	this->ProcessEvent ( pFnGetWeaponSpecificImpactSound, &GetWeaponSpecificImpactSound_Parms, NULL );

	return GetWeaponSpecificImpactSound_Parms.ReturnValue;
};

// Function SFXGameContent_Inventory.SFXWeapon_SMG.GetWeaponSpecificImpactEffect
// [0x00020102] ( FUNC_Simulated )
// Parameters infos:
// class UParticleSystem*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class USFXPhysicalMaterialImpactEffects* ImpactEffects                  ( CPF_Parm )

class UParticleSystem* ASFXWeapon_SMG::GetWeaponSpecificImpactEffect ( class USFXPhysicalMaterialImpactEffects* ImpactEffects )
{
	static UFunction* pFnGetWeaponSpecificImpactEffect = NULL;

	if ( ! pFnGetWeaponSpecificImpactEffect )
		pFnGetWeaponSpecificImpactEffect = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Inventory.SFXWeapon_SMG.GetWeaponSpecificImpactEffect" );

	ASFXWeapon_SMG_execGetWeaponSpecificImpactEffect_Parms GetWeaponSpecificImpactEffect_Parms;
	GetWeaponSpecificImpactEffect_Parms.ImpactEffects = ImpactEffects;

	this->ProcessEvent ( pFnGetWeaponSpecificImpactEffect, &GetWeaponSpecificImpactEffect_Parms, NULL );

	return GetWeaponSpecificImpactEffect_Parms.ReturnValue;
};

// Function SFXGameContent_Inventory.SFXWeapon_SMG.GetWeaponSpecificDecalData
// [0x00420102] ( FUNC_Simulated )
// Parameters infos:
// class UDecalComponent*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
// class USFXPhysicalMaterialDecals* DecalEffects                   ( CPF_Parm )
// float                          FadeTime                       ( CPF_Parm | CPF_OutParm )

class UDecalComponent* ASFXWeapon_SMG::GetWeaponSpecificDecalData ( class USFXPhysicalMaterialDecals* DecalEffects, float* FadeTime )
{
	static UFunction* pFnGetWeaponSpecificDecalData = NULL;

	if ( ! pFnGetWeaponSpecificDecalData )
		pFnGetWeaponSpecificDecalData = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Inventory.SFXWeapon_SMG.GetWeaponSpecificDecalData" );

	ASFXWeapon_SMG_execGetWeaponSpecificDecalData_Parms GetWeaponSpecificDecalData_Parms;
	GetWeaponSpecificDecalData_Parms.DecalEffects = DecalEffects;

	if ( FadeTime )
		GetWeaponSpecificDecalData_Parms.FadeTime = *FadeTime;

	this->ProcessEvent ( pFnGetWeaponSpecificDecalData, &GetWeaponSpecificDecalData_Parms, NULL );

	if ( FadeTime )
		*FadeTime = GetWeaponSpecificDecalData_Parms.FadeTime;

	return GetWeaponSpecificDecalData_Parms.ReturnValue;
};



class UClass* USFXDamageType_HeavyPistol::pClassPointer = NULL;

class UClass* USFXDamageType_HeavyPistol::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Inventory.SFXDamageType_HeavyPistol" );

		return pClassPointer;
	};



class UClass* USFXDamageType_HandCannon::pClassPointer = NULL;

class UClass* USFXDamageType_HandCannon::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Inventory.SFXDamageType_HandCannon" );

		return pClassPointer;
	};



class UClass* ASFXWeapon_HeavyPistol::pClassPointer = NULL;

class UClass* ASFXWeapon_HeavyPistol::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Inventory.SFXWeapon_HeavyPistol" );

		return pClassPointer;
	};

// Function SFXGameContent_Inventory.SFXWeapon_HeavyPistol.GetWeaponSpecificImpactSound
// [0x00020102] ( FUNC_Simulated )
// Parameters infos:
// class UWwiseEvent*             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class USFXPhysicalMaterialImpactSounds* ImpactSounds                   ( CPF_Parm )

class UWwiseEvent* ASFXWeapon_HeavyPistol::GetWeaponSpecificImpactSound ( class USFXPhysicalMaterialImpactSounds* ImpactSounds )
{
	static UFunction* pFnGetWeaponSpecificImpactSound = NULL;

	if ( ! pFnGetWeaponSpecificImpactSound )
		pFnGetWeaponSpecificImpactSound = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Inventory.SFXWeapon_HeavyPistol.GetWeaponSpecificImpactSound" );

	ASFXWeapon_HeavyPistol_execGetWeaponSpecificImpactSound_Parms GetWeaponSpecificImpactSound_Parms;
	GetWeaponSpecificImpactSound_Parms.ImpactSounds = ImpactSounds;

	this->ProcessEvent ( pFnGetWeaponSpecificImpactSound, &GetWeaponSpecificImpactSound_Parms, NULL );

	return GetWeaponSpecificImpactSound_Parms.ReturnValue;
};

// Function SFXGameContent_Inventory.SFXWeapon_HeavyPistol.GetWeaponSpecificImpactEffect
// [0x00020102] ( FUNC_Simulated )
// Parameters infos:
// class UParticleSystem*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class USFXPhysicalMaterialImpactEffects* ImpactEffects                  ( CPF_Parm )

class UParticleSystem* ASFXWeapon_HeavyPistol::GetWeaponSpecificImpactEffect ( class USFXPhysicalMaterialImpactEffects* ImpactEffects )
{
	static UFunction* pFnGetWeaponSpecificImpactEffect = NULL;

	if ( ! pFnGetWeaponSpecificImpactEffect )
		pFnGetWeaponSpecificImpactEffect = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Inventory.SFXWeapon_HeavyPistol.GetWeaponSpecificImpactEffect" );

	ASFXWeapon_HeavyPistol_execGetWeaponSpecificImpactEffect_Parms GetWeaponSpecificImpactEffect_Parms;
	GetWeaponSpecificImpactEffect_Parms.ImpactEffects = ImpactEffects;

	this->ProcessEvent ( pFnGetWeaponSpecificImpactEffect, &GetWeaponSpecificImpactEffect_Parms, NULL );

	return GetWeaponSpecificImpactEffect_Parms.ReturnValue;
};

// Function SFXGameContent_Inventory.SFXWeapon_HeavyPistol.GetWeaponSpecificDecalData
// [0x00420102] ( FUNC_Simulated )
// Parameters infos:
// class UDecalComponent*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
// class USFXPhysicalMaterialDecals* DecalEffects                   ( CPF_Parm )
// float                          FadeTime                       ( CPF_Parm | CPF_OutParm )

class UDecalComponent* ASFXWeapon_HeavyPistol::GetWeaponSpecificDecalData ( class USFXPhysicalMaterialDecals* DecalEffects, float* FadeTime )
{
	static UFunction* pFnGetWeaponSpecificDecalData = NULL;

	if ( ! pFnGetWeaponSpecificDecalData )
		pFnGetWeaponSpecificDecalData = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Inventory.SFXWeapon_HeavyPistol.GetWeaponSpecificDecalData" );

	ASFXWeapon_HeavyPistol_execGetWeaponSpecificDecalData_Parms GetWeaponSpecificDecalData_Parms;
	GetWeaponSpecificDecalData_Parms.DecalEffects = DecalEffects;

	if ( FadeTime )
		GetWeaponSpecificDecalData_Parms.FadeTime = *FadeTime;

	this->ProcessEvent ( pFnGetWeaponSpecificDecalData, &GetWeaponSpecificDecalData_Parms, NULL );

	if ( FadeTime )
		*FadeTime = GetWeaponSpecificDecalData_Parms.FadeTime;

	return GetWeaponSpecificDecalData_Parms.ReturnValue;
};



class UClass* ASFXWeapon_HandCannon::pClassPointer = NULL;

class UClass* ASFXWeapon_HandCannon::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Inventory.SFXWeapon_HandCannon" );

		return pClassPointer;
	};

// Function SFXGameContent_Inventory.SFXWeapon_HandCannon.GetWeaponSpecificImpactSound
// [0x00020102] ( FUNC_Simulated )
// Parameters infos:
// class UWwiseEvent*             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class USFXPhysicalMaterialImpactSounds* ImpactSounds                   ( CPF_Parm )

class UWwiseEvent* ASFXWeapon_HandCannon::GetWeaponSpecificImpactSound ( class USFXPhysicalMaterialImpactSounds* ImpactSounds )
{
	static UFunction* pFnGetWeaponSpecificImpactSound = NULL;

	if ( ! pFnGetWeaponSpecificImpactSound )
		pFnGetWeaponSpecificImpactSound = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Inventory.SFXWeapon_HandCannon.GetWeaponSpecificImpactSound" );

	ASFXWeapon_HandCannon_execGetWeaponSpecificImpactSound_Parms GetWeaponSpecificImpactSound_Parms;
	GetWeaponSpecificImpactSound_Parms.ImpactSounds = ImpactSounds;

	this->ProcessEvent ( pFnGetWeaponSpecificImpactSound, &GetWeaponSpecificImpactSound_Parms, NULL );

	return GetWeaponSpecificImpactSound_Parms.ReturnValue;
};

// Function SFXGameContent_Inventory.SFXWeapon_HandCannon.GetWeaponSpecificImpactEffect
// [0x00020102] ( FUNC_Simulated )
// Parameters infos:
// class UParticleSystem*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class USFXPhysicalMaterialImpactEffects* ImpactEffects                  ( CPF_Parm )

class UParticleSystem* ASFXWeapon_HandCannon::GetWeaponSpecificImpactEffect ( class USFXPhysicalMaterialImpactEffects* ImpactEffects )
{
	static UFunction* pFnGetWeaponSpecificImpactEffect = NULL;

	if ( ! pFnGetWeaponSpecificImpactEffect )
		pFnGetWeaponSpecificImpactEffect = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Inventory.SFXWeapon_HandCannon.GetWeaponSpecificImpactEffect" );

	ASFXWeapon_HandCannon_execGetWeaponSpecificImpactEffect_Parms GetWeaponSpecificImpactEffect_Parms;
	GetWeaponSpecificImpactEffect_Parms.ImpactEffects = ImpactEffects;

	this->ProcessEvent ( pFnGetWeaponSpecificImpactEffect, &GetWeaponSpecificImpactEffect_Parms, NULL );

	return GetWeaponSpecificImpactEffect_Parms.ReturnValue;
};

// Function SFXGameContent_Inventory.SFXWeapon_HandCannon.GetWeaponSpecificDecalData
// [0x00420102] ( FUNC_Simulated )
// Parameters infos:
// class UDecalComponent*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
// class USFXPhysicalMaterialDecals* DecalEffects                   ( CPF_Parm )
// float                          FadeTime                       ( CPF_Parm | CPF_OutParm )

class UDecalComponent* ASFXWeapon_HandCannon::GetWeaponSpecificDecalData ( class USFXPhysicalMaterialDecals* DecalEffects, float* FadeTime )
{
	static UFunction* pFnGetWeaponSpecificDecalData = NULL;

	if ( ! pFnGetWeaponSpecificDecalData )
		pFnGetWeaponSpecificDecalData = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Inventory.SFXWeapon_HandCannon.GetWeaponSpecificDecalData" );

	ASFXWeapon_HandCannon_execGetWeaponSpecificDecalData_Parms GetWeaponSpecificDecalData_Parms;
	GetWeaponSpecificDecalData_Parms.DecalEffects = DecalEffects;

	if ( FadeTime )
		GetWeaponSpecificDecalData_Parms.FadeTime = *FadeTime;

	this->ProcessEvent ( pFnGetWeaponSpecificDecalData, &GetWeaponSpecificDecalData_Parms, NULL );

	if ( FadeTime )
		*FadeTime = GetWeaponSpecificDecalData_Parms.FadeTime;

	return GetWeaponSpecificDecalData_Parms.ReturnValue;
};



class UClass* USFXDamageType_HeavyWeapon::pClassPointer = NULL;

class UClass* USFXDamageType_HeavyWeapon::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Inventory.SFXDamageType_HeavyWeapon" );

		return pClassPointer;
	};



class UClass* USFXDamageType_Grenade::pClassPointer = NULL;

class UClass* USFXDamageType_Grenade::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Inventory.SFXDamageType_Grenade" );

		return pClassPointer;
	};



class UClass* ASFXHeavyWeapon_GrenadeLauncher::pClassPointer = NULL;

class UClass* ASFXHeavyWeapon_GrenadeLauncher::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Inventory.SFXHeavyWeapon_GrenadeLauncher" );

		return pClassPointer;
	};



class UClass* ASFXProjectile_Grenade::pClassPointer = NULL;

class UClass* ASFXProjectile_Grenade::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Inventory.SFXProjectile_Grenade" );

		return pClassPointer;
	};

// Function SFXGameContent_Inventory.SFXProjectile_Grenade.Recycle
// [0x00020102] ( FUNC_Simulated )
// Parameters infos:

void ASFXProjectile_Grenade::Recycle ( )
{
	static UFunction* pFnRecycle = NULL;

	if ( ! pFnRecycle )
		pFnRecycle = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Inventory.SFXProjectile_Grenade.Recycle" );

	ASFXProjectile_Grenade_execRecycle_Parms Recycle_Parms;

	this->ProcessEvent ( pFnRecycle, &Recycle_Parms, NULL );
};

// Function SFXGameContent_Inventory.SFXProjectile_Grenade.DoImpact
// [0x00020002] 
// Parameters infos:
// class AActor*                  InImpactedActor                ( CPF_Parm )
// class AController*             InInstigatorController         ( CPF_Parm )
// float                          BaseDamage                     ( CPF_Parm )
// float                          InDamageRadius                 ( CPF_Parm )
// float                          Momentum                       ( CPF_Parm )
// struct FVector                 HurtOrigin                     ( CPF_Parm )
// unsigned long                  bFullDamage                    ( CPF_Parm )

void ASFXProjectile_Grenade::DoImpact ( class AActor* InImpactedActor, class AController* InInstigatorController, float BaseDamage, float InDamageRadius, float Momentum, struct FVector HurtOrigin, unsigned long bFullDamage )
{
	static UFunction* pFnDoImpact = NULL;

	if ( ! pFnDoImpact )
		pFnDoImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Inventory.SFXProjectile_Grenade.DoImpact" );

	ASFXProjectile_Grenade_execDoImpact_Parms DoImpact_Parms;
	DoImpact_Parms.InImpactedActor = InImpactedActor;
	DoImpact_Parms.InInstigatorController = InInstigatorController;
	DoImpact_Parms.BaseDamage = BaseDamage;
	DoImpact_Parms.InDamageRadius = InDamageRadius;
	DoImpact_Parms.Momentum = Momentum;
	memcpy ( &DoImpact_Parms.HurtOrigin, &HurtOrigin, 0xC );
	DoImpact_Parms.bFullDamage = bFullDamage;

	this->ProcessEvent ( pFnDoImpact, &DoImpact_Parms, NULL );
};

// Function SFXGameContent_Inventory.SFXProjectile_Grenade.Tick
// [0x00820102] ( FUNC_Simulated )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ASFXProjectile_Grenade::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Inventory.SFXProjectile_Grenade.Tick" );

	ASFXProjectile_Grenade_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function SFXGameContent_Inventory.SFXProjectile_Grenade.GetAimLocation
// [0x00820002] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FVector ASFXProjectile_Grenade::GetAimLocation ( )
{
	static UFunction* pFnGetAimLocation = NULL;

	if ( ! pFnGetAimLocation )
		pFnGetAimLocation = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Inventory.SFXProjectile_Grenade.GetAimLocation" );

	ASFXProjectile_Grenade_execGetAimLocation_Parms GetAimLocation_Parms;

	this->ProcessEvent ( pFnGetAimLocation, &GetAimLocation_Parms, NULL );

	return GetAimLocation_Parms.ReturnValue;
};

// Function SFXGameContent_Inventory.SFXProjectile_Grenade.Init
// [0x00020002] 
// Parameters infos:
// struct FVector                 Direction                      ( CPF_Parm )

void ASFXProjectile_Grenade::Init ( struct FVector Direction )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Inventory.SFXProjectile_Grenade.Init" );

	ASFXProjectile_Grenade_execInit_Parms Init_Parms;
	memcpy ( &Init_Parms.Direction, &Direction, 0xC );

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );
};



class UClass* USFXDamageType_MissileLauncher::pClassPointer = NULL;

class UClass* USFXDamageType_MissileLauncher::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Inventory.SFXDamageType_MissileLauncher" );

		return pClassPointer;
	};



class UClass* USFXDamageType_Rocket::pClassPointer = NULL;

class UClass* USFXDamageType_Rocket::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Inventory.SFXDamageType_Rocket" );

		return pClassPointer;
	};



class UClass* ASFXHeavyWeapon_MissileLauncher::pClassPointer = NULL;

class UClass* ASFXHeavyWeapon_MissileLauncher::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Inventory.SFXHeavyWeapon_MissileLauncher" );

		return pClassPointer;
	};

// Function SFXGameContent_Inventory.SFXHeavyWeapon_MissileLauncher.Tick
// [0x00020102] ( FUNC_Simulated )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ASFXHeavyWeapon_MissileLauncher::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Inventory.SFXHeavyWeapon_MissileLauncher.Tick" );

	ASFXHeavyWeapon_MissileLauncher_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};



class UClass* ASFXProjectile_SeekingMissile::pClassPointer = NULL;

class UClass* ASFXProjectile_SeekingMissile::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Inventory.SFXProjectile_SeekingMissile" );

		return pClassPointer;
	};

// Function SFXGameContent_Inventory.SFXProjectile_SeekingMissile.Recycle
// [0x00020102] ( FUNC_Simulated )
// Parameters infos:

void ASFXProjectile_SeekingMissile::Recycle ( )
{
	static UFunction* pFnRecycle = NULL;

	if ( ! pFnRecycle )
		pFnRecycle = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Inventory.SFXProjectile_SeekingMissile.Recycle" );

	ASFXProjectile_SeekingMissile_execRecycle_Parms Recycle_Parms;

	this->ProcessEvent ( pFnRecycle, &Recycle_Parms, NULL );
};

// Function SFXGameContent_Inventory.SFXProjectile_SeekingMissile.DoImpact
// [0x00020002] 
// Parameters infos:
// class AActor*                  InImpactedActor                ( CPF_Parm )
// class AController*             InInstigatorController         ( CPF_Parm )
// float                          BaseDamage                     ( CPF_Parm )
// float                          InDamageRadius                 ( CPF_Parm )
// float                          Momentum                       ( CPF_Parm )
// struct FVector                 HurtOrigin                     ( CPF_Parm )
// unsigned long                  bFullDamage                    ( CPF_Parm )

void ASFXProjectile_SeekingMissile::DoImpact ( class AActor* InImpactedActor, class AController* InInstigatorController, float BaseDamage, float InDamageRadius, float Momentum, struct FVector HurtOrigin, unsigned long bFullDamage )
{
	static UFunction* pFnDoImpact = NULL;

	if ( ! pFnDoImpact )
		pFnDoImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Inventory.SFXProjectile_SeekingMissile.DoImpact" );

	ASFXProjectile_SeekingMissile_execDoImpact_Parms DoImpact_Parms;
	DoImpact_Parms.InImpactedActor = InImpactedActor;
	DoImpact_Parms.InInstigatorController = InInstigatorController;
	DoImpact_Parms.BaseDamage = BaseDamage;
	DoImpact_Parms.InDamageRadius = InDamageRadius;
	DoImpact_Parms.Momentum = Momentum;
	memcpy ( &DoImpact_Parms.HurtOrigin, &HurtOrigin, 0xC );
	DoImpact_Parms.bFullDamage = bFullDamage;

	this->ProcessEvent ( pFnDoImpact, &DoImpact_Parms, NULL );
};

// Function SFXGameContent_Inventory.SFXProjectile_SeekingMissile.Destroyed
// [0x00020102] ( FUNC_Simulated )
// Parameters infos:

void ASFXProjectile_SeekingMissile::Destroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Inventory.SFXProjectile_SeekingMissile.Destroyed" );

	ASFXProjectile_SeekingMissile_execDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function SFXGameContent_Inventory.SFXProjectile_SeekingMissile.ShutDown
// [0x00020102] ( FUNC_Simulated )
// Parameters infos:

void ASFXProjectile_SeekingMissile::ShutDown ( )
{
	static UFunction* pFnShutDown = NULL;

	if ( ! pFnShutDown )
		pFnShutDown = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Inventory.SFXProjectile_SeekingMissile.ShutDown" );

	ASFXProjectile_SeekingMissile_execShutDown_Parms ShutDown_Parms;

	this->ProcessEvent ( pFnShutDown, &ShutDown_Parms, NULL );
};

// Function SFXGameContent_Inventory.SFXProjectile_SeekingMissile.Init
// [0x00020002] 
// Parameters infos:
// struct FVector                 Direction                      ( CPF_Parm )

void ASFXProjectile_SeekingMissile::Init ( struct FVector Direction )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Inventory.SFXProjectile_SeekingMissile.Init" );

	ASFXProjectile_SeekingMissile_execInit_Parms Init_Parms;
	memcpy ( &Init_Parms.Direction, &Direction, 0xC );

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );
};

// Function SFXGameContent_Inventory.SFXProjectile_SeekingMissile.TickPlayer
// [0x00820102] ( FUNC_Simulated )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ASFXProjectile_SeekingMissile::TickPlayer ( float DeltaTime )
{
	static UFunction* pFnTickPlayer = NULL;

	if ( ! pFnTickPlayer )
		pFnTickPlayer = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Inventory.SFXProjectile_SeekingMissile.TickPlayer" );

	ASFXProjectile_SeekingMissile_execTickPlayer_Parms TickPlayer_Parms;
	TickPlayer_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTickPlayer, &TickPlayer_Parms, NULL );
};

// Function SFXGameContent_Inventory.SFXProjectile_SeekingMissile.TickNPC
// [0x00820102] ( FUNC_Simulated )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ASFXProjectile_SeekingMissile::TickNPC ( float DeltaTime )
{
	static UFunction* pFnTickNPC = NULL;

	if ( ! pFnTickNPC )
		pFnTickNPC = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Inventory.SFXProjectile_SeekingMissile.TickNPC" );

	ASFXProjectile_SeekingMissile_execTickNPC_Parms TickNPC_Parms;
	TickNPC_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTickNPC, &TickNPC_Parms, NULL );
};

// Function SFXGameContent_Inventory.SFXProjectile_SeekingMissile.Tick
// [0x00020102] ( FUNC_Simulated )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ASFXProjectile_SeekingMissile::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Inventory.SFXProjectile_SeekingMissile.Tick" );

	ASFXProjectile_SeekingMissile_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function SFXGameContent_Inventory.SFXProjectile_SeekingMissile.GetAimLocation
// [0x00820002] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FVector ASFXProjectile_SeekingMissile::GetAimLocation ( )
{
	static UFunction* pFnGetAimLocation = NULL;

	if ( ! pFnGetAimLocation )
		pFnGetAimLocation = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Inventory.SFXProjectile_SeekingMissile.GetAimLocation" );

	ASFXProjectile_SeekingMissile_execGetAimLocation_Parms GetAimLocation_Parms;

	this->ProcessEvent ( pFnGetAimLocation, &GetAimLocation_Parms, NULL );

	return GetAimLocation_Parms.ReturnValue;
};

// Function SFXGameContent_Inventory.SFXProjectile_SeekingMissile.AcquireTarget
// [0x00020002] 
// Parameters infos:

void ASFXProjectile_SeekingMissile::AcquireTarget ( )
{
	static UFunction* pFnAcquireTarget = NULL;

	if ( ! pFnAcquireTarget )
		pFnAcquireTarget = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Inventory.SFXProjectile_SeekingMissile.AcquireTarget" );

	ASFXProjectile_SeekingMissile_execAcquireTarget_Parms AcquireTarget_Parms;

	this->ProcessEvent ( pFnAcquireTarget, &AcquireTarget_Parms, NULL );
};



class UClass* ASFXHeavyWeapon_RocketLauncher::pClassPointer = NULL;

class UClass* ASFXHeavyWeapon_RocketLauncher::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Inventory.SFXHeavyWeapon_RocketLauncher" );

		return pClassPointer;
	};



class UClass* ASFXProjectile_Rocket::pClassPointer = NULL;

class UClass* ASFXProjectile_Rocket::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Inventory.SFXProjectile_Rocket" );

		return pClassPointer;
	};

// Function SFXGameContent_Inventory.SFXProjectile_Rocket.DoImpact
// [0x00020002] 
// Parameters infos:
// class AActor*                  InImpactedActor                ( CPF_Parm )
// class AController*             InInstigatorController         ( CPF_Parm )
// float                          BaseDamage                     ( CPF_Parm )
// float                          InDamageRadius                 ( CPF_Parm )
// float                          Momentum                       ( CPF_Parm )
// struct FVector                 HurtOrigin                     ( CPF_Parm )
// unsigned long                  bFullDamage                    ( CPF_Parm )

void ASFXProjectile_Rocket::DoImpact ( class AActor* InImpactedActor, class AController* InInstigatorController, float BaseDamage, float InDamageRadius, float Momentum, struct FVector HurtOrigin, unsigned long bFullDamage )
{
	static UFunction* pFnDoImpact = NULL;

	if ( ! pFnDoImpact )
		pFnDoImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Inventory.SFXProjectile_Rocket.DoImpact" );

	ASFXProjectile_Rocket_execDoImpact_Parms DoImpact_Parms;
	DoImpact_Parms.InImpactedActor = InImpactedActor;
	DoImpact_Parms.InInstigatorController = InInstigatorController;
	DoImpact_Parms.BaseDamage = BaseDamage;
	DoImpact_Parms.InDamageRadius = InDamageRadius;
	DoImpact_Parms.Momentum = Momentum;
	memcpy ( &DoImpact_Parms.HurtOrigin, &HurtOrigin, 0xC );
	DoImpact_Parms.bFullDamage = bFullDamage;

	this->ProcessEvent ( pFnDoImpact, &DoImpact_Parms, NULL );
};



#undef LESDK_IN_GENERATED

#ifdef _MSC_VER
	#pragma pack ( pop )
#endif
