//Author:
//Description: INFOR (AAF) Standard

class opf_f {


	//Rifle
    #define EAST_RIFLE "arifle_Mk20_F"
    #define EAST_RIFLE_MAG "30Rnd_556x45_Stanag:8","30Rnd_556x45_Stanag_Tracer_Yellow:2"

	//GL Rifle
    #define EAST_GLRIFLE "arifle_Mk20_GL_MRCO_pointer_F"
    #define EAST_GLRIFLE_MAG "30Rnd_556x45_Stanag:8","30Rnd_556x45_Stanag_Tracer_Yellow:2"
    #define EAST_GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:4","1Rnd_SmokeGreen_Grenade_shell:2","1Rnd_SmokeRed_Grenade_shell:3"
    #define EAST_GLRIFLE_MAG_HE "1Rnd_HE_Grenade_shell:8"
    #define EAST_GLRIFLE_MAG_FLARE "UGL_FlareRed_F:2","UGL_FlareWhite_F:2"

	//Carbine
    #define EAST_CARBINE "arifle_Mk20C_F"
    #define EAST_CARBINE_MAG "30Rnd_556x45_Stanag:8","30Rnd_556x45_Stanag_Tracer_Yellow:2"

	//Diver
	#define SDAR "arifle_SDAR_F"
	#define SDAR_MAG "20Rnd_556x45_UW_mag:6"

	// AR
    #define EAST_AR "LMG_Mk200_F"
    #define EAST_AR_MAG "200Rnd_65x39_cased_Box:2"
    #define EAST_AR_MAG2 "200Rnd_65x39_cased_Box_Tracer:2"

	// AT
    #define EAST_AT "launch_NLAW_F"
    #define EAST_AT_MAG "NLAW_F"

	// MMG
    #define EAST_MMG "MMG_01_tan_F"
    #define EAST_MMG_MAG "150Rnd_93x64_Mag:5"

	// MAT
    #define EAST_MAT "launch_RPG32_F"
    #define EAST_MAT_MAG "RPG32_F:2","RPG32_HE_F:1"
	
	// HAT
    #define EAST_HAT "launch_RPG32_F"
    #define EAST_HAT_MAG "RPG32_F:2","RPG32_HE_F:1"

	// SAM
    #define EAST_SAM "launch_I_Titan_F"
    #define EAST_SAM_MAG "Titan_AA:2"

    // Sniper Rifle
    #define EAST_SNIPER "srifle_EBR_F"
    #define EAST_SNIPER_MAG "20Rnd_762x51_Mag:8"

	// Spotter Rifle
    #define EAST_SPOTTER "srifle_DMR_06_olive_F"
    #define EAST_SPOTTER_MAG "20Rnd_762x51_Mag:8"

	// SMG
    #define EAST_SMG "hgun_PDW2000_F"
    #define EAST_SMG_MAG "30Rnd_9x21_Mag:6"

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
        TransportMagazines[] = {};
    };

    class Plane {
        TransportMagazines[] = {};
    };

    class Ship_F {
        TransportMagazines[] = {};
    };

