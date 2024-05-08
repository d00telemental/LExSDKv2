/*
#############################################################################################
# Mass Effect 2 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.5_Beta-Rev.60-MELE
# ========================================================================================= #
# File: SFXGameContent_functions.cpp
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



class UClass* USFXSeqAct_TextureBlockConfig::pClassPointer = NULL;

class UClass* USFXSeqAct_TextureBlockConfig::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXSeqAct_TextureBlockConfig" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXSeqAct_TextureBlockConfig.Activated
// [0x00020002] 
// Parameters infos:

void USFXSeqAct_TextureBlockConfig::Activated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXSeqAct_TextureBlockConfig.Activated" );

	USFXSeqAct_TextureBlockConfig_execActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};



class UClass* USFXSeqAct_SaveGame::pClassPointer = NULL;

class UClass* USFXSeqAct_SaveGame::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXSeqAct_SaveGame" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXSeqAct_SaveGame.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USFXSeqAct_SaveGame::eventGetObjClassVersion ( )
{
	static UFunction* pFnGetObjClassVersion = NULL;

	if ( ! pFnGetObjClassVersion )
		pFnGetObjClassVersion = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXSeqAct_SaveGame.GetObjClassVersion" );

	USFXSeqAct_SaveGame_eventGetObjClassVersion_Parms GetObjClassVersion_Parms;

	this->ProcessEvent ( pFnGetObjClassVersion, &GetObjClassVersion_Parms, NULL );

	return GetObjClassVersion_Parms.ReturnValue;
};

// Function SFXGameContent.SFXSeqAct_SaveGame.BeginSave
// [0x00020002] 
// Parameters infos:
// struct FSFXSaveDescriptor      Descriptor                     ( CPF_Parm | CPF_NeedCtorLink )

void USFXSeqAct_SaveGame::BeginSave ( struct FSFXSaveDescriptor const& Descriptor )
{
	static UFunction* pFnBeginSave = NULL;

	if ( ! pFnBeginSave )
		pFnBeginSave = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXSeqAct_SaveGame.BeginSave" );

	USFXSeqAct_SaveGame_execBeginSave_Parms BeginSave_Parms;
	memcpy ( &BeginSave_Parms.Descriptor, &Descriptor, 0x28 );

	this->ProcessEvent ( pFnBeginSave, &BeginSave_Parms, NULL );
};

// Function SFXGameContent.SFXSeqAct_SaveGame.Deactivated
// [0x00020002] 
// Parameters infos:

void USFXSeqAct_SaveGame::Deactivated ( )
{
	static UFunction* pFnDeactivated = NULL;

	if ( ! pFnDeactivated )
		pFnDeactivated = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXSeqAct_SaveGame.Deactivated" );

	USFXSeqAct_SaveGame_execDeactivated_Parms Deactivated_Parms;

	this->ProcessEvent ( pFnDeactivated, &Deactivated_Parms, NULL );
};

// Function SFXGameContent.SFXSeqAct_SaveGame.Update
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          DeltaTime                      ( CPF_Parm )

bool USFXSeqAct_SaveGame::Update ( float DeltaTime )
{
	static UFunction* pFnUpdate = NULL;

	if ( ! pFnUpdate )
		pFnUpdate = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXSeqAct_SaveGame.Update" );

	USFXSeqAct_SaveGame_execUpdate_Parms Update_Parms;
	Update_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnUpdate, &Update_Parms, NULL );

	return Update_Parms.ReturnValue;
};

// Function SFXGameContent.SFXSeqAct_SaveGame.Activated
// [0x00820002] 
// Parameters infos:

void USFXSeqAct_SaveGame::Activated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXSeqAct_SaveGame.Activated" );

	USFXSeqAct_SaveGame_execActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function SFXGameContent.SFXSeqAct_SaveGame.GetBioPlayerController
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// class ABioPlayerController*    ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class ABioPlayerController* USFXSeqAct_SaveGame::GetBioPlayerController ( )
{
	static UFunction* pFnGetBioPlayerController = NULL;

	if ( ! pFnGetBioPlayerController )
		pFnGetBioPlayerController = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXSeqAct_SaveGame.GetBioPlayerController" );

	USFXSeqAct_SaveGame_execGetBioPlayerController_Parms GetBioPlayerController_Parms;

	this->ProcessEvent ( pFnGetBioPlayerController, &GetBioPlayerController_Parms, NULL );

	return GetBioPlayerController_Parms.ReturnValue;
};

// Function SFXGameContent.SFXSeqAct_SaveGame.CanSave
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioPlayerController*    PC                             ( CPF_Parm )

bool USFXSeqAct_SaveGame::CanSave ( class ABioPlayerController* PC )
{
	static UFunction* pFnCanSave = NULL;

	if ( ! pFnCanSave )
		pFnCanSave = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXSeqAct_SaveGame.CanSave" );

	USFXSeqAct_SaveGame_execCanSave_Parms CanSave_Parms;
	CanSave_Parms.PC = PC;

	this->ProcessEvent ( pFnCanSave, &CanSave_Parms, NULL );

	return CanSave_Parms.ReturnValue;
};



class UClass* USFXSeqAct_ResourceSnapshot::pClassPointer = NULL;

class UClass* USFXSeqAct_ResourceSnapshot::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXSeqAct_ResourceSnapshot" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXSeqAct_ResourceSnapshot.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USFXSeqAct_ResourceSnapshot::eventGetObjClassVersion ( )
{
	static UFunction* pFnGetObjClassVersion = NULL;

	if ( ! pFnGetObjClassVersion )
		pFnGetObjClassVersion = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXSeqAct_ResourceSnapshot.GetObjClassVersion" );

	USFXSeqAct_ResourceSnapshot_eventGetObjClassVersion_Parms GetObjClassVersion_Parms;

	this->ProcessEvent ( pFnGetObjClassVersion, &GetObjClassVersion_Parms, NULL );

	return GetObjClassVersion_Parms.ReturnValue;
};

// Function SFXGameContent.SFXSeqAct_ResourceSnapshot.Activated
// [0x00820002] 
// Parameters infos:

void USFXSeqAct_ResourceSnapshot::Activated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXSeqAct_ResourceSnapshot.Activated" );

	USFXSeqAct_ResourceSnapshot_execActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};



class UClass* USFXSeqAct_ExplodingPlaceable::pClassPointer = NULL;

class UClass* USFXSeqAct_ExplodingPlaceable::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXSeqAct_ExplodingPlaceable" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXSeqAct_ExplodingPlaceable.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USFXSeqAct_ExplodingPlaceable::eventGetObjClassVersion ( )
{
	static UFunction* pFnGetObjClassVersion = NULL;

	if ( ! pFnGetObjClassVersion )
		pFnGetObjClassVersion = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXSeqAct_ExplodingPlaceable.GetObjClassVersion" );

	USFXSeqAct_ExplodingPlaceable_eventGetObjClassVersion_Parms GetObjClassVersion_Parms;

	this->ProcessEvent ( pFnGetObjClassVersion, &GetObjClassVersion_Parms, NULL );

	return GetObjClassVersion_Parms.ReturnValue;
};

// Function SFXGameContent.SFXSeqAct_ExplodingPlaceable.Activated
// [0x00820002] 
// Parameters infos:

void USFXSeqAct_ExplodingPlaceable::Activated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXSeqAct_ExplodingPlaceable.Activated" );

	USFXSeqAct_ExplodingPlaceable_execActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};



class UClass* USFXSeqAct_CloseMissionCompletion::pClassPointer = NULL;

class UClass* USFXSeqAct_CloseMissionCompletion::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXSeqAct_CloseMissionCompletion" );

		return pClassPointer;
	};



class UClass* USFXSeqAct_SystemsHandleArriveOnNormandy::pClassPointer = NULL;

class UClass* USFXSeqAct_SystemsHandleArriveOnNormandy::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXSeqAct_SystemsHandleArriveOnNormandy" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXSeqAct_SystemsHandleArriveOnNormandy.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USFXSeqAct_SystemsHandleArriveOnNormandy::eventGetObjClassVersion ( )
{
	static UFunction* pFnGetObjClassVersion = NULL;

	if ( ! pFnGetObjClassVersion )
		pFnGetObjClassVersion = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXSeqAct_SystemsHandleArriveOnNormandy.GetObjClassVersion" );

	USFXSeqAct_SystemsHandleArriveOnNormandy_eventGetObjClassVersion_Parms GetObjClassVersion_Parms;

	this->ProcessEvent ( pFnGetObjClassVersion, &GetObjClassVersion_Parms, NULL );

	return GetObjClassVersion_Parms.ReturnValue;
};

// Function SFXGameContent.SFXSeqAct_SystemsHandleArriveOnNormandy.HandleRestockAmmo
// [0x00022002] 
// Parameters infos:
// class ASFXInventoryManager*    oInventory                     ( CPF_Parm )

void USFXSeqAct_SystemsHandleArriveOnNormandy::HandleRestockAmmo ( class ASFXInventoryManager* oInventory )
{
	static UFunction* pFnHandleRestockAmmo = NULL;

	if ( ! pFnHandleRestockAmmo )
		pFnHandleRestockAmmo = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXSeqAct_SystemsHandleArriveOnNormandy.HandleRestockAmmo" );

	USFXSeqAct_SystemsHandleArriveOnNormandy_execHandleRestockAmmo_Parms HandleRestockAmmo_Parms;
	HandleRestockAmmo_Parms.oInventory = oInventory;

	this->ProcessEvent ( pFnHandleRestockAmmo, &HandleRestockAmmo_Parms, NULL );
};

// Function SFXGameContent.SFXSeqAct_SystemsHandleArriveOnNormandy.HandleRestockMediGel
// [0x00022002] 
// Parameters infos:
// class ASFXInventoryManager*    oInventory                     ( CPF_Parm )

void USFXSeqAct_SystemsHandleArriveOnNormandy::HandleRestockMediGel ( class ASFXInventoryManager* oInventory )
{
	static UFunction* pFnHandleRestockMediGel = NULL;

	if ( ! pFnHandleRestockMediGel )
		pFnHandleRestockMediGel = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXSeqAct_SystemsHandleArriveOnNormandy.HandleRestockMediGel" );

	USFXSeqAct_SystemsHandleArriveOnNormandy_execHandleRestockMediGel_Parms HandleRestockMediGel_Parms;
	HandleRestockMediGel_Parms.oInventory = oInventory;

	this->ProcessEvent ( pFnHandleRestockMediGel, &HandleRestockMediGel_Parms, NULL );
};

// Function SFXGameContent.SFXSeqAct_SystemsHandleArriveOnNormandy.Activated
// [0x00020002] 
// Parameters infos:

void USFXSeqAct_SystemsHandleArriveOnNormandy::Activated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXSeqAct_SystemsHandleArriveOnNormandy.Activated" );

	USFXSeqAct_SystemsHandleArriveOnNormandy_execActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};



class UClass* USFXSeqAct_ChooseLoadout::pClassPointer = NULL;

class UClass* USFXSeqAct_ChooseLoadout::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXSeqAct_ChooseLoadout" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXSeqAct_ChooseLoadout.Activated
// [0x00020002] 
// Parameters infos:

void USFXSeqAct_ChooseLoadout::Activated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXSeqAct_ChooseLoadout.Activated" );

	USFXSeqAct_ChooseLoadout_execActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};



class UClass* ABioSquadCombat::pClassPointer = NULL;

class UClass* ABioSquadCombat::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.BioSquadCombat" );

		return pClassPointer;
	};



class UClass* UBioSeqAct_ShowMissionCompletion::pClassPointer = NULL;

class UClass* UBioSeqAct_ShowMissionCompletion::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.BioSeqAct_ShowMissionCompletion" );

		return pClassPointer;
	};



class UClass* UBioSeqAct_ShowHint::pClassPointer = NULL;

class UClass* UBioSeqAct_ShowHint::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.BioSeqAct_ShowHint" );

		return pClassPointer;
	};

// Function SFXGameContent.BioSeqAct_ShowHint.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UBioSeqAct_ShowHint::eventGetObjClassVersion ( )
{
	static UFunction* pFnGetObjClassVersion = NULL;

	if ( ! pFnGetObjClassVersion )
		pFnGetObjClassVersion = UObject::FindObject< UFunction > ( L"Function SFXGameContent.BioSeqAct_ShowHint.GetObjClassVersion" );

	UBioSeqAct_ShowHint_eventGetObjClassVersion_Parms GetObjClassVersion_Parms;

	this->ProcessEvent ( pFnGetObjClassVersion, &GetObjClassVersion_Parms, NULL );

	return GetObjClassVersion_Parms.ReturnValue;
};

// Function SFXGameContent.BioSeqAct_ShowHint.Activated
// [0x00020002] 
// Parameters infos:

void UBioSeqAct_ShowHint::Activated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = UObject::FindObject< UFunction > ( L"Function SFXGameContent.BioSeqAct_ShowHint.Activated" );

	UBioSeqAct_ShowHint_execActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};



class UClass* UBioSeqAct_SetPlotPersuadeCheck::pClassPointer = NULL;

class UClass* UBioSeqAct_SetPlotPersuadeCheck::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.BioSeqAct_SetPlotPersuadeCheck" );

		return pClassPointer;
	};

// Function SFXGameContent.BioSeqAct_SetPlotPersuadeCheck.Activated
// [0x00820802] ( FUNC_Event )
// Parameters infos:

void UBioSeqAct_SetPlotPersuadeCheck::eventActivated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = UObject::FindObject< UFunction > ( L"Function SFXGameContent.BioSeqAct_SetPlotPersuadeCheck.Activated" );

	UBioSeqAct_SetPlotPersuadeCheck_eventActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function SFXGameContent.BioSeqAct_SetPlotPersuadeCheck.getWorld
// [0x00020002] 
// Parameters infos:
// class ABioWorldInfo*           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class ABioWorldInfo* UBioSeqAct_SetPlotPersuadeCheck::getWorld ( )
{
	static UFunction* pFngetWorld = NULL;

	if ( ! pFngetWorld )
		pFngetWorld = UObject::FindObject< UFunction > ( L"Function SFXGameContent.BioSeqAct_SetPlotPersuadeCheck.getWorld" );

	UBioSeqAct_SetPlotPersuadeCheck_execgetWorld_Parms getWorld_Parms;

	this->ProcessEvent ( pFngetWorld, &getWorld_Parms, NULL );

	return getWorld_Parms.ReturnValue;
};



class UClass* UBioSeqAct_GiveMissionXP::pClassPointer = NULL;

class UClass* UBioSeqAct_GiveMissionXP::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.BioSeqAct_GiveMissionXP" );

		return pClassPointer;
	};

// Function SFXGameContent.BioSeqAct_GiveMissionXP.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UBioSeqAct_GiveMissionXP::eventGetObjClassVersion ( )
{
	static UFunction* pFnGetObjClassVersion = NULL;

	if ( ! pFnGetObjClassVersion )
		pFnGetObjClassVersion = UObject::FindObject< UFunction > ( L"Function SFXGameContent.BioSeqAct_GiveMissionXP.GetObjClassVersion" );

	UBioSeqAct_GiveMissionXP_eventGetObjClassVersion_Parms GetObjClassVersion_Parms;

	this->ProcessEvent ( pFnGetObjClassVersion, &GetObjClassVersion_Parms, NULL );

	return GetObjClassVersion_Parms.ReturnValue;
};

// Function SFXGameContent.BioSeqAct_GiveMissionXP.GetMissionXP
// [0x00840003] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UBioSeqAct_GiveMissionXP::GetMissionXP ( )
{
	static UFunction* pFnGetMissionXP = NULL;

	if ( ! pFnGetMissionXP )
		pFnGetMissionXP = UObject::FindObject< UFunction > ( L"Function SFXGameContent.BioSeqAct_GiveMissionXP.GetMissionXP" );

	UBioSeqAct_GiveMissionXP_execGetMissionXP_Parms GetMissionXP_Parms;

	this->ProcessEvent ( pFnGetMissionXP, &GetMissionXP_Parms, NULL );

	return GetMissionXP_Parms.ReturnValue;
};

// Function SFXGameContent.BioSeqAct_GiveMissionXP.Activated
// [0x00020002] 
// Parameters infos:

void UBioSeqAct_GiveMissionXP::Activated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = UObject::FindObject< UFunction > ( L"Function SFXGameContent.BioSeqAct_GiveMissionXP.Activated" );

	UBioSeqAct_GiveMissionXP_execActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};



class UClass* UBioFaction_Hostile1::pClassPointer = NULL;

class UClass* UBioFaction_Hostile1::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.BioFaction_Hostile1" );

		return pClassPointer;
	};



class UClass* ABioBaseSquadDesignCombat::pClassPointer = NULL;

class UClass* ABioBaseSquadDesignCombat::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.BioBaseSquadDesignCombat" );

		return pClassPointer;
	};



class UClass* ABioBaseSquadDesign::pClassPointer = NULL;

class UClass* ABioBaseSquadDesign::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.BioBaseSquadDesign" );

		return pClassPointer;
	};



class UClass* USFXSeqAct_SetAreaMap::pClassPointer = NULL;

class UClass* USFXSeqAct_SetAreaMap::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXSeqAct_SetAreaMap" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXSeqAct_SetAreaMap.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USFXSeqAct_SetAreaMap::eventGetObjClassVersion ( )
{
	static UFunction* pFnGetObjClassVersion = NULL;

	if ( ! pFnGetObjClassVersion )
		pFnGetObjClassVersion = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXSeqAct_SetAreaMap.GetObjClassVersion" );

	USFXSeqAct_SetAreaMap_eventGetObjClassVersion_Parms GetObjClassVersion_Parms;

	this->ProcessEvent ( pFnGetObjClassVersion, &GetObjClassVersion_Parms, NULL );

	return GetObjClassVersion_Parms.ReturnValue;
};

// Function SFXGameContent.SFXSeqAct_SetAreaMap.Activated
// [0x00020002] 
// Parameters infos:

void USFXSeqAct_SetAreaMap::Activated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXSeqAct_SetAreaMap.Activated" );

	USFXSeqAct_SetAreaMap_execActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};



class UClass* UBioSeqAct_GetMembersOfSquad::pClassPointer = NULL;

class UClass* UBioSeqAct_GetMembersOfSquad::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.BioSeqAct_GetMembersOfSquad" );

		return pClassPointer;
	};

// Function SFXGameContent.BioSeqAct_GetMembersOfSquad.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UBioSeqAct_GetMembersOfSquad::eventGetObjClassVersion ( )
{
	static UFunction* pFnGetObjClassVersion = NULL;

	if ( ! pFnGetObjClassVersion )
		pFnGetObjClassVersion = UObject::FindObject< UFunction > ( L"Function SFXGameContent.BioSeqAct_GetMembersOfSquad.GetObjClassVersion" );

	UBioSeqAct_GetMembersOfSquad_eventGetObjClassVersion_Parms GetObjClassVersion_Parms;

	this->ProcessEvent ( pFnGetObjClassVersion, &GetObjClassVersion_Parms, NULL );

	return GetObjClassVersion_Parms.ReturnValue;
};

// Function SFXGameContent.BioSeqAct_GetMembersOfSquad.Activated
// [0x00020002] 
// Parameters infos:

void UBioSeqAct_GetMembersOfSquad::Activated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = UObject::FindObject< UFunction > ( L"Function SFXGameContent.BioSeqAct_GetMembersOfSquad.Activated" );

	UBioSeqAct_GetMembersOfSquad_execActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function SFXGameContent.BioSeqAct_GetMembersOfSquad.FindAPawn
// [0x00040003] ( FUNC_Final )
// Parameters infos:
// class APawn*                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class APawn* UBioSeqAct_GetMembersOfSquad::FindAPawn ( )
{
	static UFunction* pFnFindAPawn = NULL;

	if ( ! pFnFindAPawn )
		pFnFindAPawn = UObject::FindObject< UFunction > ( L"Function SFXGameContent.BioSeqAct_GetMembersOfSquad.FindAPawn" );

	UBioSeqAct_GetMembersOfSquad_execFindAPawn_Parms FindAPawn_Parms;

	this->ProcessEvent ( pFnFindAPawn, &FindAPawn_Parms, NULL );

	return FindAPawn_Parms.ReturnValue;
};



class UClass* UBioSeqAct_CombatController::pClassPointer = NULL;

class UClass* UBioSeqAct_CombatController::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.BioSeqAct_CombatController" );

		return pClassPointer;
	};

// Function SFXGameContent.BioSeqAct_CombatController.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UBioSeqAct_CombatController::eventGetObjClassVersion ( )
{
	static UFunction* pFnGetObjClassVersion = NULL;

	if ( ! pFnGetObjClassVersion )
		pFnGetObjClassVersion = UObject::FindObject< UFunction > ( L"Function SFXGameContent.BioSeqAct_CombatController.GetObjClassVersion" );

	UBioSeqAct_CombatController_eventGetObjClassVersion_Parms GetObjClassVersion_Parms;

	this->ProcessEvent ( pFnGetObjClassVersion, &GetObjClassVersion_Parms, NULL );

	return GetObjClassVersion_Parms.ReturnValue;
};

// Function SFXGameContent.BioSeqAct_CombatController.Update
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          DeltaTime                      ( CPF_Parm )

bool UBioSeqAct_CombatController::eventUpdate ( float DeltaTime )
{
	static UFunction* pFnUpdate = NULL;

	if ( ! pFnUpdate )
		pFnUpdate = UObject::FindObject< UFunction > ( L"Function SFXGameContent.BioSeqAct_CombatController.Update" );

	UBioSeqAct_CombatController_eventUpdate_Parms Update_Parms;
	Update_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnUpdate, &Update_Parms, NULL );

	return Update_Parms.ReturnValue;
};

// Function SFXGameContent.BioSeqAct_CombatController.Activated
// [0x00020000] 
// Parameters infos:

void UBioSeqAct_CombatController::Activated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = UObject::FindObject< UFunction > ( L"Function SFXGameContent.BioSeqAct_CombatController.Activated" );

	UBioSeqAct_CombatController_execActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function SFXGameContent.BioSeqAct_CombatController.GetCombatData
// [0x00040003] ( FUNC_Final )
// Parameters infos:
// class USFXCombatStateData*     ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class USFXCombatStateData* UBioSeqAct_CombatController::GetCombatData ( )
{
	static UFunction* pFnGetCombatData = NULL;

	if ( ! pFnGetCombatData )
		pFnGetCombatData = UObject::FindObject< UFunction > ( L"Function SFXGameContent.BioSeqAct_CombatController.GetCombatData" );

	UBioSeqAct_CombatController_execGetCombatData_Parms GetCombatData_Parms;

	this->ProcessEvent ( pFnGetCombatData, &GetCombatData_Parms, NULL );

	return GetCombatData_Parms.ReturnValue;
};

// Function SFXGameContent.BioSeqAct_CombatController.DebugLog
// [0x00020002] 
// Parameters infos:
// FString                        sMessage                       ( CPF_Parm | CPF_NeedCtorLink )

void UBioSeqAct_CombatController::DebugLog ( FString const& sMessage )
{
	static UFunction* pFnDebugLog = NULL;

	if ( ! pFnDebugLog )
		pFnDebugLog = UObject::FindObject< UFunction > ( L"Function SFXGameContent.BioSeqAct_CombatController.DebugLog" );

	UBioSeqAct_CombatController_execDebugLog_Parms DebugLog_Parms;
	memcpy ( &DebugLog_Parms.sMessage, &sMessage, 0x10 );

	this->ProcessEvent ( pFnDebugLog, &DebugLog_Parms, NULL );
};



class UClass* UBioSeqVar_CombatState::pClassPointer = NULL;

class UClass* UBioSeqVar_CombatState::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.BioSeqVar_CombatState" );

		return pClassPointer;
	};



class UClass* USFXCombatStateData::pClassPointer = NULL;

class UClass* USFXCombatStateData::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXCombatStateData" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXCombatStateData.GetEnemyCount
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USFXCombatStateData::GetEnemyCount ( )
{
	static UFunction* pFnGetEnemyCount = NULL;

	if ( ! pFnGetEnemyCount )
		pFnGetEnemyCount = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCombatStateData.GetEnemyCount" );

	USFXCombatStateData_execGetEnemyCount_Parms GetEnemyCount_Parms;

	this->ProcessEvent ( pFnGetEnemyCount, &GetEnemyCount_Parms, NULL );

	return GetEnemyCount_Parms.ReturnValue;
};

// Function SFXGameContent.SFXCombatStateData.UpdateEnemyCount
// [0x00020002] 
// Parameters infos:

void USFXCombatStateData::UpdateEnemyCount ( )
{
	static UFunction* pFnUpdateEnemyCount = NULL;

	if ( ! pFnUpdateEnemyCount )
		pFnUpdateEnemyCount = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCombatStateData.UpdateEnemyCount" );

	USFXCombatStateData_execUpdateEnemyCount_Parms UpdateEnemyCount_Parms;

	this->ProcessEvent ( pFnUpdateEnemyCount, &UpdateEnemyCount_Parms, NULL );
};

// Function SFXGameContent.SFXCombatStateData.ReportSpawnResult
// [0x00020002] 
// Parameters infos:
// unsigned long                  bSuccessfullySpawned           ( CPF_Parm )

void USFXCombatStateData::ReportSpawnResult ( unsigned long bSuccessfullySpawned )
{
	static UFunction* pFnReportSpawnResult = NULL;

	if ( ! pFnReportSpawnResult )
		pFnReportSpawnResult = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCombatStateData.ReportSpawnResult" );

	USFXCombatStateData_execReportSpawnResult_Parms ReportSpawnResult_Parms;
	ReportSpawnResult_Parms.bSuccessfullySpawned = bSuccessfullySpawned;

	this->ProcessEvent ( pFnReportSpawnResult, &ReportSpawnResult_Parms, NULL );
};

// Function SFXGameContent.SFXCombatStateData.ClearSpawnRequest
// [0x00020002] 
// Parameters infos:

void USFXCombatStateData::ClearSpawnRequest ( )
{
	static UFunction* pFnClearSpawnRequest = NULL;

	if ( ! pFnClearSpawnRequest )
		pFnClearSpawnRequest = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCombatStateData.ClearSpawnRequest" );

	USFXCombatStateData_execClearSpawnRequest_Parms ClearSpawnRequest_Parms;

	this->ProcessEvent ( pFnClearSpawnRequest, &ClearSpawnRequest_Parms, NULL );
};

// Function SFXGameContent.SFXCombatStateData.RequestSpawn
// [0x00020002] 
// Parameters infos:
// struct SFXName                 nmRequesterName                ( CPF_Parm )
// TArray<class AActor*>          aoSpawnPoints                  ( CPF_Parm | CPF_NeedCtorLink )

void USFXCombatStateData::RequestSpawn ( struct SFXName nmRequesterName, TArray<class AActor*> const& aoSpawnPoints )
{
	static UFunction* pFnRequestSpawn = NULL;

	if ( ! pFnRequestSpawn )
		pFnRequestSpawn = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXCombatStateData.RequestSpawn" );

	USFXCombatStateData_execRequestSpawn_Parms RequestSpawn_Parms;
	memcpy ( &RequestSpawn_Parms.nmRequesterName, &nmRequesterName, 0x8 );
	memcpy ( &RequestSpawn_Parms.aoSpawnPoints, &aoSpawnPoints, 0x10 );

	this->ProcessEvent ( pFnRequestSpawn, &RequestSpawn_Parms, NULL );
};



class UClass* UBioSeqAct_RespawnFactory::pClassPointer = NULL;

class UClass* UBioSeqAct_RespawnFactory::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.BioSeqAct_RespawnFactory" );

		return pClassPointer;
	};

// Function SFXGameContent.BioSeqAct_RespawnFactory.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UBioSeqAct_RespawnFactory::eventGetObjClassVersion ( )
{
	static UFunction* pFnGetObjClassVersion = NULL;

	if ( ! pFnGetObjClassVersion )
		pFnGetObjClassVersion = UObject::FindObject< UFunction > ( L"Function SFXGameContent.BioSeqAct_RespawnFactory.GetObjClassVersion" );

	UBioSeqAct_RespawnFactory_eventGetObjClassVersion_Parms GetObjClassVersion_Parms;

	this->ProcessEvent ( pFnGetObjClassVersion, &GetObjClassVersion_Parms, NULL );

	return GetObjClassVersion_Parms.ReturnValue;
};

// Function SFXGameContent.BioSeqAct_RespawnFactory.Deactivated
// [0x00020002] 
// Parameters infos:

void UBioSeqAct_RespawnFactory::Deactivated ( )
{
	static UFunction* pFnDeactivated = NULL;

	if ( ! pFnDeactivated )
		pFnDeactivated = UObject::FindObject< UFunction > ( L"Function SFXGameContent.BioSeqAct_RespawnFactory.Deactivated" );

	UBioSeqAct_RespawnFactory_execDeactivated_Parms Deactivated_Parms;

	this->ProcessEvent ( pFnDeactivated, &Deactivated_Parms, NULL );
};

// Function SFXGameContent.BioSeqAct_RespawnFactory.Activated
// [0x00020002] 
// Parameters infos:

void UBioSeqAct_RespawnFactory::Activated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = UObject::FindObject< UFunction > ( L"Function SFXGameContent.BioSeqAct_RespawnFactory.Activated" );

	UBioSeqAct_RespawnFactory_execActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function SFXGameContent.BioSeqAct_RespawnFactory.GetCombatData
// [0x00040003] ( FUNC_Final )
// Parameters infos:
// class USFXCombatStateData*     ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class USFXCombatStateData* UBioSeqAct_RespawnFactory::GetCombatData ( )
{
	static UFunction* pFnGetCombatData = NULL;

	if ( ! pFnGetCombatData )
		pFnGetCombatData = UObject::FindObject< UFunction > ( L"Function SFXGameContent.BioSeqAct_RespawnFactory.GetCombatData" );

	UBioSeqAct_RespawnFactory_execGetCombatData_Parms GetCombatData_Parms;

	this->ProcessEvent ( pFnGetCombatData, &GetCombatData_Parms, NULL );

	return GetCombatData_Parms.ReturnValue;
};



class UClass* UBioSeqAct_SpawnLocation::pClassPointer = NULL;

class UClass* UBioSeqAct_SpawnLocation::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.BioSeqAct_SpawnLocation" );

		return pClassPointer;
	};

// Function SFXGameContent.BioSeqAct_SpawnLocation.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UBioSeqAct_SpawnLocation::eventGetObjClassVersion ( )
{
	static UFunction* pFnGetObjClassVersion = NULL;

	if ( ! pFnGetObjClassVersion )
		pFnGetObjClassVersion = UObject::FindObject< UFunction > ( L"Function SFXGameContent.BioSeqAct_SpawnLocation.GetObjClassVersion" );

	UBioSeqAct_SpawnLocation_eventGetObjClassVersion_Parms GetObjClassVersion_Parms;

	this->ProcessEvent ( pFnGetObjClassVersion, &GetObjClassVersion_Parms, NULL );

	return GetObjClassVersion_Parms.ReturnValue;
};

// Function SFXGameContent.BioSeqAct_SpawnLocation.CheckForFactoryFeedback
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UBioSeqAct_SpawnLocation::CheckForFactoryFeedback ( )
{
	static UFunction* pFnCheckForFactoryFeedback = NULL;

	if ( ! pFnCheckForFactoryFeedback )
		pFnCheckForFactoryFeedback = UObject::FindObject< UFunction > ( L"Function SFXGameContent.BioSeqAct_SpawnLocation.CheckForFactoryFeedback" );

	UBioSeqAct_SpawnLocation_execCheckForFactoryFeedback_Parms CheckForFactoryFeedback_Parms;

	this->ProcessEvent ( pFnCheckForFactoryFeedback, &CheckForFactoryFeedback_Parms, NULL );

	return CheckForFactoryFeedback_Parms.ReturnValue;
};

// Function SFXGameContent.BioSeqAct_SpawnLocation.AttemptSpawn
// [0x00020002] 
// Parameters infos:

void UBioSeqAct_SpawnLocation::AttemptSpawn ( )
{
	static UFunction* pFnAttemptSpawn = NULL;

	if ( ! pFnAttemptSpawn )
		pFnAttemptSpawn = UObject::FindObject< UFunction > ( L"Function SFXGameContent.BioSeqAct_SpawnLocation.AttemptSpawn" );

	UBioSeqAct_SpawnLocation_execAttemptSpawn_Parms AttemptSpawn_Parms;

	this->ProcessEvent ( pFnAttemptSpawn, &AttemptSpawn_Parms, NULL );
};

// Function SFXGameContent.BioSeqAct_SpawnLocation.WaitToSpawn
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          DeltaTime                      ( CPF_Parm )

bool UBioSeqAct_SpawnLocation::WaitToSpawn ( float DeltaTime )
{
	static UFunction* pFnWaitToSpawn = NULL;

	if ( ! pFnWaitToSpawn )
		pFnWaitToSpawn = UObject::FindObject< UFunction > ( L"Function SFXGameContent.BioSeqAct_SpawnLocation.WaitToSpawn" );

	UBioSeqAct_SpawnLocation_execWaitToSpawn_Parms WaitToSpawn_Parms;
	WaitToSpawn_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnWaitToSpawn, &WaitToSpawn_Parms, NULL );

	return WaitToSpawn_Parms.ReturnValue;
};

// Function SFXGameContent.BioSeqAct_SpawnLocation.Update
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          DeltaTime                      ( CPF_Parm )

bool UBioSeqAct_SpawnLocation::eventUpdate ( float DeltaTime )
{
	static UFunction* pFnUpdate = NULL;

	if ( ! pFnUpdate )
		pFnUpdate = UObject::FindObject< UFunction > ( L"Function SFXGameContent.BioSeqAct_SpawnLocation.Update" );

	UBioSeqAct_SpawnLocation_eventUpdate_Parms Update_Parms;
	Update_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnUpdate, &Update_Parms, NULL );

	return Update_Parms.ReturnValue;
};

// Function SFXGameContent.BioSeqAct_SpawnLocation.QueueSpawn
// [0x00020002] 
// Parameters infos:

void UBioSeqAct_SpawnLocation::QueueSpawn ( )
{
	static UFunction* pFnQueueSpawn = NULL;

	if ( ! pFnQueueSpawn )
		pFnQueueSpawn = UObject::FindObject< UFunction > ( L"Function SFXGameContent.BioSeqAct_SpawnLocation.QueueSpawn" );

	UBioSeqAct_SpawnLocation_execQueueSpawn_Parms QueueSpawn_Parms;

	this->ProcessEvent ( pFnQueueSpawn, &QueueSpawn_Parms, NULL );
};

// Function SFXGameContent.BioSeqAct_SpawnLocation.Activated
// [0x00020000] 
// Parameters infos:

void UBioSeqAct_SpawnLocation::Activated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = UObject::FindObject< UFunction > ( L"Function SFXGameContent.BioSeqAct_SpawnLocation.Activated" );

	UBioSeqAct_SpawnLocation_execActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function SFXGameContent.BioSeqAct_SpawnLocation.DebugLog
// [0x00020002] 
// Parameters infos:
// FString                        sMessage                       ( CPF_Parm | CPF_NeedCtorLink )

void UBioSeqAct_SpawnLocation::DebugLog ( FString const& sMessage )
{
	static UFunction* pFnDebugLog = NULL;

	if ( ! pFnDebugLog )
		pFnDebugLog = UObject::FindObject< UFunction > ( L"Function SFXGameContent.BioSeqAct_SpawnLocation.DebugLog" );

	UBioSeqAct_SpawnLocation_execDebugLog_Parms DebugLog_Parms;
	memcpy ( &DebugLog_Parms.sMessage, &sMessage, 0x10 );

	this->ProcessEvent ( pFnDebugLog, &DebugLog_Parms, NULL );
};

// Function SFXGameContent.BioSeqAct_SpawnLocation.GetCombatData
// [0x00040003] ( FUNC_Final )
// Parameters infos:
// class USFXCombatStateData*     ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class USFXCombatStateData* UBioSeqAct_SpawnLocation::GetCombatData ( )
{
	static UFunction* pFnGetCombatData = NULL;

	if ( ! pFnGetCombatData )
		pFnGetCombatData = UObject::FindObject< UFunction > ( L"Function SFXGameContent.BioSeqAct_SpawnLocation.GetCombatData" );

	UBioSeqAct_SpawnLocation_execGetCombatData_Parms GetCombatData_Parms;

	this->ProcessEvent ( pFnGetCombatData, &GetCombatData_Parms, NULL );

	return GetCombatData_Parms.ReturnValue;
};



class UClass* UBioSeqAct_CheckIfInVolume::pClassPointer = NULL;

class UClass* UBioSeqAct_CheckIfInVolume::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.BioSeqAct_CheckIfInVolume" );

		return pClassPointer;
	};

// Function SFXGameContent.BioSeqAct_CheckIfInVolume.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UBioSeqAct_CheckIfInVolume::eventGetObjClassVersion ( )
{
	static UFunction* pFnGetObjClassVersion = NULL;

	if ( ! pFnGetObjClassVersion )
		pFnGetObjClassVersion = UObject::FindObject< UFunction > ( L"Function SFXGameContent.BioSeqAct_CheckIfInVolume.GetObjClassVersion" );

	UBioSeqAct_CheckIfInVolume_eventGetObjClassVersion_Parms GetObjClassVersion_Parms;

	this->ProcessEvent ( pFnGetObjClassVersion, &GetObjClassVersion_Parms, NULL );

	return GetObjClassVersion_Parms.ReturnValue;
};

// Function SFXGameContent.BioSeqAct_CheckIfInVolume.Activated
// [0x00020002] 
// Parameters infos:

void UBioSeqAct_CheckIfInVolume::Activated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = UObject::FindObject< UFunction > ( L"Function SFXGameContent.BioSeqAct_CheckIfInVolume.Activated" );

	UBioSeqAct_CheckIfInVolume_execActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};



class UClass* USFXSeqAct_ApplyImpulse::pClassPointer = NULL;

class UClass* USFXSeqAct_ApplyImpulse::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXSeqAct_ApplyImpulse" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXSeqAct_ApplyImpulse.Activated
// [0x00820002] 
// Parameters infos:

void USFXSeqAct_ApplyImpulse::Activated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXSeqAct_ApplyImpulse.Activated" );

	USFXSeqAct_ApplyImpulse_execActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};



class UClass* USFXSeqAct_CompareAliveSquadMembers::pClassPointer = NULL;

class UClass* USFXSeqAct_CompareAliveSquadMembers::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXSeqAct_CompareAliveSquadMembers" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXSeqAct_CompareAliveSquadMembers.Activated
// [0x00020002] 
// Parameters infos:

void USFXSeqAct_CompareAliveSquadMembers::Activated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXSeqAct_CompareAliveSquadMembers.Activated" );

	USFXSeqAct_CompareAliveSquadMembers_execActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};



class UClass* USFXSeqAct_LocationControlSpawnDoor::pClassPointer = NULL;

class UClass* USFXSeqAct_LocationControlSpawnDoor::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class SFXGameContent.SFXSeqAct_LocationControlSpawnDoor" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXSeqAct_LocationControlSpawnDoor.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USFXSeqAct_LocationControlSpawnDoor::eventGetObjClassVersion ( )
{
	static UFunction* pFnGetObjClassVersion = NULL;

	if ( ! pFnGetObjClassVersion )
		pFnGetObjClassVersion = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXSeqAct_LocationControlSpawnDoor.GetObjClassVersion" );

	USFXSeqAct_LocationControlSpawnDoor_eventGetObjClassVersion_Parms GetObjClassVersion_Parms;

	this->ProcessEvent ( pFnGetObjClassVersion, &GetObjClassVersion_Parms, NULL );

	return GetObjClassVersion_Parms.ReturnValue;
};

// Function SFXGameContent.SFXSeqAct_LocationControlSpawnDoor.Update
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          DeltaTime                      ( CPF_Parm )

bool USFXSeqAct_LocationControlSpawnDoor::eventUpdate ( float DeltaTime )
{
	static UFunction* pFnUpdate = NULL;

	if ( ! pFnUpdate )
		pFnUpdate = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXSeqAct_LocationControlSpawnDoor.Update" );

	USFXSeqAct_LocationControlSpawnDoor_eventUpdate_Parms Update_Parms;
	Update_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnUpdate, &Update_Parms, NULL );

	return Update_Parms.ReturnValue;
};

// Function SFXGameContent.SFXSeqAct_LocationControlSpawnDoor.PawnIsInVolumes
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXSeqAct_LocationControlSpawnDoor::PawnIsInVolumes ( )
{
	static UFunction* pFnPawnIsInVolumes = NULL;

	if ( ! pFnPawnIsInVolumes )
		pFnPawnIsInVolumes = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXSeqAct_LocationControlSpawnDoor.PawnIsInVolumes" );

	USFXSeqAct_LocationControlSpawnDoor_execPawnIsInVolumes_Parms PawnIsInVolumes_Parms;

	this->ProcessEvent ( pFnPawnIsInVolumes, &PawnIsInVolumes_Parms, NULL );

	return PawnIsInVolumes_Parms.ReturnValue;
};

// Function SFXGameContent.SFXSeqAct_LocationControlSpawnDoor.Activated
// [0x00020000] 
// Parameters infos:

void USFXSeqAct_LocationControlSpawnDoor::Activated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXSeqAct_LocationControlSpawnDoor.Activated" );

	USFXSeqAct_LocationControlSpawnDoor_execActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function SFXGameContent.SFXSeqAct_LocationControlSpawnDoor.AllDoorsClosed
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXSeqAct_LocationControlSpawnDoor::AllDoorsClosed ( )
{
	static UFunction* pFnAllDoorsClosed = NULL;

	if ( ! pFnAllDoorsClosed )
		pFnAllDoorsClosed = UObject::FindObject< UFunction > ( L"Function SFXGameContent.SFXSeqAct_LocationControlSpawnDoor.AllDoorsClosed" );

	USFXSeqAct_LocationControlSpawnDoor_execAllDoorsClosed_Parms AllDoorsClosed_Parms;

	this->ProcessEvent ( pFnAllDoorsClosed, &AllDoorsClosed_Parms, NULL );

	return AllDoorsClosed_Parms.ReturnValue;
};



#undef LESDK_IN_GENERATED

#ifdef _MSC_VER
	#pragma pack ( pop )
#endif
