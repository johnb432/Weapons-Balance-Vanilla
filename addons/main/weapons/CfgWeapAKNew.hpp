#pragma hemtt flag pe23_ignore_has_include

class arifle_AK12_F: arifle_AK12_base_F {
    class WeaponSlotsInfo;
};
class arifle_AK12_arid_F: arifle_AK12_base_F {
    class WeaponSlotsInfo;
};
class arifle_AK12_lush_F: arifle_AK12_base_F {
    class WeaponSlotsInfo;
};

class arifle_AK15_F: arifle_AK12_F {
    baseWeapon = "arifle_AK15_F";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        class MuzzleSlot: MuzzleSlot_762R {};
    };
};
class arifle_AK15_arid_F: arifle_AK12_arid_F {
    baseWeapon = "arifle_AK15_arid_F";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        class MuzzleSlot: MuzzleSlot_762R {};
    };
};
class arifle_AK15_lush_F: arifle_AK12_lush_F {
    baseWeapon = "arifle_AK15_lush_F";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        class MuzzleSlot: MuzzleSlot_762R {};
    };
};

class arifle_AK12U_F: arifle_AK12U_base_F {
    class WeaponSlotsInfo;
};
class arifle_AK12U_arid_F: arifle_AK12U_base_F {
    class WeaponSlotsInfo;
};
class arifle_AK12U_lush_F: arifle_AK12U_base_F {
    class WeaponSlotsInfo;
};

class arifle_AK15U_F: arifle_AK12U_F {
    baseWeapon = "arifle_AK15U_F";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        class MuzzleSlot: MuzzleSlot_762R {};
    };
};
class arifle_AK15U_arid_F: arifle_AK12U_arid_F {
    baseWeapon = "arifle_AK15U_arid_F";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        class MuzzleSlot: MuzzleSlot_762R {};
    };
};
class arifle_AK15U_lush_F: arifle_AK12U_lush_F {
    baseWeapon = "arifle_AK15U_lush_F";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        class MuzzleSlot: MuzzleSlot_762R {};
    };
};

class arifle_AK15_GL_F: arifle_AK12_GL_F {
    baseWeapon = "arifle_AK15_GL_F";
    class EGLM: EGLM {
        magazines[] = {};
        magazineWell[] = {
            "CBA_40mm_GP"

            #if __has_include("\rhsafrf\addons\rhs_main\loadorder\config.bin")
                ,
                "VOG_40mm"
            #endif
        };
    };
    class WeaponSlotsInfo: WeaponSlotsInfo {
        class MuzzleSlot: MuzzleSlot_762R {};
    };
};
class arifle_AK15_GL_arid_F: arifle_AK12_GL_arid_F {
    baseWeapon = "arifle_AK15_GL_arid_F";
    class EGLM: EGLM {
        magazines[] = {};
        magazineWell[] = {
            "CBA_40mm_GP"

            #if __has_include("\rhsafrf\addons\rhs_main\loadorder\config.bin")
                ,
                "VOG_40mm"
            #endif
        };
    };
    class WeaponSlotsInfo: WeaponSlotsInfo {
        class MuzzleSlot: MuzzleSlot_762R {};
    };
};
class arifle_AK15_GL_lush_F: arifle_AK12_GL_lush_F {
    baseWeapon = "arifle_AK15_GL_lush_F";
    class EGLM: EGLM {
        magazines[] = {};
        magazineWell[] = {
            "CBA_40mm_GP"

            #if __has_include("\rhsafrf\addons\rhs_main\loadorder\config.bin")
                ,
                "VOG_40mm"
            #endif
        };
    };
    class WeaponSlotsInfo: WeaponSlotsInfo {
        class MuzzleSlot: MuzzleSlot_762R {};
    };
};
