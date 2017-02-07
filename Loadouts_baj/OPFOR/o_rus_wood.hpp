//Author: TheRob
//Description: Russian Army Alpenflage AK-74
// ====================================================================================

class opf_f {

	// Here we're creating definitions for weapons and magazines that are called later.


	//Rifle
    #define EAST_RIFLE "rhs_weap_ak74m_camo"
    #define EAST_RIFLE_MAG "rhs_30Rnd_545x39_AK:8"

	//GL Rifle
    #define EAST_GLRIFLE "rhs_weap_ak74m_gp25"
    #define EAST_GLRIFLE_MAG "rhs_30Rnd_545x39_AK:8"
    #define EAST_GLRIFLE_MAG_SMOKE "rhs_GRD40_White:4","rhs_GRD40_Red:2","rhs_GRD40_Green:3"
    #define EAST_GLRIFLE_MAG_HE "rhs_VOG25P:6"
    #define EAST_GLRIFLE_MAG_FLARE "rhs_VG40OP_red:2","rhs_VG40OP_white:2"

	//Carbine
    #define EAST_CARBINE "rhs_weap_ak74m_camo"
    #define EAST_CARBINE_MAG "rhs_30Rnd_545x39_AK:8"

	//Diver
	#define SDAR "arifle_SDAR_F"
	#define SDAR_MAG "20Rnd_556x45_UW_mag:6"

    // AR
    #define EAST_AR "hlc_rifle_rpk74n"
    #define EAST_AR_MAG "hlc_45Rnd_545x39_t_rpk:10"

	// AT
    #define EAST_AT "rhs_weap_rpg26"
    #define EAST_AT_MAG ""

	// MMG
    #define EAST_MMG "rhs_weap_pkp"
    #define EAST_MMG_MAG "rhs_100Rnd_762x54mmR_green:8"

	// MAT
    #define EAST_MAT "rhs_weap_rpg7"
    #define EAST_MAT_MAG "rhs_rpg7_PG7VR_mag:4"

	// SAM
    #define EAST_SAM "rhs_weap_fim92"
    #define EAST_SAM_MAG "rhs_fim92_mag:2"

	// Sniper Rifle
    #define EAST_SNIPER "rhs_weap_svdp"
    #define EAST_SNIPER_MAG "rhs_10Rnd_762x54mmR_7N1:8"

   // Spotter Rifle
    #define EAST_SPOTTER "rhs_weap_ak74m_camo"
    #define EAST_SPOTTER_MAG "rhs_30Rnd_545x39_AK:5"

	// SMG
    #define EAST_SMG "rhs_weap_aks74u"
    #define EAST_SMG_MAG "rhs_30Rnd_545x39_AK:5"

   // Pistol
    #define EAST_PISTOL "rhs_weap_pya"
    #define EAST_PISTOL_MAG "rhs_mag_9x19_17:2"

	// Grenades, Smoke and Frag
	#define EAST_GRENADE "rhs_mag_rgd5:2"
	#define EAST_SMOKE_WHITE "rhs_mag_rdg2_white:2"
	#define EAST_SMOKE_GREEN "rhs_mag_rdg2_black"
	#define EAST_SMOKE_RED "rhs_mag_rdg2_white"


// ====================================================================================

    class Car {
        TransportMagazines[] = {EAST_RIFLE_MAG,EAST_RIFLE_MAG,EAST_CARBINE_MAG,EAST_AR_MAG,EAST_AR_MAG,EAST_GLRIFLE_MAG_HE,};
        TransportItems[] = {"MEDICAL_VEHICLE"};
    };

    class Tank {
        TransportMagazines[] = {EAST_RIFLE_MAG,EAST_RIFLE_MAG,EAST_CARBINE_MAG,EAST_AR_MAG,EAST_AR_MAG,EAST_GLRIFLE_MAG_HE,};
        TransportItems[] = {"MEDICAL_VEHICLE"};
    };

    class Helicopter {
        TransportMagazines[] = {EAST_RIFLE_MAG,EAST_RIFLE_MAG,EAST_CARBINE_MAG,EAST_AR_MAG,EAST_AR_MAG,EAST_GLRIFLE_MAG_HE};
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

