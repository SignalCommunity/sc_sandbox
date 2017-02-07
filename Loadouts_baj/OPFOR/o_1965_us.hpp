//Author: TheRob
//Description: 1965 US Army
// ====================================================================================

class opf_f {

	// Here we're creating definitions for weapons and magazines that are called later.


	//Rifle
    #define EAST_RIFLE "hlc_rifle_M14"
    #define EAST_RIFLE_MAG "hlc_20Rnd_762x51_B_M14:6","hlc_20Rnd_762x51_T_M14:4"
    
	//GL Rifle
    #define EAST_GLRIFLE "hlc_rifle_M14"
    #define EAST_GLRIFLE_MAG "hlc_20Rnd_762x51_B_M14:6","hlc_20Rnd_762x51_T_M14:4"
    
	//Carbine
    #define EAST_CARBINE "hlc_rifle_M14"
    #define EAST_CARBINE_MAG "hlc_20Rnd_762x51_B_M14:6","hlc_20Rnd_762x51_T_M14:4"
	
	//Diver
	#define SDAR "arifle_SDAR_F"
	#define SDAR_MAG "20Rnd_556x45_UW_mag:6"
   
    // AR
    #define EAST_AR "hlc_lmg_m60"
    #define EAST_AR_MAG "hlc_100Rnd_762x51_B_M60E4:6"
    #define EAST_AR_MAG2 "hlc_100Rnd_762x51_B_M60E4:5"
    
	// AT
    #define EAST_AT "rhs_weap_m72a7"
    #define EAST_AT_MAG "rhs_rpg26_mag"
    
	// MMG
    #define EAST_MMG "hlc_lmg_m60"
    #define EAST_MMG_MAG "hlc_100Rnd_762x51_B_M60E4:8"
    
	// MAT
    #define EAST_MAT "rhs_weap_m72a7"
    #define EAST_MAT_MAG "rhs_rpg26_mag"
    
	// SAM
    #define EAST_SAM "rhs_weap_fim92"
    #define EAST_SAM_MAG "rhs_fim92_mag:2"
    
	// Sniper Rifle
    #define EAST_SNIPER "rhs_weap_m24sws_blk"
    #define EAST_SNIPER_MAG "rhsusf_5Rnd_762x51_m118_special_Mag:8"
   
   // Spotter Rifle
    #define EAST_SPOTTER "hlc_rifle_M14"
    #define EAST_SPOTTER_MAG "hlc_20Rnd_762x51_B_M14:6","hlc_20Rnd_762x51_T_M14:4"
    
	// SMG
    #define EAST_SMG "hlc_rifle_M14"
    #define EAST_SMG_MAG "hlc_20Rnd_762x51_B_M14:6","hlc_20Rnd_762x51_T_M14:4"
   
   // Pistol
    #define EAST_PISTOL "hgun_ACPC2_F"
    #define EAST_PISTOL_MAG "9Rnd_45ACP_Mag:4"
	
	// Grenades, Smoke and Frag
	#define EAST_GRENADE "HandGrenade:2"
	#define EAST_SMOKE_WHITE "SmokeShell:2"
	#define EAST_SMOKE_GREEN "SmokeShellGreen"
	#define EAST_SMOKE_RED "SmokeShellRed"


// ====================================================================================

    class Car {
        TransportMagazines[] = {EAST_RIFLE_MAG,EAST_RIFLE_MAG,EAST_CARBINE_MAG,EAST_AR_MAG,EAST_AR_MAG};
        TransportItems[] = {"MEDICAL_VEHICLE"};
    };

    class Tank {
        TransportMagazines[] = {EAST_RIFLE_MAG,EAST_RIFLE_MAG,EAST_CARBINE_MAG,EAST_AR_MAG,EAST_AR_MAG};
        TransportItems[] = {"MEDICAL_VEHICLE"};
    };

    class Helicopter {
        TransportMagazines[] = {EAST_RIFLE_MAG,EAST_RIFLE_MAG,EAST_CARBINE_MAG,EAST_AR_MAG,EAST_AR_MAG};
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
        uniform[] = {"usm_bdu_odg"};  /// randomized
        vest[] = {"usm_vest_LBE_rmp_m","usm_vest_LBE_rm","usm_vest_LBE_rmp"}; /// randomized
        headgear[] = {"usm_bdu_boonie_odg","MNP_Helmet_PAGST_OD"}; /// randomized
        backpack[] = {"usm_pack_alice"}; /// randomized
        backpackItems[] = {"MEDICAL_STANDARD"};
        weapons[] = {EAST_RIFLE}; /// randomized
        launchers[] = {}; /// randomized
        handguns[] = {}; /// randomized
        magazines[] = {EAST_RIFLE_MAG,EAST_GRENADE,EAST_SMOKE_WHITE};
        items[] = {"ACRE_PRC343","ACE_Flashlight_MX991"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
        attachments[] = {};
    };

