/*
#############################################################################################
# Mass Effect 1 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.5_Beta-Rev.60-MELE
# ========================================================================================= #
# File: SFXOnlineFoundation_f_structs.hpp
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

// Function SFXOnlineFoundation.SFXOnlineEvent.Update
// [0x00020400] ( FUNC_Native )
struct USFXOnlineEvent_execUpdate_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineEvent_execUpdate_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineEvent_execUpdate_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineEvent.IsComplete
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execIsComplete_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineEvent_execIsComplete_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineEvent_execIsComplete_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineEvent.IsPending
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execIsPending_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineEvent_execIsPending_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineEvent_execIsPending_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineEvent.CompleteAndSucceeded
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execCompleteAndSucceeded_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineEvent_execCompleteAndSucceeded_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineEvent_execCompleteAndSucceeded_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineEvent.HasTimedOut
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execHasTimedOut_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineEvent_execHasTimedOut_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineEvent_execHasTimedOut_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineEvent.IsTimeoutEnabled
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execIsTimeoutEnabled_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineEvent_execIsTimeoutEnabled_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineEvent_execIsTimeoutEnabled_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineEvent.DisableTimeout
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execDisableTimeout_Parms
{

	 USFXOnlineEvent_execDisableTimeout_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineEvent_execDisableTimeout_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineEvent.EnableTimeout
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execEnableTimeout_Parms
{

	 USFXOnlineEvent_execEnableTimeout_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineEvent_execEnableTimeout_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineEvent.SetTimeout
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execSetTimeout_Parms
{
	float                                              fEventTimeout;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineEvent_execSetTimeout_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineEvent_execSetTimeout_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineEvent.GetTimeout
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execGetTimeout_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineEvent_execGetTimeout_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineEvent_execGetTimeout_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineEvent.SetErrorString
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execSetErrorString_Parms
{
	union { FString                                    sMessage; };                                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 USFXOnlineEvent_execSetErrorString_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineEvent_execSetErrorString_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineEvent.GetErrorString
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execGetErrorString_Parms
{
	union { FString                                    ReturnValue; };                                   		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

	 USFXOnlineEvent_execGetErrorString_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineEvent_execGetErrorString_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineEvent.SetErrorCode
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execSetErrorCode_Parms
{
	int                                                nCode;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineEvent_execSetErrorCode_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineEvent_execSetErrorCode_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineEvent.GetErrorCode
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execGetErrorCode_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineEvent_execGetErrorCode_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineEvent_execGetErrorCode_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineEvent.SetStatus
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execSetStatus_Parms
{
	unsigned char                                      eNewStatus;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineEvent_execSetStatus_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineEvent_execSetStatus_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineEvent.GetStatus
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execGetStatus_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineEvent_execGetStatus_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineEvent_execGetStatus_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineEvent.SetOutcome
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execSetOutcome_Parms
{
	unsigned char                                      eStatusFinished;                                  		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineEvent_execSetOutcome_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineEvent_execSetOutcome_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineEvent.GetOutcome
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execGetOutcome_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineEvent_execGetOutcome_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineEvent_execGetOutcome_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineEvent.SetEventId
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execSetEventId_Parms
{
	int                                                nNewEventId;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineEvent_execSetEventId_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineEvent_execSetEventId_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineEvent.GetEventId
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execGetEventId_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineEvent_execGetEventId_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineEvent_execGetEventId_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineEvent.SetEventType
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execSetEventType_Parms
{
	unsigned char                                      eNewEventType;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineEvent_execSetEventType_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineEvent_execSetEventType_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineEvent.GetEventType
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execGetEventType_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineEvent_execGetEventType_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineEvent_execGetEventType_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineEvent_Integer.SetInteger
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_Integer_execSetInteger_Parms
{
	int                                                nInteger;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineEvent_Integer_execSetInteger_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineEvent_Integer_execSetInteger_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineEvent_Integer.GetInteger
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_Integer_execGetInteger_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineEvent_Integer_execGetInteger_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineEvent_Integer_execGetInteger_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineEvent_String.SetStringData
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_String_execSetStringData_Parms
{
	union { FString                                    sStringData; };                                   		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 USFXOnlineEvent_String_execSetStringData_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineEvent_String_execSetStringData_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineEvent_String.GetStringData
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_String_execGetStringData_Parms
{
	union { FString                                    ReturnValue; };                                   		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

	 USFXOnlineEvent_String_execGetStringData_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineEvent_String_execGetStringData_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineEvent_Notification.SetPriority
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_Notification_execSetPriority_Parms
{
	int                                                nPriority;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineEvent_Notification_execSetPriority_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineEvent_Notification_execSetPriority_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineEvent_Notification.GetPriority
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_Notification_execGetPriority_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineEvent_Notification_execGetPriority_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineEvent_Notification_execGetPriority_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineEvent_Notification.SetImageName
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_Notification_execSetImageName_Parms
{
	union { FString                                    sImageName; };                                    		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 USFXOnlineEvent_Notification_execSetImageName_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineEvent_Notification_execSetImageName_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineEvent_Notification.GetImageName
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_Notification_execGetImageName_Parms
{
	union { FString                                    ReturnValue; };                                   		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

	 USFXOnlineEvent_Notification_execGetImageName_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineEvent_Notification_execGetImageName_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineEventList.GetNextTimedOutEvent
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEventList_execGetNextTimedOutEvent_Parms
{
	class USFXOnlineEvent*                             ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineEventList_execGetNextTimedOutEvent_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineEventList_execGetNextTimedOutEvent_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineEventList.RemoveEvent
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEventList_execRemoveEvent_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineEventList_execRemoveEvent_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineEventList_execRemoveEvent_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineEventList.FindEventByType
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEventList_execFindEventByType_Parms
{
	unsigned char                                      eEventType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                nEventId;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineEventList_execFindEventByType_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineEventList_execFindEventByType_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineEventList.FindEvent
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEventList_execFindEvent_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineEventList_execFindEvent_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineEventList_execFindEvent_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineEventList.GetEventAtIndex
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEventList_execGetEventAtIndex_Parms
{
	int                                                nEventIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class USFXOnlineEvent*                             ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineEventList_execGetEventAtIndex_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineEventList_execGetEventAtIndex_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineEventList.GetEvent
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEventList_execGetEvent_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class USFXOnlineEvent*                             ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineEventList_execGetEvent_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineEventList_execGetEvent_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineEventList.AddEvent
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEventList_execAddEvent_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineEventList_execAddEvent_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineEventList_execAddEvent_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponent.GetAPIName
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponent_execGetAPIName_Parms
{
	union { struct SFXName                             ReturnValue; };                                   		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UISFXOnlineComponent_execGetAPIName_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponent_execGetAPIName_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponent.OnRelease
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponent_execOnRelease_Parms
{

	 UISFXOnlineComponent_execOnRelease_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponent_execOnRelease_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponent.OnInitialize
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponent_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 UISFXOnlineComponent_execOnInitialize_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponent_execOnInitialize_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentAPI.Idle
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentAPI_execIdle_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UISFXOnlineComponentAPI_execIdle_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentAPI_execIdle_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentAchievement.GetTitleAchievementID
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UISFXOnlineComponentAchievement_execGetTitleAchievementID_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SetIndex;                                         		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UISFXOnlineComponentAchievement_execGetTitleAchievementID_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentAchievement_execGetTitleAchievementID_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentAchievement.GetPlatformAchievementID
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UISFXOnlineComponentAchievement_execGetPlatformAchievementID_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SetIndex;                                         		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UISFXOnlineComponentAchievement_execGetPlatformAchievementID_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentAchievement_execGetPlatformAchievementID_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentAchievement.IsGranted
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentAchievement_execIsGranted_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                AchievementId;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UISFXOnlineComponentAchievement_execIsGranted_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentAchievement_execIsGranted_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentAchievement.Grant
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentAchievement_execGrant_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                AchievementId;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 UISFXOnlineComponentAchievement_execGrant_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentAchievement_execGrant_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.GetConnectMode
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execGetConnectMode_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UISFXOnlineComponentLogin_execGetConnectMode_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentLogin_execGetConnectMode_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.GetUIState
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execGetUIState_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UISFXOnlineComponentLogin_execGetUIState_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentLogin_execGetUIState_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.CanShowPresenceInformation
// [0x00024400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execCanShowPresenceInformation_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0004 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UISFXOnlineComponentLogin_execCanShowPresenceInformation_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentLogin_execCanShowPresenceInformation_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.CanViewPlayerProfiles
// [0x00024400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execCanViewPlayerProfiles_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0004 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UISFXOnlineComponentLogin_execCanViewPlayerProfiles_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentLogin_execCanViewPlayerProfiles_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.CanPurchaseContent
// [0x00024400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execCanPurchaseContent_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0004 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UISFXOnlineComponentLogin_execCanPurchaseContent_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentLogin_execCanPurchaseContent_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.CanDownloadUserContent
// [0x00024400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execCanDownloadUserContent_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0004 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UISFXOnlineComponentLogin_execCanDownloadUserContent_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentLogin_execCanDownloadUserContent_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.CanCommunicate
// [0x00024400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execCanCommunicate_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0004 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UISFXOnlineComponentLogin_execCanCommunicate_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentLogin_execCanCommunicate_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.CanPlayOnline
// [0x00024400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execCanPlayOnline_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0004 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UISFXOnlineComponentLogin_execCanPlayOnline_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentLogin_execCanPlayOnline_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.EnterCDKey
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execEnterCDKey_Parms
{
	union { FString                                    sKey; };                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 UISFXOnlineComponentLogin_execEnterCDKey_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentLogin_execEnterCDKey_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.OnDownloadOffersUICompleted
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execOnDownloadOffersUICompleted_Parms
{

	 UISFXOnlineComponentLogin_execOnDownloadOffersUICompleted_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentLogin_execOnDownloadOffersUICompleted_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.OnDLCInfoLoaded
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execOnDLCInfoLoaded_Parms
{

	 UISFXOnlineComponentLogin_execOnDLCInfoLoaded_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentLogin_execOnDLCInfoLoaded_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.OpenCerberusUI
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execOpenCerberusUI_Parms
{

	 UISFXOnlineComponentLogin_execOpenCerberusUI_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentLogin_execOpenCerberusUI_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.CheckEntitlement
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execCheckEntitlement_Parms
{
	union { FString                                    sGroup; };                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { FString                                    sTag; };                                          		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0020 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UISFXOnlineComponentLogin_execCheckEntitlement_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentLogin_execCheckEntitlement_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.IsCerberusMember
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execIsCerberusMember_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UISFXOnlineComponentLogin_execIsCerberusMember_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentLogin_execIsCerberusMember_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.DisablePersona
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execDisablePersona_Parms
{
	union { FString                                    sPersonaNonGrata; };                              		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 UISFXOnlineComponentLogin_execDisablePersona_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentLogin_execDisablePersona_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.CreatePersona
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execCreatePersona_Parms
{
	union { FString                                    sPersonaName; };                                  		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 UISFXOnlineComponentLogin_execCreatePersona_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentLogin_execCreatePersona_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.SelectPersona
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execSelectPersona_Parms
{
	union { FString                                    sPersonaName; };                                  		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 UISFXOnlineComponentLogin_execSelectPersona_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentLogin_execSelectPersona_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.AcceptTOS
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execAcceptTOS_Parms
{
	unsigned long                                      bAccepted;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 UISFXOnlineComponentLogin_execAcceptTOS_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentLogin_execAcceptTOS_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.Disconnect
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execDisconnect_Parms
{

	 UISFXOnlineComponentLogin_execDisconnect_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentLogin_execDisconnect_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.SubmitStore
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execSubmitStore_Parms
{
	union { TArray<int>                                aiChosen; };                                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 UISFXOnlineComponentLogin_execSubmitStore_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentLogin_execSubmitStore_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.SubmitCreateNucleusAccountEx
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execSubmitCreateNucleusAccountEx_Parms
{
	union { FString                                    sEmail; };                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { FString                                    sPassword; };                                     		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bEAProducts;                                      		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bThirdParty;                                      		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bBioWareProducts;                                 		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    i_sCountryCode; };                                		// 0x002C (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                BirthDay;                                         		// 0x003C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                BirthMonth;                                       		// 0x0040 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                BirthYear;                                        		// 0x0044 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    i_sLanguageCode; };                               		// 0x0048 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bSubmit;                                          		// 0x0058 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 UISFXOnlineComponentLogin_execSubmitCreateNucleusAccountEx_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentLogin_execSubmitCreateNucleusAccountEx_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.SubmitEmailPasswordMismatch
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execSubmitEmailPasswordMismatch_Parms
{
	union { FString                                    Email; };                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { FString                                    Password; };                                      		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                eReturnCode;                                      		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 UISFXOnlineComponentLogin_execSubmitEmailPasswordMismatch_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentLogin_execSubmitEmailPasswordMismatch_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.SubmitMessageBox
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execSubmitMessageBox_Parms
{
	int                                                eReturnCode;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 UISFXOnlineComponentLogin_execSubmitMessageBox_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentLogin_execSubmitMessageBox_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.SubmitRedeemCode
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execSubmitRedeemCode_Parms
{
	unsigned long                                      bContinue;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    i_sCode; };                                       		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 UISFXOnlineComponentLogin_execSubmitRedeemCode_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentLogin_execSubmitRedeemCode_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.SubmitCerberusWelcomeMessage
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execSubmitCerberusWelcomeMessage_Parms
{

	 UISFXOnlineComponentLogin_execSubmitCerberusWelcomeMessage_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentLogin_execSubmitCerberusWelcomeMessage_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.SubmitCerberusIntro
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execSubmitCerberusIntro_Parms
{
	int                                                eReturnCode;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 UISFXOnlineComponentLogin_execSubmitCerberusIntro_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentLogin_execSubmitCerberusIntro_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.SubmitNucleusWelcomeMessage
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execSubmitNucleusWelcomeMessage_Parms
{

	 UISFXOnlineComponentLogin_execSubmitNucleusWelcomeMessage_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentLogin_execSubmitNucleusWelcomeMessage_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.SubmitCreateNucleusAccount
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execSubmitCreateNucleusAccount_Parms
{
	union { FString                                    sEmail; };                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { FString                                    sPassword; };                                     		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bEAProducts;                                      		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bThirdParty;                                      		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bBioWareProducts;                                 		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bSubmit;                                          		// 0x002C (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 UISFXOnlineComponentLogin_execSubmitCreateNucleusAccount_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentLogin_execSubmitCreateNucleusAccount_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.SubmitParentEmail
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execSubmitParentEmail_Parms
{
	unsigned long                                      bContinue;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    ParentEmail; };                                   		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 UISFXOnlineComponentLogin_execSubmitParentEmail_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentLogin_execSubmitParentEmail_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.SubmitNucleusLogin
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execSubmitNucleusLogin_Parms
{
	union { FString                                    Email; };                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { FString                                    Password; };                                      		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      eReturnCode;                                      		// 0x0020 (0x0001) [0x0000000000000080]              ( CPF_Parm )

	 UISFXOnlineComponentLogin_execSubmitNucleusLogin_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentLogin_execSubmitNucleusLogin_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.SubmitIntroPage
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execSubmitIntroPage_Parms
{
	unsigned long                                      bContinue;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bSimulated;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 UISFXOnlineComponentLogin_execSubmitIntroPage_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentLogin_execSubmitIntroPage_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.Connect
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execConnect_Parms
{
	unsigned char                                      connectMode;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )

	 UISFXOnlineComponentLogin_execConnect_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentLogin_execConnect_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.GoBackInUI
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execGoBackInUI_Parms
{

	 UISFXOnlineComponentLogin_execGoBackInUI_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentLogin_execGoBackInUI_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.Cancel
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execCancel_Parms
{

	 UISFXOnlineComponentLogin_execCancel_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentLogin_execCancel_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.GetUserId
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execGetUserId_Parms
{
	union { struct FUniqueNetId                        ReturnValue; };                                   		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UISFXOnlineComponentLogin_execGetUserId_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentLogin_execGetUserId_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.GetPersonaName
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execGetPersonaName_Parms
{
	union { FString                                    ReturnValue; };                                   		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

	 UISFXOnlineComponentLogin_execGetPersonaName_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentLogin_execGetPersonaName_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.HasInternetConnection
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execHasInternetConnection_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UISFXOnlineComponentLogin_execHasInternetConnection_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentLogin_execHasInternetConnection_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.IsConnectedTo3rdPartyOnlineService
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execIsConnectedTo3rdPartyOnlineService_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UISFXOnlineComponentLogin_execIsConnectedTo3rdPartyOnlineService_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentLogin_execIsConnectedTo3rdPartyOnlineService_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.HasAccountFor3rdPartyOnlineService
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execHasAccountFor3rdPartyOnlineService_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UISFXOnlineComponentLogin_execHasAccountFor3rdPartyOnlineService_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentLogin_execHasAccountFor3rdPartyOnlineService_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.IsSignedIn
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execIsSignedIn_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UISFXOnlineComponentLogin_execIsSignedIn_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentLogin_execIsSignedIn_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.IsConnected
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execIsConnected_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UISFXOnlineComponentLogin_execIsConnected_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentLogin_execIsConnected_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.SwitchActiveUserIndex
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execSwitchActiveUserIndex_Parms
{
	int                                                nNewIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 UISFXOnlineComponentLogin_execSwitchActiveUserIndex_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentLogin_execSwitchActiveUserIndex_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.GetActiveUserIndex
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execGetActiveUserIndex_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UISFXOnlineComponentLogin_execGetActiveUserIndex_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentLogin_execGetActiveUserIndex_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.GetLoginStatus
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execGetLoginStatus_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UISFXOnlineComponentLogin_execGetLoginStatus_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentLogin_execGetLoginStatus_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentNotification.GetTargetOfferInfo
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentNotification_execGetTargetOfferInfo_Parms
{
	unsigned char                                      nSource;                                          		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FSFXOnlineTargetOfferInfo           ReturnValue; };                                   		// 0x0004 (0x0020) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

	 UISFXOnlineComponentNotification_execGetTargetOfferInfo_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentNotification_execGetTargetOfferInfo_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentNotification.HasUserPurchasedAnOffer
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentNotification_execHasUserPurchasedAnOffer_Parms
{
	union { struct FSFXOnline_OfferID                  aOfferId; };                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0008 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UISFXOnlineComponentNotification_execHasUserPurchasedAnOffer_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentNotification_execHasUserPurchasedAnOffer_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentNotification.DownloadOffers
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentNotification_execDownloadOffers_Parms
{
	union { TArray<struct FSFXOnline_OfferID>          aOfferIds; };                                     		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UISFXOnlineComponentNotification_execDownloadOffers_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentNotification_execDownloadOffers_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentNotification.GetOfferKeyIfEntitled
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentNotification_execGetOfferKeyIfEntitled_Parms
{
	int                                                internalId;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    ReturnValue; };                                   		// 0x0004 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

	 UISFXOnlineComponentNotification_execGetOfferKeyIfEntitled_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentNotification_execGetOfferKeyIfEntitled_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentNotification.GetGrantingOffers
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentNotification_execGetGrantingOffers_Parms
{
	union { TArray<struct FSFXOfferDescriptor>         ReturnValue; };                                   		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

	 UISFXOnlineComponentNotification_execGetGrantingOffers_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentNotification_execGetGrantingOffers_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentNotification.GetEntitledDLCInfo
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentNotification_execGetEntitledDLCInfo_Parms
{
	union { TArray<struct FSFXOfferDescriptor>         ReturnValue; };                                   		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

	 UISFXOnlineComponentNotification_execGetEntitledDLCInfo_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentNotification_execGetEntitledDLCInfo_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentNotification.RefreshEntitlementFlags
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentNotification_execRefreshEntitlementFlags_Parms
{

	 UISFXOnlineComponentNotification_execRefreshEntitlementFlags_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentNotification_execRefreshEntitlementFlags_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentNotification.GetEntitlementGroups
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentNotification_execGetEntitlementGroups_Parms
{
	union { TArray<struct FSFXOnlineEntitlementGroupInfo> ReturnValue; };                                   		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

	 UISFXOnlineComponentNotification_execGetEntitlementGroups_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentNotification_execGetEntitlementGroups_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentNotification.GetDaysSinceCerberusRegistration
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentNotification_execGetDaysSinceCerberusRegistration_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UISFXOnlineComponentNotification_execGetDaysSinceCerberusRegistration_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentNotification_execGetDaysSinceCerberusRegistration_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentNotification.IsCalendarUnlockEarned
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentNotification_execIsCalendarUnlockEarned_Parms
{
	int                                                nDay;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UISFXOnlineComponentNotification_execIsCalendarUnlockEarned_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentNotification_execIsCalendarUnlockEarned_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentNotification.RequestServerInfo
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentNotification_execRequestServerInfo_Parms
{

	 UISFXOnlineComponentNotification_execRequestServerInfo_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentNotification_execRequestServerInfo_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentNotification.RequestData
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentNotification_execRequestData_Parms
{

	 UISFXOnlineComponentNotification_execRequestData_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentNotification_execRequestData_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.GetRebootUserData
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execGetRebootUserData_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UISFXOnlineComponentPlatform_execGetRebootUserData_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentPlatform_execGetRebootUserData_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.WasRebootedFromOSCodeRedemptionUI
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execWasRebootedFromOSCodeRedemptionUI_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UISFXOnlineComponentPlatform_execWasRebootedFromOSCodeRedemptionUI_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentPlatform_execWasRebootedFromOSCodeRedemptionUI_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.ShowCodeRedemptionUI
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execShowCodeRedemptionUI_Parms
{
	int                                                UserData;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UISFXOnlineComponentPlatform_execShowCodeRedemptionUI_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentPlatform_execShowCodeRedemptionUI_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.ShowStoreUI
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execShowStoreUI_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UISFXOnlineComponentPlatform_execShowStoreUI_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentPlatform_execShowStoreUI_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.GetOnlineXuid
// [0x00420400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execGetOnlineXuid_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { struct FUniqueNetId                        oUserXuid; };                                     		// 0x0004 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UISFXOnlineComponentPlatform_execGetOnlineXuid_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentPlatform_execGetOnlineXuid_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.GetOfflineXuid
// [0x00420400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execGetOfflineXuid_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { struct FUniqueNetId                        oUserXuid; };                                     		// 0x0004 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UISFXOnlineComponentPlatform_execGetOfflineXuid_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentPlatform_execGetOfflineXuid_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.AddRecentPlayer
// [0x00024400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execAddRecentPlayer_Parms
{
	union { struct FUniqueNetId                        oPlayerId; };                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    sDescription; };                                  		// 0x0008 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UISFXOnlineComponentPlatform_execAddRecentPlayer_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentPlatform_execAddRecentPlayer_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.ShowKeyboardUI
// [0x00024400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execShowKeyboardUI_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    sTitleText; };                                    		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { FString                                    sDescriptionText; };                              		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      nKeyboardType;                                    		// 0x0024 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bShouldValidate;                                  		// 0x0028 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bRouteThroughConsole;                             		// 0x002C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	union { FString                                    sDefaultText; };                                  		// 0x0030 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	int                                                nMaxResultLength;                                 		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0044 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UISFXOnlineComponentPlatform_execShowKeyboardUI_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentPlatform_execShowKeyboardUI_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.ShowAchievementsUI
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execShowAchievementsUI_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UISFXOnlineComponentPlatform_execShowAchievementsUI_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentPlatform_execShowAchievementsUI_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.ShowFeedbackUI
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execShowFeedbackUI_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FUniqueNetId                        oPlayerId; };                                     		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UISFXOnlineComponentPlatform_execShowFeedbackUI_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentPlatform_execShowFeedbackUI_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.ShowGamerCardUI
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execShowGamerCardUI_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FUniqueNetId                        oPlayerId; };                                     		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UISFXOnlineComponentPlatform_execShowGamerCardUI_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentPlatform_execShowGamerCardUI_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.ShowFriendsInviteUI
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execShowFriendsInviteUI_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FUniqueNetId                        oPlayerId; };                                     		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UISFXOnlineComponentPlatform_execShowFriendsInviteUI_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentPlatform_execShowFriendsInviteUI_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.ShowFriendsUI
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execShowFriendsUI_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UISFXOnlineComponentPlatform_execShowFriendsUI_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentPlatform_execShowFriendsUI_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.CanShowPresenceInformation
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execCanShowPresenceInformation_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UISFXOnlineComponentPlatform_execCanShowPresenceInformation_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentPlatform_execCanShowPresenceInformation_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.CanViewPlayerProfiles
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execCanViewPlayerProfiles_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UISFXOnlineComponentPlatform_execCanViewPlayerProfiles_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentPlatform_execCanViewPlayerProfiles_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.CanPurchaseContent
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execCanPurchaseContent_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UISFXOnlineComponentPlatform_execCanPurchaseContent_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentPlatform_execCanPurchaseContent_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.CanDownloadUserContent
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execCanDownloadUserContent_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UISFXOnlineComponentPlatform_execCanDownloadUserContent_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentPlatform_execCanDownloadUserContent_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.CanCommunicate
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execCanCommunicate_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UISFXOnlineComponentPlatform_execCanCommunicate_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentPlatform_execCanCommunicate_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.CanPlayOnline
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execCanPlayOnline_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UISFXOnlineComponentPlatform_execCanPlayOnline_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentPlatform_execCanPlayOnline_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.SetRichPresence
// [0x00420400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execSetRichPresence_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPresenceMode;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { TArray<struct FLocalizedStringSetting>     aLocalizedStringSettings; };                      		// 0x0008 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	union { TArray<struct FSettingsProperty>           aProperties; };                                   		// 0x0018 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

	 UISFXOnlineComponentPlatform_execSetRichPresence_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentPlatform_execSetRichPresence_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.ShowLoginUI
// [0x00024400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execShowLoginUI_Parms
{
	unsigned long                                      bShowOnlineOnly;                                  		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UISFXOnlineComponentPlatform_execShowLoginUI_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentPlatform_execShowLoginUI_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.GetLoginStatus
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execGetLoginStatus_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UISFXOnlineComponentPlatform_execGetLoginStatus_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentPlatform_execGetLoginStatus_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentTelemetry.Flush
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentTelemetry_execFlush_Parms
{
	unsigned char                                      Channel;                                          		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )

	 UISFXOnlineComponentTelemetry_execFlush_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentTelemetry_execFlush_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentTelemetry.RegisterConnectionDelegates
// [0x00020000] 
struct UISFXOnlineComponentTelemetry_execRegisterConnectionDelegates_Parms
{

	 UISFXOnlineComponentTelemetry_execRegisterConnectionDelegates_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentTelemetry_execRegisterConnectionDelegates_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentTelemetry.OnDisconnect
// [0x00120000] 
struct UISFXOnlineComponentTelemetry_execOnDisconnect_Parms
{
	int                                                Error;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    SessionId; };                                     		// 0x0004 (0x0010) [0x0000000000400082]              ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )

	 UISFXOnlineComponentTelemetry_execOnDisconnect_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentTelemetry_execOnDisconnect_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentTelemetry.OnAuthenticate
// [0x00120000] 
struct UISFXOnlineComponentTelemetry_execOnAuthenticate_Parms
{

	 UISFXOnlineComponentTelemetry_execOnAuthenticate_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentTelemetry_execOnAuthenticate_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentTelemetry.CanCollect
// [0x00120000] 
struct UISFXOnlineComponentTelemetry_execCanCollect_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UISFXOnlineComponentTelemetry_execCanCollect_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentTelemetry_execCanCollect_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowStore
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentUserInterface_eventShowStore_Parms
{
	union { TArray<struct FSFXOfferDescriptor>         aOffers; };                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 UISFXOnlineComponentUserInterface_eventShowStore_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentUserInterface_eventShowStore_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.HasCerberusDLC
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentUserInterface_eventHasCerberusDLC_Parms
{
	unsigned long                                      bVal;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 UISFXOnlineComponentUserInterface_eventHasCerberusDLC_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentUserInterface_eventHasCerberusDLC_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.OnDisplayNotification
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentUserInterface_eventOnDisplayNotification_Parms
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    MessageData; };                                   		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { FString                                    Title; };                                         		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { FString                                    Image; };                                         		// 0x0024 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 UISFXOnlineComponentUserInterface_eventOnDisplayNotification_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentUserInterface_eventOnDisplayNotification_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ClearNotifications
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentUserInterface_eventClearNotifications_Parms
{

	 UISFXOnlineComponentUserInterface_eventClearNotifications_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentUserInterface_eventClearNotifications_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.CloseEANetworking
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentUserInterface_eventCloseEANetworking_Parms
{

	 UISFXOnlineComponentUserInterface_eventCloseEANetworking_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentUserInterface_eventCloseEANetworking_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.SetState
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentUserInterface_eventSetState_Parms
{
	unsigned char                                      eState;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )

	 UISFXOnlineComponentUserInterface_eventSetState_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentUserInterface_eventSetState_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowEmailPasswordMismatch
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentUserInterface_execShowEmailPasswordMismatch_Parms
{
	union { FString                                    Email; };                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { FString                                    Password; };                                      		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 UISFXOnlineComponentUserInterface_execShowEmailPasswordMismatch_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentUserInterface_execShowEmailPasswordMismatch_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowMessageBoxWait
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentUserInterface_execShowMessageBoxWait_Parms
{
	int                                                srMessage;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                srButton1Text;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                srButton2Text;                                    		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 UISFXOnlineComponentUserInterface_execShowMessageBoxWait_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentUserInterface_execShowMessageBoxWait_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowMessageBox
// [0x00024400] ( FUNC_Native )
struct UISFXOnlineComponentUserInterface_execShowMessageBox_Parms
{
	union { FString                                    sTitle; };                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { FString                                    sMessage; };                                      		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { FString                                    sButton1Text; };                                  		// 0x0020 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	union { FString                                    sButton2Text; };                                  		// 0x0030 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	union { FString                                    sButton3Text; };                                  		// 0x0040 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

	 UISFXOnlineComponentUserInterface_execShowMessageBox_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentUserInterface_execShowMessageBox_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowCreateNucleusAccountEx
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentUserInterface_execShowCreateNucleusAccountEx_Parms
{
	union { FString                                    sEmail; };                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { FString                                    sPassword; };                                     		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bEAProducts;                                      		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bThirdParty;                                      		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bBioWareProducts;                                 		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    i_sCountryCode; };                                		// 0x002C (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                BirthDay;                                         		// 0x003C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                BirthMonth;                                       		// 0x0040 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                BirthYear;                                        		// 0x0044 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    i_sLanguageCode; };                               		// 0x0048 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { TArray<FString>                            m_CountryCodeList; };                             		// 0x0058 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { TArray<FString>                            m_CountryDisplayList; };                          		// 0x0068 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 UISFXOnlineComponentUserInterface_execShowCreateNucleusAccountEx_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentUserInterface_execShowCreateNucleusAccountEx_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowCerberusWelcomeMessage
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentUserInterface_execShowCerberusWelcomeMessage_Parms
{

	 UISFXOnlineComponentUserInterface_execShowCerberusWelcomeMessage_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentUserInterface_execShowCerberusWelcomeMessage_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowRedeemCode
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentUserInterface_execShowRedeemCode_Parms
{

	 UISFXOnlineComponentUserInterface_execShowRedeemCode_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentUserInterface_execShowRedeemCode_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowCerberusIntro
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentUserInterface_execShowCerberusIntro_Parms
{

	 UISFXOnlineComponentUserInterface_execShowCerberusIntro_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentUserInterface_execShowCerberusIntro_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowNucleusWelcomeMessage
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentUserInterface_execShowNucleusWelcomeMessage_Parms
{

	 UISFXOnlineComponentUserInterface_execShowNucleusWelcomeMessage_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentUserInterface_execShowNucleusWelcomeMessage_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowCreateNucleusAccount
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentUserInterface_execShowCreateNucleusAccount_Parms
{
	union { FString                                    sEmail; };                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { FString                                    sPassword; };                                     		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bEAProducts;                                      		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bThirdParty;                                      		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bRegisterProduct;                                 		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bBioWareProducts;                                 		// 0x002C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bUnderage;                                        		// 0x0030 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 UISFXOnlineComponentUserInterface_execShowCreateNucleusAccount_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentUserInterface_execShowCreateNucleusAccount_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowParentEmail
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentUserInterface_execShowParentEmail_Parms
{

	 UISFXOnlineComponentUserInterface_execShowParentEmail_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentUserInterface_execShowParentEmail_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowAccountDemographics
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentUserInterface_execShowAccountDemographics_Parms
{
	union { TArray<FString>                            m_CountryCodeList; };                             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { TArray<FString>                            m_CountryDisplayList; };                          		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 UISFXOnlineComponentUserInterface_execShowAccountDemographics_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentUserInterface_execShowAccountDemographics_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowTermsOfService
// [0x00024400] ( FUNC_Native )
struct UISFXOnlineComponentUserInterface_execShowTermsOfService_Parms
{
	union { FString                                    i_sTermsOfService; };                             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bTOSChanged;                                      		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 UISFXOnlineComponentUserInterface_execShowTermsOfService_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentUserInterface_execShowTermsOfService_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowNucleusLogin
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentUserInterface_execShowNucleusLogin_Parms
{
	union { FString                                    Email; };                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { FString                                    Password; };                                      		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                eScreenState;                                     		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 UISFXOnlineComponentUserInterface_execShowNucleusLogin_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentUserInterface_execShowNucleusLogin_Parms() {}
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowIntroPage
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentUserInterface_execShowIntroPage_Parms
{

	 UISFXOnlineComponentUserInterface_execShowIntroPage_Parms() { memset(this, 0, sizeof *this); }
	~UISFXOnlineComponentUserInterface_execShowIntroPage_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponent.IsXbox360
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponent_eventIsXbox360_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponent_eventIsXbox360_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponent_eventIsXbox360_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponent.IsPS3
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponent_eventIsPS3_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponent_eventIsPS3_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponent_eventIsPS3_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponent.IsConsole
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponent_eventIsConsole_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponent_eventIsConsole_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponent_eventIsConsole_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponent.IsEventPending
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponent_execIsEventPending_Parms
{
	unsigned char                                      eEventType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                nEventId;                                         		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponent_execIsEventPending_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponent_execIsEventPending_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponent.GetEvent
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponent_execGetEvent_Parms
{
	unsigned char                                      eEventType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                nEventId;                                         		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class USFXOnlineEvent*                             ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponent_execGetEvent_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponent_execGetEvent_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponent.WaitingForWorkSetObject
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponent_execWaitingForWorkSetObject_Parms
{
	union { TArray<class USFXOnlineEvent*>             aOnlineEventSet; };                               		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { struct FScriptDelegate                     fnWorkComplete; };                                		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 USFXOnlineComponent_execWaitingForWorkSetObject_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponent_execWaitingForWorkSetObject_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponent.WaitingForWorkSetType
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponent_execWaitingForWorkSetType_Parms
{
	union { TArray<unsigned char>                      aWorkUnits; };                                    		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { struct FScriptDelegate                     fnWorkComplete; };                                		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 USFXOnlineComponent_execWaitingForWorkSetType_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponent_execWaitingForWorkSetType_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponent.WaitingForWorkObject
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponent_execWaitingForWorkObject_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { struct FScriptDelegate                     fnWorkComplete; };                                		// 0x0008 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 USFXOnlineComponent_execWaitingForWorkObject_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponent_execWaitingForWorkObject_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponent.WaitingForWorkType
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponent_execWaitingForWorkType_Parms
{
	unsigned char                                      eWork;                                            		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FScriptDelegate                     fnWorkComplete; };                                		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                nEventId;                                         		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 USFXOnlineComponent_execWaitingForWorkType_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponent_execWaitingForWorkType_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponent.NotifyWorkFinishedObject
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponent_execNotifyWorkFinishedObject_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      eStatusFinished;                                  		// 0x0008 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 USFXOnlineComponent_execNotifyWorkFinishedObject_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponent_execNotifyWorkFinishedObject_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponent.NotifyWorkFinishedType
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponent_execNotifyWorkFinishedType_Parms
{
	unsigned char                                      eWork;                                            		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      eStatusFinished;                                  		// 0x0001 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                nEventId;                                         		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 USFXOnlineComponent_execNotifyWorkFinishedType_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponent_execNotifyWorkFinishedType_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponent.NotifyWorkStartedObject
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponent_execNotifyWorkStartedObject_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      eEventType;                                       		// 0x0008 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 USFXOnlineComponent_execNotifyWorkStartedObject_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponent_execNotifyWorkStartedObject_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponent.NotifyWorkStartedType
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponent_execNotifyWorkStartedType_Parms
{
	unsigned char                                      eWork;                                            		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                nEventId;                                         		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              fTimeOut;                                         		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 USFXOnlineComponent_execNotifyWorkStartedType_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponent_execNotifyWorkStartedType_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponent.NotifyEventObject
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponent_execNotifyEventObject_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineComponent_execNotifyEventObject_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponent_execNotifyEventObject_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponent.NotifyEventType
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponent_execNotifyEventType_Parms
{
	unsigned char                                      eEventType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      eStatus;                                          		// 0x0001 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      eOutcome;                                         		// 0x0002 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 USFXOnlineComponent_execNotifyEventType_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponent_execNotifyEventType_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponent.StopWaitingForAllWork
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponent_execStopWaitingForAllWork_Parms
{
	class UObject*                                     oCallbackTarget;                                  		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineComponent_execStopWaitingForAllWork_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponent_execStopWaitingForAllWork_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponent.UnsubscribeFromAllEvents
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponent_execUnsubscribeFromAllEvents_Parms
{
	class UObject*                                     oCallbackTarget;                                  		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineComponent_execUnsubscribeFromAllEvents_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponent_execUnsubscribeFromAllEvents_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponent.UnsubscribeFromEvent
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponent_execUnsubscribeFromEvent_Parms
{
	unsigned char                                      oEventType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FScriptDelegate                     fnEventCallback; };                               		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 USFXOnlineComponent_execUnsubscribeFromEvent_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponent_execUnsubscribeFromEvent_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponent.SubscribeToEvent
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponent_execSubscribeToEvent_Parms
{
	unsigned char                                      eEventType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FScriptDelegate                     fnEventCallback; };                               		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 USFXOnlineComponent_execSubscribeToEvent_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponent_execSubscribeToEvent_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponent.OnEvent
// [0x00120000] 
struct USFXOnlineComponent_execOnEvent_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineComponent_execOnEvent_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponent_execOnEvent_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponent.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponent_execGetAPIName_Parms
{
	union { struct SFXName                             ReturnValue; };                                   		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponent_execGetAPIName_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponent_execGetAPIName_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponent.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponent_execOnRelease_Parms
{

	 USFXOnlineComponent_execOnRelease_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponent_execOnRelease_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponent.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponent_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineComponent_execOnInitialize_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponent_execOnInitialize_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponent.SubscribeToEvents
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponent_execSubscribeToEvents_Parms
{

	 USFXOnlineComponent_execSubscribeToEvents_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponent_execSubscribeToEvents_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentOrigin.OnTick
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentOrigin_execOnTick_Parms
{

	 USFXOnlineComponentOrigin_execOnTick_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentOrigin_execOnTick_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentOrigin.RefreshServerAchievements_ASync
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentOrigin_execRefreshServerAchievements_ASync_Parms
{
	union { struct FSFXCachedAchievements              cached; };                                        		// 0x0000 (0x0024) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0024 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentOrigin_execRefreshServerAchievements_ASync_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentOrigin_execRefreshServerAchievements_ASync_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentOrigin.SetRichPresence
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentOrigin_execSetRichPresence_Parms
{
	union { FString                                    presence; };                                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { FString                                    gamePresence; };                                  		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0020 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentOrigin_execSetRichPresence_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentOrigin_execSetRichPresence_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentOrigin.RequestProfile
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentOrigin_execRequestProfile_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentOrigin_execRequestProfile_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentOrigin_execRequestProfile_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentOrigin.StartService
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentOrigin_execStartService_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentOrigin_execStartService_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentOrigin_execStartService_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentOrigin.EnsureSignedIn
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentOrigin_execEnsureSignedIn_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentOrigin_execEnsureSignedIn_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentOrigin_execEnsureSignedIn_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentOrigin.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentOrigin_execGetAPIName_Parms
{
	union { struct SFXName                             ReturnValue; };                                   		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentOrigin_execGetAPIName_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentOrigin_execGetAPIName_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentOrigin.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentOrigin_execOnRelease_Parms
{

	 USFXOnlineComponentOrigin_execOnRelease_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentOrigin_execOnRelease_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentOrigin.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentOrigin_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineComponentOrigin_execOnInitialize_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentOrigin_execOnInitialize_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ClearUnlockAchievementCompleteDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execClearUnlockAchievementCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FScriptDelegate                     UnlockAchievementCompleteDelegate; };             		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]              

	 USFXOnlineComponentUnrealPlayer_execClearUnlockAchievementCompleteDelegate_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execClearUnlockAchievementCompleteDelegate_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AddUnlockAchievementCompleteDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execAddUnlockAchievementCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FScriptDelegate                     UnlockAchievementCompleteDelegate; };             		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 USFXOnlineComponentUnrealPlayer_execAddUnlockAchievementCompleteDelegate_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execAddUnlockAchievementCompleteDelegate_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnUnlockAchievementComplete
// [0x00120000] 
struct USFXOnlineComponentUnrealPlayer_execOnUnlockAchievementComplete_Parms
{
	unsigned long                                      bWasSuccessful;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineComponentUnrealPlayer_execOnUnlockAchievementComplete_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execOnUnlockAchievementComplete_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.UnlockAchievement
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execUnlockAchievement_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                AchievementId;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentUnrealPlayer_execUnlockAchievement_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execUnlockAchievement_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.GetAchievements
// [0x00424400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execGetAchievements_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { TArray<struct FAchievementDetails>         Achievements; };                                  		// 0x0004 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                TitleId;                                          		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                SetIndex;                                         		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x001C (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentUnrealPlayer_execGetAchievements_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execGetAchievements_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ClearReadAchievementsCompleteDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execClearReadAchievementsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FScriptDelegate                     ReadAchievementsCompleteDelegate; };              		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]              

	 USFXOnlineComponentUnrealPlayer_execClearReadAchievementsCompleteDelegate_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execClearReadAchievementsCompleteDelegate_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AddReadAchievementsCompleteDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execAddReadAchievementsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FScriptDelegate                     ReadAchievementsCompleteDelegate; };              		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 USFXOnlineComponentUnrealPlayer_execAddReadAchievementsCompleteDelegate_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execAddReadAchievementsCompleteDelegate_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnReadAchievementsComplete
// [0x00120000] 
struct USFXOnlineComponentUnrealPlayer_execOnReadAchievementsComplete_Parms
{
	int                                                TitleId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineComponentUnrealPlayer_execOnReadAchievementsComplete_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execOnReadAchievementsComplete_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ReadAchievements
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execReadAchievements_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                TitleId;                                          		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bShouldReadText;                                  		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bShouldReadImages;                                		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentUnrealPlayer_execReadAchievements_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execReadAchievements_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.DeleteMessage
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execDeleteMessage_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                MessageIndex;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentUnrealPlayer_execDeleteMessage_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execDeleteMessage_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ClearFriendMessageReceivedDelegate
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execClearFriendMessageReceivedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FScriptDelegate                     MessageDelegate; };                               		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 USFXOnlineComponentUnrealPlayer_execClearFriendMessageReceivedDelegate_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execClearFriendMessageReceivedDelegate_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AddFriendMessageReceivedDelegate
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execAddFriendMessageReceivedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FScriptDelegate                     MessageDelegate; };                               		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 USFXOnlineComponentUnrealPlayer_execAddFriendMessageReceivedDelegate_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execAddFriendMessageReceivedDelegate_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnFriendMessageReceived
// [0x00120000] 
struct USFXOnlineComponentUnrealPlayer_execOnFriendMessageReceived_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FUniqueNetId                        SendingPlayer; };                                 		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    SendingNick; };                                   		// 0x000C (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { FString                                    Message; };                                       		// 0x001C (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 USFXOnlineComponentUnrealPlayer_execOnFriendMessageReceived_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execOnFriendMessageReceived_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.GetFriendMessages
// [0x00420000] 
struct USFXOnlineComponentUnrealPlayer_execGetFriendMessages_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { TArray<struct FOnlineFriendMessage>        FriendMessages; };                                		// 0x0004 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

	 USFXOnlineComponentUnrealPlayer_execGetFriendMessages_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execGetFriendMessages_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ClearJoinFriendGameCompleteDelegate
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execClearJoinFriendGameCompleteDelegate_Parms
{
	union { struct FScriptDelegate                     JoinFriendGameCompleteDelegate; };                		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 USFXOnlineComponentUnrealPlayer_execClearJoinFriendGameCompleteDelegate_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execClearJoinFriendGameCompleteDelegate_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AddJoinFriendGameCompleteDelegate
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execAddJoinFriendGameCompleteDelegate_Parms
{
	union { struct FScriptDelegate                     JoinFriendGameCompleteDelegate; };                		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 USFXOnlineComponentUnrealPlayer_execAddJoinFriendGameCompleteDelegate_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execAddJoinFriendGameCompleteDelegate_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnJoinFriendGameComplete
// [0x00120000] 
struct USFXOnlineComponentUnrealPlayer_execOnJoinFriendGameComplete_Parms
{
	unsigned long                                      bWasSuccessful;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineComponentUnrealPlayer_execOnJoinFriendGameComplete_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execOnJoinFriendGameComplete_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.JoinFriendGame
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execJoinFriendGame_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FUniqueNetId                        Friend; };                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentUnrealPlayer_execJoinFriendGame_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execJoinFriendGame_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ClearReceivedGameInviteDelegate
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execClearReceivedGameInviteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FScriptDelegate                     ReceivedGameInviteDelegate; };                    		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 USFXOnlineComponentUnrealPlayer_execClearReceivedGameInviteDelegate_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execClearReceivedGameInviteDelegate_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AddReceivedGameInviteDelegate
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execAddReceivedGameInviteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FScriptDelegate                     ReceivedGameInviteDelegate; };                    		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 USFXOnlineComponentUnrealPlayer_execAddReceivedGameInviteDelegate_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execAddReceivedGameInviteDelegate_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnReceivedGameInvite
// [0x00120000] 
struct USFXOnlineComponentUnrealPlayer_execOnReceivedGameInvite_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    InviterName; };                                   		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 USFXOnlineComponentUnrealPlayer_execOnReceivedGameInvite_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execOnReceivedGameInvite_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.SendGameInviteToFriends
// [0x00024000] 
struct USFXOnlineComponentUnrealPlayer_execSendGameInviteToFriends_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { TArray<struct FUniqueNetId>                Friends; };                                       		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { FString                                    Text; };                                          		// 0x0014 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0024 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentUnrealPlayer_execSendGameInviteToFriends_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execSendGameInviteToFriends_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.SendGameInviteToFriend
// [0x00024000] 
struct USFXOnlineComponentUnrealPlayer_execSendGameInviteToFriend_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FUniqueNetId                        Friend; };                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    Text; };                                          		// 0x000C (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x001C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentUnrealPlayer_execSendGameInviteToFriend_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execSendGameInviteToFriend_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.SendMessageToFriend
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execSendMessageToFriend_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FUniqueNetId                        Friend; };                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    Message; };                                       		// 0x000C (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x001C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentUnrealPlayer_execSendMessageToFriend_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execSendMessageToFriend_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ClearFriendInviteReceivedDelegate
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execClearFriendInviteReceivedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FScriptDelegate                     InviteDelegate; };                                		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 USFXOnlineComponentUnrealPlayer_execClearFriendInviteReceivedDelegate_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execClearFriendInviteReceivedDelegate_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AddFriendInviteReceivedDelegate
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execAddFriendInviteReceivedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FScriptDelegate                     InviteDelegate; };                                		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 USFXOnlineComponentUnrealPlayer_execAddFriendInviteReceivedDelegate_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execAddFriendInviteReceivedDelegate_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnFriendInviteReceived
// [0x00120000] 
struct USFXOnlineComponentUnrealPlayer_execOnFriendInviteReceived_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FUniqueNetId                        RequestingPlayer; };                              		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    RequestingNick; };                                		// 0x000C (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { FString                                    Message; };                                       		// 0x001C (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 USFXOnlineComponentUnrealPlayer_execOnFriendInviteReceived_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execOnFriendInviteReceived_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.RemoveFriend
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execRemoveFriend_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FUniqueNetId                        FormerFriend; };                                  		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentUnrealPlayer_execRemoveFriend_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execRemoveFriend_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.DenyFriendInvite
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execDenyFriendInvite_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FUniqueNetId                        RequestingPlayer; };                              		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentUnrealPlayer_execDenyFriendInvite_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execDenyFriendInvite_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AcceptFriendInvite
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execAcceptFriendInvite_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FUniqueNetId                        RequestingPlayer; };                              		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentUnrealPlayer_execAcceptFriendInvite_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execAcceptFriendInvite_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ClearAddFriendByNameCompleteDelegate
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execClearAddFriendByNameCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FScriptDelegate                     FriendDelegate; };                                		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 USFXOnlineComponentUnrealPlayer_execClearAddFriendByNameCompleteDelegate_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execClearAddFriendByNameCompleteDelegate_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AddAddFriendByNameCompleteDelegate
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execAddAddFriendByNameCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FScriptDelegate                     FriendDelegate; };                                		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 USFXOnlineComponentUnrealPlayer_execAddAddFriendByNameCompleteDelegate_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execAddAddFriendByNameCompleteDelegate_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnAddFriendByNameComplete
// [0x00120000] 
struct USFXOnlineComponentUnrealPlayer_execOnAddFriendByNameComplete_Parms
{
	unsigned long                                      bWasSuccessful;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineComponentUnrealPlayer_execOnAddFriendByNameComplete_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execOnAddFriendByNameComplete_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AddFriendByName
// [0x00024000] 
struct USFXOnlineComponentUnrealPlayer_execAddFriendByName_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    FriendName; };                                    		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { FString                                    Message; };                                       		// 0x0014 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0024 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentUnrealPlayer_execAddFriendByName_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execAddFriendByName_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AddFriend
// [0x00024000] 
struct USFXOnlineComponentUnrealPlayer_execAddFriend_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FUniqueNetId                        NewFriend; };                                     		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    Message; };                                       		// 0x000C (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x001C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentUnrealPlayer_execAddFriend_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execAddFriend_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.GetKeyboardInputResults
// [0x00420000] 
struct USFXOnlineComponentUnrealPlayer_execGetKeyboardInputResults_Parms
{
	unsigned char                                      bWasCanceled;                                     		// 0x0000 (0x0001) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	union { FString                                    ReturnValue; };                                   		// 0x0004 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

	 USFXOnlineComponentUnrealPlayer_execGetKeyboardInputResults_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execGetKeyboardInputResults_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ClearKeyboardInputDoneDelegate
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execClearKeyboardInputDoneDelegate_Parms
{
	union { struct FScriptDelegate                     InputDelegate; };                                 		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 USFXOnlineComponentUnrealPlayer_execClearKeyboardInputDoneDelegate_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execClearKeyboardInputDoneDelegate_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AddKeyboardInputDoneDelegate
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execAddKeyboardInputDoneDelegate_Parms
{
	union { struct FScriptDelegate                     InputDelegate; };                                 		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 USFXOnlineComponentUnrealPlayer_execAddKeyboardInputDoneDelegate_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execAddKeyboardInputDoneDelegate_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnKeyboardInputComplete
// [0x00120000] 
struct USFXOnlineComponentUnrealPlayer_execOnKeyboardInputComplete_Parms
{
	unsigned long                                      bWasSuccessful;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineComponentUnrealPlayer_execOnKeyboardInputComplete_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execOnKeyboardInputComplete_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ShowKeyboardUI
// [0x00024000] 
struct USFXOnlineComponentUnrealPlayer_execShowKeyboardUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    TitleText; };                                     		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { FString                                    DescriptionText; };                               		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bIsPassword;                                      		// 0x0024 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bShouldValidate;                                  		// 0x0028 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	union { FString                                    DefaultText; };                                   		// 0x002C (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	int                                                MaxResultLength;                                  		// 0x003C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0040 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentUnrealPlayer_execShowKeyboardUI_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execShowKeyboardUI_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.SetOnlineStatus
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execSetOnlineStatus_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                StatusId;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { TArray<struct FLocalizedStringSetting>     LocalizedStringSettings; };                       		// 0x0008 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	union { TArray<struct FSettingsProperty>           Properties; };                                    		// 0x0018 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

	 USFXOnlineComponentUnrealPlayer_execSetOnlineStatus_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execSetOnlineStatus_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.GetFriendsList
// [0x00424000] 
struct USFXOnlineComponentUnrealPlayer_execGetFriendsList_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { TArray<struct FOnlineFriend>               Friends; };                                       		// 0x0004 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                Count;                                            		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                StartingAt;                                       		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x001C (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentUnrealPlayer_execGetFriendsList_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execGetFriendsList_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ClearReadFriendsCompleteDelegate
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execClearReadFriendsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FScriptDelegate                     ReadFriendsCompleteDelegate; };                   		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 USFXOnlineComponentUnrealPlayer_execClearReadFriendsCompleteDelegate_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execClearReadFriendsCompleteDelegate_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AddReadFriendsCompleteDelegate
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execAddReadFriendsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FScriptDelegate                     ReadFriendsCompleteDelegate; };                   		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 USFXOnlineComponentUnrealPlayer_execAddReadFriendsCompleteDelegate_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execAddReadFriendsCompleteDelegate_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnReadFriendsComplete
// [0x00120000] 
struct USFXOnlineComponentUnrealPlayer_execOnReadFriendsComplete_Parms
{
	unsigned long                                      bWasSuccessful;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineComponentUnrealPlayer_execOnReadFriendsComplete_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execOnReadFriendsComplete_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ReadFriendsList
// [0x00024000] 
struct USFXOnlineComponentUnrealPlayer_execReadFriendsList_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                Count;                                            		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                StartingAt;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentUnrealPlayer_execReadFriendsList_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execReadFriendsList_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ClearWritePlayerStorageCompleteDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execClearWritePlayerStorageCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FScriptDelegate                     WritePlayerStorageCompleteDelegate; };            		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]              

	 USFXOnlineComponentUnrealPlayer_execClearWritePlayerStorageCompleteDelegate_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execClearWritePlayerStorageCompleteDelegate_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AddWritePlayerStorageCompleteDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execAddWritePlayerStorageCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FScriptDelegate                     WritePlayerStorageCompleteDelegate; };            		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 USFXOnlineComponentUnrealPlayer_execAddWritePlayerStorageCompleteDelegate_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execAddWritePlayerStorageCompleteDelegate_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnWritePlayerStorageComplete
// [0x00120000] 
struct USFXOnlineComponentUnrealPlayer_execOnWritePlayerStorageComplete_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineComponentUnrealPlayer_execOnWritePlayerStorageComplete_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execOnWritePlayerStorageComplete_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.WritePlayerStorage
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execWritePlayerStorage_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlinePlayerStorage*                        PlayerStorage;                                    		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentUnrealPlayer_execWritePlayerStorage_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execWritePlayerStorage_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.GetPlayerStorage
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execGetPlayerStorage_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlinePlayerStorage*                        ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentUnrealPlayer_execGetPlayerStorage_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execGetPlayerStorage_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ClearReadPlayerStorageForNetIdCompleteDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execClearReadPlayerStorageForNetIdCompleteDelegate_Parms
{
	union { struct FUniqueNetId                        NetId; };                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { struct FScriptDelegate                     ReadPlayerStorageForNetIdCompleteDelegate; };     		// 0x0008 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]              

	 USFXOnlineComponentUnrealPlayer_execClearReadPlayerStorageForNetIdCompleteDelegate_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execClearReadPlayerStorageForNetIdCompleteDelegate_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AddReadPlayerStorageForNetIdCompleteDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execAddReadPlayerStorageForNetIdCompleteDelegate_Parms
{
	union { struct FUniqueNetId                        NetId; };                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { struct FScriptDelegate                     ReadPlayerStorageForNetIdCompleteDelegate; };     		// 0x0008 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 USFXOnlineComponentUnrealPlayer_execAddReadPlayerStorageForNetIdCompleteDelegate_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execAddReadPlayerStorageForNetIdCompleteDelegate_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnReadPlayerStorageForNetIdComplete
// [0x00120000] 
struct USFXOnlineComponentUnrealPlayer_execOnReadPlayerStorageForNetIdComplete_Parms
{
	union { struct FUniqueNetId                        NetId; };                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful;                                   		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineComponentUnrealPlayer_execOnReadPlayerStorageForNetIdComplete_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execOnReadPlayerStorageForNetIdComplete_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ReadPlayerStorageForNetId
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execReadPlayerStorageForNetId_Parms
{
	union { struct FUniqueNetId                        NetId; };                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UOnlinePlayerStorage*                        PlayerStorage;                                    		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentUnrealPlayer_execReadPlayerStorageForNetId_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execReadPlayerStorageForNetId_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ClearReadPlayerStorageCompleteDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execClearReadPlayerStorageCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FScriptDelegate                     ReadPlayerStorageCompleteDelegate; };             		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]              

	 USFXOnlineComponentUnrealPlayer_execClearReadPlayerStorageCompleteDelegate_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execClearReadPlayerStorageCompleteDelegate_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AddReadPlayerStorageCompleteDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execAddReadPlayerStorageCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FScriptDelegate                     ReadPlayerStorageCompleteDelegate; };             		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 USFXOnlineComponentUnrealPlayer_execAddReadPlayerStorageCompleteDelegate_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execAddReadPlayerStorageCompleteDelegate_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnReadPlayerStorageComplete
// [0x00120000] 
struct USFXOnlineComponentUnrealPlayer_execOnReadPlayerStorageComplete_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineComponentUnrealPlayer_execOnReadPlayerStorageComplete_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execOnReadPlayerStorageComplete_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ReadPlayerStorage
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execReadPlayerStorage_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlinePlayerStorage*                        PlayerStorage;                                    		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentUnrealPlayer_execReadPlayerStorage_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execReadPlayerStorage_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ClearWriteProfileSettingsCompleteDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execClearWriteProfileSettingsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FScriptDelegate                     WriteProfileSettingsCompleteDelegate; };          		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]              

	 USFXOnlineComponentUnrealPlayer_execClearWriteProfileSettingsCompleteDelegate_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execClearWriteProfileSettingsCompleteDelegate_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AddWriteProfileSettingsCompleteDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execAddWriteProfileSettingsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FScriptDelegate                     WriteProfileSettingsCompleteDelegate; };          		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 USFXOnlineComponentUnrealPlayer_execAddWriteProfileSettingsCompleteDelegate_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execAddWriteProfileSettingsCompleteDelegate_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnWriteProfileSettingsComplete
// [0x00120000] 
struct USFXOnlineComponentUnrealPlayer_execOnWriteProfileSettingsComplete_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineComponentUnrealPlayer_execOnWriteProfileSettingsComplete_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execOnWriteProfileSettingsComplete_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.WriteProfileSettings
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execWriteProfileSettings_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineProfileSettings*                      ProfileSettings;                                  		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bIsTrilogyProfile;                                		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentUnrealPlayer_execWriteProfileSettings_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execWriteProfileSettings_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.GetProfileSettings
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execGetProfileSettings_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineProfileSettings*                      ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentUnrealPlayer_execGetProfileSettings_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execGetProfileSettings_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ClearReadProfileSettingsCompleteDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execClearReadProfileSettingsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FScriptDelegate                     ReadProfileSettingsCompleteDelegate; };           		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]              

	 USFXOnlineComponentUnrealPlayer_execClearReadProfileSettingsCompleteDelegate_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execClearReadProfileSettingsCompleteDelegate_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AddReadProfileSettingsCompleteDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execAddReadProfileSettingsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FScriptDelegate                     ReadProfileSettingsCompleteDelegate; };           		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 USFXOnlineComponentUnrealPlayer_execAddReadProfileSettingsCompleteDelegate_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execAddReadProfileSettingsCompleteDelegate_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnReadProfileSettingsComplete
// [0x00120000] 
struct USFXOnlineComponentUnrealPlayer_execOnReadProfileSettingsComplete_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineComponentUnrealPlayer_execOnReadProfileSettingsComplete_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execOnReadProfileSettingsComplete_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ReadProfileSettings
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execReadProfileSettings_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineProfileSettings*                      ProfileSettings;                                  		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bIsTrilogyProfile;                                		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentUnrealPlayer_execReadProfileSettings_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execReadProfileSettings_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ClearFriendsChangeDelegate
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execClearFriendsChangeDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FScriptDelegate                     FriendsDelegate; };                               		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 USFXOnlineComponentUnrealPlayer_execClearFriendsChangeDelegate_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execClearFriendsChangeDelegate_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AddFriendsChangeDelegate
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execAddFriendsChangeDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FScriptDelegate                     FriendsDelegate; };                               		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 USFXOnlineComponentUnrealPlayer_execAddFriendsChangeDelegate_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execAddFriendsChangeDelegate_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ClearMutingChangeDelegate
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execClearMutingChangeDelegate_Parms
{
	union { struct FScriptDelegate                     MutingDelegate; };                                		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 USFXOnlineComponentUnrealPlayer_execClearMutingChangeDelegate_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execClearMutingChangeDelegate_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AddMutingChangeDelegate
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execAddMutingChangeDelegate_Parms
{
	union { struct FScriptDelegate                     MutingDelegate; };                                		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 USFXOnlineComponentUnrealPlayer_execAddMutingChangeDelegate_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execAddMutingChangeDelegate_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ClearLoginCancelledDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execClearLoginCancelledDelegate_Parms
{
	union { struct FScriptDelegate                     CancelledDelegate; };                             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              

	 USFXOnlineComponentUnrealPlayer_execClearLoginCancelledDelegate_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execClearLoginCancelledDelegate_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AddLoginCancelledDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execAddLoginCancelledDelegate_Parms
{
	union { struct FScriptDelegate                     CancelledDelegate; };                             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 USFXOnlineComponentUnrealPlayer_execAddLoginCancelledDelegate_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execAddLoginCancelledDelegate_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ClearLoginStatusChangeDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execClearLoginStatusChangeDelegate_Parms
{
	union { struct FScriptDelegate                     LoginStatusDelegate; };                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      LocalUserNum;                                     		// 0x0010 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// int                                             RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]              

	 USFXOnlineComponentUnrealPlayer_execClearLoginStatusChangeDelegate_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execClearLoginStatusChangeDelegate_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AddLoginStatusChangeDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execAddLoginStatusChangeDelegate_Parms
{
	union { struct FScriptDelegate                     LoginStatusDelegate; };                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      LocalUserNum;                                     		// 0x0010 (0x0001) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineComponentUnrealPlayer_execAddLoginStatusChangeDelegate_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execAddLoginStatusChangeDelegate_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnLoginStatusChange
// [0x00120000] 
struct USFXOnlineComponentUnrealPlayer_execOnLoginStatusChange_Parms
{
	unsigned char                                      NewStatus;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FUniqueNetId                        NewId; };                                         		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineComponentUnrealPlayer_execOnLoginStatusChange_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execOnLoginStatusChange_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ClearLoginChangeDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execClearLoginChangeDelegate_Parms
{
	union { struct FScriptDelegate                     LoginDelegate; };                                 		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              

	 USFXOnlineComponentUnrealPlayer_execClearLoginChangeDelegate_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execClearLoginChangeDelegate_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AddLoginChangeDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execAddLoginChangeDelegate_Parms
{
	union { struct FScriptDelegate                     LoginDelegate; };                                 		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 USFXOnlineComponentUnrealPlayer_execAddLoginChangeDelegate_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execAddLoginChangeDelegate_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ShowFriendsUI
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execShowFriendsUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentUnrealPlayer_execShowFriendsUI_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execShowFriendsUI_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.IsMuted
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execIsMuted_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FUniqueNetId                        PlayerID; };                                      		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentUnrealPlayer_execIsMuted_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execIsMuted_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AreAnyFriends
// [0x00420000] 
struct USFXOnlineComponentUnrealPlayer_execAreAnyFriends_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { TArray<struct FFriendsQuery>               Query; };                                         		// 0x0004 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentUnrealPlayer_execAreAnyFriends_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execAreAnyFriends_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.IsFriend
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execIsFriend_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FUniqueNetId                        PlayerID; };                                      		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentUnrealPlayer_execIsFriend_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execIsFriend_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.CanShowPresenceInformation
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execCanShowPresenceInformation_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentUnrealPlayer_execCanShowPresenceInformation_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execCanShowPresenceInformation_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.CanViewPlayerProfiles
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execCanViewPlayerProfiles_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentUnrealPlayer_execCanViewPlayerProfiles_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execCanViewPlayerProfiles_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.CanPurchaseContent
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execCanPurchaseContent_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentUnrealPlayer_execCanPurchaseContent_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execCanPurchaseContent_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.CanDownloadUserContent
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execCanDownloadUserContent_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentUnrealPlayer_execCanDownloadUserContent_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execCanDownloadUserContent_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.CanCommunicate
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execCanCommunicate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentUnrealPlayer_execCanCommunicate_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execCanCommunicate_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.CanPlayOnline
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execCanPlayOnline_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentUnrealPlayer_execCanPlayOnline_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execCanPlayOnline_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.IsLocalLogin
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execIsLocalLogin_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentUnrealPlayer_execIsLocalLogin_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execIsLocalLogin_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.IsGuestLogin
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execIsGuestLogin_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentUnrealPlayer_execIsGuestLogin_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execIsGuestLogin_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.GetPlayerNickname
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execGetPlayerNickname_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    ReturnValue; };                                   		// 0x0004 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

	 USFXOnlineComponentUnrealPlayer_execGetPlayerNickname_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execGetPlayerNickname_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.GetUniquePlayerId
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execGetUniquePlayerId_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FUniqueNetId                        PlayerID; };                                      		// 0x0004 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentUnrealPlayer_execGetUniquePlayerId_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execGetUniquePlayerId_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.GetLoginStatus
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execGetLoginStatus_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXOnlineSubsystem*                      oOnlineSubsystem;                                 		// 0x0004 (0x0008) [0x0000000000000000]              
	// unsigned char                                   ELoginStatus;                                     		// 0x000C (0x0001) [0x0000000000000000]              

	 USFXOnlineComponentUnrealPlayer_execGetLoginStatus_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execGetLoginStatus_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ClearLogoutCompletedDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execClearLogoutCompletedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FScriptDelegate                     LogoutDelegate; };                                		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]              

	 USFXOnlineComponentUnrealPlayer_execClearLogoutCompletedDelegate_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execClearLogoutCompletedDelegate_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AddLogoutCompletedDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execAddLogoutCompletedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FScriptDelegate                     LogoutDelegate; };                                		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 USFXOnlineComponentUnrealPlayer_execAddLogoutCompletedDelegate_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execAddLogoutCompletedDelegate_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnLogoutCompleted
// [0x00120000] 
struct USFXOnlineComponentUnrealPlayer_execOnLogoutCompleted_Parms
{
	unsigned long                                      bWasSuccessful;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineComponentUnrealPlayer_execOnLogoutCompleted_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execOnLogoutCompleted_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.Logout
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execLogout_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentUnrealPlayer_execLogout_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execLogout_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ClearLoginFailedDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execClearLoginFailedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FScriptDelegate                     LoginDelegate; };                                 		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]              

	 USFXOnlineComponentUnrealPlayer_execClearLoginFailedDelegate_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execClearLoginFailedDelegate_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AddLoginFailedDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execAddLoginFailedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FScriptDelegate                     LoginDelegate; };                                 		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 USFXOnlineComponentUnrealPlayer_execAddLoginFailedDelegate_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execAddLoginFailedDelegate_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnLoginFailed
// [0x00120000] 
struct USFXOnlineComponentUnrealPlayer_execOnLoginFailed_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ErrorCode;                                        		// 0x0001 (0x0001) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineComponentUnrealPlayer_execOnLoginFailed_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execOnLoginFailed_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AutoLogin
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execAutoLogin_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentUnrealPlayer_execAutoLogin_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execAutoLogin_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.Login
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execLogin_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    LoginName; };                                     		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { FString                                    Password; };                                      		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bWantsLocalOnly;                                  		// 0x0024 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0028 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentUnrealPlayer_execLogin_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execLogin_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ShowLoginUI
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execShowLoginUI_Parms
{
	unsigned long                                      bShowOnlineOnly;                                  		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentUnrealPlayer_execShowLoginUI_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execShowLoginUI_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnFriendsChange
// [0x00120000] 
struct USFXOnlineComponentUnrealPlayer_execOnFriendsChange_Parms
{

	 USFXOnlineComponentUnrealPlayer_execOnFriendsChange_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execOnFriendsChange_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnMutingChange
// [0x00120000] 
struct USFXOnlineComponentUnrealPlayer_execOnMutingChange_Parms
{

	 USFXOnlineComponentUnrealPlayer_execOnMutingChange_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execOnMutingChange_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnLoginCancelled
// [0x00120000] 
struct USFXOnlineComponentUnrealPlayer_execOnLoginCancelled_Parms
{

	 USFXOnlineComponentUnrealPlayer_execOnLoginCancelled_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execOnLoginCancelled_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnLoginChange
// [0x00120000] 
struct USFXOnlineComponentUnrealPlayer_execOnLoginChange_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineComponentUnrealPlayer_execOnLoginChange_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execOnLoginChange_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnProfileDataChanged
// [0x00120000] 
struct USFXOnlineComponentUnrealPlayer_execOnProfileDataChanged_Parms
{

	 USFXOnlineComponentUnrealPlayer_execOnProfileDataChanged_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execOnProfileDataChanged_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.CreateProfileName
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execCreateProfileName_Parms
{
	unsigned long                                      bIsTrilogyProfile;                                		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	union { FString                                    ReturnValue; };                                   		// 0x0004 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

	 USFXOnlineComponentUnrealPlayer_execCreateProfileName_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execCreateProfileName_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.DoesProfileExist
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execDoesProfileExist_Parms
{
	unsigned long                                      bIsTrilogyProfile;                                		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentUnrealPlayer_execDoesProfileExist_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execDoesProfileExist_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnTick
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execOnTick_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineComponentUnrealPlayer_execOnTick_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execOnTick_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execGetAPIName_Parms
{
	union { struct SFXName                             ReturnValue; };                                   		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentUnrealPlayer_execGetAPIName_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execGetAPIName_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execOnRelease_Parms
{

	 USFXOnlineComponentUnrealPlayer_execOnRelease_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execOnRelease_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineComponentUnrealPlayer_execOnInitialize_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayer_execOnInitialize_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.ShowCustomPlayersUI
// [0x00420000] 
struct USFXOnlineComponentUnrealPlayerEx_execShowCustomPlayersUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { TArray<struct FUniqueNetId>                Players; };                                       		// 0x0004 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	union { FString                                    Title; };                                         		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { FString                                    Description; };                                   		// 0x0024 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0034 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentUnrealPlayerEx_execShowCustomPlayersUI_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayerEx_execShowCustomPlayersUI_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.ShowPlayersUI
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayerEx_execShowPlayersUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentUnrealPlayerEx_execShowPlayersUI_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayerEx_execShowPlayersUI_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.ShowFriendsInviteUI
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayerEx_execShowFriendsInviteUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FUniqueNetId                        PlayerID; };                                      		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentUnrealPlayerEx_execShowFriendsInviteUI_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayerEx_execShowFriendsInviteUI_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.ClearProfileDataChangedDelegate
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayerEx_execClearProfileDataChangedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FScriptDelegate                     ProfileDataChangedDelegate; };                    		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 USFXOnlineComponentUnrealPlayerEx_execClearProfileDataChangedDelegate_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayerEx_execClearProfileDataChangedDelegate_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.AddProfileDataChangedDelegate
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayerEx_execAddProfileDataChangedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FScriptDelegate                     ProfileDataChangedDelegate; };                    		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 USFXOnlineComponentUnrealPlayerEx_execAddProfileDataChangedDelegate_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayerEx_execAddProfileDataChangedDelegate_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.OnProfileDataChanged
// [0x00120000] 
struct USFXOnlineComponentUnrealPlayerEx_execOnProfileDataChanged_Parms
{

	 USFXOnlineComponentUnrealPlayerEx_execOnProfileDataChanged_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayerEx_execOnProfileDataChanged_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.UnlockGamerPicture
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayerEx_execUnlockGamerPicture_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                PictureId;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentUnrealPlayerEx_execUnlockGamerPicture_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayerEx_execUnlockGamerPicture_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.IsDeviceValid
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayerEx_execIsDeviceValid_Parms
{
	int                                                DeviceID;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SizeNeeded;                                       		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentUnrealPlayerEx_execIsDeviceValid_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayerEx_execIsDeviceValid_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.GetDeviceSelectionResults
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayerEx_execGetDeviceSelectionResults_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    DeviceName; };                                    		// 0x0004 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentUnrealPlayerEx_execGetDeviceSelectionResults_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayerEx_execGetDeviceSelectionResults_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.ClearDeviceSelectionDoneDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayerEx_execClearDeviceSelectionDoneDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FScriptDelegate                     DeviceDelegate; };                                		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]              

	 USFXOnlineComponentUnrealPlayerEx_execClearDeviceSelectionDoneDelegate_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayerEx_execClearDeviceSelectionDoneDelegate_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.AddDeviceSelectionDoneDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayerEx_execAddDeviceSelectionDoneDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FScriptDelegate                     DeviceDelegate; };                                		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             AddIndex;                                         		// 0x0014 (0x0004) [0x0000000000000000]              

	 USFXOnlineComponentUnrealPlayerEx_execAddDeviceSelectionDoneDelegate_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayerEx_execAddDeviceSelectionDoneDelegate_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.OnDeviceSelectionComplete
// [0x00120000] 
struct USFXOnlineComponentUnrealPlayerEx_execOnDeviceSelectionComplete_Parms
{
	unsigned long                                      bWasSuccessful;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineComponentUnrealPlayerEx_execOnDeviceSelectionComplete_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayerEx_execOnDeviceSelectionComplete_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.ShowDeviceSelectionUI
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayerEx_execShowDeviceSelectionUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                SizeNeeded;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bForceShowUI;                                     		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bManageStorage;                                   		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentUnrealPlayerEx_execShowDeviceSelectionUI_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayerEx_execShowDeviceSelectionUI_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.ShowMembershipMarketplaceUI
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayerEx_execShowMembershipMarketplaceUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentUnrealPlayerEx_execShowMembershipMarketplaceUI_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayerEx_execShowMembershipMarketplaceUI_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.ShowContentMarketplaceUI
// [0x00024000] 
struct USFXOnlineComponentUnrealPlayerEx_execShowContentMarketplaceUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                CategoryMask;                                     		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                OfferId;                                          		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentUnrealPlayerEx_execShowContentMarketplaceUI_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayerEx_execShowContentMarketplaceUI_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.ShowInviteUI
// [0x00024000] 
struct USFXOnlineComponentUnrealPlayerEx_execShowInviteUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    InviteText; };                                    		// 0x0004 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentUnrealPlayerEx_execShowInviteUI_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayerEx_execShowInviteUI_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.ShowAchievementsUI
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayerEx_execShowAchievementsUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentUnrealPlayerEx_execShowAchievementsUI_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayerEx_execShowAchievementsUI_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.ShowMessagesUI
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayerEx_execShowMessagesUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentUnrealPlayerEx_execShowMessagesUI_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayerEx_execShowMessagesUI_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.ShowGamerCardUI
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayerEx_execShowGamerCardUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FUniqueNetId                        PlayerID; };                                      		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentUnrealPlayerEx_execShowGamerCardUI_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayerEx_execShowGamerCardUI_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.ShowFeedbackUI
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayerEx_execShowFeedbackUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FUniqueNetId                        PlayerID; };                                      		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentUnrealPlayerEx_execShowFeedbackUI_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayerEx_execShowFeedbackUI_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.OnTick
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentUnrealPlayerEx_execOnTick_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineComponentUnrealPlayerEx_execOnTick_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayerEx_execOnTick_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayerEx_execGetAPIName_Parms
{
	union { struct SFXName                             ReturnValue; };                                   		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentUnrealPlayerEx_execGetAPIName_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayerEx_execGetAPIName_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayerEx_execOnRelease_Parms
{

	 USFXOnlineComponentUnrealPlayerEx_execOnRelease_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayerEx_execOnRelease_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayerEx_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineComponentUnrealPlayerEx_execOnInitialize_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealPlayerEx_execOnInitialize_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.GetTitleFileState
// [0x00020002] 
struct USFXOnlineComponentUnrealSystem_execGetTitleFileState_Parms
{
	union { FString                                    Filename; };                                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      ReturnValue;                                      		// 0x0010 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             FileIndex;                                        		// 0x0014 (0x0004) [0x0000000000000000]              

	 USFXOnlineComponentUnrealSystem_execGetTitleFileState_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealSystem_execGetTitleFileState_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.GetTitleFileContents
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentUnrealSystem_execGetTitleFileContents_Parms
{
	union { FString                                    Filename; };                                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { TArray<unsigned char>                      FileContents; };                                  		// 0x0010 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0020 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentUnrealSystem_execGetTitleFileContents_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealSystem_execGetTitleFileContents_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.ClearReadTitleFileCompleteDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealSystem_execClearReadTitleFileCompleteDelegate_Parms
{
	union { struct FScriptDelegate                     ReadTitleFileCompleteDelegate; };                 		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              

	 USFXOnlineComponentUnrealSystem_execClearReadTitleFileCompleteDelegate_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealSystem_execClearReadTitleFileCompleteDelegate_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.AddReadTitleFileCompleteDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealSystem_execAddReadTitleFileCompleteDelegate_Parms
{
	union { struct FScriptDelegate                     ReadTitleFileCompleteDelegate; };                 		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 USFXOnlineComponentUnrealSystem_execAddReadTitleFileCompleteDelegate_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealSystem_execAddReadTitleFileCompleteDelegate_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.ReadTitleFile
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealSystem_execReadTitleFile_Parms
{
	union { FString                                    FileToRead; };                                    		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentUnrealSystem_execReadTitleFile_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealSystem_execReadTitleFile_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.OnReadTitleFileComplete
// [0x00120000] 
struct USFXOnlineComponentUnrealSystem_execOnReadTitleFileComplete_Parms
{
	unsigned long                                      bWasSuccessful;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    Filename; };                                      		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 USFXOnlineComponentUnrealSystem_execOnReadTitleFileComplete_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealSystem_execOnReadTitleFileComplete_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.ClearStorageDeviceChangeDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealSystem_execClearStorageDeviceChangeDelegate_Parms
{
	union { struct FScriptDelegate                     StorageDeviceChangeDelegate; };                   		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              

	 USFXOnlineComponentUnrealSystem_execClearStorageDeviceChangeDelegate_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealSystem_execClearStorageDeviceChangeDelegate_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.AddStorageDeviceChangeDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealSystem_execAddStorageDeviceChangeDelegate_Parms
{
	union { struct FScriptDelegate                     StorageDeviceChangeDelegate; };                   		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 USFXOnlineComponentUnrealSystem_execAddStorageDeviceChangeDelegate_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealSystem_execAddStorageDeviceChangeDelegate_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.OnStorageDeviceChange
// [0x00120000] 
struct USFXOnlineComponentUnrealSystem_execOnStorageDeviceChange_Parms
{

	 USFXOnlineComponentUnrealSystem_execOnStorageDeviceChange_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealSystem_execOnStorageDeviceChange_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.GetNATType
// [0x00020002] 
struct USFXOnlineComponentUnrealSystem_execGetNATType_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentUnrealSystem_execGetNATType_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealSystem_execGetNATType_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.ClearConnectionStatusChangeDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealSystem_execClearConnectionStatusChangeDelegate_Parms
{
	union { struct FScriptDelegate                     ConnectionStatusDelegate; };                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              

	 USFXOnlineComponentUnrealSystem_execClearConnectionStatusChangeDelegate_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealSystem_execClearConnectionStatusChangeDelegate_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.AddConnectionStatusChangeDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealSystem_execAddConnectionStatusChangeDelegate_Parms
{
	union { struct FScriptDelegate                     ConnectionStatusDelegate; };                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             AddIndex;                                         		// 0x0010 (0x0004) [0x0000000000000000]              

	 USFXOnlineComponentUnrealSystem_execAddConnectionStatusChangeDelegate_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealSystem_execAddConnectionStatusChangeDelegate_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.OnConnectionStatusChange
// [0x00120000] 
struct USFXOnlineComponentUnrealSystem_execOnConnectionStatusChange_Parms
{
	unsigned char                                      ConnectionStatus;                                 		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineComponentUnrealSystem_execOnConnectionStatusChange_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealSystem_execOnConnectionStatusChange_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.IsControllerConnected
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealSystem_execIsControllerConnected_Parms
{
	int                                                ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentUnrealSystem_execIsControllerConnected_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealSystem_execIsControllerConnected_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.ClearControllerChangeDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealSystem_execClearControllerChangeDelegate_Parms
{
	union { struct FScriptDelegate                     ControllerChangeDelegate; };                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              

	 USFXOnlineComponentUnrealSystem_execClearControllerChangeDelegate_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealSystem_execClearControllerChangeDelegate_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.AddControllerChangeDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealSystem_execAddControllerChangeDelegate_Parms
{
	union { struct FScriptDelegate                     ControllerChangeDelegate; };                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             AddIndex;                                         		// 0x0010 (0x0004) [0x0000000000000000]              

	 USFXOnlineComponentUnrealSystem_execAddControllerChangeDelegate_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealSystem_execAddControllerChangeDelegate_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.OnControllerChange
// [0x00120000] 
struct USFXOnlineComponentUnrealSystem_execOnControllerChange_Parms
{
	int                                                ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bIsConnected;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineComponentUnrealSystem_execOnControllerChange_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealSystem_execOnControllerChange_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.SetNetworkNotificationPosition
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealSystem_execSetNetworkNotificationPosition_Parms
{
	unsigned char                                      NewPos;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineComponentUnrealSystem_execSetNetworkNotificationPosition_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealSystem_execSetNetworkNotificationPosition_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.GetNetworkNotificationPosition
// [0x00020002] 
struct USFXOnlineComponentUnrealSystem_execGetNetworkNotificationPosition_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentUnrealSystem_execGetNetworkNotificationPosition_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealSystem_execGetNetworkNotificationPosition_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.ProcessExternalUINotification
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentUnrealSystem_execProcessExternalUINotification_Parms
{
	unsigned long                                      bOpening;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineComponentUnrealSystem_execProcessExternalUINotification_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealSystem_execProcessExternalUINotification_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.ClearExternalUIChangeDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealSystem_execClearExternalUIChangeDelegate_Parms
{
	union { struct FScriptDelegate                     ExternalUIDelegate; };                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              

	 USFXOnlineComponentUnrealSystem_execClearExternalUIChangeDelegate_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealSystem_execClearExternalUIChangeDelegate_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.AddExternalUIChangeDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealSystem_execAddExternalUIChangeDelegate_Parms
{
	union { struct FScriptDelegate                     ExternalUIDelegate; };                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             AddIndex;                                         		// 0x0010 (0x0004) [0x0000000000000000]              

	 USFXOnlineComponentUnrealSystem_execAddExternalUIChangeDelegate_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealSystem_execAddExternalUIChangeDelegate_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.OnExternalUIChange
// [0x00120000] 
struct USFXOnlineComponentUnrealSystem_execOnExternalUIChange_Parms
{
	unsigned long                                      bIsOpening;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineComponentUnrealSystem_execOnExternalUIChange_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealSystem_execOnExternalUIChange_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.ClearLinkStatusChangeDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealSystem_execClearLinkStatusChangeDelegate_Parms
{
	union { struct FScriptDelegate                     LinkStatusDelegate; };                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              

	 USFXOnlineComponentUnrealSystem_execClearLinkStatusChangeDelegate_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealSystem_execClearLinkStatusChangeDelegate_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.AddLinkStatusChangeDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealSystem_execAddLinkStatusChangeDelegate_Parms
{
	union { struct FScriptDelegate                     LinkStatusDelegate; };                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             AddIndex;                                         		// 0x0010 (0x0004) [0x0000000000000000]              

	 USFXOnlineComponentUnrealSystem_execAddLinkStatusChangeDelegate_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealSystem_execAddLinkStatusChangeDelegate_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.OnLinkStatusChange
// [0x00120000] 
struct USFXOnlineComponentUnrealSystem_execOnLinkStatusChange_Parms
{
	unsigned long                                      bIsConnected;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineComponentUnrealSystem_execOnLinkStatusChange_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealSystem_execOnLinkStatusChange_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.HasLinkConnection
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealSystem_execHasLinkConnection_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentUnrealSystem_execHasLinkConnection_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealSystem_execHasLinkConnection_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealSystem_execGetAPIName_Parms
{
	union { struct SFXName                             ReturnValue; };                                   		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentUnrealSystem_execGetAPIName_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealSystem_execGetAPIName_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealSystem_execOnRelease_Parms
{

	 USFXOnlineComponentUnrealSystem_execOnRelease_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealSystem_execOnRelease_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealSystem_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineComponentUnrealSystem_execOnInitialize_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentUnrealSystem_execOnInitialize_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.GetAPIName
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentCoordinator_execGetAPIName_Parms
{
	union { struct SFXName                             ReturnValue; };                                   		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentCoordinator_execGetAPIName_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentCoordinator_execGetAPIName_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.OnRelease
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentCoordinator_execOnRelease_Parms
{

	 USFXOnlineComponentCoordinator_execOnRelease_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentCoordinator_execOnRelease_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.OnInitialize
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentCoordinator_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineComponentCoordinator_execOnInitialize_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentCoordinator_execOnInitialize_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.StopWaitingForAllWork
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentCoordinator_execStopWaitingForAllWork_Parms
{
	class UObject*                                     oCallbackTarget;                                  		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineComponentCoordinator_execStopWaitingForAllWork_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentCoordinator_execStopWaitingForAllWork_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.WaitingForWorkSetObject
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentCoordinator_execWaitingForWorkSetObject_Parms
{
	union { TArray<class USFXOnlineEvent*>             aEventObjects; };                                 		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { struct FScriptDelegate                     fnWorkComplete; };                                		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 USFXOnlineComponentCoordinator_execWaitingForWorkSetObject_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentCoordinator_execWaitingForWorkSetObject_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.WaitingForWorkSetType
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentCoordinator_execWaitingForWorkSetType_Parms
{
	union { TArray<unsigned char>                      aEventTypes; };                                   		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { struct FScriptDelegate                     fnWorkComplete; };                                		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { TArray<int>                                aWorkEventIds; };                                 		// 0x0020 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

	 USFXOnlineComponentCoordinator_execWaitingForWorkSetType_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentCoordinator_execWaitingForWorkSetType_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.WaitingForWorkObject
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentCoordinator_execWaitingForWorkObject_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { struct FScriptDelegate                     fnWorkComplete; };                                		// 0x0008 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 USFXOnlineComponentCoordinator_execWaitingForWorkObject_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentCoordinator_execWaitingForWorkObject_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.WaitingForWorkType
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentCoordinator_execWaitingForWorkType_Parms
{
	unsigned char                                      eEventType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FScriptDelegate                     fnWorkComplete; };                                		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                nEventId;                                         		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 USFXOnlineComponentCoordinator_execWaitingForWorkType_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentCoordinator_execWaitingForWorkType_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.IsEventPending
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentCoordinator_execIsEventPending_Parms
{
	unsigned char                                      eEventType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                nEventId;                                         		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentCoordinator_execIsEventPending_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentCoordinator_execIsEventPending_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.GetEvent
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentCoordinator_execGetEvent_Parms
{
	unsigned char                                      eEventType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                nEventId;                                         		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class USFXOnlineEvent*                             ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentCoordinator_execGetEvent_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentCoordinator_execGetEvent_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.UnsubscribeFromAllEvents
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentCoordinator_execUnsubscribeFromAllEvents_Parms
{
	class UObject*                                     oCallbackTarget;                                  		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineComponentCoordinator_execUnsubscribeFromAllEvents_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentCoordinator_execUnsubscribeFromAllEvents_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.UnsubscribeFromEvent
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentCoordinator_execUnsubscribeFromEvent_Parms
{
	unsigned char                                      eEventType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FScriptDelegate                     fnEventCallback; };                               		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 USFXOnlineComponentCoordinator_execUnsubscribeFromEvent_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentCoordinator_execUnsubscribeFromEvent_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.SubscribeToEvent
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentCoordinator_execSubscribeToEvent_Parms
{
	unsigned char                                      eEventType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FScriptDelegate                     fnEventCallback; };                               		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 USFXOnlineComponentCoordinator_execSubscribeToEvent_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentCoordinator_execSubscribeToEvent_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.NotifyWorkFinishedObject
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentCoordinator_execNotifyWorkFinishedObject_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      eStatusFinished;                                  		// 0x0008 (0x0001) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineComponentCoordinator_execNotifyWorkFinishedObject_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentCoordinator_execNotifyWorkFinishedObject_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.NotifyWorkFinishedType
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentCoordinator_execNotifyWorkFinishedType_Parms
{
	unsigned char                                      eEventType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      eStatusFinished;                                  		// 0x0001 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                nEventId;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineComponentCoordinator_execNotifyWorkFinishedType_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentCoordinator_execNotifyWorkFinishedType_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.NotifyWorkStartedObject
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentCoordinator_execNotifyWorkStartedObject_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      eEventType;                                       		// 0x0008 (0x0001) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineComponentCoordinator_execNotifyWorkStartedObject_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentCoordinator_execNotifyWorkStartedObject_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.NotifyWorkStartedType
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentCoordinator_execNotifyWorkStartedType_Parms
{
	unsigned char                                      eEventType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                nEventId;                                         		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              fTimeOut;                                         		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 USFXOnlineComponentCoordinator_execNotifyWorkStartedType_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentCoordinator_execNotifyWorkStartedType_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.NotifyEventObject
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentCoordinator_execNotifyEventObject_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineComponentCoordinator_execNotifyEventObject_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentCoordinator_execNotifyEventObject_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.NotifyEventType
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentCoordinator_execNotifyEventType_Parms
{
	unsigned char                                      eEventType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      eStatus;                                          		// 0x0001 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      eOutcome;                                         		// 0x0002 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 USFXOnlineComponentCoordinator_execNotifyEventType_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentCoordinator_execNotifyEventType_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.OnTick
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentCoordinator_execOnTick_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineComponentCoordinator_execOnTick_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentCoordinator_execOnTick_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.OnEvent
// [0x00120000] 
struct USFXOnlineComponentCoordinator_execOnEvent_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineComponentCoordinator_execOnEvent_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentCoordinator_execOnEvent_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.Exit
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct USFXOnlineSubsystem_eventExit_Parms
{

	 USFXOnlineSubsystem_eventExit_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineSubsystem_eventExit_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.ShowConsoleRoutedKeyboardUI
// [0x00024102] ( FUNC_Simulated )
struct USFXOnlineSubsystem_execShowConsoleRoutedKeyboardUI_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    sTitleText; };                                    		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { FString                                    sDescriptionText; };                              		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bIsPassword;                                      		// 0x0024 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bShouldValidate;                                  		// 0x0028 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	union { FString                                    sDefaultText; };                                  		// 0x002C (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	int                                                nMaxResultLength;                                 		// 0x003C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0040 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineSubsystem_execShowConsoleRoutedKeyboardUI_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineSubsystem_execShowConsoleRoutedKeyboardUI_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.ShowKeyboardUI
// [0x00024002] 
struct USFXOnlineSubsystem_execShowKeyboardUI_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    sTitleText; };                                    		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { FString                                    sDescriptionText; };                              		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bIsPassword;                                      		// 0x0024 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bShouldValidate;                                  		// 0x0028 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	union { FString                                    sDefaultText; };                                  		// 0x002C (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	int                                                nMaxResultLength;                                 		// 0x003C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0040 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineSubsystem_execShowKeyboardUI_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineSubsystem_execShowKeyboardUI_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.FormatTime
// [0x00044401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execFormatTime_Parms
{
	float                                              fInSeconds;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bShowHours;                                       		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bShowMins;                                        		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	union { FString                                    ReturnValue; };                                   		// 0x000C (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

	 USFXOnlineSubsystem_execFormatTime_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineSubsystem_execFormatTime_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.CheckEntitlement
// [0x00020002] 
struct USFXOnlineSubsystem_execCheckEntitlement_Parms
{
	union { FString                                    sGroup; };                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { FString                                    sTag; };                                          		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0020 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineSubsystem_execCheckEntitlement_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineSubsystem_execCheckEntitlement_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.IsCerberusMember
// [0x00020002] 
struct USFXOnlineSubsystem_execIsCerberusMember_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineSubsystem_execIsCerberusMember_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineSubsystem_execIsCerberusMember_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetUniqueIdFromConnection
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetUniqueIdFromConnection_Parms
{
	class APlayerReplicationInfo*                      oPRI;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { struct FUniqueNetId                        ReturnValue; };                                   		// 0x0008 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineSubsystem_execGetUniqueIdFromConnection_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineSubsystem_execGetUniqueIdFromConnection_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.MD5HashString
// [0x00020400] ( FUNC_Native )
struct USFXOnlineSubsystem_execMD5HashString_Parms
{
	union { FString                                    InStr; };                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { FString                                    ReturnValue; };                                   		// 0x0010 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

	 USFXOnlineSubsystem_execMD5HashString_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineSubsystem_execMD5HashString_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetProjectID
// [0x00020400] ( FUNC_Native )
struct USFXOnlineSubsystem_execGetProjectID_Parms
{
	union { FString                                    ReturnValue; };                                   		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

	 USFXOnlineSubsystem_execGetProjectID_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineSubsystem_execGetProjectID_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetCDKey
// [0x00020400] ( FUNC_Native )
struct USFXOnlineSubsystem_execGetCDKey_Parms
{
	union { FString                                    ReturnValue; };                                   		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

	 USFXOnlineSubsystem_execGetCDKey_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineSubsystem_execGetCDKey_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetLanguage
// [0x00020400] ( FUNC_Native )
struct USFXOnlineSubsystem_execGetLanguage_Parms
{
	union { FString                                    ReturnValue; };                                   		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

	 USFXOnlineSubsystem_execGetLanguage_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineSubsystem_execGetLanguage_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetPlatform
// [0x00020400] ( FUNC_Native )
struct USFXOnlineSubsystem_execGetPlatform_Parms
{
	union { struct SFXName                             ReturnValue; };                                   		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineSubsystem_execGetPlatform_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineSubsystem_execGetPlatform_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.ShutDown
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct USFXOnlineSubsystem_eventShutDown_Parms
{

	 USFXOnlineSubsystem_eventShutDown_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineSubsystem_eventShutDown_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.NativeInit
// [0x00020400] ( FUNC_Native )
struct USFXOnlineSubsystem_execNativeInit_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineSubsystem_execNativeInit_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineSubsystem_execNativeInit_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetGameListenPort
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetGameListenPort_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineSubsystem_execGetGameListenPort_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineSubsystem_execGetGameListenPort_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetReserveTimeout
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetReserveTimeout_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineSubsystem_execGetReserveTimeout_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineSubsystem_execGetReserveTimeout_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetMaxObserverCount
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetMaxObserverCount_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineSubsystem_execGetMaxObserverCount_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineSubsystem_execGetMaxObserverCount_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetMaxPlayerCount
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetMaxPlayerCount_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineSubsystem_execGetMaxPlayerCount_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineSubsystem_execGetMaxPlayerCount_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.SetMaxPlayerCount
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execSetMaxPlayerCount_Parms
{
	int                                                nMaxPlayers;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineSubsystem_execSetMaxPlayerCount_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineSubsystem_execSetMaxPlayerCount_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetGameProtocolVersion
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetGameProtocolVersion_Parms
{
	union { FString                                    ReturnValue; };                                   		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

	 USFXOnlineSubsystem_execGetGameProtocolVersion_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineSubsystem_execGetGameProtocolVersion_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetComponentOrigin
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetComponentOrigin_Parms
{
	class USFXOnlineComponentOrigin*                   ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineSubsystem_execGetComponentOrigin_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineSubsystem_execGetComponentOrigin_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetComponentUnrealPlayerEx
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetComponentUnrealPlayerEx_Parms
{
	class USFXOnlineComponentUnrealPlayerEx*           ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineSubsystem_execGetComponentUnrealPlayerEx_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineSubsystem_execGetComponentUnrealPlayerEx_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetComponentUnrealPlayer
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetComponentUnrealPlayer_Parms
{
	class USFXOnlineComponentUnrealPlayer*             ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineSubsystem_execGetComponentUnrealPlayer_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineSubsystem_execGetComponentUnrealPlayer_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetComponentUnrealSystem
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetComponentUnrealSystem_Parms
{
	class USFXOnlineComponentUnrealSystem*             ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineSubsystem_execGetComponentUnrealSystem_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineSubsystem_execGetComponentUnrealSystem_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetCoordinator
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetCoordinator_Parms
{
	class USFXOnlineComponentCoordinator*              ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineSubsystem_execGetCoordinator_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineSubsystem_execGetCoordinator_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetComponentTelemetry
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetComponentTelemetry_Parms
{
	class UISFXOnlineComponentTelemetry*               ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineSubsystem_execGetComponentTelemetry_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineSubsystem_execGetComponentTelemetry_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetComponentNotification
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetComponentNotification_Parms
{
	class UISFXOnlineComponentNotification*            ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineSubsystem_execGetComponentNotification_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineSubsystem_execGetComponentNotification_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetComponentUserInterface
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetComponentUserInterface_Parms
{
	class UISFXOnlineComponentUserInterface*           ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineSubsystem_execGetComponentUserInterface_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineSubsystem_execGetComponentUserInterface_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetComponentLogin
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetComponentLogin_Parms
{
	class UISFXOnlineComponentLogin*                   ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineSubsystem_execGetComponentLogin_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineSubsystem_execGetComponentLogin_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetComponentAPI
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetComponentAPI_Parms
{
	class UISFXOnlineComponentAPI*                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineSubsystem_execGetComponentAPI_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineSubsystem_execGetComponentAPI_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetComponentAchievement
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetComponentAchievement_Parms
{
	class UISFXOnlineComponentAchievement*             ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineSubsystem_execGetComponentAchievement_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineSubsystem_execGetComponentAchievement_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetComponentPlatform
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetComponentPlatform_Parms
{
	class UISFXOnlineComponentPlatform*                ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineSubsystem_execGetComponentPlatform_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineSubsystem_execGetComponentPlatform_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetOnlineSubsystem
// [0x00022400] ( FUNC_Native )
struct USFXOnlineSubsystem_execGetOnlineSubsystem_Parms
{
	class USFXOnlineSubsystem*                         ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineSubsystem_execGetOnlineSubsystem_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineSubsystem_execGetOnlineSubsystem_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.StripBadPWCharacters
// [0x00080002] 
struct USFXOnlineSubsystem_execStripBadPWCharacters_Parms
{
	union { FString                                    sPassword; };                                     		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { FString                                    ReturnValue; };                                   		// 0x0010 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// union { FString                                 sStrippedPassword; };                             		// 0x0020 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             nIndex;                                           		// 0x0030 (0x0004) [0x0000000000000000]              
	// union { FString                                 sBuffer; };                                       		// 0x0034 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

	 USFXOnlineSubsystem_execStripBadPWCharacters_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineSubsystem_execStripBadPWCharacters_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetURL
// [0x00020902] ( FUNC_Simulated | FUNC_Event )
struct USFXOnlineSubsystem_eventGetURL_Parms
{
	union { FString                                    ReturnValue; };                                   		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// union { FString                                 sURL; };                                          		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

	 USFXOnlineSubsystem_eventGetURL_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineSubsystem_eventGetURL_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.SetUnrealInterfaces
// [0x00040003] ( FUNC_Final )
struct USFXOnlineSubsystem_execSetUnrealInterfaces_Parms
{

	 USFXOnlineSubsystem_execSetUnrealInterfaces_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineSubsystem_execSetUnrealInterfaces_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.CreateComponents
// [0x00040003] ( FUNC_Final )
struct USFXOnlineSubsystem_execCreateComponents_Parms
{
	// union { struct SFXName                          nmPlatformName; };                                		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             nComponentIndex;                                  		// 0x0008 (0x0004) [0x0000000000000000]              

	 USFXOnlineSubsystem_execCreateComponents_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineSubsystem_execCreateComponents_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.InitGameProtocolVersion
// [0x00040001] ( FUNC_Final )
struct USFXOnlineSubsystem_execInitGameProtocolVersion_Parms
{

	 USFXOnlineSubsystem_execInitGameProtocolVersion_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineSubsystem_execInitGameProtocolVersion_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.Init
// [0x00020802] ( FUNC_Event )
struct USFXOnlineSubsystem_eventInit_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineSubsystem_eventInit_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineSubsystem_eventInit_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetAchievementList
// [0x00020002] 
struct USFXOnlineSubsystem_execGetAchievementList_Parms
{
	union { TArray<struct FSFXOnlineAchievement>       ReturnValue; };                                   		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

	 USFXOnlineSubsystem_execGetAchievementList_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineSubsystem_execGetAchievementList_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementPC.GetTitleAchievementID
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentAchievementPC_execGetTitleAchievementID_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SetIndex;                                         		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentAchievementPC_execGetTitleAchievementID_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentAchievementPC_execGetTitleAchievementID_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementPC.GetPlatformAchievementID
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentAchievementPC_execGetPlatformAchievementID_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SetIndex;                                         		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentAchievementPC_execGetPlatformAchievementID_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentAchievementPC_execGetPlatformAchievementID_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementPC.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentAchievementPC_execGetAPIName_Parms
{
	union { struct SFXName                             ReturnValue; };                                   		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentAchievementPC_execGetAPIName_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentAchievementPC_execGetAPIName_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementPC.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentAchievementPC_execOnRelease_Parms
{

	 USFXOnlineComponentAchievementPC_execOnRelease_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentAchievementPC_execOnRelease_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementPC.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentAchievementPC_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineComponentAchievementPC_execOnInitialize_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentAchievementPC_execOnInitialize_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementPC.IsGranted
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentAchievementPC_execIsGranted_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                AchievementId;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentAchievementPC_execIsGranted_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentAchievementPC_execIsGranted_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementPC.Grant
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentAchievementPC_execGrant_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                AchievementId;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineComponentAchievementPC_execGrant_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentAchievementPC_execGrant_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.GetRebootUserData
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execGetRebootUserData_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformPC_execGetRebootUserData_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformPC_execGetRebootUserData_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.WasRebootedFromOSCodeRedemptionUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execWasRebootedFromOSCodeRedemptionUI_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformPC_execWasRebootedFromOSCodeRedemptionUI_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformPC_execWasRebootedFromOSCodeRedemptionUI_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.ShowCodeRedemptionUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execShowCodeRedemptionUI_Parms
{
	int                                                UserData;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformPC_execShowCodeRedemptionUI_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformPC_execShowCodeRedemptionUI_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.ShowStoreUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execShowStoreUI_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformPC_execShowStoreUI_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformPC_execShowStoreUI_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.GetOnlineXuid
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execGetOnlineXuid_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { struct FUniqueNetId                        oPlayerXuid; };                                   		// 0x0004 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformPC_execGetOnlineXuid_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformPC_execGetOnlineXuid_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.GetOfflineXuid
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execGetOfflineXuid_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { struct FUniqueNetId                        oPlayerXuid; };                                   		// 0x0004 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformPC_execGetOfflineXuid_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformPC_execGetOfflineXuid_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.ShowKeyboardUI
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execShowKeyboardUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    sTitleText; };                                    		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { FString                                    sDescriptionText; };                              		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      nKeyboardType;                                    		// 0x0024 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bShouldValidate;                                  		// 0x0028 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bRouteThroughConsole;                             		// 0x002C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	union { FString                                    sDefaultText; };                                  		// 0x0030 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	int                                                nMaxResultLength;                                 		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0044 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformPC_execShowKeyboardUI_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformPC_execShowKeyboardUI_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.ShowFriendsInviteUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execShowFriendsInviteUI_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FUniqueNetId                        oPlayerXuid; };                                   		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformPC_execShowFriendsInviteUI_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformPC_execShowFriendsInviteUI_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.ShowFriendsUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execShowFriendsUI_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformPC_execShowFriendsUI_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformPC_execShowFriendsUI_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.ShowAchievementsUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execShowAchievementsUI_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformPC_execShowAchievementsUI_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformPC_execShowAchievementsUI_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.ShowFeedbackUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execShowFeedbackUI_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FUniqueNetId                        oPlayerId; };                                     		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformPC_execShowFeedbackUI_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformPC_execShowFeedbackUI_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.ShowGamerCardUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execShowGamerCardUI_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FUniqueNetId                        oPlayerId; };                                     		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformPC_execShowGamerCardUI_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformPC_execShowGamerCardUI_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.CanShowPresenceInformation
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execCanShowPresenceInformation_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformPC_execCanShowPresenceInformation_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformPC_execCanShowPresenceInformation_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.CanViewPlayerProfiles
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execCanViewPlayerProfiles_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformPC_execCanViewPlayerProfiles_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformPC_execCanViewPlayerProfiles_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.CanPurchaseContent
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execCanPurchaseContent_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformPC_execCanPurchaseContent_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformPC_execCanPurchaseContent_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.CanDownloadUserContent
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execCanDownloadUserContent_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformPC_execCanDownloadUserContent_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformPC_execCanDownloadUserContent_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.CanCommunicate
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execCanCommunicate_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformPC_execCanCommunicate_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformPC_execCanCommunicate_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.CanPlayOnline
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execCanPlayOnline_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformPC_execCanPlayOnline_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformPC_execCanPlayOnline_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.SetRichPresence
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execSetRichPresence_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPresenceMode;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { TArray<struct FLocalizedStringSetting>     aLocalizedStringSettings; };                      		// 0x0008 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	union { TArray<struct FSettingsProperty>           aProperties; };                                   		// 0x0018 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

	 USFXOnlineComponentPlatformPC_execSetRichPresence_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformPC_execSetRichPresence_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.ShowLoginUI
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execShowLoginUI_Parms
{
	unsigned long                                      bShowOnlineOnly;                                  		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformPC_execShowLoginUI_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformPC_execShowLoginUI_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.GetLoginStatus
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execGetLoginStatus_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformPC_execGetLoginStatus_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformPC_execGetLoginStatus_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.AddRecentPlayer
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execAddRecentPlayer_Parms
{
	union { struct FUniqueNetId                        oPlayerId; };                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    sDescription; };                                  		// 0x0008 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformPC_execAddRecentPlayer_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformPC_execAddRecentPlayer_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execGetAPIName_Parms
{
	union { struct SFXName                             ReturnValue; };                                   		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformPC_execGetAPIName_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformPC_execGetAPIName_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execOnRelease_Parms
{

	 USFXOnlineComponentPlatformPC_execOnRelease_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformPC_execOnRelease_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineComponentPlatformPC_execOnInitialize_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformPC_execOnInitialize_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementXenon.GetTitleAchievementID
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentAchievementXenon_execGetTitleAchievementID_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SetIndex;                                         		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentAchievementXenon_execGetTitleAchievementID_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentAchievementXenon_execGetTitleAchievementID_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementXenon.GetPlatformAchievementID
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentAchievementXenon_execGetPlatformAchievementID_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SetIndex;                                         		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentAchievementXenon_execGetPlatformAchievementID_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentAchievementXenon_execGetPlatformAchievementID_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementXenon.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentAchievementXenon_execGetAPIName_Parms
{
	union { struct SFXName                             ReturnValue; };                                   		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentAchievementXenon_execGetAPIName_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentAchievementXenon_execGetAPIName_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementXenon.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentAchievementXenon_execOnRelease_Parms
{

	 USFXOnlineComponentAchievementXenon_execOnRelease_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentAchievementXenon_execOnRelease_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementXenon.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentAchievementXenon_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineComponentAchievementXenon_execOnInitialize_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentAchievementXenon_execOnInitialize_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementXenon.IsGranted
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentAchievementXenon_execIsGranted_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                AchievementId;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentAchievementXenon_execIsGranted_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentAchievementXenon_execIsGranted_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementXenon.Grant
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentAchievementXenon_execGrant_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                AchievementId;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineComponentAchievementXenon_execGrant_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentAchievementXenon_execGrant_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.GetRebootUserData
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execGetRebootUserData_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformXenon_execGetRebootUserData_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformXenon_execGetRebootUserData_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.WasRebootedFromOSCodeRedemptionUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execWasRebootedFromOSCodeRedemptionUI_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformXenon_execWasRebootedFromOSCodeRedemptionUI_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformXenon_execWasRebootedFromOSCodeRedemptionUI_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.ShowCodeRedemptionUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execShowCodeRedemptionUI_Parms
{
	int                                                UserData;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformXenon_execShowCodeRedemptionUI_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformXenon_execShowCodeRedemptionUI_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.ShowStoreUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execShowStoreUI_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformXenon_execShowStoreUI_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformXenon_execShowStoreUI_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.GetOnlineXuid
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execGetOnlineXuid_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { struct FUniqueNetId                        oPlayerXuid; };                                   		// 0x0004 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformXenon_execGetOnlineXuid_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformXenon_execGetOnlineXuid_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.GetOfflineXuid
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execGetOfflineXuid_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { struct FUniqueNetId                        oPlayerXuid; };                                   		// 0x0004 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformXenon_execGetOfflineXuid_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformXenon_execGetOfflineXuid_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.ShowKeyboardUI
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execShowKeyboardUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    sTitleText; };                                    		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { FString                                    sDescriptionText; };                              		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      nKeyboardType;                                    		// 0x0024 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bShouldValidate;                                  		// 0x0028 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bRouteThroughConsole;                             		// 0x002C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	union { FString                                    sDefaultText; };                                  		// 0x0030 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	int                                                nMaxResultLength;                                 		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0044 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformXenon_execShowKeyboardUI_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformXenon_execShowKeyboardUI_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.ShowFriendsInviteUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execShowFriendsInviteUI_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FUniqueNetId                        oPlayerXuid; };                                   		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformXenon_execShowFriendsInviteUI_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformXenon_execShowFriendsInviteUI_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.ShowFriendsUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execShowFriendsUI_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformXenon_execShowFriendsUI_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformXenon_execShowFriendsUI_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.ShowAchievementsUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execShowAchievementsUI_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformXenon_execShowAchievementsUI_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformXenon_execShowAchievementsUI_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.ShowFeedbackUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execShowFeedbackUI_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FUniqueNetId                        oPlayerXuid; };                                   		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformXenon_execShowFeedbackUI_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformXenon_execShowFeedbackUI_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.ShowGamerCardUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execShowGamerCardUI_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FUniqueNetId                        oPlayerXuid; };                                   		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformXenon_execShowGamerCardUI_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformXenon_execShowGamerCardUI_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.CanShowPresenceInformation
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execCanShowPresenceInformation_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformXenon_execCanShowPresenceInformation_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformXenon_execCanShowPresenceInformation_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.CanViewPlayerProfiles
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execCanViewPlayerProfiles_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformXenon_execCanViewPlayerProfiles_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformXenon_execCanViewPlayerProfiles_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.CanPurchaseContent
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execCanPurchaseContent_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformXenon_execCanPurchaseContent_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformXenon_execCanPurchaseContent_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.CanDownloadUserContent
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execCanDownloadUserContent_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformXenon_execCanDownloadUserContent_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformXenon_execCanDownloadUserContent_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.CanCommunicate
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execCanCommunicate_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformXenon_execCanCommunicate_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformXenon_execCanCommunicate_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.CanPlayOnline
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execCanPlayOnline_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformXenon_execCanPlayOnline_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformXenon_execCanPlayOnline_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.SetRichPresence
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execSetRichPresence_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPresenceMode;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { TArray<struct FLocalizedStringSetting>     aLocalizedStringSettings; };                      		// 0x0008 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	union { TArray<struct FSettingsProperty>           aProperties; };                                   		// 0x0018 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

	 USFXOnlineComponentPlatformXenon_execSetRichPresence_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformXenon_execSetRichPresence_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.ShowLoginUI
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execShowLoginUI_Parms
{
	unsigned long                                      bShowOnlineOnly;                                  		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformXenon_execShowLoginUI_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformXenon_execShowLoginUI_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.GetLoginStatus
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execGetLoginStatus_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformXenon_execGetLoginStatus_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformXenon_execGetLoginStatus_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.TickAsyncTasks
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execTickAsyncTasks_Parms
{

	 USFXOnlineComponentPlatformXenon_execTickAsyncTasks_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformXenon_execTickAsyncTasks_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.OnTick
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execOnTick_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineComponentPlatformXenon_execOnTick_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformXenon_execOnTick_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.AddRecentPlayer
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execAddRecentPlayer_Parms
{
	union { struct FUniqueNetId                        oPlayerId; };                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    sDescription; };                                  		// 0x0008 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformXenon_execAddRecentPlayer_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformXenon_execAddRecentPlayer_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execGetAPIName_Parms
{
	union { struct SFXName                             ReturnValue; };                                   		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformXenon_execGetAPIName_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformXenon_execGetAPIName_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execOnRelease_Parms
{

	 USFXOnlineComponentPlatformXenon_execOnRelease_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformXenon_execOnRelease_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineComponentPlatformXenon_execOnInitialize_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformXenon_execOnInitialize_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementPS3.GetTitleAchievementID
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentAchievementPS3_execGetTitleAchievementID_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SetIndex;                                         		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentAchievementPS3_execGetTitleAchievementID_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentAchievementPS3_execGetTitleAchievementID_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementPS3.GetPlatformAchievementID
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentAchievementPS3_execGetPlatformAchievementID_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SetIndex;                                         		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentAchievementPS3_execGetPlatformAchievementID_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentAchievementPS3_execGetPlatformAchievementID_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementPS3.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentAchievementPS3_execGetAPIName_Parms
{
	union { struct SFXName                             ReturnValue; };                                   		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentAchievementPS3_execGetAPIName_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentAchievementPS3_execGetAPIName_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementPS3.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentAchievementPS3_execOnRelease_Parms
{

	 USFXOnlineComponentAchievementPS3_execOnRelease_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentAchievementPS3_execOnRelease_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementPS3.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentAchievementPS3_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineComponentAchievementPS3_execOnInitialize_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentAchievementPS3_execOnInitialize_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementPS3.IsGranted
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentAchievementPS3_execIsGranted_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                AchievementId;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentAchievementPS3_execIsGranted_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentAchievementPS3_execIsGranted_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementPS3.Grant
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentAchievementPS3_execGrant_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                AchievementId;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineComponentAchievementPS3_execGrant_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentAchievementPS3_execGrant_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.ShowLoginUIEx
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execShowLoginUIEx_Parms
{
	union { struct FScriptDelegate                     funcSignInComplete; };                            		// 0x0000 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformPS3_execShowLoginUIEx_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformPS3_execShowLoginUIEx_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.OnSignInComplete
// [0x00120000] 
struct USFXOnlineComponentPlatformPS3_execOnSignInComplete_Parms
{
	unsigned long                                      bSignedIn;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineComponentPlatformPS3_execOnSignInComplete_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformPS3_execOnSignInComplete_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.GetRebootUserData
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execGetRebootUserData_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformPS3_execGetRebootUserData_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformPS3_execGetRebootUserData_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.WasRebootedFromOSCodeRedemptionUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execWasRebootedFromOSCodeRedemptionUI_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformPS3_execWasRebootedFromOSCodeRedemptionUI_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformPS3_execWasRebootedFromOSCodeRedemptionUI_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.ShowCodeRedemptionUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execShowCodeRedemptionUI_Parms
{
	int                                                UserData;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformPS3_execShowCodeRedemptionUI_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformPS3_execShowCodeRedemptionUI_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.ShowStoreUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execShowStoreUI_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformPS3_execShowStoreUI_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformPS3_execShowStoreUI_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.GetOnlineXuid
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execGetOnlineXuid_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { struct FUniqueNetId                        oPlayerXuid; };                                   		// 0x0004 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformPS3_execGetOnlineXuid_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformPS3_execGetOnlineXuid_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.GetOfflineXuid
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execGetOfflineXuid_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { struct FUniqueNetId                        oPlayerXuid; };                                   		// 0x0004 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformPS3_execGetOfflineXuid_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformPS3_execGetOfflineXuid_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.ShowKeyboardUI
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execShowKeyboardUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    sTitleText; };                                    		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { FString                                    sDescriptionText; };                              		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      nKeyboardType;                                    		// 0x0024 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bShouldValidate;                                  		// 0x0028 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bRouteThroughConsole;                             		// 0x002C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	union { FString                                    sDefaultText; };                                  		// 0x0030 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	int                                                nMaxResultLength;                                 		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0044 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformPS3_execShowKeyboardUI_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformPS3_execShowKeyboardUI_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.ShowFriendsInviteUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execShowFriendsInviteUI_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FUniqueNetId                        oPlayerXuid; };                                   		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformPS3_execShowFriendsInviteUI_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformPS3_execShowFriendsInviteUI_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.ShowFriendsUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execShowFriendsUI_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformPS3_execShowFriendsUI_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformPS3_execShowFriendsUI_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.ShowAchievementsUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execShowAchievementsUI_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformPS3_execShowAchievementsUI_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformPS3_execShowAchievementsUI_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.ShowFeedbackUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execShowFeedbackUI_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FUniqueNetId                        oPlayerId; };                                     		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformPS3_execShowFeedbackUI_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformPS3_execShowFeedbackUI_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.ShowGamerCardUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execShowGamerCardUI_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FUniqueNetId                        oPlayerId; };                                     		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformPS3_execShowGamerCardUI_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformPS3_execShowGamerCardUI_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.CanShowPresenceInformation
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execCanShowPresenceInformation_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformPS3_execCanShowPresenceInformation_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformPS3_execCanShowPresenceInformation_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.CanViewPlayerProfiles
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execCanViewPlayerProfiles_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformPS3_execCanViewPlayerProfiles_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformPS3_execCanViewPlayerProfiles_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.CanPurchaseContent
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execCanPurchaseContent_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformPS3_execCanPurchaseContent_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformPS3_execCanPurchaseContent_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.CanDownloadUserContent
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execCanDownloadUserContent_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformPS3_execCanDownloadUserContent_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformPS3_execCanDownloadUserContent_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.CanCommunicate
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execCanCommunicate_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformPS3_execCanCommunicate_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformPS3_execCanCommunicate_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.CanPlayOnline
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execCanPlayOnline_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformPS3_execCanPlayOnline_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformPS3_execCanPlayOnline_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.SetRichPresence
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execSetRichPresence_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPresenceMode;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { TArray<struct FLocalizedStringSetting>     aLocalizedStringSettings; };                      		// 0x0008 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	union { TArray<struct FSettingsProperty>           aProperties; };                                   		// 0x0018 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

	 USFXOnlineComponentPlatformPS3_execSetRichPresence_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformPS3_execSetRichPresence_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.ShowLoginUI
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execShowLoginUI_Parms
{
	unsigned long                                      bShowOnlineOnly;                                  		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformPS3_execShowLoginUI_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformPS3_execShowLoginUI_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.GetLoginStatus
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execGetLoginStatus_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformPS3_execGetLoginStatus_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformPS3_execGetLoginStatus_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.AddRecentPlayer
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execAddRecentPlayer_Parms
{
	union { struct FUniqueNetId                        oPlayerId; };                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    sDescription; };                                  		// 0x0008 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformPS3_execAddRecentPlayer_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformPS3_execAddRecentPlayer_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.OnKeyboardUI
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execOnKeyboardUI_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineComponentPlatformPS3_execOnKeyboardUI_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformPS3_execOnKeyboardUI_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.OnTick
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execOnTick_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineComponentPlatformPS3_execOnTick_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformPS3_execOnTick_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execGetAPIName_Parms
{
	union { struct SFXName                             ReturnValue; };                                   		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformPS3_execGetAPIName_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformPS3_execGetAPIName_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execOnRelease_Parms
{

	 USFXOnlineComponentPlatformPS3_execOnRelease_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformPS3_execOnRelease_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineComponentPlatformPS3_execOnInitialize_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformPS3_execOnInitialize_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementDingo.GetTitleAchievementID
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentAchievementDingo_execGetTitleAchievementID_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SetIndex;                                         		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentAchievementDingo_execGetTitleAchievementID_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentAchievementDingo_execGetTitleAchievementID_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementDingo.GetPlatformAchievementID
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentAchievementDingo_execGetPlatformAchievementID_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SetIndex;                                         		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentAchievementDingo_execGetPlatformAchievementID_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentAchievementDingo_execGetPlatformAchievementID_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementDingo.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentAchievementDingo_execGetAPIName_Parms
{
	union { struct SFXName                             ReturnValue; };                                   		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentAchievementDingo_execGetAPIName_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentAchievementDingo_execGetAPIName_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementDingo.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentAchievementDingo_execOnRelease_Parms
{

	 USFXOnlineComponentAchievementDingo_execOnRelease_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentAchievementDingo_execOnRelease_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementDingo.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentAchievementDingo_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineComponentAchievementDingo_execOnInitialize_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentAchievementDingo_execOnInitialize_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementDingo.IsGranted
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentAchievementDingo_execIsGranted_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                AchievementId;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentAchievementDingo_execIsGranted_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentAchievementDingo_execIsGranted_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementDingo.Grant
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentAchievementDingo_execGrant_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                AchievementId;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineComponentAchievementDingo_execGrant_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentAchievementDingo_execGrant_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.OnTick
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execOnTick_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineComponentPlatformDingo_execOnTick_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformDingo_execOnTick_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.OnKeyboardUIClosed
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execOnKeyboardUIClosed_Parms
{
	unsigned long                                      Success;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    InputBuffer; };                                   		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 USFXOnlineComponentPlatformDingo_execOnKeyboardUIClosed_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformDingo_execOnKeyboardUIClosed_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.GetRebootUserData
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execGetRebootUserData_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformDingo_execGetRebootUserData_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformDingo_execGetRebootUserData_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.WasRebootedFromOSCodeRedemptionUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execWasRebootedFromOSCodeRedemptionUI_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformDingo_execWasRebootedFromOSCodeRedemptionUI_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformDingo_execWasRebootedFromOSCodeRedemptionUI_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.ShowCodeRedemptionUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execShowCodeRedemptionUI_Parms
{
	int                                                UserData;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformDingo_execShowCodeRedemptionUI_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformDingo_execShowCodeRedemptionUI_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.ShowStoreUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execShowStoreUI_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformDingo_execShowStoreUI_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformDingo_execShowStoreUI_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.GetOnlineXuid
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execGetOnlineXuid_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { struct FUniqueNetId                        oPlayerXuid; };                                   		// 0x0004 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformDingo_execGetOnlineXuid_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformDingo_execGetOnlineXuid_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.GetOfflineXuid
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execGetOfflineXuid_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { struct FUniqueNetId                        oPlayerXuid; };                                   		// 0x0004 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformDingo_execGetOfflineXuid_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformDingo_execGetOfflineXuid_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.ShowKeyboardUI
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execShowKeyboardUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    sTitleText; };                                    		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { FString                                    sDescriptionText; };                              		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      nKeyboardType;                                    		// 0x0024 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bShouldValidate;                                  		// 0x0028 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bRouteThroughConsole;                             		// 0x002C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	union { FString                                    sDefaultText; };                                  		// 0x0030 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	int                                                nMaxResultLength;                                 		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0044 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformDingo_execShowKeyboardUI_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformDingo_execShowKeyboardUI_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.ShowFriendsInviteUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execShowFriendsInviteUI_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FUniqueNetId                        oPlayerXuid; };                                   		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformDingo_execShowFriendsInviteUI_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformDingo_execShowFriendsInviteUI_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.ShowFriendsUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execShowFriendsUI_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformDingo_execShowFriendsUI_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformDingo_execShowFriendsUI_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.ShowAchievementsUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execShowAchievementsUI_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformDingo_execShowAchievementsUI_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformDingo_execShowAchievementsUI_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.ShowFeedbackUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execShowFeedbackUI_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FUniqueNetId                        oPlayerId; };                                     		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformDingo_execShowFeedbackUI_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformDingo_execShowFeedbackUI_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.ShowGamerCardUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execShowGamerCardUI_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FUniqueNetId                        oPlayerId; };                                     		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformDingo_execShowGamerCardUI_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformDingo_execShowGamerCardUI_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.CanShowPresenceInformation
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execCanShowPresenceInformation_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformDingo_execCanShowPresenceInformation_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformDingo_execCanShowPresenceInformation_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.CanViewPlayerProfiles
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execCanViewPlayerProfiles_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformDingo_execCanViewPlayerProfiles_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformDingo_execCanViewPlayerProfiles_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.CanPurchaseContent
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execCanPurchaseContent_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformDingo_execCanPurchaseContent_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformDingo_execCanPurchaseContent_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.CanDownloadUserContent
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execCanDownloadUserContent_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformDingo_execCanDownloadUserContent_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformDingo_execCanDownloadUserContent_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.CanCommunicate
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execCanCommunicate_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformDingo_execCanCommunicate_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformDingo_execCanCommunicate_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.CanPlayOnline
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execCanPlayOnline_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformDingo_execCanPlayOnline_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformDingo_execCanPlayOnline_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.SetRichPresence
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execSetRichPresence_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPresenceMode;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { TArray<struct FLocalizedStringSetting>     aLocalizedStringSettings; };                      		// 0x0008 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	union { TArray<struct FSettingsProperty>           aProperties; };                                   		// 0x0018 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

	 USFXOnlineComponentPlatformDingo_execSetRichPresence_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformDingo_execSetRichPresence_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.ShowLoginUI
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execShowLoginUI_Parms
{
	unsigned long                                      bShowOnlineOnly;                                  		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformDingo_execShowLoginUI_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformDingo_execShowLoginUI_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.GetLoginStatus
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execGetLoginStatus_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformDingo_execGetLoginStatus_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformDingo_execGetLoginStatus_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.AddRecentPlayer
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execAddRecentPlayer_Parms
{
	union { struct FUniqueNetId                        oPlayerId; };                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    sDescription; };                                  		// 0x0008 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformDingo_execAddRecentPlayer_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformDingo_execAddRecentPlayer_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execGetAPIName_Parms
{
	union { struct SFXName                             ReturnValue; };                                   		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformDingo_execGetAPIName_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformDingo_execGetAPIName_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execOnRelease_Parms
{

	 USFXOnlineComponentPlatformDingo_execOnRelease_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformDingo_execOnRelease_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineComponentPlatformDingo_execOnInitialize_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformDingo_execOnInitialize_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementOrbis.GetTitleAchievementID
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentAchievementOrbis_execGetTitleAchievementID_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SetIndex;                                         		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentAchievementOrbis_execGetTitleAchievementID_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentAchievementOrbis_execGetTitleAchievementID_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementOrbis.GetPlatformAchievementID
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentAchievementOrbis_execGetPlatformAchievementID_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SetIndex;                                         		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentAchievementOrbis_execGetPlatformAchievementID_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentAchievementOrbis_execGetPlatformAchievementID_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementOrbis.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentAchievementOrbis_execGetAPIName_Parms
{
	union { struct SFXName                             ReturnValue; };                                   		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentAchievementOrbis_execGetAPIName_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentAchievementOrbis_execGetAPIName_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementOrbis.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentAchievementOrbis_execOnRelease_Parms
{

	 USFXOnlineComponentAchievementOrbis_execOnRelease_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentAchievementOrbis_execOnRelease_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementOrbis.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentAchievementOrbis_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineComponentAchievementOrbis_execOnInitialize_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentAchievementOrbis_execOnInitialize_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementOrbis.IsGranted
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentAchievementOrbis_execIsGranted_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                AchievementId;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentAchievementOrbis_execIsGranted_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentAchievementOrbis_execIsGranted_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementOrbis.Grant
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentAchievementOrbis_execGrant_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                AchievementId;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineComponentAchievementOrbis_execGrant_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentAchievementOrbis_execGrant_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.OnKeyboardUIClosed
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execOnKeyboardUIClosed_Parms
{
	unsigned long                                      Success;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    InputBuffer; };                                   		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 USFXOnlineComponentPlatformOrbis_execOnKeyboardUIClosed_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformOrbis_execOnKeyboardUIClosed_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.GetRebootUserData
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execGetRebootUserData_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformOrbis_execGetRebootUserData_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformOrbis_execGetRebootUserData_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.WasRebootedFromOSCodeRedemptionUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execWasRebootedFromOSCodeRedemptionUI_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformOrbis_execWasRebootedFromOSCodeRedemptionUI_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformOrbis_execWasRebootedFromOSCodeRedemptionUI_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.ShowCodeRedemptionUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execShowCodeRedemptionUI_Parms
{
	int                                                UserData;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformOrbis_execShowCodeRedemptionUI_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformOrbis_execShowCodeRedemptionUI_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.ShowStoreUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execShowStoreUI_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformOrbis_execShowStoreUI_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformOrbis_execShowStoreUI_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.GetOnlineXuid
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execGetOnlineXuid_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { struct FUniqueNetId                        oPlayerXuid; };                                   		// 0x0004 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformOrbis_execGetOnlineXuid_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformOrbis_execGetOnlineXuid_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.GetOfflineXuid
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execGetOfflineXuid_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { struct FUniqueNetId                        oPlayerXuid; };                                   		// 0x0004 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformOrbis_execGetOfflineXuid_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformOrbis_execGetOfflineXuid_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.ShowKeyboardUI
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execShowKeyboardUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    sTitleText; };                                    		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { FString                                    sDescriptionText; };                              		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      nKeyboardType;                                    		// 0x0024 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bShouldValidate;                                  		// 0x0028 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bRouteThroughConsole;                             		// 0x002C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	union { FString                                    sDefaultText; };                                  		// 0x0030 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	int                                                nMaxResultLength;                                 		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0044 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformOrbis_execShowKeyboardUI_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformOrbis_execShowKeyboardUI_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.ShowFriendsInviteUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execShowFriendsInviteUI_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FUniqueNetId                        oPlayerXuid; };                                   		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformOrbis_execShowFriendsInviteUI_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformOrbis_execShowFriendsInviteUI_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.ShowFriendsUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execShowFriendsUI_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformOrbis_execShowFriendsUI_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformOrbis_execShowFriendsUI_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.ShowAchievementsUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execShowAchievementsUI_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformOrbis_execShowAchievementsUI_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformOrbis_execShowAchievementsUI_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.ShowFeedbackUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execShowFeedbackUI_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FUniqueNetId                        oPlayerId; };                                     		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformOrbis_execShowFeedbackUI_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformOrbis_execShowFeedbackUI_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.ShowGamerCardUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execShowGamerCardUI_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FUniqueNetId                        oPlayerId; };                                     		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformOrbis_execShowGamerCardUI_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformOrbis_execShowGamerCardUI_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.CanShowPresenceInformation
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execCanShowPresenceInformation_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformOrbis_execCanShowPresenceInformation_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformOrbis_execCanShowPresenceInformation_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.CanViewPlayerProfiles
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execCanViewPlayerProfiles_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformOrbis_execCanViewPlayerProfiles_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformOrbis_execCanViewPlayerProfiles_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.CanPurchaseContent
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execCanPurchaseContent_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformOrbis_execCanPurchaseContent_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformOrbis_execCanPurchaseContent_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.CanDownloadUserContent
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execCanDownloadUserContent_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformOrbis_execCanDownloadUserContent_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformOrbis_execCanDownloadUserContent_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.CanCommunicate
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execCanCommunicate_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformOrbis_execCanCommunicate_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformOrbis_execCanCommunicate_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.CanPlayOnline
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execCanPlayOnline_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformOrbis_execCanPlayOnline_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformOrbis_execCanPlayOnline_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.SetRichPresence
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execSetRichPresence_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPresenceMode;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { TArray<struct FLocalizedStringSetting>     aLocalizedStringSettings; };                      		// 0x0008 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	union { TArray<struct FSettingsProperty>           aProperties; };                                   		// 0x0018 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

	 USFXOnlineComponentPlatformOrbis_execSetRichPresence_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformOrbis_execSetRichPresence_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.ShowLoginUI
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execShowLoginUI_Parms
{
	unsigned long                                      bShowOnlineOnly;                                  		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformOrbis_execShowLoginUI_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformOrbis_execShowLoginUI_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.GetLoginStatus
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execGetLoginStatus_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformOrbis_execGetLoginStatus_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformOrbis_execGetLoginStatus_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.AddRecentPlayer
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execAddRecentPlayer_Parms
{
	union { struct FUniqueNetId                        oPlayerId; };                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    sDescription; };                                  		// 0x0008 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformOrbis_execAddRecentPlayer_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformOrbis_execAddRecentPlayer_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execGetAPIName_Parms
{
	union { struct SFXName                             ReturnValue; };                                   		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentPlatformOrbis_execGetAPIName_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformOrbis_execGetAPIName_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execOnRelease_Parms
{

	 USFXOnlineComponentPlatformOrbis_execOnRelease_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformOrbis_execOnRelease_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineComponentPlatformOrbis_execOnInitialize_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentPlatformOrbis_execOnInitialize_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentTelemetrySystem.OnTick
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentTelemetrySystem_execOnTick_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineComponentTelemetrySystem_execOnTick_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentTelemetrySystem_execOnTick_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentTelemetrySystem.Flush
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentTelemetrySystem_execFlush_Parms
{
	unsigned char                                      Channel;                                          		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineComponentTelemetrySystem_execFlush_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentTelemetrySystem_execFlush_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentTelemetrySystem.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentTelemetrySystem_execGetAPIName_Parms
{
	union { struct SFXName                             ReturnValue; };                                   		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentTelemetrySystem_execGetAPIName_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentTelemetrySystem_execGetAPIName_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentTelemetrySystem.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentTelemetrySystem_execOnRelease_Parms
{

	 USFXOnlineComponentTelemetrySystem_execOnRelease_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentTelemetrySystem_execOnRelease_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentTelemetrySystem.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentTelemetrySystem_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 USFXOnlineComponentTelemetrySystem_execOnInitialize_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentTelemetrySystem_execOnInitialize_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentTelemetrySystem.RegisterConnectionDelegates
// [0x00020003] ( FUNC_Final )
struct USFXOnlineComponentTelemetrySystem_execRegisterConnectionDelegates_Parms
{
	union { struct FScriptDelegate                     CollectDelegate; };                               		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { struct FScriptDelegate                     AuthenticateDelegate; };                          		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { struct FScriptDelegate                     DisconnectDelegate; };                            		// 0x0020 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 USFXOnlineComponentTelemetrySystem_execRegisterConnectionDelegates_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentTelemetrySystem_execRegisterConnectionDelegates_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentTelemetrySystem.OnDisconnect
// [0x00120000] 
struct USFXOnlineComponentTelemetrySystem_execOnDisconnect_Parms
{
	int                                                Error;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    SessionId; };                                     		// 0x0004 (0x0010) [0x0000000000400082]              ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )

	 USFXOnlineComponentTelemetrySystem_execOnDisconnect_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentTelemetrySystem_execOnDisconnect_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentTelemetrySystem.OnAuthenticate
// [0x00120000] 
struct USFXOnlineComponentTelemetrySystem_execOnAuthenticate_Parms
{

	 USFXOnlineComponentTelemetrySystem_execOnAuthenticate_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentTelemetrySystem_execOnAuthenticate_Parms() {}
};

// Function SFXOnlineFoundation.SFXOnlineComponentTelemetrySystem.CanCollect
// [0x00120000] 
struct USFXOnlineComponentTelemetrySystem_execCanCollect_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 USFXOnlineComponentTelemetrySystem_execCanCollect_Parms() { memset(this, 0, sizeof *this); }
	~USFXOnlineComponentTelemetrySystem_execCanCollect_Parms() {}
};



#undef LESDK_IN_GENERATED

#ifdef _MSC_VER
	#pragma pack ( pop )
#endif
