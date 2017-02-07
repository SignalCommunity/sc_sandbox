//Author:
//Description: BLUFOR (NATO) Standard
// ====================================================================================

class opf_f {

	// Here we're creating definitions for weapons and magazines that are called later.


	//Rifle
    #define EAST_RIFLE "arifle_MX_F"
    #define EAST_RIFLE_MAG "30Rnd_65x39_caseless_mag:8","30Rnd_65x39_caseless_mag_Tracer:2"

	//GL Rifle
    #define EAST_GLRIFLE "arifle_MX_GL_F"
    #define EAST_GLRIFLE_MAG "30Rnd_65x39_caseless_mag:8","30Rnd_65x39_caseless_mag_Tracer:2"
    #define EAST_GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:4","1Rnd_SmokeGreen_Grenade_shell:2","1Rnd_SmokeRed_Grenade_shell:3"
    #define EAST_GLRIFLE_MAG_HE "1Rnd_HE_Grenade_shell:8"
    #define EAST_GLRIFLE_MAG_FLARE "UGL_FlareRed_F:2","UGL_FlareWhite_F:2"

	//Carbine
    #define EAST_CARBINE "arifle_MXC_F"
    #define EAST_CARBINE_MAG "30Rnd_65x39_caseless_mag:8","30Rnd_65x39_caseless_mag_Tracer:2"

	//Diver
	#define SDAR "arifle_SDAR_F"
	#define SDAR_MAG "20Rnd_556x45_UW_mag:6"

    // AR
    #define EAST_AR "arifle_MX_SW_F"
    #define EAST_AR_MAG "100Rnd_65x39_caseless_mag:2"
    #define EAST_AR_MAG2 "100Rnd_65x39_caseless_mag_Tracer:2"

	// AT
    #define EAST_AT "launch_NLAW_F"
    #define EAST_AT_MAG "NLAW_F"

	// MMG
    #define EAST_MMG "MMG_02_black_F"
    #define EAST_MMG_MAG "130Rnd_338_Mag:5"

	// MAT
    #define EAST_MAT "launch_B_Titan_short_F"
    #define EAST_MAT_MAG "Titan_AT:3"

	// HAT
    #define EAST_HAT "launch_B_Titan_short_F"
    #define EAST_HAT_MAG "Titan_AT:3"

	// SAM
    #define EAST_SAM "launch_B_Titan_F"
    #define EAST_SAM_MAG "Titan_AA:2"

	// Sniper Rifle
    #define EAST_SNIPER "srifle_DMR_02_F"
    #define EAST_SNIPER_MAG "10Rnd_338_Mag:8"

   // Spotter Rifle
    #define EAST_SPOTTER "arifle_MX_F"
    #define EAST_SPOTTER_MAG "30Rnd_65x39_caseless_mag:8"