    class O_Soldier_F {// rifleman
        uniform[] = {"rhsgref_uniform_alpenflage"};  /// randomized
        vest[] = {"rhs_6b13_Flora"}; /// randomized
        headgear[] = {"rhsgref_Booniehat_alpen"}; /// randomized
        backpack[] = {"rhs_assault_umbts"}; /// randomized
        backpackItems[] = {"MEDICAL_STANDARD","ACE_IR_Strobe_item"};
        weapons[] = {EAST_RIFLE}; /// randomized
        launchers[] = {}; /// randomized
        handguns[] = {}; /// randomized
        magazines[] = {EAST_RIFLE_MAG,EAST_GRENADE,EAST_SMOKE_WHITE};
        items[] = {"ACRE_PRC343","ACE_Flashlight_MX991"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","rhs_1PN138"};
        attachments[] = {};
    };

    class O_officer_F: O_Soldier_F {// CO and DC
        weapons[] = {EAST_GLRIFLE};
        vest[] = {"rhs_6b13_Flora_6sh92_radio"}; /// randomized
        headgear[] = {"rhsgref_Booniehat_alpen"}; /// randomized
        magazines[] = {EAST_GLRIFLE_MAG,EAST_GLRIFLE_MAG_SMOKE,EAST_GLRIFLE_MAG_FLARE,EAST_PISTOL_MAG,EAST_GRENADE,EAST_SMOKE_WHITE,EAST_SMOKE_GREEN};
        handguns[] = {EAST_PISTOL}; /// randomized
        backpackItems[] += {"ACE_key_west", "ACRE_PRC117F",EAST_GLRIFLE_MAG_HE};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","rhs_pdu4","ItemGPS","rhs_1PN138"};
        items[] = {"ACE_MapTools","ACRE_PRC148","ACE_Flashlight_MX991"};
    };

    class O_Soldier_SL_F: O_Officer_F {// SL
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","rhs_pdu4","ItemGPS","Binocular","rhs_1PN138"};
        items[] = {"ACE_MapTools","ACRE_PRC148", "ACRE_PRC343","ACE_Flashlight_MX991"};
        backpackItems[] = {"MEDICAL_LEADER","ACE_IR_Strobe_item",EAST_GLRIFLE_MAG_HE};
    };

    class O_soldier_UAV_F: O_Soldier_F {
        backpack[] = {"B_UAV_01_backpack_F"}; /// randomized
        linkedItems[] += {"B_uavterminal"};
    };

	class O_medic_F: O_Soldier_F {// Medic
        vest[] = {"rhsgref_6b23_khaki_medic"}; /// randomized
		backpack[] = {"rhs_assault_umbts"}; /// randomized
        weapons[] = {EAST_CARBINE};
        magazines[] = {EAST_CARBINE_MAG,EAST_SMOKE_WHITE};
        backpackItems[] = {"MEDICAL_MEDIC","ACE_tourniquet:8"};
    };

// ====================================================================================
// Grunt Infantry

    class O_Soldier_TL_F: O_Soldier_F {// FTL
        weapons[] = {EAST_GLRIFLE};
        headgear[] = {"rhsgref_Booniehat_alpen"}; /// randomized
        magazines[] = {EAST_GLRIFLE_MAG};
        backpackItems[] += {"ACE_key_west",EAST_GLRIFLE_MAG_HE,EAST_GLRIFLE_MAG_SMOKE,EAST_GLRIFLE_MAG_FLARE,EAST_SMOKE_WHITE,EAST_GRENADE,EAST_SMOKE_WHITE,EAST_GRENADE,EAST_SMOKE_WHITE};
        linkedItems[] += {"ItemGPS","Binocular"};
    };

    class O_Soldier_AR_F: O_Soldier_F {// AR
        vest[] = {"rhs_6b13_Flora_6sh92"}; /// randomized
        weapons[] = {EAST_AR};
        magazines[] = {EAST_AR_MAG,EAST_PISTOL_MAG,EAST_GRENADE,EAST_SMOKE_WHITE};
        handguns[] = {EAST_PISTOL}; /// randomized
    };

    class O_Soldier_AAR_F: O_Soldier_F {// AAR
        backpackItems[] += {EAST_AR_MAG,"ACE_SpareBarrel"};
        linkedItems[] += {"Binocular"};
    };

    class O_Soldier_LAT_F: O_Soldier_F {// AT
        weapons[] = {EAST_CARBINE};
		attachments[] = {};
		backpack[] = {"rhs_assault_umbts"};
		backpackItems[] = {EAST_AT_MAG};
        magazines[] = {EAST_CARBINE_MAG,,EAST_GRENADE,EAST_SMOKE_WHITE};
        launchers[] = {EAST_AT}; /// randomized
    };
// ====================================================================================
// Support Infantry

