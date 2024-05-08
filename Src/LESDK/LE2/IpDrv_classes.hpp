/*
#############################################################################################
# Mass Effect 2 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.5_Beta-Rev.60-MELE
# ========================================================================================= #
# File: IpDrv_classes.hpp
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

// Enum IpDrv.InternetLink.ELinkMode
/*enum ELinkMode
{
	MODE_Text                                          = 0,
	MODE_Line                                          = 1,
	MODE_Binary                                        = 2,
	MODE_MAX                                           = 3
};*/

// Enum IpDrv.InternetLink.ELineMode
/*enum ELineMode
{
	LMODE_auto                                         = 0,
	LMODE_DOS                                          = 1,
	LMODE_UNIX                                         = 2,
	LMODE_MAC                                          = 3,
	LMODE_MAX                                          = 4
};*/

// Enum IpDrv.InternetLink.EReceiveMode
/*enum EReceiveMode
{
	RMODE_Manual                                       = 0,
	RMODE_Event                                        = 1,
	RMODE_MAX                                          = 2
};*/

// Enum IpDrv.MeshBeacon.EMeshBeaconPacketType
/*enum EMeshBeaconPacketType
{
	MB_Packet_UnknownType                              = 0,
	MB_Packet_ClientNewConnectionRequest               = 1,
	MB_Packet_ClientBeginBandwidthTest                 = 2,
	MB_Packet_ClientCreateNewSessionResponse           = 3,
	MB_Packet_HostNewConnectionResponse                = 4,
	MB_Packet_HostBandwidthTestRequest                 = 5,
	MB_Packet_HostCompletedBandwidthTest               = 6,
	MB_Packet_HostTravelRequest                        = 7,
	MB_Packet_HostCreateNewSessionRequest              = 8,
	MB_Packet_DummyData                                = 9,
	MB_Packet_Heartbeat                                = 10,
	MB_Packet_MAX                                      = 11
};*/

// Enum IpDrv.MeshBeacon.EMeshBeaconConnectionResult
/*enum EMeshBeaconConnectionResult
{
	MB_ConnectionResult_Succeeded                      = 0,
	MB_ConnectionResult_Duplicate                      = 1,
	MB_ConnectionResult_Timeout                        = 2,
	MB_ConnectionResult_Error                          = 3,
	MB_ConnectionResult_MAX                            = 4
};*/

// Enum IpDrv.MeshBeacon.EMeshBeaconBandwidthTestState
/*enum EMeshBeaconBandwidthTestState
{
	MB_BandwidthTestState_NotStarted                   = 0,
	MB_BandwidthTestState_RequestPending               = 1,
	MB_BandwidthTestState_StartPending                 = 2,
	MB_BandwidthTestState_InProgress                   = 3,
	MB_BandwidthTestState_Completed                    = 4,
	MB_BandwidthTestState_Incomplete                   = 5,
	MB_BandwidthTestState_Timeout                      = 6,
	MB_BandwidthTestState_Error                        = 7,
	MB_BandwidthTestState_MAX                          = 8
};*/

// Enum IpDrv.MeshBeacon.EMeshBeaconBandwidthTestResult
/*enum EMeshBeaconBandwidthTestResult
{
	MB_BandwidthTestResult_Succeeded                   = 0,
	MB_BandwidthTestResult_Timeout                     = 1,
	MB_BandwidthTestResult_Error                       = 2,
	MB_BandwidthTestResult_MAX                         = 3
};*/

// Enum IpDrv.MeshBeacon.EMeshBeaconBandwidthTestType
/*enum EMeshBeaconBandwidthTestType
{
	MB_BandwidthTestType_Upstream                      = 0,
	MB_BandwidthTestType_Downstream                    = 1,
	MB_BandwidthTestType_RoundtripLatency              = 2,
	MB_BandwidthTestType_MAX                           = 3
};*/

// Enum IpDrv.MeshBeaconClient.EMeshBeaconClientState
/*enum EMeshBeaconClientState
{
	MBCS_None                                          = 0,
	MBCS_Connecting                                    = 1,
	MBCS_Connected                                     = 2,
	MBCS_ConnectionFailed                              = 3,
	MBCS_AwaitingResponse                              = 4,
	MBCS_Closed                                        = 5,
	MBCS_MAX                                           = 6
};*/

// Enum IpDrv.OnlineEventsInterfaceMcp.EEventUploadType
/*enum EEventUploadType
{
	EUT_GenericStats                                   = 0,
	EUT_ProfileData                                    = 1,
	EUT_HardwareData                                   = 2,
	EUT_MatchmakingData                                = 3,
	EUT_MAX                                            = 4
};*/

// Enum IpDrv.PartyBeacon.EReservationPacketType
/*enum EReservationPacketType
{
	RPT_UnknownPacketType                              = 0,
	RPT_ClientReservationRequest                       = 1,
	RPT_ClientReservationUpdateRequest                 = 2,
	RPT_ClientCancellationRequest                      = 3,
	RPT_HostReservationResponse                        = 4,
	RPT_HostReservationCountUpdate                     = 5,
	RPT_HostTravelRequest                              = 6,
	RPT_HostIsReady                                    = 7,
	RPT_HostHasCancelled                               = 8,
	RPT_Heartbeat                                      = 9,
	RPT_MAX                                            = 10
};*/

// Enum IpDrv.PartyBeacon.EPartyReservationResult
/*enum EPartyReservationResult
{
	PRR_GeneralError                                   = 0,
	PRR_PartyLimitReached                              = 1,
	PRR_IncorrectPlayerCount                           = 2,
	PRR_RequestTimedOut                                = 3,
	PRR_ReservationDuplicate                           = 4,
	PRR_ReservationNotFound                            = 5,
	PRR_ReservationAccepted                            = 6,
	PRR_MAX                                            = 7
};*/

