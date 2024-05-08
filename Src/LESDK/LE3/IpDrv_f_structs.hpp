/*
#############################################################################################
# Mass Effect 3 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.5_Beta-Rev.60-MELE
# ========================================================================================= #
# File: IpDrv_f_structs.hpp
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

// Function IpDrv.InternetLink.ResolveFailed
// [0x00020800] ( FUNC_Event )
struct AInternetLink_eventResolveFailed_Parms
{

	 AInternetLink_eventResolveFailed_Parms() { memset(this, 0, sizeof *this); }
	~AInternetLink_eventResolveFailed_Parms() {}
};

// Function IpDrv.InternetLink.Resolved
// [0x00020800] ( FUNC_Event )
struct AInternetLink_eventResolved_Parms
{
	union { struct FIpAddr                             Addr; };                                          		// 0x0000 (0x0014) [0x0000000000000080]              ( CPF_Parm )

	 AInternetLink_eventResolved_Parms() { memset(this, 0, sizeof *this); }
	~AInternetLink_eventResolved_Parms() {}
};

// Function IpDrv.InternetLink.GetLocalIP
// [0x00420400] ( FUNC_Native )
struct AInternetLink_execGetLocalIP_Parms
{
	union { struct FIpAddr                             Arg; };                                           		// 0x0000 (0x0014) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )

	 AInternetLink_execGetLocalIP_Parms() { memset(this, 0, sizeof *this); }
	~AInternetLink_execGetLocalIP_Parms() {}
};

// Function IpDrv.InternetLink.StringToIpAddr
// [0x00420400] ( FUNC_Native )
struct AInternetLink_execStringToIpAddr_Parms
{
	union { FString                                    Str; };                                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { struct FIpAddr                             Addr; };                                          		// 0x0010 (0x0014) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue;                                      		// 0x0024 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 AInternetLink_execStringToIpAddr_Parms() { memset(this, 0, sizeof *this); }
	~AInternetLink_execStringToIpAddr_Parms() {}
};

// Function IpDrv.InternetLink.IpAddrToString
// [0x00020400] ( FUNC_Native )
struct AInternetLink_execIpAddrToString_Parms
{
	union { struct FIpAddr                             Arg; };                                           		// 0x0000 (0x0014) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    ReturnValue; };                                   		// 0x0014 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

	 AInternetLink_execIpAddrToString_Parms() { memset(this, 0, sizeof *this); }
	~AInternetLink_execIpAddrToString_Parms() {}
};

// Function IpDrv.InternetLink.GetLastError
// [0x00020400] ( FUNC_Native )
struct AInternetLink_execGetLastError_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 AInternetLink_execGetLastError_Parms() { memset(this, 0, sizeof *this); }
	~AInternetLink_execGetLastError_Parms() {}
};

// Function IpDrv.InternetLink.Resolve
// [0x00020400] ( FUNC_Native )
struct AInternetLink_execResolve_Parms
{
	union { FString                                    Domain; };                                        		// 0x0000 (0x0010) [0x0000000000400880]              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )

	 AInternetLink_execResolve_Parms() { memset(this, 0, sizeof *this); }
	~AInternetLink_execResolve_Parms() {}
};

// Function IpDrv.InternetLink.ParseURL
// [0x00420400] ( FUNC_Native )
struct AInternetLink_execParseURL_Parms
{
	union { FString                                    URL; };                                           		// 0x0000 (0x0010) [0x0000000000400880]              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
	union { FString                                    Addr; };                                          		// 0x0010 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                PortNum;                                          		// 0x0020 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	union { FString                                    LevelName; };                                     		// 0x0024 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	union { FString                                    EntryName; };                                     		// 0x0034 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0044 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 AInternetLink_execParseURL_Parms() { memset(this, 0, sizeof *this); }
	~AInternetLink_execParseURL_Parms() {}
};

// Function IpDrv.InternetLink.IsDataPending
// [0x00020400] ( FUNC_Native )
struct AInternetLink_execIsDataPending_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 AInternetLink_execIsDataPending_Parms() { memset(this, 0, sizeof *this); }
	~AInternetLink_execIsDataPending_Parms() {}
};

// Function IpDrv.TcpLink.ReceivedBinary
// [0x00020800] ( FUNC_Event )
struct ATcpLink_eventReceivedBinary_Parms
{
	int                                                Count;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      B[ 0xFF ];                                        		// 0x0004 (0x00FF) [0x0000000000000080]              ( CPF_Parm )

	 ATcpLink_eventReceivedBinary_Parms() { memset(this, 0, sizeof *this); }
	~ATcpLink_eventReceivedBinary_Parms() {}
};

// Function IpDrv.TcpLink.ReceivedLine
// [0x00020800] ( FUNC_Event )
struct ATcpLink_eventReceivedLine_Parms
{
	union { FString                                    Line; };                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 ATcpLink_eventReceivedLine_Parms() { memset(this, 0, sizeof *this); }
	~ATcpLink_eventReceivedLine_Parms() {}
};

// Function IpDrv.TcpLink.ReceivedText
// [0x00020800] ( FUNC_Event )
struct ATcpLink_eventReceivedText_Parms
{
	union { FString                                    Text; };                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 ATcpLink_eventReceivedText_Parms() { memset(this, 0, sizeof *this); }
	~ATcpLink_eventReceivedText_Parms() {}
};

// Function IpDrv.TcpLink.Closed
// [0x00020800] ( FUNC_Event )
struct ATcpLink_eventClosed_Parms
{

	 ATcpLink_eventClosed_Parms() { memset(this, 0, sizeof *this); }
	~ATcpLink_eventClosed_Parms() {}
};

// Function IpDrv.TcpLink.Opened
// [0x00020800] ( FUNC_Event )
struct ATcpLink_eventOpened_Parms
{

	 ATcpLink_eventOpened_Parms() { memset(this, 0, sizeof *this); }
	~ATcpLink_eventOpened_Parms() {}
};

// Function IpDrv.TcpLink.Accepted
// [0x00020800] ( FUNC_Event )
struct ATcpLink_eventAccepted_Parms
{

	 ATcpLink_eventAccepted_Parms() { memset(this, 0, sizeof *this); }
	~ATcpLink_eventAccepted_Parms() {}
};

// Function IpDrv.TcpLink.ReadBinary
// [0x00420400] ( FUNC_Native )
struct ATcpLink_execReadBinary_Parms
{
	int                                                Count;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      B[ 0xFF ];                                        		// 0x0004 (0x00FF) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                ReturnValue;                                      		// 0x0104 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 ATcpLink_execReadBinary_Parms() { memset(this, 0, sizeof *this); }
	~ATcpLink_execReadBinary_Parms() {}
};

// Function IpDrv.TcpLink.ReadText
// [0x00420400] ( FUNC_Native )
struct ATcpLink_execReadText_Parms
{
	union { FString                                    Str; };                                           		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 ATcpLink_execReadText_Parms() { memset(this, 0, sizeof *this); }
	~ATcpLink_execReadText_Parms() {}
};

// Function IpDrv.TcpLink.SendBinary
// [0x00020400] ( FUNC_Native )
struct ATcpLink_execSendBinary_Parms
{
	int                                                Count;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      B[ 0xFF ];                                        		// 0x0004 (0x00FF) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0104 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 ATcpLink_execSendBinary_Parms() { memset(this, 0, sizeof *this); }
	~ATcpLink_execSendBinary_Parms() {}
};

// Function IpDrv.TcpLink.SendText
// [0x00020400] ( FUNC_Native )
struct ATcpLink_execSendText_Parms
{
	union { FString                                    Str; };                                           		// 0x0000 (0x0010) [0x0000000000400880]              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 ATcpLink_execSendText_Parms() { memset(this, 0, sizeof *this); }
	~ATcpLink_execSendText_Parms() {}
};

// Function IpDrv.TcpLink.IsConnected
// [0x00020400] ( FUNC_Native )
struct ATcpLink_execIsConnected_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 ATcpLink_execIsConnected_Parms() { memset(this, 0, sizeof *this); }
	~ATcpLink_execIsConnected_Parms() {}
};

// Function IpDrv.TcpLink.Close
// [0x00020400] ( FUNC_Native )
struct ATcpLink_execClose_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 ATcpLink_execClose_Parms() { memset(this, 0, sizeof *this); }
	~ATcpLink_execClose_Parms() {}
};

// Function IpDrv.TcpLink.Open
// [0x00020400] ( FUNC_Native )
struct ATcpLink_execOpen_Parms
{
	union { struct FIpAddr                             Addr; };                                          		// 0x0000 (0x0014) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 ATcpLink_execOpen_Parms() { memset(this, 0, sizeof *this); }
	~ATcpLink_execOpen_Parms() {}
};

// Function IpDrv.TcpLink.Listen
// [0x00020400] ( FUNC_Native )
struct ATcpLink_execListen_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 ATcpLink_execListen_Parms() { memset(this, 0, sizeof *this); }
	~ATcpLink_execListen_Parms() {}
};

// Function IpDrv.TcpLink.BindPort
// [0x00024400] ( FUNC_Native )
struct ATcpLink_execBindPort_Parms
{
	int                                                PortNum;                                          		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bUseNextAvailable;                                		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 ATcpLink_execBindPort_Parms() { memset(this, 0, sizeof *this); }
	~ATcpLink_execBindPort_Parms() {}
};

// Function IpDrv.OnlineEventsInterfaceMcp.UploadHardwareData
// [0x00020000] 
struct UOnlineEventsInterfaceMcp_execUploadHardwareData_Parms
{
	union { struct FUniqueNetId                        UniqueId; };                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    PlayerNick; };                                    		// 0x0008 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UOnlineEventsInterfaceMcp_execUploadHardwareData_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineEventsInterfaceMcp_execUploadHardwareData_Parms() {}
};

// Function IpDrv.OnlineEventsInterfaceMcp.UploadGameplayEventsData
// [0x00020400] ( FUNC_Native )
struct UOnlineEventsInterfaceMcp_execUploadGameplayEventsData_Parms
{
	class UOnlineGameplayEvents*                       Events;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UOnlineEventsInterfaceMcp_execUploadGameplayEventsData_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineEventsInterfaceMcp_execUploadGameplayEventsData_Parms() {}
};

// Function IpDrv.OnlineEventsInterfaceMcp.UploadProfileData
// [0x00020400] ( FUNC_Native )
struct UOnlineEventsInterfaceMcp_execUploadProfileData_Parms
{
	union { struct FUniqueNetId                        UniqueId; };                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    PlayerNick; };                                    		// 0x0008 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UOnlineProfileSettings*                      ProfileSettings;                                  		// 0x0018 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0020 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UOnlineEventsInterfaceMcp_execUploadProfileData_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineEventsInterfaceMcp_execUploadProfileData_Parms() {}
};

// Function IpDrv.OnlineNewsInterfaceMcp.GetNews
// [0x00020002] 
struct UOnlineNewsInterfaceMcp_execGetNews_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      NewsType;                                         		// 0x0001 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    ReturnValue; };                                   		// 0x0004 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// int                                             NewsIndex;                                        		// 0x0014 (0x0004) [0x0000000000000000]              

	 UOnlineNewsInterfaceMcp_execGetNews_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineNewsInterfaceMcp_execGetNews_Parms() {}
};

// Function IpDrv.OnlineNewsInterfaceMcp.ClearReadNewsCompletedDelegate
// [0x00020002] 
struct UOnlineNewsInterfaceMcp_execClearReadNewsCompletedDelegate_Parms
{
	union { struct FScriptDelegate                     ReadGameNewsDelegate; };                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              

	 UOnlineNewsInterfaceMcp_execClearReadNewsCompletedDelegate_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineNewsInterfaceMcp_execClearReadNewsCompletedDelegate_Parms() {}
};

// Function IpDrv.OnlineNewsInterfaceMcp.AddReadNewsCompletedDelegate
// [0x00020002] 
struct UOnlineNewsInterfaceMcp_execAddReadNewsCompletedDelegate_Parms
{
	union { struct FScriptDelegate                     ReadNewsDelegate; };                              		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 UOnlineNewsInterfaceMcp_execAddReadNewsCompletedDelegate_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineNewsInterfaceMcp_execAddReadNewsCompletedDelegate_Parms() {}
};

// Function IpDrv.OnlineNewsInterfaceMcp.OnReadNewsCompleted
// [0x00120000] 
struct UOnlineNewsInterfaceMcp_execOnReadNewsCompleted_Parms
{
	unsigned long                                      bWasSuccessful;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      NewsType;                                         		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )

	 UOnlineNewsInterfaceMcp_execOnReadNewsCompleted_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineNewsInterfaceMcp_execOnReadNewsCompleted_Parms() {}
};

// Function IpDrv.OnlineNewsInterfaceMcp.ReadNews
// [0x00020400] ( FUNC_Native )
struct UOnlineNewsInterfaceMcp_execReadNews_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      NewsType;                                         		// 0x0001 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UOnlineNewsInterfaceMcp_execReadNews_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineNewsInterfaceMcp_execReadNews_Parms() {}
};

// Function IpDrv.OnlineTitleFileDownloadMcp.ClearDownloadedFiles
// [0x00020400] ( FUNC_Native )
struct UOnlineTitleFileDownloadMcp_execClearDownloadedFiles_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UOnlineTitleFileDownloadMcp_execClearDownloadedFiles_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineTitleFileDownloadMcp_execClearDownloadedFiles_Parms() {}
};

// Function IpDrv.OnlineTitleFileDownloadMcp.GetTitleFileState
// [0x00020002] 
struct UOnlineTitleFileDownloadMcp_execGetTitleFileState_Parms
{
	union { FString                                    Filename; };                                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      ReturnValue;                                      		// 0x0010 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             FileIndex;                                        		// 0x0014 (0x0004) [0x0000000000000000]              

	 UOnlineTitleFileDownloadMcp_execGetTitleFileState_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineTitleFileDownloadMcp_execGetTitleFileState_Parms() {}
};

// Function IpDrv.OnlineTitleFileDownloadMcp.GetTitleFileContents
// [0x00420400] ( FUNC_Native )
struct UOnlineTitleFileDownloadMcp_execGetTitleFileContents_Parms
{
	union { FString                                    Filename; };                                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { TArray<unsigned char>                      FileContents; };                                  		// 0x0010 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0020 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UOnlineTitleFileDownloadMcp_execGetTitleFileContents_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineTitleFileDownloadMcp_execGetTitleFileContents_Parms() {}
};

// Function IpDrv.OnlineTitleFileDownloadMcp.ClearReadTitleFileCompleteDelegate
// [0x00020002] 
struct UOnlineTitleFileDownloadMcp_execClearReadTitleFileCompleteDelegate_Parms
{
	union { struct FScriptDelegate                     ReadTitleFileCompleteDelegate; };                 		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              

	 UOnlineTitleFileDownloadMcp_execClearReadTitleFileCompleteDelegate_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineTitleFileDownloadMcp_execClearReadTitleFileCompleteDelegate_Parms() {}
};

// Function IpDrv.OnlineTitleFileDownloadMcp.AddReadTitleFileCompleteDelegate
// [0x00020002] 
struct UOnlineTitleFileDownloadMcp_execAddReadTitleFileCompleteDelegate_Parms
{
	union { struct FScriptDelegate                     ReadTitleFileCompleteDelegate; };                 		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 UOnlineTitleFileDownloadMcp_execAddReadTitleFileCompleteDelegate_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineTitleFileDownloadMcp_execAddReadTitleFileCompleteDelegate_Parms() {}
};

// Function IpDrv.OnlineTitleFileDownloadMcp.ReadTitleFile
// [0x00020400] ( FUNC_Native )
struct UOnlineTitleFileDownloadMcp_execReadTitleFile_Parms
{
	union { FString                                    FileToRead; };                                    		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UOnlineTitleFileDownloadMcp_execReadTitleFile_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineTitleFileDownloadMcp_execReadTitleFile_Parms() {}
};

// Function IpDrv.OnlineTitleFileDownloadMcp.OnReadTitleFileComplete
// [0x00120000] 
struct UOnlineTitleFileDownloadMcp_execOnReadTitleFileComplete_Parms
{
	unsigned long                                      bWasSuccessful;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    Filename; };                                      		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 UOnlineTitleFileDownloadMcp_execOnReadTitleFileComplete_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineTitleFileDownloadMcp_execOnReadTitleFileComplete_Parms() {}
};

// Function IpDrv.MeshBeacon.DestroyBeacon
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UMeshBeacon_eventDestroyBeacon_Parms
{

	 UMeshBeacon_eventDestroyBeacon_Parms() { memset(this, 0, sizeof *this); }
	~UMeshBeacon_eventDestroyBeacon_Parms() {}
};

// Function IpDrv.MeshBeaconClient.DebugRender
// [0x00020002] 
struct UMeshBeaconClient_execDebugRender_Parms
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// int                                             HistoryIdx;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           XL;                                               		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           YL;                                               		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           Offset;                                           		// 0x0014 (0x0004) [0x0000000000000000]              

	 UMeshBeaconClient_execDebugRender_Parms() { memset(this, 0, sizeof *this); }
	~UMeshBeaconClient_execDebugRender_Parms() {}
};

// Function IpDrv.MeshBeaconClient.DumpInfo
// [0x00020002] 
struct UMeshBeaconClient_execDumpInfo_Parms
{
	// int                                             HistoryIdx;                                       		// 0x0000 (0x0004) [0x0000000000000000]              

	 UMeshBeaconClient_execDumpInfo_Parms() { memset(this, 0, sizeof *this); }
	~UMeshBeaconClient_execDumpInfo_Parms() {}
};

// Function IpDrv.MeshBeaconClient.SendHostNewGameSessionResponse
// [0x00420400] ( FUNC_Native )
struct UMeshBeaconClient_execSendHostNewGameSessionResponse_Parms
{
	unsigned long                                      bSuccess;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { struct SFXName                             SessionName; };                                   		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      SearchClass;                                      		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      PlatformSpecificInfo[ 0x50 ];                     		// 0x0014 (0x0050) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue;                                      		// 0x0064 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UMeshBeaconClient_execSendHostNewGameSessionResponse_Parms() { memset(this, 0, sizeof *this); }
	~UMeshBeaconClient_execSendHostNewGameSessionResponse_Parms() {}
};

// Function IpDrv.MeshBeaconClient.OnCreateNewSessionRequestReceived
// [0x00520000] 
struct UMeshBeaconClient_execOnCreateNewSessionRequestReceived_Parms
{
	union { struct SFXName                             SessionName; };                                   		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      SearchClass;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { TArray<struct FPlayerMember>               Players; };                                       		// 0x0010 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

	 UMeshBeaconClient_execOnCreateNewSessionRequestReceived_Parms() { memset(this, 0, sizeof *this); }
	~UMeshBeaconClient_execOnCreateNewSessionRequestReceived_Parms() {}
};

// Function IpDrv.MeshBeaconClient.OnTravelRequestReceived
// [0x00520000] 
struct UMeshBeaconClient_execOnTravelRequestReceived_Parms
{
	union { struct SFXName                             SessionName; };                                   		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      SearchClass;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      PlatformSpecificInfo[ 0x50 ];                     		// 0x0010 (0x0050) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )

	 UMeshBeaconClient_execOnTravelRequestReceived_Parms() { memset(this, 0, sizeof *this); }
	~UMeshBeaconClient_execOnTravelRequestReceived_Parms() {}
};

// Function IpDrv.MeshBeaconClient.OnReceivedBandwidthTestResults
// [0x00520000] 
struct UMeshBeaconClient_execOnReceivedBandwidthTestResults_Parms
{
	unsigned char                                      testType;                                         		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      TestResult;                                       		// 0x0001 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FConnectionBandwidthStats           BandwidthStats; };                                		// 0x0004 (0x000C) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )

	 UMeshBeaconClient_execOnReceivedBandwidthTestResults_Parms() { memset(this, 0, sizeof *this); }
	~UMeshBeaconClient_execOnReceivedBandwidthTestResults_Parms() {}
};

// Function IpDrv.MeshBeaconClient.OnReceivedBandwidthTestRequest
// [0x00120000] 
struct UMeshBeaconClient_execOnReceivedBandwidthTestRequest_Parms
{
	unsigned char                                      testType;                                         		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )

	 UMeshBeaconClient_execOnReceivedBandwidthTestRequest_Parms() { memset(this, 0, sizeof *this); }
	~UMeshBeaconClient_execOnReceivedBandwidthTestRequest_Parms() {}
};

// Function IpDrv.MeshBeaconClient.OnConnectionRequestResult
// [0x00120000] 
struct UMeshBeaconClient_execOnConnectionRequestResult_Parms
{
	unsigned char                                      ConnectionResult;                                 		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )

	 UMeshBeaconClient_execOnConnectionRequestResult_Parms() { memset(this, 0, sizeof *this); }
	~UMeshBeaconClient_execOnConnectionRequestResult_Parms() {}
};

// Function IpDrv.MeshBeaconClient.BeginBandwidthTest
// [0x00020400] ( FUNC_Native )
struct UMeshBeaconClient_execBeginBandwidthTest_Parms
{
	unsigned char                                      testType;                                         		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                TestBufferSize;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UMeshBeaconClient_execBeginBandwidthTest_Parms() { memset(this, 0, sizeof *this); }
	~UMeshBeaconClient_execBeginBandwidthTest_Parms() {}
};

// Function IpDrv.MeshBeaconClient.RequestConnection
// [0x00420400] ( FUNC_Native )
struct UMeshBeaconClient_execRequestConnection_Parms
{
	union { struct FOnlineGameSearchResult             DesiredHost; };                                   		// 0x0000 (0x0010) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	union { struct FClientConnectionRequest            ClientRequest; };                                 		// 0x0010 (0x0028) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      bRegisterSecureAddress;                           		// 0x0038 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x003C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UMeshBeaconClient_execRequestConnection_Parms() { memset(this, 0, sizeof *this); }
	~UMeshBeaconClient_execRequestConnection_Parms() {}
};

// Function IpDrv.MeshBeaconClient.DestroyBeacon
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UMeshBeaconClient_eventDestroyBeacon_Parms
{

	 UMeshBeaconClient_eventDestroyBeacon_Parms() { memset(this, 0, sizeof *this); }
	~UMeshBeaconClient_eventDestroyBeacon_Parms() {}
};

// Function IpDrv.MeshBeaconHost.DebugRender
// [0x00020002] 
struct UMeshBeaconHost_execDebugRender_Parms
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { struct FUniqueNetId                        CurOptimalHostId; };                              		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// int                                             ClientIdx;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             HistoryIdx;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	// union { struct FUniqueNetId                     NetId; };                                         		// 0x0018 (0x0008) [0x0000000000000000]              
	// float                                           XL;                                               		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           YL;                                               		// 0x0024 (0x0004) [0x0000000000000000]              
	// float                                           Offset;                                           		// 0x0028 (0x0004) [0x0000000000000000]              

	 UMeshBeaconHost_execDebugRender_Parms() { memset(this, 0, sizeof *this); }
	~UMeshBeaconHost_execDebugRender_Parms() {}
};

// Function IpDrv.MeshBeaconHost.DumpConnections
// [0x00020002] 
struct UMeshBeaconHost_execDumpConnections_Parms
{
	// int                                             ClientIdx;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             HistoryIdx;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	// union { struct FUniqueNetId                     NetId; };                                         		// 0x0008 (0x0008) [0x0000000000000000]              

	 UMeshBeaconHost_execDumpConnections_Parms() { memset(this, 0, sizeof *this); }
	~UMeshBeaconHost_execDumpConnections_Parms() {}
};

// Function IpDrv.MeshBeaconHost.OnReceivedClientCreateNewSessionResult
// [0x00520000] 
struct UMeshBeaconHost_execOnReceivedClientCreateNewSessionResult_Parms
{
	unsigned long                                      bSucceeded;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { struct SFXName                             SessionName; };                                   		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      SearchClass;                                      		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      PlatformSpecificInfo[ 0x50 ];                     		// 0x0014 (0x0050) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )

	 UMeshBeaconHost_execOnReceivedClientCreateNewSessionResult_Parms() { memset(this, 0, sizeof *this); }
	~UMeshBeaconHost_execOnReceivedClientCreateNewSessionResult_Parms() {}
};

// Function IpDrv.MeshBeaconHost.RequestClientCreateNewSession
// [0x00420400] ( FUNC_Native )
struct UMeshBeaconHost_execRequestClientCreateNewSession_Parms
{
	union { struct FUniqueNetId                        PlayerNetId; };                                   		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { struct SFXName                             SessionName; };                                   		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      SearchClass;                                      		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { TArray<struct FPlayerMember>               Players; };                                       		// 0x0018 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0028 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UMeshBeaconHost_execRequestClientCreateNewSession_Parms() { memset(this, 0, sizeof *this); }
	~UMeshBeaconHost_execRequestClientCreateNewSession_Parms() {}
};

// Function IpDrv.MeshBeaconHost.TellClientsToTravel
// [0x00420400] ( FUNC_Native )
struct UMeshBeaconHost_execTellClientsToTravel_Parms
{
	union { struct SFXName                             SessionName; };                                   		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      SearchClass;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      PlatformSpecificInfo[ 0x50 ];                     		// 0x0010 (0x0050) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )

	 UMeshBeaconHost_execTellClientsToTravel_Parms() { memset(this, 0, sizeof *this); }
	~UMeshBeaconHost_execTellClientsToTravel_Parms() {}
};

// Function IpDrv.MeshBeaconHost.OnAllPendingPlayersConnected
// [0x00120000] 
struct UMeshBeaconHost_execOnAllPendingPlayersConnected_Parms
{

	 UMeshBeaconHost_execOnAllPendingPlayersConnected_Parms() { memset(this, 0, sizeof *this); }
	~UMeshBeaconHost_execOnAllPendingPlayersConnected_Parms() {}
};

// Function IpDrv.MeshBeaconHost.AllPlayersConnected
// [0x00420400] ( FUNC_Native )
struct UMeshBeaconHost_execAllPlayersConnected_Parms
{
	union { TArray<struct FUniqueNetId>                Players; };                                       		// 0x0000 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UMeshBeaconHost_execAllPlayersConnected_Parms() { memset(this, 0, sizeof *this); }
	~UMeshBeaconHost_execAllPlayersConnected_Parms() {}
};

// Function IpDrv.MeshBeaconHost.GetConnectionIndexForPlayer
// [0x00020400] ( FUNC_Native )
struct UMeshBeaconHost_execGetConnectionIndexForPlayer_Parms
{
	union { struct FUniqueNetId                        PlayerNetId; };                                   		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UMeshBeaconHost_execGetConnectionIndexForPlayer_Parms() { memset(this, 0, sizeof *this); }
	~UMeshBeaconHost_execGetConnectionIndexForPlayer_Parms() {}
};

// Function IpDrv.MeshBeaconHost.SetPendingPlayerConnections
// [0x00420002] 
struct UMeshBeaconHost_execSetPendingPlayerConnections_Parms
{
	union { TArray<struct FUniqueNetId>                Players; };                                       		// 0x0000 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

	 UMeshBeaconHost_execSetPendingPlayerConnections_Parms() { memset(this, 0, sizeof *this); }
	~UMeshBeaconHost_execSetPendingPlayerConnections_Parms() {}
};

// Function IpDrv.MeshBeaconHost.OnFinishedBandwidthTest
// [0x00520000] 
struct UMeshBeaconHost_execOnFinishedBandwidthTest_Parms
{
	union { struct FUniqueNetId                        PlayerNetId; };                                   		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      testType;                                         		// 0x0008 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      TestResult;                                       		// 0x0009 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FConnectionBandwidthStats           BandwidthStats; };                                		// 0x000C (0x000C) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )

	 UMeshBeaconHost_execOnFinishedBandwidthTest_Parms() { memset(this, 0, sizeof *this); }
	~UMeshBeaconHost_execOnFinishedBandwidthTest_Parms() {}
};

// Function IpDrv.MeshBeaconHost.OnStartedBandwidthTest
// [0x00120000] 
struct UMeshBeaconHost_execOnStartedBandwidthTest_Parms
{
	union { struct FUniqueNetId                        PlayerNetId; };                                   		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      testType;                                         		// 0x0008 (0x0001) [0x0000000000000080]              ( CPF_Parm )

	 UMeshBeaconHost_execOnStartedBandwidthTest_Parms() { memset(this, 0, sizeof *this); }
	~UMeshBeaconHost_execOnStartedBandwidthTest_Parms() {}
};

// Function IpDrv.MeshBeaconHost.OnReceivedClientConnectionRequest
// [0x00520000] 
struct UMeshBeaconHost_execOnReceivedClientConnectionRequest_Parms
{
	union { struct FClientMeshBeaconConnection         NewClientConnection; };                           		// 0x0000 (0x005C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

	 UMeshBeaconHost_execOnReceivedClientConnectionRequest_Parms() { memset(this, 0, sizeof *this); }
	~UMeshBeaconHost_execOnReceivedClientConnectionRequest_Parms() {}
};

// Function IpDrv.MeshBeaconHost.AllowBandwidthTesting
// [0x00020002] 
struct UMeshBeaconHost_execAllowBandwidthTesting_Parms
{
	unsigned long                                      bEnabled;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 UMeshBeaconHost_execAllowBandwidthTesting_Parms() { memset(this, 0, sizeof *this); }
	~UMeshBeaconHost_execAllowBandwidthTesting_Parms() {}
};

// Function IpDrv.MeshBeaconHost.CancelPendingBandwidthTests
// [0x00020400] ( FUNC_Native )
struct UMeshBeaconHost_execCancelPendingBandwidthTests_Parms
{

	 UMeshBeaconHost_execCancelPendingBandwidthTests_Parms() { memset(this, 0, sizeof *this); }
	~UMeshBeaconHost_execCancelPendingBandwidthTests_Parms() {}
};

// Function IpDrv.MeshBeaconHost.HasPendingBandwidthTest
// [0x00020400] ( FUNC_Native )
struct UMeshBeaconHost_execHasPendingBandwidthTest_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UMeshBeaconHost_execHasPendingBandwidthTest_Parms() { memset(this, 0, sizeof *this); }
	~UMeshBeaconHost_execHasPendingBandwidthTest_Parms() {}
};

// Function IpDrv.MeshBeaconHost.CancelInProgressBandwidthTests
// [0x00020400] ( FUNC_Native )
struct UMeshBeaconHost_execCancelInProgressBandwidthTests_Parms
{

	 UMeshBeaconHost_execCancelInProgressBandwidthTests_Parms() { memset(this, 0, sizeof *this); }
	~UMeshBeaconHost_execCancelInProgressBandwidthTests_Parms() {}
};

// Function IpDrv.MeshBeaconHost.HasInProgressBandwidthTest
// [0x00020400] ( FUNC_Native )
struct UMeshBeaconHost_execHasInProgressBandwidthTest_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UMeshBeaconHost_execHasInProgressBandwidthTest_Parms() { memset(this, 0, sizeof *this); }
	~UMeshBeaconHost_execHasInProgressBandwidthTest_Parms() {}
};

// Function IpDrv.MeshBeaconHost.RequestClientBandwidthTest
// [0x00020400] ( FUNC_Native )
struct UMeshBeaconHost_execRequestClientBandwidthTest_Parms
{
	union { struct FUniqueNetId                        PlayerNetId; };                                   		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      testType;                                         		// 0x0008 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                TestBufferSize;                                   		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UMeshBeaconHost_execRequestClientBandwidthTest_Parms() { memset(this, 0, sizeof *this); }
	~UMeshBeaconHost_execRequestClientBandwidthTest_Parms() {}
};

// Function IpDrv.MeshBeaconHost.DestroyBeacon
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UMeshBeaconHost_eventDestroyBeacon_Parms
{

	 UMeshBeaconHost_eventDestroyBeacon_Parms() { memset(this, 0, sizeof *this); }
	~UMeshBeaconHost_eventDestroyBeacon_Parms() {}
};

// Function IpDrv.MeshBeaconHost.InitHostBeacon
// [0x00020400] ( FUNC_Native )
struct UMeshBeaconHost_execInitHostBeacon_Parms
{
	union { struct FUniqueNetId                        InOwningPlayerId; };                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UMeshBeaconHost_execInitHostBeacon_Parms() { memset(this, 0, sizeof *this); }
	~UMeshBeaconHost_execInitHostBeacon_Parms() {}
};

// Function IpDrv.OnlineSubsystemCommonImpl.GetRegisteredPlayers
// [0x00420002] 
struct UOnlineSubsystemCommonImpl_execGetRegisteredPlayers_Parms
{
	union { struct SFXName                             SessionName; };                                   		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { TArray<struct FUniqueNetId>                OutRegisteredPlayers; };                          		// 0x0008 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	// int                                             idx;                                              		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             PlayerIdx;                                        		// 0x001C (0x0004) [0x0000000000000000]              

	 UOnlineSubsystemCommonImpl_execGetRegisteredPlayers_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineSubsystemCommonImpl_execGetRegisteredPlayers_Parms() {}
};

// Function IpDrv.OnlineSubsystemCommonImpl.IsPlayerInSession
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemCommonImpl_execIsPlayerInSession_Parms
{
	union { struct SFXName                             SessionName; };                                   		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { struct FUniqueNetId                        PlayerID; };                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UOnlineSubsystemCommonImpl_execIsPlayerInSession_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineSubsystemCommonImpl_execIsPlayerInSession_Parms() {}
};

// Function IpDrv.OnlineSubsystemCommonImpl.GetPlayerUniqueNetIdFromIndex
// [0x00020800] ( FUNC_Event )
struct UOnlineSubsystemCommonImpl_eventGetPlayerUniqueNetIdFromIndex_Parms
{
	int                                                UserIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { struct FUniqueNetId                        ReturnValue; };                                   		// 0x0004 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UOnlineSubsystemCommonImpl_eventGetPlayerUniqueNetIdFromIndex_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineSubsystemCommonImpl_eventGetPlayerUniqueNetIdFromIndex_Parms() {}
};

// Function IpDrv.OnlineSubsystemCommonImpl.GetPlayerNicknameFromIndex
// [0x00020800] ( FUNC_Event )
struct UOnlineSubsystemCommonImpl_eventGetPlayerNicknameFromIndex_Parms
{
	int                                                UserIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    ReturnValue; };                                   		// 0x0004 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

	 UOnlineSubsystemCommonImpl_eventGetPlayerNicknameFromIndex_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineSubsystemCommonImpl_eventGetPlayerNicknameFromIndex_Parms() {}
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearQuickMatchCompleteDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execClearQuickMatchCompleteDelegate_Parms
{
	union { struct FScriptDelegate                     QuickMatchCompleteDelegate; };                    		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 UOnlineGameInterfaceImpl_execClearQuickMatchCompleteDelegate_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineGameInterfaceImpl_execClearQuickMatchCompleteDelegate_Parms() {}
};

// Function IpDrv.OnlineGameInterfaceImpl.AddQuickMatchCompleteDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execAddQuickMatchCompleteDelegate_Parms
{
	union { struct FScriptDelegate                     QuickMatchCompleteDelegate; };                    		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 UOnlineGameInterfaceImpl_execAddQuickMatchCompleteDelegate_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineGameInterfaceImpl_execAddQuickMatchCompleteDelegate_Parms() {}
};

// Function IpDrv.OnlineGameInterfaceImpl.OnQuickMatchComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnQuickMatchComplete_Parms
{
	unsigned char                                      Result;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )

	 UOnlineGameInterfaceImpl_execOnQuickMatchComplete_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineGameInterfaceImpl_execOnQuickMatchComplete_Parms() {}
};

// Function IpDrv.OnlineGameInterfaceImpl.QuickMatch
// [0x00024000] 
struct UOnlineGameInterfaceImpl_execQuickMatch_Parms
{
	class UOnlineGameSettings*                         quickMatchSettings;                               		// 0x0000 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UOnlineGameInterfaceImpl_execQuickMatch_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineGameInterfaceImpl_execQuickMatch_Parms() {}
};

// Function IpDrv.OnlineGameInterfaceImpl.ForceCleanUp
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execForceCleanUp_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UOnlineGameInterfaceImpl_execForceCleanUp_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineGameInterfaceImpl_execForceCleanUp_Parms() {}
};

// Function IpDrv.OnlineGameInterfaceImpl.BindPlatformSpecificSessionToSearch
// [0x00020400] ( FUNC_Native )
struct UOnlineGameInterfaceImpl_execBindPlatformSpecificSessionToSearch_Parms
{
	unsigned char                                      SearchingPlayerNum;                               		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineGameSearch*                           SearchSettings;                                   		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      PlatformSpecificInfo[ 0x50 ];                     		// 0x000C (0x0050) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x005C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UOnlineGameInterfaceImpl_execBindPlatformSpecificSessionToSearch_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineGameInterfaceImpl_execBindPlatformSpecificSessionToSearch_Parms() {}
};

// Function IpDrv.OnlineGameInterfaceImpl.ReadPlatformSpecificSessionInfoBySessionName
// [0x00420000] 
struct UOnlineGameInterfaceImpl_execReadPlatformSpecificSessionInfoBySessionName_Parms
{
	union { struct SFXName                             SessionName; };                                   		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      PlatformSpecificInfo[ 0x50 ];                     		// 0x0008 (0x0050) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue;                                      		// 0x0058 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UOnlineGameInterfaceImpl_execReadPlatformSpecificSessionInfoBySessionName_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineGameInterfaceImpl_execReadPlatformSpecificSessionInfoBySessionName_Parms() {}
};

// Function IpDrv.OnlineGameInterfaceImpl.ReadPlatformSpecificSessionInfo
// [0x00420400] ( FUNC_Native )
struct UOnlineGameInterfaceImpl_execReadPlatformSpecificSessionInfo_Parms
{
	union { struct FOnlineGameSearchResult             DesiredGame; };                                   		// 0x0000 (0x0010) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	unsigned char                                      PlatformSpecificInfo[ 0x50 ];                     		// 0x0010 (0x0050) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue;                                      		// 0x0060 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UOnlineGameInterfaceImpl_execReadPlatformSpecificSessionInfo_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineGameInterfaceImpl_execReadPlatformSpecificSessionInfo_Parms() {}
};

// Function IpDrv.OnlineGameInterfaceImpl.QueryNonAdvertisedData
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execQueryNonAdvertisedData_Parms
{
	int                                                StartAt;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                NumberToQuery;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UOnlineGameInterfaceImpl_execQueryNonAdvertisedData_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineGameInterfaceImpl_execQueryNonAdvertisedData_Parms() {}
};

// Function IpDrv.OnlineGameInterfaceImpl.RecalculateSkillRating
// [0x00420000] 
struct UOnlineGameInterfaceImpl_execRecalculateSkillRating_Parms
{
	union { struct SFXName                             SessionName; };                                   		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { TArray<struct FUniqueNetId>                Players; };                                       		// 0x0008 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UOnlineGameInterfaceImpl_execRecalculateSkillRating_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineGameInterfaceImpl_execRecalculateSkillRating_Parms() {}
};

// Function IpDrv.OnlineGameInterfaceImpl.AcceptGameInvite
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execAcceptGameInvite_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct SFXName                             SessionName; };                                   		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UOnlineGameInterfaceImpl_execAcceptGameInvite_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineGameInterfaceImpl_execAcceptGameInvite_Parms() {}
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearGameInviteAcceptedDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execClearGameInviteAcceptedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FScriptDelegate                     GameInviteAcceptedDelegate; };                    		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 UOnlineGameInterfaceImpl_execClearGameInviteAcceptedDelegate_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineGameInterfaceImpl_execClearGameInviteAcceptedDelegate_Parms() {}
};

// Function IpDrv.OnlineGameInterfaceImpl.AddGameInviteAcceptedDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execAddGameInviteAcceptedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct FScriptDelegate                     GameInviteAcceptedDelegate; };                    		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 UOnlineGameInterfaceImpl_execAddGameInviteAcceptedDelegate_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineGameInterfaceImpl_execAddGameInviteAcceptedDelegate_Parms() {}
};

// Function IpDrv.OnlineGameInterfaceImpl.OnGameInviteAccepted
// [0x00520000] 
struct UOnlineGameInterfaceImpl_execOnGameInviteAccepted_Parms
{
	union { struct FOnlineGameSearchResult             InviteResult; };                                  		// 0x0000 (0x0010) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )

	 UOnlineGameInterfaceImpl_execOnGameInviteAccepted_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineGameInterfaceImpl_execOnGameInviteAccepted_Parms() {}
};

// Function IpDrv.OnlineGameInterfaceImpl.GetArbitratedPlayers
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execGetArbitratedPlayers_Parms
{
	union { struct SFXName                             SessionName; };                                   		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { TArray<struct FOnlineArbitrationRegistrant> ReturnValue; };                                   		// 0x0008 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

	 UOnlineGameInterfaceImpl_execGetArbitratedPlayers_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineGameInterfaceImpl_execGetArbitratedPlayers_Parms() {}
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearArbitrationRegistrationCompleteDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execClearArbitrationRegistrationCompleteDelegate_Parms
{
	union { struct FScriptDelegate                     ArbitrationRegistrationCompleteDelegate; };       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 UOnlineGameInterfaceImpl_execClearArbitrationRegistrationCompleteDelegate_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineGameInterfaceImpl_execClearArbitrationRegistrationCompleteDelegate_Parms() {}
};

// Function IpDrv.OnlineGameInterfaceImpl.AddArbitrationRegistrationCompleteDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execAddArbitrationRegistrationCompleteDelegate_Parms
{
	union { struct FScriptDelegate                     ArbitrationRegistrationCompleteDelegate; };       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 UOnlineGameInterfaceImpl_execAddArbitrationRegistrationCompleteDelegate_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineGameInterfaceImpl_execAddArbitrationRegistrationCompleteDelegate_Parms() {}
};

// Function IpDrv.OnlineGameInterfaceImpl.OnArbitrationRegistrationComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnArbitrationRegistrationComplete_Parms
{
	union { struct SFXName                             SessionName; };                                   		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful;                                   		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 UOnlineGameInterfaceImpl_execOnArbitrationRegistrationComplete_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineGameInterfaceImpl_execOnArbitrationRegistrationComplete_Parms() {}
};

// Function IpDrv.OnlineGameInterfaceImpl.RegisterForArbitration
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execRegisterForArbitration_Parms
{
	union { struct SFXName                             SessionName; };                                   		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UOnlineGameInterfaceImpl_execRegisterForArbitration_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineGameInterfaceImpl_execRegisterForArbitration_Parms() {}
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearEndOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execClearEndOnlineGameCompleteDelegate_Parms
{
	union { struct FScriptDelegate                     EndOnlineGameCompleteDelegate; };                 		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              

	 UOnlineGameInterfaceImpl_execClearEndOnlineGameCompleteDelegate_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineGameInterfaceImpl_execClearEndOnlineGameCompleteDelegate_Parms() {}
};

// Function IpDrv.OnlineGameInterfaceImpl.AddEndOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execAddEndOnlineGameCompleteDelegate_Parms
{
	union { struct FScriptDelegate                     EndOnlineGameCompleteDelegate; };                 		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 UOnlineGameInterfaceImpl_execAddEndOnlineGameCompleteDelegate_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineGameInterfaceImpl_execAddEndOnlineGameCompleteDelegate_Parms() {}
};

// Function IpDrv.OnlineGameInterfaceImpl.OnEndOnlineGameComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnEndOnlineGameComplete_Parms
{
	union { struct SFXName                             SessionName; };                                   		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful;                                   		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 UOnlineGameInterfaceImpl_execOnEndOnlineGameComplete_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineGameInterfaceImpl_execOnEndOnlineGameComplete_Parms() {}
};

// Function IpDrv.OnlineGameInterfaceImpl.EndOnlineGame
// [0x00020400] ( FUNC_Native )
struct UOnlineGameInterfaceImpl_execEndOnlineGame_Parms
{
	union { struct SFXName                             SessionName; };                                   		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UOnlineGameInterfaceImpl_execEndOnlineGame_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineGameInterfaceImpl_execEndOnlineGame_Parms() {}
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearStartOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execClearStartOnlineGameCompleteDelegate_Parms
{
	union { struct FScriptDelegate                     StartOnlineGameCompleteDelegate; };               		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              

	 UOnlineGameInterfaceImpl_execClearStartOnlineGameCompleteDelegate_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineGameInterfaceImpl_execClearStartOnlineGameCompleteDelegate_Parms() {}
};

// Function IpDrv.OnlineGameInterfaceImpl.AddStartOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execAddStartOnlineGameCompleteDelegate_Parms
{
	union { struct FScriptDelegate                     StartOnlineGameCompleteDelegate; };               		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 UOnlineGameInterfaceImpl_execAddStartOnlineGameCompleteDelegate_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineGameInterfaceImpl_execAddStartOnlineGameCompleteDelegate_Parms() {}
};

// Function IpDrv.OnlineGameInterfaceImpl.OnStartOnlineGameComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnStartOnlineGameComplete_Parms
{
	union { struct SFXName                             SessionName; };                                   		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful;                                   		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 UOnlineGameInterfaceImpl_execOnStartOnlineGameComplete_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineGameInterfaceImpl_execOnStartOnlineGameComplete_Parms() {}
};

// Function IpDrv.OnlineGameInterfaceImpl.StartOnlineGame
// [0x00020400] ( FUNC_Native )
struct UOnlineGameInterfaceImpl_execStartOnlineGame_Parms
{
	union { struct SFXName                             SessionName; };                                   		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UOnlineGameInterfaceImpl_execStartOnlineGame_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineGameInterfaceImpl_execStartOnlineGame_Parms() {}
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearUnregisterPlayerCompleteDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execClearUnregisterPlayerCompleteDelegate_Parms
{
	union { struct FScriptDelegate                     UnregisterPlayerCompleteDelegate; };              		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 UOnlineGameInterfaceImpl_execClearUnregisterPlayerCompleteDelegate_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineGameInterfaceImpl_execClearUnregisterPlayerCompleteDelegate_Parms() {}
};

// Function IpDrv.OnlineGameInterfaceImpl.AddUnregisterPlayerCompleteDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execAddUnregisterPlayerCompleteDelegate_Parms
{
	union { struct FScriptDelegate                     UnregisterPlayerCompleteDelegate; };              		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 UOnlineGameInterfaceImpl_execAddUnregisterPlayerCompleteDelegate_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineGameInterfaceImpl_execAddUnregisterPlayerCompleteDelegate_Parms() {}
};

// Function IpDrv.OnlineGameInterfaceImpl.OnUnregisterPlayerComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnUnregisterPlayerComplete_Parms
{
	union { struct SFXName                             SessionName; };                                   		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { struct FUniqueNetId                        PlayerID; };                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful;                                   		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 UOnlineGameInterfaceImpl_execOnUnregisterPlayerComplete_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineGameInterfaceImpl_execOnUnregisterPlayerComplete_Parms() {}
};

// Function IpDrv.OnlineGameInterfaceImpl.UnregisterPlayer
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execUnregisterPlayer_Parms
{
	union { struct SFXName                             SessionName; };                                   		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { struct FUniqueNetId                        PlayerID; };                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UOnlineGameInterfaceImpl_execUnregisterPlayer_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineGameInterfaceImpl_execUnregisterPlayer_Parms() {}
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearRegisterPlayerCompleteDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execClearRegisterPlayerCompleteDelegate_Parms
{
	union { struct FScriptDelegate                     RegisterPlayerCompleteDelegate; };                		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 UOnlineGameInterfaceImpl_execClearRegisterPlayerCompleteDelegate_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineGameInterfaceImpl_execClearRegisterPlayerCompleteDelegate_Parms() {}
};

// Function IpDrv.OnlineGameInterfaceImpl.AddRegisterPlayerCompleteDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execAddRegisterPlayerCompleteDelegate_Parms
{
	union { struct FScriptDelegate                     RegisterPlayerCompleteDelegate; };                		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 UOnlineGameInterfaceImpl_execAddRegisterPlayerCompleteDelegate_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineGameInterfaceImpl_execAddRegisterPlayerCompleteDelegate_Parms() {}
};

// Function IpDrv.OnlineGameInterfaceImpl.OnRegisterPlayerComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnRegisterPlayerComplete_Parms
{
	union { struct SFXName                             SessionName; };                                   		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { struct FUniqueNetId                        PlayerID; };                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful;                                   		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 UOnlineGameInterfaceImpl_execOnRegisterPlayerComplete_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineGameInterfaceImpl_execOnRegisterPlayerComplete_Parms() {}
};

// Function IpDrv.OnlineGameInterfaceImpl.RegisterPlayer
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execRegisterPlayer_Parms
{
	union { struct SFXName                             SessionName; };                                   		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { struct FUniqueNetId                        PlayerID; };                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasInvited;                                      		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UOnlineGameInterfaceImpl_execRegisterPlayer_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineGameInterfaceImpl_execRegisterPlayer_Parms() {}
};

// Function IpDrv.OnlineGameInterfaceImpl.GetResolvedConnectString
// [0x00420400] ( FUNC_Native )
struct UOnlineGameInterfaceImpl_execGetResolvedConnectString_Parms
{
	union { struct SFXName                             SessionName; };                                   		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    ConnectInfo; };                                   		// 0x0008 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UOnlineGameInterfaceImpl_execGetResolvedConnectString_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineGameInterfaceImpl_execGetResolvedConnectString_Parms() {}
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearJoinOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execClearJoinOnlineGameCompleteDelegate_Parms
{
	union { struct FScriptDelegate                     JoinOnlineGameCompleteDelegate; };                		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              

	 UOnlineGameInterfaceImpl_execClearJoinOnlineGameCompleteDelegate_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineGameInterfaceImpl_execClearJoinOnlineGameCompleteDelegate_Parms() {}
};

// Function IpDrv.OnlineGameInterfaceImpl.AddJoinOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execAddJoinOnlineGameCompleteDelegate_Parms
{
	union { struct FScriptDelegate                     JoinOnlineGameCompleteDelegate; };                		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 UOnlineGameInterfaceImpl_execAddJoinOnlineGameCompleteDelegate_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineGameInterfaceImpl_execAddJoinOnlineGameCompleteDelegate_Parms() {}
};

// Function IpDrv.OnlineGameInterfaceImpl.OnJoinOnlineGameComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnJoinOnlineGameComplete_Parms
{
	union { struct SFXName                             SessionName; };                                   		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful;                                   		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 UOnlineGameInterfaceImpl_execOnJoinOnlineGameComplete_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineGameInterfaceImpl_execOnJoinOnlineGameComplete_Parms() {}
};

// Function IpDrv.OnlineGameInterfaceImpl.JoinOnlineGame
// [0x00420400] ( FUNC_Native )
struct UOnlineGameInterfaceImpl_execJoinOnlineGame_Parms
{
	unsigned char                                      PlayerNum;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct SFXName                             SessionName; };                                   		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { struct FOnlineGameSearchResult             DesiredGame; };                                   		// 0x000C (0x0010) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue;                                      		// 0x001C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UOnlineGameInterfaceImpl_execJoinOnlineGame_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineGameInterfaceImpl_execJoinOnlineGame_Parms() {}
};

// Function IpDrv.OnlineGameInterfaceImpl.FreeSearchResults
// [0x00020400] ( FUNC_Native )
struct UOnlineGameInterfaceImpl_execFreeSearchResults_Parms
{
	class UOnlineGameSearch*                           Search;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UOnlineGameInterfaceImpl_execFreeSearchResults_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineGameInterfaceImpl_execFreeSearchResults_Parms() {}
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearCancelFindOnlineGamesCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execClearCancelFindOnlineGamesCompleteDelegate_Parms
{
	union { struct FScriptDelegate                     CancelFindOnlineGamesCompleteDelegate; };         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              

	 UOnlineGameInterfaceImpl_execClearCancelFindOnlineGamesCompleteDelegate_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineGameInterfaceImpl_execClearCancelFindOnlineGamesCompleteDelegate_Parms() {}
};

// Function IpDrv.OnlineGameInterfaceImpl.AddCancelFindOnlineGamesCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execAddCancelFindOnlineGamesCompleteDelegate_Parms
{
	union { struct FScriptDelegate                     CancelFindOnlineGamesCompleteDelegate; };         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 UOnlineGameInterfaceImpl_execAddCancelFindOnlineGamesCompleteDelegate_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineGameInterfaceImpl_execAddCancelFindOnlineGamesCompleteDelegate_Parms() {}
};

// Function IpDrv.OnlineGameInterfaceImpl.OnCancelFindOnlineGamesComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnCancelFindOnlineGamesComplete_Parms
{
	unsigned long                                      bWasSuccessful;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 UOnlineGameInterfaceImpl_execOnCancelFindOnlineGamesComplete_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineGameInterfaceImpl_execOnCancelFindOnlineGamesComplete_Parms() {}
};

// Function IpDrv.OnlineGameInterfaceImpl.CancelFindOnlineGames
// [0x00020400] ( FUNC_Native )
struct UOnlineGameInterfaceImpl_execCancelFindOnlineGames_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UOnlineGameInterfaceImpl_execCancelFindOnlineGames_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineGameInterfaceImpl_execCancelFindOnlineGames_Parms() {}
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearFindOnlineGamesCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execClearFindOnlineGamesCompleteDelegate_Parms
{
	union { struct FScriptDelegate                     FindOnlineGamesCompleteDelegate; };               		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              

	 UOnlineGameInterfaceImpl_execClearFindOnlineGamesCompleteDelegate_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineGameInterfaceImpl_execClearFindOnlineGamesCompleteDelegate_Parms() {}
};

// Function IpDrv.OnlineGameInterfaceImpl.AddFindOnlineGamesCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execAddFindOnlineGamesCompleteDelegate_Parms
{
	union { struct FScriptDelegate                     FindOnlineGamesCompleteDelegate; };               		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 UOnlineGameInterfaceImpl_execAddFindOnlineGamesCompleteDelegate_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineGameInterfaceImpl_execAddFindOnlineGamesCompleteDelegate_Parms() {}
};

// Function IpDrv.OnlineGameInterfaceImpl.FindOnlineGames
// [0x00020400] ( FUNC_Native )
struct UOnlineGameInterfaceImpl_execFindOnlineGames_Parms
{
	unsigned char                                      SearchingPlayerNum;                               		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineGameSearch*                           SearchSettings;                                   		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UOnlineGameInterfaceImpl_execFindOnlineGames_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineGameInterfaceImpl_execFindOnlineGames_Parms() {}
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearDestroyOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execClearDestroyOnlineGameCompleteDelegate_Parms
{
	union { struct FScriptDelegate                     DestroyOnlineGameCompleteDelegate; };             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              

	 UOnlineGameInterfaceImpl_execClearDestroyOnlineGameCompleteDelegate_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineGameInterfaceImpl_execClearDestroyOnlineGameCompleteDelegate_Parms() {}
};

// Function IpDrv.OnlineGameInterfaceImpl.AddDestroyOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execAddDestroyOnlineGameCompleteDelegate_Parms
{
	union { struct FScriptDelegate                     DestroyOnlineGameCompleteDelegate; };             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 UOnlineGameInterfaceImpl_execAddDestroyOnlineGameCompleteDelegate_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineGameInterfaceImpl_execAddDestroyOnlineGameCompleteDelegate_Parms() {}
};

// Function IpDrv.OnlineGameInterfaceImpl.OnDestroyOnlineGameComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnDestroyOnlineGameComplete_Parms
{
	union { struct SFXName                             SessionName; };                                   		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful;                                   		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 UOnlineGameInterfaceImpl_execOnDestroyOnlineGameComplete_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineGameInterfaceImpl_execOnDestroyOnlineGameComplete_Parms() {}
};

// Function IpDrv.OnlineGameInterfaceImpl.DestroyOnlineGame
// [0x00020400] ( FUNC_Native )
struct UOnlineGameInterfaceImpl_execDestroyOnlineGame_Parms
{
	union { struct SFXName                             SessionName; };                                   		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UOnlineGameInterfaceImpl_execDestroyOnlineGame_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineGameInterfaceImpl_execDestroyOnlineGame_Parms() {}
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearUpdateOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execClearUpdateOnlineGameCompleteDelegate_Parms
{
	union { struct FScriptDelegate                     UpdateOnlineGameCompleteDelegate; };              		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              

	 UOnlineGameInterfaceImpl_execClearUpdateOnlineGameCompleteDelegate_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineGameInterfaceImpl_execClearUpdateOnlineGameCompleteDelegate_Parms() {}
};

// Function IpDrv.OnlineGameInterfaceImpl.AddUpdateOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execAddUpdateOnlineGameCompleteDelegate_Parms
{
	union { struct FScriptDelegate                     UpdateOnlineGameCompleteDelegate; };              		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 UOnlineGameInterfaceImpl_execAddUpdateOnlineGameCompleteDelegate_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineGameInterfaceImpl_execAddUpdateOnlineGameCompleteDelegate_Parms() {}
};

// Function IpDrv.OnlineGameInterfaceImpl.OnUpdateOnlineGameComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnUpdateOnlineGameComplete_Parms
{
	union { struct SFXName                             SessionName; };                                   		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful;                                   		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 UOnlineGameInterfaceImpl_execOnUpdateOnlineGameComplete_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineGameInterfaceImpl_execOnUpdateOnlineGameComplete_Parms() {}
};

// Function IpDrv.OnlineGameInterfaceImpl.UpdateOnlineGame
// [0x00024000] 
struct UOnlineGameInterfaceImpl_execUpdateOnlineGame_Parms
{
	union { struct SFXName                             SessionName; };                                   		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineGameSettings*                         UpdatedGameSettings;                              		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bShouldRefreshOnlineData;                         		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UOnlineGameInterfaceImpl_execUpdateOnlineGame_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineGameInterfaceImpl_execUpdateOnlineGame_Parms() {}
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearCreateOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execClearCreateOnlineGameCompleteDelegate_Parms
{
	union { struct FScriptDelegate                     CreateOnlineGameCompleteDelegate; };              		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              

	 UOnlineGameInterfaceImpl_execClearCreateOnlineGameCompleteDelegate_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineGameInterfaceImpl_execClearCreateOnlineGameCompleteDelegate_Parms() {}
};

// Function IpDrv.OnlineGameInterfaceImpl.AddCreateOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execAddCreateOnlineGameCompleteDelegate_Parms
{
	union { struct FScriptDelegate                     CreateOnlineGameCompleteDelegate; };              		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 UOnlineGameInterfaceImpl_execAddCreateOnlineGameCompleteDelegate_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineGameInterfaceImpl_execAddCreateOnlineGameCompleteDelegate_Parms() {}
};

// Function IpDrv.OnlineGameInterfaceImpl.OnCreateOnlineGameComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnCreateOnlineGameComplete_Parms
{
	union { struct SFXName                             SessionName; };                                   		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful;                                   		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 UOnlineGameInterfaceImpl_execOnCreateOnlineGameComplete_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineGameInterfaceImpl_execOnCreateOnlineGameComplete_Parms() {}
};

// Function IpDrv.OnlineGameInterfaceImpl.CreateOnlineGame
// [0x00020400] ( FUNC_Native )
struct UOnlineGameInterfaceImpl_execCreateOnlineGame_Parms
{
	unsigned char                                      HostingPlayerNum;                                 		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	union { struct SFXName                             SessionName; };                                   		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineGameSettings*                         NewGameSettings;                                  		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UOnlineGameInterfaceImpl_execCreateOnlineGame_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineGameInterfaceImpl_execCreateOnlineGame_Parms() {}
};

// Function IpDrv.OnlineGameInterfaceImpl.GetGameSearch
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execGetGameSearch_Parms
{
	class UOnlineGameSearch*                           ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UOnlineGameInterfaceImpl_execGetGameSearch_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineGameInterfaceImpl_execGetGameSearch_Parms() {}
};

// Function IpDrv.OnlineGameInterfaceImpl.GetGameSettings
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execGetGameSettings_Parms
{
	union { struct SFXName                             SessionName; };                                   		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineGameSettings*                         ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UOnlineGameInterfaceImpl_execGetGameSettings_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineGameInterfaceImpl_execGetGameSettings_Parms() {}
};

// Function IpDrv.OnlineGameInterfaceImpl.OnFindOnlineGamesComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnFindOnlineGamesComplete_Parms
{
	unsigned long                                      bWasSuccessful;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 UOnlineGameInterfaceImpl_execOnFindOnlineGamesComplete_Parms() { memset(this, 0, sizeof *this); }
	~UOnlineGameInterfaceImpl_execOnFindOnlineGamesComplete_Parms() {}
};

// Function IpDrv.PartyBeacon.OnDestroyComplete
// [0x00120000] 
struct UPartyBeacon_execOnDestroyComplete_Parms
{

	 UPartyBeacon_execOnDestroyComplete_Parms() { memset(this, 0, sizeof *this); }
	~UPartyBeacon_execOnDestroyComplete_Parms() {}
};

// Function IpDrv.PartyBeacon.DestroyBeacon
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPartyBeacon_eventDestroyBeacon_Parms
{

	 UPartyBeacon_eventDestroyBeacon_Parms() { memset(this, 0, sizeof *this); }
	~UPartyBeacon_eventDestroyBeacon_Parms() {}
};

// Function IpDrv.PartyBeaconClient.DestroyBeacon
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPartyBeaconClient_eventDestroyBeacon_Parms
{

	 UPartyBeaconClient_eventDestroyBeacon_Parms() { memset(this, 0, sizeof *this); }
	~UPartyBeaconClient_eventDestroyBeacon_Parms() {}
};

// Function IpDrv.PartyBeaconClient.CancelReservation
// [0x00020400] ( FUNC_Native )
struct UPartyBeaconClient_execCancelReservation_Parms
{
	union { struct FUniqueNetId                        CancellingPartyLeader; };                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UPartyBeaconClient_execCancelReservation_Parms() { memset(this, 0, sizeof *this); }
	~UPartyBeaconClient_execCancelReservation_Parms() {}
};

// Function IpDrv.PartyBeaconClient.RequestReservationUpdate
// [0x00420400] ( FUNC_Native )
struct UPartyBeaconClient_execRequestReservationUpdate_Parms
{
	union { struct FOnlineGameSearchResult             DesiredHost; };                                   		// 0x0000 (0x0010) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	union { struct FUniqueNetId                        RequestingPartyLeader; };                         		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { TArray<struct FPlayerReservation>          PlayersToAdd; };                                  		// 0x0018 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0028 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UPartyBeaconClient_execRequestReservationUpdate_Parms() { memset(this, 0, sizeof *this); }
	~UPartyBeaconClient_execRequestReservationUpdate_Parms() {}
};

// Function IpDrv.PartyBeaconClient.RequestReservation
// [0x00420400] ( FUNC_Native )
struct UPartyBeaconClient_execRequestReservation_Parms
{
	union { struct FOnlineGameSearchResult             DesiredHost; };                                   		// 0x0000 (0x0010) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	union { struct FUniqueNetId                        RequestingPartyLeader; };                         		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { TArray<struct FPlayerReservation>          Players; };                                       		// 0x0018 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0028 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UPartyBeaconClient_execRequestReservation_Parms() { memset(this, 0, sizeof *this); }
	~UPartyBeaconClient_execRequestReservation_Parms() {}
};

// Function IpDrv.PartyBeaconClient.OnHostHasCancelled
// [0x00120000] 
struct UPartyBeaconClient_execOnHostHasCancelled_Parms
{

	 UPartyBeaconClient_execOnHostHasCancelled_Parms() { memset(this, 0, sizeof *this); }
	~UPartyBeaconClient_execOnHostHasCancelled_Parms() {}
};

// Function IpDrv.PartyBeaconClient.OnHostIsReady
// [0x00120000] 
struct UPartyBeaconClient_execOnHostIsReady_Parms
{

	 UPartyBeaconClient_execOnHostIsReady_Parms() { memset(this, 0, sizeof *this); }
	~UPartyBeaconClient_execOnHostIsReady_Parms() {}
};

// Function IpDrv.PartyBeaconClient.OnTravelRequestReceived
// [0x00120000] 
struct UPartyBeaconClient_execOnTravelRequestReceived_Parms
{
	union { struct SFXName                             SessionName; };                                   		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      SearchClass;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      PlatformSpecificInfo[ 0x50 ];                     		// 0x0010 (0x0050) [0x0000000000000080]              ( CPF_Parm )

	 UPartyBeaconClient_execOnTravelRequestReceived_Parms() { memset(this, 0, sizeof *this); }
	~UPartyBeaconClient_execOnTravelRequestReceived_Parms() {}
};

// Function IpDrv.PartyBeaconClient.OnReservationCountUpdated
// [0x00120000] 
struct UPartyBeaconClient_execOnReservationCountUpdated_Parms
{
	int                                                ReservationRemaining;                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 UPartyBeaconClient_execOnReservationCountUpdated_Parms() { memset(this, 0, sizeof *this); }
	~UPartyBeaconClient_execOnReservationCountUpdated_Parms() {}
};

// Function IpDrv.PartyBeaconClient.OnReservationRequestComplete
// [0x00120000] 
struct UPartyBeaconClient_execOnReservationRequestComplete_Parms
{
	unsigned char                                      ReservationResult;                                		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )

	 UPartyBeaconClient_execOnReservationRequestComplete_Parms() { memset(this, 0, sizeof *this); }
	~UPartyBeaconClient_execOnReservationRequestComplete_Parms() {}
};

// Function IpDrv.PartyBeaconHost.DumpReservations
// [0x00020002] 
struct UPartyBeaconHost_execDumpReservations_Parms
{
	// int                                             PartyIndex;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             MemberIndex;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	// union { struct FUniqueNetId                     NetId; };                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// union { struct FPlayerReservation               PlayerRes; };                                     		// 0x0010 (0x0024) [0x0000000000000000]              

	 UPartyBeaconHost_execDumpReservations_Parms() { memset(this, 0, sizeof *this); }
	~UPartyBeaconHost_execDumpReservations_Parms() {}
};

// Function IpDrv.PartyBeaconHost.GetMaxAvailableTeamSize
// [0x00020400] ( FUNC_Native )
struct UPartyBeaconHost_execGetMaxAvailableTeamSize_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UPartyBeaconHost_execGetMaxAvailableTeamSize_Parms() { memset(this, 0, sizeof *this); }
	~UPartyBeaconHost_execGetMaxAvailableTeamSize_Parms() {}
};

// Function IpDrv.PartyBeaconHost.GetPartyLeaders
// [0x00420002] 
struct UPartyBeaconHost_execGetPartyLeaders_Parms
{
	union { TArray<struct FUniqueNetId>                PartyLeaders; };                                  		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	// int                                             PartyIndex;                                       		// 0x0010 (0x0004) [0x0000000000000000]              

	 UPartyBeaconHost_execGetPartyLeaders_Parms() { memset(this, 0, sizeof *this); }
	~UPartyBeaconHost_execGetPartyLeaders_Parms() {}
};

// Function IpDrv.PartyBeaconHost.GetPlayers
// [0x00420002] 
struct UPartyBeaconHost_execGetPlayers_Parms
{
	union { TArray<struct FUniqueNetId>                Players; };                                       		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	// int                                             PlayerIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             PartyIndex;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	// union { struct FPlayerReservation               PlayerRes; };                                     		// 0x0018 (0x0024) [0x0000000000000000]              

	 UPartyBeaconHost_execGetPlayers_Parms() { memset(this, 0, sizeof *this); }
	~UPartyBeaconHost_execGetPlayers_Parms() {}
};

// Function IpDrv.PartyBeaconHost.AppendReservationSkillsToSearch
// [0x00020400] ( FUNC_Native )
struct UPartyBeaconHost_execAppendReservationSkillsToSearch_Parms
{
	class UOnlineGameSearch*                           Search;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 UPartyBeaconHost_execAppendReservationSkillsToSearch_Parms() { memset(this, 0, sizeof *this); }
	~UPartyBeaconHost_execAppendReservationSkillsToSearch_Parms() {}
};

// Function IpDrv.PartyBeaconHost.UnregisterParty
// [0x00020802] ( FUNC_Event )
struct UPartyBeaconHost_eventUnregisterParty_Parms
{
	union { struct FUniqueNetId                        PartyLeader; };                                   		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// int                                             PlayerIndex;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             PartyIndex;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	// class UOnlineSubsystem*                         OnlineSub;                                        		// 0x0010 (0x0008) [0x0000000000000000]              
	// union { struct FPlayerReservation               PlayerRes; };                                     		// 0x0018 (0x0024) [0x0000000000000000]              

	 UPartyBeaconHost_eventUnregisterParty_Parms() { memset(this, 0, sizeof *this); }
	~UPartyBeaconHost_eventUnregisterParty_Parms() {}
};

// Function IpDrv.PartyBeaconHost.UnregisterPartyMembers
// [0x00020802] ( FUNC_Event )
struct UPartyBeaconHost_eventUnregisterPartyMembers_Parms
{
	// int                                             Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             PartyIndex;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UOnlineSubsystem*                         OnlineSub;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	// union { struct FPlayerReservation               PlayerRes; };                                     		// 0x0010 (0x0024) [0x0000000000000000]              

	 UPartyBeaconHost_eventUnregisterPartyMembers_Parms() { memset(this, 0, sizeof *this); }
	~UPartyBeaconHost_eventUnregisterPartyMembers_Parms() {}
};

// Function IpDrv.PartyBeaconHost.RegisterPartyMembers
// [0x00020802] ( FUNC_Event )
struct UPartyBeaconHost_eventRegisterPartyMembers_Parms
{
	// int                                             Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             PartyIndex;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UOnlineSubsystem*                         OnlineSub;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	// class UOnlineRecentPlayersList*                 PlayersList;                                      		// 0x0010 (0x0008) [0x0000000000000000]              
	// union { TArray<struct FUniqueNetId>             Members; };                                       		// 0x0018 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// union { struct FPlayerReservation               PlayerRes; };                                     		// 0x0028 (0x0024) [0x0000000000000000]              

	 UPartyBeaconHost_eventRegisterPartyMembers_Parms() { memset(this, 0, sizeof *this); }
	~UPartyBeaconHost_eventRegisterPartyMembers_Parms() {}
};

// Function IpDrv.PartyBeaconHost.AreReservationsFull
// [0x00020002] 
struct UPartyBeaconHost_execAreReservationsFull_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UPartyBeaconHost_execAreReservationsFull_Parms() { memset(this, 0, sizeof *this); }
	~UPartyBeaconHost_execAreReservationsFull_Parms() {}
};

// Function IpDrv.PartyBeaconHost.TellClientsHostHasCancelled
// [0x00020400] ( FUNC_Native )
struct UPartyBeaconHost_execTellClientsHostHasCancelled_Parms
{

	 UPartyBeaconHost_execTellClientsHostHasCancelled_Parms() { memset(this, 0, sizeof *this); }
	~UPartyBeaconHost_execTellClientsHostHasCancelled_Parms() {}
};

// Function IpDrv.PartyBeaconHost.TellClientsHostIsReady
// [0x00020400] ( FUNC_Native )
struct UPartyBeaconHost_execTellClientsHostIsReady_Parms
{

	 UPartyBeaconHost_execTellClientsHostIsReady_Parms() { memset(this, 0, sizeof *this); }
	~UPartyBeaconHost_execTellClientsHostIsReady_Parms() {}
};

// Function IpDrv.PartyBeaconHost.TellClientsToTravel
// [0x00020400] ( FUNC_Native )
struct UPartyBeaconHost_execTellClientsToTravel_Parms
{
	union { struct SFXName                             SessionName; };                                   		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      SearchClass;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      PlatformSpecificInfo[ 0x50 ];                     		// 0x0010 (0x0050) [0x0000000000000080]              ( CPF_Parm )

	 UPartyBeaconHost_execTellClientsToTravel_Parms() { memset(this, 0, sizeof *this); }
	~UPartyBeaconHost_execTellClientsToTravel_Parms() {}
};

// Function IpDrv.PartyBeaconHost.DestroyBeacon
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPartyBeaconHost_eventDestroyBeacon_Parms
{

	 UPartyBeaconHost_eventDestroyBeacon_Parms() { memset(this, 0, sizeof *this); }
	~UPartyBeaconHost_eventDestroyBeacon_Parms() {}
};

// Function IpDrv.PartyBeaconHost.OnClientCancellationReceived
// [0x00120000] 
struct UPartyBeaconHost_execOnClientCancellationReceived_Parms
{
	union { struct FUniqueNetId                        PartyLeader; };                                   		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 UPartyBeaconHost_execOnClientCancellationReceived_Parms() { memset(this, 0, sizeof *this); }
	~UPartyBeaconHost_execOnClientCancellationReceived_Parms() {}
};

// Function IpDrv.PartyBeaconHost.OnReservationsFull
// [0x00120000] 
struct UPartyBeaconHost_execOnReservationsFull_Parms
{

	 UPartyBeaconHost_execOnReservationsFull_Parms() { memset(this, 0, sizeof *this); }
	~UPartyBeaconHost_execOnReservationsFull_Parms() {}
};

// Function IpDrv.PartyBeaconHost.OnReservationChange
// [0x00120000] 
struct UPartyBeaconHost_execOnReservationChange_Parms
{

	 UPartyBeaconHost_execOnReservationChange_Parms() { memset(this, 0, sizeof *this); }
	~UPartyBeaconHost_execOnReservationChange_Parms() {}
};

// Function IpDrv.PartyBeaconHost.HandlePlayerLogout
// [0x00020400] ( FUNC_Native )
struct UPartyBeaconHost_execHandlePlayerLogout_Parms
{
	union { struct FUniqueNetId                        PlayerID; };                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bMaintainParty;                                   		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )

	 UPartyBeaconHost_execHandlePlayerLogout_Parms() { memset(this, 0, sizeof *this); }
	~UPartyBeaconHost_execHandlePlayerLogout_Parms() {}
};

// Function IpDrv.PartyBeaconHost.UpdatePartyReservationEntry
// [0x00420400] ( FUNC_Native )
struct UPartyBeaconHost_execUpdatePartyReservationEntry_Parms
{
	union { struct FUniqueNetId                        PartyLeader; };                                   		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { TArray<struct FPlayerReservation>          PlayerMembers; };                                 		// 0x0008 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned char                                      ReturnValue;                                      		// 0x0018 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UPartyBeaconHost_execUpdatePartyReservationEntry_Parms() { memset(this, 0, sizeof *this); }
	~UPartyBeaconHost_execUpdatePartyReservationEntry_Parms() {}
};

// Function IpDrv.PartyBeaconHost.AddPartyReservationEntry
// [0x00420400] ( FUNC_Native )
struct UPartyBeaconHost_execAddPartyReservationEntry_Parms
{
	union { struct FUniqueNetId                        PartyLeader; };                                   		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	union { TArray<struct FPlayerReservation>          PlayerMembers; };                                 		// 0x0008 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                TeamNum;                                          		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bIsHost;                                          		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0020 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UPartyBeaconHost_execAddPartyReservationEntry_Parms() { memset(this, 0, sizeof *this); }
	~UPartyBeaconHost_execAddPartyReservationEntry_Parms() {}
};

// Function IpDrv.PartyBeaconHost.InitHostBeacon
// [0x00020400] ( FUNC_Native )
struct UPartyBeaconHost_execInitHostBeacon_Parms
{
	int                                                InNumTeams;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                InNumPlayersPerTeam;                              		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                InNumReservations;                                		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { struct SFXName                             InSessionName; };                                 		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UPartyBeaconHost_execInitHostBeacon_Parms() { memset(this, 0, sizeof *this); }
	~UPartyBeaconHost_execInitHostBeacon_Parms() {}
};

// Function IpDrv.WebRequest.GetHexDigit
// [0x00020002] 
struct UWebRequest_execGetHexDigit_Parms
{
	union { FString                                    D; };                                             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UWebRequest_execGetHexDigit_Parms() { memset(this, 0, sizeof *this); }
	~UWebRequest_execGetHexDigit_Parms() {}
};

// Function IpDrv.WebRequest.DecodeFormData
// [0x00020002] 
struct UWebRequest_execDecodeFormData_Parms
{
	union { FString                                    Data; };                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// union { FString                                 token[ 0x2 ]; };                                  		// 0x0010 (0x0020) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// union { FString                                 ch; };                                            		// 0x0030 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             i;                                                		// 0x0040 (0x0004) [0x0000000000000000]              
	// int                                             H1;                                               		// 0x0044 (0x0004) [0x0000000000000000]              
	// int                                             H2;                                               		// 0x0048 (0x0004) [0x0000000000000000]              
	// int                                             Limit;                                            		// 0x004C (0x0004) [0x0000000000000000]              
	// int                                             T;                                                		// 0x0050 (0x0004) [0x0000000000000000]              

	 UWebRequest_execDecodeFormData_Parms() { memset(this, 0, sizeof *this); }
	~UWebRequest_execDecodeFormData_Parms() {}
};

// Function IpDrv.WebRequest.ProcessHeaderString
// [0x00020002] 
struct UWebRequest_execProcessHeaderString_Parms
{
	union { FString                                    S; };                                             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             i;                                                		// 0x0010 (0x0004) [0x0000000000000000]              

	 UWebRequest_execProcessHeaderString_Parms() { memset(this, 0, sizeof *this); }
	~UWebRequest_execProcessHeaderString_Parms() {}
};

// Function IpDrv.WebRequest.Dump
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWebRequest_execDump_Parms
{

	 UWebRequest_execDump_Parms() { memset(this, 0, sizeof *this); }
	~UWebRequest_execDump_Parms() {}
};

// Function IpDrv.WebRequest.GetVariables
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UWebRequest_execGetVariables_Parms
{
	union { TArray<FString>                            varNames; };                                      		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

	 UWebRequest_execGetVariables_Parms() { memset(this, 0, sizeof *this); }
	~UWebRequest_execGetVariables_Parms() {}
};

// Function IpDrv.WebRequest.GetVariableNumber
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UWebRequest_execGetVariableNumber_Parms
{
	union { FString                                    VariableName; };                                  		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                Number;                                           		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    DefaultValue; };                                  		// 0x0014 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	union { FString                                    ReturnValue; };                                   		// 0x0024 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

	 UWebRequest_execGetVariableNumber_Parms() { memset(this, 0, sizeof *this); }
	~UWebRequest_execGetVariableNumber_Parms() {}
};

// Function IpDrv.WebRequest.GetVariableCount
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWebRequest_execGetVariableCount_Parms
{
	union { FString                                    VariableName; };                                  		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UWebRequest_execGetVariableCount_Parms() { memset(this, 0, sizeof *this); }
	~UWebRequest_execGetVariableCount_Parms() {}
};

// Function IpDrv.WebRequest.GetVariable
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UWebRequest_execGetVariable_Parms
{
	union { FString                                    VariableName; };                                  		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { FString                                    DefaultValue; };                                  		// 0x0010 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	union { FString                                    ReturnValue; };                                   		// 0x0020 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

	 UWebRequest_execGetVariable_Parms() { memset(this, 0, sizeof *this); }
	~UWebRequest_execGetVariable_Parms() {}
};

// Function IpDrv.WebRequest.AddVariable
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWebRequest_execAddVariable_Parms
{
	union { FString                                    VariableName; };                                  		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { FString                                    Value; };                                         		// 0x0010 (0x0010) [0x0000000000400880]              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )

	 UWebRequest_execAddVariable_Parms() { memset(this, 0, sizeof *this); }
	~UWebRequest_execAddVariable_Parms() {}
};

// Function IpDrv.WebRequest.GetHeaders
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UWebRequest_execGetHeaders_Parms
{
	union { TArray<FString>                            headers; };                                       		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

	 UWebRequest_execGetHeaders_Parms() { memset(this, 0, sizeof *this); }
	~UWebRequest_execGetHeaders_Parms() {}
};

// Function IpDrv.WebRequest.GetHeader
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UWebRequest_execGetHeader_Parms
{
	union { FString                                    HeaderName; };                                    		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { FString                                    DefaultValue; };                                  		// 0x0010 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	union { FString                                    ReturnValue; };                                   		// 0x0020 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

	 UWebRequest_execGetHeader_Parms() { memset(this, 0, sizeof *this); }
	~UWebRequest_execGetHeader_Parms() {}
};

// Function IpDrv.WebRequest.AddHeader
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWebRequest_execAddHeader_Parms
{
	union { FString                                    HeaderName; };                                    		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { FString                                    Value; };                                         		// 0x0010 (0x0010) [0x0000000000400880]              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )

	 UWebRequest_execAddHeader_Parms() { memset(this, 0, sizeof *this); }
	~UWebRequest_execAddHeader_Parms() {}
};

// Function IpDrv.WebRequest.EncodeBase64
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWebRequest_execEncodeBase64_Parms
{
	union { FString                                    Decoded; };                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { FString                                    ReturnValue; };                                   		// 0x0010 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

	 UWebRequest_execEncodeBase64_Parms() { memset(this, 0, sizeof *this); }
	~UWebRequest_execEncodeBase64_Parms() {}
};

// Function IpDrv.WebRequest.DecodeBase64
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWebRequest_execDecodeBase64_Parms
{
	union { FString                                    Encoded; };                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { FString                                    ReturnValue; };                                   		// 0x0010 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

	 UWebRequest_execDecodeBase64_Parms() { memset(this, 0, sizeof *this); }
	~UWebRequest_execDecodeBase64_Parms() {}
};

// Function IpDrv.WebResponse.SentResponse
// [0x00020002] 
struct UWebResponse_execSentResponse_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UWebResponse_execSentResponse_Parms() { memset(this, 0, sizeof *this); }
	~UWebResponse_execSentResponse_Parms() {}
};

// Function IpDrv.WebResponse.SentText
// [0x00020002] 
struct UWebResponse_execSentText_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UWebResponse_execSentText_Parms() { memset(this, 0, sizeof *this); }
	~UWebResponse_execSentText_Parms() {}
};

// Function IpDrv.WebResponse.Redirect
// [0x00020002] 
struct UWebResponse_execRedirect_Parms
{
	union { FString                                    URL; };                                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 UWebResponse_execRedirect_Parms() { memset(this, 0, sizeof *this); }
	~UWebResponse_execRedirect_Parms() {}
};

// Function IpDrv.WebResponse.SendStandardHeaders
// [0x00024002] 
struct UWebResponse_execSendStandardHeaders_Parms
{
	union { FString                                    ContentType; };                                   		// 0x0000 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bCache;                                           		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 UWebResponse_execSendStandardHeaders_Parms() { memset(this, 0, sizeof *this); }
	~UWebResponse_execSendStandardHeaders_Parms() {}
};

// Function IpDrv.WebResponse.HTTPError
// [0x00024002] 
struct UWebResponse_execHTTPError_Parms
{
	int                                                ErrorNum;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	union { FString                                    Data; };                                          		// 0x0004 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

	 UWebResponse_execHTTPError_Parms() { memset(this, 0, sizeof *this); }
	~UWebResponse_execHTTPError_Parms() {}
};

// Function IpDrv.WebResponse.SendHeaders
// [0x00020002] 
struct UWebResponse_execSendHeaders_Parms
{
	// union { FString                                 hdr; };                                           		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

	 UWebResponse_execSendHeaders_Parms() { memset(this, 0, sizeof *this); }
	~UWebResponse_execSendHeaders_Parms() {}
};

// Function IpDrv.WebResponse.AddHeader
// [0x00024002] 
struct UWebResponse_execAddHeader_Parms
{
	union { FString                                    Header; };                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bReplace;                                         		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// int                                             i;                                                		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             idx;                                              		// 0x0018 (0x0004) [0x0000000000000000]              
	// union { FString                                 Part; };                                          		// 0x001C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// union { FString                                 Entry; };                                         		// 0x002C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

	 UWebResponse_execAddHeader_Parms() { memset(this, 0, sizeof *this); }
	~UWebResponse_execAddHeader_Parms() {}
};

// Function IpDrv.WebResponse.HTTPHeader
// [0x00020002] 
struct UWebResponse_execHTTPHeader_Parms
{
	union { FString                                    Header; };                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 UWebResponse_execHTTPHeader_Parms() { memset(this, 0, sizeof *this); }
	~UWebResponse_execHTTPHeader_Parms() {}
};

// Function IpDrv.WebResponse.HTTPResponse
// [0x00020002] 
struct UWebResponse_execHTTPResponse_Parms
{
	union { FString                                    Header; };                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 UWebResponse_execHTTPResponse_Parms() { memset(this, 0, sizeof *this); }
	~UWebResponse_execHTTPResponse_Parms() {}
};

// Function IpDrv.WebResponse.FailAuthentication
// [0x00020002] 
struct UWebResponse_execFailAuthentication_Parms
{
	union { FString                                    Realm; };                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 UWebResponse_execFailAuthentication_Parms() { memset(this, 0, sizeof *this); }
	~UWebResponse_execFailAuthentication_Parms() {}
};

// Function IpDrv.WebResponse.SendCachedFile
// [0x00024002] 
struct UWebResponse_execSendCachedFile_Parms
{
	union { FString                                    Filename; };                                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { FString                                    ContentType; };                                   		// 0x0010 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0020 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UWebResponse_execSendCachedFile_Parms() { memset(this, 0, sizeof *this); }
	~UWebResponse_execSendCachedFile_Parms() {}
};

// Function IpDrv.WebResponse.SendBinary
// [0x00020802] ( FUNC_Event )
struct UWebResponse_eventSendBinary_Parms
{
	int                                                Count;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      B[ 0xFF ];                                        		// 0x0004 (0x00FF) [0x0000000000000080]              ( CPF_Parm )

	 UWebResponse_eventSendBinary_Parms() { memset(this, 0, sizeof *this); }
	~UWebResponse_eventSendBinary_Parms() {}
};

// Function IpDrv.WebResponse.SendText
// [0x00024802] ( FUNC_Event )
struct UWebResponse_eventSendText_Parms
{
	union { FString                                    Text; };                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bNoCRLF;                                          		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 UWebResponse_eventSendText_Parms() { memset(this, 0, sizeof *this); }
	~UWebResponse_eventSendText_Parms() {}
};

// Function IpDrv.WebResponse.Dump
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWebResponse_execDump_Parms
{

	 UWebResponse_execDump_Parms() { memset(this, 0, sizeof *this); }
	~UWebResponse_execDump_Parms() {}
};

// Function IpDrv.WebResponse.GetHTTPExpiration
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UWebResponse_execGetHTTPExpiration_Parms
{
	int                                                OffsetSeconds;                                    		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	union { FString                                    ReturnValue; };                                   		// 0x0004 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

	 UWebResponse_execGetHTTPExpiration_Parms() { memset(this, 0, sizeof *this); }
	~UWebResponse_execGetHTTPExpiration_Parms() {}
};

// Function IpDrv.WebResponse.LoadParsedUHTM
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWebResponse_execLoadParsedUHTM_Parms
{
	union { FString                                    Filename; };                                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { FString                                    ReturnValue; };                                   		// 0x0010 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

	 UWebResponse_execLoadParsedUHTM_Parms() { memset(this, 0, sizeof *this); }
	~UWebResponse_execLoadParsedUHTM_Parms() {}
};

// Function IpDrv.WebResponse.IncludeBinaryFile
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWebResponse_execIncludeBinaryFile_Parms
{
	union { FString                                    Filename; };                                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UWebResponse_execIncludeBinaryFile_Parms() { memset(this, 0, sizeof *this); }
	~UWebResponse_execIncludeBinaryFile_Parms() {}
};

// Function IpDrv.WebResponse.IncludeUHTM
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWebResponse_execIncludeUHTM_Parms
{
	union { FString                                    Filename; };                                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UWebResponse_execIncludeUHTM_Parms() { memset(this, 0, sizeof *this); }
	~UWebResponse_execIncludeUHTM_Parms() {}
};

// Function IpDrv.WebResponse.ClearSubst
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWebResponse_execClearSubst_Parms
{

	 UWebResponse_execClearSubst_Parms() { memset(this, 0, sizeof *this); }
	~UWebResponse_execClearSubst_Parms() {}
};

// Function IpDrv.WebResponse.Subst
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UWebResponse_execSubst_Parms
{
	union { FString                                    Variable; };                                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { FString                                    Value; };                                         		// 0x0010 (0x0010) [0x0000000000400880]              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
	unsigned long                                      bClear;                                           		// 0x0020 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )

	 UWebResponse_execSubst_Parms() { memset(this, 0, sizeof *this); }
	~UWebResponse_execSubst_Parms() {}
};

// Function IpDrv.WebResponse.FileExists
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWebResponse_execFileExists_Parms
{
	union { FString                                    Filename; };                                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UWebResponse_execFileExists_Parms() { memset(this, 0, sizeof *this); }
	~UWebResponse_execFileExists_Parms() {}
};

// Function IpDrv.WebApplication.PostQuery
// [0x00020000] 
struct UWebApplication_execPostQuery_Parms
{
	class UWebRequest*                                 request;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UWebResponse*                                Response;                                         		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 UWebApplication_execPostQuery_Parms() { memset(this, 0, sizeof *this); }
	~UWebApplication_execPostQuery_Parms() {}
};

// Function IpDrv.WebApplication.Query
// [0x00020000] 
struct UWebApplication_execQuery_Parms
{
	class UWebRequest*                                 request;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UWebResponse*                                Response;                                         		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 UWebApplication_execQuery_Parms() { memset(this, 0, sizeof *this); }
	~UWebApplication_execQuery_Parms() {}
};

// Function IpDrv.WebApplication.PreQuery
// [0x00020002] 
struct UWebApplication_execPreQuery_Parms
{
	class UWebRequest*                                 request;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UWebResponse*                                Response;                                         		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 UWebApplication_execPreQuery_Parms() { memset(this, 0, sizeof *this); }
	~UWebApplication_execPreQuery_Parms() {}
};

// Function IpDrv.WebApplication.CleanupApp
// [0x00020002] 
struct UWebApplication_execCleanupApp_Parms
{

	 UWebApplication_execCleanupApp_Parms() { memset(this, 0, sizeof *this); }
	~UWebApplication_execCleanupApp_Parms() {}
};

// Function IpDrv.WebApplication.Cleanup
// [0x00020001] ( FUNC_Final )
struct UWebApplication_execCleanup_Parms
{

	 UWebApplication_execCleanup_Parms() { memset(this, 0, sizeof *this); }
	~UWebApplication_execCleanup_Parms() {}
};

// Function IpDrv.WebApplication.Init
// [0x00020000] 
struct UWebApplication_execInit_Parms
{

	 UWebApplication_execInit_Parms() { memset(this, 0, sizeof *this); }
	~UWebApplication_execInit_Parms() {}
};

// Function IpDrv.WebServer.GetApplication
// [0x00420002] 
struct AWebServer_execGetApplication_Parms
{
	union { FString                                    URI; };                                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	union { FString                                    SubURI; };                                        		// 0x0010 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	class UWebApplication*                             ReturnValue;                                      		// 0x0020 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             i;                                                		// 0x0028 (0x0004) [0x0000000000000000]              
	// int                                             L;                                                		// 0x002C (0x0004) [0x0000000000000000]              

	 AWebServer_execGetApplication_Parms() { memset(this, 0, sizeof *this); }
	~AWebServer_execGetApplication_Parms() {}
};

// Function IpDrv.WebServer.LostChild
// [0x00020802] ( FUNC_Event )
struct AWebServer_eventLostChild_Parms
{
	class AActor*                                      C;                                                		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 AWebServer_eventLostChild_Parms() { memset(this, 0, sizeof *this); }
	~AWebServer_eventLostChild_Parms() {}
};

// Function IpDrv.WebServer.GainedChild
// [0x00020802] ( FUNC_Event )
struct AWebServer_eventGainedChild_Parms
{
	class AActor*                                      C;                                                		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )

	 AWebServer_eventGainedChild_Parms() { memset(this, 0, sizeof *this); }
	~AWebServer_eventGainedChild_Parms() {}
};

// Function IpDrv.WebServer.Destroyed
// [0x00020802] ( FUNC_Event )
struct AWebServer_eventDestroyed_Parms
{
	// int                                             i;                                                		// 0x0000 (0x0004) [0x0000000000000000]              

	 AWebServer_eventDestroyed_Parms() { memset(this, 0, sizeof *this); }
	~AWebServer_eventDestroyed_Parms() {}
};

// Function IpDrv.WebServer.PostBeginPlay
// [0x00020002] 
struct AWebServer_execPostBeginPlay_Parms
{
	// int                                             i;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UClass*                                   ApplicationClass;                                 		// 0x0004 (0x0008) [0x0000000000000000]              
	// union { struct FIpAddr                          L; };                                             		// 0x000C (0x0014) [0x0000000000000000]              
	// union { FString                                 S; };                                             		// 0x0020 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

	 AWebServer_execPostBeginPlay_Parms() { memset(this, 0, sizeof *this); }
	~AWebServer_execPostBeginPlay_Parms() {}
};

// Function IpDrv.HelloWeb.Query
// [0x00020802] ( FUNC_Event )
struct UHelloWeb_eventQuery_Parms
{
	class UWebRequest*                                 request;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UWebResponse*                                Response;                                         		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// int                                             i;                                                		// 0x0010 (0x0004) [0x0000000000000000]              

	 UHelloWeb_eventQuery_Parms() { memset(this, 0, sizeof *this); }
	~UHelloWeb_eventQuery_Parms() {}
};

// Function IpDrv.HelloWeb.Init
// [0x00020002] 
struct UHelloWeb_execInit_Parms
{

	 UHelloWeb_execInit_Parms() { memset(this, 0, sizeof *this); }
	~UHelloWeb_execInit_Parms() {}
};

// Function IpDrv.ImageServer.Query
// [0x00020802] ( FUNC_Event )
struct UImageServer_eventQuery_Parms
{
	class UWebRequest*                                 request;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UWebResponse*                                Response;                                         		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// union { FString                                 Image; };                                         		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

	 UImageServer_eventQuery_Parms() { memset(this, 0, sizeof *this); }
	~UImageServer_eventQuery_Parms() {}
};

// Function IpDrv.WebConnection.IsHanging
// [0x00020003] ( FUNC_Final )
struct AWebConnection_execIsHanging_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

	 AWebConnection_execIsHanging_Parms() { memset(this, 0, sizeof *this); }
	~AWebConnection_execIsHanging_Parms() {}
};

// Function IpDrv.WebConnection.Cleanup
// [0x00020002] 
struct AWebConnection_execCleanup_Parms
{

	 AWebConnection_execCleanup_Parms() { memset(this, 0, sizeof *this); }
	~AWebConnection_execCleanup_Parms() {}
};

// Function IpDrv.WebConnection.CheckRawBytes
// [0x00020002] 
struct AWebConnection_execCheckRawBytes_Parms
{

	 AWebConnection_execCheckRawBytes_Parms() { memset(this, 0, sizeof *this); }
	~AWebConnection_execCheckRawBytes_Parms() {}
};

// Function IpDrv.WebConnection.EndOfHeaders
// [0x00020002] 
struct AWebConnection_execEndOfHeaders_Parms
{

	 AWebConnection_execEndOfHeaders_Parms() { memset(this, 0, sizeof *this); }
	~AWebConnection_execEndOfHeaders_Parms() {}
};

// Function IpDrv.WebConnection.CreateResponseObject
// [0x00020002] 
struct AWebConnection_execCreateResponseObject_Parms
{
	// int                                             i;                                                		// 0x0000 (0x0004) [0x0000000000000000]              

	 AWebConnection_execCreateResponseObject_Parms() { memset(this, 0, sizeof *this); }
	~AWebConnection_execCreateResponseObject_Parms() {}
};

// Function IpDrv.WebConnection.ProcessPost
// [0x00020002] 
struct AWebConnection_execProcessPost_Parms
{
	union { FString                                    S; };                                             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             i;                                                		// 0x0010 (0x0004) [0x0000000000000000]              

	 AWebConnection_execProcessPost_Parms() { memset(this, 0, sizeof *this); }
	~AWebConnection_execProcessPost_Parms() {}
};

// Function IpDrv.WebConnection.ProcessGet
// [0x00020002] 
struct AWebConnection_execProcessGet_Parms
{
	union { FString                                    S; };                                             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             i;                                                		// 0x0010 (0x0004) [0x0000000000000000]              

	 AWebConnection_execProcessGet_Parms() { memset(this, 0, sizeof *this); }
	~AWebConnection_execProcessGet_Parms() {}
};

// Function IpDrv.WebConnection.ProcessHead
// [0x00020002] 
struct AWebConnection_execProcessHead_Parms
{
	union { FString                                    S; };                                             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 AWebConnection_execProcessHead_Parms() { memset(this, 0, sizeof *this); }
	~AWebConnection_execProcessHead_Parms() {}
};

// Function IpDrv.WebConnection.ReceivedLine
// [0x00020002] 
struct AWebConnection_execReceivedLine_Parms
{
	union { FString                                    S; };                                             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )

	 AWebConnection_execReceivedLine_Parms() { memset(this, 0, sizeof *this); }
	~AWebConnection_execReceivedLine_Parms() {}
};

// Function IpDrv.WebConnection.ReceivedText
// [0x00020802] ( FUNC_Event )
struct AWebConnection_eventReceivedText_Parms
{
	union { FString                                    Text; };                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             i;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// union { FString                                 S; };                                             		// 0x0014 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

	 AWebConnection_eventReceivedText_Parms() { memset(this, 0, sizeof *this); }
	~AWebConnection_eventReceivedText_Parms() {}
};

// Function IpDrv.WebConnection.Timer
// [0x00020802] ( FUNC_Event )
struct AWebConnection_eventTimer_Parms
{

	 AWebConnection_eventTimer_Parms() { memset(this, 0, sizeof *this); }
	~AWebConnection_eventTimer_Parms() {}
};

// Function IpDrv.WebConnection.Closed
// [0x00020802] ( FUNC_Event )
struct AWebConnection_eventClosed_Parms
{

	 AWebConnection_eventClosed_Parms() { memset(this, 0, sizeof *this); }
	~AWebConnection_eventClosed_Parms() {}
};

// Function IpDrv.WebConnection.Accepted
// [0x00020802] ( FUNC_Event )
struct AWebConnection_eventAccepted_Parms
{

	 AWebConnection_eventAccepted_Parms() { memset(this, 0, sizeof *this); }
	~AWebConnection_eventAccepted_Parms() {}
};



#undef LESDK_IN_GENERATED

#ifdef _MSC_VER
	#pragma pack ( pop )
#endif
