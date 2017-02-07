//Author: TheRob
//Description: PLA Desert
// ====================================================================================

class blu_f {

	// Here we're creating definitions for weapons and magazines that are called later.


	//Rifle
    #define WEST_RIFLE "vme_pla_qbz95_1"
    #define WEST_RIFLE_MAG "VME_QBZ95_1_30Rnd_DBP10_Tracer_Green:9"

	//GL Rifle
    #define WEST_GLRIFLE "vme_pla_qbz95_1GL"
    #define WEST_GLRIFLE_MAG "VME_QBZ95_1_30Rnd_DBP10_Tracer_Green:9"
    #define WEST_GLRIFLE_MAG_SMOKE "VME_1Rnd_Smoke_GL:4"
    #define WEST_GLRIFLE_MAG_HE "VME_1Rnd_HE_GL:8"
    #define WEST_GLRIFLE_MAG_FLARE ""

	//Carbine
    #define WEST_CARBINE "vme_pla_qbz95_1"
    #define WEST_CARBINE_MAG "VME_QBZ95_1_30Rnd_DBP10_Tracer_Green:9"

	//Diver
	#define SDAR "arifle_SDAR_F"
	#define SDAR_MAG "20Rnd_556x45_UW_mag:6"

    // AR
    #define WEST_AR "VME_PLA_QJY88"
    #define WEST_AR_MAG "VME_QJY88_200Rnd_DBP10_Tracer_Green:5"

	// AT
    #define WEST_AT "vme_pla_PF89A"
    #define WEST_AT_MAG "NLAW_F"

	// MMG
    #define WEST_MMG "VME_PLA_QJY88"
    #define WEST_MMG_MAG "VME_QJY88_200Rnd_DBP10_Tracer_Green:6"

	// MAT
    #define WEST_MAT "vme_pla_PF98"
    #define WEST_MAT_MAG "vme_pla_PF98_AT_Rocket:2"

	// SAM
    #define WEST_SAM "vme_pla_FN6"
    #define WEST_SAM_MAG "rhs_fim92_mag:2"

	// Sniper Rifle
    #define WEST_SNIPER "vme_pla_LR4"
    #define WEST_SNIPER_MAG "VME_LR4_5Rnd_M61_AP:8"

   // Spotter Rifle
    #define WEST_SPOTTER "vme_pla_qcw05"
    #define WEST_SPOTTER_MAG "VME_QCW05_50Rnd_DCV05:5"

	// SMG
    #define WEST_SMG "vme_pla_qcw05"
    #define WEST_SMG_MAG "VME_QCW05_50Rnd_DCV05:2"

   // Pistol
    #define WEST_PISTOL "vme_pla_qsz92"
    #define WEST_PISTOL_MAG "VME_QSZ92_20Rnd_DAP92:3"

	// Grenades, Smoke and Frag
	#define WEST_GRENADE "HandGrenade:2"
	#define WEST_SMOKE_WHITE "SmokeShell:2"
	#define WEST_SMOKE_GREEN "SmokeShellGreen"
	#define WEST_SMOKE_RED "SmokeShellRed"


// ====================================================================================

    class Car {
        TransportMagazines[] = {WEST_RIFLE_MAG,WEST_RIFLE_MAG,WEST_CARBINE_MAG,WEST_AR_MAG,WEST_AR_MAG,WEST_GLRIFLE_MAG_HE};
        TransportItems[] = {"MEDICAL_VEHICLE"};
    };

    class Tank {
        TransportMagazines[] = {WEST_RIFLE_MAG,WEST_RIFLE_MAG,WEST_CARBINE_MAG,WEST_AR_MAG,WEST_AR_MAG,WEST_GLRIFLE_MAG_HE};
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
        uniform[] = {"PLA_CombatUniform_HM_SB"};  /// randomized
        vest[] = {"PLA_T15Vest_RF_D","PLA_B04_RF_D"}; /// randomized
        headgear[] = {"VME_PLA_Helmet_D","VME_PLA_Helmet_D_G"}; /// randomized
        backpack[] = {"MNP_B_FieldPack_PLA_Basic_D"}; /// randomized
        backpackItems[] = {"MEDICAL_STANDARD","ACE_IR_Strobe_item"};
        weapons[] = {WEST_RIFLE}; /// randomized
        launchers[] = {}; /// randomized
        handguns[] = {}; /// randomized
        magazines[] = {WEST_RIFLE_MAG,WEST_GRENADE,WEST_SMOKE_WHITE};
        items[] = {"ACRE_PRC343","ACE_Flashlight_MX991"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","NVGoggles"};
        attachments[] = {};
    };

