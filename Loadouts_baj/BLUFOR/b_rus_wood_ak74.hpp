//Author: TheRob
//Description: Russian Army Alpenflage AK-74
// ====================================================================================

class blu_f {

	// Here we're creating definitions for weapons and magazines that are called later.


	//Rifle
    #define WEST_RIFLE "rhs_weap_ak74m_camo"
    #define WEST_RIFLE_MAG "rhs_30Rnd_545x39_AK:8"

	//GL Rifle
    #define WEST_GLRIFLE "rhs_weap_ak74m_gp25"
    #define WEST_GLRIFLE_MAG "rhs_30Rnd_545x39_AK:8"
    #define WEST_GLRIFLE_MAG_SMOKE "rhs_GRD40_White:4","rhs_GRD40_Red:2","rhs_GRD40_Green:3"
    #define WEST_GLRIFLE_MAG_HE "rhs_VOG25P:6"
    #define WEST_GLRIFLE_MAG_FLARE "rhs_VG40OP_red:2","rhs_VG40OP_white:2"

	//Carbine
    #define WEST_CARBINE "rhs_weap_ak74m_camo"
    #define WEST_CARBINE_MAG "rhs_30Rnd_545x39_AK:8"

	//Diver
	#define SDAR "arifle_SDAR_F"
	#define SDAR_MAG "20Rnd_556x45_UW_mag:6"

    // AR
    #define WEST_AR "hlc_rifle_rpk74n"
    #define WEST_AR_MAG "hlc_45Rnd_545x39_t_rpk:10"

	// AT
    #define WEST_AT "rhs_weap_rpg26"
    #define WEST_AT_MAG ""

	// MMG
    #define WEST_MMG "rhs_weap_pkp"
    #define WEST_MMG_MAG "rhs_100Rnd_762x54mmR_green:8"

	// MAT
    #define WEST_MAT "rhs_weap_rpg7"
    #define WEST_MAT_MAG "rhs_rpg7_PG7VR_mag:4"

	// SAM
    #define WEST_SAM "rhs_weap_fim92"
    #define WEST_SAM_MAG "rhs_fim92_mag:2"

	// Sniper Rifle
    #define WEST_SNIPER "rhs_weap_svdp"
    #define WEST_SNIPER_MAG "rhs_10Rnd_762x54mmR_7N1:8"

   // Spotter Rifle
    #define WEST_SPOTTER "rhs_weap_ak74m_camo"
    #define WEST_SPOTTER_MAG "rhs_30Rnd_545x39_AK:5"

	// SMG
    #define WEST_SMG "rhs_weap_aks74u"
    #define WEST_SMG_MAG "rhs_30Rnd_545x39_AK:5"

   // Pistol
    #define WEST_PISTOL "rhs_weap_pya"
    #define WEST_PISTOL_MAG "rhs_mag_9x19_17:2"

	// Grenades, Smoke and Frag
	#define WEST_GRENADE "rhs_mag_rgd5:2"
	#define WEST_SMOKE_WHITE "rhs_mag_rdg2_white:2"
	#define WEST_SMOKE_GREEN "rhs_mag_rdg2_black"
	#define WEST_SMOKE_RED "rhs_mag_rdg2_white"


// ====================================================================================

    class Car {
        TransportMagazines[] = {WEST_RIFLE_MAG,WEST_RIFLE_MAG,WEST_CARBINE_MAG,WEST_AR_MAG,WEST_AR_MAG,WEST_GLRIFLE_MAG_HE,};
        TransportItems[] = {"MEDICAL_VEHICLE"};
    };

    class Tank {
        TransportMagazines[] = {WEST_RIFLE_MAG,WEST_RIFLE_MAG,WEST_CARBINE_MAG,WEST_AR_MAG,WEST_AR_MAG,WEST_GLRIFLE_MAG_HE,};
        TransportItems[] = {"MEDICAL_VEHICLE"};
    };

    class Helicopter {
        TransportMagazines[] = {WEST_RIFLE_MAG,WEST_RIFLE_MAG,WEST_CARBINE_MAG,WEST_AR_MAG,WEST_AR_MAG,WEST_GLRIFLE_MAG_HE};
        TransportItems[] = {"MEDICAL_VEHICLE"};
        TransportBackpack[] = {"B_Parachute:4"};
    };

    class Plane {
        TransportMagazines[] = {};
        TransportBackpack[] = {"B_Parachute:2"};
    };

    class Ship_F {
        TransportMagazines[] = {};
    };

// ====================================================================================
// Leadership INF and Groupies

