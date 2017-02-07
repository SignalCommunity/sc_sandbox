//Author: TheRob
//Description: PLA Desert
// ====================================================================================

class opf_f {

	// Here we're creating definitions for weapons and magazines that are called later.


	//Rifle
    #define EAST_RIFLE "vme_pla_qbz95_1"
    #define EAST_RIFLE_MAG "VME_QBZ95_1_30Rnd_DBP10_Tracer_Green:9"

	//GL Rifle
    #define EAST_GLRIFLE "vme_pla_qbz95_1GL"
    #define EAST_GLRIFLE_MAG "VME_QBZ95_1_30Rnd_DBP10_Tracer_Green:9"
    #define EAST_GLRIFLE_MAG_SMOKE "VME_1Rnd_Smoke_GL:4"
    #define EAST_GLRIFLE_MAG_HE "VME_1Rnd_HE_GL:8"
    #define EAST_GLRIFLE_MAG_FLARE ""

	//Carbine
    #define EAST_CARBINE "vme_pla_qbz95_1"
    #define EAST_CARBINE_MAG "VME_QBZ95_1_30Rnd_DBP10_Tracer_Green:9"

	//Diver
	#define SDAR "arifle_SDAR_F"
	#define SDAR_MAG "20Rnd_556x45_UW_mag:6"

    // AR
    #define EAST_AR "VME_PLA_QJY88"
    #define EAST_AR_MAG "VME_QJY88_200Rnd_DBP10_Tracer_Green:5"

	// AT
    #define EAST_AT "vme_pla_PF89A"
    #define EAST_AT_MAG "NLAW_F"

	// MMG
    #define EAST_MMG "VME_PLA_QJY88"
    #define EAST_MMG_MAG "VME_QJY88_200Rnd_DBP10_Tracer_Green:6"

	// MAT
    #define EAST_MAT "vme_pla_PF98"
    #define EAST_MAT_MAG "vme_pla_PF98_AT_Rocket:2"

	// SAM
    #define EAST_SAM "vme_pla_FN6"
    #define EAST_SAM_MAG "rhs_fim92_mag:2"

	// Sniper Rifle
    #define EAST_SNIPER "vme_pla_LR4"
    #define EAST_SNIPER_MAG "VME_LR4_5Rnd_M61_AP:8"

   // Spotter Rifle
    #define EAST_SPOTTER "vme_pla_qcw05"
    #define EAST_SPOTTER_MAG "VME_QCW05_50Rnd_DCV05:5"

	// SMG
    #define EAST_SMG "vme_pla_qcw05"
    #define EAST_SMG_MAG "VME_QCW05_50Rnd_DCV05:2"

   // Pistol
    #define EAST_PISTOL "vme_pla_qsz92"
    #define EAST_PISTOL_MAG "VME_QSZ92_20Rnd_DAP92:3"

	// Grenades, Smoke and Frag
	#define EAST_GRENADE "HandGrenade:2"
	#define EAST_SMOKE_WHITE "SmokeShell:2"
	#define EAST_SMOKE_GREEN "SmokeShellGreen"
	#define EAST_SMOKE_RED "SmokeShellRed"


// ====================================================================================

    class Car {
        TransportMagazines[] = {EAST_RIFLE_MAG,EAST_RIFLE_MAG,EAST_CARBINE_MAG,EAST_AR_MAG,EAST_AR_MAG,EAST_GLRIFLE_MAG_HE};
        TransportItems[] = {"MEDICAL_VEHICLE"};
    };

    class Tank {
        TransportMagazines[] = {EAST_RIFLE_MAG,EAST_RIFLE_MAG,EAST_CARBINE_MAG,EAST_AR_MAG,EAST_AR_MAG,EAST_GLRIFLE_MAG_HE};
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
        uniform[] = {"PLA_CombatUniform_HM_SB"};  /// randomized
        vest[] = {"PLA_T15Vest_RF_D","PLA_B04_RF_D"}; /// randomized
        headgear[] = {"VME_PLA_Helmet_D","VME_PLA_Helmet_D_G"}; /// randomized
        backpack[] = {"MNP_B_FieldPack_PLA_Basic_D"}; /// randomized
        backpackItems[] = {"MEDICAL_STANDARD","ACE_IR_Strobe_item"};
        weapons[] = {EAST_RIFLE}; /// randomized
        launchers[] = {}; /// randomized
        handguns[] = {}; /// randomized
        magazines[] = {EAST_RIFLE_MAG,EAST_GRENADE,EAST_SMOKE_WHITE};
        items[] = {"ACRE_PRC343","ACE_Flashlight_MX991"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","NVGoggles"};
        attachments[] = {};
    };

