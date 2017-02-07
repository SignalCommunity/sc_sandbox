//Author:
//Description: BLUFOR (NATO) Standard
// ====================================================================================

class opf_f {
	
	//Rifle
    #define EAST_RIFLE "arifle_Katiba_F"
    #define EAST_RIFLE_MAG "30Rnd_65x39_caseless_green:8"

	//GL Rifle
    #define EAST_GLRIFLE "arifle_Katiba_GL_F"
    #define EAST_GLRIFLE_MAG "30Rnd_65x39_caseless_green:8"
    #define EAST_GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:4","1Rnd_SmokeGreen_Grenade_shell:2","1Rnd_SmokeRed_Grenade_shell:3"
    #define EAST_GLRIFLE_MAG_HE "1Rnd_HE_Grenade_shell:8"
    #define EAST_GLRIFLE_MAG_FLARE "UGL_FlareRed_F:2","UGL_FlareWhite_F:2"

	//Carbine
    #define EAST_CARBINE "arifle_Katiba_C_F"
    #define EAST_CARBINE_MAG "30Rnd_65x39_caseless_green:8"

	//Diver
	#define SDAR "arifle_SDAR_F"
	#define SDAR_MAG "20Rnd_556x45_UW_mag:6"

    // AR
    #define EAST_AR "LMG_Zafir_F"
    #define EAST_AR_MAG "150Rnd_762x54_Box:3"

	// AT
    #define EAST_AT "launch_RPG32_F"
    #define EAST_AT_MAG "RPG32_F"

	// MMG
    #define EAST_MMG "MMG_01_hex_F"
    #define EAST_MMG_MAG "150Rnd_93x64_Mag:8"

	// MAT
    #define EAST_MAT "launch_O_Titan_short_F"
    #define EAST_MAT_MAG "Titan_AT:4"

	// SAM
    #define EAST_SAM "launch_O_Titan_F"
    #define EAST_SAM_MAG "Titan_AA:2"

	// Sniper Rifle
    #define EAST_SNIPER "srifle_GM6_camo_F"
    #define EAST_SNIPER_MAG "5Rnd_127x108_Mag:8"

   // Spotter Rifle
    #define EAST_SPOTTER "arifle_Katiba_C_F"
    #define EAST_SPOTTER_MAG "30Rnd_65x39_caseless_green:5"

	// SMG
    #define EAST_SMG "arifle_Katiba_C_F"
    #define EAST_SMG_MAG "30Rnd_65x39_caseless_green:5"

   // Pistol
    #define EAST_PISTOL "hgun_Rook40_F"
    #define EAST_PISTOL_MAG "16Rnd_9x21_Mag:2"

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
        uniform[] = {"U_O_CombatUniform_ocamo"};  
        vest[] = {"V_TacVest_khk"}; 
        headgear[] = {"H_HelmetO_ocamo"}; 
        backpack[] = {"B_FieldPack_cbr_LAT"}; 
        backpackItems[] = {"MEDICAL_STANDARD"};
        weapons[] = {EAST_RIFLE}; 
        launchers[] = {}; 
        handguns[] = {}; 
        magazines[] = {EAST_RIFLE_MAG,EAST_GRENADE,EAST_SMOKE_WHITE};
        items[] = {"ACRE_PRC343","ACE_Flashlight_MX991"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
        attachments[] = {};
    };

    class O_officer_F: O_Soldier_F {// CO and DC
        weapons[] = {EAST_GLRIFLE};
        vest[] = {"V_HarnessO_brn"}; 
        headgear[] = {"H_Beret_blk"}; 
        magazines[] = {EAST_GLRIFLE_MAG,EAST_GLRIFLE_MAG_SMOKE,EAST_GLRIFLE_MAG_FLARE,EAST_PISTOL_MAG,EAST_GRENADE,EAST_SMOKE_WHITE,EAST_SMOKE_GREEN};
        handguns[] = {EAST_PISTOL}; 
        backpackItems[] += {"ACE_key_west", "ACRE_PRC117F",EAST_GLRIFLE_MAG_HE};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
        items[] = {"ACE_MapTools","ACRE_PRC148","ACE_Flashlight_MX991"};
    };

    class O_Soldier_SL_F: O_Officer_F {// SL
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS","Binocular"};
        items[] = {"ACE_MapTools","ACRE_PRC148", "ACRE_PRC343","ACE_Flashlight_MX991"};
        backpackItems[] = {"MEDICAL_LEADER","ACE_IR_Strobe_item",EAST_GLRIFLE_MAG_HE};
    };

