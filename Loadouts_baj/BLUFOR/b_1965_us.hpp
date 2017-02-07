//Author: TheRob
//Description: 1965 US Army
// ====================================================================================

class blu_f {

	// Here we're creating definitions for weapons and magazines that are called later.


	//Rifle
    #define WEST_RIFLE "hlc_rifle_M14"
    #define WEST_RIFLE_MAG "hlc_20Rnd_762x51_B_M14:6","hlc_20Rnd_762x51_T_M14:4"
    
	//GL Rifle
    #define WEST_GLRIFLE "hlc_rifle_M14"
    #define WEST_GLRIFLE_MAG "hlc_20Rnd_762x51_B_M14:6","hlc_20Rnd_762x51_T_M14:4"
    
	//Carbine
    #define WEST_CARBINE "hlc_rifle_M14"
    #define WEST_CARBINE_MAG "hlc_20Rnd_762x51_B_M14:6","hlc_20Rnd_762x51_T_M14:4"
	
	//Diver
	#define SDAR "arifle_SDAR_F"
	#define SDAR_MAG "20Rnd_556x45_UW_mag:6"
   
    // AR
    #define WEST_AR "hlc_lmg_m60"
    #define WEST_AR_MAG "hlc_100Rnd_762x51_B_M60E4:6"
    #define WEST_AR_MAG2 "hlc_100Rnd_762x51_B_M60E4:5"
    
	// AT
    #define WEST_AT "rhs_weap_m72a7"
    #define WEST_AT_MAG "rhs_rpg26_mag"
    
	// MMG
    #define WEST_MMG "hlc_lmg_m60"
    #define WEST_MMG_MAG "hlc_100Rnd_762x51_B_M60E4:8"
    
	// MAT
    #define WEST_MAT "rhs_weap_m72a7"
    #define WEST_MAT_MAG "rhs_rpg26_mag"
    
	// SAM
    #define WEST_SAM "rhs_weap_fim92"
    #define WEST_SAM_MAG "rhs_fim92_mag:2"
    
	// Sniper Rifle
    #define WEST_SNIPER "rhs_weap_m24sws_blk"
    #define WEST_SNIPER_MAG "rhsusf_5Rnd_762x51_m118_special_Mag:8"
   
   // Spotter Rifle
    #define WEST_SPOTTER "hlc_rifle_M14"
    #define WEST_SPOTTER_MAG "hlc_20Rnd_762x51_B_M14:6","hlc_20Rnd_762x51_T_M14:4"
    
	// SMG
    #define WEST_SMG "hlc_rifle_M14"
    #define WEST_SMG_MAG "hlc_20Rnd_762x51_B_M14:6","hlc_20Rnd_762x51_T_M14:4"
   
   // Pistol
    #define WEST_PISTOL "hgun_ACPC2_F"
    #define WEST_PISTOL_MAG "9Rnd_45ACP_Mag:4"
	
	// Grenades, Smoke and Frag
	#define WEST_GRENADE "HandGrenade:2"
	#define WEST_SMOKE_WHITE "SmokeShell:2"
	#define WEST_SMOKE_GREEN "SmokeShellGreen"
	#define WEST_SMOKE_RED "SmokeShellRed"


// ====================================================================================

    class Car {
        TransportMagazines[] = {WEST_RIFLE_MAG,WEST_RIFLE_MAG,WEST_CARBINE_MAG,WEST_AR_MAG,WEST_AR_MAG};
        TransportItems[] = {"MEDICAL_VEHICLE"};
    };

    class Tank {
        TransportMagazines[] = {WEST_RIFLE_MAG,WEST_RIFLE_MAG,WEST_CARBINE_MAG,WEST_AR_MAG,WEST_AR_MAG};
        TransportItems[] = {"MEDICAL_VEHICLE"};
    };

    class Helicopter {
        TransportMagazines[] = {WEST_RIFLE_MAG,WEST_RIFLE_MAG,WEST_CARBINE_MAG,WEST_AR_MAG,WEST_AR_MAG};
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
        uniform[] = {"usm_bdu_odg"};  /// randomized
        vest[] = {"usm_vest_LBE_rmp_m","usm_vest_LBE_rm","usm_vest_LBE_rmp"}; /// randomized
        headgear[] = {"usm_bdu_boonie_odg","MNP_Helmet_PAGST_OD"}; /// randomized
        backpack[] = {"usm_pack_alice"}; /// randomized
        backpackItems[] = {"MEDICAL_STANDARD"};
        weapons[] = {WEST_RIFLE}; /// randomized
        launchers[] = {}; /// randomized
        handguns[] = {}; /// randomized
        magazines[] = {WEST_RIFLE_MAG,WEST_GRENADE,WEST_SMOKE_WHITE};
        items[] = {"ACRE_PRC343","ACE_Flashlight_MX991"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
        attachments[] = {};
    };