    class O_HeavyGunner_F: O_Soldier_F {// MMG
        weapons[] = {EAST_MMG};
        magazines[] = {EAST_MMG_MAG,EAST_PISTOL_MAG,EAST_GRENADE,EAST_SMOKE_WHITE};
        handguns[] = {EAST_PISTOL}; /// randomized
        attachments[] = {};
    };

    class O_Soldier_A_F: O_Soldier_F {// MMG Spotter/Ammo Bearer
        backpackItems[] += {EAST_MMG_MAG,"ACE_SpareBarrel"};
        linkedItems[] += {"rhs_pdu4"};
        items[] += {"ACRE_PRC148"};
    };

    class O_soldier_AT_F: O_Soldier_F {// MAT Gunner
        weapons[] = {EAST_CARBINE};
        magazines[] = {EAST_CARBINE_MAG,EAST_GRENADE};
        launchers[] = {EAST_MAT}; /// randomized
        items[] = {"MEDICAL_STANDARD","ACRE_PRC148"};
        backpackItems[] = {EAST_MAT_MAG};
		attachments[] = {"rhs_acc_pgo7v"};
    };

    class O_Soldier_AAT_F: O_Soldier_F {// MAT Spotter/Ammo Bearer
        backpackItems[] = {EAST_MAT_MAG};
        linkedItems[] += {"rhs_pdu4"};
        items[] += {"ACRE_PRC148"};
    };

    class O_soldier_AA_F: O_Soldier_F {// SAM Gunner
        weapons[] = {EAST_CARBINE};
        magazines[] = {EAST_CARBINE_MAG,EAST_GRENADE};
        launchers[] = {EAST_SAM}; /// randomized
		backpackItems[] = {EAST_SAM_MAG};
    };

    class O_Soldier_AAA_F: O_Soldier_F {// SAM Spotter/Ammo Bearer
        backpackItems[] = {EAST_SAM_MAG};
        linkedItems[] += {"rhs_pdu4"};
        items[] += {"ACRE_PRC148"};
    };

    class O_support_Mort_F: O_Soldier_F {// Mortar Gunner
        weapons[] = {EAST_CARBINE};
        magazines[] = {"rhs_30Rnd_545x39_AK:5"};
        items[] = {"MEDICAL_STANDARD","ACE_RangeTable_82mm"};
        backpack[] = {"rhs_assault_umbts"};
		launchers[] = {"B_Mortar_01_weapon_F"};		/// randomized
    };

    class O_support_AMort_F: O_Soldier_F {// Assistant Mortar
        backpack[] = {"rhs_assault_umbts"}; /// randomized
        linkedItems[] += {"rhs_pdu4"};
		magazines[] = {"rhs_30Rnd_545x39_AK:4"};
        items[] = {"MEDICAL_STANDARD","ACRE_PRC148","ACE_RangeTable_82mm"};
		launchers[] = {"B_Mortar_01_support_F"};
    };

    class O_spotter_F {// Spotter
        uniform[] = {"rhs_uniform_gorka_r_g"};  /// randomized
		backpack[] = {"TAC_BP_HSG_AB_B"};
        vest[] = {"rhs_6b13_Flora"}; /// randomized
        headgear[] = {"rhsgref_Booniehat_alpen"}; /// randomized
        weapons[] = {EAST_SPOTTER}; /// randomized
        magazines[] = {EAST_SPOTTER_MAG,EAST_SNIPER_MAG};
        items[] = {"MEDICAL_STANDARD", "ACRE_PRC343", "ACRE_PRC148"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS","rhs_pdu4"};
        attachments[] = {"rhs_acc_1p29"};
    };

    class O_sniper_F {// Sniper
        uniform[] = {"rhs_uniform_gorka_r_g"};  /// randomized
        vest[] = {"rhs_6b13_Flora"}; /// randomized
		backpack[] = {"TAC_BP_HSG_AB_B"};
        headgear[] = {"rhsgref_Booniehat_alpen"}; /// randomized
        weapons[] = {EAST_SNIPER}; /// randomized
        magazines[] = {EAST_SNIPER_MAG};
        items[] = {"MEDICAL_STANDARD", "ACRE_PRC343"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
        attachments[] = {"rhs_acc_pso1m21_svd"};
    };

// ====================================================================================
// Vehicle Infantry

