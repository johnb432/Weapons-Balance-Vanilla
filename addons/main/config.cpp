#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {
            "LMG_Zafir_B_F",
            "arifle_AK15_F", "arifle_AK15_arid_F", "arifle_AK15_lush_F",
            "arifle_AK15U_F", "arifle_AK15U_arid_F", "arifle_AK15U_lush_F",
            "arifle_AK15_GL_F", "arifle_AK15_GL_arid_F", "arifle_AK15_GL_lush_F"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "cba_main"
        };
        author = "johnb43";
        authors[] = {
            "johnb43",
            "Blutze"
        };
        url = "https://github.com/johnb432/Weapons-Balance-Vanilla";
        VERSION_CONFIG;
    };
};

#include "CfgAcc.hpp"
#include "CfgAmmo.hpp"
#include "CfgFaces.hpp"
#include "CfgMagazines.hpp"
#include "CfgMagazineWells.hpp"
#include "CfgVehicles.hpp"

class asdg_OpticRail1913_long;
class asdg_OpticSideRail_AK;
class asdg_MuzzleSlot_762;
class MuzzleSlot_545R;
class MuzzleSlot_762R;

class CfgWeapons {
    class Rifle;
    class Rifle_Base_F: Rifle {
        class WeaponSlotsInfo;
    };

    #include "weapons\CfgWeapMisc.hpp"
    #include "weapons\CfgWeapAK.hpp"
    #include "weapons\CfgWeapAKNew.hpp"
    #include "weapons\CfgWeapSMG.hpp"
};
