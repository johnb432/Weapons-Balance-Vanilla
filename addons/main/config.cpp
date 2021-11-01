#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {"LMG_Zafir_B_F"};
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
    class PREFIX {
        name = "Weapons Balance - Vanilla";
        author = "johnb43";
        tooltipOwned = "Weapons Balance - Vanilla";
        hideName = 0;
        hidePicture = 0;
        actionName = "Github";
        action = "https://github.com/johnb432/Weapons-Balance-Vanilla";
        description = "A collection of balancing mods made by johnb43.";
        overview = "A collection of balancing mods made by johnb43.";
        picture = "\z\wb_vanilla\addons\main\ui\logo_weapons_balance.paa"; // http://getdrawings.com/get-drawing#gun-drawing-in-pencil-27.jpg, http://getdrawings.com/get-drawing#gun-drawing-in-pencil-17.png
        logo = "\z\wb_vanilla\addons\main\ui\logo_weapons_balance.paa";
        overviewPicture = "\z\wb_vanilla\addons\main\ui\logo_weapons_balance.paa";
    };
};

#include "CfgAcc.hpp"
#include "CfgAmmo.hpp"
#include "CfgFaces.hpp"
#include "CfgMagazines.hpp"
#include "CfgMagazineWells.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