    class B_Soldier_F {// rifleman
        uniform[] = {"rhsgref_uniform_alpenflage"};  /// randomized
        vest[] = {"rhs_6b13_Flora"}; /// randomized
        headgear[] = {"rhsgref_Booniehat_alpen"}; /// randomized
        backpack[] = {"rhs_assault_umbts"}; /// randomized
        backpackItems[] = {"MEDICAL_STANDARD","ACE_IR_Strobe_item"};
        weapons[] = {WEST_RIFLE}; /// randomized
        launchers[] = {}; /// randomized
        handguns[] = {}; /// randomized
        magazines[] = {WEST_RIFLE_MAG,WEST_GRENADE,WEST_SMOKE_WHITE};
        items[] = {"ACRE_PRC343","ACE_Flashlight_MX991"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","rhs_1PN138"};
        attachments[] = {};
    };

    class B_officer_F: B_Soldier_F {// CO and DC
        weapons[] = {WEST_GLRIFLE};
        vest[] = {"rhs_6b13_Flora_6sh92_radio"}; /// randomized
        headgear[] = {"rhsgref_Booniehat_alpen"}; /// randomized
        magazines[] = {WEST_GLRIFLE_MAG,WEST_GLRIFLE_MAG_SMOKE,WEST_GLRIFLE_MAG_FLARE,WEST_PISTOL_MAG,WEST_GRENADE,WEST_SMOKE_WHITE,WEST_SMOKE_GREEN};
        handguns[] = {WEST_PISTOL}; /// randomized
        backpackItems[] += {"ACE_key_west", "ACRE_PRC117F",WEST_GLRIFLE_MAG_HE};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","rhs_pdu4","ItemGPS","rhs_1PN138"};
        items[] = {"ACE_MapTools","ACRE_PRC148","ACE_Flashlight_MX991"};
    };

    class B_Soldier_SL_F: B_Officer_F {// SL
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","rhs_pdu4","ItemGPS","Binocular","rhs_1PN138"};
        items[] = {"ACE_MapTools","ACRE_PRC148", "ACRE_PRC343","ACE_Flashlight_MX991"};
        backpackItems[] = {"MEDICAL_LEADER","ACE_IR_Strobe_item",WEST_GLRIFLE_MAG_HE};
    };

    class B_soldier_UAV_F: B_Soldier_F {
        backpack[] = {"B_UAV_01_backpack_F"}; /// randomized
        linkedItems[] += {"B_uavterminal"};
    };

	class B_medic_F: B_Soldier_F {// Medic
        vest[] = {"rhsgref_6b23_khaki_medic"}; /// randomized
		backpack[] = {"rhs_assault_umbts"}; /// randomized
        weapons[] = {WEST_CARBINE};
        magazines[] = {WEST_CARBINE_MAG,WEST_SMOKE_WHITE};
        backpackItems[] = {"MEDICAL_MEDIC","ACE_tourniquet:8"};
    };

// ====================================================================================
// Grunt Infantry

    class B_Soldier_TL_F: B_Soldier_F {// FTL
        weapons[] = {WEST_GLRIFLE};
        headgear[] = {"rhsgref_Booniehat_alpen"}; /// randomized
        magazines[] = {WEST_GLRIFLE_MAG};
        backpackItems[] += {"ACE_key_west",WEST_GLRIFLE_MAG_HE,WEST_GLRIFLE_MAG_SMOKE,WEST_GLRIFLE_MAG_FLARE,WEST_SMOKE_WHITE,WEST_GRENADE,WEST_SMOKE_WHITE,WEST_GRENADE,WEST_SMOKE_WHITE};
        linkedItems[] += {"ItemGPS","Binocular"};
    };

    class B_Soldier_AR_F: B_Soldier_F {// AR
        vest[] = {"rhs_6b13_Flora_6sh92"}; /// randomized
        weapons[] = {WEST_AR};
        magazines[] = {WEST_AR_MAG,WEST_PISTOL_MAG,WEST_GRENADE,WEST_SMOKE_WHITE};
        handguns[] = {WEST_PISTOL}; /// randomized
    };

    class B_Soldier_AAR_F: B_Soldier_F {// AAR
        backpackItems[] += {WEST_AR_MAG,"ACE_SpareBarrel"};
        linkedItems[] += {"Binocular"};
    };

