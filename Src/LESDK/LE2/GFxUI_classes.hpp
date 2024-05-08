/*
#############################################################################################
# Mass Effect 2 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.5_Beta-Rev.60-MELE
# ========================================================================================= #
# File: GFxUI_classes.hpp
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
# Constants
# ========================================================================================= #
*/


/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum GFxUI.GFxMovie.GFxRenderTextureMode
/*enum GFxRenderTextureMode
{
	RTM_Opaque                                         = 0,
	RTM_Alpha                                          = 1,
	RTM_AlphaComposite                                 = 2,
	RTM_MAX                                            = 3
};*/

// Enum GFxUI.GFxMovie.GFxTimingMode
/*enum GFxTimingMode
{
	TM_Game                                            = 0,
	TM_Real                                            = 1,
	TM_MAX                                             = 2
};*/

// Enum GFxUI.GFxMovie.ASType
/*enum ASType
{
	AS_Undefined                                       = 0,
	AS_Null                                            = 1,
	AS_Number                                          = 2,
	AS_String                                          = 3,
	AS_Boolean                                         = 4,
	AS_MAX                                             = 5
};*/

// Enum GFxUI.GFxMovie.GFxAlign
/*enum GFxAlign
{
	Align_Center                                       = 0,
	Align_TopCenter                                    = 1,
	Align_BottomCenter                                 = 2,
	Align_CenterLeft                                   = 3,
	Align_CenterRight                                  = 4,
	Align_TopLeft                                      = 5,
	Align_TopRight                                     = 6,
	Align_BottomLeft                                   = 7,
	Align_BottomRight                                  = 8,
	Align_MAX                                          = 9
};*/

