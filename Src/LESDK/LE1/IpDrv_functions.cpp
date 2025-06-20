/*
#############################################################################################
# Mass Effect 1 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.5_Beta-Rev.60-MELE
# ========================================================================================= #
# File: IpDrv_functions.cpp
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL, SirCxyrtyx
# Thanks: HOOAH07, lowHertz
#############################################################################################
*/


#include "LESDK/Includes.LE1.hpp"


#ifdef _MSC_VER
	#pragma pack ( push, 0x4 )
#endif
#define LESDK_IN_GENERATED


/*
# ========================================================================================= #
# Functions
# ========================================================================================= #
*/



class UClass* UClientBeaconAddressResolver::pClassPointer = NULL;

class UClass* UClientBeaconAddressResolver::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class IpDrv.ClientBeaconAddressResolver" );

		return pClassPointer;
	};



class UClass* UHTTPDownload::pClassPointer = NULL;

class UClass* UHTTPDownload::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class IpDrv.HTTPDownload" );

		return pClassPointer;
	};



class UClass* AInternetLink::pClassPointer = NULL;

class UClass* AInternetLink::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class IpDrv.InternetLink" );

		return pClassPointer;
	};

// Function IpDrv.InternetLink.ResolveFailed
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void AInternetLink::eventResolveFailed ( )
{
	static UFunction* pFnResolveFailed = NULL;

	if ( ! pFnResolveFailed )
		pFnResolveFailed = UObject::FindObject< UFunction > ( L"Function IpDrv.InternetLink.ResolveFailed" );

	AInternetLink_eventResolveFailed_Parms ResolveFailed_Parms;

	this->ProcessEvent ( pFnResolveFailed, &ResolveFailed_Parms, NULL );
};

// Function IpDrv.InternetLink.Resolved
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// struct FIpAddr                 Addr                           ( CPF_Parm )

void AInternetLink::eventResolved ( struct FIpAddr const& Addr )
{
	static UFunction* pFnResolved = NULL;

	if ( ! pFnResolved )
		pFnResolved = UObject::FindObject< UFunction > ( L"Function IpDrv.InternetLink.Resolved" );

	AInternetLink_eventResolved_Parms Resolved_Parms;
	memcpy ( &Resolved_Parms.Addr, &Addr, 0x14 );

	this->ProcessEvent ( pFnResolved, &Resolved_Parms, NULL );
};

// Function IpDrv.InternetLink.GetLocalIP
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// struct FIpAddr                 arg                            ( CPF_Parm | CPF_OutParm )

void AInternetLink::GetLocalIP ( struct FIpAddr* arg )
{
	static UFunction* pFnGetLocalIP = NULL;

	if ( ! pFnGetLocalIP )
		pFnGetLocalIP = UObject::FindObject< UFunction > ( L"Function IpDrv.InternetLink.GetLocalIP" );

	AInternetLink_execGetLocalIP_Parms GetLocalIP_Parms;

	if ( arg )
		memcpy ( &GetLocalIP_Parms.arg, arg, 0x14 );

	pFnGetLocalIP->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetLocalIP, &GetLocalIP_Parms, NULL );

	pFnGetLocalIP->FunctionFlags |= 0x400;

	if ( arg )
		memcpy ( arg, &GetLocalIP_Parms.arg, 0x14 );
};

// Function IpDrv.InternetLink.StringToIpAddr
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// FString                        Str                            ( CPF_Parm | CPF_NeedCtorLink )
// struct FIpAddr                 Addr                           ( CPF_Parm | CPF_OutParm )

bool AInternetLink::StringToIpAddr ( FString const& Str, struct FIpAddr* Addr )
{
	static UFunction* pFnStringToIpAddr = NULL;

	if ( ! pFnStringToIpAddr )
		pFnStringToIpAddr = UObject::FindObject< UFunction > ( L"Function IpDrv.InternetLink.StringToIpAddr" );

	AInternetLink_execStringToIpAddr_Parms StringToIpAddr_Parms;
	memcpy ( &StringToIpAddr_Parms.Str, &Str, 0x10 );

	if ( Addr )
		memcpy ( &StringToIpAddr_Parms.Addr, Addr, 0x14 );

	pFnStringToIpAddr->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStringToIpAddr, &StringToIpAddr_Parms, NULL );

	pFnStringToIpAddr->FunctionFlags |= 0x400;

	if ( Addr )
		memcpy ( Addr, &StringToIpAddr_Parms.Addr, 0x14 );

	return StringToIpAddr_Parms.ReturnValue;
};

// Function IpDrv.InternetLink.IpAddrToString
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// FString                        ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FIpAddr                 arg                            ( CPF_Parm )

FString AInternetLink::IpAddrToString ( struct FIpAddr const& arg )
{
	static UFunction* pFnIpAddrToString = NULL;

	if ( ! pFnIpAddrToString )
		pFnIpAddrToString = UObject::FindObject< UFunction > ( L"Function IpDrv.InternetLink.IpAddrToString" );

	AInternetLink_execIpAddrToString_Parms IpAddrToString_Parms;
	memcpy ( &IpAddrToString_Parms.arg, &arg, 0x14 );

	pFnIpAddrToString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIpAddrToString, &IpAddrToString_Parms, NULL );

	pFnIpAddrToString->FunctionFlags |= 0x400;

	return IpAddrToString_Parms.ReturnValue;
};

// Function IpDrv.InternetLink.GetLastError
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int AInternetLink::GetLastError ( )
{
	static UFunction* pFnGetLastError = NULL;

	if ( ! pFnGetLastError )
		pFnGetLastError = UObject::FindObject< UFunction > ( L"Function IpDrv.InternetLink.GetLastError" );

	AInternetLink_execGetLastError_Parms GetLastError_Parms;

	pFnGetLastError->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetLastError, &GetLastError_Parms, NULL );

	pFnGetLastError->FunctionFlags |= 0x400;

	return GetLastError_Parms.ReturnValue;
};

// Function IpDrv.InternetLink.Resolve
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// FString                        Domain                         ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )

void AInternetLink::Resolve ( FString const& Domain )
{
	static UFunction* pFnResolve = NULL;

	if ( ! pFnResolve )
		pFnResolve = UObject::FindObject< UFunction > ( L"Function IpDrv.InternetLink.Resolve" );

	AInternetLink_execResolve_Parms Resolve_Parms;
	memcpy ( &Resolve_Parms.Domain, &Domain, 0x10 );

	pFnResolve->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnResolve, &Resolve_Parms, NULL );

	pFnResolve->FunctionFlags |= 0x400;
};

// Function IpDrv.InternetLink.ParseURL
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// FString                        URL                            ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
// FString                        Addr                           ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// int                            PortNum                        ( CPF_Parm | CPF_OutParm )
// FString                        LevelName                      ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// FString                        EntryName                      ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool AInternetLink::ParseURL ( FString const& URL, FString* Addr, int* PortNum, FString* LevelName, FString* EntryName )
{
	static UFunction* pFnParseURL = NULL;

	if ( ! pFnParseURL )
		pFnParseURL = UObject::FindObject< UFunction > ( L"Function IpDrv.InternetLink.ParseURL" );

	AInternetLink_execParseURL_Parms ParseURL_Parms;
	memcpy ( &ParseURL_Parms.URL, &URL, 0x10 );

	if ( Addr )
		memcpy ( &ParseURL_Parms.Addr, Addr, 0x10 );

	if ( PortNum )
		ParseURL_Parms.PortNum = *PortNum;

	if ( LevelName )
		memcpy ( &ParseURL_Parms.LevelName, LevelName, 0x10 );

	if ( EntryName )
		memcpy ( &ParseURL_Parms.EntryName, EntryName, 0x10 );

	pFnParseURL->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnParseURL, &ParseURL_Parms, NULL );

	pFnParseURL->FunctionFlags |= 0x400;

	if ( Addr )
		memcpy ( Addr, &ParseURL_Parms.Addr, 0x10 );

	if ( PortNum )
		*PortNum = ParseURL_Parms.PortNum;

	if ( LevelName )
		memcpy ( LevelName, &ParseURL_Parms.LevelName, 0x10 );

	if ( EntryName )
		memcpy ( EntryName, &ParseURL_Parms.EntryName, 0x10 );

	return ParseURL_Parms.ReturnValue;
};

// Function IpDrv.InternetLink.IsDataPending
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AInternetLink::IsDataPending ( )
{
	static UFunction* pFnIsDataPending = NULL;

	if ( ! pFnIsDataPending )
		pFnIsDataPending = UObject::FindObject< UFunction > ( L"Function IpDrv.InternetLink.IsDataPending" );

	AInternetLink_execIsDataPending_Parms IsDataPending_Parms;

	pFnIsDataPending->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsDataPending, &IsDataPending_Parms, NULL );

	pFnIsDataPending->FunctionFlags |= 0x400;

	return IsDataPending_Parms.ReturnValue;
};



class UClass* ATcpLink::pClassPointer = NULL;

class UClass* ATcpLink::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class IpDrv.TcpLink" );

		return pClassPointer;
	};

// Function IpDrv.TcpLink.ReceivedBinary
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// int                            Count                          ( CPF_Parm )
// unsigned char                  B                              ( CPF_Parm )

void ATcpLink::eventReceivedBinary ( int Count, unsigned char* B )
{
	static UFunction* pFnReceivedBinary = NULL;

	if ( ! pFnReceivedBinary )
		pFnReceivedBinary = UObject::FindObject< UFunction > ( L"Function IpDrv.TcpLink.ReceivedBinary" );

	ATcpLink_eventReceivedBinary_Parms ReceivedBinary_Parms;
	ReceivedBinary_Parms.Count = Count;
	memcpy ( &ReceivedBinary_Parms.B, &B, 0xFF );

	this->ProcessEvent ( pFnReceivedBinary, &ReceivedBinary_Parms, NULL );
};

// Function IpDrv.TcpLink.ReceivedLine
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// FString                        Line                           ( CPF_Parm | CPF_NeedCtorLink )

void ATcpLink::eventReceivedLine ( FString const& Line )
{
	static UFunction* pFnReceivedLine = NULL;

	if ( ! pFnReceivedLine )
		pFnReceivedLine = UObject::FindObject< UFunction > ( L"Function IpDrv.TcpLink.ReceivedLine" );

	ATcpLink_eventReceivedLine_Parms ReceivedLine_Parms;
	memcpy ( &ReceivedLine_Parms.Line, &Line, 0x10 );

	this->ProcessEvent ( pFnReceivedLine, &ReceivedLine_Parms, NULL );
};

// Function IpDrv.TcpLink.ReceivedText
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// FString                        Text                           ( CPF_Parm | CPF_NeedCtorLink )

void ATcpLink::eventReceivedText ( FString const& Text )
{
	static UFunction* pFnReceivedText = NULL;

	if ( ! pFnReceivedText )
		pFnReceivedText = UObject::FindObject< UFunction > ( L"Function IpDrv.TcpLink.ReceivedText" );

	ATcpLink_eventReceivedText_Parms ReceivedText_Parms;
	memcpy ( &ReceivedText_Parms.Text, &Text, 0x10 );

	this->ProcessEvent ( pFnReceivedText, &ReceivedText_Parms, NULL );
};

// Function IpDrv.TcpLink.Closed
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void ATcpLink::eventClosed ( )
{
	static UFunction* pFnClosed = NULL;

	if ( ! pFnClosed )
		pFnClosed = UObject::FindObject< UFunction > ( L"Function IpDrv.TcpLink.Closed" );

	ATcpLink_eventClosed_Parms Closed_Parms;

	this->ProcessEvent ( pFnClosed, &Closed_Parms, NULL );
};

// Function IpDrv.TcpLink.Opened
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void ATcpLink::eventOpened ( )
{
	static UFunction* pFnOpened = NULL;

	if ( ! pFnOpened )
		pFnOpened = UObject::FindObject< UFunction > ( L"Function IpDrv.TcpLink.Opened" );

	ATcpLink_eventOpened_Parms Opened_Parms;

	this->ProcessEvent ( pFnOpened, &Opened_Parms, NULL );
};

// Function IpDrv.TcpLink.Accepted
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void ATcpLink::eventAccepted ( )
{
	static UFunction* pFnAccepted = NULL;

	if ( ! pFnAccepted )
		pFnAccepted = UObject::FindObject< UFunction > ( L"Function IpDrv.TcpLink.Accepted" );

	ATcpLink_eventAccepted_Parms Accepted_Parms;

	this->ProcessEvent ( pFnAccepted, &Accepted_Parms, NULL );
};

// Function IpDrv.TcpLink.ReadBinary
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Count                          ( CPF_Parm )
// unsigned char                  B                              ( CPF_Parm | CPF_OutParm )

int ATcpLink::ReadBinary ( int Count, unsigned char* B )
{
	static UFunction* pFnReadBinary = NULL;

	if ( ! pFnReadBinary )
		pFnReadBinary = UObject::FindObject< UFunction > ( L"Function IpDrv.TcpLink.ReadBinary" );

	ATcpLink_execReadBinary_Parms ReadBinary_Parms;
	ReadBinary_Parms.Count = Count;

	if ( B )
		memcpy ( &ReadBinary_Parms.B, B, 0xFF );

	pFnReadBinary->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadBinary, &ReadBinary_Parms, NULL );

	pFnReadBinary->FunctionFlags |= 0x400;

	if ( B )
		memcpy ( B, &ReadBinary_Parms.B, 0xFF );

	return ReadBinary_Parms.ReturnValue;
};

// Function IpDrv.TcpLink.ReadText
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// FString                        Str                            ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

int ATcpLink::ReadText ( FString* Str )
{
	static UFunction* pFnReadText = NULL;

	if ( ! pFnReadText )
		pFnReadText = UObject::FindObject< UFunction > ( L"Function IpDrv.TcpLink.ReadText" );

	ATcpLink_execReadText_Parms ReadText_Parms;

	if ( Str )
		memcpy ( &ReadText_Parms.Str, Str, 0x10 );

	pFnReadText->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadText, &ReadText_Parms, NULL );

	pFnReadText->FunctionFlags |= 0x400;

	if ( Str )
		memcpy ( Str, &ReadText_Parms.Str, 0x10 );

	return ReadText_Parms.ReturnValue;
};

// Function IpDrv.TcpLink.SendBinary
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Count                          ( CPF_Parm )
// unsigned char                  B                              ( CPF_Parm )

int ATcpLink::SendBinary ( int Count, unsigned char* B )
{
	static UFunction* pFnSendBinary = NULL;

	if ( ! pFnSendBinary )
		pFnSendBinary = UObject::FindObject< UFunction > ( L"Function IpDrv.TcpLink.SendBinary" );

	ATcpLink_execSendBinary_Parms SendBinary_Parms;
	SendBinary_Parms.Count = Count;
	memcpy ( &SendBinary_Parms.B, &B, 0xFF );

	pFnSendBinary->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendBinary, &SendBinary_Parms, NULL );

	pFnSendBinary->FunctionFlags |= 0x400;

	return SendBinary_Parms.ReturnValue;
};

// Function IpDrv.TcpLink.SendText
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// FString                        Str                            ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )

int ATcpLink::SendText ( FString const& Str )
{
	static UFunction* pFnSendText = NULL;

	if ( ! pFnSendText )
		pFnSendText = UObject::FindObject< UFunction > ( L"Function IpDrv.TcpLink.SendText" );

	ATcpLink_execSendText_Parms SendText_Parms;
	memcpy ( &SendText_Parms.Str, &Str, 0x10 );

	pFnSendText->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendText, &SendText_Parms, NULL );

	pFnSendText->FunctionFlags |= 0x400;

	return SendText_Parms.ReturnValue;
};

// Function IpDrv.TcpLink.IsConnected
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATcpLink::IsConnected ( )
{
	static UFunction* pFnIsConnected = NULL;

	if ( ! pFnIsConnected )
		pFnIsConnected = UObject::FindObject< UFunction > ( L"Function IpDrv.TcpLink.IsConnected" );

	ATcpLink_execIsConnected_Parms IsConnected_Parms;

	pFnIsConnected->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsConnected, &IsConnected_Parms, NULL );

	pFnIsConnected->FunctionFlags |= 0x400;

	return IsConnected_Parms.ReturnValue;
};

// Function IpDrv.TcpLink.Close
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATcpLink::Close ( )
{
	static UFunction* pFnClose = NULL;

	if ( ! pFnClose )
		pFnClose = UObject::FindObject< UFunction > ( L"Function IpDrv.TcpLink.Close" );

	ATcpLink_execClose_Parms Close_Parms;

	pFnClose->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClose, &Close_Parms, NULL );

	pFnClose->FunctionFlags |= 0x400;

	return Close_Parms.ReturnValue;
};

// Function IpDrv.TcpLink.Open
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FIpAddr                 Addr                           ( CPF_Parm )

bool ATcpLink::Open ( struct FIpAddr const& Addr )
{
	static UFunction* pFnOpen = NULL;

	if ( ! pFnOpen )
		pFnOpen = UObject::FindObject< UFunction > ( L"Function IpDrv.TcpLink.Open" );

	ATcpLink_execOpen_Parms Open_Parms;
	memcpy ( &Open_Parms.Addr, &Addr, 0x14 );

	pFnOpen->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOpen, &Open_Parms, NULL );

	pFnOpen->FunctionFlags |= 0x400;

	return Open_Parms.ReturnValue;
};

// Function IpDrv.TcpLink.Listen
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATcpLink::Listen ( )
{
	static UFunction* pFnListen = NULL;

	if ( ! pFnListen )
		pFnListen = UObject::FindObject< UFunction > ( L"Function IpDrv.TcpLink.Listen" );

	ATcpLink_execListen_Parms Listen_Parms;

	pFnListen->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnListen, &Listen_Parms, NULL );

	pFnListen->FunctionFlags |= 0x400;

	return Listen_Parms.ReturnValue;
};

// Function IpDrv.TcpLink.BindPort
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            PortNum                        ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bUseNextAvailable              ( CPF_OptionalParm | CPF_Parm )

int ATcpLink::BindPort ( int PortNum, unsigned long bUseNextAvailable )
{
	static UFunction* pFnBindPort = NULL;

	if ( ! pFnBindPort )
		pFnBindPort = UObject::FindObject< UFunction > ( L"Function IpDrv.TcpLink.BindPort" );

	ATcpLink_execBindPort_Parms BindPort_Parms;
	BindPort_Parms.PortNum = PortNum;
	BindPort_Parms.bUseNextAvailable = bUseNextAvailable;

	pFnBindPort->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnBindPort, &BindPort_Parms, NULL );

	pFnBindPort->FunctionFlags |= 0x400;

	return BindPort_Parms.ReturnValue;
};



class UClass* UMCPBase::pClassPointer = NULL;

class UClass* UMCPBase::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class IpDrv.MCPBase" );

		return pClassPointer;
	};



class UClass* UOnlineEventsInterfaceMcp::pClassPointer = NULL;

class UClass* UOnlineEventsInterfaceMcp::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class IpDrv.OnlineEventsInterfaceMcp" );

		return pClassPointer;
	};

// Function IpDrv.OnlineEventsInterfaceMcp.UploadHardwareData
// [0x00020000]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            UniqueId                       ( CPF_Parm )
// FString                        PlayerNick                     ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineEventsInterfaceMcp::UploadHardwareData ( struct FUniqueNetId const& UniqueId, FString const& PlayerNick )
{
	static UFunction* pFnUploadHardwareData = NULL;

	if ( ! pFnUploadHardwareData )
		pFnUploadHardwareData = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineEventsInterfaceMcp.UploadHardwareData" );

	UOnlineEventsInterfaceMcp_execUploadHardwareData_Parms UploadHardwareData_Parms;
	memcpy ( &UploadHardwareData_Parms.UniqueId, &UniqueId, 0x8 );
	memcpy ( &UploadHardwareData_Parms.PlayerNick, &PlayerNick, 0x10 );

	this->ProcessEvent ( pFnUploadHardwareData, &UploadHardwareData_Parms, NULL );

	return UploadHardwareData_Parms.ReturnValue;
};

// Function IpDrv.OnlineEventsInterfaceMcp.UploadGameplayEventsData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UOnlineGameplayEvents*   Events                         ( CPF_Parm )

bool UOnlineEventsInterfaceMcp::UploadGameplayEventsData ( class UOnlineGameplayEvents* Events )
{
	static UFunction* pFnUploadGameplayEventsData = NULL;

	if ( ! pFnUploadGameplayEventsData )
		pFnUploadGameplayEventsData = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineEventsInterfaceMcp.UploadGameplayEventsData" );

	UOnlineEventsInterfaceMcp_execUploadGameplayEventsData_Parms UploadGameplayEventsData_Parms;
	UploadGameplayEventsData_Parms.Events = Events;

	pFnUploadGameplayEventsData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUploadGameplayEventsData, &UploadGameplayEventsData_Parms, NULL );

	pFnUploadGameplayEventsData->FunctionFlags |= 0x400;

	return UploadGameplayEventsData_Parms.ReturnValue;
};

// Function IpDrv.OnlineEventsInterfaceMcp.UploadProfileData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            UniqueId                       ( CPF_Parm )
// FString                        PlayerNick                     ( CPF_Parm | CPF_NeedCtorLink )
// class UOnlineProfileSettings*  ProfileSettings                ( CPF_Parm )

bool UOnlineEventsInterfaceMcp::UploadProfileData ( struct FUniqueNetId const& UniqueId, FString const& PlayerNick, class UOnlineProfileSettings* ProfileSettings )
{
	static UFunction* pFnUploadProfileData = NULL;

	if ( ! pFnUploadProfileData )
		pFnUploadProfileData = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineEventsInterfaceMcp.UploadProfileData" );

	UOnlineEventsInterfaceMcp_execUploadProfileData_Parms UploadProfileData_Parms;
	memcpy ( &UploadProfileData_Parms.UniqueId, &UniqueId, 0x8 );
	memcpy ( &UploadProfileData_Parms.PlayerNick, &PlayerNick, 0x10 );
	UploadProfileData_Parms.ProfileSettings = ProfileSettings;

	pFnUploadProfileData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUploadProfileData, &UploadProfileData_Parms, NULL );

	pFnUploadProfileData->FunctionFlags |= 0x400;

	return UploadProfileData_Parms.ReturnValue;
};



class UClass* UOnlineNewsInterfaceMcp::pClassPointer = NULL;

class UClass* UOnlineNewsInterfaceMcp::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class IpDrv.OnlineNewsInterfaceMcp" );

		return pClassPointer;
	};

// Function IpDrv.OnlineNewsInterfaceMcp.GetNews
// [0x00020002]
// Parameters infos:
// FString                        ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned char                  NewsType                       ( CPF_Parm )

FString UOnlineNewsInterfaceMcp::GetNews ( unsigned char LocalUserNum, unsigned char NewsType )
{
	static UFunction* pFnGetNews = NULL;

	if ( ! pFnGetNews )
		pFnGetNews = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineNewsInterfaceMcp.GetNews" );

	UOnlineNewsInterfaceMcp_execGetNews_Parms GetNews_Parms;
	GetNews_Parms.LocalUserNum = LocalUserNum;
	GetNews_Parms.NewsType = NewsType;

	this->ProcessEvent ( pFnGetNews, &GetNews_Parms, NULL );

	return GetNews_Parms.ReturnValue;
};

// Function IpDrv.OnlineNewsInterfaceMcp.ClearReadNewsCompletedDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         ReadGameNewsDelegate           ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineNewsInterfaceMcp::ClearReadNewsCompletedDelegate ( struct FScriptDelegate ReadGameNewsDelegate )
{
	static UFunction* pFnClearReadNewsCompletedDelegate = NULL;

	if ( ! pFnClearReadNewsCompletedDelegate )
		pFnClearReadNewsCompletedDelegate = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineNewsInterfaceMcp.ClearReadNewsCompletedDelegate" );

	UOnlineNewsInterfaceMcp_execClearReadNewsCompletedDelegate_Parms ClearReadNewsCompletedDelegate_Parms;
	memcpy ( &ClearReadNewsCompletedDelegate_Parms.ReadGameNewsDelegate, &ReadGameNewsDelegate, 0x10 );

	this->ProcessEvent ( pFnClearReadNewsCompletedDelegate, &ClearReadNewsCompletedDelegate_Parms, NULL );
};

// Function IpDrv.OnlineNewsInterfaceMcp.AddReadNewsCompletedDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         ReadNewsDelegate               ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineNewsInterfaceMcp::AddReadNewsCompletedDelegate ( struct FScriptDelegate ReadNewsDelegate )
{
	static UFunction* pFnAddReadNewsCompletedDelegate = NULL;

	if ( ! pFnAddReadNewsCompletedDelegate )
		pFnAddReadNewsCompletedDelegate = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineNewsInterfaceMcp.AddReadNewsCompletedDelegate" );

	UOnlineNewsInterfaceMcp_execAddReadNewsCompletedDelegate_Parms AddReadNewsCompletedDelegate_Parms;
	memcpy ( &AddReadNewsCompletedDelegate_Parms.ReadNewsDelegate, &ReadNewsDelegate, 0x10 );

	this->ProcessEvent ( pFnAddReadNewsCompletedDelegate, &AddReadNewsCompletedDelegate_Parms, NULL );
};

// Function IpDrv.OnlineNewsInterfaceMcp.OnReadNewsCompleted
// [0x00120000]
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// unsigned char                  NewsType                       ( CPF_Parm )

void UOnlineNewsInterfaceMcp::OnReadNewsCompleted ( unsigned long bWasSuccessful, unsigned char NewsType )
{
	static UFunction* pFnOnReadNewsCompleted = NULL;

	if ( ! pFnOnReadNewsCompleted )
		pFnOnReadNewsCompleted = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineNewsInterfaceMcp.OnReadNewsCompleted" );

	UOnlineNewsInterfaceMcp_execOnReadNewsCompleted_Parms OnReadNewsCompleted_Parms;
	OnReadNewsCompleted_Parms.bWasSuccessful = bWasSuccessful;
	OnReadNewsCompleted_Parms.NewsType = NewsType;

	this->ProcessEvent ( pFnOnReadNewsCompleted, &OnReadNewsCompleted_Parms, NULL );
};

