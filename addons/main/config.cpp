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
            "ace_realisticnames",
            "A3_Data_F_AoW_Loadorder"
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

class CfgMods {
    class Mod_Base;
    class PREFIX: Mod_Base {
        name = "Weapons Balance - Vanilla";
        author = "johnb43";
        tooltip = "Weapons Balance - Vanilla";
        tooltipOwned = "Weapons Balance - Vanilla";
        hideName = 0;
        hidePicture = 0;
        dir = "@wb_vanilla";
        actionName = "Github";
        action = "https://github.com/johnb432/Weapons-Balance-Vanilla";
        description = "A collection of balancing mods made by johnb43.";
        overview = "A collection of balancing mods made by johnb43.";
        picture = "\z\wb_vanilla\addons\main\ui\logo_weapons_balance.paa"; // http://getdrawings.com/get-drawing#gun-drawing-in-pencil-27.jpg, http://getdrawings.com/get-drawing#gun-drawing-in-pencil-17.png
        logo = "\z\wb_vanilla\addons\main\ui\logo_weapons_balance.paa";
        logoOver = "\z\wb_vanilla\addons\main\ui\logo_weapons_balance.paa";
        logoSmall = "\z\wb_vanilla\addons\main\ui\logo_weapons_balance.paa";
        overviewPicture = "\z\wb_vanilla\addons\main\ui\logo_weapons_balance.paa";
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
        class WeaponSlotsInfo {};
    };
    class UGL_F;

    #include "weapons\CfgWeapMisc.hpp"
    #include "weapons\CfgWeapAK.hpp"
    #include "weapons\CfgWeapAKNew.hpp"
    #include "weapons\CfgWeapSMG.hpp"
};