// Enum GFxUI.GFxMovie.GFxScaleMode
/*enum GFxScaleMode
{
	SM_NoScale                                         = 0,
	SM_ShowAll                                         = 1,
	SM_ExactFit                                        = 2,
	SM_NoBorder                                        = 3,
	SM_MAX                                             = 4
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class GFxUI.GFxEngine
// 0x0014 (0x0074 - 0x0060)
class UGFxEngine : public UObject
{
public:
	TArray<struct FGCReference>                        GCReferences;                                     		// 0x0060 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                RefCount;                                         		// 0x0070 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class GFxUI.GFxFSCmdHandler
// 0x0000 (0x0060 - 0x0060)
class UGFxFSCmdHandler : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventFSCommand ( class UGFxMovie* Movie, FString const& Cmd, FString const& arg );
};

// Class GFxUI.GFxGameViewportClient
// 0x0010 (0x01D4 - 0x01C4)
class UGFxGameViewportClient : public UGameViewportClient
{
public:
	class UClass*                                      GFxUIControllerClass;                             		// 0x01C4 (0x0008) [0x0000000000000000]              
	class UGFxInteraction*                             GFxUIController;                                  		// 0x01CC (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventInit ( FString* OutError );
};

// Class GFxUI.GFxInteraction
// 0x0008 (0x00A8 - 0x00A0)
class UGFxInteraction : public UInteraction
{
public:
	FPointer                                           VfTable_FCallbackEventDevice;                     		// 0x00A0 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void NotifyGameSessionEnded ( );
	class UGFxMovie* GetFocusMovie ( );
	bool SetFocusMovie ( FString const& MovieName, unsigned long captureInput );
};

// Class GFxUI.GFxMovie
// 0x0147 (0x01A7 - 0x0060)
class UGFxMovie : public UObject
{
public:
	TArray<struct SFXName>                             CaptureKeys;                                      		// 0x0060 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray<struct SFXName>                             FocusIgnoreKeys;                                  		// 0x0070 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray<class UGFxValue*>                           OwnedGFxValues;                                   		// 0x0080 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray<struct FExternalTexture>                    ExternalTextures;                                 		// 0x0090 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray<struct FGFxDataStoreBinding>                DataStoreBindings;                                		// 0x00A0 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	FPointer                                           pMovie;                                           		// 0x00B0 (0x0008) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	FPointer                                           pCaptureKeys;                                     		// 0x00B8 (0x0008) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	FPointer                                           pFocusIgnoreKeys;                                 		// 0x00C0 (0x0008) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	unsigned char                                      UnknownData00[ 0x48 ];                            		// 0x00C8 (0x0048) UNKNOWN PROPERTY: MapProperty GFxUI.GFxMovie.ASUClasses
	unsigned char                                      UnknownData01[ 0x48 ];                            		// 0x0110 (0x0048) UNKNOWN PROPERTY: MapProperty GFxUI.GFxMovie.ASUObjects
	class UGFxMovieInfo*                               MovieInfo;                                        		// 0x0158 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UTextureRenderTarget2D*                      RenderTexture;                                    		// 0x0160 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class APlayerController*                           PlayerOwner;                                      		// 0x0168 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	class UGFxFSCmdHandler*                            FSCmdHandler;                                     		// 0x0170 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UObject*                                     ExternalInterface;                                		// 0x0178 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UGFxDataStoreSubscriber*                     DataStoreSubscriber;                              		// 0x0180 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	int                                                LocalPlayerOwnerIndex;                            		// 0x0188 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                NextASUObject;                                    		// 0x018C (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	int                                                nZOrder;                                          		// 0x0190 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CreationTime;                                     		// 0x0194 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fRenderTime;                                      		// 0x0198 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fAdvanceTime;                                     		// 0x019C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bDisplayWithHudOff : 1;                           		// 0x01A0 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      m_bUsingController : 1;                           		// 0x01A0 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bRequiresScaling : 1;                             		// 0x01A0 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bGammaCorrection : 1;                             		// 0x01A0 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned char                                      SceneDPG;                                         		// 0x01A4 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      TimingMode;                                       		// 0x01A5 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      RenderTextureMode;                                		// 0x01A6 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool UnregisterGFxValue ( class UGFxValue* i_val );
	bool RegisterGFxValue ( class UGFxValue* i_val );
	void ActionScriptSetFunction ( class UGFxValue* Obj, FString const& member );
	class UGFxValue* ActionScriptObject ( FString const& Path );
	FString ActionScriptString ( FString const& Path );
	float ActionScriptFloat ( FString const& Path );
	int ActionScriptInt ( FString const& Path );
	void ActionScriptVoid ( FString const& Path );
	void SetExternalInterface ( class UObject* H );
	void SetFsCmdHandler ( class UGFxFSCmdHandler* H );
	void SetVariableObject ( FString const& Path, class UGFxValue* Value );
	class UGFxValue* GetVariableObject ( FString const& Path, class UClass* Type );
	class UGFxValue* CreateArray ( );
	class UGFxValue* CreateObject ( FString const& ASClass, class UClass* Type );
	bool SetVariableStringArray ( FString const& Path, int Index, TArray<FString> const& arg );
	bool SetVariableFloatArray ( FString const& Path, int Index, TArray<float> const& arg );
	bool SetVariableIntArray ( FString const& Path, int Index, TArray<int> const& arg );
	bool SetVariableArray ( FString const& Path, int Index, TArray<struct FASValue> const& arg );
	bool GetVariableStringArray ( FString const& Path, int Index, TArray<FString>* arg );
	bool GetVariableFloatArray ( FString const& Path, int Index, TArray<float>* arg );
	bool GetVariableIntArray ( FString const& Path, int Index, TArray<int>* arg );
	bool GetVariableArray ( FString const& Path, int Index, TArray<struct FASValue>* arg );
	void SetVariableString ( FString const& Path, FString const& S );
	void SetVariableNumber ( FString const& Path, float F );
	void SetVariableBool ( FString const& Path, unsigned long B );
	void SetVariable ( FString const& Path, struct FASValue const& arg );
	FString GetVariableString ( FString const& Path );
	float GetVariableNumber ( FString const& Path );
	bool GetVariableBool ( FString const& Path );
	struct FASValue GetVariable ( FString const& Path );
	void PublishDataStoreValues ( );
	void RefreshDataStoreBindings ( );
	struct FASValue Invoke ( FString const& method, TArray<struct FASValue> const& Args );
	class APlayerController* GetPC ( );
	class ULocalPlayer* GetLP ( );
	void SetTimingMode ( unsigned char Mode );
	void Pause ( unsigned long pauseplay );
	void Update ( float fDeltaT );
	void Advance ( float Time );
	bool SetExternalTexture ( FString const& Resource, class UTexture* Texture );
	bool IsUsingGamepad ( );
	void FlushPlayerInput ( unsigned long capturekeysonly );
	void ClearFocusIgnoreKeys ( );
	void AddFocusIgnoreKey ( struct SFXName Key );
	void ClearCaptureKeys ( );
	void AddCaptureKey ( struct SFXName Key );
	void SetFocus ( unsigned long captureInput, unsigned long Focus );
	void SetSceneDPG ( unsigned char NewDPG );
	void SetPerspective3D ( struct FMatrix* matPersp );
	void SetView3D ( struct FMatrix* matView );
	void GetVisibleFrameRect ( float* x0, float* y0, float* X1, float* Y1 );
	void SetAlignment ( unsigned char A );
	void SetViewScaleMode ( unsigned char sm );
	void SetViewport ( int X, int Y, int Width, int Height );
	class UGameViewportClient* GetGameViewportClient ( );
	void SetMovieInfo ( class UGFxMovieInfo* Data );
	void eventOnClose ( );
	void Close ( unsigned long Unload );
	bool eventStart ( unsigned long StartPaused );
};

// Class GFxUI.GFxMovieInfo
// 0x0048 (0x00A8 - 0x0060)
class UGFxMovieInfo : public UObject
{
public:
	TArray<unsigned char>                              RawData;                                          		// 0x0060 (0x0014) [0x2000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0064 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	TArray<class UObject*>                             References;                                       		// 0x0074 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray<class UObject*>                             UserReferences;                                   		// 0x0084 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray<class UObject*>                             CompressedTextureReferences;                      		// 0x0094 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bUsesFontlib : 1;                                 		// 0x00A4 (0x0004) [0x0000000000020001] [0x00000001] ( CPF_Edit | CPF_EditConst )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class GFxUI.GFxValue
// 0x0030 (0x0090 - 0x0060)
class UGFxValue : public UObject
{
public:
	int                                                Value[ 0xC ];                                     		// 0x0060 (0x0030) [0x0000000000001002]              ( CPF_Const | CPF_Native )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void ActionScriptSetFunctionOn ( class UGFxValue* Target, FString const& member );
	void ActionScriptSetFunction ( FString const& member );
	TArray<class UGFxValue*> ActionScriptArray ( FString const& Path );
	class UGFxValue* ActionScriptObject ( FString const& Path );
	FString ActionScriptString ( FString const& method );
	float ActionScriptFloat ( FString const& method );
	int ActionScriptInt ( FString const& method );
	void ActionScriptVoid ( FString const& method );
	void SetElementMemberString ( int Index, FString const& member, FString const& S );
	void SetElementMemberNumber ( int Index, FString const& member, float F );
	void SetElementMemberBool ( int Index, FString const& member, unsigned long B );
	void SetElementMemberObject ( int Index, FString const& member, class UGFxValue* val );
	void SetElementMember ( int Index, FString const& member, struct FASValue const& arg );
	FString GetElementMemberString ( int Index, FString const& member );
	float GetElementMemberNumber ( int Index, FString const& member );
	bool GetElementMemberBool ( int Index, FString const& member );
	class UGFxValue* GetElementMemberObject ( int Index, FString const& member, class UClass* Type );
	struct FASValue GetElementMember ( int Index, FString const& member );
	void SetElementColorTransform ( int Index, struct FASColorTransform const& cxform );
	void SetElementPosition ( int Index, float X, float Y );
	void SetElementVisible ( int Index, unsigned long Visible );
	void SetElementDisplayMatrix ( int Index, struct FMatrix const& M );
	void SetElementDisplayInfo ( int Index, struct FASDisplayInfo const& D );
	void SetElementString ( int Index, FString const& S );
	void SetElementNumber ( int Index, float F );
	void SetElementBool ( int Index, unsigned long B );
	void SetElementObject ( int Index, class UGFxValue* val );
	void SetElement ( int Index, struct FASValue const& arg );
	struct FMatrix GetElementDisplayMatrix ( int Index );
	struct FASDisplayInfo GetElementDisplayInfo ( int Index );
	FString GetElementString ( int Index );
	float GetElementNumber ( int Index );
	bool GetElementBool ( int Index );
	class UGFxValue* GetElementObject ( int Index, class UClass* Type );
	struct FASValue GetElement ( int Index );
	void SetText ( FString const& Text );
	FString GetText ( );
	class UGFxValue* AttachMovie ( FString const& symbolname, FString const& instancename, int Depth, class UClass* Type );
	class UGFxValue* CreateEmptyMovieClip ( FString const& instancename, int Depth, class UClass* Type );
	void GotoAndStopI ( int frame );
	void GotoAndStop ( FString const& frame );
	void GotoAndPlayI ( int frame );
	void GotoAndPlay ( FString const& frame );
	void SetColorTransform ( struct FASColorTransform const& cxform );
	void SetPosition ( float X, float Y );
	void SetVisible ( unsigned long Visible );
	void SetDisplayMatrix3D ( struct FMatrix const& M );
	void SetDisplayMatrix ( struct FMatrix const& M );
	void SetDisplayInfo ( struct FASDisplayInfo const& D );
	bool GetPosition ( float* X, float* Y );
	struct FASColorTransform GetColorTransform ( );
	struct FMatrix GetDisplayMatrix ( );
	struct FASDisplayInfo GetDisplayInfo ( );
	void SetString ( FString const& member, FString const& S );
	void SetNumber ( FString const& member, float F );
	void SetBool ( FString const& member, unsigned long B );
	void SetFunction ( FString const& member, class UObject* context, struct SFXName fname );
	void SetObject ( FString const& member, class UGFxValue* val );
	void Set ( FString const& member, struct FASValue const& arg );
	FString GetString ( FString const& member );
	float GetNumber ( FString const& member );
	bool GetBool ( FString const& member );
	class UGFxValue* GetObject ( FString const& member, class UClass* Type );
	struct FASValue Get ( FString const& member );
	struct FASValue Invoke ( FString const& member, TArray<struct FASValue> const& Args );
};

// Class GFxUI.GFxAction_CloseMovie
// 0x000C (0x0104 - 0x00F8)
class UGFxAction_CloseMovie : public USequenceAction
{
public:
	class UGFxMovie*                                   Movie;                                            		// 0x00F8 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bUnload : 1;                                      		// 0x0100 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventIsValidLevelSequenceObject ( );
};

// Class GFxUI.GFxAction_GetVariable
// 0x0018 (0x0110 - 0x00F8)
class UGFxAction_GetVariable : public USequenceAction
{
public:
	FString                                            Variable;                                         		// 0x00F8 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UGFxMovie*                                   Movie;                                            		// 0x0108 (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventIsValidLevelSequenceObject ( );
};

// Class GFxUI.GFxAction_Invoke
// 0x0028 (0x0120 - 0x00F8)
class UGFxAction_Invoke : public USequenceAction
{
public:
	FString                                            MethodName;                                       		// 0x00F8 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray<struct FASValue>                            Arguments;                                        		// 0x0108 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UGFxMovie*                                   Movie;                                            		// 0x0118 (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventIsValidLevelSequenceObject ( );
};

// Class GFxUI.GFxAction_OpenMovie
// 0x000C (0x0104 - 0x00F8)
class UGFxAction_OpenMovie : public USequenceAction
{
public:
	class UGFxMovie*                                   Movie;                                            		// 0x00F8 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bTakeFocus : 1;                                   		// 0x0100 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bCaptureInput : 1;                                		// 0x0100 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bStartPaused : 1;                                 		// 0x0100 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventIsValidLevelSequenceObject ( );
};

// Class GFxUI.GFxAction_SetCaptureKeys
// 0x0018 (0x0110 - 0x00F8)
class UGFxAction_SetCaptureKeys : public USequenceAction
{
public:
	TArray<struct SFXName>                             CaptureKeys;                                      		// 0x00F8 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UGFxMovie*                                   Movie;                                            		// 0x0108 (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class GFxUI.GFxAction_SetFocus
// 0x000C (0x0104 - 0x00F8)
class UGFxAction_SetFocus : public USequenceAction
{
public:
	class UGFxMovie*                                   Movie;                                            		// 0x00F8 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bCaptureInput : 1;                                		// 0x0100 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class GFxUI.GFxAction_SetVariable
// 0x0018 (0x0110 - 0x00F8)
class UGFxAction_SetVariable : public USequenceAction
{
public:
	FString                                            Variable;                                         		// 0x00F8 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UGFxMovie*                                   Movie;                                            		// 0x0108 (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventIsValidLevelSequenceObject ( );
};

// Class GFxUI.GFxEvent_FsCommand
// 0x001A (0x0140 - 0x0126)
class UGFxEvent_FsCommand : public USequenceEvent
{
public:
	FString                                            FSCommand;                                        		// 0x0128 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UGFxMovie*                                   Movie;                                            		// 0x0138 (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class GFxUI.GFxFSCmdHandler_Kismet
// 0x0048 (0x00A8 - 0x0060)
class UGFxFSCmdHandler_Kismet : public UGFxFSCmdHandler
{
public:
	unsigned char                                      UnknownData00[ 0x48 ];                            		// 0x0060 (0x0048) UNKNOWN PROPERTY: MapProperty GFxUI.GFxFSCmdHandler_Kismet.Events

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventFSCommand ( class UGFxMovie* Movie, FString const& Cmd, FString const& arg );
};

// Class GFxUI.GFxDataStoreSubscriber
// 0x0010 (0x0070 - 0x0060)
class UGFxDataStoreSubscriber : public UObject
{
public:
	FPointer                                           VfTable_IUIDataStorePublisher;                    		// 0x0060 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	class UGFxMovie*                                   Movie;                                            		// 0x0068 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool SaveSubscriberValue ( int BindingIndex, TArray<class UUIDataStore*>* out_BoundDataStores );
	void ClearBoundDataStores ( );
	void GetBoundDataStores ( TArray<class UUIDataStore*>* out_BoundDataStores );
	void NotifyDataStoreValueUpdated ( class UUIDataStore* SourceDataStore, unsigned long bValuesInvalidated, struct SFXName PropertyTag, class UUIDataProvider* SourceProvider, int ArrayIndex );
	bool RefreshSubscriberValue ( int BindingIndex );
	FString GetDataStoreBinding ( int BindingIndex );
	void SetDataStoreBinding ( FString const& MarkupText, int BindingIndex );
	void PublishValues ( );
};



#undef LESDK_IN_GENERATED

#ifdef _MSC_VER
	#pragma pack ( pop )
#endif