    class B_Soldier_LAT_F: B_Soldier_F {// AT
        weapons[] = {WEST_CARBINE};
		attachments[] = {};
		backpack[] = {"rhs_assault_umbts"};
		backpackItems[] = {WEST_AT_MAG};
        magazines[] = {WEST_CARBINE_MAG,,WEST_GRENADE,WEST_SMOKE_WHITE};
        launchers[] = {WEST_AT}; /// randomized
    };
// ====================================================================================
// Support Infantry

    class B_HeavyGunner_F: B_Soldier_F {// MMG
        weapons[] = {WEST_MMG};
        magazines[] = {WEST_MMG_MAG,WEST_PISTOL_MAG,WEST_GRENADE,WEST_SMOKE_WHITE};
        handguns[] = {WEST_PISTOL}; /// randomized
        attachments[] = {};
    };

    class B_Soldier_A_F: B_Soldier_F {// MMG Spotter/Ammo Bearer
        backpackItems[] += {WEST_MMG_MAG,"ACE_SpareBarrel"};
        linkedItems[] += {"rhs_pdu4"};
        items[] += {"ACRE_PRC148"};
    };

    class B_soldier_AT_F: B_Soldier_F {// MAT Gunner
        weapons[] = {WEST_CARBINE};
        magazines[] = {WEST_CARBINE_MAG,WEST_GRENADE};
        launchers[] = {WEST_MAT}; /// randomized
        items[] = {"MEDICAL_STANDARD","ACRE_PRC148"};
        backpackItems[] = {WEST_MAT_MAG};
		attachments[] = {"rhs_acc_pgo7v"};
    };

    class B_Soldier_AAT_F: B_Soldier_F {// MAT Spotter/Ammo Bearer
        backpackItems[] = {WEST_MAT_MAG};
        linkedItems[] += {"rhs_pdu4"};
        items[] += {"ACRE_PRC148"};
    };

    class B_soldier_AA_F: B_Soldier_F {// SAM Gunner
        weapons[] = {WEST_CARBINE};
        magazines[] = {WEST_CARBINE_MAG,WEST_GRENADE};
        launchers[] = {WEST_SAM}; /// randomized
		backpackItems[] = {WEST_SAM_MAG};
    };

    class B_Soldier_AAA_F: B_Soldier_F {// SAM Spotter/Ammo Bearer
        backpackItems[] = {WEST_SAM_MAG};
        linkedItems[] += {"rhs_pdu4"};
        items[] += {"ACRE_PRC148"};
    };

    class B_support_Mort_F: B_Soldier_F {// Mortar Gunner
        weapons[] = {WEST_CARBINE};
        magazines[] = {"rhs_30Rnd_545x39_AK:5"};
        items[] = {"MEDICAL_STANDARD","ACE_RangeTable_82mm"};
        backpack[] = {"rhs_assault_umbts"};
		launchers[] = {"B_Mortar_01_weapon_F"};		/// randomized
    };

    class B_support_AMort_F: B_Soldier_F {// Assistant Mortar
        backpack[] = {"rhs_assault_umbts"}; /// randomized
        linkedItems[] += {"rhs_pdu4"};
		magazines[] = {"rhs_30Rnd_545x39_AK:4"};
        items[] = {"MEDICAL_STANDARD","ACRE_PRC148","ACE_RangeTable_82mm"};
		launchers[] = {"B_Mortar_01_support_F"};
    };

    class B_spotter_F {// Spotter
        uniform[] = {"rhs_uniform_gorka_r_g"};  /// randomized
		backpack[] = {"TAC_BP_HSG_AB_B"};
        vest[] = {"rhs_6b13_Flora"}; /// randomized
        headgear[] = {"rhsgref_Booniehat_alpen"}; /// randomized
        weapons[] = {WEST_SPOTTER}; /// randomized
        magazines[] = {WEST_SPOTTER_MAG,WEST_SNIPER_MAG};
        items[] = {"MEDICAL_STANDARD", "ACRE_PRC343", "ACRE_PRC148"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS","rhs_pdu4"};
        attachments[] = {"rhs_acc_1p29"};
    };

    class B_sniper_F {// Sniper
        uniform[] = {"rhs_uniform_gorka_r_g"};  /// randomized
        vest[] = {"rhs_6b13_Flora"}; /// randomized
		backpack[] = {"TAC_BP_HSG_AB_B"};
        headgear[] = {"rhsgref_Booniehat_alpen"}; /// randomized
        weapons[] = {WEST_SNIPER}; /// randomized
        magazines[] = {WEST_SNIPER_MAG};
        items[] = {"MEDICAL_STANDARD", "ACRE_PRC343"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
        attachments[] = {"rhs_acc_pso1m21_svd"};
    };

// ====================================================================================
// Vehicle Infantry

