//Author:
//Description: INFOR (AAF) Standard

class blu_f {


	//Rifle
    #define WEST_RIFLE "arifle_Mk20_F"
    #define WEST_RIFLE_MAG "30Rnd_556x45_Stanag:8","30Rnd_556x45_Stanag_Tracer_Yellow:2"

	//GL Rifle
    #define WEST_GLRIFLE "arifle_Mk20_GL_MRCO_pointer_F"
    #define WEST_GLRIFLE_MAG "30Rnd_556x45_Stanag:8","30Rnd_556x45_Stanag_Tracer_Yellow:2"
    #define WEST_GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:4","1Rnd_SmokeGreen_Grenade_shell:2","1Rnd_SmokeRed_Grenade_shell:3"
    #define WEST_GLRIFLE_MAG_HE "1Rnd_HE_Grenade_shell:8"
    #define WEST_GLRIFLE_MAG_FLARE "UGL_FlareRed_F:2","UGL_FlareWhite_F:2"

	//Carbine
    #define WEST_CARBINE "arifle_Mk20C_F"
    #define WEST_CARBINE_MAG "30Rnd_556x45_Stanag:8","30Rnd_556x45_Stanag_Tracer_Yellow:2"

	//Diver
	#define SDAR "arifle_SDAR_F"
	#define SDAR_MAG "20Rnd_556x45_UW_mag:6"

	// AR
    #define WEST_AR "LMG_Mk200_F"
    #define WEST_AR_MAG "200Rnd_65x39_cased_Box:2"
    #define WEST_AR_MAG2 "200Rnd_65x39_cased_Box_Tracer:2"

	// AT
    #define WEST_AT "launch_NLAW_F"
    #define WEST_AT_MAG "NLAW_F"

	// MMG
    #define WEST_MMG "MMG_01_tan_F"
    #define WEST_MMG_MAG "150Rnd_93x64_Mag:5"

	// MAT
    #define WEST_MAT "launch_RPG32_F"
    #define WEST_MAT_MAG "RPG32_F:2","RPG32_HE_F:1"
	
	// HAT
    #define WEST_HAT "launch_RPG32_F"
    #define WEST_HAT_MAG "RPG32_F:2","RPG32_HE_F:1"

	// SAM
    #define WEST_SAM "launch_I_Titan_F"
    #define WEST_SAM_MAG "Titan_AA:2"

    // Sniper Rifle
    #define WEST_SNIPER "srifle_EBR_F"
    #define WEST_SNIPER_MAG "20Rnd_762x51_Mag:8"

	// Spotter Rifle
    #define WEST_SPOTTER "srifle_DMR_06_olive_F"
    #define WEST_SPOTTER_MAG "20Rnd_762x51_Mag:8"