// Function IpDrv.OnlineNewsInterfaceMcp.ReadNews
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned char                  NewsType                       ( CPF_Parm )

bool UOnlineNewsInterfaceMcp::ReadNews ( unsigned char LocalUserNum, unsigned char NewsType )
{
	static UFunction* pFnReadNews = NULL;

	if ( ! pFnReadNews )
		pFnReadNews = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineNewsInterfaceMcp.ReadNews" );

	UOnlineNewsInterfaceMcp_execReadNews_Parms ReadNews_Parms;
	ReadNews_Parms.LocalUserNum = LocalUserNum;
	ReadNews_Parms.NewsType = NewsType;

	pFnReadNews->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadNews, &ReadNews_Parms, NULL );

	pFnReadNews->FunctionFlags |= 0x400;

	return ReadNews_Parms.ReturnValue;
};



class UClass* UOnlineTitleFileDownloadMcp::pClassPointer = NULL;

class UClass* UOnlineTitleFileDownloadMcp::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class IpDrv.OnlineTitleFileDownloadMcp" );

		return pClassPointer;
	};

// Function IpDrv.OnlineTitleFileDownloadMcp.ClearDownloadedFiles
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineTitleFileDownloadMcp::ClearDownloadedFiles ( )
{
	static UFunction* pFnClearDownloadedFiles = NULL;

	if ( ! pFnClearDownloadedFiles )
		pFnClearDownloadedFiles = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineTitleFileDownloadMcp.ClearDownloadedFiles" );

	UOnlineTitleFileDownloadMcp_execClearDownloadedFiles_Parms ClearDownloadedFiles_Parms;

	pFnClearDownloadedFiles->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClearDownloadedFiles, &ClearDownloadedFiles_Parms, NULL );

	pFnClearDownloadedFiles->FunctionFlags |= 0x400;

	return ClearDownloadedFiles_Parms.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadMcp.GetTitleFileState
// [0x00020002]
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// FString                        Filename                       ( CPF_Parm | CPF_NeedCtorLink )

unsigned char UOnlineTitleFileDownloadMcp::GetTitleFileState ( FString const& Filename )
{
	static UFunction* pFnGetTitleFileState = NULL;

	if ( ! pFnGetTitleFileState )
		pFnGetTitleFileState = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineTitleFileDownloadMcp.GetTitleFileState" );

	UOnlineTitleFileDownloadMcp_execGetTitleFileState_Parms GetTitleFileState_Parms;
	memcpy ( &GetTitleFileState_Parms.Filename, &Filename, 0x10 );

	this->ProcessEvent ( pFnGetTitleFileState, &GetTitleFileState_Parms, NULL );

	return GetTitleFileState_Parms.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadMcp.GetTitleFileContents
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// FString                        Filename                       ( CPF_Parm | CPF_NeedCtorLink )
// TArray<unsigned char>          FileContents                   ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineTitleFileDownloadMcp::GetTitleFileContents ( FString const& Filename, TArray<unsigned char>* FileContents )
{
	static UFunction* pFnGetTitleFileContents = NULL;

	if ( ! pFnGetTitleFileContents )
		pFnGetTitleFileContents = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineTitleFileDownloadMcp.GetTitleFileContents" );

	UOnlineTitleFileDownloadMcp_execGetTitleFileContents_Parms GetTitleFileContents_Parms;
	memcpy ( &GetTitleFileContents_Parms.Filename, &Filename, 0x10 );

	if ( FileContents )
		memcpy ( &GetTitleFileContents_Parms.FileContents, FileContents, 0x10 );

	pFnGetTitleFileContents->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetTitleFileContents, &GetTitleFileContents_Parms, NULL );

	pFnGetTitleFileContents->FunctionFlags |= 0x400;

	if ( FileContents )
		memcpy ( FileContents, &GetTitleFileContents_Parms.FileContents, 0x10 );

	return GetTitleFileContents_Parms.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadMcp.ClearReadTitleFileCompleteDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         ReadTitleFileCompleteDelegate  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineTitleFileDownloadMcp::ClearReadTitleFileCompleteDelegate ( struct FScriptDelegate ReadTitleFileCompleteDelegate )
{
	static UFunction* pFnClearReadTitleFileCompleteDelegate = NULL;

	if ( ! pFnClearReadTitleFileCompleteDelegate )
		pFnClearReadTitleFileCompleteDelegate = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineTitleFileDownloadMcp.ClearReadTitleFileCompleteDelegate" );

	UOnlineTitleFileDownloadMcp_execClearReadTitleFileCompleteDelegate_Parms ClearReadTitleFileCompleteDelegate_Parms;
	memcpy ( &ClearReadTitleFileCompleteDelegate_Parms.ReadTitleFileCompleteDelegate, &ReadTitleFileCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearReadTitleFileCompleteDelegate, &ClearReadTitleFileCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineTitleFileDownloadMcp.AddReadTitleFileCompleteDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         ReadTitleFileCompleteDelegate  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineTitleFileDownloadMcp::AddReadTitleFileCompleteDelegate ( struct FScriptDelegate ReadTitleFileCompleteDelegate )
{
	static UFunction* pFnAddReadTitleFileCompleteDelegate = NULL;

	if ( ! pFnAddReadTitleFileCompleteDelegate )
		pFnAddReadTitleFileCompleteDelegate = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineTitleFileDownloadMcp.AddReadTitleFileCompleteDelegate" );

	UOnlineTitleFileDownloadMcp_execAddReadTitleFileCompleteDelegate_Parms AddReadTitleFileCompleteDelegate_Parms;
	memcpy ( &AddReadTitleFileCompleteDelegate_Parms.ReadTitleFileCompleteDelegate, &ReadTitleFileCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddReadTitleFileCompleteDelegate, &AddReadTitleFileCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineTitleFileDownloadMcp.ReadTitleFile
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// FString                        FileToRead                     ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineTitleFileDownloadMcp::ReadTitleFile ( FString const& FileToRead )
{
	static UFunction* pFnReadTitleFile = NULL;

	if ( ! pFnReadTitleFile )
		pFnReadTitleFile = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineTitleFileDownloadMcp.ReadTitleFile" );

	UOnlineTitleFileDownloadMcp_execReadTitleFile_Parms ReadTitleFile_Parms;
	memcpy ( &ReadTitleFile_Parms.FileToRead, &FileToRead, 0x10 );

	pFnReadTitleFile->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadTitleFile, &ReadTitleFile_Parms, NULL );

	pFnReadTitleFile->FunctionFlags |= 0x400;

	return ReadTitleFile_Parms.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadMcp.OnReadTitleFileComplete
// [0x00120000]
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// FString                        Filename                       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineTitleFileDownloadMcp::OnReadTitleFileComplete ( unsigned long bWasSuccessful, FString const& Filename )
{
	static UFunction* pFnOnReadTitleFileComplete = NULL;

	if ( ! pFnOnReadTitleFileComplete )
		pFnOnReadTitleFileComplete = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineTitleFileDownloadMcp.OnReadTitleFileComplete" );

	UOnlineTitleFileDownloadMcp_execOnReadTitleFileComplete_Parms OnReadTitleFileComplete_Parms;
	OnReadTitleFileComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnReadTitleFileComplete_Parms.Filename, &Filename, 0x10 );

	this->ProcessEvent ( pFnOnReadTitleFileComplete, &OnReadTitleFileComplete_Parms, NULL );
};



class UClass* UMeshBeacon::pClassPointer = NULL;

class UClass* UMeshBeacon::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class IpDrv.MeshBeacon" );

		return pClassPointer;
	};

// Function IpDrv.MeshBeacon.DestroyBeacon
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:

void UMeshBeacon::eventDestroyBeacon ( )
{
	static UFunction* pFnDestroyBeacon = NULL;

	if ( ! pFnDestroyBeacon )
		pFnDestroyBeacon = UObject::FindObject< UFunction > ( L"Function IpDrv.MeshBeacon.DestroyBeacon" );

	UMeshBeacon_eventDestroyBeacon_Parms DestroyBeacon_Parms;

	pFnDestroyBeacon->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDestroyBeacon, &DestroyBeacon_Parms, NULL );

	pFnDestroyBeacon->FunctionFlags |= 0x400;
};



class UClass* UMeshBeaconClient::pClassPointer = NULL;

class UClass* UMeshBeaconClient::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class IpDrv.MeshBeaconClient" );

		return pClassPointer;
	};

// Function IpDrv.MeshBeaconClient.DebugRender
// [0x00020002]
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )

void UMeshBeaconClient::DebugRender ( class UCanvas* Canvas )
{
	static UFunction* pFnDebugRender = NULL;

	if ( ! pFnDebugRender )
		pFnDebugRender = UObject::FindObject< UFunction > ( L"Function IpDrv.MeshBeaconClient.DebugRender" );

	UMeshBeaconClient_execDebugRender_Parms DebugRender_Parms;
	DebugRender_Parms.Canvas = Canvas;

	this->ProcessEvent ( pFnDebugRender, &DebugRender_Parms, NULL );
};

// Function IpDrv.MeshBeaconClient.DumpInfo
// [0x00020002]
// Parameters infos:

void UMeshBeaconClient::DumpInfo ( )
{
	static UFunction* pFnDumpInfo = NULL;

	if ( ! pFnDumpInfo )
		pFnDumpInfo = UObject::FindObject< UFunction > ( L"Function IpDrv.MeshBeaconClient.DumpInfo" );

	UMeshBeaconClient_execDumpInfo_Parms DumpInfo_Parms;

	this->ProcessEvent ( pFnDumpInfo, &DumpInfo_Parms, NULL );
};

// Function IpDrv.MeshBeaconClient.SendHostNewGameSessionResponse
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bSuccess                       ( CPF_Parm )
// struct SFXName                 SessionName                    ( CPF_Parm )
// class UClass*                  SearchClass                    ( CPF_Parm )
// unsigned char                  PlatformSpecificInfo           ( CPF_Const | CPF_Parm | CPF_OutParm )

bool UMeshBeaconClient::SendHostNewGameSessionResponse ( unsigned long bSuccess, struct SFXName SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo )
{
	static UFunction* pFnSendHostNewGameSessionResponse = NULL;

	if ( ! pFnSendHostNewGameSessionResponse )
		pFnSendHostNewGameSessionResponse = UObject::FindObject< UFunction > ( L"Function IpDrv.MeshBeaconClient.SendHostNewGameSessionResponse" );

	UMeshBeaconClient_execSendHostNewGameSessionResponse_Parms SendHostNewGameSessionResponse_Parms;
	SendHostNewGameSessionResponse_Parms.bSuccess = bSuccess;
	memcpy ( &SendHostNewGameSessionResponse_Parms.SessionName, &SessionName, 0x8 );
	SendHostNewGameSessionResponse_Parms.SearchClass = SearchClass;

	if ( PlatformSpecificInfo )
		memcpy ( &SendHostNewGameSessionResponse_Parms.PlatformSpecificInfo, PlatformSpecificInfo, 0x50 );

	pFnSendHostNewGameSessionResponse->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendHostNewGameSessionResponse, &SendHostNewGameSessionResponse_Parms, NULL );

	pFnSendHostNewGameSessionResponse->FunctionFlags |= 0x400;

	if ( PlatformSpecificInfo )
		memcpy ( PlatformSpecificInfo, &SendHostNewGameSessionResponse_Parms.PlatformSpecificInfo, 0x50 );

	return SendHostNewGameSessionResponse_Parms.ReturnValue;
};

// Function IpDrv.MeshBeaconClient.OnCreateNewSessionRequestReceived
// [0x00520000]
// Parameters infos:
// struct SFXName                 SessionName                    ( CPF_Parm )
// class UClass*                  SearchClass                    ( CPF_Parm )
// TArray<struct FPlayerMember>   Players                        ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UMeshBeaconClient::OnCreateNewSessionRequestReceived ( struct SFXName SessionName, class UClass* SearchClass, TArray<struct FPlayerMember>* Players )
{
	static UFunction* pFnOnCreateNewSessionRequestReceived = NULL;

	if ( ! pFnOnCreateNewSessionRequestReceived )
		pFnOnCreateNewSessionRequestReceived = UObject::FindObject< UFunction > ( L"Function IpDrv.MeshBeaconClient.OnCreateNewSessionRequestReceived" );

	UMeshBeaconClient_execOnCreateNewSessionRequestReceived_Parms OnCreateNewSessionRequestReceived_Parms;
	memcpy ( &OnCreateNewSessionRequestReceived_Parms.SessionName, &SessionName, 0x8 );
	OnCreateNewSessionRequestReceived_Parms.SearchClass = SearchClass;

	if ( Players )
		memcpy ( &OnCreateNewSessionRequestReceived_Parms.Players, Players, 0x10 );

	this->ProcessEvent ( pFnOnCreateNewSessionRequestReceived, &OnCreateNewSessionRequestReceived_Parms, NULL );

	if ( Players )
		memcpy ( Players, &OnCreateNewSessionRequestReceived_Parms.Players, 0x10 );
};

// Function IpDrv.MeshBeaconClient.OnTravelRequestReceived
// [0x00520000]
// Parameters infos:
// struct SFXName                 SessionName                    ( CPF_Parm )
// class UClass*                  SearchClass                    ( CPF_Parm )
// unsigned char                  PlatformSpecificInfo           ( CPF_Const | CPF_Parm | CPF_OutParm )

void UMeshBeaconClient::OnTravelRequestReceived ( struct SFXName SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo )
{
	static UFunction* pFnOnTravelRequestReceived = NULL;

	if ( ! pFnOnTravelRequestReceived )
		pFnOnTravelRequestReceived = UObject::FindObject< UFunction > ( L"Function IpDrv.MeshBeaconClient.OnTravelRequestReceived" );

	UMeshBeaconClient_execOnTravelRequestReceived_Parms OnTravelRequestReceived_Parms;
	memcpy ( &OnTravelRequestReceived_Parms.SessionName, &SessionName, 0x8 );
	OnTravelRequestReceived_Parms.SearchClass = SearchClass;

	if ( PlatformSpecificInfo )
		memcpy ( &OnTravelRequestReceived_Parms.PlatformSpecificInfo, PlatformSpecificInfo, 0x50 );

	this->ProcessEvent ( pFnOnTravelRequestReceived, &OnTravelRequestReceived_Parms, NULL );

	if ( PlatformSpecificInfo )
		memcpy ( PlatformSpecificInfo, &OnTravelRequestReceived_Parms.PlatformSpecificInfo, 0x50 );
};

// Function IpDrv.MeshBeaconClient.OnReceivedBandwidthTestResults
// [0x00520000]
// Parameters infos:
// unsigned char                  TestType                       ( CPF_Parm )
// unsigned char                  TestResult                     ( CPF_Parm )
// struct FConnectionBandwidthStats BandwidthStats                 ( CPF_Const | CPF_Parm | CPF_OutParm )

void UMeshBeaconClient::OnReceivedBandwidthTestResults ( unsigned char TestType, unsigned char TestResult, struct FConnectionBandwidthStats* BandwidthStats )
{
	static UFunction* pFnOnReceivedBandwidthTestResults = NULL;

	if ( ! pFnOnReceivedBandwidthTestResults )
		pFnOnReceivedBandwidthTestResults = UObject::FindObject< UFunction > ( L"Function IpDrv.MeshBeaconClient.OnReceivedBandwidthTestResults" );

	UMeshBeaconClient_execOnReceivedBandwidthTestResults_Parms OnReceivedBandwidthTestResults_Parms;
	OnReceivedBandwidthTestResults_Parms.TestType = TestType;
	OnReceivedBandwidthTestResults_Parms.TestResult = TestResult;

	if ( BandwidthStats )
		memcpy ( &OnReceivedBandwidthTestResults_Parms.BandwidthStats, BandwidthStats, 0xC );

	this->ProcessEvent ( pFnOnReceivedBandwidthTestResults, &OnReceivedBandwidthTestResults_Parms, NULL );

	if ( BandwidthStats )
		memcpy ( BandwidthStats, &OnReceivedBandwidthTestResults_Parms.BandwidthStats, 0xC );
};

// Function IpDrv.MeshBeaconClient.OnReceivedBandwidthTestRequest
// [0x00120000]
// Parameters infos:
// unsigned char                  TestType                       ( CPF_Parm )

void UMeshBeaconClient::OnReceivedBandwidthTestRequest ( unsigned char TestType )
{
	static UFunction* pFnOnReceivedBandwidthTestRequest = NULL;

	if ( ! pFnOnReceivedBandwidthTestRequest )
		pFnOnReceivedBandwidthTestRequest = UObject::FindObject< UFunction > ( L"Function IpDrv.MeshBeaconClient.OnReceivedBandwidthTestRequest" );

	UMeshBeaconClient_execOnReceivedBandwidthTestRequest_Parms OnReceivedBandwidthTestRequest_Parms;
	OnReceivedBandwidthTestRequest_Parms.TestType = TestType;

	this->ProcessEvent ( pFnOnReceivedBandwidthTestRequest, &OnReceivedBandwidthTestRequest_Parms, NULL );
};

// Function IpDrv.MeshBeaconClient.OnConnectionRequestResult
// [0x00120000]
// Parameters infos:
// unsigned char                  ConnectionResult               ( CPF_Parm )

void UMeshBeaconClient::OnConnectionRequestResult ( unsigned char ConnectionResult )
{
	static UFunction* pFnOnConnectionRequestResult = NULL;

	if ( ! pFnOnConnectionRequestResult )
		pFnOnConnectionRequestResult = UObject::FindObject< UFunction > ( L"Function IpDrv.MeshBeaconClient.OnConnectionRequestResult" );

	UMeshBeaconClient_execOnConnectionRequestResult_Parms OnConnectionRequestResult_Parms;
	OnConnectionRequestResult_Parms.ConnectionResult = ConnectionResult;

	this->ProcessEvent ( pFnOnConnectionRequestResult, &OnConnectionRequestResult_Parms, NULL );
};

// Function IpDrv.MeshBeaconClient.BeginBandwidthTest
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  TestType                       ( CPF_Parm )
// int                            TestBufferSize                 ( CPF_Parm )

bool UMeshBeaconClient::BeginBandwidthTest ( unsigned char TestType, int TestBufferSize )
{
	static UFunction* pFnBeginBandwidthTest = NULL;

	if ( ! pFnBeginBandwidthTest )
		pFnBeginBandwidthTest = UObject::FindObject< UFunction > ( L"Function IpDrv.MeshBeaconClient.BeginBandwidthTest" );

	UMeshBeaconClient_execBeginBandwidthTest_Parms BeginBandwidthTest_Parms;
	BeginBandwidthTest_Parms.TestType = TestType;
	BeginBandwidthTest_Parms.TestBufferSize = TestBufferSize;

	pFnBeginBandwidthTest->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnBeginBandwidthTest, &BeginBandwidthTest_Parms, NULL );

	pFnBeginBandwidthTest->FunctionFlags |= 0x400;

	return BeginBandwidthTest_Parms.ReturnValue;
};

// Function IpDrv.MeshBeaconClient.RequestConnection
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bRegisterSecureAddress         ( CPF_Parm )
// struct FOnlineGameSearchResult DesiredHost                    ( CPF_Const | CPF_Parm | CPF_OutParm )
// struct FClientConnectionRequest ClientRequest                  ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UMeshBeaconClient::RequestConnection ( unsigned long bRegisterSecureAddress, struct FOnlineGameSearchResult* DesiredHost, struct FClientConnectionRequest* ClientRequest )
{
	static UFunction* pFnRequestConnection = NULL;

	if ( ! pFnRequestConnection )
		pFnRequestConnection = UObject::FindObject< UFunction > ( L"Function IpDrv.MeshBeaconClient.RequestConnection" );

	UMeshBeaconClient_execRequestConnection_Parms RequestConnection_Parms;
	RequestConnection_Parms.bRegisterSecureAddress = bRegisterSecureAddress;

	if ( DesiredHost )
		memcpy ( &RequestConnection_Parms.DesiredHost, DesiredHost, 0x10 );

	if ( ClientRequest )
		memcpy ( &RequestConnection_Parms.ClientRequest, ClientRequest, 0x28 );

	pFnRequestConnection->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRequestConnection, &RequestConnection_Parms, NULL );

	pFnRequestConnection->FunctionFlags |= 0x400;

	if ( DesiredHost )
		memcpy ( DesiredHost, &RequestConnection_Parms.DesiredHost, 0x10 );

	if ( ClientRequest )
		memcpy ( ClientRequest, &RequestConnection_Parms.ClientRequest, 0x28 );

	return RequestConnection_Parms.ReturnValue;
};

// Function IpDrv.MeshBeaconClient.DestroyBeacon
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:

void UMeshBeaconClient::eventDestroyBeacon ( )
{
	static UFunction* pFnDestroyBeacon = NULL;

	if ( ! pFnDestroyBeacon )
		pFnDestroyBeacon = UObject::FindObject< UFunction > ( L"Function IpDrv.MeshBeaconClient.DestroyBeacon" );

	UMeshBeaconClient_eventDestroyBeacon_Parms DestroyBeacon_Parms;

	pFnDestroyBeacon->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDestroyBeacon, &DestroyBeacon_Parms, NULL );

	pFnDestroyBeacon->FunctionFlags |= 0x400;
};



class UClass* UMeshBeaconHost::pClassPointer = NULL;

class UClass* UMeshBeaconHost::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class IpDrv.MeshBeaconHost" );

		return pClassPointer;
	};

// Function IpDrv.MeshBeaconHost.DebugRender
// [0x00020002]
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )
// struct FUniqueNetId            CurOptimalHostId               ( CPF_Parm )

void UMeshBeaconHost::DebugRender ( class UCanvas* Canvas, struct FUniqueNetId const& CurOptimalHostId )
{
	static UFunction* pFnDebugRender = NULL;

	if ( ! pFnDebugRender )
		pFnDebugRender = UObject::FindObject< UFunction > ( L"Function IpDrv.MeshBeaconHost.DebugRender" );

	UMeshBeaconHost_execDebugRender_Parms DebugRender_Parms;
	DebugRender_Parms.Canvas = Canvas;
	memcpy ( &DebugRender_Parms.CurOptimalHostId, &CurOptimalHostId, 0x8 );

	this->ProcessEvent ( pFnDebugRender, &DebugRender_Parms, NULL );
};

// Function IpDrv.MeshBeaconHost.DumpConnections
// [0x00020002]
// Parameters infos:

void UMeshBeaconHost::DumpConnections ( )
{
	static UFunction* pFnDumpConnections = NULL;

	if ( ! pFnDumpConnections )
		pFnDumpConnections = UObject::FindObject< UFunction > ( L"Function IpDrv.MeshBeaconHost.DumpConnections" );

	UMeshBeaconHost_execDumpConnections_Parms DumpConnections_Parms;

	this->ProcessEvent ( pFnDumpConnections, &DumpConnections_Parms, NULL );
};

// Function IpDrv.MeshBeaconHost.OnReceivedClientCreateNewSessionResult
// [0x00520000]
// Parameters infos:
// unsigned long                  bSucceeded                     ( CPF_Parm )
// struct SFXName                 SessionName                    ( CPF_Parm )
// class UClass*                  SearchClass                    ( CPF_Parm )
// unsigned char                  PlatformSpecificInfo           ( CPF_Const | CPF_Parm | CPF_OutParm )

void UMeshBeaconHost::OnReceivedClientCreateNewSessionResult ( unsigned long bSucceeded, struct SFXName SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo )
{
	static UFunction* pFnOnReceivedClientCreateNewSessionResult = NULL;

	if ( ! pFnOnReceivedClientCreateNewSessionResult )
		pFnOnReceivedClientCreateNewSessionResult = UObject::FindObject< UFunction > ( L"Function IpDrv.MeshBeaconHost.OnReceivedClientCreateNewSessionResult" );

	UMeshBeaconHost_execOnReceivedClientCreateNewSessionResult_Parms OnReceivedClientCreateNewSessionResult_Parms;
	OnReceivedClientCreateNewSessionResult_Parms.bSucceeded = bSucceeded;
	memcpy ( &OnReceivedClientCreateNewSessionResult_Parms.SessionName, &SessionName, 0x8 );
	OnReceivedClientCreateNewSessionResult_Parms.SearchClass = SearchClass;

	if ( PlatformSpecificInfo )
		memcpy ( &OnReceivedClientCreateNewSessionResult_Parms.PlatformSpecificInfo, PlatformSpecificInfo, 0x50 );

	this->ProcessEvent ( pFnOnReceivedClientCreateNewSessionResult, &OnReceivedClientCreateNewSessionResult_Parms, NULL );

	if ( PlatformSpecificInfo )
		memcpy ( PlatformSpecificInfo, &OnReceivedClientCreateNewSessionResult_Parms.PlatformSpecificInfo, 0x50 );
};

// Function IpDrv.MeshBeaconHost.RequestClientCreateNewSession
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            PlayerNetId                    ( CPF_Parm )
// struct SFXName                 SessionName                    ( CPF_Parm )
// class UClass*                  SearchClass                    ( CPF_Parm )
// TArray<struct FPlayerMember>   Players                        ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UMeshBeaconHost::RequestClientCreateNewSession ( struct FUniqueNetId const& PlayerNetId, struct SFXName SessionName, class UClass* SearchClass, TArray<struct FPlayerMember>* Players )
{
	static UFunction* pFnRequestClientCreateNewSession = NULL;

	if ( ! pFnRequestClientCreateNewSession )
		pFnRequestClientCreateNewSession = UObject::FindObject< UFunction > ( L"Function IpDrv.MeshBeaconHost.RequestClientCreateNewSession" );

	UMeshBeaconHost_execRequestClientCreateNewSession_Parms RequestClientCreateNewSession_Parms;
	memcpy ( &RequestClientCreateNewSession_Parms.PlayerNetId, &PlayerNetId, 0x8 );
	memcpy ( &RequestClientCreateNewSession_Parms.SessionName, &SessionName, 0x8 );
	RequestClientCreateNewSession_Parms.SearchClass = SearchClass;

	if ( Players )
		memcpy ( &RequestClientCreateNewSession_Parms.Players, Players, 0x10 );

	pFnRequestClientCreateNewSession->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRequestClientCreateNewSession, &RequestClientCreateNewSession_Parms, NULL );

	pFnRequestClientCreateNewSession->FunctionFlags |= 0x400;

	if ( Players )
		memcpy ( Players, &RequestClientCreateNewSession_Parms.Players, 0x10 );

	return RequestClientCreateNewSession_Parms.ReturnValue;
};