    class B_Helipilot_F {// Pilot
        uniform[] = {"rhs_uniform_df15"};  /// randomized
        backpack[] = {"TAC_BP_HSG_AB_B"};
        vest[] = {}; /// randomized
        headgear[] = {"rhs_zsh7a_mike","rhs_zsh7a_mike_alt"}; /// randomized
        weapons[] = {WEST_SMG}; /// randomized
        magazines[] = {WEST_SMG_MAG,WEST_SMOKE_WHITE};
        backpackItems[] += {"ACE_key_west","ACRE_PRC117F"};
        items[] = {"MEDICAL_STANDARD","ACRE_PRC148"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemGPS","rhs_pdu4","rhs_1PN138"};
    };

    class B_helicrew_F: B_Helipilot_F { // Pilot

    };

    class B_Pilot_F: B_Helipilot_F { // Pilot
        uniform[] = {"rhs_uniform_df15"};  /// randomized
        headgear[] = {"rhs_zsh7a_mike","rhs_zsh7a_mike_alt"}; /// randomized
    };

    class B_crew_F {// Crew
        uniform[] = {"rhsgref_uniform_alpenflage"};  // randomized
        vest[] = {"rhs_6b13_Flora_6sh92_headset_mapcase"}; // randomized
        headgear[] = {"rhs_tsh4","rhs_tsh4_bala"}; /// randomized
        backpack[] = {"TAC_BP_LBT_HBL_B"};
        weapons[] = {WEST_CARBINE}; /// randomized
        magazines[] = {WEST_CARBINE_MAG,WEST_SMOKE_WHITE};
        items[] = {"MEDICAL_STANDARD"};
        backpackItems[] += {"ACE_key_west","ACRE_PRC148","ACRE_PRC117F"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS","rhs_1PN138"};
    };

    class B_soldier_repair_F: B_crew_F {// Repair Specialist
        backpack[] = {"TAC_BP_LBT_HBL_B"};
        backpackItems[] = {"Toolkit"};
        vest[] = {"rhs_6b13_Flora_crewofficer"}; /// randomized
        items[] += {"ACRE_PRC343"};
        linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch"};
    };

    class B_soldier_exp_F: B_soldier_repair_F {// Explosive Specialist
        backpack[] = {};
        backpackItems[] = {"Toolkit","ACE_DefusalKit","ACE_Clacker","MineDetector"};
        magazines[] = {WEST_CARBINE_MAG,"DemoCharge_Remote_Mag:3","SatchelCharge_Remote_Mag:2"};
    };

    class B_engineer_F: B_soldier_repair_F {// Mine Specialist
        backpack[] = {};
        backpackItems[] = {"Toolkit","ACE_DefusalKit","ACE_Clacker","MineDetector"};
        magazines[] = {WEST_CARBINE_MAG,"ATMine_Range_Mag:2","APERSBoundingMine_Range_Mag:2","APERSMine_Range_Mag:2"};
    };

// ====================================================================================
// Special Infantry

    class B_diver_TL_F: B_Soldier_TL_F {// Diver TL
        weapons[] = {SDAR};
		magazines[] = {SDAR_MAG,WEST_CARBINE_MAG,WEST_GRENADE,WEST_SMOKE_WHITE};
		uniform[] = {"U_B_Wetsuit"};  /// randomized
        vest[] = {"V_RebreatherB"}; /// randomized
        backpack[] = {};
        headgear[] = {};

        backpackItems[] += {/*"U_B_CombatUniform_mcam","V_PlateCarrier1_rgr","H_HelmetB",*/WEST_CARBINE};
        linkedItems[] += {"G_B_Diving"};

    };

    class B_diver_F: B_Soldier_F {// Diver
        weapons[] = {SDAR};
		magazines[] = {SDAR_MAG,WEST_CARBINE_MAG,WEST_GRENADE,WEST_SMOKE_WHITE};
		uniform[] = {"U_B_Wetsuit"};  /// randomized
        vest[] = {"V_RebreatherB"}; /// randomized
        backpack[] = {};
        headgear[] = {};

        backpackItems[] += {/*"U_B_CombatUniform_mcam","V_PlateCarrier1_rgr","H_HelmetB",*/WEST_CARBINE};
        linkedItems[] += {"G_B_Diving"};

    };

};