    class B_officer_F: B_Soldier_F {// CO and DC
        weapons[] = {WEST_GLRIFLE};
        vest[] = {"rhs_vest_commander"}; /// randomized
        headgear[] = {"usm_bdu_boonie_odg","usm_bdu_8point_odg"}; /// randomized
		backpack[] = {"usm_pack_alice_prc77"};
        magazines[] = {WEST_GLRIFLE_MAG,WEST_PISTOL_MAG,WEST_GRENADE,WEST_SMOKE_WHITE,WEST_SMOKE_GREEN};
        handguns[] = {WEST_PISTOL}; /// randomized
        backpackItems[] += {"ACE_key_west","ACRE_PRC117F"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
        items[] = {"ACE_MapTools","ACRE_PRC148","ACE_Flashlight_MX991"};
    };

    class B_Soldier_SL_F: B_Officer_F {// SL
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","Binocular"};
		backpack[] = {"usm_pack_alice_prc77"};
        items[] = {"ACE_MapTools","ACRE_PRC148","ACRE_PRC343","ACE_Flashlight_MX991"};
        backpackItems[] = {"MEDICAL_LEADER"};
    };

    class B_soldier_UAV_F: B_Soldier_F {
        backpack[] = {"B_UAV_01_backpack_F"}; /// randomized
        linkedItems[] += {"B_uavterminal"};
    };

	class B_medic_F: B_Soldier_F {// Medic
        vest[] = {"usm_vest_LBE_rm"}; /// randomized
		backpack[] = {"usm_pack_m5_medic"}; /// randomized
        weapons[] = {WEST_CARBINE};
        magazines[] = {WEST_CARBINE_MAG,WEST_SMOKE_WHITE};
        backpackItems[] = {"MEDICAL_MEDIC","ACE_tourniquet:8"};
    };

// ====================================================================================
// Grunt Infantry

    class B_Soldier_TL_F: B_Soldier_F {// FTL
        weapons[] = {WEST_GLRIFLE};
		backpack[] = {"usm_pack_alice_prc77"};
        headgear[] = {"usm_bdu_8point_odg","usm_bdu_boonie_odg","MNP_Helmet_PAGST_OD"}; /// randomized
        magazines[] = {WEST_GLRIFLE_MAG};
        backpackItems[] += {"ACE_key_west",WEST_SMOKE_WHITE,WEST_GRENADE,WEST_SMOKE_WHITE,WEST_GRENADE,WEST_SMOKE_WHITE};
        linkedItems[] += {"ItemGPS","Binocular"};
    };

    class B_Soldier_AR_F: B_Soldier_F {// AR
        vest[] = {"usm_vest_LBE_mg"}; /// randomized
        weapons[] = {WEST_AR};
		backpack[] = {"usm_pack_200rnd_556_bandoliers"};
        magazines[] = {WEST_AR_MAG,WEST_PISTOL_MAG,WEST_GRENADE,WEST_SMOKE_WHITE};
        handguns[] = {WEST_PISTOL}; /// randomized
    };

    class B_Soldier_AAR_F: B_Soldier_F {// AAR
		backpack[] = {"usm_pack_200rnd_556_bandoliers"};
        backpackItems[] += {WEST_AR_MAG,"ACE_SpareBarrel"};
        linkedItems[] += {"Binocular"};
    };

    class B_Soldier_LAT_F: B_Soldier_F {// AT
        weapons[] = {WEST_CARBINE};
		attachments[] = {};
		backpackItems[] = {};
        magazines[] = {WEST_CARBINE_MAG,,WEST_GRENADE,WEST_SMOKE_WHITE};
        launchers[] = {WEST_AT}; /// randomized
    };
// ====================================================================================
// Support Infantry

    class B_HeavyGunner_F: B_Soldier_F {// MMG
        weapons[] = {WEST_MMG};
        magazines[] = {WEST_MMG_MAG,WEST_PISTOL_MAG,WEST_GRENADE,WEST_SMOKE_WHITE};
        handguns[] = {WEST_PISTOL}; /// randomized
        attachments[] = {"rhsusf_acc_ACOG_sa"};
    };

    class B_Soldier_A_F: B_Soldier_F {// MMG Spotter/Ammo Bearer
        backpackItems[] += {WEST_MMG_MAG,"ACE_SpareBarrel"};
        linkedItems[] += {"Binocular"};
        items[] += {"ACRE_PRC148"};
    };

