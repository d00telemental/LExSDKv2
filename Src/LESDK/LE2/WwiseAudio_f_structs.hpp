/*
#############################################################################################
# Mass Effect 2 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.5_Beta-Rev.60-MELE
# ========================================================================================= #
# File: WwiseAudio_f_structs.hpp
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

// Function WwiseAudio.SeqAct_WwiseMusicVolumeDisable.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
struct USeqAct_WwiseMusicVolumeDisable_eventGetObjClassVersion_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USeqAct_WwiseMusicVolumeDisable_eventGetObjClassVersion_Parms() { memset(this, 0, sizeof *this); }
	~USeqAct_WwiseMusicVolumeDisable_eventGetObjClassVersion_Parms() {}
};

// Function WwiseAudio.SeqAct_WwiseMusicVolumeEnable.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
struct USeqAct_WwiseMusicVolumeEnable_eventGetObjClassVersion_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USeqAct_WwiseMusicVolumeEnable_eventGetObjClassVersion_Parms() { memset(this, 0, sizeof *this); }
	~USeqAct_WwiseMusicVolumeEnable_eventGetObjClassVersion_Parms() {}
};

// Function WwiseAudio.SeqAct_WwisePostEvent.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
struct USeqAct_WwisePostEvent_eventGetObjClassVersion_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USeqAct_WwisePostEvent_eventGetObjClassVersion_Parms() { memset(this, 0, sizeof *this); }
	~USeqAct_WwisePostEvent_eventGetObjClassVersion_Parms() {}
};

// Function WwiseAudio.WwiseAudioComponent.SetLocation
// [0x00020103] ( FUNC_Final | FUNC_Simulated )
struct UWwiseAudioComponent_execSetLocation_Parms
{
	union { struct FVector                             NewLocation; };                                   		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )

	 UWwiseAudioComponent_execSetLocation_Parms() { memset(this, 0, sizeof *this); }
	~UWwiseAudioComponent_execSetLocation_Parms() {}
};

// Function WwiseAudio.WwiseAudioComponent.Set3D
// [0x00020400] ( FUNC_Native )
struct UWwiseAudioComponent_execSet3D_Parms
{

	 UWwiseAudioComponent_execSet3D_Parms() { memset(this, 0, sizeof *this); }
	~UWwiseAudioComponent_execSet3D_Parms() {}
};

// Function WwiseAudio.WwiseAudioComponent.Set2D
// [0x00020400] ( FUNC_Native )
struct UWwiseAudioComponent_execSet2D_Parms
{

	 UWwiseAudioComponent_execSet2D_Parms() { memset(this, 0, sizeof *this); }
	~UWwiseAudioComponent_execSet2D_Parms() {}
};

// Function WwiseAudio.WwiseAudioComponent.RegisterGameObject
// [0x00024400] ( FUNC_Native )
struct UWwiseAudioComponent_execRegisterGameObject_Parms
{
	union { FString                                    GameObjectName; };                                		// 0x0000 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UWwiseAudioComponent_execRegisterGameObject_Parms() { memset(this, 0, sizeof *this); }
	~UWwiseAudioComponent_execRegisterGameObject_Parms() {}
};

// Function WwiseAudio.WwiseAudioComponent.UnregisterGameObject
// [0x00020400] ( FUNC_Native )
struct UWwiseAudioComponent_execUnregisterGameObject_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UWwiseAudioComponent_execUnregisterGameObject_Parms() { memset(this, 0, sizeof *this); }
	~UWwiseAudioComponent_execUnregisterGameObject_Parms() {}
};

// Function WwiseAudio.WwiseAudioComponent.GetDistanceToListener
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWwiseAudioComponent_execGetDistanceToListener_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UWwiseAudioComponent_execGetDistanceToListener_Parms() { memset(this, 0, sizeof *this); }
	~UWwiseAudioComponent_execGetDistanceToListener_Parms() {}
};

// Function WwiseAudio.WwiseAudioComponent.SetObstructionOcclusionEnabled
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWwiseAudioComponent_execSetObstructionOcclusionEnabled_Parms
{
	unsigned long                                      i_bValue;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 UWwiseAudioComponent_execSetObstructionOcclusionEnabled_Parms() { memset(this, 0, sizeof *this); }
	~UWwiseAudioComponent_execSetObstructionOcclusionEnabled_Parms() {}
};

// Function WwiseAudio.WwiseAudioComponent.SetEnvironmentalAudioEnabled
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWwiseAudioComponent_execSetEnvironmentalAudioEnabled_Parms
{
	unsigned long                                      i_bValue;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 UWwiseAudioComponent_execSetEnvironmentalAudioEnabled_Parms() { memset(this, 0, sizeof *this); }
	~UWwiseAudioComponent_execSetEnvironmentalAudioEnabled_Parms() {}
};

// Function WwiseAudio.WwiseAudioComponent.GetObstructionOcclusionEnabled
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWwiseAudioComponent_execGetObstructionOcclusionEnabled_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UWwiseAudioComponent_execGetObstructionOcclusionEnabled_Parms() { memset(this, 0, sizeof *this); }
	~UWwiseAudioComponent_execGetObstructionOcclusionEnabled_Parms() {}
};

// Function WwiseAudio.WwiseAudioComponent.GetEnvironmentalAudioEnabled
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWwiseAudioComponent_execGetEnvironmentalAudioEnabled_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UWwiseAudioComponent_execGetEnvironmentalAudioEnabled_Parms() { memset(this, 0, sizeof *this); }
	~UWwiseAudioComponent_execGetEnvironmentalAudioEnabled_Parms() {}
};

// Function WwiseAudio.WwiseAudioComponent.GetMicPosition
// [0x00022400] ( FUNC_Native )
struct UWwiseAudioComponent_execGetMicPosition_Parms
{
	union { struct FVector                             ReturnValue; };                                   		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UWwiseAudioComponent_execGetMicPosition_Parms() { memset(this, 0, sizeof *this); }
	~UWwiseAudioComponent_execGetMicPosition_Parms() {}
};

// Function WwiseAudio.WwiseAudioComponent.SetGlobalRTPCFromScript
// [0x00022400] ( FUNC_Native )
struct UWwiseAudioComponent_execSetGlobalRTPCFromScript_Parms
{
	union { FString                                    in_pszRtpcName; };                                		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              in_value;                                         		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UWwiseAudioComponent_execSetGlobalRTPCFromScript_Parms() { memset(this, 0, sizeof *this); }
	~UWwiseAudioComponent_execSetGlobalRTPCFromScript_Parms() {}
};

// Function WwiseAudio.WwiseAudioComponent.CreateComponentFromScript
// [0x00026401] ( FUNC_Final | FUNC_Native )
struct UWwiseAudioComponent_execCreateComponentFromScript_Parms
{
	class AActor*                                      pActor;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    Label; };                                         		// 0x0008 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	union { struct SFXName                             ComponentGroup; };                                		// 0x0018 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	union { struct SFXName                             AttachBone; };                                    		// 0x0020 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bRegister;                                        		// 0x0028 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UWwiseAudioComponent*                        ReturnValue;                                      		// 0x002C (0x0008) [0x0000000004000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )

	 UWwiseAudioComponent_execCreateComponentFromScript_Parms() { memset(this, 0, sizeof *this); }
	~UWwiseAudioComponent_execCreateComponentFromScript_Parms() {}
};

// Function WwiseAudio.WwiseAudioComponent.IsEventPlaying
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWwiseAudioComponent_execIsEventPlaying_Parms
{
	int                                                WwisePlayingID;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UWwiseAudioComponent_execIsEventPlaying_Parms() { memset(this, 0, sizeof *this); }
	~UWwiseAudioComponent_execIsEventPlaying_Parms() {}
};

// Function WwiseAudio.WwiseAudioComponent.IsPlaying
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UWwiseAudioComponent_execIsPlaying_Parms
{
	class UWwiseBaseSoundObject*                       Event;                                            		// 0x0000 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UWwiseAudioComponent_execIsPlaying_Parms() { memset(this, 0, sizeof *this); }
	~UWwiseAudioComponent_execIsPlaying_Parms() {}
};

// Function WwiseAudio.WwiseAudioComponent.PostGlobalEvent
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWwiseAudioComponent_execPostGlobalEvent_Parms
{
	union { struct SFXName                             GlobalEventName; };                               		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UWwiseAudioComponent_execPostGlobalEvent_Parms() { memset(this, 0, sizeof *this); }
	~UWwiseAudioComponent_execPostGlobalEvent_Parms() {}
};

// Function WwiseAudio.WwiseAudioComponent.SetWwiseTrigger
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWwiseAudioComponent_execSetWwiseTrigger_Parms
{
	union { FString                                    sTrigger; };                                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UWwiseAudioComponent_execSetWwiseTrigger_Parms() { memset(this, 0, sizeof *this); }
	~UWwiseAudioComponent_execSetWwiseTrigger_Parms() {}
};

// Function WwiseAudio.WwiseAudioComponent.SetWwiseSwitch
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWwiseAudioComponent_execSetWwiseSwitch_Parms
{
	union { FString                                    sGroup; };                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { FString                                    sState; };                                        		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0020 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UWwiseAudioComponent_execSetWwiseSwitch_Parms() { memset(this, 0, sizeof *this); }
	~UWwiseAudioComponent_execSetWwiseSwitch_Parms() {}
};

// Function WwiseAudio.WwiseAudioComponent.SetWwiseRTPCs
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWwiseAudioComponent_execSetWwiseRTPCs_Parms
{
	union { TArray<FString>                            sName; };                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { TArray<float>                              fValue; };                                        		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0020 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UWwiseAudioComponent_execSetWwiseRTPCs_Parms() { memset(this, 0, sizeof *this); }
	~UWwiseAudioComponent_execSetWwiseRTPCs_Parms() {}
};

// Function WwiseAudio.WwiseAudioComponent.SetWwiseRTPC
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWwiseAudioComponent_execSetWwiseRTPC_Parms
{
	union { FString                                    sName; };                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              fValue;                                           		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UWwiseAudioComponent_execSetWwiseRTPC_Parms() { memset(this, 0, sizeof *this); }
	~UWwiseAudioComponent_execSetWwiseRTPC_Parms() {}
};

// Function WwiseAudio.WwiseAudioComponent.Stop
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWwiseAudioComponent_execStop_Parms
{
	class UWwiseBaseSoundObject*                       Base;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UWwiseAudioComponent_execStop_Parms() { memset(this, 0, sizeof *this); }
	~UWwiseAudioComponent_execStop_Parms() {}
};

// Function WwiseAudio.WwiseAudioComponent.StopWwiseEvent
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWwiseAudioComponent_execStopWwiseEvent_Parms
{
	union { struct FWwiseEventPair                     AudioEvent; };                                    		// 0x0000 (0x0010) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UWwiseAudioComponent_execStopWwiseEvent_Parms() { memset(this, 0, sizeof *this); }
	~UWwiseAudioComponent_execStopWwiseEvent_Parms() {}
};

// Function WwiseAudio.WwiseAudioComponent.Play
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UWwiseAudioComponent_execPlay_Parms
{
	class UWwiseBaseSoundObject*                       Base;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bTrackPosition;                                   		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UWwiseAudioComponent_execPlay_Parms() { memset(this, 0, sizeof *this); }
	~UWwiseAudioComponent_execPlay_Parms() {}
};

// Function WwiseAudio.WwiseAudioComponent.PlayWwiseEvent
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UWwiseAudioComponent_execPlayWwiseEvent_Parms
{
	union { struct FWwiseEventPair                     AudioEvent; };                                    		// 0x0000 (0x0010) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bTrackPosition;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UWwiseAudioComponent_execPlayWwiseEvent_Parms() { memset(this, 0, sizeof *this); }
	~UWwiseAudioComponent_execPlayWwiseEvent_Parms() {}
};

// Function WwiseAudio.WwiseAudioComponent.SoundPositionByID
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWwiseAudioComponent_execSoundPositionByID_Parms
{
	int                                                WwisePlayingID;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UWwiseAudioComponent_execSoundPositionByID_Parms() { memset(this, 0, sizeof *this); }
	~UWwiseAudioComponent_execSoundPositionByID_Parms() {}
};

// Function WwiseAudio.WwiseAudioComponent.SoundPosition
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWwiseAudioComponent_execSoundPosition_Parms
{
	class UWwiseBaseSoundObject*                       Base;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UWwiseAudioComponent_execSoundPosition_Parms() { memset(this, 0, sizeof *this); }
	~UWwiseAudioComponent_execSoundPosition_Parms() {}
};

// Function WwiseAudio.WwiseAudioComponent.StopAll
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWwiseAudioComponent_execStopAll_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UWwiseAudioComponent_execStopAll_Parms() { memset(this, 0, sizeof *this); }
	~UWwiseAudioComponent_execStopAll_Parms() {}
};

// Function WwiseAudio.WwiseAudioComponent.FindPlayingID
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UWwiseAudioComponent_execFindPlayingID_Parms
{
	class UWwiseBaseSoundObject*                       BaseSound;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UWwiseEvent*                                 StopEvent;                                        		// 0x0008 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UWwiseAudioComponent_execFindPlayingID_Parms() { memset(this, 0, sizeof *this); }
	~UWwiseAudioComponent_execFindPlayingID_Parms() {}
};

// Function WwiseAudio.WwiseAudioComponent.SetRTPCWithHandler
// [0x00422401] ( FUNC_Final | FUNC_Native )
struct UWwiseAudioComponent_execSetRTPCWithHandler_Parms
{
	union { struct FWwiseRTPCForActorHandler           RTPCHandler; };                                   		// 0x0000 (0x001C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	float                                              fValue;                                           		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 UWwiseAudioComponent_execSetRTPCWithHandler_Parms() { memset(this, 0, sizeof *this); }
	~UWwiseAudioComponent_execSetRTPCWithHandler_Parms() {}
};

// Function WwiseAudio.WwiseAudioComponentMultiLoc.Set3D
// [0x00020400] ( FUNC_Native )
struct UWwiseAudioComponentMultiLoc_execSet3D_Parms
{

	 UWwiseAudioComponentMultiLoc_execSet3D_Parms() { memset(this, 0, sizeof *this); }
	~UWwiseAudioComponentMultiLoc_execSet3D_Parms() {}
};

// Function WwiseAudio.WwiseMicPosOrient.GetUpVector
// [0x00020400] ( FUNC_Native )
struct AWwiseMicPosOrient_execGetUpVector_Parms
{
	union { struct FVector                             ReturnValue; };                                   		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 AWwiseMicPosOrient_execGetUpVector_Parms() { memset(this, 0, sizeof *this); }
	~AWwiseMicPosOrient_execGetUpVector_Parms() {}
};

// Function WwiseAudio.WwiseMicPosOrient.GetFrontVector
// [0x00020400] ( FUNC_Native )
struct AWwiseMicPosOrient_execGetFrontVector_Parms
{
	union { struct FVector                             ReturnValue; };                                   		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 AWwiseMicPosOrient_execGetFrontVector_Parms() { memset(this, 0, sizeof *this); }
	~AWwiseMicPosOrient_execGetFrontVector_Parms() {}
};

// Function WwiseAudio.WwiseVolume.TimerPop
// [0x00020000] 
struct AWwiseVolume_execTimerPop_Parms
{
	class AWwiseVolumeTimer*                           T;                                                		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 AWwiseVolume_execTimerPop_Parms() { memset(this, 0, sizeof *this); }
	~AWwiseVolume_execTimerPop_Parms() {}
};

// Function WwiseAudio.WwiseVolume.PostBeginPlay
// [0x00020002] 
struct AWwiseVolume_execPostBeginPlay_Parms
{

	 AWwiseVolume_execPostBeginPlay_Parms() { memset(this, 0, sizeof *this); }
	~AWwiseVolume_execPostBeginPlay_Parms() {}
};

// Function WwiseAudio.WwiseAudioVolume.Stop
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AWwiseAudioVolume_execStop_Parms
{

	 AWwiseAudioVolume_execStop_Parms() { memset(this, 0, sizeof *this); }
	~AWwiseAudioVolume_execStop_Parms() {}
};

// Function WwiseAudio.WwiseAudioVolume.Start
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AWwiseAudioVolume_execStart_Parms
{

	 AWwiseAudioVolume_execStart_Parms() { memset(this, 0, sizeof *this); }
	~AWwiseAudioVolume_execStart_Parms() {}
};

// Function WwiseAudio.WwiseAudioVolume.myTimerPop
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AWwiseAudioVolume_execmyTimerPop_Parms
{

	 AWwiseAudioVolume_execmyTimerPop_Parms() { memset(this, 0, sizeof *this); }
	~AWwiseAudioVolume_execmyTimerPop_Parms() {}
};

// Function WwiseAudio.WwiseAudioVolume.TimerPop
// [0x00020002] 
struct AWwiseAudioVolume_execTimerPop_Parms
{
	class AWwiseVolumeTimer*                           T;                                                		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 AWwiseAudioVolume_execTimerPop_Parms() { memset(this, 0, sizeof *this); }
	~AWwiseAudioVolume_execTimerPop_Parms() {}
};

// Function WwiseAudio.WwiseAudioVolume.UnTouch
// [0x00020802] ( FUNC_Event )
struct AWwiseAudioVolume_eventUnTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 AWwiseAudioVolume_eventUnTouch_Parms() { memset(this, 0, sizeof *this); }
	~AWwiseAudioVolume_eventUnTouch_Parms() {}
};

// Function WwiseAudio.WwiseAudioVolume.Touch
// [0x00020802] ( FUNC_Event )
struct AWwiseAudioVolume_eventTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         OtherComp;                                        		// 0x0008 (0x0008) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	union { struct FVector                             HitLocation; };                                   		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	union { struct FVector                             HitNormal; };                                     		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )

	 AWwiseAudioVolume_eventTouch_Parms() { memset(this, 0, sizeof *this); }
	~AWwiseAudioVolume_eventTouch_Parms() {}
};

// Function WwiseAudio.WwiseAudioVolume.PostBeginPlay
// [0x00020002] 
struct AWwiseAudioVolume_execPostBeginPlay_Parms
{

	 AWwiseAudioVolume_execPostBeginPlay_Parms() { memset(this, 0, sizeof *this); }
	~AWwiseAudioVolume_execPostBeginPlay_Parms() {}
};

// Function WwiseAudio.WwiseMusicVolume.myTimerPop
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AWwiseMusicVolume_execmyTimerPop_Parms
{

	 AWwiseMusicVolume_execmyTimerPop_Parms() { memset(this, 0, sizeof *this); }
	~AWwiseMusicVolume_execmyTimerPop_Parms() {}
};

// Function WwiseAudio.WwiseMusicVolume.SetContainsPlayer
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AWwiseMusicVolume_execSetContainsPlayer_Parms
{
	unsigned long                                      bContainsPlayer;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 AWwiseMusicVolume_execSetContainsPlayer_Parms() { memset(this, 0, sizeof *this); }
	~AWwiseMusicVolume_execSetContainsPlayer_Parms() {}
};

// Function WwiseAudio.WwiseMusicVolume.SetEnabled
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AWwiseMusicVolume_execSetEnabled_Parms
{
	unsigned long                                      bEnabled;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 AWwiseMusicVolume_execSetEnabled_Parms() { memset(this, 0, sizeof *this); }
	~AWwiseMusicVolume_execSetEnabled_Parms() {}
};

// Function WwiseAudio.WwiseMusicVolume.StopMusic
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AWwiseMusicVolume_execStopMusic_Parms
{

	 AWwiseMusicVolume_execStopMusic_Parms() { memset(this, 0, sizeof *this); }
	~AWwiseMusicVolume_execStopMusic_Parms() {}
};

// Function WwiseAudio.WwiseMusicVolume.StartMusic
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AWwiseMusicVolume_execStartMusic_Parms
{

	 AWwiseMusicVolume_execStartMusic_Parms() { memset(this, 0, sizeof *this); }
	~AWwiseMusicVolume_execStartMusic_Parms() {}
};

// Function WwiseAudio.WwiseMusicVolume.CheckPriority
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AWwiseMusicVolume_execCheckPriority_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 AWwiseMusicVolume_execCheckPriority_Parms() { memset(this, 0, sizeof *this); }
	~AWwiseMusicVolume_execCheckPriority_Parms() {}
};

// Function WwiseAudio.WwiseMusicVolume.TimerPop
// [0x00020002] 
struct AWwiseMusicVolume_execTimerPop_Parms
{
	class AWwiseVolumeTimer*                           T;                                                		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 AWwiseMusicVolume_execTimerPop_Parms() { memset(this, 0, sizeof *this); }
	~AWwiseMusicVolume_execTimerPop_Parms() {}
};

// Function WwiseAudio.WwiseMusicVolume.PostBeginPlay
// [0x00020002] 
struct AWwiseMusicVolume_execPostBeginPlay_Parms
{

	 AWwiseMusicVolume_execPostBeginPlay_Parms() { memset(this, 0, sizeof *this); }
	~AWwiseMusicVolume_execPostBeginPlay_Parms() {}
};

// Function WwiseAudio.WwiseVolumeTimer.Timer
// [0x00020002] 
struct AWwiseVolumeTimer_execTimer_Parms
{

	 AWwiseVolumeTimer_execTimer_Parms() { memset(this, 0, sizeof *this); }
	~AWwiseVolumeTimer_execTimer_Parms() {}
};

// Function WwiseAudio.WwiseDistanceRTPC.Tick
// [0x00820002] 
struct AWwiseDistanceRTPC_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           DistanceFromListener;                             		// 0x0004 (0x0004) [0x0000000000000000]              
	// union { struct FVector                          Distance; };                                      		// 0x0008 (0x000C) [0x0000000000000000]              
	// union { struct FVector                          MicPosition; };                                   		// 0x0014 (0x000C) [0x0000000000000000]              

	 AWwiseDistanceRTPC_execTick_Parms() { memset(this, 0, sizeof *this); }
	~AWwiseDistanceRTPC_execTick_Parms() {}
};



#undef LESDK_IN_GENERATED

#ifdef _MSC_VER
	#pragma pack ( pop )
#endif