// Function IpDrv.MeshBeaconHost.TellClientsToTravel
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// struct SFXName                 SessionName                    ( CPF_Parm )
// class UClass*                  SearchClass                    ( CPF_Parm )
// unsigned char                  PlatformSpecificInfo           ( CPF_Const | CPF_Parm | CPF_OutParm )

void UMeshBeaconHost::TellClientsToTravel ( struct SFXName SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo )
{
	static UFunction* pFnTellClientsToTravel = NULL;

	if ( ! pFnTellClientsToTravel )
		pFnTellClientsToTravel = UObject::FindObject< UFunction > ( L"Function IpDrv.MeshBeaconHost.TellClientsToTravel" );

	UMeshBeaconHost_execTellClientsToTravel_Parms TellClientsToTravel_Parms;
	memcpy ( &TellClientsToTravel_Parms.SessionName, &SessionName, 0x8 );
	TellClientsToTravel_Parms.SearchClass = SearchClass;

	if ( PlatformSpecificInfo )
		memcpy ( &TellClientsToTravel_Parms.PlatformSpecificInfo, PlatformSpecificInfo, 0x50 );

	pFnTellClientsToTravel->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTellClientsToTravel, &TellClientsToTravel_Parms, NULL );

	pFnTellClientsToTravel->FunctionFlags |= 0x400;

	if ( PlatformSpecificInfo )
		memcpy ( PlatformSpecificInfo, &TellClientsToTravel_Parms.PlatformSpecificInfo, 0x50 );
};

// Function IpDrv.MeshBeaconHost.OnAllPendingPlayersConnected
// [0x00120000]
// Parameters infos:

void UMeshBeaconHost::OnAllPendingPlayersConnected ( )
{
	static UFunction* pFnOnAllPendingPlayersConnected = NULL;

	if ( ! pFnOnAllPendingPlayersConnected )
		pFnOnAllPendingPlayersConnected = UObject::FindObject< UFunction > ( L"Function IpDrv.MeshBeaconHost.OnAllPendingPlayersConnected" );

	UMeshBeaconHost_execOnAllPendingPlayersConnected_Parms OnAllPendingPlayersConnected_Parms;

	this->ProcessEvent ( pFnOnAllPendingPlayersConnected, &OnAllPendingPlayersConnected_Parms, NULL );
};

// Function IpDrv.MeshBeaconHost.AllPlayersConnected
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray<struct FUniqueNetId>    Players                        ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UMeshBeaconHost::AllPlayersConnected ( TArray<struct FUniqueNetId>* Players )
{
	static UFunction* pFnAllPlayersConnected = NULL;

	if ( ! pFnAllPlayersConnected )
		pFnAllPlayersConnected = UObject::FindObject< UFunction > ( L"Function IpDrv.MeshBeaconHost.AllPlayersConnected" );

	UMeshBeaconHost_execAllPlayersConnected_Parms AllPlayersConnected_Parms;

	if ( Players )
		memcpy ( &AllPlayersConnected_Parms.Players, Players, 0x10 );

	pFnAllPlayersConnected->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAllPlayersConnected, &AllPlayersConnected_Parms, NULL );

	pFnAllPlayersConnected->FunctionFlags |= 0x400;

	if ( Players )
		memcpy ( Players, &AllPlayersConnected_Parms.Players, 0x10 );

	return AllPlayersConnected_Parms.ReturnValue;
};

// Function IpDrv.MeshBeaconHost.GetConnectionIndexForPlayer
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            PlayerNetId                    ( CPF_Parm )

int UMeshBeaconHost::GetConnectionIndexForPlayer ( struct FUniqueNetId const& PlayerNetId )
{
	static UFunction* pFnGetConnectionIndexForPlayer = NULL;

	if ( ! pFnGetConnectionIndexForPlayer )
		pFnGetConnectionIndexForPlayer = UObject::FindObject< UFunction > ( L"Function IpDrv.MeshBeaconHost.GetConnectionIndexForPlayer" );

	UMeshBeaconHost_execGetConnectionIndexForPlayer_Parms GetConnectionIndexForPlayer_Parms;
	memcpy ( &GetConnectionIndexForPlayer_Parms.PlayerNetId, &PlayerNetId, 0x8 );

	pFnGetConnectionIndexForPlayer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetConnectionIndexForPlayer, &GetConnectionIndexForPlayer_Parms, NULL );

	pFnGetConnectionIndexForPlayer->FunctionFlags |= 0x400;

	return GetConnectionIndexForPlayer_Parms.ReturnValue;
};

// Function IpDrv.MeshBeaconHost.SetPendingPlayerConnections
// [0x00420002]
// Parameters infos:
// TArray<struct FUniqueNetId>    Players                        ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UMeshBeaconHost::SetPendingPlayerConnections ( TArray<struct FUniqueNetId>* Players )
{
	static UFunction* pFnSetPendingPlayerConnections = NULL;

	if ( ! pFnSetPendingPlayerConnections )
		pFnSetPendingPlayerConnections = UObject::FindObject< UFunction > ( L"Function IpDrv.MeshBeaconHost.SetPendingPlayerConnections" );

	UMeshBeaconHost_execSetPendingPlayerConnections_Parms SetPendingPlayerConnections_Parms;

	if ( Players )
		memcpy ( &SetPendingPlayerConnections_Parms.Players, Players, 0x10 );

	this->ProcessEvent ( pFnSetPendingPlayerConnections, &SetPendingPlayerConnections_Parms, NULL );

	if ( Players )
		memcpy ( Players, &SetPendingPlayerConnections_Parms.Players, 0x10 );
};

// Function IpDrv.MeshBeaconHost.OnFinishedBandwidthTest
// [0x00520000]
// Parameters infos:
// struct FUniqueNetId            PlayerNetId                    ( CPF_Parm )
// unsigned char                  TestType                       ( CPF_Parm )
// unsigned char                  TestResult                     ( CPF_Parm )
// struct FConnectionBandwidthStats BandwidthStats                 ( CPF_Const | CPF_Parm | CPF_OutParm )

void UMeshBeaconHost::OnFinishedBandwidthTest ( struct FUniqueNetId const& PlayerNetId, unsigned char TestType, unsigned char TestResult, struct FConnectionBandwidthStats* BandwidthStats )
{
	static UFunction* pFnOnFinishedBandwidthTest = NULL;

	if ( ! pFnOnFinishedBandwidthTest )
		pFnOnFinishedBandwidthTest = UObject::FindObject< UFunction > ( L"Function IpDrv.MeshBeaconHost.OnFinishedBandwidthTest" );

	UMeshBeaconHost_execOnFinishedBandwidthTest_Parms OnFinishedBandwidthTest_Parms;
	memcpy ( &OnFinishedBandwidthTest_Parms.PlayerNetId, &PlayerNetId, 0x8 );
	OnFinishedBandwidthTest_Parms.TestType = TestType;
	OnFinishedBandwidthTest_Parms.TestResult = TestResult;

	if ( BandwidthStats )
		memcpy ( &OnFinishedBandwidthTest_Parms.BandwidthStats, BandwidthStats, 0xC );

	this->ProcessEvent ( pFnOnFinishedBandwidthTest, &OnFinishedBandwidthTest_Parms, NULL );

	if ( BandwidthStats )
		memcpy ( BandwidthStats, &OnFinishedBandwidthTest_Parms.BandwidthStats, 0xC );
};

// Function IpDrv.MeshBeaconHost.OnStartedBandwidthTest
// [0x00120000]
// Parameters infos:
// struct FUniqueNetId            PlayerNetId                    ( CPF_Parm )
// unsigned char                  TestType                       ( CPF_Parm )

void UMeshBeaconHost::OnStartedBandwidthTest ( struct FUniqueNetId const& PlayerNetId, unsigned char TestType )
{
	static UFunction* pFnOnStartedBandwidthTest = NULL;

	if ( ! pFnOnStartedBandwidthTest )
		pFnOnStartedBandwidthTest = UObject::FindObject< UFunction > ( L"Function IpDrv.MeshBeaconHost.OnStartedBandwidthTest" );

	UMeshBeaconHost_execOnStartedBandwidthTest_Parms OnStartedBandwidthTest_Parms;
	memcpy ( &OnStartedBandwidthTest_Parms.PlayerNetId, &PlayerNetId, 0x8 );
	OnStartedBandwidthTest_Parms.TestType = TestType;

	this->ProcessEvent ( pFnOnStartedBandwidthTest, &OnStartedBandwidthTest_Parms, NULL );
};

// Function IpDrv.MeshBeaconHost.OnReceivedClientConnectionRequest
// [0x00520000]
// Parameters infos:
// struct FClientMeshBeaconConnection NewClientConnection            ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UMeshBeaconHost::OnReceivedClientConnectionRequest ( struct FClientMeshBeaconConnection* NewClientConnection )
{
	static UFunction* pFnOnReceivedClientConnectionRequest = NULL;

	if ( ! pFnOnReceivedClientConnectionRequest )
		pFnOnReceivedClientConnectionRequest = UObject::FindObject< UFunction > ( L"Function IpDrv.MeshBeaconHost.OnReceivedClientConnectionRequest" );

	UMeshBeaconHost_execOnReceivedClientConnectionRequest_Parms OnReceivedClientConnectionRequest_Parms;

	if ( NewClientConnection )
		memcpy ( &OnReceivedClientConnectionRequest_Parms.NewClientConnection, NewClientConnection, 0x5C );

	this->ProcessEvent ( pFnOnReceivedClientConnectionRequest, &OnReceivedClientConnectionRequest_Parms, NULL );

	if ( NewClientConnection )
		memcpy ( NewClientConnection, &OnReceivedClientConnectionRequest_Parms.NewClientConnection, 0x5C );
};

// Function IpDrv.MeshBeaconHost.AllowBandwidthTesting
// [0x00020002]
// Parameters infos:
// unsigned long                  bEnabled                       ( CPF_Parm )

void UMeshBeaconHost::AllowBandwidthTesting ( unsigned long bEnabled )
{
	static UFunction* pFnAllowBandwidthTesting = NULL;

	if ( ! pFnAllowBandwidthTesting )
		pFnAllowBandwidthTesting = UObject::FindObject< UFunction > ( L"Function IpDrv.MeshBeaconHost.AllowBandwidthTesting" );

	UMeshBeaconHost_execAllowBandwidthTesting_Parms AllowBandwidthTesting_Parms;
	AllowBandwidthTesting_Parms.bEnabled = bEnabled;

	this->ProcessEvent ( pFnAllowBandwidthTesting, &AllowBandwidthTesting_Parms, NULL );
};

// Function IpDrv.MeshBeaconHost.CancelPendingBandwidthTests
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UMeshBeaconHost::CancelPendingBandwidthTests ( )
{
	static UFunction* pFnCancelPendingBandwidthTests = NULL;

	if ( ! pFnCancelPendingBandwidthTests )
		pFnCancelPendingBandwidthTests = UObject::FindObject< UFunction > ( L"Function IpDrv.MeshBeaconHost.CancelPendingBandwidthTests" );

	UMeshBeaconHost_execCancelPendingBandwidthTests_Parms CancelPendingBandwidthTests_Parms;

	pFnCancelPendingBandwidthTests->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCancelPendingBandwidthTests, &CancelPendingBandwidthTests_Parms, NULL );

	pFnCancelPendingBandwidthTests->FunctionFlags |= 0x400;
};

// Function IpDrv.MeshBeaconHost.HasPendingBandwidthTest
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UMeshBeaconHost::HasPendingBandwidthTest ( )
{
	static UFunction* pFnHasPendingBandwidthTest = NULL;

	if ( ! pFnHasPendingBandwidthTest )
		pFnHasPendingBandwidthTest = UObject::FindObject< UFunction > ( L"Function IpDrv.MeshBeaconHost.HasPendingBandwidthTest" );

	UMeshBeaconHost_execHasPendingBandwidthTest_Parms HasPendingBandwidthTest_Parms;

	pFnHasPendingBandwidthTest->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnHasPendingBandwidthTest, &HasPendingBandwidthTest_Parms, NULL );

	pFnHasPendingBandwidthTest->FunctionFlags |= 0x400;

	return HasPendingBandwidthTest_Parms.ReturnValue;
};

// Function IpDrv.MeshBeaconHost.CancelInProgressBandwidthTests
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UMeshBeaconHost::CancelInProgressBandwidthTests ( )
{
	static UFunction* pFnCancelInProgressBandwidthTests = NULL;

	if ( ! pFnCancelInProgressBandwidthTests )
		pFnCancelInProgressBandwidthTests = UObject::FindObject< UFunction > ( L"Function IpDrv.MeshBeaconHost.CancelInProgressBandwidthTests" );

	UMeshBeaconHost_execCancelInProgressBandwidthTests_Parms CancelInProgressBandwidthTests_Parms;

	pFnCancelInProgressBandwidthTests->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCancelInProgressBandwidthTests, &CancelInProgressBandwidthTests_Parms, NULL );

	pFnCancelInProgressBandwidthTests->FunctionFlags |= 0x400;
};

// Function IpDrv.MeshBeaconHost.HasInProgressBandwidthTest
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UMeshBeaconHost::HasInProgressBandwidthTest ( )
{
	static UFunction* pFnHasInProgressBandwidthTest = NULL;

	if ( ! pFnHasInProgressBandwidthTest )
		pFnHasInProgressBandwidthTest = UObject::FindObject< UFunction > ( L"Function IpDrv.MeshBeaconHost.HasInProgressBandwidthTest" );

	UMeshBeaconHost_execHasInProgressBandwidthTest_Parms HasInProgressBandwidthTest_Parms;

	pFnHasInProgressBandwidthTest->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnHasInProgressBandwidthTest, &HasInProgressBandwidthTest_Parms, NULL );

	pFnHasInProgressBandwidthTest->FunctionFlags |= 0x400;

	return HasInProgressBandwidthTest_Parms.ReturnValue;
};

// Function IpDrv.MeshBeaconHost.RequestClientBandwidthTest
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            PlayerNetId                    ( CPF_Parm )
// unsigned char                  TestType                       ( CPF_Parm )
// int                            TestBufferSize                 ( CPF_Parm )

bool UMeshBeaconHost::RequestClientBandwidthTest ( struct FUniqueNetId const& PlayerNetId, unsigned char TestType, int TestBufferSize )
{
	static UFunction* pFnRequestClientBandwidthTest = NULL;

	if ( ! pFnRequestClientBandwidthTest )
		pFnRequestClientBandwidthTest = UObject::FindObject< UFunction > ( L"Function IpDrv.MeshBeaconHost.RequestClientBandwidthTest" );

	UMeshBeaconHost_execRequestClientBandwidthTest_Parms RequestClientBandwidthTest_Parms;
	memcpy ( &RequestClientBandwidthTest_Parms.PlayerNetId, &PlayerNetId, 0x8 );
	RequestClientBandwidthTest_Parms.TestType = TestType;
	RequestClientBandwidthTest_Parms.TestBufferSize = TestBufferSize;

	pFnRequestClientBandwidthTest->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRequestClientBandwidthTest, &RequestClientBandwidthTest_Parms, NULL );

	pFnRequestClientBandwidthTest->FunctionFlags |= 0x400;

	return RequestClientBandwidthTest_Parms.ReturnValue;
};

// Function IpDrv.MeshBeaconHost.DestroyBeacon
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:

void UMeshBeaconHost::eventDestroyBeacon ( )
{
	static UFunction* pFnDestroyBeacon = NULL;

	if ( ! pFnDestroyBeacon )
		pFnDestroyBeacon = UObject::FindObject< UFunction > ( L"Function IpDrv.MeshBeaconHost.DestroyBeacon" );

	UMeshBeaconHost_eventDestroyBeacon_Parms DestroyBeacon_Parms;

	pFnDestroyBeacon->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDestroyBeacon, &DestroyBeacon_Parms, NULL );

	pFnDestroyBeacon->FunctionFlags |= 0x400;
};

// Function IpDrv.MeshBeaconHost.InitHostBeacon
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            InOwningPlayerId               ( CPF_Parm )

bool UMeshBeaconHost::InitHostBeacon ( struct FUniqueNetId const& InOwningPlayerId )
{
	static UFunction* pFnInitHostBeacon = NULL;

	if ( ! pFnInitHostBeacon )
		pFnInitHostBeacon = UObject::FindObject< UFunction > ( L"Function IpDrv.MeshBeaconHost.InitHostBeacon" );

	UMeshBeaconHost_execInitHostBeacon_Parms InitHostBeacon_Parms;
	memcpy ( &InitHostBeacon_Parms.InOwningPlayerId, &InOwningPlayerId, 0x8 );

	pFnInitHostBeacon->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitHostBeacon, &InitHostBeacon_Parms, NULL );

	pFnInitHostBeacon->FunctionFlags |= 0x400;

	return InitHostBeacon_Parms.ReturnValue;
};



class UClass* UOnlineSubsystemCommonImpl::pClassPointer = NULL;

class UClass* UOnlineSubsystemCommonImpl::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class IpDrv.OnlineSubsystemCommonImpl" );

		return pClassPointer;
	};

// Function IpDrv.OnlineSubsystemCommonImpl.GetRegisteredPlayers
// [0x00420002]
// Parameters infos:
// struct SFXName                 SessionName                    ( CPF_Parm )
// TArray<struct FUniqueNetId>    OutRegisteredPlayers           ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UOnlineSubsystemCommonImpl::GetRegisteredPlayers ( struct SFXName SessionName, TArray<struct FUniqueNetId>* OutRegisteredPlayers )
{
	static UFunction* pFnGetRegisteredPlayers = NULL;

	if ( ! pFnGetRegisteredPlayers )
		pFnGetRegisteredPlayers = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineSubsystemCommonImpl.GetRegisteredPlayers" );

	UOnlineSubsystemCommonImpl_execGetRegisteredPlayers_Parms GetRegisteredPlayers_Parms;
	memcpy ( &GetRegisteredPlayers_Parms.SessionName, &SessionName, 0x8 );

	if ( OutRegisteredPlayers )
		memcpy ( &GetRegisteredPlayers_Parms.OutRegisteredPlayers, OutRegisteredPlayers, 0x10 );

	this->ProcessEvent ( pFnGetRegisteredPlayers, &GetRegisteredPlayers_Parms, NULL );

	if ( OutRegisteredPlayers )
		memcpy ( OutRegisteredPlayers, &GetRegisteredPlayers_Parms.OutRegisteredPlayers, 0x10 );
};

// Function IpDrv.OnlineSubsystemCommonImpl.IsPlayerInSession
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct SFXName                 SessionName                    ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineSubsystemCommonImpl::IsPlayerInSession ( struct SFXName SessionName, struct FUniqueNetId const& PlayerID )
{
	static UFunction* pFnIsPlayerInSession = NULL;

	if ( ! pFnIsPlayerInSession )
		pFnIsPlayerInSession = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineSubsystemCommonImpl.IsPlayerInSession" );

	UOnlineSubsystemCommonImpl_execIsPlayerInSession_Parms IsPlayerInSession_Parms;
	memcpy ( &IsPlayerInSession_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &IsPlayerInSession_Parms.PlayerID, &PlayerID, 0x8 );

	pFnIsPlayerInSession->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsPlayerInSession, &IsPlayerInSession_Parms, NULL );

	pFnIsPlayerInSession->FunctionFlags |= 0x400;

	return IsPlayerInSession_Parms.ReturnValue;
};

// Function IpDrv.OnlineSubsystemCommonImpl.GetPlayerUniqueNetIdFromIndex
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// struct FUniqueNetId            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            UserIndex                      ( CPF_Parm )

struct FUniqueNetId UOnlineSubsystemCommonImpl::eventGetPlayerUniqueNetIdFromIndex ( int UserIndex )
{
	static UFunction* pFnGetPlayerUniqueNetIdFromIndex = NULL;

	if ( ! pFnGetPlayerUniqueNetIdFromIndex )
		pFnGetPlayerUniqueNetIdFromIndex = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineSubsystemCommonImpl.GetPlayerUniqueNetIdFromIndex" );

	UOnlineSubsystemCommonImpl_eventGetPlayerUniqueNetIdFromIndex_Parms GetPlayerUniqueNetIdFromIndex_Parms;
	GetPlayerUniqueNetIdFromIndex_Parms.UserIndex = UserIndex;

	this->ProcessEvent ( pFnGetPlayerUniqueNetIdFromIndex, &GetPlayerUniqueNetIdFromIndex_Parms, NULL );

	return GetPlayerUniqueNetIdFromIndex_Parms.ReturnValue;
};

// Function IpDrv.OnlineSubsystemCommonImpl.GetPlayerNicknameFromIndex
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// FString                        ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            UserIndex                      ( CPF_Parm )

FString UOnlineSubsystemCommonImpl::eventGetPlayerNicknameFromIndex ( int UserIndex )
{
	static UFunction* pFnGetPlayerNicknameFromIndex = NULL;

	if ( ! pFnGetPlayerNicknameFromIndex )
		pFnGetPlayerNicknameFromIndex = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineSubsystemCommonImpl.GetPlayerNicknameFromIndex" );

	UOnlineSubsystemCommonImpl_eventGetPlayerNicknameFromIndex_Parms GetPlayerNicknameFromIndex_Parms;
	GetPlayerNicknameFromIndex_Parms.UserIndex = UserIndex;

	this->ProcessEvent ( pFnGetPlayerNicknameFromIndex, &GetPlayerNicknameFromIndex_Parms, NULL );

	return GetPlayerNicknameFromIndex_Parms.ReturnValue;
};



class UClass* UOnlineGameInterfaceImpl::pClassPointer = NULL;

class UClass* UOnlineGameInterfaceImpl::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class IpDrv.OnlineGameInterfaceImpl" );

		return pClassPointer;
	};

// Function IpDrv.OnlineGameInterfaceImpl.BindPlatformSpecificSessionToSearch
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  SearchingPlayerNum             ( CPF_Parm )
// class UOnlineGameSearch*       SearchSettings                 ( CPF_Parm )
// unsigned char                  PlatformSpecificInfo           ( CPF_Parm )

bool UOnlineGameInterfaceImpl::BindPlatformSpecificSessionToSearch ( unsigned char SearchingPlayerNum, class UOnlineGameSearch* SearchSettings, unsigned char* PlatformSpecificInfo )
{
	static UFunction* pFnBindPlatformSpecificSessionToSearch = NULL;

	if ( ! pFnBindPlatformSpecificSessionToSearch )
		pFnBindPlatformSpecificSessionToSearch = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineGameInterfaceImpl.BindPlatformSpecificSessionToSearch" );

	UOnlineGameInterfaceImpl_execBindPlatformSpecificSessionToSearch_Parms BindPlatformSpecificSessionToSearch_Parms;
	BindPlatformSpecificSessionToSearch_Parms.SearchingPlayerNum = SearchingPlayerNum;
	BindPlatformSpecificSessionToSearch_Parms.SearchSettings = SearchSettings;
	memcpy ( &BindPlatformSpecificSessionToSearch_Parms.PlatformSpecificInfo, &PlatformSpecificInfo, 0x50 );

	pFnBindPlatformSpecificSessionToSearch->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnBindPlatformSpecificSessionToSearch, &BindPlatformSpecificSessionToSearch_Parms, NULL );

	pFnBindPlatformSpecificSessionToSearch->FunctionFlags |= 0x400;

	return BindPlatformSpecificSessionToSearch_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ReadPlatformSpecificSessionInfoBySessionName
// [0x00420000]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct SFXName                 SessionName                    ( CPF_Parm )
// unsigned char                  PlatformSpecificInfo           ( CPF_Parm | CPF_OutParm )