    class B_soldier_AT_F: B_Soldier_F {// MAT Gunner
        weapons[] = {WEST_CARBINE};
        magazines[] = {WEST_CARBINE_MAG,WEST_GRENADE};
        launchers[] = {WEST_MAT}; /// randomized
        items[] = {"MEDICAL_STANDARD","ACRE_PRC148"};
        backpackItems[] = {};
		attachments[] = {"rhs_weap_optic_smaw"};
    };

    class B_Soldier_AAT_F: B_Soldier_F {// MAT Spotter/Ammo Bearer
        backpackItems[] = {};
		launchers[] = {WEST_MAT};
        linkedItems[] += {"Binocular"};
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
        linkedItems[] += {"Binocular"};
        items[] += {"ACRE_PRC148"};
    };

    class B_support_Mort_F: B_Soldier_F {// Mortar Gunner
        weapons[] = {WEST_CARBINE};
        magazines[] = {"30Rnd_556x45_Stanag_Tracer_Red:5"};
        items[] = {"MEDICAL_STANDARD","ACE_RangeTable_82mm"};
        backpack[] = {"usm_pack_alice"};
		launchers[] = {"B_Mortar_01_weapon_F"};		/// randomized
    };

    class B_support_AMort_F: B_Soldier_F {// Assistant Mortar
        backpack[] = {"usm_pack_alice"}; /// randomized
        linkedItems[] += {"Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag_Tracer_Red:4"};
        items[] = {"MEDICAL_STANDARD","ACRE_PRC148","ACE_RangeTable_82mm"};
		launchers[] = {"B_Mortar_01_support_F"};
    };

    class B_spotter_F {// Spotter
        uniform[] = {"usm_bdu_odg"};  /// randomized
		backpack[] = {"usm_pack_alice"};
        vest[] = {"TAC_FS_FO_G"}; /// randomized
        headgear[] = {}; /// randomized
        weapons[] = {WEST_SPOTTER}; /// randomized
        magazines[] = {WEST_SPOTTER_MAG};
        items[] = {"MEDICAL_STANDARD", "ACRE_PRC343","ACRE_PRC148"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","Binocular"};
        attachments[] = {"rhsusf_acc_ACOG_sa"};
    };

    class B_sniper_F {// Sniper
        uniform[] = {"usm_bdu_odg"};  /// randomized
        vest[] = {"TAC_FS_FO_G"}; /// randomized
		backpack[] = {};
        headgear[] = {}; /// randomized
        weapons[] = {WEST_SNIPER}; /// randomized
        magazines[] = {WEST_SNIPER_MAG};
        items[] = {"MEDICAL_STANDARD", "ACRE_PRC343","ACRE_PRC148"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
        attachments[] = {"ACE_optic_LRPS_PIP"};
    };

// ====================================================================================
// Vehicle Infantry

    class B_Helipilot_F {// Pilot
        uniform[] = {"usm_bdu_odg"};  /// randomized
        backpack[] = {"rhsusf_cvc_green_helmet"};
        vest[] = {"usm_vest_LBE_rmp_m"}; /// randomized
        headgear[] = {"rhsusf_cvc_green_helmet","rhsusf_cvc_green_ess"}; /// randomized
        weapons[] = {WEST_SMG}; /// randomized
        magazines[] = {WEST_SMG_MAG,WEST_SMOKE_WHITE};
        backpackItems[] += {"ACE_key_west","ACRE_PRC117F"};
        items[] = {"MEDICAL_STANDARD","ACRE_PRC148"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
    };

    class B_helicrew_F: B_Helipilot_F { // Pilot

    };

    class B_Pilot_F: B_Helipilot_F { // Pilot
        uniform[] = {"usm_bdu_odg"};  /// randomized
        headgear[] = {"rhsusf_cvc_green_helmet","rhsusf_cvc_green_ess"}; /// randomized
    };

    class B_crew_F {// Crew
        uniform[] = {"usm_bdu_odg"};  // randomized
        vest[] = {"usm_vest_LBE_rmp_m"}; // randomized
        headgear[] = {"rhsusf_cvc_green_helmet","rhsusf_cvc_green_ess"}; /// randomized
        backpack[] = {};
        weapons[] = {WEST_CARBINE}; /// randomized
        magazines[] = {WEST_CARBINE_MAG,WEST_SMOKE_WHITE};
        items[] = {"MEDICAL_STANDARD"};
        backpackItems[] += {"ACE_key_west","ACRE_PRC148","ACRE_PRC117F"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
    };

    class B_soldier_repair_F: B_crew_F {// Repair Specialist
        backpack[] = {};
        backpackItems[] = {"Toolkit"};
        vest[] = {"usm_vest_LBE_rmp_m"}; /// randomized
        items[] += {"ACRE_PRC343"};
        linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch","Binocular"};
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
