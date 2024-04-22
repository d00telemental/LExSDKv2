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
	class TArray<struct FGCReference>                  GCReferences;                                     		// 0x0060 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
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

	bool eventFSCommand ( class UGFxMovie* Movie, class FString Cmd, class FString arg );
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

	bool eventInit ( class FString* OutError );
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
	bool SetFocusMovie ( class FString MovieName, unsigned long captureInput );
};

// Class GFxUI.GFxMovie
// 0x0147 (0x01A7 - 0x0060)
class UGFxMovie : public UObject
{
public:
	class TArray<struct SFXName>                       CaptureKeys;                                      		// 0x0060 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class TArray<struct SFXName>                       FocusIgnoreKeys;                                  		// 0x0070 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class TArray<class UGFxValue*>                     OwnedGFxValues;                                   		// 0x0080 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class TArray<struct FExternalTexture>              ExternalTextures;                                 		// 0x0090 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class TArray<struct FGFxDataStoreBinding>          DataStoreBindings;                                		// 0x00A0 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
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
	void ActionScriptSetFunction ( class UGFxValue* Obj, class FString member );
	class UGFxValue* ActionScriptObject ( class FString Path );
	class FString ActionScriptString ( class FString Path );
	float ActionScriptFloat ( class FString Path );
	int ActionScriptInt ( class FString Path );
	void ActionScriptVoid ( class FString Path );
	void SetExternalInterface ( class UObject* H );
	void SetFsCmdHandler ( class UGFxFSCmdHandler* H );
	void SetVariableObject ( class FString Path, class UGFxValue* Value );
	class UGFxValue* GetVariableObject ( class FString Path, class UClass* Type );
	class UGFxValue* CreateArray ( );
	class UGFxValue* CreateObject ( class FString ASClass, class UClass* Type );
	bool SetVariableStringArray ( class FString Path, int Index, class TArray<class FString> arg );
	bool SetVariableFloatArray ( class FString Path, int Index, class TArray<float> arg );
	bool SetVariableIntArray ( class FString Path, int Index, class TArray<int> arg );
	bool SetVariableArray ( class FString Path, int Index, class TArray<struct FASValue> arg );
	bool GetVariableStringArray ( class FString Path, int Index, class TArray<class FString>* arg );
	bool GetVariableFloatArray ( class FString Path, int Index, class TArray<float>* arg );
	bool GetVariableIntArray ( class FString Path, int Index, class TArray<int>* arg );
	bool GetVariableArray ( class FString Path, int Index, class TArray<struct FASValue>* arg );
	void SetVariableString ( class FString Path, class FString S );
	void SetVariableNumber ( class FString Path, float F );
	void SetVariableBool ( class FString Path, unsigned long B );
	void SetVariable ( class FString Path, struct FASValue arg );
	class FString GetVariableString ( class FString Path );
	float GetVariableNumber ( class FString Path );
	bool GetVariableBool ( class FString Path );
	struct FASValue GetVariable ( class FString Path );
	void PublishDataStoreValues ( );
	void RefreshDataStoreBindings ( );
	struct FASValue Invoke ( class FString method, class TArray<struct FASValue> Args );
	class APlayerController* GetPC ( );
	class ULocalPlayer* GetLP ( );
	void SetTimingMode ( unsigned char Mode );
	void Pause ( unsigned long pauseplay );
	void Update ( float fDeltaT );
	void Advance ( float Time );
	bool SetExternalTexture ( class FString Resource, class UTexture* Texture );
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
	class TArray<unsigned char>                        RawData;                                          		// 0x0060 (0x0014) [0x2000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0064 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	class TArray<class UObject*>                       References;                                       		// 0x0074 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class TArray<class UObject*>                       UserReferences;                                   		// 0x0084 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class TArray<class UObject*>                       CompressedTextureReferences;                      		// 0x0094 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
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