    class B_officer_F: B_Soldier_F {// CO and DC
        weapons[] = {WEST_GLRIFLE};
        vest[] = {"PLA_T15Vest_RD_D"}; /// randomized
        headgear[] = {"VME_PLA_Helmet_D_R_O","VME_PLA_Helmet_D_R"}; /// randomized
        magazines[] = {WEST_GLRIFLE_MAG,WEST_PISTOL_MAG,WEST_GRENADE,WEST_SMOKE_WHITE,WEST_SMOKE_GREEN};
        handguns[] = {WEST_PISTOL}; /// randomized
        backpackItems[] += {"ACE_key_west","ACRE_PRC117F",WEST_GLRIFLE_MAG_HE,"Laserbatteries",WEST_GLRIFLE_MAG_SMOKE};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","NVGoggles","ItemGPS","Laserdesignator"};
        items[] = {"ACE_MapTools","ACRE_PRC148","ACE_Flashlight_MX991"};
    };

    class B_Soldier_SL_F: B_Officer_F {// SL
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","NVGoggles","ItemGPS","Binocular"};
        items[] = {"ACE_MapTools","ACRE_PRC148", "ACRE_PRC343","ACE_Flashlight_MX991"};
        backpackItems[] = {"MEDICAL_LEADER","ACE_IR_Strobe_item",WEST_GLRIFLE_MAG_HE,WEST_GLRIFLE_MAG_SMOKE};
    };

    class B_soldier_UAV_F: B_Soldier_F {
        backpack[] = {"B_UAV_01_backpack_F"}; /// randomized
        linkedItems[] += {"B_uavterminal"};
    };

	class B_medic_F: B_Soldier_F {// Medic
        vest[] = {"PLA_T15Vest_RD_D"}; /// randomized
        weapons[] = {WEST_CARBINE};
        magazines[] = {WEST_CARBINE_MAG,WEST_SMOKE_WHITE};
        backpackItems[] = {"MEDICAL_MEDIC","ACE_tourniquet:8"};
    };

// ====================================================================================
// Grunt Infantry

    class B_Soldier_TL_F: B_Soldier_F {// FTL
        weapons[] = {WEST_GLRIFLE};
        headgear[] = {"VME_PLA_Helmet_D_R_O","VME_PLA_Helmet_D_R"}; /// randomized
        magazines[] = {WEST_GLRIFLE_MAG};
        backpackItems[] += {"ACE_key_west",WEST_GLRIFLE_MAG_HE,WEST_GLRIFLE_MAG_SMOKE,WEST_SMOKE_WHITE,WEST_GRENADE,WEST_SMOKE_WHITE,WEST_GRENADE,WEST_SMOKE_WHITE};
        linkedItems[] += {"ItemGPS","Binocular"};
    };

    class B_Soldier_AR_F: B_Soldier_F {// AR
        vest[] = {"PLA_B04_MG_D"}; /// randomized
        weapons[] = {WEST_AR};
        magazines[] = {WEST_AR_MAG,WEST_PISTOL_MAG,WEST_GRENADE,WEST_SMOKE_WHITE};
        handguns[] = {WEST_PISTOL}; /// randomized
    };

    class B_Soldier_AAR_F: B_Soldier_F {// AAR
        backpackItems[] += {WEST_AR_MAG,"ACE_SpareBarrel"};
        attachments[] = {};
        linkedItems[] += {"Binocular"};
    };

    class B_Soldier_LAT_F: B_Soldier_F {// RAT
        weapons[] = {WEST_CARBINE};
        magazines[] = {WEST_CARBINE_MAG,WEST_GRENADE,WEST_SMOKE_WHITE};
        launchers[] = {WEST_AT}; /// randomized
    };
// ====================================================================================
// Support Infantry

    class B_HeavyGunner_F: B_Soldier_F {// MMG
        weapons[] = {WEST_MMG};
        magazines[] = {WEST_MMG_MAG,WEST_PISTOL_MAG,WEST_GRENADE,WEST_SMOKE_WHITE};
        handguns[] = {WEST_PISTOL}; /// randomized
        attachments[] = {"VME_QJY88_Scope_Light"};
    };

    class B_Soldier_A_F: B_Soldier_F {// MMG Spotter/Ammo Bearer
        backpackItems[] += {WEST_MMG_MAG,"ACE_SpareBarrel"};
        linkedItems[] += {"Laserdesignator"};
        items[] += {"ACRE_PRC148","Laserbatteries"};
    };

    class B_soldier_AT_F: B_Soldier_F {// MAT Gunner
        weapons[] = {WEST_CARBINE};
        magazines[] = {WEST_CARBINE_MAG,WEST_GRENADE};
        launchers[] = {WEST_MAT}; /// randomized
        items[] = {"MEDICAL_STANDARD","ACRE_PRC148"};
        backpackItems[] = {WEST_MAT_MAG};
		attachments[] = {"VME_PF98_Scope_FCS"};
    };

    class B_Soldier_AAT_F: B_Soldier_F {// MAT Spotter/Ammo Bearer
        backpackItems[] = {WEST_MAT_MAG};
        linkedItems[] += {"Laserdesignator"};
        items[] += {"ACRE_PRC148","Laserbatteries"};
    };

    class B_soldier_AA_F: B_Soldier_F {// SAM Gunner
        weapons[] = {WEST_CARBINE};
        magazines[] = {WEST_CARBINE_MAG,WEST_GRENADE};
        launchers[] = {WEST_SAM}; /// randomized
		backpackItems[] = {};
    };

