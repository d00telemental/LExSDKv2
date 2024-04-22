/*
#############################################################################################
# Mass Effect 1 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.5_Beta-Rev.60-MELE
# ========================================================================================= #
# File: Core_classes.hpp
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

#define CONST_InvAspectRatio16x9                                 0.56249
#define CONST_InvAspectRatio5x4                                  0.8
#define CONST_InvAspectRatio4x3                                  0.75
#define CONST_AspectRatio16x9                                    1.77778
#define CONST_AspectRatio5x4                                     1.25
#define CONST_AspectRatio4x3                                     1.33333
#define CONST_DegToUU                                            182.044444444444
#define CONST_UUToDeg                                            0.005493164063
#define CONST_INDEX_NONE                                         -1
#define CONST_RadToUnrRot                                        10430.3783504704527
#define CONST_UnrRotToRad                                        0.00009587379924285
#define CONST_DegToRad                                           0.017453292519943296
#define CONST_RadToDeg                                           57.295779513082321600
#define CONST_Pi                                                 3.1415926535897932
#define CONST_MaxInt                                             0x7fffffff
#define CONST_INVALID_STRINGREF                                  0

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum Core.Object.EDebugBreakType
/*enum EDebugBreakType
{
	DEBUGGER_NativeOnly                                = 0,
	DEBUGGER_ScriptOnly                                = 1,
	DEBUGGER_Both                                      = 2,
	DEBUGGER_MAX                                       = 3
};*/

// Enum Core.Object.EAutomatedRunResult
/*enum EAutomatedRunResult
{
	ARR_Unknown                                        = 0,
	ARR_OOM                                            = 1,
	ARR_Passed                                         = 2,
	ARR_MAX                                            = 3
};*/

// Enum Core.Object.EInputEvent
/*enum EInputEvent
{
	IE_Pressed                                         = 0,
	IE_Released                                        = 1,
	IE_Repeat                                          = 2,
	IE_DoubleClick                                     = 3,
	IE_Axis                                            = 4,
	IE_MAX                                             = 5
};*/

// Enum Core.Object.EInterpCurveMode
/*enum EInterpCurveMode
{
	CIM_Linear                                         = 0,
	CIM_CurveAuto                                      = 1,
	CIM_Constant                                       = 2,
	CIM_CurveUser                                      = 3,
	CIM_CurveBreak                                     = 4,
	CIM_CurveAutoClamped                               = 5,
	CIM_MAX                                            = 6
};*/

// Enum Core.Object.EInterpMethodType
/*enum EInterpMethodType
{
	IMT_UseFixedTangentEvalAndNewAutoTangents          = 0,
	IMT_UseFixedTangentEval                            = 1,
	IMT_UseBrokenTangentEval                           = 2,
	IMT_MAX                                            = 3
};*/

// Enum Core.Object.EAxis
/*enum EAxis
{
	AXIS_NONE                                          = 0,
	AXIS_X                                             = 1,
	AXIS_Y                                             = 2,
	AXIS_BLANK                                         = 3,
	AXIS_Z                                             = 4,
	AXIS_MAX                                           = 5
};*/

// Enum Core.Object.ETickingGroup
/*enum ETickingGroup
{
	TG_PreAsyncWork                                    = 0,
	TG_DuringAsyncWork                                 = 1,
	TG_PostAsyncWork                                   = 2,
	TG_PostUpdateWork                                  = 3,
	TG_PostDirtyComponentsWork                         = 4,
	TG_MAX                                             = 5
};*/

// Enum Core.Object.AlphaBlendType
/*enum AlphaBlendType
{
	ABT_Linear                                         = 0,
	ABT_Cubic                                          = 1,
	ABT_Sinusoidal                                     = 2,
	ABT_EaseInOutExponent2                             = 3,
	ABT_EaseInOutExponent3                             = 4,
	ABT_EaseInOutExponent4                             = 5,
	ABT_EaseInOutExponent5                             = 6,
	ABT_MAX                                            = 7
};*/

// Enum Core.DistributionVector.EDistributionVectorLockFlags
/*enum EDistributionVectorLockFlags
{
	EDVLF_None                                         = 0,
	EDVLF_XY                                           = 1,
	EDVLF_XZ                                           = 2,
	EDVLF_YZ                                           = 3,
	EDVLF_XYZ                                          = 4,
	EDVLF_MAX                                          = 5
};*/