	// SMG
    #define EAST_SMG "arifle_MXC_F"
    #define EAST_SMG_MAG "30Rnd_65x39_caseless_mag:6"

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
        TransportMagazines[] = {EAST_RIFLE_MAG,EAST_RIFLE_MAG,EAST_CARBINE_MAG,EAST_AR_MAG,EAST_AR_MAG,EAST_GLRIFLE_MAG_HE,EAST_AT_MAG};
        TransportItems[] = {"MEDICAL_VEHICLE"};
    };

    class Tank {
        TransportMagazines[] = {EAST_RIFLE_MAG,EAST_RIFLE_MAG,EAST_CARBINE_MAG,EAST_AR_MAG,EAST_AR_MAG,EAST_GLRIFLE_MAG_HE,EAST_AT_MAG};
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
        uniform[] = {"U_B_CombatUniform_mcam","U_B_CombatUniform_mcam_vest"};  /// randomized
        vest[] = {"V_PlateCarrier1_rgr","V_PlateCarrier2_rgr"}; /// randomized
        headgear[] = {"H_HelmetB","H_HelmetSpecB"}; /// randomized
        backpack[] = {"B_AssaultPack_mcamo"}; /// randomized
        backpackItems[] = {"MEDICAL_STANDARD","ACE_IR_Strobe_item"};
        weapons[] = {EAST_RIFLE}; /// randomized
        launchers[] = {}; /// randomized
        handguns[] = {}; /// randomized
        magazines[] = {EAST_RIFLE_MAG,EAST_GRENADE,EAST_SMOKE_WHITE};
        items[] = {"ACRE_PRC343"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","NVGoggles"};
        attachments[] = {"optic_Holosight","acc_pointer_IR"};
    };

    class O_officer_F: O_Soldier_F {// CO and DC
        weapons[] = {EAST_GLRIFLE};
        vest[] = {"V_PlateCarrierGL_rgr"}; /// randomized
        headgear[] = {"H_HelmetSpecB_blk"}; /// randomized
        magazines[] = {EAST_GLRIFLE_MAG,EAST_GLRIFLE_MAG_HE,EAST_GLRIFLE_MAG_SMOKE,EAST_GLRIFLE_MAG_FLARE,EAST_PISTOL_MAG,EAST_GRENADE,EAST_SMOKE_WHITE,EAST_SMOKE_GREEN};
        handguns[] = {EAST_PISTOL}; /// randomized
        backpackItems[] += {"ACE_key_west", "ACRE_PRC117F"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","NVGoggles","ItemGPS","ACE_Vector"};
        items[] = {"ACE_MapTools","ACRE_PRC148"};
    };

    class O_Soldier_SL_F: O_Officer_F {// SL
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","NVGoggles","ItemGPS","Binocular"};
        items[] = {"ACE_MapTools","ACRE_PRC148", "ACRE_PRC343"};
        backpackItems[] = {"MEDICAL_LEADER","ACE_IR_Strobe_item"};
    };

    class O_soldier_UAV_F: O_Soldier_F {
        backpack[] = {"B_Kitbag_mcamo"}; /// randomized
        linkedItems[] += {"B_uavterminal"};
    };

	class O_medic_F: O_Soldier_F {// Medic
        vest[] = {"V_PlateCarrierSpec_rgr"}; /// randomized
        weapons[] = {EAST_CARBINE};
        magazines[] = {EAST_CARBINE_MAG,EAST_SMOKE_WHITE};
        backpackItems[] = {"MEDICAL_MEDIC"};
    };

// ====================================================================================
// Grunt Infantry

    class O_Soldier_TL_F: O_Soldier_F {// FTL
        weapons[] = {EAST_GLRIFLE};
        headgear[] = {"H_HelmetSpecB"}; /// randomized
        magazines[] = {EAST_GLRIFLE_MAG,EAST_GLRIFLE_MAG_HE,EAST_GLRIFLE_MAG_SMOKE,EAST_GLRIFLE_MAG_FLARE,EAST_SMOKE_WHITE,EAST_GRENADE,EAST_SMOKE_WHITE,EAST_GRENADE,EAST_SMOKE_WHITE};
        backpackItems[] += {"ACE_key_west"};
        linkedItems[] += {"ItemGPS","Binocular"};
    };

    class O_Soldier_AR_F: O_Soldier_F {// AR
        vest[] = {"V_PlateCarrier2_rgr"}; /// randomized
        weapons[] = {EAST_AR};
        magazines[] = {EAST_AR_MAG,EAST_PISTOL_MAG,EAST_GRENADE,EAST_SMOKE_WHITE};
        handguns[] = {EAST_PISTOL}; /// randomized
    };

    class O_Soldier_AAR_F: O_Soldier_F {// AAR
        backpackItems[] += {EAST_AR_MAG2};
        attachments[] = {"optic_Arco"};
        linkedItems[] += {"Binocular"};
    };

    class O_Soldier_LAT_F: O_Soldier_F {// RAT
        weapons[] = {EAST_CARBINE};
        magazines[] = {EAST_CARBINE_MAG,EAST_AT_MAG,EAST_GRENADE,EAST_SMOKE_WHITE};
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
        backpackItems[] += {EAST_MMG_MAG};
        linkedItems[] += {"ACE_Vector"};
        items[] += {"ACRE_PRC148"};
    };

    class O_soldier_AT_F: O_Soldier_F {// MAT Gunner
        weapons[] = {EAST_CARBINE};
        magazines[] = {EAST_CARBINE_MAG,EAST_GRENADE,EAST_SMOKE_WHITE};
        launchers[] = {EAST_MAT}; /// randomized
        items[] = {"MEDICAL_STANDARD","ACRE_PRC148"};
        backpackItems[] = {EAST_MAT_MAG};
    };

    class O_Soldier_AAT_F: O_Soldier_F {// MAT Spotter/Ammo Bearer
        backpackItems[] = {EAST_MAT_MAG};
        linkedItems[] += {"ACE_Vector"};
        items[] += {"ACRE_PRC148"};
    };

    class O_G_Soldier_LAT_F: O_Soldier_F {// HAT Gunner
        weapons[] = {EAST_CARBINE};
        magazines[] = {EAST_CARBINE_MAG,EAST_GRENADE,EAST_SMOKE_WHITE};
        launchers[] = {EAST_HAT}; /// randomized
        items[] = {"MEDICAL_STANDARD","ACRE_PRC148"};
        backpackItems[] = {EAST_HAT_MAG};
    };

    class O_G_Soldier_A_F: O_Soldier_F {// HAT Spotter/Ammo Bearer
        backpackItems[] = {EAST_HAT_MAG};
        linkedItems[] += {"ACE_Vector"};
        items[] += {"ACRE_PRC148"};
    };

    class O_soldier_AA_F: O_Soldier_F {// SAM Gunner
        weapons[] = {EAST_CARBINE};
        magazines[] = {EAST_CARBINE_MAG,EAST_GRENADE,EAST_GRENADE,EAST_SMOKE_WHITE};
        launchers[] = {EAST_SAM}; /// randomized
        backpackItems[] += {EAST_SAM_MAG};
    };

    class O_Soldier_AAA_F: O_Soldier_F {// SAM Spotter/Ammo Bearer
        backpackItems[] = {EAST_SAM_MAG};
        linkedItems[] += {"ACE_Vector"};
        items[] += {"ACRE_PRC148"};
    };

    class O_support_Mort_F: O_Soldier_F {// Mortar Gunner
        weapons[] = {EAST_CARBINE};
        magazines[] = {EAST_CARBINE_MAG,EAST_GRENADE,EAST_SMOKE_WHITE};
        items[] = {"MEDICAL_STANDARD"};
        backpack[] = {"B_Mortar_01_weapon_F"}; /// randomized
    };

    class O_support_AMort_F: O_Soldier_F {// Assistant Mortar
        backpack[] = {"B_Mortar_01_support_F"}; /// randomized
        linkedItems[] += {"ACE_Vector"};
        items[] = {"MEDICAL_STANDARD","ACRE_PRC148"};
    };

    class O_spotter_F {// Spotter
        uniform[] = {"U_B_CombatUniform_mcam"};  /// randomized
        vest[] = {"V_Chestrig_rgr"}; /// randomized
        headgear[] = {"H_Watchcap_camo"}; /// randomized
        weapons[] = {EAST_SPOTTER}; /// randomized
        magazines[] = {EAST_SPOTTER_MAG,EAST_SMOKE_WHITE,EAST_GRENADE};
        items[] = {"MEDICAL_STANDARD", "ACRE_PRC343", "ACRE_PRC148"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS","LaserDesignator"};
        attachments[] = {"optic_Holosight","acc_pointer_IR"};
    };

    class O_sniper_F {// Sniper
        uniform[] = {"U_B_CombatUniform_mcam"};  /// randomized
        vest[] = {"V_Chestrig_rgr"}; /// randomized
        headgear[] = {"H_Watchcap_camo"}; /// randomized
        weapons[] = {EAST_SNIPER}; /// randomized
        magazines[] = {EAST_SNIPER_MAG,EAST_SMOKE_WHITE,EAST_GRENADE};
        items[] = {"MEDICAL_STANDARD", "ACRE_PRC343"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
        attachments[] = {"optic_SOS","acc_pointer_IR"};
    };

// ====================================================================================
// Vehicle Infantry

    class O_Helipilot_F {// Pilot
        uniform[] = {"U_B_HeliPilotCoveralls"};  /// randomized
        backpack[] = {"B_AssaultPack_blk"};
        vest[] = {"V_TacVest_blk"}; /// randomized
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
        uniform[] = {"U_B_PilotCoveralls"};  /// randomized
        headgear[] = {"H_PilotHelmetFighter_B"}; /// randomized
    };

    class O_crew_F {// Crew
        uniform[] = {"U_B_CombatUniform_mcam"};  // randomized
        vest[] = {"V_TacVest_blk"}; // randomized
        headgear[] = {"H_Watchcap_camo"}; /// randomized
        backpack[] = {"B_Carryall_mcamo"};
        weapons[] = {EAST_CARBINE}; /// randomized
        magazines[] = {EAST_CARBINE_MAG,EAST_SMOKE_WHITE};
        items[] = {"MEDICAL_STANDARD"};
        backpackItems[] += {"ACE_key_west","ACRE_PRC148","ACRE_PRC117F"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
    };

    class O_soldier_repair_F: O_crew_F {// Repair Specialist
        backpack[] = {"B_Carryall_mcamo"};
        backpackItems[] = {"Toolkit"};
        vest[] = {"V_PlateCarrier1_rgr"}; /// randomized
        items[] += {"ACRE_PRC343"};
        linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch"};
    };

    class O_soldier_exp_F: O_soldier_repair_F {// Explosive Specialist
        backpack[] = {"B_Carryall_mcamo"};
        backpackItems[] = {"Toolkit","ACE_DefusalKit","ACE_Clacker","MineDetector"};
        magazines[] = {EAST_CARBINE_MAG,"DemoCharge_Remote_Mag:3","SatchelCharge_Remote_Mag:2"};
    };

    class O_engineer_F: O_soldier_repair_F {// Mine Specialist
        backpack[] = {"B_Carryall_mcamo"};
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
        backpack[] = {"MNP_B_WD_CA"};
        headgear[] = {};

        backpackItems[] += {/*"U_B_CombatUniform_mcam","V_PlateCarrier1_rgr","H_HelmetB",*/EAST_CARBINE};
        linkedItems[] += {"G_B_Diving"};

    };

    class O_diver_F: O_Soldier_F {// Diver
        weapons[] = {SDAR};
		magazines[] = {SDAR_MAG,EAST_CARBINE_MAG,EAST_GRENADE,EAST_SMOKE_WHITE};
		uniform[] = {"U_B_Wetsuit"};  /// randomized
        vest[] = {"V_RebreatherB"}; /// randomized
        backpack[] = {"MNP_B_WD_CA"};
        headgear[] = {};

        backpackItems[] += {/*"U_B_CombatUniform_mcam","V_PlateCarrier1_rgr","H_HelmetB",*/EAST_CARBINE};
        linkedItems[] += {"G_B_Diving"};

    };

};