    class B_Soldier_AAA_F: B_Soldier_F {// SAM Spotter/Ammo Bearer
        backpackItems[] = {};
		launchers[] = {WEST_SAM};
        linkedItems[] += {"Laserdesignator"};
        items[] += {"ACRE_PRC148","Laserbatteries"};
    };

    class B_support_Mort_F: B_Soldier_F {// Mortar Gunner
        weapons[] = {WEST_CARBINE};
        magazines[] = {"VME_QBZ95_1_30Rnd_DBP10_Tracer_Green:4"};
        items[] = {"MEDICAL_STANDARD","ACE_RangeTable_82mm"};
        backpack[] = {"MNP_B_FieldPack_PLA_Basic_D"};
		launchers[] = {"B_Mortar_01_weapon_F"};		/// randomized
    };

    class B_support_AMort_F: B_Soldier_F {// Assistant Mortar
        backpack[] = {"MNP_B_FieldPack_PLA_Basic_D"}; /// randomized
        linkedItems[] += {"Laserdesignator"};
		magazines[] = {"VME_QBZ95_1_30Rnd_DBP10_Tracer_Green:4"};
        items[] = {"MEDICAL_STANDARD","ACRE_PRC148","Laserbatteries","ACE_RangeTable_82mm"};
		launchers[] = {"B_Mortar_01_support_F"};
    };

    class B_spotter_F {// Spotter
        uniform[] = {"U_O_FullGhillie_ard"};  /// randomized
        vest[] = {"TAC_FS_FO_G"}; /// randomized
        headgear[] = {}; /// randomized
        weapons[] = {WEST_SPOTTER}; /// randomized
        magazines[] = {WEST_SPOTTER_MAG};
        items[] = {"MEDICAL_STANDARD", "ACRE_PRC343", "ACRE_PRC148","Laserbatteries"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS","Laserdesignator"};
        attachments[] = {};
    };

    class B_sniper_F {// Sniper
        uniform[] = {"U_O_FullGhillie_ard"};  /// randomized
        vest[] = {"TAC_FS_FO_G"}; /// randomized
        headgear[] = {}; /// randomized
        weapons[] = {WEST_SNIPER}; /// randomized
        magazines[] = {WEST_SNIPER_MAG};
        items[] = {"MEDICAL_STANDARD", "ACRE_PRC343"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
        attachments[] = {"VME_LR4_Scope"};
    };

// ====================================================================================
// Vehicle Infantry

    class B_Helipilot_F {// Pilot
        uniform[] = {"U_I_HeliPilotCoveralls"};  /// randomized
        backpack[] = {};
        vest[] = {}; /// randomized
        headgear[] = {"H_PilotHelmetHeli_B"}; /// randomized
        weapons[] = {WEST_SMG}; /// randomized
        magazines[] = {WEST_SMG_MAG,WEST_SMOKE_WHITE};
        backpackItems[] += {"ACE_key_west","ACRE_PRC117F"};
        items[] = {"MEDICAL_STANDARD","ACRE_PRC148"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemGPS","NVgoggles"};
    };

    class B_helicrew_F: B_Helipilot_F { // Pilot

    };

    class B_Pilot_F: B_Helipilot_F { // Pilot
        uniform[] = {"U_I_HeliPilotCoveralls"};  /// randomized
        headgear[] = {"H_PilotHelmetHeli_B"}; /// randomized
    };

    class B_crew_F {// Crew
        uniform[] = {"PLA_CombatUniform_HM_SB"};  // randomized
        vest[] = {}; // randomized
        headgear[] = {"VME_PLA_Helmet_D_R"}; /// randomized
        backpack[] = {"MNP_B_FieldPack_PLA_Basic_D"};
        weapons[] = {WEST_CARBINE}; /// randomized
        magazines[] = {WEST_CARBINE_MAG,WEST_SMOKE_WHITE};
        items[] = {"MEDICAL_STANDARD"};
        backpackItems[] += {"ACE_key_west","ACRE_PRC148","ACRE_PRC117F"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
    };

    class B_soldier_repair_F: B_crew_F {// Repair Specialist
        backpack[] = {"MNP_B_FieldPack_PLA_Basic_D"};
        backpackItems[] = {"Toolkit"};
        vest[] = {}; /// randomized
        items[] += {"ACRE_PRC343"};
        linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch"};
    };

    class B_soldier_exp_F: B_soldier_repair_F {// Explosive Specialist
        backpack[] = {"MNP_B_FieldPack_PLA_Basic_D"};
        backpackItems[] = {"Toolkit","ACE_DefusalKit","ACE_Clacker","MineDetector"};
        magazines[] = {WEST_CARBINE_MAG,"DemoCharge_Remote_Mag:3","SatchelCharge_Remote_Mag:2"};
    };

    class B_engineer_F: B_soldier_repair_F {// Mine Specialist
        backpack[] = {"MNP_B_FieldPack_PLA_Basic_D"};
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