bool UOnlineGameInterfaceImpl::ReadPlatformSpecificSessionInfoBySessionName ( struct SFXName SessionName, unsigned char* PlatformSpecificInfo )
{
	static UFunction* pFnReadPlatformSpecificSessionInfoBySessionName = NULL;

	if ( ! pFnReadPlatformSpecificSessionInfoBySessionName )
		pFnReadPlatformSpecificSessionInfoBySessionName = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineGameInterfaceImpl.ReadPlatformSpecificSessionInfoBySessionName" );

	UOnlineGameInterfaceImpl_execReadPlatformSpecificSessionInfoBySessionName_Parms ReadPlatformSpecificSessionInfoBySessionName_Parms;
	memcpy ( &ReadPlatformSpecificSessionInfoBySessionName_Parms.SessionName, &SessionName, 0x8 );

	if ( PlatformSpecificInfo )
		memcpy ( &ReadPlatformSpecificSessionInfoBySessionName_Parms.PlatformSpecificInfo, PlatformSpecificInfo, 0x50 );

	this->ProcessEvent ( pFnReadPlatformSpecificSessionInfoBySessionName, &ReadPlatformSpecificSessionInfoBySessionName_Parms, NULL );

	if ( PlatformSpecificInfo )
		memcpy ( PlatformSpecificInfo, &ReadPlatformSpecificSessionInfoBySessionName_Parms.PlatformSpecificInfo, 0x50 );

	return ReadPlatformSpecificSessionInfoBySessionName_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ReadPlatformSpecificSessionInfo
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FOnlineGameSearchResult DesiredGame                    ( CPF_Const | CPF_Parm | CPF_OutParm )
// unsigned char                  PlatformSpecificInfo           ( CPF_Parm | CPF_OutParm )

bool UOnlineGameInterfaceImpl::ReadPlatformSpecificSessionInfo ( struct FOnlineGameSearchResult* DesiredGame, unsigned char* PlatformSpecificInfo )
{
	static UFunction* pFnReadPlatformSpecificSessionInfo = NULL;

	if ( ! pFnReadPlatformSpecificSessionInfo )
		pFnReadPlatformSpecificSessionInfo = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineGameInterfaceImpl.ReadPlatformSpecificSessionInfo" );

	UOnlineGameInterfaceImpl_execReadPlatformSpecificSessionInfo_Parms ReadPlatformSpecificSessionInfo_Parms;

	if ( DesiredGame )
		memcpy ( &ReadPlatformSpecificSessionInfo_Parms.DesiredGame, DesiredGame, 0x10 );

	if ( PlatformSpecificInfo )
		memcpy ( &ReadPlatformSpecificSessionInfo_Parms.PlatformSpecificInfo, PlatformSpecificInfo, 0x50 );

	pFnReadPlatformSpecificSessionInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadPlatformSpecificSessionInfo, &ReadPlatformSpecificSessionInfo_Parms, NULL );

	pFnReadPlatformSpecificSessionInfo->FunctionFlags |= 0x400;

	if ( DesiredGame )
		memcpy ( DesiredGame, &ReadPlatformSpecificSessionInfo_Parms.DesiredGame, 0x10 );

	if ( PlatformSpecificInfo )
		memcpy ( PlatformSpecificInfo, &ReadPlatformSpecificSessionInfo_Parms.PlatformSpecificInfo, 0x50 );

	return ReadPlatformSpecificSessionInfo_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.QueryNonAdvertisedData
// [0x00020000]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            StartAt                        ( CPF_Parm )
// int                            NumberToQuery                  ( CPF_Parm )

bool UOnlineGameInterfaceImpl::QueryNonAdvertisedData ( int StartAt, int NumberToQuery )
{
	static UFunction* pFnQueryNonAdvertisedData = NULL;

	if ( ! pFnQueryNonAdvertisedData )
		pFnQueryNonAdvertisedData = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineGameInterfaceImpl.QueryNonAdvertisedData" );

	UOnlineGameInterfaceImpl_execQueryNonAdvertisedData_Parms QueryNonAdvertisedData_Parms;
	QueryNonAdvertisedData_Parms.StartAt = StartAt;
	QueryNonAdvertisedData_Parms.NumberToQuery = NumberToQuery;

	this->ProcessEvent ( pFnQueryNonAdvertisedData, &QueryNonAdvertisedData_Parms, NULL );

	return QueryNonAdvertisedData_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.RecalculateSkillRating
// [0x00420000]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct SFXName                 SessionName                    ( CPF_Parm )
// TArray<struct FUniqueNetId>    Players                        ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineGameInterfaceImpl::RecalculateSkillRating ( struct SFXName SessionName, TArray<struct FUniqueNetId>* Players )
{
	static UFunction* pFnRecalculateSkillRating = NULL;

	if ( ! pFnRecalculateSkillRating )
		pFnRecalculateSkillRating = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineGameInterfaceImpl.RecalculateSkillRating" );

	UOnlineGameInterfaceImpl_execRecalculateSkillRating_Parms RecalculateSkillRating_Parms;
	memcpy ( &RecalculateSkillRating_Parms.SessionName, &SessionName, 0x8 );

	if ( Players )
		memcpy ( &RecalculateSkillRating_Parms.Players, Players, 0x10 );

	this->ProcessEvent ( pFnRecalculateSkillRating, &RecalculateSkillRating_Parms, NULL );

	if ( Players )
		memcpy ( Players, &RecalculateSkillRating_Parms.Players, 0x10 );

	return RecalculateSkillRating_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.AcceptGameInvite
// [0x00020000]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct SFXName                 SessionName                    ( CPF_Parm )

bool UOnlineGameInterfaceImpl::AcceptGameInvite ( unsigned char LocalUserNum, struct SFXName SessionName )
{
	static UFunction* pFnAcceptGameInvite = NULL;

	if ( ! pFnAcceptGameInvite )
		pFnAcceptGameInvite = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineGameInterfaceImpl.AcceptGameInvite" );

	UOnlineGameInterfaceImpl_execAcceptGameInvite_Parms AcceptGameInvite_Parms;
	AcceptGameInvite_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AcceptGameInvite_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnAcceptGameInvite, &AcceptGameInvite_Parms, NULL );

	return AcceptGameInvite_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearGameInviteAcceptedDelegate
// [0x00020000]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         GameInviteAcceptedDelegate     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearGameInviteAcceptedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate GameInviteAcceptedDelegate )
{
	static UFunction* pFnClearGameInviteAcceptedDelegate = NULL;

	if ( ! pFnClearGameInviteAcceptedDelegate )
		pFnClearGameInviteAcceptedDelegate = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineGameInterfaceImpl.ClearGameInviteAcceptedDelegate" );

	UOnlineGameInterfaceImpl_execClearGameInviteAcceptedDelegate_Parms ClearGameInviteAcceptedDelegate_Parms;
	ClearGameInviteAcceptedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearGameInviteAcceptedDelegate_Parms.GameInviteAcceptedDelegate, &GameInviteAcceptedDelegate, 0x10 );

	this->ProcessEvent ( pFnClearGameInviteAcceptedDelegate, &ClearGameInviteAcceptedDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.AddGameInviteAcceptedDelegate
// [0x00020000]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         GameInviteAcceptedDelegate     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddGameInviteAcceptedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate GameInviteAcceptedDelegate )
{
	static UFunction* pFnAddGameInviteAcceptedDelegate = NULL;

	if ( ! pFnAddGameInviteAcceptedDelegate )
		pFnAddGameInviteAcceptedDelegate = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineGameInterfaceImpl.AddGameInviteAcceptedDelegate" );

	UOnlineGameInterfaceImpl_execAddGameInviteAcceptedDelegate_Parms AddGameInviteAcceptedDelegate_Parms;
	AddGameInviteAcceptedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddGameInviteAcceptedDelegate_Parms.GameInviteAcceptedDelegate, &GameInviteAcceptedDelegate, 0x10 );

	this->ProcessEvent ( pFnAddGameInviteAcceptedDelegate, &AddGameInviteAcceptedDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.OnGameInviteAccepted
// [0x00520000]
// Parameters infos:
// struct FOnlineGameSearchResult InviteResult                   ( CPF_Const | CPF_Parm | CPF_OutParm )

void UOnlineGameInterfaceImpl::OnGameInviteAccepted ( struct FOnlineGameSearchResult* InviteResult )
{
	static UFunction* pFnOnGameInviteAccepted = NULL;

	if ( ! pFnOnGameInviteAccepted )
		pFnOnGameInviteAccepted = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineGameInterfaceImpl.OnGameInviteAccepted" );

	UOnlineGameInterfaceImpl_execOnGameInviteAccepted_Parms OnGameInviteAccepted_Parms;

	if ( InviteResult )
		memcpy ( &OnGameInviteAccepted_Parms.InviteResult, InviteResult, 0x10 );

	this->ProcessEvent ( pFnOnGameInviteAccepted, &OnGameInviteAccepted_Parms, NULL );

	if ( InviteResult )
		memcpy ( InviteResult, &OnGameInviteAccepted_Parms.InviteResult, 0x10 );
};

// Function IpDrv.OnlineGameInterfaceImpl.GetArbitratedPlayers
// [0x00020000]
// Parameters infos:
// TArray<struct FOnlineArbitrationRegistrant> ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct SFXName                 SessionName                    ( CPF_Parm )

TArray<struct FOnlineArbitrationRegistrant> UOnlineGameInterfaceImpl::GetArbitratedPlayers ( struct SFXName SessionName )
{
	static UFunction* pFnGetArbitratedPlayers = NULL;

	if ( ! pFnGetArbitratedPlayers )
		pFnGetArbitratedPlayers = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineGameInterfaceImpl.GetArbitratedPlayers" );

	UOnlineGameInterfaceImpl_execGetArbitratedPlayers_Parms GetArbitratedPlayers_Parms;
	memcpy ( &GetArbitratedPlayers_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnGetArbitratedPlayers, &GetArbitratedPlayers_Parms, NULL );

	return GetArbitratedPlayers_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearArbitrationRegistrationCompleteDelegate
// [0x00020000]
// Parameters infos:
// struct FScriptDelegate         ArbitrationRegistrationCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearArbitrationRegistrationCompleteDelegate ( struct FScriptDelegate ArbitrationRegistrationCompleteDelegate )
{
	static UFunction* pFnClearArbitrationRegistrationCompleteDelegate = NULL;

	if ( ! pFnClearArbitrationRegistrationCompleteDelegate )
		pFnClearArbitrationRegistrationCompleteDelegate = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineGameInterfaceImpl.ClearArbitrationRegistrationCompleteDelegate" );

	UOnlineGameInterfaceImpl_execClearArbitrationRegistrationCompleteDelegate_Parms ClearArbitrationRegistrationCompleteDelegate_Parms;
	memcpy ( &ClearArbitrationRegistrationCompleteDelegate_Parms.ArbitrationRegistrationCompleteDelegate, &ArbitrationRegistrationCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearArbitrationRegistrationCompleteDelegate, &ClearArbitrationRegistrationCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.AddArbitrationRegistrationCompleteDelegate
// [0x00020000]
// Parameters infos:
// struct FScriptDelegate         ArbitrationRegistrationCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddArbitrationRegistrationCompleteDelegate ( struct FScriptDelegate ArbitrationRegistrationCompleteDelegate )
{
	static UFunction* pFnAddArbitrationRegistrationCompleteDelegate = NULL;

	if ( ! pFnAddArbitrationRegistrationCompleteDelegate )
		pFnAddArbitrationRegistrationCompleteDelegate = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineGameInterfaceImpl.AddArbitrationRegistrationCompleteDelegate" );

	UOnlineGameInterfaceImpl_execAddArbitrationRegistrationCompleteDelegate_Parms AddArbitrationRegistrationCompleteDelegate_Parms;
	memcpy ( &AddArbitrationRegistrationCompleteDelegate_Parms.ArbitrationRegistrationCompleteDelegate, &ArbitrationRegistrationCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddArbitrationRegistrationCompleteDelegate, &AddArbitrationRegistrationCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.OnArbitrationRegistrationComplete
// [0x00120000]
// Parameters infos:
// struct SFXName                 SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceImpl::OnArbitrationRegistrationComplete ( struct SFXName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnArbitrationRegistrationComplete = NULL;

	if ( ! pFnOnArbitrationRegistrationComplete )
		pFnOnArbitrationRegistrationComplete = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineGameInterfaceImpl.OnArbitrationRegistrationComplete" );

	UOnlineGameInterfaceImpl_execOnArbitrationRegistrationComplete_Parms OnArbitrationRegistrationComplete_Parms;
	memcpy ( &OnArbitrationRegistrationComplete_Parms.SessionName, &SessionName, 0x8 );
	OnArbitrationRegistrationComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnArbitrationRegistrationComplete, &OnArbitrationRegistrationComplete_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.RegisterForArbitration
// [0x00020000]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct SFXName                 SessionName                    ( CPF_Parm )

bool UOnlineGameInterfaceImpl::RegisterForArbitration ( struct SFXName SessionName )
{
	static UFunction* pFnRegisterForArbitration = NULL;

	if ( ! pFnRegisterForArbitration )
		pFnRegisterForArbitration = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineGameInterfaceImpl.RegisterForArbitration" );

	UOnlineGameInterfaceImpl_execRegisterForArbitration_Parms RegisterForArbitration_Parms;
	memcpy ( &RegisterForArbitration_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnRegisterForArbitration, &RegisterForArbitration_Parms, NULL );

	return RegisterForArbitration_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearEndOnlineGameCompleteDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         EndOnlineGameCompleteDelegate  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearEndOnlineGameCompleteDelegate ( struct FScriptDelegate EndOnlineGameCompleteDelegate )
{
	static UFunction* pFnClearEndOnlineGameCompleteDelegate = NULL;

	if ( ! pFnClearEndOnlineGameCompleteDelegate )
		pFnClearEndOnlineGameCompleteDelegate = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineGameInterfaceImpl.ClearEndOnlineGameCompleteDelegate" );

	UOnlineGameInterfaceImpl_execClearEndOnlineGameCompleteDelegate_Parms ClearEndOnlineGameCompleteDelegate_Parms;
	memcpy ( &ClearEndOnlineGameCompleteDelegate_Parms.EndOnlineGameCompleteDelegate, &EndOnlineGameCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearEndOnlineGameCompleteDelegate, &ClearEndOnlineGameCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.AddEndOnlineGameCompleteDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         EndOnlineGameCompleteDelegate  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddEndOnlineGameCompleteDelegate ( struct FScriptDelegate EndOnlineGameCompleteDelegate )
{
	static UFunction* pFnAddEndOnlineGameCompleteDelegate = NULL;

	if ( ! pFnAddEndOnlineGameCompleteDelegate )
		pFnAddEndOnlineGameCompleteDelegate = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineGameInterfaceImpl.AddEndOnlineGameCompleteDelegate" );

	UOnlineGameInterfaceImpl_execAddEndOnlineGameCompleteDelegate_Parms AddEndOnlineGameCompleteDelegate_Parms;
	memcpy ( &AddEndOnlineGameCompleteDelegate_Parms.EndOnlineGameCompleteDelegate, &EndOnlineGameCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddEndOnlineGameCompleteDelegate, &AddEndOnlineGameCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.OnEndOnlineGameComplete
// [0x00120000]
// Parameters infos:
// struct SFXName                 SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceImpl::OnEndOnlineGameComplete ( struct SFXName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnEndOnlineGameComplete = NULL;

	if ( ! pFnOnEndOnlineGameComplete )
		pFnOnEndOnlineGameComplete = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineGameInterfaceImpl.OnEndOnlineGameComplete" );

	UOnlineGameInterfaceImpl_execOnEndOnlineGameComplete_Parms OnEndOnlineGameComplete_Parms;
	memcpy ( &OnEndOnlineGameComplete_Parms.SessionName, &SessionName, 0x8 );
	OnEndOnlineGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnEndOnlineGameComplete, &OnEndOnlineGameComplete_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.EndOnlineGame
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct SFXName                 SessionName                    ( CPF_Parm )

bool UOnlineGameInterfaceImpl::EndOnlineGame ( struct SFXName SessionName )
{
	static UFunction* pFnEndOnlineGame = NULL;

	if ( ! pFnEndOnlineGame )
		pFnEndOnlineGame = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineGameInterfaceImpl.EndOnlineGame" );

	UOnlineGameInterfaceImpl_execEndOnlineGame_Parms EndOnlineGame_Parms;
	memcpy ( &EndOnlineGame_Parms.SessionName, &SessionName, 0x8 );

	pFnEndOnlineGame->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnEndOnlineGame, &EndOnlineGame_Parms, NULL );

	pFnEndOnlineGame->FunctionFlags |= 0x400;

	return EndOnlineGame_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearStartOnlineGameCompleteDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         StartOnlineGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearStartOnlineGameCompleteDelegate ( struct FScriptDelegate StartOnlineGameCompleteDelegate )
{
	static UFunction* pFnClearStartOnlineGameCompleteDelegate = NULL;

	if ( ! pFnClearStartOnlineGameCompleteDelegate )
		pFnClearStartOnlineGameCompleteDelegate = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineGameInterfaceImpl.ClearStartOnlineGameCompleteDelegate" );

	UOnlineGameInterfaceImpl_execClearStartOnlineGameCompleteDelegate_Parms ClearStartOnlineGameCompleteDelegate_Parms;
	memcpy ( &ClearStartOnlineGameCompleteDelegate_Parms.StartOnlineGameCompleteDelegate, &StartOnlineGameCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearStartOnlineGameCompleteDelegate, &ClearStartOnlineGameCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.AddStartOnlineGameCompleteDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         StartOnlineGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddStartOnlineGameCompleteDelegate ( struct FScriptDelegate StartOnlineGameCompleteDelegate )
{
	static UFunction* pFnAddStartOnlineGameCompleteDelegate = NULL;

	if ( ! pFnAddStartOnlineGameCompleteDelegate )
		pFnAddStartOnlineGameCompleteDelegate = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineGameInterfaceImpl.AddStartOnlineGameCompleteDelegate" );

	UOnlineGameInterfaceImpl_execAddStartOnlineGameCompleteDelegate_Parms AddStartOnlineGameCompleteDelegate_Parms;
	memcpy ( &AddStartOnlineGameCompleteDelegate_Parms.StartOnlineGameCompleteDelegate, &StartOnlineGameCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddStartOnlineGameCompleteDelegate, &AddStartOnlineGameCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.OnStartOnlineGameComplete
// [0x00120000]
// Parameters infos:
// struct SFXName                 SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceImpl::OnStartOnlineGameComplete ( struct SFXName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnStartOnlineGameComplete = NULL;

	if ( ! pFnOnStartOnlineGameComplete )
		pFnOnStartOnlineGameComplete = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineGameInterfaceImpl.OnStartOnlineGameComplete" );

	UOnlineGameInterfaceImpl_execOnStartOnlineGameComplete_Parms OnStartOnlineGameComplete_Parms;
	memcpy ( &OnStartOnlineGameComplete_Parms.SessionName, &SessionName, 0x8 );
	OnStartOnlineGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnStartOnlineGameComplete, &OnStartOnlineGameComplete_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.StartOnlineGame
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct SFXName                 SessionName                    ( CPF_Parm )

bool UOnlineGameInterfaceImpl::StartOnlineGame ( struct SFXName SessionName )
{
	static UFunction* pFnStartOnlineGame = NULL;

	if ( ! pFnStartOnlineGame )
		pFnStartOnlineGame = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineGameInterfaceImpl.StartOnlineGame" );

	UOnlineGameInterfaceImpl_execStartOnlineGame_Parms StartOnlineGame_Parms;
	memcpy ( &StartOnlineGame_Parms.SessionName, &SessionName, 0x8 );

	pFnStartOnlineGame->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStartOnlineGame, &StartOnlineGame_Parms, NULL );

	pFnStartOnlineGame->FunctionFlags |= 0x400;

	return StartOnlineGame_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearUnregisterPlayerCompleteDelegate
// [0x00020000]
// Parameters infos:
// struct FScriptDelegate         UnregisterPlayerCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearUnregisterPlayerCompleteDelegate ( struct FScriptDelegate UnregisterPlayerCompleteDelegate )
{
	static UFunction* pFnClearUnregisterPlayerCompleteDelegate = NULL;

	if ( ! pFnClearUnregisterPlayerCompleteDelegate )
		pFnClearUnregisterPlayerCompleteDelegate = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineGameInterfaceImpl.ClearUnregisterPlayerCompleteDelegate" );

	UOnlineGameInterfaceImpl_execClearUnregisterPlayerCompleteDelegate_Parms ClearUnregisterPlayerCompleteDelegate_Parms;
	memcpy ( &ClearUnregisterPlayerCompleteDelegate_Parms.UnregisterPlayerCompleteDelegate, &UnregisterPlayerCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearUnregisterPlayerCompleteDelegate, &ClearUnregisterPlayerCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.AddUnregisterPlayerCompleteDelegate
// [0x00020000]
// Parameters infos:
// struct FScriptDelegate         UnregisterPlayerCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddUnregisterPlayerCompleteDelegate ( struct FScriptDelegate UnregisterPlayerCompleteDelegate )
{
	static UFunction* pFnAddUnregisterPlayerCompleteDelegate = NULL;

	if ( ! pFnAddUnregisterPlayerCompleteDelegate )
		pFnAddUnregisterPlayerCompleteDelegate = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineGameInterfaceImpl.AddUnregisterPlayerCompleteDelegate" );

	UOnlineGameInterfaceImpl_execAddUnregisterPlayerCompleteDelegate_Parms AddUnregisterPlayerCompleteDelegate_Parms;
	memcpy ( &AddUnregisterPlayerCompleteDelegate_Parms.UnregisterPlayerCompleteDelegate, &UnregisterPlayerCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddUnregisterPlayerCompleteDelegate, &AddUnregisterPlayerCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.OnUnregisterPlayerComplete
// [0x00120000]
// Parameters infos:
// struct SFXName                 SessionName                    ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceImpl::OnUnregisterPlayerComplete ( struct SFXName SessionName, struct FUniqueNetId const& PlayerID, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnUnregisterPlayerComplete = NULL;

	if ( ! pFnOnUnregisterPlayerComplete )
		pFnOnUnregisterPlayerComplete = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineGameInterfaceImpl.OnUnregisterPlayerComplete" );

	UOnlineGameInterfaceImpl_execOnUnregisterPlayerComplete_Parms OnUnregisterPlayerComplete_Parms;
	memcpy ( &OnUnregisterPlayerComplete_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &OnUnregisterPlayerComplete_Parms.PlayerID, &PlayerID, 0x8 );
	OnUnregisterPlayerComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnUnregisterPlayerComplete, &OnUnregisterPlayerComplete_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.UnregisterPlayer
// [0x00020000]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct SFXName                 SessionName                    ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineGameInterfaceImpl::UnregisterPlayer ( struct SFXName SessionName, struct FUniqueNetId const& PlayerID )
{
	static UFunction* pFnUnregisterPlayer = NULL;

	if ( ! pFnUnregisterPlayer )
		pFnUnregisterPlayer = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineGameInterfaceImpl.UnregisterPlayer" );

	UOnlineGameInterfaceImpl_execUnregisterPlayer_Parms UnregisterPlayer_Parms;
	memcpy ( &UnregisterPlayer_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &UnregisterPlayer_Parms.PlayerID, &PlayerID, 0x8 );

	this->ProcessEvent ( pFnUnregisterPlayer, &UnregisterPlayer_Parms, NULL );

	return UnregisterPlayer_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearRegisterPlayerCompleteDelegate
// [0x00020000]
// Parameters infos:
// struct FScriptDelegate         RegisterPlayerCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearRegisterPlayerCompleteDelegate ( struct FScriptDelegate RegisterPlayerCompleteDelegate )
{
	static UFunction* pFnClearRegisterPlayerCompleteDelegate = NULL;

	if ( ! pFnClearRegisterPlayerCompleteDelegate )
		pFnClearRegisterPlayerCompleteDelegate = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineGameInterfaceImpl.ClearRegisterPlayerCompleteDelegate" );

	UOnlineGameInterfaceImpl_execClearRegisterPlayerCompleteDelegate_Parms ClearRegisterPlayerCompleteDelegate_Parms;
	memcpy ( &ClearRegisterPlayerCompleteDelegate_Parms.RegisterPlayerCompleteDelegate, &RegisterPlayerCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearRegisterPlayerCompleteDelegate, &ClearRegisterPlayerCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.AddRegisterPlayerCompleteDelegate
// [0x00020000]
// Parameters infos:
// struct FScriptDelegate         RegisterPlayerCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddRegisterPlayerCompleteDelegate ( struct FScriptDelegate RegisterPlayerCompleteDelegate )
{
	static UFunction* pFnAddRegisterPlayerCompleteDelegate = NULL;

	if ( ! pFnAddRegisterPlayerCompleteDelegate )
		pFnAddRegisterPlayerCompleteDelegate = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineGameInterfaceImpl.AddRegisterPlayerCompleteDelegate" );

	UOnlineGameInterfaceImpl_execAddRegisterPlayerCompleteDelegate_Parms AddRegisterPlayerCompleteDelegate_Parms;
	memcpy ( &AddRegisterPlayerCompleteDelegate_Parms.RegisterPlayerCompleteDelegate, &RegisterPlayerCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddRegisterPlayerCompleteDelegate, &AddRegisterPlayerCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.OnRegisterPlayerComplete
// [0x00120000]
// Parameters infos:
// struct SFXName                 SessionName                    ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceImpl::OnRegisterPlayerComplete ( struct SFXName SessionName, struct FUniqueNetId const& PlayerID, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnRegisterPlayerComplete = NULL;

	if ( ! pFnOnRegisterPlayerComplete )
		pFnOnRegisterPlayerComplete = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineGameInterfaceImpl.OnRegisterPlayerComplete" );

	UOnlineGameInterfaceImpl_execOnRegisterPlayerComplete_Parms OnRegisterPlayerComplete_Parms;
	memcpy ( &OnRegisterPlayerComplete_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &OnRegisterPlayerComplete_Parms.PlayerID, &PlayerID, 0x8 );
	OnRegisterPlayerComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnRegisterPlayerComplete, &OnRegisterPlayerComplete_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.RegisterPlayer
// [0x00020000]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct SFXName                 SessionName                    ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// unsigned long                  bWasInvited                    ( CPF_Parm )

bool UOnlineGameInterfaceImpl::RegisterPlayer ( struct SFXName SessionName, struct FUniqueNetId const& PlayerID, unsigned long bWasInvited )
{
	static UFunction* pFnRegisterPlayer = NULL;

	if ( ! pFnRegisterPlayer )
		pFnRegisterPlayer = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineGameInterfaceImpl.RegisterPlayer" );

	UOnlineGameInterfaceImpl_execRegisterPlayer_Parms RegisterPlayer_Parms;
	memcpy ( &RegisterPlayer_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &RegisterPlayer_Parms.PlayerID, &PlayerID, 0x8 );
	RegisterPlayer_Parms.bWasInvited = bWasInvited;

	this->ProcessEvent ( pFnRegisterPlayer, &RegisterPlayer_Parms, NULL );

	return RegisterPlayer_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.GetResolvedConnectString
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct SFXName                 SessionName                    ( CPF_Parm )
// FString                        ConnectInfo                    ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineGameInterfaceImpl::GetResolvedConnectString ( struct SFXName SessionName, FString* ConnectInfo )
{
	static UFunction* pFnGetResolvedConnectString = NULL;

	if ( ! pFnGetResolvedConnectString )
		pFnGetResolvedConnectString = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineGameInterfaceImpl.GetResolvedConnectString" );

	UOnlineGameInterfaceImpl_execGetResolvedConnectString_Parms GetResolvedConnectString_Parms;
	memcpy ( &GetResolvedConnectString_Parms.SessionName, &SessionName, 0x8 );

	if ( ConnectInfo )
		memcpy ( &GetResolvedConnectString_Parms.ConnectInfo, ConnectInfo, 0x10 );

	pFnGetResolvedConnectString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetResolvedConnectString, &GetResolvedConnectString_Parms, NULL );

	pFnGetResolvedConnectString->FunctionFlags |= 0x400;

	if ( ConnectInfo )
		memcpy ( ConnectInfo, &GetResolvedConnectString_Parms.ConnectInfo, 0x10 );

	return GetResolvedConnectString_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearJoinOnlineGameCompleteDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         JoinOnlineGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearJoinOnlineGameCompleteDelegate ( struct FScriptDelegate JoinOnlineGameCompleteDelegate )
{
	static UFunction* pFnClearJoinOnlineGameCompleteDelegate = NULL;

	if ( ! pFnClearJoinOnlineGameCompleteDelegate )
		pFnClearJoinOnlineGameCompleteDelegate = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineGameInterfaceImpl.ClearJoinOnlineGameCompleteDelegate" );

	UOnlineGameInterfaceImpl_execClearJoinOnlineGameCompleteDelegate_Parms ClearJoinOnlineGameCompleteDelegate_Parms;
	memcpy ( &ClearJoinOnlineGameCompleteDelegate_Parms.JoinOnlineGameCompleteDelegate, &JoinOnlineGameCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearJoinOnlineGameCompleteDelegate, &ClearJoinOnlineGameCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.AddJoinOnlineGameCompleteDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         JoinOnlineGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddJoinOnlineGameCompleteDelegate ( struct FScriptDelegate JoinOnlineGameCompleteDelegate )
{
	static UFunction* pFnAddJoinOnlineGameCompleteDelegate = NULL;

	if ( ! pFnAddJoinOnlineGameCompleteDelegate )
		pFnAddJoinOnlineGameCompleteDelegate = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineGameInterfaceImpl.AddJoinOnlineGameCompleteDelegate" );

	UOnlineGameInterfaceImpl_execAddJoinOnlineGameCompleteDelegate_Parms AddJoinOnlineGameCompleteDelegate_Parms;
	memcpy ( &AddJoinOnlineGameCompleteDelegate_Parms.JoinOnlineGameCompleteDelegate, &JoinOnlineGameCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddJoinOnlineGameCompleteDelegate, &AddJoinOnlineGameCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.OnJoinOnlineGameComplete
// [0x00120000]
// Parameters infos:
// struct SFXName                 SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceImpl::OnJoinOnlineGameComplete ( struct SFXName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnJoinOnlineGameComplete = NULL;

	if ( ! pFnOnJoinOnlineGameComplete )
		pFnOnJoinOnlineGameComplete = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineGameInterfaceImpl.OnJoinOnlineGameComplete" );

	UOnlineGameInterfaceImpl_execOnJoinOnlineGameComplete_Parms OnJoinOnlineGameComplete_Parms;
	memcpy ( &OnJoinOnlineGameComplete_Parms.SessionName, &SessionName, 0x8 );
	OnJoinOnlineGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnJoinOnlineGameComplete, &OnJoinOnlineGameComplete_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.JoinOnlineGame
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  PlayerNum                      ( CPF_Parm )
// struct SFXName                 SessionName                    ( CPF_Parm )
// struct FOnlineGameSearchResult DesiredGame                    ( CPF_Const | CPF_Parm | CPF_OutParm )

bool UOnlineGameInterfaceImpl::JoinOnlineGame ( unsigned char PlayerNum, struct SFXName SessionName, struct FOnlineGameSearchResult* DesiredGame )
{
	static UFunction* pFnJoinOnlineGame = NULL;

	if ( ! pFnJoinOnlineGame )
		pFnJoinOnlineGame = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineGameInterfaceImpl.JoinOnlineGame" );

	UOnlineGameInterfaceImpl_execJoinOnlineGame_Parms JoinOnlineGame_Parms;
	JoinOnlineGame_Parms.PlayerNum = PlayerNum;
	memcpy ( &JoinOnlineGame_Parms.SessionName, &SessionName, 0x8 );

	if ( DesiredGame )
		memcpy ( &JoinOnlineGame_Parms.DesiredGame, DesiredGame, 0x10 );

	pFnJoinOnlineGame->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnJoinOnlineGame, &JoinOnlineGame_Parms, NULL );

	pFnJoinOnlineGame->FunctionFlags |= 0x400;

	if ( DesiredGame )
		memcpy ( DesiredGame, &JoinOnlineGame_Parms.DesiredGame, 0x10 );

	return JoinOnlineGame_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.FreeSearchResults
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UOnlineGameSearch*       Search                         ( CPF_Parm )

bool UOnlineGameInterfaceImpl::FreeSearchResults ( class UOnlineGameSearch* Search )
{
	static UFunction* pFnFreeSearchResults = NULL;

	if ( ! pFnFreeSearchResults )
		pFnFreeSearchResults = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineGameInterfaceImpl.FreeSearchResults" );

	UOnlineGameInterfaceImpl_execFreeSearchResults_Parms FreeSearchResults_Parms;
	FreeSearchResults_Parms.Search = Search;

	pFnFreeSearchResults->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFreeSearchResults, &FreeSearchResults_Parms, NULL );

	pFnFreeSearchResults->FunctionFlags |= 0x400;

	return FreeSearchResults_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearCancelFindOnlineGamesCompleteDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         CancelFindOnlineGamesCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearCancelFindOnlineGamesCompleteDelegate ( struct FScriptDelegate CancelFindOnlineGamesCompleteDelegate )
{
	static UFunction* pFnClearCancelFindOnlineGamesCompleteDelegate = NULL;

	if ( ! pFnClearCancelFindOnlineGamesCompleteDelegate )
		pFnClearCancelFindOnlineGamesCompleteDelegate = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineGameInterfaceImpl.ClearCancelFindOnlineGamesCompleteDelegate" );

	UOnlineGameInterfaceImpl_execClearCancelFindOnlineGamesCompleteDelegate_Parms ClearCancelFindOnlineGamesCompleteDelegate_Parms;
	memcpy ( &ClearCancelFindOnlineGamesCompleteDelegate_Parms.CancelFindOnlineGamesCompleteDelegate, &CancelFindOnlineGamesCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearCancelFindOnlineGamesCompleteDelegate, &ClearCancelFindOnlineGamesCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.AddCancelFindOnlineGamesCompleteDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         CancelFindOnlineGamesCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddCancelFindOnlineGamesCompleteDelegate ( struct FScriptDelegate CancelFindOnlineGamesCompleteDelegate )
{
	static UFunction* pFnAddCancelFindOnlineGamesCompleteDelegate = NULL;

	if ( ! pFnAddCancelFindOnlineGamesCompleteDelegate )
		pFnAddCancelFindOnlineGamesCompleteDelegate = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineGameInterfaceImpl.AddCancelFindOnlineGamesCompleteDelegate" );

	UOnlineGameInterfaceImpl_execAddCancelFindOnlineGamesCompleteDelegate_Parms AddCancelFindOnlineGamesCompleteDelegate_Parms;
	memcpy ( &AddCancelFindOnlineGamesCompleteDelegate_Parms.CancelFindOnlineGamesCompleteDelegate, &CancelFindOnlineGamesCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddCancelFindOnlineGamesCompleteDelegate, &AddCancelFindOnlineGamesCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.OnCancelFindOnlineGamesComplete
// [0x00120000]
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceImpl::OnCancelFindOnlineGamesComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnCancelFindOnlineGamesComplete = NULL;

	if ( ! pFnOnCancelFindOnlineGamesComplete )
		pFnOnCancelFindOnlineGamesComplete = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineGameInterfaceImpl.OnCancelFindOnlineGamesComplete" );

	UOnlineGameInterfaceImpl_execOnCancelFindOnlineGamesComplete_Parms OnCancelFindOnlineGamesComplete_Parms;
	OnCancelFindOnlineGamesComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnCancelFindOnlineGamesComplete, &OnCancelFindOnlineGamesComplete_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.CancelFindOnlineGames
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineGameInterfaceImpl::CancelFindOnlineGames ( )
{
	static UFunction* pFnCancelFindOnlineGames = NULL;

	if ( ! pFnCancelFindOnlineGames )
		pFnCancelFindOnlineGames = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineGameInterfaceImpl.CancelFindOnlineGames" );

	UOnlineGameInterfaceImpl_execCancelFindOnlineGames_Parms CancelFindOnlineGames_Parms;

	pFnCancelFindOnlineGames->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCancelFindOnlineGames, &CancelFindOnlineGames_Parms, NULL );

	pFnCancelFindOnlineGames->FunctionFlags |= 0x400;

	return CancelFindOnlineGames_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearFindOnlineGamesCompleteDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         FindOnlineGamesCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearFindOnlineGamesCompleteDelegate ( struct FScriptDelegate FindOnlineGamesCompleteDelegate )
{
	static UFunction* pFnClearFindOnlineGamesCompleteDelegate = NULL;

	if ( ! pFnClearFindOnlineGamesCompleteDelegate )
		pFnClearFindOnlineGamesCompleteDelegate = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineGameInterfaceImpl.ClearFindOnlineGamesCompleteDelegate" );

	UOnlineGameInterfaceImpl_execClearFindOnlineGamesCompleteDelegate_Parms ClearFindOnlineGamesCompleteDelegate_Parms;
	memcpy ( &ClearFindOnlineGamesCompleteDelegate_Parms.FindOnlineGamesCompleteDelegate, &FindOnlineGamesCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearFindOnlineGamesCompleteDelegate, &ClearFindOnlineGamesCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.AddFindOnlineGamesCompleteDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         FindOnlineGamesCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddFindOnlineGamesCompleteDelegate ( struct FScriptDelegate FindOnlineGamesCompleteDelegate )
{
	static UFunction* pFnAddFindOnlineGamesCompleteDelegate = NULL;

	if ( ! pFnAddFindOnlineGamesCompleteDelegate )
		pFnAddFindOnlineGamesCompleteDelegate = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineGameInterfaceImpl.AddFindOnlineGamesCompleteDelegate" );

	UOnlineGameInterfaceImpl_execAddFindOnlineGamesCompleteDelegate_Parms AddFindOnlineGamesCompleteDelegate_Parms;
	memcpy ( &AddFindOnlineGamesCompleteDelegate_Parms.FindOnlineGamesCompleteDelegate, &FindOnlineGamesCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddFindOnlineGamesCompleteDelegate, &AddFindOnlineGamesCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.FindOnlineGames
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  SearchingPlayerNum             ( CPF_Parm )
// class UOnlineGameSearch*       SearchSettings                 ( CPF_Parm )

bool UOnlineGameInterfaceImpl::FindOnlineGames ( unsigned char SearchingPlayerNum, class UOnlineGameSearch* SearchSettings )
{
	static UFunction* pFnFindOnlineGames = NULL;

	if ( ! pFnFindOnlineGames )
		pFnFindOnlineGames = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineGameInterfaceImpl.FindOnlineGames" );

	UOnlineGameInterfaceImpl_execFindOnlineGames_Parms FindOnlineGames_Parms;
	FindOnlineGames_Parms.SearchingPlayerNum = SearchingPlayerNum;
	FindOnlineGames_Parms.SearchSettings = SearchSettings;

	pFnFindOnlineGames->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFindOnlineGames, &FindOnlineGames_Parms, NULL );

	pFnFindOnlineGames->FunctionFlags |= 0x400;

	return FindOnlineGames_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearDestroyOnlineGameCompleteDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         DestroyOnlineGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearDestroyOnlineGameCompleteDelegate ( struct FScriptDelegate DestroyOnlineGameCompleteDelegate )
{
	static UFunction* pFnClearDestroyOnlineGameCompleteDelegate = NULL;

	if ( ! pFnClearDestroyOnlineGameCompleteDelegate )
		pFnClearDestroyOnlineGameCompleteDelegate = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineGameInterfaceImpl.ClearDestroyOnlineGameCompleteDelegate" );

	UOnlineGameInterfaceImpl_execClearDestroyOnlineGameCompleteDelegate_Parms ClearDestroyOnlineGameCompleteDelegate_Parms;
	memcpy ( &ClearDestroyOnlineGameCompleteDelegate_Parms.DestroyOnlineGameCompleteDelegate, &DestroyOnlineGameCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearDestroyOnlineGameCompleteDelegate, &ClearDestroyOnlineGameCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.AddDestroyOnlineGameCompleteDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         DestroyOnlineGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddDestroyOnlineGameCompleteDelegate ( struct FScriptDelegate DestroyOnlineGameCompleteDelegate )
{
	static UFunction* pFnAddDestroyOnlineGameCompleteDelegate = NULL;

	if ( ! pFnAddDestroyOnlineGameCompleteDelegate )
		pFnAddDestroyOnlineGameCompleteDelegate = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineGameInterfaceImpl.AddDestroyOnlineGameCompleteDelegate" );

	UOnlineGameInterfaceImpl_execAddDestroyOnlineGameCompleteDelegate_Parms AddDestroyOnlineGameCompleteDelegate_Parms;
	memcpy ( &AddDestroyOnlineGameCompleteDelegate_Parms.DestroyOnlineGameCompleteDelegate, &DestroyOnlineGameCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddDestroyOnlineGameCompleteDelegate, &AddDestroyOnlineGameCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.OnDestroyOnlineGameComplete
// [0x00120000]
// Parameters infos:
// struct SFXName                 SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceImpl::OnDestroyOnlineGameComplete ( struct SFXName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnDestroyOnlineGameComplete = NULL;

	if ( ! pFnOnDestroyOnlineGameComplete )
		pFnOnDestroyOnlineGameComplete = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineGameInterfaceImpl.OnDestroyOnlineGameComplete" );

	UOnlineGameInterfaceImpl_execOnDestroyOnlineGameComplete_Parms OnDestroyOnlineGameComplete_Parms;
	memcpy ( &OnDestroyOnlineGameComplete_Parms.SessionName, &SessionName, 0x8 );
	OnDestroyOnlineGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnDestroyOnlineGameComplete, &OnDestroyOnlineGameComplete_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.DestroyOnlineGame
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct SFXName                 SessionName                    ( CPF_Parm )

bool UOnlineGameInterfaceImpl::DestroyOnlineGame ( struct SFXName SessionName )
{
	static UFunction* pFnDestroyOnlineGame = NULL;

	if ( ! pFnDestroyOnlineGame )
		pFnDestroyOnlineGame = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineGameInterfaceImpl.DestroyOnlineGame" );

	UOnlineGameInterfaceImpl_execDestroyOnlineGame_Parms DestroyOnlineGame_Parms;
	memcpy ( &DestroyOnlineGame_Parms.SessionName, &SessionName, 0x8 );

	pFnDestroyOnlineGame->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDestroyOnlineGame, &DestroyOnlineGame_Parms, NULL );

	pFnDestroyOnlineGame->FunctionFlags |= 0x400;

	return DestroyOnlineGame_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearUpdateOnlineGameCompleteDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         UpdateOnlineGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearUpdateOnlineGameCompleteDelegate ( struct FScriptDelegate UpdateOnlineGameCompleteDelegate )
{
	static UFunction* pFnClearUpdateOnlineGameCompleteDelegate = NULL;

	if ( ! pFnClearUpdateOnlineGameCompleteDelegate )
		pFnClearUpdateOnlineGameCompleteDelegate = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineGameInterfaceImpl.ClearUpdateOnlineGameCompleteDelegate" );

	UOnlineGameInterfaceImpl_execClearUpdateOnlineGameCompleteDelegate_Parms ClearUpdateOnlineGameCompleteDelegate_Parms;
	memcpy ( &ClearUpdateOnlineGameCompleteDelegate_Parms.UpdateOnlineGameCompleteDelegate, &UpdateOnlineGameCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearUpdateOnlineGameCompleteDelegate, &ClearUpdateOnlineGameCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.AddUpdateOnlineGameCompleteDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         UpdateOnlineGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddUpdateOnlineGameCompleteDelegate ( struct FScriptDelegate UpdateOnlineGameCompleteDelegate )
{
	static UFunction* pFnAddUpdateOnlineGameCompleteDelegate = NULL;

	if ( ! pFnAddUpdateOnlineGameCompleteDelegate )
		pFnAddUpdateOnlineGameCompleteDelegate = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineGameInterfaceImpl.AddUpdateOnlineGameCompleteDelegate" );

	UOnlineGameInterfaceImpl_execAddUpdateOnlineGameCompleteDelegate_Parms AddUpdateOnlineGameCompleteDelegate_Parms;
	memcpy ( &AddUpdateOnlineGameCompleteDelegate_Parms.UpdateOnlineGameCompleteDelegate, &UpdateOnlineGameCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddUpdateOnlineGameCompleteDelegate, &AddUpdateOnlineGameCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.OnUpdateOnlineGameComplete
// [0x00120000]
// Parameters infos:
// struct SFXName                 SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceImpl::OnUpdateOnlineGameComplete ( struct SFXName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnUpdateOnlineGameComplete = NULL;

	if ( ! pFnOnUpdateOnlineGameComplete )
		pFnOnUpdateOnlineGameComplete = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineGameInterfaceImpl.OnUpdateOnlineGameComplete" );

	UOnlineGameInterfaceImpl_execOnUpdateOnlineGameComplete_Parms OnUpdateOnlineGameComplete_Parms;
	memcpy ( &OnUpdateOnlineGameComplete_Parms.SessionName, &SessionName, 0x8 );
	OnUpdateOnlineGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnUpdateOnlineGameComplete, &OnUpdateOnlineGameComplete_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.UpdateOnlineGame
// [0x00024000]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct SFXName                 SessionName                    ( CPF_Parm )
// class UOnlineGameSettings*     UpdatedGameSettings            ( CPF_Parm )
// unsigned long                  bShouldRefreshOnlineData       ( CPF_OptionalParm | CPF_Parm )

bool UOnlineGameInterfaceImpl::UpdateOnlineGame ( struct SFXName SessionName, class UOnlineGameSettings* UpdatedGameSettings, unsigned long bShouldRefreshOnlineData )
{
	static UFunction* pFnUpdateOnlineGame = NULL;

	if ( ! pFnUpdateOnlineGame )
		pFnUpdateOnlineGame = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineGameInterfaceImpl.UpdateOnlineGame" );

	UOnlineGameInterfaceImpl_execUpdateOnlineGame_Parms UpdateOnlineGame_Parms;
	memcpy ( &UpdateOnlineGame_Parms.SessionName, &SessionName, 0x8 );
	UpdateOnlineGame_Parms.UpdatedGameSettings = UpdatedGameSettings;
	UpdateOnlineGame_Parms.bShouldRefreshOnlineData = bShouldRefreshOnlineData;

	this->ProcessEvent ( pFnUpdateOnlineGame, &UpdateOnlineGame_Parms, NULL );

	return UpdateOnlineGame_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearCreateOnlineGameCompleteDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         CreateOnlineGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearCreateOnlineGameCompleteDelegate ( struct FScriptDelegate CreateOnlineGameCompleteDelegate )
{
	static UFunction* pFnClearCreateOnlineGameCompleteDelegate = NULL;

	if ( ! pFnClearCreateOnlineGameCompleteDelegate )
		pFnClearCreateOnlineGameCompleteDelegate = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineGameInterfaceImpl.ClearCreateOnlineGameCompleteDelegate" );

	UOnlineGameInterfaceImpl_execClearCreateOnlineGameCompleteDelegate_Parms ClearCreateOnlineGameCompleteDelegate_Parms;
	memcpy ( &ClearCreateOnlineGameCompleteDelegate_Parms.CreateOnlineGameCompleteDelegate, &CreateOnlineGameCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearCreateOnlineGameCompleteDelegate, &ClearCreateOnlineGameCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.AddCreateOnlineGameCompleteDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         CreateOnlineGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddCreateOnlineGameCompleteDelegate ( struct FScriptDelegate CreateOnlineGameCompleteDelegate )
{
	static UFunction* pFnAddCreateOnlineGameCompleteDelegate = NULL;

	if ( ! pFnAddCreateOnlineGameCompleteDelegate )
		pFnAddCreateOnlineGameCompleteDelegate = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineGameInterfaceImpl.AddCreateOnlineGameCompleteDelegate" );

	UOnlineGameInterfaceImpl_execAddCreateOnlineGameCompleteDelegate_Parms AddCreateOnlineGameCompleteDelegate_Parms;
	memcpy ( &AddCreateOnlineGameCompleteDelegate_Parms.CreateOnlineGameCompleteDelegate, &CreateOnlineGameCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddCreateOnlineGameCompleteDelegate, &AddCreateOnlineGameCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.OnCreateOnlineGameComplete
// [0x00120000]
// Parameters infos:
// struct SFXName                 SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceImpl::OnCreateOnlineGameComplete ( struct SFXName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnCreateOnlineGameComplete = NULL;

	if ( ! pFnOnCreateOnlineGameComplete )
		pFnOnCreateOnlineGameComplete = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineGameInterfaceImpl.OnCreateOnlineGameComplete" );

	UOnlineGameInterfaceImpl_execOnCreateOnlineGameComplete_Parms OnCreateOnlineGameComplete_Parms;
	memcpy ( &OnCreateOnlineGameComplete_Parms.SessionName, &SessionName, 0x8 );
	OnCreateOnlineGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnCreateOnlineGameComplete, &OnCreateOnlineGameComplete_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.CreateOnlineGame
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  HostingPlayerNum               ( CPF_Parm )
// struct SFXName                 SessionName                    ( CPF_Parm )
// class UOnlineGameSettings*     NewGameSettings                ( CPF_Parm )

bool UOnlineGameInterfaceImpl::CreateOnlineGame ( unsigned char HostingPlayerNum, struct SFXName SessionName, class UOnlineGameSettings* NewGameSettings )
{
	static UFunction* pFnCreateOnlineGame = NULL;

	if ( ! pFnCreateOnlineGame )
		pFnCreateOnlineGame = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineGameInterfaceImpl.CreateOnlineGame" );

	UOnlineGameInterfaceImpl_execCreateOnlineGame_Parms CreateOnlineGame_Parms;
	CreateOnlineGame_Parms.HostingPlayerNum = HostingPlayerNum;
	memcpy ( &CreateOnlineGame_Parms.SessionName, &SessionName, 0x8 );
	CreateOnlineGame_Parms.NewGameSettings = NewGameSettings;

	pFnCreateOnlineGame->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCreateOnlineGame, &CreateOnlineGame_Parms, NULL );

	pFnCreateOnlineGame->FunctionFlags |= 0x400;

	return CreateOnlineGame_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.GetGameSearch
// [0x00020002]
// Parameters infos:
// class UOnlineGameSearch*       ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UOnlineGameSearch* UOnlineGameInterfaceImpl::GetGameSearch ( )
{
	static UFunction* pFnGetGameSearch = NULL;

	if ( ! pFnGetGameSearch )
		pFnGetGameSearch = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineGameInterfaceImpl.GetGameSearch" );

	UOnlineGameInterfaceImpl_execGetGameSearch_Parms GetGameSearch_Parms;

	this->ProcessEvent ( pFnGetGameSearch, &GetGameSearch_Parms, NULL );

	return GetGameSearch_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.GetGameSettings
// [0x00020002]
// Parameters infos:
// class UOnlineGameSettings*     ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct SFXName                 SessionName                    ( CPF_Parm )

class UOnlineGameSettings* UOnlineGameInterfaceImpl::GetGameSettings ( struct SFXName SessionName )
{
	static UFunction* pFnGetGameSettings = NULL;

	if ( ! pFnGetGameSettings )
		pFnGetGameSettings = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineGameInterfaceImpl.GetGameSettings" );

	UOnlineGameInterfaceImpl_execGetGameSettings_Parms GetGameSettings_Parms;
	memcpy ( &GetGameSettings_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnGetGameSettings, &GetGameSettings_Parms, NULL );

	return GetGameSettings_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.OnFindOnlineGamesComplete
// [0x00120000]
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceImpl::OnFindOnlineGamesComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnFindOnlineGamesComplete = NULL;

	if ( ! pFnOnFindOnlineGamesComplete )
		pFnOnFindOnlineGamesComplete = UObject::FindObject< UFunction > ( L"Function IpDrv.OnlineGameInterfaceImpl.OnFindOnlineGamesComplete" );

	UOnlineGameInterfaceImpl_execOnFindOnlineGamesComplete_Parms OnFindOnlineGamesComplete_Parms;
	OnFindOnlineGamesComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnFindOnlineGamesComplete, &OnFindOnlineGamesComplete_Parms, NULL );
};



class UClass* UPartyBeacon::pClassPointer = NULL;

class UClass* UPartyBeacon::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class IpDrv.PartyBeacon" );

		return pClassPointer;
	};

// Function IpDrv.PartyBeacon.OnDestroyComplete
// [0x00120000]
// Parameters infos:

void UPartyBeacon::OnDestroyComplete ( )
{
	static UFunction* pFnOnDestroyComplete = NULL;

	if ( ! pFnOnDestroyComplete )
		pFnOnDestroyComplete = UObject::FindObject< UFunction > ( L"Function IpDrv.PartyBeacon.OnDestroyComplete" );

	UPartyBeacon_execOnDestroyComplete_Parms OnDestroyComplete_Parms;

	this->ProcessEvent ( pFnOnDestroyComplete, &OnDestroyComplete_Parms, NULL );
};

// Function IpDrv.PartyBeacon.DestroyBeacon
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:

void UPartyBeacon::eventDestroyBeacon ( )
{
	static UFunction* pFnDestroyBeacon = NULL;

	if ( ! pFnDestroyBeacon )
		pFnDestroyBeacon = UObject::FindObject< UFunction > ( L"Function IpDrv.PartyBeacon.DestroyBeacon" );

	UPartyBeacon_eventDestroyBeacon_Parms DestroyBeacon_Parms;

	pFnDestroyBeacon->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDestroyBeacon, &DestroyBeacon_Parms, NULL );

	pFnDestroyBeacon->FunctionFlags |= 0x400;
};



class UClass* UPartyBeaconClient::pClassPointer = NULL;

class UClass* UPartyBeaconClient::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class IpDrv.PartyBeaconClient" );

		return pClassPointer;
	};

// Function IpDrv.PartyBeaconClient.DestroyBeacon
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:

void UPartyBeaconClient::eventDestroyBeacon ( )
{
	static UFunction* pFnDestroyBeacon = NULL;

	if ( ! pFnDestroyBeacon )
		pFnDestroyBeacon = UObject::FindObject< UFunction > ( L"Function IpDrv.PartyBeaconClient.DestroyBeacon" );

	UPartyBeaconClient_eventDestroyBeacon_Parms DestroyBeacon_Parms;

	pFnDestroyBeacon->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDestroyBeacon, &DestroyBeacon_Parms, NULL );

	pFnDestroyBeacon->FunctionFlags |= 0x400;
};

// Function IpDrv.PartyBeaconClient.CancelReservation
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            CancellingPartyLeader          ( CPF_Parm )

bool UPartyBeaconClient::CancelReservation ( struct FUniqueNetId const& CancellingPartyLeader )
{
	static UFunction* pFnCancelReservation = NULL;

	if ( ! pFnCancelReservation )
		pFnCancelReservation = UObject::FindObject< UFunction > ( L"Function IpDrv.PartyBeaconClient.CancelReservation" );

	UPartyBeaconClient_execCancelReservation_Parms CancelReservation_Parms;
	memcpy ( &CancelReservation_Parms.CancellingPartyLeader, &CancellingPartyLeader, 0x8 );

	pFnCancelReservation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCancelReservation, &CancelReservation_Parms, NULL );

	pFnCancelReservation->FunctionFlags |= 0x400;

	return CancelReservation_Parms.ReturnValue;
};

// Function IpDrv.PartyBeaconClient.RequestReservationUpdate
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            RequestingPartyLeader          ( CPF_Parm )
// struct FOnlineGameSearchResult DesiredHost                    ( CPF_Const | CPF_Parm | CPF_OutParm )
// TArray<struct FPlayerReservation> PlayersToAdd                   ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UPartyBeaconClient::RequestReservationUpdate ( struct FUniqueNetId const& RequestingPartyLeader, struct FOnlineGameSearchResult* DesiredHost, TArray<struct FPlayerReservation>* PlayersToAdd )
{
	static UFunction* pFnRequestReservationUpdate = NULL;

	if ( ! pFnRequestReservationUpdate )
		pFnRequestReservationUpdate = UObject::FindObject< UFunction > ( L"Function IpDrv.PartyBeaconClient.RequestReservationUpdate" );

	UPartyBeaconClient_execRequestReservationUpdate_Parms RequestReservationUpdate_Parms;
	memcpy ( &RequestReservationUpdate_Parms.RequestingPartyLeader, &RequestingPartyLeader, 0x8 );

	if ( DesiredHost )
		memcpy ( &RequestReservationUpdate_Parms.DesiredHost, DesiredHost, 0x10 );

	if ( PlayersToAdd )
		memcpy ( &RequestReservationUpdate_Parms.PlayersToAdd, PlayersToAdd, 0x10 );

	pFnRequestReservationUpdate->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRequestReservationUpdate, &RequestReservationUpdate_Parms, NULL );

	pFnRequestReservationUpdate->FunctionFlags |= 0x400;

	if ( DesiredHost )
		memcpy ( DesiredHost, &RequestReservationUpdate_Parms.DesiredHost, 0x10 );

	if ( PlayersToAdd )
		memcpy ( PlayersToAdd, &RequestReservationUpdate_Parms.PlayersToAdd, 0x10 );

	return RequestReservationUpdate_Parms.ReturnValue;
};

// Function IpDrv.PartyBeaconClient.RequestReservation
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            RequestingPartyLeader          ( CPF_Parm )
// struct FOnlineGameSearchResult DesiredHost                    ( CPF_Const | CPF_Parm | CPF_OutParm )
// TArray<struct FPlayerReservation> Players                        ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UPartyBeaconClient::RequestReservation ( struct FUniqueNetId const& RequestingPartyLeader, struct FOnlineGameSearchResult* DesiredHost, TArray<struct FPlayerReservation>* Players )
{
	static UFunction* pFnRequestReservation = NULL;

	if ( ! pFnRequestReservation )
		pFnRequestReservation = UObject::FindObject< UFunction > ( L"Function IpDrv.PartyBeaconClient.RequestReservation" );

	UPartyBeaconClient_execRequestReservation_Parms RequestReservation_Parms;
	memcpy ( &RequestReservation_Parms.RequestingPartyLeader, &RequestingPartyLeader, 0x8 );

	if ( DesiredHost )
		memcpy ( &RequestReservation_Parms.DesiredHost, DesiredHost, 0x10 );

	if ( Players )
		memcpy ( &RequestReservation_Parms.Players, Players, 0x10 );

	pFnRequestReservation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRequestReservation, &RequestReservation_Parms, NULL );

	pFnRequestReservation->FunctionFlags |= 0x400;

	if ( DesiredHost )
		memcpy ( DesiredHost, &RequestReservation_Parms.DesiredHost, 0x10 );

	if ( Players )
		memcpy ( Players, &RequestReservation_Parms.Players, 0x10 );

	return RequestReservation_Parms.ReturnValue;
};

// Function IpDrv.PartyBeaconClient.OnHostHasCancelled
// [0x00120000]
// Parameters infos:

void UPartyBeaconClient::OnHostHasCancelled ( )
{
	static UFunction* pFnOnHostHasCancelled = NULL;

	if ( ! pFnOnHostHasCancelled )
		pFnOnHostHasCancelled = UObject::FindObject< UFunction > ( L"Function IpDrv.PartyBeaconClient.OnHostHasCancelled" );

	UPartyBeaconClient_execOnHostHasCancelled_Parms OnHostHasCancelled_Parms;

	this->ProcessEvent ( pFnOnHostHasCancelled, &OnHostHasCancelled_Parms, NULL );
};

// Function IpDrv.PartyBeaconClient.OnHostIsReady
// [0x00120000]
// Parameters infos:

void UPartyBeaconClient::OnHostIsReady ( )
{
	static UFunction* pFnOnHostIsReady = NULL;

	if ( ! pFnOnHostIsReady )
		pFnOnHostIsReady = UObject::FindObject< UFunction > ( L"Function IpDrv.PartyBeaconClient.OnHostIsReady" );

	UPartyBeaconClient_execOnHostIsReady_Parms OnHostIsReady_Parms;

	this->ProcessEvent ( pFnOnHostIsReady, &OnHostIsReady_Parms, NULL );
};

// Function IpDrv.PartyBeaconClient.OnTravelRequestReceived
// [0x00120000]
// Parameters infos:
// struct SFXName                 SessionName                    ( CPF_Parm )
// class UClass*                  SearchClass                    ( CPF_Parm )
// unsigned char                  PlatformSpecificInfo           ( CPF_Parm )

void UPartyBeaconClient::OnTravelRequestReceived ( struct SFXName SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo )
{
	static UFunction* pFnOnTravelRequestReceived = NULL;

	if ( ! pFnOnTravelRequestReceived )
		pFnOnTravelRequestReceived = UObject::FindObject< UFunction > ( L"Function IpDrv.PartyBeaconClient.OnTravelRequestReceived" );

	UPartyBeaconClient_execOnTravelRequestReceived_Parms OnTravelRequestReceived_Parms;
	memcpy ( &OnTravelRequestReceived_Parms.SessionName, &SessionName, 0x8 );
	OnTravelRequestReceived_Parms.SearchClass = SearchClass;
	memcpy ( &OnTravelRequestReceived_Parms.PlatformSpecificInfo, &PlatformSpecificInfo, 0x50 );

	this->ProcessEvent ( pFnOnTravelRequestReceived, &OnTravelRequestReceived_Parms, NULL );
};

// Function IpDrv.PartyBeaconClient.OnReservationCountUpdated
// [0x00120000]
// Parameters infos:
// int                            ReservationRemaining           ( CPF_Parm )

void UPartyBeaconClient::OnReservationCountUpdated ( int ReservationRemaining )
{
	static UFunction* pFnOnReservationCountUpdated = NULL;

	if ( ! pFnOnReservationCountUpdated )
		pFnOnReservationCountUpdated = UObject::FindObject< UFunction > ( L"Function IpDrv.PartyBeaconClient.OnReservationCountUpdated" );

	UPartyBeaconClient_execOnReservationCountUpdated_Parms OnReservationCountUpdated_Parms;
	OnReservationCountUpdated_Parms.ReservationRemaining = ReservationRemaining;

	this->ProcessEvent ( pFnOnReservationCountUpdated, &OnReservationCountUpdated_Parms, NULL );
};

// Function IpDrv.PartyBeaconClient.OnReservationRequestComplete
// [0x00120000]
// Parameters infos:
// unsigned char                  ReservationResult              ( CPF_Parm )

void UPartyBeaconClient::OnReservationRequestComplete ( unsigned char ReservationResult )
{
	static UFunction* pFnOnReservationRequestComplete = NULL;

	if ( ! pFnOnReservationRequestComplete )
		pFnOnReservationRequestComplete = UObject::FindObject< UFunction > ( L"Function IpDrv.PartyBeaconClient.OnReservationRequestComplete" );

	UPartyBeaconClient_execOnReservationRequestComplete_Parms OnReservationRequestComplete_Parms;
	OnReservationRequestComplete_Parms.ReservationResult = ReservationResult;

	this->ProcessEvent ( pFnOnReservationRequestComplete, &OnReservationRequestComplete_Parms, NULL );
};



class UClass* UPartyBeaconHost::pClassPointer = NULL;

class UClass* UPartyBeaconHost::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class IpDrv.PartyBeaconHost" );

		return pClassPointer;
	};

// Function IpDrv.PartyBeaconHost.DumpReservations
// [0x00020002]
// Parameters infos:

void UPartyBeaconHost::DumpReservations ( )
{
	static UFunction* pFnDumpReservations = NULL;

	if ( ! pFnDumpReservations )
		pFnDumpReservations = UObject::FindObject< UFunction > ( L"Function IpDrv.PartyBeaconHost.DumpReservations" );

	UPartyBeaconHost_execDumpReservations_Parms DumpReservations_Parms;

	this->ProcessEvent ( pFnDumpReservations, &DumpReservations_Parms, NULL );
};

// Function IpDrv.PartyBeaconHost.GetMaxAvailableTeamSize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UPartyBeaconHost::GetMaxAvailableTeamSize ( )
{
	static UFunction* pFnGetMaxAvailableTeamSize = NULL;

	if ( ! pFnGetMaxAvailableTeamSize )
		pFnGetMaxAvailableTeamSize = UObject::FindObject< UFunction > ( L"Function IpDrv.PartyBeaconHost.GetMaxAvailableTeamSize" );

	UPartyBeaconHost_execGetMaxAvailableTeamSize_Parms GetMaxAvailableTeamSize_Parms;

	pFnGetMaxAvailableTeamSize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetMaxAvailableTeamSize, &GetMaxAvailableTeamSize_Parms, NULL );

	pFnGetMaxAvailableTeamSize->FunctionFlags |= 0x400;

	return GetMaxAvailableTeamSize_Parms.ReturnValue;
};

// Function IpDrv.PartyBeaconHost.GetPartyLeaders
// [0x00420002]
// Parameters infos:
// TArray<struct FUniqueNetId>    PartyLeaders                   ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UPartyBeaconHost::GetPartyLeaders ( TArray<struct FUniqueNetId>* PartyLeaders )
{
	static UFunction* pFnGetPartyLeaders = NULL;

	if ( ! pFnGetPartyLeaders )
		pFnGetPartyLeaders = UObject::FindObject< UFunction > ( L"Function IpDrv.PartyBeaconHost.GetPartyLeaders" );

	UPartyBeaconHost_execGetPartyLeaders_Parms GetPartyLeaders_Parms;

	if ( PartyLeaders )
		memcpy ( &GetPartyLeaders_Parms.PartyLeaders, PartyLeaders, 0x10 );

	this->ProcessEvent ( pFnGetPartyLeaders, &GetPartyLeaders_Parms, NULL );

	if ( PartyLeaders )
		memcpy ( PartyLeaders, &GetPartyLeaders_Parms.PartyLeaders, 0x10 );
};

// Function IpDrv.PartyBeaconHost.GetPlayers
// [0x00420002]
// Parameters infos:
// TArray<struct FUniqueNetId>    Players                        ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UPartyBeaconHost::GetPlayers ( TArray<struct FUniqueNetId>* Players )
{
	static UFunction* pFnGetPlayers = NULL;

	if ( ! pFnGetPlayers )
		pFnGetPlayers = UObject::FindObject< UFunction > ( L"Function IpDrv.PartyBeaconHost.GetPlayers" );

	UPartyBeaconHost_execGetPlayers_Parms GetPlayers_Parms;

	if ( Players )
		memcpy ( &GetPlayers_Parms.Players, Players, 0x10 );

	this->ProcessEvent ( pFnGetPlayers, &GetPlayers_Parms, NULL );

	if ( Players )
		memcpy ( Players, &GetPlayers_Parms.Players, 0x10 );
};

// Function IpDrv.PartyBeaconHost.AppendReservationSkillsToSearch
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UOnlineGameSearch*       Search                         ( CPF_Parm )

void UPartyBeaconHost::AppendReservationSkillsToSearch ( class UOnlineGameSearch* Search )
{
	static UFunction* pFnAppendReservationSkillsToSearch = NULL;

	if ( ! pFnAppendReservationSkillsToSearch )
		pFnAppendReservationSkillsToSearch = UObject::FindObject< UFunction > ( L"Function IpDrv.PartyBeaconHost.AppendReservationSkillsToSearch" );

	UPartyBeaconHost_execAppendReservationSkillsToSearch_Parms AppendReservationSkillsToSearch_Parms;
	AppendReservationSkillsToSearch_Parms.Search = Search;

	pFnAppendReservationSkillsToSearch->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAppendReservationSkillsToSearch, &AppendReservationSkillsToSearch_Parms, NULL );

	pFnAppendReservationSkillsToSearch->FunctionFlags |= 0x400;
};

// Function IpDrv.PartyBeaconHost.UnregisterParty
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// struct FUniqueNetId            PartyLeader                    ( CPF_Parm )

void UPartyBeaconHost::eventUnregisterParty ( struct FUniqueNetId const& PartyLeader )
{
	static UFunction* pFnUnregisterParty = NULL;

	if ( ! pFnUnregisterParty )
		pFnUnregisterParty = UObject::FindObject< UFunction > ( L"Function IpDrv.PartyBeaconHost.UnregisterParty" );

	UPartyBeaconHost_eventUnregisterParty_Parms UnregisterParty_Parms;
	memcpy ( &UnregisterParty_Parms.PartyLeader, &PartyLeader, 0x8 );

	this->ProcessEvent ( pFnUnregisterParty, &UnregisterParty_Parms, NULL );
};

// Function IpDrv.PartyBeaconHost.UnregisterPartyMembers
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UPartyBeaconHost::eventUnregisterPartyMembers ( )
{
	static UFunction* pFnUnregisterPartyMembers = NULL;

	if ( ! pFnUnregisterPartyMembers )
		pFnUnregisterPartyMembers = UObject::FindObject< UFunction > ( L"Function IpDrv.PartyBeaconHost.UnregisterPartyMembers" );

	UPartyBeaconHost_eventUnregisterPartyMembers_Parms UnregisterPartyMembers_Parms;

	this->ProcessEvent ( pFnUnregisterPartyMembers, &UnregisterPartyMembers_Parms, NULL );
};

// Function IpDrv.PartyBeaconHost.RegisterPartyMembers
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UPartyBeaconHost::eventRegisterPartyMembers ( )
{
	static UFunction* pFnRegisterPartyMembers = NULL;

	if ( ! pFnRegisterPartyMembers )
		pFnRegisterPartyMembers = UObject::FindObject< UFunction > ( L"Function IpDrv.PartyBeaconHost.RegisterPartyMembers" );

	UPartyBeaconHost_eventRegisterPartyMembers_Parms RegisterPartyMembers_Parms;

	this->ProcessEvent ( pFnRegisterPartyMembers, &RegisterPartyMembers_Parms, NULL );
};

// Function IpDrv.PartyBeaconHost.AreReservationsFull
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UPartyBeaconHost::AreReservationsFull ( )
{
	static UFunction* pFnAreReservationsFull = NULL;

	if ( ! pFnAreReservationsFull )
		pFnAreReservationsFull = UObject::FindObject< UFunction > ( L"Function IpDrv.PartyBeaconHost.AreReservationsFull" );

	UPartyBeaconHost_execAreReservationsFull_Parms AreReservationsFull_Parms;

	this->ProcessEvent ( pFnAreReservationsFull, &AreReservationsFull_Parms, NULL );

	return AreReservationsFull_Parms.ReturnValue;
};

// Function IpDrv.PartyBeaconHost.TellClientsHostHasCancelled
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UPartyBeaconHost::TellClientsHostHasCancelled ( )
{
	static UFunction* pFnTellClientsHostHasCancelled = NULL;

	if ( ! pFnTellClientsHostHasCancelled )
		pFnTellClientsHostHasCancelled = UObject::FindObject< UFunction > ( L"Function IpDrv.PartyBeaconHost.TellClientsHostHasCancelled" );

	UPartyBeaconHost_execTellClientsHostHasCancelled_Parms TellClientsHostHasCancelled_Parms;

	pFnTellClientsHostHasCancelled->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTellClientsHostHasCancelled, &TellClientsHostHasCancelled_Parms, NULL );

	pFnTellClientsHostHasCancelled->FunctionFlags |= 0x400;
};

// Function IpDrv.PartyBeaconHost.TellClientsHostIsReady
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UPartyBeaconHost::TellClientsHostIsReady ( )
{
	static UFunction* pFnTellClientsHostIsReady = NULL;

	if ( ! pFnTellClientsHostIsReady )
		pFnTellClientsHostIsReady = UObject::FindObject< UFunction > ( L"Function IpDrv.PartyBeaconHost.TellClientsHostIsReady" );

	UPartyBeaconHost_execTellClientsHostIsReady_Parms TellClientsHostIsReady_Parms;

	pFnTellClientsHostIsReady->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTellClientsHostIsReady, &TellClientsHostIsReady_Parms, NULL );

	pFnTellClientsHostIsReady->FunctionFlags |= 0x400;
};

// Function IpDrv.PartyBeaconHost.TellClientsToTravel
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct SFXName                 SessionName                    ( CPF_Parm )
// class UClass*                  SearchClass                    ( CPF_Parm )
// unsigned char                  PlatformSpecificInfo           ( CPF_Parm )

void UPartyBeaconHost::TellClientsToTravel ( struct SFXName SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo )
{
	static UFunction* pFnTellClientsToTravel = NULL;

	if ( ! pFnTellClientsToTravel )
		pFnTellClientsToTravel = UObject::FindObject< UFunction > ( L"Function IpDrv.PartyBeaconHost.TellClientsToTravel" );

	UPartyBeaconHost_execTellClientsToTravel_Parms TellClientsToTravel_Parms;
	memcpy ( &TellClientsToTravel_Parms.SessionName, &SessionName, 0x8 );
	TellClientsToTravel_Parms.SearchClass = SearchClass;
	memcpy ( &TellClientsToTravel_Parms.PlatformSpecificInfo, &PlatformSpecificInfo, 0x50 );

	pFnTellClientsToTravel->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTellClientsToTravel, &TellClientsToTravel_Parms, NULL );

	pFnTellClientsToTravel->FunctionFlags |= 0x400;
};

// Function IpDrv.PartyBeaconHost.DestroyBeacon
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:

void UPartyBeaconHost::eventDestroyBeacon ( )
{
	static UFunction* pFnDestroyBeacon = NULL;

	if ( ! pFnDestroyBeacon )
		pFnDestroyBeacon = UObject::FindObject< UFunction > ( L"Function IpDrv.PartyBeaconHost.DestroyBeacon" );

	UPartyBeaconHost_eventDestroyBeacon_Parms DestroyBeacon_Parms;

	pFnDestroyBeacon->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDestroyBeacon, &DestroyBeacon_Parms, NULL );

	pFnDestroyBeacon->FunctionFlags |= 0x400;
};

// Function IpDrv.PartyBeaconHost.OnClientCancellationReceived
// [0x00120000]
// Parameters infos:
// struct FUniqueNetId            PartyLeader                    ( CPF_Parm )

void UPartyBeaconHost::OnClientCancellationReceived ( struct FUniqueNetId const& PartyLeader )
{
	static UFunction* pFnOnClientCancellationReceived = NULL;

	if ( ! pFnOnClientCancellationReceived )
		pFnOnClientCancellationReceived = UObject::FindObject< UFunction > ( L"Function IpDrv.PartyBeaconHost.OnClientCancellationReceived" );

	UPartyBeaconHost_execOnClientCancellationReceived_Parms OnClientCancellationReceived_Parms;
	memcpy ( &OnClientCancellationReceived_Parms.PartyLeader, &PartyLeader, 0x8 );

	this->ProcessEvent ( pFnOnClientCancellationReceived, &OnClientCancellationReceived_Parms, NULL );
};

// Function IpDrv.PartyBeaconHost.OnReservationsFull
// [0x00120000]
// Parameters infos:

void UPartyBeaconHost::OnReservationsFull ( )
{
	static UFunction* pFnOnReservationsFull = NULL;

	if ( ! pFnOnReservationsFull )
		pFnOnReservationsFull = UObject::FindObject< UFunction > ( L"Function IpDrv.PartyBeaconHost.OnReservationsFull" );

	UPartyBeaconHost_execOnReservationsFull_Parms OnReservationsFull_Parms;

	this->ProcessEvent ( pFnOnReservationsFull, &OnReservationsFull_Parms, NULL );
};

// Function IpDrv.PartyBeaconHost.OnReservationChange
// [0x00120000]
// Parameters infos:

void UPartyBeaconHost::OnReservationChange ( )
{
	static UFunction* pFnOnReservationChange = NULL;

	if ( ! pFnOnReservationChange )
		pFnOnReservationChange = UObject::FindObject< UFunction > ( L"Function IpDrv.PartyBeaconHost.OnReservationChange" );

	UPartyBeaconHost_execOnReservationChange_Parms OnReservationChange_Parms;

	this->ProcessEvent ( pFnOnReservationChange, &OnReservationChange_Parms, NULL );
};

// Function IpDrv.PartyBeaconHost.HandlePlayerLogout
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// unsigned long                  bMaintainParty                 ( CPF_Parm )

void UPartyBeaconHost::HandlePlayerLogout ( struct FUniqueNetId const& PlayerID, unsigned long bMaintainParty )
{
	static UFunction* pFnHandlePlayerLogout = NULL;

	if ( ! pFnHandlePlayerLogout )
		pFnHandlePlayerLogout = UObject::FindObject< UFunction > ( L"Function IpDrv.PartyBeaconHost.HandlePlayerLogout" );

	UPartyBeaconHost_execHandlePlayerLogout_Parms HandlePlayerLogout_Parms;
	memcpy ( &HandlePlayerLogout_Parms.PlayerID, &PlayerID, 0x8 );
	HandlePlayerLogout_Parms.bMaintainParty = bMaintainParty;

	pFnHandlePlayerLogout->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnHandlePlayerLogout, &HandlePlayerLogout_Parms, NULL );

	pFnHandlePlayerLogout->FunctionFlags |= 0x400;
};

// Function IpDrv.PartyBeaconHost.UpdatePartyReservationEntry
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            PartyLeader                    ( CPF_Parm )
// TArray<struct FPlayerReservation> PlayerMembers                  ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

unsigned char UPartyBeaconHost::UpdatePartyReservationEntry ( struct FUniqueNetId const& PartyLeader, TArray<struct FPlayerReservation>* PlayerMembers )
{
	static UFunction* pFnUpdatePartyReservationEntry = NULL;

	if ( ! pFnUpdatePartyReservationEntry )
		pFnUpdatePartyReservationEntry = UObject::FindObject< UFunction > ( L"Function IpDrv.PartyBeaconHost.UpdatePartyReservationEntry" );

	UPartyBeaconHost_execUpdatePartyReservationEntry_Parms UpdatePartyReservationEntry_Parms;
	memcpy ( &UpdatePartyReservationEntry_Parms.PartyLeader, &PartyLeader, 0x8 );

	if ( PlayerMembers )
		memcpy ( &UpdatePartyReservationEntry_Parms.PlayerMembers, PlayerMembers, 0x10 );

	pFnUpdatePartyReservationEntry->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdatePartyReservationEntry, &UpdatePartyReservationEntry_Parms, NULL );

	pFnUpdatePartyReservationEntry->FunctionFlags |= 0x400;

	if ( PlayerMembers )
		memcpy ( PlayerMembers, &UpdatePartyReservationEntry_Parms.PlayerMembers, 0x10 );

	return UpdatePartyReservationEntry_Parms.ReturnValue;
};

// Function IpDrv.PartyBeaconHost.AddPartyReservationEntry
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            PartyLeader                    ( CPF_Parm )
// int                            TeamNum                        ( CPF_Parm )
// unsigned long                  bIsHost                        ( CPF_Parm )
// TArray<struct FPlayerReservation> PlayerMembers                  ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

unsigned char UPartyBeaconHost::AddPartyReservationEntry ( struct FUniqueNetId const& PartyLeader, int TeamNum, unsigned long bIsHost, TArray<struct FPlayerReservation>* PlayerMembers )
{
	static UFunction* pFnAddPartyReservationEntry = NULL;

	if ( ! pFnAddPartyReservationEntry )
		pFnAddPartyReservationEntry = UObject::FindObject< UFunction > ( L"Function IpDrv.PartyBeaconHost.AddPartyReservationEntry" );

	UPartyBeaconHost_execAddPartyReservationEntry_Parms AddPartyReservationEntry_Parms;
	memcpy ( &AddPartyReservationEntry_Parms.PartyLeader, &PartyLeader, 0x8 );
	AddPartyReservationEntry_Parms.TeamNum = TeamNum;
	AddPartyReservationEntry_Parms.bIsHost = bIsHost;

	if ( PlayerMembers )
		memcpy ( &AddPartyReservationEntry_Parms.PlayerMembers, PlayerMembers, 0x10 );

	pFnAddPartyReservationEntry->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddPartyReservationEntry, &AddPartyReservationEntry_Parms, NULL );

	pFnAddPartyReservationEntry->FunctionFlags |= 0x400;

	if ( PlayerMembers )
		memcpy ( PlayerMembers, &AddPartyReservationEntry_Parms.PlayerMembers, 0x10 );

	return AddPartyReservationEntry_Parms.ReturnValue;
};

// Function IpDrv.PartyBeaconHost.InitHostBeacon
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            InNumTeams                     ( CPF_Parm )
// int                            InNumPlayersPerTeam            ( CPF_Parm )
// int                            InNumReservations              ( CPF_Parm )
// struct SFXName                 InSessionName                  ( CPF_Parm )

bool UPartyBeaconHost::InitHostBeacon ( int InNumTeams, int InNumPlayersPerTeam, int InNumReservations, struct SFXName InSessionName )
{
	static UFunction* pFnInitHostBeacon = NULL;

	if ( ! pFnInitHostBeacon )
		pFnInitHostBeacon = UObject::FindObject< UFunction > ( L"Function IpDrv.PartyBeaconHost.InitHostBeacon" );

	UPartyBeaconHost_execInitHostBeacon_Parms InitHostBeacon_Parms;
	InitHostBeacon_Parms.InNumTeams = InNumTeams;
	InitHostBeacon_Parms.InNumPlayersPerTeam = InNumPlayersPerTeam;
	InitHostBeacon_Parms.InNumReservations = InNumReservations;
	memcpy ( &InitHostBeacon_Parms.InSessionName, &InSessionName, 0x8 );

	pFnInitHostBeacon->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitHostBeacon, &InitHostBeacon_Parms, NULL );

	pFnInitHostBeacon->FunctionFlags |= 0x400;

	return InitHostBeacon_Parms.ReturnValue;
};



class UClass* UTcpNetDriver::pClassPointer = NULL;

class UClass* UTcpNetDriver::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class IpDrv.TcpNetDriver" );

		return pClassPointer;
	};



class UClass* UTcpipConnection::pClassPointer = NULL;

class UClass* UTcpipConnection::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class IpDrv.TcpipConnection" );

		return pClassPointer;
	};



class UClass* UWebRequest::pClassPointer = NULL;

class UClass* UWebRequest::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class IpDrv.WebRequest" );

		return pClassPointer;
	};

// Function IpDrv.WebRequest.GetHexDigit
// [0x00020002]
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// FString                        D                              ( CPF_Parm | CPF_NeedCtorLink )

int UWebRequest::GetHexDigit ( FString const& D )
{
	static UFunction* pFnGetHexDigit = NULL;

	if ( ! pFnGetHexDigit )
		pFnGetHexDigit = UObject::FindObject< UFunction > ( L"Function IpDrv.WebRequest.GetHexDigit" );

	UWebRequest_execGetHexDigit_Parms GetHexDigit_Parms;
	memcpy ( &GetHexDigit_Parms.D, &D, 0x10 );

	this->ProcessEvent ( pFnGetHexDigit, &GetHexDigit_Parms, NULL );

	return GetHexDigit_Parms.ReturnValue;
};

// Function IpDrv.WebRequest.DecodeFormData
// [0x00020002]
// Parameters infos:
// FString                        Data                           ( CPF_Parm | CPF_NeedCtorLink )

void UWebRequest::DecodeFormData ( FString const& Data )
{
	static UFunction* pFnDecodeFormData = NULL;

	if ( ! pFnDecodeFormData )
		pFnDecodeFormData = UObject::FindObject< UFunction > ( L"Function IpDrv.WebRequest.DecodeFormData" );

	UWebRequest_execDecodeFormData_Parms DecodeFormData_Parms;
	memcpy ( &DecodeFormData_Parms.Data, &Data, 0x10 );

	this->ProcessEvent ( pFnDecodeFormData, &DecodeFormData_Parms, NULL );
};

// Function IpDrv.WebRequest.ProcessHeaderString
// [0x00020002]
// Parameters infos:
// FString                        S                              ( CPF_Parm | CPF_NeedCtorLink )

void UWebRequest::ProcessHeaderString ( FString const& S )
{
	static UFunction* pFnProcessHeaderString = NULL;

	if ( ! pFnProcessHeaderString )
		pFnProcessHeaderString = UObject::FindObject< UFunction > ( L"Function IpDrv.WebRequest.ProcessHeaderString" );

	UWebRequest_execProcessHeaderString_Parms ProcessHeaderString_Parms;
	memcpy ( &ProcessHeaderString_Parms.S, &S, 0x10 );

	this->ProcessEvent ( pFnProcessHeaderString, &ProcessHeaderString_Parms, NULL );
};

// Function IpDrv.WebRequest.Dump
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UWebRequest::Dump ( )
{
	static UFunction* pFnDump = NULL;

	if ( ! pFnDump )
		pFnDump = UObject::FindObject< UFunction > ( L"Function IpDrv.WebRequest.Dump" );

	UWebRequest_execDump_Parms Dump_Parms;

	pFnDump->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDump, &Dump_Parms, NULL );

	pFnDump->FunctionFlags |= 0x400;
};

// Function IpDrv.WebRequest.GetVariables
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// TArray<FString>                varNames                       ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UWebRequest::GetVariables ( TArray<FString>* varNames )
{
	static UFunction* pFnGetVariables = NULL;

	if ( ! pFnGetVariables )
		pFnGetVariables = UObject::FindObject< UFunction > ( L"Function IpDrv.WebRequest.GetVariables" );

	UWebRequest_execGetVariables_Parms GetVariables_Parms;

	if ( varNames )
		memcpy ( &GetVariables_Parms.varNames, varNames, 0x10 );

	pFnGetVariables->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVariables, &GetVariables_Parms, NULL );

	pFnGetVariables->FunctionFlags |= 0x400;

	if ( varNames )
		memcpy ( varNames, &GetVariables_Parms.varNames, 0x10 );
};

// Function IpDrv.WebRequest.GetVariableNumber
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// FString                        ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// FString                        VariableName                   ( CPF_Parm | CPF_NeedCtorLink )
// int                            Number                         ( CPF_Parm )
// FString                        DefaultValue                   ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

FString UWebRequest::GetVariableNumber ( FString const& VariableName, int Number, FString const& DefaultValue )
{
	static UFunction* pFnGetVariableNumber = NULL;

	if ( ! pFnGetVariableNumber )
		pFnGetVariableNumber = UObject::FindObject< UFunction > ( L"Function IpDrv.WebRequest.GetVariableNumber" );

	UWebRequest_execGetVariableNumber_Parms GetVariableNumber_Parms;
	memcpy ( &GetVariableNumber_Parms.VariableName, &VariableName, 0x10 );
	GetVariableNumber_Parms.Number = Number;
	memcpy ( &GetVariableNumber_Parms.DefaultValue, &DefaultValue, 0x10 );

	pFnGetVariableNumber->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVariableNumber, &GetVariableNumber_Parms, NULL );

	pFnGetVariableNumber->FunctionFlags |= 0x400;

	return GetVariableNumber_Parms.ReturnValue;
};

// Function IpDrv.WebRequest.GetVariableCount
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// FString                        VariableName                   ( CPF_Parm | CPF_NeedCtorLink )

int UWebRequest::GetVariableCount ( FString const& VariableName )
{
	static UFunction* pFnGetVariableCount = NULL;

	if ( ! pFnGetVariableCount )
		pFnGetVariableCount = UObject::FindObject< UFunction > ( L"Function IpDrv.WebRequest.GetVariableCount" );

	UWebRequest_execGetVariableCount_Parms GetVariableCount_Parms;
	memcpy ( &GetVariableCount_Parms.VariableName, &VariableName, 0x10 );

	pFnGetVariableCount->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVariableCount, &GetVariableCount_Parms, NULL );

	pFnGetVariableCount->FunctionFlags |= 0x400;

	return GetVariableCount_Parms.ReturnValue;
};

// Function IpDrv.WebRequest.GetVariable
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// FString                        ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// FString                        VariableName                   ( CPF_Parm | CPF_NeedCtorLink )
// FString                        DefaultValue                   ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

FString UWebRequest::GetVariable ( FString const& VariableName, FString const& DefaultValue )
{
	static UFunction* pFnGetVariable = NULL;

	if ( ! pFnGetVariable )
		pFnGetVariable = UObject::FindObject< UFunction > ( L"Function IpDrv.WebRequest.GetVariable" );

	UWebRequest_execGetVariable_Parms GetVariable_Parms;
	memcpy ( &GetVariable_Parms.VariableName, &VariableName, 0x10 );
	memcpy ( &GetVariable_Parms.DefaultValue, &DefaultValue, 0x10 );

	pFnGetVariable->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVariable, &GetVariable_Parms, NULL );

	pFnGetVariable->FunctionFlags |= 0x400;

	return GetVariable_Parms.ReturnValue;
};

// Function IpDrv.WebRequest.AddVariable
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// FString                        VariableName                   ( CPF_Parm | CPF_NeedCtorLink )
// FString                        Value                          ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )

void UWebRequest::AddVariable ( FString const& VariableName, FString const& Value )
{
	static UFunction* pFnAddVariable = NULL;

	if ( ! pFnAddVariable )
		pFnAddVariable = UObject::FindObject< UFunction > ( L"Function IpDrv.WebRequest.AddVariable" );

	UWebRequest_execAddVariable_Parms AddVariable_Parms;
	memcpy ( &AddVariable_Parms.VariableName, &VariableName, 0x10 );
	memcpy ( &AddVariable_Parms.Value, &Value, 0x10 );

	pFnAddVariable->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddVariable, &AddVariable_Parms, NULL );

	pFnAddVariable->FunctionFlags |= 0x400;
};

// Function IpDrv.WebRequest.GetHeaders
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// TArray<FString>                headers                        ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UWebRequest::GetHeaders ( TArray<FString>* headers )
{
	static UFunction* pFnGetHeaders = NULL;

	if ( ! pFnGetHeaders )
		pFnGetHeaders = UObject::FindObject< UFunction > ( L"Function IpDrv.WebRequest.GetHeaders" );

	UWebRequest_execGetHeaders_Parms GetHeaders_Parms;

	if ( headers )
		memcpy ( &GetHeaders_Parms.headers, headers, 0x10 );

	pFnGetHeaders->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetHeaders, &GetHeaders_Parms, NULL );

	pFnGetHeaders->FunctionFlags |= 0x400;

	if ( headers )
		memcpy ( headers, &GetHeaders_Parms.headers, 0x10 );
};

// Function IpDrv.WebRequest.GetHeader
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// FString                        ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// FString                        HeaderName                     ( CPF_Parm | CPF_NeedCtorLink )
// FString                        DefaultValue                   ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

FString UWebRequest::GetHeader ( FString const& HeaderName, FString const& DefaultValue )
{
	static UFunction* pFnGetHeader = NULL;

	if ( ! pFnGetHeader )
		pFnGetHeader = UObject::FindObject< UFunction > ( L"Function IpDrv.WebRequest.GetHeader" );

	UWebRequest_execGetHeader_Parms GetHeader_Parms;
	memcpy ( &GetHeader_Parms.HeaderName, &HeaderName, 0x10 );
	memcpy ( &GetHeader_Parms.DefaultValue, &DefaultValue, 0x10 );

	pFnGetHeader->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetHeader, &GetHeader_Parms, NULL );

	pFnGetHeader->FunctionFlags |= 0x400;

	return GetHeader_Parms.ReturnValue;
};

// Function IpDrv.WebRequest.AddHeader
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// FString                        HeaderName                     ( CPF_Parm | CPF_NeedCtorLink )
// FString                        Value                          ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )

void UWebRequest::AddHeader ( FString const& HeaderName, FString const& Value )
{
	static UFunction* pFnAddHeader = NULL;

	if ( ! pFnAddHeader )
		pFnAddHeader = UObject::FindObject< UFunction > ( L"Function IpDrv.WebRequest.AddHeader" );

	UWebRequest_execAddHeader_Parms AddHeader_Parms;
	memcpy ( &AddHeader_Parms.HeaderName, &HeaderName, 0x10 );
	memcpy ( &AddHeader_Parms.Value, &Value, 0x10 );

	pFnAddHeader->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddHeader, &AddHeader_Parms, NULL );

	pFnAddHeader->FunctionFlags |= 0x400;
};

// Function IpDrv.WebRequest.EncodeBase64
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// FString                        ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// FString                        Decoded                        ( CPF_Parm | CPF_NeedCtorLink )

FString UWebRequest::EncodeBase64 ( FString const& Decoded )
{
	static UFunction* pFnEncodeBase64 = NULL;

	if ( ! pFnEncodeBase64 )
		pFnEncodeBase64 = UObject::FindObject< UFunction > ( L"Function IpDrv.WebRequest.EncodeBase64" );

	UWebRequest_execEncodeBase64_Parms EncodeBase64_Parms;
	memcpy ( &EncodeBase64_Parms.Decoded, &Decoded, 0x10 );

	pFnEncodeBase64->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnEncodeBase64, &EncodeBase64_Parms, NULL );

	pFnEncodeBase64->FunctionFlags |= 0x400;

	return EncodeBase64_Parms.ReturnValue;
};

// Function IpDrv.WebRequest.DecodeBase64
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// FString                        ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// FString                        Encoded                        ( CPF_Parm | CPF_NeedCtorLink )

FString UWebRequest::DecodeBase64 ( FString const& Encoded )
{
	static UFunction* pFnDecodeBase64 = NULL;

	if ( ! pFnDecodeBase64 )
		pFnDecodeBase64 = UObject::FindObject< UFunction > ( L"Function IpDrv.WebRequest.DecodeBase64" );

	UWebRequest_execDecodeBase64_Parms DecodeBase64_Parms;
	memcpy ( &DecodeBase64_Parms.Encoded, &Encoded, 0x10 );

	pFnDecodeBase64->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDecodeBase64, &DecodeBase64_Parms, NULL );

	pFnDecodeBase64->FunctionFlags |= 0x400;

	return DecodeBase64_Parms.ReturnValue;
};



class UClass* UWebResponse::pClassPointer = NULL;

class UClass* UWebResponse::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class IpDrv.WebResponse" );

		return pClassPointer;
	};

// Function IpDrv.WebResponse.SentResponse
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UWebResponse::SentResponse ( )
{
	static UFunction* pFnSentResponse = NULL;

	if ( ! pFnSentResponse )
		pFnSentResponse = UObject::FindObject< UFunction > ( L"Function IpDrv.WebResponse.SentResponse" );

	UWebResponse_execSentResponse_Parms SentResponse_Parms;

	this->ProcessEvent ( pFnSentResponse, &SentResponse_Parms, NULL );

	return SentResponse_Parms.ReturnValue;
};

// Function IpDrv.WebResponse.SentText
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UWebResponse::SentText ( )
{
	static UFunction* pFnSentText = NULL;

	if ( ! pFnSentText )
		pFnSentText = UObject::FindObject< UFunction > ( L"Function IpDrv.WebResponse.SentText" );

	UWebResponse_execSentText_Parms SentText_Parms;

	this->ProcessEvent ( pFnSentText, &SentText_Parms, NULL );

	return SentText_Parms.ReturnValue;
};

// Function IpDrv.WebResponse.Redirect
// [0x00020002]
// Parameters infos:
// FString                        URL                            ( CPF_Parm | CPF_NeedCtorLink )

void UWebResponse::Redirect ( FString const& URL )
{
	static UFunction* pFnRedirect = NULL;

	if ( ! pFnRedirect )
		pFnRedirect = UObject::FindObject< UFunction > ( L"Function IpDrv.WebResponse.Redirect" );

	UWebResponse_execRedirect_Parms Redirect_Parms;
	memcpy ( &Redirect_Parms.URL, &URL, 0x10 );

	this->ProcessEvent ( pFnRedirect, &Redirect_Parms, NULL );
};

// Function IpDrv.WebResponse.SendStandardHeaders
// [0x00024002]
// Parameters infos:
// FString                        ContentType                    ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bCache                         ( CPF_OptionalParm | CPF_Parm )

void UWebResponse::SendStandardHeaders ( FString const& ContentType, unsigned long bCache )
{
	static UFunction* pFnSendStandardHeaders = NULL;

	if ( ! pFnSendStandardHeaders )
		pFnSendStandardHeaders = UObject::FindObject< UFunction > ( L"Function IpDrv.WebResponse.SendStandardHeaders" );

	UWebResponse_execSendStandardHeaders_Parms SendStandardHeaders_Parms;
	memcpy ( &SendStandardHeaders_Parms.ContentType, &ContentType, 0x10 );
	SendStandardHeaders_Parms.bCache = bCache;

	this->ProcessEvent ( pFnSendStandardHeaders, &SendStandardHeaders_Parms, NULL );
};

// Function IpDrv.WebResponse.HTTPError
// [0x00024002]
// Parameters infos:
// int                            ErrorNum                       ( CPF_Parm )
// FString                        Data                           ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

void UWebResponse::HTTPError ( int ErrorNum, FString const& Data )
{
	static UFunction* pFnHTTPError = NULL;

	if ( ! pFnHTTPError )
		pFnHTTPError = UObject::FindObject< UFunction > ( L"Function IpDrv.WebResponse.HTTPError" );

	UWebResponse_execHTTPError_Parms HTTPError_Parms;
	HTTPError_Parms.ErrorNum = ErrorNum;
	memcpy ( &HTTPError_Parms.Data, &Data, 0x10 );

	this->ProcessEvent ( pFnHTTPError, &HTTPError_Parms, NULL );
};

// Function IpDrv.WebResponse.SendHeaders
// [0x00020002]
// Parameters infos:

void UWebResponse::SendHeaders ( )
{
	static UFunction* pFnSendHeaders = NULL;

	if ( ! pFnSendHeaders )
		pFnSendHeaders = UObject::FindObject< UFunction > ( L"Function IpDrv.WebResponse.SendHeaders" );

	UWebResponse_execSendHeaders_Parms SendHeaders_Parms;

	this->ProcessEvent ( pFnSendHeaders, &SendHeaders_Parms, NULL );
};

// Function IpDrv.WebResponse.AddHeader
// [0x00024002]
// Parameters infos:
// FString                        Header                         ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bReplace                       ( CPF_OptionalParm | CPF_Parm )

void UWebResponse::AddHeader ( FString const& Header, unsigned long bReplace )
{
	static UFunction* pFnAddHeader = NULL;

	if ( ! pFnAddHeader )
		pFnAddHeader = UObject::FindObject< UFunction > ( L"Function IpDrv.WebResponse.AddHeader" );

	UWebResponse_execAddHeader_Parms AddHeader_Parms;
	memcpy ( &AddHeader_Parms.Header, &Header, 0x10 );
	AddHeader_Parms.bReplace = bReplace;

	this->ProcessEvent ( pFnAddHeader, &AddHeader_Parms, NULL );
};

// Function IpDrv.WebResponse.HTTPHeader
// [0x00020002]
// Parameters infos:
// FString                        Header                         ( CPF_Parm | CPF_NeedCtorLink )

void UWebResponse::HTTPHeader ( FString const& Header )
{
	static UFunction* pFnHTTPHeader = NULL;

	if ( ! pFnHTTPHeader )
		pFnHTTPHeader = UObject::FindObject< UFunction > ( L"Function IpDrv.WebResponse.HTTPHeader" );

	UWebResponse_execHTTPHeader_Parms HTTPHeader_Parms;
	memcpy ( &HTTPHeader_Parms.Header, &Header, 0x10 );

	this->ProcessEvent ( pFnHTTPHeader, &HTTPHeader_Parms, NULL );
};

// Function IpDrv.WebResponse.HTTPResponse
// [0x00020002]
// Parameters infos:
// FString                        Header                         ( CPF_Parm | CPF_NeedCtorLink )

void UWebResponse::HTTPResponse ( FString const& Header )
{
	static UFunction* pFnHTTPResponse = NULL;

	if ( ! pFnHTTPResponse )
		pFnHTTPResponse = UObject::FindObject< UFunction > ( L"Function IpDrv.WebResponse.HTTPResponse" );

	UWebResponse_execHTTPResponse_Parms HTTPResponse_Parms;
	memcpy ( &HTTPResponse_Parms.Header, &Header, 0x10 );

	this->ProcessEvent ( pFnHTTPResponse, &HTTPResponse_Parms, NULL );
};

// Function IpDrv.WebResponse.FailAuthentication
// [0x00020002]
// Parameters infos:
// FString                        Realm                          ( CPF_Parm | CPF_NeedCtorLink )

void UWebResponse::FailAuthentication ( FString const& Realm )
{
	static UFunction* pFnFailAuthentication = NULL;

	if ( ! pFnFailAuthentication )
		pFnFailAuthentication = UObject::FindObject< UFunction > ( L"Function IpDrv.WebResponse.FailAuthentication" );

	UWebResponse_execFailAuthentication_Parms FailAuthentication_Parms;
	memcpy ( &FailAuthentication_Parms.Realm, &Realm, 0x10 );

	this->ProcessEvent ( pFnFailAuthentication, &FailAuthentication_Parms, NULL );
};

// Function IpDrv.WebResponse.SendCachedFile
// [0x00024002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// FString                        Filename                       ( CPF_Parm | CPF_NeedCtorLink )
// FString                        ContentType                    ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UWebResponse::SendCachedFile ( FString const& Filename, FString const& ContentType )
{
	static UFunction* pFnSendCachedFile = NULL;

	if ( ! pFnSendCachedFile )
		pFnSendCachedFile = UObject::FindObject< UFunction > ( L"Function IpDrv.WebResponse.SendCachedFile" );

	UWebResponse_execSendCachedFile_Parms SendCachedFile_Parms;
	memcpy ( &SendCachedFile_Parms.Filename, &Filename, 0x10 );
	memcpy ( &SendCachedFile_Parms.ContentType, &ContentType, 0x10 );

	this->ProcessEvent ( pFnSendCachedFile, &SendCachedFile_Parms, NULL );

	return SendCachedFile_Parms.ReturnValue;
};

// Function IpDrv.WebResponse.SendBinary
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// int                            Count                          ( CPF_Parm )
// unsigned char                  B                              ( CPF_Parm )

void UWebResponse::eventSendBinary ( int Count, unsigned char* B )
{
	static UFunction* pFnSendBinary = NULL;

	if ( ! pFnSendBinary )
		pFnSendBinary = UObject::FindObject< UFunction > ( L"Function IpDrv.WebResponse.SendBinary" );

	UWebResponse_eventSendBinary_Parms SendBinary_Parms;
	SendBinary_Parms.Count = Count;
	memcpy ( &SendBinary_Parms.B, &B, 0xFF );

	this->ProcessEvent ( pFnSendBinary, &SendBinary_Parms, NULL );
};

// Function IpDrv.WebResponse.SendText
// [0x00024802] ( FUNC_Event )
// Parameters infos:
// FString                        Text                           ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bNoCRLF                        ( CPF_OptionalParm | CPF_Parm )

void UWebResponse::eventSendText ( FString const& Text, unsigned long bNoCRLF )
{
	static UFunction* pFnSendText = NULL;

	if ( ! pFnSendText )
		pFnSendText = UObject::FindObject< UFunction > ( L"Function IpDrv.WebResponse.SendText" );

	UWebResponse_eventSendText_Parms SendText_Parms;
	memcpy ( &SendText_Parms.Text, &Text, 0x10 );
	SendText_Parms.bNoCRLF = bNoCRLF;

	this->ProcessEvent ( pFnSendText, &SendText_Parms, NULL );
};

// Function IpDrv.WebResponse.Dump
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UWebResponse::Dump ( )
{
	static UFunction* pFnDump = NULL;

	if ( ! pFnDump )
		pFnDump = UObject::FindObject< UFunction > ( L"Function IpDrv.WebResponse.Dump" );

	UWebResponse_execDump_Parms Dump_Parms;

	pFnDump->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDump, &Dump_Parms, NULL );

	pFnDump->FunctionFlags |= 0x400;
};

// Function IpDrv.WebResponse.GetHTTPExpiration
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// FString                        ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            OffsetSeconds                  ( CPF_OptionalParm | CPF_Parm )

FString UWebResponse::GetHTTPExpiration ( int OffsetSeconds )
{
	static UFunction* pFnGetHTTPExpiration = NULL;

	if ( ! pFnGetHTTPExpiration )
		pFnGetHTTPExpiration = UObject::FindObject< UFunction > ( L"Function IpDrv.WebResponse.GetHTTPExpiration" );

	UWebResponse_execGetHTTPExpiration_Parms GetHTTPExpiration_Parms;
	GetHTTPExpiration_Parms.OffsetSeconds = OffsetSeconds;

	pFnGetHTTPExpiration->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetHTTPExpiration, &GetHTTPExpiration_Parms, NULL );

	pFnGetHTTPExpiration->FunctionFlags |= 0x400;

	return GetHTTPExpiration_Parms.ReturnValue;
};

// Function IpDrv.WebResponse.LoadParsedUHTM
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// FString                        ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// FString                        Filename                       ( CPF_Parm | CPF_NeedCtorLink )

FString UWebResponse::LoadParsedUHTM ( FString const& Filename )
{
	static UFunction* pFnLoadParsedUHTM = NULL;

	if ( ! pFnLoadParsedUHTM )
		pFnLoadParsedUHTM = UObject::FindObject< UFunction > ( L"Function IpDrv.WebResponse.LoadParsedUHTM" );

	UWebResponse_execLoadParsedUHTM_Parms LoadParsedUHTM_Parms;
	memcpy ( &LoadParsedUHTM_Parms.Filename, &Filename, 0x10 );

	pFnLoadParsedUHTM->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnLoadParsedUHTM, &LoadParsedUHTM_Parms, NULL );

	pFnLoadParsedUHTM->FunctionFlags |= 0x400;

	return LoadParsedUHTM_Parms.ReturnValue;
};

// Function IpDrv.WebResponse.IncludeBinaryFile
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// FString                        Filename                       ( CPF_Parm | CPF_NeedCtorLink )

bool UWebResponse::IncludeBinaryFile ( FString const& Filename )
{
	static UFunction* pFnIncludeBinaryFile = NULL;

	if ( ! pFnIncludeBinaryFile )
		pFnIncludeBinaryFile = UObject::FindObject< UFunction > ( L"Function IpDrv.WebResponse.IncludeBinaryFile" );

	UWebResponse_execIncludeBinaryFile_Parms IncludeBinaryFile_Parms;
	memcpy ( &IncludeBinaryFile_Parms.Filename, &Filename, 0x10 );

	pFnIncludeBinaryFile->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIncludeBinaryFile, &IncludeBinaryFile_Parms, NULL );

	pFnIncludeBinaryFile->FunctionFlags |= 0x400;

	return IncludeBinaryFile_Parms.ReturnValue;
};

// Function IpDrv.WebResponse.IncludeUHTM
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// FString                        Filename                       ( CPF_Parm | CPF_NeedCtorLink )

bool UWebResponse::IncludeUHTM ( FString const& Filename )
{
	static UFunction* pFnIncludeUHTM = NULL;

	if ( ! pFnIncludeUHTM )
		pFnIncludeUHTM = UObject::FindObject< UFunction > ( L"Function IpDrv.WebResponse.IncludeUHTM" );

	UWebResponse_execIncludeUHTM_Parms IncludeUHTM_Parms;
	memcpy ( &IncludeUHTM_Parms.Filename, &Filename, 0x10 );

	pFnIncludeUHTM->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIncludeUHTM, &IncludeUHTM_Parms, NULL );

	pFnIncludeUHTM->FunctionFlags |= 0x400;

	return IncludeUHTM_Parms.ReturnValue;
};

// Function IpDrv.WebResponse.ClearSubst
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UWebResponse::ClearSubst ( )
{
	static UFunction* pFnClearSubst = NULL;

	if ( ! pFnClearSubst )
		pFnClearSubst = UObject::FindObject< UFunction > ( L"Function IpDrv.WebResponse.ClearSubst" );

	UWebResponse_execClearSubst_Parms ClearSubst_Parms;

	pFnClearSubst->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClearSubst, &ClearSubst_Parms, NULL );

	pFnClearSubst->FunctionFlags |= 0x400;
};

// Function IpDrv.WebResponse.Subst
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// FString                        Variable                       ( CPF_Parm | CPF_NeedCtorLink )
// FString                        Value                          ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
// unsigned long                  bClear                         ( CPF_OptionalParm | CPF_Parm )

void UWebResponse::Subst ( FString const& Variable, FString const& Value, unsigned long bClear )
{
	static UFunction* pFnSubst = NULL;

	if ( ! pFnSubst )
		pFnSubst = UObject::FindObject< UFunction > ( L"Function IpDrv.WebResponse.Subst" );

	UWebResponse_execSubst_Parms Subst_Parms;
	memcpy ( &Subst_Parms.Variable, &Variable, 0x10 );
	memcpy ( &Subst_Parms.Value, &Value, 0x10 );
	Subst_Parms.bClear = bClear;

	pFnSubst->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSubst, &Subst_Parms, NULL );

	pFnSubst->FunctionFlags |= 0x400;
};

// Function IpDrv.WebResponse.FileExists
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// FString                        Filename                       ( CPF_Parm | CPF_NeedCtorLink )

bool UWebResponse::FileExists ( FString const& Filename )
{
	static UFunction* pFnFileExists = NULL;

	if ( ! pFnFileExists )
		pFnFileExists = UObject::FindObject< UFunction > ( L"Function IpDrv.WebResponse.FileExists" );

	UWebResponse_execFileExists_Parms FileExists_Parms;
	memcpy ( &FileExists_Parms.Filename, &Filename, 0x10 );

	pFnFileExists->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFileExists, &FileExists_Parms, NULL );

	pFnFileExists->FunctionFlags |= 0x400;

	return FileExists_Parms.ReturnValue;
};



class UClass* UWebApplication::pClassPointer = NULL;

class UClass* UWebApplication::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class IpDrv.WebApplication" );

		return pClassPointer;
	};

// Function IpDrv.WebApplication.PostQuery
// [0x00020000]
// Parameters infos:
// class UWebRequest*             Request                        ( CPF_Parm )
// class UWebResponse*            Response                       ( CPF_Parm )

void UWebApplication::PostQuery ( class UWebRequest* Request, class UWebResponse* Response )
{
	static UFunction* pFnPostQuery = NULL;

	if ( ! pFnPostQuery )
		pFnPostQuery = UObject::FindObject< UFunction > ( L"Function IpDrv.WebApplication.PostQuery" );

	UWebApplication_execPostQuery_Parms PostQuery_Parms;
	PostQuery_Parms.Request = Request;
	PostQuery_Parms.Response = Response;

	this->ProcessEvent ( pFnPostQuery, &PostQuery_Parms, NULL );
};

// Function IpDrv.WebApplication.Query
// [0x00020000]
// Parameters infos:
// class UWebRequest*             Request                        ( CPF_Parm )
// class UWebResponse*            Response                       ( CPF_Parm )

void UWebApplication::Query ( class UWebRequest* Request, class UWebResponse* Response )
{
	static UFunction* pFnQuery = NULL;

	if ( ! pFnQuery )
		pFnQuery = UObject::FindObject< UFunction > ( L"Function IpDrv.WebApplication.Query" );

	UWebApplication_execQuery_Parms Query_Parms;
	Query_Parms.Request = Request;
	Query_Parms.Response = Response;

	this->ProcessEvent ( pFnQuery, &Query_Parms, NULL );
};

// Function IpDrv.WebApplication.PreQuery
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UWebRequest*             Request                        ( CPF_Parm )
// class UWebResponse*            Response                       ( CPF_Parm )

bool UWebApplication::PreQuery ( class UWebRequest* Request, class UWebResponse* Response )
{
	static UFunction* pFnPreQuery = NULL;

	if ( ! pFnPreQuery )
		pFnPreQuery = UObject::FindObject< UFunction > ( L"Function IpDrv.WebApplication.PreQuery" );

	UWebApplication_execPreQuery_Parms PreQuery_Parms;
	PreQuery_Parms.Request = Request;
	PreQuery_Parms.Response = Response;

	this->ProcessEvent ( pFnPreQuery, &PreQuery_Parms, NULL );

	return PreQuery_Parms.ReturnValue;
};

// Function IpDrv.WebApplication.CleanupApp
// [0x00020002]
// Parameters infos:

void UWebApplication::CleanupApp ( )
{
	static UFunction* pFnCleanupApp = NULL;

	if ( ! pFnCleanupApp )
		pFnCleanupApp = UObject::FindObject< UFunction > ( L"Function IpDrv.WebApplication.CleanupApp" );

	UWebApplication_execCleanupApp_Parms CleanupApp_Parms;

	this->ProcessEvent ( pFnCleanupApp, &CleanupApp_Parms, NULL );
};

// Function IpDrv.WebApplication.Cleanup
// [0x00020001] ( FUNC_Final )
// Parameters infos:

void UWebApplication::Cleanup ( )
{
	static UFunction* pFnCleanup = NULL;

	if ( ! pFnCleanup )
		pFnCleanup = UObject::FindObject< UFunction > ( L"Function IpDrv.WebApplication.Cleanup" );

	UWebApplication_execCleanup_Parms Cleanup_Parms;

	this->ProcessEvent ( pFnCleanup, &Cleanup_Parms, NULL );
};

// Function IpDrv.WebApplication.Init
// [0x00020000]
// Parameters infos:

void UWebApplication::Init ( )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = UObject::FindObject< UFunction > ( L"Function IpDrv.WebApplication.Init" );

	UWebApplication_execInit_Parms Init_Parms;

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );
};



class UClass* AWebServer::pClassPointer = NULL;

class UClass* AWebServer::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class IpDrv.WebServer" );

		return pClassPointer;
	};

// Function IpDrv.WebServer.GetApplication
// [0x00420002]
// Parameters infos:
// class UWebApplication*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// FString                        URI                            ( CPF_Parm | CPF_NeedCtorLink )
// FString                        SubURI                         ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

class UWebApplication* AWebServer::GetApplication ( FString const& URI, FString* SubURI )
{
	static UFunction* pFnGetApplication = NULL;

	if ( ! pFnGetApplication )
		pFnGetApplication = UObject::FindObject< UFunction > ( L"Function IpDrv.WebServer.GetApplication" );

	AWebServer_execGetApplication_Parms GetApplication_Parms;
	memcpy ( &GetApplication_Parms.URI, &URI, 0x10 );

	if ( SubURI )
		memcpy ( &GetApplication_Parms.SubURI, SubURI, 0x10 );

	this->ProcessEvent ( pFnGetApplication, &GetApplication_Parms, NULL );

	if ( SubURI )
		memcpy ( SubURI, &GetApplication_Parms.SubURI, 0x10 );

	return GetApplication_Parms.ReturnValue;
};

// Function IpDrv.WebServer.LostChild
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AActor*                  C                              ( CPF_Parm )

void AWebServer::eventLostChild ( class AActor* C )
{
	static UFunction* pFnLostChild = NULL;

	if ( ! pFnLostChild )
		pFnLostChild = UObject::FindObject< UFunction > ( L"Function IpDrv.WebServer.LostChild" );

	AWebServer_eventLostChild_Parms LostChild_Parms;
	LostChild_Parms.C = C;

	this->ProcessEvent ( pFnLostChild, &LostChild_Parms, NULL );
};

// Function IpDrv.WebServer.GainedChild
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AActor*                  C                              ( CPF_Parm )

void AWebServer::eventGainedChild ( class AActor* C )
{
	static UFunction* pFnGainedChild = NULL;

	if ( ! pFnGainedChild )
		pFnGainedChild = UObject::FindObject< UFunction > ( L"Function IpDrv.WebServer.GainedChild" );

	AWebServer_eventGainedChild_Parms GainedChild_Parms;
	GainedChild_Parms.C = C;

	this->ProcessEvent ( pFnGainedChild, &GainedChild_Parms, NULL );
};

// Function IpDrv.WebServer.Destroyed
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AWebServer::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = UObject::FindObject< UFunction > ( L"Function IpDrv.WebServer.Destroyed" );

	AWebServer_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function IpDrv.WebServer.PostBeginPlay
// [0x00020002]
// Parameters infos:

void AWebServer::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = UObject::FindObject< UFunction > ( L"Function IpDrv.WebServer.PostBeginPlay" );

	AWebServer_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};



class UClass* UHelloWeb::pClassPointer = NULL;

class UClass* UHelloWeb::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class IpDrv.HelloWeb" );

		return pClassPointer;
	};

// Function IpDrv.HelloWeb.Query
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UWebRequest*             Request                        ( CPF_Parm )
// class UWebResponse*            Response                       ( CPF_Parm )

void UHelloWeb::eventQuery ( class UWebRequest* Request, class UWebResponse* Response )
{
	static UFunction* pFnQuery = NULL;

	if ( ! pFnQuery )
		pFnQuery = UObject::FindObject< UFunction > ( L"Function IpDrv.HelloWeb.Query" );

	UHelloWeb_eventQuery_Parms Query_Parms;
	Query_Parms.Request = Request;
	Query_Parms.Response = Response;

	this->ProcessEvent ( pFnQuery, &Query_Parms, NULL );
};

// Function IpDrv.HelloWeb.Init
// [0x00020002]
// Parameters infos:

void UHelloWeb::Init ( )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = UObject::FindObject< UFunction > ( L"Function IpDrv.HelloWeb.Init" );

	UHelloWeb_execInit_Parms Init_Parms;

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );
};



class UClass* UImageServer::pClassPointer = NULL;

class UClass* UImageServer::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class IpDrv.ImageServer" );

		return pClassPointer;
	};

// Function IpDrv.ImageServer.Query
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UWebRequest*             Request                        ( CPF_Parm )
// class UWebResponse*            Response                       ( CPF_Parm )

void UImageServer::eventQuery ( class UWebRequest* Request, class UWebResponse* Response )
{
	static UFunction* pFnQuery = NULL;

	if ( ! pFnQuery )
		pFnQuery = UObject::FindObject< UFunction > ( L"Function IpDrv.ImageServer.Query" );

	UImageServer_eventQuery_Parms Query_Parms;
	Query_Parms.Request = Request;
	Query_Parms.Response = Response;

	this->ProcessEvent ( pFnQuery, &Query_Parms, NULL );
};



class UClass* UIniLocPatcherMcp::pClassPointer = NULL;

class UClass* UIniLocPatcherMcp::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class IpDrv.IniLocPatcherMcp" );

		return pClassPointer;
	};

// Function IpDrv.IniLocPatcherMcp.ClearCachedFiles
// [0x00020002]
// Parameters infos:

void UIniLocPatcherMcp::ClearCachedFiles ( )
{
	static UFunction* pFnClearCachedFiles = NULL;

	if ( ! pFnClearCachedFiles )
		pFnClearCachedFiles = UObject::FindObject< UFunction > ( L"Function IpDrv.IniLocPatcherMcp.ClearCachedFiles" );

	UIniLocPatcherMcp_execClearCachedFiles_Parms ClearCachedFiles_Parms;

	this->ProcessEvent ( pFnClearCachedFiles, &ClearCachedFiles_Parms, NULL );
};

// Function IpDrv.IniLocPatcherMcp.ClearReadFileDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         ReadTitleFileCompleteDelegate  ( CPF_Parm | CPF_NeedCtorLink )

void UIniLocPatcherMcp::ClearReadFileDelegate ( struct FScriptDelegate ReadTitleFileCompleteDelegate )
{
	static UFunction* pFnClearReadFileDelegate = NULL;

	if ( ! pFnClearReadFileDelegate )
		pFnClearReadFileDelegate = UObject::FindObject< UFunction > ( L"Function IpDrv.IniLocPatcherMcp.ClearReadFileDelegate" );

	UIniLocPatcherMcp_execClearReadFileDelegate_Parms ClearReadFileDelegate_Parms;
	memcpy ( &ClearReadFileDelegate_Parms.ReadTitleFileCompleteDelegate, &ReadTitleFileCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearReadFileDelegate, &ClearReadFileDelegate_Parms, NULL );
};

// Function IpDrv.IniLocPatcherMcp.AddReadFileDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         ReadTitleFileCompleteDelegate  ( CPF_Parm | CPF_NeedCtorLink )

void UIniLocPatcherMcp::AddReadFileDelegate ( struct FScriptDelegate ReadTitleFileCompleteDelegate )
{
	static UFunction* pFnAddReadFileDelegate = NULL;

	if ( ! pFnAddReadFileDelegate )
		pFnAddReadFileDelegate = UObject::FindObject< UFunction > ( L"Function IpDrv.IniLocPatcherMcp.AddReadFileDelegate" );

	UIniLocPatcherMcp_execAddReadFileDelegate_Parms AddReadFileDelegate_Parms;
	memcpy ( &AddReadFileDelegate_Parms.ReadTitleFileCompleteDelegate, &ReadTitleFileCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddReadFileDelegate, &AddReadFileDelegate_Parms, NULL );
};

// Function IpDrv.IniLocPatcherMcp.OnReadFileComplete
// [0x00020002]
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// FString                        Filename                       ( CPF_Parm | CPF_NeedCtorLink )

void UIniLocPatcherMcp::OnReadFileComplete ( unsigned long bWasSuccessful, FString const& Filename )
{
	static UFunction* pFnOnReadFileComplete = NULL;

	if ( ! pFnOnReadFileComplete )
		pFnOnReadFileComplete = UObject::FindObject< UFunction > ( L"Function IpDrv.IniLocPatcherMcp.OnReadFileComplete" );

	UIniLocPatcherMcp_execOnReadFileComplete_Parms OnReadFileComplete_Parms;
	OnReadFileComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnReadFileComplete_Parms.Filename, &Filename, 0x10 );

	this->ProcessEvent ( pFnOnReadFileComplete, &OnReadFileComplete_Parms, NULL );
};

// Function IpDrv.IniLocPatcherMcp.DownloadFiles
// [0x00020002]
// Parameters infos:

void UIniLocPatcherMcp::DownloadFiles ( )
{
	static UFunction* pFnDownloadFiles = NULL;

	if ( ! pFnDownloadFiles )
		pFnDownloadFiles = UObject::FindObject< UFunction > ( L"Function IpDrv.IniLocPatcherMcp.DownloadFiles" );

	UIniLocPatcherMcp_execDownloadFiles_Parms DownloadFiles_Parms;

	this->ProcessEvent ( pFnDownloadFiles, &DownloadFiles_Parms, NULL );
};

// Function IpDrv.IniLocPatcherMcp.Init
// [0x00020002]
// Parameters infos:

void UIniLocPatcherMcp::Init ( )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = UObject::FindObject< UFunction > ( L"Function IpDrv.IniLocPatcherMcp.Init" );

	UIniLocPatcherMcp_execInit_Parms Init_Parms;

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );
};