    class O_officer_F: O_Soldier_F {// CO and DC
        weapons[] = {EAST_GLRIFLE};
        vest[] = {"PLA_T15Vest_RD_D"}; /// randomized
        headgear[] = {"VME_PLA_Helmet_D_R_O","VME_PLA_Helmet_D_R"}; /// randomized
        magazines[] = {EAST_GLRIFLE_MAG,EAST_PISTOL_MAG,EAST_GRENADE,EAST_SMOKE_WHITE,EAST_SMOKE_GREEN};
        handguns[] = {EAST_PISTOL}; /// randomized
        backpackItems[] += {"ACE_key_west","ACRE_PRC117F",EAST_GLRIFLE_MAG_HE,"Laserbatteries",EAST_GLRIFLE_MAG_SMOKE};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","NVGoggles","ItemGPS","Laserdesignator"};
        items[] = {"ACE_MapTools","ACRE_PRC148","ACE_Flashlight_MX991"};
    };

    class O_Soldier_SL_F: O_Officer_F {// SL
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","NVGoggles","ItemGPS","Binocular"};
        items[] = {"ACE_MapTools","ACRE_PRC148", "ACRE_PRC343","ACE_Flashlight_MX991"};
        backpackItems[] = {"MEDICAL_LEADER","ACE_IR_Strobe_item",EAST_GLRIFLE_MAG_HE,EAST_GLRIFLE_MAG_SMOKE};
    };

    class O_soldier_UAV_F: O_Soldier_F {
        backpack[] = {"B_UAV_01_backpack_F"}; /// randomized
        linkedItems[] += {"B_uavterminal"};
    };

	class O_medic_F: O_Soldier_F {// Medic
        vest[] = {"PLA_T15Vest_RD_D"}; /// randomized
        weapons[] = {EAST_CARBINE};
        magazines[] = {EAST_CARBINE_MAG,EAST_SMOKE_WHITE};
        backpackItems[] = {"MEDICAL_MEDIC","ACE_tourniquet:8"};
    };

// ====================================================================================
// Grunt Infantry

    class O_Soldier_TL_F: O_Soldier_F {// FTL
        weapons[] = {EAST_GLRIFLE};
        headgear[] = {"VME_PLA_Helmet_D_R_O","VME_PLA_Helmet_D_R"}; /// randomized
        magazines[] = {EAST_GLRIFLE_MAG};
        backpackItems[] += {"ACE_key_west",EAST_GLRIFLE_MAG_HE,EAST_GLRIFLE_MAG_SMOKE,EAST_SMOKE_WHITE,EAST_GRENADE,EAST_SMOKE_WHITE,EAST_GRENADE,EAST_SMOKE_WHITE};
        linkedItems[] += {"ItemGPS","Binocular"};
    };

    class O_Soldier_AR_F: O_Soldier_F {// AR
        vest[] = {"PLA_B04_MG_D"}; /// randomized
        weapons[] = {EAST_AR};
        magazines[] = {EAST_AR_MAG,EAST_PISTOL_MAG,EAST_GRENADE,EAST_SMOKE_WHITE};
        handguns[] = {EAST_PISTOL}; /// randomized
    };

    class O_Soldier_AAR_F: O_Soldier_F {// AAR
        backpackItems[] += {EAST_AR_MAG,"ACE_SpareBarrel"};
        attachments[] = {};
        linkedItems[] += {"Binocular"};
    };

    class O_Soldier_LAT_F: O_Soldier_F {// RAT
        weapons[] = {EAST_CARBINE};
        magazines[] = {EAST_CARBINE_MAG,EAST_GRENADE,EAST_SMOKE_WHITE};
        launchers[] = {EAST_AT}; /// randomized
    };
// ====================================================================================
// Support Infantry

    class O_HeavyGunner_F: O_Soldier_F {// MMG
        weapons[] = {EAST_MMG};
        magazines[] = {EAST_MMG_MAG,EAST_PISTOL_MAG,EAST_GRENADE,EAST_SMOKE_WHITE};
        handguns[] = {EAST_PISTOL}; /// randomized
        attachments[] = {"VME_QJY88_Scope_Light"};
    };

    class O_Soldier_A_F: O_Soldier_F {// MMG Spotter/Ammo Bearer
        backpackItems[] += {EAST_MMG_MAG,"ACE_SpareBarrel"};
        linkedItems[] += {"Laserdesignator"};
        items[] += {"ACRE_PRC148","Laserbatteries"};
    };

    class O_soldier_AT_F: O_Soldier_F {// MAT Gunner
        weapons[] = {EAST_CARBINE};
        magazines[] = {EAST_CARBINE_MAG,EAST_GRENADE};
        launchers[] = {EAST_MAT}; /// randomized
        items[] = {"MEDICAL_STANDARD","ACRE_PRC148"};
        backpackItems[] = {EAST_MAT_MAG};
		attachments[] = {"VME_PF98_Scope_FCS"};
    };

    class O_Soldier_AAT_F: O_Soldier_F {// MAT Spotter/Ammo Bearer
        backpackItems[] = {EAST_MAT_MAG};
        linkedItems[] += {"Laserdesignator"};
        items[] += {"ACRE_PRC148","Laserbatteries"};
    };

    class O_soldier_AA_F: O_Soldier_F {// SAM Gunner
        weapons[] = {EAST_CARBINE};
        magazines[] = {EAST_CARBINE_MAG,EAST_GRENADE};
        launchers[] = {EAST_SAM}; /// randomized
		backpackItems[] = {};
    };

