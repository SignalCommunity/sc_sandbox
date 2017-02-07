//Author:
//Description: BLUFOR (NATO) Standard
// ====================================================================================

class blu_f {
	
	//Rifle
    #define WEST_RIFLE "arifle_Katiba_F"
    #define WEST_RIFLE_MAG "30Rnd_65x39_caseless_green:8"

	//GL Rifle
    #define WEST_GLRIFLE "arifle_Katiba_GL_F"
    #define WEST_GLRIFLE_MAG "30Rnd_65x39_caseless_green:8"
    #define WEST_GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:4","1Rnd_SmokeGreen_Grenade_shell:2","1Rnd_SmokeRed_Grenade_shell:3"
    #define WEST_GLRIFLE_MAG_HE "1Rnd_HE_Grenade_shell:8"
    #define WEST_GLRIFLE_MAG_FLARE "UGL_FlareRed_F:2","UGL_FlareWhite_F:2"

	//Carbine
    #define WEST_CARBINE "arifle_Katiba_C_F"
    #define WEST_CARBINE_MAG "30Rnd_65x39_caseless_green:8"

	//Diver
	#define SDAR "arifle_SDAR_F"
	#define SDAR_MAG "20Rnd_556x45_UW_mag:6"

    // AR
    #define WEST_AR "LMG_Zafir_F"
    #define WEST_AR_MAG "150Rnd_762x54_Box:3"

	// AT
    #define WEST_AT "launch_RPG32_F"
    #define WEST_AT_MAG "RPG32_F"

	// MMG
    #define WEST_MMG "MMG_01_hex_F"
    #define WEST_MMG_MAG "150Rnd_93x64_Mag:8"

	// MAT
    #define WEST_MAT "launch_O_Titan_short_F"
    #define WEST_MAT_MAG "Titan_AT:4"

	// SAM
    #define WEST_SAM "launch_O_Titan_F"
    #define WEST_SAM_MAG "Titan_AA:2"

	// Sniper Rifle
    #define WEST_SNIPER "srifle_GM6_camo_F"
    #define WEST_SNIPER_MAG "5Rnd_127x108_Mag:8"

   // Spotter Rifle
    #define WEST_SPOTTER "arifle_Katiba_C_F"
    #define WEST_SPOTTER_MAG "30Rnd_65x39_caseless_green:5"

	// SMG
    #define WEST_SMG "arifle_Katiba_C_F"
    #define WEST_SMG_MAG "30Rnd_65x39_caseless_green:5"

   // Pistol
    #define WEST_PISTOL "hgun_Rook40_F"
    #define WEST_PISTOL_MAG "16Rnd_9x21_Mag:2"

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
        uniform[] = {"U_O_CombatUniform_ocamo"};  
        vest[] = {"V_TacVest_khk"}; 
        headgear[] = {"H_HelmetO_ocamo"}; 
        backpack[] = {"B_FieldPack_cbr_LAT"}; 
        backpackItems[] = {"MEDICAL_STANDARD"};
        weapons[] = {WEST_RIFLE}; 
        launchers[] = {}; 
        handguns[] = {}; 
        magazines[] = {WEST_RIFLE_MAG,WEST_GRENADE,WEST_SMOKE_WHITE};
        items[] = {"ACRE_PRC343","ACE_Flashlight_MX991"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
        attachments[] = {};
    };

    class B_officer_F: B_Soldier_F {// CO and DC
        weapons[] = {WEST_GLRIFLE};
        vest[] = {"V_HarnessO_brn"}; 
        headgear[] = {"H_Beret_blk"}; 
        magazines[] = {WEST_GLRIFLE_MAG,WEST_GLRIFLE_MAG_SMOKE,WEST_GLRIFLE_MAG_FLARE,WEST_PISTOL_MAG,WEST_GRENADE,WEST_SMOKE_WHITE,WEST_SMOKE_GREEN};
        handguns[] = {WEST_PISTOL}; 
        backpackItems[] += {"ACE_key_west", "ACRE_PRC117F",WEST_GLRIFLE_MAG_HE};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
        items[] = {"ACE_MapTools","ACRE_PRC148","ACE_Flashlight_MX991"};
    };

    class B_Soldier_SL_F: B_Officer_F {// SL
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS","Binocular"};
        items[] = {"ACE_MapTools","ACRE_PRC148", "ACRE_PRC343","ACE_Flashlight_MX991"};
        backpackItems[] = {"MEDICAL_LEADER","ACE_IR_Strobe_item",WEST_GLRIFLE_MAG_HE};
    };