class UClass* AWebConnection::pClassPointer = NULL;

class UClass* AWebConnection::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( L"Class IpDrv.WebConnection" );

		return pClassPointer;
	};

// Function IpDrv.WebConnection.IsHanging
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AWebConnection::IsHanging ( )
{
	static UFunction* pFnIsHanging = NULL;

	if ( ! pFnIsHanging )
		pFnIsHanging = UObject::FindObject< UFunction > ( L"Function IpDrv.WebConnection.IsHanging" );

	AWebConnection_execIsHanging_Parms IsHanging_Parms;

	this->ProcessEvent ( pFnIsHanging, &IsHanging_Parms, NULL );

	return IsHanging_Parms.ReturnValue;
};

// Function IpDrv.WebConnection.Cleanup
// [0x00020002]
// Parameters infos:

void AWebConnection::Cleanup ( )
{
	static UFunction* pFnCleanup = NULL;

	if ( ! pFnCleanup )
		pFnCleanup = UObject::FindObject< UFunction > ( L"Function IpDrv.WebConnection.Cleanup" );

	AWebConnection_execCleanup_Parms Cleanup_Parms;

	this->ProcessEvent ( pFnCleanup, &Cleanup_Parms, NULL );
};

// Function IpDrv.WebConnection.CheckRawBytes
// [0x00020002]
// Parameters infos:

