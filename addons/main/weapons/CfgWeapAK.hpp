class arifle_AKM_base_F: Rifle_Base_F {
    rhs_1p29_type = "rhs_acc_1p29";
    rhs_pgo7v_type = "rhs_acc_pgo7v_ak";
    rhs_pgo7v2_type = "rhs_acc_pgo7v2_ak";
    rhs_pgo7v3_type = "rhs_acc_pgo7v3_ak";
    rhs_pkas_type = "rhs_acc_pkas";
    rhs_pso1m2_type = "rhs_acc_pso1m2_ak";
    rhs_pso1m21_type = "rhs_acc_pso1m21_ak";

    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 70.1;
        class CowsSlot: asdg_OpticSideRail_AK {};
        class MuzzleSlot: MuzzleSlot_762R {};
    };
};
class arifle_AKM_F: arifle_AKM_base_F {
    displayName = "AKMN";
};
class arifle_AKM_FL_F: arifle_AKM_F {
    baseWeapon = "arifle_AKM_FL_F";
    displayName = "AKM (Flashlight)";
    scope = 2;

    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 70.6;
        class CowsSlot {};
        class MuzzleSlot {};
    };
};

class arifle_AKS_base_F: Rifle_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 59.6;
        class MuzzleSlot: MuzzleSlot_545R {};
    };
};

class arifle_AK12_base_F: Rifle_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 77;
    };
};

class arifle_AK12_GL_base_F: arifle_AK12_base_F {
    class EGLM: UGL_F {};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 110;
    };
};

class arifle_AK12_GL_F: arifle_AK12_GL_base_F {
    displayName = "AK-15 (GP-25)";
    class EGLM: EGLM {};
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class arifle_AK12_GL_arid_F: arifle_AK12_GL_base_F {
    displayName = "AK-15 (GP-25/Arid)";
    class EGLM: EGLM {};
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class arifle_AK12_GL_lush_F: arifle_AK12_GL_base_F {
    displayName = "AK-15 (GP-25/Lush)";
    class EGLM: EGLM {};
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};

class arifle_AK12U_base_F: arifle_AK12_base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 71.6;
    };
};

class arifle_RPK12_base_F: arifle_AK12_base_F {
    UiPicture = "\a3\weapons_f\data\ui\icon_mg_ca.paa";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 110;
    };
};
class arifle_RPK12_F: arifle_RPK12_base_F {
    displayName = "RPKM";
};
class arifle_RPK12_arid_F: arifle_RPK12_base_F {
    displayName = "RPKM (Arid)";
};
class arifle_RPK12_lush_F: arifle_RPK12_base_F {
    displayName = "RPKM (Lush)";
};