    class B_soldier_UAV_F: B_Soldier_F {
        backpack[] = {"B_UAV_01_backpack_F"}; 
        linkedItems[] += {"B_uavterminal"};
    };

	class B_medic_F: B_Soldier_F {// Medic
        vest[] = {"V_HarnessO_brn"}; 
		backpack[] = {"B_Carryall_ocamo"}; 
        weapons[] = {WEST_CARBINE};
        magazines[] = {WEST_CARBINE_MAG,WEST_SMOKE_WHITE};
        backpackItems[] = {"MEDICAL_MEDIC"};
    };

// ====================================================================================
// Grunt Infantry

    class B_Soldier_TL_F: B_Soldier_F {// FTL
        weapons[] = {WEST_GLRIFLE};
        magazines[] = {WEST_GLRIFLE_MAG};
        backpackItems[] += {"ACE_key_west",WEST_GLRIFLE_MAG_HE,WEST_GLRIFLE_MAG_SMOKE,WEST_GLRIFLE_MAG_FLARE,WEST_SMOKE_WHITE,WEST_GRENADE,WEST_SMOKE_WHITE,WEST_GRENADE,WEST_SMOKE_WHITE};
        linkedItems[] += {"ItemGPS","Binocular"};
    };

    class B_Soldier_AR_F: B_Soldier_F {// AR
        weapons[] = {WEST_AR};
        magazines[] = {WEST_AR_MAG,WEST_PISTOL_MAG,WEST_GRENADE,WEST_SMOKE_WHITE};
        handguns[] = {WEST_PISTOL}; 
    };

    class B_Soldier_AAR_F: B_Soldier_F {// AAR
        backpackItems[] += {WEST_AR_MAG,"ACE_SpareBarrel"};
        linkedItems[] += {"Binocular"};
    };

    class B_Soldier_LAT_F: B_Soldier_F {// AT
        weapons[] = {WEST_CARBINE};
		attachments[] = {};
		backpack[] = {"B_Carryall_ocamo"};
		backpackItems[] = {WEST_AT_MAG};
        magazines[] = {WEST_CARBINE_MAG,,WEST_GRENADE,WEST_SMOKE_WHITE};
        launchers[] = {WEST_AT}; 
    };
// ====================================================================================
// Support Infantry

    class B_HeavyGunner_F: B_Soldier_F {// MMG
        weapons[] = {WEST_MMG};
        magazines[] = {WEST_MMG_MAG,WEST_PISTOL_MAG,WEST_GRENADE,WEST_SMOKE_WHITE};
        handguns[] = {WEST_PISTOL}; 
        attachments[] = {};
    };

    class B_Soldier_A_F: B_Soldier_F {// MMG Spotter/Ammo Bearer
        backpack[] = {"B_Carryall_ocamo"};
		backpackItems[] += {WEST_MMG_MAG,"ACE_SpareBarrel"};
        items[] += {"ACRE_PRC148"};
    };

    class B_soldier_AT_F: B_Soldier_F {// MAT Gunner
        weapons[] = {WEST_CARBINE};
        magazines[] = {WEST_CARBINE_MAG,WEST_GRENADE};
        launchers[] = {WEST_MAT}; 
        items[] = {"MEDICAL_STANDARD","ACRE_PRC148"};
        backpackItems[] = {WEST_MAT_MAG};
    };

    class B_Soldier_AAT_F: B_Soldier_F {// MAT Spotter/Ammo Bearer
        backpack[] = {"B_Carryall_ocamo"};
		backpackItems[] = {WEST_MAT_MAG};
        items[] += {"ACRE_PRC148"};
    };

    class B_soldier_AA_F: B_Soldier_F {// SAM Gunner
        weapons[] = {WEST_CARBINE};
        magazines[] = {WEST_CARBINE_MAG,WEST_GRENADE};
        launchers[] = {WEST_SAM}; 
		backpackItems[] = {WEST_SAM_MAG};
    };

    class B_Soldier_AAA_F: B_Soldier_F {// SAM Spotter/Ammo Bearer
        backpack[] = {"B_Carryall_ocamo"};
		backpackItems[] = {WEST_SAM_MAG};
        items[] += {"ACRE_PRC148"};
    };

