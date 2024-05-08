/*
#############################################################################################
# Mass Effect 2 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.5_Beta-Rev.60-MELE
# ========================================================================================= #
# File: SFXGameContent_Powers_functions.cpp
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



class UClass* USFXPower_WarpProjectile_Radius::pClassPointer = NULL;

class UClass* USFXPower_WarpProjectile_Radius::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_WarpProjectile_Radius" );

		return pClassPointer;
	};



class UClass* USFXPower_WarpProjectile_Heavy::pClassPointer = NULL;

class UClass* USFXPower_WarpProjectile_Heavy::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_WarpProjectile_Heavy" );

		return pClassPointer;
	};



class UClass* USFXPower_Warp_Radius::pClassPointer = NULL;

class UClass* USFXPower_Warp_Radius::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_Warp_Radius" );

		return pClassPointer;
	};



class UClass* USFXPower_Warp_Heavy::pClassPointer = NULL;

class UClass* USFXPower_Warp_Heavy::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_Warp_Heavy" );

		return pClassPointer;
	};



class UClass* USFXPowerScript_Singularity_NPC::pClassPointer = NULL;

class UClass* USFXPowerScript_Singularity_NPC::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPowerScript_Singularity_NPC" );

		return pClassPointer;
	};

// Function SFXGameContent_Powers.SFXPowerScript_Singularity_NPC.OnOwnerDied
// [0x00020002] 
// Parameters infos:

void USFXPowerScript_Singularity_NPC::OnOwnerDied ( )
{
	static UFunction* pFnOnOwnerDied = NULL;

	if ( ! pFnOnOwnerDied )
		pFnOnOwnerDied = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPowerScript_Singularity_NPC.OnOwnerDied" );

	USFXPowerScript_Singularity_NPC_execOnOwnerDied_Parms OnOwnerDied_Parms;

	this->ProcessEvent ( pFnOnOwnerDied, &OnOwnerDied_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXPowerScript_Singularity_NPC.ImpactNewTarget
// [0x00C20002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// float                          fEffectDuration                ( CPF_Parm | CPF_OutParm )

bool USFXPowerScript_Singularity_NPC::ImpactNewTarget ( class AActor* oImpacted, float* fEffectDuration )
{
	static UFunction* pFnImpactNewTarget = NULL;

	if ( ! pFnImpactNewTarget )
		pFnImpactNewTarget = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPowerScript_Singularity_NPC.ImpactNewTarget" );

	USFXPowerScript_Singularity_NPC_execImpactNewTarget_Parms ImpactNewTarget_Parms;
	ImpactNewTarget_Parms.oImpacted = oImpacted;

	if ( fEffectDuration )
		ImpactNewTarget_Parms.fEffectDuration = *fEffectDuration;

	this->ProcessEvent ( pFnImpactNewTarget, &ImpactNewTarget_Parms, NULL );

	if ( fEffectDuration )
		*fEffectDuration = ImpactNewTarget_Parms.fEffectDuration;

	return ImpactNewTarget_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPowerScript_Singularity_NPC.OnProjectileExploded
// [0x00020002] 
// Parameters infos:
// class AActor*                  oCaster                        ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )
// struct FVector                 Velocity                       ( CPF_Parm )

void USFXPowerScript_Singularity_NPC::OnProjectileExploded ( class AActor* oCaster, struct FVector const& HitLocation, struct FVector const& HitNormal, struct FVector const& Velocity )
{
	static UFunction* pFnOnProjectileExploded = NULL;

	if ( ! pFnOnProjectileExploded )
		pFnOnProjectileExploded = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPowerScript_Singularity_NPC.OnProjectileExploded" );

	USFXPowerScript_Singularity_NPC_execOnProjectileExploded_Parms OnProjectileExploded_Parms;
	OnProjectileExploded_Parms.oCaster = oCaster;
	memcpy ( &OnProjectileExploded_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &OnProjectileExploded_Parms.HitNormal, &HitNormal, 0xC );
	memcpy ( &OnProjectileExploded_Parms.Velocity, &Velocity, 0xC );

	this->ProcessEvent ( pFnOnProjectileExploded, &OnProjectileExploded_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXPowerScript_Singularity_NPC.StartPhase
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool USFXPowerScript_Singularity_NPC::eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration )
{
	static UFunction* pFnStartPhase = NULL;

	if ( ! pFnStartPhase )
		pFnStartPhase = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPowerScript_Singularity_NPC.StartPhase" );

	USFXPowerScript_Singularity_NPC_eventStartPhase_Parms StartPhase_Parms;
	StartPhase_Parms.ePhase = ePhase;
	StartPhase_Parms.oCaster = oCaster;
	StartPhase_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnStartPhase, &StartPhase_Parms, NULL );

	return StartPhase_Parms.ReturnValue;
};



class UClass* USFXPower_Singularity_Radius::pClassPointer = NULL;

class UClass* USFXPower_Singularity_Radius::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_Singularity_Radius" );

		return pClassPointer;
	};



class UClass* USFXPower_Singularity_Heavy::pClassPointer = NULL;

class UClass* USFXPower_Singularity_Heavy::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_Singularity_Heavy" );

		return pClassPointer;
	};



class UClass* ASFXProjectile_Power_Singularity::pClassPointer = NULL;

class UClass* ASFXProjectile_Power_Singularity::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXProjectile_Power_Singularity" );

		return pClassPointer;
	};



class UClass* USFXPowerScript_ShieldBoost::pClassPointer = NULL;

class UClass* USFXPowerScript_ShieldBoost::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPowerScript_ShieldBoost" );

		return pClassPointer;
	};



class UClass* USFXPower_ShieldBoost::pClassPointer = NULL;

class UClass* USFXPower_ShieldBoost::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_ShieldBoost" );

		return pClassPointer;
	};



class UClass* USFXPower_Overload_Radius::pClassPointer = NULL;

class UClass* USFXPower_Overload_Radius::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_Overload_Radius" );

		return pClassPointer;
	};



class UClass* USFXPower_Overload_Heavy::pClassPointer = NULL;

class UClass* USFXPower_Overload_Heavy::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_Overload_Heavy" );

		return pClassPointer;
	};



class UClass* USFXPowerScript_Overload::pClassPointer = NULL;

class UClass* USFXPowerScript_Overload::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPowerScript_Overload" );

		return pClassPointer;
	};

// Function SFXGameContent_Powers.SFXPowerScript_Overload.ShouldUsePower
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Caster                         ( CPF_Parm )
// class AActor*                  Target                         ( CPF_Parm )
// FString                        sOptionalInfo                  ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool USFXPowerScript_Overload::ShouldUsePower ( class AActor* Caster, class AActor* Target, FString* sOptionalInfo )
{
	static UFunction* pFnShouldUsePower = NULL;

	if ( ! pFnShouldUsePower )
		pFnShouldUsePower = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPowerScript_Overload.ShouldUsePower" );

	USFXPowerScript_Overload_execShouldUsePower_Parms ShouldUsePower_Parms;
	ShouldUsePower_Parms.Caster = Caster;
	ShouldUsePower_Parms.Target = Target;

	if ( sOptionalInfo )
		memcpy ( &ShouldUsePower_Parms.sOptionalInfo, sOptionalInfo, 0x10 );

	this->ProcessEvent ( pFnShouldUsePower, &ShouldUsePower_Parms, NULL );

	if ( sOptionalInfo )
		memcpy ( sOptionalInfo, &ShouldUsePower_Parms.sOptionalInfo, 0x10 );

	return ShouldUsePower_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPowerScript_Overload.SpawnBigImpactVFX
// [0x00020002] 
// Parameters infos:
// class AActor*                  oImpacted                      ( CPF_Parm )

void USFXPowerScript_Overload::SpawnBigImpactVFX ( class AActor* oImpacted )
{
	static UFunction* pFnSpawnBigImpactVFX = NULL;

	if ( ! pFnSpawnBigImpactVFX )
		pFnSpawnBigImpactVFX = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPowerScript_Overload.SpawnBigImpactVFX" );

	USFXPowerScript_Overload_execSpawnBigImpactVFX_Parms SpawnBigImpactVFX_Parms;
	SpawnBigImpactVFX_Parms.oImpacted = oImpacted;

	this->ProcessEvent ( pFnSpawnBigImpactVFX, &SpawnBigImpactVFX_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXPowerScript_Overload.ExplodeEnemy
// [0x00020002] 
// Parameters infos:
// class ABioPawn*                oPawn                          ( CPF_Parm )
// class ABioPawn*                oCaster                        ( CPF_Parm )

void USFXPowerScript_Overload::ExplodeEnemy ( class ABioPawn* oPawn, class ABioPawn* oCaster )
{
	static UFunction* pFnExplodeEnemy = NULL;

	if ( ! pFnExplodeEnemy )
		pFnExplodeEnemy = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPowerScript_Overload.ExplodeEnemy" );

	USFXPowerScript_Overload_execExplodeEnemy_Parms ExplodeEnemy_Parms;
	ExplodeEnemy_Parms.oPawn = oPawn;
	ExplodeEnemy_Parms.oCaster = oCaster;

	this->ProcessEvent ( pFnExplodeEnemy, &ExplodeEnemy_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXPowerScript_Overload.CanEnemyBeExploded
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioPawn*                oPawn                          ( CPF_Parm )

bool USFXPowerScript_Overload::CanEnemyBeExploded ( class ABioPawn* oPawn )
{
	static UFunction* pFnCanEnemyBeExploded = NULL;

	if ( ! pFnCanEnemyBeExploded )
		pFnCanEnemyBeExploded = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPowerScript_Overload.CanEnemyBeExploded" );

	USFXPowerScript_Overload_execCanEnemyBeExploded_Parms CanEnemyBeExploded_Parms;
	CanEnemyBeExploded_Parms.oPawn = oPawn;

	this->ProcessEvent ( pFnCanEnemyBeExploded, &CanEnemyBeExploded_Parms, NULL );

	return CanEnemyBeExploded_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPowerScript_Overload.TurnOnDeathPower
// [0x00020002] 
// Parameters infos:
// class AActor*                  oImpacted                      ( CPF_Parm )

void USFXPowerScript_Overload::TurnOnDeathPower ( class AActor* oImpacted )
{
	static UFunction* pFnTurnOnDeathPower = NULL;

	if ( ! pFnTurnOnDeathPower )
		pFnTurnOnDeathPower = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPowerScript_Overload.TurnOnDeathPower" );

	USFXPowerScript_Overload_execTurnOnDeathPower_Parms TurnOnDeathPower_Parms;
	TurnOnDeathPower_Parms.oImpacted = oImpacted;

	this->ProcessEvent ( pFnTurnOnDeathPower, &TurnOnDeathPower_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXPowerScript_Overload.StunRobot
// [0x00020002] 
// Parameters infos:
// class ABioPawn*                oPawn                          ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

void USFXPowerScript_Overload::StunRobot ( class ABioPawn* oPawn, float fDuration )
{
	static UFunction* pFnStunRobot = NULL;

	if ( ! pFnStunRobot )
		pFnStunRobot = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPowerScript_Overload.StunRobot" );

	USFXPowerScript_Overload_execStunRobot_Parms StunRobot_Parms;
	StunRobot_Parms.oPawn = oPawn;
	StunRobot_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnStunRobot, &StunRobot_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXPowerScript_Overload.OnImpact
// [0x00820802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCasterStability               ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )

bool USFXPowerScript_Overload::eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPowerScript_Overload.OnImpact" );

	USFXPowerScript_Overload_eventOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.oCaster = oCaster;
	OnImpact_Parms.fCasterStability = fCasterStability;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPowerScript_Overload.StartPhase
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool USFXPowerScript_Overload::eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration )
{
	static UFunction* pFnStartPhase = NULL;

	if ( ! pFnStartPhase )
		pFnStartPhase = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPowerScript_Overload.StartPhase" );

	USFXPowerScript_Overload_eventStartPhase_Parms StartPhase_Parms;
	StartPhase_Parms.ePhase = ePhase;
	StartPhase_Parms.oCaster = oCaster;
	StartPhase_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnStartPhase, &StartPhase_Parms, NULL );

	return StartPhase_Parms.ReturnValue;
};



class UClass* USFXPower_Overload::pClassPointer = NULL;

class UClass* USFXPower_Overload::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_Overload" );

		return pClassPointer;
	};

// Function SFXGameContent_Powers.SFXPower_Overload.GetOverheatLength
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float USFXPower_Overload::GetOverheatLength ( )
{
	static UFunction* pFnGetOverheatLength = NULL;

	if ( ! pFnGetOverheatLength )
		pFnGetOverheatLength = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPower_Overload.GetOverheatLength" );

	USFXPower_Overload_execGetOverheatLength_Parms GetOverheatLength_Parms;

	this->ProcessEvent ( pFnGetOverheatLength, &GetOverheatLength_Parms, NULL );

	return GetOverheatLength_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPower_Overload.GetRobotStunLength
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float USFXPower_Overload::GetRobotStunLength ( )
{
	static UFunction* pFnGetRobotStunLength = NULL;

	if ( ! pFnGetRobotStunLength )
		pFnGetRobotStunLength = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPower_Overload.GetRobotStunLength" );

	USFXPower_Overload_execGetRobotStunLength_Parms GetRobotStunLength_Parms;

	this->ProcessEvent ( pFnGetRobotStunLength, &GetRobotStunLength_Parms, NULL );

	return GetRobotStunLength_Parms.ReturnValue;
};



class UClass* ASFXProjectile_Power_Seeking_NPC::pClassPointer = NULL;

class UClass* ASFXProjectile_Power_Seeking_NPC::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXProjectile_Power_Seeking_NPC" );

		return pClassPointer;
	};

// Function SFXGameContent_Powers.SFXProjectile_Power_Seeking_NPC.Tick
// [0x00820102] ( FUNC_Simulated )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ASFXProjectile_Power_Seeking_NPC::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXProjectile_Power_Seeking_NPC.Tick" );

	ASFXProjectile_Power_Seeking_NPC_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXProjectile_Power_Seeking_NPC.GetAimLocation
// [0x00820002] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Target                         ( CPF_Parm )

struct FVector ASFXProjectile_Power_Seeking_NPC::GetAimLocation ( class AActor* Target )
{
	static UFunction* pFnGetAimLocation = NULL;

	if ( ! pFnGetAimLocation )
		pFnGetAimLocation = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXProjectile_Power_Seeking_NPC.GetAimLocation" );

	ASFXProjectile_Power_Seeking_NPC_execGetAimLocation_Parms GetAimLocation_Parms;
	GetAimLocation_Parms.Target = Target;

	this->ProcessEvent ( pFnGetAimLocation, &GetAimLocation_Parms, NULL );

	return GetAimLocation_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXProjectile_Power_Seeking_NPC.InitializePowerProjectile
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fTravelSpeed                   ( CPF_Parm )
// float                          fRadius                        ( CPF_Parm )
// class UBioPower*               oPower                         ( CPF_Parm )

bool ASFXProjectile_Power_Seeking_NPC::InitializePowerProjectile ( class AActor* oCaster, float fTravelSpeed, float fRadius, class UBioPower* oPower )
{
	static UFunction* pFnInitializePowerProjectile = NULL;

	if ( ! pFnInitializePowerProjectile )
		pFnInitializePowerProjectile = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXProjectile_Power_Seeking_NPC.InitializePowerProjectile" );

	ASFXProjectile_Power_Seeking_NPC_execInitializePowerProjectile_Parms InitializePowerProjectile_Parms;
	InitializePowerProjectile_Parms.oCaster = oCaster;
	InitializePowerProjectile_Parms.fTravelSpeed = fTravelSpeed;
	InitializePowerProjectile_Parms.fRadius = fRadius;
	InitializePowerProjectile_Parms.oPower = oPower;

	this->ProcessEvent ( pFnInitializePowerProjectile, &InitializePowerProjectile_Parms, NULL );

	return InitializePowerProjectile_Parms.ReturnValue;
};



class UClass* USFXPower_Incinerate_NPC::pClassPointer = NULL;

class UClass* USFXPower_Incinerate_NPC::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_Incinerate_NPC" );

		return pClassPointer;
	};

// Function SFXGameContent_Powers.SFXPower_Incinerate_NPC.GetDamage
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float USFXPower_Incinerate_NPC::GetDamage ( )
{
	static UFunction* pFnGetDamage = NULL;

	if ( ! pFnGetDamage )
		pFnGetDamage = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPower_Incinerate_NPC.GetDamage" );

	USFXPower_Incinerate_NPC_execGetDamage_Parms GetDamage_Parms;

	this->ProcessEvent ( pFnGetDamage, &GetDamage_Parms, NULL );

	return GetDamage_Parms.ReturnValue;
};



class UClass* USFXPower_Incinerate_Radius::pClassPointer = NULL;

class UClass* USFXPower_Incinerate_Radius::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_Incinerate_Radius" );

		return pClassPointer;
	};



class UClass* USFXPower_Incinerate_Heavy::pClassPointer = NULL;

class UClass* USFXPower_Incinerate_Heavy::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_Incinerate_Heavy" );

		return pClassPointer;
	};



class UClass* ASFXProjectile_Power_Seeking::pClassPointer = NULL;

class UClass* ASFXProjectile_Power_Seeking::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXProjectile_Power_Seeking" );

		return pClassPointer;
	};

// Function SFXGameContent_Powers.SFXProjectile_Power_Seeking.Recycle
// [0x00020102] ( FUNC_Simulated )
// Parameters infos:

void ASFXProjectile_Power_Seeking::Recycle ( )
{
	static UFunction* pFnRecycle = NULL;

	if ( ! pFnRecycle )
		pFnRecycle = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXProjectile_Power_Seeking.Recycle" );

	ASFXProjectile_Power_Seeking_execRecycle_Parms Recycle_Parms;

	this->ProcessEvent ( pFnRecycle, &Recycle_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXProjectile_Power_Seeking.InitializeRotation
// [0x00020000] 
// Parameters infos:
// class APawn*                   oCasterPawn                    ( CPF_Parm )

void ASFXProjectile_Power_Seeking::InitializeRotation ( class APawn* oCasterPawn )
{
	static UFunction* pFnInitializeRotation = NULL;

	if ( ! pFnInitializeRotation )
		pFnInitializeRotation = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXProjectile_Power_Seeking.InitializeRotation" );

	ASFXProjectile_Power_Seeking_execInitializeRotation_Parms InitializeRotation_Parms;
	InitializeRotation_Parms.oCasterPawn = oCasterPawn;

	this->ProcessEvent ( pFnInitializeRotation, &InitializeRotation_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXProjectile_Power_Seeking.InitializePowerProjectile
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fTravelSpeed                   ( CPF_Parm )
// float                          fRadius                        ( CPF_Parm )
// class UBioPower*               oPower                         ( CPF_Parm )

bool ASFXProjectile_Power_Seeking::InitializePowerProjectile ( class AActor* oCaster, float fTravelSpeed, float fRadius, class UBioPower* oPower )
{
	static UFunction* pFnInitializePowerProjectile = NULL;

	if ( ! pFnInitializePowerProjectile )
		pFnInitializePowerProjectile = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXProjectile_Power_Seeking.InitializePowerProjectile" );

	ASFXProjectile_Power_Seeking_execInitializePowerProjectile_Parms InitializePowerProjectile_Parms;
	InitializePowerProjectile_Parms.oCaster = oCaster;
	InitializePowerProjectile_Parms.fTravelSpeed = fTravelSpeed;
	InitializePowerProjectile_Parms.fRadius = fRadius;
	InitializePowerProjectile_Parms.oPower = oPower;

	this->ProcessEvent ( pFnInitializePowerProjectile, &InitializePowerProjectile_Parms, NULL );

	return InitializePowerProjectile_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXProjectile_Power_Seeking.CanLockOn
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Target                         ( CPF_Parm )
// class APawn*                   CasterPawn                     ( CPF_Parm )

bool ASFXProjectile_Power_Seeking::CanLockOn ( class AActor* Target, class APawn* CasterPawn )
{
	static UFunction* pFnCanLockOn = NULL;

	if ( ! pFnCanLockOn )
		pFnCanLockOn = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXProjectile_Power_Seeking.CanLockOn" );

	ASFXProjectile_Power_Seeking_execCanLockOn_Parms CanLockOn_Parms;
	CanLockOn_Parms.Target = Target;
	CanLockOn_Parms.CasterPawn = CasterPawn;

	this->ProcessEvent ( pFnCanLockOn, &CanLockOn_Parms, NULL );

	return CanLockOn_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXProjectile_Power_Seeking.Tick
// [0x00820102] ( FUNC_Simulated )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ASFXProjectile_Power_Seeking::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXProjectile_Power_Seeking.Tick" );

	ASFXProjectile_Power_Seeking_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXProjectile_Power_Seeking.ShouldModifyVelocity
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ASFXProjectile_Power_Seeking::ShouldModifyVelocity ( )
{
	static UFunction* pFnShouldModifyVelocity = NULL;

	if ( ! pFnShouldModifyVelocity )
		pFnShouldModifyVelocity = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXProjectile_Power_Seeking.ShouldModifyVelocity" );

	ASFXProjectile_Power_Seeking_execShouldModifyVelocity_Parms ShouldModifyVelocity_Parms;

	this->ProcessEvent ( pFnShouldModifyVelocity, &ShouldModifyVelocity_Parms, NULL );

	return ShouldModifyVelocity_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXProjectile_Power_Seeking.ChordLength
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          ChordLen                       ( CPF_Parm )
// float                          Theta                          ( CPF_Parm )

float ASFXProjectile_Power_Seeking::ChordLength ( float ChordLen, float Theta )
{
	static UFunction* pFnChordLength = NULL;

	if ( ! pFnChordLength )
		pFnChordLength = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXProjectile_Power_Seeking.ChordLength" );

	ASFXProjectile_Power_Seeking_execChordLength_Parms ChordLength_Parms;
	ChordLength_Parms.ChordLen = ChordLen;
	ChordLength_Parms.Theta = Theta;

	this->ProcessEvent ( pFnChordLength, &ChordLength_Parms, NULL );

	return ChordLength_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXProjectile_Power_Seeking.GetAimLocation
// [0x00820002] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Target                         ( CPF_Parm )

struct FVector ASFXProjectile_Power_Seeking::GetAimLocation ( class AActor* Target )
{
	static UFunction* pFnGetAimLocation = NULL;

	if ( ! pFnGetAimLocation )
		pFnGetAimLocation = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXProjectile_Power_Seeking.GetAimLocation" );

	ASFXProjectile_Power_Seeking_execGetAimLocation_Parms GetAimLocation_Parms;
	GetAimLocation_Parms.Target = Target;

	this->ProcessEvent ( pFnGetAimLocation, &GetAimLocation_Parms, NULL );

	return GetAimLocation_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXProjectile_Power_Seeking.AcquireTarget
// [0x00820002] 
// Parameters infos:
// class AActor*                  Target                         ( CPF_Parm )

void ASFXProjectile_Power_Seeking::AcquireTarget ( class AActor* Target )
{
	static UFunction* pFnAcquireTarget = NULL;

	if ( ! pFnAcquireTarget )
		pFnAcquireTarget = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXProjectile_Power_Seeking.AcquireTarget" );

	ASFXProjectile_Power_Seeking_execAcquireTarget_Parms AcquireTarget_Parms;
	AcquireTarget_Parms.Target = Target;

	this->ProcessEvent ( pFnAcquireTarget, &AcquireTarget_Parms, NULL );
};



class UClass* ASFXProjectile_Power_SuperSeeking::pClassPointer = NULL;

class UClass* ASFXProjectile_Power_SuperSeeking::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXProjectile_Power_SuperSeeking" );

		return pClassPointer;
	};

// Function SFXGameContent_Powers.SFXProjectile_Power_SuperSeeking.InitializeRotation
// [0x00820002] 
// Parameters infos:
// class APawn*                   oCasterPawn                    ( CPF_Parm )

void ASFXProjectile_Power_SuperSeeking::InitializeRotation ( class APawn* oCasterPawn )
{
	static UFunction* pFnInitializeRotation = NULL;

	if ( ! pFnInitializeRotation )
		pFnInitializeRotation = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXProjectile_Power_SuperSeeking.InitializeRotation" );

	ASFXProjectile_Power_SuperSeeking_execInitializeRotation_Parms InitializeRotation_Parms;
	InitializeRotation_Parms.oCasterPawn = oCasterPawn;

	this->ProcessEvent ( pFnInitializeRotation, &InitializeRotation_Parms, NULL );
};



class UClass* ASFXProjectile_Incinerate::pClassPointer = NULL;

class UClass* ASFXProjectile_Incinerate::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXProjectile_Incinerate" );

		return pClassPointer;
	};



class UClass* USFXPowerScript_Incinerate::pClassPointer = NULL;

class UClass* USFXPowerScript_Incinerate::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPowerScript_Incinerate" );

		return pClassPointer;
	};

// Function SFXGameContent_Powers.SFXPowerScript_Incinerate.ShouldUsePower
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Caster                         ( CPF_Parm )
// class AActor*                  Target                         ( CPF_Parm )
// FString                        sOptionalInfo                  ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool USFXPowerScript_Incinerate::ShouldUsePower ( class AActor* Caster, class AActor* Target, FString* sOptionalInfo )
{
	static UFunction* pFnShouldUsePower = NULL;

	if ( ! pFnShouldUsePower )
		pFnShouldUsePower = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPowerScript_Incinerate.ShouldUsePower" );

	USFXPowerScript_Incinerate_execShouldUsePower_Parms ShouldUsePower_Parms;
	ShouldUsePower_Parms.Caster = Caster;
	ShouldUsePower_Parms.Target = Target;

	if ( sOptionalInfo )
		memcpy ( &ShouldUsePower_Parms.sOptionalInfo, sOptionalInfo, 0x10 );

	this->ProcessEvent ( pFnShouldUsePower, &ShouldUsePower_Parms, NULL );

	if ( sOptionalInfo )
		memcpy ( sOptionalInfo, &ShouldUsePower_Parms.sOptionalInfo, 0x10 );

	return ShouldUsePower_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPowerScript_Incinerate.ExplodeEnemy
// [0x00020002] 
// Parameters infos:
// class ABioPawn*                oPawn                          ( CPF_Parm )
// class ABioPawn*                oCaster                        ( CPF_Parm )

void USFXPowerScript_Incinerate::ExplodeEnemy ( class ABioPawn* oPawn, class ABioPawn* oCaster )
{
	static UFunction* pFnExplodeEnemy = NULL;

	if ( ! pFnExplodeEnemy )
		pFnExplodeEnemy = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPowerScript_Incinerate.ExplodeEnemy" );

	USFXPowerScript_Incinerate_execExplodeEnemy_Parms ExplodeEnemy_Parms;
	ExplodeEnemy_Parms.oPawn = oPawn;
	ExplodeEnemy_Parms.oCaster = oCaster;

	this->ProcessEvent ( pFnExplodeEnemy, &ExplodeEnemy_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXPowerScript_Incinerate.CanEnemyBeExploded
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioPawn*                oPawn                          ( CPF_Parm )

bool USFXPowerScript_Incinerate::CanEnemyBeExploded ( class ABioPawn* oPawn )
{
	static UFunction* pFnCanEnemyBeExploded = NULL;

	if ( ! pFnCanEnemyBeExploded )
		pFnCanEnemyBeExploded = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPowerScript_Incinerate.CanEnemyBeExploded" );

	USFXPowerScript_Incinerate_execCanEnemyBeExploded_Parms CanEnemyBeExploded_Parms;
	CanEnemyBeExploded_Parms.oPawn = oPawn;

	this->ProcessEvent ( pFnCanEnemyBeExploded, &CanEnemyBeExploded_Parms, NULL );

	return CanEnemyBeExploded_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPowerScript_Incinerate.CauseAnimatedReaction
// [0x00020002] 
// Parameters infos:
// class AActor*                  oHitActor                      ( CPF_Parm )
// float                          fDelay                         ( CPF_Parm )

void USFXPowerScript_Incinerate::CauseAnimatedReaction ( class AActor* oHitActor, float fDelay )
{
	static UFunction* pFnCauseAnimatedReaction = NULL;

	if ( ! pFnCauseAnimatedReaction )
		pFnCauseAnimatedReaction = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPowerScript_Incinerate.CauseAnimatedReaction" );

	USFXPowerScript_Incinerate_execCauseAnimatedReaction_Parms CauseAnimatedReaction_Parms;
	CauseAnimatedReaction_Parms.oHitActor = oHitActor;
	CauseAnimatedReaction_Parms.fDelay = fDelay;

	this->ProcessEvent ( pFnCauseAnimatedReaction, &CauseAnimatedReaction_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXPowerScript_Incinerate.OnImpact
// [0x00820802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCasterStability               ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )

bool USFXPowerScript_Incinerate::eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPowerScript_Incinerate.OnImpact" );

	USFXPowerScript_Incinerate_eventOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.oCaster = oCaster;
	OnImpact_Parms.fCasterStability = fCasterStability;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPowerScript_Incinerate.StartPhase
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool USFXPowerScript_Incinerate::eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration )
{
	static UFunction* pFnStartPhase = NULL;

	if ( ! pFnStartPhase )
		pFnStartPhase = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPowerScript_Incinerate.StartPhase" );

	USFXPowerScript_Incinerate_eventStartPhase_Parms StartPhase_Parms;
	StartPhase_Parms.ePhase = ePhase;
	StartPhase_Parms.oCaster = oCaster;
	StartPhase_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnStartPhase, &StartPhase_Parms, NULL );

	return StartPhase_Parms.ReturnValue;
};



class UClass* USFXPower_Incinerate::pClassPointer = NULL;

class UClass* USFXPower_Incinerate::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_Incinerate" );

		return pClassPointer;
	};

// Function SFXGameContent_Powers.SFXPower_Incinerate.GetDuration
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float USFXPower_Incinerate::GetDuration ( )
{
	static UFunction* pFnGetDuration = NULL;

	if ( ! pFnGetDuration )
		pFnGetDuration = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPower_Incinerate.GetDuration" );

	USFXPower_Incinerate_execGetDuration_Parms GetDuration_Parms;

	this->ProcessEvent ( pFnGetDuration, &GetDuration_Parms, NULL );

	return GetDuration_Parms.ReturnValue;
};



class UClass* USFXPower_CombatDroneShock::pClassPointer = NULL;

class UClass* USFXPower_CombatDroneShock::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_CombatDroneShock" );

		return pClassPointer;
	};



class UClass* USFXPowerScript_CombatDroneDeath::pClassPointer = NULL;

class UClass* USFXPowerScript_CombatDroneDeath::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPowerScript_CombatDroneDeath" );

		return pClassPointer;
	};

// Function SFXGameContent_Powers.SFXPowerScript_CombatDroneDeath.OnImpact
// [0x00820802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCasterStability               ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )

bool USFXPowerScript_CombatDroneDeath::eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPowerScript_CombatDroneDeath.OnImpact" );

	USFXPowerScript_CombatDroneDeath_eventOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.oCaster = oCaster;
	OnImpact_Parms.fCasterStability = fCasterStability;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPowerScript_CombatDroneDeath.StartPhase
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool USFXPowerScript_CombatDroneDeath::eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration )
{
	static UFunction* pFnStartPhase = NULL;

	if ( ! pFnStartPhase )
		pFnStartPhase = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPowerScript_CombatDroneDeath.StartPhase" );

	USFXPowerScript_CombatDroneDeath_eventStartPhase_Parms StartPhase_Parms;
	StartPhase_Parms.ePhase = ePhase;
	StartPhase_Parms.oCaster = oCaster;
	StartPhase_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnStartPhase, &StartPhase_Parms, NULL );

	return StartPhase_Parms.ReturnValue;
};



class UClass* USFXPower_CombatDroneDeath::pClassPointer = NULL;

class UClass* USFXPower_CombatDroneDeath::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_CombatDroneDeath" );

		return pClassPointer;
	};



class UClass* USFXPowerScript_CombatDroneAttack_NPC::pClassPointer = NULL;

class UClass* USFXPowerScript_CombatDroneAttack_NPC::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPowerScript_CombatDroneAttack_NPC" );

		return pClassPointer;
	};

// Function SFXGameContent_Powers.SFXPowerScript_CombatDroneAttack_NPC.ShouldUsePower
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Caster                         ( CPF_Parm )
// class AActor*                  Target                         ( CPF_Parm )
// FString                        sOptionalInfo                  ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool USFXPowerScript_CombatDroneAttack_NPC::ShouldUsePower ( class AActor* Caster, class AActor* Target, FString* sOptionalInfo )
{
	static UFunction* pFnShouldUsePower = NULL;

	if ( ! pFnShouldUsePower )
		pFnShouldUsePower = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPowerScript_CombatDroneAttack_NPC.ShouldUsePower" );

	USFXPowerScript_CombatDroneAttack_NPC_execShouldUsePower_Parms ShouldUsePower_Parms;
	ShouldUsePower_Parms.Caster = Caster;
	ShouldUsePower_Parms.Target = Target;

	if ( sOptionalInfo )
		memcpy ( &ShouldUsePower_Parms.sOptionalInfo, sOptionalInfo, 0x10 );

	this->ProcessEvent ( pFnShouldUsePower, &ShouldUsePower_Parms, NULL );

	if ( sOptionalInfo )
		memcpy ( sOptionalInfo, &ShouldUsePower_Parms.sOptionalInfo, 0x10 );

	return ShouldUsePower_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPowerScript_CombatDroneAttack_NPC.OnImpact
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCasterStability               ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )

bool USFXPowerScript_CombatDroneAttack_NPC::eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPowerScript_CombatDroneAttack_NPC.OnImpact" );

	USFXPowerScript_CombatDroneAttack_NPC_eventOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.oCaster = oCaster;
	OnImpact_Parms.fCasterStability = fCasterStability;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPowerScript_CombatDroneAttack_NPC.StartPhase
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool USFXPowerScript_CombatDroneAttack_NPC::eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration )
{
	static UFunction* pFnStartPhase = NULL;

	if ( ! pFnStartPhase )
		pFnStartPhase = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPowerScript_CombatDroneAttack_NPC.StartPhase" );

	USFXPowerScript_CombatDroneAttack_NPC_eventStartPhase_Parms StartPhase_Parms;
	StartPhase_Parms.ePhase = ePhase;
	StartPhase_Parms.oCaster = oCaster;
	StartPhase_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnStartPhase, &StartPhase_Parms, NULL );

	return StartPhase_Parms.ReturnValue;
};



class UClass* USFXPower_CombatDroneAttack_NPC::pClassPointer = NULL;

class UClass* USFXPower_CombatDroneAttack_NPC::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_CombatDroneAttack_NPC" );

		return pClassPointer;
	};



class UClass* USFXPowerScript_CombatDroneAttack::pClassPointer = NULL;

class UClass* USFXPowerScript_CombatDroneAttack::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPowerScript_CombatDroneAttack" );

		return pClassPointer;
	};

// Function SFXGameContent_Powers.SFXPowerScript_CombatDroneAttack.ShouldUsePower
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Caster                         ( CPF_Parm )
// class AActor*                  Target                         ( CPF_Parm )
// FString                        sOptionalInfo                  ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool USFXPowerScript_CombatDroneAttack::ShouldUsePower ( class AActor* Caster, class AActor* Target, FString* sOptionalInfo )
{
	static UFunction* pFnShouldUsePower = NULL;

	if ( ! pFnShouldUsePower )
		pFnShouldUsePower = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPowerScript_CombatDroneAttack.ShouldUsePower" );

	USFXPowerScript_CombatDroneAttack_execShouldUsePower_Parms ShouldUsePower_Parms;
	ShouldUsePower_Parms.Caster = Caster;
	ShouldUsePower_Parms.Target = Target;

	if ( sOptionalInfo )
		memcpy ( &ShouldUsePower_Parms.sOptionalInfo, sOptionalInfo, 0x10 );

	this->ProcessEvent ( pFnShouldUsePower, &ShouldUsePower_Parms, NULL );

	if ( sOptionalInfo )
		memcpy ( sOptionalInfo, &ShouldUsePower_Parms.sOptionalInfo, 0x10 );

	return ShouldUsePower_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPowerScript_CombatDroneAttack.OnImpact
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCasterStability               ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )

bool USFXPowerScript_CombatDroneAttack::eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPowerScript_CombatDroneAttack.OnImpact" );

	USFXPowerScript_CombatDroneAttack_eventOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.oCaster = oCaster;
	OnImpact_Parms.fCasterStability = fCasterStability;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPowerScript_CombatDroneAttack.StartPhase
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool USFXPowerScript_CombatDroneAttack::eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration )
{
	static UFunction* pFnStartPhase = NULL;

	if ( ! pFnStartPhase )
		pFnStartPhase = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPowerScript_CombatDroneAttack.StartPhase" );

	USFXPowerScript_CombatDroneAttack_eventStartPhase_Parms StartPhase_Parms;
	StartPhase_Parms.ePhase = ePhase;
	StartPhase_Parms.oCaster = oCaster;
	StartPhase_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnStartPhase, &StartPhase_Parms, NULL );

	return StartPhase_Parms.ReturnValue;
};



class UClass* USFXPower_CombatDroneAttack::pClassPointer = NULL;

class UClass* USFXPower_CombatDroneAttack::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_CombatDroneAttack" );

		return pClassPointer;
	};



class UClass* USFXPower_CombatDrone_Rocket::pClassPointer = NULL;

class UClass* USFXPower_CombatDrone_Rocket::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_CombatDrone_Rocket" );

		return pClassPointer;
	};



class UClass* USFXPower_Cloak_NPC::pClassPointer = NULL;

class UClass* USFXPower_Cloak_NPC::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_Cloak_NPC" );

		return pClassPointer;
	};

// Function SFXGameContent_Powers.SFXPower_Cloak_NPC.GetDamageMultiplier
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float USFXPower_Cloak_NPC::GetDamageMultiplier ( )
{
	static UFunction* pFnGetDamageMultiplier = NULL;

	if ( ! pFnGetDamageMultiplier )
		pFnGetDamageMultiplier = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPower_Cloak_NPC.GetDamageMultiplier" );

	USFXPower_Cloak_NPC_execGetDamageMultiplier_Parms GetDamageMultiplier_Parms;

	this->ProcessEvent ( pFnGetDamageMultiplier, &GetDamageMultiplier_Parms, NULL );

	return GetDamageMultiplier_Parms.ReturnValue;
};



class UClass* USFXPower_Cloak_Enhanced::pClassPointer = NULL;

class UClass* USFXPower_Cloak_Enhanced::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_Cloak_Enhanced" );

		return pClassPointer;
	};



class UClass* USFXPower_Cloak_Damage::pClassPointer = NULL;

class UClass* USFXPower_Cloak_Damage::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_Cloak_Damage" );

		return pClassPointer;
	};



class UClass* USFXPowerScript_Cloak::pClassPointer = NULL;

class UClass* USFXPowerScript_Cloak::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPowerScript_Cloak" );

		return pClassPointer;
	};

// Function SFXGameContent_Powers.SFXPowerScript_Cloak.ShouldUsePower
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Caster                         ( CPF_Parm )
// class AActor*                  Target                         ( CPF_Parm )
// FString                        sOptionalInfo                  ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool USFXPowerScript_Cloak::ShouldUsePower ( class AActor* Caster, class AActor* Target, FString* sOptionalInfo )
{
	static UFunction* pFnShouldUsePower = NULL;

	if ( ! pFnShouldUsePower )
		pFnShouldUsePower = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPowerScript_Cloak.ShouldUsePower" );

	USFXPowerScript_Cloak_execShouldUsePower_Parms ShouldUsePower_Parms;
	ShouldUsePower_Parms.Caster = Caster;
	ShouldUsePower_Parms.Target = Target;

	if ( sOptionalInfo )
		memcpy ( &ShouldUsePower_Parms.sOptionalInfo, sOptionalInfo, 0x10 );

	this->ProcessEvent ( pFnShouldUsePower, &ShouldUsePower_Parms, NULL );

	if ( sOptionalInfo )
		memcpy ( sOptionalInfo, &ShouldUsePower_Parms.sOptionalInfo, 0x10 );

	return ShouldUsePower_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPowerScript_Cloak.OnCloakEnded
// [0x00020002] 
// Parameters infos:

void USFXPowerScript_Cloak::OnCloakEnded ( )
{
	static UFunction* pFnOnCloakEnded = NULL;

	if ( ! pFnOnCloakEnded )
		pFnOnCloakEnded = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPowerScript_Cloak.OnCloakEnded" );

	USFXPowerScript_Cloak_execOnCloakEnded_Parms OnCloakEnded_Parms;

	this->ProcessEvent ( pFnOnCloakEnded, &OnCloakEnded_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXPowerScript_Cloak.OnImpact
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCasterStability               ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )

bool USFXPowerScript_Cloak::eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPowerScript_Cloak.OnImpact" );

	USFXPowerScript_Cloak_eventOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.oCaster = oCaster;
	OnImpact_Parms.fCasterStability = fCasterStability;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPowerScript_Cloak.AdjustCooldown
// [0x00420802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          fCoolDownTime                  ( CPF_Parm | CPF_OutParm )

bool USFXPowerScript_Cloak::eventAdjustCooldown ( float* fCoolDownTime )
{
	static UFunction* pFnAdjustCooldown = NULL;

	if ( ! pFnAdjustCooldown )
		pFnAdjustCooldown = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPowerScript_Cloak.AdjustCooldown" );

	USFXPowerScript_Cloak_eventAdjustCooldown_Parms AdjustCooldown_Parms;

	if ( fCoolDownTime )
		AdjustCooldown_Parms.fCoolDownTime = *fCoolDownTime;

	this->ProcessEvent ( pFnAdjustCooldown, &AdjustCooldown_Parms, NULL );

	if ( fCoolDownTime )
		*fCoolDownTime = AdjustCooldown_Parms.fCoolDownTime;

	return AdjustCooldown_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPowerScript_Cloak.StartPhase
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool USFXPowerScript_Cloak::eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration )
{
	static UFunction* pFnStartPhase = NULL;

	if ( ! pFnStartPhase )
		pFnStartPhase = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPowerScript_Cloak.StartPhase" );

	USFXPowerScript_Cloak_eventStartPhase_Parms StartPhase_Parms;
	StartPhase_Parms.ePhase = ePhase;
	StartPhase_Parms.oCaster = oCaster;
	StartPhase_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnStartPhase, &StartPhase_Parms, NULL );

	return StartPhase_Parms.ReturnValue;
};



class UClass* USFXPower_Cloak::pClassPointer = NULL;

class UClass* USFXPower_Cloak::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_Cloak" );

		return pClassPointer;
	};



class UClass* USFXPower_Barrier_NPC::pClassPointer = NULL;

class UClass* USFXPower_Barrier_NPC::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_Barrier_NPC" );

		return pClassPointer;
	};



class UClass* USFXPower_Barrier_Damage::pClassPointer = NULL;

class UClass* USFXPower_Barrier_Damage::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_Barrier_Damage" );

		return pClassPointer;
	};



class UClass* USFXPower_Barrier_Heavy::pClassPointer = NULL;

class UClass* USFXPower_Barrier_Heavy::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_Barrier_Heavy" );

		return pClassPointer;
	};



class UClass* USFXPowerScript_Barrier::pClassPointer = NULL;

class UClass* USFXPowerScript_Barrier::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPowerScript_Barrier" );

		return pClassPointer;
	};



class UClass* USFXPower_LoyaltyRequirement::pClassPointer = NULL;

class UClass* USFXPower_LoyaltyRequirement::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_LoyaltyRequirement" );

		return pClassPointer;
	};



class UClass* USFXPower_Barrier::pClassPointer = NULL;

class UClass* USFXPower_Barrier::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_Barrier" );

		return pClassPointer;
	};



class UClass* USFXPowerScript_DefensiveShieldBase::pClassPointer = NULL;

class UClass* USFXPowerScript_DefensiveShieldBase::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPowerScript_DefensiveShieldBase" );

		return pClassPointer;
	};

// Function SFXGameContent_Powers.SFXPowerScript_DefensiveShieldBase.ShouldUsePower
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Caster                         ( CPF_Parm )
// class AActor*                  Target                         ( CPF_Parm )
// FString                        sOptionalInfo                  ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool USFXPowerScript_DefensiveShieldBase::ShouldUsePower ( class AActor* Caster, class AActor* Target, FString* sOptionalInfo )
{
	static UFunction* pFnShouldUsePower = NULL;

	if ( ! pFnShouldUsePower )
		pFnShouldUsePower = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPowerScript_DefensiveShieldBase.ShouldUsePower" );

	USFXPowerScript_DefensiveShieldBase_execShouldUsePower_Parms ShouldUsePower_Parms;
	ShouldUsePower_Parms.Caster = Caster;
	ShouldUsePower_Parms.Target = Target;

	if ( sOptionalInfo )
		memcpy ( &ShouldUsePower_Parms.sOptionalInfo, sOptionalInfo, 0x10 );

	this->ProcessEvent ( pFnShouldUsePower, &ShouldUsePower_Parms, NULL );

	if ( sOptionalInfo )
		memcpy ( sOptionalInfo, &ShouldUsePower_Parms.sOptionalInfo, 0x10 );

	return ShouldUsePower_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPowerScript_DefensiveShieldBase.OnImpact
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCasterStability               ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )

bool USFXPowerScript_DefensiveShieldBase::eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPowerScript_DefensiveShieldBase.OnImpact" );

	USFXPowerScript_DefensiveShieldBase_eventOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.oCaster = oCaster;
	OnImpact_Parms.fCasterStability = fCasterStability;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPowerScript_DefensiveShieldBase.OnShieldDestroyed
// [0x00020002] 
// Parameters infos:
// class AActor*                  ShieldActor                    ( CPF_Parm )
// class ASFXShield_Base*         Shield                         ( CPF_Parm )

void USFXPowerScript_DefensiveShieldBase::OnShieldDestroyed ( class AActor* ShieldActor, class ASFXShield_Base* Shield )
{
	static UFunction* pFnOnShieldDestroyed = NULL;

	if ( ! pFnOnShieldDestroyed )
		pFnOnShieldDestroyed = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPowerScript_DefensiveShieldBase.OnShieldDestroyed" );

	USFXPowerScript_DefensiveShieldBase_execOnShieldDestroyed_Parms OnShieldDestroyed_Parms;
	OnShieldDestroyed_Parms.ShieldActor = ShieldActor;
	OnShieldDestroyed_Parms.Shield = Shield;

	this->ProcessEvent ( pFnOnShieldDestroyed, &OnShieldDestroyed_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXPowerScript_DefensiveShieldBase.InitializePowerScript
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void USFXPowerScript_DefensiveShieldBase::eventInitializePowerScript ( )
{
	static UFunction* pFnInitializePowerScript = NULL;

	if ( ! pFnInitializePowerScript )
		pFnInitializePowerScript = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPowerScript_DefensiveShieldBase.InitializePowerScript" );

	USFXPowerScript_DefensiveShieldBase_eventInitializePowerScript_Parms InitializePowerScript_Parms;

	this->ProcessEvent ( pFnInitializePowerScript, &InitializePowerScript_Parms, NULL );
};



class UClass* USFXPower_DefensiveShieldBase::pClassPointer = NULL;

class UClass* USFXPower_DefensiveShieldBase::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_DefensiveShieldBase" );

		return pClassPointer;
	};

// Function SFXGameContent_Powers.SFXPower_DefensiveShieldBase.GetShieldValue
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float USFXPower_DefensiveShieldBase::GetShieldValue ( )
{
	static UFunction* pFnGetShieldValue = NULL;

	if ( ! pFnGetShieldValue )
		pFnGetShieldValue = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPower_DefensiveShieldBase.GetShieldValue" );

	USFXPower_DefensiveShieldBase_execGetShieldValue_Parms GetShieldValue_Parms;

	this->ProcessEvent ( pFnGetShieldValue, &GetShieldValue_Parms, NULL );

	return GetShieldValue_Parms.ReturnValue;
};



class UClass* USFXPower_CombatDrone_Tech::pClassPointer = NULL;

class UClass* USFXPower_CombatDrone_Tech::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_CombatDrone_Tech" );

		return pClassPointer;
	};



class UClass* ASFXPawn_EngineerTechDrone::pClassPointer = NULL;

class UClass* ASFXPawn_EngineerTechDrone::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPawn_EngineerTechDrone" );

		return pClassPointer;
	};

// Function SFXGameContent_Powers.SFXPawn_EngineerTechDrone.SpawnDeathVFX
// [0x00020002] 
// Parameters infos:

void ASFXPawn_EngineerTechDrone::SpawnDeathVFX ( )
{
	static UFunction* pFnSpawnDeathVFX = NULL;

	if ( ! pFnSpawnDeathVFX )
		pFnSpawnDeathVFX = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPawn_EngineerTechDrone.SpawnDeathVFX" );

	ASFXPawn_EngineerTechDrone_execSpawnDeathVFX_Parms SpawnDeathVFX_Parms;

	this->ProcessEvent ( pFnSpawnDeathVFX, &SpawnDeathVFX_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXPawn_EngineerTechDrone.Died
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AController*             Killer                         ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

bool ASFXPawn_EngineerTechDrone::eventDied ( class AController* Killer, class UClass* DamageType, struct FVector const& HitLocation )
{
	static UFunction* pFnDied = NULL;

	if ( ! pFnDied )
		pFnDied = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPawn_EngineerTechDrone.Died" );

	ASFXPawn_EngineerTechDrone_eventDied_Parms Died_Parms;
	Died_Parms.Killer = Killer;
	Died_Parms.DamageType = DamageType;
	memcpy ( &Died_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnDied, &Died_Parms, NULL );

	return Died_Parms.ReturnValue;
};



class UClass* ASFXPawn_EngineerRocketDrone::pClassPointer = NULL;

class UClass* ASFXPawn_EngineerRocketDrone::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPawn_EngineerRocketDrone" );

		return pClassPointer;
	};



class UClass* ASFXPawn_EngineerCombatDrone_NPC::pClassPointer = NULL;

class UClass* ASFXPawn_EngineerCombatDrone_NPC::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPawn_EngineerCombatDrone_NPC" );

		return pClassPointer;
	};



class UClass* USFXGameEffect_OverheatWeapons::pClassPointer = NULL;

class UClass* USFXGameEffect_OverheatWeapons::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXGameEffect_OverheatWeapons" );

		return pClassPointer;
	};

// Function SFXGameContent_Powers.SFXGameEffect_OverheatWeapons.OnRemoved
// [0x00020002] 
// Parameters infos:

void USFXGameEffect_OverheatWeapons::OnRemoved ( )
{
	static UFunction* pFnOnRemoved = NULL;

	if ( ! pFnOnRemoved )
		pFnOnRemoved = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXGameEffect_OverheatWeapons.OnRemoved" );

	USFXGameEffect_OverheatWeapons_execOnRemoved_Parms OnRemoved_Parms;

	this->ProcessEvent ( pFnOnRemoved, &OnRemoved_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXGameEffect_OverheatWeapons.OverheatWeapon
// [0x00020002] 
// Parameters infos:

void USFXGameEffect_OverheatWeapons::OverheatWeapon ( )
{
	static UFunction* pFnOverheatWeapon = NULL;

	if ( ! pFnOverheatWeapon )
		pFnOverheatWeapon = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXGameEffect_OverheatWeapons.OverheatWeapon" );

	USFXGameEffect_OverheatWeapons_execOverheatWeapon_Parms OverheatWeapon_Parms;

	this->ProcessEvent ( pFnOverheatWeapon, &OverheatWeapon_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXGameEffect_OverheatWeapons.OnUpdate
// [0x00020002] 
// Parameters infos:
// float                          DeltaSeconds                   ( CPF_Parm )

void USFXGameEffect_OverheatWeapons::OnUpdate ( float DeltaSeconds )
{
	static UFunction* pFnOnUpdate = NULL;

	if ( ! pFnOnUpdate )
		pFnOnUpdate = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXGameEffect_OverheatWeapons.OnUpdate" );

	USFXGameEffect_OverheatWeapons_execOnUpdate_Parms OnUpdate_Parms;
	OnUpdate_Parms.DeltaSeconds = DeltaSeconds;

	this->ProcessEvent ( pFnOnUpdate, &OnUpdate_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXGameEffect_OverheatWeapons.OnApplied
// [0x00020002] 
// Parameters infos:

void USFXGameEffect_OverheatWeapons::OnApplied ( )
{
	static UFunction* pFnOnApplied = NULL;

	if ( ! pFnOnApplied )
		pFnOnApplied = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXGameEffect_OverheatWeapons.OnApplied" );

	USFXGameEffect_OverheatWeapons_execOnApplied_Parms OnApplied_Parms;

	this->ProcessEvent ( pFnOnApplied, &OnApplied_Parms, NULL );
};



class UClass* USFXGameEffect_CloakVFX::pClassPointer = NULL;

class UClass* USFXGameEffect_CloakVFX::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXGameEffect_CloakVFX" );

		return pClassPointer;
	};

// Function SFXGameContent_Powers.SFXGameEffect_CloakVFX.EndStealthVFX
// [0x00020002] 
// Parameters infos:

void USFXGameEffect_CloakVFX::EndStealthVFX ( )
{
	static UFunction* pFnEndStealthVFX = NULL;

	if ( ! pFnEndStealthVFX )
		pFnEndStealthVFX = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXGameEffect_CloakVFX.EndStealthVFX" );

	USFXGameEffect_CloakVFX_execEndStealthVFX_Parms EndStealthVFX_Parms;

	this->ProcessEvent ( pFnEndStealthVFX, &EndStealthVFX_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXGameEffect_CloakVFX.RestoreMeshMaterials
// [0x00020002] 
// Parameters infos:
// class USkeletalMeshComponent*  Mesh                           ( CPF_Parm | CPF_EditInline )

void USFXGameEffect_CloakVFX::RestoreMeshMaterials ( class USkeletalMeshComponent* Mesh )
{
	static UFunction* pFnRestoreMeshMaterials = NULL;

	if ( ! pFnRestoreMeshMaterials )
		pFnRestoreMeshMaterials = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXGameEffect_CloakVFX.RestoreMeshMaterials" );

	USFXGameEffect_CloakVFX_execRestoreMeshMaterials_Parms RestoreMeshMaterials_Parms;
	RestoreMeshMaterials_Parms.Mesh = Mesh;

	this->ProcessEvent ( pFnRestoreMeshMaterials, &RestoreMeshMaterials_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXGameEffect_CloakVFX.TransitionOff
// [0x00020002] 
// Parameters infos:

void USFXGameEffect_CloakVFX::TransitionOff ( )
{
	static UFunction* pFnTransitionOff = NULL;

	if ( ! pFnTransitionOff )
		pFnTransitionOff = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXGameEffect_CloakVFX.TransitionOff" );

	USFXGameEffect_CloakVFX_execTransitionOff_Parms TransitionOff_Parms;

	this->ProcessEvent ( pFnTransitionOff, &TransitionOff_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXGameEffect_CloakVFX.DelayedTransitionOff
// [0x00020002] 
// Parameters infos:

void USFXGameEffect_CloakVFX::DelayedTransitionOff ( )
{
	static UFunction* pFnDelayedTransitionOff = NULL;

	if ( ! pFnDelayedTransitionOff )
		pFnDelayedTransitionOff = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXGameEffect_CloakVFX.DelayedTransitionOff" );

	USFXGameEffect_CloakVFX_execDelayedTransitionOff_Parms DelayedTransitionOff_Parms;

	this->ProcessEvent ( pFnDelayedTransitionOff, &DelayedTransitionOff_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXGameEffect_CloakVFX.OnRemoved
// [0x00020002] 
// Parameters infos:

void USFXGameEffect_CloakVFX::OnRemoved ( )
{
	static UFunction* pFnOnRemoved = NULL;

	if ( ! pFnOnRemoved )
		pFnOnRemoved = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXGameEffect_CloakVFX.OnRemoved" );

	USFXGameEffect_CloakVFX_execOnRemoved_Parms OnRemoved_Parms;

	this->ProcessEvent ( pFnOnRemoved, &OnRemoved_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXGameEffect_CloakVFX.OnUpdate
// [0x00020002] 
// Parameters infos:
// float                          DeltaSeconds                   ( CPF_Parm )

void USFXGameEffect_CloakVFX::OnUpdate ( float DeltaSeconds )
{
	static UFunction* pFnOnUpdate = NULL;

	if ( ! pFnOnUpdate )
		pFnOnUpdate = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXGameEffect_CloakVFX.OnUpdate" );

	USFXGameEffect_CloakVFX_execOnUpdate_Parms OnUpdate_Parms;
	OnUpdate_Parms.DeltaSeconds = DeltaSeconds;

	this->ProcessEvent ( pFnOnUpdate, &OnUpdate_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXGameEffect_CloakVFX.StartTransition
// [0x00020002] 
// Parameters infos:

void USFXGameEffect_CloakVFX::StartTransition ( )
{
	static UFunction* pFnStartTransition = NULL;

	if ( ! pFnStartTransition )
		pFnStartTransition = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXGameEffect_CloakVFX.StartTransition" );

	USFXGameEffect_CloakVFX_execStartTransition_Parms StartTransition_Parms;

	this->ProcessEvent ( pFnStartTransition, &StartTransition_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXGameEffect_CloakVFX.SwapMeshMaterials
// [0x00020002] 
// Parameters infos:
// class USkeletalMeshComponent*  oSkeletalMesh                  ( CPF_Parm | CPF_EditInline )

void USFXGameEffect_CloakVFX::SwapMeshMaterials ( class USkeletalMeshComponent* oSkeletalMesh )
{
	static UFunction* pFnSwapMeshMaterials = NULL;

	if ( ! pFnSwapMeshMaterials )
		pFnSwapMeshMaterials = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXGameEffect_CloakVFX.SwapMeshMaterials" );

	USFXGameEffect_CloakVFX_execSwapMeshMaterials_Parms SwapMeshMaterials_Parms;
	SwapMeshMaterials_Parms.oSkeletalMesh = oSkeletalMesh;

	this->ProcessEvent ( pFnSwapMeshMaterials, &SwapMeshMaterials_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXGameEffect_CloakVFX.SwapInvisibleMaterials
// [0x00020002] 
// Parameters infos:

void USFXGameEffect_CloakVFX::SwapInvisibleMaterials ( )
{
	static UFunction* pFnSwapInvisibleMaterials = NULL;

	if ( ! pFnSwapInvisibleMaterials )
		pFnSwapInvisibleMaterials = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXGameEffect_CloakVFX.SwapInvisibleMaterials" );

	USFXGameEffect_CloakVFX_execSwapInvisibleMaterials_Parms SwapInvisibleMaterials_Parms;

	this->ProcessEvent ( pFnSwapInvisibleMaterials, &SwapInvisibleMaterials_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXGameEffect_CloakVFX.StoreMeshMaterials
// [0x00020002] 
// Parameters infos:
// class USkeletalMeshComponent*  oSkeletalMesh                  ( CPF_Parm | CPF_EditInline )

void USFXGameEffect_CloakVFX::StoreMeshMaterials ( class USkeletalMeshComponent* oSkeletalMesh )
{
	static UFunction* pFnStoreMeshMaterials = NULL;

	if ( ! pFnStoreMeshMaterials )
		pFnStoreMeshMaterials = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXGameEffect_CloakVFX.StoreMeshMaterials" );

	USFXGameEffect_CloakVFX_execStoreMeshMaterials_Parms StoreMeshMaterials_Parms;
	StoreMeshMaterials_Parms.oSkeletalMesh = oSkeletalMesh;

	this->ProcessEvent ( pFnStoreMeshMaterials, &StoreMeshMaterials_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXGameEffect_CloakVFX.StoreStartingMaterials
// [0x00020002] 
// Parameters infos:

void USFXGameEffect_CloakVFX::StoreStartingMaterials ( )
{
	static UFunction* pFnStoreStartingMaterials = NULL;

	if ( ! pFnStoreStartingMaterials )
		pFnStoreStartingMaterials = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXGameEffect_CloakVFX.StoreStartingMaterials" );

	USFXGameEffect_CloakVFX_execStoreStartingMaterials_Parms StoreStartingMaterials_Parms;

	this->ProcessEvent ( pFnStoreStartingMaterials, &StoreStartingMaterials_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXGameEffect_CloakVFX.OnApplied
// [0x00020002] 
// Parameters infos:

void USFXGameEffect_CloakVFX::OnApplied ( )
{
	static UFunction* pFnOnApplied = NULL;

	if ( ! pFnOnApplied )
		pFnOnApplied = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXGameEffect_CloakVFX.OnApplied" );

	USFXGameEffect_CloakVFX_execOnApplied_Parms OnApplied_Parms;

	this->ProcessEvent ( pFnOnApplied, &OnApplied_Parms, NULL );
};



class UClass* USFXDamageType_CombatDroneShock::pClassPointer = NULL;

class UClass* USFXDamageType_CombatDroneShock::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXDamageType_CombatDroneShock" );

		return pClassPointer;
	};



class UClass* USFXDamageType_CombatDroneAttack_NPC::pClassPointer = NULL;

class UClass* USFXDamageType_CombatDroneAttack_NPC::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXDamageType_CombatDroneAttack_NPC" );

		return pClassPointer;
	};



class UClass* USFXPower_WarpProjectile::pClassPointer = NULL;

class UClass* USFXPower_WarpProjectile::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_WarpProjectile" );

		return pClassPointer;
	};



class UClass* USFXPower_Warp_NPC::pClassPointer = NULL;

class UClass* USFXPower_Warp_NPC::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_Warp_NPC" );

		return pClassPointer;
	};

// Function SFXGameContent_Powers.SFXPower_Warp_NPC.GetDamage
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float USFXPower_Warp_NPC::GetDamage ( )
{
	static UFunction* pFnGetDamage = NULL;

	if ( ! pFnGetDamage )
		pFnGetDamage = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPower_Warp_NPC.GetDamage" );

	USFXPower_Warp_NPC_execGetDamage_Parms GetDamage_Parms;

	this->ProcessEvent ( pFnGetDamage, &GetDamage_Parms, NULL );

	return GetDamage_Parms.ReturnValue;
};



class UClass* USFXPower_Warp::pClassPointer = NULL;

class UClass* USFXPower_Warp::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_Warp" );

		return pClassPointer;
	};



class UClass* UBioWarpScript::pClassPointer = NULL;

class UClass* UBioWarpScript::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.BioWarpScript" );

		return pClassPointer;
	};

// Function SFXGameContent_Powers.BioWarpScript.ShouldUsePower
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Caster                         ( CPF_Parm )
// class AActor*                  Target                         ( CPF_Parm )
// FString                        sOptionalInfo                  ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UBioWarpScript::ShouldUsePower ( class AActor* Caster, class AActor* Target, FString* sOptionalInfo )
{
	static UFunction* pFnShouldUsePower = NULL;

	if ( ! pFnShouldUsePower )
		pFnShouldUsePower = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioWarpScript.ShouldUsePower" );

	UBioWarpScript_execShouldUsePower_Parms ShouldUsePower_Parms;
	ShouldUsePower_Parms.Caster = Caster;
	ShouldUsePower_Parms.Target = Target;

	if ( sOptionalInfo )
		memcpy ( &ShouldUsePower_Parms.sOptionalInfo, sOptionalInfo, 0x10 );

	this->ProcessEvent ( pFnShouldUsePower, &ShouldUsePower_Parms, NULL );

	if ( sOptionalInfo )
		memcpy ( sOptionalInfo, &ShouldUsePower_Parms.sOptionalInfo, 0x10 );

	return ShouldUsePower_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioWarpScript.TurnOffScriptSingularity
// [0x00020002] 
// Parameters infos:
// class ABioPawn*                PowerCaster                    ( CPF_Parm )
// struct SFXName                 PowerName                      ( CPF_Parm )

void UBioWarpScript::TurnOffScriptSingularity ( class ABioPawn* PowerCaster, struct SFXName PowerName )
{
	static UFunction* pFnTurnOffScriptSingularity = NULL;

	if ( ! pFnTurnOffScriptSingularity )
		pFnTurnOffScriptSingularity = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioWarpScript.TurnOffScriptSingularity" );

	UBioWarpScript_execTurnOffScriptSingularity_Parms TurnOffScriptSingularity_Parms;
	TurnOffScriptSingularity_Parms.PowerCaster = PowerCaster;
	memcpy ( &TurnOffScriptSingularity_Parms.PowerName, &PowerName, 0x8 );

	this->ProcessEvent ( pFnTurnOffScriptSingularity, &TurnOffScriptSingularity_Parms, NULL );
};

// Function SFXGameContent_Powers.BioWarpScript.StopSingularity
// [0x00020002] 
// Parameters infos:
// class ABioPawn*                oImpacted                      ( CPF_Parm )

void UBioWarpScript::StopSingularity ( class ABioPawn* oImpacted )
{
	static UFunction* pFnStopSingularity = NULL;

	if ( ! pFnStopSingularity )
		pFnStopSingularity = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioWarpScript.StopSingularity" );

	UBioWarpScript_execStopSingularity_Parms StopSingularity_Parms;
	StopSingularity_Parms.oImpacted = oImpacted;

	this->ProcessEvent ( pFnStopSingularity, &StopSingularity_Parms, NULL );
};

// Function SFXGameContent_Powers.BioWarpScript.SpawnBigImpactVFX
// [0x00820002] 
// Parameters infos:
// class AActor*                  oImpacted                      ( CPF_Parm )

void UBioWarpScript::SpawnBigImpactVFX ( class AActor* oImpacted )
{
	static UFunction* pFnSpawnBigImpactVFX = NULL;

	if ( ! pFnSpawnBigImpactVFX )
		pFnSpawnBigImpactVFX = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioWarpScript.SpawnBigImpactVFX" );

	UBioWarpScript_execSpawnBigImpactVFX_Parms SpawnBigImpactVFX_Parms;
	SpawnBigImpactVFX_Parms.oImpacted = oImpacted;

	this->ProcessEvent ( pFnSpawnBigImpactVFX, &SpawnBigImpactVFX_Parms, NULL );
};

// Function SFXGameContent_Powers.BioWarpScript.DetonateBiotics
// [0x00820002] 
// Parameters infos:
// class AActor*                  oCaster                        ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )

void UBioWarpScript::DetonateBiotics ( class AActor* oCaster, class AActor* oImpacted )
{
	static UFunction* pFnDetonateBiotics = NULL;

	if ( ! pFnDetonateBiotics )
		pFnDetonateBiotics = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioWarpScript.DetonateBiotics" );

	UBioWarpScript_execDetonateBiotics_Parms DetonateBiotics_Parms;
	DetonateBiotics_Parms.oCaster = oCaster;
	DetonateBiotics_Parms.oImpacted = oImpacted;

	this->ProcessEvent ( pFnDetonateBiotics, &DetonateBiotics_Parms, NULL );
};

// Function SFXGameContent_Powers.BioWarpScript.OnImpact
// [0x00820802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCasterStability               ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )

bool UBioWarpScript::eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioWarpScript.OnImpact" );

	UBioWarpScript_eventOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.oCaster = oCaster;
	OnImpact_Parms.fCasterStability = fCasterStability;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioWarpScript.StartPhase
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool UBioWarpScript::eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration )
{
	static UFunction* pFnStartPhase = NULL;

	if ( ! pFnStartPhase )
		pFnStartPhase = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioWarpScript.StartPhase" );

	UBioWarpScript_eventStartPhase_Parms StartPhase_Parms;
	StartPhase_Parms.ePhase = ePhase;
	StartPhase_Parms.oCaster = oCaster;
	StartPhase_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnStartPhase, &StartPhase_Parms, NULL );

	return StartPhase_Parms.ReturnValue;
};



class UClass* USFXPower_Singularity_NPC::pClassPointer = NULL;

class UClass* USFXPower_Singularity_NPC::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_Singularity_NPC" );

		return pClassPointer;
	};

// Function SFXGameContent_Powers.SFXPower_Singularity_NPC.GetDamage
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float USFXPower_Singularity_NPC::GetDamage ( )
{
	static UFunction* pFnGetDamage = NULL;

	if ( ! pFnGetDamage )
		pFnGetDamage = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPower_Singularity_NPC.GetDamage" );

	USFXPower_Singularity_NPC_execGetDamage_Parms GetDamage_Parms;

	this->ProcessEvent ( pFnGetDamage, &GetDamage_Parms, NULL );

	return GetDamage_Parms.ReturnValue;
};



class UClass* USFXPower_Singularity::pClassPointer = NULL;

class UClass* USFXPower_Singularity::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_Singularity" );

		return pClassPointer;
	};



class UClass* UBioSingularityScript::pClassPointer = NULL;

class UClass* UBioSingularityScript::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.BioSingularityScript" );

		return pClassPointer;
	};

// Function SFXGameContent_Powers.BioSingularityScript.ShouldUsePower
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Caster                         ( CPF_Parm )
// class AActor*                  Target                         ( CPF_Parm )
// FString                        sOptionalInfo                  ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UBioSingularityScript::ShouldUsePower ( class AActor* Caster, class AActor* Target, FString* sOptionalInfo )
{
	static UFunction* pFnShouldUsePower = NULL;

	if ( ! pFnShouldUsePower )
		pFnShouldUsePower = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioSingularityScript.ShouldUsePower" );

	UBioSingularityScript_execShouldUsePower_Parms ShouldUsePower_Parms;
	ShouldUsePower_Parms.Caster = Caster;
	ShouldUsePower_Parms.Target = Target;

	if ( sOptionalInfo )
		memcpy ( &ShouldUsePower_Parms.sOptionalInfo, sOptionalInfo, 0x10 );

	this->ProcessEvent ( pFnShouldUsePower, &ShouldUsePower_Parms, NULL );

	if ( sOptionalInfo )
		memcpy ( sOptionalInfo, &ShouldUsePower_Parms.sOptionalInfo, 0x10 );

	return ShouldUsePower_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioSingularityScript.OnPowerRankIncreased
// [0x00020002] 
// Parameters infos:

void UBioSingularityScript::OnPowerRankIncreased ( )
{
	static UFunction* pFnOnPowerRankIncreased = NULL;

	if ( ! pFnOnPowerRankIncreased )
		pFnOnPowerRankIncreased = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioSingularityScript.OnPowerRankIncreased" );

	UBioSingularityScript_execOnPowerRankIncreased_Parms OnPowerRankIncreased_Parms;

	this->ProcessEvent ( pFnOnPowerRankIncreased, &OnPowerRankIncreased_Parms, NULL );
};

// Function SFXGameContent_Powers.BioSingularityScript.OnRagdollPhysicsImpact
// [0x00020002] 
// Parameters infos:
// class APawn*                   oPawn                          ( CPF_Parm )
// class AActor*                  oImpactActor                   ( CPF_Parm )
// struct FVector                 vImpactDir                     ( CPF_Parm )

void UBioSingularityScript::OnRagdollPhysicsImpact ( class APawn* oPawn, class AActor* oImpactActor, struct FVector const& vImpactDir )
{
	static UFunction* pFnOnRagdollPhysicsImpact = NULL;

	if ( ! pFnOnRagdollPhysicsImpact )
		pFnOnRagdollPhysicsImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioSingularityScript.OnRagdollPhysicsImpact" );

	UBioSingularityScript_execOnRagdollPhysicsImpact_Parms OnRagdollPhysicsImpact_Parms;
	OnRagdollPhysicsImpact_Parms.oPawn = oPawn;
	OnRagdollPhysicsImpact_Parms.oImpactActor = oImpactActor;
	memcpy ( &OnRagdollPhysicsImpact_Parms.vImpactDir, &vImpactDir, 0xC );

	this->ProcessEvent ( pFnOnRagdollPhysicsImpact, &OnRagdollPhysicsImpact_Parms, NULL );
};

// Function SFXGameContent_Powers.BioSingularityScript.ApplyVFX
// [0x00020002] 
// Parameters infos:
// class AActor*                  oImpacted                      ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

void UBioSingularityScript::ApplyVFX ( class AActor* oImpacted, float fDuration )
{
	static UFunction* pFnApplyVFX = NULL;

	if ( ! pFnApplyVFX )
		pFnApplyVFX = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioSingularityScript.ApplyVFX" );

	UBioSingularityScript_execApplyVFX_Parms ApplyVFX_Parms;
	ApplyVFX_Parms.oImpacted = oImpacted;
	ApplyVFX_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnApplyVFX, &ApplyVFX_Parms, NULL );
};

// Function SFXGameContent_Powers.BioSingularityScript.SpawnSingularity
// [0x00020002] 
// Parameters infos:
// class AActor*                  oCaster                        ( CPF_Parm )
// struct FVector                 Location                       ( CPF_Parm )

void UBioSingularityScript::SpawnSingularity ( class AActor* oCaster, struct FVector const& Location )
{
	static UFunction* pFnSpawnSingularity = NULL;

	if ( ! pFnSpawnSingularity )
		pFnSpawnSingularity = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioSingularityScript.SpawnSingularity" );

	UBioSingularityScript_execSpawnSingularity_Parms SpawnSingularity_Parms;
	SpawnSingularity_Parms.oCaster = oCaster;
	memcpy ( &SpawnSingularity_Parms.Location, &Location, 0xC );

	this->ProcessEvent ( pFnSpawnSingularity, &SpawnSingularity_Parms, NULL );
};

// Function SFXGameContent_Powers.BioSingularityScript.TurnOffSingularity
// [0x00020002] 
// Parameters infos:

void UBioSingularityScript::TurnOffSingularity ( )
{
	static UFunction* pFnTurnOffSingularity = NULL;

	if ( ! pFnTurnOffSingularity )
		pFnTurnOffSingularity = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioSingularityScript.TurnOffSingularity" );

	UBioSingularityScript_execTurnOffSingularity_Parms TurnOffSingularity_Parms;

	this->ProcessEvent ( pFnTurnOffSingularity, &TurnOffSingularity_Parms, NULL );
};

// Function SFXGameContent_Powers.BioSingularityScript.CanPutInSingularity
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oActor                         ( CPF_Parm )

bool UBioSingularityScript::CanPutInSingularity ( class AActor* oActor )
{
	static UFunction* pFnCanPutInSingularity = NULL;

	if ( ! pFnCanPutInSingularity )
		pFnCanPutInSingularity = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioSingularityScript.CanPutInSingularity" );

	UBioSingularityScript_execCanPutInSingularity_Parms CanPutInSingularity_Parms;
	CanPutInSingularity_Parms.oActor = oActor;

	this->ProcessEvent ( pFnCanPutInSingularity, &CanPutInSingularity_Parms, NULL );

	return CanPutInSingularity_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioSingularityScript.ImpactNewTarget
// [0x00C20002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// float                          fEffectDuration                ( CPF_Parm | CPF_OutParm )

bool UBioSingularityScript::ImpactNewTarget ( class AActor* oImpacted, float* fEffectDuration )
{
	static UFunction* pFnImpactNewTarget = NULL;

	if ( ! pFnImpactNewTarget )
		pFnImpactNewTarget = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioSingularityScript.ImpactNewTarget" );

	UBioSingularityScript_execImpactNewTarget_Parms ImpactNewTarget_Parms;
	ImpactNewTarget_Parms.oImpacted = oImpacted;

	if ( fEffectDuration )
		ImpactNewTarget_Parms.fEffectDuration = *fEffectDuration;

	this->ProcessEvent ( pFnImpactNewTarget, &ImpactNewTarget_Parms, NULL );

	if ( fEffectDuration )
		*fEffectDuration = ImpactNewTarget_Parms.fEffectDuration;

	return ImpactNewTarget_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioSingularityScript.Tick
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void UBioSingularityScript::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioSingularityScript.Tick" );

	UBioSingularityScript_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function SFXGameContent_Powers.BioSingularityScript.OnProjectileExploded
// [0x00020002] 
// Parameters infos:
// class AActor*                  oCaster                        ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )
// struct FVector                 Velocity                       ( CPF_Parm )

void UBioSingularityScript::OnProjectileExploded ( class AActor* oCaster, struct FVector const& HitLocation, struct FVector const& HitNormal, struct FVector const& Velocity )
{
	static UFunction* pFnOnProjectileExploded = NULL;

	if ( ! pFnOnProjectileExploded )
		pFnOnProjectileExploded = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioSingularityScript.OnProjectileExploded" );

	UBioSingularityScript_execOnProjectileExploded_Parms OnProjectileExploded_Parms;
	OnProjectileExploded_Parms.oCaster = oCaster;
	memcpy ( &OnProjectileExploded_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &OnProjectileExploded_Parms.HitNormal, &HitNormal, 0xC );
	memcpy ( &OnProjectileExploded_Parms.Velocity, &Velocity, 0xC );

	this->ProcessEvent ( pFnOnProjectileExploded, &OnProjectileExploded_Parms, NULL );
};

// Function SFXGameContent_Powers.BioSingularityScript.StartPhase
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool UBioSingularityScript::eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration )
{
	static UFunction* pFnStartPhase = NULL;

	if ( ! pFnStartPhase )
		pFnStartPhase = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioSingularityScript.StartPhase" );

	UBioSingularityScript_eventStartPhase_Parms StartPhase_Parms;
	StartPhase_Parms.ePhase = ePhase;
	StartPhase_Parms.oCaster = oCaster;
	StartPhase_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnStartPhase, &StartPhase_Parms, NULL );

	return StartPhase_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioSingularityScript.InitializePowerScript
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UBioSingularityScript::eventInitializePowerScript ( )
{
	static UFunction* pFnInitializePowerScript = NULL;

	if ( ! pFnInitializePowerScript )
		pFnInitializePowerScript = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioSingularityScript.InitializePowerScript" );

	UBioSingularityScript_eventInitializePowerScript_Parms InitializePowerScript_Parms;

	this->ProcessEvent ( pFnInitializePowerScript, &InitializePowerScript_Parms, NULL );
};



class UClass* UBioReactionPowerScript::pClassPointer = NULL;

class UClass* UBioReactionPowerScript::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.BioReactionPowerScript" );

		return pClassPointer;
	};

// Function SFXGameContent_Powers.BioReactionPowerScript.GetIncreasedReaction
// [0x00020002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oTarget                        ( CPF_Parm )
// unsigned char                  Reaction                       ( CPF_Parm )

unsigned char UBioReactionPowerScript::GetIncreasedReaction ( class AActor* oTarget, unsigned char Reaction )
{
	static UFunction* pFnGetIncreasedReaction = NULL;

	if ( ! pFnGetIncreasedReaction )
		pFnGetIncreasedReaction = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioReactionPowerScript.GetIncreasedReaction" );

	UBioReactionPowerScript_execGetIncreasedReaction_Parms GetIncreasedReaction_Parms;
	GetIncreasedReaction_Parms.oTarget = oTarget;
	GetIncreasedReaction_Parms.Reaction = Reaction;

	this->ProcessEvent ( pFnGetIncreasedReaction, &GetIncreasedReaction_Parms, NULL );

	return GetIncreasedReaction_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioReactionPowerScript.GetCombatReaction
// [0x00024002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            PowerRank                      ( CPF_Parm )
// class AActor*                  oTarget                        ( CPF_Parm )
// unsigned long                  ReactionStacks                 ( CPF_OptionalParm | CPF_Parm )

unsigned char UBioReactionPowerScript::GetCombatReaction ( int PowerRank, class AActor* oTarget, unsigned long ReactionStacks )
{
	static UFunction* pFnGetCombatReaction = NULL;

	if ( ! pFnGetCombatReaction )
		pFnGetCombatReaction = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioReactionPowerScript.GetCombatReaction" );

	UBioReactionPowerScript_execGetCombatReaction_Parms GetCombatReaction_Parms;
	GetCombatReaction_Parms.PowerRank = PowerRank;
	GetCombatReaction_Parms.oTarget = oTarget;
	GetCombatReaction_Parms.ReactionStacks = ReactionStacks;

	this->ProcessEvent ( pFnGetCombatReaction, &GetCombatReaction_Parms, NULL );

	return GetCombatReaction_Parms.ReturnValue;
};



class UClass* USFXGameEffect_IgnorePawn::pClassPointer = NULL;

class UClass* USFXGameEffect_IgnorePawn::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXGameEffect_IgnorePawn" );

		return pClassPointer;
	};

// Function SFXGameContent_Powers.SFXGameEffect_IgnorePawn.OnRemoved
// [0x00020002] 
// Parameters infos:

void USFXGameEffect_IgnorePawn::OnRemoved ( )
{
	static UFunction* pFnOnRemoved = NULL;

	if ( ! pFnOnRemoved )
		pFnOnRemoved = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXGameEffect_IgnorePawn.OnRemoved" );

	USFXGameEffect_IgnorePawn_execOnRemoved_Parms OnRemoved_Parms;

	this->ProcessEvent ( pFnOnRemoved, &OnRemoved_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXGameEffect_IgnorePawn.OnApplied
// [0x00020002] 
// Parameters infos:

void USFXGameEffect_IgnorePawn::OnApplied ( )
{
	static UFunction* pFnOnApplied = NULL;

	if ( ! pFnOnApplied )
		pFnOnApplied = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXGameEffect_IgnorePawn.OnApplied" );

	USFXGameEffect_IgnorePawn_execOnApplied_Parms OnApplied_Parms;

	this->ProcessEvent ( pFnOnApplied, &OnApplied_Parms, NULL );
};



class UClass* ASFXPawn_EngineerCombatDrone::pClassPointer = NULL;

class UClass* ASFXPawn_EngineerCombatDrone::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPawn_EngineerCombatDrone" );

		return pClassPointer;
	};

// Function SFXGameContent_Powers.SFXPawn_EngineerCombatDrone.PlayDeathVocalization
// [0x00020000] 
// Parameters infos:
// class ABioPawn*                Killer                         ( CPF_Parm )

void ASFXPawn_EngineerCombatDrone::PlayDeathVocalization ( class ABioPawn* Killer )
{
	static UFunction* pFnPlayDeathVocalization = NULL;

	if ( ! pFnPlayDeathVocalization )
		pFnPlayDeathVocalization = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPawn_EngineerCombatDrone.PlayDeathVocalization" );

	ASFXPawn_EngineerCombatDrone_execPlayDeathVocalization_Parms PlayDeathVocalization_Parms;
	PlayDeathVocalization_Parms.Killer = Killer;

	this->ProcessEvent ( pFnPlayDeathVocalization, &PlayDeathVocalization_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXPawn_EngineerCombatDrone.Destroyed
// [0x00820902] ( FUNC_Simulated | FUNC_Event )
// Parameters infos:

void ASFXPawn_EngineerCombatDrone::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPawn_EngineerCombatDrone.Destroyed" );

	ASFXPawn_EngineerCombatDrone_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXPawn_EngineerCombatDrone.Died
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AController*             Killer                         ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

bool ASFXPawn_EngineerCombatDrone::eventDied ( class AController* Killer, class UClass* DamageType, struct FVector const& HitLocation )
{
	static UFunction* pFnDied = NULL;

	if ( ! pFnDied )
		pFnDied = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPawn_EngineerCombatDrone.Died" );

	ASFXPawn_EngineerCombatDrone_eventDied_Parms Died_Parms;
	Died_Parms.Killer = Killer;
	Died_Parms.DamageType = DamageType;
	memcpy ( &Died_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnDied, &Died_Parms, NULL );

	return Died_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPawn_EngineerCombatDrone.SetDroneColor2
// [0x00020002] 
// Parameters infos:
// struct FVector                 NewColor                       ( CPF_Parm )

void ASFXPawn_EngineerCombatDrone::SetDroneColor2 ( struct FVector const& NewColor )
{
	static UFunction* pFnSetDroneColor2 = NULL;

	if ( ! pFnSetDroneColor2 )
		pFnSetDroneColor2 = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPawn_EngineerCombatDrone.SetDroneColor2" );

	ASFXPawn_EngineerCombatDrone_execSetDroneColor2_Parms SetDroneColor2_Parms;
	memcpy ( &SetDroneColor2_Parms.NewColor, &NewColor, 0xC );

	this->ProcessEvent ( pFnSetDroneColor2, &SetDroneColor2_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXPawn_EngineerCombatDrone.SetDroneColor
// [0x00020002] 
// Parameters infos:
// struct FVector                 NewColor                       ( CPF_Parm )

void ASFXPawn_EngineerCombatDrone::SetDroneColor ( struct FVector const& NewColor )
{
	static UFunction* pFnSetDroneColor = NULL;

	if ( ! pFnSetDroneColor )
		pFnSetDroneColor = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPawn_EngineerCombatDrone.SetDroneColor" );

	ASFXPawn_EngineerCombatDrone_execSetDroneColor_Parms SetDroneColor_Parms;
	memcpy ( &SetDroneColor_Parms.NewColor, &NewColor, 0xC );

	this->ProcessEvent ( pFnSetDroneColor, &SetDroneColor_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXPawn_EngineerCombatDrone.PostBeginPlay
// [0x00020002] 
// Parameters infos:

void ASFXPawn_EngineerCombatDrone::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPawn_EngineerCombatDrone.PostBeginPlay" );

	ASFXPawn_EngineerCombatDrone_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXPawn_EngineerCombatDrone.OnDroneKilled
// [0x00120000] 
// Parameters infos:

void ASFXPawn_EngineerCombatDrone::OnDroneKilled ( )
{
	static UFunction* pFnOnDroneKilled = NULL;

	if ( ! pFnOnDroneKilled )
		pFnOnDroneKilled = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPawn_EngineerCombatDrone.OnDroneKilled" );

	ASFXPawn_EngineerCombatDrone_execOnDroneKilled_Parms OnDroneKilled_Parms;

	this->ProcessEvent ( pFnOnDroneKilled, &OnDroneKilled_Parms, NULL );
};



class UClass* USFXPower_CombatDrone::pClassPointer = NULL;

class UClass* USFXPower_CombatDrone::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_CombatDrone" );

		return pClassPointer;
	};

// Function SFXGameContent_Powers.SFXPower_CombatDrone.GetHealthMultiplier
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float USFXPower_CombatDrone::GetHealthMultiplier ( )
{
	static UFunction* pFnGetHealthMultiplier = NULL;

	if ( ! pFnGetHealthMultiplier )
		pFnGetHealthMultiplier = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPower_CombatDrone.GetHealthMultiplier" );

	USFXPower_CombatDrone_execGetHealthMultiplier_Parms GetHealthMultiplier_Parms;

	this->ProcessEvent ( pFnGetHealthMultiplier, &GetHealthMultiplier_Parms, NULL );

	return GetHealthMultiplier_Parms.ReturnValue;
};



class UClass* UBioCombatDroneScript::pClassPointer = NULL;

class UClass* UBioCombatDroneScript::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.BioCombatDroneScript" );

		return pClassPointer;
	};

// Function SFXGameContent_Powers.BioCombatDroneScript.ShouldUsePower
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Caster                         ( CPF_Parm )
// class AActor*                  Target                         ( CPF_Parm )
// FString                        sOptionalInfo                  ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UBioCombatDroneScript::ShouldUsePower ( class AActor* Caster, class AActor* Target, FString* sOptionalInfo )
{
	static UFunction* pFnShouldUsePower = NULL;

	if ( ! pFnShouldUsePower )
		pFnShouldUsePower = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioCombatDroneScript.ShouldUsePower" );

	UBioCombatDroneScript_execShouldUsePower_Parms ShouldUsePower_Parms;
	ShouldUsePower_Parms.Caster = Caster;
	ShouldUsePower_Parms.Target = Target;

	if ( sOptionalInfo )
		memcpy ( &ShouldUsePower_Parms.sOptionalInfo, sOptionalInfo, 0x10 );

	this->ProcessEvent ( pFnShouldUsePower, &ShouldUsePower_Parms, NULL );

	if ( sOptionalInfo )
		memcpy ( sOptionalInfo, &ShouldUsePower_Parms.sOptionalInfo, 0x10 );

	return ShouldUsePower_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioCombatDroneScript.OnDroneKilled
// [0x00020002] 
// Parameters infos:

void UBioCombatDroneScript::OnDroneKilled ( )
{
	static UFunction* pFnOnDroneKilled = NULL;

	if ( ! pFnOnDroneKilled )
		pFnOnDroneKilled = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioCombatDroneScript.OnDroneKilled" );

	UBioCombatDroneScript_execOnDroneKilled_Parms OnDroneKilled_Parms;

	this->ProcessEvent ( pFnOnDroneKilled, &OnDroneKilled_Parms, NULL );
};

// Function SFXGameContent_Powers.BioCombatDroneScript.DespawnDrone
// [0x00020002] 
// Parameters infos:

void UBioCombatDroneScript::DespawnDrone ( )
{
	static UFunction* pFnDespawnDrone = NULL;

	if ( ! pFnDespawnDrone )
		pFnDespawnDrone = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioCombatDroneScript.DespawnDrone" );

	UBioCombatDroneScript_execDespawnDrone_Parms DespawnDrone_Parms;

	this->ProcessEvent ( pFnDespawnDrone, &DespawnDrone_Parms, NULL );
};

// Function SFXGameContent_Powers.BioCombatDroneScript.OnOwnerDied
// [0x00020002] 
// Parameters infos:

void UBioCombatDroneScript::OnOwnerDied ( )
{
	static UFunction* pFnOnOwnerDied = NULL;

	if ( ! pFnOnOwnerDied )
		pFnOnOwnerDied = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioCombatDroneScript.OnOwnerDied" );

	UBioCombatDroneScript_execOnOwnerDied_Parms OnOwnerDied_Parms;

	this->ProcessEvent ( pFnOnOwnerDied, &OnOwnerDied_Parms, NULL );
};

// Function SFXGameContent_Powers.BioCombatDroneScript.OnPowerRankIncreased
// [0x00020002] 
// Parameters infos:

void UBioCombatDroneScript::OnPowerRankIncreased ( )
{
	static UFunction* pFnOnPowerRankIncreased = NULL;

	if ( ! pFnOnPowerRankIncreased )
		pFnOnPowerRankIncreased = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioCombatDroneScript.OnPowerRankIncreased" );

	UBioCombatDroneScript_execOnPowerRankIncreased_Parms OnPowerRankIncreased_Parms;

	this->ProcessEvent ( pFnOnPowerRankIncreased, &OnPowerRankIncreased_Parms, NULL );
};

// Function SFXGameContent_Powers.BioCombatDroneScript.SpawnDrone
// [0x00024002] 
// Parameters infos:
// class ABioPawn*                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioPawn*                oCaster                        ( CPF_Parm )
// class UClass*                  DroneClass                     ( CPF_Parm )
// struct FVector                 Location                       ( CPF_Parm )
// struct FRotator                Rotation                       ( CPF_Parm )
// float                          HealthMultiplier               ( CPF_Parm )
// float                          Lifetime                       ( CPF_Parm )
// unsigned long                  bCustomColor                   ( CPF_Parm )
// struct FVector                 CustomColor                    ( CPF_Parm )
// unsigned long                  bCustomColor2                  ( CPF_Parm )
// struct FVector                 CustomColor2                   ( CPF_Parm )
// class AActor*                  DroneTarget                    ( CPF_OptionalParm | CPF_Parm )

class ABioPawn* UBioCombatDroneScript::SpawnDrone ( class ABioPawn* oCaster, class UClass* DroneClass, struct FVector const& Location, struct FRotator const& Rotation, float HealthMultiplier, float Lifetime, unsigned long bCustomColor, struct FVector const& CustomColor, unsigned long bCustomColor2, struct FVector const& CustomColor2, class AActor* DroneTarget )
{
	static UFunction* pFnSpawnDrone = NULL;

	if ( ! pFnSpawnDrone )
		pFnSpawnDrone = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioCombatDroneScript.SpawnDrone" );

	UBioCombatDroneScript_execSpawnDrone_Parms SpawnDrone_Parms;
	SpawnDrone_Parms.oCaster = oCaster;
	SpawnDrone_Parms.DroneClass = DroneClass;
	memcpy ( &SpawnDrone_Parms.Location, &Location, 0xC );
	memcpy ( &SpawnDrone_Parms.Rotation, &Rotation, 0xC );
	SpawnDrone_Parms.HealthMultiplier = HealthMultiplier;
	SpawnDrone_Parms.Lifetime = Lifetime;
	SpawnDrone_Parms.bCustomColor = bCustomColor;
	memcpy ( &SpawnDrone_Parms.CustomColor, &CustomColor, 0xC );
	SpawnDrone_Parms.bCustomColor2 = bCustomColor2;
	memcpy ( &SpawnDrone_Parms.CustomColor2, &CustomColor2, 0xC );
	SpawnDrone_Parms.DroneTarget = DroneTarget;

	this->ProcessEvent ( pFnSpawnDrone, &SpawnDrone_Parms, NULL );

	return SpawnDrone_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioCombatDroneScript.GetSpawnLocation
// [0x00820002] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FVector UBioCombatDroneScript::GetSpawnLocation ( )
{
	static UFunction* pFnGetSpawnLocation = NULL;

	if ( ! pFnGetSpawnLocation )
		pFnGetSpawnLocation = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioCombatDroneScript.GetSpawnLocation" );

	UBioCombatDroneScript_execGetSpawnLocation_Parms GetSpawnLocation_Parms;

	this->ProcessEvent ( pFnGetSpawnLocation, &GetSpawnLocation_Parms, NULL );

	return GetSpawnLocation_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioCombatDroneScript.GetBackLocation
// [0x00020002] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Target                         ( CPF_Parm )

struct FVector UBioCombatDroneScript::GetBackLocation ( class AActor* Target )
{
	static UFunction* pFnGetBackLocation = NULL;

	if ( ! pFnGetBackLocation )
		pFnGetBackLocation = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioCombatDroneScript.GetBackLocation" );

	UBioCombatDroneScript_execGetBackLocation_Parms GetBackLocation_Parms;
	GetBackLocation_Parms.Target = Target;

	this->ProcessEvent ( pFnGetBackLocation, &GetBackLocation_Parms, NULL );

	return GetBackLocation_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioCombatDroneScript.GetFrontLocation
// [0x00824002] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Target                         ( CPF_Parm )
// float                          YawOffset                      ( CPF_OptionalParm | CPF_Parm )

struct FVector UBioCombatDroneScript::GetFrontLocation ( class AActor* Target, float YawOffset )
{
	static UFunction* pFnGetFrontLocation = NULL;

	if ( ! pFnGetFrontLocation )
		pFnGetFrontLocation = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioCombatDroneScript.GetFrontLocation" );

	UBioCombatDroneScript_execGetFrontLocation_Parms GetFrontLocation_Parms;
	GetFrontLocation_Parms.Target = Target;
	GetFrontLocation_Parms.YawOffset = YawOffset;

	this->ProcessEvent ( pFnGetFrontLocation, &GetFrontLocation_Parms, NULL );

	return GetFrontLocation_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioCombatDroneScript.IsSafeSpawnLocation
// [0x00C20002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 SpawnLocation                  ( CPF_Parm | CPF_OutParm )

bool UBioCombatDroneScript::IsSafeSpawnLocation ( struct FVector* SpawnLocation )
{
	static UFunction* pFnIsSafeSpawnLocation = NULL;

	if ( ! pFnIsSafeSpawnLocation )
		pFnIsSafeSpawnLocation = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioCombatDroneScript.IsSafeSpawnLocation" );

	UBioCombatDroneScript_execIsSafeSpawnLocation_Parms IsSafeSpawnLocation_Parms;

	if ( SpawnLocation )
		memcpy ( &IsSafeSpawnLocation_Parms.SpawnLocation, SpawnLocation, 0xC );

	this->ProcessEvent ( pFnIsSafeSpawnLocation, &IsSafeSpawnLocation_Parms, NULL );

	if ( SpawnLocation )
		memcpy ( SpawnLocation, &IsSafeSpawnLocation_Parms.SpawnLocation, 0xC );

	return IsSafeSpawnLocation_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioCombatDroneScript.IsDroneAlive
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UBioCombatDroneScript::IsDroneAlive ( )
{
	static UFunction* pFnIsDroneAlive = NULL;

	if ( ! pFnIsDroneAlive )
		pFnIsDroneAlive = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioCombatDroneScript.IsDroneAlive" );

	UBioCombatDroneScript_execIsDroneAlive_Parms IsDroneAlive_Parms;

	this->ProcessEvent ( pFnIsDroneAlive, &IsDroneAlive_Parms, NULL );

	return IsDroneAlive_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioCombatDroneScript.StartPhase
// [0x00820802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool UBioCombatDroneScript::eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration )
{
	static UFunction* pFnStartPhase = NULL;

	if ( ! pFnStartPhase )
		pFnStartPhase = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioCombatDroneScript.StartPhase" );

	UBioCombatDroneScript_eventStartPhase_Parms StartPhase_Parms;
	StartPhase_Parms.ePhase = ePhase;
	StartPhase_Parms.oCaster = oCaster;
	StartPhase_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnStartPhase, &StartPhase_Parms, NULL );

	return StartPhase_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioCombatDroneScript.CanStartPower
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )

bool UBioCombatDroneScript::eventCanStartPower ( class AActor* oCaster )
{
	static UFunction* pFnCanStartPower = NULL;

	if ( ! pFnCanStartPower )
		pFnCanStartPower = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioCombatDroneScript.CanStartPower" );

	UBioCombatDroneScript_eventCanStartPower_Parms CanStartPower_Parms;
	CanStartPower_Parms.oCaster = oCaster;

	this->ProcessEvent ( pFnCanStartPower, &CanStartPower_Parms, NULL );

	return CanStartPower_Parms.ReturnValue;
};



class UClass* USFXPower_TaliPassive_Evolved2::pClassPointer = NULL;

class UClass* USFXPower_TaliPassive_Evolved2::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_TaliPassive_Evolved2" );

		return pClassPointer;
	};



class UClass* USFXPower_TaliPassive_Evolved1::pClassPointer = NULL;

class UClass* USFXPower_TaliPassive_Evolved1::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_TaliPassive_Evolved1" );

		return pClassPointer;
	};



class UClass* USFXPowerScript_HenchmanPassive::pClassPointer = NULL;

class UClass* USFXPowerScript_HenchmanPassive::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPowerScript_HenchmanPassive" );

		return pClassPointer;
	};

// Function SFXGameContent_Powers.SFXPowerScript_HenchmanPassive.ApplyGlobalBonus
// [0x00020002] 
// Parameters infos:

void USFXPowerScript_HenchmanPassive::ApplyGlobalBonus ( )
{
	static UFunction* pFnApplyGlobalBonus = NULL;

	if ( ! pFnApplyGlobalBonus )
		pFnApplyGlobalBonus = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPowerScript_HenchmanPassive.ApplyGlobalBonus" );

	USFXPowerScript_HenchmanPassive_execApplyGlobalBonus_Parms ApplyGlobalBonus_Parms;

	this->ProcessEvent ( pFnApplyGlobalBonus, &ApplyGlobalBonus_Parms, NULL );
};



class UClass* USFXPowerScript_TaliPassive::pClassPointer = NULL;

class UClass* USFXPowerScript_TaliPassive::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPowerScript_TaliPassive" );

		return pClassPointer;
	};

// Function SFXGameContent_Powers.SFXPowerScript_TaliPassive.ApplyGlobalBonus
// [0x00020002] 
// Parameters infos:

void USFXPowerScript_TaliPassive::ApplyGlobalBonus ( )
{
	static UFunction* pFnApplyGlobalBonus = NULL;

	if ( ! pFnApplyGlobalBonus )
		pFnApplyGlobalBonus = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPowerScript_TaliPassive.ApplyGlobalBonus" );

	USFXPowerScript_TaliPassive_execApplyGlobalBonus_Parms ApplyGlobalBonus_Parms;

	this->ProcessEvent ( pFnApplyGlobalBonus, &ApplyGlobalBonus_Parms, NULL );
};



class UClass* USFXPower_TaliPassive::pClassPointer = NULL;

class UClass* USFXPower_TaliPassive::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_TaliPassive" );

		return pClassPointer;
	};



class UClass* USFXPower_ShieldJack_Evolved2::pClassPointer = NULL;

class UClass* USFXPower_ShieldJack_Evolved2::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_ShieldJack_Evolved2" );

		return pClassPointer;
	};



class UClass* USFXPower_ShieldJack_Evolved1::pClassPointer = NULL;

class UClass* USFXPower_ShieldJack_Evolved1::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_ShieldJack_Evolved1" );

		return pClassPointer;
	};



class UClass* USFXPower_HenchmanPassive::pClassPointer = NULL;

class UClass* USFXPower_HenchmanPassive::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_HenchmanPassive" );

		return pClassPointer;
	};



class UClass* USFXPower_CombatDrone_Tech_Hench::pClassPointer = NULL;

class UClass* USFXPower_CombatDrone_Tech_Hench::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_CombatDrone_Tech_Hench" );

		return pClassPointer;
	};



class UClass* USFXPower_CombatDrone_Tech_Tali::pClassPointer = NULL;

class UClass* USFXPower_CombatDrone_Tech_Tali::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_CombatDrone_Tech_Tali" );

		return pClassPointer;
	};



class UClass* USFXPower_CombatDrone_Rocket_Hench::pClassPointer = NULL;

class UClass* USFXPower_CombatDrone_Rocket_Hench::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_CombatDrone_Rocket_Hench" );

		return pClassPointer;
	};



class UClass* USFXPower_CombatDrone_Rocket_Tali::pClassPointer = NULL;

class UClass* USFXPower_CombatDrone_Rocket_Tali::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_CombatDrone_Rocket_Tali" );

		return pClassPointer;
	};



class UClass* USFXPower_CombatDrone_Tali::pClassPointer = NULL;

class UClass* USFXPower_CombatDrone_Tali::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_CombatDrone_Tali" );

		return pClassPointer;
	};



class UClass* USFXPower_AIHacking_Tali::pClassPointer = NULL;

class UClass* USFXPower_AIHacking_Tali::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_AIHacking_Tali" );

		return pClassPointer;
	};



class UClass* USFXPower_AIHacking_Radius_Hench::pClassPointer = NULL;

class UClass* USFXPower_AIHacking_Radius_Hench::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_AIHacking_Radius_Hench" );

		return pClassPointer;
	};



class UClass* USFXPower_AIHacking_Heavy_Hench::pClassPointer = NULL;

class UClass* USFXPower_AIHacking_Heavy_Hench::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_AIHacking_Heavy_Hench" );

		return pClassPointer;
	};



class UClass* USFXPower_AIHacking_Radius::pClassPointer = NULL;

class UClass* USFXPower_AIHacking_Radius::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_AIHacking_Radius" );

		return pClassPointer;
	};



class UClass* USFXPower_AIHacking_Heavy::pClassPointer = NULL;

class UClass* USFXPower_AIHacking_Heavy::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_AIHacking_Heavy" );

		return pClassPointer;
	};



class UClass* ASFXPawn_EngineerTechDrone_Tali::pClassPointer = NULL;

class UClass* ASFXPawn_EngineerTechDrone_Tali::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPawn_EngineerTechDrone_Tali" );

		return pClassPointer;
	};



class UClass* ASFXPawn_EngineerRocketDrone_Tali::pClassPointer = NULL;

class UClass* ASFXPawn_EngineerRocketDrone_Tali::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPawn_EngineerRocketDrone_Tali" );

		return pClassPointer;
	};



class UClass* ASFXPawn_EngineerCombatDrone_Tali::pClassPointer = NULL;

class UClass* ASFXPawn_EngineerCombatDrone_Tali::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPawn_EngineerCombatDrone_Tali" );

		return pClassPointer;
	};



class UClass* USFXDamageType_ImprovedShieldJack::pClassPointer = NULL;

class UClass* USFXDamageType_ImprovedShieldJack::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXDamageType_ImprovedShieldJack" );

		return pClassPointer;
	};



class UClass* USFXPower_ShieldJack::pClassPointer = NULL;

class UClass* USFXPower_ShieldJack::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_ShieldJack" );

		return pClassPointer;
	};



class UClass* UBioShieldJackScript::pClassPointer = NULL;

class UClass* UBioShieldJackScript::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.BioShieldJackScript" );

		return pClassPointer;
	};

// Function SFXGameContent_Powers.BioShieldJackScript.ShouldUsePower
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Caster                         ( CPF_Parm )
// class AActor*                  Target                         ( CPF_Parm )
// FString                        sOptionalInfo                  ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UBioShieldJackScript::ShouldUsePower ( class AActor* Caster, class AActor* Target, FString* sOptionalInfo )
{
	static UFunction* pFnShouldUsePower = NULL;

	if ( ! pFnShouldUsePower )
		pFnShouldUsePower = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioShieldJackScript.ShouldUsePower" );

	UBioShieldJackScript_execShouldUsePower_Parms ShouldUsePower_Parms;
	ShouldUsePower_Parms.Caster = Caster;
	ShouldUsePower_Parms.Target = Target;

	if ( sOptionalInfo )
		memcpy ( &ShouldUsePower_Parms.sOptionalInfo, sOptionalInfo, 0x10 );

	this->ProcessEvent ( pFnShouldUsePower, &ShouldUsePower_Parms, NULL );

	if ( sOptionalInfo )
		memcpy ( sOptionalInfo, &ShouldUsePower_Parms.sOptionalInfo, 0x10 );

	return ShouldUsePower_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioShieldJackScript.GetCurrentEnergyShields
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioPawn*                oPawn                          ( CPF_Parm )

float UBioShieldJackScript::GetCurrentEnergyShields ( class ABioPawn* oPawn )
{
	static UFunction* pFnGetCurrentEnergyShields = NULL;

	if ( ! pFnGetCurrentEnergyShields )
		pFnGetCurrentEnergyShields = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioShieldJackScript.GetCurrentEnergyShields" );

	UBioShieldJackScript_execGetCurrentEnergyShields_Parms GetCurrentEnergyShields_Parms;
	GetCurrentEnergyShields_Parms.oPawn = oPawn;

	this->ProcessEvent ( pFnGetCurrentEnergyShields, &GetCurrentEnergyShields_Parms, NULL );

	return GetCurrentEnergyShields_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioShieldJackScript.SpawnImpactVFX
// [0x00020002] 
// Parameters infos:
// struct FVector                 Location                       ( CPF_Parm )
// class UParticleSystem*         PS                             ( CPF_Parm )

void UBioShieldJackScript::SpawnImpactVFX ( struct FVector const& Location, class UParticleSystem* PS )
{
	static UFunction* pFnSpawnImpactVFX = NULL;

	if ( ! pFnSpawnImpactVFX )
		pFnSpawnImpactVFX = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioShieldJackScript.SpawnImpactVFX" );

	UBioShieldJackScript_execSpawnImpactVFX_Parms SpawnImpactVFX_Parms;
	memcpy ( &SpawnImpactVFX_Parms.Location, &Location, 0xC );
	SpawnImpactVFX_Parms.PS = PS;

	this->ProcessEvent ( pFnSpawnImpactVFX, &SpawnImpactVFX_Parms, NULL );
};

// Function SFXGameContent_Powers.BioShieldJackScript.OnImpact
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCasterStability               ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )

bool UBioShieldJackScript::eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioShieldJackScript.OnImpact" );

	UBioShieldJackScript_eventOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.oCaster = oCaster;
	OnImpact_Parms.fCasterStability = fCasterStability;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioShieldJackScript.StartPhase
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool UBioShieldJackScript::eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration )
{
	static UFunction* pFnStartPhase = NULL;

	if ( ! pFnStartPhase )
		pFnStartPhase = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioShieldJackScript.StartPhase" );

	UBioShieldJackScript_eventStartPhase_Parms StartPhase_Parms;
	StartPhase_Parms.ePhase = ePhase;
	StartPhase_Parms.oCaster = oCaster;
	StartPhase_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnStartPhase, &StartPhase_Parms, NULL );

	return StartPhase_Parms.ReturnValue;
};



class UClass* USFXGameEffect_HenchmenIgnorePawn::pClassPointer = NULL;

class UClass* USFXGameEffect_HenchmenIgnorePawn::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXGameEffect_HenchmenIgnorePawn" );

		return pClassPointer;
	};

// Function SFXGameContent_Powers.SFXGameEffect_HenchmenIgnorePawn.OnRemoved
// [0x00020002] 
// Parameters infos:

void USFXGameEffect_HenchmenIgnorePawn::OnRemoved ( )
{
	static UFunction* pFnOnRemoved = NULL;

	if ( ! pFnOnRemoved )
		pFnOnRemoved = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXGameEffect_HenchmenIgnorePawn.OnRemoved" );

	USFXGameEffect_HenchmenIgnorePawn_execOnRemoved_Parms OnRemoved_Parms;

	this->ProcessEvent ( pFnOnRemoved, &OnRemoved_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXGameEffect_HenchmenIgnorePawn.OnApplied
// [0x00020002] 
// Parameters infos:

void USFXGameEffect_HenchmenIgnorePawn::OnApplied ( )
{
	static UFunction* pFnOnApplied = NULL;

	if ( ! pFnOnApplied )
		pFnOnApplied = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXGameEffect_HenchmenIgnorePawn.OnApplied" );

	USFXGameEffect_HenchmenIgnorePawn_execOnApplied_Parms OnApplied_Parms;

	this->ProcessEvent ( pFnOnApplied, &OnApplied_Parms, NULL );
};



class UClass* USFXPower_AIHacking::pClassPointer = NULL;

class UClass* USFXPower_AIHacking::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_AIHacking" );

		return pClassPointer;
	};



class UClass* UBioHackingScript::pClassPointer = NULL;

class UClass* UBioHackingScript::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.BioHackingScript" );

		return pClassPointer;
	};

// Function SFXGameContent_Powers.BioHackingScript.ShouldUsePower
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Caster                         ( CPF_Parm )
// class AActor*                  Target                         ( CPF_Parm )
// FString                        sOptionalInfo                  ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UBioHackingScript::ShouldUsePower ( class AActor* Caster, class AActor* Target, FString* sOptionalInfo )
{
	static UFunction* pFnShouldUsePower = NULL;

	if ( ! pFnShouldUsePower )
		pFnShouldUsePower = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioHackingScript.ShouldUsePower" );

	UBioHackingScript_execShouldUsePower_Parms ShouldUsePower_Parms;
	ShouldUsePower_Parms.Caster = Caster;
	ShouldUsePower_Parms.Target = Target;

	if ( sOptionalInfo )
		memcpy ( &ShouldUsePower_Parms.sOptionalInfo, sOptionalInfo, 0x10 );

	this->ProcessEvent ( pFnShouldUsePower, &ShouldUsePower_Parms, NULL );

	if ( sOptionalInfo )
		memcpy ( sOptionalInfo, &ShouldUsePower_Parms.sOptionalInfo, 0x10 );

	return ShouldUsePower_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioHackingScript.IsHacked
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioPawn*                oPawn                          ( CPF_Parm )

bool UBioHackingScript::IsHacked ( class ABioPawn* oPawn )
{
	static UFunction* pFnIsHacked = NULL;

	if ( ! pFnIsHacked )
		pFnIsHacked = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioHackingScript.IsHacked" );

	UBioHackingScript_execIsHacked_Parms IsHacked_Parms;
	IsHacked_Parms.oPawn = oPawn;

	this->ProcessEvent ( pFnIsHacked, &IsHacked_Parms, NULL );

	return IsHacked_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioHackingScript.RemoveWeakerHack
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioPawn*                oPawn                          ( CPF_Parm )
// float                          fNewDuration                   ( CPF_Parm )

bool UBioHackingScript::RemoveWeakerHack ( class ABioPawn* oPawn, float fNewDuration )
{
	static UFunction* pFnRemoveWeakerHack = NULL;

	if ( ! pFnRemoveWeakerHack )
		pFnRemoveWeakerHack = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioHackingScript.RemoveWeakerHack" );

	UBioHackingScript_execRemoveWeakerHack_Parms RemoveWeakerHack_Parms;
	RemoveWeakerHack_Parms.oPawn = oPawn;
	RemoveWeakerHack_Parms.fNewDuration = fNewDuration;

	this->ProcessEvent ( pFnRemoveWeakerHack, &RemoveWeakerHack_Parms, NULL );

	return RemoveWeakerHack_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioHackingScript.UnHackPreviousTargets
// [0x00020002] 
// Parameters infos:
// class AActor*                  oCaster                        ( CPF_Parm )

void UBioHackingScript::UnHackPreviousTargets ( class AActor* oCaster )
{
	static UFunction* pFnUnHackPreviousTargets = NULL;

	if ( ! pFnUnHackPreviousTargets )
		pFnUnHackPreviousTargets = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioHackingScript.UnHackPreviousTargets" );

	UBioHackingScript_execUnHackPreviousTargets_Parms UnHackPreviousTargets_Parms;
	UnHackPreviousTargets_Parms.oCaster = oCaster;

	this->ProcessEvent ( pFnUnHackPreviousTargets, &UnHackPreviousTargets_Parms, NULL );
};

// Function SFXGameContent_Powers.BioHackingScript.OnImpact
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCasterStability               ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )

bool UBioHackingScript::eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioHackingScript.OnImpact" );

	UBioHackingScript_eventOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.oCaster = oCaster;
	OnImpact_Parms.fCasterStability = fCasterStability;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioHackingScript.StartPhase
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool UBioHackingScript::eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration )
{
	static UFunction* pFnStartPhase = NULL;

	if ( ! pFnStartPhase )
		pFnStartPhase = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioHackingScript.StartPhase" );

	UBioHackingScript_eventStartPhase_Parms StartPhase_Parms;
	StartPhase_Parms.ePhase = ePhase;
	StartPhase_Parms.oCaster = oCaster;
	StartPhase_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnStartPhase, &StartPhase_Parms, NULL );

	return StartPhase_Parms.ReturnValue;
};



class UClass* UBioWeaponPowerScript::pClassPointer = NULL;

class UClass* UBioWeaponPowerScript::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.BioWeaponPowerScript" );

		return pClassPointer;
	};

// Function SFXGameContent_Powers.BioWeaponPowerScript.ShouldUsePower
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Caster                         ( CPF_Parm )
// class AActor*                  Target                         ( CPF_Parm )
// FString                        sOptionalInfo                  ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UBioWeaponPowerScript::ShouldUsePower ( class AActor* Caster, class AActor* Target, FString* sOptionalInfo )
{
	static UFunction* pFnShouldUsePower = NULL;

	if ( ! pFnShouldUsePower )
		pFnShouldUsePower = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioWeaponPowerScript.ShouldUsePower" );

	UBioWeaponPowerScript_execShouldUsePower_Parms ShouldUsePower_Parms;
	ShouldUsePower_Parms.Caster = Caster;
	ShouldUsePower_Parms.Target = Target;

	if ( sOptionalInfo )
		memcpy ( &ShouldUsePower_Parms.sOptionalInfo, sOptionalInfo, 0x10 );

	this->ProcessEvent ( pFnShouldUsePower, &ShouldUsePower_Parms, NULL );

	if ( sOptionalInfo )
		memcpy ( sOptionalInfo, &ShouldUsePower_Parms.sOptionalInfo, 0x10 );

	return ShouldUsePower_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioWeaponPowerScript.ApplyPowerEffects
// [0x00020000] 
// Parameters infos:
// class ABioPawn*                oPawn                          ( CPF_Parm )
// class ASFXWeapon*              oWeapon                        ( CPF_Parm )

void UBioWeaponPowerScript::ApplyPowerEffects ( class ABioPawn* oPawn, class ASFXWeapon* oWeapon )
{
	static UFunction* pFnApplyPowerEffects = NULL;

	if ( ! pFnApplyPowerEffects )
		pFnApplyPowerEffects = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioWeaponPowerScript.ApplyPowerEffects" );

	UBioWeaponPowerScript_execApplyPowerEffects_Parms ApplyPowerEffects_Parms;
	ApplyPowerEffects_Parms.oPawn = oPawn;
	ApplyPowerEffects_Parms.oWeapon = oWeapon;

	this->ProcessEvent ( pFnApplyPowerEffects, &ApplyPowerEffects_Parms, NULL );
};

// Function SFXGameContent_Powers.BioWeaponPowerScript.SetWeaponPower
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioPawn*                oPawn                          ( CPF_Parm )
// class ASFXWeapon*              oWeapon                        ( CPF_Parm )
// unsigned long                  bOverrideCurrentPower          ( CPF_Parm )

bool UBioWeaponPowerScript::SetWeaponPower ( class ABioPawn* oPawn, class ASFXWeapon* oWeapon, unsigned long bOverrideCurrentPower )
{
	static UFunction* pFnSetWeaponPower = NULL;

	if ( ! pFnSetWeaponPower )
		pFnSetWeaponPower = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioWeaponPowerScript.SetWeaponPower" );

	UBioWeaponPowerScript_execSetWeaponPower_Parms SetWeaponPower_Parms;
	SetWeaponPower_Parms.oPawn = oPawn;
	SetWeaponPower_Parms.oWeapon = oWeapon;
	SetWeaponPower_Parms.bOverrideCurrentPower = bOverrideCurrentPower;

	this->ProcessEvent ( pFnSetWeaponPower, &SetWeaponPower_Parms, NULL );

	return SetWeaponPower_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioWeaponPowerScript.ReloadAmmoPower
// [0x00020002] 
// Parameters infos:
// class ABioPawn*                Target                         ( CPF_Parm )
// class ASFXWeapon*              Weapon                         ( CPF_Parm )

void UBioWeaponPowerScript::ReloadAmmoPower ( class ABioPawn* Target, class ASFXWeapon* Weapon )
{
	static UFunction* pFnReloadAmmoPower = NULL;

	if ( ! pFnReloadAmmoPower )
		pFnReloadAmmoPower = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioWeaponPowerScript.ReloadAmmoPower" );

	UBioWeaponPowerScript_execReloadAmmoPower_Parms ReloadAmmoPower_Parms;
	ReloadAmmoPower_Parms.Target = Target;
	ReloadAmmoPower_Parms.Weapon = Weapon;

	this->ProcessEvent ( pFnReloadAmmoPower, &ReloadAmmoPower_Parms, NULL );
};

// Function SFXGameContent_Powers.BioWeaponPowerScript.StartPhase
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool UBioWeaponPowerScript::eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration )
{
	static UFunction* pFnStartPhase = NULL;

	if ( ! pFnStartPhase )
		pFnStartPhase = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioWeaponPowerScript.StartPhase" );

	UBioWeaponPowerScript_eventStartPhase_Parms StartPhase_Parms;
	StartPhase_Parms.ePhase = ePhase;
	StartPhase_Parms.oCaster = oCaster;
	StartPhase_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnStartPhase, &StartPhase_Parms, NULL );

	return StartPhase_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioWeaponPowerScript.ApplyToSquadMembers
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UBioWeaponPowerScript::ApplyToSquadMembers ( )
{
	static UFunction* pFnApplyToSquadMembers = NULL;

	if ( ! pFnApplyToSquadMembers )
		pFnApplyToSquadMembers = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioWeaponPowerScript.ApplyToSquadMembers" );

	UBioWeaponPowerScript_execApplyToSquadMembers_Parms ApplyToSquadMembers_Parms;

	this->ProcessEvent ( pFnApplyToSquadMembers, &ApplyToSquadMembers_Parms, NULL );

	return ApplyToSquadMembers_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioWeaponPowerScript.GetDuration
// [0x00020102] ( FUNC_Simulated )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float UBioWeaponPowerScript::GetDuration ( )
{
	static UFunction* pFnGetDuration = NULL;

	if ( ! pFnGetDuration )
		pFnGetDuration = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioWeaponPowerScript.GetDuration" );

	UBioWeaponPowerScript_execGetDuration_Parms GetDuration_Parms;

	this->ProcessEvent ( pFnGetDuration, &GetDuration_Parms, NULL );

	return GetDuration_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioWeaponPowerScript.GetElapsedTime
// [0x00020102] ( FUNC_Simulated )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float UBioWeaponPowerScript::GetElapsedTime ( )
{
	static UFunction* pFnGetElapsedTime = NULL;

	if ( ! pFnGetElapsedTime )
		pFnGetElapsedTime = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioWeaponPowerScript.GetElapsedTime" );

	UBioWeaponPowerScript_execGetElapsedTime_Parms GetElapsedTime_Parms;

	this->ProcessEvent ( pFnGetElapsedTime, &GetElapsedTime_Parms, NULL );

	return GetElapsedTime_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioWeaponPowerScript.CanStartPower
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )

bool UBioWeaponPowerScript::eventCanStartPower ( class AActor* oCaster )
{
	static UFunction* pFnCanStartPower = NULL;

	if ( ! pFnCanStartPower )
		pFnCanStartPower = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioWeaponPowerScript.CanStartPower" );

	UBioWeaponPowerScript_eventCanStartPower_Parms CanStartPower_Parms;
	CanStartPower_Parms.oCaster = oCaster;

	this->ProcessEvent ( pFnCanStartPower, &CanStartPower_Parms, NULL );

	return CanStartPower_Parms.ReturnValue;
};



class UClass* USFXGameEffect_AmmoPower::pClassPointer = NULL;

class UClass* USFXGameEffect_AmmoPower::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXGameEffect_AmmoPower" );

		return pClassPointer;
	};

// Function SFXGameContent_Powers.SFXGameEffect_AmmoPower.RemoveWeaponHologram
// [0x00020002] 
// Parameters infos:

void USFXGameEffect_AmmoPower::RemoveWeaponHologram ( )
{
	static UFunction* pFnRemoveWeaponHologram = NULL;

	if ( ! pFnRemoveWeaponHologram )
		pFnRemoveWeaponHologram = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXGameEffect_AmmoPower.RemoveWeaponHologram" );

	USFXGameEffect_AmmoPower_execRemoveWeaponHologram_Parms RemoveWeaponHologram_Parms;

	this->ProcessEvent ( pFnRemoveWeaponHologram, &RemoveWeaponHologram_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXGameEffect_AmmoPower.EnableWeaponHologram
// [0x00020002] 
// Parameters infos:

void USFXGameEffect_AmmoPower::EnableWeaponHologram ( )
{
	static UFunction* pFnEnableWeaponHologram = NULL;

	if ( ! pFnEnableWeaponHologram )
		pFnEnableWeaponHologram = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXGameEffect_AmmoPower.EnableWeaponHologram" );

	USFXGameEffect_AmmoPower_execEnableWeaponHologram_Parms EnableWeaponHologram_Parms;

	this->ProcessEvent ( pFnEnableWeaponHologram, &EnableWeaponHologram_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXGameEffect_AmmoPower.OnWeaponUnequip
// [0x00020002] 
// Parameters infos:
// class ASFXWeapon*              Weapon                         ( CPF_Parm )

void USFXGameEffect_AmmoPower::OnWeaponUnequip ( class ASFXWeapon* Weapon )
{
	static UFunction* pFnOnWeaponUnequip = NULL;

	if ( ! pFnOnWeaponUnequip )
		pFnOnWeaponUnequip = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXGameEffect_AmmoPower.OnWeaponUnequip" );

	USFXGameEffect_AmmoPower_execOnWeaponUnequip_Parms OnWeaponUnequip_Parms;
	OnWeaponUnequip_Parms.Weapon = Weapon;

	this->ProcessEvent ( pFnOnWeaponUnequip, &OnWeaponUnequip_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXGameEffect_AmmoPower.OnWeaponEquip
// [0x00020002] 
// Parameters infos:
// class ASFXWeapon*              Weapon                         ( CPF_Parm )

void USFXGameEffect_AmmoPower::OnWeaponEquip ( class ASFXWeapon* Weapon )
{
	static UFunction* pFnOnWeaponEquip = NULL;

	if ( ! pFnOnWeaponEquip )
		pFnOnWeaponEquip = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXGameEffect_AmmoPower.OnWeaponEquip" );

	USFXGameEffect_AmmoPower_execOnWeaponEquip_Parms OnWeaponEquip_Parms;
	OnWeaponEquip_Parms.Weapon = Weapon;

	this->ProcessEvent ( pFnOnWeaponEquip, &OnWeaponEquip_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXGameEffect_AmmoPower.OnWeaponReload
// [0x00020000] 
// Parameters infos:
// class ASFXWeapon*              Weapon                         ( CPF_Parm )

void USFXGameEffect_AmmoPower::OnWeaponReload ( class ASFXWeapon* Weapon )
{
	static UFunction* pFnOnWeaponReload = NULL;

	if ( ! pFnOnWeaponReload )
		pFnOnWeaponReload = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXGameEffect_AmmoPower.OnWeaponReload" );

	USFXGameEffect_AmmoPower_execOnWeaponReload_Parms OnWeaponReload_Parms;
	OnWeaponReload_Parms.Weapon = Weapon;

	this->ProcessEvent ( pFnOnWeaponReload, &OnWeaponReload_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXGameEffect_AmmoPower.GetDamageVocProbabilityMod
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float USFXGameEffect_AmmoPower::GetDamageVocProbabilityMod ( )
{
	static UFunction* pFnGetDamageVocProbabilityMod = NULL;

	if ( ! pFnGetDamageVocProbabilityMod )
		pFnGetDamageVocProbabilityMod = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXGameEffect_AmmoPower.GetDamageVocProbabilityMod" );

	USFXGameEffect_AmmoPower_execGetDamageVocProbabilityMod_Parms GetDamageVocProbabilityMod_Parms;

	this->ProcessEvent ( pFnGetDamageVocProbabilityMod, &GetDamageVocProbabilityMod_Parms, NULL );

	return GetDamageVocProbabilityMod_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXGameEffect_AmmoPower.OnWeaponImpact
// [0x00020002] 
// Parameters infos:
// class ASFXWeapon*              Weapon                         ( CPF_Parm )
// struct FImpactInfo             Impact                         ( CPF_Parm )

void USFXGameEffect_AmmoPower::OnWeaponImpact ( class ASFXWeapon* Weapon, struct FImpactInfo const& Impact )
{
	static UFunction* pFnOnWeaponImpact = NULL;

	if ( ! pFnOnWeaponImpact )
		pFnOnWeaponImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXGameEffect_AmmoPower.OnWeaponImpact" );

	USFXGameEffect_AmmoPower_execOnWeaponImpact_Parms OnWeaponImpact_Parms;
	OnWeaponImpact_Parms.Weapon = Weapon;
	memcpy ( &OnWeaponImpact_Parms.Impact, &Impact, 0x60 );

	this->ProcessEvent ( pFnOnWeaponImpact, &OnWeaponImpact_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXGameEffect_AmmoPower.OnRemoved
// [0x00020002] 
// Parameters infos:

void USFXGameEffect_AmmoPower::OnRemoved ( )
{
	static UFunction* pFnOnRemoved = NULL;

	if ( ! pFnOnRemoved )
		pFnOnRemoved = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXGameEffect_AmmoPower.OnRemoved" );

	USFXGameEffect_AmmoPower_execOnRemoved_Parms OnRemoved_Parms;

	this->ProcessEvent ( pFnOnRemoved, &OnRemoved_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXGameEffect_AmmoPower.OnApplied
// [0x00020002] 
// Parameters infos:

void USFXGameEffect_AmmoPower::OnApplied ( )
{
	static UFunction* pFnOnApplied = NULL;

	if ( ! pFnOnApplied )
		pFnOnApplied = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXGameEffect_AmmoPower.OnApplied" );

	USFXGameEffect_AmmoPower_execOnApplied_Parms OnApplied_Parms;

	this->ProcessEvent ( pFnOnApplied, &OnApplied_Parms, NULL );
};



class UClass* UBioCarnageScript::pClassPointer = NULL;

class UClass* UBioCarnageScript::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.BioCarnageScript" );

		return pClassPointer;
	};

// Function SFXGameContent_Powers.BioCarnageScript.ApplyPowerEffects
// [0x00020002] 
// Parameters infos:
// class ABioPawn*                oPawn                          ( CPF_Parm )
// class ASFXWeapon*              oWeapon                        ( CPF_Parm )

void UBioCarnageScript::ApplyPowerEffects ( class ABioPawn* oPawn, class ASFXWeapon* oWeapon )
{
	static UFunction* pFnApplyPowerEffects = NULL;

	if ( ! pFnApplyPowerEffects )
		pFnApplyPowerEffects = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioCarnageScript.ApplyPowerEffects" );

	UBioCarnageScript_execApplyPowerEffects_Parms ApplyPowerEffects_Parms;
	ApplyPowerEffects_Parms.oPawn = oPawn;
	ApplyPowerEffects_Parms.oWeapon = oWeapon;

	this->ProcessEvent ( pFnApplyPowerEffects, &ApplyPowerEffects_Parms, NULL );
};

// Function SFXGameContent_Powers.BioCarnageScript.OnImpact
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCasterStability               ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )

bool UBioCarnageScript::eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioCarnageScript.OnImpact" );

	UBioCarnageScript_eventOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.oCaster = oCaster;
	OnImpact_Parms.fCasterStability = fCasterStability;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioCarnageScript.StartPhase
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool UBioCarnageScript::eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration )
{
	static UFunction* pFnStartPhase = NULL;

	if ( ! pFnStartPhase )
		pFnStartPhase = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioCarnageScript.StartPhase" );

	UBioCarnageScript_eventStartPhase_Parms StartPhase_Parms;
	StartPhase_Parms.ePhase = ePhase;
	StartPhase_Parms.oCaster = oCaster;
	StartPhase_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnStartPhase, &StartPhase_Parms, NULL );

	return StartPhase_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioCarnageScript.ApplyToSquadMembers
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UBioCarnageScript::ApplyToSquadMembers ( )
{
	static UFunction* pFnApplyToSquadMembers = NULL;

	if ( ! pFnApplyToSquadMembers )
		pFnApplyToSquadMembers = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioCarnageScript.ApplyToSquadMembers" );

	UBioCarnageScript_execApplyToSquadMembers_Parms ApplyToSquadMembers_Parms;

	this->ProcessEvent ( pFnApplyToSquadMembers, &ApplyToSquadMembers_Parms, NULL );

	return ApplyToSquadMembers_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioCarnageScript.InitializePowerScript
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UBioCarnageScript::eventInitializePowerScript ( )
{
	static UFunction* pFnInitializePowerScript = NULL;

	if ( ! pFnInitializePowerScript )
		pFnInitializePowerScript = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioCarnageScript.InitializePowerScript" );

	UBioCarnageScript_eventInitializePowerScript_Parms InitializePowerScript_Parms;

	this->ProcessEvent ( pFnInitializePowerScript, &InitializePowerScript_Parms, NULL );
};



class UClass* USFXPower_IncendiaryAmmo::pClassPointer = NULL;

class UClass* USFXPower_IncendiaryAmmo::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_IncendiaryAmmo" );

		return pClassPointer;
	};



class UClass* USFXGameEffect_IncendiaryAmmo::pClassPointer = NULL;

class UClass* USFXGameEffect_IncendiaryAmmo::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXGameEffect_IncendiaryAmmo" );

		return pClassPointer;
	};

// Function SFXGameContent_Powers.SFXGameEffect_IncendiaryAmmo.CauseAnimatedReaction
// [0x00020002] 
// Parameters infos:
// class AActor*                  oHitActor                      ( CPF_Parm )
// float                          fDelay                         ( CPF_Parm )

void USFXGameEffect_IncendiaryAmmo::CauseAnimatedReaction ( class AActor* oHitActor, float fDelay )
{
	static UFunction* pFnCauseAnimatedReaction = NULL;

	if ( ! pFnCauseAnimatedReaction )
		pFnCauseAnimatedReaction = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXGameEffect_IncendiaryAmmo.CauseAnimatedReaction" );

	USFXGameEffect_IncendiaryAmmo_execCauseAnimatedReaction_Parms CauseAnimatedReaction_Parms;
	CauseAnimatedReaction_Parms.oHitActor = oHitActor;
	CauseAnimatedReaction_Parms.fDelay = fDelay;

	this->ProcessEvent ( pFnCauseAnimatedReaction, &CauseAnimatedReaction_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXGameEffect_IncendiaryAmmo.AddGameEffects
// [0x00020002] 
// Parameters infos:
// class AActor*                  oTarget                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )
// float                          fDamagePerSecond               ( CPF_Parm )
// class ABioPawn*                BPInstigator                   ( CPF_Parm )

void USFXGameEffect_IncendiaryAmmo::AddGameEffects ( class AActor* oTarget, float fDuration, float fDamagePerSecond, class ABioPawn* BPInstigator )
{
	static UFunction* pFnAddGameEffects = NULL;

	if ( ! pFnAddGameEffects )
		pFnAddGameEffects = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXGameEffect_IncendiaryAmmo.AddGameEffects" );

	USFXGameEffect_IncendiaryAmmo_execAddGameEffects_Parms AddGameEffects_Parms;
	AddGameEffects_Parms.oTarget = oTarget;
	AddGameEffects_Parms.fDuration = fDuration;
	AddGameEffects_Parms.fDamagePerSecond = fDamagePerSecond;
	AddGameEffects_Parms.BPInstigator = BPInstigator;

	this->ProcessEvent ( pFnAddGameEffects, &AddGameEffects_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXGameEffect_IncendiaryAmmo.DoEvolvedAoEImpact
// [0x00020002] 
// Parameters infos:
// struct FImpactInfo             Impact                         ( CPF_Parm )
// class ABioPawn*                WeaponOwner                    ( CPF_Parm )
// class ASFXWeapon*              Weapon                         ( CPF_Parm )

void USFXGameEffect_IncendiaryAmmo::DoEvolvedAoEImpact ( struct FImpactInfo const& Impact, class ABioPawn* WeaponOwner, class ASFXWeapon* Weapon )
{
	static UFunction* pFnDoEvolvedAoEImpact = NULL;

	if ( ! pFnDoEvolvedAoEImpact )
		pFnDoEvolvedAoEImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXGameEffect_IncendiaryAmmo.DoEvolvedAoEImpact" );

	USFXGameEffect_IncendiaryAmmo_execDoEvolvedAoEImpact_Parms DoEvolvedAoEImpact_Parms;
	memcpy ( &DoEvolvedAoEImpact_Parms.Impact, &Impact, 0x60 );
	DoEvolvedAoEImpact_Parms.WeaponOwner = WeaponOwner;
	DoEvolvedAoEImpact_Parms.Weapon = Weapon;

	this->ProcessEvent ( pFnDoEvolvedAoEImpact, &DoEvolvedAoEImpact_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXGameEffect_IncendiaryAmmo.GetDamageVocProbabilityMod
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float USFXGameEffect_IncendiaryAmmo::GetDamageVocProbabilityMod ( )
{
	static UFunction* pFnGetDamageVocProbabilityMod = NULL;

	if ( ! pFnGetDamageVocProbabilityMod )
		pFnGetDamageVocProbabilityMod = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXGameEffect_IncendiaryAmmo.GetDamageVocProbabilityMod" );

	USFXGameEffect_IncendiaryAmmo_execGetDamageVocProbabilityMod_Parms GetDamageVocProbabilityMod_Parms;

	this->ProcessEvent ( pFnGetDamageVocProbabilityMod, &GetDamageVocProbabilityMod_Parms, NULL );

	return GetDamageVocProbabilityMod_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXGameEffect_IncendiaryAmmo.OnWeaponImpact
// [0x00020002] 
// Parameters infos:
// class ASFXWeapon*              Weapon                         ( CPF_Parm )
// struct FImpactInfo             Impact                         ( CPF_Parm )

void USFXGameEffect_IncendiaryAmmo::OnWeaponImpact ( class ASFXWeapon* Weapon, struct FImpactInfo const& Impact )
{
	static UFunction* pFnOnWeaponImpact = NULL;

	if ( ! pFnOnWeaponImpact )
		pFnOnWeaponImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXGameEffect_IncendiaryAmmo.OnWeaponImpact" );

	USFXGameEffect_IncendiaryAmmo_execOnWeaponImpact_Parms OnWeaponImpact_Parms;
	OnWeaponImpact_Parms.Weapon = Weapon;
	memcpy ( &OnWeaponImpact_Parms.Impact, &Impact, 0x60 );

	this->ProcessEvent ( pFnOnWeaponImpact, &OnWeaponImpact_Parms, NULL );
};



class UClass* UBioConcussiveShotScript::pClassPointer = NULL;

class UClass* UBioConcussiveShotScript::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.BioConcussiveShotScript" );

		return pClassPointer;
	};

// Function SFXGameContent_Powers.BioConcussiveShotScript.ShouldUsePower
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Caster                         ( CPF_Parm )
// class AActor*                  Target                         ( CPF_Parm )
// FString                        sOptionalInfo                  ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UBioConcussiveShotScript::ShouldUsePower ( class AActor* Caster, class AActor* Target, FString* sOptionalInfo )
{
	static UFunction* pFnShouldUsePower = NULL;

	if ( ! pFnShouldUsePower )
		pFnShouldUsePower = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioConcussiveShotScript.ShouldUsePower" );

	UBioConcussiveShotScript_execShouldUsePower_Parms ShouldUsePower_Parms;
	ShouldUsePower_Parms.Caster = Caster;
	ShouldUsePower_Parms.Target = Target;

	if ( sOptionalInfo )
		memcpy ( &ShouldUsePower_Parms.sOptionalInfo, sOptionalInfo, 0x10 );

	this->ProcessEvent ( pFnShouldUsePower, &ShouldUsePower_Parms, NULL );

	if ( sOptionalInfo )
		memcpy ( sOptionalInfo, &ShouldUsePower_Parms.sOptionalInfo, 0x10 );

	return ShouldUsePower_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioConcussiveShotScript.OnRagdollPhysicsImpact
// [0x00020002] 
// Parameters infos:
// class APawn*                   oPawn                          ( CPF_Parm )
// class AActor*                  oImpactActor                   ( CPF_Parm )
// struct FVector                 vImpactDir                     ( CPF_Parm )

void UBioConcussiveShotScript::OnRagdollPhysicsImpact ( class APawn* oPawn, class AActor* oImpactActor, struct FVector const& vImpactDir )
{
	static UFunction* pFnOnRagdollPhysicsImpact = NULL;

	if ( ! pFnOnRagdollPhysicsImpact )
		pFnOnRagdollPhysicsImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioConcussiveShotScript.OnRagdollPhysicsImpact" );

	UBioConcussiveShotScript_execOnRagdollPhysicsImpact_Parms OnRagdollPhysicsImpact_Parms;
	OnRagdollPhysicsImpact_Parms.oPawn = oPawn;
	OnRagdollPhysicsImpact_Parms.oImpactActor = oImpactActor;
	memcpy ( &OnRagdollPhysicsImpact_Parms.vImpactDir, &vImpactDir, 0xC );

	this->ProcessEvent ( pFnOnRagdollPhysicsImpact, &OnRagdollPhysicsImpact_Parms, NULL );
};

// Function SFXGameContent_Powers.BioConcussiveShotScript.OnImpact
// [0x00820802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCasterStability               ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )

bool UBioConcussiveShotScript::eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioConcussiveShotScript.OnImpact" );

	UBioConcussiveShotScript_eventOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.oCaster = oCaster;
	OnImpact_Parms.fCasterStability = fCasterStability;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioConcussiveShotScript.StartPhase
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool UBioConcussiveShotScript::eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration )
{
	static UFunction* pFnStartPhase = NULL;

	if ( ! pFnStartPhase )
		pFnStartPhase = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioConcussiveShotScript.StartPhase" );

	UBioConcussiveShotScript_eventStartPhase_Parms StartPhase_Parms;
	StartPhase_Parms.ePhase = ePhase;
	StartPhase_Parms.oCaster = oCaster;
	StartPhase_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnStartPhase, &StartPhase_Parms, NULL );

	return StartPhase_Parms.ReturnValue;
};



class UClass* USFXPower_ConcussiveShot::pClassPointer = NULL;

class UClass* USFXPower_ConcussiveShot::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_ConcussiveShot" );

		return pClassPointer;
	};



class UClass* UBioOverloadScript::pClassPointer = NULL;

class UClass* UBioOverloadScript::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.BioOverloadScript" );

		return pClassPointer;
	};

// Function SFXGameContent_Powers.BioOverloadScript.ApplyPowerEffects
// [0x00020002] 
// Parameters infos:
// class ABioPawn*                oPawn                          ( CPF_Parm )
// class ASFXWeapon*              oWeapon                        ( CPF_Parm )

void UBioOverloadScript::ApplyPowerEffects ( class ABioPawn* oPawn, class ASFXWeapon* oWeapon )
{
	static UFunction* pFnApplyPowerEffects = NULL;

	if ( ! pFnApplyPowerEffects )
		pFnApplyPowerEffects = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioOverloadScript.ApplyPowerEffects" );

	UBioOverloadScript_execApplyPowerEffects_Parms ApplyPowerEffects_Parms;
	ApplyPowerEffects_Parms.oPawn = oPawn;
	ApplyPowerEffects_Parms.oWeapon = oWeapon;

	this->ProcessEvent ( pFnApplyPowerEffects, &ApplyPowerEffects_Parms, NULL );
};

// Function SFXGameContent_Powers.BioOverloadScript.OnImpact
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCasterStability               ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )

bool UBioOverloadScript::eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioOverloadScript.OnImpact" );

	UBioOverloadScript_eventOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.oCaster = oCaster;
	OnImpact_Parms.fCasterStability = fCasterStability;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioOverloadScript.StartPhase
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool UBioOverloadScript::eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration )
{
	static UFunction* pFnStartPhase = NULL;

	if ( ! pFnStartPhase )
		pFnStartPhase = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioOverloadScript.StartPhase" );

	UBioOverloadScript_eventStartPhase_Parms StartPhase_Parms;
	StartPhase_Parms.ePhase = ePhase;
	StartPhase_Parms.oCaster = oCaster;
	StartPhase_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnStartPhase, &StartPhase_Parms, NULL );

	return StartPhase_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioOverloadScript.ApplyToSquadMembers
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UBioOverloadScript::ApplyToSquadMembers ( )
{
	static UFunction* pFnApplyToSquadMembers = NULL;

	if ( ! pFnApplyToSquadMembers )
		pFnApplyToSquadMembers = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioOverloadScript.ApplyToSquadMembers" );

	UBioOverloadScript_execApplyToSquadMembers_Parms ApplyToSquadMembers_Parms;

	this->ProcessEvent ( pFnApplyToSquadMembers, &ApplyToSquadMembers_Parms, NULL );

	return ApplyToSquadMembers_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioOverloadScript.InitializePowerScript
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UBioOverloadScript::eventInitializePowerScript ( )
{
	static UFunction* pFnInitializePowerScript = NULL;

	if ( ! pFnInitializePowerScript )
		pFnInitializePowerScript = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioOverloadScript.InitializePowerScript" );

	UBioOverloadScript_eventInitializePowerScript_Parms InitializePowerScript_Parms;

	this->ProcessEvent ( pFnInitializePowerScript, &InitializePowerScript_Parms, NULL );
};



class UClass* USFXPower_DisruptorAmmo::pClassPointer = NULL;

class UClass* USFXPower_DisruptorAmmo::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_DisruptorAmmo" );

		return pClassPointer;
	};



class UClass* USFXGameEffect_DisruptorAmmo::pClassPointer = NULL;

class UClass* USFXGameEffect_DisruptorAmmo::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXGameEffect_DisruptorAmmo" );

		return pClassPointer;
	};

// Function SFXGameContent_Powers.SFXGameEffect_DisruptorAmmo.StunRobot
// [0x00020002] 
// Parameters infos:
// class ABioPawn*                oPawn                          ( CPF_Parm )

void USFXGameEffect_DisruptorAmmo::StunRobot ( class ABioPawn* oPawn )
{
	static UFunction* pFnStunRobot = NULL;

	if ( ! pFnStunRobot )
		pFnStunRobot = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXGameEffect_DisruptorAmmo.StunRobot" );

	USFXGameEffect_DisruptorAmmo_execStunRobot_Parms StunRobot_Parms;
	StunRobot_Parms.oPawn = oPawn;

	this->ProcessEvent ( pFnStunRobot, &StunRobot_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXGameEffect_DisruptorAmmo.TurnOnDeathPower
// [0x00020002] 
// Parameters infos:
// class ABioPawn*                oPawn                          ( CPF_Parm )

void USFXGameEffect_DisruptorAmmo::TurnOnDeathPower ( class ABioPawn* oPawn )
{
	static UFunction* pFnTurnOnDeathPower = NULL;

	if ( ! pFnTurnOnDeathPower )
		pFnTurnOnDeathPower = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXGameEffect_DisruptorAmmo.TurnOnDeathPower" );

	USFXGameEffect_DisruptorAmmo_execTurnOnDeathPower_Parms TurnOnDeathPower_Parms;
	TurnOnDeathPower_Parms.oPawn = oPawn;

	this->ProcessEvent ( pFnTurnOnDeathPower, &TurnOnDeathPower_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXGameEffect_DisruptorAmmo.GetDamageVocProbabilityMod
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float USFXGameEffect_DisruptorAmmo::GetDamageVocProbabilityMod ( )
{
	static UFunction* pFnGetDamageVocProbabilityMod = NULL;

	if ( ! pFnGetDamageVocProbabilityMod )
		pFnGetDamageVocProbabilityMod = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXGameEffect_DisruptorAmmo.GetDamageVocProbabilityMod" );

	USFXGameEffect_DisruptorAmmo_execGetDamageVocProbabilityMod_Parms GetDamageVocProbabilityMod_Parms;

	this->ProcessEvent ( pFnGetDamageVocProbabilityMod, &GetDamageVocProbabilityMod_Parms, NULL );

	return GetDamageVocProbabilityMod_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXGameEffect_DisruptorAmmo.OnWeaponImpact
// [0x00820002] 
// Parameters infos:
// class ASFXWeapon*              Weapon                         ( CPF_Parm )
// struct FImpactInfo             Impact                         ( CPF_Parm )

void USFXGameEffect_DisruptorAmmo::OnWeaponImpact ( class ASFXWeapon* Weapon, struct FImpactInfo const& Impact )
{
	static UFunction* pFnOnWeaponImpact = NULL;

	if ( ! pFnOnWeaponImpact )
		pFnOnWeaponImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXGameEffect_DisruptorAmmo.OnWeaponImpact" );

	USFXGameEffect_DisruptorAmmo_execOnWeaponImpact_Parms OnWeaponImpact_Parms;
	OnWeaponImpact_Parms.Weapon = Weapon;
	memcpy ( &OnWeaponImpact_Parms.Impact, &Impact, 0x60 );

	this->ProcessEvent ( pFnOnWeaponImpact, &OnWeaponImpact_Parms, NULL );
};



class UClass* UBioPlayerMeleeScript::pClassPointer = NULL;

class UClass* UBioPlayerMeleeScript::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.BioPlayerMeleeScript" );

		return pClassPointer;
	};

// Function SFXGameContent_Powers.BioPlayerMeleeScript.EndPhase
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )

bool UBioPlayerMeleeScript::eventEndPhase ( unsigned char ePhase, class AActor* oCaster )
{
	static UFunction* pFnEndPhase = NULL;

	if ( ! pFnEndPhase )
		pFnEndPhase = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioPlayerMeleeScript.EndPhase" );

	UBioPlayerMeleeScript_eventEndPhase_Parms EndPhase_Parms;
	EndPhase_Parms.ePhase = ePhase;
	EndPhase_Parms.oCaster = oCaster;

	this->ProcessEvent ( pFnEndPhase, &EndPhase_Parms, NULL );

	return EndPhase_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioPlayerMeleeScript.RemoveMeleeEffects
// [0x00020002] 
// Parameters infos:
// class ABioPawn*                oPawn                          ( CPF_Parm )

void UBioPlayerMeleeScript::RemoveMeleeEffects ( class ABioPawn* oPawn )
{
	static UFunction* pFnRemoveMeleeEffects = NULL;

	if ( ! pFnRemoveMeleeEffects )
		pFnRemoveMeleeEffects = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioPlayerMeleeScript.RemoveMeleeEffects" );

	UBioPlayerMeleeScript_execRemoveMeleeEffects_Parms RemoveMeleeEffects_Parms;
	RemoveMeleeEffects_Parms.oPawn = oPawn;

	this->ProcessEvent ( pFnRemoveMeleeEffects, &RemoveMeleeEffects_Parms, NULL );
};

// Function SFXGameContent_Powers.BioPlayerMeleeScript.OnImpact
// [0x00820802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCasterStability               ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )

bool UBioPlayerMeleeScript::eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioPlayerMeleeScript.OnImpact" );

	UBioPlayerMeleeScript_eventOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.oCaster = oCaster;
	OnImpact_Parms.fCasterStability = fCasterStability;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioPlayerMeleeScript.Tick
// [0x00020002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void UBioPlayerMeleeScript::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioPlayerMeleeScript.Tick" );

	UBioPlayerMeleeScript_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function SFXGameContent_Powers.BioPlayerMeleeScript.StartPhase
// [0x00820802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool UBioPlayerMeleeScript::eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration )
{
	static UFunction* pFnStartPhase = NULL;

	if ( ! pFnStartPhase )
		pFnStartPhase = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioPlayerMeleeScript.StartPhase" );

	UBioPlayerMeleeScript_eventStartPhase_Parms StartPhase_Parms;
	StartPhase_Parms.ePhase = ePhase;
	StartPhase_Parms.oCaster = oCaster;
	StartPhase_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnStartPhase, &StartPhase_Parms, NULL );

	return StartPhase_Parms.ReturnValue;
};



class UClass* USFXPower_PlayerMelee::pClassPointer = NULL;

class UClass* USFXPower_PlayerMelee::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_PlayerMelee" );

		return pClassPointer;
	};



class UClass* USFXDamageType_CryoAmmo::pClassPointer = NULL;

class UClass* USFXDamageType_CryoAmmo::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXDamageType_CryoAmmo" );

		return pClassPointer;
	};



class UClass* USFXGameEffect_CryoAmmo::pClassPointer = NULL;

class UClass* USFXGameEffect_CryoAmmo::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXGameEffect_CryoAmmo" );

		return pClassPointer;
	};

// Function SFXGameContent_Powers.SFXGameEffect_CryoAmmo.GetDamageVocProbabilityMod
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float USFXGameEffect_CryoAmmo::GetDamageVocProbabilityMod ( )
{
	static UFunction* pFnGetDamageVocProbabilityMod = NULL;

	if ( ! pFnGetDamageVocProbabilityMod )
		pFnGetDamageVocProbabilityMod = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXGameEffect_CryoAmmo.GetDamageVocProbabilityMod" );

	USFXGameEffect_CryoAmmo_execGetDamageVocProbabilityMod_Parms GetDamageVocProbabilityMod_Parms;

	this->ProcessEvent ( pFnGetDamageVocProbabilityMod, &GetDamageVocProbabilityMod_Parms, NULL );

	return GetDamageVocProbabilityMod_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXGameEffect_CryoAmmo.OnWeaponImpact
// [0x00020002] 
// Parameters infos:
// class ASFXWeapon*              Weapon                         ( CPF_Parm )
// struct FImpactInfo             Impact                         ( CPF_Parm )

void USFXGameEffect_CryoAmmo::OnWeaponImpact ( class ASFXWeapon* Weapon, struct FImpactInfo const& Impact )
{
	static UFunction* pFnOnWeaponImpact = NULL;

	if ( ! pFnOnWeaponImpact )
		pFnOnWeaponImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXGameEffect_CryoAmmo.OnWeaponImpact" );

	USFXGameEffect_CryoAmmo_execOnWeaponImpact_Parms OnWeaponImpact_Parms;
	OnWeaponImpact_Parms.Weapon = Weapon;
	memcpy ( &OnWeaponImpact_Parms.Impact, &Impact, 0x60 );

	this->ProcessEvent ( pFnOnWeaponImpact, &OnWeaponImpact_Parms, NULL );
};



class UClass* USFXGameEffect_PowerBonus::pClassPointer = NULL;

class UClass* USFXGameEffect_PowerBonus::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXGameEffect_PowerBonus" );

		return pClassPointer;
	};



class UClass* USFXPower_AdrenalineRush::pClassPointer = NULL;

class UClass* USFXPower_AdrenalineRush::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_AdrenalineRush" );

		return pClassPointer;
	};



class UClass* USFXPowerScript_AdrenalineRush::pClassPointer = NULL;

class UClass* USFXPowerScript_AdrenalineRush::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPowerScript_AdrenalineRush" );

		return pClassPointer;
	};

// Function SFXGameContent_Powers.SFXPowerScript_AdrenalineRush.ApplyVFX
// [0x00020002] 
// Parameters infos:
// class AActor*                  oImpacted                      ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

void USFXPowerScript_AdrenalineRush::ApplyVFX ( class AActor* oImpacted, float fDuration )
{
	static UFunction* pFnApplyVFX = NULL;

	if ( ! pFnApplyVFX )
		pFnApplyVFX = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPowerScript_AdrenalineRush.ApplyVFX" );

	USFXPowerScript_AdrenalineRush_execApplyVFX_Parms ApplyVFX_Parms;
	ApplyVFX_Parms.oImpacted = oImpacted;
	ApplyVFX_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnApplyVFX, &ApplyVFX_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXPowerScript_AdrenalineRush.OnEffectEnded
// [0x00020002] 
// Parameters infos:

void USFXPowerScript_AdrenalineRush::OnEffectEnded ( )
{
	static UFunction* pFnOnEffectEnded = NULL;

	if ( ! pFnOnEffectEnded )
		pFnOnEffectEnded = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPowerScript_AdrenalineRush.OnEffectEnded" );

	USFXPowerScript_AdrenalineRush_execOnEffectEnded_Parms OnEffectEnded_Parms;

	this->ProcessEvent ( pFnOnEffectEnded, &OnEffectEnded_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXPowerScript_AdrenalineRush.OnImpact
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCasterStability               ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )

bool USFXPowerScript_AdrenalineRush::eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPowerScript_AdrenalineRush.OnImpact" );

	USFXPowerScript_AdrenalineRush_eventOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.oCaster = oCaster;
	OnImpact_Parms.fCasterStability = fCasterStability;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPowerScript_AdrenalineRush.AdjustCooldown
// [0x00420802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          fCoolDownTime                  ( CPF_Parm | CPF_OutParm )

bool USFXPowerScript_AdrenalineRush::eventAdjustCooldown ( float* fCoolDownTime )
{
	static UFunction* pFnAdjustCooldown = NULL;

	if ( ! pFnAdjustCooldown )
		pFnAdjustCooldown = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPowerScript_AdrenalineRush.AdjustCooldown" );

	USFXPowerScript_AdrenalineRush_eventAdjustCooldown_Parms AdjustCooldown_Parms;

	if ( fCoolDownTime )
		AdjustCooldown_Parms.fCoolDownTime = *fCoolDownTime;

	this->ProcessEvent ( pFnAdjustCooldown, &AdjustCooldown_Parms, NULL );

	if ( fCoolDownTime )
		*fCoolDownTime = AdjustCooldown_Parms.fCoolDownTime;

	return AdjustCooldown_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPowerScript_AdrenalineRush.StartPhase
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool USFXPowerScript_AdrenalineRush::eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration )
{
	static UFunction* pFnStartPhase = NULL;

	if ( ! pFnStartPhase )
		pFnStartPhase = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPowerScript_AdrenalineRush.StartPhase" );

	USFXPowerScript_AdrenalineRush_eventStartPhase_Parms StartPhase_Parms;
	StartPhase_Parms.ePhase = ePhase;
	StartPhase_Parms.oCaster = oCaster;
	StartPhase_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnStartPhase, &StartPhase_Parms, NULL );

	return StartPhase_Parms.ReturnValue;
};



class UClass* USFXPower_AdrenalineRush_Evolved1::pClassPointer = NULL;

class UClass* USFXPower_AdrenalineRush_Evolved1::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_AdrenalineRush_Evolved1" );

		return pClassPointer;
	};



class UClass* USFXPower_AdrenalineRush_Evolved2::pClassPointer = NULL;

class UClass* USFXPower_AdrenalineRush_Evolved2::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_AdrenalineRush_Evolved2" );

		return pClassPointer;
	};



class UClass* USFXPower_AdrenalineRush_Soldier::pClassPointer = NULL;

class UClass* USFXPower_AdrenalineRush_Soldier::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_AdrenalineRush_Soldier" );

		return pClassPointer;
	};



class UClass* ASFXProjectile_Power_ConcussiveShot::pClassPointer = NULL;

class UClass* ASFXProjectile_Power_ConcussiveShot::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXProjectile_Power_ConcussiveShot" );

		return pClassPointer;
	};



class UClass* USFXPower_ConcussiveShot_Heavy::pClassPointer = NULL;

class UClass* USFXPower_ConcussiveShot_Heavy::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_ConcussiveShot_Heavy" );

		return pClassPointer;
	};



class UClass* USFXPower_ConcussiveShot_Radius::pClassPointer = NULL;

class UClass* USFXPower_ConcussiveShot_Radius::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_ConcussiveShot_Radius" );

		return pClassPointer;
	};



class UClass* USFXPower_ConcussiveShot_Soldier::pClassPointer = NULL;

class UClass* USFXPower_ConcussiveShot_Soldier::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_ConcussiveShot_Soldier" );

		return pClassPointer;
	};



class UClass* USFXPower_CryoAmmo::pClassPointer = NULL;

class UClass* USFXPower_CryoAmmo::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_CryoAmmo" );

		return pClassPointer;
	};



class UClass* USFXPowerScript_CryoAmmo::pClassPointer = NULL;

class UClass* USFXPowerScript_CryoAmmo::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPowerScript_CryoAmmo" );

		return pClassPointer;
	};

// Function SFXGameContent_Powers.SFXPowerScript_CryoAmmo.ApplyPowerEffects
// [0x00020002] 
// Parameters infos:
// class ABioPawn*                oPawn                          ( CPF_Parm )
// class ASFXWeapon*              oWeapon                        ( CPF_Parm )

void USFXPowerScript_CryoAmmo::ApplyPowerEffects ( class ABioPawn* oPawn, class ASFXWeapon* oWeapon )
{
	static UFunction* pFnApplyPowerEffects = NULL;

	if ( ! pFnApplyPowerEffects )
		pFnApplyPowerEffects = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPowerScript_CryoAmmo.ApplyPowerEffects" );

	USFXPowerScript_CryoAmmo_execApplyPowerEffects_Parms ApplyPowerEffects_Parms;
	ApplyPowerEffects_Parms.oPawn = oPawn;
	ApplyPowerEffects_Parms.oWeapon = oWeapon;

	this->ProcessEvent ( pFnApplyPowerEffects, &ApplyPowerEffects_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXPowerScript_CryoAmmo.StartPhase
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool USFXPowerScript_CryoAmmo::eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration )
{
	static UFunction* pFnStartPhase = NULL;

	if ( ! pFnStartPhase )
		pFnStartPhase = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPowerScript_CryoAmmo.StartPhase" );

	USFXPowerScript_CryoAmmo_eventStartPhase_Parms StartPhase_Parms;
	StartPhase_Parms.ePhase = ePhase;
	StartPhase_Parms.oCaster = oCaster;
	StartPhase_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnStartPhase, &StartPhase_Parms, NULL );

	return StartPhase_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPowerScript_CryoAmmo.ApplyToSquadMembers
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXPowerScript_CryoAmmo::ApplyToSquadMembers ( )
{
	static UFunction* pFnApplyToSquadMembers = NULL;

	if ( ! pFnApplyToSquadMembers )
		pFnApplyToSquadMembers = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPowerScript_CryoAmmo.ApplyToSquadMembers" );

	USFXPowerScript_CryoAmmo_execApplyToSquadMembers_Parms ApplyToSquadMembers_Parms;

	this->ProcessEvent ( pFnApplyToSquadMembers, &ApplyToSquadMembers_Parms, NULL );

	return ApplyToSquadMembers_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPowerScript_CryoAmmo.InitializePowerScript
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void USFXPowerScript_CryoAmmo::eventInitializePowerScript ( )
{
	static UFunction* pFnInitializePowerScript = NULL;

	if ( ! pFnInitializePowerScript )
		pFnInitializePowerScript = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPowerScript_CryoAmmo.InitializePowerScript" );

	USFXPowerScript_CryoAmmo_eventInitializePowerScript_Parms InitializePowerScript_Parms;

	this->ProcessEvent ( pFnInitializePowerScript, &InitializePowerScript_Parms, NULL );
};



class UClass* USFXPower_CryoAmmo_Evolved1::pClassPointer = NULL;

class UClass* USFXPower_CryoAmmo_Evolved1::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_CryoAmmo_Evolved1" );

		return pClassPointer;
	};



class UClass* USFXPower_CryoAmmo_Evolved2::pClassPointer = NULL;

class UClass* USFXPower_CryoAmmo_Evolved2::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_CryoAmmo_Evolved2" );

		return pClassPointer;
	};



class UClass* USFXPower_CryoAmmo_Soldier::pClassPointer = NULL;

class UClass* USFXPower_CryoAmmo_Soldier::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_CryoAmmo_Soldier" );

		return pClassPointer;
	};



class UClass* USFXPower_IncendiaryAmmo_Soldier::pClassPointer = NULL;

class UClass* USFXPower_IncendiaryAmmo_Soldier::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_IncendiaryAmmo_Soldier" );

		return pClassPointer;
	};



class UClass* USFXPower_IncendiaryAmmo_Squad::pClassPointer = NULL;

class UClass* USFXPower_IncendiaryAmmo_Squad::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_IncendiaryAmmo_Squad" );

		return pClassPointer;
	};



class UClass* USFXPower_IncendiaryAmmo_Radius::pClassPointer = NULL;

class UClass* USFXPower_IncendiaryAmmo_Radius::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_IncendiaryAmmo_Radius" );

		return pClassPointer;
	};



class UClass* USFXPower_DisruptorAmmo_Heavy::pClassPointer = NULL;

class UClass* USFXPower_DisruptorAmmo_Heavy::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_DisruptorAmmo_Heavy" );

		return pClassPointer;
	};



class UClass* USFXPower_DisruptorAmmo_Squad::pClassPointer = NULL;

class UClass* USFXPower_DisruptorAmmo_Squad::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_DisruptorAmmo_Squad" );

		return pClassPointer;
	};



class UClass* USFXPower_DisruptorAmmo_Soldier::pClassPointer = NULL;

class UClass* USFXPower_DisruptorAmmo_Soldier::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_DisruptorAmmo_Soldier" );

		return pClassPointer;
	};



class UClass* USFXPower_FirstAid::pClassPointer = NULL;

class UClass* USFXPower_FirstAid::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_FirstAid" );

		return pClassPointer;
	};



class UClass* USFXPowerScript_FirstAid::pClassPointer = NULL;

class UClass* USFXPowerScript_FirstAid::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPowerScript_FirstAid" );

		return pClassPointer;
	};

// Function SFXGameContent_Powers.SFXPowerScript_FirstAid.GetHUDWheelIconInfo
// [0x00020002] 
// Parameters infos:
// FString                        ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// class ABioPawn*                OwnerPawn                      ( CPF_Parm )

FString USFXPowerScript_FirstAid::GetHUDWheelIconInfo ( class ABioPawn* OwnerPawn )
{
	static UFunction* pFnGetHUDWheelIconInfo = NULL;

	if ( ! pFnGetHUDWheelIconInfo )
		pFnGetHUDWheelIconInfo = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPowerScript_FirstAid.GetHUDWheelIconInfo" );

	USFXPowerScript_FirstAid_execGetHUDWheelIconInfo_Parms GetHUDWheelIconInfo_Parms;
	GetHUDWheelIconInfo_Parms.OwnerPawn = OwnerPawn;

	this->ProcessEvent ( pFnGetHUDWheelIconInfo, &GetHUDWheelIconInfo_Parms, NULL );

	return GetHUDWheelIconInfo_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPowerScript_FirstAid.ShouldUsePower
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Caster                         ( CPF_Parm )
// class AActor*                  Target                         ( CPF_Parm )
// FString                        sOptionalInfo                  ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool USFXPowerScript_FirstAid::ShouldUsePower ( class AActor* Caster, class AActor* Target, FString* sOptionalInfo )
{
	static UFunction* pFnShouldUsePower = NULL;

	if ( ! pFnShouldUsePower )
		pFnShouldUsePower = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPowerScript_FirstAid.ShouldUsePower" );

	USFXPowerScript_FirstAid_execShouldUsePower_Parms ShouldUsePower_Parms;
	ShouldUsePower_Parms.Caster = Caster;
	ShouldUsePower_Parms.Target = Target;

	if ( sOptionalInfo )
		memcpy ( &ShouldUsePower_Parms.sOptionalInfo, sOptionalInfo, 0x10 );

	this->ProcessEvent ( pFnShouldUsePower, &ShouldUsePower_Parms, NULL );

	if ( sOptionalInfo )
		memcpy ( sOptionalInfo, &ShouldUsePower_Parms.sOptionalInfo, 0x10 );

	return ShouldUsePower_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPowerScript_FirstAid.CountMediGel
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioPlayerSquad*         oPlayerSquad                   ( CPF_Parm )

int USFXPowerScript_FirstAid::CountMediGel ( class ABioPlayerSquad* oPlayerSquad )
{
	static UFunction* pFnCountMediGel = NULL;

	if ( ! pFnCountMediGel )
		pFnCountMediGel = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPowerScript_FirstAid.CountMediGel" );

	USFXPowerScript_FirstAid_execCountMediGel_Parms CountMediGel_Parms;
	CountMediGel_Parms.oPlayerSquad = oPlayerSquad;

	this->ProcessEvent ( pFnCountMediGel, &CountMediGel_Parms, NULL );

	return CountMediGel_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPowerScript_FirstAid.OnImpact
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCasterStability               ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )

bool USFXPowerScript_FirstAid::eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPowerScript_FirstAid.OnImpact" );

	USFXPowerScript_FirstAid_eventOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.oCaster = oCaster;
	OnImpact_Parms.fCasterStability = fCasterStability;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPowerScript_FirstAid.StartPhase
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool USFXPowerScript_FirstAid::eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration )
{
	static UFunction* pFnStartPhase = NULL;

	if ( ! pFnStartPhase )
		pFnStartPhase = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPowerScript_FirstAid.StartPhase" );

	USFXPowerScript_FirstAid_eventStartPhase_Parms StartPhase_Parms;
	StartPhase_Parms.ePhase = ePhase;
	StartPhase_Parms.oCaster = oCaster;
	StartPhase_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnStartPhase, &StartPhase_Parms, NULL );

	return StartPhase_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPowerScript_FirstAid.CanStartPower
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )

bool USFXPowerScript_FirstAid::eventCanStartPower ( class AActor* oCaster )
{
	static UFunction* pFnCanStartPower = NULL;

	if ( ! pFnCanStartPower )
		pFnCanStartPower = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPowerScript_FirstAid.CanStartPower" );

	USFXPowerScript_FirstAid_eventCanStartPower_Parms CanStartPower_Parms;
	CanStartPower_Parms.oCaster = oCaster;

	this->ProcessEvent ( pFnCanStartPower, &CanStartPower_Parms, NULL );

	return CanStartPower_Parms.ReturnValue;
};



class UClass* USFXPower_PlayerMeleePistol::pClassPointer = NULL;

class UClass* USFXPower_PlayerMeleePistol::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_PlayerMeleePistol" );

		return pClassPointer;
	};



class UClass* USFXPower_SoldierPassive::pClassPointer = NULL;

class UClass* USFXPower_SoldierPassive::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_SoldierPassive" );

		return pClassPointer;
	};



class UClass* USFXPowerScript_SoldierPassive::pClassPointer = NULL;

class UClass* USFXPowerScript_SoldierPassive::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPowerScript_SoldierPassive" );

		return pClassPointer;
	};

// Function SFXGameContent_Powers.SFXPowerScript_SoldierPassive.ApplyGlobalBonus
// [0x00020002] 
// Parameters infos:

void USFXPowerScript_SoldierPassive::ApplyGlobalBonus ( )
{
	static UFunction* pFnApplyGlobalBonus = NULL;

	if ( ! pFnApplyGlobalBonus )
		pFnApplyGlobalBonus = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPowerScript_SoldierPassive.ApplyGlobalBonus" );

	USFXPowerScript_SoldierPassive_execApplyGlobalBonus_Parms ApplyGlobalBonus_Parms;

	this->ProcessEvent ( pFnApplyGlobalBonus, &ApplyGlobalBonus_Parms, NULL );
};



class UClass* USFXPowerScript_PassivePower::pClassPointer = NULL;

class UClass* USFXPowerScript_PassivePower::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPowerScript_PassivePower" );

		return pClassPointer;
	};

// Function SFXGameContent_Powers.SFXPowerScript_PassivePower.RemovePowerBonusEffect
// [0x00020002] 
// Parameters infos:
// class AActor*                  oTarget                        ( CPF_Parm )
// class UClass*                  ClassName                      ( CPF_Parm )
// struct SFXName                 nmCategory                     ( CPF_Parm )
// class UClass*                  PowerClass                     ( CPF_Parm )

void USFXPowerScript_PassivePower::RemovePowerBonusEffect ( class AActor* oTarget, class UClass* ClassName, struct SFXName nmCategory, class UClass* PowerClass )
{
	static UFunction* pFnRemovePowerBonusEffect = NULL;

	if ( ! pFnRemovePowerBonusEffect )
		pFnRemovePowerBonusEffect = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPowerScript_PassivePower.RemovePowerBonusEffect" );

	USFXPowerScript_PassivePower_execRemovePowerBonusEffect_Parms RemovePowerBonusEffect_Parms;
	RemovePowerBonusEffect_Parms.oTarget = oTarget;
	RemovePowerBonusEffect_Parms.ClassName = ClassName;
	memcpy ( &RemovePowerBonusEffect_Parms.nmCategory, &nmCategory, 0x8 );
	RemovePowerBonusEffect_Parms.PowerClass = PowerClass;

	this->ProcessEvent ( pFnRemovePowerBonusEffect, &RemovePowerBonusEffect_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXPowerScript_PassivePower.ApplyPowerBonusEffect
// [0x00020002] 
// Parameters infos:
// class AActor*                  oTarget                        ( CPF_Parm )
// class UClass*                  ClassName                      ( CPF_Parm )
// float                          fEffectValue                   ( CPF_Parm )
// struct SFXName                 nmCategory                     ( CPF_Parm )
// class UClass*                  PowerClass                     ( CPF_Parm )

void USFXPowerScript_PassivePower::ApplyPowerBonusEffect ( class AActor* oTarget, class UClass* ClassName, float fEffectValue, struct SFXName nmCategory, class UClass* PowerClass )
{
	static UFunction* pFnApplyPowerBonusEffect = NULL;

	if ( ! pFnApplyPowerBonusEffect )
		pFnApplyPowerBonusEffect = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPowerScript_PassivePower.ApplyPowerBonusEffect" );

	USFXPowerScript_PassivePower_execApplyPowerBonusEffect_Parms ApplyPowerBonusEffect_Parms;
	ApplyPowerBonusEffect_Parms.oTarget = oTarget;
	ApplyPowerBonusEffect_Parms.ClassName = ClassName;
	ApplyPowerBonusEffect_Parms.fEffectValue = fEffectValue;
	memcpy ( &ApplyPowerBonusEffect_Parms.nmCategory, &nmCategory, 0x8 );
	ApplyPowerBonusEffect_Parms.PowerClass = PowerClass;

	this->ProcessEvent ( pFnApplyPowerBonusEffect, &ApplyPowerBonusEffect_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXPowerScript_PassivePower.ApplyHealthModifier
// [0x00024002] 
// Parameters infos:
// float                          fHealthModifier                ( CPF_Parm )
// class AActor*                  Target                         ( CPF_OptionalParm | CPF_Parm )

void USFXPowerScript_PassivePower::ApplyHealthModifier ( float fHealthModifier, class AActor* Target )
{
	static UFunction* pFnApplyHealthModifier = NULL;

	if ( ! pFnApplyHealthModifier )
		pFnApplyHealthModifier = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPowerScript_PassivePower.ApplyHealthModifier" );

	USFXPowerScript_PassivePower_execApplyHealthModifier_Parms ApplyHealthModifier_Parms;
	ApplyHealthModifier_Parms.fHealthModifier = fHealthModifier;
	ApplyHealthModifier_Parms.Target = Target;

	this->ProcessEvent ( pFnApplyHealthModifier, &ApplyHealthModifier_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXPowerScript_PassivePower.ApplyWeaponDamageModifier
// [0x00024002] 
// Parameters infos:
// float                          fDamageModifier                ( CPF_Parm )
// class AActor*                  Target                         ( CPF_OptionalParm | CPF_Parm )

void USFXPowerScript_PassivePower::ApplyWeaponDamageModifier ( float fDamageModifier, class AActor* Target )
{
	static UFunction* pFnApplyWeaponDamageModifier = NULL;

	if ( ! pFnApplyWeaponDamageModifier )
		pFnApplyWeaponDamageModifier = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPowerScript_PassivePower.ApplyWeaponDamageModifier" );

	USFXPowerScript_PassivePower_execApplyWeaponDamageModifier_Parms ApplyWeaponDamageModifier_Parms;
	ApplyWeaponDamageModifier_Parms.fDamageModifier = fDamageModifier;
	ApplyWeaponDamageModifier_Parms.Target = Target;

	this->ProcessEvent ( pFnApplyWeaponDamageModifier, &ApplyWeaponDamageModifier_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXPowerScript_PassivePower.ApplyPowerCooldownModifier
// [0x00024002] 
// Parameters infos:
// float                          fCooldownModifier              ( CPF_Parm )
// class AActor*                  Target                         ( CPF_OptionalParm | CPF_Parm )

void USFXPowerScript_PassivePower::ApplyPowerCooldownModifier ( float fCooldownModifier, class AActor* Target )
{
	static UFunction* pFnApplyPowerCooldownModifier = NULL;

	if ( ! pFnApplyPowerCooldownModifier )
		pFnApplyPowerCooldownModifier = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPowerScript_PassivePower.ApplyPowerCooldownModifier" );

	USFXPowerScript_PassivePower_execApplyPowerCooldownModifier_Parms ApplyPowerCooldownModifier_Parms;
	ApplyPowerCooldownModifier_Parms.fCooldownModifier = fCooldownModifier;
	ApplyPowerCooldownModifier_Parms.Target = Target;

	this->ProcessEvent ( pFnApplyPowerCooldownModifier, &ApplyPowerCooldownModifier_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXPowerScript_PassivePower.ApplyPassiveBonus
// [0x00024002] 
// Parameters infos:
// class UClass*                  EffectClass                    ( CPF_Parm )
// float                          fModifier                      ( CPF_Parm )
// class AActor*                  Target                         ( CPF_OptionalParm | CPF_Parm )

void USFXPowerScript_PassivePower::ApplyPassiveBonus ( class UClass* EffectClass, float fModifier, class AActor* Target )
{
	static UFunction* pFnApplyPassiveBonus = NULL;

	if ( ! pFnApplyPassiveBonus )
		pFnApplyPassiveBonus = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPowerScript_PassivePower.ApplyPassiveBonus" );

	USFXPowerScript_PassivePower_execApplyPassiveBonus_Parms ApplyPassiveBonus_Parms;
	ApplyPassiveBonus_Parms.EffectClass = EffectClass;
	ApplyPassiveBonus_Parms.fModifier = fModifier;
	ApplyPassiveBonus_Parms.Target = Target;

	this->ProcessEvent ( pFnApplyPassiveBonus, &ApplyPassiveBonus_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXPowerScript_PassivePower.ApplyGlobalBonus
// [0x00020000] 
// Parameters infos:

void USFXPowerScript_PassivePower::ApplyGlobalBonus ( )
{
	static UFunction* pFnApplyGlobalBonus = NULL;

	if ( ! pFnApplyGlobalBonus )
		pFnApplyGlobalBonus = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPowerScript_PassivePower.ApplyGlobalBonus" );

	USFXPowerScript_PassivePower_execApplyGlobalBonus_Parms ApplyGlobalBonus_Parms;

	this->ProcessEvent ( pFnApplyGlobalBonus, &ApplyGlobalBonus_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXPowerScript_PassivePower.OnSquadMemberAdded
// [0x00020002] 
// Parameters infos:
// class APawn*                   Pawn                           ( CPF_Parm )

void USFXPowerScript_PassivePower::OnSquadMemberAdded ( class APawn* Pawn )
{
	static UFunction* pFnOnSquadMemberAdded = NULL;

	if ( ! pFnOnSquadMemberAdded )
		pFnOnSquadMemberAdded = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPowerScript_PassivePower.OnSquadMemberAdded" );

	USFXPowerScript_PassivePower_execOnSquadMemberAdded_Parms OnSquadMemberAdded_Parms;
	OnSquadMemberAdded_Parms.Pawn = Pawn;

	this->ProcessEvent ( pFnOnSquadMemberAdded, &OnSquadMemberAdded_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXPowerScript_PassivePower.OnPowersLoaded
// [0x00020002] 
// Parameters infos:

void USFXPowerScript_PassivePower::OnPowersLoaded ( )
{
	static UFunction* pFnOnPowersLoaded = NULL;

	if ( ! pFnOnPowersLoaded )
		pFnOnPowersLoaded = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPowerScript_PassivePower.OnPowersLoaded" );

	USFXPowerScript_PassivePower_execOnPowersLoaded_Parms OnPowersLoaded_Parms;

	this->ProcessEvent ( pFnOnPowersLoaded, &OnPowersLoaded_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXPowerScript_PassivePower.OnPowerRankIncreased
// [0x00020002] 
// Parameters infos:

void USFXPowerScript_PassivePower::OnPowerRankIncreased ( )
{
	static UFunction* pFnOnPowerRankIncreased = NULL;

	if ( ! pFnOnPowerRankIncreased )
		pFnOnPowerRankIncreased = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPowerScript_PassivePower.OnPowerRankIncreased" );

	USFXPowerScript_PassivePower_execOnPowerRankIncreased_Parms OnPowerRankIncreased_Parms;

	this->ProcessEvent ( pFnOnPowerRankIncreased, &OnPowerRankIncreased_Parms, NULL );
};

// Function SFXGameContent_Powers.SFXPowerScript_PassivePower.InitializePowerScript
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void USFXPowerScript_PassivePower::eventInitializePowerScript ( )
{
	static UFunction* pFnInitializePowerScript = NULL;

	if ( ! pFnInitializePowerScript )
		pFnInitializePowerScript = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPowerScript_PassivePower.InitializePowerScript" );

	USFXPowerScript_PassivePower_eventInitializePowerScript_Parms InitializePowerScript_Parms;

	this->ProcessEvent ( pFnInitializePowerScript, &InitializePowerScript_Parms, NULL );
};



class UClass* USFXPower_SoldierPassive_Evolved1::pClassPointer = NULL;

class UClass* USFXPower_SoldierPassive_Evolved1::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_SoldierPassive_Evolved1" );

		return pClassPointer;
	};



class UClass* USFXPower_SoldierPassive_Evolved2::pClassPointer = NULL;

class UClass* USFXPower_SoldierPassive_Evolved2::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_SoldierPassive_Evolved2" );

		return pClassPointer;
	};



class UClass* USFXPower_CombatDrone_NPC::pClassPointer = NULL;

class UClass* USFXPower_CombatDrone_NPC::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_CombatDrone_NPC" );

		return pClassPointer;
	};



class UClass* USFXPower_ShieldBoost_NPC::pClassPointer = NULL;

class UClass* USFXPower_ShieldBoost_NPC::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_ShieldBoost_NPC" );

		return pClassPointer;
	};



class UClass* UBioNeuralShockScript::pClassPointer = NULL;

class UClass* UBioNeuralShockScript::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.BioNeuralShockScript" );

		return pClassPointer;
	};

// Function SFXGameContent_Powers.BioNeuralShockScript.ShouldUsePower
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Caster                         ( CPF_Parm )
// class AActor*                  Target                         ( CPF_Parm )
// FString                        sOptionalInfo                  ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UBioNeuralShockScript::ShouldUsePower ( class AActor* Caster, class AActor* Target, FString* sOptionalInfo )
{
	static UFunction* pFnShouldUsePower = NULL;

	if ( ! pFnShouldUsePower )
		pFnShouldUsePower = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioNeuralShockScript.ShouldUsePower" );

	UBioNeuralShockScript_execShouldUsePower_Parms ShouldUsePower_Parms;
	ShouldUsePower_Parms.Caster = Caster;
	ShouldUsePower_Parms.Target = Target;

	if ( sOptionalInfo )
		memcpy ( &ShouldUsePower_Parms.sOptionalInfo, sOptionalInfo, 0x10 );

	this->ProcessEvent ( pFnShouldUsePower, &ShouldUsePower_Parms, NULL );

	if ( sOptionalInfo )
		memcpy ( sOptionalInfo, &ShouldUsePower_Parms.sOptionalInfo, 0x10 );

	return ShouldUsePower_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioNeuralShockScript.UnaffectPreviousTargets
// [0x00020002] 
// Parameters infos:
// class AActor*                  oCaster                        ( CPF_Parm )

void UBioNeuralShockScript::UnaffectPreviousTargets ( class AActor* oCaster )
{
	static UFunction* pFnUnaffectPreviousTargets = NULL;

	if ( ! pFnUnaffectPreviousTargets )
		pFnUnaffectPreviousTargets = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioNeuralShockScript.UnaffectPreviousTargets" );

	UBioNeuralShockScript_execUnaffectPreviousTargets_Parms UnaffectPreviousTargets_Parms;
	UnaffectPreviousTargets_Parms.oCaster = oCaster;

	this->ProcessEvent ( pFnUnaffectPreviousTargets, &UnaffectPreviousTargets_Parms, NULL );
};

// Function SFXGameContent_Powers.BioNeuralShockScript.DisablePowers
// [0x00020002] 
// Parameters infos:
// class AActor*                  oImpacted                      ( CPF_Parm )

void UBioNeuralShockScript::DisablePowers ( class AActor* oImpacted )
{
	static UFunction* pFnDisablePowers = NULL;

	if ( ! pFnDisablePowers )
		pFnDisablePowers = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioNeuralShockScript.DisablePowers" );

	UBioNeuralShockScript_execDisablePowers_Parms DisablePowers_Parms;
	DisablePowers_Parms.oImpacted = oImpacted;

	this->ProcessEvent ( pFnDisablePowers, &DisablePowers_Parms, NULL );
};

// Function SFXGameContent_Powers.BioNeuralShockScript.OnImpact
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCasterStability               ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )

bool UBioNeuralShockScript::eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioNeuralShockScript.OnImpact" );

	UBioNeuralShockScript_eventOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.oCaster = oCaster;
	OnImpact_Parms.fCasterStability = fCasterStability;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioNeuralShockScript.StartPhase
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool UBioNeuralShockScript::eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration )
{
	static UFunction* pFnStartPhase = NULL;

	if ( ! pFnStartPhase )
		pFnStartPhase = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.BioNeuralShockScript.StartPhase" );

	UBioNeuralShockScript_eventStartPhase_Parms StartPhase_Parms;
	StartPhase_Parms.ePhase = ePhase;
	StartPhase_Parms.oCaster = oCaster;
	StartPhase_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnStartPhase, &StartPhase_Parms, NULL );

	return StartPhase_Parms.ReturnValue;
};



class UClass* USFXPower_NeuralShock::pClassPointer = NULL;

class UClass* USFXPower_NeuralShock::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_NeuralShock" );

		return pClassPointer;
	};

// Function SFXGameContent_Powers.SFXPower_NeuralShock.DisablePowers
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXPower_NeuralShock::DisablePowers ( )
{
	static UFunction* pFnDisablePowers = NULL;

	if ( ! pFnDisablePowers )
		pFnDisablePowers = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPower_NeuralShock.DisablePowers" );

	USFXPower_NeuralShock_execDisablePowers_Parms DisablePowers_Parms;

	this->ProcessEvent ( pFnDisablePowers, &DisablePowers_Parms, NULL );

	return DisablePowers_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPower_NeuralShock.GetAccuracyPenalty
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float USFXPower_NeuralShock::GetAccuracyPenalty ( )
{
	static UFunction* pFnGetAccuracyPenalty = NULL;

	if ( ! pFnGetAccuracyPenalty )
		pFnGetAccuracyPenalty = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPower_NeuralShock.GetAccuracyPenalty" );

	USFXPower_NeuralShock_execGetAccuracyPenalty_Parms GetAccuracyPenalty_Parms;

	this->ProcessEvent ( pFnGetAccuracyPenalty, &GetAccuracyPenalty_Parms, NULL );

	return GetAccuracyPenalty_Parms.ReturnValue;
};



class UClass* USFXGameEffect_DelayedNeuralShock::pClassPointer = NULL;

class UClass* USFXGameEffect_DelayedNeuralShock::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXGameEffect_DelayedNeuralShock" );

		return pClassPointer;
	};

// Function SFXGameContent_Powers.SFXGameEffect_DelayedNeuralShock.OnRemoved
// [0x00020002] 
// Parameters infos:

void USFXGameEffect_DelayedNeuralShock::OnRemoved ( )
{
	static UFunction* pFnOnRemoved = NULL;

	if ( ! pFnOnRemoved )
		pFnOnRemoved = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXGameEffect_DelayedNeuralShock.OnRemoved" );

	USFXGameEffect_DelayedNeuralShock_execOnRemoved_Parms OnRemoved_Parms;

	this->ProcessEvent ( pFnOnRemoved, &OnRemoved_Parms, NULL );
};



class UClass* USFXDamageType_CryoFreeze::pClassPointer = NULL;

class UClass* USFXDamageType_CryoFreeze::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXDamageType_CryoFreeze" );

		return pClassPointer;
	};



class UClass* USFXPower_CryoFreeze::pClassPointer = NULL;

class UClass* USFXPower_CryoFreeze::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_CryoFreeze" );

		return pClassPointer;
	};



class UClass* USFXPowerScript_CryoFreeze::pClassPointer = NULL;

class UClass* USFXPowerScript_CryoFreeze::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPowerScript_CryoFreeze" );

		return pClassPointer;
	};

// Function SFXGameContent_Powers.SFXPowerScript_CryoFreeze.ShouldUsePower
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Caster                         ( CPF_Parm )
// class AActor*                  Target                         ( CPF_Parm )
// FString                        sOptionalInfo                  ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool USFXPowerScript_CryoFreeze::ShouldUsePower ( class AActor* Caster, class AActor* Target, FString* sOptionalInfo )
{
	static UFunction* pFnShouldUsePower = NULL;

	if ( ! pFnShouldUsePower )
		pFnShouldUsePower = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPowerScript_CryoFreeze.ShouldUsePower" );

	USFXPowerScript_CryoFreeze_execShouldUsePower_Parms ShouldUsePower_Parms;
	ShouldUsePower_Parms.Caster = Caster;
	ShouldUsePower_Parms.Target = Target;

	if ( sOptionalInfo )
		memcpy ( &ShouldUsePower_Parms.sOptionalInfo, sOptionalInfo, 0x10 );

	this->ProcessEvent ( pFnShouldUsePower, &ShouldUsePower_Parms, NULL );

	if ( sOptionalInfo )
		memcpy ( sOptionalInfo, &ShouldUsePower_Parms.sOptionalInfo, 0x10 );

	return ShouldUsePower_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPowerScript_CryoFreeze.OnImpact
// [0x00820802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCasterStability               ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )

bool USFXPowerScript_CryoFreeze::eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPowerScript_CryoFreeze.OnImpact" );

	USFXPowerScript_CryoFreeze_eventOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.oCaster = oCaster;
	OnImpact_Parms.fCasterStability = fCasterStability;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.SFXPowerScript_CryoFreeze.StartPhase
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool USFXPowerScript_CryoFreeze::eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration )
{
	static UFunction* pFnStartPhase = NULL;

	if ( ! pFnStartPhase )
		pFnStartPhase = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPowerScript_CryoFreeze.StartPhase" );

	USFXPowerScript_CryoFreeze_eventStartPhase_Parms StartPhase_Parms;
	StartPhase_Parms.ePhase = ePhase;
	StartPhase_Parms.oCaster = oCaster;
	StartPhase_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnStartPhase, &StartPhase_Parms, NULL );

	return StartPhase_Parms.ReturnValue;
};



class UClass* USFXPower_CryoFreeze_Evolved1::pClassPointer = NULL;

class UClass* USFXPower_CryoFreeze_Evolved1::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_CryoFreeze_Evolved1" );

		return pClassPointer;
	};



class UClass* USFXPower_CryoFreeze_Evolved2::pClassPointer = NULL;

class UClass* USFXPower_CryoFreeze_Evolved2::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_CryoFreeze_Evolved2" );

		return pClassPointer;
	};



class UClass* USFXPower_CryoFreezeInstant::pClassPointer = NULL;

class UClass* USFXPower_CryoFreezeInstant::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_CryoFreezeInstant" );

		return pClassPointer;
	};



class UClass* USFXPower_CryoFreezeInstant_Evolved1::pClassPointer = NULL;

class UClass* USFXPower_CryoFreezeInstant_Evolved1::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_CryoFreezeInstant_Evolved1" );

		return pClassPointer;
	};



class UClass* USFXPower_CryoFreezeInstant_Evolved2::pClassPointer = NULL;

class UClass* USFXPower_CryoFreezeInstant_Evolved2::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_CryoFreezeInstant_Evolved2" );

		return pClassPointer;
	};



class UClass* USFXPower_CryoFreeze_Mordin::pClassPointer = NULL;

class UClass* USFXPower_CryoFreeze_Mordin::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_CryoFreeze_Mordin" );

		return pClassPointer;
	};



class UClass* USFXPower_Incinerate_Mordin::pClassPointer = NULL;

class UClass* USFXPower_Incinerate_Mordin::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_Incinerate_Mordin" );

		return pClassPointer;
	};



class UClass* USFXPower_IncinerateInstant::pClassPointer = NULL;

class UClass* USFXPower_IncinerateInstant::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_IncinerateInstant" );

		return pClassPointer;
	};



class UClass* USFXPower_Incinerate_Heavy_Hench::pClassPointer = NULL;

class UClass* USFXPower_Incinerate_Heavy_Hench::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_Incinerate_Heavy_Hench" );

		return pClassPointer;
	};



class UClass* USFXPower_IncinerateInstant_Heavy::pClassPointer = NULL;

class UClass* USFXPower_IncinerateInstant_Heavy::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_IncinerateInstant_Heavy" );

		return pClassPointer;
	};



class UClass* USFXPower_Incinerate_Radius_Hench::pClassPointer = NULL;

class UClass* USFXPower_Incinerate_Radius_Hench::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_Incinerate_Radius_Hench" );

		return pClassPointer;
	};



class UClass* USFXPower_IncinerateInstant_Radius::pClassPointer = NULL;

class UClass* USFXPower_IncinerateInstant_Radius::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_IncinerateInstant_Radius" );

		return pClassPointer;
	};



class UClass* USFXPower_MordinPassive::pClassPointer = NULL;

class UClass* USFXPower_MordinPassive::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_MordinPassive" );

		return pClassPointer;
	};



class UClass* USFXPowerScript_MordinPassive::pClassPointer = NULL;

class UClass* USFXPowerScript_MordinPassive::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPowerScript_MordinPassive" );

		return pClassPointer;
	};

// Function SFXGameContent_Powers.SFXPowerScript_MordinPassive.ApplyGlobalBonus
// [0x00020002] 
// Parameters infos:

void USFXPowerScript_MordinPassive::ApplyGlobalBonus ( )
{
	static UFunction* pFnApplyGlobalBonus = NULL;

	if ( ! pFnApplyGlobalBonus )
		pFnApplyGlobalBonus = UObject::FindObject< UFunction > ( L"Function SFXGameContent_Powers.SFXPowerScript_MordinPassive.ApplyGlobalBonus" );

	USFXPowerScript_MordinPassive_execApplyGlobalBonus_Parms ApplyGlobalBonus_Parms;

	this->ProcessEvent ( pFnApplyGlobalBonus, &ApplyGlobalBonus_Parms, NULL );
};



class UClass* USFXPower_MordinPassive_Evolved1::pClassPointer = NULL;

class UClass* USFXPower_MordinPassive_Evolved1::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_MordinPassive_Evolved1" );

		return pClassPointer;
	};



class UClass* USFXPower_MordinPassive_Evolved2::pClassPointer = NULL;

class UClass* USFXPower_MordinPassive_Evolved2::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_MordinPassive_Evolved2" );

		return pClassPointer;
	};



class UClass* USFXPower_NeuralShock_Heavy::pClassPointer = NULL;

class UClass* USFXPower_NeuralShock_Heavy::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_NeuralShock_Heavy" );

		return pClassPointer;
	};



class UClass* USFXPower_NeuralShock_Radius::pClassPointer = NULL;

class UClass* USFXPower_NeuralShock_Radius::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent_Powers.SFXPower_NeuralShock_Radius" );

		return pClassPointer;
	};



#undef LESDK_IN_GENERATED

#ifdef _MSC_VER
	#pragma pack ( pop )
#endif