    class O_soldier_UAV_F: O_Soldier_F {
        backpack[] = {"B_UAV_01_backpack_F"}; 
        linkedItems[] += {"B_uavterminal"};
    };

	class O_medic_F: O_Soldier_F {// Medic
        vest[] = {"V_HarnessO_brn"}; 
		backpack[] = {"B_Carryall_ocamo"}; 
        weapons[] = {EAST_CARBINE};
        magazines[] = {EAST_CARBINE_MAG,EAST_SMOKE_WHITE};
        backpackItems[] = {"MEDICAL_MEDIC"};
    };

// ====================================================================================
// Grunt Infantry

    class O_Soldier_TL_F: O_Soldier_F {// FTL
        weapons[] = {EAST_GLRIFLE};
        magazines[] = {EAST_GLRIFLE_MAG};
        backpackItems[] += {"ACE_key_west",EAST_GLRIFLE_MAG_HE,EAST_GLRIFLE_MAG_SMOKE,EAST_GLRIFLE_MAG_FLARE,EAST_SMOKE_WHITE,EAST_GRENADE,EAST_SMOKE_WHITE,EAST_GRENADE,EAST_SMOKE_WHITE};
        linkedItems[] += {"ItemGPS","Binocular"};
    };

    class O_Soldier_AR_F: O_Soldier_F {// AR
        weapons[] = {EAST_AR};
        magazines[] = {EAST_AR_MAG,EAST_PISTOL_MAG,EAST_GRENADE,EAST_SMOKE_WHITE};
        handguns[] = {EAST_PISTOL}; 
    };

    class O_Soldier_AAR_F: O_Soldier_F {// AAR
        backpackItems[] += {EAST_AR_MAG,"ACE_SpareBarrel"};
        linkedItems[] += {"Binocular"};
    };

    class O_Soldier_LAT_F: O_Soldier_F {// AT
        weapons[] = {EAST_CARBINE};
		attachments[] = {};
		backpack[] = {"B_Carryall_ocamo"};
		backpackItems[] = {EAST_AT_MAG};
        magazines[] = {EAST_CARBINE_MAG,,EAST_GRENADE,EAST_SMOKE_WHITE};
        launchers[] = {EAST_AT}; 
    };
// ====================================================================================
// Support Infantry

    class O_HeavyGunner_F: O_Soldier_F {// MMG
        weapons[] = {EAST_MMG};
        magazines[] = {EAST_MMG_MAG,EAST_PISTOL_MAG,EAST_GRENADE,EAST_SMOKE_WHITE};
        handguns[] = {EAST_PISTOL}; 
        attachments[] = {};
    };

    class O_Soldier_A_F: O_Soldier_F {// MMG Spotter/Ammo Bearer
        backpack[] = {"B_Carryall_ocamo"};
		backpackItems[] += {EAST_MMG_MAG,"ACE_SpareBarrel"};
        items[] += {"ACRE_PRC148"};
    };

    class O_soldier_AT_F: O_Soldier_F {// MAT Gunner
        weapons[] = {EAST_CARBINE};
        magazines[] = {EAST_CARBINE_MAG,EAST_GRENADE};
        launchers[] = {EAST_MAT}; 
        items[] = {"MEDICAL_STANDARD","ACRE_PRC148"};
        backpackItems[] = {EAST_MAT_MAG};
    };

    class O_Soldier_AAT_F: O_Soldier_F {// MAT Spotter/Ammo Bearer
        backpack[] = {"B_Carryall_ocamo"};
		backpackItems[] = {EAST_MAT_MAG};
        items[] += {"ACRE_PRC148"};
    };

    class O_soldier_AA_F: O_Soldier_F {// SAM Gunner
        weapons[] = {EAST_CARBINE};
        magazines[] = {EAST_CARBINE_MAG,EAST_GRENADE};
        launchers[] = {EAST_SAM}; 
		backpackItems[] = {EAST_SAM_MAG};
    };

    class O_Soldier_AAA_F: O_Soldier_F {// SAM Spotter/Ammo Bearer
        backpack[] = {"B_Carryall_ocamo"};
		backpackItems[] = {EAST_SAM_MAG};
        items[] += {"ACRE_PRC148"};
    };