void AWebConnection::CheckRawBytes ( )
{
	static UFunction* pFnCheckRawBytes = NULL;

	if ( ! pFnCheckRawBytes )
		pFnCheckRawBytes = UObject::FindObject< UFunction > ( L"Function IpDrv.WebConnection.CheckRawBytes" );

	AWebConnection_execCheckRawBytes_Parms CheckRawBytes_Parms;

	this->ProcessEvent ( pFnCheckRawBytes, &CheckRawBytes_Parms, NULL );
};

// Function IpDrv.WebConnection.EndOfHeaders
// [0x00020002]
// Parameters infos:

void AWebConnection::EndOfHeaders ( )
{
	static UFunction* pFnEndOfHeaders = NULL;

	if ( ! pFnEndOfHeaders )
		pFnEndOfHeaders = UObject::FindObject< UFunction > ( L"Function IpDrv.WebConnection.EndOfHeaders" );

	AWebConnection_execEndOfHeaders_Parms EndOfHeaders_Parms;

	this->ProcessEvent ( pFnEndOfHeaders, &EndOfHeaders_Parms, NULL );
};

// Function IpDrv.WebConnection.CreateResponseObject
// [0x00020002]
// Parameters infos:

void AWebConnection::CreateResponseObject ( )
{
	static UFunction* pFnCreateResponseObject = NULL;

	if ( ! pFnCreateResponseObject )
		pFnCreateResponseObject = UObject::FindObject< UFunction > ( L"Function IpDrv.WebConnection.CreateResponseObject" );

	AWebConnection_execCreateResponseObject_Parms CreateResponseObject_Parms;

	this->ProcessEvent ( pFnCreateResponseObject, &CreateResponseObject_Parms, NULL );
};

