/*
#############################################################################################
# Mass Effect 3 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.5_Beta-Rev.60-MELE
# ========================================================================================= #
# File: SFXOnlineFoundation_structs.hpp
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
# Script Structs
# ========================================================================================= #
*/

// ScriptStruct SFXOnlineFoundation.ISFXOnlineComponentCommerce.BWOfferId
// 0x0004
struct FBWOfferId
{
	int                                                nID;                                              		// 0x0000 (0x0004) [0x0000000000100000]              
};

// ScriptStruct SFXOnlineFoundation.ISFXOnlineComponentCommerce.BWOfferInfo
// 0x0048
struct FBWOfferInfo
{
	FString                                            sTitle;                                           		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	FString                                            sShortDescription;                                		// 0x0010 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	FString                                            sLongDescription;                                 		// 0x0020 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	FString                                            sPrice;                                           		// 0x0030 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FBWOfferId                                  Id;                                               		// 0x0040 (0x0004) [0x0000000000100000]              
	int                                                nPrice;                                           		// 0x0044 (0x0004) [0x0000000000100000]              
};

// ScriptStruct SFXOnlineFoundation.ISFXOnlineComponentCommerce.BWEntitlementId
// 0x0004
struct FBWEntitlementId
{
	int                                                nID;                                              		// 0x0000 (0x0004) [0x0000000000100000]              
};

