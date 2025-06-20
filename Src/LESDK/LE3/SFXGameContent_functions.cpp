/*
#############################################################################################
# Mass Effect 3 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.5_Beta-Rev.60-MELE
# ========================================================================================= #
# File: SFXGameContent_functions.cpp
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL, SirCxyrtyx
# Thanks: HOOAH07, lowHertz
#############################################################################################
*/


#include "LESDK/Includes.LE3.hpp"


#ifdef _MSC_VER
	#pragma pack ( push, 0x4 )
#endif
#define LESDK_IN_GENERATED


/*
# ========================================================================================= #
# Functions
# ========================================================================================= #
*/



class UClass* ASFXVocalizationManagerSP::pClassPointer = NULL;

class UClass* ASFXVocalizationManagerSP::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXVocalizationManagerSP" );

		return pClassPointer;
	};



class UClass* ASFXGRISP::pClassPointer = NULL;

class UClass* ASFXGRISP::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXGRISP" );

		return pClassPointer;
	};



class UClass* ASFXGameInfoSP::pClassPointer = NULL;

class UClass* ASFXGameInfoSP::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXGameInfoSP" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXGameInfoSP.AwardItem
// [0x00024002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct SFXName                 ItemName                       ( CPF_Parm )
// FString                        Level                          ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool ASFXGameInfoSP::AwardItem ( struct SFXName ItemName, FString const& Level )
{
	static UFunction* pFnAwardItem = NULL;

	if ( ! pFnAwardItem )
		pFnAwardItem = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameInfoSP.AwardItem" );

	ASFXGameInfoSP_execAwardItem_Parms AwardItem_Parms;
	memcpy ( &AwardItem_Parms.ItemName, &ItemName, 0x8 );
	memcpy ( &AwardItem_Parms.Level, &Level, 0x10 );

	this->ProcessEvent ( pFnAwardItem, &AwardItem_Parms, NULL );

	return AwardItem_Parms.ReturnValue;
};

// Function SFXGameContent.SFXGameInfoSP.AwardCredits
// [0x00024002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Amount                         ( CPF_Parm )
// FString                        Level                          ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bShowNotification              ( CPF_OptionalParm | CPF_Parm )

bool ASFXGameInfoSP::AwardCredits ( int Amount, FString const& Level, unsigned long bShowNotification )
{
	static UFunction* pFnAwardCredits = NULL;

	if ( ! pFnAwardCredits )
		pFnAwardCredits = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameInfoSP.AwardCredits" );

	ASFXGameInfoSP_execAwardCredits_Parms AwardCredits_Parms;
	AwardCredits_Parms.Amount = Amount;
	memcpy ( &AwardCredits_Parms.Level, &Level, 0x10 );
	AwardCredits_Parms.bShowNotification = bShowNotification;

	this->ProcessEvent ( pFnAwardCredits, &AwardCredits_Parms, NULL );

	return AwardCredits_Parms.ReturnValue;
};

// Function SFXGameContent.SFXGameInfoSP.AwardCreditPercent
// [0x00024002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          fAmount                        ( CPF_Parm )
// FString                        Level                          ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bShowNotifications             ( CPF_OptionalParm | CPF_Parm )

bool ASFXGameInfoSP::AwardCreditPercent ( float fAmount, FString const& Level, unsigned long bShowNotifications )
{
	static UFunction* pFnAwardCreditPercent = NULL;

	if ( ! pFnAwardCreditPercent )
		pFnAwardCreditPercent = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameInfoSP.AwardCreditPercent" );

	ASFXGameInfoSP_execAwardCreditPercent_Parms AwardCreditPercent_Parms;
	AwardCreditPercent_Parms.fAmount = fAmount;
	memcpy ( &AwardCreditPercent_Parms.Level, &Level, 0x10 );
	AwardCreditPercent_Parms.bShowNotifications = bShowNotifications;

	this->ProcessEvent ( pFnAwardCreditPercent, &AwardCreditPercent_Parms, NULL );

	return AwardCreditPercent_Parms.ReturnValue;
};

// Function SFXGameContent.SFXGameInfoSP.AwardXP
// [0x00024002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Amount                         ( CPF_Parm )
// FString                        Level                          ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bShowNotifications             ( CPF_OptionalParm | CPF_Parm )

bool ASFXGameInfoSP::AwardXP ( int Amount, FString const& Level, unsigned long bShowNotifications )
{
	static UFunction* pFnAwardXP = NULL;

	if ( ! pFnAwardXP )
		pFnAwardXP = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameInfoSP.AwardXP" );

	ASFXGameInfoSP_execAwardXP_Parms AwardXP_Parms;
	AwardXP_Parms.Amount = Amount;
	memcpy ( &AwardXP_Parms.Level, &Level, 0x10 );
	AwardXP_Parms.bShowNotifications = bShowNotifications;

	this->ProcessEvent ( pFnAwardXP, &AwardXP_Parms, NULL );

	return AwardXP_Parms.ReturnValue;
};

// Function SFXGameContent.SFXGameInfoSP.FindPlayerStart
// [0x00024002]
// Parameters infos:
// class ANavigationPoint*        ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AController*             Player                         ( CPF_Parm )
// unsigned char                  InTeam                         ( CPF_OptionalParm | CPF_Parm )
// FString                        IncomingName                   ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

class ANavigationPoint* ASFXGameInfoSP::FindPlayerStart ( class AController* Player, unsigned char InTeam, FString const& IncomingName )
{
	static UFunction* pFnFindPlayerStart = NULL;

	if ( ! pFnFindPlayerStart )
		pFnFindPlayerStart = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameInfoSP.FindPlayerStart" );

	ASFXGameInfoSP_execFindPlayerStart_Parms FindPlayerStart_Parms;
	FindPlayerStart_Parms.Player = Player;
	FindPlayerStart_Parms.InTeam = InTeam;
	memcpy ( &FindPlayerStart_Parms.IncomingName, &IncomingName, 0x10 );

	this->ProcessEvent ( pFnFindPlayerStart, &FindPlayerStart_Parms, NULL );

	return FindPlayerStart_Parms.ReturnValue;
};

// Function SFXGameContent.SFXGameInfoSP.PostBeginPlay
// [0x00020902] ( FUNC_Simulated | FUNC_Event )
// Parameters infos:

void ASFXGameInfoSP::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameInfoSP.PostBeginPlay" );

	ASFXGameInfoSP_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};



class UClass* USFXDamageType_AssaultRifle::pClassPointer = NULL;

class UClass* USFXDamageType_AssaultRifle::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXDamageType_AssaultRifle" );

		return pClassPointer;
	};



class UClass* USFXDamageType_HeavyPistol::pClassPointer = NULL;

class UClass* USFXDamageType_HeavyPistol::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXDamageType_HeavyPistol" );

		return pClassPointer;
	};



class UClass* USFXDamageType_MattockAssaultRifle::pClassPointer = NULL;

class UClass* USFXDamageType_MattockAssaultRifle::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXDamageType_MattockAssaultRifle" );

		return pClassPointer;
	};



class UClass* USFXGUI_HeavyWeaponReticle::pClassPointer = NULL;

class UClass* USFXGUI_HeavyWeaponReticle::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXGUI_HeavyWeaponReticle" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXGUI_HeavyWeaponReticle.TargetCanHitChanged
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// unsigned long                  bCanHit                        ( CPF_Parm )

void USFXGUI_HeavyWeaponReticle::eventTargetCanHitChanged ( unsigned long bCanHit )
{
	static UFunction* pFnTargetCanHitChanged = NULL;

	if ( ! pFnTargetCanHitChanged )
		pFnTargetCanHitChanged = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGUI_HeavyWeaponReticle.TargetCanHitChanged" );

	USFXGUI_HeavyWeaponReticle_eventTargetCanHitChanged_Parms TargetCanHitChanged_Parms;
	TargetCanHitChanged_Parms.bCanHit = bCanHit;

	this->ProcessEvent ( pFnTargetCanHitChanged, &TargetCanHitChanged_Parms, NULL );
};

// Function SFXGameContent.SFXGUI_HeavyWeaponReticle.WeaponAmmoChanged
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// int                            nAmmo                          ( CPF_Parm )

void USFXGUI_HeavyWeaponReticle::eventWeaponAmmoChanged ( int nAmmo )
{
	static UFunction* pFnWeaponAmmoChanged = NULL;

	if ( ! pFnWeaponAmmoChanged )
		pFnWeaponAmmoChanged = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGUI_HeavyWeaponReticle.WeaponAmmoChanged" );

	USFXGUI_HeavyWeaponReticle_eventWeaponAmmoChanged_Parms WeaponAmmoChanged_Parms;
	WeaponAmmoChanged_Parms.nAmmo = nAmmo;

	this->ProcessEvent ( pFnWeaponAmmoChanged, &WeaponAmmoChanged_Parms, NULL );
};

// Function SFXGameContent.SFXGUI_HeavyWeaponReticle.OnReticleLoaded
// [0x00020002]
// Parameters infos:

void USFXGUI_HeavyWeaponReticle::OnReticleLoaded ( )
{
	static UFunction* pFnOnReticleLoaded = NULL;

	if ( ! pFnOnReticleLoaded )
		pFnOnReticleLoaded = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGUI_HeavyWeaponReticle.OnReticleLoaded" );

	USFXGUI_HeavyWeaponReticle_execOnReticleLoaded_Parms OnReticleLoaded_Parms;

	this->ProcessEvent ( pFnOnReticleLoaded, &OnReticleLoaded_Parms, NULL );
};

// Function SFXGameContent.SFXGUI_HeavyWeaponReticle.PerformReticleHide
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// unsigned long                  bInstant                       ( CPF_Parm )

void USFXGUI_HeavyWeaponReticle::eventPerformReticleHide ( unsigned long bInstant )
{
	static UFunction* pFnPerformReticleHide = NULL;

	if ( ! pFnPerformReticleHide )
		pFnPerformReticleHide = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGUI_HeavyWeaponReticle.PerformReticleHide" );

	USFXGUI_HeavyWeaponReticle_eventPerformReticleHide_Parms PerformReticleHide_Parms;
	PerformReticleHide_Parms.bInstant = bInstant;

	this->ProcessEvent ( pFnPerformReticleHide, &PerformReticleHide_Parms, NULL );
};

// Function SFXGameContent.SFXGUI_HeavyWeaponReticle.PerformReticleShow
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// unsigned long                  bInstant                       ( CPF_Parm )

void USFXGUI_HeavyWeaponReticle::eventPerformReticleShow ( unsigned long bInstant )
{
	static UFunction* pFnPerformReticleShow = NULL;

	if ( ! pFnPerformReticleShow )
		pFnPerformReticleShow = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGUI_HeavyWeaponReticle.PerformReticleShow" );

	USFXGUI_HeavyWeaponReticle_eventPerformReticleShow_Parms PerformReticleShow_Parms;
	PerformReticleShow_Parms.bInstant = bInstant;

	this->ProcessEvent ( pFnPerformReticleShow, &PerformReticleShow_Parms, NULL );
};



class UClass* USFXSeqAct_GiveStartingConsumables::pClassPointer = NULL;

class UClass* USFXSeqAct_GiveStartingConsumables::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXSeqAct_GiveStartingConsumables" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXSeqAct_GiveStartingConsumables.Activated
// [0x00020002]
// Parameters infos:

void USFXSeqAct_GiveStartingConsumables::Activated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXSeqAct_GiveStartingConsumables.Activated" );

	USFXSeqAct_GiveStartingConsumables_execActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};



class UClass* USFXSeqAct_OpenWeaponSelection::pClassPointer = NULL;

class UClass* USFXSeqAct_OpenWeaponSelection::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXSeqAct_OpenWeaponSelection" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXSeqAct_OpenWeaponSelection.OnMovieClosedDelegate
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class USFXGUIMovie*            i_ScreenToClose                ( CPF_Parm )

bool USFXSeqAct_OpenWeaponSelection::OnMovieClosedDelegate ( class USFXGUIMovie* i_ScreenToClose )
{
	static UFunction* pFnOnMovieClosedDelegate = NULL;

	if ( ! pFnOnMovieClosedDelegate )
		pFnOnMovieClosedDelegate = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXSeqAct_OpenWeaponSelection.OnMovieClosedDelegate" );

	USFXSeqAct_OpenWeaponSelection_execOnMovieClosedDelegate_Parms OnMovieClosedDelegate_Parms;
	OnMovieClosedDelegate_Parms.i_ScreenToClose = i_ScreenToClose;

	this->ProcessEvent ( pFnOnMovieClosedDelegate, &OnMovieClosedDelegate_Parms, NULL );

	return OnMovieClosedDelegate_Parms.ReturnValue;
};

// Function SFXGameContent.SFXSeqAct_OpenWeaponSelection.UpdateOp
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          fDeltaT                        ( CPF_Parm )

bool USFXSeqAct_OpenWeaponSelection::UpdateOp ( float fDeltaT )
{
	static UFunction* pFnUpdateOp = NULL;

	if ( ! pFnUpdateOp )
		pFnUpdateOp = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXSeqAct_OpenWeaponSelection.UpdateOp" );

	USFXSeqAct_OpenWeaponSelection_execUpdateOp_Parms UpdateOp_Parms;
	UpdateOp_Parms.fDeltaT = fDeltaT;

	this->ProcessEvent ( pFnUpdateOp, &UpdateOp_Parms, NULL );

	return UpdateOp_Parms.ReturnValue;
};

// Function SFXGameContent.SFXSeqAct_OpenWeaponSelection.Activated
// [0x00020002]
// Parameters infos:

void USFXSeqAct_OpenWeaponSelection::Activated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXSeqAct_OpenWeaponSelection.Activated" );

	USFXSeqAct_OpenWeaponSelection_execActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};



class UClass* ASFXShield_Energy_Player::pClassPointer = NULL;

class UClass* ASFXShield_Energy_Player::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXShield_Energy_Player" );

		return pClassPointer;
	};



class UClass* ASFXWeapon_AssaultRifle_Avenger::pClassPointer = NULL;

class UClass* ASFXWeapon_AssaultRifle_Avenger::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXWeapon_AssaultRifle_Avenger" );

		return pClassPointer;
	};



class UClass* ASFXWeapon_AssaultRifle_Mattock::pClassPointer = NULL;

class UClass* ASFXWeapon_AssaultRifle_Mattock::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXWeapon_AssaultRifle_Mattock" );

		return pClassPointer;
	};



class UClass* ASFXWeapon_Heavy_Beam_Base::pClassPointer = NULL;

class UClass* ASFXWeapon_Heavy_Beam_Base::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXWeapon_Heavy_Beam_Base" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXWeapon_Heavy_Beam_Base.GetAdjustedAim
// [0x00020102] ( FUNC_Simulated )
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 StartFireLoc                   ( CPF_Parm )

struct FRotator ASFXWeapon_Heavy_Beam_Base::GetAdjustedAim ( struct FVector const& StartFireLoc )
{
	static UFunction* pFnGetAdjustedAim = NULL;

	if ( ! pFnGetAdjustedAim )
		pFnGetAdjustedAim = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXWeapon_Heavy_Beam_Base.GetAdjustedAim" );

	ASFXWeapon_Heavy_Beam_Base_execGetAdjustedAim_Parms GetAdjustedAim_Parms;
	memcpy ( &GetAdjustedAim_Parms.StartFireLoc, &StartFireLoc, 0xC );

	this->ProcessEvent ( pFnGetAdjustedAim, &GetAdjustedAim_Parms, NULL );

	return GetAdjustedAim_Parms.ReturnValue;
};

// Function SFXGameContent.SFXWeapon_Heavy_Beam_Base.PreCalculateAdjustedAim
// [0x00080002]
// Parameters infos:
// float                          fDeltaTime                     ( CPF_Parm )

void ASFXWeapon_Heavy_Beam_Base::PreCalculateAdjustedAim ( float fDeltaTime )
{
	static UFunction* pFnPreCalculateAdjustedAim = NULL;

	if ( ! pFnPreCalculateAdjustedAim )
		pFnPreCalculateAdjustedAim = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXWeapon_Heavy_Beam_Base.PreCalculateAdjustedAim" );

	ASFXWeapon_Heavy_Beam_Base_execPreCalculateAdjustedAim_Parms PreCalculateAdjustedAim_Parms;
	PreCalculateAdjustedAim_Parms.fDeltaTime = fDeltaTime;

	this->ProcessEvent ( pFnPreCalculateAdjustedAim, &PreCalculateAdjustedAim_Parms, NULL );
};

// Function SFXGameContent.SFXWeapon_Heavy_Beam_Base.UpdateBeam
// [0x00020102] ( FUNC_Simulated )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ASFXWeapon_Heavy_Beam_Base::UpdateBeam ( float DeltaTime )
{
	static UFunction* pFnUpdateBeam = NULL;

	if ( ! pFnUpdateBeam )
		pFnUpdateBeam = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXWeapon_Heavy_Beam_Base.UpdateBeam" );

	ASFXWeapon_Heavy_Beam_Base_execUpdateBeam_Parms UpdateBeam_Parms;
	UpdateBeam_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnUpdateBeam, &UpdateBeam_Parms, NULL );
};

// Function SFXGameContent.SFXWeapon_Heavy_Beam_Base.ProcessInstantHit
// [0x00024102] ( FUNC_Simulated )
// Parameters infos:
// unsigned char                  FiringMode                     ( CPF_Parm )
// struct FImpactInfo             Impact                         ( CPF_Parm )
// int                            NumHits                        ( CPF_OptionalParm | CPF_Parm )

void ASFXWeapon_Heavy_Beam_Base::ProcessInstantHit ( unsigned char FiringMode, struct FImpactInfo const& Impact, int NumHits )
{
	static UFunction* pFnProcessInstantHit = NULL;

	if ( ! pFnProcessInstantHit )
		pFnProcessInstantHit = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXWeapon_Heavy_Beam_Base.ProcessInstantHit" );

	ASFXWeapon_Heavy_Beam_Base_execProcessInstantHit_Parms ProcessInstantHit_Parms;
	ProcessInstantHit_Parms.FiringMode = FiringMode;
	memcpy ( &ProcessInstantHit_Parms.Impact, &Impact, 0x64 );
	ProcessInstantHit_Parms.NumHits = NumHits;

	this->ProcessEvent ( pFnProcessInstantHit, &ProcessInstantHit_Parms, NULL );
};

// Function SFXGameContent.SFXWeapon_Heavy_Beam_Base.CalcFireStart
// [0x00020002]
// Parameters infos:

void ASFXWeapon_Heavy_Beam_Base::CalcFireStart ( )
{
	static UFunction* pFnCalcFireStart = NULL;

	if ( ! pFnCalcFireStart )
		pFnCalcFireStart = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXWeapon_Heavy_Beam_Base.CalcFireStart" );

	ASFXWeapon_Heavy_Beam_Base_execCalcFireStart_Parms CalcFireStart_Parms;

	this->ProcessEvent ( pFnCalcFireStart, &CalcFireStart_Parms, NULL );
};

// Function SFXGameContent.SFXWeapon_Heavy_Beam_Base.StopFire
// [0x00020102] ( FUNC_Simulated )
// Parameters infos:
// unsigned char                  FireModeNum                    ( CPF_Parm )

void ASFXWeapon_Heavy_Beam_Base::StopFire ( unsigned char FireModeNum )
{
	static UFunction* pFnStopFire = NULL;

	if ( ! pFnStopFire )
		pFnStopFire = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXWeapon_Heavy_Beam_Base.StopFire" );

	ASFXWeapon_Heavy_Beam_Base_execStopFire_Parms StopFire_Parms;
	StopFire_Parms.FireModeNum = FireModeNum;

	this->ProcessEvent ( pFnStopFire, &StopFire_Parms, NULL );
};

// Function SFXGameContent.SFXWeapon_Heavy_Beam_Base.StartFire
// [0x00020102] ( FUNC_Simulated )
// Parameters infos:
// unsigned char                  FireModeNum                    ( CPF_Parm )

void ASFXWeapon_Heavy_Beam_Base::StartFire ( unsigned char FireModeNum )
{
	static UFunction* pFnStartFire = NULL;

	if ( ! pFnStartFire )
		pFnStartFire = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXWeapon_Heavy_Beam_Base.StartFire" );

	ASFXWeapon_Heavy_Beam_Base_execStartFire_Parms StartFire_Parms;
	StartFire_Parms.FireModeNum = FireModeNum;

	this->ProcessEvent ( pFnStartFire, &StartFire_Parms, NULL );
};

// Function SFXGameContent.SFXWeapon_Heavy_Beam_Base.Tick
// [0x00020102] ( FUNC_Simulated )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ASFXWeapon_Heavy_Beam_Base::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXWeapon_Heavy_Beam_Base.Tick" );

	ASFXWeapon_Heavy_Beam_Base_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function SFXGameContent.SFXWeapon_Heavy_Beam_Base.SpawnImpactEffects
// [0x00020102] ( FUNC_Simulated )
// Parameters infos:
// struct FImpactInfo             Impact                         ( CPF_Parm )

void ASFXWeapon_Heavy_Beam_Base::SpawnImpactEffects ( struct FImpactInfo const& Impact )
{
	static UFunction* pFnSpawnImpactEffects = NULL;

	if ( ! pFnSpawnImpactEffects )
		pFnSpawnImpactEffects = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXWeapon_Heavy_Beam_Base.SpawnImpactEffects" );

	ASFXWeapon_Heavy_Beam_Base_execSpawnImpactEffects_Parms SpawnImpactEffects_Parms;
	memcpy ( &SpawnImpactEffects_Parms.Impact, &Impact, 0x64 );

	this->ProcessEvent ( pFnSpawnImpactEffects, &SpawnImpactEffects_Parms, NULL );
};

// Function SFXGameContent.SFXWeapon_Heavy_Beam_Base.GetWeaponSpecificImpactSound
// [0x00020102] ( FUNC_Simulated )
// Parameters infos:
// class UWwiseEvent*             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class USFXPhysicalMaterialImpactSounds* ImpactSounds                   ( CPF_Parm )

class UWwiseEvent* ASFXWeapon_Heavy_Beam_Base::GetWeaponSpecificImpactSound ( class USFXPhysicalMaterialImpactSounds* ImpactSounds )
{
	static UFunction* pFnGetWeaponSpecificImpactSound = NULL;

	if ( ! pFnGetWeaponSpecificImpactSound )
		pFnGetWeaponSpecificImpactSound = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXWeapon_Heavy_Beam_Base.GetWeaponSpecificImpactSound" );

	ASFXWeapon_Heavy_Beam_Base_execGetWeaponSpecificImpactSound_Parms GetWeaponSpecificImpactSound_Parms;
	GetWeaponSpecificImpactSound_Parms.ImpactSounds = ImpactSounds;

	this->ProcessEvent ( pFnGetWeaponSpecificImpactSound, &GetWeaponSpecificImpactSound_Parms, NULL );

	return GetWeaponSpecificImpactSound_Parms.ReturnValue;
};

// Function SFXGameContent.SFXWeapon_Heavy_Beam_Base.GetWeaponSpecificImpactEffect
// [0x00022102] ( FUNC_Simulated )
// Parameters infos:
// class UParticleSystem*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class USFXPhysicalMaterialImpactEffects* ImpactEffects                  ( CPF_Parm )

class UParticleSystem* ASFXWeapon_Heavy_Beam_Base::GetWeaponSpecificImpactEffect ( class USFXPhysicalMaterialImpactEffects* ImpactEffects )
{
	static UFunction* pFnGetWeaponSpecificImpactEffect = NULL;

	if ( ! pFnGetWeaponSpecificImpactEffect )
		pFnGetWeaponSpecificImpactEffect = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXWeapon_Heavy_Beam_Base.GetWeaponSpecificImpactEffect" );

	ASFXWeapon_Heavy_Beam_Base_execGetWeaponSpecificImpactEffect_Parms GetWeaponSpecificImpactEffect_Parms;
	GetWeaponSpecificImpactEffect_Parms.ImpactEffects = ImpactEffects;

	this->ProcessEvent ( pFnGetWeaponSpecificImpactEffect, &GetWeaponSpecificImpactEffect_Parms, NULL );

	return GetWeaponSpecificImpactEffect_Parms.ReturnValue;
};

// Function SFXGameContent.SFXWeapon_Heavy_Beam_Base.GetWeaponSpecificDecalData
// [0x00420102] ( FUNC_Simulated )
// Parameters infos:
// class UDecalComponent*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
// class USFXPhysicalMaterialDecals* DecalEffects                   ( CPF_Parm )
// float                          FadeTime                       ( CPF_Parm | CPF_OutParm )

class UDecalComponent* ASFXWeapon_Heavy_Beam_Base::GetWeaponSpecificDecalData ( class USFXPhysicalMaterialDecals* DecalEffects, float* FadeTime )
{
	static UFunction* pFnGetWeaponSpecificDecalData = NULL;

	if ( ! pFnGetWeaponSpecificDecalData )
		pFnGetWeaponSpecificDecalData = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXWeapon_Heavy_Beam_Base.GetWeaponSpecificDecalData" );

	ASFXWeapon_Heavy_Beam_Base_execGetWeaponSpecificDecalData_Parms GetWeaponSpecificDecalData_Parms;
	GetWeaponSpecificDecalData_Parms.DecalEffects = DecalEffects;

	if ( FadeTime )
		GetWeaponSpecificDecalData_Parms.FadeTime = *FadeTime;

	this->ProcessEvent ( pFnGetWeaponSpecificDecalData, &GetWeaponSpecificDecalData_Parms, NULL );

	if ( FadeTime )
		*FadeTime = GetWeaponSpecificDecalData_Parms.FadeTime;

	return GetWeaponSpecificDecalData_Parms.ReturnValue;
};

// Function SFXGameContent.SFXWeapon_Heavy_Beam_Base.StopMuzzleFlashEffect
// [0x00020102] ( FUNC_Simulated )
// Parameters infos:

void ASFXWeapon_Heavy_Beam_Base::StopMuzzleFlashEffect ( )
{
	static UFunction* pFnStopMuzzleFlashEffect = NULL;

	if ( ! pFnStopMuzzleFlashEffect )
		pFnStopMuzzleFlashEffect = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXWeapon_Heavy_Beam_Base.StopMuzzleFlashEffect" );

	ASFXWeapon_Heavy_Beam_Base_execStopMuzzleFlashEffect_Parms StopMuzzleFlashEffect_Parms;

	this->ProcessEvent ( pFnStopMuzzleFlashEffect, &StopMuzzleFlashEffect_Parms, NULL );
};

// Function SFXGameContent.SFXWeapon_Heavy_Beam_Base.PlayMuzzleFlashEffect
// [0x00020102] ( FUNC_Simulated )
// Parameters infos:

void ASFXWeapon_Heavy_Beam_Base::PlayMuzzleFlashEffect ( )
{
	static UFunction* pFnPlayMuzzleFlashEffect = NULL;

	if ( ! pFnPlayMuzzleFlashEffect )
		pFnPlayMuzzleFlashEffect = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXWeapon_Heavy_Beam_Base.PlayMuzzleFlashEffect" );

	ASFXWeapon_Heavy_Beam_Base_execPlayMuzzleFlashEffect_Parms PlayMuzzleFlashEffect_Parms;

	this->ProcessEvent ( pFnPlayMuzzleFlashEffect, &PlayMuzzleFlashEffect_Parms, NULL );
};

// Function SFXGameContent.SFXWeapon_Heavy_Beam_Base.StretchDecal
// [0x00020102] ( FUNC_Simulated )
// Parameters infos:
// struct FImpactInfo             Impact                         ( CPF_Parm )

void ASFXWeapon_Heavy_Beam_Base::StretchDecal ( struct FImpactInfo const& Impact )
{
	static UFunction* pFnStretchDecal = NULL;

	if ( ! pFnStretchDecal )
		pFnStretchDecal = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXWeapon_Heavy_Beam_Base.StretchDecal" );

	ASFXWeapon_Heavy_Beam_Base_execStretchDecal_Parms StretchDecal_Parms;
	memcpy ( &StretchDecal_Parms.Impact, &Impact, 0x64 );

	this->ProcessEvent ( pFnStretchDecal, &StretchDecal_Parms, NULL );
};

// Function SFXGameContent.SFXWeapon_Heavy_Beam_Base.SpawnADecal
// [0x00020102] ( FUNC_Simulated )
// Parameters infos:
// struct FImpactInfo             Impact                         ( CPF_Parm )

void ASFXWeapon_Heavy_Beam_Base::SpawnADecal ( struct FImpactInfo const& Impact )
{
	static UFunction* pFnSpawnADecal = NULL;

	if ( ! pFnSpawnADecal )
		pFnSpawnADecal = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXWeapon_Heavy_Beam_Base.SpawnADecal" );

	ASFXWeapon_Heavy_Beam_Base_execSpawnADecal_Parms SpawnADecal_Parms;
	memcpy ( &SpawnADecal_Parms.Impact, &Impact, 0x64 );

	this->ProcessEvent ( pFnSpawnADecal, &SpawnADecal_Parms, NULL );
};

// Function SFXGameContent.SFXWeapon_Heavy_Beam_Base.InitDefaultDecalProperties
// [0x00020102] ( FUNC_Simulated )
// Parameters infos:

void ASFXWeapon_Heavy_Beam_Base::InitDefaultDecalProperties ( )
{
	static UFunction* pFnInitDefaultDecalProperties = NULL;

	if ( ! pFnInitDefaultDecalProperties )
		pFnInitDefaultDecalProperties = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXWeapon_Heavy_Beam_Base.InitDefaultDecalProperties" );

	ASFXWeapon_Heavy_Beam_Base_execInitDefaultDecalProperties_Parms InitDefaultDecalProperties_Parms;

	this->ProcessEvent ( pFnInitDefaultDecalProperties, &InitDefaultDecalProperties_Parms, NULL );
};



class UClass* ASFXWeapon_Heavy_LegionDisinfectionWeapon::pClassPointer = NULL;

class UClass* ASFXWeapon_Heavy_LegionDisinfectionWeapon::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXWeapon_Heavy_LegionDisinfectionWeapon" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXWeapon_Heavy_LegionDisinfectionWeapon.OutOfAmmo
// [0x00020102] ( FUNC_Simulated )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ASFXWeapon_Heavy_LegionDisinfectionWeapon::OutOfAmmo ( )
{
	static UFunction* pFnOutOfAmmo = NULL;

	if ( ! pFnOutOfAmmo )
		pFnOutOfAmmo = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXWeapon_Heavy_LegionDisinfectionWeapon.OutOfAmmo" );

	ASFXWeapon_Heavy_LegionDisinfectionWeapon_execOutOfAmmo_Parms OutOfAmmo_Parms;

	this->ProcessEvent ( pFnOutOfAmmo, &OutOfAmmo_Parms, NULL );

	return OutOfAmmo_Parms.ReturnValue;
};

// Function SFXGameContent.SFXWeapon_Heavy_LegionDisinfectionWeapon.InitDefaultDecalProperties
// [0x00020100] ( FUNC_Simulated )
// Parameters infos:

void ASFXWeapon_Heavy_LegionDisinfectionWeapon::InitDefaultDecalProperties ( )
{
	static UFunction* pFnInitDefaultDecalProperties = NULL;

	if ( ! pFnInitDefaultDecalProperties )
		pFnInitDefaultDecalProperties = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXWeapon_Heavy_LegionDisinfectionWeapon.InitDefaultDecalProperties" );

	ASFXWeapon_Heavy_LegionDisinfectionWeapon_execInitDefaultDecalProperties_Parms InitDefaultDecalProperties_Parms;

	this->ProcessEvent ( pFnInitDefaultDecalProperties, &InitDefaultDecalProperties_Parms, NULL );
};

// Function SFXGameContent.SFXWeapon_Heavy_LegionDisinfectionWeapon.Tick
// [0x00020102] ( FUNC_Simulated )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ASFXWeapon_Heavy_LegionDisinfectionWeapon::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXWeapon_Heavy_LegionDisinfectionWeapon.Tick" );

	ASFXWeapon_Heavy_LegionDisinfectionWeapon_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function SFXGameContent.SFXWeapon_Heavy_LegionDisinfectionWeapon.GetWeaponSpecificImpactSound
// [0x00020102] ( FUNC_Simulated )
// Parameters infos:
// class UWwiseEvent*             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class USFXPhysicalMaterialImpactSounds* ImpactSounds                   ( CPF_Parm )

class UWwiseEvent* ASFXWeapon_Heavy_LegionDisinfectionWeapon::GetWeaponSpecificImpactSound ( class USFXPhysicalMaterialImpactSounds* ImpactSounds )
{
	static UFunction* pFnGetWeaponSpecificImpactSound = NULL;

	if ( ! pFnGetWeaponSpecificImpactSound )
		pFnGetWeaponSpecificImpactSound = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXWeapon_Heavy_LegionDisinfectionWeapon.GetWeaponSpecificImpactSound" );

	ASFXWeapon_Heavy_LegionDisinfectionWeapon_execGetWeaponSpecificImpactSound_Parms GetWeaponSpecificImpactSound_Parms;
	GetWeaponSpecificImpactSound_Parms.ImpactSounds = ImpactSounds;

	this->ProcessEvent ( pFnGetWeaponSpecificImpactSound, &GetWeaponSpecificImpactSound_Parms, NULL );

	return GetWeaponSpecificImpactSound_Parms.ReturnValue;
};

// Function SFXGameContent.SFXWeapon_Heavy_LegionDisinfectionWeapon.GetWeaponSpecificImpactEffect
// [0x00022102] ( FUNC_Simulated )
// Parameters infos:
// class UParticleSystem*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class USFXPhysicalMaterialImpactEffects* ImpactEffects                  ( CPF_Parm )

class UParticleSystem* ASFXWeapon_Heavy_LegionDisinfectionWeapon::GetWeaponSpecificImpactEffect ( class USFXPhysicalMaterialImpactEffects* ImpactEffects )
{
	static UFunction* pFnGetWeaponSpecificImpactEffect = NULL;

	if ( ! pFnGetWeaponSpecificImpactEffect )
		pFnGetWeaponSpecificImpactEffect = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXWeapon_Heavy_LegionDisinfectionWeapon.GetWeaponSpecificImpactEffect" );

	ASFXWeapon_Heavy_LegionDisinfectionWeapon_execGetWeaponSpecificImpactEffect_Parms GetWeaponSpecificImpactEffect_Parms;
	GetWeaponSpecificImpactEffect_Parms.ImpactEffects = ImpactEffects;

	this->ProcessEvent ( pFnGetWeaponSpecificImpactEffect, &GetWeaponSpecificImpactEffect_Parms, NULL );

	return GetWeaponSpecificImpactEffect_Parms.ReturnValue;
};

// Function SFXGameContent.SFXWeapon_Heavy_LegionDisinfectionWeapon.StopMuzzleFlashEffect
// [0x00020102] ( FUNC_Simulated )
// Parameters infos:

void ASFXWeapon_Heavy_LegionDisinfectionWeapon::StopMuzzleFlashEffect ( )
{
	static UFunction* pFnStopMuzzleFlashEffect = NULL;

	if ( ! pFnStopMuzzleFlashEffect )
		pFnStopMuzzleFlashEffect = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXWeapon_Heavy_LegionDisinfectionWeapon.StopMuzzleFlashEffect" );

	ASFXWeapon_Heavy_LegionDisinfectionWeapon_execStopMuzzleFlashEffect_Parms StopMuzzleFlashEffect_Parms;

	this->ProcessEvent ( pFnStopMuzzleFlashEffect, &StopMuzzleFlashEffect_Parms, NULL );
};

// Function SFXGameContent.SFXWeapon_Heavy_LegionDisinfectionWeapon.StopFireSounds
// [0x00020102] ( FUNC_Simulated )
// Parameters infos:

void ASFXWeapon_Heavy_LegionDisinfectionWeapon::StopFireSounds ( )
{
	static UFunction* pFnStopFireSounds = NULL;

	if ( ! pFnStopFireSounds )
		pFnStopFireSounds = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXWeapon_Heavy_LegionDisinfectionWeapon.StopFireSounds" );

	ASFXWeapon_Heavy_LegionDisinfectionWeapon_execStopFireSounds_Parms StopFireSounds_Parms;

	this->ProcessEvent ( pFnStopFireSounds, &StopFireSounds_Parms, NULL );
};



class UClass* ASFXWeapon_Pistol_Predator::pClassPointer = NULL;

class UClass* ASFXWeapon_Pistol_Predator::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXWeapon_Pistol_Predator" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXWeapon_Pistol_Predator.GetWeaponSpecificDecalData
// [0x00420102] ( FUNC_Simulated )
// Parameters infos:
// class UDecalComponent*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
// class USFXPhysicalMaterialDecals* DecalEffects                   ( CPF_Parm )
// float                          FadeTime                       ( CPF_Parm | CPF_OutParm )

class UDecalComponent* ASFXWeapon_Pistol_Predator::GetWeaponSpecificDecalData ( class USFXPhysicalMaterialDecals* DecalEffects, float* FadeTime )
{
	static UFunction* pFnGetWeaponSpecificDecalData = NULL;

	if ( ! pFnGetWeaponSpecificDecalData )
		pFnGetWeaponSpecificDecalData = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXWeapon_Pistol_Predator.GetWeaponSpecificDecalData" );

	ASFXWeapon_Pistol_Predator_execGetWeaponSpecificDecalData_Parms GetWeaponSpecificDecalData_Parms;
	GetWeaponSpecificDecalData_Parms.DecalEffects = DecalEffects;

	if ( FadeTime )
		GetWeaponSpecificDecalData_Parms.FadeTime = *FadeTime;

	this->ProcessEvent ( pFnGetWeaponSpecificDecalData, &GetWeaponSpecificDecalData_Parms, NULL );

	if ( FadeTime )
		*FadeTime = GetWeaponSpecificDecalData_Parms.FadeTime;

	return GetWeaponSpecificDecalData_Parms.ReturnValue;
};



class UClass* USFXTreasureDataLive::pClassPointer = NULL;

class UClass* USFXTreasureDataLive::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXTreasureDataLive" );

		return pClassPointer;
	};



class UClass* USFXCharacterClass_Content::pClassPointer = NULL;

class UClass* USFXCharacterClass_Content::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCharacterClass_Content" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_Revive::pClassPointer = NULL;

class UClass* USFXCustomAction_Revive::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_Revive" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXCustomAction_Revive.BodyStanceAnimEndNotification
// [0x00020000]
// Parameters infos:
// class UAnimNodeSequence*       SeqNode                        ( CPF_Parm )
// float                          PlayedTime                     ( CPF_Parm )
// float                          ExcessTime                     ( CPF_Parm )

void USFXCustomAction_Revive::BodyStanceAnimEndNotification ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime )
{
	static UFunction* pFnBodyStanceAnimEndNotification = NULL;

	if ( ! pFnBodyStanceAnimEndNotification )
		pFnBodyStanceAnimEndNotification = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_Revive.BodyStanceAnimEndNotification" );

	USFXCustomAction_Revive_execBodyStanceAnimEndNotification_Parms BodyStanceAnimEndNotification_Parms;
	BodyStanceAnimEndNotification_Parms.SeqNode = SeqNode;
	BodyStanceAnimEndNotification_Parms.PlayedTime = PlayedTime;
	BodyStanceAnimEndNotification_Parms.ExcessTime = ExcessTime;

	this->ProcessEvent ( pFnBodyStanceAnimEndNotification, &BodyStanceAnimEndNotification_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_Revive.Replicate
// [0x00020002]
// Parameters infos:

void USFXCustomAction_Revive::Replicate ( )
{
	static UFunction* pFnReplicate = NULL;

	if ( ! pFnReplicate )
		pFnReplicate = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_Revive.Replicate" );

	USFXCustomAction_Revive_execReplicate_Parms Replicate_Parms;

	this->ProcessEvent ( pFnReplicate, &Replicate_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_Revive.ClientDoCustomAction
// [0x00024002]
// Parameters infos:
// unsigned long                  bForced                        ( CPF_OptionalParm | CPF_Parm )

void USFXCustomAction_Revive::ClientDoCustomAction ( unsigned long bForced )
{
	static UFunction* pFnClientDoCustomAction = NULL;

	if ( ! pFnClientDoCustomAction )
		pFnClientDoCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_Revive.ClientDoCustomAction" );

	USFXCustomAction_Revive_execClientDoCustomAction_Parms ClientDoCustomAction_Parms;
	ClientDoCustomAction_Parms.bForced = bForced;

	this->ProcessEvent ( pFnClientDoCustomAction, &ClientDoCustomAction_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_Revive.CheckFiring
// [0x00020002]
// Parameters infos:

void USFXCustomAction_Revive::CheckFiring ( )
{
	static UFunction* pFnCheckFiring = NULL;

	if ( ! pFnCheckFiring )
		pFnCheckFiring = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_Revive.CheckFiring" );

	USFXCustomAction_Revive_execCheckFiring_Parms CheckFiring_Parms;

	this->ProcessEvent ( pFnCheckFiring, &CheckFiring_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_Revive.TickCustomAction
// [0x00020002]
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void USFXCustomAction_Revive::TickCustomAction ( float DeltaTime )
{
	static UFunction* pFnTickCustomAction = NULL;

	if ( ! pFnTickCustomAction )
		pFnTickCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_Revive.TickCustomAction" );

	USFXCustomAction_Revive_execTickCustomAction_Parms TickCustomAction_Parms;
	TickCustomAction_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTickCustomAction, &TickCustomAction_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_Revive.StopCustomAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_Revive::StopCustomAction ( )
{
	static UFunction* pFnStopCustomAction = NULL;

	if ( ! pFnStopCustomAction )
		pFnStopCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_Revive.StopCustomAction" );

	USFXCustomAction_Revive_execStopCustomAction_Parms StopCustomAction_Parms;

	this->ProcessEvent ( pFnStopCustomAction, &StopCustomAction_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_Revive.Resurrect
// [0x00020002]
// Parameters infos:

void USFXCustomAction_Revive::Resurrect ( )
{
	static UFunction* pFnResurrect = NULL;

	if ( ! pFnResurrect )
		pFnResurrect = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_Revive.Resurrect" );

	USFXCustomAction_Revive_execResurrect_Parms Resurrect_Parms;

	this->ProcessEvent ( pFnResurrect, &Resurrect_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_Revive.StartCustomAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_Revive::StartCustomAction ( )
{
	static UFunction* pFnStartCustomAction = NULL;

	if ( ! pFnStartCustomAction )
		pFnStartCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_Revive.StartCustomAction" );

	USFXCustomAction_Revive_execStartCustomAction_Parms StartCustomAction_Parms;

	this->ProcessEvent ( pFnStartCustomAction, &StartCustomAction_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_Revive.InternalCanDoCustomAction
// [0x00080002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioPawn*                SyncPawn                       ( CPF_Parm )
// unsigned long                  bForced                        ( CPF_Parm )

bool USFXCustomAction_Revive::InternalCanDoCustomAction ( class ABioPawn* SyncPawn, unsigned long bForced )
{
	static UFunction* pFnInternalCanDoCustomAction = NULL;

	if ( ! pFnInternalCanDoCustomAction )
		pFnInternalCanDoCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_Revive.InternalCanDoCustomAction" );

	USFXCustomAction_Revive_execInternalCanDoCustomAction_Parms InternalCanDoCustomAction_Parms;
	InternalCanDoCustomAction_Parms.SyncPawn = SyncPawn;
	InternalCanDoCustomAction_Parms.bForced = bForced;

	this->ProcessEvent ( pFnInternalCanDoCustomAction, &InternalCanDoCustomAction_Parms, NULL );

	return InternalCanDoCustomAction_Parms.ReturnValue;
};



class UClass* USFXCustomAction_Reload::pClassPointer = NULL;

class UClass* USFXCustomAction_Reload::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_Reload" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXCustomAction_Reload.StopCustomAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_Reload::StopCustomAction ( )
{
	static UFunction* pFnStopCustomAction = NULL;

	if ( ! pFnStopCustomAction )
		pFnStopCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_Reload.StopCustomAction" );

	USFXCustomAction_Reload_execStopCustomAction_Parms StopCustomAction_Parms;

	this->ProcessEvent ( pFnStopCustomAction, &StopCustomAction_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_Reload.StartCustomAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_Reload::StartCustomAction ( )
{
	static UFunction* pFnStartCustomAction = NULL;

	if ( ! pFnStartCustomAction )
		pFnStartCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_Reload.StartCustomAction" );

	USFXCustomAction_Reload_execStartCustomAction_Parms StartCustomAction_Parms;

	this->ProcessEvent ( pFnStartCustomAction, &StartCustomAction_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_Reload.GetUsedAnimNames
// [0x00422802] ( FUNC_Event )
// Parameters infos:
// TArray<struct SFXName>         UsedAnims                      ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void USFXCustomAction_Reload::eventGetUsedAnimNames ( TArray<struct SFXName>* UsedAnims )
{
	static UFunction* pFnGetUsedAnimNames = NULL;

	if ( ! pFnGetUsedAnimNames )
		pFnGetUsedAnimNames = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_Reload.GetUsedAnimNames" );

	USFXCustomAction_Reload_eventGetUsedAnimNames_Parms GetUsedAnimNames_Parms;

	if ( UsedAnims )
		memcpy ( &GetUsedAnimNames_Parms.UsedAnims, UsedAnims, 0x10 );

	this->ProcessEvent ( pFnGetUsedAnimNames, &GetUsedAnimNames_Parms, NULL );

	if ( UsedAnims )
		memcpy ( UsedAnims, &GetUsedAnimNames_Parms.UsedAnims, 0x10 );
};



class UClass* USFXCustomAction_ActivateWeaponFlashlight::pClassPointer = NULL;

class UClass* USFXCustomAction_ActivateWeaponFlashlight::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_ActivateWeaponFlashlight" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXCustomAction_ActivateWeaponFlashlight.StopCustomAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_ActivateWeaponFlashlight::StopCustomAction ( )
{
	static UFunction* pFnStopCustomAction = NULL;

	if ( ! pFnStopCustomAction )
		pFnStopCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_ActivateWeaponFlashlight.StopCustomAction" );

	USFXCustomAction_ActivateWeaponFlashlight_execStopCustomAction_Parms StopCustomAction_Parms;

	this->ProcessEvent ( pFnStopCustomAction, &StopCustomAction_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_ActivateWeaponFlashlight.StartCustomAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_ActivateWeaponFlashlight::StartCustomAction ( )
{
	static UFunction* pFnStartCustomAction = NULL;

	if ( ! pFnStartCustomAction )
		pFnStartCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_ActivateWeaponFlashlight.StartCustomAction" );

	USFXCustomAction_ActivateWeaponFlashlight_execStartCustomAction_Parms StartCustomAction_Parms;

	this->ProcessEvent ( pFnStartCustomAction, &StartCustomAction_Parms, NULL );
};



class UClass* USFXCustomAction_MantleLookAt::pClassPointer = NULL;

class UClass* USFXCustomAction_MantleLookAt::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_MantleLookAt" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXCustomAction_MantleLookAt.FlinchActionOverride
// [0x00020002]
// Parameters infos:

void USFXCustomAction_MantleLookAt::FlinchActionOverride ( )
{
	static UFunction* pFnFlinchActionOverride = NULL;

	if ( ! pFnFlinchActionOverride )
		pFnFlinchActionOverride = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_MantleLookAt.FlinchActionOverride" );

	USFXCustomAction_MantleLookAt_execFlinchActionOverride_Parms FlinchActionOverride_Parms;

	this->ProcessEvent ( pFnFlinchActionOverride, &FlinchActionOverride_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_MantleLookAt.GetUsedAnimNames
// [0x00422802] ( FUNC_Event )
// Parameters infos:
// TArray<struct SFXName>         UsedAnims                      ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void USFXCustomAction_MantleLookAt::eventGetUsedAnimNames ( TArray<struct SFXName>* UsedAnims )
{
	static UFunction* pFnGetUsedAnimNames = NULL;

	if ( ! pFnGetUsedAnimNames )
		pFnGetUsedAnimNames = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_MantleLookAt.GetUsedAnimNames" );

	USFXCustomAction_MantleLookAt_eventGetUsedAnimNames_Parms GetUsedAnimNames_Parms;

	if ( UsedAnims )
		memcpy ( &GetUsedAnimNames_Parms.UsedAnims, UsedAnims, 0x10 );

	this->ProcessEvent ( pFnGetUsedAnimNames, &GetUsedAnimNames_Parms, NULL );

	if ( UsedAnims )
		memcpy ( UsedAnims, &GetUsedAnimNames_Parms.UsedAnims, 0x10 );
};

// Function SFXGameContent.SFXCustomAction_MantleLookAt.GetEndBodyStanceAnim
// [0x00020002]
// Parameters infos:
// struct FBodyStance             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FBodyStance USFXCustomAction_MantleLookAt::GetEndBodyStanceAnim ( )
{
	static UFunction* pFnGetEndBodyStanceAnim = NULL;

	if ( ! pFnGetEndBodyStanceAnim )
		pFnGetEndBodyStanceAnim = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_MantleLookAt.GetEndBodyStanceAnim" );

	USFXCustomAction_MantleLookAt_execGetEndBodyStanceAnim_Parms GetEndBodyStanceAnim_Parms;

	this->ProcessEvent ( pFnGetEndBodyStanceAnim, &GetEndBodyStanceAnim_Parms, NULL );

	return GetEndBodyStanceAnim_Parms.ReturnValue;
};

// Function SFXGameContent.SFXCustomAction_MantleLookAt.GetLoopBodyStanceAnim
// [0x00020002]
// Parameters infos:
// struct FBodyStance             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FBodyStance USFXCustomAction_MantleLookAt::GetLoopBodyStanceAnim ( )
{
	static UFunction* pFnGetLoopBodyStanceAnim = NULL;

	if ( ! pFnGetLoopBodyStanceAnim )
		pFnGetLoopBodyStanceAnim = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_MantleLookAt.GetLoopBodyStanceAnim" );

	USFXCustomAction_MantleLookAt_execGetLoopBodyStanceAnim_Parms GetLoopBodyStanceAnim_Parms;

	this->ProcessEvent ( pFnGetLoopBodyStanceAnim, &GetLoopBodyStanceAnim_Parms, NULL );

	return GetLoopBodyStanceAnim_Parms.ReturnValue;
};

// Function SFXGameContent.SFXCustomAction_MantleLookAt.GetStartBodyStanceAnim
// [0x00020002]
// Parameters infos:
// struct FBodyStance             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FBodyStance USFXCustomAction_MantleLookAt::GetStartBodyStanceAnim ( )
{
	static UFunction* pFnGetStartBodyStanceAnim = NULL;

	if ( ! pFnGetStartBodyStanceAnim )
		pFnGetStartBodyStanceAnim = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_MantleLookAt.GetStartBodyStanceAnim" );

	USFXCustomAction_MantleLookAt_execGetStartBodyStanceAnim_Parms GetStartBodyStanceAnim_Parms;

	this->ProcessEvent ( pFnGetStartBodyStanceAnim, &GetStartBodyStanceAnim_Parms, NULL );

	return GetStartBodyStanceAnim_Parms.ReturnValue;
};



class UClass* USFXCustomAction_CoverSlipLookAt::pClassPointer = NULL;

class UClass* USFXCustomAction_CoverSlipLookAt::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_CoverSlipLookAt" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXCustomAction_CoverSlipLookAt.FlinchActionOverride
// [0x00020002]
// Parameters infos:

void USFXCustomAction_CoverSlipLookAt::FlinchActionOverride ( )
{
	static UFunction* pFnFlinchActionOverride = NULL;

	if ( ! pFnFlinchActionOverride )
		pFnFlinchActionOverride = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_CoverSlipLookAt.FlinchActionOverride" );

	USFXCustomAction_CoverSlipLookAt_execFlinchActionOverride_Parms FlinchActionOverride_Parms;

	this->ProcessEvent ( pFnFlinchActionOverride, &FlinchActionOverride_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_CoverSlipLookAt.GetUsedAnimNames
// [0x00422802] ( FUNC_Event )
// Parameters infos:
// TArray<struct SFXName>         UsedAnims                      ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void USFXCustomAction_CoverSlipLookAt::eventGetUsedAnimNames ( TArray<struct SFXName>* UsedAnims )
{
	static UFunction* pFnGetUsedAnimNames = NULL;

	if ( ! pFnGetUsedAnimNames )
		pFnGetUsedAnimNames = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_CoverSlipLookAt.GetUsedAnimNames" );

	USFXCustomAction_CoverSlipLookAt_eventGetUsedAnimNames_Parms GetUsedAnimNames_Parms;

	if ( UsedAnims )
		memcpy ( &GetUsedAnimNames_Parms.UsedAnims, UsedAnims, 0x10 );

	this->ProcessEvent ( pFnGetUsedAnimNames, &GetUsedAnimNames_Parms, NULL );

	if ( UsedAnims )
		memcpy ( UsedAnims, &GetUsedAnimNames_Parms.UsedAnims, 0x10 );
};

// Function SFXGameContent.SFXCustomAction_CoverSlipLookAt.GetEndBodyStanceAnim
// [0x00020002]
// Parameters infos:
// struct FBodyStance             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FBodyStance USFXCustomAction_CoverSlipLookAt::GetEndBodyStanceAnim ( )
{
	static UFunction* pFnGetEndBodyStanceAnim = NULL;

	if ( ! pFnGetEndBodyStanceAnim )
		pFnGetEndBodyStanceAnim = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_CoverSlipLookAt.GetEndBodyStanceAnim" );

	USFXCustomAction_CoverSlipLookAt_execGetEndBodyStanceAnim_Parms GetEndBodyStanceAnim_Parms;

	this->ProcessEvent ( pFnGetEndBodyStanceAnim, &GetEndBodyStanceAnim_Parms, NULL );

	return GetEndBodyStanceAnim_Parms.ReturnValue;
};

// Function SFXGameContent.SFXCustomAction_CoverSlipLookAt.GetLoopBodyStanceAnim
// [0x00020002]
// Parameters infos:
// struct FBodyStance             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FBodyStance USFXCustomAction_CoverSlipLookAt::GetLoopBodyStanceAnim ( )
{
	static UFunction* pFnGetLoopBodyStanceAnim = NULL;

	if ( ! pFnGetLoopBodyStanceAnim )
		pFnGetLoopBodyStanceAnim = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_CoverSlipLookAt.GetLoopBodyStanceAnim" );

	USFXCustomAction_CoverSlipLookAt_execGetLoopBodyStanceAnim_Parms GetLoopBodyStanceAnim_Parms;

	this->ProcessEvent ( pFnGetLoopBodyStanceAnim, &GetLoopBodyStanceAnim_Parms, NULL );

	return GetLoopBodyStanceAnim_Parms.ReturnValue;
};

// Function SFXGameContent.SFXCustomAction_CoverSlipLookAt.GetStartBodyStanceAnim
// [0x00020002]
// Parameters infos:
// struct FBodyStance             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FBodyStance USFXCustomAction_CoverSlipLookAt::GetStartBodyStanceAnim ( )
{
	static UFunction* pFnGetStartBodyStanceAnim = NULL;

	if ( ! pFnGetStartBodyStanceAnim )
		pFnGetStartBodyStanceAnim = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_CoverSlipLookAt.GetStartBodyStanceAnim" );

	USFXCustomAction_CoverSlipLookAt_execGetStartBodyStanceAnim_Parms GetStartBodyStanceAnim_Parms;

	this->ProcessEvent ( pFnGetStartBodyStanceAnim, &GetStartBodyStanceAnim_Parms, NULL );

	return GetStartBodyStanceAnim_Parms.ReturnValue;
};



class UClass* USFXCustomAction_StdCoverSlipLookAt::pClassPointer = NULL;

class UClass* USFXCustomAction_StdCoverSlipLookAt::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_StdCoverSlipLookAt" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXCustomAction_StdCoverSlipLookAt.FlinchActionOverride
// [0x00020002]
// Parameters infos:

void USFXCustomAction_StdCoverSlipLookAt::FlinchActionOverride ( )
{
	static UFunction* pFnFlinchActionOverride = NULL;

	if ( ! pFnFlinchActionOverride )
		pFnFlinchActionOverride = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_StdCoverSlipLookAt.FlinchActionOverride" );

	USFXCustomAction_StdCoverSlipLookAt_execFlinchActionOverride_Parms FlinchActionOverride_Parms;

	this->ProcessEvent ( pFnFlinchActionOverride, &FlinchActionOverride_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_StdCoverSlipLookAt.GetUsedAnimNames
// [0x00422802] ( FUNC_Event )
// Parameters infos:
// TArray<struct SFXName>         UsedAnims                      ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void USFXCustomAction_StdCoverSlipLookAt::eventGetUsedAnimNames ( TArray<struct SFXName>* UsedAnims )
{
	static UFunction* pFnGetUsedAnimNames = NULL;

	if ( ! pFnGetUsedAnimNames )
		pFnGetUsedAnimNames = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_StdCoverSlipLookAt.GetUsedAnimNames" );

	USFXCustomAction_StdCoverSlipLookAt_eventGetUsedAnimNames_Parms GetUsedAnimNames_Parms;

	if ( UsedAnims )
		memcpy ( &GetUsedAnimNames_Parms.UsedAnims, UsedAnims, 0x10 );

	this->ProcessEvent ( pFnGetUsedAnimNames, &GetUsedAnimNames_Parms, NULL );

	if ( UsedAnims )
		memcpy ( UsedAnims, &GetUsedAnimNames_Parms.UsedAnims, 0x10 );
};

// Function SFXGameContent.SFXCustomAction_StdCoverSlipLookAt.GetEndBodyStanceAnim
// [0x00020002]
// Parameters infos:
// struct FBodyStance             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FBodyStance USFXCustomAction_StdCoverSlipLookAt::GetEndBodyStanceAnim ( )
{
	static UFunction* pFnGetEndBodyStanceAnim = NULL;

	if ( ! pFnGetEndBodyStanceAnim )
		pFnGetEndBodyStanceAnim = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_StdCoverSlipLookAt.GetEndBodyStanceAnim" );

	USFXCustomAction_StdCoverSlipLookAt_execGetEndBodyStanceAnim_Parms GetEndBodyStanceAnim_Parms;

	this->ProcessEvent ( pFnGetEndBodyStanceAnim, &GetEndBodyStanceAnim_Parms, NULL );

	return GetEndBodyStanceAnim_Parms.ReturnValue;
};

// Function SFXGameContent.SFXCustomAction_StdCoverSlipLookAt.GetLoopBodyStanceAnim
// [0x00020002]
// Parameters infos:
// struct FBodyStance             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FBodyStance USFXCustomAction_StdCoverSlipLookAt::GetLoopBodyStanceAnim ( )
{
	static UFunction* pFnGetLoopBodyStanceAnim = NULL;

	if ( ! pFnGetLoopBodyStanceAnim )
		pFnGetLoopBodyStanceAnim = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_StdCoverSlipLookAt.GetLoopBodyStanceAnim" );

	USFXCustomAction_StdCoverSlipLookAt_execGetLoopBodyStanceAnim_Parms GetLoopBodyStanceAnim_Parms;

	this->ProcessEvent ( pFnGetLoopBodyStanceAnim, &GetLoopBodyStanceAnim_Parms, NULL );

	return GetLoopBodyStanceAnim_Parms.ReturnValue;
};

// Function SFXGameContent.SFXCustomAction_StdCoverSlipLookAt.GetStartBodyStanceAnim
// [0x00020002]
// Parameters infos:
// struct FBodyStance             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FBodyStance USFXCustomAction_StdCoverSlipLookAt::GetStartBodyStanceAnim ( )
{
	static UFunction* pFnGetStartBodyStanceAnim = NULL;

	if ( ! pFnGetStartBodyStanceAnim )
		pFnGetStartBodyStanceAnim = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_StdCoverSlipLookAt.GetStartBodyStanceAnim" );

	USFXCustomAction_StdCoverSlipLookAt_execGetStartBodyStanceAnim_Parms GetStartBodyStanceAnim_Parms;

	this->ProcessEvent ( pFnGetStartBodyStanceAnim, &GetStartBodyStanceAnim_Parms, NULL );

	return GetStartBodyStanceAnim_Parms.ReturnValue;
};



class UClass* USFXCustomAction_SwatTurnLookAt::pClassPointer = NULL;

class UClass* USFXCustomAction_SwatTurnLookAt::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_SwatTurnLookAt" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXCustomAction_SwatTurnLookAt.FlinchActionOverride
// [0x00020002]
// Parameters infos:

void USFXCustomAction_SwatTurnLookAt::FlinchActionOverride ( )
{
	static UFunction* pFnFlinchActionOverride = NULL;

	if ( ! pFnFlinchActionOverride )
		pFnFlinchActionOverride = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_SwatTurnLookAt.FlinchActionOverride" );

	USFXCustomAction_SwatTurnLookAt_execFlinchActionOverride_Parms FlinchActionOverride_Parms;

	this->ProcessEvent ( pFnFlinchActionOverride, &FlinchActionOverride_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_SwatTurnLookAt.GetUsedAnimNames
// [0x00422802] ( FUNC_Event )
// Parameters infos:
// TArray<struct SFXName>         UsedAnims                      ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void USFXCustomAction_SwatTurnLookAt::eventGetUsedAnimNames ( TArray<struct SFXName>* UsedAnims )
{
	static UFunction* pFnGetUsedAnimNames = NULL;

	if ( ! pFnGetUsedAnimNames )
		pFnGetUsedAnimNames = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_SwatTurnLookAt.GetUsedAnimNames" );

	USFXCustomAction_SwatTurnLookAt_eventGetUsedAnimNames_Parms GetUsedAnimNames_Parms;

	if ( UsedAnims )
		memcpy ( &GetUsedAnimNames_Parms.UsedAnims, UsedAnims, 0x10 );

	this->ProcessEvent ( pFnGetUsedAnimNames, &GetUsedAnimNames_Parms, NULL );

	if ( UsedAnims )
		memcpy ( UsedAnims, &GetUsedAnimNames_Parms.UsedAnims, 0x10 );
};

// Function SFXGameContent.SFXCustomAction_SwatTurnLookAt.GetEndBodyStanceAnim
// [0x00020002]
// Parameters infos:
// struct FBodyStance             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FBodyStance USFXCustomAction_SwatTurnLookAt::GetEndBodyStanceAnim ( )
{
	static UFunction* pFnGetEndBodyStanceAnim = NULL;

	if ( ! pFnGetEndBodyStanceAnim )
		pFnGetEndBodyStanceAnim = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_SwatTurnLookAt.GetEndBodyStanceAnim" );

	USFXCustomAction_SwatTurnLookAt_execGetEndBodyStanceAnim_Parms GetEndBodyStanceAnim_Parms;

	this->ProcessEvent ( pFnGetEndBodyStanceAnim, &GetEndBodyStanceAnim_Parms, NULL );

	return GetEndBodyStanceAnim_Parms.ReturnValue;
};

// Function SFXGameContent.SFXCustomAction_SwatTurnLookAt.GetLoopBodyStanceAnim
// [0x00020002]
// Parameters infos:
// struct FBodyStance             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FBodyStance USFXCustomAction_SwatTurnLookAt::GetLoopBodyStanceAnim ( )
{
	static UFunction* pFnGetLoopBodyStanceAnim = NULL;

	if ( ! pFnGetLoopBodyStanceAnim )
		pFnGetLoopBodyStanceAnim = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_SwatTurnLookAt.GetLoopBodyStanceAnim" );

	USFXCustomAction_SwatTurnLookAt_execGetLoopBodyStanceAnim_Parms GetLoopBodyStanceAnim_Parms;

	this->ProcessEvent ( pFnGetLoopBodyStanceAnim, &GetLoopBodyStanceAnim_Parms, NULL );

	return GetLoopBodyStanceAnim_Parms.ReturnValue;
};

// Function SFXGameContent.SFXCustomAction_SwatTurnLookAt.GetStartBodyStanceAnim
// [0x00020002]
// Parameters infos:
// struct FBodyStance             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FBodyStance USFXCustomAction_SwatTurnLookAt::GetStartBodyStanceAnim ( )
{
	static UFunction* pFnGetStartBodyStanceAnim = NULL;

	if ( ! pFnGetStartBodyStanceAnim )
		pFnGetStartBodyStanceAnim = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_SwatTurnLookAt.GetStartBodyStanceAnim" );

	USFXCustomAction_SwatTurnLookAt_execGetStartBodyStanceAnim_Parms GetStartBodyStanceAnim_Parms;

	this->ProcessEvent ( pFnGetStartBodyStanceAnim, &GetStartBodyStanceAnim_Parms, NULL );

	return GetStartBodyStanceAnim_Parms.ReturnValue;
};



class UClass* USFXCustomAction_StdSwatTurnLookAt::pClassPointer = NULL;

class UClass* USFXCustomAction_StdSwatTurnLookAt::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_StdSwatTurnLookAt" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXCustomAction_StdSwatTurnLookAt.FlinchActionOverride
// [0x00020002]
// Parameters infos:

void USFXCustomAction_StdSwatTurnLookAt::FlinchActionOverride ( )
{
	static UFunction* pFnFlinchActionOverride = NULL;

	if ( ! pFnFlinchActionOverride )
		pFnFlinchActionOverride = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_StdSwatTurnLookAt.FlinchActionOverride" );

	USFXCustomAction_StdSwatTurnLookAt_execFlinchActionOverride_Parms FlinchActionOverride_Parms;

	this->ProcessEvent ( pFnFlinchActionOverride, &FlinchActionOverride_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_StdSwatTurnLookAt.GetUsedAnimNames
// [0x00422802] ( FUNC_Event )
// Parameters infos:
// TArray<struct SFXName>         UsedAnims                      ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void USFXCustomAction_StdSwatTurnLookAt::eventGetUsedAnimNames ( TArray<struct SFXName>* UsedAnims )
{
	static UFunction* pFnGetUsedAnimNames = NULL;

	if ( ! pFnGetUsedAnimNames )
		pFnGetUsedAnimNames = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_StdSwatTurnLookAt.GetUsedAnimNames" );

	USFXCustomAction_StdSwatTurnLookAt_eventGetUsedAnimNames_Parms GetUsedAnimNames_Parms;

	if ( UsedAnims )
		memcpy ( &GetUsedAnimNames_Parms.UsedAnims, UsedAnims, 0x10 );

	this->ProcessEvent ( pFnGetUsedAnimNames, &GetUsedAnimNames_Parms, NULL );

	if ( UsedAnims )
		memcpy ( UsedAnims, &GetUsedAnimNames_Parms.UsedAnims, 0x10 );
};

// Function SFXGameContent.SFXCustomAction_StdSwatTurnLookAt.GetEndBodyStanceAnim
// [0x00020002]
// Parameters infos:
// struct FBodyStance             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FBodyStance USFXCustomAction_StdSwatTurnLookAt::GetEndBodyStanceAnim ( )
{
	static UFunction* pFnGetEndBodyStanceAnim = NULL;

	if ( ! pFnGetEndBodyStanceAnim )
		pFnGetEndBodyStanceAnim = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_StdSwatTurnLookAt.GetEndBodyStanceAnim" );

	USFXCustomAction_StdSwatTurnLookAt_execGetEndBodyStanceAnim_Parms GetEndBodyStanceAnim_Parms;

	this->ProcessEvent ( pFnGetEndBodyStanceAnim, &GetEndBodyStanceAnim_Parms, NULL );

	return GetEndBodyStanceAnim_Parms.ReturnValue;
};

// Function SFXGameContent.SFXCustomAction_StdSwatTurnLookAt.GetLoopBodyStanceAnim
// [0x00020002]
// Parameters infos:
// struct FBodyStance             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FBodyStance USFXCustomAction_StdSwatTurnLookAt::GetLoopBodyStanceAnim ( )
{
	static UFunction* pFnGetLoopBodyStanceAnim = NULL;

	if ( ! pFnGetLoopBodyStanceAnim )
		pFnGetLoopBodyStanceAnim = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_StdSwatTurnLookAt.GetLoopBodyStanceAnim" );

	USFXCustomAction_StdSwatTurnLookAt_execGetLoopBodyStanceAnim_Parms GetLoopBodyStanceAnim_Parms;

	this->ProcessEvent ( pFnGetLoopBodyStanceAnim, &GetLoopBodyStanceAnim_Parms, NULL );

	return GetLoopBodyStanceAnim_Parms.ReturnValue;
};

// Function SFXGameContent.SFXCustomAction_StdSwatTurnLookAt.GetStartBodyStanceAnim
// [0x00020002]
// Parameters infos:
// struct FBodyStance             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FBodyStance USFXCustomAction_StdSwatTurnLookAt::GetStartBodyStanceAnim ( )
{
	static UFunction* pFnGetStartBodyStanceAnim = NULL;

	if ( ! pFnGetStartBodyStanceAnim )
		pFnGetStartBodyStanceAnim = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_StdSwatTurnLookAt.GetStartBodyStanceAnim" );

	USFXCustomAction_StdSwatTurnLookAt_execGetStartBodyStanceAnim_Parms GetStartBodyStanceAnim_Parms;

	this->ProcessEvent ( pFnGetStartBodyStanceAnim, &GetStartBodyStanceAnim_Parms, NULL );

	return GetStartBodyStanceAnim_Parms.ReturnValue;
};



class UClass* USFXCustomAction_GapJump::pClassPointer = NULL;

class UClass* USFXCustomAction_GapJump::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_GapJump" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXCustomAction_GapJump.NotifyBump
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Other                          ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

bool USFXCustomAction_GapJump::NotifyBump ( class AActor* Other, struct FVector const& HitNormal )
{
	static UFunction* pFnNotifyBump = NULL;

	if ( ! pFnNotifyBump )
		pFnNotifyBump = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_GapJump.NotifyBump" );

	USFXCustomAction_GapJump_execNotifyBump_Parms NotifyBump_Parms;
	NotifyBump_Parms.Other = Other;
	memcpy ( &NotifyBump_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnNotifyBump, &NotifyBump_Parms, NULL );

	return NotifyBump_Parms.ReturnValue;
};

// Function SFXGameContent.SFXCustomAction_GapJump.EndThisCustomAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_GapJump::EndThisCustomAction ( )
{
	static UFunction* pFnEndThisCustomAction = NULL;

	if ( ! pFnEndThisCustomAction )
		pFnEndThisCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_GapJump.EndThisCustomAction" );

	USFXCustomAction_GapJump_execEndThisCustomAction_Parms EndThisCustomAction_Parms;

	this->ProcessEvent ( pFnEndThisCustomAction, &EndThisCustomAction_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_GapJump.RemoveBlockingEndPoints
// [0x00020002]
// Parameters infos:

void USFXCustomAction_GapJump::RemoveBlockingEndPoints ( )
{
	static UFunction* pFnRemoveBlockingEndPoints = NULL;

	if ( ! pFnRemoveBlockingEndPoints )
		pFnRemoveBlockingEndPoints = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_GapJump.RemoveBlockingEndPoints" );

	USFXCustomAction_GapJump_execRemoveBlockingEndPoints_Parms RemoveBlockingEndPoints_Parms;

	this->ProcessEvent ( pFnRemoveBlockingEndPoints, &RemoveBlockingEndPoints_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_GapJump.BlockMoveEndPoints
// [0x00020002]
// Parameters infos:

void USFXCustomAction_GapJump::BlockMoveEndPoints ( )
{
	static UFunction* pFnBlockMoveEndPoints = NULL;

	if ( ! pFnBlockMoveEndPoints )
		pFnBlockMoveEndPoints = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_GapJump.BlockMoveEndPoints" );

	USFXCustomAction_GapJump_execBlockMoveEndPoints_Parms BlockMoveEndPoints_Parms;

	this->ProcessEvent ( pFnBlockMoveEndPoints, &BlockMoveEndPoints_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_GapJump.BodyStanceAnimEndNotification
// [0x00020002]
// Parameters infos:
// class UAnimNodeSequence*       SeqNode                        ( CPF_Parm )
// float                          PlayedTime                     ( CPF_Parm )
// float                          ExcessTime                     ( CPF_Parm )

void USFXCustomAction_GapJump::BodyStanceAnimEndNotification ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime )
{
	static UFunction* pFnBodyStanceAnimEndNotification = NULL;

	if ( ! pFnBodyStanceAnimEndNotification )
		pFnBodyStanceAnimEndNotification = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_GapJump.BodyStanceAnimEndNotification" );

	USFXCustomAction_GapJump_execBodyStanceAnimEndNotification_Parms BodyStanceAnimEndNotification_Parms;
	BodyStanceAnimEndNotification_Parms.SeqNode = SeqNode;
	BodyStanceAnimEndNotification_Parms.PlayedTime = PlayedTime;
	BodyStanceAnimEndNotification_Parms.ExcessTime = ExcessTime;

	this->ProcessEvent ( pFnBodyStanceAnimEndNotification, &BodyStanceAnimEndNotification_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_GapJump.StopCustomAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_GapJump::StopCustomAction ( )
{
	static UFunction* pFnStopCustomAction = NULL;

	if ( ! pFnStopCustomAction )
		pFnStopCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_GapJump.StopCustomAction" );

	USFXCustomAction_GapJump_execStopCustomAction_Parms StopCustomAction_Parms;

	this->ProcessEvent ( pFnStopCustomAction, &StopCustomAction_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_GapJump.StartAnimation
// [0x00020002]
// Parameters infos:

void USFXCustomAction_GapJump::StartAnimation ( )
{
	static UFunction* pFnStartAnimation = NULL;

	if ( ! pFnStartAnimation )
		pFnStartAnimation = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_GapJump.StartAnimation" );

	USFXCustomAction_GapJump_execStartAnimation_Parms StartAnimation_Parms;

	this->ProcessEvent ( pFnStartAnimation, &StartAnimation_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_GapJump.ReachedPrecisePosition
// [0x00020002]
// Parameters infos:

void USFXCustomAction_GapJump::ReachedPrecisePosition ( )
{
	static UFunction* pFnReachedPrecisePosition = NULL;

	if ( ! pFnReachedPrecisePosition )
		pFnReachedPrecisePosition = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_GapJump.ReachedPrecisePosition" );

	USFXCustomAction_GapJump_execReachedPrecisePosition_Parms ReachedPrecisePosition_Parms;

	this->ProcessEvent ( pFnReachedPrecisePosition, &ReachedPrecisePosition_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_GapJump.AlignmentTimeout
// [0x00020002]
// Parameters infos:

void USFXCustomAction_GapJump::AlignmentTimeout ( )
{
	static UFunction* pFnAlignmentTimeout = NULL;

	if ( ! pFnAlignmentTimeout )
		pFnAlignmentTimeout = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_GapJump.AlignmentTimeout" );

	USFXCustomAction_GapJump_execAlignmentTimeout_Parms AlignmentTimeout_Parms;

	this->ProcessEvent ( pFnAlignmentTimeout, &AlignmentTimeout_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_GapJump.StartCustomAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_GapJump::StartCustomAction ( )
{
	static UFunction* pFnStartCustomAction = NULL;

	if ( ! pFnStartCustomAction )
		pFnStartCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_GapJump.StartCustomAction" );

	USFXCustomAction_GapJump_execStartCustomAction_Parms StartCustomAction_Parms;

	this->ProcessEvent ( pFnStartCustomAction, &StartCustomAction_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_GapJump.GetUsedAnimNames
// [0x00422802] ( FUNC_Event )
// Parameters infos:
// TArray<struct SFXName>         UsedAnims                      ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void USFXCustomAction_GapJump::eventGetUsedAnimNames ( TArray<struct SFXName>* UsedAnims )
{
	static UFunction* pFnGetUsedAnimNames = NULL;

	if ( ! pFnGetUsedAnimNames )
		pFnGetUsedAnimNames = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_GapJump.GetUsedAnimNames" );

	USFXCustomAction_GapJump_eventGetUsedAnimNames_Parms GetUsedAnimNames_Parms;

	if ( UsedAnims )
		memcpy ( &GetUsedAnimNames_Parms.UsedAnims, UsedAnims, 0x10 );

	this->ProcessEvent ( pFnGetUsedAnimNames, &GetUsedAnimNames_Parms, NULL );

	if ( UsedAnims )
		memcpy ( UsedAnims, &GetUsedAnimNames_Parms.UsedAnims, 0x10 );
};



class UClass* USFXCustomAction_StandingGapJump::pClassPointer = NULL;

class UClass* USFXCustomAction_StandingGapJump::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_StandingGapJump" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_JumpDown::pClassPointer = NULL;

class UClass* USFXCustomAction_JumpDown::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_JumpDown" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXCustomAction_JumpDown.TickInput
// [0x00020002]
// Parameters infos:
// class UBioPlayerInput*         Input                          ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )

void USFXCustomAction_JumpDown::TickInput ( class UBioPlayerInput* Input, float DeltaTime )
{
	static UFunction* pFnTickInput = NULL;

	if ( ! pFnTickInput )
		pFnTickInput = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_JumpDown.TickInput" );

	USFXCustomAction_JumpDown_execTickInput_Parms TickInput_Parms;
	TickInput_Parms.Input = Input;
	TickInput_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTickInput, &TickInput_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_JumpDown.PlayStartAnimation
// [0x00020002]
// Parameters infos:

void USFXCustomAction_JumpDown::PlayStartAnimation ( )
{
	static UFunction* pFnPlayStartAnimation = NULL;

	if ( ! pFnPlayStartAnimation )
		pFnPlayStartAnimation = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_JumpDown.PlayStartAnimation" );

	USFXCustomAction_JumpDown_execPlayStartAnimation_Parms PlayStartAnimation_Parms;

	this->ProcessEvent ( pFnPlayStartAnimation, &PlayStartAnimation_Parms, NULL );
};



class UClass* USFXCustomAction_PlayerMantleOverCover::pClassPointer = NULL;

class UClass* USFXCustomAction_PlayerMantleOverCover::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_PlayerMantleOverCover" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXCustomAction_PlayerMantleOverCover.GetEndAnim
// [0x00420002]
// Parameters infos:
// struct FBodyStance             Stance                         ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void USFXCustomAction_PlayerMantleOverCover::GetEndAnim ( struct FBodyStance* Stance )
{
	static UFunction* pFnGetEndAnim = NULL;

	if ( ! pFnGetEndAnim )
		pFnGetEndAnim = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PlayerMantleOverCover.GetEndAnim" );

	USFXCustomAction_PlayerMantleOverCover_execGetEndAnim_Parms GetEndAnim_Parms;

	if ( Stance )
		memcpy ( &GetEndAnim_Parms.Stance, Stance, 0x10 );

	this->ProcessEvent ( pFnGetEndAnim, &GetEndAnim_Parms, NULL );

	if ( Stance )
		memcpy ( Stance, &GetEndAnim_Parms.Stance, 0x10 );
};

// Function SFXGameContent.SFXCustomAction_PlayerMantleOverCover.GetLoopAnim
// [0x00420002]
// Parameters infos:
// struct FBodyStance             Stance                         ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void USFXCustomAction_PlayerMantleOverCover::GetLoopAnim ( struct FBodyStance* Stance )
{
	static UFunction* pFnGetLoopAnim = NULL;

	if ( ! pFnGetLoopAnim )
		pFnGetLoopAnim = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PlayerMantleOverCover.GetLoopAnim" );

	USFXCustomAction_PlayerMantleOverCover_execGetLoopAnim_Parms GetLoopAnim_Parms;

	if ( Stance )
		memcpy ( &GetLoopAnim_Parms.Stance, Stance, 0x10 );

	this->ProcessEvent ( pFnGetLoopAnim, &GetLoopAnim_Parms, NULL );

	if ( Stance )
		memcpy ( Stance, &GetLoopAnim_Parms.Stance, 0x10 );
};

// Function SFXGameContent.SFXCustomAction_PlayerMantleOverCover.GetStartAnim
// [0x00420002]
// Parameters infos:
// struct FBodyStance             Stance                         ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void USFXCustomAction_PlayerMantleOverCover::GetStartAnim ( struct FBodyStance* Stance )
{
	static UFunction* pFnGetStartAnim = NULL;

	if ( ! pFnGetStartAnim )
		pFnGetStartAnim = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PlayerMantleOverCover.GetStartAnim" );

	USFXCustomAction_PlayerMantleOverCover_execGetStartAnim_Parms GetStartAnim_Parms;

	if ( Stance )
		memcpy ( &GetStartAnim_Parms.Stance, Stance, 0x10 );

	this->ProcessEvent ( pFnGetStartAnim, &GetStartAnim_Parms, NULL );

	if ( Stance )
		memcpy ( Stance, &GetStartAnim_Parms.Stance, 0x10 );
};

// Function SFXGameContent.SFXCustomAction_PlayerMantleOverCover.GetUsedAnimNames
// [0x00422802] ( FUNC_Event )
// Parameters infos:
// TArray<struct SFXName>         UsedAnims                      ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void USFXCustomAction_PlayerMantleOverCover::eventGetUsedAnimNames ( TArray<struct SFXName>* UsedAnims )
{
	static UFunction* pFnGetUsedAnimNames = NULL;

	if ( ! pFnGetUsedAnimNames )
		pFnGetUsedAnimNames = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PlayerMantleOverCover.GetUsedAnimNames" );

	USFXCustomAction_PlayerMantleOverCover_eventGetUsedAnimNames_Parms GetUsedAnimNames_Parms;

	if ( UsedAnims )
		memcpy ( &GetUsedAnimNames_Parms.UsedAnims, UsedAnims, 0x10 );

	this->ProcessEvent ( pFnGetUsedAnimNames, &GetUsedAnimNames_Parms, NULL );

	if ( UsedAnims )
		memcpy ( UsedAnims, &GetUsedAnimNames_Parms.UsedAnims, 0x10 );
};

// Function SFXGameContent.SFXCustomAction_PlayerMantleOverCover.BodyStanceAnimEndNotification
// [0x00020002]
// Parameters infos:
// class UAnimNodeSequence*       SeqNode                        ( CPF_Parm )
// float                          PlayedTime                     ( CPF_Parm )
// float                          ExcessTime                     ( CPF_Parm )

void USFXCustomAction_PlayerMantleOverCover::BodyStanceAnimEndNotification ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime )
{
	static UFunction* pFnBodyStanceAnimEndNotification = NULL;

	if ( ! pFnBodyStanceAnimEndNotification )
		pFnBodyStanceAnimEndNotification = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PlayerMantleOverCover.BodyStanceAnimEndNotification" );

	USFXCustomAction_PlayerMantleOverCover_execBodyStanceAnimEndNotification_Parms BodyStanceAnimEndNotification_Parms;
	BodyStanceAnimEndNotification_Parms.SeqNode = SeqNode;
	BodyStanceAnimEndNotification_Parms.PlayedTime = PlayedTime;
	BodyStanceAnimEndNotification_Parms.ExcessTime = ExcessTime;

	this->ProcessEvent ( pFnBodyStanceAnimEndNotification, &BodyStanceAnimEndNotification_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_PlayerMantleOverCover.TickCustomAction
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void USFXCustomAction_PlayerMantleOverCover::eventTickCustomAction ( float DeltaTime )
{
	static UFunction* pFnTickCustomAction = NULL;

	if ( ! pFnTickCustomAction )
		pFnTickCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PlayerMantleOverCover.TickCustomAction" );

	USFXCustomAction_PlayerMantleOverCover_eventTickCustomAction_Parms TickCustomAction_Parms;
	TickCustomAction_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTickCustomAction, &TickCustomAction_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_PlayerMantleOverCover.StopCustomAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_PlayerMantleOverCover::StopCustomAction ( )
{
	static UFunction* pFnStopCustomAction = NULL;

	if ( ! pFnStopCustomAction )
		pFnStopCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PlayerMantleOverCover.StopCustomAction" );

	USFXCustomAction_PlayerMantleOverCover_execStopCustomAction_Parms StopCustomAction_Parms;

	this->ProcessEvent ( pFnStopCustomAction, &StopCustomAction_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_PlayerMantleOverCover.StartCustomAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_PlayerMantleOverCover::StartCustomAction ( )
{
	static UFunction* pFnStartCustomAction = NULL;

	if ( ! pFnStartCustomAction )
		pFnStartCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PlayerMantleOverCover.StartCustomAction" );

	USFXCustomAction_PlayerMantleOverCover_execStartCustomAction_Parms StartCustomAction_Parms;

	this->ProcessEvent ( pFnStartCustomAction, &StartCustomAction_Parms, NULL );
};



class UClass* USFXCustomAction_PlayerMantleUp::pClassPointer = NULL;

class UClass* USFXCustomAction_PlayerMantleUp::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_PlayerMantleUp" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXCustomAction_PlayerMantleUp.ClientDoCustomAction
// [0x00024002]
// Parameters infos:
// unsigned long                  bForced                        ( CPF_OptionalParm | CPF_Parm )

void USFXCustomAction_PlayerMantleUp::ClientDoCustomAction ( unsigned long bForced )
{
	static UFunction* pFnClientDoCustomAction = NULL;

	if ( ! pFnClientDoCustomAction )
		pFnClientDoCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PlayerMantleUp.ClientDoCustomAction" );

	USFXCustomAction_PlayerMantleUp_execClientDoCustomAction_Parms ClientDoCustomAction_Parms;
	ClientDoCustomAction_Parms.bForced = bForced;

	this->ProcessEvent ( pFnClientDoCustomAction, &ClientDoCustomAction_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_PlayerMantleUp.ServerStartCustomAction
// [0x00024002]
// Parameters infos:
// int                            NewAction                      ( CPF_Parm )
// class ABioPawn*                Sync                           ( CPF_OptionalParm | CPF_Parm )
// int                            NewPowerAction                 ( CPF_OptionalParm | CPF_Parm )

void USFXCustomAction_PlayerMantleUp::ServerStartCustomAction ( int NewAction, class ABioPawn* Sync, int NewPowerAction )
{
	static UFunction* pFnServerStartCustomAction = NULL;

	if ( ! pFnServerStartCustomAction )
		pFnServerStartCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PlayerMantleUp.ServerStartCustomAction" );

	USFXCustomAction_PlayerMantleUp_execServerStartCustomAction_Parms ServerStartCustomAction_Parms;
	ServerStartCustomAction_Parms.NewAction = NewAction;
	ServerStartCustomAction_Parms.Sync = Sync;
	ServerStartCustomAction_Parms.NewPowerAction = NewPowerAction;

	this->ProcessEvent ( pFnServerStartCustomAction, &ServerStartCustomAction_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_PlayerMantleUp.Replicate
// [0x00020002]
// Parameters infos:

void USFXCustomAction_PlayerMantleUp::Replicate ( )
{
	static UFunction* pFnReplicate = NULL;

	if ( ! pFnReplicate )
		pFnReplicate = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PlayerMantleUp.Replicate" );

	USFXCustomAction_PlayerMantleUp_execReplicate_Parms Replicate_Parms;

	this->ProcessEvent ( pFnReplicate, &Replicate_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_PlayerMantleUp.GetBodyStanceAnim
// [0x00020002]
// Parameters infos:
// struct FBodyStance             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FBodyStance USFXCustomAction_PlayerMantleUp::GetBodyStanceAnim ( )
{
	static UFunction* pFnGetBodyStanceAnim = NULL;

	if ( ! pFnGetBodyStanceAnim )
		pFnGetBodyStanceAnim = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PlayerMantleUp.GetBodyStanceAnim" );

	USFXCustomAction_PlayerMantleUp_execGetBodyStanceAnim_Parms GetBodyStanceAnim_Parms;

	this->ProcessEvent ( pFnGetBodyStanceAnim, &GetBodyStanceAnim_Parms, NULL );

	return GetBodyStanceAnim_Parms.ReturnValue;
};

// Function SFXGameContent.SFXCustomAction_PlayerMantleUp.StopCustomAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_PlayerMantleUp::StopCustomAction ( )
{
	static UFunction* pFnStopCustomAction = NULL;

	if ( ! pFnStopCustomAction )
		pFnStopCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PlayerMantleUp.StopCustomAction" );

	USFXCustomAction_PlayerMantleUp_execStopCustomAction_Parms StopCustomAction_Parms;

	this->ProcessEvent ( pFnStopCustomAction, &StopCustomAction_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_PlayerMantleUp.StartCustomAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_PlayerMantleUp::StartCustomAction ( )
{
	static UFunction* pFnStartCustomAction = NULL;

	if ( ! pFnStartCustomAction )
		pFnStartCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PlayerMantleUp.StartCustomAction" );

	USFXCustomAction_PlayerMantleUp_execStartCustomAction_Parms StartCustomAction_Parms;

	this->ProcessEvent ( pFnStartCustomAction, &StartCustomAction_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_PlayerMantleUp.InternalCanDoCustomAction
// [0x00880002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioPawn*                SyncPawn                       ( CPF_Parm )
// unsigned long                  bForced                        ( CPF_Parm )

bool USFXCustomAction_PlayerMantleUp::InternalCanDoCustomAction ( class ABioPawn* SyncPawn, unsigned long bForced )
{
	static UFunction* pFnInternalCanDoCustomAction = NULL;

	if ( ! pFnInternalCanDoCustomAction )
		pFnInternalCanDoCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PlayerMantleUp.InternalCanDoCustomAction" );

	USFXCustomAction_PlayerMantleUp_execInternalCanDoCustomAction_Parms InternalCanDoCustomAction_Parms;
	InternalCanDoCustomAction_Parms.SyncPawn = SyncPawn;
	InternalCanDoCustomAction_Parms.bForced = bForced;

	this->ProcessEvent ( pFnInternalCanDoCustomAction, &InternalCanDoCustomAction_Parms, NULL );

	return InternalCanDoCustomAction_Parms.ReturnValue;
};

// Function SFXGameContent.SFXCustomAction_PlayerMantleUp.GetUsedAnimNames
// [0x00422802] ( FUNC_Event )
// Parameters infos:
// TArray<struct SFXName>         UsedAnims                      ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void USFXCustomAction_PlayerMantleUp::eventGetUsedAnimNames ( TArray<struct SFXName>* UsedAnims )
{
	static UFunction* pFnGetUsedAnimNames = NULL;

	if ( ! pFnGetUsedAnimNames )
		pFnGetUsedAnimNames = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PlayerMantleUp.GetUsedAnimNames" );

	USFXCustomAction_PlayerMantleUp_eventGetUsedAnimNames_Parms GetUsedAnimNames_Parms;

	if ( UsedAnims )
		memcpy ( &GetUsedAnimNames_Parms.UsedAnims, UsedAnims, 0x10 );

	this->ProcessEvent ( pFnGetUsedAnimNames, &GetUsedAnimNames_Parms, NULL );

	if ( UsedAnims )
		memcpy ( UsedAnims, &GetUsedAnimNames_Parms.UsedAnims, 0x10 );
};



class UClass* USFXCustomAction_SimpleMoveBase::pClassPointer = NULL;

class UClass* USFXCustomAction_SimpleMoveBase::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_SimpleMoveBase" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXCustomAction_SimpleMoveBase.ClientDoCustomAction
// [0x00024002]
// Parameters infos:
// unsigned long                  bForced                        ( CPF_OptionalParm | CPF_Parm )

void USFXCustomAction_SimpleMoveBase::ClientDoCustomAction ( unsigned long bForced )
{
	static UFunction* pFnClientDoCustomAction = NULL;

	if ( ! pFnClientDoCustomAction )
		pFnClientDoCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_SimpleMoveBase.ClientDoCustomAction" );

	USFXCustomAction_SimpleMoveBase_execClientDoCustomAction_Parms ClientDoCustomAction_Parms;
	ClientDoCustomAction_Parms.bForced = bForced;

	this->ProcessEvent ( pFnClientDoCustomAction, &ClientDoCustomAction_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_SimpleMoveBase.Replicate
// [0x00020002]
// Parameters infos:

void USFXCustomAction_SimpleMoveBase::Replicate ( )
{
	static UFunction* pFnReplicate = NULL;

	if ( ! pFnReplicate )
		pFnReplicate = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_SimpleMoveBase.Replicate" );

	USFXCustomAction_SimpleMoveBase_execReplicate_Parms Replicate_Parms;

	this->ProcessEvent ( pFnReplicate, &Replicate_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_SimpleMoveBase.CanBeInterrupted
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXCustomAction_SimpleMoveBase::CanBeInterrupted ( )
{
	static UFunction* pFnCanBeInterrupted = NULL;

	if ( ! pFnCanBeInterrupted )
		pFnCanBeInterrupted = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_SimpleMoveBase.CanBeInterrupted" );

	USFXCustomAction_SimpleMoveBase_execCanBeInterrupted_Parms CanBeInterrupted_Parms;

	this->ProcessEvent ( pFnCanBeInterrupted, &CanBeInterrupted_Parms, NULL );

	return CanBeInterrupted_Parms.ReturnValue;
};

// Function SFXGameContent.SFXCustomAction_SimpleMoveBase.DestTimeout
// [0x00020002]
// Parameters infos:

void USFXCustomAction_SimpleMoveBase::DestTimeout ( )
{
	static UFunction* pFnDestTimeout = NULL;

	if ( ! pFnDestTimeout )
		pFnDestTimeout = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_SimpleMoveBase.DestTimeout" );

	USFXCustomAction_SimpleMoveBase_execDestTimeout_Parms DestTimeout_Parms;

	this->ProcessEvent ( pFnDestTimeout, &DestTimeout_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_SimpleMoveBase.BodyStanceAnimEndNotification
// [0x00020002]
// Parameters infos:
// class UAnimNodeSequence*       SeqNode                        ( CPF_Parm )
// float                          PlayedTime                     ( CPF_Parm )
// float                          ExcessTime                     ( CPF_Parm )

void USFXCustomAction_SimpleMoveBase::BodyStanceAnimEndNotification ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime )
{
	static UFunction* pFnBodyStanceAnimEndNotification = NULL;

	if ( ! pFnBodyStanceAnimEndNotification )
		pFnBodyStanceAnimEndNotification = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_SimpleMoveBase.BodyStanceAnimEndNotification" );

	USFXCustomAction_SimpleMoveBase_execBodyStanceAnimEndNotification_Parms BodyStanceAnimEndNotification_Parms;
	BodyStanceAnimEndNotification_Parms.SeqNode = SeqNode;
	BodyStanceAnimEndNotification_Parms.PlayedTime = PlayedTime;
	BodyStanceAnimEndNotification_Parms.ExcessTime = ExcessTime;

	this->ProcessEvent ( pFnBodyStanceAnimEndNotification, &BodyStanceAnimEndNotification_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_SimpleMoveBase.StopCustomAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_SimpleMoveBase::StopCustomAction ( )
{
	static UFunction* pFnStopCustomAction = NULL;

	if ( ! pFnStopCustomAction )
		pFnStopCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_SimpleMoveBase.StopCustomAction" );

	USFXCustomAction_SimpleMoveBase_execStopCustomAction_Parms StopCustomAction_Parms;

	this->ProcessEvent ( pFnStopCustomAction, &StopCustomAction_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_SimpleMoveBase.PlayStartAnimation
// [0x00020002]
// Parameters infos:

void USFXCustomAction_SimpleMoveBase::PlayStartAnimation ( )
{
	static UFunction* pFnPlayStartAnimation = NULL;

	if ( ! pFnPlayStartAnimation )
		pFnPlayStartAnimation = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_SimpleMoveBase.PlayStartAnimation" );

	USFXCustomAction_SimpleMoveBase_execPlayStartAnimation_Parms PlayStartAnimation_Parms;

	this->ProcessEvent ( pFnPlayStartAnimation, &PlayStartAnimation_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_SimpleMoveBase.GetBodyStanceAnim
// [0x00020002]
// Parameters infos:
// struct FBodyStance             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FBodyStance USFXCustomAction_SimpleMoveBase::GetBodyStanceAnim ( )
{
	static UFunction* pFnGetBodyStanceAnim = NULL;

	if ( ! pFnGetBodyStanceAnim )
		pFnGetBodyStanceAnim = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_SimpleMoveBase.GetBodyStanceAnim" );

	USFXCustomAction_SimpleMoveBase_execGetBodyStanceAnim_Parms GetBodyStanceAnim_Parms;

	this->ProcessEvent ( pFnGetBodyStanceAnim, &GetBodyStanceAnim_Parms, NULL );

	return GetBodyStanceAnim_Parms.ReturnValue;
};

// Function SFXGameContent.SFXCustomAction_SimpleMoveBase.StartCustomAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_SimpleMoveBase::StartCustomAction ( )
{
	static UFunction* pFnStartCustomAction = NULL;

	if ( ! pFnStartCustomAction )
		pFnStartCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_SimpleMoveBase.StartCustomAction" );

	USFXCustomAction_SimpleMoveBase_execStartCustomAction_Parms StartCustomAction_Parms;

	this->ProcessEvent ( pFnStartCustomAction, &StartCustomAction_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_SimpleMoveBase.InternalCanDoCustomAction
// [0x00080002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioPawn*                SyncPawn                       ( CPF_Parm )
// unsigned long                  bForced                        ( CPF_Parm )

bool USFXCustomAction_SimpleMoveBase::InternalCanDoCustomAction ( class ABioPawn* SyncPawn, unsigned long bForced )
{
	static UFunction* pFnInternalCanDoCustomAction = NULL;

	if ( ! pFnInternalCanDoCustomAction )
		pFnInternalCanDoCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_SimpleMoveBase.InternalCanDoCustomAction" );

	USFXCustomAction_SimpleMoveBase_execInternalCanDoCustomAction_Parms InternalCanDoCustomAction_Parms;
	InternalCanDoCustomAction_Parms.SyncPawn = SyncPawn;
	InternalCanDoCustomAction_Parms.bForced = bForced;

	this->ProcessEvent ( pFnInternalCanDoCustomAction, &InternalCanDoCustomAction_Parms, NULL );

	return InternalCanDoCustomAction_Parms.ReturnValue;
};

// Function SFXGameContent.SFXCustomAction_SimpleMoveBase.RemoveBlockingEndPoints
// [0x00020002]
// Parameters infos:

void USFXCustomAction_SimpleMoveBase::RemoveBlockingEndPoints ( )
{
	static UFunction* pFnRemoveBlockingEndPoints = NULL;

	if ( ! pFnRemoveBlockingEndPoints )
		pFnRemoveBlockingEndPoints = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_SimpleMoveBase.RemoveBlockingEndPoints" );

	USFXCustomAction_SimpleMoveBase_execRemoveBlockingEndPoints_Parms RemoveBlockingEndPoints_Parms;

	this->ProcessEvent ( pFnRemoveBlockingEndPoints, &RemoveBlockingEndPoints_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_SimpleMoveBase.BlockMoveEndPoints
// [0x00020002]
// Parameters infos:

void USFXCustomAction_SimpleMoveBase::BlockMoveEndPoints ( )
{
	static UFunction* pFnBlockMoveEndPoints = NULL;

	if ( ! pFnBlockMoveEndPoints )
		pFnBlockMoveEndPoints = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_SimpleMoveBase.BlockMoveEndPoints" );

	USFXCustomAction_SimpleMoveBase_execBlockMoveEndPoints_Parms BlockMoveEndPoints_Parms;

	this->ProcessEvent ( pFnBlockMoveEndPoints, &BlockMoveEndPoints_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_SimpleMoveBase.ReachedPrecisePosition
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void USFXCustomAction_SimpleMoveBase::eventReachedPrecisePosition ( )
{
	static UFunction* pFnReachedPrecisePosition = NULL;

	if ( ! pFnReachedPrecisePosition )
		pFnReachedPrecisePosition = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_SimpleMoveBase.ReachedPrecisePosition" );

	USFXCustomAction_SimpleMoveBase_eventReachedPrecisePosition_Parms ReachedPrecisePosition_Parms;

	this->ProcessEvent ( pFnReachedPrecisePosition, &ReachedPrecisePosition_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_SimpleMoveBase.GetUsedAnimNames
// [0x00422802] ( FUNC_Event )
// Parameters infos:
// TArray<struct SFXName>         UsedAnims                      ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void USFXCustomAction_SimpleMoveBase::eventGetUsedAnimNames ( TArray<struct SFXName>* UsedAnims )
{
	static UFunction* pFnGetUsedAnimNames = NULL;

	if ( ! pFnGetUsedAnimNames )
		pFnGetUsedAnimNames = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_SimpleMoveBase.GetUsedAnimNames" );

	USFXCustomAction_SimpleMoveBase_eventGetUsedAnimNames_Parms GetUsedAnimNames_Parms;

	if ( UsedAnims )
		memcpy ( &GetUsedAnimNames_Parms.UsedAnims, UsedAnims, 0x10 );

	this->ProcessEvent ( pFnGetUsedAnimNames, &GetUsedAnimNames_Parms, NULL );

	if ( UsedAnims )
		memcpy ( UsedAnims, &GetUsedAnimNames_Parms.UsedAnims, 0x10 );
};



class UClass* USFXCustomAction_PlayerCoverSlipLeft::pClassPointer = NULL;

class UClass* USFXCustomAction_PlayerCoverSlipLeft::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_PlayerCoverSlipLeft" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXCustomAction_PlayerCoverSlipLeft.EndThisCustomAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_PlayerCoverSlipLeft::EndThisCustomAction ( )
{
	static UFunction* pFnEndThisCustomAction = NULL;

	if ( ! pFnEndThisCustomAction )
		pFnEndThisCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PlayerCoverSlipLeft.EndThisCustomAction" );

	USFXCustomAction_PlayerCoverSlipLeft_execEndThisCustomAction_Parms EndThisCustomAction_Parms;

	this->ProcessEvent ( pFnEndThisCustomAction, &EndThisCustomAction_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_PlayerCoverSlipLeft.StartCustomAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_PlayerCoverSlipLeft::StartCustomAction ( )
{
	static UFunction* pFnStartCustomAction = NULL;

	if ( ! pFnStartCustomAction )
		pFnStartCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PlayerCoverSlipLeft.StartCustomAction" );

	USFXCustomAction_PlayerCoverSlipLeft_execStartCustomAction_Parms StartCustomAction_Parms;

	this->ProcessEvent ( pFnStartCustomAction, &StartCustomAction_Parms, NULL );
};



class UClass* USFXCustomAction_PlayerCoverSlipLeftStanding::pClassPointer = NULL;

class UClass* USFXCustomAction_PlayerCoverSlipLeftStanding::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_PlayerCoverSlipLeftStanding" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXCustomAction_PlayerCoverSlipLeftStanding.EndThisCustomAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_PlayerCoverSlipLeftStanding::EndThisCustomAction ( )
{
	static UFunction* pFnEndThisCustomAction = NULL;

	if ( ! pFnEndThisCustomAction )
		pFnEndThisCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PlayerCoverSlipLeftStanding.EndThisCustomAction" );

	USFXCustomAction_PlayerCoverSlipLeftStanding_execEndThisCustomAction_Parms EndThisCustomAction_Parms;

	this->ProcessEvent ( pFnEndThisCustomAction, &EndThisCustomAction_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_PlayerCoverSlipLeftStanding.StartCustomAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_PlayerCoverSlipLeftStanding::StartCustomAction ( )
{
	static UFunction* pFnStartCustomAction = NULL;

	if ( ! pFnStartCustomAction )
		pFnStartCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PlayerCoverSlipLeftStanding.StartCustomAction" );

	USFXCustomAction_PlayerCoverSlipLeftStanding_execStartCustomAction_Parms StartCustomAction_Parms;

	this->ProcessEvent ( pFnStartCustomAction, &StartCustomAction_Parms, NULL );
};



class UClass* USFXCustomAction_PlayerCoverSlipRight::pClassPointer = NULL;

class UClass* USFXCustomAction_PlayerCoverSlipRight::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_PlayerCoverSlipRight" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXCustomAction_PlayerCoverSlipRight.EndThisCustomAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_PlayerCoverSlipRight::EndThisCustomAction ( )
{
	static UFunction* pFnEndThisCustomAction = NULL;

	if ( ! pFnEndThisCustomAction )
		pFnEndThisCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PlayerCoverSlipRight.EndThisCustomAction" );

	USFXCustomAction_PlayerCoverSlipRight_execEndThisCustomAction_Parms EndThisCustomAction_Parms;

	this->ProcessEvent ( pFnEndThisCustomAction, &EndThisCustomAction_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_PlayerCoverSlipRight.StartCustomAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_PlayerCoverSlipRight::StartCustomAction ( )
{
	static UFunction* pFnStartCustomAction = NULL;

	if ( ! pFnStartCustomAction )
		pFnStartCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PlayerCoverSlipRight.StartCustomAction" );

	USFXCustomAction_PlayerCoverSlipRight_execStartCustomAction_Parms StartCustomAction_Parms;

	this->ProcessEvent ( pFnStartCustomAction, &StartCustomAction_Parms, NULL );
};



class UClass* USFXCustomAction_PlayerCoverSlipRightStanding::pClassPointer = NULL;

class UClass* USFXCustomAction_PlayerCoverSlipRightStanding::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_PlayerCoverSlipRightStanding" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXCustomAction_PlayerCoverSlipRightStanding.EndThisCustomAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_PlayerCoverSlipRightStanding::EndThisCustomAction ( )
{
	static UFunction* pFnEndThisCustomAction = NULL;

	if ( ! pFnEndThisCustomAction )
		pFnEndThisCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PlayerCoverSlipRightStanding.EndThisCustomAction" );

	USFXCustomAction_PlayerCoverSlipRightStanding_execEndThisCustomAction_Parms EndThisCustomAction_Parms;

	this->ProcessEvent ( pFnEndThisCustomAction, &EndThisCustomAction_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_PlayerCoverSlipRightStanding.StartCustomAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_PlayerCoverSlipRightStanding::StartCustomAction ( )
{
	static UFunction* pFnStartCustomAction = NULL;

	if ( ! pFnStartCustomAction )
		pFnStartCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PlayerCoverSlipRightStanding.StartCustomAction" );

	USFXCustomAction_PlayerCoverSlipRightStanding_execStartCustomAction_Parms StartCustomAction_Parms;

	this->ProcessEvent ( pFnStartCustomAction, &StartCustomAction_Parms, NULL );
};



class UClass* USFXCustomAction_PlayerLadderClimbUp::pClassPointer = NULL;

class UClass* USFXCustomAction_PlayerLadderClimbUp::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_PlayerLadderClimbUp" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXCustomAction_PlayerLadderClimbUp.StopCustomAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_PlayerLadderClimbUp::StopCustomAction ( )
{
	static UFunction* pFnStopCustomAction = NULL;

	if ( ! pFnStopCustomAction )
		pFnStopCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PlayerLadderClimbUp.StopCustomAction" );

	USFXCustomAction_PlayerLadderClimbUp_execStopCustomAction_Parms StopCustomAction_Parms;

	this->ProcessEvent ( pFnStopCustomAction, &StopCustomAction_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_PlayerLadderClimbUp.PreAlignPawnLocation
// [0x00020002]
// Parameters infos:

void USFXCustomAction_PlayerLadderClimbUp::PreAlignPawnLocation ( )
{
	static UFunction* pFnPreAlignPawnLocation = NULL;

	if ( ! pFnPreAlignPawnLocation )
		pFnPreAlignPawnLocation = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PlayerLadderClimbUp.PreAlignPawnLocation" );

	USFXCustomAction_PlayerLadderClimbUp_execPreAlignPawnLocation_Parms PreAlignPawnLocation_Parms;

	this->ProcessEvent ( pFnPreAlignPawnLocation, &PreAlignPawnLocation_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_PlayerLadderClimbUp.SetMoveStage
// [0x00020002]
// Parameters infos:
// unsigned char                  NextStage                      ( CPF_Parm )

void USFXCustomAction_PlayerLadderClimbUp::SetMoveStage ( unsigned char NextStage )
{
	static UFunction* pFnSetMoveStage = NULL;

	if ( ! pFnSetMoveStage )
		pFnSetMoveStage = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PlayerLadderClimbUp.SetMoveStage" );

	USFXCustomAction_PlayerLadderClimbUp_execSetMoveStage_Parms SetMoveStage_Parms;
	SetMoveStage_Parms.NextStage = NextStage;

	this->ProcessEvent ( pFnSetMoveStage, &SetMoveStage_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_PlayerLadderClimbUp.TickCustomAction
// [0x00020002]
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void USFXCustomAction_PlayerLadderClimbUp::TickCustomAction ( float DeltaTime )
{
	static UFunction* pFnTickCustomAction = NULL;

	if ( ! pFnTickCustomAction )
		pFnTickCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PlayerLadderClimbUp.TickCustomAction" );

	USFXCustomAction_PlayerLadderClimbUp_execTickCustomAction_Parms TickCustomAction_Parms;
	TickCustomAction_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTickCustomAction, &TickCustomAction_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_PlayerLadderClimbUp.SyncRotation
// [0x00020002]
// Parameters infos:
// float                          Alpha                          ( CPF_Parm )

void USFXCustomAction_PlayerLadderClimbUp::SyncRotation ( float Alpha )
{
	static UFunction* pFnSyncRotation = NULL;

	if ( ! pFnSyncRotation )
		pFnSyncRotation = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PlayerLadderClimbUp.SyncRotation" );

	USFXCustomAction_PlayerLadderClimbUp_execSyncRotation_Parms SyncRotation_Parms;
	SyncRotation_Parms.Alpha = Alpha;

	this->ProcessEvent ( pFnSyncRotation, &SyncRotation_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_PlayerLadderClimbUp.SyncJumpEntrance
// [0x00020002]
// Parameters infos:
// float                          Alpha                          ( CPF_Parm )

void USFXCustomAction_PlayerLadderClimbUp::SyncJumpEntrance ( float Alpha )
{
	static UFunction* pFnSyncJumpEntrance = NULL;

	if ( ! pFnSyncJumpEntrance )
		pFnSyncJumpEntrance = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PlayerLadderClimbUp.SyncJumpEntrance" );

	USFXCustomAction_PlayerLadderClimbUp_execSyncJumpEntrance_Parms SyncJumpEntrance_Parms;
	SyncJumpEntrance_Parms.Alpha = Alpha;

	this->ProcessEvent ( pFnSyncJumpEntrance, &SyncJumpEntrance_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_PlayerLadderClimbUp.TickAlignment
// [0x00020002]
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void USFXCustomAction_PlayerLadderClimbUp::TickAlignment ( float DeltaTime )
{
	static UFunction* pFnTickAlignment = NULL;

	if ( ! pFnTickAlignment )
		pFnTickAlignment = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PlayerLadderClimbUp.TickAlignment" );

	USFXCustomAction_PlayerLadderClimbUp_execTickAlignment_Parms TickAlignment_Parms;
	TickAlignment_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTickAlignment, &TickAlignment_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_PlayerLadderClimbUp.StartCustomAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_PlayerLadderClimbUp::StartCustomAction ( )
{
	static UFunction* pFnStartCustomAction = NULL;

	if ( ! pFnStartCustomAction )
		pFnStartCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PlayerLadderClimbUp.StartCustomAction" );

	USFXCustomAction_PlayerLadderClimbUp_execStartCustomAction_Parms StartCustomAction_Parms;

	this->ProcessEvent ( pFnStartCustomAction, &StartCustomAction_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_PlayerLadderClimbUp.TickInput
// [0x00020002]
// Parameters infos:
// class UBioPlayerInput*         Input                          ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )

void USFXCustomAction_PlayerLadderClimbUp::TickInput ( class UBioPlayerInput* Input, float DeltaTime )
{
	static UFunction* pFnTickInput = NULL;

	if ( ! pFnTickInput )
		pFnTickInput = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PlayerLadderClimbUp.TickInput" );

	USFXCustomAction_PlayerLadderClimbUp_execTickInput_Parms TickInput_Parms;
	TickInput_Parms.Input = Input;
	TickInput_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTickInput, &TickInput_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_PlayerLadderClimbUp.GetUsedAnimNames
// [0x00422802] ( FUNC_Event )
// Parameters infos:
// TArray<struct SFXName>         UsedAnims                      ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void USFXCustomAction_PlayerLadderClimbUp::eventGetUsedAnimNames ( TArray<struct SFXName>* UsedAnims )
{
	static UFunction* pFnGetUsedAnimNames = NULL;

	if ( ! pFnGetUsedAnimNames )
		pFnGetUsedAnimNames = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PlayerLadderClimbUp.GetUsedAnimNames" );

	USFXCustomAction_PlayerLadderClimbUp_eventGetUsedAnimNames_Parms GetUsedAnimNames_Parms;

	if ( UsedAnims )
		memcpy ( &GetUsedAnimNames_Parms.UsedAnims, UsedAnims, 0x10 );

	this->ProcessEvent ( pFnGetUsedAnimNames, &GetUsedAnimNames_Parms, NULL );

	if ( UsedAnims )
		memcpy ( UsedAnims, &GetUsedAnimNames_Parms.UsedAnims, 0x10 );
};



class UClass* USFXCustomAction_PlayerLadderClimbDown::pClassPointer = NULL;

class UClass* USFXCustomAction_PlayerLadderClimbDown::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_PlayerLadderClimbDown" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXCustomAction_PlayerLadderClimbDown.TickInput
// [0x00020002]
// Parameters infos:
// class UBioPlayerInput*         Input                          ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )

void USFXCustomAction_PlayerLadderClimbDown::TickInput ( class UBioPlayerInput* Input, float DeltaTime )
{
	static UFunction* pFnTickInput = NULL;

	if ( ! pFnTickInput )
		pFnTickInput = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PlayerLadderClimbDown.TickInput" );

	USFXCustomAction_PlayerLadderClimbDown_execTickInput_Parms TickInput_Parms;
	TickInput_Parms.Input = Input;
	TickInput_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTickInput, &TickInput_Parms, NULL );
};



class UClass* USFXCustomAction_PlayerEvadeLeft::pClassPointer = NULL;

class UClass* USFXCustomAction_PlayerEvadeLeft::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_PlayerEvadeLeft" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXCustomAction_PlayerEvadeLeft.RollOverride
// [0x00020002]
// Parameters infos:

void USFXCustomAction_PlayerEvadeLeft::RollOverride ( )
{
	static UFunction* pFnRollOverride = NULL;

	if ( ! pFnRollOverride )
		pFnRollOverride = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PlayerEvadeLeft.RollOverride" );

	USFXCustomAction_PlayerEvadeLeft_execRollOverride_Parms RollOverride_Parms;

	this->ProcessEvent ( pFnRollOverride, &RollOverride_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_PlayerEvadeLeft.StartCustomAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_PlayerEvadeLeft::StartCustomAction ( )
{
	static UFunction* pFnStartCustomAction = NULL;

	if ( ! pFnStartCustomAction )
		pFnStartCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PlayerEvadeLeft.StartCustomAction" );

	USFXCustomAction_PlayerEvadeLeft_execStartCustomAction_Parms StartCustomAction_Parms;

	this->ProcessEvent ( pFnStartCustomAction, &StartCustomAction_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_PlayerEvadeLeft.InternalCanDoCustomAction
// [0x00080002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioPawn*                SyncPawn                       ( CPF_Parm )
// unsigned long                  bForced                        ( CPF_Parm )

bool USFXCustomAction_PlayerEvadeLeft::InternalCanDoCustomAction ( class ABioPawn* SyncPawn, unsigned long bForced )
{
	static UFunction* pFnInternalCanDoCustomAction = NULL;

	if ( ! pFnInternalCanDoCustomAction )
		pFnInternalCanDoCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PlayerEvadeLeft.InternalCanDoCustomAction" );

	USFXCustomAction_PlayerEvadeLeft_execInternalCanDoCustomAction_Parms InternalCanDoCustomAction_Parms;
	InternalCanDoCustomAction_Parms.SyncPawn = SyncPawn;
	InternalCanDoCustomAction_Parms.bForced = bForced;

	this->ProcessEvent ( pFnInternalCanDoCustomAction, &InternalCanDoCustomAction_Parms, NULL );

	return InternalCanDoCustomAction_Parms.ReturnValue;
};



class UClass* USFXCustomAction_PlayerEvadeRight::pClassPointer = NULL;

class UClass* USFXCustomAction_PlayerEvadeRight::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_PlayerEvadeRight" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXCustomAction_PlayerEvadeRight.RollOverride
// [0x00020002]
// Parameters infos:

void USFXCustomAction_PlayerEvadeRight::RollOverride ( )
{
	static UFunction* pFnRollOverride = NULL;

	if ( ! pFnRollOverride )
		pFnRollOverride = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PlayerEvadeRight.RollOverride" );

	USFXCustomAction_PlayerEvadeRight_execRollOverride_Parms RollOverride_Parms;

	this->ProcessEvent ( pFnRollOverride, &RollOverride_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_PlayerEvadeRight.StartCustomAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_PlayerEvadeRight::StartCustomAction ( )
{
	static UFunction* pFnStartCustomAction = NULL;

	if ( ! pFnStartCustomAction )
		pFnStartCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PlayerEvadeRight.StartCustomAction" );

	USFXCustomAction_PlayerEvadeRight_execStartCustomAction_Parms StartCustomAction_Parms;

	this->ProcessEvent ( pFnStartCustomAction, &StartCustomAction_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_PlayerEvadeRight.InternalCanDoCustomAction
// [0x00080002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioPawn*                SyncPawn                       ( CPF_Parm )
// unsigned long                  bForced                        ( CPF_Parm )

bool USFXCustomAction_PlayerEvadeRight::InternalCanDoCustomAction ( class ABioPawn* SyncPawn, unsigned long bForced )
{
	static UFunction* pFnInternalCanDoCustomAction = NULL;

	if ( ! pFnInternalCanDoCustomAction )
		pFnInternalCanDoCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PlayerEvadeRight.InternalCanDoCustomAction" );

	USFXCustomAction_PlayerEvadeRight_execInternalCanDoCustomAction_Parms InternalCanDoCustomAction_Parms;
	InternalCanDoCustomAction_Parms.SyncPawn = SyncPawn;
	InternalCanDoCustomAction_Parms.bForced = bForced;

	this->ProcessEvent ( pFnInternalCanDoCustomAction, &InternalCanDoCustomAction_Parms, NULL );

	return InternalCanDoCustomAction_Parms.ReturnValue;
};



class UClass* USFXCustomAction_PlayerEvadeForward::pClassPointer = NULL;

class UClass* USFXCustomAction_PlayerEvadeForward::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_PlayerEvadeForward" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXCustomAction_PlayerEvadeForward.ClientDoCustomActionImpact
// [0x00024002]
// Parameters infos:
// class AActor*                  oActor                         ( CPF_Parm )
// int                            ImpactCount                    ( CPF_Parm )
// unsigned long                  bFirstTarget                   ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_OptionalParm | CPF_Parm )
// int                            CustomActionReactionType       ( CPF_OptionalParm | CPF_Parm )

void USFXCustomAction_PlayerEvadeForward::ClientDoCustomActionImpact ( class AActor* oActor, int ImpactCount, unsigned long bFirstTarget, struct FVector const& HitLocation, struct FVector const& HitNormal, int CustomActionReactionType )
{
	static UFunction* pFnClientDoCustomActionImpact = NULL;

	if ( ! pFnClientDoCustomActionImpact )
		pFnClientDoCustomActionImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PlayerEvadeForward.ClientDoCustomActionImpact" );

	USFXCustomAction_PlayerEvadeForward_execClientDoCustomActionImpact_Parms ClientDoCustomActionImpact_Parms;
	ClientDoCustomActionImpact_Parms.oActor = oActor;
	ClientDoCustomActionImpact_Parms.ImpactCount = ImpactCount;
	ClientDoCustomActionImpact_Parms.bFirstTarget = bFirstTarget;
	memcpy ( &ClientDoCustomActionImpact_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ClientDoCustomActionImpact_Parms.HitNormal, &HitNormal, 0xC );
	ClientDoCustomActionImpact_Parms.CustomActionReactionType = CustomActionReactionType;

	this->ProcessEvent ( pFnClientDoCustomActionImpact, &ClientDoCustomActionImpact_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_PlayerEvadeForward.RollOverride
// [0x00020002]
// Parameters infos:

void USFXCustomAction_PlayerEvadeForward::RollOverride ( )
{
	static UFunction* pFnRollOverride = NULL;

	if ( ! pFnRollOverride )
		pFnRollOverride = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PlayerEvadeForward.RollOverride" );

	USFXCustomAction_PlayerEvadeForward_execRollOverride_Parms RollOverride_Parms;

	this->ProcessEvent ( pFnRollOverride, &RollOverride_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_PlayerEvadeForward.StopCustomAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_PlayerEvadeForward::StopCustomAction ( )
{
	static UFunction* pFnStopCustomAction = NULL;

	if ( ! pFnStopCustomAction )
		pFnStopCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PlayerEvadeForward.StopCustomAction" );

	USFXCustomAction_PlayerEvadeForward_execStopCustomAction_Parms StopCustomAction_Parms;

	this->ProcessEvent ( pFnStopCustomAction, &StopCustomAction_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_PlayerEvadeForward.TurnOnHitWall
// [0x00020002]
// Parameters infos:

void USFXCustomAction_PlayerEvadeForward::TurnOnHitWall ( )
{
	static UFunction* pFnTurnOnHitWall = NULL;

	if ( ! pFnTurnOnHitWall )
		pFnTurnOnHitWall = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PlayerEvadeForward.TurnOnHitWall" );

	USFXCustomAction_PlayerEvadeForward_execTurnOnHitWall_Parms TurnOnHitWall_Parms;

	this->ProcessEvent ( pFnTurnOnHitWall, &TurnOnHitWall_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_PlayerEvadeForward.NotifyHitWall
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 HitNormal                      ( CPF_Parm )
// class AActor*                  Wall                           ( CPF_Parm )

bool USFXCustomAction_PlayerEvadeForward::NotifyHitWall ( struct FVector const& HitNormal, class AActor* Wall )
{
	static UFunction* pFnNotifyHitWall = NULL;

	if ( ! pFnNotifyHitWall )
		pFnNotifyHitWall = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PlayerEvadeForward.NotifyHitWall" );

	USFXCustomAction_PlayerEvadeForward_execNotifyHitWall_Parms NotifyHitWall_Parms;
	memcpy ( &NotifyHitWall_Parms.HitNormal, &HitNormal, 0xC );
	NotifyHitWall_Parms.Wall = Wall;

	this->ProcessEvent ( pFnNotifyHitWall, &NotifyHitWall_Parms, NULL );

	return NotifyHitWall_Parms.ReturnValue;
};

// Function SFXGameContent.SFXCustomAction_PlayerEvadeForward.EndThisCustomAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_PlayerEvadeForward::EndThisCustomAction ( )
{
	static UFunction* pFnEndThisCustomAction = NULL;

	if ( ! pFnEndThisCustomAction )
		pFnEndThisCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PlayerEvadeForward.EndThisCustomAction" );

	USFXCustomAction_PlayerEvadeForward_execEndThisCustomAction_Parms EndThisCustomAction_Parms;

	this->ProcessEvent ( pFnEndThisCustomAction, &EndThisCustomAction_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_PlayerEvadeForward.SyncRotation
// [0x00020002]
// Parameters infos:
// float                          Alpha                          ( CPF_Parm )
// struct FVector                 ToEnd2D                        ( CPF_Parm )

void USFXCustomAction_PlayerEvadeForward::SyncRotation ( float Alpha, struct FVector const& ToEnd2D )
{
	static UFunction* pFnSyncRotation = NULL;

	if ( ! pFnSyncRotation )
		pFnSyncRotation = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PlayerEvadeForward.SyncRotation" );

	USFXCustomAction_PlayerEvadeForward_execSyncRotation_Parms SyncRotation_Parms;
	SyncRotation_Parms.Alpha = Alpha;
	memcpy ( &SyncRotation_Parms.ToEnd2D, &ToEnd2D, 0xC );

	this->ProcessEvent ( pFnSyncRotation, &SyncRotation_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_PlayerEvadeForward.StartCustomAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_PlayerEvadeForward::StartCustomAction ( )
{
	static UFunction* pFnStartCustomAction = NULL;

	if ( ! pFnStartCustomAction )
		pFnStartCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PlayerEvadeForward.StartCustomAction" );

	USFXCustomAction_PlayerEvadeForward_execStartCustomAction_Parms StartCustomAction_Parms;

	this->ProcessEvent ( pFnStartCustomAction, &StartCustomAction_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_PlayerEvadeForward.InternalCanDoCustomAction
// [0x00080002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioPawn*                SyncPawn                       ( CPF_Parm )
// unsigned long                  bForced                        ( CPF_Parm )

bool USFXCustomAction_PlayerEvadeForward::InternalCanDoCustomAction ( class ABioPawn* SyncPawn, unsigned long bForced )
{
	static UFunction* pFnInternalCanDoCustomAction = NULL;

	if ( ! pFnInternalCanDoCustomAction )
		pFnInternalCanDoCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PlayerEvadeForward.InternalCanDoCustomAction" );

	USFXCustomAction_PlayerEvadeForward_execInternalCanDoCustomAction_Parms InternalCanDoCustomAction_Parms;
	InternalCanDoCustomAction_Parms.SyncPawn = SyncPawn;
	InternalCanDoCustomAction_Parms.bForced = bForced;

	this->ProcessEvent ( pFnInternalCanDoCustomAction, &InternalCanDoCustomAction_Parms, NULL );

	return InternalCanDoCustomAction_Parms.ReturnValue;
};



class UClass* USFXCustomAction_PlayerEvadeBackwards::pClassPointer = NULL;

class UClass* USFXCustomAction_PlayerEvadeBackwards::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_PlayerEvadeBackwards" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXCustomAction_PlayerEvadeBackwards.ClientDoCustomActionImpact
// [0x00024002]
// Parameters infos:
// class AActor*                  oActor                         ( CPF_Parm )
// int                            ImpactCount                    ( CPF_Parm )
// unsigned long                  bFirstTarget                   ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_OptionalParm | CPF_Parm )
// int                            CustomActionReactionType       ( CPF_OptionalParm | CPF_Parm )

void USFXCustomAction_PlayerEvadeBackwards::ClientDoCustomActionImpact ( class AActor* oActor, int ImpactCount, unsigned long bFirstTarget, struct FVector const& HitLocation, struct FVector const& HitNormal, int CustomActionReactionType )
{
	static UFunction* pFnClientDoCustomActionImpact = NULL;

	if ( ! pFnClientDoCustomActionImpact )
		pFnClientDoCustomActionImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PlayerEvadeBackwards.ClientDoCustomActionImpact" );

	USFXCustomAction_PlayerEvadeBackwards_execClientDoCustomActionImpact_Parms ClientDoCustomActionImpact_Parms;
	ClientDoCustomActionImpact_Parms.oActor = oActor;
	ClientDoCustomActionImpact_Parms.ImpactCount = ImpactCount;
	ClientDoCustomActionImpact_Parms.bFirstTarget = bFirstTarget;
	memcpy ( &ClientDoCustomActionImpact_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ClientDoCustomActionImpact_Parms.HitNormal, &HitNormal, 0xC );
	ClientDoCustomActionImpact_Parms.CustomActionReactionType = CustomActionReactionType;

	this->ProcessEvent ( pFnClientDoCustomActionImpact, &ClientDoCustomActionImpact_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_PlayerEvadeBackwards.RollOverride
// [0x00020002]
// Parameters infos:

void USFXCustomAction_PlayerEvadeBackwards::RollOverride ( )
{
	static UFunction* pFnRollOverride = NULL;

	if ( ! pFnRollOverride )
		pFnRollOverride = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PlayerEvadeBackwards.RollOverride" );

	USFXCustomAction_PlayerEvadeBackwards_execRollOverride_Parms RollOverride_Parms;

	this->ProcessEvent ( pFnRollOverride, &RollOverride_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_PlayerEvadeBackwards.StopCustomAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_PlayerEvadeBackwards::StopCustomAction ( )
{
	static UFunction* pFnStopCustomAction = NULL;

	if ( ! pFnStopCustomAction )
		pFnStopCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PlayerEvadeBackwards.StopCustomAction" );

	USFXCustomAction_PlayerEvadeBackwards_execStopCustomAction_Parms StopCustomAction_Parms;

	this->ProcessEvent ( pFnStopCustomAction, &StopCustomAction_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_PlayerEvadeBackwards.StartCustomAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_PlayerEvadeBackwards::StartCustomAction ( )
{
	static UFunction* pFnStartCustomAction = NULL;

	if ( ! pFnStartCustomAction )
		pFnStartCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PlayerEvadeBackwards.StartCustomAction" );

	USFXCustomAction_PlayerEvadeBackwards_execStartCustomAction_Parms StartCustomAction_Parms;

	this->ProcessEvent ( pFnStartCustomAction, &StartCustomAction_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_PlayerEvadeBackwards.InternalCanDoCustomAction
// [0x00080002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioPawn*                SyncPawn                       ( CPF_Parm )
// unsigned long                  bForced                        ( CPF_Parm )

bool USFXCustomAction_PlayerEvadeBackwards::InternalCanDoCustomAction ( class ABioPawn* SyncPawn, unsigned long bForced )
{
	static UFunction* pFnInternalCanDoCustomAction = NULL;

	if ( ! pFnInternalCanDoCustomAction )
		pFnInternalCanDoCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PlayerEvadeBackwards.InternalCanDoCustomAction" );

	USFXCustomAction_PlayerEvadeBackwards_execInternalCanDoCustomAction_Parms InternalCanDoCustomAction_Parms;
	InternalCanDoCustomAction_Parms.SyncPawn = SyncPawn;
	InternalCanDoCustomAction_Parms.bForced = bForced;

	this->ProcessEvent ( pFnInternalCanDoCustomAction, &InternalCanDoCustomAction_Parms, NULL );

	return InternalCanDoCustomAction_Parms.ReturnValue;
};



class UClass* USFXCustomAction_MantleMelee::pClassPointer = NULL;

class UClass* USFXCustomAction_MantleMelee::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_MantleMelee" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXCustomAction_MantleMelee.EndThisCustomAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_MantleMelee::EndThisCustomAction ( )
{
	static UFunction* pFnEndThisCustomAction = NULL;

	if ( ! pFnEndThisCustomAction )
		pFnEndThisCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_MantleMelee.EndThisCustomAction" );

	USFXCustomAction_MantleMelee_execEndThisCustomAction_Parms EndThisCustomAction_Parms;

	this->ProcessEvent ( pFnEndThisCustomAction, &EndThisCustomAction_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_MantleMelee.Breakout
// [0x00020002]
// Parameters infos:

void USFXCustomAction_MantleMelee::Breakout ( )
{
	static UFunction* pFnBreakout = NULL;

	if ( ! pFnBreakout )
		pFnBreakout = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_MantleMelee.Breakout" );

	USFXCustomAction_MantleMelee_execBreakout_Parms Breakout_Parms;

	this->ProcessEvent ( pFnBreakout, &Breakout_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_MantleMelee.NotifyBump
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Other                          ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

bool USFXCustomAction_MantleMelee::NotifyBump ( class AActor* Other, struct FVector const& HitNormal )
{
	static UFunction* pFnNotifyBump = NULL;

	if ( ! pFnNotifyBump )
		pFnNotifyBump = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_MantleMelee.NotifyBump" );

	USFXCustomAction_MantleMelee_execNotifyBump_Parms NotifyBump_Parms;
	NotifyBump_Parms.Other = Other;
	memcpy ( &NotifyBump_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnNotifyBump, &NotifyBump_Parms, NULL );

	return NotifyBump_Parms.ReturnValue;
};

// Function SFXGameContent.SFXCustomAction_MantleMelee.ClientDoCustomActionImpact
// [0x00024002]
// Parameters infos:
// class AActor*                  oActor                         ( CPF_Parm )
// int                            ImpactCount                    ( CPF_Parm )
// unsigned long                  bFirstTarget                   ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_OptionalParm | CPF_Parm )
// int                            CustomActionReactionType       ( CPF_OptionalParm | CPF_Parm )

void USFXCustomAction_MantleMelee::ClientDoCustomActionImpact ( class AActor* oActor, int ImpactCount, unsigned long bFirstTarget, struct FVector const& HitLocation, struct FVector const& HitNormal, int CustomActionReactionType )
{
	static UFunction* pFnClientDoCustomActionImpact = NULL;

	if ( ! pFnClientDoCustomActionImpact )
		pFnClientDoCustomActionImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_MantleMelee.ClientDoCustomActionImpact" );

	USFXCustomAction_MantleMelee_execClientDoCustomActionImpact_Parms ClientDoCustomActionImpact_Parms;
	ClientDoCustomActionImpact_Parms.oActor = oActor;
	ClientDoCustomActionImpact_Parms.ImpactCount = ImpactCount;
	ClientDoCustomActionImpact_Parms.bFirstTarget = bFirstTarget;
	memcpy ( &ClientDoCustomActionImpact_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ClientDoCustomActionImpact_Parms.HitNormal, &HitNormal, 0xC );
	ClientDoCustomActionImpact_Parms.CustomActionReactionType = CustomActionReactionType;

	this->ProcessEvent ( pFnClientDoCustomActionImpact, &ClientDoCustomActionImpact_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_MantleMelee.StopCustomAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_MantleMelee::StopCustomAction ( )
{
	static UFunction* pFnStopCustomAction = NULL;

	if ( ! pFnStopCustomAction )
		pFnStopCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_MantleMelee.StopCustomAction" );

	USFXCustomAction_MantleMelee_execStopCustomAction_Parms StopCustomAction_Parms;

	this->ProcessEvent ( pFnStopCustomAction, &StopCustomAction_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_MantleMelee.StartCustomAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_MantleMelee::StartCustomAction ( )
{
	static UFunction* pFnStartCustomAction = NULL;

	if ( ! pFnStartCustomAction )
		pFnStartCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_MantleMelee.StartCustomAction" );

	USFXCustomAction_MantleMelee_execStartCustomAction_Parms StartCustomAction_Parms;

	this->ProcessEvent ( pFnStartCustomAction, &StartCustomAction_Parms, NULL );
};



class UClass* USFXCustomAction_SyncCoverGrab::pClassPointer = NULL;

class UClass* USFXCustomAction_SyncCoverGrab::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_SyncCoverGrab" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXCustomAction_SyncCoverGrab.StopCustomAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_SyncCoverGrab::StopCustomAction ( )
{
	static UFunction* pFnStopCustomAction = NULL;

	if ( ! pFnStopCustomAction )
		pFnStopCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_SyncCoverGrab.StopCustomAction" );

	USFXCustomAction_SyncCoverGrab_execStopCustomAction_Parms StopCustomAction_Parms;

	this->ProcessEvent ( pFnStopCustomAction, &StopCustomAction_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_SyncCoverGrab.NonSyncedAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_SyncCoverGrab::NonSyncedAction ( )
{
	static UFunction* pFnNonSyncedAction = NULL;

	if ( ! pFnNonSyncedAction )
		pFnNonSyncedAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_SyncCoverGrab.NonSyncedAction" );

	USFXCustomAction_SyncCoverGrab_execNonSyncedAction_Parms NonSyncedAction_Parms;

	this->ProcessEvent ( pFnNonSyncedAction, &NonSyncedAction_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_SyncCoverGrab.SyncAttack
// [0x00020002]
// Parameters infos:

void USFXCustomAction_SyncCoverGrab::SyncAttack ( )
{
	static UFunction* pFnSyncAttack = NULL;

	if ( ! pFnSyncAttack )
		pFnSyncAttack = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_SyncCoverGrab.SyncAttack" );

	USFXCustomAction_SyncCoverGrab_execSyncAttack_Parms SyncAttack_Parms;

	this->ProcessEvent ( pFnSyncAttack, &SyncAttack_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_SyncCoverGrab.GetVictimAnim
// [0x00420002]
// Parameters infos:
// struct FBodyStance             Stance                         ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void USFXCustomAction_SyncCoverGrab::GetVictimAnim ( struct FBodyStance* Stance )
{
	static UFunction* pFnGetVictimAnim = NULL;

	if ( ! pFnGetVictimAnim )
		pFnGetVictimAnim = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_SyncCoverGrab.GetVictimAnim" );

	USFXCustomAction_SyncCoverGrab_execGetVictimAnim_Parms GetVictimAnim_Parms;

	if ( Stance )
		memcpy ( &GetVictimAnim_Parms.Stance, Stance, 0x10 );

	this->ProcessEvent ( pFnGetVictimAnim, &GetVictimAnim_Parms, NULL );

	if ( Stance )
		memcpy ( Stance, &GetVictimAnim_Parms.Stance, 0x10 );
};

// Function SFXGameContent.SFXCustomAction_SyncCoverGrab.GetAttackerAnim
// [0x00420002]
// Parameters infos:
// struct FBodyStance             Stance                         ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void USFXCustomAction_SyncCoverGrab::GetAttackerAnim ( struct FBodyStance* Stance )
{
	static UFunction* pFnGetAttackerAnim = NULL;

	if ( ! pFnGetAttackerAnim )
		pFnGetAttackerAnim = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_SyncCoverGrab.GetAttackerAnim" );

	USFXCustomAction_SyncCoverGrab_execGetAttackerAnim_Parms GetAttackerAnim_Parms;

	if ( Stance )
		memcpy ( &GetAttackerAnim_Parms.Stance, Stance, 0x10 );

	this->ProcessEvent ( pFnGetAttackerAnim, &GetAttackerAnim_Parms, NULL );

	if ( Stance )
		memcpy ( Stance, &GetAttackerAnim_Parms.Stance, 0x10 );
};

// Function SFXGameContent.SFXCustomAction_SyncCoverGrab.GetVictimPawn
// [0x00020002]
// Parameters infos:
// class ABioPawn*                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class ABioPawn* USFXCustomAction_SyncCoverGrab::GetVictimPawn ( )
{
	static UFunction* pFnGetVictimPawn = NULL;

	if ( ! pFnGetVictimPawn )
		pFnGetVictimPawn = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_SyncCoverGrab.GetVictimPawn" );

	USFXCustomAction_SyncCoverGrab_execGetVictimPawn_Parms GetVictimPawn_Parms;

	this->ProcessEvent ( pFnGetVictimPawn, &GetVictimPawn_Parms, NULL );

	return GetVictimPawn_Parms.ReturnValue;
};

// Function SFXGameContent.SFXCustomAction_SyncCoverGrab.StartCustomAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_SyncCoverGrab::StartCustomAction ( )
{
	static UFunction* pFnStartCustomAction = NULL;

	if ( ! pFnStartCustomAction )
		pFnStartCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_SyncCoverGrab.StartCustomAction" );

	USFXCustomAction_SyncCoverGrab_execStartCustomAction_Parms StartCustomAction_Parms;

	this->ProcessEvent ( pFnStartCustomAction, &StartCustomAction_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_SyncCoverGrab.ShouldPlayMirrorAnim
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXCustomAction_SyncCoverGrab::ShouldPlayMirrorAnim ( )
{
	static UFunction* pFnShouldPlayMirrorAnim = NULL;

	if ( ! pFnShouldPlayMirrorAnim )
		pFnShouldPlayMirrorAnim = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_SyncCoverGrab.ShouldPlayMirrorAnim" );

	USFXCustomAction_SyncCoverGrab_execShouldPlayMirrorAnim_Parms ShouldPlayMirrorAnim_Parms;

	this->ProcessEvent ( pFnShouldPlayMirrorAnim, &ShouldPlayMirrorAnim_Parms, NULL );

	return ShouldPlayMirrorAnim_Parms.ReturnValue;
};

// Function SFXGameContent.SFXCustomAction_SyncCoverGrab.VerifyVictimDestIsClear
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioPawn*                VictimPawn                     ( CPF_Parm )
// struct FVector                 DestinationPos                 ( CPF_Parm )

bool USFXCustomAction_SyncCoverGrab::VerifyVictimDestIsClear ( class ABioPawn* VictimPawn, struct FVector const& DestinationPos )
{
	static UFunction* pFnVerifyVictimDestIsClear = NULL;

	if ( ! pFnVerifyVictimDestIsClear )
		pFnVerifyVictimDestIsClear = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_SyncCoverGrab.VerifyVictimDestIsClear" );

	USFXCustomAction_SyncCoverGrab_execVerifyVictimDestIsClear_Parms VerifyVictimDestIsClear_Parms;
	VerifyVictimDestIsClear_Parms.VictimPawn = VictimPawn;
	memcpy ( &VerifyVictimDestIsClear_Parms.DestinationPos, &DestinationPos, 0xC );

	this->ProcessEvent ( pFnVerifyVictimDestIsClear, &VerifyVictimDestIsClear_Parms, NULL );

	return VerifyVictimDestIsClear_Parms.ReturnValue;
};

// Function SFXGameContent.SFXCustomAction_SyncCoverGrab.InternalCanDoCustomAction
// [0x00080002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioPawn*                SyncPawn                       ( CPF_Parm )
// unsigned long                  bForced                        ( CPF_Parm )

bool USFXCustomAction_SyncCoverGrab::InternalCanDoCustomAction ( class ABioPawn* SyncPawn, unsigned long bForced )
{
	static UFunction* pFnInternalCanDoCustomAction = NULL;

	if ( ! pFnInternalCanDoCustomAction )
		pFnInternalCanDoCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_SyncCoverGrab.InternalCanDoCustomAction" );

	USFXCustomAction_SyncCoverGrab_execInternalCanDoCustomAction_Parms InternalCanDoCustomAction_Parms;
	InternalCanDoCustomAction_Parms.SyncPawn = SyncPawn;
	InternalCanDoCustomAction_Parms.bForced = bForced;

	this->ProcessEvent ( pFnInternalCanDoCustomAction, &InternalCanDoCustomAction_Parms, NULL );

	return InternalCanDoCustomAction_Parms.ReturnValue;
};

// Function SFXGameContent.SFXCustomAction_SyncCoverGrab.StartMeleeAttack
// [0x00020002]
// Parameters infos:

void USFXCustomAction_SyncCoverGrab::StartMeleeAttack ( )
{
	static UFunction* pFnStartMeleeAttack = NULL;

	if ( ! pFnStartMeleeAttack )
		pFnStartMeleeAttack = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_SyncCoverGrab.StartMeleeAttack" );

	USFXCustomAction_SyncCoverGrab_execStartMeleeAttack_Parms StartMeleeAttack_Parms;

	this->ProcessEvent ( pFnStartMeleeAttack, &StartMeleeAttack_Parms, NULL );
};



class UClass* USFXCustomAction_SyncCoverMelee::pClassPointer = NULL;

class UClass* USFXCustomAction_SyncCoverMelee::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_SyncCoverMelee" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXCustomAction_SyncCoverMelee.MeleeImpact
// [0x00020002]
// Parameters infos:

void USFXCustomAction_SyncCoverMelee::MeleeImpact ( )
{
	static UFunction* pFnMeleeImpact = NULL;

	if ( ! pFnMeleeImpact )
		pFnMeleeImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_SyncCoverMelee.MeleeImpact" );

	USFXCustomAction_SyncCoverMelee_execMeleeImpact_Parms MeleeImpact_Parms;

	this->ProcessEvent ( pFnMeleeImpact, &MeleeImpact_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_SyncCoverMelee.StopCustomAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_SyncCoverMelee::StopCustomAction ( )
{
	static UFunction* pFnStopCustomAction = NULL;

	if ( ! pFnStopCustomAction )
		pFnStopCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_SyncCoverMelee.StopCustomAction" );

	USFXCustomAction_SyncCoverMelee_execStopCustomAction_Parms StopCustomAction_Parms;

	this->ProcessEvent ( pFnStopCustomAction, &StopCustomAction_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_SyncCoverMelee.EndThisCustomAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_SyncCoverMelee::EndThisCustomAction ( )
{
	static UFunction* pFnEndThisCustomAction = NULL;

	if ( ! pFnEndThisCustomAction )
		pFnEndThisCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_SyncCoverMelee.EndThisCustomAction" );

	USFXCustomAction_SyncCoverMelee_execEndThisCustomAction_Parms EndThisCustomAction_Parms;

	this->ProcessEvent ( pFnEndThisCustomAction, &EndThisCustomAction_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_SyncCoverMelee.StartCustomAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_SyncCoverMelee::StartCustomAction ( )
{
	static UFunction* pFnStartCustomAction = NULL;

	if ( ! pFnStartCustomAction )
		pFnStartCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_SyncCoverMelee.StartCustomAction" );

	USFXCustomAction_SyncCoverMelee_execStartCustomAction_Parms StartCustomAction_Parms;

	this->ProcessEvent ( pFnStartCustomAction, &StartCustomAction_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_SyncCoverMelee.GetUsedAnimNames
// [0x00422802] ( FUNC_Event )
// Parameters infos:
// TArray<struct SFXName>         UsedAnims                      ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void USFXCustomAction_SyncCoverMelee::eventGetUsedAnimNames ( TArray<struct SFXName>* UsedAnims )
{
	static UFunction* pFnGetUsedAnimNames = NULL;

	if ( ! pFnGetUsedAnimNames )
		pFnGetUsedAnimNames = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_SyncCoverMelee.GetUsedAnimNames" );

	USFXCustomAction_SyncCoverMelee_eventGetUsedAnimNames_Parms GetUsedAnimNames_Parms;

	if ( UsedAnims )
		memcpy ( &GetUsedAnimNames_Parms.UsedAnims, UsedAnims, 0x10 );

	this->ProcessEvent ( pFnGetUsedAnimNames, &GetUsedAnimNames_Parms, NULL );

	if ( UsedAnims )
		memcpy ( UsedAnims, &GetUsedAnimNames_Parms.UsedAnims, 0x10 );
};



class UClass* USFXCustomAction_StdCoverMeleeLeft::pClassPointer = NULL;

class UClass* USFXCustomAction_StdCoverMeleeLeft::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_StdCoverMeleeLeft" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_CoverMeleeLeft::pClassPointer = NULL;

class UClass* USFXCustomAction_CoverMeleeLeft::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_CoverMeleeLeft" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXCustomAction_CoverMeleeLeft.NonSyncedAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_CoverMeleeLeft::NonSyncedAction ( )
{
	static UFunction* pFnNonSyncedAction = NULL;

	if ( ! pFnNonSyncedAction )
		pFnNonSyncedAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_CoverMeleeLeft.NonSyncedAction" );

	USFXCustomAction_CoverMeleeLeft_execNonSyncedAction_Parms NonSyncedAction_Parms;

	this->ProcessEvent ( pFnNonSyncedAction, &NonSyncedAction_Parms, NULL );
};



class UClass* USFXCustomAction_CoverMeleeRight::pClassPointer = NULL;

class UClass* USFXCustomAction_CoverMeleeRight::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_CoverMeleeRight" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXCustomAction_CoverMeleeRight.GetVictimPawn
// [0x00020002]
// Parameters infos:
// class ABioPawn*                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class ABioPawn* USFXCustomAction_CoverMeleeRight::GetVictimPawn ( )
{
	static UFunction* pFnGetVictimPawn = NULL;

	if ( ! pFnGetVictimPawn )
		pFnGetVictimPawn = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_CoverMeleeRight.GetVictimPawn" );

	USFXCustomAction_CoverMeleeRight_execGetVictimPawn_Parms GetVictimPawn_Parms;

	this->ProcessEvent ( pFnGetVictimPawn, &GetVictimPawn_Parms, NULL );

	return GetVictimPawn_Parms.ReturnValue;
};

// Function SFXGameContent.SFXCustomAction_CoverMeleeRight.GetMeleeImpactParameters
// [0x00420002]
// Parameters infos:
// struct FAreaEffectParameters   ImpactParams                   ( CPF_Parm | CPF_OutParm )

void USFXCustomAction_CoverMeleeRight::GetMeleeImpactParameters ( struct FAreaEffectParameters* ImpactParams )
{
	static UFunction* pFnGetMeleeImpactParameters = NULL;

	if ( ! pFnGetMeleeImpactParameters )
		pFnGetMeleeImpactParameters = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_CoverMeleeRight.GetMeleeImpactParameters" );

	USFXCustomAction_CoverMeleeRight_execGetMeleeImpactParameters_Parms GetMeleeImpactParameters_Parms;

	if ( ImpactParams )
		memcpy ( &GetMeleeImpactParameters_Parms.ImpactParams, ImpactParams, 0x20 );

	this->ProcessEvent ( pFnGetMeleeImpactParameters, &GetMeleeImpactParameters_Parms, NULL );

	if ( ImpactParams )
		memcpy ( ImpactParams, &GetMeleeImpactParameters_Parms.ImpactParams, 0x20 );
};

// Function SFXGameContent.SFXCustomAction_CoverMeleeRight.NonSyncedAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_CoverMeleeRight::NonSyncedAction ( )
{
	static UFunction* pFnNonSyncedAction = NULL;

	if ( ! pFnNonSyncedAction )
		pFnNonSyncedAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_CoverMeleeRight.NonSyncedAction" );

	USFXCustomAction_CoverMeleeRight_execNonSyncedAction_Parms NonSyncedAction_Parms;

	this->ProcessEvent ( pFnNonSyncedAction, &NonSyncedAction_Parms, NULL );
};



class UClass* USFXCustomAction_StdCoverMeleeRight::pClassPointer = NULL;

class UClass* USFXCustomAction_StdCoverMeleeRight::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_StdCoverMeleeRight" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_HvyStdCoverMeleeLeft::pClassPointer = NULL;

class UClass* USFXCustomAction_HvyStdCoverMeleeLeft::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_HvyStdCoverMeleeLeft" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_HvyCoverMeleeLeft::pClassPointer = NULL;

class UClass* USFXCustomAction_HvyCoverMeleeLeft::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_HvyCoverMeleeLeft" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXCustomAction_HvyCoverMeleeLeft.NonSyncedAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_HvyCoverMeleeLeft::NonSyncedAction ( )
{
	static UFunction* pFnNonSyncedAction = NULL;

	if ( ! pFnNonSyncedAction )
		pFnNonSyncedAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_HvyCoverMeleeLeft.NonSyncedAction" );

	USFXCustomAction_HvyCoverMeleeLeft_execNonSyncedAction_Parms NonSyncedAction_Parms;

	this->ProcessEvent ( pFnNonSyncedAction, &NonSyncedAction_Parms, NULL );
};



class UClass* USFXCustomAction_HvyCoverMeleeRight::pClassPointer = NULL;

class UClass* USFXCustomAction_HvyCoverMeleeRight::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_HvyCoverMeleeRight" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXCustomAction_HvyCoverMeleeRight.GetVictimPawn
// [0x00020002]
// Parameters infos:
// class ABioPawn*                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class ABioPawn* USFXCustomAction_HvyCoverMeleeRight::GetVictimPawn ( )
{
	static UFunction* pFnGetVictimPawn = NULL;

	if ( ! pFnGetVictimPawn )
		pFnGetVictimPawn = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_HvyCoverMeleeRight.GetVictimPawn" );

	USFXCustomAction_HvyCoverMeleeRight_execGetVictimPawn_Parms GetVictimPawn_Parms;

	this->ProcessEvent ( pFnGetVictimPawn, &GetVictimPawn_Parms, NULL );

	return GetVictimPawn_Parms.ReturnValue;
};

// Function SFXGameContent.SFXCustomAction_HvyCoverMeleeRight.GetMeleeImpactParameters
// [0x00420002]
// Parameters infos:
// struct FAreaEffectParameters   ImpactParams                   ( CPF_Parm | CPF_OutParm )

void USFXCustomAction_HvyCoverMeleeRight::GetMeleeImpactParameters ( struct FAreaEffectParameters* ImpactParams )
{
	static UFunction* pFnGetMeleeImpactParameters = NULL;

	if ( ! pFnGetMeleeImpactParameters )
		pFnGetMeleeImpactParameters = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_HvyCoverMeleeRight.GetMeleeImpactParameters" );

	USFXCustomAction_HvyCoverMeleeRight_execGetMeleeImpactParameters_Parms GetMeleeImpactParameters_Parms;

	if ( ImpactParams )
		memcpy ( &GetMeleeImpactParameters_Parms.ImpactParams, ImpactParams, 0x20 );

	this->ProcessEvent ( pFnGetMeleeImpactParameters, &GetMeleeImpactParameters_Parms, NULL );

	if ( ImpactParams )
		memcpy ( ImpactParams, &GetMeleeImpactParameters_Parms.ImpactParams, 0x20 );
};

// Function SFXGameContent.SFXCustomAction_HvyCoverMeleeRight.NonSyncedAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_HvyCoverMeleeRight::NonSyncedAction ( )
{
	static UFunction* pFnNonSyncedAction = NULL;

	if ( ! pFnNonSyncedAction )
		pFnNonSyncedAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_HvyCoverMeleeRight.NonSyncedAction" );

	USFXCustomAction_HvyCoverMeleeRight_execNonSyncedAction_Parms NonSyncedAction_Parms;

	this->ProcessEvent ( pFnNonSyncedAction, &NonSyncedAction_Parms, NULL );
};



class UClass* USFXCustomAction_HvyStdCoverMeleeRight::pClassPointer = NULL;

class UClass* USFXCustomAction_HvyStdCoverMeleeRight::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_HvyStdCoverMeleeRight" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_RifleMeleeOne::pClassPointer = NULL;

class UClass* USFXCustomAction_RifleMeleeOne::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_RifleMeleeOne" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXCustomAction_RifleMeleeOne.StopMove
// [0x00020002]
// Parameters infos:

void USFXCustomAction_RifleMeleeOne::StopMove ( )
{
	static UFunction* pFnStopMove = NULL;

	if ( ! pFnStopMove )
		pFnStopMove = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_RifleMeleeOne.StopMove" );

	USFXCustomAction_RifleMeleeOne_execStopMove_Parms StopMove_Parms;

	this->ProcessEvent ( pFnStopMove, &StopMove_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_RifleMeleeOne.OnActorImpacted
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  Resistance                     ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

bool USFXCustomAction_RifleMeleeOne::OnActorImpacted ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector const& HitLocation, struct FVector const& HitNormal )
{
	static UFunction* pFnOnActorImpacted = NULL;

	if ( ! pFnOnActorImpacted )
		pFnOnActorImpacted = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_RifleMeleeOne.OnActorImpacted" );

	USFXCustomAction_RifleMeleeOne_execOnActorImpacted_Parms OnActorImpacted_Parms;
	OnActorImpacted_Parms.Resistance = Resistance;
	OnActorImpacted_Parms.oImpacted = oImpacted;
	OnActorImpacted_Parms.nPreviouslyImpacted = nPreviouslyImpacted;
	memcpy ( &OnActorImpacted_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &OnActorImpacted_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnOnActorImpacted, &OnActorImpacted_Parms, NULL );

	return OnActorImpacted_Parms.ReturnValue;
};

// Function SFXGameContent.SFXCustomAction_RifleMeleeOne.ReplicateImpact
// [0x00024002]
// Parameters infos:
// class ABioPawn*                Target                         ( CPF_Parm )
// int                            ImpactCount                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bFirstTarget                   ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_OptionalParm | CPF_Parm )
// int                            CustomActionReactionType       ( CPF_OptionalParm | CPF_Parm )

void USFXCustomAction_RifleMeleeOne::ReplicateImpact ( class ABioPawn* Target, int ImpactCount, unsigned long bFirstTarget, struct FVector const& HitLocation, struct FVector const& HitNormal, int CustomActionReactionType )
{
	static UFunction* pFnReplicateImpact = NULL;

	if ( ! pFnReplicateImpact )
		pFnReplicateImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_RifleMeleeOne.ReplicateImpact" );

	USFXCustomAction_RifleMeleeOne_execReplicateImpact_Parms ReplicateImpact_Parms;
	ReplicateImpact_Parms.Target = Target;
	ReplicateImpact_Parms.ImpactCount = ImpactCount;
	ReplicateImpact_Parms.bFirstTarget = bFirstTarget;
	memcpy ( &ReplicateImpact_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ReplicateImpact_Parms.HitNormal, &HitNormal, 0xC );
	ReplicateImpact_Parms.CustomActionReactionType = CustomActionReactionType;

	this->ProcessEvent ( pFnReplicateImpact, &ReplicateImpact_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_RifleMeleeOne.StopCustomAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_RifleMeleeOne::StopCustomAction ( )
{
	static UFunction* pFnStopCustomAction = NULL;

	if ( ! pFnStopCustomAction )
		pFnStopCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_RifleMeleeOne.StopCustomAction" );

	USFXCustomAction_RifleMeleeOne_execStopCustomAction_Parms StopCustomAction_Parms;

	this->ProcessEvent ( pFnStopCustomAction, &StopCustomAction_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_RifleMeleeOne.EndAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_RifleMeleeOne::EndAction ( )
{
	static UFunction* pFnEndAction = NULL;

	if ( ! pFnEndAction )
		pFnEndAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_RifleMeleeOne.EndAction" );

	USFXCustomAction_RifleMeleeOne_execEndAction_Parms EndAction_Parms;

	this->ProcessEvent ( pFnEndAction, &EndAction_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_RifleMeleeOne.HeavyMelee
// [0x00020002]
// Parameters infos:

void USFXCustomAction_RifleMeleeOne::HeavyMelee ( )
{
	static UFunction* pFnHeavyMelee = NULL;

	if ( ! pFnHeavyMelee )
		pFnHeavyMelee = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_RifleMeleeOne.HeavyMelee" );

	USFXCustomAction_RifleMeleeOne_execHeavyMelee_Parms HeavyMelee_Parms;

	this->ProcessEvent ( pFnHeavyMelee, &HeavyMelee_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_RifleMeleeOne.NoHeavyMelee
// [0x00020002]
// Parameters infos:

void USFXCustomAction_RifleMeleeOne::NoHeavyMelee ( )
{
	static UFunction* pFnNoHeavyMelee = NULL;

	if ( ! pFnNoHeavyMelee )
		pFnNoHeavyMelee = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_RifleMeleeOne.NoHeavyMelee" );

	USFXCustomAction_RifleMeleeOne_execNoHeavyMelee_Parms NoHeavyMelee_Parms;

	this->ProcessEvent ( pFnNoHeavyMelee, &NoHeavyMelee_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_RifleMeleeOne.DoRifleMeleeTwo
// [0x00020002]
// Parameters infos:

void USFXCustomAction_RifleMeleeOne::DoRifleMeleeTwo ( )
{
	static UFunction* pFnDoRifleMeleeTwo = NULL;

	if ( ! pFnDoRifleMeleeTwo )
		pFnDoRifleMeleeTwo = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_RifleMeleeOne.DoRifleMeleeTwo" );

	USFXCustomAction_RifleMeleeOne_execDoRifleMeleeTwo_Parms DoRifleMeleeTwo_Parms;

	this->ProcessEvent ( pFnDoRifleMeleeTwo, &DoRifleMeleeTwo_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_RifleMeleeOne.RifleMeleeSecondary
// [0x00020002]
// Parameters infos:

void USFXCustomAction_RifleMeleeOne::RifleMeleeSecondary ( )
{
	static UFunction* pFnRifleMeleeSecondary = NULL;

	if ( ! pFnRifleMeleeSecondary )
		pFnRifleMeleeSecondary = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_RifleMeleeOne.RifleMeleeSecondary" );

	USFXCustomAction_RifleMeleeOne_execRifleMeleeSecondary_Parms RifleMeleeSecondary_Parms;

	this->ProcessEvent ( pFnRifleMeleeSecondary, &RifleMeleeSecondary_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_RifleMeleeOne.StartCustomAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_RifleMeleeOne::StartCustomAction ( )
{
	static UFunction* pFnStartCustomAction = NULL;

	if ( ! pFnStartCustomAction )
		pFnStartCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_RifleMeleeOne.StartCustomAction" );

	USFXCustomAction_RifleMeleeOne_execStartCustomAction_Parms StartCustomAction_Parms;

	this->ProcessEvent ( pFnStartCustomAction, &StartCustomAction_Parms, NULL );
};



class UClass* USFXCustomAction_RifleMeleeTwo::pClassPointer = NULL;

class UClass* USFXCustomAction_RifleMeleeTwo::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_RifleMeleeTwo" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXCustomAction_RifleMeleeTwo.ReplicateImpact
// [0x00024002]
// Parameters infos:
// class ABioPawn*                Target                         ( CPF_Parm )
// int                            ImpactCount                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bFirstTarget                   ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_OptionalParm | CPF_Parm )
// int                            CustomActionReactionType       ( CPF_OptionalParm | CPF_Parm )

void USFXCustomAction_RifleMeleeTwo::ReplicateImpact ( class ABioPawn* Target, int ImpactCount, unsigned long bFirstTarget, struct FVector const& HitLocation, struct FVector const& HitNormal, int CustomActionReactionType )
{
	static UFunction* pFnReplicateImpact = NULL;

	if ( ! pFnReplicateImpact )
		pFnReplicateImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_RifleMeleeTwo.ReplicateImpact" );

	USFXCustomAction_RifleMeleeTwo_execReplicateImpact_Parms ReplicateImpact_Parms;
	ReplicateImpact_Parms.Target = Target;
	ReplicateImpact_Parms.ImpactCount = ImpactCount;
	ReplicateImpact_Parms.bFirstTarget = bFirstTarget;
	memcpy ( &ReplicateImpact_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ReplicateImpact_Parms.HitNormal, &HitNormal, 0xC );
	ReplicateImpact_Parms.CustomActionReactionType = CustomActionReactionType;

	this->ProcessEvent ( pFnReplicateImpact, &ReplicateImpact_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_RifleMeleeTwo.HeavyMelee
// [0x00020002]
// Parameters infos:

void USFXCustomAction_RifleMeleeTwo::HeavyMelee ( )
{
	static UFunction* pFnHeavyMelee = NULL;

	if ( ! pFnHeavyMelee )
		pFnHeavyMelee = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_RifleMeleeTwo.HeavyMelee" );

	USFXCustomAction_RifleMeleeTwo_execHeavyMelee_Parms HeavyMelee_Parms;

	this->ProcessEvent ( pFnHeavyMelee, &HeavyMelee_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_RifleMeleeTwo.NoHeavyMelee
// [0x00020002]
// Parameters infos:

void USFXCustomAction_RifleMeleeTwo::NoHeavyMelee ( )
{
	static UFunction* pFnNoHeavyMelee = NULL;

	if ( ! pFnNoHeavyMelee )
		pFnNoHeavyMelee = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_RifleMeleeTwo.NoHeavyMelee" );

	USFXCustomAction_RifleMeleeTwo_execNoHeavyMelee_Parms NoHeavyMelee_Parms;

	this->ProcessEvent ( pFnNoHeavyMelee, &NoHeavyMelee_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_RifleMeleeTwo.DoRifleMeleeThree
// [0x00020002]
// Parameters infos:

void USFXCustomAction_RifleMeleeTwo::DoRifleMeleeThree ( )
{
	static UFunction* pFnDoRifleMeleeThree = NULL;

	if ( ! pFnDoRifleMeleeThree )
		pFnDoRifleMeleeThree = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_RifleMeleeTwo.DoRifleMeleeThree" );

	USFXCustomAction_RifleMeleeTwo_execDoRifleMeleeThree_Parms DoRifleMeleeThree_Parms;

	this->ProcessEvent ( pFnDoRifleMeleeThree, &DoRifleMeleeThree_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_RifleMeleeTwo.RifleMeleeThird
// [0x00020002]
// Parameters infos:

void USFXCustomAction_RifleMeleeTwo::RifleMeleeThird ( )
{
	static UFunction* pFnRifleMeleeThird = NULL;

	if ( ! pFnRifleMeleeThird )
		pFnRifleMeleeThird = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_RifleMeleeTwo.RifleMeleeThird" );

	USFXCustomAction_RifleMeleeTwo_execRifleMeleeThird_Parms RifleMeleeThird_Parms;

	this->ProcessEvent ( pFnRifleMeleeThird, &RifleMeleeThird_Parms, NULL );
};



class UClass* USFXCustomAction_RifleMeleeThree::pClassPointer = NULL;

class UClass* USFXCustomAction_RifleMeleeThree::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_RifleMeleeThree" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXCustomAction_RifleMeleeThree.StopCustomAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_RifleMeleeThree::StopCustomAction ( )
{
	static UFunction* pFnStopCustomAction = NULL;

	if ( ! pFnStopCustomAction )
		pFnStopCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_RifleMeleeThree.StopCustomAction" );

	USFXCustomAction_RifleMeleeThree_execStopCustomAction_Parms StopCustomAction_Parms;

	this->ProcessEvent ( pFnStopCustomAction, &StopCustomAction_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_RifleMeleeThree.HeavyMelee
// [0x00020002]
// Parameters infos:

void USFXCustomAction_RifleMeleeThree::HeavyMelee ( )
{
	static UFunction* pFnHeavyMelee = NULL;

	if ( ! pFnHeavyMelee )
		pFnHeavyMelee = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_RifleMeleeThree.HeavyMelee" );

	USFXCustomAction_RifleMeleeThree_execHeavyMelee_Parms HeavyMelee_Parms;

	this->ProcessEvent ( pFnHeavyMelee, &HeavyMelee_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_RifleMeleeThree.NoHeavyMelee
// [0x00020002]
// Parameters infos:

void USFXCustomAction_RifleMeleeThree::NoHeavyMelee ( )
{
	static UFunction* pFnNoHeavyMelee = NULL;

	if ( ! pFnNoHeavyMelee )
		pFnNoHeavyMelee = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_RifleMeleeThree.NoHeavyMelee" );

	USFXCustomAction_RifleMeleeThree_execNoHeavyMelee_Parms NoHeavyMelee_Parms;

	this->ProcessEvent ( pFnNoHeavyMelee, &NoHeavyMelee_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_RifleMeleeThree.RifleMeleeThird
// [0x00020002]
// Parameters infos:

void USFXCustomAction_RifleMeleeThree::RifleMeleeThird ( )
{
	static UFunction* pFnRifleMeleeThird = NULL;

	if ( ! pFnRifleMeleeThird )
		pFnRifleMeleeThird = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_RifleMeleeThree.RifleMeleeThird" );

	USFXCustomAction_RifleMeleeThree_execRifleMeleeThird_Parms RifleMeleeThird_Parms;

	this->ProcessEvent ( pFnRifleMeleeThird, &RifleMeleeThird_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_RifleMeleeThree.ReplicateImpact
// [0x00024002]
// Parameters infos:
// class ABioPawn*                Target                         ( CPF_Parm )
// int                            ImpactCount                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bFirstTarget                   ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_OptionalParm | CPF_Parm )
// int                            CustomActionReactionType       ( CPF_OptionalParm | CPF_Parm )

void USFXCustomAction_RifleMeleeThree::ReplicateImpact ( class ABioPawn* Target, int ImpactCount, unsigned long bFirstTarget, struct FVector const& HitLocation, struct FVector const& HitNormal, int CustomActionReactionType )
{
	static UFunction* pFnReplicateImpact = NULL;

	if ( ! pFnReplicateImpact )
		pFnReplicateImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_RifleMeleeThree.ReplicateImpact" );

	USFXCustomAction_RifleMeleeThree_execReplicateImpact_Parms ReplicateImpact_Parms;
	ReplicateImpact_Parms.Target = Target;
	ReplicateImpact_Parms.ImpactCount = ImpactCount;
	ReplicateImpact_Parms.bFirstTarget = bFirstTarget;
	memcpy ( &ReplicateImpact_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ReplicateImpact_Parms.HitNormal, &HitNormal, 0xC );
	ReplicateImpact_Parms.CustomActionReactionType = CustomActionReactionType;

	this->ProcessEvent ( pFnReplicateImpact, &ReplicateImpact_Parms, NULL );
};



class UClass* USFXCustomAction_PistolMeleeOne::pClassPointer = NULL;

class UClass* USFXCustomAction_PistolMeleeOne::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_PistolMeleeOne" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXCustomAction_PistolMeleeOne.StopMove
// [0x00020002]
// Parameters infos:

void USFXCustomAction_PistolMeleeOne::StopMove ( )
{
	static UFunction* pFnStopMove = NULL;

	if ( ! pFnStopMove )
		pFnStopMove = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PistolMeleeOne.StopMove" );

	USFXCustomAction_PistolMeleeOne_execStopMove_Parms StopMove_Parms;

	this->ProcessEvent ( pFnStopMove, &StopMove_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_PistolMeleeOne.OnActorImpacted
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  Resistance                     ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

bool USFXCustomAction_PistolMeleeOne::OnActorImpacted ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector const& HitLocation, struct FVector const& HitNormal )
{
	static UFunction* pFnOnActorImpacted = NULL;

	if ( ! pFnOnActorImpacted )
		pFnOnActorImpacted = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PistolMeleeOne.OnActorImpacted" );

	USFXCustomAction_PistolMeleeOne_execOnActorImpacted_Parms OnActorImpacted_Parms;
	OnActorImpacted_Parms.Resistance = Resistance;
	OnActorImpacted_Parms.oImpacted = oImpacted;
	OnActorImpacted_Parms.nPreviouslyImpacted = nPreviouslyImpacted;
	memcpy ( &OnActorImpacted_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &OnActorImpacted_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnOnActorImpacted, &OnActorImpacted_Parms, NULL );

	return OnActorImpacted_Parms.ReturnValue;
};

// Function SFXGameContent.SFXCustomAction_PistolMeleeOne.ReplicateImpact
// [0x00024002]
// Parameters infos:
// class ABioPawn*                Target                         ( CPF_Parm )
// int                            ImpactCount                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bFirstTarget                   ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_OptionalParm | CPF_Parm )
// int                            CustomActionReactionType       ( CPF_OptionalParm | CPF_Parm )

void USFXCustomAction_PistolMeleeOne::ReplicateImpact ( class ABioPawn* Target, int ImpactCount, unsigned long bFirstTarget, struct FVector const& HitLocation, struct FVector const& HitNormal, int CustomActionReactionType )
{
	static UFunction* pFnReplicateImpact = NULL;

	if ( ! pFnReplicateImpact )
		pFnReplicateImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PistolMeleeOne.ReplicateImpact" );

	USFXCustomAction_PistolMeleeOne_execReplicateImpact_Parms ReplicateImpact_Parms;
	ReplicateImpact_Parms.Target = Target;
	ReplicateImpact_Parms.ImpactCount = ImpactCount;
	ReplicateImpact_Parms.bFirstTarget = bFirstTarget;
	memcpy ( &ReplicateImpact_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ReplicateImpact_Parms.HitNormal, &HitNormal, 0xC );
	ReplicateImpact_Parms.CustomActionReactionType = CustomActionReactionType;

	this->ProcessEvent ( pFnReplicateImpact, &ReplicateImpact_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_PistolMeleeOne.StopCustomAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_PistolMeleeOne::StopCustomAction ( )
{
	static UFunction* pFnStopCustomAction = NULL;

	if ( ! pFnStopCustomAction )
		pFnStopCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PistolMeleeOne.StopCustomAction" );

	USFXCustomAction_PistolMeleeOne_execStopCustomAction_Parms StopCustomAction_Parms;

	this->ProcessEvent ( pFnStopCustomAction, &StopCustomAction_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_PistolMeleeOne.EndAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_PistolMeleeOne::EndAction ( )
{
	static UFunction* pFnEndAction = NULL;

	if ( ! pFnEndAction )
		pFnEndAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PistolMeleeOne.EndAction" );

	USFXCustomAction_PistolMeleeOne_execEndAction_Parms EndAction_Parms;

	this->ProcessEvent ( pFnEndAction, &EndAction_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_PistolMeleeOne.HeavyMelee
// [0x00020002]
// Parameters infos:

void USFXCustomAction_PistolMeleeOne::HeavyMelee ( )
{
	static UFunction* pFnHeavyMelee = NULL;

	if ( ! pFnHeavyMelee )
		pFnHeavyMelee = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PistolMeleeOne.HeavyMelee" );

	USFXCustomAction_PistolMeleeOne_execHeavyMelee_Parms HeavyMelee_Parms;

	this->ProcessEvent ( pFnHeavyMelee, &HeavyMelee_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_PistolMeleeOne.NoHeavyMelee
// [0x00020002]
// Parameters infos:

void USFXCustomAction_PistolMeleeOne::NoHeavyMelee ( )
{
	static UFunction* pFnNoHeavyMelee = NULL;

	if ( ! pFnNoHeavyMelee )
		pFnNoHeavyMelee = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PistolMeleeOne.NoHeavyMelee" );

	USFXCustomAction_PistolMeleeOne_execNoHeavyMelee_Parms NoHeavyMelee_Parms;

	this->ProcessEvent ( pFnNoHeavyMelee, &NoHeavyMelee_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_PistolMeleeOne.DoPistolMeleeTwo
// [0x00020002]
// Parameters infos:

void USFXCustomAction_PistolMeleeOne::DoPistolMeleeTwo ( )
{
	static UFunction* pFnDoPistolMeleeTwo = NULL;

	if ( ! pFnDoPistolMeleeTwo )
		pFnDoPistolMeleeTwo = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PistolMeleeOne.DoPistolMeleeTwo" );

	USFXCustomAction_PistolMeleeOne_execDoPistolMeleeTwo_Parms DoPistolMeleeTwo_Parms;

	this->ProcessEvent ( pFnDoPistolMeleeTwo, &DoPistolMeleeTwo_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_PistolMeleeOne.PistolMeleeSecondary
// [0x00020002]
// Parameters infos:

void USFXCustomAction_PistolMeleeOne::PistolMeleeSecondary ( )
{
	static UFunction* pFnPistolMeleeSecondary = NULL;

	if ( ! pFnPistolMeleeSecondary )
		pFnPistolMeleeSecondary = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PistolMeleeOne.PistolMeleeSecondary" );

	USFXCustomAction_PistolMeleeOne_execPistolMeleeSecondary_Parms PistolMeleeSecondary_Parms;

	this->ProcessEvent ( pFnPistolMeleeSecondary, &PistolMeleeSecondary_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_PistolMeleeOne.StartCustomAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_PistolMeleeOne::StartCustomAction ( )
{
	static UFunction* pFnStartCustomAction = NULL;

	if ( ! pFnStartCustomAction )
		pFnStartCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PistolMeleeOne.StartCustomAction" );

	USFXCustomAction_PistolMeleeOne_execStartCustomAction_Parms StartCustomAction_Parms;

	this->ProcessEvent ( pFnStartCustomAction, &StartCustomAction_Parms, NULL );
};



class UClass* USFXCustomAction_PistolMeleeTwo::pClassPointer = NULL;

class UClass* USFXCustomAction_PistolMeleeTwo::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_PistolMeleeTwo" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXCustomAction_PistolMeleeTwo.ReplicateImpact
// [0x00024002]
// Parameters infos:
// class ABioPawn*                Target                         ( CPF_Parm )
// int                            ImpactCount                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bFirstTarget                   ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_OptionalParm | CPF_Parm )
// int                            CustomActionReactionType       ( CPF_OptionalParm | CPF_Parm )

void USFXCustomAction_PistolMeleeTwo::ReplicateImpact ( class ABioPawn* Target, int ImpactCount, unsigned long bFirstTarget, struct FVector const& HitLocation, struct FVector const& HitNormal, int CustomActionReactionType )
{
	static UFunction* pFnReplicateImpact = NULL;

	if ( ! pFnReplicateImpact )
		pFnReplicateImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PistolMeleeTwo.ReplicateImpact" );

	USFXCustomAction_PistolMeleeTwo_execReplicateImpact_Parms ReplicateImpact_Parms;
	ReplicateImpact_Parms.Target = Target;
	ReplicateImpact_Parms.ImpactCount = ImpactCount;
	ReplicateImpact_Parms.bFirstTarget = bFirstTarget;
	memcpy ( &ReplicateImpact_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ReplicateImpact_Parms.HitNormal, &HitNormal, 0xC );
	ReplicateImpact_Parms.CustomActionReactionType = CustomActionReactionType;

	this->ProcessEvent ( pFnReplicateImpact, &ReplicateImpact_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_PistolMeleeTwo.HeavyMelee
// [0x00020002]
// Parameters infos:

void USFXCustomAction_PistolMeleeTwo::HeavyMelee ( )
{
	static UFunction* pFnHeavyMelee = NULL;

	if ( ! pFnHeavyMelee )
		pFnHeavyMelee = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PistolMeleeTwo.HeavyMelee" );

	USFXCustomAction_PistolMeleeTwo_execHeavyMelee_Parms HeavyMelee_Parms;

	this->ProcessEvent ( pFnHeavyMelee, &HeavyMelee_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_PistolMeleeTwo.NoHeavyMelee
// [0x00020002]
// Parameters infos:

void USFXCustomAction_PistolMeleeTwo::NoHeavyMelee ( )
{
	static UFunction* pFnNoHeavyMelee = NULL;

	if ( ! pFnNoHeavyMelee )
		pFnNoHeavyMelee = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PistolMeleeTwo.NoHeavyMelee" );

	USFXCustomAction_PistolMeleeTwo_execNoHeavyMelee_Parms NoHeavyMelee_Parms;

	this->ProcessEvent ( pFnNoHeavyMelee, &NoHeavyMelee_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_PistolMeleeTwo.DoPistolMeleeThree
// [0x00020002]
// Parameters infos:

void USFXCustomAction_PistolMeleeTwo::DoPistolMeleeThree ( )
{
	static UFunction* pFnDoPistolMeleeThree = NULL;

	if ( ! pFnDoPistolMeleeThree )
		pFnDoPistolMeleeThree = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PistolMeleeTwo.DoPistolMeleeThree" );

	USFXCustomAction_PistolMeleeTwo_execDoPistolMeleeThree_Parms DoPistolMeleeThree_Parms;

	this->ProcessEvent ( pFnDoPistolMeleeThree, &DoPistolMeleeThree_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_PistolMeleeTwo.PistolMeleeThird
// [0x00020002]
// Parameters infos:

void USFXCustomAction_PistolMeleeTwo::PistolMeleeThird ( )
{
	static UFunction* pFnPistolMeleeThird = NULL;

	if ( ! pFnPistolMeleeThird )
		pFnPistolMeleeThird = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PistolMeleeTwo.PistolMeleeThird" );

	USFXCustomAction_PistolMeleeTwo_execPistolMeleeThird_Parms PistolMeleeThird_Parms;

	this->ProcessEvent ( pFnPistolMeleeThird, &PistolMeleeThird_Parms, NULL );
};



class UClass* USFXCustomAction_PistolMeleeThree::pClassPointer = NULL;

class UClass* USFXCustomAction_PistolMeleeThree::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_PistolMeleeThree" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXCustomAction_PistolMeleeThree.StopCustomAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_PistolMeleeThree::StopCustomAction ( )
{
	static UFunction* pFnStopCustomAction = NULL;

	if ( ! pFnStopCustomAction )
		pFnStopCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PistolMeleeThree.StopCustomAction" );

	USFXCustomAction_PistolMeleeThree_execStopCustomAction_Parms StopCustomAction_Parms;

	this->ProcessEvent ( pFnStopCustomAction, &StopCustomAction_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_PistolMeleeThree.HeavyMelee
// [0x00020002]
// Parameters infos:

void USFXCustomAction_PistolMeleeThree::HeavyMelee ( )
{
	static UFunction* pFnHeavyMelee = NULL;

	if ( ! pFnHeavyMelee )
		pFnHeavyMelee = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PistolMeleeThree.HeavyMelee" );

	USFXCustomAction_PistolMeleeThree_execHeavyMelee_Parms HeavyMelee_Parms;

	this->ProcessEvent ( pFnHeavyMelee, &HeavyMelee_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_PistolMeleeThree.NoHeavyMelee
// [0x00020002]
// Parameters infos:

void USFXCustomAction_PistolMeleeThree::NoHeavyMelee ( )
{
	static UFunction* pFnNoHeavyMelee = NULL;

	if ( ! pFnNoHeavyMelee )
		pFnNoHeavyMelee = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PistolMeleeThree.NoHeavyMelee" );

	USFXCustomAction_PistolMeleeThree_execNoHeavyMelee_Parms NoHeavyMelee_Parms;

	this->ProcessEvent ( pFnNoHeavyMelee, &NoHeavyMelee_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_PistolMeleeThree.PistolMeleeThird
// [0x00020002]
// Parameters infos:

void USFXCustomAction_PistolMeleeThree::PistolMeleeThird ( )
{
	static UFunction* pFnPistolMeleeThird = NULL;

	if ( ! pFnPistolMeleeThird )
		pFnPistolMeleeThird = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PistolMeleeThree.PistolMeleeThird" );

	USFXCustomAction_PistolMeleeThree_execPistolMeleeThird_Parms PistolMeleeThird_Parms;

	this->ProcessEvent ( pFnPistolMeleeThird, &PistolMeleeThird_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_PistolMeleeThree.ReplicateImpact
// [0x00024002]
// Parameters infos:
// class ABioPawn*                Target                         ( CPF_Parm )
// int                            ImpactCount                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bFirstTarget                   ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_OptionalParm | CPF_Parm )
// int                            CustomActionReactionType       ( CPF_OptionalParm | CPF_Parm )

void USFXCustomAction_PistolMeleeThree::ReplicateImpact ( class ABioPawn* Target, int ImpactCount, unsigned long bFirstTarget, struct FVector const& HitLocation, struct FVector const& HitNormal, int CustomActionReactionType )
{
	static UFunction* pFnReplicateImpact = NULL;

	if ( ! pFnReplicateImpact )
		pFnReplicateImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_PistolMeleeThree.ReplicateImpact" );

	USFXCustomAction_PistolMeleeThree_execReplicateImpact_Parms ReplicateImpact_Parms;
	ReplicateImpact_Parms.Target = Target;
	ReplicateImpact_Parms.ImpactCount = ImpactCount;
	ReplicateImpact_Parms.bFirstTarget = bFirstTarget;
	memcpy ( &ReplicateImpact_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ReplicateImpact_Parms.HitNormal, &HitNormal, 0xC );
	ReplicateImpact_Parms.CustomActionReactionType = CustomActionReactionType;

	this->ProcessEvent ( pFnReplicateImpact, &ReplicateImpact_Parms, NULL );
};



class UClass* USFXCustomAction_PlayerStandardImpact::pClassPointer = NULL;

class UClass* USFXCustomAction_PlayerStandardImpact::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_PlayerStandardImpact" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_PlayerStandardImpactForward::pClassPointer = NULL;

class UClass* USFXCustomAction_PlayerStandardImpactForward::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_PlayerStandardImpactForward" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_PlayerStandardImpactLeft::pClassPointer = NULL;

class UClass* USFXCustomAction_PlayerStandardImpactLeft::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_PlayerStandardImpactLeft" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_PlayerStandardImpactRight::pClassPointer = NULL;

class UClass* USFXCustomAction_PlayerStandardImpactRight::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_PlayerStandardImpactRight" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_PlayerMeleed::pClassPointer = NULL;

class UClass* USFXCustomAction_PlayerMeleed::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_PlayerMeleed" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_KnockbackImpactForward::pClassPointer = NULL;

class UClass* USFXCustomAction_KnockbackImpactForward::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_KnockbackImpactForward" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_MeleedLeft::pClassPointer = NULL;

class UClass* USFXCustomAction_MeleedLeft::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_MeleedLeft" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_MeleedRight::pClassPointer = NULL;

class UClass* USFXCustomAction_MeleedRight::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_MeleedRight" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_KnockbackImpact::pClassPointer = NULL;

class UClass* USFXCustomAction_KnockbackImpact::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_KnockbackImpact" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_KnockbackImpactLeft::pClassPointer = NULL;

class UClass* USFXCustomAction_KnockbackImpactLeft::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_KnockbackImpactLeft" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_KnockbackImpactRight::pClassPointer = NULL;

class UClass* USFXCustomAction_KnockbackImpactRight::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_KnockbackImpactRight" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_MeleedForward::pClassPointer = NULL;

class UClass* USFXCustomAction_MeleedForward::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_MeleedForward" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_FlinchLight::pClassPointer = NULL;

class UClass* USFXCustomAction_FlinchLight::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_FlinchLight" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_FlinchBase::pClassPointer = NULL;

class UClass* USFXCustomAction_FlinchBase::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_FlinchBase" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXCustomAction_FlinchBase.PlayImpactSound
// [0x00020002]
// Parameters infos:

void USFXCustomAction_FlinchBase::PlayImpactSound ( )
{
	static UFunction* pFnPlayImpactSound = NULL;

	if ( ! pFnPlayImpactSound )
		pFnPlayImpactSound = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_FlinchBase.PlayImpactSound" );

	USFXCustomAction_FlinchBase_execPlayImpactSound_Parms PlayImpactSound_Parms;

	this->ProcessEvent ( pFnPlayImpactSound, &PlayImpactSound_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_FlinchBase.PlayWhizSound
// [0x00020002]
// Parameters infos:

void USFXCustomAction_FlinchBase::PlayWhizSound ( )
{
	static UFunction* pFnPlayWhizSound = NULL;

	if ( ! pFnPlayWhizSound )
		pFnPlayWhizSound = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_FlinchBase.PlayWhizSound" );

	USFXCustomAction_FlinchBase_execPlayWhizSound_Parms PlayWhizSound_Parms;

	this->ProcessEvent ( pFnPlayWhizSound, &PlayWhizSound_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_FlinchBase.FlinchActionOverride
// [0x00020002]
// Parameters infos:

void USFXCustomAction_FlinchBase::FlinchActionOverride ( )
{
	static UFunction* pFnFlinchActionOverride = NULL;

	if ( ! pFnFlinchActionOverride )
		pFnFlinchActionOverride = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_FlinchBase.FlinchActionOverride" );

	USFXCustomAction_FlinchBase_execFlinchActionOverride_Parms FlinchActionOverride_Parms;

	this->ProcessEvent ( pFnFlinchActionOverride, &FlinchActionOverride_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_FlinchBase.StopCustomAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_FlinchBase::StopCustomAction ( )
{
	static UFunction* pFnStopCustomAction = NULL;

	if ( ! pFnStopCustomAction )
		pFnStopCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_FlinchBase.StopCustomAction" );

	USFXCustomAction_FlinchBase_execStopCustomAction_Parms StopCustomAction_Parms;

	this->ProcessEvent ( pFnStopCustomAction, &StopCustomAction_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_FlinchBase.StartCustomAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_FlinchBase::StartCustomAction ( )
{
	static UFunction* pFnStartCustomAction = NULL;

	if ( ! pFnStartCustomAction )
		pFnStartCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_FlinchBase.StartCustomAction" );

	USFXCustomAction_FlinchBase_execStartCustomAction_Parms StartCustomAction_Parms;

	this->ProcessEvent ( pFnStartCustomAction, &StartCustomAction_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_FlinchBase.GetBodyStanceAnim
// [0x00020002]
// Parameters infos:
// struct FBodyStance             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FBodyStance USFXCustomAction_FlinchBase::GetBodyStanceAnim ( )
{
	static UFunction* pFnGetBodyStanceAnim = NULL;

	if ( ! pFnGetBodyStanceAnim )
		pFnGetBodyStanceAnim = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_FlinchBase.GetBodyStanceAnim" );

	USFXCustomAction_FlinchBase_execGetBodyStanceAnim_Parms GetBodyStanceAnim_Parms;

	this->ProcessEvent ( pFnGetBodyStanceAnim, &GetBodyStanceAnim_Parms, NULL );

	return GetBodyStanceAnim_Parms.ReturnValue;
};

// Function SFXGameContent.SFXCustomAction_FlinchBase.InternalCanDoCustomAction
// [0x00080002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioPawn*                SyncPawn                       ( CPF_Parm )
// unsigned long                  bForced                        ( CPF_Parm )

bool USFXCustomAction_FlinchBase::InternalCanDoCustomAction ( class ABioPawn* SyncPawn, unsigned long bForced )
{
	static UFunction* pFnInternalCanDoCustomAction = NULL;

	if ( ! pFnInternalCanDoCustomAction )
		pFnInternalCanDoCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_FlinchBase.InternalCanDoCustomAction" );

	USFXCustomAction_FlinchBase_execInternalCanDoCustomAction_Parms InternalCanDoCustomAction_Parms;
	InternalCanDoCustomAction_Parms.SyncPawn = SyncPawn;
	InternalCanDoCustomAction_Parms.bForced = bForced;

	this->ProcessEvent ( pFnInternalCanDoCustomAction, &InternalCanDoCustomAction_Parms, NULL );

	return InternalCanDoCustomAction_Parms.ReturnValue;
};

// Function SFXGameContent.SFXCustomAction_FlinchBase.GetUsedAnimNames
// [0x00422802] ( FUNC_Event )
// Parameters infos:
// TArray<struct SFXName>         UsedAnims                      ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void USFXCustomAction_FlinchBase::eventGetUsedAnimNames ( TArray<struct SFXName>* UsedAnims )
{
	static UFunction* pFnGetUsedAnimNames = NULL;

	if ( ! pFnGetUsedAnimNames )
		pFnGetUsedAnimNames = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_FlinchBase.GetUsedAnimNames" );

	USFXCustomAction_FlinchBase_eventGetUsedAnimNames_Parms GetUsedAnimNames_Parms;

	if ( UsedAnims )
		memcpy ( &GetUsedAnimNames_Parms.UsedAnims, UsedAnims, 0x10 );

	this->ProcessEvent ( pFnGetUsedAnimNames, &GetUsedAnimNames_Parms, NULL );

	if ( UsedAnims )
		memcpy ( UsedAnims, &GetUsedAnimNames_Parms.UsedAnims, 0x10 );
};



class UClass* USFXCustomAction_FlinchHeavy::pClassPointer = NULL;

class UClass* USFXCustomAction_FlinchHeavy::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_FlinchHeavy" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_PlayerOnFire::pClassPointer = NULL;

class UClass* USFXCustomAction_PlayerOnFire::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_PlayerOnFire" );

		return pClassPointer;
	};



class UClass* USFXCharacterClass_Adept::pClassPointer = NULL;

class UClass* USFXCharacterClass_Adept::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCharacterClass_Adept" );

		return pClassPointer;
	};



class UClass* USFXPowerCustomAction_Shockwave::pClassPointer = NULL;

class UClass* USFXPowerCustomAction_Shockwave::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXPowerCustomAction_Shockwave" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXPowerCustomAction_Shockwave.PopulatePowerStatBarEvolves
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_Shockwave::PopulatePowerStatBarEvolves ( )
{
	static UFunction* pFnPopulatePowerStatBarEvolves = NULL;

	if ( ! pFnPopulatePowerStatBarEvolves )
		pFnPopulatePowerStatBarEvolves = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Shockwave.PopulatePowerStatBarEvolves" );

	USFXPowerCustomAction_Shockwave_execPopulatePowerStatBarEvolves_Parms PopulatePowerStatBarEvolves_Parms;

	this->ProcessEvent ( pFnPopulatePowerStatBarEvolves, &PopulatePowerStatBarEvolves_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Shockwave.ApplyBonus
// [0x00024002]
// Parameters infos:
// struct SFXName                 Parameter                      ( CPF_Parm )
// class USFXGameEffect*          Bonus                          ( CPF_Parm )
// unsigned long                  bRemove                        ( CPF_OptionalParm | CPF_Parm )

void USFXPowerCustomAction_Shockwave::ApplyBonus ( struct SFXName Parameter, class USFXGameEffect* Bonus, unsigned long bRemove )
{
	static UFunction* pFnApplyBonus = NULL;

	if ( ! pFnApplyBonus )
		pFnApplyBonus = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Shockwave.ApplyBonus" );

	USFXPowerCustomAction_Shockwave_execApplyBonus_Parms ApplyBonus_Parms;
	memcpy ( &ApplyBonus_Parms.Parameter, &Parameter, 0x8 );
	ApplyBonus_Parms.Bonus = Bonus;
	ApplyBonus_Parms.bRemove = bRemove;

	this->ProcessEvent ( pFnApplyBonus, &ApplyBonus_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Shockwave.RecalculateAllPowerData
// [0x00024002]
// Parameters infos:
// unsigned long                  bReset                         ( CPF_OptionalParm | CPF_Parm )

void USFXPowerCustomAction_Shockwave::RecalculateAllPowerData ( unsigned long bReset )
{
	static UFunction* pFnRecalculateAllPowerData = NULL;

	if ( ! pFnRecalculateAllPowerData )
		pFnRecalculateAllPowerData = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Shockwave.RecalculateAllPowerData" );

	USFXPowerCustomAction_Shockwave_execRecalculateAllPowerData_Parms RecalculateAllPowerData_Parms;
	RecalculateAllPowerData_Parms.bReset = bReset;

	this->ProcessEvent ( pFnRecalculateAllPowerData, &RecalculateAllPowerData_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Shockwave.EvolvePower
// [0x00020002]
// Parameters infos:
// unsigned char                  choice                         ( CPF_Parm )

void USFXPowerCustomAction_Shockwave::EvolvePower ( unsigned char choice )
{
	static UFunction* pFnEvolvePower = NULL;

	if ( ! pFnEvolvePower )
		pFnEvolvePower = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Shockwave.EvolvePower" );

	USFXPowerCustomAction_Shockwave_execEvolvePower_Parms EvolvePower_Parms;
	EvolvePower_Parms.choice = choice;

	this->ProcessEvent ( pFnEvolvePower, &EvolvePower_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Shockwave.ShouldUsePower
// [0x00420002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Target                         ( CPF_Parm )
// FString                        sOptionalInfo                  ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool USFXPowerCustomAction_Shockwave::ShouldUsePower ( class AActor* Target, FString* sOptionalInfo )
{
	static UFunction* pFnShouldUsePower = NULL;

	if ( ! pFnShouldUsePower )
		pFnShouldUsePower = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Shockwave.ShouldUsePower" );

	USFXPowerCustomAction_Shockwave_execShouldUsePower_Parms ShouldUsePower_Parms;
	ShouldUsePower_Parms.Target = Target;

	if ( sOptionalInfo )
		memcpy ( &ShouldUsePower_Parms.sOptionalInfo, sOptionalInfo, 0x10 );

	this->ProcessEvent ( pFnShouldUsePower, &ShouldUsePower_Parms, NULL );

	if ( sOptionalInfo )
		memcpy ( sOptionalInfo, &ShouldUsePower_Parms.sOptionalInfo, 0x10 );

	return ShouldUsePower_Parms.ReturnValue;
};

// Function SFXGameContent.SFXPowerCustomAction_Shockwave.OnRagdollPhysicsImpact
// [0x00020002]
// Parameters infos:
// class APawn*                   oPawn                          ( CPF_Parm )
// class AActor*                  oImpactActor                   ( CPF_Parm )
// struct FVector                 vImpactDir                     ( CPF_Parm )

void USFXPowerCustomAction_Shockwave::OnRagdollPhysicsImpact ( class APawn* oPawn, class AActor* oImpactActor, struct FVector const& vImpactDir )
{
	static UFunction* pFnOnRagdollPhysicsImpact = NULL;

	if ( ! pFnOnRagdollPhysicsImpact )
		pFnOnRagdollPhysicsImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Shockwave.OnRagdollPhysicsImpact" );

	USFXPowerCustomAction_Shockwave_execOnRagdollPhysicsImpact_Parms OnRagdollPhysicsImpact_Parms;
	OnRagdollPhysicsImpact_Parms.oPawn = oPawn;
	OnRagdollPhysicsImpact_Parms.oImpactActor = oImpactActor;
	memcpy ( &OnRagdollPhysicsImpact_Parms.vImpactDir, &vImpactDir, 0xC );

	this->ProcessEvent ( pFnOnRagdollPhysicsImpact, &OnRagdollPhysicsImpact_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Shockwave.ClientDoPowerSubsequentImpact
// [0x00024002]
// Parameters infos:
// class AActor*                  oActor                         ( CPF_Parm )
// int                            CustomActionReactionType       ( CPF_OptionalParm | CPF_Parm )
// float                          Duration                       ( CPF_OptionalParm | CPF_Parm )
// int                            ImpactCount                    ( CPF_OptionalParm | CPF_Parm )
// float                          Delay                          ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  DoCallback                     ( CPF_OptionalParm | CPF_Parm )

void USFXPowerCustomAction_Shockwave::ClientDoPowerSubsequentImpact ( class AActor* oActor, int CustomActionReactionType, float Duration, int ImpactCount, float Delay, unsigned long DoCallback )
{
	static UFunction* pFnClientDoPowerSubsequentImpact = NULL;

	if ( ! pFnClientDoPowerSubsequentImpact )
		pFnClientDoPowerSubsequentImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Shockwave.ClientDoPowerSubsequentImpact" );

	USFXPowerCustomAction_Shockwave_execClientDoPowerSubsequentImpact_Parms ClientDoPowerSubsequentImpact_Parms;
	ClientDoPowerSubsequentImpact_Parms.oActor = oActor;
	ClientDoPowerSubsequentImpact_Parms.CustomActionReactionType = CustomActionReactionType;
	ClientDoPowerSubsequentImpact_Parms.Duration = Duration;
	ClientDoPowerSubsequentImpact_Parms.ImpactCount = ImpactCount;
	ClientDoPowerSubsequentImpact_Parms.Delay = Delay;
	ClientDoPowerSubsequentImpact_Parms.DoCallback = DoCallback;

	this->ProcessEvent ( pFnClientDoPowerSubsequentImpact, &ClientDoPowerSubsequentImpact_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Shockwave.DoSubsequentImpact
// [0x00020002]
// Parameters infos:
// class AActor*                  HitActor                       ( CPF_Parm )
// struct FVector                 ImpactLocation                 ( CPF_Parm )
// int                            nImpactCount                   ( CPF_Parm )

void USFXPowerCustomAction_Shockwave::DoSubsequentImpact ( class AActor* HitActor, struct FVector const& ImpactLocation, int nImpactCount )
{
	static UFunction* pFnDoSubsequentImpact = NULL;

	if ( ! pFnDoSubsequentImpact )
		pFnDoSubsequentImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Shockwave.DoSubsequentImpact" );

	USFXPowerCustomAction_Shockwave_execDoSubsequentImpact_Parms DoSubsequentImpact_Parms;
	DoSubsequentImpact_Parms.HitActor = HitActor;
	memcpy ( &DoSubsequentImpact_Parms.ImpactLocation, &ImpactLocation, 0xC );
	DoSubsequentImpact_Parms.nImpactCount = nImpactCount;

	this->ProcessEvent ( pFnDoSubsequentImpact, &DoSubsequentImpact_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Shockwave.DoImpact
// [0x00020002]
// Parameters infos:
// struct FVector                 location                       ( CPF_Parm )
// struct FRotator                ProjectileRotation             ( CPF_Parm )

void USFXPowerCustomAction_Shockwave::DoImpact ( struct FVector const& location, struct FRotator const& ProjectileRotation )
{
	static UFunction* pFnDoImpact = NULL;

	if ( ! pFnDoImpact )
		pFnDoImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Shockwave.DoImpact" );

	USFXPowerCustomAction_Shockwave_execDoImpact_Parms DoImpact_Parms;
	memcpy ( &DoImpact_Parms.location, &location, 0xC );
	memcpy ( &DoImpact_Parms.ProjectileRotation, &ProjectileRotation, 0xC );

	this->ProcessEvent ( pFnDoImpact, &DoImpact_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Shockwave.OnPowerDetonated
// [0x00024000]
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )
// class ASFXProjectile_PowerCustomAction* oProjectile                    ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  HitActor                       ( CPF_OptionalParm | CPF_Parm )

void USFXPowerCustomAction_Shockwave::OnPowerDetonated ( struct FVector const& HitLocation, struct FVector const& HitNormal, class ASFXProjectile_PowerCustomAction* oProjectile, class AActor* HitActor )
{
	static UFunction* pFnOnPowerDetonated = NULL;

	if ( ! pFnOnPowerDetonated )
		pFnOnPowerDetonated = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Shockwave.OnPowerDetonated" );

	USFXPowerCustomAction_Shockwave_execOnPowerDetonated_Parms OnPowerDetonated_Parms;
	memcpy ( &OnPowerDetonated_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &OnPowerDetonated_Parms.HitNormal, &HitNormal, 0xC );
	OnPowerDetonated_Parms.oProjectile = oProjectile;
	OnPowerDetonated_Parms.HitActor = HitActor;

	this->ProcessEvent ( pFnOnPowerDetonated, &OnPowerDetonated_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Shockwave.ReleaseProjectilePower
// [0x00020002]
// Parameters infos:
// class ASFXProjectile_PowerCustomAction* ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class ASFXProjectile_PowerCustomAction* USFXPowerCustomAction_Shockwave::ReleaseProjectilePower ( )
{
	static UFunction* pFnReleaseProjectilePower = NULL;

	if ( ! pFnReleaseProjectilePower )
		pFnReleaseProjectilePower = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Shockwave.ReleaseProjectilePower" );

	USFXPowerCustomAction_Shockwave_execReleaseProjectilePower_Parms ReleaseProjectilePower_Parms;

	this->ProcessEvent ( pFnReleaseProjectilePower, &ReleaseProjectilePower_Parms, NULL );

	return ReleaseProjectilePower_Parms.ReturnValue;
};



class UClass* USFXPowerCustomAction_BioticGrenade::pClassPointer = NULL;

class UClass* USFXPowerCustomAction_BioticGrenade::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXPowerCustomAction_BioticGrenade" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXPowerCustomAction_BioticGrenade.PopulatePowerStatBarEvolves
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_BioticGrenade::PopulatePowerStatBarEvolves ( )
{
	static UFunction* pFnPopulatePowerStatBarEvolves = NULL;

	if ( ! pFnPopulatePowerStatBarEvolves )
		pFnPopulatePowerStatBarEvolves = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_BioticGrenade.PopulatePowerStatBarEvolves" );

	USFXPowerCustomAction_BioticGrenade_execPopulatePowerStatBarEvolves_Parms PopulatePowerStatBarEvolves_Parms;

	this->ProcessEvent ( pFnPopulatePowerStatBarEvolves, &PopulatePowerStatBarEvolves_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_BioticGrenade.GetDefaultClientEffectParams
// [0x00020002]
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FVector USFXPowerCustomAction_BioticGrenade::GetDefaultClientEffectParams ( )
{
	static UFunction* pFnGetDefaultClientEffectParams = NULL;

	if ( ! pFnGetDefaultClientEffectParams )
		pFnGetDefaultClientEffectParams = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_BioticGrenade.GetDefaultClientEffectParams" );

	USFXPowerCustomAction_BioticGrenade_execGetDefaultClientEffectParams_Parms GetDefaultClientEffectParams_Parms;

	this->ProcessEvent ( pFnGetDefaultClientEffectParams, &GetDefaultClientEffectParams_Parms, NULL );

	return GetDefaultClientEffectParams_Parms.ReturnValue;
};

// Function SFXGameContent.SFXPowerCustomAction_BioticGrenade.RecalculateAllPowerData
// [0x00024002]
// Parameters infos:
// unsigned long                  bReset                         ( CPF_OptionalParm | CPF_Parm )

void USFXPowerCustomAction_BioticGrenade::RecalculateAllPowerData ( unsigned long bReset )
{
	static UFunction* pFnRecalculateAllPowerData = NULL;

	if ( ! pFnRecalculateAllPowerData )
		pFnRecalculateAllPowerData = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_BioticGrenade.RecalculateAllPowerData" );

	USFXPowerCustomAction_BioticGrenade_execRecalculateAllPowerData_Parms RecalculateAllPowerData_Parms;
	RecalculateAllPowerData_Parms.bReset = bReset;

	this->ProcessEvent ( pFnRecalculateAllPowerData, &RecalculateAllPowerData_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_BioticGrenade.ResetPower
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_BioticGrenade::ResetPower ( )
{
	static UFunction* pFnResetPower = NULL;

	if ( ! pFnResetPower )
		pFnResetPower = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_BioticGrenade.ResetPower" );

	USFXPowerCustomAction_BioticGrenade_execResetPower_Parms ResetPower_Parms;

	this->ProcessEvent ( pFnResetPower, &ResetPower_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_BioticGrenade.EvolvePower
// [0x00020002]
// Parameters infos:
// unsigned char                  choice                         ( CPF_Parm )

void USFXPowerCustomAction_BioticGrenade::EvolvePower ( unsigned char choice )
{
	static UFunction* pFnEvolvePower = NULL;

	if ( ! pFnEvolvePower )
		pFnEvolvePower = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_BioticGrenade.EvolvePower" );

	USFXPowerCustomAction_BioticGrenade_execEvolvePower_Parms EvolvePower_Parms;
	EvolvePower_Parms.choice = choice;

	this->ProcessEvent ( pFnEvolvePower, &EvolvePower_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_BioticGrenade.OnImpact
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  Resistance                     ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

bool USFXPowerCustomAction_BioticGrenade::OnImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector const& HitLocation, struct FVector const& HitNormal )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_BioticGrenade.OnImpact" );

	USFXPowerCustomAction_BioticGrenade_execOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.Resistance = Resistance;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;
	memcpy ( &OnImpact_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &OnImpact_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent.SFXPowerCustomAction_BioticGrenade.SpawnChildProjectiles
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_BioticGrenade::SpawnChildProjectiles ( )
{
	static UFunction* pFnSpawnChildProjectiles = NULL;

	if ( ! pFnSpawnChildProjectiles )
		pFnSpawnChildProjectiles = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_BioticGrenade.SpawnChildProjectiles" );

	USFXPowerCustomAction_BioticGrenade_execSpawnChildProjectiles_Parms SpawnChildProjectiles_Parms;

	this->ProcessEvent ( pFnSpawnChildProjectiles, &SpawnChildProjectiles_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_BioticGrenade.ReleasePower
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_BioticGrenade::ReleasePower ( )
{
	static UFunction* pFnReleasePower = NULL;

	if ( ! pFnReleasePower )
		pFnReleasePower = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_BioticGrenade.ReleasePower" );

	USFXPowerCustomAction_BioticGrenade_execReleasePower_Parms ReleasePower_Parms;

	this->ProcessEvent ( pFnReleasePower, &ReleasePower_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_BioticGrenade.ApplyGrenadeBonus
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_BioticGrenade::ApplyGrenadeBonus ( )
{
	static UFunction* pFnApplyGrenadeBonus = NULL;

	if ( ! pFnApplyGrenadeBonus )
		pFnApplyGrenadeBonus = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_BioticGrenade.ApplyGrenadeBonus" );

	USFXPowerCustomAction_BioticGrenade_execApplyGrenadeBonus_Parms ApplyGrenadeBonus_Parms;

	this->ProcessEvent ( pFnApplyGrenadeBonus, &ApplyGrenadeBonus_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_BioticGrenade.GetDamageType
// [0x00020002]
// Parameters infos:
// class UClass*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UClass* USFXPowerCustomAction_BioticGrenade::GetDamageType ( )
{
	static UFunction* pFnGetDamageType = NULL;

	if ( ! pFnGetDamageType )
		pFnGetDamageType = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_BioticGrenade.GetDamageType" );

	USFXPowerCustomAction_BioticGrenade_execGetDamageType_Parms GetDamageType_Parms;

	this->ProcessEvent ( pFnGetDamageType, &GetDamageType_Parms, NULL );

	return GetDamageType_Parms.ReturnValue;
};

// Function SFXGameContent.SFXPowerCustomAction_BioticGrenade.GetImpactDamage
// [0x00420002]
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm | CPF_OutParm )

float USFXPowerCustomAction_BioticGrenade::GetImpactDamage ( class AActor* oImpacted, class UClass** DamageType )
{
	static UFunction* pFnGetImpactDamage = NULL;

	if ( ! pFnGetImpactDamage )
		pFnGetImpactDamage = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_BioticGrenade.GetImpactDamage" );

	USFXPowerCustomAction_BioticGrenade_execGetImpactDamage_Parms GetImpactDamage_Parms;
	GetImpactDamage_Parms.oImpacted = oImpacted;

	if ( DamageType )
		GetImpactDamage_Parms.DamageType = *DamageType;

	this->ProcessEvent ( pFnGetImpactDamage, &GetImpactDamage_Parms, NULL );

	if ( DamageType )
		*DamageType = GetImpactDamage_Parms.DamageType;

	return GetImpactDamage_Parms.ReturnValue;
};

// Function SFXGameContent.SFXPowerCustomAction_BioticGrenade.PlayDetonationEffects
// [0x00024002]
// Parameters infos:
// struct FVector                 ImpactLocation                 ( CPF_Parm )
// struct FVector                 ImpactNormal                   ( CPF_Parm )
// class ASFXProjectile_PowerCustomAction* oProjectile                    ( CPF_OptionalParm | CPF_Parm )

void USFXPowerCustomAction_BioticGrenade::PlayDetonationEffects ( struct FVector const& ImpactLocation, struct FVector const& ImpactNormal, class ASFXProjectile_PowerCustomAction* oProjectile )
{
	static UFunction* pFnPlayDetonationEffects = NULL;

	if ( ! pFnPlayDetonationEffects )
		pFnPlayDetonationEffects = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_BioticGrenade.PlayDetonationEffects" );

	USFXPowerCustomAction_BioticGrenade_execPlayDetonationEffects_Parms PlayDetonationEffects_Parms;
	memcpy ( &PlayDetonationEffects_Parms.ImpactLocation, &ImpactLocation, 0xC );
	memcpy ( &PlayDetonationEffects_Parms.ImpactNormal, &ImpactNormal, 0xC );
	PlayDetonationEffects_Parms.oProjectile = oProjectile;

	this->ProcessEvent ( pFnPlayDetonationEffects, &PlayDetonationEffects_Parms, NULL );
};



class UClass* USFXPowerCustomAction_GrenadeBase::pClassPointer = NULL;

class UClass* USFXPowerCustomAction_GrenadeBase::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXPowerCustomAction_GrenadeBase" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXPowerCustomAction_GrenadeBase.GetHUDWheelIconInfo
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// FString                        ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

FString USFXPowerCustomAction_GrenadeBase::eventGetHUDWheelIconInfo ( )
{
	static UFunction* pFnGetHUDWheelIconInfo = NULL;

	if ( ! pFnGetHUDWheelIconInfo )
		pFnGetHUDWheelIconInfo = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_GrenadeBase.GetHUDWheelIconInfo" );

	USFXPowerCustomAction_GrenadeBase_eventGetHUDWheelIconInfo_Parms GetHUDWheelIconInfo_Parms;

	this->ProcessEvent ( pFnGetHUDWheelIconInfo, &GetHUDWheelIconInfo_Parms, NULL );

	return GetHUDWheelIconInfo_Parms.ReturnValue;
};

// Function SFXGameContent.SFXPowerCustomAction_GrenadeBase.ShouldUsePower
// [0x00420802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Target                         ( CPF_Parm )
// FString                        sOptionalInfo                  ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool USFXPowerCustomAction_GrenadeBase::eventShouldUsePower ( class AActor* Target, FString* sOptionalInfo )
{
	static UFunction* pFnShouldUsePower = NULL;

	if ( ! pFnShouldUsePower )
		pFnShouldUsePower = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_GrenadeBase.ShouldUsePower" );

	USFXPowerCustomAction_GrenadeBase_eventShouldUsePower_Parms ShouldUsePower_Parms;
	ShouldUsePower_Parms.Target = Target;

	if ( sOptionalInfo )
		memcpy ( &ShouldUsePower_Parms.sOptionalInfo, sOptionalInfo, 0x10 );

	this->ProcessEvent ( pFnShouldUsePower, &ShouldUsePower_Parms, NULL );

	if ( sOptionalInfo )
		memcpy ( sOptionalInfo, &ShouldUsePower_Parms.sOptionalInfo, 0x10 );

	return ShouldUsePower_Parms.ReturnValue;
};

// Function SFXGameContent.SFXPowerCustomAction_GrenadeBase.GetGrenadeCount
// [0x00020002]
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USFXPowerCustomAction_GrenadeBase::GetGrenadeCount ( )
{
	static UFunction* pFnGetGrenadeCount = NULL;

	if ( ! pFnGetGrenadeCount )
		pFnGetGrenadeCount = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_GrenadeBase.GetGrenadeCount" );

	USFXPowerCustomAction_GrenadeBase_execGetGrenadeCount_Parms GetGrenadeCount_Parms;

	this->ProcessEvent ( pFnGetGrenadeCount, &GetGrenadeCount_Parms, NULL );

	return GetGrenadeCount_Parms.ReturnValue;
};

// Function SFXGameContent.SFXPowerCustomAction_GrenadeBase.AdjustGrenadeCount
// [0x00020002]
// Parameters infos:
// int                            Amount                         ( CPF_Parm )

void USFXPowerCustomAction_GrenadeBase::AdjustGrenadeCount ( int Amount )
{
	static UFunction* pFnAdjustGrenadeCount = NULL;

	if ( ! pFnAdjustGrenadeCount )
		pFnAdjustGrenadeCount = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_GrenadeBase.AdjustGrenadeCount" );

	USFXPowerCustomAction_GrenadeBase_execAdjustGrenadeCount_Parms AdjustGrenadeCount_Parms;
	AdjustGrenadeCount_Parms.Amount = Amount;

	this->ProcessEvent ( pFnAdjustGrenadeCount, &AdjustGrenadeCount_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_GrenadeBase.ReleasePower
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_GrenadeBase::ReleasePower ( )
{
	static UFunction* pFnReleasePower = NULL;

	if ( ! pFnReleasePower )
		pFnReleasePower = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_GrenadeBase.ReleasePower" );

	USFXPowerCustomAction_GrenadeBase_execReleasePower_Parms ReleasePower_Parms;

	this->ProcessEvent ( pFnReleasePower, &ReleasePower_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_GrenadeBase.CanUsePower
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oTarget                        ( CPF_Parm )

bool USFXPowerCustomAction_GrenadeBase::CanUsePower ( class AActor* oTarget )
{
	static UFunction* pFnCanUsePower = NULL;

	if ( ! pFnCanUsePower )
		pFnCanUsePower = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_GrenadeBase.CanUsePower" );

	USFXPowerCustomAction_GrenadeBase_execCanUsePower_Parms CanUsePower_Parms;
	CanUsePower_Parms.oTarget = oTarget;

	this->ProcessEvent ( pFnCanUsePower, &CanUsePower_Parms, NULL );

	return CanUsePower_Parms.ReturnValue;
};

// Function SFXGameContent.SFXPowerCustomAction_GrenadeBase.ApplyGrenadeBonus
// [0x00020000]
// Parameters infos:

void USFXPowerCustomAction_GrenadeBase::ApplyGrenadeBonus ( )
{
	static UFunction* pFnApplyGrenadeBonus = NULL;

	if ( ! pFnApplyGrenadeBonus )
		pFnApplyGrenadeBonus = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_GrenadeBase.ApplyGrenadeBonus" );

	USFXPowerCustomAction_GrenadeBase_execApplyGrenadeBonus_Parms ApplyGrenadeBonus_Parms;

	this->ProcessEvent ( pFnApplyGrenadeBonus, &ApplyGrenadeBonus_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_GrenadeBase.ResetPower
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_GrenadeBase::ResetPower ( )
{
	static UFunction* pFnResetPower = NULL;

	if ( ! pFnResetPower )
		pFnResetPower = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_GrenadeBase.ResetPower" );

	USFXPowerCustomAction_GrenadeBase_execResetPower_Parms ResetPower_Parms;

	this->ProcessEvent ( pFnResetPower, &ResetPower_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_GrenadeBase.OnSquadMemberAdded
// [0x00020002]
// Parameters infos:
// class APawn*                   Pawn                           ( CPF_Parm )

void USFXPowerCustomAction_GrenadeBase::OnSquadMemberAdded ( class APawn* Pawn )
{
	static UFunction* pFnOnSquadMemberAdded = NULL;

	if ( ! pFnOnSquadMemberAdded )
		pFnOnSquadMemberAdded = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_GrenadeBase.OnSquadMemberAdded" );

	USFXPowerCustomAction_GrenadeBase_execOnSquadMemberAdded_Parms OnSquadMemberAdded_Parms;
	OnSquadMemberAdded_Parms.Pawn = Pawn;

	this->ProcessEvent ( pFnOnSquadMemberAdded, &OnSquadMemberAdded_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_GrenadeBase.OnPowerRankIncreased
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_GrenadeBase::OnPowerRankIncreased ( )
{
	static UFunction* pFnOnPowerRankIncreased = NULL;

	if ( ! pFnOnPowerRankIncreased )
		pFnOnPowerRankIncreased = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_GrenadeBase.OnPowerRankIncreased" );

	USFXPowerCustomAction_GrenadeBase_execOnPowerRankIncreased_Parms OnPowerRankIncreased_Parms;

	this->ProcessEvent ( pFnOnPowerRankIncreased, &OnPowerRankIncreased_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_GrenadeBase.OnPowerAdded
// [0x00020002]
// Parameters infos:
// class USFXPowerCustomActionBase* Power                          ( CPF_Parm )

void USFXPowerCustomAction_GrenadeBase::OnPowerAdded ( class USFXPowerCustomActionBase* Power )
{
	static UFunction* pFnOnPowerAdded = NULL;

	if ( ! pFnOnPowerAdded )
		pFnOnPowerAdded = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_GrenadeBase.OnPowerAdded" );

	USFXPowerCustomAction_GrenadeBase_execOnPowerAdded_Parms OnPowerAdded_Parms;
	OnPowerAdded_Parms.Power = Power;

	this->ProcessEvent ( pFnOnPowerAdded, &OnPowerAdded_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_GrenadeBase.OnPowersLoaded
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_GrenadeBase::OnPowersLoaded ( )
{
	static UFunction* pFnOnPowersLoaded = NULL;

	if ( ! pFnOnPowersLoaded )
		pFnOnPowersLoaded = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_GrenadeBase.OnPowersLoaded" );

	USFXPowerCustomAction_GrenadeBase_execOnPowersLoaded_Parms OnPowersLoaded_Parms;

	this->ProcessEvent ( pFnOnPowersLoaded, &OnPowersLoaded_Parms, NULL );
};



class UClass* USFXPowerCustomAction_Throw::pClassPointer = NULL;

class UClass* USFXPowerCustomAction_Throw::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXPowerCustomAction_Throw" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXPowerCustomAction_Throw.PopulatePowerStatBarEvolves
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_Throw::PopulatePowerStatBarEvolves ( )
{
	static UFunction* pFnPopulatePowerStatBarEvolves = NULL;

	if ( ! pFnPopulatePowerStatBarEvolves )
		pFnPopulatePowerStatBarEvolves = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Throw.PopulatePowerStatBarEvolves" );

	USFXPowerCustomAction_Throw_execPopulatePowerStatBarEvolves_Parms PopulatePowerStatBarEvolves_Parms;

	this->ProcessEvent ( pFnPopulatePowerStatBarEvolves, &PopulatePowerStatBarEvolves_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Throw.EvolvePower
// [0x00020002]
// Parameters infos:
// unsigned char                  choice                         ( CPF_Parm )

void USFXPowerCustomAction_Throw::EvolvePower ( unsigned char choice )
{
	static UFunction* pFnEvolvePower = NULL;

	if ( ! pFnEvolvePower )
		pFnEvolvePower = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Throw.EvolvePower" );

	USFXPowerCustomAction_Throw_execEvolvePower_Parms EvolvePower_Parms;
	EvolvePower_Parms.choice = choice;

	this->ProcessEvent ( pFnEvolvePower, &EvolvePower_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Throw.ShouldUsePower
// [0x00420002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Target                         ( CPF_Parm )
// FString                        sOptionalInfo                  ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool USFXPowerCustomAction_Throw::ShouldUsePower ( class AActor* Target, FString* sOptionalInfo )
{
	static UFunction* pFnShouldUsePower = NULL;

	if ( ! pFnShouldUsePower )
		pFnShouldUsePower = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Throw.ShouldUsePower" );

	USFXPowerCustomAction_Throw_execShouldUsePower_Parms ShouldUsePower_Parms;
	ShouldUsePower_Parms.Target = Target;

	if ( sOptionalInfo )
		memcpy ( &ShouldUsePower_Parms.sOptionalInfo, sOptionalInfo, 0x10 );

	this->ProcessEvent ( pFnShouldUsePower, &ShouldUsePower_Parms, NULL );

	if ( sOptionalInfo )
		memcpy ( sOptionalInfo, &ShouldUsePower_Parms.sOptionalInfo, 0x10 );

	return ShouldUsePower_Parms.ReturnValue;
};

// Function SFXGameContent.SFXPowerCustomAction_Throw.OnRagdollPhysicsImpact
// [0x00020002]
// Parameters infos:
// class APawn*                   oPawn                          ( CPF_Parm )
// class AActor*                  oImpactActor                   ( CPF_Parm )
// struct FVector                 vImpactDir                     ( CPF_Parm )

void USFXPowerCustomAction_Throw::OnRagdollPhysicsImpact ( class APawn* oPawn, class AActor* oImpactActor, struct FVector const& vImpactDir )
{
	static UFunction* pFnOnRagdollPhysicsImpact = NULL;

	if ( ! pFnOnRagdollPhysicsImpact )
		pFnOnRagdollPhysicsImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Throw.OnRagdollPhysicsImpact" );

	USFXPowerCustomAction_Throw_execOnRagdollPhysicsImpact_Parms OnRagdollPhysicsImpact_Parms;
	OnRagdollPhysicsImpact_Parms.oPawn = oPawn;
	OnRagdollPhysicsImpact_Parms.oImpactActor = oImpactActor;
	memcpy ( &OnRagdollPhysicsImpact_Parms.vImpactDir, &vImpactDir, 0xC );

	this->ProcessEvent ( pFnOnRagdollPhysicsImpact, &OnRagdollPhysicsImpact_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Throw.ResetPower
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_Throw::ResetPower ( )
{
	static UFunction* pFnResetPower = NULL;

	if ( ! pFnResetPower )
		pFnResetPower = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Throw.ResetPower" );

	USFXPowerCustomAction_Throw_execResetPower_Parms ResetPower_Parms;

	this->ProcessEvent ( pFnResetPower, &ResetPower_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Throw.OnImpact
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  Resistance                     ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

bool USFXPowerCustomAction_Throw::OnImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector const& HitLocation, struct FVector const& HitNormal )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Throw.OnImpact" );

	USFXPowerCustomAction_Throw_execOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.Resistance = Resistance;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;
	memcpy ( &OnImpact_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &OnImpact_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent.SFXPowerCustomAction_Throw.GetImpactForce
// [0x00020002]
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oImpacted                      ( CPF_Parm )

float USFXPowerCustomAction_Throw::GetImpactForce ( class AActor* oImpacted )
{
	static UFunction* pFnGetImpactForce = NULL;

	if ( ! pFnGetImpactForce )
		pFnGetImpactForce = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Throw.GetImpactForce" );

	USFXPowerCustomAction_Throw_execGetImpactForce_Parms GetImpactForce_Parms;
	GetImpactForce_Parms.oImpacted = oImpacted;

	this->ProcessEvent ( pFnGetImpactForce, &GetImpactForce_Parms, NULL );

	return GetImpactForce_Parms.ReturnValue;
};



class UClass* USFXPowerCustomAction_MultiProjectile::pClassPointer = NULL;

class UClass* USFXPowerCustomAction_MultiProjectile::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXPowerCustomAction_MultiProjectile" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXPowerCustomAction_MultiProjectile.FindSecondTarget
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_MultiProjectile::FindSecondTarget ( )
{
	static UFunction* pFnFindSecondTarget = NULL;

	if ( ! pFnFindSecondTarget )
		pFnFindSecondTarget = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_MultiProjectile.FindSecondTarget" );

	USFXPowerCustomAction_MultiProjectile_execFindSecondTarget_Parms FindSecondTarget_Parms;

	this->ProcessEvent ( pFnFindSecondTarget, &FindSecondTarget_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_MultiProjectile.ReleaseSecondProjectile
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_MultiProjectile::ReleaseSecondProjectile ( )
{
	static UFunction* pFnReleaseSecondProjectile = NULL;

	if ( ! pFnReleaseSecondProjectile )
		pFnReleaseSecondProjectile = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_MultiProjectile.ReleaseSecondProjectile" );

	USFXPowerCustomAction_MultiProjectile_execReleaseSecondProjectile_Parms ReleaseSecondProjectile_Parms;

	this->ProcessEvent ( pFnReleaseSecondProjectile, &ReleaseSecondProjectile_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_MultiProjectile.ReleasePower
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_MultiProjectile::ReleasePower ( )
{
	static UFunction* pFnReleasePower = NULL;

	if ( ! pFnReleasePower )
		pFnReleasePower = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_MultiProjectile.ReleasePower" );

	USFXPowerCustomAction_MultiProjectile_execReleasePower_Parms ReleasePower_Parms;

	this->ProcessEvent ( pFnReleasePower, &ReleasePower_Parms, NULL );
};



class UClass* USFXPowerCustomAction_Pull::pClassPointer = NULL;

class UClass* USFXPowerCustomAction_Pull::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXPowerCustomAction_Pull" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXPowerCustomAction_Pull.PopulatePowerStatBarEvolves
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_Pull::PopulatePowerStatBarEvolves ( )
{
	static UFunction* pFnPopulatePowerStatBarEvolves = NULL;

	if ( ! pFnPopulatePowerStatBarEvolves )
		pFnPopulatePowerStatBarEvolves = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Pull.PopulatePowerStatBarEvolves" );

	USFXPowerCustomAction_Pull_execPopulatePowerStatBarEvolves_Parms PopulatePowerStatBarEvolves_Parms;

	this->ProcessEvent ( pFnPopulatePowerStatBarEvolves, &PopulatePowerStatBarEvolves_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Pull.ApplyBonus
// [0x00024002]
// Parameters infos:
// struct SFXName                 Parameter                      ( CPF_Parm )
// class USFXGameEffect*          Bonus                          ( CPF_Parm )
// unsigned long                  bRemove                        ( CPF_OptionalParm | CPF_Parm )

void USFXPowerCustomAction_Pull::ApplyBonus ( struct SFXName Parameter, class USFXGameEffect* Bonus, unsigned long bRemove )
{
	static UFunction* pFnApplyBonus = NULL;

	if ( ! pFnApplyBonus )
		pFnApplyBonus = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Pull.ApplyBonus" );

	USFXPowerCustomAction_Pull_execApplyBonus_Parms ApplyBonus_Parms;
	memcpy ( &ApplyBonus_Parms.Parameter, &Parameter, 0x8 );
	ApplyBonus_Parms.Bonus = Bonus;
	ApplyBonus_Parms.bRemove = bRemove;

	this->ProcessEvent ( pFnApplyBonus, &ApplyBonus_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Pull.ResetPower
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_Pull::ResetPower ( )
{
	static UFunction* pFnResetPower = NULL;

	if ( ! pFnResetPower )
		pFnResetPower = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Pull.ResetPower" );

	USFXPowerCustomAction_Pull_execResetPower_Parms ResetPower_Parms;

	this->ProcessEvent ( pFnResetPower, &ResetPower_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Pull.RecalculateAllPowerData
// [0x00024002]
// Parameters infos:
// unsigned long                  bReset                         ( CPF_OptionalParm | CPF_Parm )

void USFXPowerCustomAction_Pull::RecalculateAllPowerData ( unsigned long bReset )
{
	static UFunction* pFnRecalculateAllPowerData = NULL;

	if ( ! pFnRecalculateAllPowerData )
		pFnRecalculateAllPowerData = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Pull.RecalculateAllPowerData" );

	USFXPowerCustomAction_Pull_execRecalculateAllPowerData_Parms RecalculateAllPowerData_Parms;
	RecalculateAllPowerData_Parms.bReset = bReset;

	this->ProcessEvent ( pFnRecalculateAllPowerData, &RecalculateAllPowerData_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Pull.EvolvePower
// [0x00020002]
// Parameters infos:
// unsigned char                  choice                         ( CPF_Parm )

void USFXPowerCustomAction_Pull::EvolvePower ( unsigned char choice )
{
	static UFunction* pFnEvolvePower = NULL;

	if ( ! pFnEvolvePower )
		pFnEvolvePower = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Pull.EvolvePower" );

	USFXPowerCustomAction_Pull_execEvolvePower_Parms EvolvePower_Parms;
	EvolvePower_Parms.choice = choice;

	this->ProcessEvent ( pFnEvolvePower, &EvolvePower_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Pull.ShouldUsePower
// [0x00420002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Target                         ( CPF_Parm )
// FString                        sOptionalInfo                  ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool USFXPowerCustomAction_Pull::ShouldUsePower ( class AActor* Target, FString* sOptionalInfo )
{
	static UFunction* pFnShouldUsePower = NULL;

	if ( ! pFnShouldUsePower )
		pFnShouldUsePower = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Pull.ShouldUsePower" );

	USFXPowerCustomAction_Pull_execShouldUsePower_Parms ShouldUsePower_Parms;
	ShouldUsePower_Parms.Target = Target;

	if ( sOptionalInfo )
		memcpy ( &ShouldUsePower_Parms.sOptionalInfo, sOptionalInfo, 0x10 );

	this->ProcessEvent ( pFnShouldUsePower, &ShouldUsePower_Parms, NULL );

	if ( sOptionalInfo )
		memcpy ( sOptionalInfo, &ShouldUsePower_Parms.sOptionalInfo, 0x10 );

	return ShouldUsePower_Parms.ReturnValue;
};

// Function SFXGameContent.SFXPowerCustomAction_Pull.OnRagdollPhysicsImpact
// [0x00020002]
// Parameters infos:
// class APawn*                   oPawn                          ( CPF_Parm )
// class AActor*                  oImpactActor                   ( CPF_Parm )
// struct FVector                 vImpactDir                     ( CPF_Parm )

void USFXPowerCustomAction_Pull::OnRagdollPhysicsImpact ( class APawn* oPawn, class AActor* oImpactActor, struct FVector const& vImpactDir )
{
	static UFunction* pFnOnRagdollPhysicsImpact = NULL;

	if ( ! pFnOnRagdollPhysicsImpact )
		pFnOnRagdollPhysicsImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Pull.OnRagdollPhysicsImpact" );

	USFXPowerCustomAction_Pull_execOnRagdollPhysicsImpact_Parms OnRagdollPhysicsImpact_Parms;
	OnRagdollPhysicsImpact_Parms.oPawn = oPawn;
	OnRagdollPhysicsImpact_Parms.oImpactActor = oImpactActor;
	memcpy ( &OnRagdollPhysicsImpact_Parms.vImpactDir, &vImpactDir, 0xC );

	this->ProcessEvent ( pFnOnRagdollPhysicsImpact, &OnRagdollPhysicsImpact_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Pull.DropCurrentTargets
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_Pull::DropCurrentTargets ( )
{
	static UFunction* pFnDropCurrentTargets = NULL;

	if ( ! pFnDropCurrentTargets )
		pFnDropCurrentTargets = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Pull.DropCurrentTargets" );

	USFXPowerCustomAction_Pull_execDropCurrentTargets_Parms DropCurrentTargets_Parms;

	this->ProcessEvent ( pFnDropCurrentTargets, &DropCurrentTargets_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Pull.OnImpact
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  Resistance                     ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

bool USFXPowerCustomAction_Pull::OnImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector const& HitLocation, struct FVector const& HitNormal )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Pull.OnImpact" );

	USFXPowerCustomAction_Pull_execOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.Resistance = Resistance;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;
	memcpy ( &OnImpact_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &OnImpact_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent.SFXPowerCustomAction_Pull.GetImpactForce
// [0x00020002]
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oImpacted                      ( CPF_Parm )

float USFXPowerCustomAction_Pull::GetImpactForce ( class AActor* oImpacted )
{
	static UFunction* pFnGetImpactForce = NULL;

	if ( ! pFnGetImpactForce )
		pFnGetImpactForce = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Pull.GetImpactForce" );

	USFXPowerCustomAction_Pull_execGetImpactForce_Parms GetImpactForce_Parms;
	GetImpactForce_Parms.oImpacted = oImpacted;

	this->ProcessEvent ( pFnGetImpactForce, &GetImpactForce_Parms, NULL );

	return GetImpactForce_Parms.ReturnValue;
};

// Function SFXGameContent.SFXPowerCustomAction_Pull.StartPower
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_Pull::StartPower ( )
{
	static UFunction* pFnStartPower = NULL;

	if ( ! pFnStartPower )
		pFnStartPower = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Pull.StartPower" );

	USFXPowerCustomAction_Pull_execStartPower_Parms StartPower_Parms;

	this->ProcessEvent ( pFnStartPower, &StartPower_Parms, NULL );
};



class UClass* USFXPowerCustomAction_AdeptMeleePassive::pClassPointer = NULL;

class UClass* USFXPowerCustomAction_AdeptMeleePassive::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXPowerCustomAction_AdeptMeleePassive" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXPowerCustomAction_AdeptMeleePassive.PopulatePowerStatBarEvolves
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_AdeptMeleePassive::PopulatePowerStatBarEvolves ( )
{
	static UFunction* pFnPopulatePowerStatBarEvolves = NULL;

	if ( ! pFnPopulatePowerStatBarEvolves )
		pFnPopulatePowerStatBarEvolves = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_AdeptMeleePassive.PopulatePowerStatBarEvolves" );

	USFXPowerCustomAction_AdeptMeleePassive_execPopulatePowerStatBarEvolves_Parms PopulatePowerStatBarEvolves_Parms;

	this->ProcessEvent ( pFnPopulatePowerStatBarEvolves, &PopulatePowerStatBarEvolves_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_AdeptMeleePassive.ApplyBonus
// [0x00024002]
// Parameters infos:
// struct SFXName                 Parameter                      ( CPF_Parm )
// class USFXGameEffect*          Bonus                          ( CPF_Parm )
// unsigned long                  bRemove                        ( CPF_OptionalParm | CPF_Parm )

void USFXPowerCustomAction_AdeptMeleePassive::ApplyBonus ( struct SFXName Parameter, class USFXGameEffect* Bonus, unsigned long bRemove )
{
	static UFunction* pFnApplyBonus = NULL;

	if ( ! pFnApplyBonus )
		pFnApplyBonus = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_AdeptMeleePassive.ApplyBonus" );

	USFXPowerCustomAction_AdeptMeleePassive_execApplyBonus_Parms ApplyBonus_Parms;
	memcpy ( &ApplyBonus_Parms.Parameter, &Parameter, 0x8 );
	ApplyBonus_Parms.Bonus = Bonus;
	ApplyBonus_Parms.bRemove = bRemove;

	this->ProcessEvent ( pFnApplyBonus, &ApplyBonus_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_AdeptMeleePassive.RecalculateAllPowerData
// [0x00024002]
// Parameters infos:
// unsigned long                  bReset                         ( CPF_OptionalParm | CPF_Parm )

void USFXPowerCustomAction_AdeptMeleePassive::RecalculateAllPowerData ( unsigned long bReset )
{
	static UFunction* pFnRecalculateAllPowerData = NULL;

	if ( ! pFnRecalculateAllPowerData )
		pFnRecalculateAllPowerData = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_AdeptMeleePassive.RecalculateAllPowerData" );

	USFXPowerCustomAction_AdeptMeleePassive_execRecalculateAllPowerData_Parms RecalculateAllPowerData_Parms;
	RecalculateAllPowerData_Parms.bReset = bReset;

	this->ProcessEvent ( pFnRecalculateAllPowerData, &RecalculateAllPowerData_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_AdeptMeleePassive.EvolvePower
// [0x00020002]
// Parameters infos:
// unsigned char                  choice                         ( CPF_Parm )

void USFXPowerCustomAction_AdeptMeleePassive::EvolvePower ( unsigned char choice )
{
	static UFunction* pFnEvolvePower = NULL;

	if ( ! pFnEvolvePower )
		pFnEvolvePower = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_AdeptMeleePassive.EvolvePower" );

	USFXPowerCustomAction_AdeptMeleePassive_execEvolvePower_Parms EvolvePower_Parms;
	EvolvePower_Parms.choice = choice;

	this->ProcessEvent ( pFnEvolvePower, &EvolvePower_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_AdeptMeleePassive.OnHeavyMeleeKill
// [0x00020002]
// Parameters infos:
// class AActor*                  oImpacted                      ( CPF_Parm )

void USFXPowerCustomAction_AdeptMeleePassive::OnHeavyMeleeKill ( class AActor* oImpacted )
{
	static UFunction* pFnOnHeavyMeleeKill = NULL;

	if ( ! pFnOnHeavyMeleeKill )
		pFnOnHeavyMeleeKill = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_AdeptMeleePassive.OnHeavyMeleeKill" );

	USFXPowerCustomAction_AdeptMeleePassive_execOnHeavyMeleeKill_Parms OnHeavyMeleeKill_Parms;
	OnHeavyMeleeKill_Parms.oImpacted = oImpacted;

	this->ProcessEvent ( pFnOnHeavyMeleeKill, &OnHeavyMeleeKill_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_AdeptMeleePassive.ApplyGlobalBonus
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_AdeptMeleePassive::ApplyGlobalBonus ( )
{
	static UFunction* pFnApplyGlobalBonus = NULL;

	if ( ! pFnApplyGlobalBonus )
		pFnApplyGlobalBonus = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_AdeptMeleePassive.ApplyGlobalBonus" );

	USFXPowerCustomAction_AdeptMeleePassive_execApplyGlobalBonus_Parms ApplyGlobalBonus_Parms;

	this->ProcessEvent ( pFnApplyGlobalBonus, &ApplyGlobalBonus_Parms, NULL );
};



class UClass* USFXPowerCustomAction_Warp::pClassPointer = NULL;

class UClass* USFXPowerCustomAction_Warp::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXPowerCustomAction_Warp" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXPowerCustomAction_Warp.PopulatePowerStatBarEvolves
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_Warp::PopulatePowerStatBarEvolves ( )
{
	static UFunction* pFnPopulatePowerStatBarEvolves = NULL;

	if ( ! pFnPopulatePowerStatBarEvolves )
		pFnPopulatePowerStatBarEvolves = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Warp.PopulatePowerStatBarEvolves" );

	USFXPowerCustomAction_Warp_execPopulatePowerStatBarEvolves_Parms PopulatePowerStatBarEvolves_Parms;

	this->ProcessEvent ( pFnPopulatePowerStatBarEvolves, &PopulatePowerStatBarEvolves_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Warp.ApplyBonus
// [0x00024002]
// Parameters infos:
// struct SFXName                 Parameter                      ( CPF_Parm )
// class USFXGameEffect*          Bonus                          ( CPF_Parm )
// unsigned long                  bRemove                        ( CPF_OptionalParm | CPF_Parm )

void USFXPowerCustomAction_Warp::ApplyBonus ( struct SFXName Parameter, class USFXGameEffect* Bonus, unsigned long bRemove )
{
	static UFunction* pFnApplyBonus = NULL;

	if ( ! pFnApplyBonus )
		pFnApplyBonus = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Warp.ApplyBonus" );

	USFXPowerCustomAction_Warp_execApplyBonus_Parms ApplyBonus_Parms;
	memcpy ( &ApplyBonus_Parms.Parameter, &Parameter, 0x8 );
	ApplyBonus_Parms.Bonus = Bonus;
	ApplyBonus_Parms.bRemove = bRemove;

	this->ProcessEvent ( pFnApplyBonus, &ApplyBonus_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Warp.RecalculateAllPowerData
// [0x00024002]
// Parameters infos:
// unsigned long                  bReset                         ( CPF_OptionalParm | CPF_Parm )

void USFXPowerCustomAction_Warp::RecalculateAllPowerData ( unsigned long bReset )
{
	static UFunction* pFnRecalculateAllPowerData = NULL;

	if ( ! pFnRecalculateAllPowerData )
		pFnRecalculateAllPowerData = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Warp.RecalculateAllPowerData" );

	USFXPowerCustomAction_Warp_execRecalculateAllPowerData_Parms RecalculateAllPowerData_Parms;
	RecalculateAllPowerData_Parms.bReset = bReset;

	this->ProcessEvent ( pFnRecalculateAllPowerData, &RecalculateAllPowerData_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Warp.EvolvePower
// [0x00020002]
// Parameters infos:
// unsigned char                  choice                         ( CPF_Parm )

void USFXPowerCustomAction_Warp::EvolvePower ( unsigned char choice )
{
	static UFunction* pFnEvolvePower = NULL;

	if ( ! pFnEvolvePower )
		pFnEvolvePower = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Warp.EvolvePower" );

	USFXPowerCustomAction_Warp_execEvolvePower_Parms EvolvePower_Parms;
	EvolvePower_Parms.choice = choice;

	this->ProcessEvent ( pFnEvolvePower, &EvolvePower_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Warp.ShouldUsePower
// [0x00420002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Target                         ( CPF_Parm )
// FString                        sOptionalInfo                  ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool USFXPowerCustomAction_Warp::ShouldUsePower ( class AActor* Target, FString* sOptionalInfo )
{
	static UFunction* pFnShouldUsePower = NULL;

	if ( ! pFnShouldUsePower )
		pFnShouldUsePower = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Warp.ShouldUsePower" );

	USFXPowerCustomAction_Warp_execShouldUsePower_Parms ShouldUsePower_Parms;
	ShouldUsePower_Parms.Target = Target;

	if ( sOptionalInfo )
		memcpy ( &ShouldUsePower_Parms.sOptionalInfo, sOptionalInfo, 0x10 );

	this->ProcessEvent ( pFnShouldUsePower, &ShouldUsePower_Parms, NULL );

	if ( sOptionalInfo )
		memcpy ( sOptionalInfo, &ShouldUsePower_Parms.sOptionalInfo, 0x10 );

	return ShouldUsePower_Parms.ReturnValue;
};

// Function SFXGameContent.SFXPowerCustomAction_Warp.PlayImpactEffects
// [0x00020002]
// Parameters infos:
// class AActor*                  oImpacted                      ( CPF_Parm )
// struct FVector                 ImpactLocation                 ( CPF_Parm )
// struct FVector                 ImpactNormal                   ( CPF_Parm )

void USFXPowerCustomAction_Warp::PlayImpactEffects ( class AActor* oImpacted, struct FVector const& ImpactLocation, struct FVector const& ImpactNormal )
{
	static UFunction* pFnPlayImpactEffects = NULL;

	if ( ! pFnPlayImpactEffects )
		pFnPlayImpactEffects = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Warp.PlayImpactEffects" );

	USFXPowerCustomAction_Warp_execPlayImpactEffects_Parms PlayImpactEffects_Parms;
	PlayImpactEffects_Parms.oImpacted = oImpacted;
	memcpy ( &PlayImpactEffects_Parms.ImpactLocation, &ImpactLocation, 0xC );
	memcpy ( &PlayImpactEffects_Parms.ImpactNormal, &ImpactNormal, 0xC );

	this->ProcessEvent ( pFnPlayImpactEffects, &PlayImpactEffects_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Warp.OnImpact
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  Resistance                     ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

bool USFXPowerCustomAction_Warp::OnImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector const& HitLocation, struct FVector const& HitNormal )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Warp.OnImpact" );

	USFXPowerCustomAction_Warp_execOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.Resistance = Resistance;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;
	memcpy ( &OnImpact_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &OnImpact_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent.SFXPowerCustomAction_Warp.GetTotalDamage
// [0x00420002]
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm | CPF_OutParm )

float USFXPowerCustomAction_Warp::GetTotalDamage ( class AActor* oImpacted, class UClass** DamageType )
{
	static UFunction* pFnGetTotalDamage = NULL;

	if ( ! pFnGetTotalDamage )
		pFnGetTotalDamage = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Warp.GetTotalDamage" );

	USFXPowerCustomAction_Warp_execGetTotalDamage_Parms GetTotalDamage_Parms;
	GetTotalDamage_Parms.oImpacted = oImpacted;

	if ( DamageType )
		GetTotalDamage_Parms.DamageType = *DamageType;

	this->ProcessEvent ( pFnGetTotalDamage, &GetTotalDamage_Parms, NULL );

	if ( DamageType )
		*DamageType = GetTotalDamage_Parms.DamageType;

	return GetTotalDamage_Parms.ReturnValue;
};

// Function SFXGameContent.SFXPowerCustomAction_Warp.GetImpactDamage
// [0x00420002]
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm | CPF_OutParm )

float USFXPowerCustomAction_Warp::GetImpactDamage ( class AActor* oImpacted, class UClass** DamageType )
{
	static UFunction* pFnGetImpactDamage = NULL;

	if ( ! pFnGetImpactDamage )
		pFnGetImpactDamage = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Warp.GetImpactDamage" );

	USFXPowerCustomAction_Warp_execGetImpactDamage_Parms GetImpactDamage_Parms;
	GetImpactDamage_Parms.oImpacted = oImpacted;

	if ( DamageType )
		GetImpactDamage_Parms.DamageType = *DamageType;

	this->ProcessEvent ( pFnGetImpactDamage, &GetImpactDamage_Parms, NULL );

	if ( DamageType )
		*DamageType = GetImpactDamage_Parms.DamageType;

	return GetImpactDamage_Parms.ReturnValue;
};



class UClass* USFXPowerCustomAction_Singularity::pClassPointer = NULL;

class UClass* USFXPowerCustomAction_Singularity::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXPowerCustomAction_Singularity" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXPowerCustomAction_Singularity.CombatEnded
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_Singularity::CombatEnded ( )
{
	static UFunction* pFnCombatEnded = NULL;

	if ( ! pFnCombatEnded )
		pFnCombatEnded = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Singularity.CombatEnded" );

	USFXPowerCustomAction_Singularity_execCombatEnded_Parms CombatEnded_Parms;

	this->ProcessEvent ( pFnCombatEnded, &CombatEnded_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Singularity.PopulatePowerStatBarEvolves
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_Singularity::PopulatePowerStatBarEvolves ( )
{
	static UFunction* pFnPopulatePowerStatBarEvolves = NULL;

	if ( ! pFnPopulatePowerStatBarEvolves )
		pFnPopulatePowerStatBarEvolves = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Singularity.PopulatePowerStatBarEvolves" );

	USFXPowerCustomAction_Singularity_execPopulatePowerStatBarEvolves_Parms PopulatePowerStatBarEvolves_Parms;

	this->ProcessEvent ( pFnPopulatePowerStatBarEvolves, &PopulatePowerStatBarEvolves_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Singularity.OnOwnerDestroyed
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_Singularity::OnOwnerDestroyed ( )
{
	static UFunction* pFnOnOwnerDestroyed = NULL;

	if ( ! pFnOnOwnerDestroyed )
		pFnOnOwnerDestroyed = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Singularity.OnOwnerDestroyed" );

	USFXPowerCustomAction_Singularity_execOnOwnerDestroyed_Parms OnOwnerDestroyed_Parms;

	this->ProcessEvent ( pFnOnOwnerDestroyed, &OnOwnerDestroyed_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Singularity.DoJoinInProgress
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_Singularity::DoJoinInProgress ( )
{
	static UFunction* pFnDoJoinInProgress = NULL;

	if ( ! pFnDoJoinInProgress )
		pFnDoJoinInProgress = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Singularity.DoJoinInProgress" );

	USFXPowerCustomAction_Singularity_execDoJoinInProgress_Parms DoJoinInProgress_Parms;

	this->ProcessEvent ( pFnDoJoinInProgress, &DoJoinInProgress_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Singularity.ClientDoPowerSubsequentImpact
// [0x00024002]
// Parameters infos:
// class AActor*                  oActor                         ( CPF_Parm )
// int                            CustomActionReactionType       ( CPF_OptionalParm | CPF_Parm )
// float                          Duration                       ( CPF_OptionalParm | CPF_Parm )
// int                            ImpactCount                    ( CPF_OptionalParm | CPF_Parm )
// float                          Delay                          ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  DoCallback                     ( CPF_OptionalParm | CPF_Parm )

void USFXPowerCustomAction_Singularity::ClientDoPowerSubsequentImpact ( class AActor* oActor, int CustomActionReactionType, float Duration, int ImpactCount, float Delay, unsigned long DoCallback )
{
	static UFunction* pFnClientDoPowerSubsequentImpact = NULL;

	if ( ! pFnClientDoPowerSubsequentImpact )
		pFnClientDoPowerSubsequentImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Singularity.ClientDoPowerSubsequentImpact" );

	USFXPowerCustomAction_Singularity_execClientDoPowerSubsequentImpact_Parms ClientDoPowerSubsequentImpact_Parms;
	ClientDoPowerSubsequentImpact_Parms.oActor = oActor;
	ClientDoPowerSubsequentImpact_Parms.CustomActionReactionType = CustomActionReactionType;
	ClientDoPowerSubsequentImpact_Parms.Duration = Duration;
	ClientDoPowerSubsequentImpact_Parms.ImpactCount = ImpactCount;
	ClientDoPowerSubsequentImpact_Parms.Delay = Delay;
	ClientDoPowerSubsequentImpact_Parms.DoCallback = DoCallback;

	this->ProcessEvent ( pFnClientDoPowerSubsequentImpact, &ClientDoPowerSubsequentImpact_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Singularity.ApplyBonus
// [0x00024002]
// Parameters infos:
// struct SFXName                 Parameter                      ( CPF_Parm )
// class USFXGameEffect*          Bonus                          ( CPF_Parm )
// unsigned long                  bRemove                        ( CPF_OptionalParm | CPF_Parm )

void USFXPowerCustomAction_Singularity::ApplyBonus ( struct SFXName Parameter, class USFXGameEffect* Bonus, unsigned long bRemove )
{
	static UFunction* pFnApplyBonus = NULL;

	if ( ! pFnApplyBonus )
		pFnApplyBonus = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Singularity.ApplyBonus" );

	USFXPowerCustomAction_Singularity_execApplyBonus_Parms ApplyBonus_Parms;
	memcpy ( &ApplyBonus_Parms.Parameter, &Parameter, 0x8 );
	ApplyBonus_Parms.Bonus = Bonus;
	ApplyBonus_Parms.bRemove = bRemove;

	this->ProcessEvent ( pFnApplyBonus, &ApplyBonus_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Singularity.RecalculateAllPowerData
// [0x00024002]
// Parameters infos:
// unsigned long                  bReset                         ( CPF_OptionalParm | CPF_Parm )

void USFXPowerCustomAction_Singularity::RecalculateAllPowerData ( unsigned long bReset )
{
	static UFunction* pFnRecalculateAllPowerData = NULL;

	if ( ! pFnRecalculateAllPowerData )
		pFnRecalculateAllPowerData = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Singularity.RecalculateAllPowerData" );

	USFXPowerCustomAction_Singularity_execRecalculateAllPowerData_Parms RecalculateAllPowerData_Parms;
	RecalculateAllPowerData_Parms.bReset = bReset;

	this->ProcessEvent ( pFnRecalculateAllPowerData, &RecalculateAllPowerData_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Singularity.EvolvePower
// [0x00020002]
// Parameters infos:
// unsigned char                  choice                         ( CPF_Parm )

void USFXPowerCustomAction_Singularity::EvolvePower ( unsigned char choice )
{
	static UFunction* pFnEvolvePower = NULL;

	if ( ! pFnEvolvePower )
		pFnEvolvePower = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Singularity.EvolvePower" );

	USFXPowerCustomAction_Singularity_execEvolvePower_Parms EvolvePower_Parms;
	EvolvePower_Parms.choice = choice;

	this->ProcessEvent ( pFnEvolvePower, &EvolvePower_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Singularity.ShouldUsePower
// [0x00420002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Target                         ( CPF_Parm )
// FString                        sOptionalInfo                  ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool USFXPowerCustomAction_Singularity::ShouldUsePower ( class AActor* Target, FString* sOptionalInfo )
{
	static UFunction* pFnShouldUsePower = NULL;

	if ( ! pFnShouldUsePower )
		pFnShouldUsePower = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Singularity.ShouldUsePower" );

	USFXPowerCustomAction_Singularity_execShouldUsePower_Parms ShouldUsePower_Parms;
	ShouldUsePower_Parms.Target = Target;

	if ( sOptionalInfo )
		memcpy ( &ShouldUsePower_Parms.sOptionalInfo, sOptionalInfo, 0x10 );

	this->ProcessEvent ( pFnShouldUsePower, &ShouldUsePower_Parms, NULL );

	if ( sOptionalInfo )
		memcpy ( sOptionalInfo, &ShouldUsePower_Parms.sOptionalInfo, 0x10 );

	return ShouldUsePower_Parms.ReturnValue;
};

// Function SFXGameContent.SFXPowerCustomAction_Singularity.OnPowerRankIncreased
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_Singularity::OnPowerRankIncreased ( )
{
	static UFunction* pFnOnPowerRankIncreased = NULL;

	if ( ! pFnOnPowerRankIncreased )
		pFnOnPowerRankIncreased = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Singularity.OnPowerRankIncreased" );

	USFXPowerCustomAction_Singularity_execOnPowerRankIncreased_Parms OnPowerRankIncreased_Parms;

	this->ProcessEvent ( pFnOnPowerRankIncreased, &OnPowerRankIncreased_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Singularity.OnRagdollPhysicsImpact
// [0x00020002]
// Parameters infos:
// class APawn*                   oPawn                          ( CPF_Parm )
// class AActor*                  oImpactActor                   ( CPF_Parm )
// struct FVector                 vImpactDir                     ( CPF_Parm )

void USFXPowerCustomAction_Singularity::OnRagdollPhysicsImpact ( class APawn* oPawn, class AActor* oImpactActor, struct FVector const& vImpactDir )
{
	static UFunction* pFnOnRagdollPhysicsImpact = NULL;

	if ( ! pFnOnRagdollPhysicsImpact )
		pFnOnRagdollPhysicsImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Singularity.OnRagdollPhysicsImpact" );

	USFXPowerCustomAction_Singularity_execOnRagdollPhysicsImpact_Parms OnRagdollPhysicsImpact_Parms;
	OnRagdollPhysicsImpact_Parms.oPawn = oPawn;
	OnRagdollPhysicsImpact_Parms.oImpactActor = oImpactActor;
	memcpy ( &OnRagdollPhysicsImpact_Parms.vImpactDir, &vImpactDir, 0xC );

	this->ProcessEvent ( pFnOnRagdollPhysicsImpact, &OnRagdollPhysicsImpact_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Singularity.SpawnSingularityVFX
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXPowerCustomAction_Singularity::SpawnSingularityVFX ( )
{
	static UFunction* pFnSpawnSingularityVFX = NULL;

	if ( ! pFnSpawnSingularityVFX )
		pFnSpawnSingularityVFX = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Singularity.SpawnSingularityVFX" );

	USFXPowerCustomAction_Singularity_execSpawnSingularityVFX_Parms SpawnSingularityVFX_Parms;

	this->ProcessEvent ( pFnSpawnSingularityVFX, &SpawnSingularityVFX_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Singularity.SpawnSingularity
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_Singularity::SpawnSingularity ( )
{
	static UFunction* pFnSpawnSingularity = NULL;

	if ( ! pFnSpawnSingularity )
		pFnSpawnSingularity = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Singularity.SpawnSingularity" );

	USFXPowerCustomAction_Singularity_execSpawnSingularity_Parms SpawnSingularity_Parms;

	this->ProcessEvent ( pFnSpawnSingularity, &SpawnSingularity_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Singularity.OnExplosionImpact
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  Resistance                     ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

bool USFXPowerCustomAction_Singularity::OnExplosionImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector const& HitLocation, struct FVector const& HitNormal )
{
	static UFunction* pFnOnExplosionImpact = NULL;

	if ( ! pFnOnExplosionImpact )
		pFnOnExplosionImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Singularity.OnExplosionImpact" );

	USFXPowerCustomAction_Singularity_execOnExplosionImpact_Parms OnExplosionImpact_Parms;
	OnExplosionImpact_Parms.Resistance = Resistance;
	OnExplosionImpact_Parms.oImpacted = oImpacted;
	OnExplosionImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;
	memcpy ( &OnExplosionImpact_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &OnExplosionImpact_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnOnExplosionImpact, &OnExplosionImpact_Parms, NULL );

	return OnExplosionImpact_Parms.ReturnValue;
};

// Function SFXGameContent.SFXPowerCustomAction_Singularity.SingularityExplosion
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_Singularity::SingularityExplosion ( )
{
	static UFunction* pFnSingularityExplosion = NULL;

	if ( ! pFnSingularityExplosion )
		pFnSingularityExplosion = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Singularity.SingularityExplosion" );

	USFXPowerCustomAction_Singularity_execSingularityExplosion_Parms SingularityExplosion_Parms;

	this->ProcessEvent ( pFnSingularityExplosion, &SingularityExplosion_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Singularity.Internal_TurnOffSingularity
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_Singularity::Internal_TurnOffSingularity ( )
{
	static UFunction* pFnInternal_TurnOffSingularity = NULL;

	if ( ! pFnInternal_TurnOffSingularity )
		pFnInternal_TurnOffSingularity = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Singularity.Internal_TurnOffSingularity" );

	USFXPowerCustomAction_Singularity_execInternal_TurnOffSingularity_Parms Internal_TurnOffSingularity_Parms;

	this->ProcessEvent ( pFnInternal_TurnOffSingularity, &Internal_TurnOffSingularity_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Singularity.TurnOffSingularity
// [0x00024002]
// Parameters infos:
// unsigned long                  bDoReplication                 ( CPF_OptionalParm | CPF_Parm )

void USFXPowerCustomAction_Singularity::TurnOffSingularity ( unsigned long bDoReplication )
{
	static UFunction* pFnTurnOffSingularity = NULL;

	if ( ! pFnTurnOffSingularity )
		pFnTurnOffSingularity = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Singularity.TurnOffSingularity" );

	USFXPowerCustomAction_Singularity_execTurnOffSingularity_Parms TurnOffSingularity_Parms;
	TurnOffSingularity_Parms.bDoReplication = bDoReplication;

	this->ProcessEvent ( pFnTurnOffSingularity, &TurnOffSingularity_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Singularity.CanPutInSingularity
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oActor                         ( CPF_Parm )

bool USFXPowerCustomAction_Singularity::CanPutInSingularity ( class AActor* oActor )
{
	static UFunction* pFnCanPutInSingularity = NULL;

	if ( ! pFnCanPutInSingularity )
		pFnCanPutInSingularity = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Singularity.CanPutInSingularity" );

	USFXPowerCustomAction_Singularity_execCanPutInSingularity_Parms CanPutInSingularity_Parms;
	CanPutInSingularity_Parms.oActor = oActor;

	this->ProcessEvent ( pFnCanPutInSingularity, &CanPutInSingularity_Parms, NULL );

	return CanPutInSingularity_Parms.ReturnValue;
};

// Function SFXGameContent.SFXPowerCustomAction_Singularity.OnGameEffectEnded
// [0x00020002]
// Parameters infos:
// class AActor*                  oActor                         ( CPF_Parm )

void USFXPowerCustomAction_Singularity::OnGameEffectEnded ( class AActor* oActor )
{
	static UFunction* pFnOnGameEffectEnded = NULL;

	if ( ! pFnOnGameEffectEnded )
		pFnOnGameEffectEnded = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Singularity.OnGameEffectEnded" );

	USFXPowerCustomAction_Singularity_execOnGameEffectEnded_Parms OnGameEffectEnded_Parms;
	OnGameEffectEnded_Parms.oActor = oActor;

	this->ProcessEvent ( pFnOnGameEffectEnded, &OnGameEffectEnded_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Singularity.ImpactNewTarget
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oImpacted                      ( CPF_Parm )

bool USFXPowerCustomAction_Singularity::ImpactNewTarget ( class AActor* oImpacted )
{
	static UFunction* pFnImpactNewTarget = NULL;

	if ( ! pFnImpactNewTarget )
		pFnImpactNewTarget = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Singularity.ImpactNewTarget" );

	USFXPowerCustomAction_Singularity_execImpactNewTarget_Parms ImpactNewTarget_Parms;
	ImpactNewTarget_Parms.oImpacted = oImpacted;

	this->ProcessEvent ( pFnImpactNewTarget, &ImpactNewTarget_Parms, NULL );

	return ImpactNewTarget_Parms.ReturnValue;
};

// Function SFXGameContent.SFXPowerCustomAction_Singularity.ApplyBioticComboEffect
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oTarget                        ( CPF_Parm )

bool USFXPowerCustomAction_Singularity::ApplyBioticComboEffect ( class AActor* oTarget )
{
	static UFunction* pFnApplyBioticComboEffect = NULL;

	if ( ! pFnApplyBioticComboEffect )
		pFnApplyBioticComboEffect = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Singularity.ApplyBioticComboEffect" );

	USFXPowerCustomAction_Singularity_execApplyBioticComboEffect_Parms ApplyBioticComboEffect_Parms;
	ApplyBioticComboEffect_Parms.oTarget = oTarget;

	this->ProcessEvent ( pFnApplyBioticComboEffect, &ApplyBioticComboEffect_Parms, NULL );

	return ApplyBioticComboEffect_Parms.ReturnValue;
};

// Function SFXGameContent.SFXPowerCustomAction_Singularity.TickCustomAction
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// float                          fDeltaTime                     ( CPF_Parm )

void USFXPowerCustomAction_Singularity::eventTickCustomAction ( float fDeltaTime )
{
	static UFunction* pFnTickCustomAction = NULL;

	if ( ! pFnTickCustomAction )
		pFnTickCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Singularity.TickCustomAction" );

	USFXPowerCustomAction_Singularity_eventTickCustomAction_Parms TickCustomAction_Parms;
	TickCustomAction_Parms.fDeltaTime = fDeltaTime;

	this->ProcessEvent ( pFnTickCustomAction, &TickCustomAction_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Singularity.ClientDoCustomActionImpact
// [0x00024002]
// Parameters infos:
// class AActor*                  oActor                         ( CPF_Parm )
// int                            ImpactCount                    ( CPF_Parm )
// unsigned long                  bFirstTarget                   ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_OptionalParm | CPF_Parm )
// int                            CustomActionReactionType       ( CPF_OptionalParm | CPF_Parm )

void USFXPowerCustomAction_Singularity::ClientDoCustomActionImpact ( class AActor* oActor, int ImpactCount, unsigned long bFirstTarget, struct FVector const& HitLocation, struct FVector const& HitNormal, int CustomActionReactionType )
{
	static UFunction* pFnClientDoCustomActionImpact = NULL;

	if ( ! pFnClientDoCustomActionImpact )
		pFnClientDoCustomActionImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Singularity.ClientDoCustomActionImpact" );

	USFXPowerCustomAction_Singularity_execClientDoCustomActionImpact_Parms ClientDoCustomActionImpact_Parms;
	ClientDoCustomActionImpact_Parms.oActor = oActor;
	ClientDoCustomActionImpact_Parms.ImpactCount = ImpactCount;
	ClientDoCustomActionImpact_Parms.bFirstTarget = bFirstTarget;
	memcpy ( &ClientDoCustomActionImpact_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ClientDoCustomActionImpact_Parms.HitNormal, &HitNormal, 0xC );
	ClientDoCustomActionImpact_Parms.CustomActionReactionType = CustomActionReactionType;

	this->ProcessEvent ( pFnClientDoCustomActionImpact, &ClientDoCustomActionImpact_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Singularity.OnPowerDetonated
// [0x00024002]
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )
// class ASFXProjectile_PowerCustomAction* oProjectile                    ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  HitActor                       ( CPF_OptionalParm | CPF_Parm )

void USFXPowerCustomAction_Singularity::OnPowerDetonated ( struct FVector const& HitLocation, struct FVector const& HitNormal, class ASFXProjectile_PowerCustomAction* oProjectile, class AActor* HitActor )
{
	static UFunction* pFnOnPowerDetonated = NULL;

	if ( ! pFnOnPowerDetonated )
		pFnOnPowerDetonated = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Singularity.OnPowerDetonated" );

	USFXPowerCustomAction_Singularity_execOnPowerDetonated_Parms OnPowerDetonated_Parms;
	memcpy ( &OnPowerDetonated_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &OnPowerDetonated_Parms.HitNormal, &HitNormal, 0xC );
	OnPowerDetonated_Parms.oProjectile = oProjectile;
	OnPowerDetonated_Parms.HitActor = HitActor;

	this->ProcessEvent ( pFnOnPowerDetonated, &OnPowerDetonated_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Singularity.ReleasePower
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_Singularity::ReleasePower ( )
{
	static UFunction* pFnReleasePower = NULL;

	if ( ! pFnReleasePower )
		pFnReleasePower = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Singularity.ReleasePower" );

	USFXPowerCustomAction_Singularity_execReleasePower_Parms ReleasePower_Parms;

	this->ProcessEvent ( pFnReleasePower, &ReleasePower_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Singularity.GetImpactForce
// [0x00020002]
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oImpacted                      ( CPF_Parm )

float USFXPowerCustomAction_Singularity::GetImpactForce ( class AActor* oImpacted )
{
	static UFunction* pFnGetImpactForce = NULL;

	if ( ! pFnGetImpactForce )
		pFnGetImpactForce = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Singularity.GetImpactForce" );

	USFXPowerCustomAction_Singularity_execGetImpactForce_Parms GetImpactForce_Parms;
	GetImpactForce_Parms.oImpacted = oImpacted;

	this->ProcessEvent ( pFnGetImpactForce, &GetImpactForce_Parms, NULL );

	return GetImpactForce_Parms.ReturnValue;
};

// Function SFXGameContent.SFXPowerCustomAction_Singularity.StartCustomAction
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_Singularity::StartCustomAction ( )
{
	static UFunction* pFnStartCustomAction = NULL;

	if ( ! pFnStartCustomAction )
		pFnStartCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Singularity.StartCustomAction" );

	USFXPowerCustomAction_Singularity_execStartCustomAction_Parms StartCustomAction_Parms;

	this->ProcessEvent ( pFnStartCustomAction, &StartCustomAction_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Singularity.OnPowersLoaded
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_Singularity::OnPowersLoaded ( )
{
	static UFunction* pFnOnPowersLoaded = NULL;

	if ( ! pFnOnPowersLoaded )
		pFnOnPowersLoaded = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Singularity.OnPowersLoaded" );

	USFXPowerCustomAction_Singularity_execOnPowersLoaded_Parms OnPowersLoaded_Parms;

	this->ProcessEvent ( pFnOnPowersLoaded, &OnPowersLoaded_Parms, NULL );
};



class UClass* USFXPowerCustomAction_AdeptPassive::pClassPointer = NULL;

class UClass* USFXPowerCustomAction_AdeptPassive::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXPowerCustomAction_AdeptPassive" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXPowerCustomAction_AdeptPassive.PopulatePowerStatBarEvolves
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_AdeptPassive::PopulatePowerStatBarEvolves ( )
{
	static UFunction* pFnPopulatePowerStatBarEvolves = NULL;

	if ( ! pFnPopulatePowerStatBarEvolves )
		pFnPopulatePowerStatBarEvolves = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_AdeptPassive.PopulatePowerStatBarEvolves" );

	USFXPowerCustomAction_AdeptPassive_execPopulatePowerStatBarEvolves_Parms PopulatePowerStatBarEvolves_Parms;

	this->ProcessEvent ( pFnPopulatePowerStatBarEvolves, &PopulatePowerStatBarEvolves_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_AdeptPassive.RecalculateAllPowerData
// [0x00024002]
// Parameters infos:
// unsigned long                  bReset                         ( CPF_OptionalParm | CPF_Parm )

void USFXPowerCustomAction_AdeptPassive::RecalculateAllPowerData ( unsigned long bReset )
{
	static UFunction* pFnRecalculateAllPowerData = NULL;

	if ( ! pFnRecalculateAllPowerData )
		pFnRecalculateAllPowerData = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_AdeptPassive.RecalculateAllPowerData" );

	USFXPowerCustomAction_AdeptPassive_execRecalculateAllPowerData_Parms RecalculateAllPowerData_Parms;
	RecalculateAllPowerData_Parms.bReset = bReset;

	this->ProcessEvent ( pFnRecalculateAllPowerData, &RecalculateAllPowerData_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_AdeptPassive.EvolvePower
// [0x00020002]
// Parameters infos:
// unsigned char                  choice                         ( CPF_Parm )

void USFXPowerCustomAction_AdeptPassive::EvolvePower ( unsigned char choice )
{
	static UFunction* pFnEvolvePower = NULL;

	if ( ! pFnEvolvePower )
		pFnEvolvePower = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_AdeptPassive.EvolvePower" );

	USFXPowerCustomAction_AdeptPassive_execEvolvePower_Parms EvolvePower_Parms;
	EvolvePower_Parms.choice = choice;

	this->ProcessEvent ( pFnEvolvePower, &EvolvePower_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_AdeptPassive.OnBioticCombo
// [0x00020002]
// Parameters infos:
// class USFXPowerCustomAction*   oPower                         ( CPF_Parm )
// class ABioPawn*                oTarget                        ( CPF_Parm )

void USFXPowerCustomAction_AdeptPassive::OnBioticCombo ( class USFXPowerCustomAction* oPower, class ABioPawn* oTarget )
{
	static UFunction* pFnOnBioticCombo = NULL;

	if ( ! pFnOnBioticCombo )
		pFnOnBioticCombo = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_AdeptPassive.OnBioticCombo" );

	USFXPowerCustomAction_AdeptPassive_execOnBioticCombo_Parms OnBioticCombo_Parms;
	OnBioticCombo_Parms.oPower = oPower;
	OnBioticCombo_Parms.oTarget = oTarget;

	this->ProcessEvent ( pFnOnBioticCombo, &OnBioticCombo_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_AdeptPassive.ResetPower
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_AdeptPassive::ResetPower ( )
{
	static UFunction* pFnResetPower = NULL;

	if ( ! pFnResetPower )
		pFnResetPower = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_AdeptPassive.ResetPower" );

	USFXPowerCustomAction_AdeptPassive_execResetPower_Parms ResetPower_Parms;

	this->ProcessEvent ( pFnResetPower, &ResetPower_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_AdeptPassive.ApplyGlobalBonus
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_AdeptPassive::ApplyGlobalBonus ( )
{
	static UFunction* pFnApplyGlobalBonus = NULL;

	if ( ! pFnApplyGlobalBonus )
		pFnApplyGlobalBonus = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_AdeptPassive.ApplyGlobalBonus" );

	USFXPowerCustomAction_AdeptPassive_execApplyGlobalBonus_Parms ApplyGlobalBonus_Parms;

	this->ProcessEvent ( pFnApplyGlobalBonus, &ApplyGlobalBonus_Parms, NULL );
};



class UClass* USFXPowerCustomAction_Unity::pClassPointer = NULL;

class UClass* USFXPowerCustomAction_Unity::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXPowerCustomAction_Unity" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXPowerCustomAction_Unity.RecalculateAllPowerData
// [0x00024002]
// Parameters infos:
// unsigned long                  bReset                         ( CPF_OptionalParm | CPF_Parm )

void USFXPowerCustomAction_Unity::RecalculateAllPowerData ( unsigned long bReset )
{
	static UFunction* pFnRecalculateAllPowerData = NULL;

	if ( ! pFnRecalculateAllPowerData )
		pFnRecalculateAllPowerData = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Unity.RecalculateAllPowerData" );

	USFXPowerCustomAction_Unity_execRecalculateAllPowerData_Parms RecalculateAllPowerData_Parms;
	RecalculateAllPowerData_Parms.bReset = bReset;

	this->ProcessEvent ( pFnRecalculateAllPowerData, &RecalculateAllPowerData_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Unity.GetHUDWheelIconInfo
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// FString                        ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

FString USFXPowerCustomAction_Unity::eventGetHUDWheelIconInfo ( )
{
	static UFunction* pFnGetHUDWheelIconInfo = NULL;

	if ( ! pFnGetHUDWheelIconInfo )
		pFnGetHUDWheelIconInfo = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Unity.GetHUDWheelIconInfo" );

	USFXPowerCustomAction_Unity_eventGetHUDWheelIconInfo_Parms GetHUDWheelIconInfo_Parms;

	this->ProcessEvent ( pFnGetHUDWheelIconInfo, &GetHUDWheelIconInfo_Parms, NULL );

	return GetHUDWheelIconInfo_Parms.ReturnValue;
};

// Function SFXGameContent.SFXPowerCustomAction_Unity.CountMediGel
// [0x00020002]
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioBaseSquad*           oPlayerSquad                   ( CPF_Parm )

int USFXPowerCustomAction_Unity::CountMediGel ( class ABioBaseSquad* oPlayerSquad )
{
	static UFunction* pFnCountMediGel = NULL;

	if ( ! pFnCountMediGel )
		pFnCountMediGel = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Unity.CountMediGel" );

	USFXPowerCustomAction_Unity_execCountMediGel_Parms CountMediGel_Parms;
	CountMediGel_Parms.oPlayerSquad = oPlayerSquad;

	this->ProcessEvent ( pFnCountMediGel, &CountMediGel_Parms, NULL );

	return CountMediGel_Parms.ReturnValue;
};

// Function SFXGameContent.SFXPowerCustomAction_Unity.ShouldUsePower
// [0x00420802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Target                         ( CPF_Parm )
// FString                        sOptionalInfo                  ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool USFXPowerCustomAction_Unity::eventShouldUsePower ( class AActor* Target, FString* sOptionalInfo )
{
	static UFunction* pFnShouldUsePower = NULL;

	if ( ! pFnShouldUsePower )
		pFnShouldUsePower = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Unity.ShouldUsePower" );

	USFXPowerCustomAction_Unity_eventShouldUsePower_Parms ShouldUsePower_Parms;
	ShouldUsePower_Parms.Target = Target;

	if ( sOptionalInfo )
		memcpy ( &ShouldUsePower_Parms.sOptionalInfo, sOptionalInfo, 0x10 );

	this->ProcessEvent ( pFnShouldUsePower, &ShouldUsePower_Parms, NULL );

	if ( sOptionalInfo )
		memcpy ( sOptionalInfo, &ShouldUsePower_Parms.sOptionalInfo, 0x10 );

	return ShouldUsePower_Parms.ReturnValue;
};

// Function SFXGameContent.SFXPowerCustomAction_Unity.OnImpact
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  Resistance                     ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

bool USFXPowerCustomAction_Unity::OnImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector const& HitLocation, struct FVector const& HitNormal )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Unity.OnImpact" );

	USFXPowerCustomAction_Unity_execOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.Resistance = Resistance;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;
	memcpy ( &OnImpact_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &OnImpact_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent.SFXPowerCustomAction_Unity.StartPower
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_Unity::StartPower ( )
{
	static UFunction* pFnStartPower = NULL;

	if ( ! pFnStartPower )
		pFnStartPower = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Unity.StartPower" );

	USFXPowerCustomAction_Unity_execStartPower_Parms StartPower_Parms;

	this->ProcessEvent ( pFnStartPower, &StartPower_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Unity.CanUsePower
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oTarget                        ( CPF_Parm )

bool USFXPowerCustomAction_Unity::CanUsePower ( class AActor* oTarget )
{
	static UFunction* pFnCanUsePower = NULL;

	if ( ! pFnCanUsePower )
		pFnCanUsePower = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Unity.CanUsePower" );

	USFXPowerCustomAction_Unity_execCanUsePower_Parms CanUsePower_Parms;
	CanUsePower_Parms.oTarget = oTarget;

	this->ProcessEvent ( pFnCanUsePower, &CanUsePower_Parms, NULL );

	return CanUsePower_Parms.ReturnValue;
};



class UClass* USFXCustomAction_AdeptPunch::pClassPointer = NULL;

class UClass* USFXCustomAction_AdeptPunch::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_AdeptPunch" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXCustomAction_AdeptPunch.StopMove
// [0x00020002]
// Parameters infos:

void USFXCustomAction_AdeptPunch::StopMove ( )
{
	static UFunction* pFnStopMove = NULL;

	if ( ! pFnStopMove )
		pFnStopMove = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_AdeptPunch.StopMove" );

	USFXCustomAction_AdeptPunch_execStopMove_Parms StopMove_Parms;

	this->ProcessEvent ( pFnStopMove, &StopMove_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_AdeptPunch.OnActorImpacted
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  Resistance                     ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

bool USFXCustomAction_AdeptPunch::OnActorImpacted ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector const& HitLocation, struct FVector const& HitNormal )
{
	static UFunction* pFnOnActorImpacted = NULL;

	if ( ! pFnOnActorImpacted )
		pFnOnActorImpacted = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_AdeptPunch.OnActorImpacted" );

	USFXCustomAction_AdeptPunch_execOnActorImpacted_Parms OnActorImpacted_Parms;
	OnActorImpacted_Parms.Resistance = Resistance;
	OnActorImpacted_Parms.oImpacted = oImpacted;
	OnActorImpacted_Parms.nPreviouslyImpacted = nPreviouslyImpacted;
	memcpy ( &OnActorImpacted_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &OnActorImpacted_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnOnActorImpacted, &OnActorImpacted_Parms, NULL );

	return OnActorImpacted_Parms.ReturnValue;
};



class UClass* USFXCustomAction_AdeptSyncCoverGrab::pClassPointer = NULL;

class UClass* USFXCustomAction_AdeptSyncCoverGrab::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_AdeptSyncCoverGrab" );

		return pClassPointer;
	};



class UClass* USFXDamageType_AdeptHeavyMelee::pClassPointer = NULL;

class UClass* USFXDamageType_AdeptHeavyMelee::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXDamageType_AdeptHeavyMelee" );

		return pClassPointer;
	};



class UClass* USFXSeqEvt_PerformedMeleeOverCover::pClassPointer = NULL;

class UClass* USFXSeqEvt_PerformedMeleeOverCover::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXSeqEvt_PerformedMeleeOverCover" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_Meleed::pClassPointer = NULL;

class UClass* USFXCustomAction_Meleed::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_Meleed" );

		return pClassPointer;
	};



class UClass* USFXGameEffect_DisableAI::pClassPointer = NULL;

class UClass* USFXGameEffect_DisableAI::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXGameEffect_DisableAI" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXGameEffect_DisableAI.OnRemoved
// [0x00020002]
// Parameters infos:

void USFXGameEffect_DisableAI::OnRemoved ( )
{
	static UFunction* pFnOnRemoved = NULL;

	if ( ! pFnOnRemoved )
		pFnOnRemoved = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_DisableAI.OnRemoved" );

	USFXGameEffect_DisableAI_execOnRemoved_Parms OnRemoved_Parms;

	this->ProcessEvent ( pFnOnRemoved, &OnRemoved_Parms, NULL );
};

// Function SFXGameContent.SFXGameEffect_DisableAI.OnApplied
// [0x00020002]
// Parameters infos:

void USFXGameEffect_DisableAI::OnApplied ( )
{
	static UFunction* pFnOnApplied = NULL;

	if ( ! pFnOnApplied )
		pFnOnApplied = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_DisableAI.OnApplied" );

	USFXGameEffect_DisableAI_execOnApplied_Parms OnApplied_Parms;

	this->ProcessEvent ( pFnOnApplied, &OnApplied_Parms, NULL );
};



class UClass* USFXCustomAction_PlayerKnockbackImpact::pClassPointer = NULL;

class UClass* USFXCustomAction_PlayerKnockbackImpact::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_PlayerKnockbackImpact" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_PlayerStaggerImpact::pClassPointer = NULL;

class UClass* USFXCustomAction_PlayerStaggerImpact::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_PlayerStaggerImpact" );

		return pClassPointer;
	};



class UClass* USFXDamageType_AdeptHeavyMelee_NoRagdoll::pClassPointer = NULL;

class UClass* USFXDamageType_AdeptHeavyMelee_NoRagdoll::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXDamageType_AdeptHeavyMelee_NoRagdoll" );

		return pClassPointer;
	};



class UClass* USFXDamageType_BioticExplosion::pClassPointer = NULL;

class UClass* USFXDamageType_BioticExplosion::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXDamageType_BioticExplosion" );

		return pClassPointer;
	};



class UClass* USFXDamageType_BioticExplosion_NoRagdoll::pClassPointer = NULL;

class UClass* USFXDamageType_BioticExplosion_NoRagdoll::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXDamageType_BioticExplosion_NoRagdoll" );

		return pClassPointer;
	};



class UClass* USFXDamageType_BioticGrenade::pClassPointer = NULL;

class UClass* USFXDamageType_BioticGrenade::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXDamageType_BioticGrenade" );

		return pClassPointer;
	};



class UClass* USFXDamageType_BioticGrenade_NoRagdoll::pClassPointer = NULL;

class UClass* USFXDamageType_BioticGrenade_NoRagdoll::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXDamageType_BioticGrenade_NoRagdoll" );

		return pClassPointer;
	};



class UClass* USFXDamageType_CryoExplosion::pClassPointer = NULL;

class UClass* USFXDamageType_CryoExplosion::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXDamageType_CryoExplosion" );

		return pClassPointer;
	};



class UClass* USFXDamageType_ElectricCombo::pClassPointer = NULL;

class UClass* USFXDamageType_ElectricCombo::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXDamageType_ElectricCombo" );

		return pClassPointer;
	};



class UClass* USFXDamageType_FireExplosion::pClassPointer = NULL;

class UClass* USFXDamageType_FireExplosion::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXDamageType_FireExplosion" );

		return pClassPointer;
	};



class UClass* USFXDamageType_Warp::pClassPointer = NULL;

class UClass* USFXDamageType_Warp::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXDamageType_Warp" );

		return pClassPointer;
	};



class UClass* USFXDamageType_ImprovedWarp::pClassPointer = NULL;

class UClass* USFXDamageType_ImprovedWarp::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXDamageType_ImprovedWarp" );

		return pClassPointer;
	};



class UClass* USFXDamageType_WarpDoT::pClassPointer = NULL;

class UClass* USFXDamageType_WarpDoT::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXDamageType_WarpDoT" );

		return pClassPointer;
	};



class UClass* USFXDamageType_ImprovedWarpDoT::pClassPointer = NULL;

class UClass* USFXDamageType_ImprovedWarpDoT::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXDamageType_ImprovedWarpDoT" );

		return pClassPointer;
	};



class UClass* USFXDamageType_Pull::pClassPointer = NULL;

class UClass* USFXDamageType_Pull::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXDamageType_Pull" );

		return pClassPointer;
	};



class UClass* USFXDamageType_Pull_DoT::pClassPointer = NULL;

class UClass* USFXDamageType_Pull_DoT::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXDamageType_Pull_DoT" );

		return pClassPointer;
	};



class UClass* USFXDamageType_Shockwave::pClassPointer = NULL;

class UClass* USFXDamageType_Shockwave::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXDamageType_Shockwave" );

		return pClassPointer;
	};



class UClass* USFXDamageType_Shockwave_NoRagdoll::pClassPointer = NULL;

class UClass* USFXDamageType_Shockwave_NoRagdoll::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXDamageType_Shockwave_NoRagdoll" );

		return pClassPointer;
	};



class UClass* USFXDamageType_Singularity::pClassPointer = NULL;

class UClass* USFXDamageType_Singularity::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXDamageType_Singularity" );

		return pClassPointer;
	};



class UClass* USFXDamageType_Singularity_DoT::pClassPointer = NULL;

class UClass* USFXDamageType_Singularity_DoT::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXDamageType_Singularity_DoT" );

		return pClassPointer;
	};



class UClass* USFXDamageType_Singularity_Explosion::pClassPointer = NULL;

class UClass* USFXDamageType_Singularity_Explosion::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXDamageType_Singularity_Explosion" );

		return pClassPointer;
	};



class UClass* USFXDamageType_Singularity_NoRagdoll::pClassPointer = NULL;

class UClass* USFXDamageType_Singularity_NoRagdoll::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXDamageType_Singularity_NoRagdoll" );

		return pClassPointer;
	};



class UClass* USFXDamageType_Throw::pClassPointer = NULL;

class UClass* USFXDamageType_Throw::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXDamageType_Throw" );

		return pClassPointer;
	};



class UClass* USFXGameEffect_AntiGravity::pClassPointer = NULL;

class UClass* USFXGameEffect_AntiGravity::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXGameEffect_AntiGravity" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXGameEffect_AntiGravity.OnRemoved
// [0x00020002]
// Parameters infos:

void USFXGameEffect_AntiGravity::OnRemoved ( )
{
	static UFunction* pFnOnRemoved = NULL;

	if ( ! pFnOnRemoved )
		pFnOnRemoved = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_AntiGravity.OnRemoved" );

	USFXGameEffect_AntiGravity_execOnRemoved_Parms OnRemoved_Parms;

	this->ProcessEvent ( pFnOnRemoved, &OnRemoved_Parms, NULL );
};

// Function SFXGameContent.SFXGameEffect_AntiGravity.OnApplied
// [0x00020002]
// Parameters infos:

void USFXGameEffect_AntiGravity::OnApplied ( )
{
	static UFunction* pFnOnApplied = NULL;

	if ( ! pFnOnApplied )
		pFnOnApplied = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_AntiGravity.OnApplied" );

	USFXGameEffect_AntiGravity_execOnApplied_Parms OnApplied_Parms;

	this->ProcessEvent ( pFnOnApplied, &OnApplied_Parms, NULL );
};



class UClass* USFXGameEffect_ArmorWeakness::pClassPointer = NULL;

class UClass* USFXGameEffect_ArmorWeakness::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXGameEffect_ArmorWeakness" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXGameEffect_ArmorWeakness.OnRemoved
// [0x00020002]
// Parameters infos:

void USFXGameEffect_ArmorWeakness::OnRemoved ( )
{
	static UFunction* pFnOnRemoved = NULL;

	if ( ! pFnOnRemoved )
		pFnOnRemoved = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_ArmorWeakness.OnRemoved" );

	USFXGameEffect_ArmorWeakness_execOnRemoved_Parms OnRemoved_Parms;

	this->ProcessEvent ( pFnOnRemoved, &OnRemoved_Parms, NULL );
};

// Function SFXGameContent.SFXGameEffect_ArmorWeakness.OnApplied
// [0x00020002]
// Parameters infos:

void USFXGameEffect_ArmorWeakness::OnApplied ( )
{
	static UFunction* pFnOnApplied = NULL;

	if ( ! pFnOnApplied )
		pFnOnApplied = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_ArmorWeakness.OnApplied" );

	USFXGameEffect_ArmorWeakness_execOnApplied_Parms OnApplied_Parms;

	this->ProcessEvent ( pFnOnApplied, &OnApplied_Parms, NULL );
};



class UClass* USFXGameEffect_BioticPowerDamageTakenBonus::pClassPointer = NULL;

class UClass* USFXGameEffect_BioticPowerDamageTakenBonus::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXGameEffect_BioticPowerDamageTakenBonus" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXGameEffect_BioticPowerDamageTakenBonus.OnRemoved
// [0x00020002]
// Parameters infos:

void USFXGameEffect_BioticPowerDamageTakenBonus::OnRemoved ( )
{
	static UFunction* pFnOnRemoved = NULL;

	if ( ! pFnOnRemoved )
		pFnOnRemoved = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_BioticPowerDamageTakenBonus.OnRemoved" );

	USFXGameEffect_BioticPowerDamageTakenBonus_execOnRemoved_Parms OnRemoved_Parms;

	this->ProcessEvent ( pFnOnRemoved, &OnRemoved_Parms, NULL );
};

// Function SFXGameContent.SFXGameEffect_BioticPowerDamageTakenBonus.OnApplied
// [0x00020002]
// Parameters infos:

void USFXGameEffect_BioticPowerDamageTakenBonus::OnApplied ( )
{
	static UFunction* pFnOnApplied = NULL;

	if ( ! pFnOnApplied )
		pFnOnApplied = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_BioticPowerDamageTakenBonus.OnApplied" );

	USFXGameEffect_BioticPowerDamageTakenBonus_execOnApplied_Parms OnApplied_Parms;

	this->ProcessEvent ( pFnOnApplied, &OnApplied_Parms, NULL );
};



class UClass* USFXGameEffect_CryoFreeze::pClassPointer = NULL;

class UClass* USFXGameEffect_CryoFreeze::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXGameEffect_CryoFreeze" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXGameEffect_CryoFreeze.OnRemoved
// [0x00020002]
// Parameters infos:

void USFXGameEffect_CryoFreeze::OnRemoved ( )
{
	static UFunction* pFnOnRemoved = NULL;

	if ( ! pFnOnRemoved )
		pFnOnRemoved = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_CryoFreeze.OnRemoved" );

	USFXGameEffect_CryoFreeze_execOnRemoved_Parms OnRemoved_Parms;

	this->ProcessEvent ( pFnOnRemoved, &OnRemoved_Parms, NULL );
};

// Function SFXGameContent.SFXGameEffect_CryoFreeze.OnUpdate
// [0x00820002]
// Parameters infos:
// float                          DeltaSeconds                   ( CPF_Parm )

void USFXGameEffect_CryoFreeze::OnUpdate ( float DeltaSeconds )
{
	static UFunction* pFnOnUpdate = NULL;

	if ( ! pFnOnUpdate )
		pFnOnUpdate = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_CryoFreeze.OnUpdate" );

	USFXGameEffect_CryoFreeze_execOnUpdate_Parms OnUpdate_Parms;
	OnUpdate_Parms.DeltaSeconds = DeltaSeconds;

	this->ProcessEvent ( pFnOnUpdate, &OnUpdate_Parms, NULL );
};

// Function SFXGameContent.SFXGameEffect_CryoFreeze.OnApplied
// [0x00020002]
// Parameters infos:

void USFXGameEffect_CryoFreeze::OnApplied ( )
{
	static UFunction* pFnOnApplied = NULL;

	if ( ! pFnOnApplied )
		pFnOnApplied = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_CryoFreeze.OnApplied" );

	USFXGameEffect_CryoFreeze_execOnApplied_Parms OnApplied_Parms;

	this->ProcessEvent ( pFnOnApplied, &OnApplied_Parms, NULL );
};

// Function SFXGameContent.SFXGameEffect_CryoFreeze.OnFrozenPawnDied
// [0x00120000]
// Parameters infos:
// class ABioPawn*                oPawn                          ( CPF_Parm )

void USFXGameEffect_CryoFreeze::OnFrozenPawnDied ( class ABioPawn* oPawn )
{
	static UFunction* pFnOnFrozenPawnDied = NULL;

	if ( ! pFnOnFrozenPawnDied )
		pFnOnFrozenPawnDied = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_CryoFreeze.OnFrozenPawnDied" );

	USFXGameEffect_CryoFreeze_execOnFrozenPawnDied_Parms OnFrozenPawnDied_Parms;
	OnFrozenPawnDied_Parms.oPawn = oPawn;

	this->ProcessEvent ( pFnOnFrozenPawnDied, &OnFrozenPawnDied_Parms, NULL );
};



class UClass* USFXGameEffect_DamageImmunity::pClassPointer = NULL;

class UClass* USFXGameEffect_DamageImmunity::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXGameEffect_DamageImmunity" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXGameEffect_DamageImmunity.OnRemoved
// [0x00020002]
// Parameters infos:

void USFXGameEffect_DamageImmunity::OnRemoved ( )
{
	static UFunction* pFnOnRemoved = NULL;

	if ( ! pFnOnRemoved )
		pFnOnRemoved = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_DamageImmunity.OnRemoved" );

	USFXGameEffect_DamageImmunity_execOnRemoved_Parms OnRemoved_Parms;

	this->ProcessEvent ( pFnOnRemoved, &OnRemoved_Parms, NULL );
};

// Function SFXGameContent.SFXGameEffect_DamageImmunity.OnApplied
// [0x00020002]
// Parameters infos:

void USFXGameEffect_DamageImmunity::OnApplied ( )
{
	static UFunction* pFnOnApplied = NULL;

	if ( ! pFnOnApplied )
		pFnOnApplied = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_DamageImmunity.OnApplied" );

	USFXGameEffect_DamageImmunity_execOnApplied_Parms OnApplied_Parms;

	this->ProcessEvent ( pFnOnApplied, &OnApplied_Parms, NULL );
};



class UClass* USFXGameEffect_DelayedCryoFreeze::pClassPointer = NULL;

class UClass* USFXGameEffect_DelayedCryoFreeze::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXGameEffect_DelayedCryoFreeze" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXGameEffect_DelayedCryoFreeze.OnRemoved
// [0x00020002]
// Parameters infos:

void USFXGameEffect_DelayedCryoFreeze::OnRemoved ( )
{
	static UFunction* pFnOnRemoved = NULL;

	if ( ! pFnOnRemoved )
		pFnOnRemoved = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_DelayedCryoFreeze.OnRemoved" );

	USFXGameEffect_DelayedCryoFreeze_execOnRemoved_Parms OnRemoved_Parms;

	this->ProcessEvent ( pFnOnRemoved, &OnRemoved_Parms, NULL );
};

// Function SFXGameContent.SFXGameEffect_DelayedCryoFreeze.OnUpdate
// [0x00820002]
// Parameters infos:
// float                          DeltaSeconds                   ( CPF_Parm )

void USFXGameEffect_DelayedCryoFreeze::OnUpdate ( float DeltaSeconds )
{
	static UFunction* pFnOnUpdate = NULL;

	if ( ! pFnOnUpdate )
		pFnOnUpdate = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_DelayedCryoFreeze.OnUpdate" );

	USFXGameEffect_DelayedCryoFreeze_execOnUpdate_Parms OnUpdate_Parms;
	OnUpdate_Parms.DeltaSeconds = DeltaSeconds;

	this->ProcessEvent ( pFnOnUpdate, &OnUpdate_Parms, NULL );
};

// Function SFXGameContent.SFXGameEffect_DelayedCryoFreeze.OnApplied
// [0x00820002]
// Parameters infos:

void USFXGameEffect_DelayedCryoFreeze::OnApplied ( )
{
	static UFunction* pFnOnApplied = NULL;

	if ( ! pFnOnApplied )
		pFnOnApplied = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_DelayedCryoFreeze.OnApplied" );

	USFXGameEffect_DelayedCryoFreeze_execOnApplied_Parms OnApplied_Parms;

	this->ProcessEvent ( pFnOnApplied, &OnApplied_Parms, NULL );
};

// Function SFXGameContent.SFXGameEffect_DelayedCryoFreeze.OnFrozenPawnDied
// [0x00120000]
// Parameters infos:
// class ABioPawn*                oPawn                          ( CPF_Parm )

void USFXGameEffect_DelayedCryoFreeze::OnFrozenPawnDied ( class ABioPawn* oPawn )
{
	static UFunction* pFnOnFrozenPawnDied = NULL;

	if ( ! pFnOnFrozenPawnDied )
		pFnOnFrozenPawnDied = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_DelayedCryoFreeze.OnFrozenPawnDied" );

	USFXGameEffect_DelayedCryoFreeze_execOnFrozenPawnDied_Parms OnFrozenPawnDied_Parms;
	OnFrozenPawnDied_Parms.oPawn = oPawn;

	this->ProcessEvent ( pFnOnFrozenPawnDied, &OnFrozenPawnDied_Parms, NULL );
};



class UClass* USFXGameEffect_PowerCombo_Cryo::pClassPointer = NULL;

class UClass* USFXGameEffect_PowerCombo_Cryo::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXGameEffect_PowerCombo_Cryo" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXGameEffect_PowerCombo_Cryo.OnImpact
// [0x00820002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  Resistance                     ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

bool USFXGameEffect_PowerCombo_Cryo::OnImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector const& HitLocation, struct FVector const& HitNormal )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_PowerCombo_Cryo.OnImpact" );

	USFXGameEffect_PowerCombo_Cryo_execOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.Resistance = Resistance;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;
	memcpy ( &OnImpact_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &OnImpact_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};



class UClass* USFXGameEffect_ElectricComboBeam::pClassPointer = NULL;

class UClass* USFXGameEffect_ElectricComboBeam::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXGameEffect_ElectricComboBeam" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXGameEffect_ElectricComboBeam.OnRemoved
// [0x00020002]
// Parameters infos:

void USFXGameEffect_ElectricComboBeam::OnRemoved ( )
{
	static UFunction* pFnOnRemoved = NULL;

	if ( ! pFnOnRemoved )
		pFnOnRemoved = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_ElectricComboBeam.OnRemoved" );

	USFXGameEffect_ElectricComboBeam_execOnRemoved_Parms OnRemoved_Parms;

	this->ProcessEvent ( pFnOnRemoved, &OnRemoved_Parms, NULL );
};

// Function SFXGameContent.SFXGameEffect_ElectricComboBeam.OnUpdate
// [0x00020002]
// Parameters infos:
// float                          DeltaSeconds                   ( CPF_Parm )

void USFXGameEffect_ElectricComboBeam::OnUpdate ( float DeltaSeconds )
{
	static UFunction* pFnOnUpdate = NULL;

	if ( ! pFnOnUpdate )
		pFnOnUpdate = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_ElectricComboBeam.OnUpdate" );

	USFXGameEffect_ElectricComboBeam_execOnUpdate_Parms OnUpdate_Parms;
	OnUpdate_Parms.DeltaSeconds = DeltaSeconds;

	this->ProcessEvent ( pFnOnUpdate, &OnUpdate_Parms, NULL );
};

// Function SFXGameContent.SFXGameEffect_ElectricComboBeam.PlayBeamEffect
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// class UParticleSystemComponent* PS                             ( CPF_Parm | CPF_EditInline )
// struct FVector                 TargetLocation                 ( CPF_Parm )

void USFXGameEffect_ElectricComboBeam::PlayBeamEffect ( class UParticleSystemComponent* PS, struct FVector const& TargetLocation )
{
	static UFunction* pFnPlayBeamEffect = NULL;

	if ( ! pFnPlayBeamEffect )
		pFnPlayBeamEffect = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_ElectricComboBeam.PlayBeamEffect" );

	USFXGameEffect_ElectricComboBeam_execPlayBeamEffect_Parms PlayBeamEffect_Parms;
	PlayBeamEffect_Parms.PS = PS;
	memcpy ( &PlayBeamEffect_Parms.TargetLocation, &TargetLocation, 0xC );

	this->ProcessEvent ( pFnPlayBeamEffect, &PlayBeamEffect_Parms, NULL );
};

// Function SFXGameContent.SFXGameEffect_ElectricComboBeam.OnApplied
// [0x00820002]
// Parameters infos:

void USFXGameEffect_ElectricComboBeam::OnApplied ( )
{
	static UFunction* pFnOnApplied = NULL;

	if ( ! pFnOnApplied )
		pFnOnApplied = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_ElectricComboBeam.OnApplied" );

	USFXGameEffect_ElectricComboBeam_execOnApplied_Parms OnApplied_Parms;

	this->ProcessEvent ( pFnOnApplied, &OnApplied_Parms, NULL );
};



class UClass* USFXGameEffect_FireDamageOverTime::pClassPointer = NULL;

class UClass* USFXGameEffect_FireDamageOverTime::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXGameEffect_FireDamageOverTime" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXGameEffect_FireDamageOverTime.DoDamage
// [0x00020002]
// Parameters infos:

void USFXGameEffect_FireDamageOverTime::DoDamage ( )
{
	static UFunction* pFnDoDamage = NULL;

	if ( ! pFnDoDamage )
		pFnDoDamage = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_FireDamageOverTime.DoDamage" );

	USFXGameEffect_FireDamageOverTime_execDoDamage_Parms DoDamage_Parms;

	this->ProcessEvent ( pFnDoDamage, &DoDamage_Parms, NULL );
};

// Function SFXGameContent.SFXGameEffect_FireDamageOverTime.AddFireDamage
// [0x00020002]
// Parameters infos:
// float                          AddedDamage                    ( CPF_Parm )
// float                          NewDuration                    ( CPF_Parm )

void USFXGameEffect_FireDamageOverTime::AddFireDamage ( float AddedDamage, float NewDuration )
{
	static UFunction* pFnAddFireDamage = NULL;

	if ( ! pFnAddFireDamage )
		pFnAddFireDamage = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_FireDamageOverTime.AddFireDamage" );

	USFXGameEffect_FireDamageOverTime_execAddFireDamage_Parms AddFireDamage_Parms;
	AddFireDamage_Parms.AddedDamage = AddedDamage;
	AddFireDamage_Parms.NewDuration = NewDuration;

	this->ProcessEvent ( pFnAddFireDamage, &AddFireDamage_Parms, NULL );
};

// Function SFXGameContent.SFXGameEffect_FireDamageOverTime.OnApplied
// [0x00020002]
// Parameters infos:

void USFXGameEffect_FireDamageOverTime::OnApplied ( )
{
	static UFunction* pFnOnApplied = NULL;

	if ( ! pFnOnApplied )
		pFnOnApplied = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_FireDamageOverTime.OnApplied" );

	USFXGameEffect_FireDamageOverTime_execOnApplied_Parms OnApplied_Parms;

	this->ProcessEvent ( pFnOnApplied, &OnApplied_Parms, NULL );
};



class UClass* USFXGameEffect_PowerCombo_Fire::pClassPointer = NULL;

class UClass* USFXGameEffect_PowerCombo_Fire::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXGameEffect_PowerCombo_Fire" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXGameEffect_PowerCombo_Fire.OnImpact
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  Resistance                     ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

bool USFXGameEffect_PowerCombo_Fire::OnImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector const& HitLocation, struct FVector const& HitNormal )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_PowerCombo_Fire.OnImpact" );

	USFXGameEffect_PowerCombo_Fire_execOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.Resistance = Resistance;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;
	memcpy ( &OnImpact_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &OnImpact_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent.SFXGameEffect_PowerCombo_Fire.OnPowerComboDetonated
// [0x00020002]
// Parameters infos:
// class USFXPowerCustomAction*   DetonationPower                ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void USFXGameEffect_PowerCombo_Fire::OnPowerComboDetonated ( class USFXPowerCustomAction* DetonationPower, struct FVector const& HitLocation, struct FVector const& HitNormal )
{
	static UFunction* pFnOnPowerComboDetonated = NULL;

	if ( ! pFnOnPowerComboDetonated )
		pFnOnPowerComboDetonated = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_PowerCombo_Fire.OnPowerComboDetonated" );

	USFXGameEffect_PowerCombo_Fire_execOnPowerComboDetonated_Parms OnPowerComboDetonated_Parms;
	OnPowerComboDetonated_Parms.DetonationPower = DetonationPower;
	memcpy ( &OnPowerComboDetonated_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &OnPowerComboDetonated_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnOnPowerComboDetonated, &OnPowerComboDetonated_Parms, NULL );
};



class UClass* USFXGameEffect_HealShieldOverTime::pClassPointer = NULL;

class UClass* USFXGameEffect_HealShieldOverTime::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXGameEffect_HealShieldOverTime" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXGameEffect_HealShieldOverTime.OnUpdate
// [0x00020002]
// Parameters infos:
// float                          DeltaSeconds                   ( CPF_Parm )

void USFXGameEffect_HealShieldOverTime::OnUpdate ( float DeltaSeconds )
{
	static UFunction* pFnOnUpdate = NULL;

	if ( ! pFnOnUpdate )
		pFnOnUpdate = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_HealShieldOverTime.OnUpdate" );

	USFXGameEffect_HealShieldOverTime_execOnUpdate_Parms OnUpdate_Parms;
	OnUpdate_Parms.DeltaSeconds = DeltaSeconds;

	this->ProcessEvent ( pFnOnUpdate, &OnUpdate_Parms, NULL );
};



class UClass* USFXGameEffect_MaxGrenadeBonus::pClassPointer = NULL;

class UClass* USFXGameEffect_MaxGrenadeBonus::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXGameEffect_MaxGrenadeBonus" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXGameEffect_MaxGrenadeBonus.OnRemoved
// [0x00020002]
// Parameters infos:

void USFXGameEffect_MaxGrenadeBonus::OnRemoved ( )
{
	static UFunction* pFnOnRemoved = NULL;

	if ( ! pFnOnRemoved )
		pFnOnRemoved = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_MaxGrenadeBonus.OnRemoved" );

	USFXGameEffect_MaxGrenadeBonus_execOnRemoved_Parms OnRemoved_Parms;

	this->ProcessEvent ( pFnOnRemoved, &OnRemoved_Parms, NULL );
};

// Function SFXGameContent.SFXGameEffect_MaxGrenadeBonus.OnApplied
// [0x00020002]
// Parameters infos:

void USFXGameEffect_MaxGrenadeBonus::OnApplied ( )
{
	static UFunction* pFnOnApplied = NULL;

	if ( ! pFnOnApplied )
		pFnOnApplied = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_MaxGrenadeBonus.OnApplied" );

	USFXGameEffect_MaxGrenadeBonus_execOnApplied_Parms OnApplied_Parms;

	this->ProcessEvent ( pFnOnApplied, &OnApplied_Parms, NULL );
};



class UClass* USFXGameEffect_PowerCombo_Biotic::pClassPointer = NULL;

class UClass* USFXGameEffect_PowerCombo_Biotic::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXGameEffect_PowerCombo_Biotic" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXGameEffect_PowerCombo_Biotic.OnPowerComboDetonated
// [0x00020002]
// Parameters infos:
// class USFXPowerCustomAction*   DetonationPower                ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void USFXGameEffect_PowerCombo_Biotic::OnPowerComboDetonated ( class USFXPowerCustomAction* DetonationPower, struct FVector const& HitLocation, struct FVector const& HitNormal )
{
	static UFunction* pFnOnPowerComboDetonated = NULL;

	if ( ! pFnOnPowerComboDetonated )
		pFnOnPowerComboDetonated = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_PowerCombo_Biotic.OnPowerComboDetonated" );

	USFXGameEffect_PowerCombo_Biotic_execOnPowerComboDetonated_Parms OnPowerComboDetonated_Parms;
	OnPowerComboDetonated_Parms.DetonationPower = DetonationPower;
	memcpy ( &OnPowerComboDetonated_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &OnPowerComboDetonated_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnOnPowerComboDetonated, &OnPowerComboDetonated_Parms, NULL );
};



class UClass* USFXShake_Power_BioticCombo::pClassPointer = NULL;

class UClass* USFXShake_Power_BioticCombo::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXShake_Power_BioticCombo" );

		return pClassPointer;
	};



class UClass* USFXRumble_Power_BioticCombo::pClassPointer = NULL;

class UClass* USFXRumble_Power_BioticCombo::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXRumble_Power_BioticCombo" );

		return pClassPointer;
	};



class UClass* USFXShake_Power_CryoCombo::pClassPointer = NULL;

class UClass* USFXShake_Power_CryoCombo::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXShake_Power_CryoCombo" );

		return pClassPointer;
	};



class UClass* USFXRumble_Power_CryoCombo::pClassPointer = NULL;

class UClass* USFXRumble_Power_CryoCombo::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXRumble_Power_CryoCombo" );

		return pClassPointer;
	};



class UClass* USFXGameEffect_PowerCombo_Electric::pClassPointer = NULL;

class UClass* USFXGameEffect_PowerCombo_Electric::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXGameEffect_PowerCombo_Electric" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXGameEffect_PowerCombo_Electric.OnImpact
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  Resistance                     ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

bool USFXGameEffect_PowerCombo_Electric::OnImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector const& HitLocation, struct FVector const& HitNormal )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_PowerCombo_Electric.OnImpact" );

	USFXGameEffect_PowerCombo_Electric_execOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.Resistance = Resistance;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;
	memcpy ( &OnImpact_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &OnImpact_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};



class UClass* USFXShake_Power_ElectricCombo::pClassPointer = NULL;

class UClass* USFXShake_Power_ElectricCombo::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXShake_Power_ElectricCombo" );

		return pClassPointer;
	};



class UClass* USFXRumble_Power_ElectricCombo::pClassPointer = NULL;

class UClass* USFXRumble_Power_ElectricCombo::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXRumble_Power_ElectricCombo" );

		return pClassPointer;
	};



class UClass* USFXShake_Power_FireCombo::pClassPointer = NULL;

class UClass* USFXShake_Power_FireCombo::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXShake_Power_FireCombo" );

		return pClassPointer;
	};



class UClass* USFXRumble_Power_FireCombo::pClassPointer = NULL;

class UClass* USFXRumble_Power_FireCombo::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXRumble_Power_FireCombo" );

		return pClassPointer;
	};



class UClass* USFXGameEffect_Pull::pClassPointer = NULL;

class UClass* USFXGameEffect_Pull::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXGameEffect_Pull" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXGameEffect_Pull.OnRemoved
// [0x00020002]
// Parameters infos:

void USFXGameEffect_Pull::OnRemoved ( )
{
	static UFunction* pFnOnRemoved = NULL;

	if ( ! pFnOnRemoved )
		pFnOnRemoved = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_Pull.OnRemoved" );

	USFXGameEffect_Pull_execOnRemoved_Parms OnRemoved_Parms;

	this->ProcessEvent ( pFnOnRemoved, &OnRemoved_Parms, NULL );
};

// Function SFXGameContent.SFXGameEffect_Pull.MoveActor
// [0x00020002]
// Parameters infos:
// struct FVector                 vForce                         ( CPF_Parm )

void USFXGameEffect_Pull::MoveActor ( struct FVector const& vForce )
{
	static UFunction* pFnMoveActor = NULL;

	if ( ! pFnMoveActor )
		pFnMoveActor = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_Pull.MoveActor" );

	USFXGameEffect_Pull_execMoveActor_Parms MoveActor_Parms;
	memcpy ( &MoveActor_Parms.vForce, &vForce, 0xC );

	this->ProcessEvent ( pFnMoveActor, &MoveActor_Parms, NULL );
};

// Function SFXGameContent.SFXGameEffect_Pull.OnUpdate
// [0x00020002]
// Parameters infos:
// float                          DeltaSeconds                   ( CPF_Parm )

void USFXGameEffect_Pull::OnUpdate ( float DeltaSeconds )
{
	static UFunction* pFnOnUpdate = NULL;

	if ( ! pFnOnUpdate )
		pFnOnUpdate = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_Pull.OnUpdate" );

	USFXGameEffect_Pull_execOnUpdate_Parms OnUpdate_Parms;
	OnUpdate_Parms.DeltaSeconds = DeltaSeconds;

	this->ProcessEvent ( pFnOnUpdate, &OnUpdate_Parms, NULL );
};

// Function SFXGameContent.SFXGameEffect_Pull.OnApplied
// [0x00020002]
// Parameters infos:

void USFXGameEffect_Pull::OnApplied ( )
{
	static UFunction* pFnOnApplied = NULL;

	if ( ! pFnOnApplied )
		pFnOnApplied = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_Pull.OnApplied" );

	USFXGameEffect_Pull_execOnApplied_Parms OnApplied_Parms;

	this->ProcessEvent ( pFnOnApplied, &OnApplied_Parms, NULL );
};



class UClass* USFXGameEffect_Ragdoll::pClassPointer = NULL;

class UClass* USFXGameEffect_Ragdoll::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXGameEffect_Ragdoll" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXGameEffect_Ragdoll.OnRemoved
// [0x00020002]
// Parameters infos:

void USFXGameEffect_Ragdoll::OnRemoved ( )
{
	static UFunction* pFnOnRemoved = NULL;

	if ( ! pFnOnRemoved )
		pFnOnRemoved = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_Ragdoll.OnRemoved" );

	USFXGameEffect_Ragdoll_execOnRemoved_Parms OnRemoved_Parms;

	this->ProcessEvent ( pFnOnRemoved, &OnRemoved_Parms, NULL );
};

// Function SFXGameContent.SFXGameEffect_Ragdoll.OnApplied
// [0x00020002]
// Parameters infos:

void USFXGameEffect_Ragdoll::OnApplied ( )
{
	static UFunction* pFnOnApplied = NULL;

	if ( ! pFnOnApplied )
		pFnOnApplied = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_Ragdoll.OnApplied" );

	USFXGameEffect_Ragdoll_execOnApplied_Parms OnApplied_Parms;

	this->ProcessEvent ( pFnOnApplied, &OnApplied_Parms, NULL );
};



class UClass* USFXGameEffect_ShockwaveLift::pClassPointer = NULL;

class UClass* USFXGameEffect_ShockwaveLift::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXGameEffect_ShockwaveLift" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXGameEffect_ShockwaveLift.HasOtherGravityEffects
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXGameEffect_ShockwaveLift::HasOtherGravityEffects ( )
{
	static UFunction* pFnHasOtherGravityEffects = NULL;

	if ( ! pFnHasOtherGravityEffects )
		pFnHasOtherGravityEffects = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_ShockwaveLift.HasOtherGravityEffects" );

	USFXGameEffect_ShockwaveLift_execHasOtherGravityEffects_Parms HasOtherGravityEffects_Parms;

	this->ProcessEvent ( pFnHasOtherGravityEffects, &HasOtherGravityEffects_Parms, NULL );

	return HasOtherGravityEffects_Parms.ReturnValue;
};

// Function SFXGameContent.SFXGameEffect_ShockwaveLift.OnRemoved
// [0x00020002]
// Parameters infos:

void USFXGameEffect_ShockwaveLift::OnRemoved ( )
{
	static UFunction* pFnOnRemoved = NULL;

	if ( ! pFnOnRemoved )
		pFnOnRemoved = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_ShockwaveLift.OnRemoved" );

	USFXGameEffect_ShockwaveLift_execOnRemoved_Parms OnRemoved_Parms;

	this->ProcessEvent ( pFnOnRemoved, &OnRemoved_Parms, NULL );
};

// Function SFXGameContent.SFXGameEffect_ShockwaveLift.OnUpdate
// [0x00020002]
// Parameters infos:
// float                          DeltaSeconds                   ( CPF_Parm )

void USFXGameEffect_ShockwaveLift::OnUpdate ( float DeltaSeconds )
{
	static UFunction* pFnOnUpdate = NULL;

	if ( ! pFnOnUpdate )
		pFnOnUpdate = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_ShockwaveLift.OnUpdate" );

	USFXGameEffect_ShockwaveLift_execOnUpdate_Parms OnUpdate_Parms;
	OnUpdate_Parms.DeltaSeconds = DeltaSeconds;

	this->ProcessEvent ( pFnOnUpdate, &OnUpdate_Parms, NULL );
};

// Function SFXGameContent.SFXGameEffect_ShockwaveLift.OnApplied
// [0x00020002]
// Parameters infos:

void USFXGameEffect_ShockwaveLift::OnApplied ( )
{
	static UFunction* pFnOnApplied = NULL;

	if ( ! pFnOnApplied )
		pFnOnApplied = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_ShockwaveLift.OnApplied" );

	USFXGameEffect_ShockwaveLift_execOnApplied_Parms OnApplied_Parms;

	this->ProcessEvent ( pFnOnApplied, &OnApplied_Parms, NULL );
};



class UClass* USFXGameEffect_Singularity::pClassPointer = NULL;

class UClass* USFXGameEffect_Singularity::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXGameEffect_Singularity" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXGameEffect_Singularity.OutOfRangeCheck
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          Distance                       ( CPF_Parm )

bool USFXGameEffect_Singularity::OutOfRangeCheck ( float Distance )
{
	static UFunction* pFnOutOfRangeCheck = NULL;

	if ( ! pFnOutOfRangeCheck )
		pFnOutOfRangeCheck = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_Singularity.OutOfRangeCheck" );

	USFXGameEffect_Singularity_execOutOfRangeCheck_Parms OutOfRangeCheck_Parms;
	OutOfRangeCheck_Parms.Distance = Distance;

	this->ProcessEvent ( pFnOutOfRangeCheck, &OutOfRangeCheck_Parms, NULL );

	return OutOfRangeCheck_Parms.ReturnValue;
};

// Function SFXGameContent.SFXGameEffect_Singularity.IsStillInSingularity
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXGameEffect_Singularity::IsStillInSingularity ( )
{
	static UFunction* pFnIsStillInSingularity = NULL;

	if ( ! pFnIsStillInSingularity )
		pFnIsStillInSingularity = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_Singularity.IsStillInSingularity" );

	USFXGameEffect_Singularity_execIsStillInSingularity_Parms IsStillInSingularity_Parms;

	this->ProcessEvent ( pFnIsStillInSingularity, &IsStillInSingularity_Parms, NULL );

	return IsStillInSingularity_Parms.ReturnValue;
};

// Function SFXGameContent.SFXGameEffect_Singularity.OnRemoved
// [0x00020002]
// Parameters infos:

void USFXGameEffect_Singularity::OnRemoved ( )
{
	static UFunction* pFnOnRemoved = NULL;

	if ( ! pFnOnRemoved )
		pFnOnRemoved = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_Singularity.OnRemoved" );

	USFXGameEffect_Singularity_execOnRemoved_Parms OnRemoved_Parms;

	this->ProcessEvent ( pFnOnRemoved, &OnRemoved_Parms, NULL );
};

// Function SFXGameContent.SFXGameEffect_Singularity.AddForceToActor
// [0x00020002]
// Parameters infos:
// struct FVector                 vForce                         ( CPF_Parm )

void USFXGameEffect_Singularity::AddForceToActor ( struct FVector const& vForce )
{
	static UFunction* pFnAddForceToActor = NULL;

	if ( ! pFnAddForceToActor )
		pFnAddForceToActor = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_Singularity.AddForceToActor" );

	USFXGameEffect_Singularity_execAddForceToActor_Parms AddForceToActor_Parms;
	memcpy ( &AddForceToActor_Parms.vForce, &vForce, 0xC );

	this->ProcessEvent ( pFnAddForceToActor, &AddForceToActor_Parms, NULL );
};

// Function SFXGameContent.SFXGameEffect_Singularity.InitialMovement
// [0x00020002]
// Parameters infos:

void USFXGameEffect_Singularity::InitialMovement ( )
{
	static UFunction* pFnInitialMovement = NULL;

	if ( ! pFnInitialMovement )
		pFnInitialMovement = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_Singularity.InitialMovement" );

	USFXGameEffect_Singularity_execInitialMovement_Parms InitialMovement_Parms;

	this->ProcessEvent ( pFnInitialMovement, &InitialMovement_Parms, NULL );
};

// Function SFXGameContent.SFXGameEffect_Singularity.UpdateActor
// [0x00020002]
// Parameters infos:

void USFXGameEffect_Singularity::UpdateActor ( )
{
	static UFunction* pFnUpdateActor = NULL;

	if ( ! pFnUpdateActor )
		pFnUpdateActor = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_Singularity.UpdateActor" );

	USFXGameEffect_Singularity_execUpdateActor_Parms UpdateActor_Parms;

	this->ProcessEvent ( pFnUpdateActor, &UpdateActor_Parms, NULL );
};

// Function SFXGameContent.SFXGameEffect_Singularity.OnApplied
// [0x00020002]
// Parameters infos:

void USFXGameEffect_Singularity::OnApplied ( )
{
	static UFunction* pFnOnApplied = NULL;

	if ( ! pFnOnApplied )
		pFnOnApplied = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_Singularity.OnApplied" );

	USFXGameEffect_Singularity_execOnApplied_Parms OnApplied_Parms;

	this->ProcessEvent ( pFnOnApplied, &OnApplied_Parms, NULL );
};



class UClass* USFXGameEffect_Stasis::pClassPointer = NULL;

class UClass* USFXGameEffect_Stasis::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXGameEffect_Stasis" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXGameEffect_Stasis.OnRemoved
// [0x00020002]
// Parameters infos:

void USFXGameEffect_Stasis::OnRemoved ( )
{
	static UFunction* pFnOnRemoved = NULL;

	if ( ! pFnOnRemoved )
		pFnOnRemoved = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_Stasis.OnRemoved" );

	USFXGameEffect_Stasis_execOnRemoved_Parms OnRemoved_Parms;

	this->ProcessEvent ( pFnOnRemoved, &OnRemoved_Parms, NULL );
};

// Function SFXGameContent.SFXGameEffect_Stasis.UnStasisTarget
// [0x00020002]
// Parameters infos:

void USFXGameEffect_Stasis::UnStasisTarget ( )
{
	static UFunction* pFnUnStasisTarget = NULL;

	if ( ! pFnUnStasisTarget )
		pFnUnStasisTarget = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_Stasis.UnStasisTarget" );

	USFXGameEffect_Stasis_execUnStasisTarget_Parms UnStasisTarget_Parms;

	this->ProcessEvent ( pFnUnStasisTarget, &UnStasisTarget_Parms, NULL );
};

// Function SFXGameContent.SFXGameEffect_Stasis.OnUpdate
// [0x00020002]
// Parameters infos:
// float                          DeltaSeconds                   ( CPF_Parm )

void USFXGameEffect_Stasis::OnUpdate ( float DeltaSeconds )
{
	static UFunction* pFnOnUpdate = NULL;

	if ( ! pFnOnUpdate )
		pFnOnUpdate = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_Stasis.OnUpdate" );

	USFXGameEffect_Stasis_execOnUpdate_Parms OnUpdate_Parms;
	OnUpdate_Parms.DeltaSeconds = DeltaSeconds;

	this->ProcessEvent ( pFnOnUpdate, &OnUpdate_Parms, NULL );
};

// Function SFXGameContent.SFXGameEffect_Stasis.NullVelocity
// [0x00020002]
// Parameters infos:
// float                          DeltaSeconds                   ( CPF_Parm )

void USFXGameEffect_Stasis::NullVelocity ( float DeltaSeconds )
{
	static UFunction* pFnNullVelocity = NULL;

	if ( ! pFnNullVelocity )
		pFnNullVelocity = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_Stasis.NullVelocity" );

	USFXGameEffect_Stasis_execNullVelocity_Parms NullVelocity_Parms;
	NullVelocity_Parms.DeltaSeconds = DeltaSeconds;

	this->ProcessEvent ( pFnNullVelocity, &NullVelocity_Parms, NULL );
};

// Function SFXGameContent.SFXGameEffect_Stasis.StartCrustVFX
// [0x00820003] ( FUNC_Final )
// Parameters infos:

void USFXGameEffect_Stasis::StartCrustVFX ( )
{
	static UFunction* pFnStartCrustVFX = NULL;

	if ( ! pFnStartCrustVFX )
		pFnStartCrustVFX = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_Stasis.StartCrustVFX" );

	USFXGameEffect_Stasis_execStartCrustVFX_Parms StartCrustVFX_Parms;

	this->ProcessEvent ( pFnStartCrustVFX, &StartCrustVFX_Parms, NULL );
};

// Function SFXGameContent.SFXGameEffect_Stasis.OnApplied
// [0x00020002]
// Parameters infos:

void USFXGameEffect_Stasis::OnApplied ( )
{
	static UFunction* pFnOnApplied = NULL;

	if ( ! pFnOnApplied )
		pFnOnApplied = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_Stasis.OnApplied" );

	USFXGameEffect_Stasis_execOnApplied_Parms OnApplied_Parms;

	this->ProcessEvent ( pFnOnApplied, &OnApplied_Parms, NULL );
};



class UClass* USFXPowerCustomAction_Stasis::pClassPointer = NULL;

class UClass* USFXPowerCustomAction_Stasis::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXPowerCustomAction_Stasis" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXPowerCustomAction_Stasis.PopulatePowerStatBarEvolves
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_Stasis::PopulatePowerStatBarEvolves ( )
{
	static UFunction* pFnPopulatePowerStatBarEvolves = NULL;

	if ( ! pFnPopulatePowerStatBarEvolves )
		pFnPopulatePowerStatBarEvolves = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Stasis.PopulatePowerStatBarEvolves" );

	USFXPowerCustomAction_Stasis_execPopulatePowerStatBarEvolves_Parms PopulatePowerStatBarEvolves_Parms;

	this->ProcessEvent ( pFnPopulatePowerStatBarEvolves, &PopulatePowerStatBarEvolves_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Stasis.RecalculateAllPowerData
// [0x00024002]
// Parameters infos:
// unsigned long                  bReset                         ( CPF_OptionalParm | CPF_Parm )

void USFXPowerCustomAction_Stasis::RecalculateAllPowerData ( unsigned long bReset )
{
	static UFunction* pFnRecalculateAllPowerData = NULL;

	if ( ! pFnRecalculateAllPowerData )
		pFnRecalculateAllPowerData = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Stasis.RecalculateAllPowerData" );

	USFXPowerCustomAction_Stasis_execRecalculateAllPowerData_Parms RecalculateAllPowerData_Parms;
	RecalculateAllPowerData_Parms.bReset = bReset;

	this->ProcessEvent ( pFnRecalculateAllPowerData, &RecalculateAllPowerData_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Stasis.EvolvePower
// [0x00020002]
// Parameters infos:
// unsigned char                  choice                         ( CPF_Parm )

void USFXPowerCustomAction_Stasis::EvolvePower ( unsigned char choice )
{
	static UFunction* pFnEvolvePower = NULL;

	if ( ! pFnEvolvePower )
		pFnEvolvePower = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Stasis.EvolvePower" );

	USFXPowerCustomAction_Stasis_execEvolvePower_Parms EvolvePower_Parms;
	EvolvePower_Parms.choice = choice;

	this->ProcessEvent ( pFnEvolvePower, &EvolvePower_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Stasis.ShouldUsePower
// [0x00420002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Target                         ( CPF_Parm )
// FString                        sOptionalInfo                  ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool USFXPowerCustomAction_Stasis::ShouldUsePower ( class AActor* Target, FString* sOptionalInfo )
{
	static UFunction* pFnShouldUsePower = NULL;

	if ( ! pFnShouldUsePower )
		pFnShouldUsePower = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Stasis.ShouldUsePower" );

	USFXPowerCustomAction_Stasis_execShouldUsePower_Parms ShouldUsePower_Parms;
	ShouldUsePower_Parms.Target = Target;

	if ( sOptionalInfo )
		memcpy ( &ShouldUsePower_Parms.sOptionalInfo, sOptionalInfo, 0x10 );

	this->ProcessEvent ( pFnShouldUsePower, &ShouldUsePower_Parms, NULL );

	if ( sOptionalInfo )
		memcpy ( sOptionalInfo, &ShouldUsePower_Parms.sOptionalInfo, 0x10 );

	return ShouldUsePower_Parms.ReturnValue;
};

// Function SFXGameContent.SFXPowerCustomAction_Stasis.OnGameEffectEnded
// [0x00020002]
// Parameters infos:
// class AActor*                  oActor                         ( CPF_Parm )

void USFXPowerCustomAction_Stasis::OnGameEffectEnded ( class AActor* oActor )
{
	static UFunction* pFnOnGameEffectEnded = NULL;

	if ( ! pFnOnGameEffectEnded )
		pFnOnGameEffectEnded = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Stasis.OnGameEffectEnded" );

	USFXPowerCustomAction_Stasis_execOnGameEffectEnded_Parms OnGameEffectEnded_Parms;
	OnGameEffectEnded_Parms.oActor = oActor;

	this->ProcessEvent ( pFnOnGameEffectEnded, &OnGameEffectEnded_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Stasis.OnOwnerDestroyed
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_Stasis::OnOwnerDestroyed ( )
{
	static UFunction* pFnOnOwnerDestroyed = NULL;

	if ( ! pFnOnOwnerDestroyed )
		pFnOnOwnerDestroyed = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Stasis.OnOwnerDestroyed" );

	USFXPowerCustomAction_Stasis_execOnOwnerDestroyed_Parms OnOwnerDestroyed_Parms;

	this->ProcessEvent ( pFnOnOwnerDestroyed, &OnOwnerDestroyed_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Stasis.DoJoinInProgress
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_Stasis::DoJoinInProgress ( )
{
	static UFunction* pFnDoJoinInProgress = NULL;

	if ( ! pFnDoJoinInProgress )
		pFnDoJoinInProgress = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Stasis.DoJoinInProgress" );

	USFXPowerCustomAction_Stasis_execDoJoinInProgress_Parms DoJoinInProgress_Parms;

	this->ProcessEvent ( pFnDoJoinInProgress, &DoJoinInProgress_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Stasis.UnStasisCurrentTargets
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_Stasis::UnStasisCurrentTargets ( )
{
	static UFunction* pFnUnStasisCurrentTargets = NULL;

	if ( ! pFnUnStasisCurrentTargets )
		pFnUnStasisCurrentTargets = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Stasis.UnStasisCurrentTargets" );

	USFXPowerCustomAction_Stasis_execUnStasisCurrentTargets_Parms UnStasisCurrentTargets_Parms;

	this->ProcessEvent ( pFnUnStasisCurrentTargets, &UnStasisCurrentTargets_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Stasis.ClientImpactClearEffects
// [0x00020002]
// Parameters infos:
// class AActor*                  oImpacted                      ( CPF_Parm )

void USFXPowerCustomAction_Stasis::ClientImpactClearEffects ( class AActor* oImpacted )
{
	static UFunction* pFnClientImpactClearEffects = NULL;

	if ( ! pFnClientImpactClearEffects )
		pFnClientImpactClearEffects = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Stasis.ClientImpactClearEffects" );

	USFXPowerCustomAction_Stasis_execClientImpactClearEffects_Parms ClientImpactClearEffects_Parms;
	ClientImpactClearEffects_Parms.oImpacted = oImpacted;

	this->ProcessEvent ( pFnClientImpactClearEffects, &ClientImpactClearEffects_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Stasis.ImpactStasis
// [0x00020002]
// Parameters infos:
// class AActor*                  oImpacted                      ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

void USFXPowerCustomAction_Stasis::ImpactStasis ( class AActor* oImpacted, float fDuration )
{
	static UFunction* pFnImpactStasis = NULL;

	if ( ! pFnImpactStasis )
		pFnImpactStasis = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Stasis.ImpactStasis" );

	USFXPowerCustomAction_Stasis_execImpactStasis_Parms ImpactStasis_Parms;
	ImpactStasis_Parms.oImpacted = oImpacted;
	ImpactStasis_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnImpactStasis, &ImpactStasis_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Stasis.ImpactPushAway
// [0x00020002]
// Parameters infos:
// class AActor*                  oImpacted                      ( CPF_Parm )

void USFXPowerCustomAction_Stasis::ImpactPushAway ( class AActor* oImpacted )
{
	static UFunction* pFnImpactPushAway = NULL;

	if ( ! pFnImpactPushAway )
		pFnImpactPushAway = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Stasis.ImpactPushAway" );

	USFXPowerCustomAction_Stasis_execImpactPushAway_Parms ImpactPushAway_Parms;
	ImpactPushAway_Parms.oImpacted = oImpacted;

	this->ProcessEvent ( pFnImpactPushAway, &ImpactPushAway_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Stasis.OnImpact
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  Resistance                     ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

bool USFXPowerCustomAction_Stasis::OnImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector const& HitLocation, struct FVector const& HitNormal )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Stasis.OnImpact" );

	USFXPowerCustomAction_Stasis_execOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.Resistance = Resistance;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;
	memcpy ( &OnImpact_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &OnImpact_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent.SFXPowerCustomAction_Stasis.TickCustomAction
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// float                          fDeltaTime                     ( CPF_Parm )

void USFXPowerCustomAction_Stasis::eventTickCustomAction ( float fDeltaTime )
{
	static UFunction* pFnTickCustomAction = NULL;

	if ( ! pFnTickCustomAction )
		pFnTickCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Stasis.TickCustomAction" );

	USFXPowerCustomAction_Stasis_eventTickCustomAction_Parms TickCustomAction_Parms;
	TickCustomAction_Parms.fDeltaTime = fDeltaTime;

	this->ProcessEvent ( pFnTickCustomAction, &TickCustomAction_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Stasis.ClientEndStasisEffect
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// class AActor*                  oActor                         ( CPF_Parm )

void USFXPowerCustomAction_Stasis::ClientEndStasisEffect ( class AActor* oActor )
{
	static UFunction* pFnClientEndStasisEffect = NULL;

	if ( ! pFnClientEndStasisEffect )
		pFnClientEndStasisEffect = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Stasis.ClientEndStasisEffect" );

	USFXPowerCustomAction_Stasis_execClientEndStasisEffect_Parms ClientEndStasisEffect_Parms;
	ClientEndStasisEffect_Parms.oActor = oActor;

	this->ProcessEvent ( pFnClientEndStasisEffect, &ClientEndStasisEffect_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Stasis.ClientDoCustomActionImpact
// [0x00024002]
// Parameters infos:
// class AActor*                  oActor                         ( CPF_Parm )
// int                            ImpactCount                    ( CPF_Parm )
// unsigned long                  bFirstTarget                   ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_OptionalParm | CPF_Parm )
// int                            CustomActionReactionType       ( CPF_OptionalParm | CPF_Parm )

void USFXPowerCustomAction_Stasis::ClientDoCustomActionImpact ( class AActor* oActor, int ImpactCount, unsigned long bFirstTarget, struct FVector const& HitLocation, struct FVector const& HitNormal, int CustomActionReactionType )
{
	static UFunction* pFnClientDoCustomActionImpact = NULL;

	if ( ! pFnClientDoCustomActionImpact )
		pFnClientDoCustomActionImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Stasis.ClientDoCustomActionImpact" );

	USFXPowerCustomAction_Stasis_execClientDoCustomActionImpact_Parms ClientDoCustomActionImpact_Parms;
	ClientDoCustomActionImpact_Parms.oActor = oActor;
	ClientDoCustomActionImpact_Parms.ImpactCount = ImpactCount;
	ClientDoCustomActionImpact_Parms.bFirstTarget = bFirstTarget;
	memcpy ( &ClientDoCustomActionImpact_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ClientDoCustomActionImpact_Parms.HitNormal, &HitNormal, 0xC );
	ClientDoCustomActionImpact_Parms.CustomActionReactionType = CustomActionReactionType;

	this->ProcessEvent ( pFnClientDoCustomActionImpact, &ClientDoCustomActionImpact_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Stasis.ClientDoPowerSubsequentImpact
// [0x00024002]
// Parameters infos:
// class AActor*                  oActor                         ( CPF_Parm )
// int                            CustomActionReactionType       ( CPF_OptionalParm | CPF_Parm )
// float                          Duration                       ( CPF_OptionalParm | CPF_Parm )
// int                            ImpactCount                    ( CPF_OptionalParm | CPF_Parm )
// float                          Delay                          ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  DoCallback                     ( CPF_OptionalParm | CPF_Parm )

void USFXPowerCustomAction_Stasis::ClientDoPowerSubsequentImpact ( class AActor* oActor, int CustomActionReactionType, float Duration, int ImpactCount, float Delay, unsigned long DoCallback )
{
	static UFunction* pFnClientDoPowerSubsequentImpact = NULL;

	if ( ! pFnClientDoPowerSubsequentImpact )
		pFnClientDoPowerSubsequentImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Stasis.ClientDoPowerSubsequentImpact" );

	USFXPowerCustomAction_Stasis_execClientDoPowerSubsequentImpact_Parms ClientDoPowerSubsequentImpact_Parms;
	ClientDoPowerSubsequentImpact_Parms.oActor = oActor;
	ClientDoPowerSubsequentImpact_Parms.CustomActionReactionType = CustomActionReactionType;
	ClientDoPowerSubsequentImpact_Parms.Duration = Duration;
	ClientDoPowerSubsequentImpact_Parms.ImpactCount = ImpactCount;
	ClientDoPowerSubsequentImpact_Parms.Delay = Delay;
	ClientDoPowerSubsequentImpact_Parms.DoCallback = DoCallback;

	this->ProcessEvent ( pFnClientDoPowerSubsequentImpact, &ClientDoPowerSubsequentImpact_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Stasis.StopStasisBubble
// [0x00020002]
// Parameters infos:
// unsigned long                  bReplicate                     ( CPF_Parm )

void USFXPowerCustomAction_Stasis::StopStasisBubble ( unsigned long bReplicate )
{
	static UFunction* pFnStopStasisBubble = NULL;

	if ( ! pFnStopStasisBubble )
		pFnStopStasisBubble = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Stasis.StopStasisBubble" );

	USFXPowerCustomAction_Stasis_execStopStasisBubble_Parms StopStasisBubble_Parms;
	StopStasisBubble_Parms.bReplicate = bReplicate;

	this->ProcessEvent ( pFnStopStasisBubble, &StopStasisBubble_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Stasis.StartStasisBubbleVFX
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXPowerCustomAction_Stasis::StartStasisBubbleVFX ( )
{
	static UFunction* pFnStartStasisBubbleVFX = NULL;

	if ( ! pFnStartStasisBubbleVFX )
		pFnStartStasisBubbleVFX = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Stasis.StartStasisBubbleVFX" );

	USFXPowerCustomAction_Stasis_execStartStasisBubbleVFX_Parms StartStasisBubbleVFX_Parms;

	this->ProcessEvent ( pFnStartStasisBubbleVFX, &StartStasisBubbleVFX_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Stasis.OnPowerDetonated
// [0x00024002]
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )
// class ASFXProjectile_PowerCustomAction* oProjectile                    ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  HitActor                       ( CPF_OptionalParm | CPF_Parm )

void USFXPowerCustomAction_Stasis::OnPowerDetonated ( struct FVector const& HitLocation, struct FVector const& HitNormal, class ASFXProjectile_PowerCustomAction* oProjectile, class AActor* HitActor )
{
	static UFunction* pFnOnPowerDetonated = NULL;

	if ( ! pFnOnPowerDetonated )
		pFnOnPowerDetonated = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Stasis.OnPowerDetonated" );

	USFXPowerCustomAction_Stasis_execOnPowerDetonated_Parms OnPowerDetonated_Parms;
	memcpy ( &OnPowerDetonated_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &OnPowerDetonated_Parms.HitNormal, &HitNormal, 0xC );
	OnPowerDetonated_Parms.oProjectile = oProjectile;
	OnPowerDetonated_Parms.HitActor = HitActor;

	this->ProcessEvent ( pFnOnPowerDetonated, &OnPowerDetonated_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Stasis.StartPowerCooldown
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_Stasis::StartPowerCooldown ( )
{
	static UFunction* pFnStartPowerCooldown = NULL;

	if ( ! pFnStartPowerCooldown )
		pFnStartPowerCooldown = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Stasis.StartPowerCooldown" );

	USFXPowerCustomAction_Stasis_execStartPowerCooldown_Parms StartPowerCooldown_Parms;

	this->ProcessEvent ( pFnStartPowerCooldown, &StartPowerCooldown_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Stasis.StartCustomAction
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_Stasis::StartCustomAction ( )
{
	static UFunction* pFnStartCustomAction = NULL;

	if ( ! pFnStartCustomAction )
		pFnStartCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Stasis.StartCustomAction" );

	USFXPowerCustomAction_Stasis_execStartCustomAction_Parms StartCustomAction_Parms;

	this->ProcessEvent ( pFnStartCustomAction, &StartCustomAction_Parms, NULL );
};



class UClass* USFXGameEffect_WeaponDamageTakenBonus::pClassPointer = NULL;

class UClass* USFXGameEffect_WeaponDamageTakenBonus::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXGameEffect_WeaponDamageTakenBonus" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXGameEffect_WeaponDamageTakenBonus.OnRemoved
// [0x00020002]
// Parameters infos:

void USFXGameEffect_WeaponDamageTakenBonus::OnRemoved ( )
{
	static UFunction* pFnOnRemoved = NULL;

	if ( ! pFnOnRemoved )
		pFnOnRemoved = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_WeaponDamageTakenBonus.OnRemoved" );

	USFXGameEffect_WeaponDamageTakenBonus_execOnRemoved_Parms OnRemoved_Parms;

	this->ProcessEvent ( pFnOnRemoved, &OnRemoved_Parms, NULL );
};

// Function SFXGameContent.SFXGameEffect_WeaponDamageTakenBonus.OnApplied
// [0x00020002]
// Parameters infos:

void USFXGameEffect_WeaponDamageTakenBonus::OnApplied ( )
{
	static UFunction* pFnOnApplied = NULL;

	if ( ! pFnOnApplied )
		pFnOnApplied = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_WeaponDamageTakenBonus.OnApplied" );

	USFXGameEffect_WeaponDamageTakenBonus_execOnApplied_Parms OnApplied_Parms;

	this->ProcessEvent ( pFnOnApplied, &OnApplied_Parms, NULL );
};



class UClass* USFXGameEffect_WeightCapacity::pClassPointer = NULL;

class UClass* USFXGameEffect_WeightCapacity::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXGameEffect_WeightCapacity" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXGameEffect_WeightCapacity.OnRemoved
// [0x00020002]
// Parameters infos:

void USFXGameEffect_WeightCapacity::OnRemoved ( )
{
	static UFunction* pFnOnRemoved = NULL;

	if ( ! pFnOnRemoved )
		pFnOnRemoved = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_WeightCapacity.OnRemoved" );

	USFXGameEffect_WeightCapacity_execOnRemoved_Parms OnRemoved_Parms;

	this->ProcessEvent ( pFnOnRemoved, &OnRemoved_Parms, NULL );
};

// Function SFXGameContent.SFXGameEffect_WeightCapacity.OnApplied
// [0x00020002]
// Parameters infos:

void USFXGameEffect_WeightCapacity::OnApplied ( )
{
	static UFunction* pFnOnApplied = NULL;

	if ( ! pFnOnApplied )
		pFnOnApplied = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_WeightCapacity.OnApplied" );

	USFXGameEffect_WeightCapacity_execOnApplied_Parms OnApplied_Parms;

	this->ProcessEvent ( pFnOnApplied, &OnApplied_Parms, NULL );
};



class UClass* ASFXPlaceable::pClassPointer = NULL;

class UClass* ASFXPlaceable::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXPlaceable" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXPlaceable.ActivatePlaceable
// [0x00020102] ( FUNC_Simulated )
// Parameters infos:

void ASFXPlaceable::ActivatePlaceable ( )
{
	static UFunction* pFnActivatePlaceable = NULL;

	if ( ! pFnActivatePlaceable )
		pFnActivatePlaceable = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPlaceable.ActivatePlaceable" );

	ASFXPlaceable_execActivatePlaceable_Parms ActivatePlaceable_Parms;

	this->ProcessEvent ( pFnActivatePlaceable, &ActivatePlaceable_Parms, NULL );
};

// Function SFXGameContent.SFXPlaceable.DeactivatePlaceable
// [0x00020102] ( FUNC_Simulated )
// Parameters infos:

void ASFXPlaceable::DeactivatePlaceable ( )
{
	static UFunction* pFnDeactivatePlaceable = NULL;

	if ( ! pFnDeactivatePlaceable )
		pFnDeactivatePlaceable = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPlaceable.DeactivatePlaceable" );

	ASFXPlaceable_execDeactivatePlaceable_Parms DeactivatePlaceable_Parms;

	this->ProcessEvent ( pFnDeactivatePlaceable, &DeactivatePlaceable_Parms, NULL );
};

// Function SFXGameContent.SFXPlaceable.AllowPlaceableDamageEvents
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AController*             EventInstigator                ( CPF_Parm )

bool ASFXPlaceable::AllowPlaceableDamageEvents ( class AController* EventInstigator )
{
	static UFunction* pFnAllowPlaceableDamageEvents = NULL;

	if ( ! pFnAllowPlaceableDamageEvents )
		pFnAllowPlaceableDamageEvents = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPlaceable.AllowPlaceableDamageEvents" );

	ASFXPlaceable_execAllowPlaceableDamageEvents_Parms AllowPlaceableDamageEvents_Parms;
	AllowPlaceableDamageEvents_Parms.EventInstigator = EventInstigator;

	this->ProcessEvent ( pFnAllowPlaceableDamageEvents, &AllowPlaceableDamageEvents_Parms, NULL );

	return AllowPlaceableDamageEvents_Parms.ReturnValue;
};

// Function SFXGameContent.SFXPlaceable.ImpactWithPower
// [0x00020102] ( FUNC_Simulated )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  Resistance                     ( CPF_Parm )
// class APawn*                   Caster                         ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Force                          ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )

bool ASFXPlaceable::ImpactWithPower ( unsigned char Resistance, class APawn* Caster, struct FVector const& HitLocation, struct FVector const& HitNormal, float Damage, struct FVector const& Force, class UClass* DamageType )
{
	static UFunction* pFnImpactWithPower = NULL;

	if ( ! pFnImpactWithPower )
		pFnImpactWithPower = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPlaceable.ImpactWithPower" );

	ASFXPlaceable_execImpactWithPower_Parms ImpactWithPower_Parms;
	ImpactWithPower_Parms.Resistance = Resistance;
	ImpactWithPower_Parms.Caster = Caster;
	memcpy ( &ImpactWithPower_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ImpactWithPower_Parms.HitNormal, &HitNormal, 0xC );
	ImpactWithPower_Parms.Damage = Damage;
	memcpy ( &ImpactWithPower_Parms.Force, &Force, 0xC );
	ImpactWithPower_Parms.DamageType = DamageType;

	this->ProcessEvent ( pFnImpactWithPower, &ImpactWithPower_Parms, NULL );

	return ImpactWithPower_Parms.ReturnValue;
};

// Function SFXGameContent.SFXPlaceable.AreaDamage
// [0x00020002]
// Parameters infos:
// float                          Damage                         ( CPF_Parm )
// float                          Force                          ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// float                          ImpactRadius                   ( CPF_Parm )

void ASFXPlaceable::AreaDamage ( float Damage, float Force, class UClass* DamageType, float ImpactRadius )
{
	static UFunction* pFnAreaDamage = NULL;

	if ( ! pFnAreaDamage )
		pFnAreaDamage = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPlaceable.AreaDamage" );

	ASFXPlaceable_execAreaDamage_Parms AreaDamage_Parms;
	AreaDamage_Parms.Damage = Damage;
	AreaDamage_Parms.Force = Force;
	AreaDamage_Parms.DamageType = DamageType;
	AreaDamage_Parms.ImpactRadius = ImpactRadius;

	this->ProcessEvent ( pFnAreaDamage, &AreaDamage_Parms, NULL );
};

// Function SFXGameContent.SFXPlaceable.AreaDamageForActor
// [0x00020000]
// Parameters infos:
// class AActor*                  HitActor                       ( CPF_Parm )

void ASFXPlaceable::AreaDamageForActor ( class AActor* HitActor )
{
	static UFunction* pFnAreaDamageForActor = NULL;

	if ( ! pFnAreaDamageForActor )
		pFnAreaDamageForActor = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPlaceable.AreaDamageForActor" );

	ASFXPlaceable_execAreaDamageForActor_Parms AreaDamageForActor_Parms;
	AreaDamageForActor_Parms.HitActor = HitActor;

	this->ProcessEvent ( pFnAreaDamageForActor, &AreaDamageForActor_Parms, NULL );
};

// Function SFXGameContent.SFXPlaceable.PlaceableDestroyed
// [0x00020102] ( FUNC_Simulated )
// Parameters infos:

void ASFXPlaceable::PlaceableDestroyed ( )
{
	static UFunction* pFnPlaceableDestroyed = NULL;

	if ( ! pFnPlaceableDestroyed )
		pFnPlaceableDestroyed = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPlaceable.PlaceableDestroyed" );

	ASFXPlaceable_execPlaceableDestroyed_Parms PlaceableDestroyed_Parms;

	this->ProcessEvent ( pFnPlaceableDestroyed, &PlaceableDestroyed_Parms, NULL );
};

// Function SFXGameContent.SFXPlaceable.ResetPlaceable
// [0x00020102] ( FUNC_Simulated )
// Parameters infos:

void ASFXPlaceable::ResetPlaceable ( )
{
	static UFunction* pFnResetPlaceable = NULL;

	if ( ! pFnResetPlaceable )
		pFnResetPlaceable = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPlaceable.ResetPlaceable" );

	ASFXPlaceable_execResetPlaceable_Parms ResetPlaceable_Parms;

	this->ProcessEvent ( pFnResetPlaceable, &ResetPlaceable_Parms, NULL );
};

// Function SFXGameContent.SFXPlaceable.ReplicatedEvent
// [0x00020902] ( FUNC_Simulated | FUNC_Event )
// Parameters infos:
// struct SFXName                 VarName                        ( CPF_Parm )

void ASFXPlaceable::eventReplicatedEvent ( struct SFXName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPlaceable.ReplicatedEvent" );

	ASFXPlaceable_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};



class UClass* USFXSeqEvt_PlaceableReset::pClassPointer = NULL;

class UClass* USFXSeqEvt_PlaceableReset::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXSeqEvt_PlaceableReset" );

		return pClassPointer;
	};



class UClass* USFXSeqEvt_PlaceableDestroyed::pClassPointer = NULL;

class UClass* USFXSeqEvt_PlaceableDestroyed::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXSeqEvt_PlaceableDestroyed" );

		return pClassPointer;
	};



class UClass* USFXSeqEvt_PlaceableDeactivated::pClassPointer = NULL;

class UClass* USFXSeqEvt_PlaceableDeactivated::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXSeqEvt_PlaceableDeactivated" );

		return pClassPointer;
	};



class UClass* USFXSeqEvt_PlaceableActivated::pClassPointer = NULL;

class UClass* USFXSeqEvt_PlaceableActivated::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXSeqEvt_PlaceableActivated" );

		return pClassPointer;
	};



class UClass* ASFXProjectile_PowerCustomAction_BioticGrenade::pClassPointer = NULL;

class UClass* ASFXProjectile_PowerCustomAction_BioticGrenade::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXProjectile_PowerCustomAction_BioticGrenade" );

		return pClassPointer;
	};



class UClass* USFXRumble_Power_FragGrenade::pClassPointer = NULL;

class UClass* USFXRumble_Power_FragGrenade::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXRumble_Power_FragGrenade" );

		return pClassPointer;
	};



class UClass* USFXShake_Power_FragGrenade::pClassPointer = NULL;

class UClass* USFXShake_Power_FragGrenade::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXShake_Power_FragGrenade" );

		return pClassPointer;
	};



class UClass* ASFXProjectile_PowerCustomAction_SuperSeeking::pClassPointer = NULL;

class UClass* ASFXProjectile_PowerCustomAction_SuperSeeking::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXProjectile_PowerCustomAction_SuperSeeking" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXProjectile_PowerCustomAction_SuperSeeking.InitializeRotation
// [0x00020002]
// Parameters infos:
// class APawn*                   oCasterPawn                    ( CPF_Parm )

void ASFXProjectile_PowerCustomAction_SuperSeeking::InitializeRotation ( class APawn* oCasterPawn )
{
	static UFunction* pFnInitializeRotation = NULL;

	if ( ! pFnInitializeRotation )
		pFnInitializeRotation = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXProjectile_PowerCustomAction_SuperSeeking.InitializeRotation" );

	ASFXProjectile_PowerCustomAction_SuperSeeking_execInitializeRotation_Parms InitializeRotation_Parms;
	InitializeRotation_Parms.oCasterPawn = oCasterPawn;

	this->ProcessEvent ( pFnInitializeRotation, &InitializeRotation_Parms, NULL );
};

// Function SFXGameContent.SFXProjectile_PowerCustomAction_SuperSeeking.TickAimRotation
// [0x00020102] ( FUNC_Simulated )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )
// struct FVector                 SeekVector                     ( CPF_Parm )

void ASFXProjectile_PowerCustomAction_SuperSeeking::TickAimRotation ( float DeltaTime, struct FVector const& SeekVector )
{
	static UFunction* pFnTickAimRotation = NULL;

	if ( ! pFnTickAimRotation )
		pFnTickAimRotation = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXProjectile_PowerCustomAction_SuperSeeking.TickAimRotation" );

	ASFXProjectile_PowerCustomAction_SuperSeeking_execTickAimRotation_Parms TickAimRotation_Parms;
	TickAimRotation_Parms.DeltaTime = DeltaTime;
	memcpy ( &TickAimRotation_Parms.SeekVector, &SeekVector, 0xC );

	this->ProcessEvent ( pFnTickAimRotation, &TickAimRotation_Parms, NULL );
};



class UClass* ASFXProjectile_PowerCustomAction_Seeking::pClassPointer = NULL;

class UClass* ASFXProjectile_PowerCustomAction_Seeking::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXProjectile_PowerCustomAction_Seeking" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXProjectile_PowerCustomAction_Seeking.Tick_Prediction
// [0x00020002]
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ASFXProjectile_PowerCustomAction_Seeking::Tick_Prediction ( float DeltaTime )
{
	static UFunction* pFnTick_Prediction = NULL;

	if ( ! pFnTick_Prediction )
		pFnTick_Prediction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXProjectile_PowerCustomAction_Seeking.Tick_Prediction" );

	ASFXProjectile_PowerCustomAction_Seeking_execTick_Prediction_Parms Tick_Prediction_Parms;
	Tick_Prediction_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick_Prediction, &Tick_Prediction_Parms, NULL );
};

// Function SFXGameContent.SFXProjectile_PowerCustomAction_Seeking.Recycle
// [0x00020102] ( FUNC_Simulated )
// Parameters infos:

void ASFXProjectile_PowerCustomAction_Seeking::Recycle ( )
{
	static UFunction* pFnRecycle = NULL;

	if ( ! pFnRecycle )
		pFnRecycle = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXProjectile_PowerCustomAction_Seeking.Recycle" );

	ASFXProjectile_PowerCustomAction_Seeking_execRecycle_Parms Recycle_Parms;

	this->ProcessEvent ( pFnRecycle, &Recycle_Parms, NULL );
};

// Function SFXGameContent.SFXProjectile_PowerCustomAction_Seeking.InitializeRotation
// [0x00020000]
// Parameters infos:
// class APawn*                   oCasterPawn                    ( CPF_Parm )

void ASFXProjectile_PowerCustomAction_Seeking::InitializeRotation ( class APawn* oCasterPawn )
{
	static UFunction* pFnInitializeRotation = NULL;

	if ( ! pFnInitializeRotation )
		pFnInitializeRotation = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXProjectile_PowerCustomAction_Seeking.InitializeRotation" );

	ASFXProjectile_PowerCustomAction_Seeking_execInitializeRotation_Parms InitializeRotation_Parms;
	InitializeRotation_Parms.oCasterPawn = oCasterPawn;

	this->ProcessEvent ( pFnInitializeRotation, &InitializeRotation_Parms, NULL );
};

// Function SFXGameContent.SFXProjectile_PowerCustomAction_Seeking.InitializePowerProjectile
// [0x00020102] ( FUNC_Simulated )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fTravelSpeed                   ( CPF_Parm )
// float                          fRadius                        ( CPF_Parm )
// class USFXPowerCustomAction*   oPower                         ( CPF_Parm )

bool ASFXProjectile_PowerCustomAction_Seeking::InitializePowerProjectile ( class AActor* oCaster, float fTravelSpeed, float fRadius, class USFXPowerCustomAction* oPower )
{
	static UFunction* pFnInitializePowerProjectile = NULL;

	if ( ! pFnInitializePowerProjectile )
		pFnInitializePowerProjectile = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXProjectile_PowerCustomAction_Seeking.InitializePowerProjectile" );

	ASFXProjectile_PowerCustomAction_Seeking_execInitializePowerProjectile_Parms InitializePowerProjectile_Parms;
	InitializePowerProjectile_Parms.oCaster = oCaster;
	InitializePowerProjectile_Parms.fTravelSpeed = fTravelSpeed;
	InitializePowerProjectile_Parms.fRadius = fRadius;
	InitializePowerProjectile_Parms.oPower = oPower;

	this->ProcessEvent ( pFnInitializePowerProjectile, &InitializePowerProjectile_Parms, NULL );

	return InitializePowerProjectile_Parms.ReturnValue;
};

// Function SFXGameContent.SFXProjectile_PowerCustomAction_Seeking.PawnEvadedPower
// [0x00020002]
// Parameters infos:
// class ABioPawn*                Pawn                           ( CPF_Parm )
// struct SFXName                 Label                          ( CPF_Parm )
// float                          TimeBeforeImpact               ( CPF_Parm )

void ASFXProjectile_PowerCustomAction_Seeking::PawnEvadedPower ( class ABioPawn* Pawn, struct SFXName Label, float TimeBeforeImpact )
{
	static UFunction* pFnPawnEvadedPower = NULL;

	if ( ! pFnPawnEvadedPower )
		pFnPawnEvadedPower = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXProjectile_PowerCustomAction_Seeking.PawnEvadedPower" );

	ASFXProjectile_PowerCustomAction_Seeking_execPawnEvadedPower_Parms PawnEvadedPower_Parms;
	PawnEvadedPower_Parms.Pawn = Pawn;
	memcpy ( &PawnEvadedPower_Parms.Label, &Label, 0x8 );
	PawnEvadedPower_Parms.TimeBeforeImpact = TimeBeforeImpact;

	this->ProcessEvent ( pFnPawnEvadedPower, &PawnEvadedPower_Parms, NULL );
};

// Function SFXGameContent.SFXProjectile_PowerCustomAction_Seeking.CanLockOn
// [0x00020102] ( FUNC_Simulated )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Target                         ( CPF_Parm )
// class APawn*                   CasterPawn                     ( CPF_Parm )

bool ASFXProjectile_PowerCustomAction_Seeking::CanLockOn ( class AActor* Target, class APawn* CasterPawn )
{
	static UFunction* pFnCanLockOn = NULL;

	if ( ! pFnCanLockOn )
		pFnCanLockOn = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXProjectile_PowerCustomAction_Seeking.CanLockOn" );

	ASFXProjectile_PowerCustomAction_Seeking_execCanLockOn_Parms CanLockOn_Parms;
	CanLockOn_Parms.Target = Target;
	CanLockOn_Parms.CasterPawn = CasterPawn;

	this->ProcessEvent ( pFnCanLockOn, &CanLockOn_Parms, NULL );

	return CanLockOn_Parms.ReturnValue;
};

// Function SFXGameContent.SFXProjectile_PowerCustomAction_Seeking.Tick
// [0x00020102] ( FUNC_Simulated )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ASFXProjectile_PowerCustomAction_Seeking::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXProjectile_PowerCustomAction_Seeking.Tick" );

	ASFXProjectile_PowerCustomAction_Seeking_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function SFXGameContent.SFXProjectile_PowerCustomAction_Seeking.TickAimRotation
// [0x00020102] ( FUNC_Simulated )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )
// struct FVector                 SeekVector                     ( CPF_Parm )

void ASFXProjectile_PowerCustomAction_Seeking::TickAimRotation ( float DeltaTime, struct FVector const& SeekVector )
{
	static UFunction* pFnTickAimRotation = NULL;

	if ( ! pFnTickAimRotation )
		pFnTickAimRotation = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXProjectile_PowerCustomAction_Seeking.TickAimRotation" );

	ASFXProjectile_PowerCustomAction_Seeking_execTickAimRotation_Parms TickAimRotation_Parms;
	TickAimRotation_Parms.DeltaTime = DeltaTime;
	memcpy ( &TickAimRotation_Parms.SeekVector, &SeekVector, 0xC );

	this->ProcessEvent ( pFnTickAimRotation, &TickAimRotation_Parms, NULL );
};

// Function SFXGameContent.SFXProjectile_PowerCustomAction_Seeking.TickAim
// [0x00020102] ( FUNC_Simulated )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ASFXProjectile_PowerCustomAction_Seeking::TickAim ( float DeltaTime )
{
	static UFunction* pFnTickAim = NULL;

	if ( ! pFnTickAim )
		pFnTickAim = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXProjectile_PowerCustomAction_Seeking.TickAim" );

	ASFXProjectile_PowerCustomAction_Seeking_execTickAim_Parms TickAim_Parms;
	TickAim_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTickAim, &TickAim_Parms, NULL );
};

// Function SFXGameContent.SFXProjectile_PowerCustomAction_Seeking.GetAimLocation
// [0x00020102] ( FUNC_Simulated )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Target                         ( CPF_Parm )

struct FVector ASFXProjectile_PowerCustomAction_Seeking::GetAimLocation ( class AActor* Target )
{
	static UFunction* pFnGetAimLocation = NULL;

	if ( ! pFnGetAimLocation )
		pFnGetAimLocation = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXProjectile_PowerCustomAction_Seeking.GetAimLocation" );

	ASFXProjectile_PowerCustomAction_Seeking_execGetAimLocation_Parms GetAimLocation_Parms;
	GetAimLocation_Parms.Target = Target;

	this->ProcessEvent ( pFnGetAimLocation, &GetAimLocation_Parms, NULL );

	return GetAimLocation_Parms.ReturnValue;
};

// Function SFXGameContent.SFXProjectile_PowerCustomAction_Seeking.Timer
// [0x00020002]
// Parameters infos:

void ASFXProjectile_PowerCustomAction_Seeking::Timer ( )
{
	static UFunction* pFnTimer = NULL;

	if ( ! pFnTimer )
		pFnTimer = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXProjectile_PowerCustomAction_Seeking.Timer" );

	ASFXProjectile_PowerCustomAction_Seeking_execTimer_Parms Timer_Parms;

	this->ProcessEvent ( pFnTimer, &Timer_Parms, NULL );
};

// Function SFXGameContent.SFXProjectile_PowerCustomAction_Seeking.ReplicatedEvent
// [0x00020902] ( FUNC_Simulated | FUNC_Event )
// Parameters infos:
// struct SFXName                 VarName                        ( CPF_Parm )

void ASFXProjectile_PowerCustomAction_Seeking::eventReplicatedEvent ( struct SFXName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXProjectile_PowerCustomAction_Seeking.ReplicatedEvent" );

	ASFXProjectile_PowerCustomAction_Seeking_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};



class UClass* ASFXProjectile_PowerCustomAction_Shockwave::pClassPointer = NULL;

class UClass* ASFXProjectile_PowerCustomAction_Shockwave::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXProjectile_PowerCustomAction_Shockwave" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXProjectile_PowerCustomAction_Shockwave.ReplicateExplode
// [0x00020000]
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ASFXProjectile_PowerCustomAction_Shockwave::ReplicateExplode ( struct FVector const& HitLocation, struct FVector const& HitNormal )
{
	static UFunction* pFnReplicateExplode = NULL;

	if ( ! pFnReplicateExplode )
		pFnReplicateExplode = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXProjectile_PowerCustomAction_Shockwave.ReplicateExplode" );

	ASFXProjectile_PowerCustomAction_Shockwave_execReplicateExplode_Parms ReplicateExplode_Parms;
	memcpy ( &ReplicateExplode_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ReplicateExplode_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnReplicateExplode, &ReplicateExplode_Parms, NULL );
};

// Function SFXGameContent.SFXProjectile_PowerCustomAction_Shockwave.Tick
// [0x00020102] ( FUNC_Simulated )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ASFXProjectile_PowerCustomAction_Shockwave::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXProjectile_PowerCustomAction_Shockwave.Tick" );

	ASFXProjectile_PowerCustomAction_Shockwave_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function SFXGameContent.SFXProjectile_PowerCustomAction_Shockwave.InitializePowerProjectile
// [0x00020102] ( FUNC_Simulated )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fTravelSpeed                   ( CPF_Parm )
// float                          fRadius                        ( CPF_Parm )
// class USFXPowerCustomAction*   oPower                         ( CPF_Parm )

bool ASFXProjectile_PowerCustomAction_Shockwave::InitializePowerProjectile ( class AActor* oCaster, float fTravelSpeed, float fRadius, class USFXPowerCustomAction* oPower )
{
	static UFunction* pFnInitializePowerProjectile = NULL;

	if ( ! pFnInitializePowerProjectile )
		pFnInitializePowerProjectile = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXProjectile_PowerCustomAction_Shockwave.InitializePowerProjectile" );

	ASFXProjectile_PowerCustomAction_Shockwave_execInitializePowerProjectile_Parms InitializePowerProjectile_Parms;
	InitializePowerProjectile_Parms.oCaster = oCaster;
	InitializePowerProjectile_Parms.fTravelSpeed = fTravelSpeed;
	InitializePowerProjectile_Parms.fRadius = fRadius;
	InitializePowerProjectile_Parms.oPower = oPower;

	this->ProcessEvent ( pFnInitializePowerProjectile, &InitializePowerProjectile_Parms, NULL );

	return InitializePowerProjectile_Parms.ReturnValue;
};

// Function SFXGameContent.SFXProjectile_PowerCustomAction_Shockwave.ProcessTouch
// [0x00020002]
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ASFXProjectile_PowerCustomAction_Shockwave::ProcessTouch ( class AActor* Other, struct FVector const& HitLocation, struct FVector const& HitNormal )
{
	static UFunction* pFnProcessTouch = NULL;

	if ( ! pFnProcessTouch )
		pFnProcessTouch = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXProjectile_PowerCustomAction_Shockwave.ProcessTouch" );

	ASFXProjectile_PowerCustomAction_Shockwave_execProcessTouch_Parms ProcessTouch_Parms;
	ProcessTouch_Parms.Other = Other;
	memcpy ( &ProcessTouch_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ProcessTouch_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnProcessTouch, &ProcessTouch_Parms, NULL );
};

// Function SFXGameContent.SFXProjectile_PowerCustomAction_Shockwave.HitWall
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// struct FVector                 HitNormal                      ( CPF_Parm )
// class AActor*                  Wall                           ( CPF_Parm )
// class UPrimitiveComponent*     WallComp                       ( CPF_Parm | CPF_EditInline )

void ASFXProjectile_PowerCustomAction_Shockwave::eventHitWall ( struct FVector const& HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp )
{
	static UFunction* pFnHitWall = NULL;

	if ( ! pFnHitWall )
		pFnHitWall = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXProjectile_PowerCustomAction_Shockwave.HitWall" );

	ASFXProjectile_PowerCustomAction_Shockwave_eventHitWall_Parms HitWall_Parms;
	memcpy ( &HitWall_Parms.HitNormal, &HitNormal, 0xC );
	HitWall_Parms.Wall = Wall;
	HitWall_Parms.WallComp = WallComp;

	this->ProcessEvent ( pFnHitWall, &HitWall_Parms, NULL );
};



class UClass* USFXRumble_Power_HeavyImpact::pClassPointer = NULL;

class UClass* USFXRumble_Power_HeavyImpact::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXRumble_Power_HeavyImpact" );

		return pClassPointer;
	};



class UClass* USFXShake_Power_Shockwave::pClassPointer = NULL;

class UClass* USFXShake_Power_Shockwave::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXShake_Power_Shockwave" );

		return pClassPointer;
	};



class UClass* USFXShake_Power_HeavyImpact::pClassPointer = NULL;

class UClass* USFXShake_Power_HeavyImpact::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXShake_Power_HeavyImpact" );

		return pClassPointer;
	};



class UClass* ASFXShield_Biotic_Player::pClassPointer = NULL;

class UClass* ASFXShield_Biotic_Player::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXShield_Biotic_Player" );

		return pClassPointer;
	};



class UClass* USFXGameEffect_ConstraintDmgBonus::pClassPointer = NULL;

class UClass* USFXGameEffect_ConstraintDmgBonus::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXGameEffect_ConstraintDmgBonus" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXGameEffect_ConstraintDmgBonus.OnRemoved
// [0x00020002]
// Parameters infos:

void USFXGameEffect_ConstraintDmgBonus::OnRemoved ( )
{
	static UFunction* pFnOnRemoved = NULL;

	if ( ! pFnOnRemoved )
		pFnOnRemoved = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_ConstraintDmgBonus.OnRemoved" );

	USFXGameEffect_ConstraintDmgBonus_execOnRemoved_Parms OnRemoved_Parms;

	this->ProcessEvent ( pFnOnRemoved, &OnRemoved_Parms, NULL );
};

// Function SFXGameContent.SFXGameEffect_ConstraintDmgBonus.OnApplied
// [0x00020002]
// Parameters infos:

void USFXGameEffect_ConstraintDmgBonus::OnApplied ( )
{
	static UFunction* pFnOnApplied = NULL;

	if ( ! pFnOnApplied )
		pFnOnApplied = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_ConstraintDmgBonus.OnApplied" );

	USFXGameEffect_ConstraintDmgBonus_execOnApplied_Parms OnApplied_Parms;

	this->ProcessEvent ( pFnOnApplied, &OnApplied_Parms, NULL );
};



class UClass* USFXGameEffect_HealthPercentBonus::pClassPointer = NULL;

class UClass* USFXGameEffect_HealthPercentBonus::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXGameEffect_HealthPercentBonus" );

		return pClassPointer;
	};



class UClass* USFXGameEffect_MeleeDamageBonus::pClassPointer = NULL;

class UClass* USFXGameEffect_MeleeDamageBonus::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXGameEffect_MeleeDamageBonus" );

		return pClassPointer;
	};



class UClass* USFXGameEffect_PartBasedArmor_HealthBonus::pClassPointer = NULL;

class UClass* USFXGameEffect_PartBasedArmor_HealthBonus::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXGameEffect_PartBasedArmor_HealthBonus" );

		return pClassPointer;
	};



class UClass* USFXGameEffect_PowerBonus_Cooldown::pClassPointer = NULL;

class UClass* USFXGameEffect_PowerBonus_Cooldown::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXGameEffect_PowerBonus_Cooldown" );

		return pClassPointer;
	};



class UClass* USFXGameEffect_PowerBonus_Damage::pClassPointer = NULL;

class UClass* USFXGameEffect_PowerBonus_Damage::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXGameEffect_PowerBonus_Damage" );

		return pClassPointer;
	};



class UClass* USFXGameEffect_ShieldPercentBonus::pClassPointer = NULL;

class UClass* USFXGameEffect_ShieldPercentBonus::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXGameEffect_ShieldPercentBonus" );

		return pClassPointer;
	};



class UClass* USFXGameEffect_SpareAmmo::pClassPointer = NULL;

class UClass* USFXGameEffect_SpareAmmo::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXGameEffect_SpareAmmo" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXGameEffect_SpareAmmo.OnRemoved
// [0x00020002]
// Parameters infos:

void USFXGameEffect_SpareAmmo::OnRemoved ( )
{
	static UFunction* pFnOnRemoved = NULL;

	if ( ! pFnOnRemoved )
		pFnOnRemoved = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_SpareAmmo.OnRemoved" );

	USFXGameEffect_SpareAmmo_execOnRemoved_Parms OnRemoved_Parms;

	this->ProcessEvent ( pFnOnRemoved, &OnRemoved_Parms, NULL );
};

// Function SFXGameContent.SFXGameEffect_SpareAmmo.OnApplied
// [0x00020002]
// Parameters infos:

void USFXGameEffect_SpareAmmo::OnApplied ( )
{
	static UFunction* pFnOnApplied = NULL;

	if ( ! pFnOnApplied )
		pFnOnApplied = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_SpareAmmo.OnApplied" );

	USFXGameEffect_SpareAmmo_execOnApplied_Parms OnApplied_Parms;

	this->ProcessEvent ( pFnOnApplied, &OnApplied_Parms, NULL );
};



class UClass* USFXDamageType_SniperRifle::pClassPointer = NULL;

class UClass* USFXDamageType_SniperRifle::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXDamageType_SniperRifle" );

		return pClassPointer;
	};



class UClass* USFXGUI_StandardSniperZoomReticle::pClassPointer = NULL;

class UClass* USFXGUI_StandardSniperZoomReticle::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXGUI_StandardSniperZoomReticle" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXGUI_StandardSniperZoomReticle.ZoomChanged
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// int                            nZoom                          ( CPF_Parm )

void USFXGUI_StandardSniperZoomReticle::eventZoomChanged ( int nZoom )
{
	static UFunction* pFnZoomChanged = NULL;

	if ( ! pFnZoomChanged )
		pFnZoomChanged = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGUI_StandardSniperZoomReticle.ZoomChanged" );

	USFXGUI_StandardSniperZoomReticle_eventZoomChanged_Parms ZoomChanged_Parms;
	ZoomChanged_Parms.nZoom = nZoom;

	this->ProcessEvent ( pFnZoomChanged, &ZoomChanged_Parms, NULL );
};

// Function SFXGameContent.SFXGUI_StandardSniperZoomReticle.WeaponAmmoChanged
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// int                            nAmmo                          ( CPF_Parm )

void USFXGUI_StandardSniperZoomReticle::eventWeaponAmmoChanged ( int nAmmo )
{
	static UFunction* pFnWeaponAmmoChanged = NULL;

	if ( ! pFnWeaponAmmoChanged )
		pFnWeaponAmmoChanged = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGUI_StandardSniperZoomReticle.WeaponAmmoChanged" );

	USFXGUI_StandardSniperZoomReticle_eventWeaponAmmoChanged_Parms WeaponAmmoChanged_Parms;
	WeaponAmmoChanged_Parms.nAmmo = nAmmo;

	this->ProcessEvent ( pFnWeaponAmmoChanged, &WeaponAmmoChanged_Parms, NULL );
};

// Function SFXGameContent.SFXGUI_StandardSniperZoomReticle.DistanceToTargetChanged
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// float                          fDistance                      ( CPF_Parm )

void USFXGUI_StandardSniperZoomReticle::eventDistanceToTargetChanged ( float fDistance )
{
	static UFunction* pFnDistanceToTargetChanged = NULL;

	if ( ! pFnDistanceToTargetChanged )
		pFnDistanceToTargetChanged = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGUI_StandardSniperZoomReticle.DistanceToTargetChanged" );

	USFXGUI_StandardSniperZoomReticle_eventDistanceToTargetChanged_Parms DistanceToTargetChanged_Parms;
	DistanceToTargetChanged_Parms.fDistance = fDistance;

	this->ProcessEvent ( pFnDistanceToTargetChanged, &DistanceToTargetChanged_Parms, NULL );
};

// Function SFXGameContent.SFXGUI_StandardSniperZoomReticle.OnReticleLoaded
// [0x00020002]
// Parameters infos:

void USFXGUI_StandardSniperZoomReticle::OnReticleLoaded ( )
{
	static UFunction* pFnOnReticleLoaded = NULL;

	if ( ! pFnOnReticleLoaded )
		pFnOnReticleLoaded = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGUI_StandardSniperZoomReticle.OnReticleLoaded" );

	USFXGUI_StandardSniperZoomReticle_execOnReticleLoaded_Parms OnReticleLoaded_Parms;

	this->ProcessEvent ( pFnOnReticleLoaded, &OnReticleLoaded_Parms, NULL );
};

// Function SFXGameContent.SFXGUI_StandardSniperZoomReticle.PerformReticleHide
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// unsigned long                  bInstant                       ( CPF_Parm )

void USFXGUI_StandardSniperZoomReticle::eventPerformReticleHide ( unsigned long bInstant )
{
	static UFunction* pFnPerformReticleHide = NULL;

	if ( ! pFnPerformReticleHide )
		pFnPerformReticleHide = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGUI_StandardSniperZoomReticle.PerformReticleHide" );

	USFXGUI_StandardSniperZoomReticle_eventPerformReticleHide_Parms PerformReticleHide_Parms;
	PerformReticleHide_Parms.bInstant = bInstant;

	this->ProcessEvent ( pFnPerformReticleHide, &PerformReticleHide_Parms, NULL );
};

// Function SFXGameContent.SFXGUI_StandardSniperZoomReticle.PerformReticleShow
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// unsigned long                  bInstant                       ( CPF_Parm )

void USFXGUI_StandardSniperZoomReticle::eventPerformReticleShow ( unsigned long bInstant )
{
	static UFunction* pFnPerformReticleShow = NULL;

	if ( ! pFnPerformReticleShow )
		pFnPerformReticleShow = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGUI_StandardSniperZoomReticle.PerformReticleShow" );

	USFXGUI_StandardSniperZoomReticle_eventPerformReticleShow_Parms PerformReticleShow_Parms;
	PerformReticleShow_Parms.bInstant = bInstant;

	this->ProcessEvent ( pFnPerformReticleShow, &PerformReticleShow_Parms, NULL );
};



class UClass* ASFXWeapon_SniperRifle_Mantis::pClassPointer = NULL;

class UClass* ASFXWeapon_SniperRifle_Mantis::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXWeapon_SniperRifle_Mantis" );

		return pClassPointer;
	};



class UClass* USFXDamageType_AutoPistol::pClassPointer = NULL;

class UClass* USFXDamageType_AutoPistol::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXDamageType_AutoPistol" );

		return pClassPointer;
	};



class UClass* ASFXWeapon_SMG_Shuriken::pClassPointer = NULL;

class UClass* ASFXWeapon_SMG_Shuriken::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXWeapon_SMG_Shuriken" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXWeapon_SMG_Shuriken.GetWeaponSpecificDecalData
// [0x00420102] ( FUNC_Simulated )
// Parameters infos:
// class UDecalComponent*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
// class USFXPhysicalMaterialDecals* DecalEffects                   ( CPF_Parm )
// float                          FadeTime                       ( CPF_Parm | CPF_OutParm )

class UDecalComponent* ASFXWeapon_SMG_Shuriken::GetWeaponSpecificDecalData ( class USFXPhysicalMaterialDecals* DecalEffects, float* FadeTime )
{
	static UFunction* pFnGetWeaponSpecificDecalData = NULL;

	if ( ! pFnGetWeaponSpecificDecalData )
		pFnGetWeaponSpecificDecalData = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXWeapon_SMG_Shuriken.GetWeaponSpecificDecalData" );

	ASFXWeapon_SMG_Shuriken_execGetWeaponSpecificDecalData_Parms GetWeaponSpecificDecalData_Parms;
	GetWeaponSpecificDecalData_Parms.DecalEffects = DecalEffects;

	if ( FadeTime )
		GetWeaponSpecificDecalData_Parms.FadeTime = *FadeTime;

	this->ProcessEvent ( pFnGetWeaponSpecificDecalData, &GetWeaponSpecificDecalData_Parms, NULL );

	if ( FadeTime )
		*FadeTime = GetWeaponSpecificDecalData_Parms.FadeTime;

	return GetWeaponSpecificDecalData_Parms.ReturnValue;
};



class UClass* USFXSeqAct_EndObjective::pClassPointer = NULL;

class UClass* USFXSeqAct_EndObjective::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXSeqAct_EndObjective" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXSeqAct_EndObjective.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USFXSeqAct_EndObjective::eventGetObjClassVersion ( )
{
	static UFunction* pFnGetObjClassVersion = NULL;

	if ( ! pFnGetObjClassVersion )
		pFnGetObjClassVersion = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXSeqAct_EndObjective.GetObjClassVersion" );

	USFXSeqAct_EndObjective_eventGetObjClassVersion_Parms GetObjClassVersion_Parms;

	this->ProcessEvent ( pFnGetObjClassVersion, &GetObjClassVersion_Parms, NULL );

	return GetObjClassVersion_Parms.ReturnValue;
};

// Function SFXGameContent.SFXSeqAct_EndObjective.Activated
// [0x00020002]
// Parameters infos:

void USFXSeqAct_EndObjective::Activated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXSeqAct_EndObjective.Activated" );

	USFXSeqAct_EndObjective_execActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};



class UClass* USFXSeqAct_SetObjective::pClassPointer = NULL;

class UClass* USFXSeqAct_SetObjective::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXSeqAct_SetObjective" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXSeqAct_SetObjective.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USFXSeqAct_SetObjective::eventGetObjClassVersion ( )
{
	static UFunction* pFnGetObjClassVersion = NULL;

	if ( ! pFnGetObjClassVersion )
		pFnGetObjClassVersion = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXSeqAct_SetObjective.GetObjClassVersion" );

	USFXSeqAct_SetObjective_eventGetObjClassVersion_Parms GetObjClassVersion_Parms;

	this->ProcessEvent ( pFnGetObjClassVersion, &GetObjClassVersion_Parms, NULL );

	return GetObjClassVersion_Parms.ReturnValue;
};

// Function SFXGameContent.SFXSeqAct_SetObjective.Activated
// [0x00020002]
// Parameters infos:

void USFXSeqAct_SetObjective::Activated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXSeqAct_SetObjective.Activated" );

	USFXSeqAct_SetObjective_execActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};



class UClass* USFXSeqAct_ToggleTutorialTracking::pClassPointer = NULL;

class UClass* USFXSeqAct_ToggleTutorialTracking::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXSeqAct_ToggleTutorialTracking" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXSeqAct_ToggleTutorialTracking.Activated
// [0x00020002]
// Parameters infos:

void USFXSeqAct_ToggleTutorialTracking::Activated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXSeqAct_ToggleTutorialTracking.Activated" );

	USFXSeqAct_ToggleTutorialTracking_execActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};



class UClass* ABioPlaypenVolumeAdditive::pClassPointer = NULL;

class UClass* ABioPlaypenVolumeAdditive::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.BioPlaypenVolumeAdditive" );

		return pClassPointer;
	};

// Function SFXGameContent.BioPlaypenVolumeAdditive.UnTouch
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )

void ABioPlaypenVolumeAdditive::eventUnTouch ( class AActor* Other )
{
	static UFunction* pFnUnTouch = NULL;

	if ( ! pFnUnTouch )
		pFnUnTouch = UObject::FindObject< UFunction > ( L"Function SFXGameContent.BioPlaypenVolumeAdditive.UnTouch" );

	ABioPlaypenVolumeAdditive_eventUnTouch_Parms UnTouch_Parms;
	UnTouch_Parms.Other = Other;

	this->ProcessEvent ( pFnUnTouch, &UnTouch_Parms, NULL );
};

// Function SFXGameContent.BioPlaypenVolumeAdditive.Touch
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// class UPrimitiveComponent*     OtherComp                      ( CPF_Parm | CPF_EditInline )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ABioPlaypenVolumeAdditive::eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector const& HitLocation, struct FVector const& HitNormal )
{
	static UFunction* pFnTouch = NULL;

	if ( ! pFnTouch )
		pFnTouch = UObject::FindObject< UFunction > ( L"Function SFXGameContent.BioPlaypenVolumeAdditive.Touch" );

	ABioPlaypenVolumeAdditive_eventTouch_Parms Touch_Parms;
	Touch_Parms.Other = Other;
	Touch_Parms.OtherComp = OtherComp;
	memcpy ( &Touch_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &Touch_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnTouch, &Touch_Parms, NULL );
};



class UClass* ASFXAI_Trooper::pClassPointer = NULL;

class UClass* ASFXAI_Trooper::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXAI_Trooper" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXAI_Trooper.DrawDifficulty
// [0x00020002]
// Parameters infos:
// class UBioCheatManager*        CM                             ( CPF_Parm )

void ASFXAI_Trooper::DrawDifficulty ( class UBioCheatManager* CM )
{
	static UFunction* pFnDrawDifficulty = NULL;

	if ( ! pFnDrawDifficulty )
		pFnDrawDifficulty = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXAI_Trooper.DrawDifficulty" );

	ASFXAI_Trooper_execDrawDifficulty_Parms DrawDifficulty_Parms;
	DrawDifficulty_Parms.CM = CM;

	this->ProcessEvent ( pFnDrawDifficulty, &DrawDifficulty_Parms, NULL );
};

// Function SFXGameContent.SFXAI_Trooper.Initialize
// [0x00020002]
// Parameters infos:

void ASFXAI_Trooper::Initialize ( )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXAI_Trooper.Initialize" );

	ASFXAI_Trooper_execInitialize_Parms Initialize_Parms;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );
};

// Function SFXGameContent.SFXAI_Trooper.OnShouldThrowGrenade
// [0x00020002]
// Parameters infos:
// class USequenceAction*         Seq                            ( CPF_Parm )

void ASFXAI_Trooper::OnShouldThrowGrenade ( class USequenceAction* Seq )
{
	static UFunction* pFnOnShouldThrowGrenade = NULL;

	if ( ! pFnOnShouldThrowGrenade )
		pFnOnShouldThrowGrenade = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXAI_Trooper.OnShouldThrowGrenade" );

	ASFXAI_Trooper_execOnShouldThrowGrenade_Parms OnShouldThrowGrenade_Parms;
	OnShouldThrowGrenade_Parms.Seq = Seq;

	this->ProcessEvent ( pFnOnShouldThrowGrenade, &OnShouldThrowGrenade_Parms, NULL );
};

// Function SFXGameContent.SFXAI_Trooper.ShouldUseGrenade
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ASFXAI_Trooper::ShouldUseGrenade ( )
{
	static UFunction* pFnShouldUseGrenade = NULL;

	if ( ! pFnShouldUseGrenade )
		pFnShouldUseGrenade = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXAI_Trooper.ShouldUseGrenade" );

	ASFXAI_Trooper_execShouldUseGrenade_Parms ShouldUseGrenade_Parms;

	this->ProcessEvent ( pFnShouldUseGrenade, &ShouldUseGrenade_Parms, NULL );

	return ShouldUseGrenade_Parms.ReturnValue;
};



class UClass* USFXAICmd_Base_Trooper::pClassPointer = NULL;

class UClass* USFXAICmd_Base_Trooper::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXAICmd_Base_Trooper" );

		return pClassPointer;
	};



class UClass* USFXAICmd_Base_Cover::pClassPointer = NULL;

class UClass* USFXAICmd_Base_Cover::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXAICmd_Base_Cover" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXAICmd_Base_Cover.NotifyMoodChange
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXAICmd_Base_Cover::NotifyMoodChange ( )
{
	static UFunction* pFnNotifyMoodChange = NULL;

	if ( ! pFnNotifyMoodChange )
		pFnNotifyMoodChange = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXAICmd_Base_Cover.NotifyMoodChange" );

	USFXAICmd_Base_Cover_execNotifyMoodChange_Parms NotifyMoodChange_Parms;

	this->ProcessEvent ( pFnNotifyMoodChange, &NotifyMoodChange_Parms, NULL );

	return NotifyMoodChange_Parms.ReturnValue;
};

// Function SFXGameContent.SFXAICmd_Base_Cover.NotifyPendingPowerImpact
// [0x00020002]
// Parameters infos:
// struct SFXName                 Label                          ( CPF_Parm )
// float                          TimeBeforeImpact               ( CPF_Parm )
// class USFXPowerCustomAction*   Power                          ( CPF_Parm )
// class ASFXProjectile_PowerCustomAction* Projectile                     ( CPF_Parm )

void USFXAICmd_Base_Cover::NotifyPendingPowerImpact ( struct SFXName Label, float TimeBeforeImpact, class USFXPowerCustomAction* Power, class ASFXProjectile_PowerCustomAction* Projectile )
{
	static UFunction* pFnNotifyPendingPowerImpact = NULL;

	if ( ! pFnNotifyPendingPowerImpact )
		pFnNotifyPendingPowerImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXAICmd_Base_Cover.NotifyPendingPowerImpact" );

	USFXAICmd_Base_Cover_execNotifyPendingPowerImpact_Parms NotifyPendingPowerImpact_Parms;
	memcpy ( &NotifyPendingPowerImpact_Parms.Label, &Label, 0x8 );
	NotifyPendingPowerImpact_Parms.TimeBeforeImpact = TimeBeforeImpact;
	NotifyPendingPowerImpact_Parms.Power = Power;
	NotifyPendingPowerImpact_Parms.Projectile = Projectile;

	this->ProcessEvent ( pFnNotifyPendingPowerImpact, &NotifyPendingPowerImpact_Parms, NULL );
};

// Function SFXGameContent.SFXAICmd_Base_Cover.NotifyTakeHit
// [0x00020002]
// Parameters infos:
// class AController*             instigatedBy                   ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// int                            Damage                         ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )

void USFXAICmd_Base_Cover::NotifyTakeHit ( class AController* instigatedBy, struct FVector const& HitLocation, int Damage, class UClass* DamageType, struct FVector const& Momentum )
{
	static UFunction* pFnNotifyTakeHit = NULL;

	if ( ! pFnNotifyTakeHit )
		pFnNotifyTakeHit = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXAICmd_Base_Cover.NotifyTakeHit" );

	USFXAICmd_Base_Cover_execNotifyTakeHit_Parms NotifyTakeHit_Parms;
	NotifyTakeHit_Parms.instigatedBy = instigatedBy;
	memcpy ( &NotifyTakeHit_Parms.HitLocation, &HitLocation, 0xC );
	NotifyTakeHit_Parms.Damage = Damage;
	NotifyTakeHit_Parms.DamageType = DamageType;
	memcpy ( &NotifyTakeHit_Parms.Momentum, &Momentum, 0xC );

	this->ProcessEvent ( pFnNotifyTakeHit, &NotifyTakeHit_Parms, NULL );
};

// Function SFXGameContent.SFXAICmd_Base_Cover.ShouldAttack
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXAICmd_Base_Cover::ShouldAttack ( )
{
	static UFunction* pFnShouldAttack = NULL;

	if ( ! pFnShouldAttack )
		pFnShouldAttack = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXAICmd_Base_Cover.ShouldAttack" );

	USFXAICmd_Base_Cover_execShouldAttack_Parms ShouldAttack_Parms;

	this->ProcessEvent ( pFnShouldAttack, &ShouldAttack_Parms, NULL );

	return ShouldAttack_Parms.ReturnValue;
};

// Function SFXGameContent.SFXAICmd_Base_Cover.Resumed
// [0x00020002]
// Parameters infos:
// struct SFXName                 OldCommandName                 ( CPF_Parm )

void USFXAICmd_Base_Cover::Resumed ( struct SFXName OldCommandName )
{
	static UFunction* pFnResumed = NULL;

	if ( ! pFnResumed )
		pFnResumed = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXAICmd_Base_Cover.Resumed" );

	USFXAICmd_Base_Cover_execResumed_Parms Resumed_Parms;
	memcpy ( &Resumed_Parms.OldCommandName, &OldCommandName, 0x8 );

	this->ProcessEvent ( pFnResumed, &Resumed_Parms, NULL );
};

// Function SFXGameContent.SFXAICmd_Base_Cover.Pushed
// [0x00020002]
// Parameters infos:

void USFXAICmd_Base_Cover::Pushed ( )
{
	static UFunction* pFnPushed = NULL;

	if ( ! pFnPushed )
		pFnPushed = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXAICmd_Base_Cover.Pushed" );

	USFXAICmd_Base_Cover_execPushed_Parms Pushed_Parms;

	this->ProcessEvent ( pFnPushed, &Pushed_Parms, NULL );
};



class UClass* USFXAICmd_Reaction_ShotInCover::pClassPointer = NULL;

class UClass* USFXAICmd_Reaction_ShotInCover::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXAICmd_Reaction_ShotInCover" );

		return pClassPointer;
	};



class UClass* ASFXAmmoContainer::pClassPointer = NULL;

class UClass* ASFXAmmoContainer::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXAmmoContainer" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXAmmoContainer.ReplicatedEvent
// [0x00020902] ( FUNC_Simulated | FUNC_Event )
// Parameters infos:
// struct SFXName                 VarName                        ( CPF_Parm )

void ASFXAmmoContainer::eventReplicatedEvent ( struct SFXName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXAmmoContainer.ReplicatedEvent" );

	ASFXAmmoContainer_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function SFXGameContent.SFXAmmoContainer.GiveTo
// [0x00020002]
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )

void ASFXAmmoContainer::GiveTo ( class APawn* P )
{
	static UFunction* pFnGiveTo = NULL;

	if ( ! pFnGiveTo )
		pFnGiveTo = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXAmmoContainer.GiveTo" );

	ASFXAmmoContainer_execGiveTo_Parms GiveTo_Parms;
	GiveTo_Parms.P = P;

	this->ProcessEvent ( pFnGiveTo, &GiveTo_Parms, NULL );
};

// Function SFXGameContent.SFXAmmoContainer.StartSleeping
// [0x00020002]
// Parameters infos:

void ASFXAmmoContainer::StartSleeping ( )
{
	static UFunction* pFnStartSleeping = NULL;

	if ( ! pFnStartSleeping )
		pFnStartSleeping = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXAmmoContainer.StartSleeping" );

	ASFXAmmoContainer_execStartSleeping_Parms StartSleeping_Parms;

	this->ProcessEvent ( pFnStartSleeping, &StartSleeping_Parms, NULL );
};

// Function SFXGameContent.SFXAmmoContainer.SetRespawn
// [0x00020002]
// Parameters infos:

void ASFXAmmoContainer::SetRespawn ( )
{
	static UFunction* pFnSetRespawn = NULL;

	if ( ! pFnSetRespawn )
		pFnSetRespawn = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXAmmoContainer.SetRespawn" );

	ASFXAmmoContainer_execSetRespawn_Parms SetRespawn_Parms;

	this->ProcessEvent ( pFnSetRespawn, &SetRespawn_Parms, NULL );
};

// Function SFXGameContent.SFXAmmoContainer.SetInitialState
// [0x00020902] ( FUNC_Simulated | FUNC_Event )
// Parameters infos:

void ASFXAmmoContainer::eventSetInitialState ( )
{
	static UFunction* pFnSetInitialState = NULL;

	if ( ! pFnSetInitialState )
		pFnSetInitialState = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXAmmoContainer.SetInitialState" );

	ASFXAmmoContainer_eventSetInitialState_Parms SetInitialState_Parms;

	this->ProcessEvent ( pFnSetInitialState, &SetInitialState_Parms, NULL );
};



class UClass* USFXCustomAction_AILadderClimbDown::pClassPointer = NULL;

class UClass* USFXCustomAction_AILadderClimbDown::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_AILadderClimbDown" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_AILadderClimbUp::pClassPointer = NULL;

class UClass* USFXCustomAction_AILadderClimbUp::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_AILadderClimbUp" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXCustomAction_AILadderClimbUp.StopCustomAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_AILadderClimbUp::StopCustomAction ( )
{
	static UFunction* pFnStopCustomAction = NULL;

	if ( ! pFnStopCustomAction )
		pFnStopCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_AILadderClimbUp.StopCustomAction" );

	USFXCustomAction_AILadderClimbUp_execStopCustomAction_Parms StopCustomAction_Parms;

	this->ProcessEvent ( pFnStopCustomAction, &StopCustomAction_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_AILadderClimbUp.StartCustomAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_AILadderClimbUp::StartCustomAction ( )
{
	static UFunction* pFnStartCustomAction = NULL;

	if ( ! pFnStartCustomAction )
		pFnStartCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_AILadderClimbUp.StartCustomAction" );

	USFXCustomAction_AILadderClimbUp_execStartCustomAction_Parms StartCustomAction_Parms;

	this->ProcessEvent ( pFnStartCustomAction, &StartCustomAction_Parms, NULL );
};



class UClass* USFXCustomAction_AIMantleOverCover::pClassPointer = NULL;

class UClass* USFXCustomAction_AIMantleOverCover::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_AIMantleOverCover" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_AIMantleUp::pClassPointer = NULL;

class UClass* USFXCustomAction_AIMantleUp::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_AIMantleUp" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXCustomAction_AIMantleUp.GetBodyStanceAnim
// [0x00020002]
// Parameters infos:
// struct FBodyStance             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FBodyStance USFXCustomAction_AIMantleUp::GetBodyStanceAnim ( )
{
	static UFunction* pFnGetBodyStanceAnim = NULL;

	if ( ! pFnGetBodyStanceAnim )
		pFnGetBodyStanceAnim = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_AIMantleUp.GetBodyStanceAnim" );

	USFXCustomAction_AIMantleUp_execGetBodyStanceAnim_Parms GetBodyStanceAnim_Parms;

	this->ProcessEvent ( pFnGetBodyStanceAnim, &GetBodyStanceAnim_Parms, NULL );

	return GetBodyStanceAnim_Parms.ReturnValue;
};

// Function SFXGameContent.SFXCustomAction_AIMantleUp.StartCustomAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_AIMantleUp::StartCustomAction ( )
{
	static UFunction* pFnStartCustomAction = NULL;

	if ( ! pFnStartCustomAction )
		pFnStartCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_AIMantleUp.StartCustomAction" );

	USFXCustomAction_AIMantleUp_execStartCustomAction_Parms StartCustomAction_Parms;

	this->ProcessEvent ( pFnStartCustomAction, &StartCustomAction_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_AIMantleUp.GetUsedAnimNames
// [0x00422802] ( FUNC_Event )
// Parameters infos:
// TArray<struct SFXName>         UsedAnims                      ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void USFXCustomAction_AIMantleUp::eventGetUsedAnimNames ( TArray<struct SFXName>* UsedAnims )
{
	static UFunction* pFnGetUsedAnimNames = NULL;

	if ( ! pFnGetUsedAnimNames )
		pFnGetUsedAnimNames = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_AIMantleUp.GetUsedAnimNames" );

	USFXCustomAction_AIMantleUp_eventGetUsedAnimNames_Parms GetUsedAnimNames_Parms;

	if ( UsedAnims )
		memcpy ( &GetUsedAnimNames_Parms.UsedAnims, UsedAnims, 0x10 );

	this->ProcessEvent ( pFnGetUsedAnimNames, &GetUsedAnimNames_Parms, NULL );

	if ( UsedAnims )
		memcpy ( UsedAnims, &GetUsedAnimNames_Parms.UsedAnims, 0x10 );
};



class UClass* USFXCustomAction_AISwatTurnLeft::pClassPointer = NULL;

class UClass* USFXCustomAction_AISwatTurnLeft::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_AISwatTurnLeft" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_AISwatTurnRight::pClassPointer = NULL;

class UClass* USFXCustomAction_AISwatTurnRight::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_AISwatTurnRight" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_AnimRagdollSingularity::pClassPointer = NULL;

class UClass* USFXCustomAction_AnimRagdollSingularity::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_AnimRagdollSingularity" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_BoostDown::pClassPointer = NULL;

class UClass* USFXCustomAction_BoostDown::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_BoostDown" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXCustomAction_BoostDown.SetMoveStage
// [0x00820002]
// Parameters infos:
// unsigned char                  NextStage                      ( CPF_Parm )

void USFXCustomAction_BoostDown::SetMoveStage ( unsigned char NextStage )
{
	static UFunction* pFnSetMoveStage = NULL;

	if ( ! pFnSetMoveStage )
		pFnSetMoveStage = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_BoostDown.SetMoveStage" );

	USFXCustomAction_BoostDown_execSetMoveStage_Parms SetMoveStage_Parms;
	SetMoveStage_Parms.NextStage = NextStage;

	this->ProcessEvent ( pFnSetMoveStage, &SetMoveStage_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_BoostDown.StopCustomAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_BoostDown::StopCustomAction ( )
{
	static UFunction* pFnStopCustomAction = NULL;

	if ( ! pFnStopCustomAction )
		pFnStopCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_BoostDown.StopCustomAction" );

	USFXCustomAction_BoostDown_execStopCustomAction_Parms StopCustomAction_Parms;

	this->ProcessEvent ( pFnStopCustomAction, &StopCustomAction_Parms, NULL );
};



class UClass* USFXCustomAction_BoostUp::pClassPointer = NULL;

class UClass* USFXCustomAction_BoostUp::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_BoostUp" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXCustomAction_BoostUp.EndRocketBoots
// [0x00020002]
// Parameters infos:

void USFXCustomAction_BoostUp::EndRocketBoots ( )
{
	static UFunction* pFnEndRocketBoots = NULL;

	if ( ! pFnEndRocketBoots )
		pFnEndRocketBoots = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_BoostUp.EndRocketBoots" );

	USFXCustomAction_BoostUp_execEndRocketBoots_Parms EndRocketBoots_Parms;

	this->ProcessEvent ( pFnEndRocketBoots, &EndRocketBoots_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_BoostUp.StopCustomAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_BoostUp::StopCustomAction ( )
{
	static UFunction* pFnStopCustomAction = NULL;

	if ( ! pFnStopCustomAction )
		pFnStopCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_BoostUp.StopCustomAction" );

	USFXCustomAction_BoostUp_execStopCustomAction_Parms StopCustomAction_Parms;

	this->ProcessEvent ( pFnStopCustomAction, &StopCustomAction_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_BoostUp.SetMoveStage
// [0x00020002]
// Parameters infos:
// unsigned char                  NextStage                      ( CPF_Parm )

void USFXCustomAction_BoostUp::SetMoveStage ( unsigned char NextStage )
{
	static UFunction* pFnSetMoveStage = NULL;

	if ( ! pFnSetMoveStage )
		pFnSetMoveStage = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_BoostUp.SetMoveStage" );

	USFXCustomAction_BoostUp_execSetMoveStage_Parms SetMoveStage_Parms;
	SetMoveStage_Parms.NextStage = NextStage;

	this->ProcessEvent ( pFnSetMoveStage, &SetMoveStage_Parms, NULL );
};



class UClass* USFXGameEffect_RagdollRocket::pClassPointer = NULL;

class UClass* USFXGameEffect_RagdollRocket::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXGameEffect_RagdollRocket" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXGameEffect_RagdollRocket.HasAntiGravity
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXGameEffect_RagdollRocket::HasAntiGravity ( )
{
	static UFunction* pFnHasAntiGravity = NULL;

	if ( ! pFnHasAntiGravity )
		pFnHasAntiGravity = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_RagdollRocket.HasAntiGravity" );

	USFXGameEffect_RagdollRocket_execHasAntiGravity_Parms HasAntiGravity_Parms;

	this->ProcessEvent ( pFnHasAntiGravity, &HasAntiGravity_Parms, NULL );

	return HasAntiGravity_Parms.ReturnValue;
};

// Function SFXGameContent.SFXGameEffect_RagdollRocket.OnUpdate
// [0x00020002]
// Parameters infos:
// float                          DeltaSeconds                   ( CPF_Parm )

void USFXGameEffect_RagdollRocket::OnUpdate ( float DeltaSeconds )
{
	static UFunction* pFnOnUpdate = NULL;

	if ( ! pFnOnUpdate )
		pFnOnUpdate = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_RagdollRocket.OnUpdate" );

	USFXGameEffect_RagdollRocket_execOnUpdate_Parms OnUpdate_Parms;
	OnUpdate_Parms.DeltaSeconds = DeltaSeconds;

	this->ProcessEvent ( pFnOnUpdate, &OnUpdate_Parms, NULL );
};

// Function SFXGameContent.SFXGameEffect_RagdollRocket.OnApplied
// [0x00020002]
// Parameters infos:

void USFXGameEffect_RagdollRocket::OnApplied ( )
{
	static UFunction* pFnOnApplied = NULL;

	if ( ! pFnOnApplied )
		pFnOnApplied = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_RagdollRocket.OnApplied" );

	USFXGameEffect_RagdollRocket_execOnApplied_Parms OnApplied_Parms;

	this->ProcessEvent ( pFnOnApplied, &OnApplied_Parms, NULL );
};



class UClass* USFXCustomAction_CoverSlipLeft::pClassPointer = NULL;

class UClass* USFXCustomAction_CoverSlipLeft::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_CoverSlipLeft" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_CoverSlipLeftStanding::pClassPointer = NULL;

class UClass* USFXCustomAction_CoverSlipLeftStanding::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_CoverSlipLeftStanding" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_CoverSlipRight::pClassPointer = NULL;

class UClass* USFXCustomAction_CoverSlipRight::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_CoverSlipRight" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_CoverSlipRightStanding::pClassPointer = NULL;

class UClass* USFXCustomAction_CoverSlipRightStanding::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_CoverSlipRightStanding" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_DeathReaction::pClassPointer = NULL;

class UClass* USFXCustomAction_DeathReaction::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_DeathReaction" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXCustomAction_DeathReaction.PlayImpactSound
// [0x00020002]
// Parameters infos:

void USFXCustomAction_DeathReaction::PlayImpactSound ( )
{
	static UFunction* pFnPlayImpactSound = NULL;

	if ( ! pFnPlayImpactSound )
		pFnPlayImpactSound = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_DeathReaction.PlayImpactSound" );

	USFXCustomAction_DeathReaction_execPlayImpactSound_Parms PlayImpactSound_Parms;

	this->ProcessEvent ( pFnPlayImpactSound, &PlayImpactSound_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_DeathReaction.BodyStanceAnimEndNotification
// [0x00020002]
// Parameters infos:
// class UAnimNodeSequence*       SeqNode                        ( CPF_Parm )
// float                          PlayedTime                     ( CPF_Parm )
// float                          ExcessTime                     ( CPF_Parm )

void USFXCustomAction_DeathReaction::BodyStanceAnimEndNotification ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime )
{
	static UFunction* pFnBodyStanceAnimEndNotification = NULL;

	if ( ! pFnBodyStanceAnimEndNotification )
		pFnBodyStanceAnimEndNotification = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_DeathReaction.BodyStanceAnimEndNotification" );

	USFXCustomAction_DeathReaction_execBodyStanceAnimEndNotification_Parms BodyStanceAnimEndNotification_Parms;
	BodyStanceAnimEndNotification_Parms.SeqNode = SeqNode;
	BodyStanceAnimEndNotification_Parms.PlayedTime = PlayedTime;
	BodyStanceAnimEndNotification_Parms.ExcessTime = ExcessTime;

	this->ProcessEvent ( pFnBodyStanceAnimEndNotification, &BodyStanceAnimEndNotification_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_DeathReaction.StartCustomAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_DeathReaction::StartCustomAction ( )
{
	static UFunction* pFnStartCustomAction = NULL;

	if ( ! pFnStartCustomAction )
		pFnStartCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_DeathReaction.StartCustomAction" );

	USFXCustomAction_DeathReaction_execStartCustomAction_Parms StartCustomAction_Parms;

	this->ProcessEvent ( pFnStartCustomAction, &StartCustomAction_Parms, NULL );
};



class UClass* USFXCustomAction_DeathReaction_Corkscrew::pClassPointer = NULL;

class UClass* USFXCustomAction_DeathReaction_Corkscrew::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_DeathReaction_Corkscrew" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_DeathReaction_GibHeadshot::pClassPointer = NULL;

class UClass* USFXCustomAction_DeathReaction_GibHeadshot::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_DeathReaction_GibHeadshot" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXCustomAction_DeathReaction_GibHeadshot.ActivateImpactEmitter
// [0x00020102] ( FUNC_Simulated )
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )
// struct SFXName                 BoneName                       ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )

void USFXCustomAction_DeathReaction_GibHeadshot::ActivateImpactEmitter ( struct FVector const& HitLocation, struct FVector const& HitNormal, struct SFXName BoneName, class UClass* DamageType )
{
	static UFunction* pFnActivateImpactEmitter = NULL;

	if ( ! pFnActivateImpactEmitter )
		pFnActivateImpactEmitter = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_DeathReaction_GibHeadshot.ActivateImpactEmitter" );

	USFXCustomAction_DeathReaction_GibHeadshot_execActivateImpactEmitter_Parms ActivateImpactEmitter_Parms;
	memcpy ( &ActivateImpactEmitter_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ActivateImpactEmitter_Parms.HitNormal, &HitNormal, 0xC );
	memcpy ( &ActivateImpactEmitter_Parms.BoneName, &BoneName, 0x8 );
	ActivateImpactEmitter_Parms.DamageType = DamageType;

	this->ProcessEvent ( pFnActivateImpactEmitter, &ActivateImpactEmitter_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_DeathReaction_GibHeadshot.PrecacheVFX
// [0x00022002]
// Parameters infos:
// class ASFXObjectPool*          ObjectPool                     ( CPF_Parm )
// class URvrClientEffectManager* ClientEffects                  ( CPF_Parm )

void USFXCustomAction_DeathReaction_GibHeadshot::PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects )
{
	static UFunction* pFnPrecacheVFX = NULL;

	if ( ! pFnPrecacheVFX )
		pFnPrecacheVFX = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_DeathReaction_GibHeadshot.PrecacheVFX" );

	USFXCustomAction_DeathReaction_GibHeadshot_execPrecacheVFX_Parms PrecacheVFX_Parms;
	PrecacheVFX_Parms.ObjectPool = ObjectPool;
	PrecacheVFX_Parms.ClientEffects = ClientEffects;

	this->ProcessEvent ( pFnPrecacheVFX, &PrecacheVFX_Parms, NULL );
};



class UClass* USFXCustomAction_DeathReaction_GibKnockback::pClassPointer = NULL;

class UClass* USFXCustomAction_DeathReaction_GibKnockback::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_DeathReaction_GibKnockback" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXCustomAction_DeathReaction_GibKnockback.StopAnim
// [0x00020002]
// Parameters infos:

void USFXCustomAction_DeathReaction_GibKnockback::StopAnim ( )
{
	static UFunction* pFnStopAnim = NULL;

	if ( ! pFnStopAnim )
		pFnStopAnim = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_DeathReaction_GibKnockback.StopAnim" );

	USFXCustomAction_DeathReaction_GibKnockback_execStopAnim_Parms StopAnim_Parms;

	this->ProcessEvent ( pFnStopAnim, &StopAnim_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_DeathReaction_GibKnockback.ActivateImpactEmitter
// [0x00020102] ( FUNC_Simulated )
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )
// struct SFXName                 BoneName                       ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )

void USFXCustomAction_DeathReaction_GibKnockback::ActivateImpactEmitter ( struct FVector const& HitLocation, struct FVector const& HitNormal, struct SFXName BoneName, class UClass* DamageType )
{
	static UFunction* pFnActivateImpactEmitter = NULL;

	if ( ! pFnActivateImpactEmitter )
		pFnActivateImpactEmitter = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_DeathReaction_GibKnockback.ActivateImpactEmitter" );

	USFXCustomAction_DeathReaction_GibKnockback_execActivateImpactEmitter_Parms ActivateImpactEmitter_Parms;
	memcpy ( &ActivateImpactEmitter_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ActivateImpactEmitter_Parms.HitNormal, &HitNormal, 0xC );
	memcpy ( &ActivateImpactEmitter_Parms.BoneName, &BoneName, 0x8 );
	ActivateImpactEmitter_Parms.DamageType = DamageType;

	this->ProcessEvent ( pFnActivateImpactEmitter, &ActivateImpactEmitter_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_DeathReaction_GibKnockback.PrecacheVFX
// [0x00022002]
// Parameters infos:
// class ASFXObjectPool*          ObjectPool                     ( CPF_Parm )
// class URvrClientEffectManager* ClientEffects                  ( CPF_Parm )

void USFXCustomAction_DeathReaction_GibKnockback::PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects )
{
	static UFunction* pFnPrecacheVFX = NULL;

	if ( ! pFnPrecacheVFX )
		pFnPrecacheVFX = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_DeathReaction_GibKnockback.PrecacheVFX" );

	USFXCustomAction_DeathReaction_GibKnockback_execPrecacheVFX_Parms PrecacheVFX_Parms;
	PrecacheVFX_Parms.ObjectPool = ObjectPool;
	PrecacheVFX_Parms.ClientEffects = ClientEffects;

	this->ProcessEvent ( pFnPrecacheVFX, &PrecacheVFX_Parms, NULL );
};



class UClass* USFXCustomAction_DeathReaction_Headshot_Cover::pClassPointer = NULL;

class UClass* USFXCustomAction_DeathReaction_Headshot_Cover::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_DeathReaction_Headshot_Cover" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXCustomAction_DeathReaction_Headshot_Cover.ActivateImpactEmitter
// [0x00020102] ( FUNC_Simulated )
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )
// struct SFXName                 BoneName                       ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )

void USFXCustomAction_DeathReaction_Headshot_Cover::ActivateImpactEmitter ( struct FVector const& HitLocation, struct FVector const& HitNormal, struct SFXName BoneName, class UClass* DamageType )
{
	static UFunction* pFnActivateImpactEmitter = NULL;

	if ( ! pFnActivateImpactEmitter )
		pFnActivateImpactEmitter = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_DeathReaction_Headshot_Cover.ActivateImpactEmitter" );

	USFXCustomAction_DeathReaction_Headshot_Cover_execActivateImpactEmitter_Parms ActivateImpactEmitter_Parms;
	memcpy ( &ActivateImpactEmitter_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ActivateImpactEmitter_Parms.HitNormal, &HitNormal, 0xC );
	memcpy ( &ActivateImpactEmitter_Parms.BoneName, &BoneName, 0x8 );
	ActivateImpactEmitter_Parms.DamageType = DamageType;

	this->ProcessEvent ( pFnActivateImpactEmitter, &ActivateImpactEmitter_Parms, NULL );
};



class UClass* USFXCustomAction_DeathReaction_HeavyLeftArm::pClassPointer = NULL;

class UClass* USFXCustomAction_DeathReaction_HeavyLeftArm::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_DeathReaction_HeavyLeftArm" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_DeathReaction_HeavyRightArm::pClassPointer = NULL;

class UClass* USFXCustomAction_DeathReaction_HeavyRightArm::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_DeathReaction_HeavyRightArm" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_DeathReaction_LeftArm::pClassPointer = NULL;

class UClass* USFXCustomAction_DeathReaction_LeftArm::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_DeathReaction_LeftArm" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_DeathReaction_LeftLeg::pClassPointer = NULL;

class UClass* USFXCustomAction_DeathReaction_LeftLeg::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_DeathReaction_LeftLeg" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_DeathReaction_RightArm::pClassPointer = NULL;

class UClass* USFXCustomAction_DeathReaction_RightArm::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_DeathReaction_RightArm" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_DeathReaction_RightLeg::pClassPointer = NULL;

class UClass* USFXCustomAction_DeathReaction_RightLeg::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_DeathReaction_RightLeg" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_DeathReaction_Stomach::pClassPointer = NULL;

class UClass* USFXCustomAction_DeathReaction_Stomach::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_DeathReaction_Stomach" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_Freezing::pClassPointer = NULL;

class UClass* USFXCustomAction_Freezing::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_Freezing" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_FreezingII::pClassPointer = NULL;

class UClass* USFXCustomAction_FreezingII::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_FreezingII" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_FreezingIII::pClassPointer = NULL;

class UClass* USFXCustomAction_FreezingIII::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_FreezingIII" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_GreatPain::pClassPointer = NULL;

class UClass* USFXCustomAction_GreatPain::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_GreatPain" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_GreatPainII::pClassPointer = NULL;

class UClass* USFXCustomAction_GreatPainII::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_GreatPainII" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_IdleInspectWeapon::pClassPointer = NULL;

class UClass* USFXCustomAction_IdleInspectWeapon::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_IdleInspectWeapon" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_IdleListening::pClassPointer = NULL;

class UClass* USFXCustomAction_IdleListening::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_IdleListening" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_IdleListening2::pClassPointer = NULL;

class UClass* USFXCustomAction_IdleListening2::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_IdleListening2" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_IdleListening3::pClassPointer = NULL;

class UClass* USFXCustomAction_IdleListening3::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_IdleListening3" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_IdleStandGuard::pClassPointer = NULL;

class UClass* USFXCustomAction_IdleStandGuard::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_IdleStandGuard" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_IdleTalking::pClassPointer = NULL;

class UClass* USFXCustomAction_IdleTalking::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_IdleTalking" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_IdleTalking2::pClassPointer = NULL;

class UClass* USFXCustomAction_IdleTalking2::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_IdleTalking2" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_IdleTalking3::pClassPointer = NULL;

class UClass* USFXCustomAction_IdleTalking3::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_IdleTalking3" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_IdleUseConsole::pClassPointer = NULL;

class UClass* USFXCustomAction_IdleUseConsole::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_IdleUseConsole" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_OnFire::pClassPointer = NULL;

class UClass* USFXCustomAction_OnFire::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_OnFire" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_OnFireII::pClassPointer = NULL;

class UClass* USFXCustomAction_OnFireII::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_OnFireII" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_RollBackward::pClassPointer = NULL;

class UClass* USFXCustomAction_RollBackward::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_RollBackward" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_RollForward::pClassPointer = NULL;

class UClass* USFXCustomAction_RollForward::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_RollForward" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_RollLeft::pClassPointer = NULL;

class UClass* USFXCustomAction_RollLeft::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_RollLeft" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_RollRight::pClassPointer = NULL;

class UClass* USFXCustomAction_RollRight::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_RollRight" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_ShieldBreach::pClassPointer = NULL;

class UClass* USFXCustomAction_ShieldBreach::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_ShieldBreach" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXCustomAction_ShieldBreach.StartCustomAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_ShieldBreach::StartCustomAction ( )
{
	static UFunction* pFnStartCustomAction = NULL;

	if ( ! pFnStartCustomAction )
		pFnStartCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_ShieldBreach.StartCustomAction" );

	USFXCustomAction_ShieldBreach_execStartCustomAction_Parms StartCustomAction_Parms;

	this->ProcessEvent ( pFnStartCustomAction, &StartCustomAction_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_ShieldBreach.InternalCanDoCustomAction
// [0x00080002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioPawn*                SyncPawn                       ( CPF_Parm )
// unsigned long                  bForced                        ( CPF_Parm )

bool USFXCustomAction_ShieldBreach::InternalCanDoCustomAction ( class ABioPawn* SyncPawn, unsigned long bForced )
{
	static UFunction* pFnInternalCanDoCustomAction = NULL;

	if ( ! pFnInternalCanDoCustomAction )
		pFnInternalCanDoCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_ShieldBreach.InternalCanDoCustomAction" );

	USFXCustomAction_ShieldBreach_execInternalCanDoCustomAction_Parms InternalCanDoCustomAction_Parms;
	InternalCanDoCustomAction_Parms.SyncPawn = SyncPawn;
	InternalCanDoCustomAction_Parms.bForced = bForced;

	this->ProcessEvent ( pFnInternalCanDoCustomAction, &InternalCanDoCustomAction_Parms, NULL );

	return InternalCanDoCustomAction_Parms.ReturnValue;
};

// Function SFXGameContent.SFXCustomAction_ShieldBreach.GetUsedAnimNames
// [0x00422802] ( FUNC_Event )
// Parameters infos:
// TArray<struct SFXName>         UsedAnims                      ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void USFXCustomAction_ShieldBreach::eventGetUsedAnimNames ( TArray<struct SFXName>* UsedAnims )
{
	static UFunction* pFnGetUsedAnimNames = NULL;

	if ( ! pFnGetUsedAnimNames )
		pFnGetUsedAnimNames = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_ShieldBreach.GetUsedAnimNames" );

	USFXCustomAction_ShieldBreach_eventGetUsedAnimNames_Parms GetUsedAnimNames_Parms;

	if ( UsedAnims )
		memcpy ( &GetUsedAnimNames_Parms.UsedAnims, UsedAnims, 0x10 );

	this->ProcessEvent ( pFnGetUsedAnimNames, &GetUsedAnimNames_Parms, NULL );

	if ( UsedAnims )
		memcpy ( UsedAnims, &GetUsedAnimNames_Parms.UsedAnims, 0x10 );
};



class UClass* USFXCustomAction_StaggerImpact::pClassPointer = NULL;

class UClass* USFXCustomAction_StaggerImpact::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_StaggerImpact" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_StaggerImpactForward::pClassPointer = NULL;

class UClass* USFXCustomAction_StaggerImpactForward::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_StaggerImpactForward" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_StaggerImpactII::pClassPointer = NULL;

class UClass* USFXCustomAction_StaggerImpactII::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_StaggerImpactII" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_StaggerImpactLeft::pClassPointer = NULL;

class UClass* USFXCustomAction_StaggerImpactLeft::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_StaggerImpactLeft" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_StaggerImpactRight::pClassPointer = NULL;

class UClass* USFXCustomAction_StaggerImpactRight::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_StaggerImpactRight" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_StandardImpact::pClassPointer = NULL;

class UClass* USFXCustomAction_StandardImpact::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_StandardImpact" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_StandardImpactForward::pClassPointer = NULL;

class UClass* USFXCustomAction_StandardImpactForward::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_StandardImpactForward" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_StandardImpactII::pClassPointer = NULL;

class UClass* USFXCustomAction_StandardImpactII::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_StandardImpactII" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_StandardImpactKnee::pClassPointer = NULL;

class UClass* USFXCustomAction_StandardImpactKnee::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_StandardImpactKnee" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_StandardImpactLeft::pClassPointer = NULL;

class UClass* USFXCustomAction_StandardImpactLeft::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_StandardImpactLeft" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_StandardImpactRight::pClassPointer = NULL;

class UClass* USFXCustomAction_StandardImpactRight::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_StandardImpactRight" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_TrooperMelee::pClassPointer = NULL;

class UClass* USFXCustomAction_TrooperMelee::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_TrooperMelee" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXCustomAction_TrooperMelee.ClientDoCustomActionImpact
// [0x00024002]
// Parameters infos:
// class AActor*                  oActor                         ( CPF_Parm )
// int                            ImpactCount                    ( CPF_Parm )
// unsigned long                  bFirstTarget                   ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_OptionalParm | CPF_Parm )
// int                            CustomActionReactionType       ( CPF_OptionalParm | CPF_Parm )

void USFXCustomAction_TrooperMelee::ClientDoCustomActionImpact ( class AActor* oActor, int ImpactCount, unsigned long bFirstTarget, struct FVector const& HitLocation, struct FVector const& HitNormal, int CustomActionReactionType )
{
	static UFunction* pFnClientDoCustomActionImpact = NULL;

	if ( ! pFnClientDoCustomActionImpact )
		pFnClientDoCustomActionImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_TrooperMelee.ClientDoCustomActionImpact" );

	USFXCustomAction_TrooperMelee_execClientDoCustomActionImpact_Parms ClientDoCustomActionImpact_Parms;
	ClientDoCustomActionImpact_Parms.oActor = oActor;
	ClientDoCustomActionImpact_Parms.ImpactCount = ImpactCount;
	ClientDoCustomActionImpact_Parms.bFirstTarget = bFirstTarget;
	memcpy ( &ClientDoCustomActionImpact_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ClientDoCustomActionImpact_Parms.HitNormal, &HitNormal, 0xC );
	ClientDoCustomActionImpact_Parms.CustomActionReactionType = CustomActionReactionType;

	this->ProcessEvent ( pFnClientDoCustomActionImpact, &ClientDoCustomActionImpact_Parms, NULL );
};



class UClass* USFXCustomAction_TrooperStomp::pClassPointer = NULL;

class UClass* USFXCustomAction_TrooperStomp::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_TrooperStomp" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXCustomAction_TrooperStomp.OnTimelineImpact
// [0x00020002]
// Parameters infos:
// class AActor*                  Target                         ( CPF_Parm )

void USFXCustomAction_TrooperStomp::OnTimelineImpact ( class AActor* Target )
{
	static UFunction* pFnOnTimelineImpact = NULL;

	if ( ! pFnOnTimelineImpact )
		pFnOnTimelineImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_TrooperStomp.OnTimelineImpact" );

	USFXCustomAction_TrooperStomp_execOnTimelineImpact_Parms OnTimelineImpact_Parms;
	OnTimelineImpact_Parms.Target = Target;

	this->ProcessEvent ( pFnOnTimelineImpact, &OnTimelineImpact_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_TrooperStomp.ClientDoCustomActionImpact
// [0x00024002]
// Parameters infos:
// class AActor*                  oActor                         ( CPF_Parm )
// int                            ImpactCount                    ( CPF_Parm )
// unsigned long                  bFirstTarget                   ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_OptionalParm | CPF_Parm )
// int                            CustomActionReactionType       ( CPF_OptionalParm | CPF_Parm )

void USFXCustomAction_TrooperStomp::ClientDoCustomActionImpact ( class AActor* oActor, int ImpactCount, unsigned long bFirstTarget, struct FVector const& HitLocation, struct FVector const& HitNormal, int CustomActionReactionType )
{
	static UFunction* pFnClientDoCustomActionImpact = NULL;

	if ( ! pFnClientDoCustomActionImpact )
		pFnClientDoCustomActionImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_TrooperStomp.ClientDoCustomActionImpact" );

	USFXCustomAction_TrooperStomp_execClientDoCustomActionImpact_Parms ClientDoCustomActionImpact_Parms;
	ClientDoCustomActionImpact_Parms.oActor = oActor;
	ClientDoCustomActionImpact_Parms.ImpactCount = ImpactCount;
	ClientDoCustomActionImpact_Parms.bFirstTarget = bFirstTarget;
	memcpy ( &ClientDoCustomActionImpact_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ClientDoCustomActionImpact_Parms.HitNormal, &HitNormal, 0xC );
	ClientDoCustomActionImpact_Parms.CustomActionReactionType = CustomActionReactionType;

	this->ProcessEvent ( pFnClientDoCustomActionImpact, &ClientDoCustomActionImpact_Parms, NULL );
};



class UClass* USFXDamageType_EnemyGrenade::pClassPointer = NULL;

class UClass* USFXDamageType_EnemyGrenade::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXDamageType_EnemyGrenade" );

		return pClassPointer;
	};



class UClass* USFXDamageType_SMG_Tempest::pClassPointer = NULL;

class UClass* USFXDamageType_SMG_Tempest::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXDamageType_SMG_Tempest" );

		return pClassPointer;
	};



class UClass* USFXDamageType_TacticalMachinePistol::pClassPointer = NULL;

class UClass* USFXDamageType_TacticalMachinePistol::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXDamageType_TacticalMachinePistol" );

		return pClassPointer;
	};



class UClass* ASFXNav_InteractionHenchOmniToolCrouch::pClassPointer = NULL;

class UClass* ASFXNav_InteractionHenchOmniToolCrouch::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXNav_InteractionHenchOmniToolCrouch" );

		return pClassPointer;
	};



class UClass* ASFXNav_InteractionInspectWeapon::pClassPointer = NULL;

class UClass* ASFXNav_InteractionInspectWeapon::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXNav_InteractionInspectWeapon" );

		return pClassPointer;
	};



class UClass* ASFXNav_InteractionStandGuard::pClassPointer = NULL;

class UClass* ASFXNav_InteractionStandGuard::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXNav_InteractionStandGuard" );

		return pClassPointer;
	};



class UClass* ASFXPawn_Trooper::pClassPointer = NULL;

class UClass* ASFXPawn_Trooper::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXPawn_Trooper" );

		return pClassPointer;
	};



class UClass* USFXPowerCustomAction_CerberusGrenade::pClassPointer = NULL;

class UClass* USFXPowerCustomAction_CerberusGrenade::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXPowerCustomAction_CerberusGrenade" );

		return pClassPointer;
	};



class UClass* USFXPowerCustomAction_EnemyGrenade::pClassPointer = NULL;

class UClass* USFXPowerCustomAction_EnemyGrenade::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXPowerCustomAction_EnemyGrenade" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXPowerCustomAction_EnemyGrenade.GetProjectileAttachPoint
// [0x00420002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 AttachPoint                    ( CPF_Parm | CPF_OutParm )

bool USFXPowerCustomAction_EnemyGrenade::GetProjectileAttachPoint ( struct FVector* AttachPoint )
{
	static UFunction* pFnGetProjectileAttachPoint = NULL;

	if ( ! pFnGetProjectileAttachPoint )
		pFnGetProjectileAttachPoint = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_EnemyGrenade.GetProjectileAttachPoint" );

	USFXPowerCustomAction_EnemyGrenade_execGetProjectileAttachPoint_Parms GetProjectileAttachPoint_Parms;

	if ( AttachPoint )
		memcpy ( &GetProjectileAttachPoint_Parms.AttachPoint, AttachPoint, 0xC );

	this->ProcessEvent ( pFnGetProjectileAttachPoint, &GetProjectileAttachPoint_Parms, NULL );

	if ( AttachPoint )
		memcpy ( AttachPoint, &GetProjectileAttachPoint_Parms.AttachPoint, 0xC );

	return GetProjectileAttachPoint_Parms.ReturnValue;
};



class UClass* ASFXProjectile_PowerCustomAction_CerberusFragGrenade::pClassPointer = NULL;

class UClass* ASFXProjectile_PowerCustomAction_CerberusFragGrenade::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXProjectile_PowerCustomAction_CerberusFragGrenade" );

		return pClassPointer;
	};



class UClass* USFXRumble_MeleeHit::pClassPointer = NULL;

class UClass* USFXRumble_MeleeHit::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXRumble_MeleeHit" );

		return pClassPointer;
	};



class UClass* USFXShake_MeleeHit::pClassPointer = NULL;

class UClass* USFXShake_MeleeHit::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXShake_MeleeHit" );

		return pClassPointer;
	};



class UClass* ASFXWeapon_SMG_Hornet::pClassPointer = NULL;

class UClass* ASFXWeapon_SMG_Hornet::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXWeapon_SMG_Hornet" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXWeapon_SMG_Hornet.GetWeaponSpecificImpactSound
// [0x00020102] ( FUNC_Simulated )
// Parameters infos:
// class UWwiseEvent*             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class USFXPhysicalMaterialImpactSounds* ImpactSounds                   ( CPF_Parm )

class UWwiseEvent* ASFXWeapon_SMG_Hornet::GetWeaponSpecificImpactSound ( class USFXPhysicalMaterialImpactSounds* ImpactSounds )
{
	static UFunction* pFnGetWeaponSpecificImpactSound = NULL;

	if ( ! pFnGetWeaponSpecificImpactSound )
		pFnGetWeaponSpecificImpactSound = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXWeapon_SMG_Hornet.GetWeaponSpecificImpactSound" );

	ASFXWeapon_SMG_Hornet_execGetWeaponSpecificImpactSound_Parms GetWeaponSpecificImpactSound_Parms;
	GetWeaponSpecificImpactSound_Parms.ImpactSounds = ImpactSounds;

	this->ProcessEvent ( pFnGetWeaponSpecificImpactSound, &GetWeaponSpecificImpactSound_Parms, NULL );

	return GetWeaponSpecificImpactSound_Parms.ReturnValue;
};



class UClass* ASFXWeapon_AI_Hornet::pClassPointer = NULL;

class UClass* ASFXWeapon_AI_Hornet::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXWeapon_AI_Hornet" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_CustomLoopingInteraction::pClassPointer = NULL;

class UClass* USFXCustomAction_CustomLoopingInteraction::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_CustomLoopingInteraction" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXCustomAction_CustomLoopingInteraction.StartCustomAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_CustomLoopingInteraction::StartCustomAction ( )
{
	static UFunction* pFnStartCustomAction = NULL;

	if ( ! pFnStartCustomAction )
		pFnStartCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_CustomLoopingInteraction.StartCustomAction" );

	USFXCustomAction_CustomLoopingInteraction_execStartCustomAction_Parms StartCustomAction_Parms;

	this->ProcessEvent ( pFnStartCustomAction, &StartCustomAction_Parms, NULL );
};



class UClass* ASFXNav_InteractionHenchCustom::pClassPointer = NULL;

class UClass* ASFXNav_InteractionHenchCustom::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXNav_InteractionHenchCustom" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_HenchBeckonFront::pClassPointer = NULL;

class UClass* USFXCustomAction_HenchBeckonFront::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_HenchBeckonFront" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXCustomAction_HenchBeckonFront.CanOverrideMoveWith
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            OldCustomAction                ( CPF_Parm )
// int                            NewCustomAction                ( CPF_Parm )

bool USFXCustomAction_HenchBeckonFront::CanOverrideMoveWith ( int OldCustomAction, int NewCustomAction )
{
	static UFunction* pFnCanOverrideMoveWith = NULL;

	if ( ! pFnCanOverrideMoveWith )
		pFnCanOverrideMoveWith = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_HenchBeckonFront.CanOverrideMoveWith" );

	USFXCustomAction_HenchBeckonFront_execCanOverrideMoveWith_Parms CanOverrideMoveWith_Parms;
	CanOverrideMoveWith_Parms.OldCustomAction = OldCustomAction;
	CanOverrideMoveWith_Parms.NewCustomAction = NewCustomAction;

	this->ProcessEvent ( pFnCanOverrideMoveWith, &CanOverrideMoveWith_Parms, NULL );

	return CanOverrideMoveWith_Parms.ReturnValue;
};



class UClass* USFXCustomAction_HenchBeckonRear::pClassPointer = NULL;

class UClass* USFXCustomAction_HenchBeckonRear::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_HenchBeckonRear" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXCustomAction_HenchBeckonRear.CanOverrideMoveWith
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            OldCustomAction                ( CPF_Parm )
// int                            NewCustomAction                ( CPF_Parm )

bool USFXCustomAction_HenchBeckonRear::CanOverrideMoveWith ( int OldCustomAction, int NewCustomAction )
{
	static UFunction* pFnCanOverrideMoveWith = NULL;

	if ( ! pFnCanOverrideMoveWith )
		pFnCanOverrideMoveWith = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_HenchBeckonRear.CanOverrideMoveWith" );

	USFXCustomAction_HenchBeckonRear_execCanOverrideMoveWith_Parms CanOverrideMoveWith_Parms;
	CanOverrideMoveWith_Parms.OldCustomAction = OldCustomAction;
	CanOverrideMoveWith_Parms.NewCustomAction = NewCustomAction;

	this->ProcessEvent ( pFnCanOverrideMoveWith, &CanOverrideMoveWith_Parms, NULL );

	return CanOverrideMoveWith_Parms.ReturnValue;
};



class UClass* USFXCustomAction_HenchCrouch::pClassPointer = NULL;

class UClass* USFXCustomAction_HenchCrouch::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_HenchCrouch" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXCustomAction_HenchCrouch.CanOverrideMoveWith
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            OldCustomAction                ( CPF_Parm )
// int                            NewCustomAction                ( CPF_Parm )

bool USFXCustomAction_HenchCrouch::CanOverrideMoveWith ( int OldCustomAction, int NewCustomAction )
{
	static UFunction* pFnCanOverrideMoveWith = NULL;

	if ( ! pFnCanOverrideMoveWith )
		pFnCanOverrideMoveWith = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_HenchCrouch.CanOverrideMoveWith" );

	USFXCustomAction_HenchCrouch_execCanOverrideMoveWith_Parms CanOverrideMoveWith_Parms;
	CanOverrideMoveWith_Parms.OldCustomAction = OldCustomAction;
	CanOverrideMoveWith_Parms.NewCustomAction = NewCustomAction;

	this->ProcessEvent ( pFnCanOverrideMoveWith, &CanOverrideMoveWith_Parms, NULL );

	return CanOverrideMoveWith_Parms.ReturnValue;
};

// Function SFXGameContent.SFXCustomAction_HenchCrouch.TriggerEnd
// [0x00020002]
// Parameters infos:

void USFXCustomAction_HenchCrouch::TriggerEnd ( )
{
	static UFunction* pFnTriggerEnd = NULL;

	if ( ! pFnTriggerEnd )
		pFnTriggerEnd = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_HenchCrouch.TriggerEnd" );

	USFXCustomAction_HenchCrouch_execTriggerEnd_Parms TriggerEnd_Parms;

	this->ProcessEvent ( pFnTriggerEnd, &TriggerEnd_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_HenchCrouch.StartCustomAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_HenchCrouch::StartCustomAction ( )
{
	static UFunction* pFnStartCustomAction = NULL;

	if ( ! pFnStartCustomAction )
		pFnStartCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_HenchCrouch.StartCustomAction" );

	USFXCustomAction_HenchCrouch_execStartCustomAction_Parms StartCustomAction_Parms;

	this->ProcessEvent ( pFnStartCustomAction, &StartCustomAction_Parms, NULL );
};



class UClass* USFXCustomAction_HenchInteractLow::pClassPointer = NULL;

class UClass* USFXCustomAction_HenchInteractLow::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_HenchInteractLow" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXCustomAction_HenchInteractLow.CanOverrideMoveWith
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            OldCustomAction                ( CPF_Parm )
// int                            NewCustomAction                ( CPF_Parm )

bool USFXCustomAction_HenchInteractLow::CanOverrideMoveWith ( int OldCustomAction, int NewCustomAction )
{
	static UFunction* pFnCanOverrideMoveWith = NULL;

	if ( ! pFnCanOverrideMoveWith )
		pFnCanOverrideMoveWith = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_HenchInteractLow.CanOverrideMoveWith" );

	USFXCustomAction_HenchInteractLow_execCanOverrideMoveWith_Parms CanOverrideMoveWith_Parms;
	CanOverrideMoveWith_Parms.OldCustomAction = OldCustomAction;
	CanOverrideMoveWith_Parms.NewCustomAction = NewCustomAction;

	this->ProcessEvent ( pFnCanOverrideMoveWith, &CanOverrideMoveWith_Parms, NULL );

	return CanOverrideMoveWith_Parms.ReturnValue;
};

// Function SFXGameContent.SFXCustomAction_HenchInteractLow.StopCustomAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_HenchInteractLow::StopCustomAction ( )
{
	static UFunction* pFnStopCustomAction = NULL;

	if ( ! pFnStopCustomAction )
		pFnStopCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_HenchInteractLow.StopCustomAction" );

	USFXCustomAction_HenchInteractLow_execStopCustomAction_Parms StopCustomAction_Parms;

	this->ProcessEvent ( pFnStopCustomAction, &StopCustomAction_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_HenchInteractLow.StartCustomAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_HenchInteractLow::StartCustomAction ( )
{
	static UFunction* pFnStartCustomAction = NULL;

	if ( ! pFnStartCustomAction )
		pFnStartCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_HenchInteractLow.StartCustomAction" );

	USFXCustomAction_HenchInteractLow_execStartCustomAction_Parms StartCustomAction_Parms;

	this->ProcessEvent ( pFnStartCustomAction, &StartCustomAction_Parms, NULL );
};



class UClass* USFXCustomAction_HenchmanMelee::pClassPointer = NULL;

class UClass* USFXCustomAction_HenchmanMelee::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_HenchmanMelee" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXCustomAction_HenchmanMelee.TryNextMelee
// [0x00020002]
// Parameters infos:

void USFXCustomAction_HenchmanMelee::TryNextMelee ( )
{
	static UFunction* pFnTryNextMelee = NULL;

	if ( ! pFnTryNextMelee )
		pFnTryNextMelee = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_HenchmanMelee.TryNextMelee" );

	USFXCustomAction_HenchmanMelee_execTryNextMelee_Parms TryNextMelee_Parms;

	this->ProcessEvent ( pFnTryNextMelee, &TryNextMelee_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_HenchmanMelee.CanContinueMelee
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXCustomAction_HenchmanMelee::CanContinueMelee ( )
{
	static UFunction* pFnCanContinueMelee = NULL;

	if ( ! pFnCanContinueMelee )
		pFnCanContinueMelee = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_HenchmanMelee.CanContinueMelee" );

	USFXCustomAction_HenchmanMelee_execCanContinueMelee_Parms CanContinueMelee_Parms;

	this->ProcessEvent ( pFnCanContinueMelee, &CanContinueMelee_Parms, NULL );

	return CanContinueMelee_Parms.ReturnValue;
};

// Function SFXGameContent.SFXCustomAction_HenchmanMelee.BodyStanceAnimEndNotification
// [0x00020002]
// Parameters infos:
// class UAnimNodeSequence*       SeqNode                        ( CPF_Parm )
// float                          PlayedTime                     ( CPF_Parm )
// float                          ExcessTime                     ( CPF_Parm )

void USFXCustomAction_HenchmanMelee::BodyStanceAnimEndNotification ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime )
{
	static UFunction* pFnBodyStanceAnimEndNotification = NULL;

	if ( ! pFnBodyStanceAnimEndNotification )
		pFnBodyStanceAnimEndNotification = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_HenchmanMelee.BodyStanceAnimEndNotification" );

	USFXCustomAction_HenchmanMelee_execBodyStanceAnimEndNotification_Parms BodyStanceAnimEndNotification_Parms;
	BodyStanceAnimEndNotification_Parms.SeqNode = SeqNode;
	BodyStanceAnimEndNotification_Parms.PlayedTime = PlayedTime;
	BodyStanceAnimEndNotification_Parms.ExcessTime = ExcessTime;

	this->ProcessEvent ( pFnBodyStanceAnimEndNotification, &BodyStanceAnimEndNotification_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_HenchmanMelee.StopCustomAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_HenchmanMelee::StopCustomAction ( )
{
	static UFunction* pFnStopCustomAction = NULL;

	if ( ! pFnStopCustomAction )
		pFnStopCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_HenchmanMelee.StopCustomAction" );

	USFXCustomAction_HenchmanMelee_execStopCustomAction_Parms StopCustomAction_Parms;

	this->ProcessEvent ( pFnStopCustomAction, &StopCustomAction_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_HenchmanMelee.StartCustomAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_HenchmanMelee::StartCustomAction ( )
{
	static UFunction* pFnStartCustomAction = NULL;

	if ( ! pFnStartCustomAction )
		pFnStartCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_HenchmanMelee.StartCustomAction" );

	USFXCustomAction_HenchmanMelee_execStartCustomAction_Parms StartCustomAction_Parms;

	this->ProcessEvent ( pFnStartCustomAction, &StartCustomAction_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_HenchmanMelee.GetBodyStanceAnim
// [0x00020002]
// Parameters infos:
// struct FBodyStance             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// unsigned char                  Stage                          ( CPF_Parm )

struct FBodyStance USFXCustomAction_HenchmanMelee::GetBodyStanceAnim ( unsigned char Stage )
{
	static UFunction* pFnGetBodyStanceAnim = NULL;

	if ( ! pFnGetBodyStanceAnim )
		pFnGetBodyStanceAnim = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_HenchmanMelee.GetBodyStanceAnim" );

	USFXCustomAction_HenchmanMelee_execGetBodyStanceAnim_Parms GetBodyStanceAnim_Parms;
	GetBodyStanceAnim_Parms.Stage = Stage;

	this->ProcessEvent ( pFnGetBodyStanceAnim, &GetBodyStanceAnim_Parms, NULL );

	return GetBodyStanceAnim_Parms.ReturnValue;
};

// Function SFXGameContent.SFXCustomAction_HenchmanMelee.ShouldUsePistolAnim
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXCustomAction_HenchmanMelee::ShouldUsePistolAnim ( )
{
	static UFunction* pFnShouldUsePistolAnim = NULL;

	if ( ! pFnShouldUsePistolAnim )
		pFnShouldUsePistolAnim = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_HenchmanMelee.ShouldUsePistolAnim" );

	USFXCustomAction_HenchmanMelee_execShouldUsePistolAnim_Parms ShouldUsePistolAnim_Parms;

	this->ProcessEvent ( pFnShouldUsePistolAnim, &ShouldUsePistolAnim_Parms, NULL );

	return ShouldUsePistolAnim_Parms.ReturnValue;
};

// Function SFXGameContent.SFXCustomAction_HenchmanMelee.GetUsedAnimNames
// [0x00422802] ( FUNC_Event )
// Parameters infos:
// TArray<struct SFXName>         UsedAnims                      ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void USFXCustomAction_HenchmanMelee::eventGetUsedAnimNames ( TArray<struct SFXName>* UsedAnims )
{
	static UFunction* pFnGetUsedAnimNames = NULL;

	if ( ! pFnGetUsedAnimNames )
		pFnGetUsedAnimNames = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_HenchmanMelee.GetUsedAnimNames" );

	USFXCustomAction_HenchmanMelee_eventGetUsedAnimNames_Parms GetUsedAnimNames_Parms;

	if ( UsedAnims )
		memcpy ( &GetUsedAnimNames_Parms.UsedAnims, UsedAnims, 0x10 );

	this->ProcessEvent ( pFnGetUsedAnimNames, &GetUsedAnimNames_Parms, NULL );

	if ( UsedAnims )
		memcpy ( UsedAnims, &GetUsedAnimNames_Parms.UsedAnims, 0x10 );
};



class UClass* USFXCustomAction_HenchOmniTool::pClassPointer = NULL;

class UClass* USFXCustomAction_HenchOmniTool::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_HenchOmniTool" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXCustomAction_HenchOmniTool.CanOverrideMoveWith
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            OldCustomAction                ( CPF_Parm )
// int                            NewCustomAction                ( CPF_Parm )

bool USFXCustomAction_HenchOmniTool::CanOverrideMoveWith ( int OldCustomAction, int NewCustomAction )
{
	static UFunction* pFnCanOverrideMoveWith = NULL;

	if ( ! pFnCanOverrideMoveWith )
		pFnCanOverrideMoveWith = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_HenchOmniTool.CanOverrideMoveWith" );

	USFXCustomAction_HenchOmniTool_execCanOverrideMoveWith_Parms CanOverrideMoveWith_Parms;
	CanOverrideMoveWith_Parms.OldCustomAction = OldCustomAction;
	CanOverrideMoveWith_Parms.NewCustomAction = NewCustomAction;

	this->ProcessEvent ( pFnCanOverrideMoveWith, &CanOverrideMoveWith_Parms, NULL );

	return CanOverrideMoveWith_Parms.ReturnValue;
};

// Function SFXGameContent.SFXCustomAction_HenchOmniTool.StopCustomAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_HenchOmniTool::StopCustomAction ( )
{
	static UFunction* pFnStopCustomAction = NULL;

	if ( ! pFnStopCustomAction )
		pFnStopCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_HenchOmniTool.StopCustomAction" );

	USFXCustomAction_HenchOmniTool_execStopCustomAction_Parms StopCustomAction_Parms;

	this->ProcessEvent ( pFnStopCustomAction, &StopCustomAction_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_HenchOmniTool.StartCustomAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_HenchOmniTool::StartCustomAction ( )
{
	static UFunction* pFnStartCustomAction = NULL;

	if ( ! pFnStartCustomAction )
		pFnStartCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_HenchOmniTool.StartCustomAction" );

	USFXCustomAction_HenchOmniTool_execStartCustomAction_Parms StartCustomAction_Parms;

	this->ProcessEvent ( pFnStartCustomAction, &StartCustomAction_Parms, NULL );
};



class UClass* USFXCustomAction_HenchOmniToolCrouch::pClassPointer = NULL;

class UClass* USFXCustomAction_HenchOmniToolCrouch::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_HenchOmniToolCrouch" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXCustomAction_HenchOmniToolCrouch.CanOverrideMoveWith
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            OldCustomAction                ( CPF_Parm )
// int                            NewCustomAction                ( CPF_Parm )

bool USFXCustomAction_HenchOmniToolCrouch::CanOverrideMoveWith ( int OldCustomAction, int NewCustomAction )
{
	static UFunction* pFnCanOverrideMoveWith = NULL;

	if ( ! pFnCanOverrideMoveWith )
		pFnCanOverrideMoveWith = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_HenchOmniToolCrouch.CanOverrideMoveWith" );

	USFXCustomAction_HenchOmniToolCrouch_execCanOverrideMoveWith_Parms CanOverrideMoveWith_Parms;
	CanOverrideMoveWith_Parms.OldCustomAction = OldCustomAction;
	CanOverrideMoveWith_Parms.NewCustomAction = NewCustomAction;

	this->ProcessEvent ( pFnCanOverrideMoveWith, &CanOverrideMoveWith_Parms, NULL );

	return CanOverrideMoveWith_Parms.ReturnValue;
};

// Function SFXGameContent.SFXCustomAction_HenchOmniToolCrouch.StopCustomAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_HenchOmniToolCrouch::StopCustomAction ( )
{
	static UFunction* pFnStopCustomAction = NULL;

	if ( ! pFnStopCustomAction )
		pFnStopCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_HenchOmniToolCrouch.StopCustomAction" );

	USFXCustomAction_HenchOmniToolCrouch_execStopCustomAction_Parms StopCustomAction_Parms;

	this->ProcessEvent ( pFnStopCustomAction, &StopCustomAction_Parms, NULL );
};

// Function SFXGameContent.SFXCustomAction_HenchOmniToolCrouch.StartCustomAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_HenchOmniToolCrouch::StartCustomAction ( )
{
	static UFunction* pFnStartCustomAction = NULL;

	if ( ! pFnStartCustomAction )
		pFnStartCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_HenchOmniToolCrouch.StartCustomAction" );

	USFXCustomAction_HenchOmniToolCrouch_execStartCustomAction_Parms StartCustomAction_Parms;

	this->ProcessEvent ( pFnStartCustomAction, &StartCustomAction_Parms, NULL );
};



class UClass* USFXCustomAction_HenchRollBackward::pClassPointer = NULL;

class UClass* USFXCustomAction_HenchRollBackward::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_HenchRollBackward" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXCustomAction_HenchRollBackward.StopCustomAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_HenchRollBackward::StopCustomAction ( )
{
	static UFunction* pFnStopCustomAction = NULL;

	if ( ! pFnStopCustomAction )
		pFnStopCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_HenchRollBackward.StopCustomAction" );

	USFXCustomAction_HenchRollBackward_execStopCustomAction_Parms StopCustomAction_Parms;

	this->ProcessEvent ( pFnStopCustomAction, &StopCustomAction_Parms, NULL );
};



class UClass* USFXCustomAction_HenchRollForward::pClassPointer = NULL;

class UClass* USFXCustomAction_HenchRollForward::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_HenchRollForward" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXCustomAction_HenchRollForward.StopCustomAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_HenchRollForward::StopCustomAction ( )
{
	static UFunction* pFnStopCustomAction = NULL;

	if ( ! pFnStopCustomAction )
		pFnStopCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_HenchRollForward.StopCustomAction" );

	USFXCustomAction_HenchRollForward_execStopCustomAction_Parms StopCustomAction_Parms;

	this->ProcessEvent ( pFnStopCustomAction, &StopCustomAction_Parms, NULL );
};



class UClass* USFXCustomAction_HenchRollLeft::pClassPointer = NULL;

class UClass* USFXCustomAction_HenchRollLeft::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_HenchRollLeft" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXCustomAction_HenchRollLeft.StopCustomAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_HenchRollLeft::StopCustomAction ( )
{
	static UFunction* pFnStopCustomAction = NULL;

	if ( ! pFnStopCustomAction )
		pFnStopCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_HenchRollLeft.StopCustomAction" );

	USFXCustomAction_HenchRollLeft_execStopCustomAction_Parms StopCustomAction_Parms;

	this->ProcessEvent ( pFnStopCustomAction, &StopCustomAction_Parms, NULL );
};



class UClass* USFXCustomAction_HenchRollRight::pClassPointer = NULL;

class UClass* USFXCustomAction_HenchRollRight::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_HenchRollRight" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXCustomAction_HenchRollRight.StopCustomAction
// [0x00020002]
// Parameters infos:

void USFXCustomAction_HenchRollRight::StopCustomAction ( )
{
	static UFunction* pFnStopCustomAction = NULL;

	if ( ! pFnStopCustomAction )
		pFnStopCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_HenchRollRight.StopCustomAction" );

	USFXCustomAction_HenchRollRight_execStopCustomAction_Parms StopCustomAction_Parms;

	this->ProcessEvent ( pFnStopCustomAction, &StopCustomAction_Parms, NULL );
};



class UClass* USFXCustomAction_HenchStandIdle::pClassPointer = NULL;

class UClass* USFXCustomAction_HenchStandIdle::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_HenchStandIdle" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXCustomAction_HenchStandIdle.CanOverrideMoveWith
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            OldCustomAction                ( CPF_Parm )
// int                            NewCustomAction                ( CPF_Parm )

bool USFXCustomAction_HenchStandIdle::CanOverrideMoveWith ( int OldCustomAction, int NewCustomAction )
{
	static UFunction* pFnCanOverrideMoveWith = NULL;

	if ( ! pFnCanOverrideMoveWith )
		pFnCanOverrideMoveWith = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_HenchStandIdle.CanOverrideMoveWith" );

	USFXCustomAction_HenchStandIdle_execCanOverrideMoveWith_Parms CanOverrideMoveWith_Parms;
	CanOverrideMoveWith_Parms.OldCustomAction = OldCustomAction;
	CanOverrideMoveWith_Parms.NewCustomAction = NewCustomAction;

	this->ProcessEvent ( pFnCanOverrideMoveWith, &CanOverrideMoveWith_Parms, NULL );

	return CanOverrideMoveWith_Parms.ReturnValue;
};

// Function SFXGameContent.SFXCustomAction_HenchStandIdle.TriggerEnd
// [0x00020002]
// Parameters infos:

void USFXCustomAction_HenchStandIdle::TriggerEnd ( )
{
	static UFunction* pFnTriggerEnd = NULL;

	if ( ! pFnTriggerEnd )
		pFnTriggerEnd = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_HenchStandIdle.TriggerEnd" );

	USFXCustomAction_HenchStandIdle_execTriggerEnd_Parms TriggerEnd_Parms;

	this->ProcessEvent ( pFnTriggerEnd, &TriggerEnd_Parms, NULL );
};



class UClass* USFXCustomAction_HenchStandTyping::pClassPointer = NULL;

class UClass* USFXCustomAction_HenchStandTyping::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_HenchStandTyping" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXCustomAction_HenchStandTyping.CanOverrideMoveWith
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            OldCustomAction                ( CPF_Parm )
// int                            NewCustomAction                ( CPF_Parm )

bool USFXCustomAction_HenchStandTyping::CanOverrideMoveWith ( int OldCustomAction, int NewCustomAction )
{
	static UFunction* pFnCanOverrideMoveWith = NULL;

	if ( ! pFnCanOverrideMoveWith )
		pFnCanOverrideMoveWith = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCustomAction_HenchStandTyping.CanOverrideMoveWith" );

	USFXCustomAction_HenchStandTyping_execCanOverrideMoveWith_Parms CanOverrideMoveWith_Parms;
	CanOverrideMoveWith_Parms.OldCustomAction = OldCustomAction;
	CanOverrideMoveWith_Parms.NewCustomAction = NewCustomAction;

	this->ProcessEvent ( pFnCanOverrideMoveWith, &CanOverrideMoveWith_Parms, NULL );

	return CanOverrideMoveWith_Parms.ReturnValue;
};



class UClass* USFXDamageType_BarrierBlast::pClassPointer = NULL;

class UClass* USFXDamageType_BarrierBlast::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXDamageType_BarrierBlast" );

		return pClassPointer;
	};



class UClass* USFXDamageType_BarrierBlast_NoRagdoll::pClassPointer = NULL;

class UClass* USFXDamageType_BarrierBlast_NoRagdoll::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXDamageType_BarrierBlast_NoRagdoll" );

		return pClassPointer;
	};



class UClass* USFXDamageType_CryoFreeze::pClassPointer = NULL;

class UClass* USFXDamageType_CryoFreeze::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXDamageType_CryoFreeze" );

		return pClassPointer;
	};



class UClass* USFXDamageType_OverloadRobot::pClassPointer = NULL;

class UClass* USFXDamageType_OverloadRobot::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXDamageType_OverloadRobot" );

		return pClassPointer;
	};



class UClass* USFXDamageType_Overload::pClassPointer = NULL;

class UClass* USFXDamageType_Overload::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXDamageType_Overload" );

		return pClassPointer;
	};



class UClass* USFXDamageType_ImprovedOverload::pClassPointer = NULL;

class UClass* USFXDamageType_ImprovedOverload::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXDamageType_ImprovedOverload" );

		return pClassPointer;
	};



class UClass* USFXDamageType_ImprovedOverloadRobot::pClassPointer = NULL;

class UClass* USFXDamageType_ImprovedOverloadRobot::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXDamageType_ImprovedOverloadRobot" );

		return pClassPointer;
	};



class UClass* USFXDamageType_Overload_Ragdoll::pClassPointer = NULL;

class UClass* USFXDamageType_Overload_Ragdoll::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXDamageType_Overload_Ragdoll" );

		return pClassPointer;
	};



class UClass* USFXDamageType_Reave::pClassPointer = NULL;

class UClass* USFXDamageType_Reave::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXDamageType_Reave" );

		return pClassPointer;
	};



class UClass* USFXDamageType_Reave_Improved::pClassPointer = NULL;

class UClass* USFXDamageType_Reave_Improved::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXDamageType_Reave_Improved" );

		return pClassPointer;
	};



class UClass* USFXGameEffect_BarrierLift::pClassPointer = NULL;

class UClass* USFXGameEffect_BarrierLift::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXGameEffect_BarrierLift" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXGameEffect_BarrierLift.OnRemoved
// [0x00020002]
// Parameters infos:

void USFXGameEffect_BarrierLift::OnRemoved ( )
{
	static UFunction* pFnOnRemoved = NULL;

	if ( ! pFnOnRemoved )
		pFnOnRemoved = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_BarrierLift.OnRemoved" );

	USFXGameEffect_BarrierLift_execOnRemoved_Parms OnRemoved_Parms;

	this->ProcessEvent ( pFnOnRemoved, &OnRemoved_Parms, NULL );
};

// Function SFXGameContent.SFXGameEffect_BarrierLift.UpdateRagdoll
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGameEffect_BarrierLift::UpdateRagdoll ( )
{
	static UFunction* pFnUpdateRagdoll = NULL;

	if ( ! pFnUpdateRagdoll )
		pFnUpdateRagdoll = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_BarrierLift.UpdateRagdoll" );

	USFXGameEffect_BarrierLift_execUpdateRagdoll_Parms UpdateRagdoll_Parms;

	this->ProcessEvent ( pFnUpdateRagdoll, &UpdateRagdoll_Parms, NULL );
};

// Function SFXGameContent.SFXGameEffect_BarrierLift.OnApplied
// [0x00020002]
// Parameters infos:

void USFXGameEffect_BarrierLift::OnApplied ( )
{
	static UFunction* pFnOnApplied = NULL;

	if ( ! pFnOnApplied )
		pFnOnApplied = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_BarrierLift.OnApplied" );

	USFXGameEffect_BarrierLift_execOnApplied_Parms OnApplied_Parms;

	this->ProcessEvent ( pFnOnApplied, &OnApplied_Parms, NULL );
};



class UClass* USFXGameEffect_DefensiveArmor::pClassPointer = NULL;

class UClass* USFXGameEffect_DefensiveArmor::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXGameEffect_DefensiveArmor" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXGameEffect_DefensiveArmor.OnRemoved
// [0x00020002]
// Parameters infos:

void USFXGameEffect_DefensiveArmor::OnRemoved ( )
{
	static UFunction* pFnOnRemoved = NULL;

	if ( ! pFnOnRemoved )
		pFnOnRemoved = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_DefensiveArmor.OnRemoved" );

	USFXGameEffect_DefensiveArmor_execOnRemoved_Parms OnRemoved_Parms;

	this->ProcessEvent ( pFnOnRemoved, &OnRemoved_Parms, NULL );
};

// Function SFXGameContent.SFXGameEffect_DefensiveArmor.TurnVFXOff
// [0x00020002]
// Parameters infos:

void USFXGameEffect_DefensiveArmor::TurnVFXOff ( )
{
	static UFunction* pFnTurnVFXOff = NULL;

	if ( ! pFnTurnVFXOff )
		pFnTurnVFXOff = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_DefensiveArmor.TurnVFXOff" );

	USFXGameEffect_DefensiveArmor_execTurnVFXOff_Parms TurnVFXOff_Parms;

	this->ProcessEvent ( pFnTurnVFXOff, &TurnVFXOff_Parms, NULL );
};

// Function SFXGameContent.SFXGameEffect_DefensiveArmor.TurnVFXOn
// [0x00820002]
// Parameters infos:

void USFXGameEffect_DefensiveArmor::TurnVFXOn ( )
{
	static UFunction* pFnTurnVFXOn = NULL;

	if ( ! pFnTurnVFXOn )
		pFnTurnVFXOn = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_DefensiveArmor.TurnVFXOn" );

	USFXGameEffect_DefensiveArmor_execTurnVFXOn_Parms TurnVFXOn_Parms;

	this->ProcessEvent ( pFnTurnVFXOn, &TurnVFXOn_Parms, NULL );
};

// Function SFXGameContent.SFXGameEffect_DefensiveArmor.OnUpdate
// [0x00020002]
// Parameters infos:
// float                          DeltaSeconds                   ( CPF_Parm )

void USFXGameEffect_DefensiveArmor::OnUpdate ( float DeltaSeconds )
{
	static UFunction* pFnOnUpdate = NULL;

	if ( ! pFnOnUpdate )
		pFnOnUpdate = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_DefensiveArmor.OnUpdate" );

	USFXGameEffect_DefensiveArmor_execOnUpdate_Parms OnUpdate_Parms;
	OnUpdate_Parms.DeltaSeconds = DeltaSeconds;

	this->ProcessEvent ( pFnOnUpdate, &OnUpdate_Parms, NULL );
};

// Function SFXGameContent.SFXGameEffect_DefensiveArmor.OnApplied
// [0x00020002]
// Parameters infos:

void USFXGameEffect_DefensiveArmor::OnApplied ( )
{
	static UFunction* pFnOnApplied = NULL;

	if ( ! pFnOnApplied )
		pFnOnApplied = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_DefensiveArmor.OnApplied" );

	USFXGameEffect_DefensiveArmor_execOnApplied_Parms OnApplied_Parms;

	this->ProcessEvent ( pFnOnApplied, &OnApplied_Parms, NULL );
};



class UClass* USFXPowerCustomAction_DefensiveShield::pClassPointer = NULL;

class UClass* USFXPowerCustomAction_DefensiveShield::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXPowerCustomAction_DefensiveShield" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXPowerCustomAction_DefensiveShield.RestoreSaveState
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_DefensiveShield::RestoreSaveState ( )
{
	static UFunction* pFnRestoreSaveState = NULL;

	if ( ! pFnRestoreSaveState )
		pFnRestoreSaveState = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_DefensiveShield.RestoreSaveState" );

	USFXPowerCustomAction_DefensiveShield_execRestoreSaveState_Parms RestoreSaveState_Parms;

	this->ProcessEvent ( pFnRestoreSaveState, &RestoreSaveState_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_DefensiveShield.ShouldUsePower
// [0x00420802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Target                         ( CPF_Parm )
// FString                        sOptionalInfo                  ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool USFXPowerCustomAction_DefensiveShield::eventShouldUsePower ( class AActor* Target, FString* sOptionalInfo )
{
	static UFunction* pFnShouldUsePower = NULL;

	if ( ! pFnShouldUsePower )
		pFnShouldUsePower = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_DefensiveShield.ShouldUsePower" );

	USFXPowerCustomAction_DefensiveShield_eventShouldUsePower_Parms ShouldUsePower_Parms;
	ShouldUsePower_Parms.Target = Target;

	if ( sOptionalInfo )
		memcpy ( &ShouldUsePower_Parms.sOptionalInfo, sOptionalInfo, 0x10 );

	this->ProcessEvent ( pFnShouldUsePower, &ShouldUsePower_Parms, NULL );

	if ( sOptionalInfo )
		memcpy ( sOptionalInfo, &ShouldUsePower_Parms.sOptionalInfo, 0x10 );

	return ShouldUsePower_Parms.ReturnValue;
};

// Function SFXGameContent.SFXPowerCustomAction_DefensiveShield.DoJoinInProgress
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_DefensiveShield::DoJoinInProgress ( )
{
	static UFunction* pFnDoJoinInProgress = NULL;

	if ( ! pFnDoJoinInProgress )
		pFnDoJoinInProgress = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_DefensiveShield.DoJoinInProgress" );

	USFXPowerCustomAction_DefensiveShield_execDoJoinInProgress_Parms DoJoinInProgress_Parms;

	this->ProcessEvent ( pFnDoJoinInProgress, &DoJoinInProgress_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_DefensiveShield.CanUsePower
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Target                         ( CPF_Parm )

bool USFXPowerCustomAction_DefensiveShield::CanUsePower ( class AActor* Target )
{
	static UFunction* pFnCanUsePower = NULL;

	if ( ! pFnCanUsePower )
		pFnCanUsePower = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_DefensiveShield.CanUsePower" );

	USFXPowerCustomAction_DefensiveShield_execCanUsePower_Parms CanUsePower_Parms;
	CanUsePower_Parms.Target = Target;

	this->ProcessEvent ( pFnCanUsePower, &CanUsePower_Parms, NULL );

	return CanUsePower_Parms.ReturnValue;
};

// Function SFXGameContent.SFXPowerCustomAction_DefensiveShield.RecalculateAllPowerData
// [0x00024002]
// Parameters infos:
// unsigned long                  bReset                         ( CPF_OptionalParm | CPF_Parm )

void USFXPowerCustomAction_DefensiveShield::RecalculateAllPowerData ( unsigned long bReset )
{
	static UFunction* pFnRecalculateAllPowerData = NULL;

	if ( ! pFnRecalculateAllPowerData )
		pFnRecalculateAllPowerData = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_DefensiveShield.RecalculateAllPowerData" );

	USFXPowerCustomAction_DefensiveShield_execRecalculateAllPowerData_Parms RecalculateAllPowerData_Parms;
	RecalculateAllPowerData_Parms.bReset = bReset;

	this->ProcessEvent ( pFnRecalculateAllPowerData, &RecalculateAllPowerData_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_DefensiveShield.ResetPower
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_DefensiveShield::ResetPower ( )
{
	static UFunction* pFnResetPower = NULL;

	if ( ! pFnResetPower )
		pFnResetPower = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_DefensiveShield.ResetPower" );

	USFXPowerCustomAction_DefensiveShield_execResetPower_Parms ResetPower_Parms;

	this->ProcessEvent ( pFnResetPower, &ResetPower_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_DefensiveShield.ClientDoPowerSubsequentImpact
// [0x00024002]
// Parameters infos:
// class AActor*                  oActor                         ( CPF_Parm )
// int                            CustomActionReactionType       ( CPF_OptionalParm | CPF_Parm )
// float                          Duration                       ( CPF_OptionalParm | CPF_Parm )
// int                            ImpactCount                    ( CPF_OptionalParm | CPF_Parm )
// float                          Delay                          ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  DoCallback                     ( CPF_OptionalParm | CPF_Parm )

void USFXPowerCustomAction_DefensiveShield::ClientDoPowerSubsequentImpact ( class AActor* oActor, int CustomActionReactionType, float Duration, int ImpactCount, float Delay, unsigned long DoCallback )
{
	static UFunction* pFnClientDoPowerSubsequentImpact = NULL;

	if ( ! pFnClientDoPowerSubsequentImpact )
		pFnClientDoPowerSubsequentImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_DefensiveShield.ClientDoPowerSubsequentImpact" );

	USFXPowerCustomAction_DefensiveShield_execClientDoPowerSubsequentImpact_Parms ClientDoPowerSubsequentImpact_Parms;
	ClientDoPowerSubsequentImpact_Parms.oActor = oActor;
	ClientDoPowerSubsequentImpact_Parms.CustomActionReactionType = CustomActionReactionType;
	ClientDoPowerSubsequentImpact_Parms.Duration = Duration;
	ClientDoPowerSubsequentImpact_Parms.ImpactCount = ImpactCount;
	ClientDoPowerSubsequentImpact_Parms.Delay = Delay;
	ClientDoPowerSubsequentImpact_Parms.DoCallback = DoCallback;

	this->ProcessEvent ( pFnClientDoPowerSubsequentImpact, &ClientDoPowerSubsequentImpact_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_DefensiveShield.TryApplyArmor
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_DefensiveShield::TryApplyArmor ( )
{
	static UFunction* pFnTryApplyArmor = NULL;

	if ( ! pFnTryApplyArmor )
		pFnTryApplyArmor = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_DefensiveShield.TryApplyArmor" );

	USFXPowerCustomAction_DefensiveShield_execTryApplyArmor_Parms TryApplyArmor_Parms;

	this->ProcessEvent ( pFnTryApplyArmor, &TryApplyArmor_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_DefensiveShield.SetupEffect
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// class USFXGameEffect_DefensiveArmor* Effect                         ( CPF_Parm )

void USFXPowerCustomAction_DefensiveShield::SetupEffect ( class USFXGameEffect_DefensiveArmor* Effect )
{
	static UFunction* pFnSetupEffect = NULL;

	if ( ! pFnSetupEffect )
		pFnSetupEffect = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_DefensiveShield.SetupEffect" );

	USFXPowerCustomAction_DefensiveShield_execSetupEffect_Parms SetupEffect_Parms;
	SetupEffect_Parms.Effect = Effect;

	this->ProcessEvent ( pFnSetupEffect, &SetupEffect_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_DefensiveShield.ApplyArmor
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_DefensiveShield::ApplyArmor ( )
{
	static UFunction* pFnApplyArmor = NULL;

	if ( ! pFnApplyArmor )
		pFnApplyArmor = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_DefensiveShield.ApplyArmor" );

	USFXPowerCustomAction_DefensiveShield_execApplyArmor_Parms ApplyArmor_Parms;

	this->ProcessEvent ( pFnApplyArmor, &ApplyArmor_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_DefensiveShield.RemoveArmor
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_DefensiveShield::RemoveArmor ( )
{
	static UFunction* pFnRemoveArmor = NULL;

	if ( ! pFnRemoveArmor )
		pFnRemoveArmor = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_DefensiveShield.RemoveArmor" );

	USFXPowerCustomAction_DefensiveShield_execRemoveArmor_Parms RemoveArmor_Parms;

	this->ProcessEvent ( pFnRemoveArmor, &RemoveArmor_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_DefensiveShield.OnImpact
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  Resistance                     ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

bool USFXPowerCustomAction_DefensiveShield::OnImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector const& HitLocation, struct FVector const& HitNormal )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_DefensiveShield.OnImpact" );

	USFXPowerCustomAction_DefensiveShield_execOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.Resistance = Resistance;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;
	memcpy ( &OnImpact_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &OnImpact_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};



class UClass* USFXGameEffect_HenchmanArmorBonus_PowerCooldownBonus::pClassPointer = NULL;

class UClass* USFXGameEffect_HenchmanArmorBonus_PowerCooldownBonus::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXGameEffect_HenchmanArmorBonus_PowerCooldownBonus" );

		return pClassPointer;
	};



class UClass* USFXGameEffect_HenchmanArmorBonus_PowerDamageBonus::pClassPointer = NULL;

class UClass* USFXGameEffect_HenchmanArmorBonus_PowerDamageBonus::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXGameEffect_HenchmanArmorBonus_PowerDamageBonus" );

		return pClassPointer;
	};



class UClass* USFXGameEffect_OverloadChain::pClassPointer = NULL;

class UClass* USFXGameEffect_OverloadChain::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXGameEffect_OverloadChain" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXGameEffect_OverloadChain.OnRemoved
// [0x00020002]
// Parameters infos:

void USFXGameEffect_OverloadChain::OnRemoved ( )
{
	static UFunction* pFnOnRemoved = NULL;

	if ( ! pFnOnRemoved )
		pFnOnRemoved = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_OverloadChain.OnRemoved" );

	USFXGameEffect_OverloadChain_execOnRemoved_Parms OnRemoved_Parms;

	this->ProcessEvent ( pFnOnRemoved, &OnRemoved_Parms, NULL );
};

// Function SFXGameContent.SFXGameEffect_OverloadChain.ImpactAdditionalTarget
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oActor                         ( CPF_Parm )

bool USFXGameEffect_OverloadChain::ImpactAdditionalTarget ( class AActor* oActor )
{
	static UFunction* pFnImpactAdditionalTarget = NULL;

	if ( ! pFnImpactAdditionalTarget )
		pFnImpactAdditionalTarget = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_OverloadChain.ImpactAdditionalTarget" );

	USFXGameEffect_OverloadChain_execImpactAdditionalTarget_Parms ImpactAdditionalTarget_Parms;
	ImpactAdditionalTarget_Parms.oActor = oActor;

	this->ProcessEvent ( pFnImpactAdditionalTarget, &ImpactAdditionalTarget_Parms, NULL );

	return ImpactAdditionalTarget_Parms.ReturnValue;
};

// Function SFXGameContent.SFXGameEffect_OverloadChain.SelectAndImpactNextTarget
// [0x00020002]
// Parameters infos:

void USFXGameEffect_OverloadChain::SelectAndImpactNextTarget ( )
{
	static UFunction* pFnSelectAndImpactNextTarget = NULL;

	if ( ! pFnSelectAndImpactNextTarget )
		pFnSelectAndImpactNextTarget = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_OverloadChain.SelectAndImpactNextTarget" );

	USFXGameEffect_OverloadChain_execSelectAndImpactNextTarget_Parms SelectAndImpactNextTarget_Parms;

	this->ProcessEvent ( pFnSelectAndImpactNextTarget, &SelectAndImpactNextTarget_Parms, NULL );
};

// Function SFXGameContent.SFXGameEffect_OverloadChain.OnUpdate
// [0x00020002]
// Parameters infos:
// float                          DeltaSeconds                   ( CPF_Parm )

void USFXGameEffect_OverloadChain::OnUpdate ( float DeltaSeconds )
{
	static UFunction* pFnOnUpdate = NULL;

	if ( ! pFnOnUpdate )
		pFnOnUpdate = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_OverloadChain.OnUpdate" );

	USFXGameEffect_OverloadChain_execOnUpdate_Parms OnUpdate_Parms;
	OnUpdate_Parms.DeltaSeconds = DeltaSeconds;

	this->ProcessEvent ( pFnOnUpdate, &OnUpdate_Parms, NULL );
};

// Function SFXGameContent.SFXGameEffect_OverloadChain.PlayBeamEffect
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// class UParticleSystemComponent* PS                             ( CPF_Parm | CPF_EditInline )
// struct FVector                 TargetLocation                 ( CPF_Parm )

void USFXGameEffect_OverloadChain::PlayBeamEffect ( class UParticleSystemComponent* PS, struct FVector const& TargetLocation )
{
	static UFunction* pFnPlayBeamEffect = NULL;

	if ( ! pFnPlayBeamEffect )
		pFnPlayBeamEffect = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_OverloadChain.PlayBeamEffect" );

	USFXGameEffect_OverloadChain_execPlayBeamEffect_Parms PlayBeamEffect_Parms;
	PlayBeamEffect_Parms.PS = PS;
	memcpy ( &PlayBeamEffect_Parms.TargetLocation, &TargetLocation, 0xC );

	this->ProcessEvent ( pFnPlayBeamEffect, &PlayBeamEffect_Parms, NULL );
};

// Function SFXGameContent.SFXGameEffect_OverloadChain.OnApplied
// [0x00020002]
// Parameters infos:

void USFXGameEffect_OverloadChain::OnApplied ( )
{
	static UFunction* pFnOnApplied = NULL;

	if ( ! pFnOnApplied )
		pFnOnApplied = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_OverloadChain.OnApplied" );

	USFXGameEffect_OverloadChain_execOnApplied_Parms OnApplied_Parms;

	this->ProcessEvent ( pFnOnApplied, &OnApplied_Parms, NULL );
};



class UClass* USFXPowerCustomAction_Overload::pClassPointer = NULL;

class UClass* USFXPowerCustomAction_Overload::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXPowerCustomAction_Overload" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXPowerCustomAction_Overload.PopulatePowerStatBarEvolves
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_Overload::PopulatePowerStatBarEvolves ( )
{
	static UFunction* pFnPopulatePowerStatBarEvolves = NULL;

	if ( ! pFnPopulatePowerStatBarEvolves )
		pFnPopulatePowerStatBarEvolves = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Overload.PopulatePowerStatBarEvolves" );

	USFXPowerCustomAction_Overload_execPopulatePowerStatBarEvolves_Parms PopulatePowerStatBarEvolves_Parms;

	this->ProcessEvent ( pFnPopulatePowerStatBarEvolves, &PopulatePowerStatBarEvolves_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Overload.ApplyBonus
// [0x00024002]
// Parameters infos:
// struct SFXName                 Parameter                      ( CPF_Parm )
// class USFXGameEffect*          Bonus                          ( CPF_Parm )
// unsigned long                  bRemove                        ( CPF_OptionalParm | CPF_Parm )

void USFXPowerCustomAction_Overload::ApplyBonus ( struct SFXName Parameter, class USFXGameEffect* Bonus, unsigned long bRemove )
{
	static UFunction* pFnApplyBonus = NULL;

	if ( ! pFnApplyBonus )
		pFnApplyBonus = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Overload.ApplyBonus" );

	USFXPowerCustomAction_Overload_execApplyBonus_Parms ApplyBonus_Parms;
	memcpy ( &ApplyBonus_Parms.Parameter, &Parameter, 0x8 );
	ApplyBonus_Parms.Bonus = Bonus;
	ApplyBonus_Parms.bRemove = bRemove;

	this->ProcessEvent ( pFnApplyBonus, &ApplyBonus_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Overload.RecalculateAllPowerData
// [0x00024002]
// Parameters infos:
// unsigned long                  bReset                         ( CPF_OptionalParm | CPF_Parm )

void USFXPowerCustomAction_Overload::RecalculateAllPowerData ( unsigned long bReset )
{
	static UFunction* pFnRecalculateAllPowerData = NULL;

	if ( ! pFnRecalculateAllPowerData )
		pFnRecalculateAllPowerData = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Overload.RecalculateAllPowerData" );

	USFXPowerCustomAction_Overload_execRecalculateAllPowerData_Parms RecalculateAllPowerData_Parms;
	RecalculateAllPowerData_Parms.bReset = bReset;

	this->ProcessEvent ( pFnRecalculateAllPowerData, &RecalculateAllPowerData_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Overload.EvolvePower
// [0x00020002]
// Parameters infos:
// unsigned char                  choice                         ( CPF_Parm )

void USFXPowerCustomAction_Overload::EvolvePower ( unsigned char choice )
{
	static UFunction* pFnEvolvePower = NULL;

	if ( ! pFnEvolvePower )
		pFnEvolvePower = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Overload.EvolvePower" );

	USFXPowerCustomAction_Overload_execEvolvePower_Parms EvolvePower_Parms;
	EvolvePower_Parms.choice = choice;

	this->ProcessEvent ( pFnEvolvePower, &EvolvePower_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Overload.ShouldUsePower
// [0x00420002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Target                         ( CPF_Parm )
// FString                        sOptionalInfo                  ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool USFXPowerCustomAction_Overload::ShouldUsePower ( class AActor* Target, FString* sOptionalInfo )
{
	static UFunction* pFnShouldUsePower = NULL;

	if ( ! pFnShouldUsePower )
		pFnShouldUsePower = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Overload.ShouldUsePower" );

	USFXPowerCustomAction_Overload_execShouldUsePower_Parms ShouldUsePower_Parms;
	ShouldUsePower_Parms.Target = Target;

	if ( sOptionalInfo )
		memcpy ( &ShouldUsePower_Parms.sOptionalInfo, sOptionalInfo, 0x10 );

	this->ProcessEvent ( pFnShouldUsePower, &ShouldUsePower_Parms, NULL );

	if ( sOptionalInfo )
		memcpy ( sOptionalInfo, &ShouldUsePower_Parms.sOptionalInfo, 0x10 );

	return ShouldUsePower_Parms.ReturnValue;
};

// Function SFXGameContent.SFXPowerCustomAction_Overload.ClientDoPowerSubsequentImpact
// [0x00024002]
// Parameters infos:
// class AActor*                  oActor                         ( CPF_Parm )
// int                            CustomActionReactionType       ( CPF_OptionalParm | CPF_Parm )
// float                          Duration                       ( CPF_OptionalParm | CPF_Parm )
// int                            ImpactCount                    ( CPF_OptionalParm | CPF_Parm )
// float                          Delay                          ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  DoCallback                     ( CPF_OptionalParm | CPF_Parm )

void USFXPowerCustomAction_Overload::ClientDoPowerSubsequentImpact ( class AActor* oActor, int CustomActionReactionType, float Duration, int ImpactCount, float Delay, unsigned long DoCallback )
{
	static UFunction* pFnClientDoPowerSubsequentImpact = NULL;

	if ( ! pFnClientDoPowerSubsequentImpact )
		pFnClientDoPowerSubsequentImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Overload.ClientDoPowerSubsequentImpact" );

	USFXPowerCustomAction_Overload_execClientDoPowerSubsequentImpact_Parms ClientDoPowerSubsequentImpact_Parms;
	ClientDoPowerSubsequentImpact_Parms.oActor = oActor;
	ClientDoPowerSubsequentImpact_Parms.CustomActionReactionType = CustomActionReactionType;
	ClientDoPowerSubsequentImpact_Parms.Duration = Duration;
	ClientDoPowerSubsequentImpact_Parms.ImpactCount = ImpactCount;
	ClientDoPowerSubsequentImpact_Parms.Delay = Delay;
	ClientDoPowerSubsequentImpact_Parms.DoCallback = DoCallback;

	this->ProcessEvent ( pFnClientDoPowerSubsequentImpact, &ClientDoPowerSubsequentImpact_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Overload.TestAchievement
// [0x00020002]
// Parameters infos:
// class AActor*                  oTarget                        ( CPF_Parm )

void USFXPowerCustomAction_Overload::TestAchievement ( class AActor* oTarget )
{
	static UFunction* pFnTestAchievement = NULL;

	if ( ! pFnTestAchievement )
		pFnTestAchievement = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Overload.TestAchievement" );

	USFXPowerCustomAction_Overload_execTestAchievement_Parms TestAchievement_Parms;
	TestAchievement_Parms.oTarget = oTarget;

	this->ProcessEvent ( pFnTestAchievement, &TestAchievement_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Overload.CreateOverloadChainEffect
// [0x00020002]
// Parameters infos:
// class USFXGameEffect_OverloadChain* ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class USFXModule_GameEffectManager* oManager                       ( CPF_Parm )

class USFXGameEffect_OverloadChain* USFXPowerCustomAction_Overload::CreateOverloadChainEffect ( class USFXModule_GameEffectManager* oManager )
{
	static UFunction* pFnCreateOverloadChainEffect = NULL;

	if ( ! pFnCreateOverloadChainEffect )
		pFnCreateOverloadChainEffect = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Overload.CreateOverloadChainEffect" );

	USFXPowerCustomAction_Overload_execCreateOverloadChainEffect_Parms CreateOverloadChainEffect_Parms;
	CreateOverloadChainEffect_Parms.oManager = oManager;

	this->ProcessEvent ( pFnCreateOverloadChainEffect, &CreateOverloadChainEffect_Parms, NULL );

	return CreateOverloadChainEffect_Parms.ReturnValue;
};

// Function SFXGameContent.SFXPowerCustomAction_Overload.OnImpact
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  Resistance                     ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

bool USFXPowerCustomAction_Overload::OnImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector const& HitLocation, struct FVector const& HitNormal )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Overload.OnImpact" );

	USFXPowerCustomAction_Overload_execOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.Resistance = Resistance;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;
	memcpy ( &OnImpact_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &OnImpact_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent.SFXPowerCustomAction_Overload.GetImpactForce
// [0x00020002]
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oImpacted                      ( CPF_Parm )

float USFXPowerCustomAction_Overload::GetImpactForce ( class AActor* oImpacted )
{
	static UFunction* pFnGetImpactForce = NULL;

	if ( ! pFnGetImpactForce )
		pFnGetImpactForce = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Overload.GetImpactForce" );

	USFXPowerCustomAction_Overload_execGetImpactForce_Parms GetImpactForce_Parms;
	GetImpactForce_Parms.oImpacted = oImpacted;

	this->ProcessEvent ( pFnGetImpactForce, &GetImpactForce_Parms, NULL );

	return GetImpactForce_Parms.ReturnValue;
};

// Function SFXGameContent.SFXPowerCustomAction_Overload.GetImpactDamage
// [0x00420002]
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm | CPF_OutParm )

float USFXPowerCustomAction_Overload::GetImpactDamage ( class AActor* oImpacted, class UClass** DamageType )
{
	static UFunction* pFnGetImpactDamage = NULL;

	if ( ! pFnGetImpactDamage )
		pFnGetImpactDamage = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Overload.GetImpactDamage" );

	USFXPowerCustomAction_Overload_execGetImpactDamage_Parms GetImpactDamage_Parms;
	GetImpactDamage_Parms.oImpacted = oImpacted;

	if ( DamageType )
		GetImpactDamage_Parms.DamageType = *DamageType;

	this->ProcessEvent ( pFnGetImpactDamage, &GetImpactDamage_Parms, NULL );

	if ( DamageType )
		*DamageType = GetImpactDamage_Parms.DamageType;

	return GetImpactDamage_Parms.ReturnValue;
};

// Function SFXGameContent.SFXPowerCustomAction_Overload.OnPowerDetonated
// [0x00024002]
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )
// class ASFXProjectile_PowerCustomAction* oProjectile                    ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  HitActor                       ( CPF_OptionalParm | CPF_Parm )

void USFXPowerCustomAction_Overload::OnPowerDetonated ( struct FVector const& HitLocation, struct FVector const& HitNormal, class ASFXProjectile_PowerCustomAction* oProjectile, class AActor* HitActor )
{
	static UFunction* pFnOnPowerDetonated = NULL;

	if ( ! pFnOnPowerDetonated )
		pFnOnPowerDetonated = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Overload.OnPowerDetonated" );

	USFXPowerCustomAction_Overload_execOnPowerDetonated_Parms OnPowerDetonated_Parms;
	memcpy ( &OnPowerDetonated_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &OnPowerDetonated_Parms.HitNormal, &HitNormal, 0xC );
	OnPowerDetonated_Parms.oProjectile = oProjectile;
	OnPowerDetonated_Parms.HitActor = HitActor;

	this->ProcessEvent ( pFnOnPowerDetonated, &OnPowerDetonated_Parms, NULL );
};



class UClass* USFXGameEffect_Reave::pClassPointer = NULL;

class UClass* USFXGameEffect_Reave::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXGameEffect_Reave" );

		return pClassPointer;
	};



class UClass* ASFXPawn_Kaidan::pClassPointer = NULL;

class UClass* ASFXPawn_Kaidan::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXPawn_Kaidan" );

		return pClassPointer;
	};



class UClass* USFXPowerCustomAction_Reave::pClassPointer = NULL;

class UClass* USFXPowerCustomAction_Reave::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXPowerCustomAction_Reave" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXPowerCustomAction_Reave.PopulatePowerStatBarEvolves
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_Reave::PopulatePowerStatBarEvolves ( )
{
	static UFunction* pFnPopulatePowerStatBarEvolves = NULL;

	if ( ! pFnPopulatePowerStatBarEvolves )
		pFnPopulatePowerStatBarEvolves = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Reave.PopulatePowerStatBarEvolves" );

	USFXPowerCustomAction_Reave_execPopulatePowerStatBarEvolves_Parms PopulatePowerStatBarEvolves_Parms;

	this->ProcessEvent ( pFnPopulatePowerStatBarEvolves, &PopulatePowerStatBarEvolves_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Reave.EvolvePower
// [0x00020002]
// Parameters infos:
// unsigned char                  choice                         ( CPF_Parm )

void USFXPowerCustomAction_Reave::EvolvePower ( unsigned char choice )
{
	static UFunction* pFnEvolvePower = NULL;

	if ( ! pFnEvolvePower )
		pFnEvolvePower = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Reave.EvolvePower" );

	USFXPowerCustomAction_Reave_execEvolvePower_Parms EvolvePower_Parms;
	EvolvePower_Parms.choice = choice;

	this->ProcessEvent ( pFnEvolvePower, &EvolvePower_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Reave.RecalculateAllPowerData
// [0x00024002]
// Parameters infos:
// unsigned long                  bReset                         ( CPF_OptionalParm | CPF_Parm )

void USFXPowerCustomAction_Reave::RecalculateAllPowerData ( unsigned long bReset )
{
	static UFunction* pFnRecalculateAllPowerData = NULL;

	if ( ! pFnRecalculateAllPowerData )
		pFnRecalculateAllPowerData = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Reave.RecalculateAllPowerData" );

	USFXPowerCustomAction_Reave_execRecalculateAllPowerData_Parms RecalculateAllPowerData_Parms;
	RecalculateAllPowerData_Parms.bReset = bReset;

	this->ProcessEvent ( pFnRecalculateAllPowerData, &RecalculateAllPowerData_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Reave.ShouldUsePower
// [0x00420002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Target                         ( CPF_Parm )
// FString                        sOptionalInfo                  ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool USFXPowerCustomAction_Reave::ShouldUsePower ( class AActor* Target, FString* sOptionalInfo )
{
	static UFunction* pFnShouldUsePower = NULL;

	if ( ! pFnShouldUsePower )
		pFnShouldUsePower = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Reave.ShouldUsePower" );

	USFXPowerCustomAction_Reave_execShouldUsePower_Parms ShouldUsePower_Parms;
	ShouldUsePower_Parms.Target = Target;

	if ( sOptionalInfo )
		memcpy ( &ShouldUsePower_Parms.sOptionalInfo, sOptionalInfo, 0x10 );

	this->ProcessEvent ( pFnShouldUsePower, &ShouldUsePower_Parms, NULL );

	if ( sOptionalInfo )
		memcpy ( sOptionalInfo, &ShouldUsePower_Parms.sOptionalInfo, 0x10 );

	return ShouldUsePower_Parms.ReturnValue;
};

// Function SFXGameContent.SFXPowerCustomAction_Reave.StopSounds
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_Reave::StopSounds ( )
{
	static UFunction* pFnStopSounds = NULL;

	if ( ! pFnStopSounds )
		pFnStopSounds = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Reave.StopSounds" );

	USFXPowerCustomAction_Reave_execStopSounds_Parms StopSounds_Parms;

	this->ProcessEvent ( pFnStopSounds, &StopSounds_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Reave.OnImpact
// [0x00820002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  Resistance                     ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

bool USFXPowerCustomAction_Reave::OnImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector const& HitLocation, struct FVector const& HitNormal )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Reave.OnImpact" );

	USFXPowerCustomAction_Reave_execOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.Resistance = Resistance;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;
	memcpy ( &OnImpact_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &OnImpact_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent.SFXPowerCustomAction_Reave.GetImpactDamage
// [0x00420002]
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm | CPF_OutParm )

float USFXPowerCustomAction_Reave::GetImpactDamage ( class AActor* oImpacted, class UClass** DamageType )
{
	static UFunction* pFnGetImpactDamage = NULL;

	if ( ! pFnGetImpactDamage )
		pFnGetImpactDamage = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Reave.GetImpactDamage" );

	USFXPowerCustomAction_Reave_execGetImpactDamage_Parms GetImpactDamage_Parms;
	GetImpactDamage_Parms.oImpacted = oImpacted;

	if ( DamageType )
		GetImpactDamage_Parms.DamageType = *DamageType;

	this->ProcessEvent ( pFnGetImpactDamage, &GetImpactDamage_Parms, NULL );

	if ( DamageType )
		*DamageType = GetImpactDamage_Parms.DamageType;

	return GetImpactDamage_Parms.ReturnValue;
};

// Function SFXGameContent.SFXPowerCustomAction_Reave.OnPowerDetonated
// [0x00024002]
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )
// class ASFXProjectile_PowerCustomAction* oProjectile                    ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  HitActor                       ( CPF_OptionalParm | CPF_Parm )

void USFXPowerCustomAction_Reave::OnPowerDetonated ( struct FVector const& HitLocation, struct FVector const& HitNormal, class ASFXProjectile_PowerCustomAction* oProjectile, class AActor* HitActor )
{
	static UFunction* pFnOnPowerDetonated = NULL;

	if ( ! pFnOnPowerDetonated )
		pFnOnPowerDetonated = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Reave.OnPowerDetonated" );

	USFXPowerCustomAction_Reave_execOnPowerDetonated_Parms OnPowerDetonated_Parms;
	memcpy ( &OnPowerDetonated_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &OnPowerDetonated_Parms.HitNormal, &HitNormal, 0xC );
	OnPowerDetonated_Parms.oProjectile = oProjectile;
	OnPowerDetonated_Parms.HitActor = HitActor;

	this->ProcessEvent ( pFnOnPowerDetonated, &OnPowerDetonated_Parms, NULL );
};



class UClass* USFXPowerCustomAction_CryoBlast::pClassPointer = NULL;

class UClass* USFXPowerCustomAction_CryoBlast::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXPowerCustomAction_CryoBlast" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXPowerCustomAction_CryoBlast.PopulatePowerStatBarEvolves
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_CryoBlast::PopulatePowerStatBarEvolves ( )
{
	static UFunction* pFnPopulatePowerStatBarEvolves = NULL;

	if ( ! pFnPopulatePowerStatBarEvolves )
		pFnPopulatePowerStatBarEvolves = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_CryoBlast.PopulatePowerStatBarEvolves" );

	USFXPowerCustomAction_CryoBlast_execPopulatePowerStatBarEvolves_Parms PopulatePowerStatBarEvolves_Parms;

	this->ProcessEvent ( pFnPopulatePowerStatBarEvolves, &PopulatePowerStatBarEvolves_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_CryoBlast.ApplyBonus
// [0x00024002]
// Parameters infos:
// struct SFXName                 Parameter                      ( CPF_Parm )
// class USFXGameEffect*          Bonus                          ( CPF_Parm )
// unsigned long                  bRemove                        ( CPF_OptionalParm | CPF_Parm )

void USFXPowerCustomAction_CryoBlast::ApplyBonus ( struct SFXName Parameter, class USFXGameEffect* Bonus, unsigned long bRemove )
{
	static UFunction* pFnApplyBonus = NULL;

	if ( ! pFnApplyBonus )
		pFnApplyBonus = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_CryoBlast.ApplyBonus" );

	USFXPowerCustomAction_CryoBlast_execApplyBonus_Parms ApplyBonus_Parms;
	memcpy ( &ApplyBonus_Parms.Parameter, &Parameter, 0x8 );
	ApplyBonus_Parms.Bonus = Bonus;
	ApplyBonus_Parms.bRemove = bRemove;

	this->ProcessEvent ( pFnApplyBonus, &ApplyBonus_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_CryoBlast.EvolvePower
// [0x00020002]
// Parameters infos:
// unsigned char                  choice                         ( CPF_Parm )

void USFXPowerCustomAction_CryoBlast::EvolvePower ( unsigned char choice )
{
	static UFunction* pFnEvolvePower = NULL;

	if ( ! pFnEvolvePower )
		pFnEvolvePower = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_CryoBlast.EvolvePower" );

	USFXPowerCustomAction_CryoBlast_execEvolvePower_Parms EvolvePower_Parms;
	EvolvePower_Parms.choice = choice;

	this->ProcessEvent ( pFnEvolvePower, &EvolvePower_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_CryoBlast.RecalculateAllPowerData
// [0x00024002]
// Parameters infos:
// unsigned long                  bReset                         ( CPF_OptionalParm | CPF_Parm )

void USFXPowerCustomAction_CryoBlast::RecalculateAllPowerData ( unsigned long bReset )
{
	static UFunction* pFnRecalculateAllPowerData = NULL;

	if ( ! pFnRecalculateAllPowerData )
		pFnRecalculateAllPowerData = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_CryoBlast.RecalculateAllPowerData" );

	USFXPowerCustomAction_CryoBlast_execRecalculateAllPowerData_Parms RecalculateAllPowerData_Parms;
	RecalculateAllPowerData_Parms.bReset = bReset;

	this->ProcessEvent ( pFnRecalculateAllPowerData, &RecalculateAllPowerData_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_CryoBlast.GetDefaultClientEffectParams
// [0x00020002]
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FVector USFXPowerCustomAction_CryoBlast::GetDefaultClientEffectParams ( )
{
	static UFunction* pFnGetDefaultClientEffectParams = NULL;

	if ( ! pFnGetDefaultClientEffectParams )
		pFnGetDefaultClientEffectParams = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_CryoBlast.GetDefaultClientEffectParams" );

	USFXPowerCustomAction_CryoBlast_execGetDefaultClientEffectParams_Parms GetDefaultClientEffectParams_Parms;

	this->ProcessEvent ( pFnGetDefaultClientEffectParams, &GetDefaultClientEffectParams_Parms, NULL );

	return GetDefaultClientEffectParams_Parms.ReturnValue;
};

// Function SFXGameContent.SFXPowerCustomAction_CryoBlast.ShouldUsePower
// [0x00420002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Target                         ( CPF_Parm )
// FString                        sOptionalInfo                  ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool USFXPowerCustomAction_CryoBlast::ShouldUsePower ( class AActor* Target, FString* sOptionalInfo )
{
	static UFunction* pFnShouldUsePower = NULL;

	if ( ! pFnShouldUsePower )
		pFnShouldUsePower = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_CryoBlast.ShouldUsePower" );

	USFXPowerCustomAction_CryoBlast_execShouldUsePower_Parms ShouldUsePower_Parms;
	ShouldUsePower_Parms.Target = Target;

	if ( sOptionalInfo )
		memcpy ( &ShouldUsePower_Parms.sOptionalInfo, sOptionalInfo, 0x10 );

	this->ProcessEvent ( pFnShouldUsePower, &ShouldUsePower_Parms, NULL );

	if ( sOptionalInfo )
		memcpy ( sOptionalInfo, &ShouldUsePower_Parms.sOptionalInfo, 0x10 );

	return ShouldUsePower_Parms.ReturnValue;
};

// Function SFXGameContent.SFXPowerCustomAction_CryoBlast.ClientDoPowerSubsequentImpact
// [0x00024002]
// Parameters infos:
// class AActor*                  oActor                         ( CPF_Parm )
// int                            CustomActionReactionType       ( CPF_OptionalParm | CPF_Parm )
// float                          Duration                       ( CPF_OptionalParm | CPF_Parm )
// int                            ImpactCount                    ( CPF_OptionalParm | CPF_Parm )
// float                          Delay                          ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  DoCallback                     ( CPF_OptionalParm | CPF_Parm )

void USFXPowerCustomAction_CryoBlast::ClientDoPowerSubsequentImpact ( class AActor* oActor, int CustomActionReactionType, float Duration, int ImpactCount, float Delay, unsigned long DoCallback )
{
	static UFunction* pFnClientDoPowerSubsequentImpact = NULL;

	if ( ! pFnClientDoPowerSubsequentImpact )
		pFnClientDoPowerSubsequentImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_CryoBlast.ClientDoPowerSubsequentImpact" );

	USFXPowerCustomAction_CryoBlast_execClientDoPowerSubsequentImpact_Parms ClientDoPowerSubsequentImpact_Parms;
	ClientDoPowerSubsequentImpact_Parms.oActor = oActor;
	ClientDoPowerSubsequentImpact_Parms.CustomActionReactionType = CustomActionReactionType;
	ClientDoPowerSubsequentImpact_Parms.Duration = Duration;
	ClientDoPowerSubsequentImpact_Parms.ImpactCount = ImpactCount;
	ClientDoPowerSubsequentImpact_Parms.Delay = Delay;
	ClientDoPowerSubsequentImpact_Parms.DoCallback = DoCallback;

	this->ProcessEvent ( pFnClientDoPowerSubsequentImpact, &ClientDoPowerSubsequentImpact_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_CryoBlast.OnFrozenPawnDied
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// class ABioPawn*                oPawn                          ( CPF_Parm )

void USFXPowerCustomAction_CryoBlast::OnFrozenPawnDied ( class ABioPawn* oPawn )
{
	static UFunction* pFnOnFrozenPawnDied = NULL;

	if ( ! pFnOnFrozenPawnDied )
		pFnOnFrozenPawnDied = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_CryoBlast.OnFrozenPawnDied" );

	USFXPowerCustomAction_CryoBlast_execOnFrozenPawnDied_Parms OnFrozenPawnDied_Parms;
	OnFrozenPawnDied_Parms.oPawn = oPawn;

	this->ProcessEvent ( pFnOnFrozenPawnDied, &OnFrozenPawnDied_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_CryoBlast.ApplySlowdownEffect
// [0x00820003] ( FUNC_Final )
// Parameters infos:
// class ABioPawn*                oPawn                          ( CPF_Parm )
// float                          Duration                       ( CPF_Parm )

void USFXPowerCustomAction_CryoBlast::ApplySlowdownEffect ( class ABioPawn* oPawn, float Duration )
{
	static UFunction* pFnApplySlowdownEffect = NULL;

	if ( ! pFnApplySlowdownEffect )
		pFnApplySlowdownEffect = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_CryoBlast.ApplySlowdownEffect" );

	USFXPowerCustomAction_CryoBlast_execApplySlowdownEffect_Parms ApplySlowdownEffect_Parms;
	ApplySlowdownEffect_Parms.oPawn = oPawn;
	ApplySlowdownEffect_Parms.Duration = Duration;

	this->ProcessEvent ( pFnApplySlowdownEffect, &ApplySlowdownEffect_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_CryoBlast.ApplyFreezeEffect
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// class ABioPawn*                oPawn                          ( CPF_Parm )
// float                          Duration                       ( CPF_Parm )
// float                          fDelay                         ( CPF_Parm )
// unsigned long                  bCallbackOnDeath               ( CPF_Parm )

void USFXPowerCustomAction_CryoBlast::ApplyFreezeEffect ( class ABioPawn* oPawn, float Duration, float fDelay, unsigned long bCallbackOnDeath )
{
	static UFunction* pFnApplyFreezeEffect = NULL;

	if ( ! pFnApplyFreezeEffect )
		pFnApplyFreezeEffect = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_CryoBlast.ApplyFreezeEffect" );

	USFXPowerCustomAction_CryoBlast_execApplyFreezeEffect_Parms ApplyFreezeEffect_Parms;
	ApplyFreezeEffect_Parms.oPawn = oPawn;
	ApplyFreezeEffect_Parms.Duration = Duration;
	ApplyFreezeEffect_Parms.fDelay = fDelay;
	ApplyFreezeEffect_Parms.bCallbackOnDeath = bCallbackOnDeath;

	this->ProcessEvent ( pFnApplyFreezeEffect, &ApplyFreezeEffect_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_CryoBlast.OnImpact
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  Resistance                     ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

bool USFXPowerCustomAction_CryoBlast::OnImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector const& HitLocation, struct FVector const& HitNormal )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_CryoBlast.OnImpact" );

	USFXPowerCustomAction_CryoBlast_execOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.Resistance = Resistance;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;
	memcpy ( &OnImpact_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &OnImpact_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};



class UClass* USFXPowerCustomAction_Barrier::pClassPointer = NULL;

class UClass* USFXPowerCustomAction_Barrier::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXPowerCustomAction_Barrier" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXPowerCustomAction_Barrier.PopulatePowerStatBarEvolves
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_Barrier::PopulatePowerStatBarEvolves ( )
{
	static UFunction* pFnPopulatePowerStatBarEvolves = NULL;

	if ( ! pFnPopulatePowerStatBarEvolves )
		pFnPopulatePowerStatBarEvolves = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Barrier.PopulatePowerStatBarEvolves" );

	USFXPowerCustomAction_Barrier_execPopulatePowerStatBarEvolves_Parms PopulatePowerStatBarEvolves_Parms;

	this->ProcessEvent ( pFnPopulatePowerStatBarEvolves, &PopulatePowerStatBarEvolves_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Barrier.ApplyBonus
// [0x00024002]
// Parameters infos:
// struct SFXName                 Parameter                      ( CPF_Parm )
// class USFXGameEffect*          Bonus                          ( CPF_Parm )
// unsigned long                  bRemove                        ( CPF_OptionalParm | CPF_Parm )

void USFXPowerCustomAction_Barrier::ApplyBonus ( struct SFXName Parameter, class USFXGameEffect* Bonus, unsigned long bRemove )
{
	static UFunction* pFnApplyBonus = NULL;

	if ( ! pFnApplyBonus )
		pFnApplyBonus = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Barrier.ApplyBonus" );

	USFXPowerCustomAction_Barrier_execApplyBonus_Parms ApplyBonus_Parms;
	memcpy ( &ApplyBonus_Parms.Parameter, &Parameter, 0x8 );
	ApplyBonus_Parms.Bonus = Bonus;
	ApplyBonus_Parms.bRemove = bRemove;

	this->ProcessEvent ( pFnApplyBonus, &ApplyBonus_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Barrier.EvolvePower
// [0x00020002]
// Parameters infos:
// unsigned char                  choice                         ( CPF_Parm )

void USFXPowerCustomAction_Barrier::EvolvePower ( unsigned char choice )
{
	static UFunction* pFnEvolvePower = NULL;

	if ( ! pFnEvolvePower )
		pFnEvolvePower = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Barrier.EvolvePower" );

	USFXPowerCustomAction_Barrier_execEvolvePower_Parms EvolvePower_Parms;
	EvolvePower_Parms.choice = choice;

	this->ProcessEvent ( pFnEvolvePower, &EvolvePower_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Barrier.RecalculateAllPowerData
// [0x00024002]
// Parameters infos:
// unsigned long                  bReset                         ( CPF_OptionalParm | CPF_Parm )

void USFXPowerCustomAction_Barrier::RecalculateAllPowerData ( unsigned long bReset )
{
	static UFunction* pFnRecalculateAllPowerData = NULL;

	if ( ! pFnRecalculateAllPowerData )
		pFnRecalculateAllPowerData = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Barrier.RecalculateAllPowerData" );

	USFXPowerCustomAction_Barrier_execRecalculateAllPowerData_Parms RecalculateAllPowerData_Parms;
	RecalculateAllPowerData_Parms.bReset = bReset;

	this->ProcessEvent ( pFnRecalculateAllPowerData, &RecalculateAllPowerData_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Barrier.OnBlastImpact
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  Resistance                     ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

bool USFXPowerCustomAction_Barrier::OnBlastImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector const& HitLocation, struct FVector const& HitNormal )
{
	static UFunction* pFnOnBlastImpact = NULL;

	if ( ! pFnOnBlastImpact )
		pFnOnBlastImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Barrier.OnBlastImpact" );

	USFXPowerCustomAction_Barrier_execOnBlastImpact_Parms OnBlastImpact_Parms;
	OnBlastImpact_Parms.Resistance = Resistance;
	OnBlastImpact_Parms.oImpacted = oImpacted;
	OnBlastImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;
	memcpy ( &OnBlastImpact_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &OnBlastImpact_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnOnBlastImpact, &OnBlastImpact_Parms, NULL );

	return OnBlastImpact_Parms.ReturnValue;
};

// Function SFXGameContent.SFXPowerCustomAction_Barrier.ClientDoPowerSubsequentImpact
// [0x00024002]
// Parameters infos:
// class AActor*                  oActor                         ( CPF_Parm )
// int                            CustomActionReactionType       ( CPF_OptionalParm | CPF_Parm )
// float                          Duration                       ( CPF_OptionalParm | CPF_Parm )
// int                            ImpactCount                    ( CPF_OptionalParm | CPF_Parm )
// float                          Delay                          ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  DoCallback                     ( CPF_OptionalParm | CPF_Parm )

void USFXPowerCustomAction_Barrier::ClientDoPowerSubsequentImpact ( class AActor* oActor, int CustomActionReactionType, float Duration, int ImpactCount, float Delay, unsigned long DoCallback )
{
	static UFunction* pFnClientDoPowerSubsequentImpact = NULL;

	if ( ! pFnClientDoPowerSubsequentImpact )
		pFnClientDoPowerSubsequentImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Barrier.ClientDoPowerSubsequentImpact" );

	USFXPowerCustomAction_Barrier_execClientDoPowerSubsequentImpact_Parms ClientDoPowerSubsequentImpact_Parms;
	ClientDoPowerSubsequentImpact_Parms.oActor = oActor;
	ClientDoPowerSubsequentImpact_Parms.CustomActionReactionType = CustomActionReactionType;
	ClientDoPowerSubsequentImpact_Parms.Duration = Duration;
	ClientDoPowerSubsequentImpact_Parms.ImpactCount = ImpactCount;
	ClientDoPowerSubsequentImpact_Parms.Delay = Delay;
	ClientDoPowerSubsequentImpact_Parms.DoCallback = DoCallback;

	this->ProcessEvent ( pFnClientDoPowerSubsequentImpact, &ClientDoPowerSubsequentImpact_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Barrier.DoBlast
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_Barrier::DoBlast ( )
{
	static UFunction* pFnDoBlast = NULL;

	if ( ! pFnDoBlast )
		pFnDoBlast = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Barrier.DoBlast" );

	USFXPowerCustomAction_Barrier_execDoBlast_Parms DoBlast_Parms;

	this->ProcessEvent ( pFnDoBlast, &DoBlast_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Barrier.RemoveArmor
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_Barrier::RemoveArmor ( )
{
	static UFunction* pFnRemoveArmor = NULL;

	if ( ! pFnRemoveArmor )
		pFnRemoveArmor = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Barrier.RemoveArmor" );

	USFXPowerCustomAction_Barrier_execRemoveArmor_Parms RemoveArmor_Parms;

	this->ProcessEvent ( pFnRemoveArmor, &RemoveArmor_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Barrier.StartPowerCooldown
// [0x00020000]
// Parameters infos:

void USFXPowerCustomAction_Barrier::StartPowerCooldown ( )
{
	static UFunction* pFnStartPowerCooldown = NULL;

	if ( ! pFnStartPowerCooldown )
		pFnStartPowerCooldown = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Barrier.StartPowerCooldown" );

	USFXPowerCustomAction_Barrier_execStartPowerCooldown_Parms StartPowerCooldown_Parms;

	this->ProcessEvent ( pFnStartPowerCooldown, &StartPowerCooldown_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Barrier.ApplyArmor
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_Barrier::ApplyArmor ( )
{
	static UFunction* pFnApplyArmor = NULL;

	if ( ! pFnApplyArmor )
		pFnApplyArmor = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Barrier.ApplyArmor" );

	USFXPowerCustomAction_Barrier_execApplyArmor_Parms ApplyArmor_Parms;

	this->ProcessEvent ( pFnApplyArmor, &ApplyArmor_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Barrier.StartCustomAction
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_Barrier::StartCustomAction ( )
{
	static UFunction* pFnStartCustomAction = NULL;

	if ( ! pFnStartCustomAction )
		pFnStartCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Barrier.StartCustomAction" );

	USFXPowerCustomAction_Barrier_execStartCustomAction_Parms StartCustomAction_Parms;

	this->ProcessEvent ( pFnStartCustomAction, &StartCustomAction_Parms, NULL );
};



class UClass* USFXPowerCustomAction_KaidenPassive::pClassPointer = NULL;

class UClass* USFXPowerCustomAction_KaidenPassive::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXPowerCustomAction_KaidenPassive" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXPowerCustomAction_KaidenPassive.PopulatePowerStatBarEvolves
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_KaidenPassive::PopulatePowerStatBarEvolves ( )
{
	static UFunction* pFnPopulatePowerStatBarEvolves = NULL;

	if ( ! pFnPopulatePowerStatBarEvolves )
		pFnPopulatePowerStatBarEvolves = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_KaidenPassive.PopulatePowerStatBarEvolves" );

	USFXPowerCustomAction_KaidenPassive_execPopulatePowerStatBarEvolves_Parms PopulatePowerStatBarEvolves_Parms;

	this->ProcessEvent ( pFnPopulatePowerStatBarEvolves, &PopulatePowerStatBarEvolves_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_KaidenPassive.EvolvePower
// [0x00020002]
// Parameters infos:
// unsigned char                  choice                         ( CPF_Parm )

void USFXPowerCustomAction_KaidenPassive::EvolvePower ( unsigned char choice )
{
	static UFunction* pFnEvolvePower = NULL;

	if ( ! pFnEvolvePower )
		pFnEvolvePower = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_KaidenPassive.EvolvePower" );

	USFXPowerCustomAction_KaidenPassive_execEvolvePower_Parms EvolvePower_Parms;
	EvolvePower_Parms.choice = choice;

	this->ProcessEvent ( pFnEvolvePower, &EvolvePower_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_KaidenPassive.ResetPower
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_KaidenPassive::ResetPower ( )
{
	static UFunction* pFnResetPower = NULL;

	if ( ! pFnResetPower )
		pFnResetPower = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_KaidenPassive.ResetPower" );

	USFXPowerCustomAction_KaidenPassive_execResetPower_Parms ResetPower_Parms;

	this->ProcessEvent ( pFnResetPower, &ResetPower_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_KaidenPassive.ApplyGlobalBonus
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_KaidenPassive::ApplyGlobalBonus ( )
{
	static UFunction* pFnApplyGlobalBonus = NULL;

	if ( ! pFnApplyGlobalBonus )
		pFnApplyGlobalBonus = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_KaidenPassive.ApplyGlobalBonus" );

	USFXPowerCustomAction_KaidenPassive_execApplyGlobalBonus_Parms ApplyGlobalBonus_Parms;

	this->ProcessEvent ( pFnApplyGlobalBonus, &ApplyGlobalBonus_Parms, NULL );
};



class UClass* USFXPowerCustomAction_HenchmanPassive::pClassPointer = NULL;

class UClass* USFXPowerCustomAction_HenchmanPassive::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXPowerCustomAction_HenchmanPassive" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXPowerCustomAction_HenchmanPassive.RecalculateAllPowerData
// [0x00024002]
// Parameters infos:
// unsigned long                  bReset                         ( CPF_OptionalParm | CPF_Parm )

void USFXPowerCustomAction_HenchmanPassive::RecalculateAllPowerData ( unsigned long bReset )
{
	static UFunction* pFnRecalculateAllPowerData = NULL;

	if ( ! pFnRecalculateAllPowerData )
		pFnRecalculateAllPowerData = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_HenchmanPassive.RecalculateAllPowerData" );

	USFXPowerCustomAction_HenchmanPassive_execRecalculateAllPowerData_Parms RecalculateAllPowerData_Parms;
	RecalculateAllPowerData_Parms.bReset = bReset;

	this->ProcessEvent ( pFnRecalculateAllPowerData, &RecalculateAllPowerData_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_HenchmanPassive.ApplyGlobalBonus
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_HenchmanPassive::ApplyGlobalBonus ( )
{
	static UFunction* pFnApplyGlobalBonus = NULL;

	if ( ! pFnApplyGlobalBonus )
		pFnApplyGlobalBonus = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_HenchmanPassive.ApplyGlobalBonus" );

	USFXPowerCustomAction_HenchmanPassive_execApplyGlobalBonus_Parms ApplyGlobalBonus_Parms;

	this->ProcessEvent ( pFnApplyGlobalBonus, &ApplyGlobalBonus_Parms, NULL );
};



class UClass* ASFXShield_Energy::pClassPointer = NULL;

class UClass* ASFXShield_Energy::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXShield_Energy" );

		return pClassPointer;
	};



class UClass* USFXCustomAction_HenchmanHeavyMelee::pClassPointer = NULL;

class UClass* USFXCustomAction_HenchmanHeavyMelee::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCustomAction_HenchmanHeavyMelee" );

		return pClassPointer;
	};



class UClass* USFXDamageType_Carnage::pClassPointer = NULL;

class UClass* USFXDamageType_Carnage::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXDamageType_Carnage" );

		return pClassPointer;
	};



class UClass* USFXDamageType_Carnage_DoT::pClassPointer = NULL;

class UClass* USFXDamageType_Carnage_DoT::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXDamageType_Carnage_DoT" );

		return pClassPointer;
	};



class UClass* USFXDamageType_Carnage_Improved::pClassPointer = NULL;

class UClass* USFXDamageType_Carnage_Improved::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXDamageType_Carnage_Improved" );

		return pClassPointer;
	};



class UClass* USFXDamageType_Carnage_Improved_DoT::pClassPointer = NULL;

class UClass* USFXDamageType_Carnage_Improved_DoT::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXDamageType_Carnage_Improved_DoT" );

		return pClassPointer;
	};



class UClass* USFXDamageType_Carnage_Ragdoll::pClassPointer = NULL;

class UClass* USFXDamageType_Carnage_Ragdoll::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXDamageType_Carnage_Ragdoll" );

		return pClassPointer;
	};



class UClass* USFXDamageType_Carnage_Ragdoll_DoT::pClassPointer = NULL;

class UClass* USFXDamageType_Carnage_Ragdoll_DoT::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXDamageType_Carnage_Ragdoll_DoT" );

		return pClassPointer;
	};



class UClass* USFXDamageType_Carnage_Ragdoll_Improved::pClassPointer = NULL;

class UClass* USFXDamageType_Carnage_Ragdoll_Improved::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXDamageType_Carnage_Ragdoll_Improved" );

		return pClassPointer;
	};



class UClass* USFXDamageType_Carnage_Ragdoll_Improved_DoT::pClassPointer = NULL;

class UClass* USFXDamageType_Carnage_Ragdoll_Improved_DoT::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXDamageType_Carnage_Ragdoll_Improved_DoT" );

		return pClassPointer;
	};



class UClass* USFXDamageType_ConcussiveShot::pClassPointer = NULL;

class UClass* USFXDamageType_ConcussiveShot::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXDamageType_ConcussiveShot" );

		return pClassPointer;
	};



class UClass* USFXDamageType_ConcussiveShot_Incendiary::pClassPointer = NULL;

class UClass* USFXDamageType_ConcussiveShot_Incendiary::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXDamageType_ConcussiveShot_Incendiary" );

		return pClassPointer;
	};



class UClass* USFXDamageType_FragGrenade::pClassPointer = NULL;

class UClass* USFXDamageType_FragGrenade::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXDamageType_FragGrenade" );

		return pClassPointer;
	};



class UClass* USFXDamageType_FragGrenade_Armor::pClassPointer = NULL;

class UClass* USFXDamageType_FragGrenade_Armor::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXDamageType_FragGrenade_Armor" );

		return pClassPointer;
	};



class UClass* USFXDamageType_FragGrenade_Shields::pClassPointer = NULL;

class UClass* USFXDamageType_FragGrenade_Shields::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXDamageType_FragGrenade_Shields" );

		return pClassPointer;
	};



class UClass* USFXDamageType_IncendiaryAmmo::pClassPointer = NULL;

class UClass* USFXDamageType_IncendiaryAmmo::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXDamageType_IncendiaryAmmo" );

		return pClassPointer;
	};



class UClass* USFXDamageType_IncendiaryAmmoImproved::pClassPointer = NULL;

class UClass* USFXDamageType_IncendiaryAmmoImproved::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXDamageType_IncendiaryAmmoImproved" );

		return pClassPointer;
	};



class UClass* USFXGameEffect_AmmoPower::pClassPointer = NULL;

class UClass* USFXGameEffect_AmmoPower::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXGameEffect_AmmoPower" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXGameEffect_AmmoPower.OnUpdate
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// float                          DeltaSeconds                   ( CPF_Parm )

void USFXGameEffect_AmmoPower::eventOnUpdate ( float DeltaSeconds )
{
	static UFunction* pFnOnUpdate = NULL;

	if ( ! pFnOnUpdate )
		pFnOnUpdate = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_AmmoPower.OnUpdate" );

	USFXGameEffect_AmmoPower_eventOnUpdate_Parms OnUpdate_Parms;
	OnUpdate_Parms.DeltaSeconds = DeltaSeconds;

	this->ProcessEvent ( pFnOnUpdate, &OnUpdate_Parms, NULL );
};

// Function SFXGameContent.SFXGameEffect_AmmoPower.OnWeaponUnequip
// [0x00020002]
// Parameters infos:
// class ASFXWeapon*              Weapon                         ( CPF_Parm )

void USFXGameEffect_AmmoPower::OnWeaponUnequip ( class ASFXWeapon* Weapon )
{
	static UFunction* pFnOnWeaponUnequip = NULL;

	if ( ! pFnOnWeaponUnequip )
		pFnOnWeaponUnequip = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_AmmoPower.OnWeaponUnequip" );

	USFXGameEffect_AmmoPower_execOnWeaponUnequip_Parms OnWeaponUnequip_Parms;
	OnWeaponUnequip_Parms.Weapon = Weapon;

	this->ProcessEvent ( pFnOnWeaponUnequip, &OnWeaponUnequip_Parms, NULL );
};

// Function SFXGameContent.SFXGameEffect_AmmoPower.OnWeaponEquip
// [0x00020002]
// Parameters infos:
// class ASFXWeapon*              Weapon                         ( CPF_Parm )

void USFXGameEffect_AmmoPower::OnWeaponEquip ( class ASFXWeapon* Weapon )
{
	static UFunction* pFnOnWeaponEquip = NULL;

	if ( ! pFnOnWeaponEquip )
		pFnOnWeaponEquip = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_AmmoPower.OnWeaponEquip" );

	USFXGameEffect_AmmoPower_execOnWeaponEquip_Parms OnWeaponEquip_Parms;
	OnWeaponEquip_Parms.Weapon = Weapon;

	this->ProcessEvent ( pFnOnWeaponEquip, &OnWeaponEquip_Parms, NULL );
};

// Function SFXGameContent.SFXGameEffect_AmmoPower.OnWeaponReload
// [0x00020000]
// Parameters infos:
// class ASFXWeapon*              Weapon                         ( CPF_Parm )

void USFXGameEffect_AmmoPower::OnWeaponReload ( class ASFXWeapon* Weapon )
{
	static UFunction* pFnOnWeaponReload = NULL;

	if ( ! pFnOnWeaponReload )
		pFnOnWeaponReload = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_AmmoPower.OnWeaponReload" );

	USFXGameEffect_AmmoPower_execOnWeaponReload_Parms OnWeaponReload_Parms;
	OnWeaponReload_Parms.Weapon = Weapon;

	this->ProcessEvent ( pFnOnWeaponReload, &OnWeaponReload_Parms, NULL );
};

// Function SFXGameContent.SFXGameEffect_AmmoPower.GetDamageVocProbabilityMod
// [0x00020002]
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float USFXGameEffect_AmmoPower::GetDamageVocProbabilityMod ( )
{
	static UFunction* pFnGetDamageVocProbabilityMod = NULL;

	if ( ! pFnGetDamageVocProbabilityMod )
		pFnGetDamageVocProbabilityMod = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_AmmoPower.GetDamageVocProbabilityMod" );

	USFXGameEffect_AmmoPower_execGetDamageVocProbabilityMod_Parms GetDamageVocProbabilityMod_Parms;

	this->ProcessEvent ( pFnGetDamageVocProbabilityMod, &GetDamageVocProbabilityMod_Parms, NULL );

	return GetDamageVocProbabilityMod_Parms.ReturnValue;
};

// Function SFXGameContent.SFXGameEffect_AmmoPower.OnWeaponImpact
// [0x00020002]
// Parameters infos:
// class ASFXWeapon*              Weapon                         ( CPF_Parm )
// struct FImpactInfo             Impact                         ( CPF_Parm )

void USFXGameEffect_AmmoPower::OnWeaponImpact ( class ASFXWeapon* Weapon, struct FImpactInfo const& Impact )
{
	static UFunction* pFnOnWeaponImpact = NULL;

	if ( ! pFnOnWeaponImpact )
		pFnOnWeaponImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_AmmoPower.OnWeaponImpact" );

	USFXGameEffect_AmmoPower_execOnWeaponImpact_Parms OnWeaponImpact_Parms;
	OnWeaponImpact_Parms.Weapon = Weapon;
	memcpy ( &OnWeaponImpact_Parms.Impact, &Impact, 0x64 );

	this->ProcessEvent ( pFnOnWeaponImpact, &OnWeaponImpact_Parms, NULL );
};

// Function SFXGameContent.SFXGameEffect_AmmoPower.OnRemoved
// [0x00020002]
// Parameters infos:

void USFXGameEffect_AmmoPower::OnRemoved ( )
{
	static UFunction* pFnOnRemoved = NULL;

	if ( ! pFnOnRemoved )
		pFnOnRemoved = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_AmmoPower.OnRemoved" );

	USFXGameEffect_AmmoPower_execOnRemoved_Parms OnRemoved_Parms;

	this->ProcessEvent ( pFnOnRemoved, &OnRemoved_Parms, NULL );
};

// Function SFXGameContent.SFXGameEffect_AmmoPower.GetBulletsPerSecond
// [0x00020002]
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ASFXWeapon*              Weapon                         ( CPF_Parm )

float USFXGameEffect_AmmoPower::GetBulletsPerSecond ( class ASFXWeapon* Weapon )
{
	static UFunction* pFnGetBulletsPerSecond = NULL;

	if ( ! pFnGetBulletsPerSecond )
		pFnGetBulletsPerSecond = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_AmmoPower.GetBulletsPerSecond" );

	USFXGameEffect_AmmoPower_execGetBulletsPerSecond_Parms GetBulletsPerSecond_Parms;
	GetBulletsPerSecond_Parms.Weapon = Weapon;

	this->ProcessEvent ( pFnGetBulletsPerSecond, &GetBulletsPerSecond_Parms, NULL );

	return GetBulletsPerSecond_Parms.ReturnValue;
};

// Function SFXGameContent.SFXGameEffect_AmmoPower.GetWeaponDamage
// [0x00020002]
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ASFXWeapon*              Weapon                         ( CPF_Parm )
// struct FImpactInfo             Impact                         ( CPF_Parm )

float USFXGameEffect_AmmoPower::GetWeaponDamage ( class ASFXWeapon* Weapon, struct FImpactInfo const& Impact )
{
	static UFunction* pFnGetWeaponDamage = NULL;

	if ( ! pFnGetWeaponDamage )
		pFnGetWeaponDamage = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_AmmoPower.GetWeaponDamage" );

	USFXGameEffect_AmmoPower_execGetWeaponDamage_Parms GetWeaponDamage_Parms;
	GetWeaponDamage_Parms.Weapon = Weapon;
	memcpy ( &GetWeaponDamage_Parms.Impact, &Impact, 0x64 );

	this->ProcessEvent ( pFnGetWeaponDamage, &GetWeaponDamage_Parms, NULL );

	return GetWeaponDamage_Parms.ReturnValue;
};

// Function SFXGameContent.SFXGameEffect_AmmoPower.GetHitTarget
// [0x00020002]
// Parameters infos:
// class AActor*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FImpactInfo             Impact                         ( CPF_Parm )

class AActor* USFXGameEffect_AmmoPower::GetHitTarget ( struct FImpactInfo const& Impact )
{
	static UFunction* pFnGetHitTarget = NULL;

	if ( ! pFnGetHitTarget )
		pFnGetHitTarget = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_AmmoPower.GetHitTarget" );

	USFXGameEffect_AmmoPower_execGetHitTarget_Parms GetHitTarget_Parms;
	memcpy ( &GetHitTarget_Parms.Impact, &Impact, 0x64 );

	this->ProcessEvent ( pFnGetHitTarget, &GetHitTarget_Parms, NULL );

	return GetHitTarget_Parms.ReturnValue;
};

// Function SFXGameContent.SFXGameEffect_AmmoPower.SetupFromWeapon
// [0x00020002]
// Parameters infos:

void USFXGameEffect_AmmoPower::SetupFromWeapon ( )
{
	static UFunction* pFnSetupFromWeapon = NULL;

	if ( ! pFnSetupFromWeapon )
		pFnSetupFromWeapon = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_AmmoPower.SetupFromWeapon" );

	USFXGameEffect_AmmoPower_execSetupFromWeapon_Parms SetupFromWeapon_Parms;

	this->ProcessEvent ( pFnSetupFromWeapon, &SetupFromWeapon_Parms, NULL );
};

// Function SFXGameContent.SFXGameEffect_AmmoPower.OnApplied
// [0x00020002]
// Parameters infos:

void USFXGameEffect_AmmoPower::OnApplied ( )
{
	static UFunction* pFnOnApplied = NULL;

	if ( ! pFnOnApplied )
		pFnOnApplied = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_AmmoPower.OnApplied" );

	USFXGameEffect_AmmoPower_execOnApplied_Parms OnApplied_Parms;

	this->ProcessEvent ( pFnOnApplied, &OnApplied_Parms, NULL );
};



class UClass* USFXPowerCustomAction_AmmoPower::pClassPointer = NULL;

class UClass* USFXPowerCustomAction_AmmoPower::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXPowerCustomAction_AmmoPower" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXPowerCustomAction_AmmoPower.DelayedSetWeaponPower
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXPowerCustomAction_AmmoPower::DelayedSetWeaponPower ( )
{
	static UFunction* pFnDelayedSetWeaponPower = NULL;

	if ( ! pFnDelayedSetWeaponPower )
		pFnDelayedSetWeaponPower = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_AmmoPower.DelayedSetWeaponPower" );

	USFXPowerCustomAction_AmmoPower_execDelayedSetWeaponPower_Parms DelayedSetWeaponPower_Parms;

	this->ProcessEvent ( pFnDelayedSetWeaponPower, &DelayedSetWeaponPower_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_AmmoPower.ClientDoCustomActionImpact
// [0x00024002]
// Parameters infos:
// class AActor*                  oActor                         ( CPF_Parm )
// int                            ImpactCount                    ( CPF_Parm )
// unsigned long                  bFirstTarget                   ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_OptionalParm | CPF_Parm )
// int                            CustomActionReactionType       ( CPF_OptionalParm | CPF_Parm )

void USFXPowerCustomAction_AmmoPower::ClientDoCustomActionImpact ( class AActor* oActor, int ImpactCount, unsigned long bFirstTarget, struct FVector const& HitLocation, struct FVector const& HitNormal, int CustomActionReactionType )
{
	static UFunction* pFnClientDoCustomActionImpact = NULL;

	if ( ! pFnClientDoCustomActionImpact )
		pFnClientDoCustomActionImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_AmmoPower.ClientDoCustomActionImpact" );

	USFXPowerCustomAction_AmmoPower_execClientDoCustomActionImpact_Parms ClientDoCustomActionImpact_Parms;
	ClientDoCustomActionImpact_Parms.oActor = oActor;
	ClientDoCustomActionImpact_Parms.ImpactCount = ImpactCount;
	ClientDoCustomActionImpact_Parms.bFirstTarget = bFirstTarget;
	memcpy ( &ClientDoCustomActionImpact_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ClientDoCustomActionImpact_Parms.HitNormal, &HitNormal, 0xC );
	ClientDoCustomActionImpact_Parms.CustomActionReactionType = CustomActionReactionType;

	this->ProcessEvent ( pFnClientDoCustomActionImpact, &ClientDoCustomActionImpact_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_AmmoPower.DoJoinInProgress
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_AmmoPower::DoJoinInProgress ( )
{
	static UFunction* pFnDoJoinInProgress = NULL;

	if ( ! pFnDoJoinInProgress )
		pFnDoJoinInProgress = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_AmmoPower.DoJoinInProgress" );

	USFXPowerCustomAction_AmmoPower_execDoJoinInProgress_Parms DoJoinInProgress_Parms;

	this->ProcessEvent ( pFnDoJoinInProgress, &DoJoinInProgress_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_AmmoPower.SetupEffect
// [0x00024000]
// Parameters infos:
// class USFXGameEffect_AmmoPower* Effect                         ( CPF_Parm )
// class ABioPawn*                oPawn                          ( CPF_OptionalParm | CPF_Parm )

void USFXPowerCustomAction_AmmoPower::SetupEffect ( class USFXGameEffect_AmmoPower* Effect, class ABioPawn* oPawn )
{
	static UFunction* pFnSetupEffect = NULL;

	if ( ! pFnSetupEffect )
		pFnSetupEffect = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_AmmoPower.SetupEffect" );

	USFXPowerCustomAction_AmmoPower_execSetupEffect_Parms SetupEffect_Parms;
	SetupEffect_Parms.Effect = Effect;
	SetupEffect_Parms.oPawn = oPawn;

	this->ProcessEvent ( pFnSetupEffect, &SetupEffect_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_AmmoPower.OnPowerRankIncreased
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_AmmoPower::OnPowerRankIncreased ( )
{
	static UFunction* pFnOnPowerRankIncreased = NULL;

	if ( ! pFnOnPowerRankIncreased )
		pFnOnPowerRankIncreased = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_AmmoPower.OnPowerRankIncreased" );

	USFXPowerCustomAction_AmmoPower_execOnPowerRankIncreased_Parms OnPowerRankIncreased_Parms;

	this->ProcessEvent ( pFnOnPowerRankIncreased, &OnPowerRankIncreased_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_AmmoPower.ShouldUsePower
// [0x00420002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Target                         ( CPF_Parm )
// FString                        sOptionalInfo                  ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool USFXPowerCustomAction_AmmoPower::ShouldUsePower ( class AActor* Target, FString* sOptionalInfo )
{
	static UFunction* pFnShouldUsePower = NULL;

	if ( ! pFnShouldUsePower )
		pFnShouldUsePower = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_AmmoPower.ShouldUsePower" );

	USFXPowerCustomAction_AmmoPower_execShouldUsePower_Parms ShouldUsePower_Parms;
	ShouldUsePower_Parms.Target = Target;

	if ( sOptionalInfo )
		memcpy ( &ShouldUsePower_Parms.sOptionalInfo, sOptionalInfo, 0x10 );

	this->ProcessEvent ( pFnShouldUsePower, &ShouldUsePower_Parms, NULL );

	if ( sOptionalInfo )
		memcpy ( sOptionalInfo, &ShouldUsePower_Parms.sOptionalInfo, 0x10 );

	return ShouldUsePower_Parms.ReturnValue;
};

// Function SFXGameContent.SFXPowerCustomAction_AmmoPower.DoConcussiveShotSpecialImpact
// [0x00020000]
// Parameters infos:
// class AActor*                  oImpacted                      ( CPF_Parm )
// float                          ImpactEffectDuration           ( CPF_Parm )

void USFXPowerCustomAction_AmmoPower::DoConcussiveShotSpecialImpact ( class AActor* oImpacted, float ImpactEffectDuration )
{
	static UFunction* pFnDoConcussiveShotSpecialImpact = NULL;

	if ( ! pFnDoConcussiveShotSpecialImpact )
		pFnDoConcussiveShotSpecialImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_AmmoPower.DoConcussiveShotSpecialImpact" );

	USFXPowerCustomAction_AmmoPower_execDoConcussiveShotSpecialImpact_Parms DoConcussiveShotSpecialImpact_Parms;
	DoConcussiveShotSpecialImpact_Parms.oImpacted = oImpacted;
	DoConcussiveShotSpecialImpact_Parms.ImpactEffectDuration = ImpactEffectDuration;

	this->ProcessEvent ( pFnDoConcussiveShotSpecialImpact, &DoConcussiveShotSpecialImpact_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_AmmoPower.ClientDoPowerSubsequentImpact
// [0x00024002]
// Parameters infos:
// class AActor*                  oActor                         ( CPF_Parm )
// int                            CustomActionReactionType       ( CPF_OptionalParm | CPF_Parm )
// float                          Duration                       ( CPF_OptionalParm | CPF_Parm )
// int                            ImpactCount                    ( CPF_OptionalParm | CPF_Parm )
// float                          Delay                          ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  DoCallback                     ( CPF_OptionalParm | CPF_Parm )

void USFXPowerCustomAction_AmmoPower::ClientDoPowerSubsequentImpact ( class AActor* oActor, int CustomActionReactionType, float Duration, int ImpactCount, float Delay, unsigned long DoCallback )
{
	static UFunction* pFnClientDoPowerSubsequentImpact = NULL;

	if ( ! pFnClientDoPowerSubsequentImpact )
		pFnClientDoPowerSubsequentImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_AmmoPower.ClientDoPowerSubsequentImpact" );

	USFXPowerCustomAction_AmmoPower_execClientDoPowerSubsequentImpact_Parms ClientDoPowerSubsequentImpact_Parms;
	ClientDoPowerSubsequentImpact_Parms.oActor = oActor;
	ClientDoPowerSubsequentImpact_Parms.CustomActionReactionType = CustomActionReactionType;
	ClientDoPowerSubsequentImpact_Parms.Duration = Duration;
	ClientDoPowerSubsequentImpact_Parms.ImpactCount = ImpactCount;
	ClientDoPowerSubsequentImpact_Parms.Delay = Delay;
	ClientDoPowerSubsequentImpact_Parms.DoCallback = DoCallback;

	this->ProcessEvent ( pFnClientDoPowerSubsequentImpact, &ClientDoPowerSubsequentImpact_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_AmmoPower.ReplicateConcussiveShotSpecialImpact
// [0x00020002]
// Parameters infos:
// class ABioPawn*                oImpacted                      ( CPF_Parm )
// float                          DurationOfEffect               ( CPF_Parm )

void USFXPowerCustomAction_AmmoPower::ReplicateConcussiveShotSpecialImpact ( class ABioPawn* oImpacted, float DurationOfEffect )
{
	static UFunction* pFnReplicateConcussiveShotSpecialImpact = NULL;

	if ( ! pFnReplicateConcussiveShotSpecialImpact )
		pFnReplicateConcussiveShotSpecialImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_AmmoPower.ReplicateConcussiveShotSpecialImpact" );

	USFXPowerCustomAction_AmmoPower_execReplicateConcussiveShotSpecialImpact_Parms ReplicateConcussiveShotSpecialImpact_Parms;
	ReplicateConcussiveShotSpecialImpact_Parms.oImpacted = oImpacted;
	ReplicateConcussiveShotSpecialImpact_Parms.DurationOfEffect = DurationOfEffect;

	this->ProcessEvent ( pFnReplicateConcussiveShotSpecialImpact, &ReplicateConcussiveShotSpecialImpact_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_AmmoPower.ConcussiveShotCustomImpact
// [0x00020000]
// Parameters infos:
// unsigned char                  Resistance                     ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void USFXPowerCustomAction_AmmoPower::ConcussiveShotCustomImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector const& HitLocation, struct FVector const& HitNormal )
{
	static UFunction* pFnConcussiveShotCustomImpact = NULL;

	if ( ! pFnConcussiveShotCustomImpact )
		pFnConcussiveShotCustomImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_AmmoPower.ConcussiveShotCustomImpact" );

	USFXPowerCustomAction_AmmoPower_execConcussiveShotCustomImpact_Parms ConcussiveShotCustomImpact_Parms;
	ConcussiveShotCustomImpact_Parms.Resistance = Resistance;
	ConcussiveShotCustomImpact_Parms.oImpacted = oImpacted;
	ConcussiveShotCustomImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;
	memcpy ( &ConcussiveShotCustomImpact_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ConcussiveShotCustomImpact_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnConcussiveShotCustomImpact, &ConcussiveShotCustomImpact_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_AmmoPower.ApplyPowerEffects
// [0x00020000]
// Parameters infos:
// class ABioPawn*                oPawn                          ( CPF_Parm )
// class ASFXWeapon*              oWeapon                        ( CPF_Parm )

void USFXPowerCustomAction_AmmoPower::ApplyPowerEffects ( class ABioPawn* oPawn, class ASFXWeapon* oWeapon )
{
	static UFunction* pFnApplyPowerEffects = NULL;

	if ( ! pFnApplyPowerEffects )
		pFnApplyPowerEffects = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_AmmoPower.ApplyPowerEffects" );

	USFXPowerCustomAction_AmmoPower_execApplyPowerEffects_Parms ApplyPowerEffects_Parms;
	ApplyPowerEffects_Parms.oPawn = oPawn;
	ApplyPowerEffects_Parms.oWeapon = oWeapon;

	this->ProcessEvent ( pFnApplyPowerEffects, &ApplyPowerEffects_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_AmmoPower.SetWeaponPower
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioPawn*                oPawn                          ( CPF_Parm )
// class ASFXWeapon*              oWeapon                        ( CPF_Parm )
// unsigned long                  bOverrideCurrentPower          ( CPF_Parm )

bool USFXPowerCustomAction_AmmoPower::SetWeaponPower ( class ABioPawn* oPawn, class ASFXWeapon* oWeapon, unsigned long bOverrideCurrentPower )
{
	static UFunction* pFnSetWeaponPower = NULL;

	if ( ! pFnSetWeaponPower )
		pFnSetWeaponPower = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_AmmoPower.SetWeaponPower" );

	USFXPowerCustomAction_AmmoPower_execSetWeaponPower_Parms SetWeaponPower_Parms;
	SetWeaponPower_Parms.oPawn = oPawn;
	SetWeaponPower_Parms.oWeapon = oWeapon;
	SetWeaponPower_Parms.bOverrideCurrentPower = bOverrideCurrentPower;

	this->ProcessEvent ( pFnSetWeaponPower, &SetWeaponPower_Parms, NULL );

	return SetWeaponPower_Parms.ReturnValue;
};

// Function SFXGameContent.SFXPowerCustomAction_AmmoPower.DeferedSetWeaponPower
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_AmmoPower::DeferedSetWeaponPower ( )
{
	static UFunction* pFnDeferedSetWeaponPower = NULL;

	if ( ! pFnDeferedSetWeaponPower )
		pFnDeferedSetWeaponPower = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_AmmoPower.DeferedSetWeaponPower" );

	USFXPowerCustomAction_AmmoPower_execDeferedSetWeaponPower_Parms DeferedSetWeaponPower_Parms;

	this->ProcessEvent ( pFnDeferedSetWeaponPower, &DeferedSetWeaponPower_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_AmmoPower.OnImpact
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  Resistance                     ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

bool USFXPowerCustomAction_AmmoPower::OnImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector const& HitLocation, struct FVector const& HitNormal )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_AmmoPower.OnImpact" );

	USFXPowerCustomAction_AmmoPower_execOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.Resistance = Resistance;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;
	memcpy ( &OnImpact_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &OnImpact_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent.SFXPowerCustomAction_AmmoPower.ReloadAmmoPower
// [0x00020002]
// Parameters infos:
// class ABioPawn*                Target                         ( CPF_Parm )
// class ASFXWeapon*              Weapon                         ( CPF_Parm )

void USFXPowerCustomAction_AmmoPower::ReloadAmmoPower ( class ABioPawn* Target, class ASFXWeapon* Weapon )
{
	static UFunction* pFnReloadAmmoPower = NULL;

	if ( ! pFnReloadAmmoPower )
		pFnReloadAmmoPower = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_AmmoPower.ReloadAmmoPower" );

	USFXPowerCustomAction_AmmoPower_execReloadAmmoPower_Parms ReloadAmmoPower_Parms;
	ReloadAmmoPower_Parms.Target = Target;
	ReloadAmmoPower_Parms.Weapon = Weapon;

	this->ProcessEvent ( pFnReloadAmmoPower, &ReloadAmmoPower_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_AmmoPower.StopOmniTool
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXPowerCustomAction_AmmoPower::StopOmniTool ( )
{
	static UFunction* pFnStopOmniTool = NULL;

	if ( ! pFnStopOmniTool )
		pFnStopOmniTool = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_AmmoPower.StopOmniTool" );

	USFXPowerCustomAction_AmmoPower_execStopOmniTool_Parms StopOmniTool_Parms;

	this->ProcessEvent ( pFnStopOmniTool, &StopOmniTool_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_AmmoPower.StartCustomAction
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_AmmoPower::StartCustomAction ( )
{
	static UFunction* pFnStartCustomAction = NULL;

	if ( ! pFnStartCustomAction )
		pFnStartCustomAction = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_AmmoPower.StartCustomAction" );

	USFXPowerCustomAction_AmmoPower_execStartCustomAction_Parms StartCustomAction_Parms;

	this->ProcessEvent ( pFnStartCustomAction, &StartCustomAction_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_AmmoPower.CanUsePower
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oTarget                        ( CPF_Parm )

bool USFXPowerCustomAction_AmmoPower::CanUsePower ( class AActor* oTarget )
{
	static UFunction* pFnCanUsePower = NULL;

	if ( ! pFnCanUsePower )
		pFnCanUsePower = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_AmmoPower.CanUsePower" );

	USFXPowerCustomAction_AmmoPower_execCanUsePower_Parms CanUsePower_Parms;
	CanUsePower_Parms.oTarget = oTarget;

	this->ProcessEvent ( pFnCanUsePower, &CanUsePower_Parms, NULL );

	return CanUsePower_Parms.ReturnValue;
};

// Function SFXGameContent.SFXPowerCustomAction_AmmoPower.PrecacheVFX
// [0x00022002]
// Parameters infos:
// class ASFXObjectPool*          ObjectPool                     ( CPF_Parm )
// class URvrClientEffectManager* ClientEffects                  ( CPF_Parm )

void USFXPowerCustomAction_AmmoPower::PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects )
{
	static UFunction* pFnPrecacheVFX = NULL;

	if ( ! pFnPrecacheVFX )
		pFnPrecacheVFX = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_AmmoPower.PrecacheVFX" );

	USFXPowerCustomAction_AmmoPower_execPrecacheVFX_Parms PrecacheVFX_Parms;
	PrecacheVFX_Parms.ObjectPool = ObjectPool;
	PrecacheVFX_Parms.ClientEffects = ClientEffects;

	this->ProcessEvent ( pFnPrecacheVFX, &PrecacheVFX_Parms, NULL );
};



class UClass* USFXGameEffect_FireDeath::pClassPointer = NULL;

class UClass* USFXGameEffect_FireDeath::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXGameEffect_FireDeath" );

		return pClassPointer;
	};



class UClass* USFXGameEffect_HenchmanArmorBonus_HealthBonus::pClassPointer = NULL;

class UClass* USFXGameEffect_HenchmanArmorBonus_HealthBonus::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXGameEffect_HenchmanArmorBonus_HealthBonus" );

		return pClassPointer;
	};



class UClass* USFXGameEffect_HenchmanArmorBonus_ShieldBonus::pClassPointer = NULL;

class UClass* USFXGameEffect_HenchmanArmorBonus_ShieldBonus::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXGameEffect_HenchmanArmorBonus_ShieldBonus" );

		return pClassPointer;
	};



class UClass* USFXGameEffect_IncendiaryAmmo::pClassPointer = NULL;

class UClass* USFXGameEffect_IncendiaryAmmo::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXGameEffect_IncendiaryAmmo" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXGameEffect_IncendiaryAmmo.AddGameEffects
// [0x00020002]
// Parameters infos:
// class AActor*                  oTarget                        ( CPF_Parm )

void USFXGameEffect_IncendiaryAmmo::AddGameEffects ( class AActor* oTarget )
{
	static UFunction* pFnAddGameEffects = NULL;

	if ( ! pFnAddGameEffects )
		pFnAddGameEffects = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_IncendiaryAmmo.AddGameEffects" );

	USFXGameEffect_IncendiaryAmmo_execAddGameEffects_Parms AddGameEffects_Parms;
	AddGameEffects_Parms.oTarget = oTarget;

	this->ProcessEvent ( pFnAddGameEffects, &AddGameEffects_Parms, NULL );
};

// Function SFXGameContent.SFXGameEffect_IncendiaryAmmo.GetDamageVocProbabilityMod
// [0x00020002]
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float USFXGameEffect_IncendiaryAmmo::GetDamageVocProbabilityMod ( )
{
	static UFunction* pFnGetDamageVocProbabilityMod = NULL;

	if ( ! pFnGetDamageVocProbabilityMod )
		pFnGetDamageVocProbabilityMod = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_IncendiaryAmmo.GetDamageVocProbabilityMod" );

	USFXGameEffect_IncendiaryAmmo_execGetDamageVocProbabilityMod_Parms GetDamageVocProbabilityMod_Parms;

	this->ProcessEvent ( pFnGetDamageVocProbabilityMod, &GetDamageVocProbabilityMod_Parms, NULL );

	return GetDamageVocProbabilityMod_Parms.ReturnValue;
};

// Function SFXGameContent.SFXGameEffect_IncendiaryAmmo.OnWeaponImpact
// [0x00020002]
// Parameters infos:
// class ASFXWeapon*              Weapon                         ( CPF_Parm )
// struct FImpactInfo             Impact                         ( CPF_Parm )

void USFXGameEffect_IncendiaryAmmo::OnWeaponImpact ( class ASFXWeapon* Weapon, struct FImpactInfo const& Impact )
{
	static UFunction* pFnOnWeaponImpact = NULL;

	if ( ! pFnOnWeaponImpact )
		pFnOnWeaponImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_IncendiaryAmmo.OnWeaponImpact" );

	USFXGameEffect_IncendiaryAmmo_execOnWeaponImpact_Parms OnWeaponImpact_Parms;
	OnWeaponImpact_Parms.Weapon = Weapon;
	memcpy ( &OnWeaponImpact_Parms.Impact, &Impact, 0x64 );

	this->ProcessEvent ( pFnOnWeaponImpact, &OnWeaponImpact_Parms, NULL );
};

// Function SFXGameContent.SFXGameEffect_IncendiaryAmmo.OnRemoved
// [0x00020002]
// Parameters infos:

void USFXGameEffect_IncendiaryAmmo::OnRemoved ( )
{
	static UFunction* pFnOnRemoved = NULL;

	if ( ! pFnOnRemoved )
		pFnOnRemoved = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_IncendiaryAmmo.OnRemoved" );

	USFXGameEffect_IncendiaryAmmo_execOnRemoved_Parms OnRemoved_Parms;

	this->ProcessEvent ( pFnOnRemoved, &OnRemoved_Parms, NULL );
};

// Function SFXGameContent.SFXGameEffect_IncendiaryAmmo.OnApplied
// [0x00020002]
// Parameters infos:

void USFXGameEffect_IncendiaryAmmo::OnApplied ( )
{
	static UFunction* pFnOnApplied = NULL;

	if ( ! pFnOnApplied )
		pFnOnApplied = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_IncendiaryAmmo.OnApplied" );

	USFXGameEffect_IncendiaryAmmo_execOnApplied_Parms OnApplied_Parms;

	this->ProcessEvent ( pFnOnApplied, &OnApplied_Parms, NULL );
};

// Function SFXGameContent.SFXGameEffect_IncendiaryAmmo.PrecacheVFX
// [0x00022002]
// Parameters infos:
// class ASFXObjectPool*          ObjectPool                     ( CPF_Parm )
// class URvrClientEffectManager* ClientEffects                  ( CPF_Parm )

void USFXGameEffect_IncendiaryAmmo::PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects )
{
	static UFunction* pFnPrecacheVFX = NULL;

	if ( ! pFnPrecacheVFX )
		pFnPrecacheVFX = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_IncendiaryAmmo.PrecacheVFX" );

	USFXGameEffect_IncendiaryAmmo_execPrecacheVFX_Parms PrecacheVFX_Parms;
	PrecacheVFX_Parms.ObjectPool = ObjectPool;
	PrecacheVFX_Parms.ClientEffects = ClientEffects;

	this->ProcessEvent ( pFnPrecacheVFX, &PrecacheVFX_Parms, NULL );
};



class UClass* USFXPowerCustomAction_IncendiaryAmmo::pClassPointer = NULL;

class UClass* USFXPowerCustomAction_IncendiaryAmmo::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXPowerCustomAction_IncendiaryAmmo" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXPowerCustomAction_IncendiaryAmmo.PopulatePowerStatBarEvolves
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_IncendiaryAmmo::PopulatePowerStatBarEvolves ( )
{
	static UFunction* pFnPopulatePowerStatBarEvolves = NULL;

	if ( ! pFnPopulatePowerStatBarEvolves )
		pFnPopulatePowerStatBarEvolves = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_IncendiaryAmmo.PopulatePowerStatBarEvolves" );

	USFXPowerCustomAction_IncendiaryAmmo_execPopulatePowerStatBarEvolves_Parms PopulatePowerStatBarEvolves_Parms;

	this->ProcessEvent ( pFnPopulatePowerStatBarEvolves, &PopulatePowerStatBarEvolves_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_IncendiaryAmmo.ApplyBonus
// [0x00024002]
// Parameters infos:
// struct SFXName                 Parameter                      ( CPF_Parm )
// class USFXGameEffect*          Bonus                          ( CPF_Parm )
// unsigned long                  bRemove                        ( CPF_OptionalParm | CPF_Parm )

void USFXPowerCustomAction_IncendiaryAmmo::ApplyBonus ( struct SFXName Parameter, class USFXGameEffect* Bonus, unsigned long bRemove )
{
	static UFunction* pFnApplyBonus = NULL;

	if ( ! pFnApplyBonus )
		pFnApplyBonus = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_IncendiaryAmmo.ApplyBonus" );

	USFXPowerCustomAction_IncendiaryAmmo_execApplyBonus_Parms ApplyBonus_Parms;
	memcpy ( &ApplyBonus_Parms.Parameter, &Parameter, 0x8 );
	ApplyBonus_Parms.Bonus = Bonus;
	ApplyBonus_Parms.bRemove = bRemove;

	this->ProcessEvent ( pFnApplyBonus, &ApplyBonus_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_IncendiaryAmmo.RecalculateAllPowerData
// [0x00024002]
// Parameters infos:
// unsigned long                  bReset                         ( CPF_OptionalParm | CPF_Parm )

void USFXPowerCustomAction_IncendiaryAmmo::RecalculateAllPowerData ( unsigned long bReset )
{
	static UFunction* pFnRecalculateAllPowerData = NULL;

	if ( ! pFnRecalculateAllPowerData )
		pFnRecalculateAllPowerData = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_IncendiaryAmmo.RecalculateAllPowerData" );

	USFXPowerCustomAction_IncendiaryAmmo_execRecalculateAllPowerData_Parms RecalculateAllPowerData_Parms;
	RecalculateAllPowerData_Parms.bReset = bReset;

	this->ProcessEvent ( pFnRecalculateAllPowerData, &RecalculateAllPowerData_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_IncendiaryAmmo.ResetPower
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_IncendiaryAmmo::ResetPower ( )
{
	static UFunction* pFnResetPower = NULL;

	if ( ! pFnResetPower )
		pFnResetPower = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_IncendiaryAmmo.ResetPower" );

	USFXPowerCustomAction_IncendiaryAmmo_execResetPower_Parms ResetPower_Parms;

	this->ProcessEvent ( pFnResetPower, &ResetPower_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_IncendiaryAmmo.EvolvePower
// [0x00020002]
// Parameters infos:
// unsigned char                  choice                         ( CPF_Parm )

void USFXPowerCustomAction_IncendiaryAmmo::EvolvePower ( unsigned char choice )
{
	static UFunction* pFnEvolvePower = NULL;

	if ( ! pFnEvolvePower )
		pFnEvolvePower = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_IncendiaryAmmo.EvolvePower" );

	USFXPowerCustomAction_IncendiaryAmmo_execEvolvePower_Parms EvolvePower_Parms;
	EvolvePower_Parms.choice = choice;

	this->ProcessEvent ( pFnEvolvePower, &EvolvePower_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_IncendiaryAmmo.GetIncendiaryAmmoEffect
// [0x00020002]
// Parameters infos:
// class USFXGameEffect_IncendiaryAmmo* ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class USFXGameEffect_IncendiaryAmmo* USFXPowerCustomAction_IncendiaryAmmo::GetIncendiaryAmmoEffect ( )
{
	static UFunction* pFnGetIncendiaryAmmoEffect = NULL;

	if ( ! pFnGetIncendiaryAmmoEffect )
		pFnGetIncendiaryAmmoEffect = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_IncendiaryAmmo.GetIncendiaryAmmoEffect" );

	USFXPowerCustomAction_IncendiaryAmmo_execGetIncendiaryAmmoEffect_Parms GetIncendiaryAmmoEffect_Parms;

	this->ProcessEvent ( pFnGetIncendiaryAmmoEffect, &GetIncendiaryAmmoEffect_Parms, NULL );

	return GetIncendiaryAmmoEffect_Parms.ReturnValue;
};

// Function SFXGameContent.SFXPowerCustomAction_IncendiaryAmmo.OnActorImpacted
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  Resistance                     ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

bool USFXPowerCustomAction_IncendiaryAmmo::OnActorImpacted ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector const& HitLocation, struct FVector const& HitNormal )
{
	static UFunction* pFnOnActorImpacted = NULL;

	if ( ! pFnOnActorImpacted )
		pFnOnActorImpacted = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_IncendiaryAmmo.OnActorImpacted" );

	USFXPowerCustomAction_IncendiaryAmmo_execOnActorImpacted_Parms OnActorImpacted_Parms;
	OnActorImpacted_Parms.Resistance = Resistance;
	OnActorImpacted_Parms.oImpacted = oImpacted;
	OnActorImpacted_Parms.nPreviouslyImpacted = nPreviouslyImpacted;
	memcpy ( &OnActorImpacted_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &OnActorImpacted_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnOnActorImpacted, &OnActorImpacted_Parms, NULL );

	return OnActorImpacted_Parms.ReturnValue;
};

// Function SFXGameContent.SFXPowerCustomAction_IncendiaryAmmo.DoConcussiveShotSpecialImpact
// [0x00020002]
// Parameters infos:
// class AActor*                  oImpacted                      ( CPF_Parm )
// float                          ImpactEffectDuration           ( CPF_Parm )

void USFXPowerCustomAction_IncendiaryAmmo::DoConcussiveShotSpecialImpact ( class AActor* oImpacted, float ImpactEffectDuration )
{
	static UFunction* pFnDoConcussiveShotSpecialImpact = NULL;

	if ( ! pFnDoConcussiveShotSpecialImpact )
		pFnDoConcussiveShotSpecialImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_IncendiaryAmmo.DoConcussiveShotSpecialImpact" );

	USFXPowerCustomAction_IncendiaryAmmo_execDoConcussiveShotSpecialImpact_Parms DoConcussiveShotSpecialImpact_Parms;
	DoConcussiveShotSpecialImpact_Parms.oImpacted = oImpacted;
	DoConcussiveShotSpecialImpact_Parms.ImpactEffectDuration = ImpactEffectDuration;

	this->ProcessEvent ( pFnDoConcussiveShotSpecialImpact, &DoConcussiveShotSpecialImpact_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_IncendiaryAmmo.ConcussiveShotCustomImpact
// [0x00020002]
// Parameters infos:
// unsigned char                  Resistance                     ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void USFXPowerCustomAction_IncendiaryAmmo::ConcussiveShotCustomImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector const& HitLocation, struct FVector const& HitNormal )
{
	static UFunction* pFnConcussiveShotCustomImpact = NULL;

	if ( ! pFnConcussiveShotCustomImpact )
		pFnConcussiveShotCustomImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_IncendiaryAmmo.ConcussiveShotCustomImpact" );

	USFXPowerCustomAction_IncendiaryAmmo_execConcussiveShotCustomImpact_Parms ConcussiveShotCustomImpact_Parms;
	ConcussiveShotCustomImpact_Parms.Resistance = Resistance;
	ConcussiveShotCustomImpact_Parms.oImpacted = oImpacted;
	ConcussiveShotCustomImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;
	memcpy ( &ConcussiveShotCustomImpact_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ConcussiveShotCustomImpact_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnConcussiveShotCustomImpact, &ConcussiveShotCustomImpact_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_IncendiaryAmmo.ClientDoPowerSubsequentImpact
// [0x00024002]
// Parameters infos:
// class AActor*                  oActor                         ( CPF_Parm )
// int                            CustomActionReactionType       ( CPF_OptionalParm | CPF_Parm )
// float                          Duration                       ( CPF_OptionalParm | CPF_Parm )
// int                            ImpactCount                    ( CPF_OptionalParm | CPF_Parm )
// float                          Delay                          ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  DoCallback                     ( CPF_OptionalParm | CPF_Parm )

void USFXPowerCustomAction_IncendiaryAmmo::ClientDoPowerSubsequentImpact ( class AActor* oActor, int CustomActionReactionType, float Duration, int ImpactCount, float Delay, unsigned long DoCallback )
{
	static UFunction* pFnClientDoPowerSubsequentImpact = NULL;

	if ( ! pFnClientDoPowerSubsequentImpact )
		pFnClientDoPowerSubsequentImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_IncendiaryAmmo.ClientDoPowerSubsequentImpact" );

	USFXPowerCustomAction_IncendiaryAmmo_execClientDoPowerSubsequentImpact_Parms ClientDoPowerSubsequentImpact_Parms;
	ClientDoPowerSubsequentImpact_Parms.oActor = oActor;
	ClientDoPowerSubsequentImpact_Parms.CustomActionReactionType = CustomActionReactionType;
	ClientDoPowerSubsequentImpact_Parms.Duration = Duration;
	ClientDoPowerSubsequentImpact_Parms.ImpactCount = ImpactCount;
	ClientDoPowerSubsequentImpact_Parms.Delay = Delay;
	ClientDoPowerSubsequentImpact_Parms.DoCallback = DoCallback;

	this->ProcessEvent ( pFnClientDoPowerSubsequentImpact, &ClientDoPowerSubsequentImpact_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_IncendiaryAmmo.ClientDoCustomActionImpact
// [0x00024002]
// Parameters infos:
// class AActor*                  oActor                         ( CPF_Parm )
// int                            ImpactCount                    ( CPF_Parm )
// unsigned long                  bFirstTarget                   ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_OptionalParm | CPF_Parm )
// int                            CustomActionReactionType       ( CPF_OptionalParm | CPF_Parm )

void USFXPowerCustomAction_IncendiaryAmmo::ClientDoCustomActionImpact ( class AActor* oActor, int ImpactCount, unsigned long bFirstTarget, struct FVector const& HitLocation, struct FVector const& HitNormal, int CustomActionReactionType )
{
	static UFunction* pFnClientDoCustomActionImpact = NULL;

	if ( ! pFnClientDoCustomActionImpact )
		pFnClientDoCustomActionImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_IncendiaryAmmo.ClientDoCustomActionImpact" );

	USFXPowerCustomAction_IncendiaryAmmo_execClientDoCustomActionImpact_Parms ClientDoCustomActionImpact_Parms;
	ClientDoCustomActionImpact_Parms.oActor = oActor;
	ClientDoCustomActionImpact_Parms.ImpactCount = ImpactCount;
	ClientDoCustomActionImpact_Parms.bFirstTarget = bFirstTarget;
	memcpy ( &ClientDoCustomActionImpact_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ClientDoCustomActionImpact_Parms.HitNormal, &HitNormal, 0xC );
	ClientDoCustomActionImpact_Parms.CustomActionReactionType = CustomActionReactionType;

	this->ProcessEvent ( pFnClientDoCustomActionImpact, &ClientDoCustomActionImpact_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_IncendiaryAmmo.DoEvolvedAoEImpact
// [0x00020002]
// Parameters infos:
// struct FImpactInfo             Impact                         ( CPF_Parm )
// class USFXGameEffect_IncendiaryAmmo* Effect                         ( CPF_Parm )

void USFXPowerCustomAction_IncendiaryAmmo::DoEvolvedAoEImpact ( struct FImpactInfo const& Impact, class USFXGameEffect_IncendiaryAmmo* Effect )
{
	static UFunction* pFnDoEvolvedAoEImpact = NULL;

	if ( ! pFnDoEvolvedAoEImpact )
		pFnDoEvolvedAoEImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_IncendiaryAmmo.DoEvolvedAoEImpact" );

	USFXPowerCustomAction_IncendiaryAmmo_execDoEvolvedAoEImpact_Parms DoEvolvedAoEImpact_Parms;
	memcpy ( &DoEvolvedAoEImpact_Parms.Impact, &Impact, 0x64 );
	DoEvolvedAoEImpact_Parms.Effect = Effect;

	this->ProcessEvent ( pFnDoEvolvedAoEImpact, &DoEvolvedAoEImpact_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_IncendiaryAmmo.SpawnRandomImpactVFX
// [0x00040003] ( FUNC_Final )
// Parameters infos:
// class ABioPawn*                Pawn                           ( CPF_Parm )
// class UParticleSystem*         ImpactParticleSystem           ( CPF_Parm )
// class AActor*                  inInstigator                   ( CPF_Parm )

void USFXPowerCustomAction_IncendiaryAmmo::SpawnRandomImpactVFX ( class ABioPawn* Pawn, class UParticleSystem* ImpactParticleSystem, class AActor* inInstigator )
{
	static UFunction* pFnSpawnRandomImpactVFX = NULL;

	if ( ! pFnSpawnRandomImpactVFX )
		pFnSpawnRandomImpactVFX = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_IncendiaryAmmo.SpawnRandomImpactVFX" );

	USFXPowerCustomAction_IncendiaryAmmo_execSpawnRandomImpactVFX_Parms SpawnRandomImpactVFX_Parms;
	SpawnRandomImpactVFX_Parms.Pawn = Pawn;
	SpawnRandomImpactVFX_Parms.ImpactParticleSystem = ImpactParticleSystem;
	SpawnRandomImpactVFX_Parms.inInstigator = inInstigator;

	this->ProcessEvent ( pFnSpawnRandomImpactVFX, &SpawnRandomImpactVFX_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_IncendiaryAmmo.SetupEffect
// [0x00024002]
// Parameters infos:
// class USFXGameEffect_AmmoPower* Effect                         ( CPF_Parm )
// class ABioPawn*                oPawn                          ( CPF_OptionalParm | CPF_Parm )

void USFXPowerCustomAction_IncendiaryAmmo::SetupEffect ( class USFXGameEffect_AmmoPower* Effect, class ABioPawn* oPawn )
{
	static UFunction* pFnSetupEffect = NULL;

	if ( ! pFnSetupEffect )
		pFnSetupEffect = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_IncendiaryAmmo.SetupEffect" );

	USFXPowerCustomAction_IncendiaryAmmo_execSetupEffect_Parms SetupEffect_Parms;
	SetupEffect_Parms.Effect = Effect;
	SetupEffect_Parms.oPawn = oPawn;

	this->ProcessEvent ( pFnSetupEffect, &SetupEffect_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_IncendiaryAmmo.GetDamageType
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// class UClass*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UClass* USFXPowerCustomAction_IncendiaryAmmo::GetDamageType ( )
{
	static UFunction* pFnGetDamageType = NULL;

	if ( ! pFnGetDamageType )
		pFnGetDamageType = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_IncendiaryAmmo.GetDamageType" );

	USFXPowerCustomAction_IncendiaryAmmo_execGetDamageType_Parms GetDamageType_Parms;

	this->ProcessEvent ( pFnGetDamageType, &GetDamageType_Parms, NULL );

	return GetDamageType_Parms.ReturnValue;
};

// Function SFXGameContent.SFXPowerCustomAction_IncendiaryAmmo.ApplyPowerEffects
// [0x00020002]
// Parameters infos:
// class ABioPawn*                oPawn                          ( CPF_Parm )
// class ASFXWeapon*              oWeapon                        ( CPF_Parm )

void USFXPowerCustomAction_IncendiaryAmmo::ApplyPowerEffects ( class ABioPawn* oPawn, class ASFXWeapon* oWeapon )
{
	static UFunction* pFnApplyPowerEffects = NULL;

	if ( ! pFnApplyPowerEffects )
		pFnApplyPowerEffects = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_IncendiaryAmmo.ApplyPowerEffects" );

	USFXPowerCustomAction_IncendiaryAmmo_execApplyPowerEffects_Parms ApplyPowerEffects_Parms;
	ApplyPowerEffects_Parms.oPawn = oPawn;
	ApplyPowerEffects_Parms.oWeapon = oWeapon;

	this->ProcessEvent ( pFnApplyPowerEffects, &ApplyPowerEffects_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_IncendiaryAmmo.PrecacheVFX
// [0x00022002]
// Parameters infos:
// class ASFXObjectPool*          ObjectPool                     ( CPF_Parm )
// class URvrClientEffectManager* ClientEffects                  ( CPF_Parm )

void USFXPowerCustomAction_IncendiaryAmmo::PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects )
{
	static UFunction* pFnPrecacheVFX = NULL;

	if ( ! pFnPrecacheVFX )
		pFnPrecacheVFX = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_IncendiaryAmmo.PrecacheVFX" );

	USFXPowerCustomAction_IncendiaryAmmo_execPrecacheVFX_Parms PrecacheVFX_Parms;
	PrecacheVFX_Parms.ObjectPool = ObjectPool;
	PrecacheVFX_Parms.ClientEffects = ClientEffects;

	this->ProcessEvent ( pFnPrecacheVFX, &PrecacheVFX_Parms, NULL );
};



class UClass* USFXGameEffect_WeaponVFXChange::pClassPointer = NULL;

class UClass* USFXGameEffect_WeaponVFXChange::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXGameEffect_WeaponVFXChange" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXGameEffect_WeaponVFXChange.OnRemoved
// [0x00020002]
// Parameters infos:

void USFXGameEffect_WeaponVFXChange::OnRemoved ( )
{
	static UFunction* pFnOnRemoved = NULL;

	if ( ! pFnOnRemoved )
		pFnOnRemoved = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_WeaponVFXChange.OnRemoved" );

	USFXGameEffect_WeaponVFXChange_execOnRemoved_Parms OnRemoved_Parms;

	this->ProcessEvent ( pFnOnRemoved, &OnRemoved_Parms, NULL );
};

// Function SFXGameContent.SFXGameEffect_WeaponVFXChange.OnApplied
// [0x00020002]
// Parameters infos:

void USFXGameEffect_WeaponVFXChange::OnApplied ( )
{
	static UFunction* pFnOnApplied = NULL;

	if ( ! pFnOnApplied )
		pFnOnApplied = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGameEffect_WeaponVFXChange.OnApplied" );

	USFXGameEffect_WeaponVFXChange_execOnApplied_Parms OnApplied_Parms;

	this->ProcessEvent ( pFnOnApplied, &OnApplied_Parms, NULL );
};



class UClass* ASFXPawn_Marine::pClassPointer = NULL;

class UClass* ASFXPawn_Marine::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXPawn_Marine" );

		return pClassPointer;
	};



class UClass* USFXPowerCustomAction_FragGrenade::pClassPointer = NULL;

class UClass* USFXPowerCustomAction_FragGrenade::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXPowerCustomAction_FragGrenade" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXPowerCustomAction_FragGrenade.PopulatePowerStatBarEvolves
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_FragGrenade::PopulatePowerStatBarEvolves ( )
{
	static UFunction* pFnPopulatePowerStatBarEvolves = NULL;

	if ( ! pFnPopulatePowerStatBarEvolves )
		pFnPopulatePowerStatBarEvolves = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_FragGrenade.PopulatePowerStatBarEvolves" );

	USFXPowerCustomAction_FragGrenade_execPopulatePowerStatBarEvolves_Parms PopulatePowerStatBarEvolves_Parms;

	this->ProcessEvent ( pFnPopulatePowerStatBarEvolves, &PopulatePowerStatBarEvolves_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_FragGrenade.GetDefaultClientEffectParams
// [0x00020002]
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FVector USFXPowerCustomAction_FragGrenade::GetDefaultClientEffectParams ( )
{
	static UFunction* pFnGetDefaultClientEffectParams = NULL;

	if ( ! pFnGetDefaultClientEffectParams )
		pFnGetDefaultClientEffectParams = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_FragGrenade.GetDefaultClientEffectParams" );

	USFXPowerCustomAction_FragGrenade_execGetDefaultClientEffectParams_Parms GetDefaultClientEffectParams_Parms;

	this->ProcessEvent ( pFnGetDefaultClientEffectParams, &GetDefaultClientEffectParams_Parms, NULL );

	return GetDefaultClientEffectParams_Parms.ReturnValue;
};

// Function SFXGameContent.SFXPowerCustomAction_FragGrenade.RecalculateAllPowerData
// [0x00024002]
// Parameters infos:
// unsigned long                  bReset                         ( CPF_OptionalParm | CPF_Parm )

void USFXPowerCustomAction_FragGrenade::RecalculateAllPowerData ( unsigned long bReset )
{
	static UFunction* pFnRecalculateAllPowerData = NULL;

	if ( ! pFnRecalculateAllPowerData )
		pFnRecalculateAllPowerData = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_FragGrenade.RecalculateAllPowerData" );

	USFXPowerCustomAction_FragGrenade_execRecalculateAllPowerData_Parms RecalculateAllPowerData_Parms;
	RecalculateAllPowerData_Parms.bReset = bReset;

	this->ProcessEvent ( pFnRecalculateAllPowerData, &RecalculateAllPowerData_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_FragGrenade.EvolvePower
// [0x00020002]
// Parameters infos:
// unsigned char                  choice                         ( CPF_Parm )

void USFXPowerCustomAction_FragGrenade::EvolvePower ( unsigned char choice )
{
	static UFunction* pFnEvolvePower = NULL;

	if ( ! pFnEvolvePower )
		pFnEvolvePower = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_FragGrenade.EvolvePower" );

	USFXPowerCustomAction_FragGrenade_execEvolvePower_Parms EvolvePower_Parms;
	EvolvePower_Parms.choice = choice;

	this->ProcessEvent ( pFnEvolvePower, &EvolvePower_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_FragGrenade.OnImpact
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  Resistance                     ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

bool USFXPowerCustomAction_FragGrenade::OnImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector const& HitLocation, struct FVector const& HitNormal )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_FragGrenade.OnImpact" );

	USFXPowerCustomAction_FragGrenade_execOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.Resistance = Resistance;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;
	memcpy ( &OnImpact_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &OnImpact_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent.SFXPowerCustomAction_FragGrenade.ApplyGrenadeBonus
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_FragGrenade::ApplyGrenadeBonus ( )
{
	static UFunction* pFnApplyGrenadeBonus = NULL;

	if ( ! pFnApplyGrenadeBonus )
		pFnApplyGrenadeBonus = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_FragGrenade.ApplyGrenadeBonus" );

	USFXPowerCustomAction_FragGrenade_execApplyGrenadeBonus_Parms ApplyGrenadeBonus_Parms;

	this->ProcessEvent ( pFnApplyGrenadeBonus, &ApplyGrenadeBonus_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_FragGrenade.GetDamageType
// [0x00020002]
// Parameters infos:
// class UClass*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UClass* USFXPowerCustomAction_FragGrenade::GetDamageType ( )
{
	static UFunction* pFnGetDamageType = NULL;

	if ( ! pFnGetDamageType )
		pFnGetDamageType = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_FragGrenade.GetDamageType" );

	USFXPowerCustomAction_FragGrenade_execGetDamageType_Parms GetDamageType_Parms;

	this->ProcessEvent ( pFnGetDamageType, &GetDamageType_Parms, NULL );

	return GetDamageType_Parms.ReturnValue;
};

// Function SFXGameContent.SFXPowerCustomAction_FragGrenade.GetImpactDamage
// [0x00420002]
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm | CPF_OutParm )

float USFXPowerCustomAction_FragGrenade::GetImpactDamage ( class AActor* oImpacted, class UClass** DamageType )
{
	static UFunction* pFnGetImpactDamage = NULL;

	if ( ! pFnGetImpactDamage )
		pFnGetImpactDamage = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_FragGrenade.GetImpactDamage" );

	USFXPowerCustomAction_FragGrenade_execGetImpactDamage_Parms GetImpactDamage_Parms;
	GetImpactDamage_Parms.oImpacted = oImpacted;

	if ( DamageType )
		GetImpactDamage_Parms.DamageType = *DamageType;

	this->ProcessEvent ( pFnGetImpactDamage, &GetImpactDamage_Parms, NULL );

	if ( DamageType )
		*DamageType = GetImpactDamage_Parms.DamageType;

	return GetImpactDamage_Parms.ReturnValue;
};

// Function SFXGameContent.SFXPowerCustomAction_FragGrenade.PlayDetonationEffects
// [0x00024002]
// Parameters infos:
// struct FVector                 ImpactLocation                 ( CPF_Parm )
// struct FVector                 ImpactNormal                   ( CPF_Parm )
// class ASFXProjectile_PowerCustomAction* oProjectile                    ( CPF_OptionalParm | CPF_Parm )

void USFXPowerCustomAction_FragGrenade::PlayDetonationEffects ( struct FVector const& ImpactLocation, struct FVector const& ImpactNormal, class ASFXProjectile_PowerCustomAction* oProjectile )
{
	static UFunction* pFnPlayDetonationEffects = NULL;

	if ( ! pFnPlayDetonationEffects )
		pFnPlayDetonationEffects = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_FragGrenade.PlayDetonationEffects" );

	USFXPowerCustomAction_FragGrenade_execPlayDetonationEffects_Parms PlayDetonationEffects_Parms;
	memcpy ( &PlayDetonationEffects_Parms.ImpactLocation, &ImpactLocation, 0xC );
	memcpy ( &PlayDetonationEffects_Parms.ImpactNormal, &ImpactNormal, 0xC );
	PlayDetonationEffects_Parms.oProjectile = oProjectile;

	this->ProcessEvent ( pFnPlayDetonationEffects, &PlayDetonationEffects_Parms, NULL );
};



class UClass* USFXPowerCustomAction_Carnage::pClassPointer = NULL;

class UClass* USFXPowerCustomAction_Carnage::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXPowerCustomAction_Carnage" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXPowerCustomAction_Carnage.PopulatePowerStatBarEvolves
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_Carnage::PopulatePowerStatBarEvolves ( )
{
	static UFunction* pFnPopulatePowerStatBarEvolves = NULL;

	if ( ! pFnPopulatePowerStatBarEvolves )
		pFnPopulatePowerStatBarEvolves = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Carnage.PopulatePowerStatBarEvolves" );

	USFXPowerCustomAction_Carnage_execPopulatePowerStatBarEvolves_Parms PopulatePowerStatBarEvolves_Parms;

	this->ProcessEvent ( pFnPopulatePowerStatBarEvolves, &PopulatePowerStatBarEvolves_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Carnage.EvolvePower
// [0x00020002]
// Parameters infos:
// unsigned char                  choice                         ( CPF_Parm )

void USFXPowerCustomAction_Carnage::EvolvePower ( unsigned char choice )
{
	static UFunction* pFnEvolvePower = NULL;

	if ( ! pFnEvolvePower )
		pFnEvolvePower = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Carnage.EvolvePower" );

	USFXPowerCustomAction_Carnage_execEvolvePower_Parms EvolvePower_Parms;
	EvolvePower_Parms.choice = choice;

	this->ProcessEvent ( pFnEvolvePower, &EvolvePower_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Carnage.ShouldUsePower
// [0x00420002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Target                         ( CPF_Parm )
// FString                        sOptionalInfo                  ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool USFXPowerCustomAction_Carnage::ShouldUsePower ( class AActor* Target, FString* sOptionalInfo )
{
	static UFunction* pFnShouldUsePower = NULL;

	if ( ! pFnShouldUsePower )
		pFnShouldUsePower = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Carnage.ShouldUsePower" );

	USFXPowerCustomAction_Carnage_execShouldUsePower_Parms ShouldUsePower_Parms;
	ShouldUsePower_Parms.Target = Target;

	if ( sOptionalInfo )
		memcpy ( &ShouldUsePower_Parms.sOptionalInfo, sOptionalInfo, 0x10 );

	this->ProcessEvent ( pFnShouldUsePower, &ShouldUsePower_Parms, NULL );

	if ( sOptionalInfo )
		memcpy ( sOptionalInfo, &ShouldUsePower_Parms.sOptionalInfo, 0x10 );

	return ShouldUsePower_Parms.ReturnValue;
};

// Function SFXGameContent.SFXPowerCustomAction_Carnage.PlayDetonationEffects
// [0x00024002]
// Parameters infos:
// struct FVector                 ImpactLocation                 ( CPF_Parm )
// struct FVector                 ImpactNormal                   ( CPF_Parm )
// class ASFXProjectile_PowerCustomAction* oProjectile                    ( CPF_OptionalParm | CPF_Parm )

void USFXPowerCustomAction_Carnage::PlayDetonationEffects ( struct FVector const& ImpactLocation, struct FVector const& ImpactNormal, class ASFXProjectile_PowerCustomAction* oProjectile )
{
	static UFunction* pFnPlayDetonationEffects = NULL;

	if ( ! pFnPlayDetonationEffects )
		pFnPlayDetonationEffects = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Carnage.PlayDetonationEffects" );

	USFXPowerCustomAction_Carnage_execPlayDetonationEffects_Parms PlayDetonationEffects_Parms;
	memcpy ( &PlayDetonationEffects_Parms.ImpactLocation, &ImpactLocation, 0xC );
	memcpy ( &PlayDetonationEffects_Parms.ImpactNormal, &ImpactNormal, 0xC );
	PlayDetonationEffects_Parms.oProjectile = oProjectile;

	this->ProcessEvent ( pFnPlayDetonationEffects, &PlayDetonationEffects_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Carnage.GetProjectileAttachPoint
// [0x00420002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 AttachPoint                    ( CPF_Parm | CPF_OutParm )

bool USFXPowerCustomAction_Carnage::GetProjectileAttachPoint ( struct FVector* AttachPoint )
{
	static UFunction* pFnGetProjectileAttachPoint = NULL;

	if ( ! pFnGetProjectileAttachPoint )
		pFnGetProjectileAttachPoint = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Carnage.GetProjectileAttachPoint" );

	USFXPowerCustomAction_Carnage_execGetProjectileAttachPoint_Parms GetProjectileAttachPoint_Parms;

	if ( AttachPoint )
		memcpy ( &GetProjectileAttachPoint_Parms.AttachPoint, AttachPoint, 0xC );

	this->ProcessEvent ( pFnGetProjectileAttachPoint, &GetProjectileAttachPoint_Parms, NULL );

	if ( AttachPoint )
		memcpy ( AttachPoint, &GetProjectileAttachPoint_Parms.AttachPoint, 0xC );

	return GetProjectileAttachPoint_Parms.ReturnValue;
};

// Function SFXGameContent.SFXPowerCustomAction_Carnage.ReleasePower
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_Carnage::ReleasePower ( )
{
	static UFunction* pFnReleasePower = NULL;

	if ( ! pFnReleasePower )
		pFnReleasePower = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Carnage.ReleasePower" );

	USFXPowerCustomAction_Carnage_execReleasePower_Parms ReleasePower_Parms;

	this->ProcessEvent ( pFnReleasePower, &ReleasePower_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Carnage.PrecacheVFX
// [0x00022002]
// Parameters infos:
// class ASFXObjectPool*          ObjectPool                     ( CPF_Parm )
// class URvrClientEffectManager* ClientEffects                  ( CPF_Parm )

void USFXPowerCustomAction_Carnage::PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects )
{
	static UFunction* pFnPrecacheVFX = NULL;

	if ( ! pFnPrecacheVFX )
		pFnPrecacheVFX = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Carnage.PrecacheVFX" );

	USFXPowerCustomAction_Carnage_execPrecacheVFX_Parms PrecacheVFX_Parms;
	PrecacheVFX_Parms.ObjectPool = ObjectPool;
	PrecacheVFX_Parms.ClientEffects = ClientEffects;

	this->ProcessEvent ( pFnPrecacheVFX, &PrecacheVFX_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Carnage.OnImpact
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  Resistance                     ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

bool USFXPowerCustomAction_Carnage::OnImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector const& HitLocation, struct FVector const& HitNormal )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Carnage.OnImpact" );

	USFXPowerCustomAction_Carnage_execOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.Resistance = Resistance;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;
	memcpy ( &OnImpact_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &OnImpact_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent.SFXPowerCustomAction_Carnage.GetTotalDamage
// [0x00420002]
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// unsigned long                  bIsDamageOverTime              ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm | CPF_OutParm )

float USFXPowerCustomAction_Carnage::GetTotalDamage ( class AActor* oImpacted, unsigned long bIsDamageOverTime, class UClass** DamageType )
{
	static UFunction* pFnGetTotalDamage = NULL;

	if ( ! pFnGetTotalDamage )
		pFnGetTotalDamage = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Carnage.GetTotalDamage" );

	USFXPowerCustomAction_Carnage_execGetTotalDamage_Parms GetTotalDamage_Parms;
	GetTotalDamage_Parms.oImpacted = oImpacted;
	GetTotalDamage_Parms.bIsDamageOverTime = bIsDamageOverTime;

	if ( DamageType )
		GetTotalDamage_Parms.DamageType = *DamageType;

	this->ProcessEvent ( pFnGetTotalDamage, &GetTotalDamage_Parms, NULL );

	if ( DamageType )
		*DamageType = GetTotalDamage_Parms.DamageType;

	return GetTotalDamage_Parms.ReturnValue;
};

// Function SFXGameContent.SFXPowerCustomAction_Carnage.GetImpactDamage
// [0x00420002]
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm | CPF_OutParm )

float USFXPowerCustomAction_Carnage::GetImpactDamage ( class AActor* oImpacted, class UClass** DamageType )
{
	static UFunction* pFnGetImpactDamage = NULL;

	if ( ! pFnGetImpactDamage )
		pFnGetImpactDamage = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Carnage.GetImpactDamage" );

	USFXPowerCustomAction_Carnage_execGetImpactDamage_Parms GetImpactDamage_Parms;
	GetImpactDamage_Parms.oImpacted = oImpacted;

	if ( DamageType )
		GetImpactDamage_Parms.DamageType = *DamageType;

	this->ProcessEvent ( pFnGetImpactDamage, &GetImpactDamage_Parms, NULL );

	if ( DamageType )
		*DamageType = GetImpactDamage_Parms.DamageType;

	return GetImpactDamage_Parms.ReturnValue;
};

// Function SFXGameContent.SFXPowerCustomAction_Carnage.DoPowerDetonatedForActor
// [0x00024002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oActor                         ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )
// int                            nImpactCount                   ( CPF_Parm )
// unsigned long                  bFirstTarget                   ( CPF_Parm )
// class ASFXProjectile_PowerCustomAction* oProjectile                    ( CPF_OptionalParm | CPF_Parm )

bool USFXPowerCustomAction_Carnage::DoPowerDetonatedForActor ( class AActor* oActor, struct FVector const& HitLocation, struct FVector const& HitNormal, int nImpactCount, unsigned long bFirstTarget, class ASFXProjectile_PowerCustomAction* oProjectile )
{
	static UFunction* pFnDoPowerDetonatedForActor = NULL;

	if ( ! pFnDoPowerDetonatedForActor )
		pFnDoPowerDetonatedForActor = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Carnage.DoPowerDetonatedForActor" );

	USFXPowerCustomAction_Carnage_execDoPowerDetonatedForActor_Parms DoPowerDetonatedForActor_Parms;
	DoPowerDetonatedForActor_Parms.oActor = oActor;
	memcpy ( &DoPowerDetonatedForActor_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &DoPowerDetonatedForActor_Parms.HitNormal, &HitNormal, 0xC );
	DoPowerDetonatedForActor_Parms.nImpactCount = nImpactCount;
	DoPowerDetonatedForActor_Parms.bFirstTarget = bFirstTarget;
	DoPowerDetonatedForActor_Parms.oProjectile = oProjectile;

	this->ProcessEvent ( pFnDoPowerDetonatedForActor, &DoPowerDetonatedForActor_Parms, NULL );

	return DoPowerDetonatedForActor_Parms.ReturnValue;
};



class UClass* USFXPowerCustomAction_Fortification::pClassPointer = NULL;

class UClass* USFXPowerCustomAction_Fortification::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXPowerCustomAction_Fortification" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXPowerCustomAction_Fortification.PopulatePowerStatBarEvolves
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_Fortification::PopulatePowerStatBarEvolves ( )
{
	static UFunction* pFnPopulatePowerStatBarEvolves = NULL;

	if ( ! pFnPopulatePowerStatBarEvolves )
		pFnPopulatePowerStatBarEvolves = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Fortification.PopulatePowerStatBarEvolves" );

	USFXPowerCustomAction_Fortification_execPopulatePowerStatBarEvolves_Parms PopulatePowerStatBarEvolves_Parms;

	this->ProcessEvent ( pFnPopulatePowerStatBarEvolves, &PopulatePowerStatBarEvolves_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Fortification.EvolvePower
// [0x00020002]
// Parameters infos:
// unsigned char                  choice                         ( CPF_Parm )

void USFXPowerCustomAction_Fortification::EvolvePower ( unsigned char choice )
{
	static UFunction* pFnEvolvePower = NULL;

	if ( ! pFnEvolvePower )
		pFnEvolvePower = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Fortification.EvolvePower" );

	USFXPowerCustomAction_Fortification_execEvolvePower_Parms EvolvePower_Parms;
	EvolvePower_Parms.choice = choice;

	this->ProcessEvent ( pFnEvolvePower, &EvolvePower_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Fortification.RecalculateAllPowerData
// [0x00024002]
// Parameters infos:
// unsigned long                  bReset                         ( CPF_OptionalParm | CPF_Parm )

void USFXPowerCustomAction_Fortification::RecalculateAllPowerData ( unsigned long bReset )
{
	static UFunction* pFnRecalculateAllPowerData = NULL;

	if ( ! pFnRecalculateAllPowerData )
		pFnRecalculateAllPowerData = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Fortification.RecalculateAllPowerData" );

	USFXPowerCustomAction_Fortification_execRecalculateAllPowerData_Parms RecalculateAllPowerData_Parms;
	RecalculateAllPowerData_Parms.bReset = bReset;

	this->ProcessEvent ( pFnRecalculateAllPowerData, &RecalculateAllPowerData_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Fortification.RemoveArmor
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_Fortification::RemoveArmor ( )
{
	static UFunction* pFnRemoveArmor = NULL;

	if ( ! pFnRemoveArmor )
		pFnRemoveArmor = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Fortification.RemoveArmor" );

	USFXPowerCustomAction_Fortification_execRemoveArmor_Parms RemoveArmor_Parms;

	this->ProcessEvent ( pFnRemoveArmor, &RemoveArmor_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Fortification.StartPowerCooldown
// [0x00020000]
// Parameters infos:

void USFXPowerCustomAction_Fortification::StartPowerCooldown ( )
{
	static UFunction* pFnStartPowerCooldown = NULL;

	if ( ! pFnStartPowerCooldown )
		pFnStartPowerCooldown = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Fortification.StartPowerCooldown" );

	USFXPowerCustomAction_Fortification_execStartPowerCooldown_Parms StartPowerCooldown_Parms;

	this->ProcessEvent ( pFnStartPowerCooldown, &StartPowerCooldown_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_Fortification.ApplyArmor
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_Fortification::ApplyArmor ( )
{
	static UFunction* pFnApplyArmor = NULL;

	if ( ! pFnApplyArmor )
		pFnApplyArmor = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_Fortification.ApplyArmor" );

	USFXPowerCustomAction_Fortification_execApplyArmor_Parms ApplyArmor_Parms;

	this->ProcessEvent ( pFnApplyArmor, &ApplyArmor_Parms, NULL );
};



class UClass* USFXPowerCustomAction_JimmyPassive::pClassPointer = NULL;

class UClass* USFXPowerCustomAction_JimmyPassive::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXPowerCustomAction_JimmyPassive" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXPowerCustomAction_JimmyPassive.PopulatePowerStatBarEvolves
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_JimmyPassive::PopulatePowerStatBarEvolves ( )
{
	static UFunction* pFnPopulatePowerStatBarEvolves = NULL;

	if ( ! pFnPopulatePowerStatBarEvolves )
		pFnPopulatePowerStatBarEvolves = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_JimmyPassive.PopulatePowerStatBarEvolves" );

	USFXPowerCustomAction_JimmyPassive_execPopulatePowerStatBarEvolves_Parms PopulatePowerStatBarEvolves_Parms;

	this->ProcessEvent ( pFnPopulatePowerStatBarEvolves, &PopulatePowerStatBarEvolves_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_JimmyPassive.EvolvePower
// [0x00020002]
// Parameters infos:
// unsigned char                  choice                         ( CPF_Parm )

void USFXPowerCustomAction_JimmyPassive::EvolvePower ( unsigned char choice )
{
	static UFunction* pFnEvolvePower = NULL;

	if ( ! pFnEvolvePower )
		pFnEvolvePower = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_JimmyPassive.EvolvePower" );

	USFXPowerCustomAction_JimmyPassive_execEvolvePower_Parms EvolvePower_Parms;
	EvolvePower_Parms.choice = choice;

	this->ProcessEvent ( pFnEvolvePower, &EvolvePower_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_JimmyPassive.ResetPower
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_JimmyPassive::ResetPower ( )
{
	static UFunction* pFnResetPower = NULL;

	if ( ! pFnResetPower )
		pFnResetPower = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_JimmyPassive.ResetPower" );

	USFXPowerCustomAction_JimmyPassive_execResetPower_Parms ResetPower_Parms;

	this->ProcessEvent ( pFnResetPower, &ResetPower_Parms, NULL );
};

// Function SFXGameContent.SFXPowerCustomAction_JimmyPassive.ApplyGlobalBonus
// [0x00020002]
// Parameters infos:

void USFXPowerCustomAction_JimmyPassive::ApplyGlobalBonus ( )
{
	static UFunction* pFnApplyGlobalBonus = NULL;

	if ( ! pFnApplyGlobalBonus )
		pFnApplyGlobalBonus = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXPowerCustomAction_JimmyPassive.ApplyGlobalBonus" );

	USFXPowerCustomAction_JimmyPassive_execApplyGlobalBonus_Parms ApplyGlobalBonus_Parms;

	this->ProcessEvent ( pFnApplyGlobalBonus, &ApplyGlobalBonus_Parms, NULL );
};



class UClass* ASFXProjectile_PowerCustomAction_Carnage::pClassPointer = NULL;

class UClass* ASFXProjectile_PowerCustomAction_Carnage::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXProjectile_PowerCustomAction_Carnage" );

		return pClassPointer;
	};



class UClass* ASFXProjectile_PowerCustomAction_FragGrenade::pClassPointer = NULL;

class UClass* ASFXProjectile_PowerCustomAction_FragGrenade::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXProjectile_PowerCustomAction_FragGrenade" );

		return pClassPointer;
	};



class UClass* USFXDamageType_Shotgun::pClassPointer = NULL;

class UClass* USFXDamageType_Shotgun::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXDamageType_Shotgun" );

		return pClassPointer;
	};



class UClass* USFXGUI_ShotgunReticle::pClassPointer = NULL;

class UClass* USFXGUI_ShotgunReticle::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXGUI_ShotgunReticle" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXGUI_ShotgunReticle.ResetReticle
// [0x00024802] ( FUNC_Event )
// Parameters infos:
// unsigned long                  bUnsubscribe                   ( CPF_OptionalParm | CPF_Parm )

void USFXGUI_ShotgunReticle::eventResetReticle ( unsigned long bUnsubscribe )
{
	static UFunction* pFnResetReticle = NULL;

	if ( ! pFnResetReticle )
		pFnResetReticle = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGUI_ShotgunReticle.ResetReticle" );

	USFXGUI_ShotgunReticle_eventResetReticle_Parms ResetReticle_Parms;
	ResetReticle_Parms.bUnsubscribe = bUnsubscribe;

	this->ProcessEvent ( pFnResetReticle, &ResetReticle_Parms, NULL );
};

// Function SFXGameContent.SFXGUI_ShotgunReticle.TargetCanHitChanged
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// unsigned long                  bInSights                      ( CPF_Parm )

void USFXGUI_ShotgunReticle::eventTargetCanHitChanged ( unsigned long bInSights )
{
	static UFunction* pFnTargetCanHitChanged = NULL;

	if ( ! pFnTargetCanHitChanged )
		pFnTargetCanHitChanged = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGUI_ShotgunReticle.TargetCanHitChanged" );

	USFXGUI_ShotgunReticle_eventTargetCanHitChanged_Parms TargetCanHitChanged_Parms;
	TargetCanHitChanged_Parms.bInSights = bInSights;

	this->ProcessEvent ( pFnTargetCanHitChanged, &TargetCanHitChanged_Parms, NULL );
};

// Function SFXGameContent.SFXGUI_ShotgunReticle.Update
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// float                          fDeltaT                        ( CPF_Parm )

void USFXGUI_ShotgunReticle::eventUpdate ( float fDeltaT )
{
	static UFunction* pFnUpdate = NULL;

	if ( ! pFnUpdate )
		pFnUpdate = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGUI_ShotgunReticle.Update" );

	USFXGUI_ShotgunReticle_eventUpdate_Parms Update_Parms;
	Update_Parms.fDeltaT = fDeltaT;

	this->ProcessEvent ( pFnUpdate, &Update_Parms, NULL );
};

// Function SFXGameContent.SFXGUI_ShotgunReticle.PerformReticleHide
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// unsigned long                  bInstant                       ( CPF_Parm )

void USFXGUI_ShotgunReticle::eventPerformReticleHide ( unsigned long bInstant )
{
	static UFunction* pFnPerformReticleHide = NULL;

	if ( ! pFnPerformReticleHide )
		pFnPerformReticleHide = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGUI_ShotgunReticle.PerformReticleHide" );

	USFXGUI_ShotgunReticle_eventPerformReticleHide_Parms PerformReticleHide_Parms;
	PerformReticleHide_Parms.bInstant = bInstant;

	this->ProcessEvent ( pFnPerformReticleHide, &PerformReticleHide_Parms, NULL );
};

// Function SFXGameContent.SFXGUI_ShotgunReticle.PerformReticleShow
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// unsigned long                  bInstant                       ( CPF_Parm )

void USFXGUI_ShotgunReticle::eventPerformReticleShow ( unsigned long bInstant )
{
	static UFunction* pFnPerformReticleShow = NULL;

	if ( ! pFnPerformReticleShow )
		pFnPerformReticleShow = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGUI_ShotgunReticle.PerformReticleShow" );

	USFXGUI_ShotgunReticle_eventPerformReticleShow_Parms PerformReticleShow_Parms;
	PerformReticleShow_Parms.bInstant = bInstant;

	this->ProcessEvent ( pFnPerformReticleShow, &PerformReticleShow_Parms, NULL );
};

// Function SFXGameContent.SFXGUI_ShotgunReticle.OnReticleLoaded
// [0x00020002]
// Parameters infos:

void USFXGUI_ShotgunReticle::OnReticleLoaded ( )
{
	static UFunction* pFnOnReticleLoaded = NULL;

	if ( ! pFnOnReticleLoaded )
		pFnOnReticleLoaded = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXGUI_ShotgunReticle.OnReticleLoaded" );

	USFXGUI_ShotgunReticle_execOnReticleLoaded_Parms OnReticleLoaded_Parms;

	this->ProcessEvent ( pFnOnReticleLoaded, &OnReticleLoaded_Parms, NULL );
};



class UClass* ASFXWeapon_Shotgun_Katana::pClassPointer = NULL;

class UClass* ASFXWeapon_Shotgun_Katana::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXWeapon_Shotgun_Katana" );

		return pClassPointer;
	};



#undef LESDK_IN_GENERATED

#ifdef _MSC_VER
	#pragma pack ( pop )
#endif
