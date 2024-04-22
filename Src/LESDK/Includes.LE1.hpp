#include "LESDK\Common\Common.hpp"

#include "LE1\Core_structs.hpp"
#include "LE1\Core_classes.hpp"
#include "LE1\Core_f_structs.hpp"
// #include "LE1\Core_functions.cpp"
#include "LE1\Engine_structs.hpp"
#include "LE1\Engine_classes.hpp"
#include "LE1\Engine_f_structs.hpp"
// #include "LE1\Engine_functions.cpp"
#include "LE1\IpDrv_structs.hpp"
#include "LE1\IpDrv_classes.hpp"
#include "LE1\IpDrv_f_structs.hpp"
// #include "LE1\IpDrv_functions.cpp"
#include "LE1\GFxUI_structs.hpp"
#include "LE1\GFxUI_classes.hpp"
#include "LE1\GFxUI_f_structs.hpp"
// #include "LE1\GFxUI_functions.cpp"
#include "LE1\ISACTAudio_structs.hpp"
#include "LE1\ISACTAudio_classes.hpp"
#include "LE1\ISACTAudio_f_structs.hpp"
// #include "LE1\ISACTAudio_functions.cpp"
#include "LE1\WinDrv_structs.hpp"
#include "LE1\WinDrv_classes.hpp"
#include "LE1\WinDrv_f_structs.hpp"
// #include "LE1\WinDrv_functions.cpp"
#include "LE1\SFXGame_structs.hpp"
#include "LE1\SFXGame_classes.hpp"
#include "LE1\SFXGame_f_structs.hpp"
// #include "LE1\SFXGame_functions.cpp"
#include "LE1\SFXOnlineFoundation_structs.hpp"
#include "LE1\SFXOnlineFoundation_classes.hpp"
#include "LE1\SFXOnlineFoundation_f_structs.hpp"
// #include "LE1\SFXOnlineFoundation_functions.cpp"
#include "LE1\PlotManagerMap_structs.hpp"
#include "LE1\PlotManagerMap_classes.hpp"
#include "LE1\PlotManagerMap_f_structs.hpp"
// #include "LE1\PlotManagerMap_functions.cpp"
#include "LE1\SFXStrategicAI_structs.hpp"
#include "LE1\SFXStrategicAI_classes.hpp"
#include "LE1\SFXStrategicAI_f_structs.hpp"
// #include "LE1\SFXStrategicAI_functions.cpp"
#include "LE1\SFXGameContent_Powers_structs.hpp"
#include "LE1\SFXGameContent_Powers_classes.hpp"
#include "LE1\SFXGameContent_Powers_f_structs.hpp"
// #include "LE1\SFXGameContent_Powers_functions.cpp"
#include "LE1\PlotManager_structs.hpp"
#include "LE1\PlotManager_classes.hpp"
#include "LE1\PlotManager_f_structs.hpp"
// #include "LE1\PlotManager_functions.cpp"
    //#include "LE1\PlotManagerDLC_UNC_structs.hpp"
    //#include "LE1\PlotManagerDLC_UNC_classes.hpp"
    //#include "LE1\PlotManagerDLC_UNC_f_structs.hpp"
    //// #include "LE1\PlotManagerDLC_UNC_functions.cpp"
#include "LE1\BIOC_Materials_structs.hpp"
#include "LE1\BIOC_Materials_classes.hpp"
#include "LE1\BIOC_Materials_f_structs.hpp"
// #include "LE1\BIOC_Materials_functions.cpp"
#include "LE1\SFXWorldResources_structs.hpp"
#include "LE1\SFXWorldResources_classes.hpp"
#include "LE1\SFXWorldResources_f_structs.hpp"
// #include "LE1\SFXWorldResources_functions.cpp"
#include "LE1\SFXVehicleResources_structs.hpp"
#include "LE1\SFXVehicleResources_classes.hpp"
#include "LE1\SFXVehicleResources_f_structs.hpp"
// #include "LE1\SFXVehicleResources_functions.cpp"
#include "LE1\SFXQA_structs.hpp"
#include "LE1\SFXQA_classes.hpp"
#include "LE1\SFXQA_f_structs.hpp"
// #include "LE1\SFXQA_functions.cpp"


static_assert(sizeof(UObject) == 0x60);

static_assert(sizeof(UState) == 0x138);
static_assert(offsetof(UState, ProbeMask) == 0x00D8);
static_assert(offsetof(UState, IgnoreMask) == 0x00E0);
static_assert(offsetof(UState, StateFlags) == 0x00E8);
static_assert(offsetof(UState, LabelTableOffset) == 0x00EC);
static_assert(offsetof(UState, FuncMap) == 0x00F0);

static_assert(sizeof(UClass) == 0x220);
static_assert(offsetof(UClass, ClassFlags) == 0x0138);
static_assert(offsetof(UClass, ClassCastFlags) == 0x013C);
static_assert(offsetof(UClass, ClassUnique) == 0x0140);
static_assert(offsetof(UClass, ClassWithin) == 0x0144);
static_assert(offsetof(UClass, ClassConfigName) == 0x014C);
static_assert(offsetof(UClass, ClassReps) == 0x0154);
static_assert(offsetof(UClass, NetFields) == 0x0164);
static_assert(offsetof(UClass, ClassDefaultObject) == 0x0174);
static_assert(offsetof(UClass, UnknownData17C) == 0x017C);