// ScriptStruct SFXOnlineFoundation.ISFXOnlineComponentCommerce.BWEntitlementToken
// 0x0030
struct FBWEntitlementToken
{
	FString                                            sKey;                                             		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	FString                                            sName;                                            		// 0x0010 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	FString                                            sValue;                                           		// 0x0020 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXOnlineFoundation.ISFXOnlineComponentCommerce.BWEntitlementInfo
// 0x0014
struct FBWEntitlementInfo
{
	TArray<struct FBWEntitlementToken>                 sTokens;                                          		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FBWEntitlementId                            Id;                                               		// 0x0010 (0x0004) [0x0000000000100000]              
};

// ScriptStruct SFXOnlineFoundation.ISFXOnlineComponentCommerce.BWConsumableId
// 0x0004
struct FBWConsumableId
{
	int                                                nID;                                              		// 0x0000 (0x0004) [0x0000000000100000]              
};

// ScriptStruct SFXOnlineFoundation.ISFXOnlineComponentCommerce.BWConsumableInfo
// 0x0008
struct FBWConsumableInfo
{
	struct FBWConsumableId                             Id;                                               		// 0x0000 (0x0004) [0x0000000000100000]              
	int                                                nCopies;                                          		// 0x0004 (0x0004) [0x0000000000100000]              
};

// ScriptStruct SFXOnlineFoundation.ISFXOnlineComponentGalaxyAtWar.MessageEntry
// 0x0044
struct FMessageEntry
{
	FString                                            SourceName;                                       		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	FString                                            param1;                                           		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	FString                                            param2;                                           		// 0x0020 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	FString                                            param3;                                           		// 0x0030 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                messageId;                                        		// 0x0040 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXOnlineFoundation.ISFXOnlineComponentGalaxyAtWar.AttributeMapEntry
// 0x0014
struct FAttributeMapEntry
{
	FString                                            Value;                                            		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                EntryId;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXOnlineFoundation.ISFXOnlineComponentGalaxyAtWar.MapEntry
// 0x0008
struct FMapEntry
{
	int                                                EntryId;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                IncreaseValue;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineDefine.MPDLCInfo
// 0x0018
struct FMPDLCInfo
{
	TArray<FString>                                    MapPackageNames;                                  		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                ModuleID;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                PrettyName;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineDefine.SFXOnlineRankNotification
// 0x0018
struct FSFXOnlineRankNotification
{
	FString                                            FriendPersonaName;                                		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                MapId;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      bBeaten : 1;                                      		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineDefine.LeaderboardColumn
// 0x0044
struct FLeaderboardColumn
{
	FString                                            Heading;                                          		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	FString                                            sMetaData;                                        		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	FString                                            HeaderMovieClip;                                  		// 0x0020 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	FString                                            RowEntryMovieClip;                                		// 0x0030 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Width_Px;                                         		// 0x0040 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineDefine.LeaderboardRecord
// 0x001C
struct FLeaderboardRecord
{
	struct FUniqueNetId                                uidEntity;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	TArray<FString>                                    sRecordData;                                      		// 0x0008 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                nRank;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineDefine.LeaderboardStatScopeValuePair
// 0x0014
struct FLeaderboardStatScopeValuePair
{
	FString                                            KeyScope;                                         		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Value;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineDefine.LeaderboardStatScope
// 0x0010
struct FLeaderboardStatScope
{
	TArray<struct FLeaderboardStatScopeValuePair>      KeyScopePairs;                                    		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineDefine.SFXOnlineErrorMappingEntry
// 0x0012
struct FSFXOnlineErrorMappingEntry
{
	FString                                            LocalizationKey;                                  		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      ErrorContext;                                     		// 0x0010 (0x0001) [0x0000000000000000]              
	unsigned char                                      errorCode;                                        		// 0x0011 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineDefine.SFXOnline_OfferID
// 0x0008
struct FSFXOnline_OfferID
{
	int                                                nHigh;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nLow;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineDefine.SFXOfferDescriptor
// 0x0064
struct FSFXOfferDescriptor
{
	FString                                            Name;                                             		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	FString                                            Description;                                      		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	FString                                            Image;                                            		// 0x0020 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	FString                                            grantEntitlementName;                             		// 0x0030 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	FString                                            grantEntitlementGroup;                            		// 0x0040 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FSFXOnline_OfferID                          externalId;                                       		// 0x0050 (0x0008) [0x0000000000000000]              
	int                                                Price;                                            		// 0x0058 (0x0004) [0x0000000000000000]              
	int                                                internalId;                                       		// 0x005C (0x0004) [0x0000000000000000]              
	unsigned long                                      UserHasIt : 1;                                    		// 0x0060 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXOnlineFoundation.ISFXOnlineComponentLeaderboard.LeaderboardDefinition
// 0x0018
struct FLeaderboardDefinition
{
	FString                                            sPrettyName;                                      		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                nID;                                              		// 0x0010 (0x0004) [0x0000000000100000]              
	unsigned long                                      bFriends : 1;                                     		// 0x0014 (0x0004) [0x0000000000100000] [0x00000001] 
};

// ScriptStruct SFXOnlineFoundation.ISFXOnlineComponentLeaderboard.PatchLeaderboardDefinitionExtra
// 0x000C
struct FPatchLeaderboardDefinitionExtra
{
	int                                                nID;                                              		// 0x0000 (0x0004) [0x0000000000100000]              
	int                                                srTitleStrRef;                                    		// 0x0004 (0x0004) [0x0000000000100000]              
	unsigned long                                      bUsesLocalString : 1;                             		// 0x0008 (0x0004) [0x0000000000100000] [0x00000001] 
};

// ScriptStruct SFXOnlineFoundation.ISFXOnlineComponentLeaderboard.LeaderboardMapGroup
// 0x0020
struct FLeaderboardMapGroup
{
	FString                                            MapName;                                          		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray<struct FLeaderboardDefinition>              Entries;                                          		// 0x0010 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXOnlineFoundation.ISFXOnlineComponentLeaderboard.RankBypassNotification
// 0x0014
struct FRankBypassNotification
{
	FString                                            sEntityName;                                      		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                srMessage;                                        		// 0x0010 (0x0004) [0x0000000000100000]              
};

// ScriptStruct SFXOnlineFoundation.ISFXOnlineComponentLogin.SFXOnlineAccountCountryListItem
// 0x0020
struct FSFXOnlineAccountCountryListItem
{
	FString                                            ISOCode;                                          		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	FString                                            Description;                                      		// 0x0010 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXOnlineFoundation.ISFXOnlineComponentNotification.SFXOnlineDLCInfo
// 0x0094
struct FSFXOnlineDLCInfo
{
	FString                                            Name;                                             		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	FString                                            Description;                                      		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	FString                                            entitlementGroup;                                 		// 0x0020 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	FString                                            entitlementName;                                  		// 0x0030 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	FString                                            grantEntitlementGroup;                            		// 0x0040 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	FString                                            grantEntitlementName;                             		// 0x0050 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	FString                                            Image;                                            		// 0x0060 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	FString                                            offerKey;                                         		// 0x0070 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FSFXOnline_OfferID                          externalId;                                       		// 0x0080 (0x0008) [0x0000000000000000]              
	int                                                internalId;                                       		// 0x0088 (0x0004) [0x0000000000000000]              
	int                                                Price;                                            		// 0x008C (0x0004) [0x0000000000000000]              
	unsigned long                                      isEntitled : 1;                                   		// 0x0090 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXOnlineFoundation.ISFXOnlineComponentNotification.SFXOnlineEntitlementLookupInfo
// 0x0044
struct FSFXOnlineEntitlementLookupInfo
{
	struct FBWEntitlementInfo                          BWEntitlement;                                    		// 0x0000 (0x0014) [0x0000000000500000]              ( CPF_NeedCtorLink )
	FString                                            sGroupName;                                       		// 0x0014 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	FString                                            sEntitlementName;                                 		// 0x0024 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	FString                                            sProductId;                                       		// 0x0034 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXOnlineFoundation.ISFXOnlineComponentNotification.SFXOnlineMOTDInfo
// 0x0041
struct FSFXOnlineMOTDInfo
{
	FString                                            Message;                                          		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	FString                                            Title;                                            		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	FString                                            Image;                                            		// 0x0020 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                TrackingID;                                       		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                Priority;                                         		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                BWEntId;                                          		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                offerId;                                          		// 0x003C (0x0004) [0x0000000000000000]              
	unsigned char                                      Type;                                             		// 0x0040 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXOnlineFoundation.ISFXOnlineComponentTelemetry.TelemetryAttribute
// 0x002D
struct FTelemetryAttribute
{
	FString                                            Name;                                             		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	FString                                            sData;                                            		// 0x0010 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                nData;                                            		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              fData;                                            		// 0x0024 (0x0004) [0x0000000000000000]              
	unsigned long                                      bData : 1;                                        		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bRawJSON : 1;                                     		// 0x0028 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned char                                      Type;                                             		// 0x002C (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineBlazeJobUtilities.SettingsPair
// 0x0020
struct FSettingsPair
{
	FString                                            Key;                                              		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	FString                                            Value;                                            		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineComponent.SFXOnlineSubscriberEventType
// 0x0009
struct FSFXOnlineSubscriberEventType
{
	struct SFXName                                     EventCallback;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned char                                      EventType;                                        		// 0x0008 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineComponentBlazeGame.InviteData
// 0x0010
struct FInviteData
{
	TArray<struct FScriptDelegate>                     InviteDelegates;                                  		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineComponentBlazeLeaderboard.LeaderboardId
// 0x0020
struct FLeaderboardId
{
	FString                                            sLbName;                                          		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FLeaderboardStatScope                       Scope;                                            		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineComponentBlazeLeaderboard.BlazeRequest
// 0x0034
struct FBlazeRequest
{
	struct FUniqueNetId                                pUniquePlayerId;                                  		// 0x0000 (0x0008) [0x0000000000100000]              
	struct FLeaderboardStatScope                       Scope;                                            		// 0x0008 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	FPointer                                           pJobId;                                           		// 0x0018 (0x0008) [0x0000000000101000]              ( CPF_Native )
	FPointer                                           pExternalData;                                    		// 0x0020 (0x0008) [0x0000000000101000]              ( CPF_Native )
	int                                                nRequestedRecordsStartRank;                       		// 0x0028 (0x0004) [0x0000000000100000]              
	int                                                nRequestedRecordsRange;                           		// 0x002C (0x0004) [0x0000000000100000]              
	unsigned long                                      bRequestedCenteredData : 1;                       		// 0x0030 (0x0004) [0x0000000000100000] [0x00000001] 
	unsigned long                                      bRequestedFriendData : 1;                         		// 0x0030 (0x0004) [0x0000000000100000] [0x00000002] 
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineComponentBlazeLeaderboard.LeaderboardNameFormula
// 0x0014
struct FLeaderboardNameFormula
{
	FString                                            Name;                                             		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      AppendLocaleCode : 1;                             		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineComponentBlazeLeaderboard.LeaderboardScopeDefinition
// 0x0030
struct FLeaderboardScopeDefinition
{
	FString                                            KeyScope;                                         		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray<struct FQWord>                              StartKeyScopeValue;                               		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray<struct FQWord>                              EndKeyScopeValue;                                 		// 0x0020 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineComponentBlazeLeaderboard.RankChangeNotificationRawData
// 0x002C
struct FRankChangeNotificationRawData
{
	FString                                            sPreviousFriendRankBlob;                          		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray<struct FLeaderboardRecord>                  aRankResults;                                     		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                nPreviousLocalUserRank;                           		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                srFriendBeatMe;                                   		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                srFriendBeatByMe;                                 		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.AutoConnectAccount
// 0x0020
struct FAutoConnectAccount
{
	FString                                            email;                                            		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	FString                                            Password;                                         		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineComponentBlazeMessaging.BlazeMsgRequest
// 0x0019
struct FBlazeMsgRequest
{
	TArray<FString>                                    Params;                                           		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	FPointer                                           pJobId;                                           		// 0x0010 (0x0008) [0x0000000000101000]              ( CPF_Native )
	unsigned char                                      MessageType;                                      		// 0x0018 (0x0001) [0x0000000000100000]              
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineComponentBlazeStats.BlazeStatsRequest
// 0x002C
struct FBlazeStatsRequest
{
	struct FUniqueNetId                                pUniquePlayerId;                                  		// 0x0000 (0x0008) [0x0000000000100000]              
	struct FLeaderboardStatScope                       Scope;                                            		// 0x0008 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	FPointer                                           pJobId;                                           		// 0x0018 (0x0008) [0x0000000000101000]              ( CPF_Native )
	FPointer                                           pExternalData;                                    		// 0x0020 (0x0008) [0x0000000000101000]              ( CPF_Native )
	int                                                nRequestedRecordsRange;                           		// 0x0028 (0x0004) [0x0000000000100000]              
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineComponentImageManager.SFXOnlineImageRequest
// 0x0024
struct FSFXOnlineImageRequest
{
	FString                                            mImageName;                                       		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USFXOnlineJobHTTPRequest*                    mJob;                                             		// 0x0010 (0x0008) [0x0000000000000000]              
	class UTexture2D*                                  mDynamicImage;                                    		// 0x0018 (0x0008) [0x0000000000000000]              
	unsigned long                                      mCompleted : 1;                                   		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineComponentOrigin.PCFriend
// 0x0068
struct FPCFriend
{
	struct FQWord                                      FriendID;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FQWord                                      PersonaId;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	FString                                            FriendName;                                       		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	FString                                            AvatarID;                                         		// 0x0020 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	FString                                            Title;                                            		// 0x0030 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	FString                                            TitleId;                                          		// 0x0040 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	FString                                            Group;                                            		// 0x0050 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                PresenceState;                                    		// 0x0060 (0x0004) [0x0000000000000000]              
	int                                                FriendState;                                      		// 0x0064 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.SFXPS3_MinimumAgeData
// 0x0014
struct FSFXPS3_MinimumAgeData
{
	FString                                            Country;                                          		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                MinimumAge;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.SFXPS3_BootCheckData
// 0x0028
struct FSFXPS3_BootCheckData
{
	FString                                            DirName;                                          		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Type;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                Attributes;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                hddFreeSizeKB;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                sizeKB;                                           		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                sysSizeKB;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                Commerce2Userdata;                                		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.SFXOnlineXenonCustomPlayerListButton
// 0x0011
struct FSFXOnlineXenonCustomPlayerListButton
{
	FString                                            CustomText;                                       		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      Type;                                             		// 0x0010 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.CachedLoginState
// 0x0011
struct FCachedLoginState
{
	struct FUniqueNetId                                OnlineXuid;                                       		// 0x0000 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FUniqueNetId                                OfflineXuid;                                      		// 0x0008 (0x0008) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      LoginStatus;                                      		// 0x0010 (0x0001) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.SFXCachedAchievements
// 0x0021
struct FSFXCachedAchievements
{
	TArray<struct FAchievementDetails>                 Achievements;                                     		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USurface*                                    TempImage;                                        		// 0x0010 (0x0008) [0x0000000000000002]              ( CPF_Const )
	int                                                PlayerNum;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                TitleId;                                          		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned char                                      ReadState;                                        		// 0x0020 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.SFXProfileSettingsCache
// 0x0050
struct FSFXProfileSettingsCache
{
	TArray<struct FScriptDelegate>                     ReadDelegates;                                    		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray<struct FScriptDelegate>                     WriteDelegates;                                   		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray<struct FScriptDelegate>                     ProfileDataChangedDelegates;                      		// 0x0020 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UOnlineProfileSettings*                      Profile;                                          		// 0x0030 (0x0008) [0x0000000000000000]              
	class UOnlineProfileSettings*                      TrilogyProfile;                                   		// 0x0038 (0x0008) [0x0000000000000000]              
	class UOnlineProfileSettings*                      ProfileTempNewCachedSettings;                     		// 0x0040 (0x0008) [0x0000000000000000]              
	class UOnlineProfileSettings*                      TrilogyProfileTempNewCachedSettings;              		// 0x0048 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.BioPerUserDelegateLists
// 0x0020
struct FBioPerUserDelegateLists
{
	TArray<struct FScriptDelegate>                     AchievementDelegates;                             		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray<struct FScriptDelegate>                     AchievementReadDelegates;                         		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.LoginStatusDelegates
// 0x0010
struct FLoginStatusDelegates
{
	TArray<struct FScriptDelegate>                     Delegates;                                        		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.SFXDeviceIdCache
// 0x0024
struct FSFXDeviceIdCache
{
	struct FScriptDelegate                             DeviceSelectionMulticast;                         		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray<struct FScriptDelegate>                     DeviceSelectionDelegates;                         		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                DeviceID;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineComponentVoiceInterface.TalkerPriority
// 0x0008
struct FTalkerPriority
{
	int                                                CurrentPriority;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                LastPriority;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineComponentVoiceInterface.SFXOnlineRemoteTalker
// 0x0020(0x002C - 0x000C)
struct FSFXOnlineRemoteTalker : FRemoteTalker
{
	struct FTalkerPriority                             LocalPriorities[ 0x4 ];                           		// 0x000C (0x0020) [0x0000000000000000]              
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineComponentXenonLiveParty.PartyGameInviteDelegates
// 0x0010
struct FPartyGameInviteDelegates
{
	TArray<struct FScriptDelegate>                     Delegates;                                        		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineEventNotifier.SFXOnlineNotifyQueueInfo
// 0x0011
struct FSFXOnlineNotifyQueueInfo
{
	struct FScriptDelegate                             EventCallback;                                    		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      EventType;                                        		// 0x0010 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineEventNotifier.SFXOnlineEventNotify
// 0x0020
struct FSFXOnlineEventNotify
{
	TArray<struct FScriptDelegate>                     Subscribers;                                      		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray<struct FScriptDelegate>                     Waiters;                                          		// 0x0010 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineGameSettings.MPMapInfo
// 0x0048
struct FMPMapInfo
{
	FString                                            PackageName;                                      		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	FString                                            Image;                                            		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FVector                                     GalaxyAtWarMapPosition;                           		// 0x0020 (0x000C) [0x0000000000000000]              
	struct SFXName                                     MusicEventName;                                   		// 0x002C (0x0008) [0x0000000000000000]              
	int                                                Id;                                               		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                PrettyName;                                       		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                Description;                                      		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                GalaxyAtWarMapSubtitle;                           		// 0x0040 (0x0004) [0x0000000000000000]              
	unsigned long                                      EveryoneHasThisMap : 1;                           		// 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineGameSettings.MPPrivacyInfo
// 0x001C
struct FMPPrivacyInfo
{
	FString                                            Image;                                            		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Id;                                               		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                Name;                                             		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                AllCapsName;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineGameSettings.MPEnemyInfo
// 0x002C
struct FMPEnemyInfo
{
	FString                                            Image;                                            		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	FString                                            WaveClass;                                        		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Id;                                               		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                Name;                                             		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                AllCapsName;                                      		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineGameSettings.MPChallengeInfo
// 0x001C
struct FMPChallengeInfo
{
	FString                                            Image;                                            		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Id;                                               		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                Name;                                             		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                AllCapsName;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineHTTPRequest.HTTPParameter
// 0x0020
struct FHTTPParameter
{
	FString                                            mName;                                            		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	FString                                            mValue;                                           		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineSubsystem.SFXOnlineComponentDescription
// 0x0011
struct FSFXOnlineComponentDescription
{
	class UClass*                                      className;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	struct SFXName                                     PlatformName;                                     		// 0x0008 (0x0008) [0x0000000000000000]              
	unsigned char                                      ComponentType;                                    		// 0x0010 (0x0001) [0x0000000000000000]              
};



#undef LESDK_IN_GENERATED

#ifdef _MSC_VER
	#pragma pack ( pop )
#endif
