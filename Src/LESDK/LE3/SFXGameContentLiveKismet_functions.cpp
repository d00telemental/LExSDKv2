/*
#############################################################################################
# Mass Effect 3 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.5_Beta-Rev.60-MELE
# ========================================================================================= #
# File: SFXGameContentLiveKismet_functions.cpp
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



class UClass* UBioSeqAct_GiveMissionXP::pClassPointer = NULL;

class UClass* UBioSeqAct_GiveMissionXP::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContentLiveKismet.BioSeqAct_GiveMissionXP" );

		return pClassPointer;
	};

// Function SFXGameContentLiveKismet.BioSeqAct_GiveMissionXP.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UBioSeqAct_GiveMissionXP::eventGetObjClassVersion ( )
{
	static UFunction* pFnGetObjClassVersion = NULL;

	if ( ! pFnGetObjClassVersion )
		pFnGetObjClassVersion = UObject::FindObject< UFunction > ( L"Function SFXGameContentLiveKismet.BioSeqAct_GiveMissionXP.GetObjClassVersion" );

	UBioSeqAct_GiveMissionXP_eventGetObjClassVersion_Parms GetObjClassVersion_Parms;

	this->ProcessEvent ( pFnGetObjClassVersion, &GetObjClassVersion_Parms, NULL );

	return GetObjClassVersion_Parms.ReturnValue;
};



class UClass* USFXSeqAct_ClearAreaMap::pClassPointer = NULL;

class UClass* USFXSeqAct_ClearAreaMap::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContentLiveKismet.SFXSeqAct_ClearAreaMap" );

		return pClassPointer;
	};

// Function SFXGameContentLiveKismet.SFXSeqAct_ClearAreaMap.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USFXSeqAct_ClearAreaMap::eventGetObjClassVersion ( )
{
	static UFunction* pFnGetObjClassVersion = NULL;

	if ( ! pFnGetObjClassVersion )
		pFnGetObjClassVersion = UObject::FindObject< UFunction > ( L"Function SFXGameContentLiveKismet.SFXSeqAct_ClearAreaMap.GetObjClassVersion" );

	USFXSeqAct_ClearAreaMap_eventGetObjClassVersion_Parms GetObjClassVersion_Parms;

	this->ProcessEvent ( pFnGetObjClassVersion, &GetObjClassVersion_Parms, NULL );

	return GetObjClassVersion_Parms.ReturnValue;
};

// Function SFXGameContentLiveKismet.SFXSeqAct_ClearAreaMap.Activated
// [0x00020002]
// Parameters infos:

void USFXSeqAct_ClearAreaMap::Activated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = UObject::FindObject< UFunction > ( L"Function SFXGameContentLiveKismet.SFXSeqAct_ClearAreaMap.Activated" );

	USFXSeqAct_ClearAreaMap_execActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};



class UClass* USFXSeqAct_GetHenchmenInSquad::pClassPointer = NULL;

class UClass* USFXSeqAct_GetHenchmenInSquad::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContentLiveKismet.SFXSeqAct_GetHenchmenInSquad" );

		return pClassPointer;
	};

// Function SFXGameContentLiveKismet.SFXSeqAct_GetHenchmenInSquad.Activated
// [0x00020002]
// Parameters infos:

void USFXSeqAct_GetHenchmenInSquad::Activated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = UObject::FindObject< UFunction > ( L"Function SFXGameContentLiveKismet.SFXSeqAct_GetHenchmenInSquad.Activated" );

	USFXSeqAct_GetHenchmenInSquad_execActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function SFXGameContentLiveKismet.SFXSeqAct_GetHenchmenInSquad.GetPriority
// [0x00020002]
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   Henchman                       ( CPF_Parm )

float USFXSeqAct_GetHenchmenInSquad::GetPriority ( class APawn* Henchman )
{
	static UFunction* pFnGetPriority = NULL;

	if ( ! pFnGetPriority )
		pFnGetPriority = UObject::FindObject< UFunction > ( L"Function SFXGameContentLiveKismet.SFXSeqAct_GetHenchmenInSquad.GetPriority" );

	USFXSeqAct_GetHenchmenInSquad_execGetPriority_Parms GetPriority_Parms;
	GetPriority_Parms.Henchman = Henchman;

	this->ProcessEvent ( pFnGetPriority, &GetPriority_Parms, NULL );

	return GetPriority_Parms.ReturnValue;
};



class UClass* USFXSeqAct_GetTag::pClassPointer = NULL;

class UClass* USFXSeqAct_GetTag::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContentLiveKismet.SFXSeqAct_GetTag" );

		return pClassPointer;
	};

// Function SFXGameContentLiveKismet.SFXSeqAct_GetTag.Activated
// [0x00020002]
// Parameters infos:

void USFXSeqAct_GetTag::Activated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = UObject::FindObject< UFunction > ( L"Function SFXGameContentLiveKismet.SFXSeqAct_GetTag.Activated" );

	USFXSeqAct_GetTag_execActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};



class UClass* Usfxseqact_leavemission::pClassPointer = NULL;

class UClass* Usfxseqact_leavemission::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContentLiveKismet.sfxseqact_leavemission" );

		return pClassPointer;
	};

// Function SFXGameContentLiveKismet.sfxseqact_leavemission.GrantAutomaticGawAssets
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void Usfxseqact_leavemission::GrantAutomaticGawAssets ( )
{
	static UFunction* pFnGrantAutomaticGawAssets = NULL;

	if ( ! pFnGrantAutomaticGawAssets )
		pFnGrantAutomaticGawAssets = UObject::FindObject< UFunction > ( L"Function SFXGameContentLiveKismet.sfxseqact_leavemission.GrantAutomaticGawAssets" );

	Usfxseqact_leavemission_execGrantAutomaticGawAssets_Parms GrantAutomaticGawAssets_Parms;

	this->ProcessEvent ( pFnGrantAutomaticGawAssets, &GrantAutomaticGawAssets_Parms, NULL );
};

// Function SFXGameContentLiveKismet.sfxseqact_leavemission.Activated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void Usfxseqact_leavemission::eventActivated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = UObject::FindObject< UFunction > ( L"Function SFXGameContentLiveKismet.sfxseqact_leavemission.Activated" );

	Usfxseqact_leavemission_eventActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function SFXGameContentLiveKismet.sfxseqact_leavemission.getWorld
// [0x00020002]
// Parameters infos:
// class ABioWorldInfo*           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class ABioWorldInfo* Usfxseqact_leavemission::getWorld ( )
{
	static UFunction* pFngetWorld = NULL;

	if ( ! pFngetWorld )
		pFngetWorld = UObject::FindObject< UFunction > ( L"Function SFXGameContentLiveKismet.sfxseqact_leavemission.getWorld" );

	Usfxseqact_leavemission_execgetWorld_Parms getWorld_Parms;

	this->ProcessEvent ( pFngetWorld, &getWorld_Parms, NULL );

	return getWorld_Parms.ReturnValue;
};



class UClass* USFXSeqAct_SaveGame::pClassPointer = NULL;

class UClass* USFXSeqAct_SaveGame::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContentLiveKismet.SFXSeqAct_SaveGame" );

		return pClassPointer;
	};

// Function SFXGameContentLiveKismet.SFXSeqAct_SaveGame.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USFXSeqAct_SaveGame::eventGetObjClassVersion ( )
{
	static UFunction* pFnGetObjClassVersion = NULL;

	if ( ! pFnGetObjClassVersion )
		pFnGetObjClassVersion = UObject::FindObject< UFunction > ( L"Function SFXGameContentLiveKismet.SFXSeqAct_SaveGame.GetObjClassVersion" );

	USFXSeqAct_SaveGame_eventGetObjClassVersion_Parms GetObjClassVersion_Parms;

	this->ProcessEvent ( pFnGetObjClassVersion, &GetObjClassVersion_Parms, NULL );

	return GetObjClassVersion_Parms.ReturnValue;
};

// Function SFXGameContentLiveKismet.SFXSeqAct_SaveGame.BeginSave
// [0x00020002]
// Parameters infos:
// struct FSFXSaveDescriptor      Descriptor                     ( CPF_Parm | CPF_NeedCtorLink )

void USFXSeqAct_SaveGame::BeginSave ( struct FSFXSaveDescriptor const& Descriptor )
{
	static UFunction* pFnBeginSave = NULL;

	if ( ! pFnBeginSave )
		pFnBeginSave = UObject::FindObject< UFunction > ( L"Function SFXGameContentLiveKismet.SFXSeqAct_SaveGame.BeginSave" );

	USFXSeqAct_SaveGame_execBeginSave_Parms BeginSave_Parms;
	memcpy ( &BeginSave_Parms.Descriptor, &Descriptor, 0x28 );

	this->ProcessEvent ( pFnBeginSave, &BeginSave_Parms, NULL );
};

// Function SFXGameContentLiveKismet.SFXSeqAct_SaveGame.Deactivated
// [0x00020002]
// Parameters infos:

void USFXSeqAct_SaveGame::Deactivated ( )
{
	static UFunction* pFnDeactivated = NULL;

	if ( ! pFnDeactivated )
		pFnDeactivated = UObject::FindObject< UFunction > ( L"Function SFXGameContentLiveKismet.SFXSeqAct_SaveGame.Deactivated" );

	USFXSeqAct_SaveGame_execDeactivated_Parms Deactivated_Parms;

	this->ProcessEvent ( pFnDeactivated, &Deactivated_Parms, NULL );
};

// Function SFXGameContentLiveKismet.SFXSeqAct_SaveGame.Update
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          DeltaTime                      ( CPF_Parm )

bool USFXSeqAct_SaveGame::Update ( float DeltaTime )
{
	static UFunction* pFnUpdate = NULL;

	if ( ! pFnUpdate )
		pFnUpdate = UObject::FindObject< UFunction > ( L"Function SFXGameContentLiveKismet.SFXSeqAct_SaveGame.Update" );

	USFXSeqAct_SaveGame_execUpdate_Parms Update_Parms;
	Update_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnUpdate, &Update_Parms, NULL );

	return Update_Parms.ReturnValue;
};

// Function SFXGameContentLiveKismet.SFXSeqAct_SaveGame.Activated
// [0x00820002]
// Parameters infos:

void USFXSeqAct_SaveGame::Activated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = UObject::FindObject< UFunction > ( L"Function SFXGameContentLiveKismet.SFXSeqAct_SaveGame.Activated" );

	USFXSeqAct_SaveGame_execActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function SFXGameContentLiveKismet.SFXSeqAct_SaveGame.GetBioPlayerController
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// class ABioPlayerController*    ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class ABioPlayerController* USFXSeqAct_SaveGame::GetBioPlayerController ( )
{
	static UFunction* pFnGetBioPlayerController = NULL;

	if ( ! pFnGetBioPlayerController )
		pFnGetBioPlayerController = UObject::FindObject< UFunction > ( L"Function SFXGameContentLiveKismet.SFXSeqAct_SaveGame.GetBioPlayerController" );

	USFXSeqAct_SaveGame_execGetBioPlayerController_Parms GetBioPlayerController_Parms;

	this->ProcessEvent ( pFnGetBioPlayerController, &GetBioPlayerController_Parms, NULL );

	return GetBioPlayerController_Parms.ReturnValue;
};

// Function SFXGameContentLiveKismet.SFXSeqAct_SaveGame.CanSave
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioPlayerController*    PC                             ( CPF_Parm )

bool USFXSeqAct_SaveGame::CanSave ( class ABioPlayerController* PC )
{
	static UFunction* pFnCanSave = NULL;

	if ( ! pFnCanSave )
		pFnCanSave = UObject::FindObject< UFunction > ( L"Function SFXGameContentLiveKismet.SFXSeqAct_SaveGame.CanSave" );

	USFXSeqAct_SaveGame_execCanSave_Parms CanSave_Parms;
	CanSave_Parms.PC = PC;

	this->ProcessEvent ( pFnCanSave, &CanSave_Parms, NULL );

	return CanSave_Parms.ReturnValue;
};



class UClass* USFXSeqAct_SetTag::pClassPointer = NULL;

class UClass* USFXSeqAct_SetTag::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContentLiveKismet.SFXSeqAct_SetTag" );

		return pClassPointer;
	};

// Function SFXGameContentLiveKismet.SFXSeqAct_SetTag.Activated
// [0x00020002]
// Parameters infos:

void USFXSeqAct_SetTag::Activated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = UObject::FindObject< UFunction > ( L"Function SFXGameContentLiveKismet.SFXSeqAct_SetTag.Activated" );

	USFXSeqAct_SetTag_execActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};



class UClass* USFXSeqAct_SetWasInSquad::pClassPointer = NULL;

class UClass* USFXSeqAct_SetWasInSquad::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContentLiveKismet.SFXSeqAct_SetWasInSquad" );

		return pClassPointer;
	};

// Function SFXGameContentLiveKismet.SFXSeqAct_SetWasInSquad.Activated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void USFXSeqAct_SetWasInSquad::eventActivated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = UObject::FindObject< UFunction > ( L"Function SFXGameContentLiveKismet.SFXSeqAct_SetWasInSquad.Activated" );

	USFXSeqAct_SetWasInSquad_eventActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function SFXGameContentLiveKismet.SFXSeqAct_SetWasInSquad.getWorld
// [0x00020002]
// Parameters infos:
// class ABioWorldInfo*           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class ABioWorldInfo* USFXSeqAct_SetWasInSquad::getWorld ( )
{
	static UFunction* pFngetWorld = NULL;

	if ( ! pFngetWorld )
		pFngetWorld = UObject::FindObject< UFunction > ( L"Function SFXGameContentLiveKismet.SFXSeqAct_SetWasInSquad.getWorld" );

	USFXSeqAct_SetWasInSquad_execgetWorld_Parms getWorld_Parms;

	this->ProcessEvent ( pFngetWorld, &getWorld_Parms, NULL );

	return getWorld_Parms.ReturnValue;
};



class UClass* USFXSeqAct_TogglePlayerSaves::pClassPointer = NULL;

class UClass* USFXSeqAct_TogglePlayerSaves::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContentLiveKismet.SFXSeqAct_TogglePlayerSaves" );

		return pClassPointer;
	};

// Function SFXGameContentLiveKismet.SFXSeqAct_TogglePlayerSaves.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USFXSeqAct_TogglePlayerSaves::eventGetObjClassVersion ( )
{
	static UFunction* pFnGetObjClassVersion = NULL;

	if ( ! pFnGetObjClassVersion )
		pFnGetObjClassVersion = UObject::FindObject< UFunction > ( L"Function SFXGameContentLiveKismet.SFXSeqAct_TogglePlayerSaves.GetObjClassVersion" );

	USFXSeqAct_TogglePlayerSaves_eventGetObjClassVersion_Parms GetObjClassVersion_Parms;

	this->ProcessEvent ( pFnGetObjClassVersion, &GetObjClassVersion_Parms, NULL );

	return GetObjClassVersion_Parms.ReturnValue;
};

// Function SFXGameContentLiveKismet.SFXSeqAct_TogglePlayerSaves.SetSavingPossible
// [0x00020002]
// Parameters infos:

void USFXSeqAct_TogglePlayerSaves::SetSavingPossible ( )
{
	static UFunction* pFnSetSavingPossible = NULL;

	if ( ! pFnSetSavingPossible )
		pFnSetSavingPossible = UObject::FindObject< UFunction > ( L"Function SFXGameContentLiveKismet.SFXSeqAct_TogglePlayerSaves.SetSavingPossible" );

	USFXSeqAct_TogglePlayerSaves_execSetSavingPossible_Parms SetSavingPossible_Parms;

	this->ProcessEvent ( pFnSetSavingPossible, &SetSavingPossible_Parms, NULL );
};

// Function SFXGameContentLiveKismet.SFXSeqAct_TogglePlayerSaves.LogFlags
// [0x00020002]
// Parameters infos:

void USFXSeqAct_TogglePlayerSaves::LogFlags ( )
{
	static UFunction* pFnLogFlags = NULL;

	if ( ! pFnLogFlags )
		pFnLogFlags = UObject::FindObject< UFunction > ( L"Function SFXGameContentLiveKismet.SFXSeqAct_TogglePlayerSaves.LogFlags" );

	USFXSeqAct_TogglePlayerSaves_execLogFlags_Parms LogFlags_Parms;

	this->ProcessEvent ( pFnLogFlags, &LogFlags_Parms, NULL );
};

// Function SFXGameContentLiveKismet.SFXSeqAct_TogglePlayerSaves.Activated
// [0x00020002]
// Parameters infos:

void USFXSeqAct_TogglePlayerSaves::Activated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = UObject::FindObject< UFunction > ( L"Function SFXGameContentLiveKismet.SFXSeqAct_TogglePlayerSaves.Activated" );

	USFXSeqAct_TogglePlayerSaves_execActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function SFXGameContentLiveKismet.SFXSeqAct_TogglePlayerSaves.GetReason
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  SetReason                      ( CPF_Parm )

bool USFXSeqAct_TogglePlayerSaves::GetReason ( unsigned char SetReason )
{
	static UFunction* pFnGetReason = NULL;

	if ( ! pFnGetReason )
		pFnGetReason = UObject::FindObject< UFunction > ( L"Function SFXGameContentLiveKismet.SFXSeqAct_TogglePlayerSaves.GetReason" );

	USFXSeqAct_TogglePlayerSaves_execGetReason_Parms GetReason_Parms;
	GetReason_Parms.SetReason = SetReason;

	this->ProcessEvent ( pFnGetReason, &GetReason_Parms, NULL );

	return GetReason_Parms.ReturnValue;
};

// Function SFXGameContentLiveKismet.SFXSeqAct_TogglePlayerSaves.SetReason
// [0x00020002]
// Parameters infos:
// unsigned char                  SetReason                      ( CPF_Parm )
// unsigned long                  bDisableSaves                  ( CPF_Parm )

void USFXSeqAct_TogglePlayerSaves::SetReason ( unsigned char SetReason, unsigned long bDisableSaves )
{
	static UFunction* pFnSetReason = NULL;

	if ( ! pFnSetReason )
		pFnSetReason = UObject::FindObject< UFunction > ( L"Function SFXGameContentLiveKismet.SFXSeqAct_TogglePlayerSaves.SetReason" );

	USFXSeqAct_TogglePlayerSaves_execSetReason_Parms SetReason_Parms;
	SetReason_Parms.SetReason = SetReason;
	SetReason_Parms.bDisableSaves = bDisableSaves;

	this->ProcessEvent ( pFnSetReason, &SetReason_Parms, NULL );
};

// Function SFXGameContentLiveKismet.SFXSeqAct_TogglePlayerSaves.GetPlotID
// [0x00020002]
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ReasonID                       ( CPF_Parm )

int USFXSeqAct_TogglePlayerSaves::GetPlotID ( int ReasonID )
{
	static UFunction* pFnGetPlotID = NULL;

	if ( ! pFnGetPlotID )
		pFnGetPlotID = UObject::FindObject< UFunction > ( L"Function SFXGameContentLiveKismet.SFXSeqAct_TogglePlayerSaves.GetPlotID" );

	USFXSeqAct_TogglePlayerSaves_execGetPlotID_Parms GetPlotID_Parms;
	GetPlotID_Parms.ReasonID = ReasonID;

	this->ProcessEvent ( pFnGetPlotID, &GetPlotID_Parms, NULL );

	return GetPlotID_Parms.ReturnValue;
};



class UClass* USFXSeqCond_CanSpendTallentPoints::pClassPointer = NULL;

class UClass* USFXSeqCond_CanSpendTallentPoints::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContentLiveKismet.SFXSeqCond_CanSpendTallentPoints" );

		return pClassPointer;
	};

// Function SFXGameContentLiveKismet.SFXSeqCond_CanSpendTallentPoints.CanSpendTallentPoints
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXSeqCond_CanSpendTallentPoints::CanSpendTallentPoints ( )
{
	static UFunction* pFnCanSpendTallentPoints = NULL;

	if ( ! pFnCanSpendTallentPoints )
		pFnCanSpendTallentPoints = UObject::FindObject< UFunction > ( L"Function SFXGameContentLiveKismet.SFXSeqCond_CanSpendTallentPoints.CanSpendTallentPoints" );

	USFXSeqCond_CanSpendTallentPoints_execCanSpendTallentPoints_Parms CanSpendTallentPoints_Parms;

	this->ProcessEvent ( pFnCanSpendTallentPoints, &CanSpendTallentPoints_Parms, NULL );

	return CanSpendTallentPoints_Parms.ReturnValue;
};

// Function SFXGameContentLiveKismet.SFXSeqCond_CanSpendTallentPoints.Deactivated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void USFXSeqCond_CanSpendTallentPoints::eventDeactivated ( )
{
	static UFunction* pFnDeactivated = NULL;

	if ( ! pFnDeactivated )
		pFnDeactivated = UObject::FindObject< UFunction > ( L"Function SFXGameContentLiveKismet.SFXSeqCond_CanSpendTallentPoints.Deactivated" );

	USFXSeqCond_CanSpendTallentPoints_eventDeactivated_Parms Deactivated_Parms;

	this->ProcessEvent ( pFnDeactivated, &Deactivated_Parms, NULL );
};

// Function SFXGameContentLiveKismet.SFXSeqCond_CanSpendTallentPoints.Activated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void USFXSeqCond_CanSpendTallentPoints::eventActivated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = UObject::FindObject< UFunction > ( L"Function SFXGameContentLiveKismet.SFXSeqCond_CanSpendTallentPoints.Activated" );

	USFXSeqCond_CanSpendTallentPoints_eventActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};



class UClass* USFXSeqAct_ToggleHelmet::pClassPointer = NULL;

class UClass* USFXSeqAct_ToggleHelmet::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContentLiveKismet.SFXSeqAct_ToggleHelmet" );

		return pClassPointer;
	};

// Function SFXGameContentLiveKismet.SFXSeqAct_ToggleHelmet.PreVersionUpdated
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// int                            OldVersion                     ( CPF_Parm )
// int                            NewVersion                     ( CPF_Parm )

void USFXSeqAct_ToggleHelmet::eventPreVersionUpdated ( int OldVersion, int NewVersion )
{
	static UFunction* pFnPreVersionUpdated = NULL;

	if ( ! pFnPreVersionUpdated )
		pFnPreVersionUpdated = UObject::FindObject< UFunction > ( L"Function SFXGameContentLiveKismet.SFXSeqAct_ToggleHelmet.PreVersionUpdated" );

	USFXSeqAct_ToggleHelmet_eventPreVersionUpdated_Parms PreVersionUpdated_Parms;
	PreVersionUpdated_Parms.OldVersion = OldVersion;
	PreVersionUpdated_Parms.NewVersion = NewVersion;

	this->ProcessEvent ( pFnPreVersionUpdated, &PreVersionUpdated_Parms, NULL );
};

// Function SFXGameContentLiveKismet.SFXSeqAct_ToggleHelmet.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USFXSeqAct_ToggleHelmet::eventGetObjClassVersion ( )
{
	static UFunction* pFnGetObjClassVersion = NULL;

	if ( ! pFnGetObjClassVersion )
		pFnGetObjClassVersion = UObject::FindObject< UFunction > ( L"Function SFXGameContentLiveKismet.SFXSeqAct_ToggleHelmet.GetObjClassVersion" );

	USFXSeqAct_ToggleHelmet_eventGetObjClassVersion_Parms GetObjClassVersion_Parms;

	this->ProcessEvent ( pFnGetObjClassVersion, &GetObjClassVersion_Parms, NULL );

	return GetObjClassVersion_Parms.ReturnValue;
};

// Function SFXGameContentLiveKismet.SFXSeqAct_ToggleHelmet.Activated
// [0x00020002]
// Parameters infos:

void USFXSeqAct_ToggleHelmet::Activated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = UObject::FindObject< UFunction > ( L"Function SFXGameContentLiveKismet.SFXSeqAct_ToggleHelmet.Activated" );

	USFXSeqAct_ToggleHelmet_execActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};



class UClass* UBioSeqAct_GetMembersOfSquad::pClassPointer = NULL;

class UClass* UBioSeqAct_GetMembersOfSquad::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContentLiveKismet.BioSeqAct_GetMembersOfSquad" );

		return pClassPointer;
	};

// Function SFXGameContentLiveKismet.BioSeqAct_GetMembersOfSquad.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UBioSeqAct_GetMembersOfSquad::eventGetObjClassVersion ( )
{
	static UFunction* pFnGetObjClassVersion = NULL;

	if ( ! pFnGetObjClassVersion )
		pFnGetObjClassVersion = UObject::FindObject< UFunction > ( L"Function SFXGameContentLiveKismet.BioSeqAct_GetMembersOfSquad.GetObjClassVersion" );

	UBioSeqAct_GetMembersOfSquad_eventGetObjClassVersion_Parms GetObjClassVersion_Parms;

	this->ProcessEvent ( pFnGetObjClassVersion, &GetObjClassVersion_Parms, NULL );

	return GetObjClassVersion_Parms.ReturnValue;
};

// Function SFXGameContentLiveKismet.BioSeqAct_GetMembersOfSquad.Activated
// [0x00020002]
// Parameters infos:

void UBioSeqAct_GetMembersOfSquad::Activated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = UObject::FindObject< UFunction > ( L"Function SFXGameContentLiveKismet.BioSeqAct_GetMembersOfSquad.Activated" );

	UBioSeqAct_GetMembersOfSquad_execActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function SFXGameContentLiveKismet.BioSeqAct_GetMembersOfSquad.FindAPawn
// [0x00040003] ( FUNC_Final )
// Parameters infos:
// class APawn*                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class APawn* UBioSeqAct_GetMembersOfSquad::FindAPawn ( )
{
	static UFunction* pFnFindAPawn = NULL;

	if ( ! pFnFindAPawn )
		pFnFindAPawn = UObject::FindObject< UFunction > ( L"Function SFXGameContentLiveKismet.BioSeqAct_GetMembersOfSquad.FindAPawn" );

	UBioSeqAct_GetMembersOfSquad_execFindAPawn_Parms FindAPawn_Parms;

	this->ProcessEvent ( pFnFindAPawn, &FindAPawn_Parms, NULL );

	return FindAPawn_Parms.ReturnValue;
};



class UClass* USFXSeqAct_GetMapName::pClassPointer = NULL;

class UClass* USFXSeqAct_GetMapName::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContentLiveKismet.SFXSeqAct_GetMapName" );

		return pClassPointer;
	};

// Function SFXGameContentLiveKismet.SFXSeqAct_GetMapName.Activated
// [0x00020002]
// Parameters infos:

void USFXSeqAct_GetMapName::Activated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = UObject::FindObject< UFunction > ( L"Function SFXGameContentLiveKismet.SFXSeqAct_GetMapName.Activated" );

	USFXSeqAct_GetMapName_execActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};



class UClass* USFXSeqCond_CombatArea::pClassPointer = NULL;

class UClass* USFXSeqCond_CombatArea::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContentLiveKismet.SFXSeqCond_CombatArea" );

		return pClassPointer;
	};

// Function SFXGameContentLiveKismet.SFXSeqCond_CombatArea.Activated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void USFXSeqCond_CombatArea::eventActivated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = UObject::FindObject< UFunction > ( L"Function SFXGameContentLiveKismet.SFXSeqCond_CombatArea.Activated" );

	USFXSeqCond_CombatArea_eventActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};



class UClass* UBioSeqAct_CancelHint::pClassPointer = NULL;

class UClass* UBioSeqAct_CancelHint::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContentLiveKismet.BioSeqAct_CancelHint" );

		return pClassPointer;
	};

// Function SFXGameContentLiveKismet.BioSeqAct_CancelHint.Activated
// [0x00020002]
// Parameters infos:

void UBioSeqAct_CancelHint::Activated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = UObject::FindObject< UFunction > ( L"Function SFXGameContentLiveKismet.BioSeqAct_CancelHint.Activated" );

	UBioSeqAct_CancelHint_execActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};



class UClass* UBioSeqAct_CheckIfInVolume::pClassPointer = NULL;

class UClass* UBioSeqAct_CheckIfInVolume::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContentLiveKismet.BioSeqAct_CheckIfInVolume" );

		return pClassPointer;
	};

// Function SFXGameContentLiveKismet.BioSeqAct_CheckIfInVolume.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UBioSeqAct_CheckIfInVolume::eventGetObjClassVersion ( )
{
	static UFunction* pFnGetObjClassVersion = NULL;

	if ( ! pFnGetObjClassVersion )
		pFnGetObjClassVersion = UObject::FindObject< UFunction > ( L"Function SFXGameContentLiveKismet.BioSeqAct_CheckIfInVolume.GetObjClassVersion" );

	UBioSeqAct_CheckIfInVolume_eventGetObjClassVersion_Parms GetObjClassVersion_Parms;

	this->ProcessEvent ( pFnGetObjClassVersion, &GetObjClassVersion_Parms, NULL );

	return GetObjClassVersion_Parms.ReturnValue;
};

// Function SFXGameContentLiveKismet.BioSeqAct_CheckIfInVolume.Activated
// [0x00020002]
// Parameters infos:

void UBioSeqAct_CheckIfInVolume::Activated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = UObject::FindObject< UFunction > ( L"Function SFXGameContentLiveKismet.BioSeqAct_CheckIfInVolume.Activated" );

	UBioSeqAct_CheckIfInVolume_execActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};



class UClass* UBioSeqAct_ShowHint::pClassPointer = NULL;

class UClass* UBioSeqAct_ShowHint::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContentLiveKismet.BioSeqAct_ShowHint" );

		return pClassPointer;
	};

// Function SFXGameContentLiveKismet.BioSeqAct_ShowHint.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UBioSeqAct_ShowHint::eventGetObjClassVersion ( )
{
	static UFunction* pFnGetObjClassVersion = NULL;

	if ( ! pFnGetObjClassVersion )
		pFnGetObjClassVersion = UObject::FindObject< UFunction > ( L"Function SFXGameContentLiveKismet.BioSeqAct_ShowHint.GetObjClassVersion" );

	UBioSeqAct_ShowHint_eventGetObjClassVersion_Parms GetObjClassVersion_Parms;

	this->ProcessEvent ( pFnGetObjClassVersion, &GetObjClassVersion_Parms, NULL );

	return GetObjClassVersion_Parms.ReturnValue;
};

// Function SFXGameContentLiveKismet.BioSeqAct_ShowHint.Activated
// [0x00020002]
// Parameters infos:

void UBioSeqAct_ShowHint::Activated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = UObject::FindObject< UFunction > ( L"Function SFXGameContentLiveKismet.BioSeqAct_ShowHint.Activated" );

	UBioSeqAct_ShowHint_execActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};



class UClass* USFXSeqAct_AddPawnToPerception::pClassPointer = NULL;

class UClass* USFXSeqAct_AddPawnToPerception::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContentLiveKismet.SFXSeqAct_AddPawnToPerception" );

		return pClassPointer;
	};

// Function SFXGameContentLiveKismet.SFXSeqAct_AddPawnToPerception.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USFXSeqAct_AddPawnToPerception::eventGetObjClassVersion ( )
{
	static UFunction* pFnGetObjClassVersion = NULL;

	if ( ! pFnGetObjClassVersion )
		pFnGetObjClassVersion = UObject::FindObject< UFunction > ( L"Function SFXGameContentLiveKismet.SFXSeqAct_AddPawnToPerception.GetObjClassVersion" );

	USFXSeqAct_AddPawnToPerception_eventGetObjClassVersion_Parms GetObjClassVersion_Parms;

	this->ProcessEvent ( pFnGetObjClassVersion, &GetObjClassVersion_Parms, NULL );

	return GetObjClassVersion_Parms.ReturnValue;
};

// Function SFXGameContentLiveKismet.SFXSeqAct_AddPawnToPerception.Activated
// [0x00020002]
// Parameters infos:

void USFXSeqAct_AddPawnToPerception::Activated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = UObject::FindObject< UFunction > ( L"Function SFXGameContentLiveKismet.SFXSeqAct_AddPawnToPerception.Activated" );

	USFXSeqAct_AddPawnToPerception_execActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};



class UClass* USFXSeqAct_CompareAliveSquadMembers::pClassPointer = NULL;

class UClass* USFXSeqAct_CompareAliveSquadMembers::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContentLiveKismet.SFXSeqAct_CompareAliveSquadMembers" );

		return pClassPointer;
	};

// Function SFXGameContentLiveKismet.SFXSeqAct_CompareAliveSquadMembers.Activated
// [0x00020002]
// Parameters infos:

void USFXSeqAct_CompareAliveSquadMembers::Activated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = UObject::FindObject< UFunction > ( L"Function SFXGameContentLiveKismet.SFXSeqAct_CompareAliveSquadMembers.Activated" );

	USFXSeqAct_CompareAliveSquadMembers_execActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};



class UClass* USFXSeqAct_ForcePlayerIntoCover::pClassPointer = NULL;

class UClass* USFXSeqAct_ForcePlayerIntoCover::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContentLiveKismet.SFXSeqAct_ForcePlayerIntoCover" );

		return pClassPointer;
	};

// Function SFXGameContentLiveKismet.SFXSeqAct_ForcePlayerIntoCover.Activated
// [0x00820002]
// Parameters infos:

void USFXSeqAct_ForcePlayerIntoCover::Activated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = UObject::FindObject< UFunction > ( L"Function SFXGameContentLiveKismet.SFXSeqAct_ForcePlayerIntoCover.Activated" );

	USFXSeqAct_ForcePlayerIntoCover_execActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};



class UClass* USFXSeqAct_SetMusicID::pClassPointer = NULL;

class UClass* USFXSeqAct_SetMusicID::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContentLiveKismet.SFXSeqAct_SetMusicID" );

		return pClassPointer;
	};

// Function SFXGameContentLiveKismet.SFXSeqAct_SetMusicID.Activated
// [0x00020002]
// Parameters infos:

void USFXSeqAct_SetMusicID::Activated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = UObject::FindObject< UFunction > ( L"Function SFXGameContentLiveKismet.SFXSeqAct_SetMusicID.Activated" );

	USFXSeqAct_SetMusicID_execActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};



class UClass* USFXSeqCond_HasWeaponClass::pClassPointer = NULL;

class UClass* USFXSeqCond_HasWeaponClass::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContentLiveKismet.SFXSeqCond_HasWeaponClass" );

		return pClassPointer;
	};

// Function SFXGameContentLiveKismet.SFXSeqCond_HasWeaponClass.Activated
// [0x00020002]
// Parameters infos:

void USFXSeqCond_HasWeaponClass::Activated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = UObject::FindObject< UFunction > ( L"Function SFXGameContentLiveKismet.SFXSeqCond_HasWeaponClass.Activated" );

	USFXSeqCond_HasWeaponClass_execActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function SFXGameContentLiveKismet.SFXSeqCond_HasWeaponClass.GetIsWeaponOfRequestedClass
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ASFXWeapon*              WeaponToCheck                  ( CPF_Parm )

bool USFXSeqCond_HasWeaponClass::GetIsWeaponOfRequestedClass ( class ASFXWeapon* WeaponToCheck )
{
	static UFunction* pFnGetIsWeaponOfRequestedClass = NULL;

	if ( ! pFnGetIsWeaponOfRequestedClass )
		pFnGetIsWeaponOfRequestedClass = UObject::FindObject< UFunction > ( L"Function SFXGameContentLiveKismet.SFXSeqCond_HasWeaponClass.GetIsWeaponOfRequestedClass" );

	USFXSeqCond_HasWeaponClass_execGetIsWeaponOfRequestedClass_Parms GetIsWeaponOfRequestedClass_Parms;
	GetIsWeaponOfRequestedClass_Parms.WeaponToCheck = WeaponToCheck;

	this->ProcessEvent ( pFnGetIsWeaponOfRequestedClass, &GetIsWeaponOfRequestedClass_Parms, NULL );

	return GetIsWeaponOfRequestedClass_Parms.ReturnValue;
};



#undef LESDK_IN_GENERATED

#ifdef _MSC_VER
	#pragma pack ( pop )
#endif
