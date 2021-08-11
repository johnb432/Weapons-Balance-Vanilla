#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "cba_main",
            "ace_realisticnames",
            "A3_Characters_F",
            "A3_Characters_F_beta",
            "A3_Characters_F_epa",
            "A3_Characters_F_epb",
            "A3_Characters_F_epc",
            "A3_Characters_F_exp"
        };
        authors[] = {
            "johnb43",
            "Blutze"
        };
    };
};

#include "CfgAcc.hpp"
#include "CfgAmmo.hpp"
#include "CfgFaces.hpp"
#include "CfgMagazines.hpp"
#include "CfgMagazineWells.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