    class O_officer_F: O_Soldier_F {// CO and DC
        weapons[] = {EAST_GLRIFLE};
        vest[] = {"rhs_vest_commander"}; /// randomized
        headgear[] = {"usm_bdu_boonie_odg","usm_bdu_8point_odg"}; /// randomized
		backpack[] = {"usm_pack_alice_prc77"};
        magazines[] = {EAST_GLRIFLE_MAG,EAST_PISTOL_MAG,EAST_GRENADE,EAST_SMOKE_WHITE,EAST_SMOKE_GREEN};
        handguns[] = {EAST_PISTOL}; /// randomized
        backpackItems[] += {"ACE_key_west","ACRE_PRC117F"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
        items[] = {"ACE_MapTools","ACRE_PRC148","ACE_Flashlight_MX991"};
    };

    class O_Soldier_SL_F: O_Officer_F {// SL
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","Binocular"};
		backpack[] = {"usm_pack_alice_prc77"};
        items[] = {"ACE_MapTools","ACRE_PRC148","ACRE_PRC343","ACE_Flashlight_MX991"};
        backpackItems[] = {"MEDICAL_LEADER"};
    };

    class O_soldier_UAV_F: O_Soldier_F {
        backpack[] = {"B_UAV_01_backpack_F"}; /// randomized
        linkedItems[] += {"B_uavterminal"};
    };

	class O_medic_F: O_Soldier_F {// Medic
        vest[] = {"usm_vest_LBE_rm"}; /// randomized
		backpack[] = {"usm_pack_m5_medic"}; /// randomized
        weapons[] = {EAST_CARBINE};
        magazines[] = {EAST_CARBINE_MAG,EAST_SMOKE_WHITE};
        backpackItems[] = {"MEDICAL_MEDIC","ACE_tourniquet:8"};
    };

// ====================================================================================
// Grunt Infantry

    class O_Soldier_TL_F: O_Soldier_F {// FTL
        weapons[] = {EAST_GLRIFLE};
		backpack[] = {"usm_pack_alice_prc77"};
        headgear[] = {"usm_bdu_8point_odg","usm_bdu_boonie_odg","MNP_Helmet_PAGST_OD"}; /// randomized
        magazines[] = {EAST_GLRIFLE_MAG};
        backpackItems[] += {"ACE_key_west",EAST_SMOKE_WHITE,EAST_GRENADE,EAST_SMOKE_WHITE,EAST_GRENADE,EAST_SMOKE_WHITE};
        linkedItems[] += {"ItemGPS","Binocular"};
    };

    class O_Soldier_AR_F: O_Soldier_F {// AR
        vest[] = {"usm_vest_LBE_mg"}; /// randomized
        weapons[] = {EAST_AR};
		backpack[] = {"usm_pack_200rnd_556_bandoliers"};
        magazines[] = {EAST_AR_MAG,EAST_PISTOL_MAG,EAST_GRENADE,EAST_SMOKE_WHITE};
        handguns[] = {EAST_PISTOL}; /// randomized
    };

    class O_Soldier_AAR_F: O_Soldier_F {// AAR
		backpack[] = {"usm_pack_200rnd_556_bandoliers"};
        backpackItems[] += {EAST_AR_MAG,"ACE_SpareBarrel"};
        linkedItems[] += {"Binocular"};
    };

    class O_Soldier_LAT_F: O_Soldier_F {// AT
        weapons[] = {EAST_CARBINE};
		attachments[] = {};
		backpackItems[] = {};
        magazines[] = {EAST_CARBINE_MAG,,EAST_GRENADE,EAST_SMOKE_WHITE};
        launchers[] = {EAST_AT}; /// randomized
    };
// ====================================================================================
// Support Infantry

    class O_HeavyGunner_F: O_Soldier_F {// MMG
        weapons[] = {EAST_MMG};
        magazines[] = {EAST_MMG_MAG,EAST_PISTOL_MAG,EAST_GRENADE,EAST_SMOKE_WHITE};
        handguns[] = {EAST_PISTOL}; /// randomized
        attachments[] = {"rhsusf_acc_ACOG_sa"};
    };

    class O_Soldier_A_F: O_Soldier_F {// MMG Spotter/Ammo Bearer
        backpackItems[] += {EAST_MMG_MAG,"ACE_SpareBarrel"};
        linkedItems[] += {"Binocular"};
        items[] += {"ACRE_PRC148"};
    };

