class CfgVehicles {
    class Weapon_Bag_Base;
    class UGV_02_backpack_base_F: Weapon_Bag_Base {
        mass = 120;
    };
    class UAV_06_backpack_base_F: Weapon_Bag_Base {
        mass = 120;
    };

    class B_UAV_01_backpack_F: Weapon_Bag_Base {
        mass = 30;
    };
    class I_E_UAV_01_backpack_F: Weapon_Bag_Base {
        mass = 30;
    };
    class C_IDAP_UAV_01_backpack_F: Weapon_Bag_Base {
        mass = 30;
    };

    class Bag_Base;
    class B_Messenger_Base_F: Bag_Base {
        maximumLoad = 160;
    };
    class B_TacticalPack_Base: Bag_Base {
        mass = 35;
    };

    class TFAR_Bag_Base;
    class B_RadioBag_01_base_F: TFAR_Bag_Base {
        mass = 90;
    };
    class B_RadioBag_01_black_F: B_RadioBag_01_base_F {
        tf_range = 40000;
    };
    class B_RadioBag_01_digi_F: B_RadioBag_01_base_F {
        tf_range = 40000;
    };
    class B_RadioBag_01_eaf_F: B_RadioBag_01_base_F {
        tf_range = 40000;
    };
    class B_RadioBag_01_ghex_F: B_RadioBag_01_base_F {
        tf_range = 40000;
    };
    class B_RadioBag_01_hex_F: B_RadioBag_01_base_F {
        tf_range = 40000;
    };
    class B_RadioBag_01_mtp_F: B_RadioBag_01_base_F {
        tf_range = 40000;
    };
    class B_RadioBag_01_oucamo_F: B_RadioBag_01_base_F {
        tf_range = 40000;
    };
    class B_RadioBag_01_tropic_F: B_RadioBag_01_base_F {
        tf_range = 40000;
    };
    class B_RadioBag_01_wdl_F: B_RadioBag_01_base_F {
        tf_range = 40000;
    };
};