// Enum IpDrv.PartyBeaconClient.EPartyBeaconClientState
/*enum EPartyBeaconClientState
{
	PBCS_None                                          = 0,
	PBCS_Connecting                                    = 1,
	PBCS_Connected                                     = 2,
	PBCS_ConnectionFailed                              = 3,
	PBCS_AwaitingResponse                              = 4,
	PBCS_Closed                                        = 5,
	PBCS_MAX                                           = 6
};*/

// Enum IpDrv.PartyBeaconClient.EPartyBeaconClientRequest
/*enum EPartyBeaconClientRequest
{
	PBClientRequest_NewReservation                     = 0,
	PBClientRequest_UpdateReservation                  = 1,
	PBClientRequest_MAX                                = 2
};*/

// Enum IpDrv.TcpLink.ELinkState
/*enum ELinkState
{
	STATE_Initialized                                  = 0,
	STATE_Ready                                        = 1,
	STATE_Listening                                    = 2,
	STATE_Connecting                                   = 3,
	STATE_Connected                                    = 4,
	STATE_ListenClosePending                           = 5,
	STATE_ConnectClosePending                          = 6,
	STATE_ListenClosing                                = 7,
	STATE_ConnectClosing                               = 8,
	STATE_MAX                                          = 9
};*/

// Enum IpDrv.WebRequest.ERequestType
/*enum ERequestType
{
	Request_GET                                        = 0,
	Request_POST                                       = 1,
	Request_MAX                                        = 2
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class IpDrv.ClientBeaconAddressResolver
// 0x000C (0x006C - 0x0060)
class UClientBeaconAddressResolver : public UObject
{
public:
	struct SFXName                                     BeaconName;                                       		// 0x0060 (0x0008) [0x0000000000000000]              
	int                                                BeaconPort;                                       		// 0x0068 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class IpDrv.HTTPDownload
// 0x012C (0x0BD0 - 0x0AA4)
class UHTTPDownload : public UDownload
{
public:
	FString                                            ProxyServerHost;                                  		// 0x0AA4 (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	int                                                ProxyServerPort;                                  		// 0x0AB4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned long                                      MaxRedirection : 1;                               		// 0x0AB8 (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )
	float                                              ConnectionTimeout;                                		// 0x0ABC (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned char                                      UnknownData00[ 0x110 ];                           		// 0x0AC0 (0x0110) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class IpDrv.InternetLink
// 0x0024 (0x02B0 - 0x028C)
class AInternetLink : public AInfo
{
public:
	FPointer                                           Socket;                                           		// 0x028C (0x0008) [0x0000000000000002]              ( CPF_Const )
	FPointer                                           RemoteSocket;                                     		// 0x0294 (0x0008) [0x0000000000000002]              ( CPF_Const )
	FPointer                                           PrivateResolveInfo;                               		// 0x029C (0x0008) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                Port;                                             		// 0x02A4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                DataPending;                                      		// 0x02A8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      LinkMode;                                         		// 0x02AC (0x0001) [0x0000000000000000]              
	unsigned char                                      InLineMode;                                       		// 0x02AD (0x0001) [0x0000000000000000]              
	unsigned char                                      OutLineMode;                                      		// 0x02AE (0x0001) [0x0000000000000000]              
	unsigned char                                      ReceiveMode;                                      		// 0x02AF (0x0001) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void eventResolveFailed ( );
	void eventResolved ( struct FIpAddr const& Addr );
	void GetLocalIP ( struct FIpAddr* arg );
	bool StringToIpAddr ( FString const& Str, struct FIpAddr* Addr );
	FString IpAddrToString ( struct FIpAddr const& arg );
	int GetLastError ( );
	void Resolve ( FString const& Domain );
	bool ParseURL ( FString const& URL, FString* Addr, int* PortNum, FString* LevelName, FString* EntryName );
	bool IsDataPending ( );
};

// Class IpDrv.TcpLink
// 0x003D (0x02ED - 0x02B0)
class ATcpLink : public AInternetLink
{
public:
	TArray<unsigned char>                              SendFIFO;                                         		// 0x02B0 (0x0010) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	FString                                            RecvBuf;                                          		// 0x02C0 (0x0010) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	class UClass*                                      AcceptClass;                                      		// 0x02D0 (0x0008) [0x0000000000000000]              
	struct FIpAddr                                     RemoteAddr;                                       		// 0x02D8 (0x0014) [0x0000000000000000]              
	unsigned char                                      LinkState;                                        		// 0x02EC (0x0001) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void eventReceivedBinary ( int Count, unsigned char* B );
	void eventReceivedLine ( FString const& Line );
	void eventReceivedText ( FString const& Text );
	void eventClosed ( );
	void eventOpened ( );
	void eventAccepted ( );
	int ReadBinary ( int Count, unsigned char* B );
	int ReadText ( FString* Str );
	int SendBinary ( int Count, unsigned char* B );
	int SendText ( FString const& Str );
	bool IsConnected ( );
	bool Close ( );
	bool Open ( struct FIpAddr const& Addr );
	bool Listen ( );
	int BindPort ( int PortNum, unsigned long bUseNextAvailable );
};

// Class IpDrv.MCPBase
// 0x0008 (0x0068 - 0x0060)
class UMCPBase : public UObject
{
public:
	FPointer                                           VfTable_FTickableObject;                          		// 0x0060 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class IpDrv.OnlineEventsInterfaceMcp
// 0x0034 (0x009C - 0x0068)
class UOnlineEventsInterfaceMcp : public UMCPBase
{
public:
	TArray<FPointer>                                   HttpPostObjects;                                  		// 0x0068 (0x0010) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	TArray<struct FEventUploadConfig>                  EventUploadConfigs;                               		// 0x0078 (0x0010) [0x0000000000404002]              ( CPF_Const | CPF_Config | CPF_NeedCtorLink )
	TArray<unsigned char>                              DisabledUploadTypes;                              		// 0x0088 (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	unsigned long                                      bBinaryStats : 1;                                 		// 0x0098 (0x0004) [0x0000000000004002] [0x00000001] ( CPF_Const | CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool UploadHardwareData ( struct FUniqueNetId const& UniqueId, FString const& PlayerNick );
	bool UploadGameplayEventsData ( class UOnlineGameplayEvents* Events );
	bool UploadProfileData ( struct FUniqueNetId const& UniqueId, FString const& PlayerNick, class UOnlineProfileSettings* ProfileSettings );
};

// Class IpDrv.OnlineNewsInterfaceMcp
// 0x0034 (0x009C - 0x0068)
class UOnlineNewsInterfaceMcp : public UMCPBase
{
public:
	TArray<struct FNewsCacheEntry>                     NewsItems;                                        		// 0x0068 (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray<struct FScriptDelegate>                     ReadNewsDelegates;                                		// 0x0078 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadNewsCompleted__Delegate;                  		// 0x0088 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bNeedsTicking : 1;                                		// 0x0098 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	FString GetNews ( unsigned char LocalUserNum, unsigned char NewsType );
	void ClearReadNewsCompletedDelegate ( struct FScriptDelegate ReadGameNewsDelegate );
	void AddReadNewsCompletedDelegate ( struct FScriptDelegate ReadNewsDelegate );
	void OnReadNewsCompleted ( unsigned long bWasSuccessful, unsigned char NewsType );
	bool ReadNews ( unsigned char LocalUserNum, unsigned char NewsType );
};

// Class IpDrv.OnlineTitleFileDownloadMcp
// 0x0050 (0x00B8 - 0x0068)
class UOnlineTitleFileDownloadMcp : public UMCPBase
{
public:
	TArray<struct FScriptDelegate>                     ReadTitleFileCompleteDelegates;                   		// 0x0068 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray<struct FTitleFile>                          TitleFiles;                                       		// 0x0078 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	FString                                            BaseUrl;                                          		// 0x0088 (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadTitleFileComplete__Delegate;              		// 0x0098 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	FPointer                                           HttpDownloader;                                   		// 0x00A8 (0x0008) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                CurrentIndex;                                     		// 0x00B0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              TimeOut;                                          		// 0x00B4 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool ClearDownloadedFiles ( );
	unsigned char GetTitleFileState ( FString const& Filename );
	bool GetTitleFileContents ( FString const& Filename, TArray<unsigned char>* FileContents );
	void ClearReadTitleFileCompleteDelegate ( struct FScriptDelegate ReadTitleFileCompleteDelegate );
	void AddReadTitleFileCompleteDelegate ( struct FScriptDelegate ReadTitleFileCompleteDelegate );
	bool ReadTitleFile ( FString const& FileToRead );
	void OnReadTitleFileComplete ( unsigned long bWasSuccessful, FString const& Filename );
};

// Class IpDrv.MeshBeacon
// 0x0044 (0x00A4 - 0x0060)
class UMeshBeacon : public UObject
{
public:
	FPointer                                           VfTable_FTickableObject;                          		// 0x0060 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	int                                                MeshBeaconPort;                                   		// 0x0068 (0x0004) [0x0000000000004000]              ( CPF_Config )
	FPointer                                           Socket;                                           		// 0x006C (0x0008) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	unsigned long                                      bIsInTick : 1;                                    		// 0x0074 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bWantsDeferredDestroy : 1;                        		// 0x0074 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bShouldTick : 1;                                  		// 0x0074 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              HeartbeatTimeout;                                 		// 0x0078 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              ElapsedHeartbeatTime;                             		// 0x007C (0x0004) [0x0000000000000000]              
	struct SFXName                                     BeaconName;                                       		// 0x0080 (0x0008) [0x0000000000000000]              
	int                                                SocketSendBufferSize;                             		// 0x0088 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                SocketReceiveBufferSize;                          		// 0x008C (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MaxBandwidthTestBufferSize;                       		// 0x0090 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MinBandwidthTestBufferSize;                       		// 0x0094 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              MaxBandwidthTestSendTime;                         		// 0x0098 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              MaxBandwidthTestReceiveTime;                      		// 0x009C (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MaxBandwidthHistoryEntries;                       		// 0x00A0 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void eventDestroyBeacon ( );
};

// Class IpDrv.MeshBeaconClient
// 0x00CA (0x016E - 0x00A4)
class UMeshBeaconClient : public UMeshBeacon
{
public:
	struct FClientConnectionRequest                    ClientPendingRequest;                             		// 0x00A4 (0x0028) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FOnlineGameSearchResult                     HostPendingRequest;                               		// 0x00CC (0x0010) [0x0000000000000002]              ( CPF_Const )
	FString                                            ResolverClassName;                                		// 0x00DC (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnConnectionRequestResult__Delegate;            		// 0x00EC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReceivedBandwidthTestRequest__Delegate;       		// 0x00FC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReceivedBandwidthTestResults__Delegate;       		// 0x010C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnTravelRequestReceived__Delegate;              		// 0x011C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnCreateNewSessionRequestReceived__Delegate;    		// 0x012C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      ResolverClass;                                    		// 0x013C (0x0008) [0x0000000000000000]              
	struct FClientBandwidthTestData                    CurrentBandwidthTest;                             		// 0x0144 (0x0014) [0x0000000000000000]              
	class UClientBeaconAddressResolver*                Resolver;                                         		// 0x0158 (0x0008) [0x0000000000000000]              
	float                                              ConnectionRequestTimeout;                         		// 0x0160 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              ConnectionRequestElapsedTime;                     		// 0x0164 (0x0004) [0x0000000000000000]              
	unsigned long                                      bUsingRegisteredAddr : 1;                         		// 0x0168 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned char                                      ClientBeaconState;                                		// 0x016C (0x0001) [0x0000000000000000]              
	unsigned char                                      ClientBeaconRequestType;                          		// 0x016D (0x0001) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void DebugRender ( class UCanvas* Canvas );
	void DumpInfo ( );
	bool SendHostNewGameSessionResponse ( unsigned long bSuccess, struct SFXName SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo );
	void OnCreateNewSessionRequestReceived ( struct SFXName SessionName, class UClass* SearchClass, TArray<struct FPlayerMember>* Players );
	void OnTravelRequestReceived ( struct SFXName SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo );
	void OnReceivedBandwidthTestResults ( unsigned char TestType, unsigned char TestResult, struct FConnectionBandwidthStats* BandwidthStats );
	void OnReceivedBandwidthTestRequest ( unsigned char TestType );
	void OnConnectionRequestResult ( unsigned char ConnectionResult );
	bool BeginBandwidthTest ( unsigned char TestType, int TestBufferSize );
	bool RequestConnection ( unsigned long bRegisterSecureAddress, struct FOnlineGameSearchResult* DesiredHost, struct FClientConnectionRequest* ClientRequest );
	void eventDestroyBeacon ( );
};

// Class IpDrv.MeshBeaconHost
// 0x0080 (0x0124 - 0x00A4)
class UMeshBeaconHost : public UMeshBeacon
{
public:
	struct FUniqueNetId                                OwningPlayerId;                                   		// 0x00A4 (0x0008) [0x0000000000000002]              ( CPF_Const )
	TArray<struct FClientMeshBeaconConnection>         ClientConnections;                                		// 0x00AC (0x0010) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray<struct FUniqueNetId>                        PendingPlayerConnections;                         		// 0x00BC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReceivedClientConnectionRequest__Delegate;    		// 0x00CC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnStartedBandwidthTest__Delegate;               		// 0x00DC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnFinishedBandwidthTest__Delegate;              		// 0x00EC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnAllPendingPlayersConnected__Delegate;         		// 0x00FC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReceivedClientCreateNewSessionResult__Delegate;		// 0x010C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ConnectionBacklog;                                		// 0x011C (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned long                                      bAllowBandwidthTesting : 1;                       		// 0x0120 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void DebugRender ( class UCanvas* Canvas, struct FUniqueNetId const& CurOptimalHostId );
	void DumpConnections ( );
	void OnReceivedClientCreateNewSessionResult ( unsigned long bSucceeded, struct SFXName SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo );
	bool RequestClientCreateNewSession ( struct FUniqueNetId const& PlayerNetId, struct SFXName SessionName, class UClass* SearchClass, TArray<struct FPlayerMember>* Players );
	void TellClientsToTravel ( struct SFXName SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo );
	void OnAllPendingPlayersConnected ( );
	bool AllPlayersConnected ( TArray<struct FUniqueNetId>* Players );
	int GetConnectionIndexForPlayer ( struct FUniqueNetId const& PlayerNetId );
	void SetPendingPlayerConnections ( TArray<struct FUniqueNetId>* Players );
	void OnFinishedBandwidthTest ( struct FUniqueNetId const& PlayerNetId, unsigned char TestType, unsigned char TestResult, struct FConnectionBandwidthStats* BandwidthStats );
	void OnStartedBandwidthTest ( struct FUniqueNetId const& PlayerNetId, unsigned char TestType );
	void OnReceivedClientConnectionRequest ( struct FClientMeshBeaconConnection* NewClientConnection );
	void AllowBandwidthTesting ( unsigned long bEnabled );
	void CancelPendingBandwidthTests ( );
	bool HasPendingBandwidthTest ( );
	void CancelInProgressBandwidthTests ( );
	bool HasInProgressBandwidthTest ( );
	bool RequestClientBandwidthTest ( struct FUniqueNetId const& PlayerNetId, unsigned char TestType, int TestBufferSize );
	void eventDestroyBeacon ( );
	bool InitHostBeacon ( struct FUniqueNetId const& InOwningPlayerId );
};

// Class IpDrv.OnlineSubsystemCommonImpl
// 0x001C (0x0178 - 0x015C)
class UOnlineSubsystemCommonImpl : public UOnlineSubsystem
{
public:
	FPointer                                           VoiceEngine;                                      		// 0x015C (0x0008) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	class UOnlineGameInterfaceImpl*                    GameInterfaceImpl;                                		// 0x0164 (0x0008) [0x0000000000000000]              
	int                                                MaxLocalTalkers;                                  		// 0x016C (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MaxRemoteTalkers;                                 		// 0x0170 (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned long                                      bIsUsingSpeechRecognition : 1;                    		// 0x0174 (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void GetRegisteredPlayers ( struct SFXName SessionName, TArray<struct FUniqueNetId>* OutRegisteredPlayers );
	bool IsPlayerInSession ( struct SFXName SessionName, struct FUniqueNetId const& PlayerID );
	struct FUniqueNetId eventGetPlayerUniqueNetIdFromIndex ( int UserIndex );
	FString eventGetPlayerNicknameFromIndex ( int UserIndex );
};

// Class IpDrv.OnlineGameInterfaceImpl
// 0x0186 (0x01E6 - 0x0060)
class UOnlineGameInterfaceImpl : public UObject
{
public:
	TArray<struct FScriptDelegate>                     CreateOnlineGameCompleteDelegates;                		// 0x0060 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray<struct FScriptDelegate>                     UpdateOnlineGameCompleteDelegates;                		// 0x0070 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray<struct FScriptDelegate>                     DestroyOnlineGameCompleteDelegates;               		// 0x0080 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray<struct FScriptDelegate>                     JoinOnlineGameCompleteDelegates;                  		// 0x0090 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray<struct FScriptDelegate>                     StartOnlineGameCompleteDelegates;                 		// 0x00A0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray<struct FScriptDelegate>                     EndOnlineGameCompleteDelegates;                   		// 0x00B0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray<struct FScriptDelegate>                     FindOnlineGamesCompleteDelegates;                 		// 0x00C0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray<struct FScriptDelegate>                     CancelFindOnlineGamesCompleteDelegates;           		// 0x00D0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnFindOnlineGamesComplete__Delegate;            		// 0x00E0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnCreateOnlineGameComplete__Delegate;           		// 0x00F0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnUpdateOnlineGameComplete__Delegate;           		// 0x0100 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnDestroyOnlineGameComplete__Delegate;          		// 0x0110 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnCancelFindOnlineGamesComplete__Delegate;      		// 0x0120 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnJoinOnlineGameComplete__Delegate;             		// 0x0130 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnRegisterPlayerComplete__Delegate;             		// 0x0140 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnUnregisterPlayerComplete__Delegate;           		// 0x0150 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnStartOnlineGameComplete__Delegate;            		// 0x0160 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnEndOnlineGameComplete__Delegate;              		// 0x0170 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnArbitrationRegistrationComplete__Delegate;    		// 0x0180 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGameInviteAccepted__Delegate;                 		// 0x0190 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	FPointer                                           LanBeacon;                                        		// 0x01A0 (0x0008) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	FPointer                                           SessionInfo;                                      		// 0x01A8 (0x0008) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	class UOnlineSubsystemCommonImpl*                  OwningSubsystem;                                  		// 0x01B0 (0x0008) [0x0000000000000000]              
	class UOnlineGameSettings*                         GameSettings;                                     		// 0x01B8 (0x0008) [0x0000000000000002]              ( CPF_Const )
	class UOnlineGameSearch*                           GameSearch;                                       		// 0x01C0 (0x0008) [0x0000000000000002]              ( CPF_Const )
	int                                                LanAnnouncePort;                                  		// 0x01C8 (0x0004) [0x0000000000004002]              ( CPF_Const | CPF_Config )
	int                                                LanGameUniqueId;                                  		// 0x01CC (0x0004) [0x0000000000004002]              ( CPF_Const | CPF_Config )
	int                                                LanPacketPlatformMask;                            		// 0x01D0 (0x0004) [0x0000000000004002]              ( CPF_Const | CPF_Config )
	float                                              LanQueryTimeLeft;                                 		// 0x01D4 (0x0004) [0x0000000000000000]              
	float                                              LanQueryTimeout;                                  		// 0x01D8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned char                                      LanNonce[ 0x8 ];                                  		// 0x01DC (0x0008) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      CurrentGameState;                                 		// 0x01E4 (0x0001) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      LanBeaconState;                                   		// 0x01E5 (0x0001) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool BindPlatformSpecificSessionToSearch ( unsigned char SearchingPlayerNum, class UOnlineGameSearch* SearchSettings, unsigned char* PlatformSpecificInfo );
	bool ReadPlatformSpecificSessionInfoBySessionName ( struct SFXName SessionName, unsigned char* PlatformSpecificInfo );
	bool ReadPlatformSpecificSessionInfo ( struct FOnlineGameSearchResult* DesiredGame, unsigned char* PlatformSpecificInfo );
	bool QueryNonAdvertisedData ( int StartAt, int NumberToQuery );
	bool RecalculateSkillRating ( struct SFXName SessionName, TArray<struct FUniqueNetId>* Players );
	bool AcceptGameInvite ( unsigned char LocalUserNum, struct SFXName SessionName );
	void ClearGameInviteAcceptedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate GameInviteAcceptedDelegate );
	void AddGameInviteAcceptedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate GameInviteAcceptedDelegate );
	void OnGameInviteAccepted ( struct FOnlineGameSearchResult* InviteResult );
	TArray<struct FOnlineArbitrationRegistrant> GetArbitratedPlayers ( struct SFXName SessionName );
	void ClearArbitrationRegistrationCompleteDelegate ( struct FScriptDelegate ArbitrationRegistrationCompleteDelegate );
	void AddArbitrationRegistrationCompleteDelegate ( struct FScriptDelegate ArbitrationRegistrationCompleteDelegate );
	void OnArbitrationRegistrationComplete ( struct SFXName SessionName, unsigned long bWasSuccessful );
	bool RegisterForArbitration ( struct SFXName SessionName );
	void ClearEndOnlineGameCompleteDelegate ( struct FScriptDelegate EndOnlineGameCompleteDelegate );
	void AddEndOnlineGameCompleteDelegate ( struct FScriptDelegate EndOnlineGameCompleteDelegate );
	void OnEndOnlineGameComplete ( struct SFXName SessionName, unsigned long bWasSuccessful );
	bool EndOnlineGame ( struct SFXName SessionName );
	void ClearStartOnlineGameCompleteDelegate ( struct FScriptDelegate StartOnlineGameCompleteDelegate );
	void AddStartOnlineGameCompleteDelegate ( struct FScriptDelegate StartOnlineGameCompleteDelegate );
	void OnStartOnlineGameComplete ( struct SFXName SessionName, unsigned long bWasSuccessful );
	bool StartOnlineGame ( struct SFXName SessionName );
	void ClearUnregisterPlayerCompleteDelegate ( struct FScriptDelegate UnregisterPlayerCompleteDelegate );
	void AddUnregisterPlayerCompleteDelegate ( struct FScriptDelegate UnregisterPlayerCompleteDelegate );
	void OnUnregisterPlayerComplete ( struct SFXName SessionName, struct FUniqueNetId const& PlayerID, unsigned long bWasSuccessful );
	bool UnregisterPlayer ( struct SFXName SessionName, struct FUniqueNetId const& PlayerID );
	void ClearRegisterPlayerCompleteDelegate ( struct FScriptDelegate RegisterPlayerCompleteDelegate );
	void AddRegisterPlayerCompleteDelegate ( struct FScriptDelegate RegisterPlayerCompleteDelegate );
	void OnRegisterPlayerComplete ( struct SFXName SessionName, struct FUniqueNetId const& PlayerID, unsigned long bWasSuccessful );
	bool RegisterPlayer ( struct SFXName SessionName, struct FUniqueNetId const& PlayerID, unsigned long bWasInvited );
	bool GetResolvedConnectString ( struct SFXName SessionName, FString* ConnectInfo );
	void ClearJoinOnlineGameCompleteDelegate ( struct FScriptDelegate JoinOnlineGameCompleteDelegate );
	void AddJoinOnlineGameCompleteDelegate ( struct FScriptDelegate JoinOnlineGameCompleteDelegate );
	void OnJoinOnlineGameComplete ( struct SFXName SessionName, unsigned long bWasSuccessful );
	bool JoinOnlineGame ( unsigned char PlayerNum, struct SFXName SessionName, struct FOnlineGameSearchResult* DesiredGame );
	bool FreeSearchResults ( class UOnlineGameSearch* Search );
	void ClearCancelFindOnlineGamesCompleteDelegate ( struct FScriptDelegate CancelFindOnlineGamesCompleteDelegate );
	void AddCancelFindOnlineGamesCompleteDelegate ( struct FScriptDelegate CancelFindOnlineGamesCompleteDelegate );
	void OnCancelFindOnlineGamesComplete ( unsigned long bWasSuccessful );
	bool CancelFindOnlineGames ( );
	void ClearFindOnlineGamesCompleteDelegate ( struct FScriptDelegate FindOnlineGamesCompleteDelegate );
	void AddFindOnlineGamesCompleteDelegate ( struct FScriptDelegate FindOnlineGamesCompleteDelegate );
	bool FindOnlineGames ( unsigned char SearchingPlayerNum, class UOnlineGameSearch* SearchSettings );
	void ClearDestroyOnlineGameCompleteDelegate ( struct FScriptDelegate DestroyOnlineGameCompleteDelegate );
	void AddDestroyOnlineGameCompleteDelegate ( struct FScriptDelegate DestroyOnlineGameCompleteDelegate );
	void OnDestroyOnlineGameComplete ( struct SFXName SessionName, unsigned long bWasSuccessful );
	bool DestroyOnlineGame ( struct SFXName SessionName );
	void ClearUpdateOnlineGameCompleteDelegate ( struct FScriptDelegate UpdateOnlineGameCompleteDelegate );
	void AddUpdateOnlineGameCompleteDelegate ( struct FScriptDelegate UpdateOnlineGameCompleteDelegate );
	void OnUpdateOnlineGameComplete ( struct SFXName SessionName, unsigned long bWasSuccessful );
	bool UpdateOnlineGame ( struct SFXName SessionName, class UOnlineGameSettings* UpdatedGameSettings, unsigned long bShouldRefreshOnlineData );
	void ClearCreateOnlineGameCompleteDelegate ( struct FScriptDelegate CreateOnlineGameCompleteDelegate );
	void AddCreateOnlineGameCompleteDelegate ( struct FScriptDelegate CreateOnlineGameCompleteDelegate );
	void OnCreateOnlineGameComplete ( struct SFXName SessionName, unsigned long bWasSuccessful );
	bool CreateOnlineGame ( unsigned char HostingPlayerNum, struct SFXName SessionName, class UOnlineGameSettings* NewGameSettings );
	class UOnlineGameSearch* GetGameSearch ( );
	class UOnlineGameSettings* GetGameSettings ( struct SFXName SessionName );
	void OnFindOnlineGamesComplete ( unsigned long bWasSuccessful );
};

// Class IpDrv.PartyBeacon
// 0x0038 (0x0098 - 0x0060)
class UPartyBeacon : public UObject
{
public:
	FPointer                                           VfTable_FTickableObject;                          		// 0x0060 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	int                                                PartyBeaconPort;                                  		// 0x0068 (0x0004) [0x0000000000004000]              ( CPF_Config )
	FPointer                                           Socket;                                           		// 0x006C (0x0008) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	unsigned long                                      bIsInTick : 1;                                    		// 0x0074 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bWantsDeferredDestroy : 1;                        		// 0x0074 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bShouldTick : 1;                                  		// 0x0074 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              HeartbeatTimeout;                                 		// 0x0078 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              ElapsedHeartbeatTime;                             		// 0x007C (0x0004) [0x0000000000000000]              
	struct SFXName                                     BeaconName;                                       		// 0x0080 (0x0008) [0x0000000000000000]              
	struct FScriptDelegate                             __OnDestroyComplete__Delegate;                    		// 0x0088 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void OnDestroyComplete ( );
	void eventDestroyBeacon ( );
};

// Class IpDrv.PartyBeaconClient
// 0x00A6 (0x013E - 0x0098)
class UPartyBeaconClient : public UPartyBeacon
{
public:
	struct FPartyReservation                           PendingRequest;                                   		// 0x0098 (0x001C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FOnlineGameSearchResult                     HostPendingRequest;                               		// 0x00B4 (0x0010) [0x0000000000000002]              ( CPF_Const )
	FString                                            ResolverClassName;                                		// 0x00C4 (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReservationRequestComplete__Delegate;         		// 0x00D4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReservationCountUpdated__Delegate;            		// 0x00E4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnTravelRequestReceived__Delegate;              		// 0x00F4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnHostIsReady__Delegate;                        		// 0x0104 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnHostHasCancelled__Delegate;                   		// 0x0114 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      ResolverClass;                                    		// 0x0124 (0x0008) [0x0000000000000000]              
	class UClientBeaconAddressResolver*                Resolver;                                         		// 0x012C (0x0008) [0x0000000000000000]              
	float                                              ReservationRequestTimeout;                        		// 0x0134 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              ReservationRequestElapsedTime;                    		// 0x0138 (0x0004) [0x0000000000000000]              
	unsigned char                                      ClientBeaconState;                                		// 0x013C (0x0001) [0x0000000000000000]              
	unsigned char                                      ClientBeaconRequestType;                          		// 0x013D (0x0001) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void eventDestroyBeacon ( );
	bool CancelReservation ( struct FUniqueNetId const& CancellingPartyLeader );
	bool RequestReservationUpdate ( struct FUniqueNetId const& RequestingPartyLeader, struct FOnlineGameSearchResult* DesiredHost, TArray<struct FPlayerReservation>* PlayersToAdd );
	bool RequestReservation ( struct FUniqueNetId const& RequestingPartyLeader, struct FOnlineGameSearchResult* DesiredHost, TArray<struct FPlayerReservation>* Players );
	void OnHostHasCancelled ( );
	void OnHostIsReady ( );
	void OnTravelRequestReceived ( struct SFXName SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo );
	void OnReservationCountUpdated ( int ReservationRemaining );
	void OnReservationRequestComplete ( unsigned char ReservationResult );
};

// Class IpDrv.PartyBeaconHost
// 0x0074 (0x010C - 0x0098)
class UPartyBeaconHost : public UPartyBeacon
{
public:
	TArray<struct FClientBeaconConnection>             Clients;                                          		// 0x0098 (0x0010) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray<struct FPartyReservation>                   Reservations;                                     		// 0x00A8 (0x0010) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReservationChange__Delegate;                  		// 0x00B8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReservationsFull__Delegate;                   		// 0x00C8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnClientCancellationReceived__Delegate;         		// 0x00D8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct SFXName                                     OnlineSessionName;                                		// 0x00E8 (0x0008) [0x0000000000000000]              
	int                                                NumTeams;                                         		// 0x00F0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                NumPlayersPerTeam;                                		// 0x00F4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                NumReservations;                                  		// 0x00F8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                NumConsumedReservations;                          		// 0x00FC (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                ConnectionBacklog;                                		// 0x0100 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                ReservedHostTeamNum;                              		// 0x0104 (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      bBestFitTeamAssignment : 1;                       		// 0x0108 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void DumpReservations ( );
	int GetMaxAvailableTeamSize ( );
	void GetPartyLeaders ( TArray<struct FUniqueNetId>* PartyLeaders );
	void GetPlayers ( TArray<struct FUniqueNetId>* Players );
	void AppendReservationSkillsToSearch ( class UOnlineGameSearch* Search );
	void eventUnregisterParty ( struct FUniqueNetId const& PartyLeader );
	void eventUnregisterPartyMembers ( );
	void eventRegisterPartyMembers ( );
	bool AreReservationsFull ( );
	void TellClientsHostHasCancelled ( );
	void TellClientsHostIsReady ( );
	void TellClientsToTravel ( struct SFXName SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo );
	void eventDestroyBeacon ( );
	void OnClientCancellationReceived ( struct FUniqueNetId const& PartyLeader );
	void OnReservationsFull ( );
	void OnReservationChange ( );
	void HandlePlayerLogout ( struct FUniqueNetId const& PlayerID, unsigned long bMaintainParty );
	unsigned char UpdatePartyReservationEntry ( struct FUniqueNetId const& PartyLeader, TArray<struct FPlayerReservation>* PlayerMembers );
	unsigned char AddPartyReservationEntry ( struct FUniqueNetId const& PartyLeader, int TeamNum, unsigned long bIsHost, TArray<struct FPlayerReservation>* PlayerMembers );
	bool InitHostBeacon ( int InNumTeams, int InNumPlayersPerTeam, int InNumReservations, struct SFXName InSessionName );
};

// Class IpDrv.TcpipConnection
// 0x0028 (0x6094 - 0x606C)
class UTcpipConnection : public UNetConnection
{
public:
	unsigned char                                      UnknownData00[ 0x28 ];                            		// 0x606C (0x0028) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class IpDrv.TcpNetDriver
// 0x0024 (0x01F0 - 0x01CC)
class UTcpNetDriver : public UNetDriver
{
public:
	unsigned long                                      AllowPlayerPortUnreach : 1;                       		// 0x01CC (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )
	unsigned long                                      LogPortUnreach : 1;                               		// 0x01D0 (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )
	unsigned char                                      UnknownData00[ 0x1C ];                            		// 0x01D4 (0x001C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class IpDrv.WebRequest
// 0x00E5 (0x0145 - 0x0060)
class UWebRequest : public UObject
{
public:
	struct FMap_Mirror                                 HeaderMap;                                        		// 0x0060 (0x0048) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FMap_Mirror                                 VariableMap;                                      		// 0x00A8 (0x0048) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	FString                                            RemoteAddr;                                       		// 0x00F0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	FString                                            URI;                                              		// 0x0100 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	FString                                            UserName;                                         		// 0x0110 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	FString                                            Password;                                         		// 0x0120 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	FString                                            ContentType;                                      		// 0x0130 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ContentLength;                                    		// 0x0140 (0x0004) [0x0000000000000000]              
	unsigned char                                      RequestType;                                      		// 0x0144 (0x0001) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	int GetHexDigit ( FString const& D );
	void DecodeFormData ( FString const& Data );
	void ProcessHeaderString ( FString const& S );
	void Dump ( );
	void GetVariables ( TArray<FString>* varNames );
	FString GetVariableNumber ( FString const& VariableName, int Number, FString const& DefaultValue );
	int GetVariableCount ( FString const& VariableName );
	FString GetVariable ( FString const& VariableName, FString const& DefaultValue );
	void AddVariable ( FString const& VariableName, FString const& Value );
	void GetHeaders ( TArray<FString>* headers );
	FString GetHeader ( FString const& HeaderName, FString const& DefaultValue );
	void AddHeader ( FString const& HeaderName, FString const& Value );
	FString EncodeBase64 ( FString const& Decoded );
	FString DecodeBase64 ( FString const& Encoded );
};

// Class IpDrv.WebResponse
// 0x0084 (0x00E4 - 0x0060)
class UWebResponse : public UObject
{
public:
	struct FMap_Mirror                                 ReplacementMap;                                   		// 0x0060 (0x0048) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	TArray<FString>                                    headers;                                          		// 0x00A8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	FString                                            IncludePath;                                      		// 0x00B8 (0x0010) [0x0000000000404002]              ( CPF_Const | CPF_Config | CPF_NeedCtorLink )
	FString                                            CharSet;                                          		// 0x00C8 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	class AWebConnection*                              Connection;                                       		// 0x00D8 (0x0008) [0x0000000000000000]              
	unsigned long                                      bSentText : 1;                                    		// 0x00E0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bSentResponse : 1;                                		// 0x00E0 (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool SentResponse ( );
	bool SentText ( );
	void Redirect ( FString const& URL );
	void SendStandardHeaders ( FString const& ContentType, unsigned long bCache );
	void HTTPError ( int ErrorNum, FString const& Data );
	void SendHeaders ( );
	void AddHeader ( FString const& Header, unsigned long bReplace );
	void HTTPHeader ( FString const& Header );
	void HTTPResponse ( FString const& Header );
	void FailAuthentication ( FString const& Realm );
	bool SendCachedFile ( FString const& Filename, FString const& ContentType );
	void eventSendBinary ( int Count, unsigned char* B );
	void eventSendText ( FString const& Text, unsigned long bNoCRLF );
	void Dump ( );
	FString GetHTTPExpiration ( int OffsetSeconds );
	FString LoadParsedUHTM ( FString const& Filename );
	bool IncludeBinaryFile ( FString const& Filename );
	bool IncludeUHTM ( FString const& Filename );
	void ClearSubst ( );
	void Subst ( FString const& Variable, FString const& Value, unsigned long bClear );
	bool FileExists ( FString const& Filename );
};

// Class IpDrv.WebApplication
// 0x0020 (0x0080 - 0x0060)
class UWebApplication : public UObject
{
public:
	FString                                            Path;                                             		// 0x0060 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class AWorldInfo*                                  WorldInfo;                                        		// 0x0070 (0x0008) [0x0000000000000000]              
	class AWebServer*                                  WebServer;                                        		// 0x0078 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void PostQuery ( class UWebRequest* Request, class UWebResponse* Response );
	void Query ( class UWebRequest* Request, class UWebResponse* Response );
	bool PreQuery ( class UWebRequest* Request, class UWebResponse* Response );
	void CleanupApp ( );
	void Cleanup ( );
	void Init ( );
};

// Class IpDrv.WebServer
// 0x01CF (0x04BC - 0x02ED)
class AWebServer : public ATcpLink
{
public:
	FString                                            Applications[ 0xA ];                              		// 0x02F0 (0x00A0) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	FString                                            ApplicationPaths[ 0xA ];                          		// 0x0390 (0x00A0) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	FString                                            ServerName;                                       		// 0x0430 (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	FString                                            ServerURL;                                        		// 0x0440 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UWebApplication*                             ApplicationObjects[ 0xA ];                        		// 0x0450 (0x0050) [0x0000000000000000]              
	int                                                ListenPort;                                       		// 0x04A0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MaxConnections;                                   		// 0x04A4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                DefaultApplication;                               		// 0x04A8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                ExpirationSeconds;                                		// 0x04AC (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                ConnectionCount;                                  		// 0x04B0 (0x0004) [0x0000000000000000]              
	int                                                ConnId;                                           		// 0x04B4 (0x0004) [0x0000000000000000]              
	unsigned long                                      bEnabled : 1;                                     		// 0x04B8 (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	class UWebApplication* GetApplication ( FString const& URI, FString* SubURI );
	void eventLostChild ( class AActor* C );
	void eventGainedChild ( class AActor* C );
	void eventDestroyed ( );
	void PostBeginPlay ( );
};

// Class IpDrv.HelloWeb
// 0x0000 (0x0080 - 0x0080)
class UHelloWeb : public UWebApplication
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void eventQuery ( class UWebRequest* Request, class UWebResponse* Response );
	void Init ( );
};

// Class IpDrv.ImageServer
// 0x0000 (0x0080 - 0x0080)
class UImageServer : public UWebApplication
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void eventQuery ( class UWebRequest* Request, class UWebResponse* Response );
};

// Class IpDrv.IniLocPatcherMcp
// 0x0010 (0x00A0 - 0x0090)
class UIniLocPatcherMcp : public UIniLocPatcher
{
public:
	struct SFXName                                     McpDownloaderName;                                		// 0x0090 (0x0008) [0x0000000000004000]              ( CPF_Config )
	class UOnlineTitleFileDownloadMcp*                 Downloader;                                       		// 0x0098 (0x0008) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void ClearCachedFiles ( );
	void ClearReadFileDelegate ( struct FScriptDelegate ReadTitleFileCompleteDelegate );
	void AddReadFileDelegate ( struct FScriptDelegate ReadTitleFileCompleteDelegate );
	void OnReadFileComplete ( unsigned long bWasSuccessful, FString const& Filename );
	void DownloadFiles ( );
	void Init ( );
};

// Class IpDrv.WebConnection
// 0x0047 (0x0334 - 0x02ED)
class AWebConnection : public ATcpLink
{
public:
	FString                                            ReceivedData;                                     		// 0x02F0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class AWebServer*                                  WebServer;                                        		// 0x0300 (0x0008) [0x0000000000000000]              
	class UWebRequest*                                 Request;                                          		// 0x0308 (0x0008) [0x0000000000000000]              
	class UWebResponse*                                Response;                                         		// 0x0310 (0x0008) [0x0000000000000000]              
	class UWebApplication*                             Application;                                      		// 0x0318 (0x0008) [0x0000000000000000]              
	int                                                RawBytesExpecting;                                		// 0x0320 (0x0004) [0x0000000000000000]              
	int                                                MaxValueLength;                                   		// 0x0324 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MaxLineLength;                                    		// 0x0328 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                ConnId;                                           		// 0x032C (0x0004) [0x0000000000000000]              
	unsigned long                                      bDelayCleanup : 1;                                		// 0x0330 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool IsHanging ( );
	void Cleanup ( );
	void CheckRawBytes ( );
	void EndOfHeaders ( );
	void CreateResponseObject ( );
	void ProcessPost ( FString const& S );
	void ProcessGet ( FString const& S );
	void ProcessHead ( FString const& S );
	void ReceivedLine ( FString const& S );
	void eventReceivedText ( FString const& Text );
	void eventTimer ( );
	void eventClosed ( );
	void eventAccepted ( );
};



#undef LESDK_IN_GENERATED

#ifdef _MSC_VER
	#pragma pack ( pop )
#endif