    class B_support_Mort_F: B_Soldier_F {// Mortar Gunner
        weapons[] = {WEST_CARBINE};
        magazines[] = {"30Rnd_65x39_caseless_green:5"};
        items[] = {"MEDICAL_STANDARD","ACE_RangeTable_82mm"};
        backpack[] = {"B_Carryall_ocamo"};
		launchers[] = {"B_Mortar_01_weapon_F"};		
    };

    class B_support_AMort_F: B_Soldier_F {// Assistant Mortar
		backpack[] = {"B_Carryall_ocamo"};
		magazines[] = {"30Rnd_65x39_caseless_green:4"};
		items[] = {"MEDICAL_STANDARD","ACRE_PRC148","ACE_RangeTable_82mm"};
		launchers[] = {"B_Mortar_01_support_F"};
    };

    class B_spotter_F {// Spotter
        uniform[] = {"U_O_GhillieSuit"};  
		backpack[] = {};
        headgear[] = {}; 
        weapons[] = {WEST_SPOTTER}; 
        magazines[] = {WEST_SPOTTER_MAG,WEST_SNIPER_MAG};
        items[] = {"MEDICAL_STANDARD", "ACRE_PRC343", "ACRE_PRC148"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
        attachments[] = {"optic_ERCO_blk_F"};
    };

    class B_sniper_F {// Sniper
        uniform[] = {"U_O_GhillieSuit"};  
		backpack[] = {};
        headgear[] = {}; 
        weapons[] = {WEST_SNIPER}; 
        magazines[] = {WEST_SNIPER_MAG};
        items[] = {"MEDICAL_STANDARD", "ACRE_PRC343"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
        attachments[] = {"optic_LRPS"};
    };

// ====================================================================================
// Vehicle Infantry

    class B_Helipilot_F {// Pilot
        uniform[] = {"U_O_PilotCoveralls"};  
        backpack[] = {"B_AssaultPack_cbr"};
        vest[] = {}; 
        headgear[] = {"H_Cap_brn_SPECOPS"}; 
        weapons[] = {WEST_SMG}; 
        magazines[] = {WEST_SMOKE_WHITE};
        backpackItems[] += {"ACE_key_west","ACRE_PRC117F",WEST_SMG_MAG};
        items[] = {"MEDICAL_STANDARD","ACRE_PRC148"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemGPS"};
    };

    class B_helicrew_F: B_Helipilot_F { // Pilot

    };

    class B_Pilot_F: B_Helipilot_F { // Pilot
        uniform[] = {"U_O_PilotCoveralls"};  
        headgear[] = {"H_PilotHelmetFighter_O"}; 
    };

    class B_crew_F {// Crew
        uniform[] = {"U_O_SpecopsUniform_ocamo"};  
        vest[] = {"V_BandollierB_khk"}; 
        headgear[] = {"H_HelmetCrew_O"}; 
        backpack[] = {"B_AssaultPack_ocamo"};
        weapons[] = {WEST_CARBINE}; 
        magazines[] = {WEST_CARBINE_MAG,WEST_SMOKE_WHITE};
        items[] = {"MEDICAL_STANDARD"};
        backpackItems[] += {"ACE_key_west","ACRE_PRC148","ACRE_PRC117F"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
    };

    class B_soldier_repair_F: B_crew_F {// Repair Specialist
        backpack[] = {"B_Carryall_ocamo"};
        backpackItems[] = {"Toolkit"};
        vest[] = {"V_Chestrig_khk"}; 
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
		uniform[] = {"U_B_Wetsuit"};  
        vest[] = {"V_RebreatherB"}; 
        backpack[] = {};
        headgear[] = {};

        backpackItems[] += {/*"U_B_CombatUniform_mcam","V_PlateCarrier1_rgr","H_HelmetB",*/WEST_CARBINE};
        linkedItems[] += {"G_B_Diving"};

    };

    class B_diver_F: B_Soldier_F {// Diver
        weapons[] = {SDAR};
		magazines[] = {SDAR_MAG,WEST_CARBINE_MAG,WEST_GRENADE,WEST_SMOKE_WHITE};
		uniform[] = {"U_B_Wetsuit"};  
        vest[] = {"V_RebreatherB"}; 
        backpack[] = {};
        headgear[] = {};

        backpackItems[] += {/*"U_B_CombatUniform_mcam","V_PlateCarrier1_rgr","H_HelmetB",*/WEST_CARBINE};
        linkedItems[] += {"G_B_Diving"};

    };

};