// ====================================================================================
// Leadership INF and Groupies

    class O_Soldier_F {// rifleman
        uniform[] = {"U_I_CombatUniform"};  /// randomized
        vest[] = {"V_PlateCarrierIA1_dgtl","V_Chestrig_oli","V_PlateCarrierIA1_dgtl"}; /// randomized
        headgear[] = {"H_HelmetIA"}; /// randomized
        backpack[] = {"B_AssaultPack_dgtl"}; /// randomized
        backpackItems[] = {"MEDICAL_STANDARD","ACE_IR_Strobe_item"};
        weapons[] = {EAST_RIFLE}; /// randomized
        launchers[] = {}; /// randomized
        handguns[] = {}; /// randomized
        magazines[] = {EAST_RIFLE_MAG,EAST_GRENADE,EAST_SMOKE_WHITE};
        items[] = {"ACRE_PRC343"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
        attachments[] = {"optic_ACO_grn"};
    };

    class O_officer_F: O_Soldier_F {// CO and DC
        weapons[] = {EAST_GLRIFLE};
        magazines[] = {EAST_GLRIFLE_MAG,EAST_GLRIFLE_MAG_HE,EAST_GLRIFLE_MAG_SMOKE,EAST_GLRIFLE_MAG_FLARE,EAST_PISTOL_MAG,EAST_GRENADE,EAST_SMOKE_WHITE};
        handguns[] = {EAST_PISTOL}; /// randomized
        linkedItems[] += {"ItemGPS","Binocular"};
        attachments[] = {"optic_ACO_grn"};
        backpackItems[] += {"ACE_key_indp","ACRE_PRC117F"};
        items[] = {"ACE_MapTools","ACRE_PRC148"};
    };

    class O_Soldier_SL_F: O_Officer_F {// SL
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ACRE_PRC343","NVGoggles_INDEP","ItemGPS","Binocular"};
        items[] = {"ACE_MapTools","ACRE_PRC148", "ACRE_PRC343"};
        backpackItems[] = {"MEDICAL_LEADER","ACE_IR_Strobe_item"};
    };

    class O_soldier_UAV_F: O_Soldier_F {
        backpack[] = {"I_UAV_01_backpack_F"}; /// randomized
        linkedItems[] += {"I_uavterminal"};
    };

	class O_medic_F: O_Soldier_F {// Medic
        weapons[] = {EAST_CARBINE};
        magazines[] = {EAST_CARBINE_MAG,EAST_SMOKE_WHITE,EAST_SMOKE_WHITE,EAST_SMOKE_WHITE};
        backpack[] = {"B_AssaultPack_rgr"};
        backpackItems[] = {"MEDICAL_MEDIC"};
    };

// ====================================================================================
// Grunt Infantry

    class O_Soldier_TL_F: O_Soldier_F {// FTL
        weapons[] = {EAST_GLRIFLE};
        headgear[] = {"H_HelmetIA"}; /// randomized
        magazines[] = {EAST_GLRIFLE_MAG,EAST_GLRIFLE_MAG_HE,EAST_GLRIFLE_MAG_SMOKE,EAST_GLRIFLE_MAG_FLARE,EAST_GRENADE,EAST_SMOKE_WHITE};
        linkedItems[] += {"ItemGPS","Binocular"};
        backpackItems[] += {"ACE_key_indp"};
        attachments[] = {""};
    };

    class O_Soldier_AR_F: O_Soldier_F {// AR
        weapons[] = {EAST_AR};
        magazines[] = {EAST_AR_MAG,EAST_PISTOL_MAG,EAST_GRENADE,EAST_SMOKE_WHITE};
        handguns[] = {EAST_PISTOL}; /// randomized
        attachments[] = {""};
    };

    class O_Soldier_AAR_F: O_Soldier_F {// AAR
        backpackItems[] += {EAST_AR_MAG2};
        attachments[] = {"optic_MRCO"};
        linkeditems[] += {"Binocular"};
    };

    class O_Soldier_LAT_F: O_Soldier_F {// RAT
        weapons[] = {EAST_CARBINE};
        backpack[] = {}; /// randomized
        magazines[] = {EAST_CARBINE_MAG,EAST_AT_MAG,EAST_GRENADE,EAST_SMOKE_WHITE};
        launchers[] = {EAST_AT}; /// randomized
        attachments[] = {""};
    };

// ====================================================================================
// Support Infantry

    class O_support_GMG_F: O_Soldier_F {// MMG
        weapons[] = {EAST_MMG};
        backpack[] = {"B_AssaultPack_rgr"}; /// randomized
        magazines[] = {EAST_MMG_MAG,EAST_PISTOL_MAG,EAST_GRENADE,EAST_SMOKE_WHITE};
        handguns[] = {EAST_PISTOL}; /// randomized
    };

    class O_Soldier_A_F: O_Soldier_F {// MMG Spotter/Ammo Bearer
        backpack[] = {"B_AssaultPack_rgr"}; /// randomized
        backpackItems[] += {EAST_MMG_MAG};
        linkedItems[] += {"ACE_Vector"};
        items[] += {"ACRE_PRC148"};
    };

    class O_soldier_AT_F: O_Soldier_F {// MAT Gunner
        weapons[] = {EAST_CARBINE};
        backpack[] = {"B_AssaultPack_dgtl"};
        magazines[] = {EAST_CARBINE_MAG,EAST_GRENADE,EAST_SMOKE_WHITE};
        launchers[] = {EAST_MAT}; /// randomized
        backpackItems[] += {EAST_MAT_MAG};
    };

    class O_Soldier_AAT_F: O_Soldier_F {// MAT Spotter/Ammo Bearer
        backpack[] = {"B_AssaultPack_dgtl"};
        backpackItems[] += {EAST_MAT_MAG};
        linkedItems[] += {"ACE_Vector"};
        items[] += {"ACRE_PRC148"};
    };

    class O_G_Soldier_A_F: O_Soldier_F {// HAT Gunner
        weapons[] = {EAST_CARBINE};
        backpack[] = {"B_AssaultPack_dgtl"};
        magazines[] = {EAST_CARBINE_MAG,EAST_GRENADE,EAST_SMOKE_WHITE};
        launchers[] = {EAST_HAT}; /// randomized
        backpackItems[] += {EAST_HAT_MAG};
    };

    class O_G_Soldier_LAT_F: O_Soldier_F {// HAT Spotter/Ammo Bearer
        backpack[] = {"B_AssaultPack_dgtl"};
        backpackItems[] += {EAST_HAT_MAG};
        linkedItems[] += {"ACE_Vector"};
        items[] += {"ACRE_PRC148"};
    };

    class O_soldier_AA_F: O_Soldier_F {// SAM Gunner
        weapons[] = {EAST_CARBINE};
        backpack[] = {"B_AssaultPack_dgtl"};
        magazines[] = {EAST_CARBINE_MAG,EAST_GRENADE,EAST_SMOKE_WHITE};
        launchers[] = {EAST_SAM}; /// randomized
        backpackItems[] += {EAST_SAM_MAG};
    };

    class O_Soldier_AAA_F: O_Soldier_F {// SAM Spotter/Ammo Bearer
        backpackItems[] = {EAST_SAM_MAG};
        linkedItems[] += {"ACE_Vector"};
        items[] += {"ACRE_PRC148"};
        backpack[] = {"B_AssaultPack_dgtl"};
    };

    class O_support_Mort_F: O_Soldier_F {// Mortar Gunner
        weapons[] = {EAST_CARBINE};
        magazines[] = {EAST_CARBINE_MAG,EAST_GRENADE,EAST_SMOKE_WHITE};
        items[] = {"MEDICAL_STANDARD"};
        backpack[] = {"I_Mortar_01_weapon_F"}; /// randomized
    };

    class O_support_AMort_F: O_Soldier_F {// Assistant Mortar
        backpack[] = {"I_Mortar_01_support_F"}; /// randomized
        linkedItems[] += {"ACE_Vector"};
        items[] += {"ACRE_PRC148"};
    };

    class O_spotter_F {// Spotter
        uniform[] = {"U_I_GhillieSuit"};  /// randomized
        vest[] = {"V_Chestrig_oli"}; /// randomized
        headgear[] = {"H_Booniehat_khk"}; /// randomized
        backpack[] = {"B_AssaultPack_rgr"}; /// randomized
        weapons[] = {EAST_SPOTTER}; /// randomized
        magazines[] = {EAST_SPOTTER_MAG,EAST_SMOKE_WHITE};
        items[] = {"MEDICAL_STANDARD", "ACRE_PRC343"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemGPS","LaserDesignator"};
        attachments[] = {"optic_KHS_blk"};
    };

    class O_sniper_F {// Sniper
        uniform[] = {"U_I_GhillieSuit"};  /// randomized
        vest[] = {"V_Chestrig_oli"}; /// randomized
        headgear[] = {"H_Booniehat_khk"}; /// randomized
        backpack[] = {"B_AssaultPack_rgr"}; /// randomized
        weapons[] = {EAST_SNIPER}; /// randomized
        magazines[] = {EAST_SNIPER_MAG,EAST_SMOKE_WHITE};
        items[] = {"MEDICAL_STANDARD", "ACRE_PRC343"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemGPS"};
        attachments[] = {"optic_KHS_blk"};
    };

// ====================================================================================
// Vehicle Infantry

    class O_Helipilot_F {// Pilot
        uniform[] = {"U_I_pilotCoveralls"};  /// randomized
        vest[] = {"V_TacVest_blk"}; /// randomized
        headgear[] = {"H_PilotHelmetFighter_I"}; /// randomized
        backpack[] = {"B_AssaultPack_rgr"};
        weapons[] = {EAST_SMG}; /// randomized
        magazines[] = {EAST_SMG_MAG,EAST_SMOKE_WHITE};
        items[] = {"MEDICAL_STANDARD","ACRE_PRC148", "ACRE_PRC343"};
        backpackItems[] += {"ACE_key_indp","ACRE_PRC117F"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemGPS"};
    };

    class O_helicrew_F: O_Helipilot_F { // Pilot

    };

    class O_Pilot_F: O_Helipilot_F { // Pilot
        uniform[] = {"U_I_PilotCoveralls"};  /// randomized
        headgear[] = {"H_PilotHelmetFighter_I"}; /// randomized
    };

    class O_crew_F {// Crew
        uniform[] = {"U_I_CombatUniform"};  /// randomized
        vest[] = {"V_BandollierB_oli"}; // randomized
        headgear[] = {"H_HelmetCrew_I"}; /// randomized
        weapons[] = {EAST_SMG}; /// randomized
        magazines[] = {EAST_SMG_MAG,EAST_SMOKE_WHITE};
        backpackItems[] += {"ACE_key_indp","ACRE_PRC117F"};
        items[] = {"MEDICAL_STANDARD","ACRE_PRC148"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemGPS"};
    };

    class O_Soldier_repair_F: O_crew_F {// Repair Specialist
        backpack[] = {"B_Carryall_oli"};
        backpackItems[] = {"Toolkit","ACRE_PRC148"};
        items[] += {"ACRE_PRC343"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
    };

    class O_soldier_exp_F: O_soldier_repair_F {// Explosive Specialist
        uniform[] = {"U_I_CombatUniform_shortsleeve"};  /// randomized
        backpack[] = {"B_Carryall_oli"};
        backpackItems[] = {"Toolkit","ACE_DefusalKit","ACE_Clacker","MineDetector"};
        magazines[] = {EAST_SMG_MAG,"DemoCharge_Remote_Mag:3","SatchelCharge_Remote_Mag:2"};
    };

    class O_engineer_F: O_soldier_repair_F {// Explosive Specialist
        uniform[] = {"U_I_CombatUniform"};  /// randomized
        backpack[] = {"B_Carryall_oli"};
        backpackItems[] = {"Toolkit","ACE_DefusalKit","ACE_Clacker","MineDetector"};
        magazines[] = {EAST_SMG_MAG,"ATMine_Range_Mag:2","APERSBoundingMine_Range_Mag:2","APERSMine_Range_Mag:2"};
    };

// ====================================================================================
// Special Infantry

    class O_diver_TL_F: O_Soldier_TL_F {// Diver TL
        weapons[] = {SDAR};
		magazines[] = {SDAR_MAG,EAST_CARBINE_MAG,EAST_GRENADE,EAST_SMOKE_WHITE};
		uniform[] = {"U_I_Wetsuit"};  /// randomized
        vest[] = {"V_RebreatherIA"}; /// randomized
        backpack[] = {"B_Carryall_oli"};
        headgear[] = {};

        backpackItems[] += {/*"U_I_CombatUniform","V_Chestrig_oli","H_HelmetIA",*/EAST_CARBINE};
        linkedItems[] += {"G_I_Diving"};

    };

    class O_diver_F: O_Soldier_F {// Diver
        weapons[] = {SDAR};
		magazines[] = {SDAR_MAG,EAST_CARBINE_MAG,EAST_GRENADE,EAST_SMOKE_WHITE};
		uniform[] = {"U_I_Wetsuit"};  /// randomized
        vest[] = {"V_RebreatherIA"}; /// randomized
        backpack[] = {"B_Carryall_oli"};
        headgear[] = {};

        backpackItems[] += {/*"U_I_CombatUniform","V_Chestrig_oli","H_HelmetIA",*/EAST_CARBINE};
        linkedItems[] += {"G_I_Diving"};

    };

};