// Enum Core.DistributionVector.EDistributionVectorMirrorFlags
/*enum EDistributionVectorMirrorFlags
{
	EDVMF_Same                                         = 0,
	EDVMF_Different                                    = 1,
	EDVMF_Mirror                                       = 2,
	EDVMF_MAX                                          = 3
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class Core.Object
// 0x0060
class UObject
{
public:
    // void*                            VfTableObject;                      // 0x0000 (0x08) - NOT AUTO-GENERATED PROPERTY 
    int                             ObjectInternalInteger;              // 0x0008 (0x04) - NOT AUTO-GENERATED PROPERTY 
    unsigned long long              ObjectFlags;                        // 0x000C (0x08) - NOT AUTO-GENERATED PROPERTY 
    class UObject*                  HashNext;                           // 0x0014 (0x08) - NOT AUTO-GENERATED PROPERTY 
    class UObject*                  HashOuterNext;                      // 0x001C (0x08) - NOT AUTO-GENERATED PROPERTY 
    struct FStateFrame*             StateFrame;                         // 0x0024 (0x08) - NOT AUTO-GENERATED PROPERTY 
    class UObject*                  Linker;                             // 0x002C (0x08) - NOT AUTO-GENERATED PROPERTY 
    long long                       LinkerIndex;                        // 0x0034 (0x08) - NOT AUTO-GENERATED PROPERTY 
    int                             NetIndex;                           // 0x003C (0x04) - NOT AUTO-GENERATED PROPERTY 
    class UObject*                  Outer;                              // 0x0040 (0x08) - NOT AUTO-GENERATED PROPERTY 
    struct SFXName                  Name;                               // 0x0048 (0x08) - NOT AUTO-GENERATED PROPERTY 
    class UClass*                   Class;                              // 0x0050 (0x08) - NOT AUTO-GENERATED PROPERTY 
    class UObject*                  ObjectArchetype;                    // 0x0058 (0x08) - NOT AUTO-GENERATED PROPERTY 

private:
	static UClass* pClassPointer;

public:
    static class TArray<class UObject*>* GObjObjects;

    void AppendName(FString& OutString, SFXName::FormatMode Mode) const;
    void AppendName(FStringRAII& OutString, SFXName::FormatMode Mode) const;
    void AppendNameCPP(FString& OutString) const;
    void AppendNameCPP(FStringRAII& OutString) const;
    void AppendFullName(FString& OutString, SFXName::FormatMode Mode) const;
    void AppendFullName(FStringRAII& OutString, SFXName::FormatMode Mode) const;

    FStringRAII GetName() const;
    FStringRAII GetNameCPP() const;
    FStringRAII GetFullName() const;

    FStringRAII const& StaticName() const;
    FStringRAII const& StaticNameCPP() const;
    FStringRAII const& StaticFullName() const;

    template<class T> static T* FindObject (wchar_t const* const ObjectFullName) {
        for ( int i = 0; i < (int)UObject::GObjObjects->Count(); ++i ) {
            UObject* Object = UObject::GObjObjects->GetData()[ i ];
            if ( ! Object || ! Object->IsA ( T::StaticClass() ) )
                continue;
            if ( Object->StaticFullName().Equals ( ObjectFullName, true ) )
                return (T*) Object;
        } 
        return NULL;
    }

    static class UClass* FindClass (wchar_t const* ClassFullName);
    bool IsA(class UClass* pClass) const;

    template<class T> bool IsA() const requires requires { T::StaticClass(); } {
        return this->IsA(T::StaticClass());
    }

	template<std::derived_from<UObject> T> T* Cast() {
		return this->IsA<T>() ? reinterpret_cast<T*>(this) : nullptr;
	}

	template<std::derived_from<UObject> T> T const* Cast() const {
		return this->IsA<T>() ? reinterpret_cast<T const*>(this) : nullptr;
	}

	template<std::derived_from<UObject> T> T* CastDirect() requires requires { T::StaticClass(); } {
		return this->Class == T::StaticClass() ? reinterpret_cast<T*>(this) : nullptr;
	}

	template<std::derived_from<UObject> T> T const* CastDirect() const requires requires { T::StaticClass(); } {
		return this->Class == T::StaticClass() ? reinterpret_cast<T const*>(this) : nullptr;
	}

	static UClass* StaticClass();

	int GetNetIndex ( );
	void appScreenWarningMessage ( class FString sMsg );
	void appScreenDebugMessage ( class FString sMsg );
	void GetSystemTime ( int* Year, int* Month, int* DayOfWeek, int* Day, int* Hour, int* Min, int* Sec, int* MSec );
	class FString TimeStamp ( );
	struct FVector TransformVectorByRotation ( struct FRotator SourceRotation, struct FVector SourceVector, unsigned long bInverse );
	struct SFXName GetPackageName ( );
	bool IsPendingKill ( );
	float ByteToFloat ( unsigned char inputByte, unsigned long bSigned );
	unsigned char FloatToByte ( float inputFloat, unsigned long bSigned );
	float UnwindHeading ( float A );
	float FindDeltaAngle ( float A1, float A2 );
	float GetHeadingAngle ( struct FVector Dir );
	void GetAngularDegreesFromRadians ( struct FVector2D* OutFOV );
	void GetAngularFromDotDist ( struct FVector2D DotDist, struct FVector2D* OutAngDist );
	bool GetAngularDistance ( struct FVector Direction, struct FVector AxisX, struct FVector AxisY, struct FVector AxisZ, struct FVector2D* OutAngularDist );
	bool GetDotDistance ( struct FVector Direction, struct FVector AxisX, struct FVector AxisY, struct FVector AxisZ, struct FVector2D* OutDotDist );
	bool PointInBox ( struct FVector Point, struct FVector Location, struct FVector Extent );
	struct FVector PointProjectToPlane ( struct FVector Point, struct FVector A, struct FVector B, struct FVector C );
	float PointDistToPlane ( struct FVector Point, struct FRotator Orientation, struct FVector Origin, struct FVector* out_ClosestPoint );
	float PointDistToSegment ( struct FVector Point, struct FVector StartPoint, struct FVector EndPoint, struct FVector* OutClosestPoint );
	float PointDistToLine ( struct FVector Point, struct FVector Line, struct FVector Origin, struct FVector* OutClosestPoint );
	bool GetPerObjectConfigSections ( class UClass* SearchClass, class UObject* ObjectOuter, int MaxResults, class TArray<class FString>* out_SectionNames );
	void StaticSaveConfig ( );
	void SaveConfig ( );
	class UObject* FindObject ( class FString ObjectName, class UClass* ObjectClass );
	class UObject* DynamicLoadObject ( class FString ObjectName, class UClass* ObjectClass, unsigned long MayFail );
	int GetEnumIndex ( class UObject* E, struct SFXName valuename );
	struct SFXName GetEnum ( class UObject* E, int I );
	void Disable ( struct SFXName ProbeFunc );
	void Enable ( struct SFXName ProbeFunc );
	void eventContinuedState ( );
	void eventPausedState ( );
	void eventPoppedState ( );
	void eventPushedState ( );
	void eventEndState ( struct SFXName NextStateName );
	void eventBeginState ( struct SFXName PreviousStateName );
	void DumpStateStack ( );
	void PopState ( unsigned long bPopAll );
	void PushState ( struct SFXName NewState, struct SFXName NewLabel );
	struct SFXName GetStateName ( );
	bool IsChildState ( struct SFXName TestState, struct SFXName TestParentState );
	bool IsInState ( struct SFXName TestState, unsigned long bTestStateStack );
	void GotoState ( struct SFXName NewState, struct SFXName Label, unsigned long bForceEvents, unsigned long bKeepStack );
	void eventReadSaveObject ( class UBioBaseSaveObject* Save );
	class UBioBaseSaveObject* eventWriteSaveObject ( class UObject* InOuter, class UBioBaseSaveObject* Save );
	class UClass* GetSaveObjectClass ( );
	void CopyToSaveObject ( class UBioBaseSaveObject* Save );
	void CopyFromSaveObject ( class UBioBaseSaveObject* Save );
	class UObject* BioDuplicate ( class UObject* DupObject, class UObject* InOuter );
	bool IsUTracing ( );
	void SetUTracing ( unsigned long bShouldUTrace );
	struct SFXName GetFuncName ( );
	void DebugBreak ( int UserFlags, unsigned char DebuggerType );
	void ScriptTrace ( );
	class FString ParseLocalizedPropertyPath ( class FString PathName );
	class FString Localize ( class FString SectionName, class FString KeyName, class FString PackageName );
	void WarnInternal ( class FString S );
	void LogInternal ( class FString S, struct SFXName Tag );
	struct FLinearColor Subtract_LinearColorLinearColor ( struct FLinearColor A, struct FLinearColor B );
	struct FLinearColor Multiply_LinearColorFloat ( struct FLinearColor LC, float Mult );
	struct FLinearColor ColorToLinearColor ( struct FColor OldColor );
	struct FLinearColor MakeLinearColor ( float R, float G, float B, float A );
	struct FColor LerpColor ( struct FColor A, struct FColor B, float Alpha );
	struct FColor MakeColor ( unsigned char R, unsigned char G, unsigned char B, unsigned char A );
	struct FColor Add_ColorColor ( struct FColor A, struct FColor B );
	struct FColor Multiply_ColorFloat ( struct FColor A, float B );
	struct FColor Multiply_FloatColor ( float A, struct FColor B );
	struct FColor Subtract_ColorColor ( struct FColor A, struct FColor B );
	struct FVector2D EvalInterpCurveVector2D ( struct FInterpCurveVector2D Vector2DCurve, float InVal );
	struct FVector EvalInterpCurveVector ( struct FInterpCurveVector VectorCurve, float InVal );
	float EvalInterpCurveFloat ( struct FInterpCurveFloat FloatCurve, float InVal );
	struct FVector2D vect2d ( float InX, float InY );
	float GetMappedRangeValue ( struct FVector2D InputRange, struct FVector2D OutputRange, float Value );
	float GetRangePctByValue ( struct FVector2D Range, float Value );
	float GetRangeValueByPct ( struct FVector2D Range, float Pct );
	struct FVector2D Subtract_Vector2DVector2D ( struct FVector2D A, struct FVector2D B );
	struct FVector2D Add_Vector2DVector2D ( struct FVector2D A, struct FVector2D B );
	int GetVectorSide ( struct FVector A, struct FVector B );
	float GetAngleBetween ( struct FVector A, struct FVector B );
	bool NotEqual_IntStringRef ( int A, int B );
	bool NotEqual_StringRefInt ( int A, int B );
	bool NotEqual_StringRefStringRef ( int A, int B );
	bool EqualEqual_IntStringRef ( int A, int B );
	bool EqualEqual_StringRefInt ( int A, int B );
	bool EqualEqual_StringRefStringRef ( int A, int B );
	struct FQuat Subtract_QuatQuat ( struct FQuat A, struct FQuat B );
	struct FQuat Add_QuatQuat ( struct FQuat A, struct FQuat B );
	struct FQuat QuatSlerp ( struct FQuat A, struct FQuat B, float Alpha, unsigned long bShortestPath );
	struct FRotator QuatToRotator ( struct FQuat A );
	struct FQuat QuatFromRotator ( struct FRotator A );
	struct FQuat QuatFromAxisAndAngle ( struct FVector Axis, float Angle );
	struct FQuat QuatFindBetween ( struct FVector A, struct FVector B );
	struct FVector QuatRotateVector ( struct FQuat A, struct FVector B );
	struct FQuat QuatInvert ( struct FQuat A );
	float QuatDot ( struct FQuat A, struct FQuat B );
	struct FQuat QuatProduct ( struct FQuat A, struct FQuat B );
	struct FVector MatrixGetAxis ( struct FMatrix TM, unsigned char Axis );
	struct FVector MatrixGetOrigin ( struct FMatrix TM );
	struct FRotator MatrixGetRotator ( struct FMatrix TM );
	struct FMatrix MakeRotationMatrix ( struct FRotator Rotation );
	struct FMatrix MakeRotationTranslationMatrix ( struct FVector Translation, struct FRotator Rotation );
	struct FVector InverseTransformNormal ( struct FMatrix TM, struct FVector A );
	struct FVector TransformNormal ( struct FMatrix TM, struct FVector A );
	struct FVector InverseTransformVector ( struct FMatrix TM, struct FVector A );
	struct FVector TransformVector ( struct FMatrix TM, struct FVector A );
	struct FMatrix Multiply_MatrixMatrix ( struct FMatrix A, struct FMatrix B );
	bool NotEqual_NameName ( struct SFXName A, struct SFXName B );
	bool EqualEqual_NameName ( struct SFXName A, struct SFXName B );
	bool IsA ( struct SFXName ClassName );
	bool ClassIsChildOf ( class UClass* TestClass, class UClass* ParentClass );
	bool NotEqual_InterfaceInterface ( class UInterface* A, class UInterface* B );
	bool EqualEqual_InterfaceInterface ( class UInterface* A, class UInterface* B );
	bool NotEqual_ObjectObject ( class UObject* A, class UObject* B );
	bool EqualEqual_ObjectObject ( class UObject* A, class UObject* B );
	class FString PathName ( class UObject* CheckObject );
	class TArray<class FString> SplitString ( class FString Source, class FString Delimiter, unsigned long bCullEmpty );
	void ParseStringIntoArray ( class FString BaseString, class FString delim, unsigned long bCullEmpty, class TArray<class FString>* Pieces );
	void JoinArray ( class TArray<class FString> StringArray, class FString delim, unsigned long bIgnoreBlanks, class FString* out_Result );
	class FString GetRightMost ( class FString Text );
	class FString Split ( class FString Text, class FString SplitStr, unsigned long bOmitSplitStr );
	class FString Repl ( class FString Src, class FString Match, class FString With, unsigned long bCaseSensitive );
	int Asc ( class FString S );
	class FString Chr ( int I );
	class FString Locs ( class FString S );
	class FString Caps ( class FString S );
	class FString Right ( class FString S, int I );
	class FString Left ( class FString S, int I );
	class FString Mid ( class FString S, int I, int J );
	int InStr ( class FString S, class FString T, unsigned long bSearchFromRight, unsigned long bIgnoreCase, int StartPos );
	int Len ( class FString S );
	class FString SubtractEqual_StrStr ( class FString B, class FString* A );
	class FString AtEqual_StrStr ( class FString B, class FString* A );
	class FString ConcatEqual_StrStr ( class FString B, class FString* A );
	bool ComplementEqual_StrStr ( class FString A, class FString B );
	bool NotEqual_StrStr ( class FString A, class FString B );
	bool EqualEqual_StrStr ( class FString A, class FString B );
	bool GreaterEqual_StrStr ( class FString A, class FString B );
	bool LessEqual_StrStr ( class FString A, class FString B );
	bool Greater_StrStr ( class FString A, class FString B );
	bool Less_StrStr ( class FString A, class FString B );
	class FString At_StrStr ( class FString A, class FString B );
	class FString Concat_StrStr ( class FString A, class FString B );
	struct FRotator MakeRotator ( int Pitch, int Yaw, int Roll );
	bool SClampRotAxis ( float DeltaTime, int ViewAxis, int MaxLimit, int MinLimit, float InterpolationSpeed, int* out_DeltaViewAxis );
	int ClampRotAxisFromRange ( int Current, int Min, int Max );
	int ClampRotAxisFromBase ( int Current, int Center, int MaxDelta );
	void ClampRotAxis ( int ViewAxis, int MaxLimit, int MinLimit, int* out_DeltaViewAxis );
	float RSize ( struct FRotator R );
	float RDiff ( struct FRotator A, struct FRotator B );
	int NormalizeRotAxis ( int Angle );
	struct FRotator RInterpTo ( struct FRotator Current, struct FRotator Target, float DeltaTime, float InterpSpeed, unsigned long bConstantInterpSpeed );
	struct FRotator RTransform ( struct FRotator R, struct FRotator RBasis );
	struct FRotator RSmerp ( struct FRotator A, struct FRotator B, float Alpha, unsigned long bShortestPath );
	struct FRotator RLerp ( struct FRotator A, struct FRotator B, float Alpha, unsigned long bShortestPath );
	struct FRotator Normalize ( struct FRotator Rot );
	struct FRotator OrthoRotation ( struct FVector X, struct FVector Y, struct FVector Z );
	struct FRotator RotRand ( unsigned long bRoll );
	void GetUnAxes ( struct FRotator A, struct FVector* X, struct FVector* Y, struct FVector* Z );
	void GetAxes ( struct FRotator A, struct FVector* X, struct FVector* Y, struct FVector* Z );
	bool ClockwiseFrom_IntInt ( int A, int B );
	struct FRotator SubtractEqual_RotatorRotator ( struct FRotator B, struct FRotator* A );
	struct FRotator AddEqual_RotatorRotator ( struct FRotator B, struct FRotator* A );
	struct FRotator Subtract_RotatorRotator ( struct FRotator A, struct FRotator B );
	struct FRotator Add_RotatorRotator ( struct FRotator A, struct FRotator B );
	struct FRotator DivideEqual_RotatorFloat ( float B, struct FRotator* A );
	struct FRotator MultiplyEqual_RotatorFloat ( float B, struct FRotator* A );
	struct FRotator Divide_RotatorFloat ( struct FRotator A, float B );
	struct FRotator Multiply_FloatRotator ( float A, struct FRotator B );
	struct FRotator Multiply_RotatorFloat ( struct FRotator A, float B );
	bool NotEqual_RotatorRotator ( struct FRotator A, struct FRotator B );
	bool EqualEqual_RotatorRotator ( struct FRotator A, struct FRotator B );
	bool InCylinder ( struct FVector Origin, struct FRotator Dir, float Width, struct FVector A, unsigned long bIgnoreZ );
	float NoZDot ( struct FVector A, struct FVector B );
	struct FVector ClampLength ( struct FVector V, float MaxLength );
	struct FVector VInterpTo ( struct FVector Current, struct FVector Target, float DeltaTime, float InterpSpeed );
	bool IsZero ( struct FVector A );
	struct FVector ProjectOnTo ( struct FVector X, struct FVector Y );
	struct FVector MirrorVectorByNormal ( struct FVector InVect, struct FVector InNormal );
	struct FVector VRandCone2 ( struct FVector Dir, float HorizontalConeHalfAngleRadians, float VerticalConeHalfAngleRadians );
	struct FVector VRandCone ( struct FVector Dir, float ConeHalfAngleRadians );
	struct FVector VRand ( );
	struct FVector VSmerp ( struct FVector A, struct FVector B, float Alpha );
	struct FVector VLerp ( struct FVector A, struct FVector B, float Alpha );
	struct FVector Normal ( struct FVector A );
	float VSizeSq2D ( struct FVector A );
	float VSizeSq ( struct FVector A );
	float VSize2D ( struct FVector A );
	float VSize ( struct FVector A );
	struct FVector SubtractEqual_VectorVector ( struct FVector B, struct FVector* A );
	struct FVector AddEqual_VectorVector ( struct FVector B, struct FVector* A );
	struct FVector DivideEqual_VectorFloat ( float B, struct FVector* A );
	struct FVector MultiplyEqual_VectorVector ( struct FVector B, struct FVector* A );
	struct FVector MultiplyEqual_VectorFloat ( float B, struct FVector* A );
	struct FVector Cross_VectorVector ( struct FVector A, struct FVector B );
	float Dot_VectorVector ( struct FVector A, struct FVector B );
	bool NotEqual_VectorVector ( struct FVector A, struct FVector B );
	bool EqualEqual_VectorVector ( struct FVector A, struct FVector B );
	struct FVector GreaterGreater_VectorRotator ( struct FVector A, struct FRotator B );
	struct FVector LessLess_VectorRotator ( struct FVector A, struct FRotator B );
	struct FVector Subtract_VectorVector ( struct FVector A, struct FVector B );
	struct FVector Add_VectorVector ( struct FVector A, struct FVector B );
	struct FVector Divide_VectorFloat ( struct FVector A, float B );
	struct FVector Multiply_VectorVector ( struct FVector A, struct FVector B );
	struct FVector Multiply_FloatVector ( float A, struct FVector B );
	struct FVector Multiply_VectorFloat ( struct FVector A, float B );
	struct FVector Subtract_PreVector ( struct FVector A );
	void SetBioRwBox ( struct FBioRwBox Target, struct FVector Min, struct FVector Max );
	struct FBioStrRes GetStringInfo ( int srID );
	void SetCustomToken ( int nTokenNum, class FString sToken );
	void ClearCustomTokens ( );
	bool RemoveTalkFile ( class UBioBaseTlkFile* TalkFile );
	bool AddTalkFile ( class UBioBaseTlkFile* TalkFile );
	class UObject* DynamicLoadDefaultResource ( class FString sIniKey, class UClass* ExpectedClass );
	bool GetIniArray ( class FString sFile, class FString sSection, class FString sKey, class TArray<class FString>* aResult );
	float FInterpConstantTo ( float Current, float Target, float DeltaTime, float InterpSpeed );
	float FInterpTo ( float Current, float Target, float DeltaTime, float InterpSpeed );
	float FPctByRange ( float Value, float InMin, float InMax );
	float RandRange ( float InMin, float InMax );
	float FInterpEaseInOut ( float A, float B, float Alpha, float Exp );
	float FInterpEaseOut ( float A, float B, float Alpha, float Exp );
	float FInterpEaseIn ( float A, float B, float Alpha, float Exp );
	float FCubicInterp ( float P0, float T0, float P1, float T1, float A );
	int FCeil ( float A );
	int FFloor ( float A );
	int Round ( float A );
	float Lerp ( float A, float B, float Alpha );
	float FClamp ( float V, float A, float B );
	float FMax ( float A, float B );
	float FMin ( float A, float B );
	float FRand ( );
	float Square ( float A );
	float Sqrt ( float A );
	float Loge ( float A );
	float Exp ( float A );
	float Atan2 ( float A, float B );
	float Atan ( float A );
	float Tan ( float A );
	float Acos ( float A );
	float Cos ( float A );
	float Asin ( float A );
	float Sin ( float A );
	float Abs ( float A );
	float SubtractEqual_FloatFloat ( float B, float* A );
	float AddEqual_FloatFloat ( float B, float* A );
	float DivideEqual_FloatFloat ( float B, float* A );
	float MultiplyEqual_FloatFloat ( float B, float* A );
	bool NotEqual_FloatFloat ( float A, float B );
	bool ComplementEqual_FloatFloat ( float A, float B );
	bool EqualEqual_FloatFloat ( float A, float B );
	bool GreaterEqual_FloatFloat ( float A, float B );
	bool LessEqual_FloatFloat ( float A, float B );
	bool Greater_FloatFloat ( float A, float B );
	bool Less_FloatFloat ( float A, float B );
	float Subtract_FloatFloat ( float A, float B );
	float Add_FloatFloat ( float A, float B );
	float Percent_FloatFloat ( float A, float B );
	float Divide_FloatFloat ( float A, float B );
	float Multiply_FloatFloat ( float A, float B );
	float MultiplyMultiply_FloatFloat ( float Base, float Exp );
	float Subtract_PreFloat ( float A );
	class FString ToHex ( int A );
	int Clamp ( int V, int A, int B );
	int Max ( int A, int B );
	int Min ( int A, int B );
	int Rand ( int Max );
	int SubtractSubtract_Int ( int* A );
	int AddAdd_Int ( int* A );
	int SubtractSubtract_PreInt ( int* A );
	int AddAdd_PreInt ( int* A );
	int SubtractEqual_IntInt ( int B, int* A );
	int AddEqual_IntInt ( int B, int* A );
	int DivideEqual_IntFloat ( float B, int* A );
	int MultiplyEqual_IntFloat ( float B, int* A );
	int Or_IntInt ( int A, int B );
	int Xor_IntInt ( int A, int B );
	int And_IntInt ( int A, int B );
	bool NotEqual_IntInt ( int A, int B );
	bool EqualEqual_IntInt ( int A, int B );
	bool GreaterEqual_IntInt ( int A, int B );
	bool LessEqual_IntInt ( int A, int B );
	bool Greater_IntInt ( int A, int B );
	bool Less_IntInt ( int A, int B );
	int GreaterGreaterGreater_IntInt ( int A, int B );
	int GreaterGreater_IntInt ( int A, int B );
	int LessLess_IntInt ( int A, int B );
	int Subtract_IntInt ( int A, int B );
	int Add_IntInt ( int A, int B );
	int Percent_IntInt ( int A, int B );
	int Divide_IntInt ( int A, int B );
	int Multiply_IntInt ( int A, int B );
	int Subtract_PreInt ( int A );
	int Complement_PreInt ( int A );
	unsigned char SubtractSubtract_Byte ( unsigned char* A );
	unsigned char AddAdd_Byte ( unsigned char* A );
	unsigned char SubtractSubtract_PreByte ( unsigned char* A );
	unsigned char AddAdd_PreByte ( unsigned char* A );
	unsigned char SubtractEqual_ByteByte ( unsigned char B, unsigned char* A );
	unsigned char AddEqual_ByteByte ( unsigned char B, unsigned char* A );
	unsigned char DivideEqual_ByteByte ( unsigned char B, unsigned char* A );
	unsigned char MultiplyEqual_ByteFloat ( float B, unsigned char* A );
	unsigned char MultiplyEqual_ByteByte ( unsigned char B, unsigned char* A );
	bool OrOr_BoolBool ( unsigned long A, unsigned long B );
	bool XorXor_BoolBool ( unsigned long A, unsigned long B );
	bool AndAnd_BoolBool ( unsigned long A, unsigned long B );
	bool NotEqual_BoolBool ( unsigned long A, unsigned long B );
	bool EqualEqual_BoolBool ( unsigned long A, unsigned long B );
	bool Not_PreBool ( unsigned long A );

	// Virtual Functions
	virtual void VirtualFunction00 ( );																			// 0x7FF6ABA4FBA0 (0x00)
	virtual void VirtualFunction01 ( );																			// 0x7FF6AB9C8C50 (0x08)
	virtual void VirtualFunction02 ( );																			// 0x7FF6AB9B4690 (0x10)
	virtual void VirtualFunction03 ( );																			// 0x7FF6AB9B4690 (0x18)
	virtual void VirtualFunction04 ( );																			// 0x7FF6ABAB6A70 (0x20)
	virtual void VirtualFunction05 ( );																			// 0x7FF6ABABA060 (0x28)
	virtual void VirtualFunction06 ( );																			// 0x7FF6ABA5A4B0 (0x30)
	virtual void VirtualFunction07 ( );																			// 0x7FF6ABAAD840 (0x38)
	virtual void VirtualFunction08 ( );																			// 0x7FF6ABAB7020 (0x40)
	virtual void VirtualFunction09 ( );																			// 0x7FF6AB9B4690 (0x48)
	virtual void VirtualFunction10 ( );																			// 0x7FF6AB9B4690 (0x50)
	virtual void VirtualFunction11 ( );																			// 0x7FF6ABAACB10 (0x58)
	virtual void VirtualFunction12 ( );																			// 0x7FF6AB9C8C50 (0x60)
	virtual void VirtualFunction13 ( );																			// 0x7FF6ABABBA40 (0x68)
	virtual void VirtualFunction14 ( );																			// 0x7FF6ABA544F0 (0x70)
	virtual void VirtualFunction15 ( );																			// 0x7FF6ABA5C500 (0x78)
	virtual void VirtualFunction16 ( );																			// 0x7FF6ABABB2C0 (0x80)
	virtual void VirtualFunction17 ( );																			// 0x7FF6AB9C9F10 (0x88)
	virtual void VirtualFunction18 ( );																			// 0x7FF6AB9B4690 (0x90)
	virtual void VirtualFunction19 ( );																			// 0x7FF6AB9B4690 (0x98)
	virtual void VirtualFunction20 ( );																			// 0x7FF6ABAB70A0 (0xA0)
	virtual void VirtualFunction21 ( );																			// 0x7FF6ABAB7100 (0xA8)
	virtual void VirtualFunction22 ( );																			// 0x7FF6ABAB6F90 (0xB0)
	virtual void VirtualFunction23 ( );																			// 0x7FF6ABAB6FF0 (0xB8)
	virtual void VirtualFunction24 ( );																			// 0x7FF6ABAACF90 (0xC0)
	virtual void VirtualFunction25 ( );																			// 0x7FF6ABAB7110 (0xC8)
	virtual void VirtualFunction26 ( );																			// 0x7FF6ABAB7010 (0xD0)
	virtual void VirtualFunction27 ( );																			// 0x7FF6AB9B4690 (0xD8)
	virtual void VirtualFunction28 ( );																			// 0x7FF6AB9B4690 (0xE0)
	virtual void VirtualFunction29 ( );																			// 0x7FF6ABAC1C50 (0xE8)
	virtual void VirtualFunction30 ( );																			// 0x7FF6ABAB7110 (0xF0)
	virtual void VirtualFunction31 ( );																			// 0x7FF6ABAB7010 (0xF8)
	virtual void VirtualFunction32 ( );																			// 0x7FF6ABAB7110 (0x100)
	virtual void VirtualFunction33 ( );																			// 0x7FF6ABAB7010 (0x108)
	virtual void VirtualFunction34 ( );																			// 0x7FF6ABAB0580 (0x110)
	virtual void VirtualFunction35 ( );																			// 0x7FF6ABAB9EA0 (0x118)
	virtual void VirtualFunction36 ( );																			// 0x7FF6ABAB54E0 (0x120)
	virtual void VirtualFunction37 ( );																			// 0x7FF6AB9B4690 (0x128)
	virtual void VirtualFunction38 ( );																			// 0x7FF6ABA5AB40 (0x130)
	virtual void VirtualFunction39 ( );																			// 0x7FF6ABAB3C80 (0x138)
	virtual void VirtualFunction40 ( );																			// 0x7FF6AB9CAAE0 (0x140)
	virtual void VirtualFunction41 ( );																			// 0x7FF6AB9CAB00 (0x148)
	virtual void VirtualFunction42 ( );																			// 0x7FF6AB9CAAF0 (0x150)
	virtual void VirtualFunction43 ( );																			// 0x7FF6AB9C88E0 (0x158)
	virtual void VirtualFunction44 ( );																			// 0x7FF6AB9C8830 (0x160)
	virtual void VirtualFunction45 ( );																			// 0x7FF6AB9C3750 (0x168)
	virtual void VirtualFunction46 ( );																			// 0x7FF6AB9B4690 (0x170)
	virtual void VirtualFunction47 ( );																			// 0x7FF6AB9B4690 (0x178)
	virtual void VirtualFunction48 ( );																			// 0x7FF6AB9B4690 (0x180)
	virtual void VirtualFunction49 ( );																			// 0x7FF6ABE37350 (0x188)
	virtual void VirtualFunction50 ( );																			// 0x7FF6ABE378A0 (0x190)
	virtual void VirtualFunction51 ( );																			// 0x7FF6ABAB7B50 (0x198)
	virtual void VirtualFunction52 ( );																			// 0x7FF6ABA53EB0 (0x1A0)
	virtual void VirtualFunction53 ( );																			// 0x7FF6AB9B4690 (0x1A8)
	virtual void VirtualFunction54 ( );																			// 0x7FF6AB9B4690 (0x1B0)
	virtual void VirtualFunction55 ( );																			// 0x7FF6AB9B4690 (0x1B8)
	virtual void VirtualFunction56 ( );																			// 0x7FF6AB9C88E0 (0x1C0)
	virtual void VirtualFunction57 ( );																			// 0x7FF6ABAB0C40 (0x1C8)
	virtual void VirtualFunction58 ( );																			// 0x7FF6AB9C3750 (0x1D0)
	virtual void VirtualFunction59 ( );																			// 0x7FF6ABAB3C30 (0x1D8)
	virtual void VirtualFunction60 ( );																			// 0x7FF6AB9C4480 (0x1E0)
	virtual void VirtualFunction61 ( );																			// 0x7FF6ABAC1840 (0x1E8)
	virtual void VirtualFunction62 ( );																			// 0x7FF6AB9B4690 (0x1F0)
	virtual void VirtualFunction63 ( );																			// 0x7FF6AB9B4690 (0x1F8)
	virtual void VirtualFunction64 ( );																			// 0x7FF6AB9C3750 (0x200)
	virtual void VirtualFunction65 ( );																			// 0x7FF6AB9C3750 (0x208)
	virtual void VirtualFunction66 ( );																			// 0x7FF6AB9C3750 (0x210)
	virtual void VirtualFunction67 ( );																			// 0x7FF6ABAB0E10 (0x218)
	virtual void VirtualFunction68 ( );																			// 0x7FF6AB9C88A0 (0x220)
	virtual void VirtualFunction69 ( );																			// 0x7FF6AB9C9F00 (0x228)
	virtual void VirtualFunction70 ( );																			// 0x7FF6AB9CAAB0 (0x230)
	virtual void VirtualFunction71 ( );																			// 0x7FF6ABAB3A80 (0x238)
	virtual void VirtualFunction72 ( );																			// 0x7FF6ABABB670 (0x240)
	virtual void VirtualFunction73 ( );																			// 0x7FF6ABA51800 (0x248)
	virtual void ProcessEvent ( class UFunction* pFunction, void* pParms, void* pResult = NULL );				// 0x7FF6ABA7DD20 (0x250)
};

// Class Core.TextBuffer
// 0x002C (0x008C - 0x0060)
class UTextBuffer : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x2C ];                            		// 0x0060 (0x002C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class Core.Subsystem
// 0x0008 (0x0068 - 0x0060)
class USubsystem : public UObject
{
public:
	FPointer                                           VfTable_FExec;                                    		// 0x0060 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class Core.System
// 0x00F4 (0x015C - 0x0068)
class USystem : public USubsystem
{
public:
	int                                                StaleCacheDays;                                   		// 0x0068 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MaxStaleCacheSize;                                		// 0x006C (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MaxOverallCacheSize;                              		// 0x0070 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                PackageSizeSoftLimit;                             		// 0x0074 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              AsyncIOBandwidthLimit;                            		// 0x0078 (0x0004) [0x0000000000004000]              ( CPF_Config )
	class FString                                      SavePath;                                         		// 0x007C (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	class FString                                      CachePath;                                        		// 0x008C (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	class FString                                      CacheExt;                                         		// 0x009C (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	class FString                                      ScreenShotPath;                                   		// 0x00AC (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	class TArray<class FString>                        Paths;                                            		// 0x00BC (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	class TArray<class FString>                        SeekFreePCPaths;                                  		// 0x00CC (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	class TArray<class FString>                        ScriptPaths;                                      		// 0x00DC (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	class TArray<class FString>                        FRScriptPaths;                                    		// 0x00EC (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	class TArray<class FString>                        CutdownPaths;                                     		// 0x00FC (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	class TArray<struct SFXName>                       Suppress;                                         		// 0x010C (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	class TArray<class FString>                        Extensions;                                       		// 0x011C (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	class TArray<class FString>                        SeekFreePCExtensions;                             		// 0x012C (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	class TArray<class FString>                        LocalizationPaths;                                		// 0x013C (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	class FString                                      TextureFileCacheExtension;                        		// 0x014C (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class Core.PackageMap
// 0x00A0 (0x0100 - 0x0060)
class UPackageMap : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0xA0 ];                            		// 0x0060 (0x00A0) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class Core.ObjectSerializer
// 0x0010 (0x0070 - 0x0060)
class UObjectSerializer : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x10 ];                            		// 0x0060 (0x0010) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class Core.ObjectRedirector
// 0x0008 (0x0068 - 0x0060)
class UObjectRedirector : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0060 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class Core.MetaData
// 0x0048 (0x00A8 - 0x0060)
class UMetaData : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x48 ];                            		// 0x0060 (0x0048) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class Core.Linker
// 0x014C (0x01AC - 0x0060)
class ULinker : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x14C ];                           		// 0x0060 (0x014C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class Core.LinkerSave
// 0x00F0 (0x029C - 0x01AC)
class ULinkerSave : public ULinker
{
public:
	unsigned char                                      UnknownData00[ 0xF0 ];                            		// 0x01AC (0x00F0) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class Core.LinkerLoad
// 0x05FC (0x07A8 - 0x01AC)
class ULinkerLoad : public ULinker
{
public:
	unsigned char                                      UnknownData00[ 0x5FC ];                           		// 0x01AC (0x05FC) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class Core.Interface
// 0x0000 (0x0060 - 0x0060)
class UInterface : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class Core.Field
// 0x0010 (0x0070 - 0x0060)
class UField : public UObject
{
public:
    class UField*                   SuperField;                         // 0x0060 (0x08) - NOT AUTO-GENERATED PROPERTY 
    class UField*                   Next;                               // 0x0068 (0x08) - NOT AUTO-GENERATED PROPERTY 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class Core.Struct
// 0x0068 (0x00D8 - 0x0070)
class UStruct : public UField
{
public:
    class UField*                   Children;                           // 0x0070 (0x08) - NOT AUTO-GENERATED PROPERTY 
    int                             PropertySize;                       // 0x0078 (0x04) - NOT AUTO-GENERATED PROPERTY 
    class TArray<BYTE>              Script;                             // 0x007C (0x10) - NOT AUTO-GENERATED PROPERTY 
    int                             MinAlignment;                       // 0x008C (0x04) - NOT AUTO-GENERATED PROPERTY 
    class UProperty*                RefLink;                            // 0x0090 (0x08) - NOT AUTO-GENERATED PROPERTY 
    class UProperty*                PropertyLink;                       // 0x0098 (0x08) - NOT AUTO-GENERATED PROPERTY 
    class UProperty*                ConfigLink;                         // 0x00A0 (0x08) - NOT AUTO-GENERATED PROPERTY 
    class UProperty*                ConstructorLink;                    // 0x00A8 (0x08) - NOT AUTO-GENERATED PROPERTY 
    class UProperty*                ComponentPropertyLink;              // 0x00B0 (0x08) - NOT AUTO-GENERATED PROPERTY 
    class UProperty*                TransientPropertyLink;              // 0x00B8 (0x08) - NOT AUTO-GENERATED PROPERTY 
    void*                           UnknownC0;                          // 0x00C0 (0x08) - NOT AUTO-GENERATED PROPERTY 
    class TArray<class UObject>     ScriptObjectReferences;             // 0x00C8 (0x10) - NOT AUTO-GENERATED PROPERTY 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class Core.ScriptStruct
// 0x0014 (0x00EC - 0x00D8)
class UScriptStruct : public UStruct
{
public:
    class FString                   DefaultStructPropText;              // 0x00D8 (0x10) - NOT AUTO-GENERATED PROPERTY 
    int                             StructFlags;                        // 0x00E8 (0x04) - NOT AUTO-GENERATED PROPERTY 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class Core.Function
// 0x0028 (0x0100 - 0x00D8)
class UFunction : public UStruct
{
public:
    DWORD                           FunctionFlags;                      // 0x00D8 (0x04) - NOT AUTO-GENERATED PROPERTY 
    short                           iNative;                            // 0x00DC (0x02) - NOT AUTO-GENERATED PROPERTY 
    short                           RepOffset;                          // 0x00DE (0x02) - NOT AUTO-GENERATED PROPERTY 
    struct SFXName                  FriendlyName;                       // 0x00E0 (0x08) - NOT AUTO-GENERATED PROPERTY 
    BYTE                            OperPrecedence;                     // 0x00E8 (0x01) - NOT AUTO-GENERATED PROPERTY 
    BYTE                            NumParms;                           // 0x00E9 (0x01) - NOT AUTO-GENERATED PROPERTY 
    unsigned short                  ParmsSize;                          // 0x00EA (0x02) - NOT AUTO-GENERATED PROPERTY 
    short                           ReturnValueOffset;                  // 0x00EC (0x02) - NOT AUTO-GENERATED PROPERTY 
    char                            PaddingEE[2];                       // 0x00EE (0x02) - NOT AUTO-GENERATED PROPERTY 
    void*                           FirstPropertyToInit;                // 0x00F0 (0x08) - NOT AUTO-GENERATED PROPERTY 
    void*                           Func;                               // 0x00F8 (0x08) - NOT AUTO-GENERATED PROPERTY 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class Core.Property
// 0x0060 (0x00D0 - 0x0070)
class UProperty : public UField
{
public:
    int                             ArrayDim;                           // 0x0070 (0x04) - NOT AUTO-GENERATED PROPERTY 
    int                             ElementSize;                        // 0x0074 (0x04) - NOT AUTO-GENERATED PROPERTY 
    unsigned long long              PropertyFlags;                      // 0x0078 (0x08) - NOT AUTO-GENERATED PROPERTY 
    unsigned short                  RepOffset;                          // 0x0080 (0x02) - NOT AUTO-GENERATED PROPERTY 
    unsigned short                  RepIndex;                           // 0x0082 (0x02) - NOT AUTO-GENERATED PROPERTY 
    struct SFXName                  Category;                           // 0x0084 (0x08) - NOT AUTO-GENERATED PROPERTY 
    class UEnum*                    ArraySizeEnum;                      // 0x008C (0x08) - NOT AUTO-GENERATED PROPERTY 
    int                             Offset;                             // 0x0094 (0x04) - NOT AUTO-GENERATED PROPERTY 
    class UProperty*                PropertyLinkNext;                   // 0x0098 (0x08) - NOT AUTO-GENERATED PROPERTY 
    class UProperty*                ConfigLinkNext;                     // 0x00A0 (0x08) - NOT AUTO-GENERATED PROPERTY 
    class UProperty*                ConstructorLinkNext;                // 0x00A8 (0x08) - NOT AUTO-GENERATED PROPERTY 
    class UProperty*                NextRef;                            // 0x00B0 (0x08) - NOT AUTO-GENERATED PROPERTY 
    class UProperty*                RepOwner;                           // 0x00B8 (0x08) - NOT AUTO-GENERATED PROPERTY 
    class UProperty*                ComponentPropertyLinkNext;          // 0x00C0 (0x08) - NOT AUTO-GENERATED PROPERTY 
    class UProperty*                TransientPropertyLinkNext;          // 0x00C8 (0x08) - NOT AUTO-GENERATED PROPERTY 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class Core.StructProperty
// 0x0008 (0x00D8 - 0x00D0)
class UStructProperty : public UProperty
{
public:
    class UStruct*                  Struct;                             // 0x00D0 (0x08) - NOT AUTO-GENERATED PROPERTY 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class Core.StringRefProperty
// 0x0000 (0x00D0 - 0x00D0)
class UStringRefProperty : public UProperty
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class Core.StrProperty
// 0x0000 (0x00D0 - 0x00D0)
class UStrProperty : public UProperty
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class Core.ObjectProperty
// 0x0008 (0x00D8 - 0x00D0)
class UObjectProperty : public UProperty
{
public:
    class UClass*                   PropertyClass;                      // 0x00D0 (0x08) - NOT AUTO-GENERATED PROPERTY 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class Core.ComponentProperty
// 0x0000 (0x00D8 - 0x00D8)
class UComponentProperty : public UObjectProperty
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class Core.ClassProperty
// 0x0008 (0x00E0 - 0x00D8)
class UClassProperty : public UObjectProperty
{
public:
    class UClass*                   MetaClass;                          // 0x00D8 (0x08) - NOT AUTO-GENERATED PROPERTY 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class Core.NameProperty
// 0x0000 (0x00D0 - 0x00D0)
class UNameProperty : public UProperty
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class Core.MapProperty
// 0x0010 (0x00E0 - 0x00D0)
class UMapProperty : public UProperty
{
public:
    class UProperty*                Key;                                // 0x00D0 (0x08) - NOT AUTO-GENERATED PROPERTY 
    class UProperty*                Value;                              // 0x00D8 (0x08) - NOT AUTO-GENERATED PROPERTY 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class Core.InterfaceProperty
// 0x0008 (0x00D8 - 0x00D0)
class UInterfaceProperty : public UProperty
{
public:
    class UClass*                   InterfaceClass;                     // 0x00D0 (0x08) - NOT AUTO-GENERATED PROPERTY 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class Core.IntProperty
// 0x0000 (0x00D0 - 0x00D0)
class UIntProperty : public UProperty
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class Core.FloatProperty
// 0x0000 (0x00D0 - 0x00D0)
class UFloatProperty : public UProperty
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class Core.DelegateProperty
// 0x0010 (0x00E0 - 0x00D0)
class UDelegateProperty : public UProperty
{
public:
    class UFunction*                Function;                           // 0x00D0 (0x08) - NOT AUTO-GENERATED PROPERTY 
    class UFunction*                SourceDelegate;                     // 0x00D8 (0x08) - NOT AUTO-GENERATED PROPERTY 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class Core.ByteProperty
// 0x0008 (0x00D8 - 0x00D0)
class UByteProperty : public UProperty
{
public:
    class UEnum*                    Enum;                               // 0x00D0 (0x08) - NOT AUTO-GENERATED PROPERTY 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class Core.BoolProperty
// 0x0008 (0x00D8 - 0x00D0)
class UBoolProperty : public UProperty
{
public:
    DWORD                           BitMask;                            // 0x00D0 (0x04) - NOT AUTO-GENERATED PROPERTY 
    DWORD                           Unknown0xD4;                        // 0x00D4 (0x04) - NOT AUTO-GENERATED PROPERTY 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class Core.BioMask4Property
// 0x0008 (0x00D8 - 0x00D0)
class UBioMask4Property : public UProperty
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x00D0 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class Core.ArrayProperty
// 0x0008 (0x00D8 - 0x00D0)
class UArrayProperty : public UProperty
{
public:
    class UProperty*                Inner;                              // 0x00D0 (0x08) - NOT AUTO-GENERATED PROPERTY 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class Core.Enum
// 0x0014 (0x0084 - 0x0070)
class UEnum : public UField
{
public:
    class TArray<struct SFXName>    Names;                              // 0x0070 (0x10) - NOT AUTO-GENERATED PROPERTY 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class Core.Const
// 0x0010 (0x0080 - 0x0070)
class UConst : public UField
{
public:
    class FString                   Value;                              // 0x0070 (0x10) - NOT AUTO-GENERATED PROPERTY 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class Core.Factory
// 0x0048 (0x00A8 - 0x0060)
class UFactory : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x10 ];                            		// 0x0060 (0x0010) MISSED OFFSET
	class FString                                      Description;                                      		// 0x0070 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class TArray<class FString>                        Formats;                                          		// 0x0080 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x18 ];                            		// 0x0090 (0x0018) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class Core.TextBufferFactory
// 0x0000 (0x00A8 - 0x00A8)
class UTextBufferFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class Core.Exporter
// 0x0034 (0x0094 - 0x0060)
class UExporter : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0060 (0x0008) MISSED OFFSET
	class TArray<class FString>                        FormatExtension;                                  		// 0x0068 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class TArray<class FString>                        FormatDescription;                                		// 0x0078 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0xC ];                             		// 0x0088 (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class Core.Component
// 0x0010 (0x0070 - 0x0060)
class UComponent : public UObject
{
public:
	class UClass*                                      TemplateOwnerClass;                               		// 0x0060 (0x0008) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct SFXName                                     TemplateName;                                     		// 0x0068 (0x0008) [0x0000000000001002]              ( CPF_Const | CPF_Native )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class Core.DistributionVector
// 0x000C (0x007C - 0x0070)
class UDistributionVector : public UComponent
{
public:
	FPointer                                           VfTable_FCurveEdInterface;                        		// 0x0070 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	unsigned long                                      bCanBeBaked : 1;                                  		// 0x0078 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bIsDirty : 1;                                     		// 0x0078 (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	struct FVector GetVectorValue ( float F, int LastExtreme );
};

// Class Core.DistributionFloat
// 0x000C (0x007C - 0x0070)
class UDistributionFloat : public UComponent
{
public:
	FPointer                                           VfTable_FCurveEdInterface;                        		// 0x0070 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	unsigned long                                      bCanBeBaked : 1;                                  		// 0x0078 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bIsDirty : 1;                                     		// 0x0078 (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	float GetFloatValue ( float F );
};

// Class Core.Commandlet
// 0x0054 (0x00B4 - 0x0060)
class UCommandlet : public UObject
{
public:
	class FString                                      HelpDescription;                                  		// 0x0060 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	class FString                                      HelpUsage;                                        		// 0x0070 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	class FString                                      HelpWebLink;                                      		// 0x0080 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	class TArray<class FString>                        HelpParamNames;                                   		// 0x0090 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	class TArray<class FString>                        HelpParamDescriptions;                            		// 0x00A0 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	unsigned long                                      IsServer : 1;                                     		// 0x00B0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      IsClient : 1;                                     		// 0x00B0 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      IsEditor : 1;                                     		// 0x00B0 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      LogToConsole : 1;                                 		// 0x00B0 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      ShowErrorCount : 1;                               		// 0x00B0 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      BioLoadConsoleSupport : 1;                        		// 0x00B0 (0x0004) [0x0000000000000000] [0x00000020] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	int eventMain ( class FString Params );
};

// Class Core.HelpCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class UHelpCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	int eventMain ( class FString Params );
};

// Class Core.BioCoreBaseObject
// 0x0000 (0x0060 - 0x0060)
class UBioCoreBaseObject : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class Core.BioBaseTokenParser
// 0x0010 (0x0070 - 0x0060)
class UBioBaseTokenParser : public UObject
{
public:
	class TArray<struct FBioDlgToken>                  Tokens;                                           		// 0x0060 (0x0010) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventGetStringToken ( int nActionCode, class FString* sToken );
};

// Class Core.BioBaseTlkFile
// 0x0000 (0x0060 - 0x0060)
class UBioBaseTlkFile : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class Core.BioBaseSaveObject
// 0x0018 (0x0078 - 0x0060)
class UBioBaseSaveObject : public UObject
{
public:
	class FString                                      OwnerName;                                        		// 0x0060 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      OwnerClass;                                       		// 0x0070 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool SaveBaseObjectInfo ( class UObject* O );
	void LoadObject ( class UObject* O );
	void SaveObject ( class UObject* O );
};

// Class Core.Package
// 0x00B0 (0x0110 - 0x0060)
class UPackage : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0xB0 ];                            		// 0x0060 (0x00B0) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class Core.State
// 0x0060 (0x0138 - 0x00D8)
class UState : public UStruct
{
public:
    QWORD                           ProbeMask;                          // 0x00D8 (0x08) - NOT AUTO-GENERATED PROPERTY 
    QWORD                           IgnoreMask;                         // 0x00E0 (0x08) - NOT AUTO-GENERATED PROPERTY 
    DWORD                           StateFlags;                         // 0x00E8 (0x04) - NOT AUTO-GENERATED PROPERTY 
    WORD                            LabelTableOffset;                   // 0x00EC (0x02) - NOT AUTO-GENERATED PROPERTY 
    TMap<SFXName, UFunction*>       FuncMap;                            // 0x00F0 (0x48) - NOT AUTO-GENERATED PROPERTY 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class Core.Class
// 0x00E8 (0x0220 - 0x0138)
class UClass : public UState
{
public:

    DWORD                           ClassFlags;                         // 0x0138 (0x04) - NOT AUTO-GENERATED PROPERTY 
    DWORD                           ClassCastFlags;                     // 0x013C (0x04) - NOT AUTO-GENERATED PROPERTY 
    DWORD                           ClassUnique;                        // 0x0140 (0x04) - NOT AUTO-GENERATED PROPERTY 
    UClass*                         ClassWithin;                        // 0x0144 (0x08) - NOT AUTO-GENERATED PROPERTY 
    SFXName                         ClassConfigName;                    // 0x014C (0x08) - NOT AUTO-GENERATED PROPERTY 
    TArray<FRepRecord>              ClassReps;                          // 0x0154 (0x10) - NOT AUTO-GENERATED PROPERTY 
    TArray<UField*>                 NetFields;                          // 0x0164 (0x10) - NOT AUTO-GENERATED PROPERTY 
    UObject*                        ClassDefaultObject;                 // 0x0174 (0x08) - NOT AUTO-GENERATED PROPERTY 

    unsigned char                   UnknownData17C[ 0xA4 ];             // 0x017C (0xA4) - UNKNOWN DATA

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};



#undef LESDK_IN_GENERATED

#ifdef _MSC_VER
	#pragma pack ( pop )
#endif
