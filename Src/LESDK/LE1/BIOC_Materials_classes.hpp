/*
#############################################################################################
# Mass Effect 1 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.5_Beta-Rev.60-MELE
# ========================================================================================= #
# File: BIOC_Materials_classes.hpp
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


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class BIOC_Materials.BioGlobalResources
// 0x01F0 (0x0250 - 0x0060)
class UBioGlobalResources : public UObject
{
public:
	TArray<class UMaterialInterface*>                  lst;                                              		// 0x0060 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray<class UMaterialInterface*>                  lstb;                                             		// 0x0070 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray<class UAnimSet*>                            lst2;                                             		// 0x0080 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray<class UBioActorType*>                       lst3;                                             		// 0x0090 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray<class USkeletalMesh*>                       lst4;                                             		// 0x00A0 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray<class UBioAppearanceItem*>                  lst5;                                             		// 0x00B0 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray<class UBioVISGrenade*>                      lst6;                                             		// 0x00C0 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray<class UPhysicsAsset*>                       lst7;                                             		// 0x00D0 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray<class UBioVFXTemplate*>                     lst8;                                             		// 0x00E0 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray<class UPostProcessChain*>                   lst9;                                             		// 0x00F0 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray<class UUISkin*>                             lst10;                                            		// 0x0100 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray<class USoundCue*>                           lst11;                                            		// 0x0110 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray<class UBioTlkFile*>                         lst12;                                            		// 0x0120 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray<class UBioStateEventMap*>                   lst13;                                            		// 0x0130 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray<class UBioOutcomeMap*>                      lst14;                                            		// 0x0140 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray<class UBioQuestMap*>                        lst15;                                            		// 0x0150 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray<class UBioCodexMap*>                        lst16;                                            		// 0x0160 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray<class UPhysicalMaterial*>                   lst17;                                            		// 0x0170 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray<class UObject*>                             lst18;                                            		// 0x0180 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray<class UBioSWF*>                             lst19;                                            		// 0x0190 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray<class UMaterialInstanceConstant*>           lst20;                                            		// 0x01A0 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray<class UFont*>                               lst21;                                            		// 0x01B0 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray<class UTexture2D*>                          lst22;                                            		// 0x01C0 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray<class UBioForceFeedbackPlayer*>             lst23;                                            		// 0x01D0 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray<class UFaceFXAsset*>                        lst24;                                            		// 0x01E0 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray<class UBioShieldView*>                      lst25;                                            		// 0x01F0 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray<class UBioPowerVFXAppearance*>              lst26;                                            		// 0x0200 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray<class UBioDeathVFX*>                        lst27;                                            		// 0x0210 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray<class UBioDamageType*>                      lst28;                                            		// 0x0220 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray<class UBioVISFootstep*>                     lst29;                                            		// 0x0230 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray<class UAnimTree*>                           lst30;                                            		// 0x0240 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};



#undef LESDK_IN_GENERATED

#ifdef _MSC_VER
	#pragma pack ( pop )
#endif