	// SMG
    #define WEST_SMG "hgun_PDW2000_F"
    #define WEST_SMG_MAG "30Rnd_9x21_Mag:6"

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
        TransportMagazines[] = {WEST_RIFLE_MAG,WEST_RIFLE_MAG,WEST_CARBINE_MAG,WEST_AR_MAG,WEST_AR_MAG,WEST_GLRIFLE_MAG_HE,WEST_AT_MAG};
        TransportItems[] = {"MEDICAL_VEHICLE"};
    };

    class Tank {
        TransportMagazines[] = {WEST_RIFLE_MAG,WEST_RIFLE_MAG,WEST_CARBINE_MAG,WEST_AR_MAG,WEST_AR_MAG,WEST_GLRIFLE_MAG_HE,WEST_AT_MAG};
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

    class B_Soldier_F {// rifleman
        uniform[] = {"U_I_CombatUniform"};  /// randomized
        vest[] = {"V_PlateCarrierIA1_dgtl","V_Chestrig_oli","V_PlateCarrierIA1_dgtl"}; /// randomized
        headgear[] = {"H_HelmetIA"}; /// randomized
        backpack[] = {"B_AssaultPack_dgtl"}; /// randomized
        backpackItems[] = {"MEDICAL_STANDARD","ACE_IR_Strobe_item"};
        weapons[] = {WEST_RIFLE}; /// randomized
        launchers[] = {}; /// randomized
        handguns[] = {}; /// randomized
        magazines[] = {WEST_RIFLE_MAG,WEST_GRENADE,WEST_SMOKE_WHITE};
        items[] = {"ACRE_PRC343"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
        attachments[] = {"optic_ACO_grn"};
    };

    class B_officer_F: B_Soldier_F {// CO and DC
        weapons[] = {WEST_GLRIFLE};
        magazines[] = {WEST_GLRIFLE_MAG,WEST_GLRIFLE_MAG_HE,WEST_GLRIFLE_MAG_SMOKE,WEST_GLRIFLE_MAG_FLARE,WEST_PISTOL_MAG,WEST_GRENADE,WEST_SMOKE_WHITE};
        handguns[] = {WEST_PISTOL}; /// randomized
        linkedItems[] += {"ItemGPS","Binocular"};
        attachments[] = {"optic_ACO_grn"};
        backpackItems[] += {"ACE_key_indp","ACRE_PRC117F"};
        items[] = {"ACE_MapTools","ACRE_PRC148"};
    };

    class B_Soldier_SL_F: B_Officer_F {// SL
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ACRE_PRC343","NVGoggles_INDEP","ItemGPS","Binocular"};
        items[] = {"ACE_MapTools","ACRE_PRC148", "ACRE_PRC343"};
        backpackItems[] = {"MEDICAL_LEADER","ACE_IR_Strobe_item"};
    };

    class B_soldier_UAV_F: B_Soldier_F {
        backpack[] = {"I_UAV_01_backpack_F"}; /// randomized
        linkedItems[] += {"I_uavterminal"};
    };

	class B_medic_F: B_Soldier_F {// Medic
        weapons[] = {WEST_CARBINE};
        magazines[] = {WEST_CARBINE_MAG,WEST_SMOKE_WHITE,WEST_SMOKE_WHITE,WEST_SMOKE_WHITE};
        backpack[] = {"B_AssaultPack_rgr"};
        backpackItems[] = {"MEDICAL_MEDIC"};
    };

// ====================================================================================
// Grunt Infantry

    class B_Soldier_TL_F: B_Soldier_F {// FTL
        weapons[] = {WEST_GLRIFLE};
        headgear[] = {"H_HelmetIA"}; /// randomized
        magazines[] = {WEST_GLRIFLE_MAG,WEST_GLRIFLE_MAG_HE,WEST_GLRIFLE_MAG_SMOKE,WEST_GLRIFLE_MAG_FLARE,WEST_GRENADE,WEST_SMOKE_WHITE};
        linkedItems[] += {"ItemGPS","Binocular"};
        backpackItems[] += {"ACE_key_indp"};
        attachments[] = {""};
    };

    class B_Soldier_AR_F: B_Soldier_F {// AR
        weapons[] = {WEST_AR};
        magazines[] = {WEST_AR_MAG,WEST_PISTOL_MAG,WEST_GRENADE,WEST_SMOKE_WHITE};
        handguns[] = {WEST_PISTOL}; /// randomized
        attachments[] = {""};
    };

    class B_Soldier_AAR_F: B_Soldier_F {// AAR
        backpackItems[] += {WEST_AR_MAG2};
        attachments[] = {"optic_MRCO"};
        linkeditems[] += {"Binocular"};
    };

    class B_Soldier_LAT_F: B_Soldier_F {// RAT
        weapons[] = {WEST_CARBINE};
        backpack[] = {}; /// randomized
        magazines[] = {WEST_CARBINE_MAG,WEST_AT_MAG,WEST_GRENADE,WEST_SMOKE_WHITE};
        launchers[] = {WEST_AT}; /// randomized
        attachments[] = {""};
    };

// ====================================================================================
// Support Infantry

    class B_support_GMG_F: B_Soldier_F {// MMG
        weapons[] = {WEST_MMG};
        backpack[] = {"B_AssaultPack_rgr"}; /// randomized
        magazines[] = {WEST_MMG_MAG,WEST_PISTOL_MAG,WEST_GRENADE,WEST_SMOKE_WHITE};
        handguns[] = {WEST_PISTOL}; /// randomized
    };

    class B_Soldier_A_F: B_Soldier_F {// MMG Spotter/Ammo Bearer
        backpack[] = {"B_AssaultPack_rgr"}; /// randomized
        backpackItems[] += {WEST_MMG_MAG};
        linkedItems[] += {"ACE_Vector"};
        items[] += {"ACRE_PRC148"};
    };

    class B_soldier_AT_F: B_Soldier_F {// MAT Gunner
        weapons[] = {WEST_CARBINE};
        backpack[] = {"B_AssaultPack_dgtl"};
        magazines[] = {WEST_CARBINE_MAG,WEST_GRENADE,WEST_SMOKE_WHITE};
        launchers[] = {WEST_MAT}; /// randomized
        backpackItems[] += {WEST_MAT_MAG};
    };

    class B_Soldier_AAT_F: B_Soldier_F {// MAT Spotter/Ammo Bearer
        backpack[] = {"B_AssaultPack_dgtl"};
        backpackItems[] += {WEST_MAT_MAG};
        linkedItems[] += {"ACE_Vector"};
        items[] += {"ACRE_PRC148"};
    };

    class B_G_Soldier_A_F: B_Soldier_F {// HAT Gunner
        weapons[] = {WEST_CARBINE};
        backpack[] = {"B_AssaultPack_dgtl"};
        magazines[] = {WEST_CARBINE_MAG,WEST_GRENADE,WEST_SMOKE_WHITE};
        launchers[] = {WEST_HAT}; /// randomized
        backpackItems[] += {WEST_HAT_MAG};
    };

    class B_G_Soldier_LAT_F: B_Soldier_F {// HAT Spotter/Ammo Bearer
        backpack[] = {"B_AssaultPack_dgtl"};
        backpackItems[] += {WEST_HAT_MAG};
        linkedItems[] += {"ACE_Vector"};
        items[] += {"ACRE_PRC148"};
    };

    class B_soldier_AA_F: B_Soldier_F {// SAM Gunner
        weapons[] = {WEST_CARBINE};
        backpack[] = {"B_AssaultPack_dgtl"};
        magazines[] = {WEST_CARBINE_MAG,WEST_GRENADE,WEST_SMOKE_WHITE};
        launchers[] = {WEST_SAM}; /// randomized
        backpackItems[] += {WEST_SAM_MAG};
    };

    class B_Soldier_AAA_F: B_Soldier_F {// SAM Spotter/Ammo Bearer
        backpackItems[] = {WEST_SAM_MAG};
        linkedItems[] += {"ACE_Vector"};
        items[] += {"ACRE_PRC148"};
        backpack[] = {"B_AssaultPack_dgtl"};
    };

    class B_support_Mort_F: B_Soldier_F {// Mortar Gunner
        weapons[] = {WEST_CARBINE};
        magazines[] = {WEST_CARBINE_MAG,WEST_GRENADE,WEST_SMOKE_WHITE};
        items[] = {"MEDICAL_STANDARD"};
        backpack[] = {"I_Mortar_01_weapon_F"}; /// randomized
    };

    class B_support_AMort_F: B_Soldier_F {// Assistant Mortar
        backpack[] = {"I_Mortar_01_support_F"}; /// randomized
        linkedItems[] += {"ACE_Vector"};
        items[] += {"ACRE_PRC148"};
    };

    class B_spotter_F {// Spotter
        uniform[] = {"U_I_GhillieSuit"};  /// randomized
        vest[] = {"V_Chestrig_oli"}; /// randomized
        headgear[] = {"H_Booniehat_khk"}; /// randomized
        backpack[] = {"B_AssaultPack_rgr"}; /// randomized
        weapons[] = {WEST_SPOTTER}; /// randomized
        magazines[] = {WEST_SPOTTER_MAG,WEST_SMOKE_WHITE};
        items[] = {"MEDICAL_STANDARD", "ACRE_PRC343"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemGPS","LaserDesignator"};
        attachments[] = {"optic_KHS_blk"};
    };

    class B_sniper_F {// Sniper
        uniform[] = {"U_I_GhillieSuit"};  /// randomized
        vest[] = {"V_Chestrig_oli"}; /// randomized
        headgear[] = {"H_Booniehat_khk"}; /// randomized
        backpack[] = {"B_AssaultPack_rgr"}; /// randomized
        weapons[] = {WEST_SNIPER}; /// randomized
        magazines[] = {WEST_SNIPER_MAG,WEST_SMOKE_WHITE};
        items[] = {"MEDICAL_STANDARD", "ACRE_PRC343"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemGPS"};
        attachments[] = {"optic_KHS_blk"};
    };

// ====================================================================================
// Vehicle Infantry

    class B_Helipilot_F {// Pilot
        uniform[] = {"U_I_pilotCoveralls"};  /// randomized
        vest[] = {"V_TacVest_blk"}; /// randomized
        headgear[] = {"H_PilotHelmetFighter_I"}; /// randomized
        backpack[] = {"B_AssaultPack_rgr"};
        weapons[] = {WEST_SMG}; /// randomized
        magazines[] = {WEST_SMG_MAG,WEST_SMOKE_WHITE};
        items[] = {"MEDICAL_STANDARD","ACRE_PRC148", "ACRE_PRC343"};
        backpackItems[] += {"ACE_key_indp","ACRE_PRC117F"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemGPS"};
    };

    class B_helicrew_F: B_Helipilot_F { // Pilot

    };

    class B_Pilot_F: B_Helipilot_F { // Pilot
        uniform[] = {"U_I_PilotCoveralls"};  /// randomized
        headgear[] = {"H_PilotHelmetFighter_I"}; /// randomized
    };

    class B_crew_F {// Crew
        uniform[] = {"U_I_CombatUniform"};  /// randomized
        vest[] = {"V_BandollierB_oli"}; // randomized
        headgear[] = {"H_HelmetCrew_I"}; /// randomized
        weapons[] = {WEST_SMG}; /// randomized
        magazines[] = {WEST_SMG_MAG,WEST_SMOKE_WHITE};
        backpackItems[] += {"ACE_key_indp","ACRE_PRC117F"};
        items[] = {"MEDICAL_STANDARD","ACRE_PRC148"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemGPS"};
    };

    class B_Soldier_repair_F: B_crew_F {// Repair Specialist
        backpack[] = {"B_Carryall_oli"};
        backpackItems[] = {"Toolkit","ACRE_PRC148"};
        items[] += {"ACRE_PRC343"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
    };

    class B_soldier_exp_F: B_soldier_repair_F {// Explosive Specialist
        uniform[] = {"U_I_CombatUniform_shortsleeve"};  /// randomized
        backpack[] = {"B_Carryall_oli"};
        backpackItems[] = {"Toolkit","ACE_DefusalKit","ACE_Clacker","MineDetector"};
        magazines[] = {WEST_SMG_MAG,"DemoCharge_Remote_Mag:3","SatchelCharge_Remote_Mag:2"};
    };

    class B_engineer_F: B_soldier_repair_F {// Explosive Specialist
        uniform[] = {"U_I_CombatUniform"};  /// randomized
        backpack[] = {"B_Carryall_oli"};
        backpackItems[] = {"Toolkit","ACE_DefusalKit","ACE_Clacker","MineDetector"};
        magazines[] = {WEST_SMG_MAG,"ATMine_Range_Mag:2","APERSBoundingMine_Range_Mag:2","APERSMine_Range_Mag:2"};
    };

// ====================================================================================
// Special Infantry

    class B_diver_TL_F: B_Soldier_TL_F {// Diver TL
        weapons[] = {SDAR};
		magazines[] = {SDAR_MAG,WEST_CARBINE_MAG,WEST_GRENADE,WEST_SMOKE_WHITE};
		uniform[] = {"U_I_Wetsuit"};  /// randomized
        vest[] = {"V_RebreatherIA"}; /// randomized
        backpack[] = {"B_Carryall_oli"};
        headgear[] = {};

        backpackItems[] += {/*"U_I_CombatUniform","V_Chestrig_oli","H_HelmetIA",*/WEST_CARBINE};
        linkedItems[] += {"G_I_Diving"};

    };

    class B_diver_F: B_Soldier_F {// Diver
        weapons[] = {SDAR};
		magazines[] = {SDAR_MAG,WEST_CARBINE_MAG,WEST_GRENADE,WEST_SMOKE_WHITE};
		uniform[] = {"U_I_Wetsuit"};  /// randomized
        vest[] = {"V_RebreatherIA"}; /// randomized
        backpack[] = {"B_Carryall_oli"};
        headgear[] = {};

        backpackItems[] += {/*"U_I_CombatUniform","V_Chestrig_oli","H_HelmetIA",*/WEST_CARBINE};
        linkedItems[] += {"G_I_Diving"};

    };

};