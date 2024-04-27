#include "LESDK\Common\Types.hpp"
#include "LESDK\Common\Common.hpp"

#include "LE3\Core_structs.hpp"
#include "LE3\Core_classes.hpp"
#include "LE3\Core_f_structs.hpp"
// #include "LE3\Core_functions.cpp"
#include "LE3\Engine_structs.hpp"
#include "LE3\Engine_classes.hpp"
#include "LE3\Engine_f_structs.hpp"
// #include "LE3\Engine_functions.cpp"
#include "LE3\GameFramework_structs.hpp"
#include "LE3\GameFramework_classes.hpp"
#include "LE3\GameFramework_f_structs.hpp"
// #include "LE3\GameFramework_functions.cpp"
#include "LE3\IpDrv_structs.hpp"
#include "LE3\IpDrv_classes.hpp"
#include "LE3\IpDrv_f_structs.hpp"
// #include "LE3\IpDrv_functions.cpp"
#include "LE3\GFxUI_structs.hpp"
#include "LE3\GFxUI_classes.hpp"
#include "LE3\GFxUI_f_structs.hpp"
// #include "LE3\GFxUI_functions.cpp"
#include "LE3\WwiseAudio_structs.hpp"
#include "LE3\WwiseAudio_classes.hpp"
#include "LE3\WwiseAudio_f_structs.hpp"
// #include "LE3\WwiseAudio_functions.cpp"
#include "LE3\WinDrv_structs.hpp"
#include "LE3\WinDrv_classes.hpp"
#include "LE3\WinDrv_f_structs.hpp"
// #include "LE3\WinDrv_functions.cpp"
#include "LE3\SFXOnlineFoundation_structs.hpp"
#include "LE3\SFXOnlineFoundation_classes.hpp"
#include "LE3\SFXOnlineFoundation_f_structs.hpp"
// #include "LE3\SFXOnlineFoundation_functions.cpp"
#include "LE3\SFXGame_structs.hpp"
#include "LE3\SFXGame_classes.hpp"
#include "LE3\SFXGame_f_structs.hpp"
// #include "LE3\SFXGame_functions.cpp"
#include "LE3\SFXGameContent_structs.hpp"
#include "LE3\SFXGameContent_classes.hpp"
#include "LE3\SFXGameContent_f_structs.hpp"
// #include "LE3\SFXGameContent_functions.cpp"
#include "LE3\SFXGameContentLiveKismet_structs.hpp"
#include "LE3\SFXGameContentLiveKismet_classes.hpp"
#include "LE3\SFXGameContentLiveKismet_f_structs.hpp"
// #include "LE3\SFXGameContentLiveKismet_functions.cpp"
#include "LE3\SFXQA_structs.hpp"
#include "LE3\SFXQA_classes.hpp"
#include "LE3\SFXQA_f_structs.hpp"
// #include "LE3\SFXQA_functions.cpp"


static_assert(sizeof(UObject) == 0x60);

static_assert(sizeof(UState) == 0x100);
static_assert(offsetof(UState, ProbeMask) == 0x00D8);
static_assert(offsetof(UState, IgnoreMask) == 0x00E0);
static_assert(offsetof(UState, StateFlags) == 0x00E8);
static_assert(offsetof(UState, LabelTableOffset) == 0x00EC);
static_assert(offsetof(UState, FuncMap) == 0x00F0);

static_assert(sizeof(UClass) == 0x1F8);
static_assert(offsetof(UClass, ClassFlags) == 0x0100);
static_assert(offsetof(UClass, ClassCastFlags) == 0x0104);
static_assert(offsetof(UClass, ClassUnique) == 0x0108);
static_assert(offsetof(UClass, ClassWithin) == 0x010C);
static_assert(offsetof(UClass, ClassConfigName) == 0x0114);
static_assert(offsetof(UClass, ClassReps) == 0x011C);
static_assert(offsetof(UClass, NetFields) == 0x012C);
static_assert(offsetof(UClass, ClassDefaultObject) == 0x013C);
static_assert(offsetof(UClass, UnknownData144) == 0x0144);
