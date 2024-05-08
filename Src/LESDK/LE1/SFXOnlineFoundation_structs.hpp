/*
#############################################################################################
# Mass Effect 1 (Legendary Edition) (2.0.0.48602) SDK
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

// ScriptStruct SFXOnlineFoundation.ISFXOnlineComponentNotification.SFXOnlineEntitlementGroupInfo
// 0x0020
struct FSFXOnlineEntitlementGroupInfo
{
	FString                                            GroupName;                                        		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	FString                                            entitlementName;                                  		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXOnlineFoundation.ISFXOnlineComponentNotification.SFXOnlineTargetOfferInfo
// 0x0020
struct FSFXOnlineTargetOfferInfo
{
	FString                                            offerType;                                        		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	FString                                            OfferId;                                          		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
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

// ScriptStruct SFXOnlineFoundation.SFXOnlineComponent.SFXOnlineSubscriberEventType
// 0x0009
struct FSFXOnlineSubscriberEventType
{
	struct SFXName                                     EventCallback;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned char                                      EventType;                                        		// 0x0008 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineComponentCoordinator.SFXOnlineEventNotify
// 0x0020
struct FSFXOnlineEventNotify
{
	TArray<struct FScriptDelegate>                     Subscribers;                                      		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray<struct FScriptDelegate>                     Waiters;                                          		// 0x0010 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
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

// ScriptStruct SFXOnlineFoundation.SFXOnlineSubsystem.SFXOnlineAchievement
// 0x0014
struct FSFXOnlineAchievement
{
	FString                                            AchievementName;                                  		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Xbox360Id;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineSubsystem.SFXOnlineComponentDescription
// 0x0011
struct FSFXOnlineComponentDescription
{
	class UClass*                                      ClassName;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	struct SFXName                                     PlatformName;                                     		// 0x0008 (0x0008) [0x0000000000000000]              
	unsigned char                                      ComponentType;                                    		// 0x0010 (0x0001) [0x0000000000000000]              
};



#undef LESDK_IN_GENERATED

#ifdef _MSC_VER
	#pragma pack ( pop )
#endif