    class O_soldier_AT_F: O_Soldier_F {// MAT Gunner
        weapons[] = {EAST_CARBINE};
        magazines[] = {EAST_CARBINE_MAG,EAST_GRENADE};
        launchers[] = {EAST_MAT}; /// randomized
        items[] = {"MEDICAL_STANDARD","ACRE_PRC148"};
        backpackItems[] = {};
		attachments[] = {"rhs_weap_optic_smaw"};
    };

    class O_Soldier_AAT_F: O_Soldier_F {// MAT Spotter/Ammo Bearer
        backpackItems[] = {};
		launchers[] = {EAST_MAT};
        linkedItems[] += {"Binocular"};
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
        linkedItems[] += {"Binocular"};
        items[] += {"ACRE_PRC148"};
    };

    class O_support_Mort_F: O_Soldier_F {// Mortar Gunner
        weapons[] = {EAST_CARBINE};
        magazines[] = {"30Rnd_556x45_Stanag_Tracer_Red:5"};
        items[] = {"MEDICAL_STANDARD","ACE_RangeTable_82mm"};
        backpack[] = {"usm_pack_alice"};
		launchers[] = {"B_Mortar_01_weapon_F"};		/// randomized
    };

    class O_support_AMort_F: O_Soldier_F {// Assistant Mortar
        backpack[] = {"usm_pack_alice"}; /// randomized
        linkedItems[] += {"Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag_Tracer_Red:4"};
        items[] = {"MEDICAL_STANDARD","ACRE_PRC148","ACE_RangeTable_82mm"};
		launchers[] = {"B_Mortar_01_support_F"};
    };

    class O_spotter_F {// Spotter
        uniform[] = {"usm_bdu_odg"};  /// randomized
		backpack[] = {"usm_pack_alice"};
        vest[] = {"TAC_FS_FO_G"}; /// randomized
        headgear[] = {}; /// randomized
        weapons[] = {EAST_SPOTTER}; /// randomized
        magazines[] = {EAST_SPOTTER_MAG};
        items[] = {"MEDICAL_STANDARD", "ACRE_PRC343","ACRE_PRC148"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","Binocular"};
        attachments[] = {"rhsusf_acc_ACOG_sa"};
    };

    class O_sniper_F {// Sniper
        uniform[] = {"usm_bdu_odg"};  /// randomized
        vest[] = {"TAC_FS_FO_G"}; /// randomized
		backpack[] = {};
        headgear[] = {}; /// randomized
        weapons[] = {EAST_SNIPER}; /// randomized
        magazines[] = {EAST_SNIPER_MAG};
        items[] = {"MEDICAL_STANDARD", "ACRE_PRC343","ACRE_PRC148"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
        attachments[] = {"ACE_optic_LRPS_PIP"};
    };

// ====================================================================================
// Vehicle Infantry

    class O_Helipilot_F {// Pilot
        uniform[] = {"usm_bdu_odg"};  /// randomized
        backpack[] = {"rhsusf_cvc_green_helmet"};
        vest[] = {"usm_vest_LBE_rmp_m"}; /// randomized
        headgear[] = {"rhsusf_cvc_green_helmet","rhsusf_cvc_green_ess"}; /// randomized
        weapons[] = {EAST_SMG}; /// randomized
        magazines[] = {EAST_SMG_MAG,EAST_SMOKE_WHITE};
        backpackItems[] += {"ACE_key_west","ACRE_PRC117F"};
        items[] = {"MEDICAL_STANDARD","ACRE_PRC148"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
    };

    class O_helicrew_F: O_Helipilot_F { // Pilot

    };

    class O_Pilot_F: O_Helipilot_F { // Pilot
        uniform[] = {"usm_bdu_odg"};  /// randomized
        headgear[] = {"rhsusf_cvc_green_helmet","rhsusf_cvc_green_ess"}; /// randomized
    };

    class O_crew_F {// Crew
        uniform[] = {"usm_bdu_odg"};  // randomized
        vest[] = {"usm_vest_LBE_rmp_m"}; // randomized
        headgear[] = {"rhsusf_cvc_green_helmet","rhsusf_cvc_green_ess"}; /// randomized
        backpack[] = {};
        weapons[] = {EAST_CARBINE}; /// randomized
        magazines[] = {EAST_CARBINE_MAG,EAST_SMOKE_WHITE};
        items[] = {"MEDICAL_STANDARD"};
        backpackItems[] += {"ACE_key_west","ACRE_PRC148","ACRE_PRC117F"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
    };

    class O_soldier_repair_F: O_crew_F {// Repair Specialist
        backpack[] = {};
        backpackItems[] = {"Toolkit"};
        vest[] = {"usm_vest_LBE_rmp_m"}; /// randomized
        items[] += {"ACRE_PRC343"};
        linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch","Binocular"};
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
