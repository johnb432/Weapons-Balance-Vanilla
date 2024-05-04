class arifle_MX_GL_Black_F;
class arifle_MX_Black_F;
class arifle_MX_SW_Black_F;
class arifle_MXC_Black_F;
class arifle_MXM_Black_F;
class Pistol;
class Launcher;

class Rifle_Long_Base_F: Rifle_Base_F {
    class WeaponSlotsInfo;
};
class LMG_03_base_F: Rifle_Long_Base_F {
    class WeaponSlotsInfo;
};
class LMG_03_F: LMG_03_base_F {
    ACE_Overheating_allowSwapBarrel = 1;
    magazineWell[] += {"M249_556x45"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 176.3;
    };
};

class LMG_Zafir_F: Rifle_Long_Base_F {
    magazineWell[] += {"PK_762x54R"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        class MuzzleSlot: asdg_MuzzleSlot_762 {};
    };
};
class LMG_Zafir_B_F: LMG_Zafir_F {
    _generalMacro = "LMG_Zafir_B_F";
    ACE_barrelLength = 508;
    baseWeapon = "LMG_Zafir_B_F";
    descriptionShort = "Light Machine Gun<br />Caliber: 7.62x51 mm";
    magazines[] = {"150Rnd_762x51_Box"};
    magazineWell[] = {"M240_762x51","CBA_762x51_LINKS"};
};

class LMG_Mk200_F: Rifle_Long_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        class CowsSlot: asdg_OpticRail1913_long {};
    };
};

class EBR_base_F: Rifle_Long_Base_F {
    class WeaponSlotsInfo;
};
class srifle_EBR_F: EBR_base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        class CowsSlot: asdg_OpticRail1913_long {};
    };
};

class GM6_base_F: Rifle_Long_Base_F {
    class WeaponSlotsInfo;
};
class srifle_GM6_F: GM6_base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        class CowsSlot: asdg_OpticRail1913_long {};
    };
};

class arifle_MX_Base_F: Rifle_Base_F {
    class WeaponSlotsInfo;
};
class arifle_MXM_F: arifle_MX_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        class CowsSlot: asdg_OpticRail1913_long {};
    };
};

class arifle_MSBS65_base_F: Rifle_Base_F {
    class WeaponSlotsInfo {
        mass = 80;
    };
};
class arifle_MSBS65_GL_base_F: arifle_MSBS65_base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 105.5;
    };
};
class arifle_MSBS65_Mark_base_F: arifle_MSBS65_base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 91;
    };
};
class arifle_MSBS65_UBS_base_F: arifle_MSBS65_base_F {
    class UBS_F: Rifle_Base_F {
        magazineWell[] += {"CBA_12g_1rnd","CBA_12g_2rnds","CBA_12g_3rnds","CBA_12g_4rnds","CBA_12g_5rnds","CBA_12g_6rnds"};
    };
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 110;
    };
};

class DMR_06_base_F: Rifle_Long_Base_F {
    class WeaponSlotsInfo;
};
class DMR_06_hunter_base_F: DMR_06_base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 92;
    };
};

class DMR_07_base_F: Rifle_Long_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 90;
    };
};

class arifle_SPAR_01_base_F: Rifle_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 68.8;
    };
};
class arifle_SPAR_01_GL_base_F: arifle_SPAR_01_base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 101.8;
    };
};
class arifle_SPAR_02_base_F: Rifle_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 77;
    };
};
class arifle_SPAR_03_base_F: Rifle_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 104.5;
    };
};

class arifle_CTAR_base_F: Rifle_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 72;
    };
};
class arifle_CTARS_base_F: Rifle_Base_F {
    UiPicture = "\a3\weapons_f\data\ui\icon_mg_ca.paa";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 86;
    };
};

class arifle_ARX_base_F: Rifle_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 110;
    };
};

class DMR_01_base_F: Rifle_Long_Base_F {
    modes[] = {"Single","single_close_optics1","single_medium_optics1","single_far_optics1"};
};

class sgun_HunterShotgun_01_base_F: Rifle_Long_Base_F {
    magazineWell[] += {"CBA_12g_1rnd","CBA_12g_2rnds"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 80;
    };
};

class Pistol_Base_F: Pistol {
    class WeaponSlotsInfo;
};
class hgun_Rook40_F: Pistol_Base_F {
    magazineWell[] += {"CBA_9x19_MP443"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 18.9;
    };
};
class hgun_Pistol_01_F: Pistol_Base_F {
    magazineWell[] += {"CBA_9x18_PM"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 16.7;
    };
};

class Launcher_Base_F: Launcher {
    class WeaponSlotsInfo;
};
class launch_RPG7_F: Launcher_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 120;
    };
};
