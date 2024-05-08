/*
#############################################################################################
# Mass Effect 2 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.5_Beta-Rev.60-MELE
# ========================================================================================= #
# File: GFxUI_f_structs.hpp
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

// Function GFxUI.GFxFSCmdHandler.FSCommand
// [0x00020800] ( FUNC_Event )
struct UGFxFSCmdHandler_eventFSCommand_Parms
{
	class UGFxMovie*                                   Movie;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    Cmd; };                                           		// 0x0008 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { FString                                    arg; };                                           		// 0x0018 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0028 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UGFxFSCmdHandler_eventFSCommand_Parms() { memset(this, 0, sizeof *this); }
	~UGFxFSCmdHandler_eventFSCommand_Parms() {}
};

// Function GFxUI.GFxGameViewportClient.Init
// [0x00420802] ( FUNC_Event )
struct UGFxGameViewportClient_eventInit_Parms
{
	union { FString                                    OutError; };                                      		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             oldlen;                                           		// 0x0014 (0x0004) [0x0000000000000000]              

	 UGFxGameViewportClient_eventInit_Parms() { memset(this, 0, sizeof *this); }
	~UGFxGameViewportClient_eventInit_Parms() {}
};

// Function GFxUI.GFxInteraction.NotifyGameSessionEnded
// [0x00020400] ( FUNC_Native )
struct UGFxInteraction_execNotifyGameSessionEnded_Parms
{

	 UGFxInteraction_execNotifyGameSessionEnded_Parms() { memset(this, 0, sizeof *this); }
	~UGFxInteraction_execNotifyGameSessionEnded_Parms() {}
};

// Function GFxUI.GFxInteraction.GetFocusMovie
// [0x00020400] ( FUNC_Native )
struct UGFxInteraction_execGetFocusMovie_Parms
{
	class UGFxMovie*                                   ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UGFxInteraction_execGetFocusMovie_Parms() { memset(this, 0, sizeof *this); }
	~UGFxInteraction_execGetFocusMovie_Parms() {}
};

// Function GFxUI.GFxInteraction.SetFocusMovie
// [0x00020400] ( FUNC_Native )
struct UGFxInteraction_execSetFocusMovie_Parms
{
	union { FString                                    MovieName; };                                     		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      captureInput;                                     		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UGFxInteraction_execSetFocusMovie_Parms() { memset(this, 0, sizeof *this); }
	~UGFxInteraction_execSetFocusMovie_Parms() {}
};

// Function GFxUI.GFxMovie.UnregisterGFxValue
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMovie_execUnregisterGFxValue_Parms
{
	class UGFxValue*                                   i_val;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UGFxMovie_execUnregisterGFxValue_Parms() { memset(this, 0, sizeof *this); }
	~UGFxMovie_execUnregisterGFxValue_Parms() {}
};

// Function GFxUI.GFxMovie.RegisterGFxValue
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMovie_execRegisterGFxValue_Parms
{
	class UGFxValue*                                   i_val;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UGFxMovie_execRegisterGFxValue_Parms() { memset(this, 0, sizeof *this); }
	~UGFxMovie_execRegisterGFxValue_Parms() {}
};

// Function GFxUI.GFxMovie.ActionScriptSetFunction
// [0x00080401] ( FUNC_Final | FUNC_Native )
struct UGFxMovie_execActionScriptSetFunction_Parms
{
	class UGFxValue*                                   Obj;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    member; };                                        		// 0x0008 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 UGFxMovie_execActionScriptSetFunction_Parms() { memset(this, 0, sizeof *this); }
	~UGFxMovie_execActionScriptSetFunction_Parms() {}
};

// Function GFxUI.GFxMovie.ActionScriptObject
// [0x00080401] ( FUNC_Final | FUNC_Native )
struct UGFxMovie_execActionScriptObject_Parms
{
	union { FString                                    Path; };                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UGFxValue*                                   ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UGFxMovie_execActionScriptObject_Parms() { memset(this, 0, sizeof *this); }
	~UGFxMovie_execActionScriptObject_Parms() {}
};

// Function GFxUI.GFxMovie.ActionScriptString
// [0x00080401] ( FUNC_Final | FUNC_Native )
struct UGFxMovie_execActionScriptString_Parms
{
	union { FString                                    Path; };                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { FString                                    ReturnValue; };                                   		// 0x0010 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

	 UGFxMovie_execActionScriptString_Parms() { memset(this, 0, sizeof *this); }
	~UGFxMovie_execActionScriptString_Parms() {}
};

// Function GFxUI.GFxMovie.ActionScriptFloat
// [0x00080401] ( FUNC_Final | FUNC_Native )
struct UGFxMovie_execActionScriptFloat_Parms
{
	union { FString                                    Path; };                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UGFxMovie_execActionScriptFloat_Parms() { memset(this, 0, sizeof *this); }
	~UGFxMovie_execActionScriptFloat_Parms() {}
};

// Function GFxUI.GFxMovie.ActionScriptInt
// [0x00080401] ( FUNC_Final | FUNC_Native )
struct UGFxMovie_execActionScriptInt_Parms
{
	union { FString                                    Path; };                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UGFxMovie_execActionScriptInt_Parms() { memset(this, 0, sizeof *this); }
	~UGFxMovie_execActionScriptInt_Parms() {}
};

// Function GFxUI.GFxMovie.ActionScriptVoid
// [0x00080401] ( FUNC_Final | FUNC_Native )
struct UGFxMovie_execActionScriptVoid_Parms
{
	union { FString                                    Path; };                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 UGFxMovie_execActionScriptVoid_Parms() { memset(this, 0, sizeof *this); }
	~UGFxMovie_execActionScriptVoid_Parms() {}
};

// Function GFxUI.GFxMovie.SetExternalInterface
// [0x00020002] 
struct UGFxMovie_execSetExternalInterface_Parms
{
	class UObject*                                     H;                                                		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 UGFxMovie_execSetExternalInterface_Parms() { memset(this, 0, sizeof *this); }
	~UGFxMovie_execSetExternalInterface_Parms() {}
};

// Function GFxUI.GFxMovie.SetFsCmdHandler
// [0x00020002] 
struct UGFxMovie_execSetFsCmdHandler_Parms
{
	class UGFxFSCmdHandler*                            H;                                                		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 UGFxMovie_execSetFsCmdHandler_Parms() { memset(this, 0, sizeof *this); }
	~UGFxMovie_execSetFsCmdHandler_Parms() {}
};

// Function GFxUI.GFxMovie.SetVariableObject
// [0x00020400] ( FUNC_Native )
struct UGFxMovie_execSetVariableObject_Parms
{
	union { FString                                    Path; };                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UGFxValue*                                   Value;                                            		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 UGFxMovie_execSetVariableObject_Parms() { memset(this, 0, sizeof *this); }
	~UGFxMovie_execSetVariableObject_Parms() {}
};

// Function GFxUI.GFxMovie.GetVariableObject
// [0x00024400] ( FUNC_Native )
struct UGFxMovie_execGetVariableObject_Parms
{
	union { FString                                    Path; };                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UClass*                                      Type;                                             		// 0x0010 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UGFxValue*                                   ReturnValue;                                      		// 0x0018 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UGFxMovie_execGetVariableObject_Parms() { memset(this, 0, sizeof *this); }
	~UGFxMovie_execGetVariableObject_Parms() {}
};

// Function GFxUI.GFxMovie.CreateArray
// [0x00020400] ( FUNC_Native )
struct UGFxMovie_execCreateArray_Parms
{
	class UGFxValue*                                   ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UGFxMovie_execCreateArray_Parms() { memset(this, 0, sizeof *this); }
	~UGFxMovie_execCreateArray_Parms() {}
};

// Function GFxUI.GFxMovie.CreateObject
// [0x00024400] ( FUNC_Native )
struct UGFxMovie_execCreateObject_Parms
{
	union { FString                                    ASClass; };                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UClass*                                      Type;                                             		// 0x0010 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UGFxValue*                                   ReturnValue;                                      		// 0x0018 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UGFxMovie_execCreateObject_Parms() { memset(this, 0, sizeof *this); }
	~UGFxMovie_execCreateObject_Parms() {}
};

// Function GFxUI.GFxMovie.SetVariableStringArray
// [0x00020400] ( FUNC_Native )
struct UGFxMovie_execSetVariableStringArray_Parms
{
	union { FString                                    Path; };                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                Index;                                            		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { TArray<FString>                            arg; };                                           		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0024 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UGFxMovie_execSetVariableStringArray_Parms() { memset(this, 0, sizeof *this); }
	~UGFxMovie_execSetVariableStringArray_Parms() {}
};

// Function GFxUI.GFxMovie.SetVariableFloatArray
// [0x00020400] ( FUNC_Native )
struct UGFxMovie_execSetVariableFloatArray_Parms
{
	union { FString                                    Path; };                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                Index;                                            		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { TArray<float>                              arg; };                                           		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0024 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UGFxMovie_execSetVariableFloatArray_Parms() { memset(this, 0, sizeof *this); }
	~UGFxMovie_execSetVariableFloatArray_Parms() {}
};

// Function GFxUI.GFxMovie.SetVariableIntArray
// [0x00020400] ( FUNC_Native )
struct UGFxMovie_execSetVariableIntArray_Parms
{
	union { FString                                    Path; };                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                Index;                                            		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { TArray<int>                                arg; };                                           		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0024 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UGFxMovie_execSetVariableIntArray_Parms() { memset(this, 0, sizeof *this); }
	~UGFxMovie_execSetVariableIntArray_Parms() {}
};

// Function GFxUI.GFxMovie.SetVariableArray
// [0x00020400] ( FUNC_Native )
struct UGFxMovie_execSetVariableArray_Parms
{
	union { FString                                    Path; };                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                Index;                                            		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { TArray<struct FASValue>                    arg; };                                           		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0024 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UGFxMovie_execSetVariableArray_Parms() { memset(this, 0, sizeof *this); }
	~UGFxMovie_execSetVariableArray_Parms() {}
};

// Function GFxUI.GFxMovie.GetVariableStringArray
// [0x00420400] ( FUNC_Native )
struct UGFxMovie_execGetVariableStringArray_Parms
{
	union { FString                                    Path; };                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                Index;                                            		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { TArray<FString>                            arg; };                                           		// 0x0014 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0024 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UGFxMovie_execGetVariableStringArray_Parms() { memset(this, 0, sizeof *this); }
	~UGFxMovie_execGetVariableStringArray_Parms() {}
};

// Function GFxUI.GFxMovie.GetVariableFloatArray
// [0x00420400] ( FUNC_Native )
struct UGFxMovie_execGetVariableFloatArray_Parms
{
	union { FString                                    Path; };                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                Index;                                            		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { TArray<float>                              arg; };                                           		// 0x0014 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0024 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UGFxMovie_execGetVariableFloatArray_Parms() { memset(this, 0, sizeof *this); }
	~UGFxMovie_execGetVariableFloatArray_Parms() {}
};

// Function GFxUI.GFxMovie.GetVariableIntArray
// [0x00420400] ( FUNC_Native )
struct UGFxMovie_execGetVariableIntArray_Parms
{
	union { FString                                    Path; };                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                Index;                                            		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { TArray<int>                                arg; };                                           		// 0x0014 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0024 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UGFxMovie_execGetVariableIntArray_Parms() { memset(this, 0, sizeof *this); }
	~UGFxMovie_execGetVariableIntArray_Parms() {}
};

// Function GFxUI.GFxMovie.GetVariableArray
// [0x00420400] ( FUNC_Native )
struct UGFxMovie_execGetVariableArray_Parms
{
	union { FString                                    Path; };                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                Index;                                            		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { TArray<struct FASValue>                    arg; };                                           		// 0x0014 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0024 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UGFxMovie_execGetVariableArray_Parms() { memset(this, 0, sizeof *this); }
	~UGFxMovie_execGetVariableArray_Parms() {}
};

// Function GFxUI.GFxMovie.SetVariableString
// [0x00020400] ( FUNC_Native )
struct UGFxMovie_execSetVariableString_Parms
{
	union { FString                                    Path; };                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { FString                                    S; };                                             		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 UGFxMovie_execSetVariableString_Parms() { memset(this, 0, sizeof *this); }
	~UGFxMovie_execSetVariableString_Parms() {}
};

// Function GFxUI.GFxMovie.SetVariableNumber
// [0x00020400] ( FUNC_Native )
struct UGFxMovie_execSetVariableNumber_Parms
{
	union { FString                                    Path; };                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              F;                                                		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 UGFxMovie_execSetVariableNumber_Parms() { memset(this, 0, sizeof *this); }
	~UGFxMovie_execSetVariableNumber_Parms() {}
};

// Function GFxUI.GFxMovie.SetVariableBool
// [0x00020400] ( FUNC_Native )
struct UGFxMovie_execSetVariableBool_Parms
{
	union { FString                                    Path; };                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      B;                                                		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 UGFxMovie_execSetVariableBool_Parms() { memset(this, 0, sizeof *this); }
	~UGFxMovie_execSetVariableBool_Parms() {}
};

// Function GFxUI.GFxMovie.SetVariable
// [0x00020400] ( FUNC_Native )
struct UGFxMovie_execSetVariable_Parms
{
	union { FString                                    Path; };                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { struct FASValue                            arg; };                                           		// 0x0010 (0x001C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 UGFxMovie_execSetVariable_Parms() { memset(this, 0, sizeof *this); }
	~UGFxMovie_execSetVariable_Parms() {}
};

// Function GFxUI.GFxMovie.GetVariableString
// [0x00020400] ( FUNC_Native )
struct UGFxMovie_execGetVariableString_Parms
{
	union { FString                                    Path; };                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { FString                                    ReturnValue; };                                   		// 0x0010 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

	 UGFxMovie_execGetVariableString_Parms() { memset(this, 0, sizeof *this); }
	~UGFxMovie_execGetVariableString_Parms() {}
};

// Function GFxUI.GFxMovie.GetVariableNumber
// [0x00020400] ( FUNC_Native )
struct UGFxMovie_execGetVariableNumber_Parms
{
	union { FString                                    Path; };                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UGFxMovie_execGetVariableNumber_Parms() { memset(this, 0, sizeof *this); }
	~UGFxMovie_execGetVariableNumber_Parms() {}
};

// Function GFxUI.GFxMovie.GetVariableBool
// [0x00020400] ( FUNC_Native )
struct UGFxMovie_execGetVariableBool_Parms
{
	union { FString                                    Path; };                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UGFxMovie_execGetVariableBool_Parms() { memset(this, 0, sizeof *this); }
	~UGFxMovie_execGetVariableBool_Parms() {}
};

// Function GFxUI.GFxMovie.GetVariable
// [0x00020400] ( FUNC_Native )
struct UGFxMovie_execGetVariable_Parms
{
	union { FString                                    Path; };                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { struct FASValue                            ReturnValue; };                                   		// 0x0010 (0x001C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

	 UGFxMovie_execGetVariable_Parms() { memset(this, 0, sizeof *this); }
	~UGFxMovie_execGetVariable_Parms() {}
};

// Function GFxUI.GFxMovie.PublishDataStoreValues
// [0x00020400] ( FUNC_Native )
struct UGFxMovie_execPublishDataStoreValues_Parms
{

	 UGFxMovie_execPublishDataStoreValues_Parms() { memset(this, 0, sizeof *this); }
	~UGFxMovie_execPublishDataStoreValues_Parms() {}
};

// Function GFxUI.GFxMovie.RefreshDataStoreBindings
// [0x00020400] ( FUNC_Native )
struct UGFxMovie_execRefreshDataStoreBindings_Parms
{

	 UGFxMovie_execRefreshDataStoreBindings_Parms() { memset(this, 0, sizeof *this); }
	~UGFxMovie_execRefreshDataStoreBindings_Parms() {}
};

// Function GFxUI.GFxMovie.Invoke
// [0x00020400] ( FUNC_Native )
struct UGFxMovie_execInvoke_Parms
{
	union { FString                                    method; };                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { TArray<struct FASValue>                    Args; };                                          		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { struct FASValue                            ReturnValue; };                                   		// 0x0020 (0x001C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

	 UGFxMovie_execInvoke_Parms() { memset(this, 0, sizeof *this); }
	~UGFxMovie_execInvoke_Parms() {}
};

// Function GFxUI.GFxMovie.GetPC
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMovie_execGetPC_Parms
{
	class APlayerController*                           ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UGFxMovie_execGetPC_Parms() { memset(this, 0, sizeof *this); }
	~UGFxMovie_execGetPC_Parms() {}
};

// Function GFxUI.GFxMovie.GetLP
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMovie_execGetLP_Parms
{
	class ULocalPlayer*                                ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UGFxMovie_execGetLP_Parms() { memset(this, 0, sizeof *this); }
	~UGFxMovie_execGetLP_Parms() {}
};

// Function GFxUI.GFxMovie.SetTimingMode
// [0x00020400] ( FUNC_Native )
struct UGFxMovie_execSetTimingMode_Parms
{
	unsigned char                                      Mode;                                             		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )

	 UGFxMovie_execSetTimingMode_Parms() { memset(this, 0, sizeof *this); }
	~UGFxMovie_execSetTimingMode_Parms() {}
};

// Function GFxUI.GFxMovie.Pause
// [0x00024400] ( FUNC_Native )
struct UGFxMovie_execPause_Parms
{
	unsigned long                                      pauseplay;                                        		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 UGFxMovie_execPause_Parms() { memset(this, 0, sizeof *this); }
	~UGFxMovie_execPause_Parms() {}
};

// Function GFxUI.GFxMovie.Update
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMovie_execUpdate_Parms
{
	float                                              fDeltaT;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 UGFxMovie_execUpdate_Parms() { memset(this, 0, sizeof *this); }
	~UGFxMovie_execUpdate_Parms() {}
};

// Function GFxUI.GFxMovie.Advance
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMovie_execAdvance_Parms
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 UGFxMovie_execAdvance_Parms() { memset(this, 0, sizeof *this); }
	~UGFxMovie_execAdvance_Parms() {}
};

// Function GFxUI.GFxMovie.SetExternalTexture
// [0x00020400] ( FUNC_Native )
struct UGFxMovie_execSetExternalTexture_Parms
{
	union { FString                                    Resource; };                                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UTexture*                                    Texture;                                          		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UGFxMovie_execSetExternalTexture_Parms() { memset(this, 0, sizeof *this); }
	~UGFxMovie_execSetExternalTexture_Parms() {}
};

// Function GFxUI.GFxMovie.IsUsingGamepad
// [0x00020400] ( FUNC_Native )
struct UGFxMovie_execIsUsingGamepad_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UGFxMovie_execIsUsingGamepad_Parms() { memset(this, 0, sizeof *this); }
	~UGFxMovie_execIsUsingGamepad_Parms() {}
};

// Function GFxUI.GFxMovie.FlushPlayerInput
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMovie_execFlushPlayerInput_Parms
{
	unsigned long                                      capturekeysonly;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 UGFxMovie_execFlushPlayerInput_Parms() { memset(this, 0, sizeof *this); }
	~UGFxMovie_execFlushPlayerInput_Parms() {}
};

// Function GFxUI.GFxMovie.ClearFocusIgnoreKeys
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMovie_execClearFocusIgnoreKeys_Parms
{

	 UGFxMovie_execClearFocusIgnoreKeys_Parms() { memset(this, 0, sizeof *this); }
	~UGFxMovie_execClearFocusIgnoreKeys_Parms() {}
};

// Function GFxUI.GFxMovie.AddFocusIgnoreKey
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMovie_execAddFocusIgnoreKey_Parms
{
	union { struct SFXName                             Key; };                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 UGFxMovie_execAddFocusIgnoreKey_Parms() { memset(this, 0, sizeof *this); }
	~UGFxMovie_execAddFocusIgnoreKey_Parms() {}
};

// Function GFxUI.GFxMovie.ClearCaptureKeys
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMovie_execClearCaptureKeys_Parms
{

	 UGFxMovie_execClearCaptureKeys_Parms() { memset(this, 0, sizeof *this); }
	~UGFxMovie_execClearCaptureKeys_Parms() {}
};

// Function GFxUI.GFxMovie.AddCaptureKey
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMovie_execAddCaptureKey_Parms
{
	union { struct SFXName                             Key; };                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 UGFxMovie_execAddCaptureKey_Parms() { memset(this, 0, sizeof *this); }
	~UGFxMovie_execAddCaptureKey_Parms() {}
};

// Function GFxUI.GFxMovie.SetFocus
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UGFxMovie_execSetFocus_Parms
{
	unsigned long                                      captureInput;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      Focus;                                            		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 UGFxMovie_execSetFocus_Parms() { memset(this, 0, sizeof *this); }
	~UGFxMovie_execSetFocus_Parms() {}
};

// Function GFxUI.GFxMovie.SetSceneDPG
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMovie_execSetSceneDPG_Parms
{
	unsigned char                                      NewDPG;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )

	 UGFxMovie_execSetSceneDPG_Parms() { memset(this, 0, sizeof *this); }
	~UGFxMovie_execSetSceneDPG_Parms() {}
};

// Function GFxUI.GFxMovie.SetPerspective3D
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UGFxMovie_execSetPerspective3D_Parms
{
	union { struct FMatrix                             matPersp; };                                      		// 0x0000 (0x0040) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )

	 UGFxMovie_execSetPerspective3D_Parms() { memset(this, 0, sizeof *this); }
	~UGFxMovie_execSetPerspective3D_Parms() {}
};

// Function GFxUI.GFxMovie.SetView3D
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UGFxMovie_execSetView3D_Parms
{
	union { struct FMatrix                             matView; };                                       		// 0x0000 (0x0040) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )

	 UGFxMovie_execSetView3D_Parms() { memset(this, 0, sizeof *this); }
	~UGFxMovie_execSetView3D_Parms() {}
};

// Function GFxUI.GFxMovie.GetVisibleFrameRect
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UGFxMovie_execGetVisibleFrameRect_Parms
{
	float                                              x0;                                               		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              y0;                                               		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              X1;                                               		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              Y1;                                               		// 0x000C (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )

	 UGFxMovie_execGetVisibleFrameRect_Parms() { memset(this, 0, sizeof *this); }
	~UGFxMovie_execGetVisibleFrameRect_Parms() {}
};

// Function GFxUI.GFxMovie.SetAlignment
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMovie_execSetAlignment_Parms
{
	unsigned char                                      A;                                                		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )

	 UGFxMovie_execSetAlignment_Parms() { memset(this, 0, sizeof *this); }
	~UGFxMovie_execSetAlignment_Parms() {}
};

// Function GFxUI.GFxMovie.SetViewScaleMode
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMovie_execSetViewScaleMode_Parms
{
	unsigned char                                      sm;                                               		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )

	 UGFxMovie_execSetViewScaleMode_Parms() { memset(this, 0, sizeof *this); }
	~UGFxMovie_execSetViewScaleMode_Parms() {}
};

// Function GFxUI.GFxMovie.SetViewport
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMovie_execSetViewport_Parms
{
	int                                                X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Width;                                            		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Height;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 UGFxMovie_execSetViewport_Parms() { memset(this, 0, sizeof *this); }
	~UGFxMovie_execSetViewport_Parms() {}
};

// Function GFxUI.GFxMovie.GetGameViewportClient
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMovie_execGetGameViewportClient_Parms
{
	class UGameViewportClient*                         ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UGFxMovie_execGetGameViewportClient_Parms() { memset(this, 0, sizeof *this); }
	~UGFxMovie_execGetGameViewportClient_Parms() {}
};

// Function GFxUI.GFxMovie.SetMovieInfo
// [0x00020002] 
struct UGFxMovie_execSetMovieInfo_Parms
{
	class UGFxMovieInfo*                               Data;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 UGFxMovie_execSetMovieInfo_Parms() { memset(this, 0, sizeof *this); }
	~UGFxMovie_execSetMovieInfo_Parms() {}
};

// Function GFxUI.GFxMovie.OnClose
// [0x00020800] ( FUNC_Event )
struct UGFxMovie_eventOnClose_Parms
{

	 UGFxMovie_eventOnClose_Parms() { memset(this, 0, sizeof *this); }
	~UGFxMovie_eventOnClose_Parms() {}
};

// Function GFxUI.GFxMovie.Close
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UGFxMovie_execClose_Parms
{
	unsigned long                                      Unload;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 UGFxMovie_execClose_Parms() { memset(this, 0, sizeof *this); }
	~UGFxMovie_execClose_Parms() {}
};

// Function GFxUI.GFxMovie.Start
// [0x00024C00] ( FUNC_Event | FUNC_Native )
struct UGFxMovie_eventStart_Parms
{
	unsigned long                                      StartPaused;                                      		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UGFxMovie_eventStart_Parms() { memset(this, 0, sizeof *this); }
	~UGFxMovie_eventStart_Parms() {}
};

// Function GFxUI.GFxValue.ActionScriptSetFunctionOn
// [0x00080401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execActionScriptSetFunctionOn_Parms
{
	class UGFxValue*                                   Target;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    member; };                                        		// 0x0008 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 UGFxValue_execActionScriptSetFunctionOn_Parms() { memset(this, 0, sizeof *this); }
	~UGFxValue_execActionScriptSetFunctionOn_Parms() {}
};

// Function GFxUI.GFxValue.ActionScriptSetFunction
// [0x00080401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execActionScriptSetFunction_Parms
{
	union { FString                                    member; };                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 UGFxValue_execActionScriptSetFunction_Parms() { memset(this, 0, sizeof *this); }
	~UGFxValue_execActionScriptSetFunction_Parms() {}
};

// Function GFxUI.GFxValue.ActionScriptArray
// [0x00080401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execActionScriptArray_Parms
{
	union { FString                                    Path; };                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { TArray<class UGFxValue*>                   ReturnValue; };                                   		// 0x0010 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

	 UGFxValue_execActionScriptArray_Parms() { memset(this, 0, sizeof *this); }
	~UGFxValue_execActionScriptArray_Parms() {}
};

// Function GFxUI.GFxValue.ActionScriptObject
// [0x00080401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execActionScriptObject_Parms
{
	union { FString                                    Path; };                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UGFxValue*                                   ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UGFxValue_execActionScriptObject_Parms() { memset(this, 0, sizeof *this); }
	~UGFxValue_execActionScriptObject_Parms() {}
};

// Function GFxUI.GFxValue.ActionScriptString
// [0x00080401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execActionScriptString_Parms
{
	union { FString                                    method; };                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { FString                                    ReturnValue; };                                   		// 0x0010 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

	 UGFxValue_execActionScriptString_Parms() { memset(this, 0, sizeof *this); }
	~UGFxValue_execActionScriptString_Parms() {}
};

// Function GFxUI.GFxValue.ActionScriptFloat
// [0x00080401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execActionScriptFloat_Parms
{
	union { FString                                    method; };                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UGFxValue_execActionScriptFloat_Parms() { memset(this, 0, sizeof *this); }
	~UGFxValue_execActionScriptFloat_Parms() {}
};

// Function GFxUI.GFxValue.ActionScriptInt
// [0x00080401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execActionScriptInt_Parms
{
	union { FString                                    method; };                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UGFxValue_execActionScriptInt_Parms() { memset(this, 0, sizeof *this); }
	~UGFxValue_execActionScriptInt_Parms() {}
};

// Function GFxUI.GFxValue.ActionScriptVoid
// [0x00080401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execActionScriptVoid_Parms
{
	union { FString                                    method; };                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 UGFxValue_execActionScriptVoid_Parms() { memset(this, 0, sizeof *this); }
	~UGFxValue_execActionScriptVoid_Parms() {}
};

// Function GFxUI.GFxValue.SetElementMemberString
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execSetElementMemberString_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    member; };                                        		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { FString                                    S; };                                             		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 UGFxValue_execSetElementMemberString_Parms() { memset(this, 0, sizeof *this); }
	~UGFxValue_execSetElementMemberString_Parms() {}
};

// Function GFxUI.GFxValue.SetElementMemberNumber
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execSetElementMemberNumber_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    member; };                                        		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              F;                                                		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 UGFxValue_execSetElementMemberNumber_Parms() { memset(this, 0, sizeof *this); }
	~UGFxValue_execSetElementMemberNumber_Parms() {}
};

// Function GFxUI.GFxValue.SetElementMemberBool
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execSetElementMemberBool_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    member; };                                        		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      B;                                                		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 UGFxValue_execSetElementMemberBool_Parms() { memset(this, 0, sizeof *this); }
	~UGFxValue_execSetElementMemberBool_Parms() {}
};

// Function GFxUI.GFxValue.SetElementMemberObject
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execSetElementMemberObject_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    member; };                                        		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UGFxValue*                                   val;                                              		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 UGFxValue_execSetElementMemberObject_Parms() { memset(this, 0, sizeof *this); }
	~UGFxValue_execSetElementMemberObject_Parms() {}
};

// Function GFxUI.GFxValue.SetElementMember
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execSetElementMember_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    member; };                                        		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { struct FASValue                            arg; };                                           		// 0x0014 (0x001C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 UGFxValue_execSetElementMember_Parms() { memset(this, 0, sizeof *this); }
	~UGFxValue_execSetElementMember_Parms() {}
};

// Function GFxUI.GFxValue.GetElementMemberString
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execGetElementMemberString_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    member; };                                        		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { FString                                    ReturnValue; };                                   		// 0x0014 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

	 UGFxValue_execGetElementMemberString_Parms() { memset(this, 0, sizeof *this); }
	~UGFxValue_execGetElementMemberString_Parms() {}
};

// Function GFxUI.GFxValue.GetElementMemberNumber
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execGetElementMemberNumber_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    member; };                                        		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UGFxValue_execGetElementMemberNumber_Parms() { memset(this, 0, sizeof *this); }
	~UGFxValue_execGetElementMemberNumber_Parms() {}
};

// Function GFxUI.GFxValue.GetElementMemberBool
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execGetElementMemberBool_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    member; };                                        		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UGFxValue_execGetElementMemberBool_Parms() { memset(this, 0, sizeof *this); }
	~UGFxValue_execGetElementMemberBool_Parms() {}
};

// Function GFxUI.GFxValue.GetElementMemberObject
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execGetElementMemberObject_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    member; };                                        		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UClass*                                      Type;                                             		// 0x0014 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UGFxValue*                                   ReturnValue;                                      		// 0x001C (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UGFxValue_execGetElementMemberObject_Parms() { memset(this, 0, sizeof *this); }
	~UGFxValue_execGetElementMemberObject_Parms() {}
};

// Function GFxUI.GFxValue.GetElementMember
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execGetElementMember_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    member; };                                        		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { struct FASValue                            ReturnValue; };                                   		// 0x0014 (0x001C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

	 UGFxValue_execGetElementMember_Parms() { memset(this, 0, sizeof *this); }
	~UGFxValue_execGetElementMember_Parms() {}
};

// Function GFxUI.GFxValue.SetElementColorTransform
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execSetElementColorTransform_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { struct FASColorTransform                   cxform; };                                        		// 0x0004 (0x0020) [0x0000000000000080]              ( CPF_Parm )

	 UGFxValue_execSetElementColorTransform_Parms() { memset(this, 0, sizeof *this); }
	~UGFxValue_execSetElementColorTransform_Parms() {}
};

// Function GFxUI.GFxValue.SetElementPosition
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execSetElementPosition_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              X;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 UGFxValue_execSetElementPosition_Parms() { memset(this, 0, sizeof *this); }
	~UGFxValue_execSetElementPosition_Parms() {}
};

// Function GFxUI.GFxValue.SetElementVisible
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execSetElementVisible_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      Visible;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 UGFxValue_execSetElementVisible_Parms() { memset(this, 0, sizeof *this); }
	~UGFxValue_execSetElementVisible_Parms() {}
};

// Function GFxUI.GFxValue.SetElementDisplayMatrix
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execSetElementDisplayMatrix_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { struct FMatrix                             M; };                                             		// 0x0010 (0x0040) [0x0000000000000080]              ( CPF_Parm )

	 UGFxValue_execSetElementDisplayMatrix_Parms() { memset(this, 0, sizeof *this); }
	~UGFxValue_execSetElementDisplayMatrix_Parms() {}
};

// Function GFxUI.GFxValue.SetElementDisplayInfo
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execSetElementDisplayInfo_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { struct FASDisplayInfo                      D; };                                             		// 0x0004 (0x002C) [0x0000000000000080]              ( CPF_Parm )

	 UGFxValue_execSetElementDisplayInfo_Parms() { memset(this, 0, sizeof *this); }
	~UGFxValue_execSetElementDisplayInfo_Parms() {}
};

// Function GFxUI.GFxValue.SetElementString
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execSetElementString_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    S; };                                             		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 UGFxValue_execSetElementString_Parms() { memset(this, 0, sizeof *this); }
	~UGFxValue_execSetElementString_Parms() {}
};

// Function GFxUI.GFxValue.SetElementNumber
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execSetElementNumber_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              F;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 UGFxValue_execSetElementNumber_Parms() { memset(this, 0, sizeof *this); }
	~UGFxValue_execSetElementNumber_Parms() {}
};

// Function GFxUI.GFxValue.SetElementBool
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execSetElementBool_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      B;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 UGFxValue_execSetElementBool_Parms() { memset(this, 0, sizeof *this); }
	~UGFxValue_execSetElementBool_Parms() {}
};

// Function GFxUI.GFxValue.SetElementObject
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execSetElementObject_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UGFxValue*                                   val;                                              		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 UGFxValue_execSetElementObject_Parms() { memset(this, 0, sizeof *this); }
	~UGFxValue_execSetElementObject_Parms() {}
};

// Function GFxUI.GFxValue.SetElement
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execSetElement_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { struct FASValue                            arg; };                                           		// 0x0004 (0x001C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 UGFxValue_execSetElement_Parms() { memset(this, 0, sizeof *this); }
	~UGFxValue_execSetElement_Parms() {}
};

// Function GFxUI.GFxValue.GetElementDisplayMatrix
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execGetElementDisplayMatrix_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { struct FMatrix                             ReturnValue; };                                   		// 0x0010 (0x0040) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UGFxValue_execGetElementDisplayMatrix_Parms() { memset(this, 0, sizeof *this); }
	~UGFxValue_execGetElementDisplayMatrix_Parms() {}
};

// Function GFxUI.GFxValue.GetElementDisplayInfo
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execGetElementDisplayInfo_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { struct FASDisplayInfo                      ReturnValue; };                                   		// 0x0004 (0x002C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UGFxValue_execGetElementDisplayInfo_Parms() { memset(this, 0, sizeof *this); }
	~UGFxValue_execGetElementDisplayInfo_Parms() {}
};

// Function GFxUI.GFxValue.GetElementString
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execGetElementString_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    ReturnValue; };                                   		// 0x0004 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

	 UGFxValue_execGetElementString_Parms() { memset(this, 0, sizeof *this); }
	~UGFxValue_execGetElementString_Parms() {}
};

// Function GFxUI.GFxValue.GetElementNumber
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execGetElementNumber_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UGFxValue_execGetElementNumber_Parms() { memset(this, 0, sizeof *this); }
	~UGFxValue_execGetElementNumber_Parms() {}
};

// Function GFxUI.GFxValue.GetElementBool
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execGetElementBool_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UGFxValue_execGetElementBool_Parms() { memset(this, 0, sizeof *this); }
	~UGFxValue_execGetElementBool_Parms() {}
};

// Function GFxUI.GFxValue.GetElementObject
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execGetElementObject_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      Type;                                             		// 0x0004 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UGFxValue*                                   ReturnValue;                                      		// 0x000C (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UGFxValue_execGetElementObject_Parms() { memset(this, 0, sizeof *this); }
	~UGFxValue_execGetElementObject_Parms() {}
};

// Function GFxUI.GFxValue.GetElement
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execGetElement_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { struct FASValue                            ReturnValue; };                                   		// 0x0004 (0x001C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

	 UGFxValue_execGetElement_Parms() { memset(this, 0, sizeof *this); }
	~UGFxValue_execGetElement_Parms() {}
};

// Function GFxUI.GFxValue.SetText
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execSetText_Parms
{
	union { FString                                    Text; };                                          		// 0x0000 (0x0010) [0x0000000000400880]              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )

	 UGFxValue_execSetText_Parms() { memset(this, 0, sizeof *this); }
	~UGFxValue_execSetText_Parms() {}
};

// Function GFxUI.GFxValue.GetText
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execGetText_Parms
{
	union { FString                                    ReturnValue; };                                   		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

	 UGFxValue_execGetText_Parms() { memset(this, 0, sizeof *this); }
	~UGFxValue_execGetText_Parms() {}
};

// Function GFxUI.GFxValue.AttachMovie
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execAttachMovie_Parms
{
	union { FString                                    symbolname; };                                    		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { FString                                    instancename; };                                  		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                Depth;                                            		// 0x0020 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UClass*                                      Type;                                             		// 0x0024 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UGFxValue*                                   ReturnValue;                                      		// 0x002C (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UGFxValue_execAttachMovie_Parms() { memset(this, 0, sizeof *this); }
	~UGFxValue_execAttachMovie_Parms() {}
};

// Function GFxUI.GFxValue.CreateEmptyMovieClip
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execCreateEmptyMovieClip_Parms
{
	union { FString                                    instancename; };                                  		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                Depth;                                            		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UClass*                                      Type;                                             		// 0x0014 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UGFxValue*                                   ReturnValue;                                      		// 0x001C (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UGFxValue_execCreateEmptyMovieClip_Parms() { memset(this, 0, sizeof *this); }
	~UGFxValue_execCreateEmptyMovieClip_Parms() {}
};

// Function GFxUI.GFxValue.GotoAndStopI
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execGotoAndStopI_Parms
{
	int                                                frame;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 UGFxValue_execGotoAndStopI_Parms() { memset(this, 0, sizeof *this); }
	~UGFxValue_execGotoAndStopI_Parms() {}
};

// Function GFxUI.GFxValue.GotoAndStop
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execGotoAndStop_Parms
{
	union { FString                                    frame; };                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 UGFxValue_execGotoAndStop_Parms() { memset(this, 0, sizeof *this); }
	~UGFxValue_execGotoAndStop_Parms() {}
};

// Function GFxUI.GFxValue.GotoAndPlayI
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execGotoAndPlayI_Parms
{
	int                                                frame;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 UGFxValue_execGotoAndPlayI_Parms() { memset(this, 0, sizeof *this); }
	~UGFxValue_execGotoAndPlayI_Parms() {}
};

// Function GFxUI.GFxValue.GotoAndPlay
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execGotoAndPlay_Parms
{
	union { FString                                    frame; };                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 UGFxValue_execGotoAndPlay_Parms() { memset(this, 0, sizeof *this); }
	~UGFxValue_execGotoAndPlay_Parms() {}
};

// Function GFxUI.GFxValue.SetColorTransform
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execSetColorTransform_Parms
{
	union { struct FASColorTransform                   cxform; };                                        		// 0x0000 (0x0020) [0x0000000000000080]              ( CPF_Parm )

	 UGFxValue_execSetColorTransform_Parms() { memset(this, 0, sizeof *this); }
	~UGFxValue_execSetColorTransform_Parms() {}
};

// Function GFxUI.GFxValue.SetPosition
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execSetPosition_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 UGFxValue_execSetPosition_Parms() { memset(this, 0, sizeof *this); }
	~UGFxValue_execSetPosition_Parms() {}
};

// Function GFxUI.GFxValue.SetVisible
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execSetVisible_Parms
{
	unsigned long                                      Visible;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 UGFxValue_execSetVisible_Parms() { memset(this, 0, sizeof *this); }
	~UGFxValue_execSetVisible_Parms() {}
};

// Function GFxUI.GFxValue.SetDisplayMatrix3D
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execSetDisplayMatrix3D_Parms
{
	union { struct FMatrix                             M; };                                             		// 0x0000 (0x0040) [0x0000000000000080]              ( CPF_Parm )

	 UGFxValue_execSetDisplayMatrix3D_Parms() { memset(this, 0, sizeof *this); }
	~UGFxValue_execSetDisplayMatrix3D_Parms() {}
};

// Function GFxUI.GFxValue.SetDisplayMatrix
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execSetDisplayMatrix_Parms
{
	union { struct FMatrix                             M; };                                             		// 0x0000 (0x0040) [0x0000000000000080]              ( CPF_Parm )

	 UGFxValue_execSetDisplayMatrix_Parms() { memset(this, 0, sizeof *this); }
	~UGFxValue_execSetDisplayMatrix_Parms() {}
};

// Function GFxUI.GFxValue.SetDisplayInfo
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execSetDisplayInfo_Parms
{
	union { struct FASDisplayInfo                      D; };                                             		// 0x0000 (0x002C) [0x0000000000000080]              ( CPF_Parm )

	 UGFxValue_execSetDisplayInfo_Parms() { memset(this, 0, sizeof *this); }
	~UGFxValue_execSetDisplayInfo_Parms() {}
};

// Function GFxUI.GFxValue.GetPosition
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execGetPosition_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UGFxValue_execGetPosition_Parms() { memset(this, 0, sizeof *this); }
	~UGFxValue_execGetPosition_Parms() {}
};

// Function GFxUI.GFxValue.GetColorTransform
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execGetColorTransform_Parms
{
	union { struct FASColorTransform                   ReturnValue; };                                   		// 0x0000 (0x0020) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UGFxValue_execGetColorTransform_Parms() { memset(this, 0, sizeof *this); }
	~UGFxValue_execGetColorTransform_Parms() {}
};

// Function GFxUI.GFxValue.GetDisplayMatrix
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execGetDisplayMatrix_Parms
{
	union { struct FMatrix                             ReturnValue; };                                   		// 0x0000 (0x0040) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UGFxValue_execGetDisplayMatrix_Parms() { memset(this, 0, sizeof *this); }
	~UGFxValue_execGetDisplayMatrix_Parms() {}
};

// Function GFxUI.GFxValue.GetDisplayInfo
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execGetDisplayInfo_Parms
{
	union { struct FASDisplayInfo                      ReturnValue; };                                   		// 0x0000 (0x002C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UGFxValue_execGetDisplayInfo_Parms() { memset(this, 0, sizeof *this); }
	~UGFxValue_execGetDisplayInfo_Parms() {}
};

// Function GFxUI.GFxValue.SetString
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execSetString_Parms
{
	union { FString                                    member; };                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { FString                                    S; };                                             		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 UGFxValue_execSetString_Parms() { memset(this, 0, sizeof *this); }
	~UGFxValue_execSetString_Parms() {}
};

// Function GFxUI.GFxValue.SetNumber
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execSetNumber_Parms
{
	union { FString                                    member; };                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              F;                                                		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 UGFxValue_execSetNumber_Parms() { memset(this, 0, sizeof *this); }
	~UGFxValue_execSetNumber_Parms() {}
};

// Function GFxUI.GFxValue.SetBool
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execSetBool_Parms
{
	union { FString                                    member; };                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      B;                                                		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 UGFxValue_execSetBool_Parms() { memset(this, 0, sizeof *this); }
	~UGFxValue_execSetBool_Parms() {}
};

// Function GFxUI.GFxValue.SetFunction
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execSetFunction_Parms
{
	union { FString                                    member; };                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     context;                                          		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { struct SFXName                             fname; };                                         		// 0x0018 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 UGFxValue_execSetFunction_Parms() { memset(this, 0, sizeof *this); }
	~UGFxValue_execSetFunction_Parms() {}
};

// Function GFxUI.GFxValue.SetObject
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execSetObject_Parms
{
	union { FString                                    member; };                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UGFxValue*                                   val;                                              		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 UGFxValue_execSetObject_Parms() { memset(this, 0, sizeof *this); }
	~UGFxValue_execSetObject_Parms() {}
};

// Function GFxUI.GFxValue.Set
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execSet_Parms
{
	union { FString                                    member; };                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { struct FASValue                            arg; };                                           		// 0x0010 (0x001C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 UGFxValue_execSet_Parms() { memset(this, 0, sizeof *this); }
	~UGFxValue_execSet_Parms() {}
};

// Function GFxUI.GFxValue.GetString
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execGetString_Parms
{
	union { FString                                    member; };                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { FString                                    ReturnValue; };                                   		// 0x0010 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

	 UGFxValue_execGetString_Parms() { memset(this, 0, sizeof *this); }
	~UGFxValue_execGetString_Parms() {}
};

// Function GFxUI.GFxValue.GetNumber
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execGetNumber_Parms
{
	union { FString                                    member; };                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UGFxValue_execGetNumber_Parms() { memset(this, 0, sizeof *this); }
	~UGFxValue_execGetNumber_Parms() {}
};

// Function GFxUI.GFxValue.GetBool
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execGetBool_Parms
{
	union { FString                                    member; };                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UGFxValue_execGetBool_Parms() { memset(this, 0, sizeof *this); }
	~UGFxValue_execGetBool_Parms() {}
};

// Function GFxUI.GFxValue.GetObject
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execGetObject_Parms
{
	union { FString                                    member; };                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UClass*                                      Type;                                             		// 0x0010 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UGFxValue*                                   ReturnValue;                                      		// 0x0018 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UGFxValue_execGetObject_Parms() { memset(this, 0, sizeof *this); }
	~UGFxValue_execGetObject_Parms() {}
};

// Function GFxUI.GFxValue.Get
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execGet_Parms
{
	union { FString                                    member; };                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { struct FASValue                            ReturnValue; };                                   		// 0x0010 (0x001C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

	 UGFxValue_execGet_Parms() { memset(this, 0, sizeof *this); }
	~UGFxValue_execGet_Parms() {}
};

// Function GFxUI.GFxValue.Invoke
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execInvoke_Parms
{
	union { FString                                    member; };                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { TArray<struct FASValue>                    Args; };                                          		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { struct FASValue                            ReturnValue; };                                   		// 0x0020 (0x001C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

	 UGFxValue_execInvoke_Parms() { memset(this, 0, sizeof *this); }
	~UGFxValue_execInvoke_Parms() {}
};

// Function GFxUI.GFxAction_CloseMovie.IsValidLevelSequenceObject
// [0x00020802] ( FUNC_Event )
struct UGFxAction_CloseMovie_eventIsValidLevelSequenceObject_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UGFxAction_CloseMovie_eventIsValidLevelSequenceObject_Parms() { memset(this, 0, sizeof *this); }
	~UGFxAction_CloseMovie_eventIsValidLevelSequenceObject_Parms() {}
};

// Function GFxUI.GFxAction_GetVariable.IsValidLevelSequenceObject
// [0x00020802] ( FUNC_Event )
struct UGFxAction_GetVariable_eventIsValidLevelSequenceObject_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UGFxAction_GetVariable_eventIsValidLevelSequenceObject_Parms() { memset(this, 0, sizeof *this); }
	~UGFxAction_GetVariable_eventIsValidLevelSequenceObject_Parms() {}
};

// Function GFxUI.GFxAction_Invoke.IsValidLevelSequenceObject
// [0x00020802] ( FUNC_Event )
struct UGFxAction_Invoke_eventIsValidLevelSequenceObject_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UGFxAction_Invoke_eventIsValidLevelSequenceObject_Parms() { memset(this, 0, sizeof *this); }
	~UGFxAction_Invoke_eventIsValidLevelSequenceObject_Parms() {}
};

// Function GFxUI.GFxAction_OpenMovie.IsValidLevelSequenceObject
// [0x00020802] ( FUNC_Event )
struct UGFxAction_OpenMovie_eventIsValidLevelSequenceObject_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UGFxAction_OpenMovie_eventIsValidLevelSequenceObject_Parms() { memset(this, 0, sizeof *this); }
	~UGFxAction_OpenMovie_eventIsValidLevelSequenceObject_Parms() {}
};

// Function GFxUI.GFxAction_SetVariable.IsValidLevelSequenceObject
// [0x00020802] ( FUNC_Event )
struct UGFxAction_SetVariable_eventIsValidLevelSequenceObject_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UGFxAction_SetVariable_eventIsValidLevelSequenceObject_Parms() { memset(this, 0, sizeof *this); }
	~UGFxAction_SetVariable_eventIsValidLevelSequenceObject_Parms() {}
};

// Function GFxUI.GFxFSCmdHandler_Kismet.FSCommand
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UGFxFSCmdHandler_Kismet_eventFSCommand_Parms
{
	class UGFxMovie*                                   Movie;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    Cmd; };                                           		// 0x0008 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { FString                                    arg; };                                           		// 0x0018 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0028 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UGFxFSCmdHandler_Kismet_eventFSCommand_Parms() { memset(this, 0, sizeof *this); }
	~UGFxFSCmdHandler_Kismet_eventFSCommand_Parms() {}
};

// Function GFxUI.GFxDataStoreSubscriber.SaveSubscriberValue
// [0x00424400] ( FUNC_Native )
struct UGFxDataStoreSubscriber_execSaveSubscriberValue_Parms
{
	union { TArray<class UUIDataStore*>                out_BoundDataStores; };                           		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                BindingIndex;                                     		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UGFxDataStoreSubscriber_execSaveSubscriberValue_Parms() { memset(this, 0, sizeof *this); }
	~UGFxDataStoreSubscriber_execSaveSubscriberValue_Parms() {}
};

// Function GFxUI.GFxDataStoreSubscriber.ClearBoundDataStores
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxDataStoreSubscriber_execClearBoundDataStores_Parms
{

	 UGFxDataStoreSubscriber_execClearBoundDataStores_Parms() { memset(this, 0, sizeof *this); }
	~UGFxDataStoreSubscriber_execClearBoundDataStores_Parms() {}
};

// Function GFxUI.GFxDataStoreSubscriber.GetBoundDataStores
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UGFxDataStoreSubscriber_execGetBoundDataStores_Parms
{
	union { TArray<class UUIDataStore*>                out_BoundDataStores; };                           		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

	 UGFxDataStoreSubscriber_execGetBoundDataStores_Parms() { memset(this, 0, sizeof *this); }
	~UGFxDataStoreSubscriber_execGetBoundDataStores_Parms() {}
};

// Function GFxUI.GFxDataStoreSubscriber.NotifyDataStoreValueUpdated
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxDataStoreSubscriber_execNotifyDataStoreValueUpdated_Parms
{
	class UUIDataStore*                                SourceDataStore;                                  		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bValuesInvalidated;                               		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { struct SFXName                             PropertyTag; };                                   		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UUIDataProvider*                             SourceProvider;                                   		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ArrayIndex;                                       		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 UGFxDataStoreSubscriber_execNotifyDataStoreValueUpdated_Parms() { memset(this, 0, sizeof *this); }
	~UGFxDataStoreSubscriber_execNotifyDataStoreValueUpdated_Parms() {}
};

// Function GFxUI.GFxDataStoreSubscriber.RefreshSubscriberValue
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UGFxDataStoreSubscriber_execRefreshSubscriberValue_Parms
{
	int                                                BindingIndex;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UGFxDataStoreSubscriber_execRefreshSubscriberValue_Parms() { memset(this, 0, sizeof *this); }
	~UGFxDataStoreSubscriber_execRefreshSubscriberValue_Parms() {}
};

// Function GFxUI.GFxDataStoreSubscriber.GetDataStoreBinding
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UGFxDataStoreSubscriber_execGetDataStoreBinding_Parms
{
	int                                                BindingIndex;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	union { FString                                    ReturnValue; };                                   		// 0x0004 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

	 UGFxDataStoreSubscriber_execGetDataStoreBinding_Parms() { memset(this, 0, sizeof *this); }
	~UGFxDataStoreSubscriber_execGetDataStoreBinding_Parms() {}
};

// Function GFxUI.GFxDataStoreSubscriber.SetDataStoreBinding
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UGFxDataStoreSubscriber_execSetDataStoreBinding_Parms
{
	union { FString                                    MarkupText; };                                    		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                BindingIndex;                                     		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 UGFxDataStoreSubscriber_execSetDataStoreBinding_Parms() { memset(this, 0, sizeof *this); }
	~UGFxDataStoreSubscriber_execSetDataStoreBinding_Parms() {}
};

// Function GFxUI.GFxDataStoreSubscriber.PublishValues
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxDataStoreSubscriber_execPublishValues_Parms
{

	 UGFxDataStoreSubscriber_execPublishValues_Parms() { memset(this, 0, sizeof *this); }
	~UGFxDataStoreSubscriber_execPublishValues_Parms() {}
};



#undef LESDK_IN_GENERATED

#ifdef _MSC_VER
	#pragma pack ( pop )
#endif