// Function IpDrv.WebConnection.ProcessPost
// [0x00020002]
// Parameters infos:
// FString                        S                              ( CPF_Parm | CPF_NeedCtorLink )

void AWebConnection::ProcessPost ( FString const& S )
{
	static UFunction* pFnProcessPost = NULL;

	if ( ! pFnProcessPost )
		pFnProcessPost = UObject::FindObject< UFunction > ( L"Function IpDrv.WebConnection.ProcessPost" );

	AWebConnection_execProcessPost_Parms ProcessPost_Parms;
	memcpy ( &ProcessPost_Parms.S, &S, 0x10 );

	this->ProcessEvent ( pFnProcessPost, &ProcessPost_Parms, NULL );
};

// Function IpDrv.WebConnection.ProcessGet
// [0x00020002]
// Parameters infos:
// FString                        S                              ( CPF_Parm | CPF_NeedCtorLink )

void AWebConnection::ProcessGet ( FString const& S )
{
	static UFunction* pFnProcessGet = NULL;

	if ( ! pFnProcessGet )
		pFnProcessGet = UObject::FindObject< UFunction > ( L"Function IpDrv.WebConnection.ProcessGet" );

	AWebConnection_execProcessGet_Parms ProcessGet_Parms;
	memcpy ( &ProcessGet_Parms.S, &S, 0x10 );

	this->ProcessEvent ( pFnProcessGet, &ProcessGet_Parms, NULL );
};