    class O_Soldier_AAA_F: O_Soldier_F {// SAM Spotter/Ammo Bearer
        backpackItems[] = {};
		launchers[] = {EAST_SAM};
        linkedItems[] += {"Laserdesignator"};
        items[] += {"ACRE_PRC148","Laserbatteries"};
    };

    class O_support_Mort_F: O_Soldier_F {// Mortar Gunner
        weapons[] = {EAST_CARBINE};
        magazines[] = {"VME_QBZ95_1_30Rnd_DBP10_Tracer_Green:4"};
        items[] = {"MEDICAL_STANDARD","ACE_RangeTable_82mm"};
        backpack[] = {"MNP_B_FieldPack_PLA_Basic_D"};
		launchers[] = {"B_Mortar_01_weapon_F"};		/// randomized
    };

    class O_support_AMort_F: O_Soldier_F {// Assistant Mortar
        backpack[] = {"MNP_B_FieldPack_PLA_Basic_D"}; /// randomized
        linkedItems[] += {"Laserdesignator"};
		magazines[] = {"VME_QBZ95_1_30Rnd_DBP10_Tracer_Green:4"};
        items[] = {"MEDICAL_STANDARD","ACRE_PRC148","Laserbatteries","ACE_RangeTable_82mm"};
		launchers[] = {"B_Mortar_01_support_F"};
    };

    class O_spotter_F {// Spotter
        uniform[] = {"U_O_FullGhillie_ard"};  /// randomized
        vest[] = {"TAC_FS_FO_G"}; /// randomized
        headgear[] = {}; /// randomized
        weapons[] = {EAST_SPOTTER}; /// randomized
        magazines[] = {EAST_SPOTTER_MAG};
        items[] = {"MEDICAL_STANDARD", "ACRE_PRC343", "ACRE_PRC148","Laserbatteries"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS","Laserdesignator"};
        attachments[] = {};
    };

    class O_sniper_F {// Sniper
        uniform[] = {"U_O_FullGhillie_ard"};  /// randomized
        vest[] = {"TAC_FS_FO_G"}; /// randomized
        headgear[] = {}; /// randomized
        weapons[] = {EAST_SNIPER}; /// randomized
        magazines[] = {EAST_SNIPER_MAG};
        items[] = {"MEDICAL_STANDARD", "ACRE_PRC343"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
        attachments[] = {"VME_LR4_Scope"};
    };

// ====================================================================================
// Vehicle Infantry

    class O_Helipilot_F {// Pilot
        uniform[] = {"U_I_HeliPilotCoveralls"};  /// randomized
        backpack[] = {};
        vest[] = {}; /// randomized
        headgear[] = {"H_PilotHelmetHeli_B"}; /// randomized
        weapons[] = {EAST_SMG}; /// randomized
        magazines[] = {EAST_SMG_MAG,EAST_SMOKE_WHITE};
        backpackItems[] += {"ACE_key_west","ACRE_PRC117F"};
        items[] = {"MEDICAL_STANDARD","ACRE_PRC148"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemGPS","NVgoggles"};
    };

    class O_helicrew_F: O_Helipilot_F { // Pilot

    };

    class O_Pilot_F: O_Helipilot_F { // Pilot
        uniform[] = {"U_I_HeliPilotCoveralls"};  /// randomized
        headgear[] = {"H_PilotHelmetHeli_B"}; /// randomized
    };

    class O_crew_F {// Crew
        uniform[] = {"PLA_CombatUniform_HM_SB"};  // randomized
        vest[] = {}; // randomized
        headgear[] = {"VME_PLA_Helmet_D_R"}; /// randomized
        backpack[] = {"MNP_B_FieldPack_PLA_Basic_D"};
        weapons[] = {EAST_CARBINE}; /// randomized
        magazines[] = {EAST_CARBINE_MAG,EAST_SMOKE_WHITE};
        items[] = {"MEDICAL_STANDARD"};
        backpackItems[] += {"ACE_key_west","ACRE_PRC148","ACRE_PRC117F"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
    };

    class O_soldier_repair_F: O_crew_F {// Repair Specialist
        backpack[] = {"MNP_B_FieldPack_PLA_Basic_D"};
        backpackItems[] = {"Toolkit"};
        vest[] = {}; /// randomized
        items[] += {"ACRE_PRC343"};
        linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch"};
    };

    class O_soldier_exp_F: O_soldier_repair_F {// Explosive Specialist
        backpack[] = {"MNP_B_FieldPack_PLA_Basic_D"};
        backpackItems[] = {"Toolkit","ACE_DefusalKit","ACE_Clacker","MineDetector"};
        magazines[] = {EAST_CARBINE_MAG,"DemoCharge_Remote_Mag:3","SatchelCharge_Remote_Mag:2"};
    };

    class O_engineer_F: O_soldier_repair_F {// Mine Specialist
        backpack[] = {"MNP_B_FieldPack_PLA_Basic_D"};
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