    class O_Helipilot_F {// Pilot
        uniform[] = {"rhs_uniform_df15"};  /// randomized
        backpack[] = {"TAC_BP_HSG_AB_B"};
        vest[] = {}; /// randomized
        headgear[] = {"rhs_zsh7a_mike","rhs_zsh7a_mike_alt"}; /// randomized
        weapons[] = {EAST_SMG}; /// randomized
        magazines[] = {EAST_SMG_MAG,EAST_SMOKE_WHITE};
        backpackItems[] += {"ACE_key_west","ACRE_PRC117F"};
        items[] = {"MEDICAL_STANDARD","ACRE_PRC148"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemGPS","rhs_pdu4","rhs_1PN138"};
    };

    class O_helicrew_F: O_Helipilot_F { // Pilot

    };

    class O_Pilot_F: O_Helipilot_F { // Pilot
        uniform[] = {"rhs_uniform_df15"};  /// randomized
        headgear[] = {"rhs_zsh7a_mike","rhs_zsh7a_mike_alt"}; /// randomized
    };

    class O_crew_F {// Crew
        uniform[] = {"rhsgref_uniform_alpenflage"};  // randomized
        vest[] = {"rhs_6b13_Flora_6sh92_headset_mapcase"}; // randomized
        headgear[] = {"rhs_tsh4","rhs_tsh4_bala"}; /// randomized
        backpack[] = {"TAC_BP_LBT_HBL_B"};
        weapons[] = {EAST_CARBINE}; /// randomized
        magazines[] = {EAST_CARBINE_MAG,EAST_SMOKE_WHITE};
        items[] = {"MEDICAL_STANDARD"};
        backpackItems[] += {"ACE_key_west","ACRE_PRC148","ACRE_PRC117F"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS","rhs_1PN138"};
    };

    class O_soldier_repair_F: O_crew_F {// Repair Specialist
        backpack[] = {"TAC_BP_LBT_HBL_B"};
        backpackItems[] = {"Toolkit"};
        vest[] = {"rhs_6b13_Flora_crewofficer"}; /// randomized
        items[] += {"ACRE_PRC343"};
        linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch"};
    };

    class O_soldier_exp_F: O_soldier_repair_F {// Explosive Specialist
        backpack[] = {};
        backpackItems[] = {"Toolkit","ACE_DefusalKit","ACE_Clacker","MineDetector"};
        magazines[] = {EAST_CARBINE_MAG,"DemoCharge_Remote_Mag:3","SatchelCharge_Remote_Mag:2"};
    };

    class O_engineer_F: O_soldier_repair_F {// Mine Specialist
        backpack[] = {};
        backpackItems[] = {"Toolkit","ACE_DefusalKit","ACE_Clacker","MineDetector"};
        magazines[] = {EAST_CARBINE_MAG,"ATMine_Range_Mag:2","APERSBoundingMine_Range_Mag:2","APERSMine_Range_Mag:2"};
    };

// ====================================================================================
// Special Infantry

    class O_diver_TL_F: O_Soldier_TL_F {// Diver TL
        weapons[] = {SDAR};
		magazines[] = {SDAR_MAG,EAST_CARBINE_MAG,EAST_GRENADE,EAST_SMOKE_WHITE};
		uniform[] = {"U_B_Wetsuit"};  /// randomized
        vest[] = {"V_RebreatherB"}; /// randomized
        backpack[] = {};
        headgear[] = {};

        backpackItems[] += {/*"U_B_CombatUniform_mcam","V_PlateCarrier1_rgr","H_HelmetB",*/EAST_CARBINE};
        linkedItems[] += {"G_B_Diving"};

    };

    class O_diver_F: O_Soldier_F {// Diver
        weapons[] = {SDAR};
		magazines[] = {SDAR_MAG,EAST_CARBINE_MAG,EAST_GRENADE,EAST_SMOKE_WHITE};
		uniform[] = {"U_B_Wetsuit"};  /// randomized
        vest[] = {"V_RebreatherB"}; /// randomized
        backpack[] = {};
        headgear[] = {};

        backpackItems[] += {/*"U_B_CombatUniform_mcam","V_PlateCarrier1_rgr","H_HelmetB",*/EAST_CARBINE};
        linkedItems[] += {"G_B_Diving"};

    };

};