// Function IpDrv.WebConnection.ProcessHead
// [0x00020002]
// Parameters infos:
// FString                        S                              ( CPF_Parm | CPF_NeedCtorLink )

void AWebConnection::ProcessHead ( FString const& S )
{
	static UFunction* pFnProcessHead = NULL;

	if ( ! pFnProcessHead )
		pFnProcessHead = UObject::FindObject< UFunction > ( L"Function IpDrv.WebConnection.ProcessHead" );

	AWebConnection_execProcessHead_Parms ProcessHead_Parms;
	memcpy ( &ProcessHead_Parms.S, &S, 0x10 );

	this->ProcessEvent ( pFnProcessHead, &ProcessHead_Parms, NULL );
};

// Function IpDrv.WebConnection.ReceivedLine
// [0x00020002]
// Parameters infos:
// FString                        S                              ( CPF_Parm | CPF_NeedCtorLink )

void AWebConnection::ReceivedLine ( FString const& S )
{
	static UFunction* pFnReceivedLine = NULL;

	if ( ! pFnReceivedLine )
		pFnReceivedLine = UObject::FindObject< UFunction > ( L"Function IpDrv.WebConnection.ReceivedLine" );

	AWebConnection_execReceivedLine_Parms ReceivedLine_Parms;
	memcpy ( &ReceivedLine_Parms.S, &S, 0x10 );

	this->ProcessEvent ( pFnReceivedLine, &ReceivedLine_Parms, NULL );
};

// Function IpDrv.WebConnection.ReceivedText
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// FString                        Text                           ( CPF_Parm | CPF_NeedCtorLink )

void AWebConnection::eventReceivedText ( FString const& Text )
{
	static UFunction* pFnReceivedText = NULL;

	if ( ! pFnReceivedText )
		pFnReceivedText = UObject::FindObject< UFunction > ( L"Function IpDrv.WebConnection.ReceivedText" );

	AWebConnection_eventReceivedText_Parms ReceivedText_Parms;
	memcpy ( &ReceivedText_Parms.Text, &Text, 0x10 );

	this->ProcessEvent ( pFnReceivedText, &ReceivedText_Parms, NULL );
};

// Function IpDrv.WebConnection.Timer
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AWebConnection::eventTimer ( )
{
	static UFunction* pFnTimer = NULL;

	if ( ! pFnTimer )
		pFnTimer = UObject::FindObject< UFunction > ( L"Function IpDrv.WebConnection.Timer" );

	AWebConnection_eventTimer_Parms Timer_Parms;

	this->ProcessEvent ( pFnTimer, &Timer_Parms, NULL );
};

// Function IpDrv.WebConnection.Closed
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AWebConnection::eventClosed ( )
{
	static UFunction* pFnClosed = NULL;

	if ( ! pFnClosed )
		pFnClosed = UObject::FindObject< UFunction > ( L"Function IpDrv.WebConnection.Closed" );

	AWebConnection_eventClosed_Parms Closed_Parms;

	this->ProcessEvent ( pFnClosed, &Closed_Parms, NULL );
};

// Function IpDrv.WebConnection.Accepted
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AWebConnection::eventAccepted ( )
{
	static UFunction* pFnAccepted = NULL;

	if ( ! pFnAccepted )
		pFnAccepted = UObject::FindObject< UFunction > ( L"Function IpDrv.WebConnection.Accepted" );

	AWebConnection_eventAccepted_Parms Accepted_Parms;

	this->ProcessEvent ( pFnAccepted, &Accepted_Parms, NULL );
};



#undef LESDK_IN_GENERATED

#ifdef _MSC_VER
	#pragma pack ( pop )
#endif