	void ActionScriptSetFunctionOn ( class UGFxValue* Target, class FString member );
	void ActionScriptSetFunction ( class FString member );
	class TArray<class UGFxValue*> ActionScriptArray ( class FString Path );
	class UGFxValue* ActionScriptObject ( class FString Path );
	class FString ActionScriptString ( class FString method );
	float ActionScriptFloat ( class FString method );
	int ActionScriptInt ( class FString method );
	void ActionScriptVoid ( class FString method );
	void SetElementMemberString ( int Index, class FString member, class FString S );
	void SetElementMemberNumber ( int Index, class FString member, float F );
	void SetElementMemberBool ( int Index, class FString member, unsigned long B );
	void SetElementMemberObject ( int Index, class FString member, class UGFxValue* val );
	void SetElementMember ( int Index, class FString member, struct FASValue arg );
	class FString GetElementMemberString ( int Index, class FString member );
	float GetElementMemberNumber ( int Index, class FString member );
	bool GetElementMemberBool ( int Index, class FString member );
	class UGFxValue* GetElementMemberObject ( int Index, class FString member, class UClass* Type );
	struct FASValue GetElementMember ( int Index, class FString member );
	void SetElementColorTransform ( int Index, struct FASColorTransform cxform );
	void SetElementPosition ( int Index, float X, float Y );
	void SetElementVisible ( int Index, unsigned long Visible );
	void SetElementDisplayMatrix ( int Index, struct FMatrix M );
	void SetElementDisplayInfo ( int Index, struct FASDisplayInfo D );
	void SetElementString ( int Index, class FString S );
	void SetElementNumber ( int Index, float F );
	void SetElementBool ( int Index, unsigned long B );
	void SetElementObject ( int Index, class UGFxValue* val );
	void SetElement ( int Index, struct FASValue arg );
	struct FMatrix GetElementDisplayMatrix ( int Index );
	struct FASDisplayInfo GetElementDisplayInfo ( int Index );
	class FString GetElementString ( int Index );
	float GetElementNumber ( int Index );
	bool GetElementBool ( int Index );
	class UGFxValue* GetElementObject ( int Index, class UClass* Type );
	struct FASValue GetElement ( int Index );
	void SetText ( class FString Text );
	class FString GetText ( );
	class UGFxValue* AttachMovie ( class FString symbolname, class FString instancename, int Depth, class UClass* Type );
	class UGFxValue* CreateEmptyMovieClip ( class FString instancename, int Depth, class UClass* Type );
	void GotoAndStopI ( int frame );
	void GotoAndStop ( class FString frame );
	void GotoAndPlayI ( int frame );
	void GotoAndPlay ( class FString frame );
	void SetColorTransform ( struct FASColorTransform cxform );
	void SetPosition ( float X, float Y );
	void SetVisible ( unsigned long Visible );
	void SetDisplayMatrix3D ( struct FMatrix M );
	void SetDisplayMatrix ( struct FMatrix M );
	void SetDisplayInfo ( struct FASDisplayInfo D );
	bool GetPosition ( float* X, float* Y );
	struct FASColorTransform GetColorTransform ( );
	struct FMatrix GetDisplayMatrix ( );
	struct FASDisplayInfo GetDisplayInfo ( );
	void SetString ( class FString member, class FString S );
	void SetNumber ( class FString member, float F );
	void SetBool ( class FString member, unsigned long B );
	void SetFunction ( class FString member, class UObject* context, struct SFXName fname );
	void SetObject ( class FString member, class UGFxValue* val );
	void Set ( class FString member, struct FASValue arg );
	class FString GetString ( class FString member );
	float GetNumber ( class FString member );
	bool GetBool ( class FString member );
	class UGFxValue* GetObject ( class FString member, class UClass* Type );
	struct FASValue Get ( class FString member );
	struct FASValue Invoke ( class FString member, class TArray<struct FASValue> Args );
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
	class FString                                      Variable;                                         		// 0x00F8 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
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
	class FString                                      MethodName;                                       		// 0x00F8 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class TArray<struct FASValue>                      Arguments;                                        		// 0x0108 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
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
	class TArray<struct SFXName>                       CaptureKeys;                                      		// 0x00F8 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
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
	class FString                                      Variable;                                         		// 0x00F8 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
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
	class FString                                      FSCommand;                                        		// 0x0128 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
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

	bool eventFSCommand ( class UGFxMovie* Movie, class FString Cmd, class FString arg );
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

	bool SaveSubscriberValue ( int BindingIndex, class TArray<class UUIDataStore*>* out_BoundDataStores );
	void ClearBoundDataStores ( );
	void GetBoundDataStores ( class TArray<class UUIDataStore*>* out_BoundDataStores );
	void NotifyDataStoreValueUpdated ( class UUIDataStore* SourceDataStore, unsigned long bValuesInvalidated, struct SFXName PropertyTag, class UUIDataProvider* SourceProvider, int ArrayIndex );
	bool RefreshSubscriberValue ( int BindingIndex );
	class FString GetDataStoreBinding ( int BindingIndex );
	void SetDataStoreBinding ( class FString MarkupText, int BindingIndex );
	void PublishValues ( );
};



#undef LESDK_IN_GENERATED

#ifdef _MSC_VER
	#pragma pack ( pop )
#endif