    class O_support_Mort_F: O_Soldier_F {// Mortar Gunner
        weapons[] = {EAST_CARBINE};
        magazines[] = {"30Rnd_65x39_caseless_green:5"};
        items[] = {"MEDICAL_STANDARD","ACE_RangeTable_82mm"};
        backpack[] = {"B_Carryall_ocamo"};
		launchers[] = {"B_Mortar_01_weapon_F"};		
    };

    class O_support_AMort_F: O_Soldier_F {// Assistant Mortar
		backpack[] = {"B_Carryall_ocamo"};
		magazines[] = {"30Rnd_65x39_caseless_green:4"};
		items[] = {"MEDICAL_STANDARD","ACRE_PRC148","ACE_RangeTable_82mm"};
		launchers[] = {"B_Mortar_01_support_F"};
    };

    class O_spotter_F {// Spotter
        uniform[] = {"U_O_GhillieSuit"};  
		backpack[] = {};
        headgear[] = {}; 
        weapons[] = {EAST_SPOTTER}; 
        magazines[] = {EAST_SPOTTER_MAG,EAST_SNIPER_MAG};
        items[] = {"MEDICAL_STANDARD", "ACRE_PRC343", "ACRE_PRC148"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
        attachments[] = {"optic_ERCO_blk_F"};
    };

    class O_sniper_F {// Sniper
        uniform[] = {"U_O_GhillieSuit"};  
		backpack[] = {};
        headgear[] = {}; 
        weapons[] = {EAST_SNIPER}; 
        magazines[] = {EAST_SNIPER_MAG};
        items[] = {"MEDICAL_STANDARD", "ACRE_PRC343"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
        attachments[] = {"optic_LRPS"};
    };

// ====================================================================================
// Vehicle Infantry

    class O_Helipilot_F {// Pilot
        uniform[] = {"U_O_PilotCoveralls"};  
        backpack[] = {"B_AssaultPack_cbr"};
        vest[] = {}; 
        headgear[] = {"H_Cap_brn_SPECOPS"}; 
        weapons[] = {EAST_SMG}; 
        magazines[] = {EAST_SMOKE_WHITE};
        backpackItems[] += {"ACE_key_west","ACRE_PRC117F",EAST_SMG_MAG};
        items[] = {"MEDICAL_STANDARD","ACRE_PRC148"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemGPS"};
    };

    class O_helicrew_F: O_Helipilot_F { // Pilot

    };

    class O_Pilot_F: O_Helipilot_F { // Pilot
        uniform[] = {"U_O_PilotCoveralls"};  
        headgear[] = {"H_PilotHelmetFighter_O"}; 
    };

    class O_crew_F {// Crew
        uniform[] = {"U_O_SpecopsUniform_ocamo"};  
        vest[] = {"V_BandollierB_khk"}; 
        headgear[] = {"H_HelmetCrew_O"}; 
        backpack[] = {"B_AssaultPack_ocamo"};
        weapons[] = {EAST_CARBINE}; 
        magazines[] = {EAST_CARBINE_MAG,EAST_SMOKE_WHITE};
        items[] = {"MEDICAL_STANDARD"};
        backpackItems[] += {"ACE_key_west","ACRE_PRC148","ACRE_PRC117F"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
    };

    class O_soldier_repair_F: O_crew_F {// Repair Specialist
        backpack[] = {"B_Carryall_ocamo"};
        backpackItems[] = {"Toolkit"};
        vest[] = {"V_Chestrig_khk"}; 
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
		uniform[] = {"U_B_Wetsuit"};  
        vest[] = {"V_RebreatherB"}; 
        backpack[] = {};
        headgear[] = {};

        backpackItems[] += {/*"U_B_CombatUniform_mcam","V_PlateCarrier1_rgr","H_HelmetB",*/EAST_CARBINE};
        linkedItems[] += {"G_B_Diving"};

    };

    class O_diver_F: O_Soldier_F {// Diver
        weapons[] = {SDAR};
		magazines[] = {SDAR_MAG,EAST_CARBINE_MAG,EAST_GRENADE,EAST_SMOKE_WHITE};
		uniform[] = {"U_B_Wetsuit"};  
        vest[] = {"V_RebreatherB"}; 
        backpack[] = {};
        headgear[] = {};

        backpackItems[] += {/*"U_B_CombatUniform_mcam","V_PlateCarrier1_rgr","H_HelmetB",*/EAST_CARBINE};
        linkedItems[] += {"G_B_Diving"};

    };

};
