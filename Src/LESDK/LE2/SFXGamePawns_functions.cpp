/*
#############################################################################################
# Mass Effect 2 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.5_Beta-Rev.60-MELE
# ========================================================================================= #
# File: SFXGamePawns_functions.cpp
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



class UClass* ASFXPawn_Tali::pClassPointer = NULL;

class UClass* ASFXPawn_Tali::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGamePawns.SFXPawn_Tali" );

		return pClassPointer;
	};



class UClass* USFXCharacterClass_Vanguard::pClassPointer = NULL;

class UClass* USFXCharacterClass_Vanguard::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGamePawns.SFXCharacterClass_Vanguard" );

		return pClassPointer;
	};



class UClass* ASFXAI_LightMech::pClassPointer = NULL;

class UClass* ASFXAI_LightMech::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGamePawns.SFXAI_LightMech" );

		return pClassPointer;
	};

// Function SFXGamePawns.SFXAI_LightMech.CanCustomActionTerminateEarly
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ASFXAI_LightMech::CanCustomActionTerminateEarly ( )
{
	static UFunction* pFnCanCustomActionTerminateEarly = NULL;

	if ( ! pFnCanCustomActionTerminateEarly )
		pFnCanCustomActionTerminateEarly = UObject::FindObject< UFunction > ( L"Function SFXGamePawns.SFXAI_LightMech.CanCustomActionTerminateEarly" );

	ASFXAI_LightMech_execCanCustomActionTerminateEarly_Parms CanCustomActionTerminateEarly_Parms;

	this->ProcessEvent ( pFnCanCustomActionTerminateEarly, &CanCustomActionTerminateEarly_Parms, NULL );

	return CanCustomActionTerminateEarly_Parms.ReturnValue;
};

// Function SFXGamePawns.SFXAI_LightMech.PeriodicMoveCheck
// [0x00020002] 
// Parameters infos:

void ASFXAI_LightMech::PeriodicMoveCheck ( )
{
	static UFunction* pFnPeriodicMoveCheck = NULL;

	if ( ! pFnPeriodicMoveCheck )
		pFnPeriodicMoveCheck = UObject::FindObject< UFunction > ( L"Function SFXGamePawns.SFXAI_LightMech.PeriodicMoveCheck" );

	ASFXAI_LightMech_execPeriodicMoveCheck_Parms PeriodicMoveCheck_Parms;

	this->ProcessEvent ( pFnPeriodicMoveCheck, &PeriodicMoveCheck_Parms, NULL );
};

// Function SFXGamePawns.SFXAI_LightMech.SetMovementSpeed
// [0x00020002] 
// Parameters infos:

void ASFXAI_LightMech::SetMovementSpeed ( )
{
	static UFunction* pFnSetMovementSpeed = NULL;

	if ( ! pFnSetMovementSpeed )
		pFnSetMovementSpeed = UObject::FindObject< UFunction > ( L"Function SFXGamePawns.SFXAI_LightMech.SetMovementSpeed" );

	ASFXAI_LightMech_execSetMovementSpeed_Parms SetMovementSpeed_Parms;

	this->ProcessEvent ( pFnSetMovementSpeed, &SetMovementSpeed_Parms, NULL );
};

// Function SFXGamePawns.SFXAI_LightMech.DoSuicideBlast
// [0x00020002] 
// Parameters infos:

void ASFXAI_LightMech::DoSuicideBlast ( )
{
	static UFunction* pFnDoSuicideBlast = NULL;

	if ( ! pFnDoSuicideBlast )
		pFnDoSuicideBlast = UObject::FindObject< UFunction > ( L"Function SFXGamePawns.SFXAI_LightMech.DoSuicideBlast" );

	ASFXAI_LightMech_execDoSuicideBlast_Parms DoSuicideBlast_Parms;

	this->ProcessEvent ( pFnDoSuicideBlast, &DoSuicideBlast_Parms, NULL );
};

// Function SFXGamePawns.SFXAI_LightMech.NotifyLimbDetached
// [0x00020002] 
// Parameters infos:
// unsigned char                  ePartGroup                     ( CPF_Parm )

void ASFXAI_LightMech::NotifyLimbDetached ( unsigned char ePartGroup )
{
	static UFunction* pFnNotifyLimbDetached = NULL;

	if ( ! pFnNotifyLimbDetached )
		pFnNotifyLimbDetached = UObject::FindObject< UFunction > ( L"Function SFXGamePawns.SFXAI_LightMech.NotifyLimbDetached" );

	ASFXAI_LightMech_execNotifyLimbDetached_Parms NotifyLimbDetached_Parms;
	NotifyLimbDetached_Parms.ePartGroup = ePartGroup;

	this->ProcessEvent ( pFnNotifyLimbDetached, &NotifyLimbDetached_Parms, NULL );
};

// Function SFXGamePawns.SFXAI_LightMech.SetLeftArmIKEnabled
// [0x00020002] 
// Parameters infos:
// unsigned long                  bEnabled                       ( CPF_Parm )

void ASFXAI_LightMech::SetLeftArmIKEnabled ( unsigned long bEnabled )
{
	static UFunction* pFnSetLeftArmIKEnabled = NULL;

	if ( ! pFnSetLeftArmIKEnabled )
		pFnSetLeftArmIKEnabled = UObject::FindObject< UFunction > ( L"Function SFXGamePawns.SFXAI_LightMech.SetLeftArmIKEnabled" );

	ASFXAI_LightMech_execSetLeftArmIKEnabled_Parms SetLeftArmIKEnabled_Parms;
	SetLeftArmIKEnabled_Parms.bEnabled = bEnabled;

	this->ProcessEvent ( pFnSetLeftArmIKEnabled, &SetLeftArmIKEnabled_Parms, NULL );
};

// Function SFXGamePawns.SFXAI_LightMech.NotifyFireLineBlocked
// [0x00020002] 
// Parameters infos:

void ASFXAI_LightMech::NotifyFireLineBlocked ( )
{
	static UFunction* pFnNotifyFireLineBlocked = NULL;

	if ( ! pFnNotifyFireLineBlocked )
		pFnNotifyFireLineBlocked = UObject::FindObject< UFunction > ( L"Function SFXGamePawns.SFXAI_LightMech.NotifyFireLineBlocked" );

	ASFXAI_LightMech_execNotifyFireLineBlocked_Parms NotifyFireLineBlocked_Parms;

	this->ProcessEvent ( pFnNotifyFireLineBlocked, &NotifyFireLineBlocked_Parms, NULL );
};

// Function SFXGamePawns.SFXAI_LightMech.Initialize
// [0x00020002] 
// Parameters infos:

void ASFXAI_LightMech::Initialize ( )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = UObject::FindObject< UFunction > ( L"Function SFXGamePawns.SFXAI_LightMech.Initialize" );

	ASFXAI_LightMech_execInitialize_Parms Initialize_Parms;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );
};



class UClass* ASFXAI_Turret::pClassPointer = NULL;

class UClass* ASFXAI_Turret::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGamePawns.SFXAI_Turret" );

		return pClassPointer;
	};

// Function SFXGamePawns.SFXAI_Turret.Initialize
// [0x00020002] 
// Parameters infos:

void ASFXAI_Turret::Initialize ( )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = UObject::FindObject< UFunction > ( L"Function SFXGamePawns.SFXAI_Turret.Initialize" );

	ASFXAI_Turret_execInitialize_Parms Initialize_Parms;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );
};



class UClass* ASFXAI_MechanicalTurret::pClassPointer = NULL;

class UClass* ASFXAI_MechanicalTurret::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGamePawns.SFXAI_MechanicalTurret" );

		return pClassPointer;
	};

// Function SFXGamePawns.SFXAI_MechanicalTurret.Initialize
// [0x00020002] 
// Parameters infos:

void ASFXAI_MechanicalTurret::Initialize ( )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = UObject::FindObject< UFunction > ( L"Function SFXGamePawns.SFXAI_MechanicalTurret.Initialize" );

	ASFXAI_MechanicalTurret_execInitialize_Parms Initialize_Parms;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );
};

// Function SFXGamePawns.SFXAI_MechanicalTurret.GetAimLocation
// [0x00820002] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            EnemyIdx                       ( CPF_Parm )
// struct FVector                 StartLoc                       ( CPF_Parm )

struct FVector ASFXAI_MechanicalTurret::GetAimLocation ( int EnemyIdx, struct FVector StartLoc )
{
	static UFunction* pFnGetAimLocation = NULL;

	if ( ! pFnGetAimLocation )
		pFnGetAimLocation = UObject::FindObject< UFunction > ( L"Function SFXGamePawns.SFXAI_MechanicalTurret.GetAimLocation" );

	ASFXAI_MechanicalTurret_execGetAimLocation_Parms GetAimLocation_Parms;
	GetAimLocation_Parms.EnemyIdx = EnemyIdx;
	memcpy ( &GetAimLocation_Parms.StartLoc, &StartLoc, 0xC );

	this->ProcessEvent ( pFnGetAimLocation, &GetAimLocation_Parms, NULL );

	return GetAimLocation_Parms.ReturnValue;
};



class UClass* ASFXAI_MechDog::pClassPointer = NULL;

class UClass* ASFXAI_MechDog::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGamePawns.SFXAI_MechDog" );

		return pClassPointer;
	};

// Function SFXGamePawns.SFXAI_MechDog.SelectTarget
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ASFXAI_MechDog::SelectTarget ( )
{
	static UFunction* pFnSelectTarget = NULL;

	if ( ! pFnSelectTarget )
		pFnSelectTarget = UObject::FindObject< UFunction > ( L"Function SFXGamePawns.SFXAI_MechDog.SelectTarget" );

	ASFXAI_MechDog_execSelectTarget_Parms SelectTarget_Parms;

	this->ProcessEvent ( pFnSelectTarget, &SelectTarget_Parms, NULL );

	return SelectTarget_Parms.ReturnValue;
};

// Function SFXGamePawns.SFXAI_MechDog.SetMovementSpeed
// [0x00020002] 
// Parameters infos:

void ASFXAI_MechDog::SetMovementSpeed ( )
{
	static UFunction* pFnSetMovementSpeed = NULL;

	if ( ! pFnSetMovementSpeed )
		pFnSetMovementSpeed = UObject::FindObject< UFunction > ( L"Function SFXGamePawns.SFXAI_MechDog.SetMovementSpeed" );

	ASFXAI_MechDog_execSetMovementSpeed_Parms SetMovementSpeed_Parms;

	this->ProcessEvent ( pFnSetMovementSpeed, &SetMovementSpeed_Parms, NULL );
};

// Function SFXGamePawns.SFXAI_MechDog.StartRunning
// [0x00020002] 
// Parameters infos:

void ASFXAI_MechDog::StartRunning ( )
{
	static UFunction* pFnStartRunning = NULL;

	if ( ! pFnStartRunning )
		pFnStartRunning = UObject::FindObject< UFunction > ( L"Function SFXGamePawns.SFXAI_MechDog.StartRunning" );

	ASFXAI_MechDog_execStartRunning_Parms StartRunning_Parms;

	this->ProcessEvent ( pFnStartRunning, &StartRunning_Parms, NULL );
};

// Function SFXGamePawns.SFXAI_MechDog.MechDogRun
// [0x00020002] 
// Parameters infos:

void ASFXAI_MechDog::MechDogRun ( )
{
	static UFunction* pFnMechDogRun = NULL;

	if ( ! pFnMechDogRun )
		pFnMechDogRun = UObject::FindObject< UFunction > ( L"Function SFXGamePawns.SFXAI_MechDog.MechDogRun" );

	ASFXAI_MechDog_execMechDogRun_Parms MechDogRun_Parms;

	this->ProcessEvent ( pFnMechDogRun, &MechDogRun_Parms, NULL );
};

// Function SFXGamePawns.SFXAI_MechDog.NotifyTakeHit
// [0x00020002] 
// Parameters infos:
// class AController*             InstigatedBy                   ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// int                            Damage                         ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )

void ASFXAI_MechDog::NotifyTakeHit ( class AController* InstigatedBy, struct FVector HitLocation, int Damage, class UClass* DamageType, struct FVector Momentum )
{
	static UFunction* pFnNotifyTakeHit = NULL;

	if ( ! pFnNotifyTakeHit )
		pFnNotifyTakeHit = UObject::FindObject< UFunction > ( L"Function SFXGamePawns.SFXAI_MechDog.NotifyTakeHit" );

	ASFXAI_MechDog_execNotifyTakeHit_Parms NotifyTakeHit_Parms;
	NotifyTakeHit_Parms.InstigatedBy = InstigatedBy;
	memcpy ( &NotifyTakeHit_Parms.HitLocation, &HitLocation, 0xC );
	NotifyTakeHit_Parms.Damage = Damage;
	NotifyTakeHit_Parms.DamageType = DamageType;
	memcpy ( &NotifyTakeHit_Parms.Momentum, &Momentum, 0xC );

	this->ProcessEvent ( pFnNotifyTakeHit, &NotifyTakeHit_Parms, NULL );
};

// Function SFXGamePawns.SFXAI_MechDog.PeriodicMoveCheck
// [0x00020002] 
// Parameters infos:

void ASFXAI_MechDog::PeriodicMoveCheck ( )
{
	static UFunction* pFnPeriodicMoveCheck = NULL;

	if ( ! pFnPeriodicMoveCheck )
		pFnPeriodicMoveCheck = UObject::FindObject< UFunction > ( L"Function SFXGamePawns.SFXAI_MechDog.PeriodicMoveCheck" );

	ASFXAI_MechDog_execPeriodicMoveCheck_Parms PeriodicMoveCheck_Parms;

	this->ProcessEvent ( pFnPeriodicMoveCheck, &PeriodicMoveCheck_Parms, NULL );
};

// Function SFXGamePawns.SFXAI_MechDog.GetCustomActionState
// [0x00020002] 
// Parameters infos:
// struct SFXName                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  eAction                        ( CPF_Parm )

struct SFXName ASFXAI_MechDog::GetCustomActionState ( unsigned char eAction )
{
	static UFunction* pFnGetCustomActionState = NULL;

	if ( ! pFnGetCustomActionState )
		pFnGetCustomActionState = UObject::FindObject< UFunction > ( L"Function SFXGamePawns.SFXAI_MechDog.GetCustomActionState" );

	ASFXAI_MechDog_execGetCustomActionState_Parms GetCustomActionState_Parms;
	GetCustomActionState_Parms.eAction = eAction;

	this->ProcessEvent ( pFnGetCustomActionState, &GetCustomActionState_Parms, NULL );

	return GetCustomActionState_Parms.ReturnValue;
};

// Function SFXGamePawns.SFXAI_MechDog.CheckForGrowl
// [0x00020002] 
// Parameters infos:

void ASFXAI_MechDog::CheckForGrowl ( )
{
	static UFunction* pFnCheckForGrowl = NULL;

	if ( ! pFnCheckForGrowl )
		pFnCheckForGrowl = UObject::FindObject< UFunction > ( L"Function SFXGamePawns.SFXAI_MechDog.CheckForGrowl" );

	ASFXAI_MechDog_execCheckForGrowl_Parms CheckForGrowl_Parms;

	this->ProcessEvent ( pFnCheckForGrowl, &CheckForGrowl_Parms, NULL );
};

// Function SFXGamePawns.SFXAI_MechDog.IsWithinMeleeRange
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ASFXAI_MechDog::IsWithinMeleeRange ( )
{
	static UFunction* pFnIsWithinMeleeRange = NULL;

	if ( ! pFnIsWithinMeleeRange )
		pFnIsWithinMeleeRange = UObject::FindObject< UFunction > ( L"Function SFXGamePawns.SFXAI_MechDog.IsWithinMeleeRange" );

	ASFXAI_MechDog_execIsWithinMeleeRange_Parms IsWithinMeleeRange_Parms;

	this->ProcessEvent ( pFnIsWithinMeleeRange, &IsWithinMeleeRange_Parms, NULL );

	return IsWithinMeleeRange_Parms.ReturnValue;
};

// Function SFXGamePawns.SFXAI_MechDog.Initialize
// [0x00020002] 
// Parameters infos:

void ASFXAI_MechDog::Initialize ( )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = UObject::FindObject< UFunction > ( L"Function SFXGamePawns.SFXAI_MechDog.Initialize" );

	ASFXAI_MechDog_execInitialize_Parms Initialize_Parms;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );
};



class UClass* ASFXPawn_AssaultDrone::pClassPointer = NULL;

class UClass* ASFXPawn_AssaultDrone::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGamePawns.SFXPawn_AssaultDrone" );

		return pClassPointer;
	};

// Function SFXGamePawns.SFXPawn_AssaultDrone.CanBeBioticCharged
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ASFXPawn_AssaultDrone::CanBeBioticCharged ( )
{
	static UFunction* pFnCanBeBioticCharged = NULL;

	if ( ! pFnCanBeBioticCharged )
		pFnCanBeBioticCharged = UObject::FindObject< UFunction > ( L"Function SFXGamePawns.SFXPawn_AssaultDrone.CanBeBioticCharged" );

	ASFXPawn_AssaultDrone_execCanBeBioticCharged_Parms CanBeBioticCharged_Parms;

	this->ProcessEvent ( pFnCanBeBioticCharged, &CanBeBioticCharged_Parms, NULL );

	return CanBeBioticCharged_Parms.ReturnValue;
};



class UClass* ASFXPawn_LightMech::pClassPointer = NULL;

class UClass* ASFXPawn_LightMech::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGamePawns.SFXPawn_LightMech" );

		return pClassPointer;
	};

// Function SFXGamePawns.SFXPawn_LightMech.CanPlayDeathEffect
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class USFXGameEffect*          GE                             ( CPF_Parm )

bool ASFXPawn_LightMech::CanPlayDeathEffect ( class USFXGameEffect* GE )
{
	static UFunction* pFnCanPlayDeathEffect = NULL;

	if ( ! pFnCanPlayDeathEffect )
		pFnCanPlayDeathEffect = UObject::FindObject< UFunction > ( L"Function SFXGamePawns.SFXPawn_LightMech.CanPlayDeathEffect" );

	ASFXPawn_LightMech_execCanPlayDeathEffect_Parms CanPlayDeathEffect_Parms;
	CanPlayDeathEffect_Parms.GE = GE;

	this->ProcessEvent ( pFnCanPlayDeathEffect, &CanPlayDeathEffect_Parms, NULL );

	return CanPlayDeathEffect_Parms.ReturnValue;
};



class UClass* ASFXPawn_MechDog::pClassPointer = NULL;

class UClass* ASFXPawn_MechDog::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGamePawns.SFXPawn_MechDog" );

		return pClassPointer;
	};

// Function SFXGamePawns.SFXPawn_MechDog.CanPlayDeathEffect
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class USFXGameEffect*          GE                             ( CPF_Parm )

bool ASFXPawn_MechDog::CanPlayDeathEffect ( class USFXGameEffect* GE )
{
	static UFunction* pFnCanPlayDeathEffect = NULL;

	if ( ! pFnCanPlayDeathEffect )
		pFnCanPlayDeathEffect = UObject::FindObject< UFunction > ( L"Function SFXGamePawns.SFXPawn_MechDog.CanPlayDeathEffect" );

	ASFXPawn_MechDog_execCanPlayDeathEffect_Parms CanPlayDeathEffect_Parms;
	CanPlayDeathEffect_Parms.GE = GE;

	this->ProcessEvent ( pFnCanPlayDeathEffect, &CanPlayDeathEffect_Parms, NULL );

	return CanPlayDeathEffect_Parms.ReturnValue;
};



class UClass* ASFXPawn_RocketDrone::pClassPointer = NULL;

class UClass* ASFXPawn_RocketDrone::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGamePawns.SFXPawn_RocketDrone" );

		return pClassPointer;
	};

// Function SFXGamePawns.SFXPawn_RocketDrone.CanBeBioticCharged
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ASFXPawn_RocketDrone::CanBeBioticCharged ( )
{
	static UFunction* pFnCanBeBioticCharged = NULL;

	if ( ! pFnCanBeBioticCharged )
		pFnCanBeBioticCharged = UObject::FindObject< UFunction > ( L"Function SFXGamePawns.SFXPawn_RocketDrone.CanBeBioticCharged" );

	ASFXPawn_RocketDrone_execCanBeBioticCharged_Parms CanBeBioticCharged_Parms;

	this->ProcessEvent ( pFnCanBeBioticCharged, &CanBeBioticCharged_Parms, NULL );

	return CanBeBioticCharged_Parms.ReturnValue;
};



class UClass* ASFXPawn_Miranda::pClassPointer = NULL;

class UClass* ASFXPawn_Miranda::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGamePawns.SFXPawn_Miranda" );

		return pClassPointer;
	};



class UClass* ASFXPawn_Jacob::pClassPointer = NULL;

class UClass* ASFXPawn_Jacob::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGamePawns.SFXPawn_Jacob" );

		return pClassPointer;
	};



#undef LESDK_IN_GENERATED

#ifdef _MSC_VER
	#pragma pack ( pop )
#endif
