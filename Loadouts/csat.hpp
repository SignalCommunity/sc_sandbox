//Author: Bismarck
//Faction: CSAT
// ====================================================================================

class Soldier_F {		// RIFLEMAN
	weapons[] = 		{"rifle"};
	launchers[] = 		{};
	handguns[] = 		{};
	magazines[] = 		{"rifle_mag","rifle_mag_trace","grenade","smoke_white"};
	items[] = 			{"ACRE_PRC343"};
	linkedItems[] = 	{"ItemMap","ItemCompass","ItemWatch","NVGoggles"};
	attachments[] = 	{"rifle_attachment"};
	
	uniform[] = 		{"U_O_CombatUniform_ocamo"};
	vest[] = 			{"V_Chestrig_khk","V_HarnessO_brn"};
	headgear[] = 		{"H_HelmetSpecO_ocamo"};
	backpack[] = 		{"B_TacticalPack_ocamo"};
	backpackItems[] = 	{BASE_MEDICAL};
};

class officer_F {		// PLATOON COMMANDER + SQUAD LEADER + XO + FAC/JTAC + COMPANY COMMANDER
	weapons[] = 		{"carbine"};
	launchers[] = 		{};
	handguns[] = 		{};
	magazines[] = 		{"carbine_mag","carbine_mag_trace","smoke_white","smoke_blue","smoke_purple"};
	items[] = 			{"ACRE_PRC148"};
	linkedItems[] = 	{"ItemMap","ItemCompass","ItemWatch","NVGoggles","ItemGPS","ACE_Vector"};
	attachments[] = 	{"carbine_attachment"};
	
	uniform[] = 		{"U_O_CombatUniform_ocamo"};
	vest[] = 			{"V_Chestrig_khk","V_HarnessO_brn"};
	headgear[] = 		{"H_HelmetSpecO_ocamo"};
	backpack[] = 		{"B_TacticalPack_ocamo"};
	backpackItems[] = 	{BASE_MEDICAL,"ACRE_PRC117F"};
};

class Soldier_SL_F {	// PLATOON COMMANDER + SQUAD LEADER + XO + FAC/JTAC + COMPANY COMMANDER
	weapons[] = 		{"carbine"};
	launchers[] = 		{};
	handguns[] = 		{};
	magazines[] = 		{"carbine_mag","carbine_mag_trace","smoke_white","smoke_blue","smoke_purple"};
	items[] = 			{"ACRE_PRC148","ACRE_PRC343"};
	linkedItems[] = 	{"ItemMap","ItemCompass","ItemWatch","NVGoggles","ItemGPS","ACE_Vector"};
	attachments[] = 	{"carbine_attachment"};
	
	uniform[] = 		{"U_O_CombatUniform_ocamo"};
	vest[] = 			{"V_PlateCarrierGL_rgr"};
	headgear[] = 		{"H_HelmetSpecB_blk"};
	backpack[] = 		{"B_TacticalPack_ocamo"};
	backpackItems[] = 	{BASE_MEDICAL};
};

class soldier_UAV_F {	// RIFLEMAN
	weapons[] = 		{"rifle"};
	launchers[] = 		{};
	handguns[] = 		{};
	magazines[] = 		{"rifle_mag","rifle_mag_trace","grenade","smoke_white"};
	items[] = 			{"ACRE_PRC343"};
	linkedItems[] = 	{"ItemMap","ItemCompass","ItemWatch","NVGoggles","B_uavterminal"};
	attachments[] = 	{"rifle_attachment"};
	
	uniform[] = 		{"U_O_CombatUniform_ocamo"};
	vest[] = 			{"V_PlateCarrier1_rgr","V_PlateCarrier2_rgr"};
	headgear[] = 		{"H_HelmetSpecO_ocamo"};
	backpack[] = 		{"B_TacticalPack_ocamo"};
	backpackItems[] = 	{BASE_MEDICAL};
};

class medic_F {			// MEDIC
	weapons[] = 		{"carbine"};
	launchers[] = 		{};
	handguns[] = 		{};
	magazines[] = 		{"carbine_mag","carbine_mag_trace","smoke_white","smoke_white","smoke_green","smoke_green"};
	items[] = 			{"ACRE_PRC343"};
	linkedItems[] = 	{"ItemMap","ItemCompass","ItemWatch","NVGoggles"};
	attachments[] = 	{"carbine_attachment"};
	
	uniform[] = 		{"U_O_CombatUniform_ocamo"};
	vest[] = 			{"V_PlateCarrierSpec_rgr"};
	headgear[] = 		{"H_HelmetSpecO_ocamo"};
	backpack[] = 		{"B_TacticalPack_ocamo"};
	backpackItems[] = 	{MEDIC_MEDICAL};
};

class Soldier_TL_F {	// FIRETEAM LEADER
	weapons[] = 		{"glrifle"};
	launchers[] = 		{};
	handguns[] = 		{};
	magazines[] = 		{"glrifle_mag","glrifle_mag_trace","glrifle_mag_he","glrifle_mag_smoke","glrifle_mag_flare","grenade","smoke_white","smoke_red"};
	items[] = 			{"ACRE_PRC343"};
	linkedItems[] = 	{"ItemMap","ItemCompass","ItemWatch","NVGoggles","ItemGPS"};
	attachments[] = 	{"glrifle_attachment"};
	
	uniform[] = 		{"U_O_CombatUniform_ocamo"};
	vest[] = 			{"V_PlateCarrier1_rgr","V_PlateCarrier2_rgr"};
	headgear[] = 		{"H_HelmetSpecB"};
	backpack[] = 		{"B_TacticalPack_ocamo"};
	backpackItems[] = 	{BASE_MEDICAL};
};

class Soldier_AR_F {	// AUTOMATIC RIFLEMAN
	weapons[] = 		{"ar"};
	launchers[] = 		{};
	handguns[] = 		{};
	magazines[] = 		{"ar_mag","ar_mag_trace","grenade","smoke_white"};
	items[] = 			{"ACRE_PRC343"};
	linkedItems[] = 	{"ItemMap","ItemCompass","ItemWatch","NVGoggles"};
	attachments[] = 	{"ar_attachment"};
	
	uniform[] = 		{"U_O_CombatUniform_ocamo"};
	vest[] = 			{"V_PlateCarrier2_rgr"};
	headgear[] = 		{"H_HelmetSpecO_ocamo"};
	backpack[] = 		{"B_TacticalPack_ocamo"};
	backpackItems[] = 	{BASE_MEDICAL};
};

class Soldier_AAR_F {	// ASSISTANT AUTOMATIC RIFLEMAN
	weapons[] = 		{"rifle"};
	launchers[] = 		{};
	handguns[] = 		{};
	magazines[] = 		{"rifle_mag","rifle_mag_trace","grenade","smoke_white"};
	items[] = 			{"ACRE_PRC343"};
	linkedItems[] = 	{"ItemMap","ItemCompass","ItemWatch","NVGoggles","Binocular"};
	attachments[] = 	{"rifle_attachment"};
	
	uniform[] = 		{"U_O_CombatUniform_ocamo"};
	vest[] = 			{"V_PlateCarrier1_rgr","V_PlateCarrier2_rgr"};
	headgear[] = 		{"H_HelmetSpecO_ocamo"};
	backpack[] = 		{"B_TacticalPack_ocamo"};
	backpackItems[] = 	{BASE_MEDICAL,"ar_mag_trace","ar_mag"};
};

class Soldier_LAT_F {	// ANTITANK RIFLEMAN
	weapons[] = 		{"carbine"};
	launchers[] = 		{"at"};
	handguns[] = 		{};
	magazines[] = 		{"carbine_mag","carbine_mag_trace","grenade","smoke_white","at_mag"};
	items[] = 			{"ACRE_PRC343"};
	linkedItems[] = 	{"ItemMap","ItemCompass","ItemWatch","NVGoggles"};
	attachments[] = 	{"carbine_attachment"};
	
	uniform[] = 		{"U_O_CombatUniform_ocamo"};
	vest[] = 			{"V_PlateCarrier1_rgr","V_PlateCarrier2_rgr"};
	headgear[] = 		{"H_HelmetSpecO_ocamo"};
	backpack[] = 		{"B_TacticalPack_ocamo"};
	backpackItems[] = 	{BASE_MEDICAL};
};

class HeavyGunner_F {	// MEDIUM MACHINE GUNNER
	weapons[] = 		{"mmg"};
	launchers[] = 		{};
	handguns[] = 		{"pistol"};
	magazines[] = 		{"mmg_mag","pistol_mag","grenade","smoke_white"};
	items[] = 			{"ACRE_PRC343","ACRE_PRC148"};
	linkedItems[] = 	{"ItemMap","ItemCompass","ItemWatch","NVGoggles"};
	attachments[] = 	{"mmg_attachment"};
	
	uniform[] = 		{"U_O_CombatUniform_ocamo"};
	vest[] = 			{"V_PlateCarrier1_rgr","V_PlateCarrier2_rgr"};
	headgear[] = 		{"H_HelmetSpecO_ocamo"};
	backpack[] = 		{"B_TacticalPack_ocamo"};
	backpackItems[] = 	{BASE_MEDICAL};
};

class Soldier_A_F {		// MEDIUM MACHINE GUN SPOTTER
	weapons[] = 		{"rifle"};
	launchers[] = 		{};
	handguns[] = 		{};
	magazines[] = 		{"rifle_mag","rifle_mag_trace","grenade","smoke_white"};
	items[] = 			{"ACRE_PRC343","ACRE_PRC148"};
	linkedItems[] = 	{"ItemMap","ItemCompass","ItemWatch","NVGoggles","ACE_Vector"};
	attachments[] = 	{"rifle_attachment"};
	
	uniform[] = 		{"U_O_CombatUniform_ocamo"};
	vest[] = 			{"V_PlateCarrier1_rgr","V_PlateCarrier2_rgr"};
	headgear[] = 		{"H_HelmetSpecO_ocamo"};
	backpack[] = 		{"B_TacticalPack_ocamo"};
	backpackItems[] = 	{BASE_MEDICAL};
};

class soldier_AT_F {	// MEDIUM ANTITANK GUNNER
	weapons[] = 		{"carbine"};
	launchers[] = 		{"mat"};
	handguns[] = 		{};
	magazines[] = 		{"carbine_mag","carbine_mag_trace","smoke_white"};
	items[] = 			{"ACRE_PRC343","ACRE_PRC148"};
	linkedItems[] = 	{"ItemMap","ItemCompass","ItemWatch","NVGoggles"};
	attachments[] = 	{"carbine_attachment"};
	
	uniform[] = 		{"U_O_CombatUniform_ocamo"};
	vest[] = 			{"V_PlateCarrier1_rgr","V_PlateCarrier2_rgr"};
	headgear[] = 		{"H_HelmetSpecO_ocamo"};
	backpack[] = 		{"B_TacticalPack_ocamo"};
	backpackItems[] = 	{BASE_MEDICAL,"ACRE_PRC148"};
};

class Soldier_AAT_F {	// MEDIUM ANTITANK ASSISTANT
	weapons[] = 		{"rifle"};
	launchers[] = 		{};
	handguns[] = 		{};
	magazines[] = 		{"rifle_mag","rifle_mag_trace","smoke_white"};
	items[] = 			{"ACRE_PRC343","ACRE_PRC148"};
	linkedItems[] = 	{"ItemMap","ItemCompass","ItemWatch","NVGoggles","ACE_Vector"};
	attachments[] = 	{"rifle_attachment"};
	
	uniform[] = 		{"U_O_CombatUniform_ocamo"};
	vest[] = 			{"V_PlateCarrier1_rgr","V_PlateCarrier2_rgr"};
	headgear[] = 		{"H_HelmetSpecO_ocamo"};
	backpack[] = 		{"B_TacticalPack_ocamo"};
	backpackItems[] = 	{BASE_MEDICAL,"mat_mag"};
};

class soldier_AA_F {	// SAM GUNNER
	weapons[] = 		{"carbine"};
	launchers[] = 		{"sam"};
	handguns[] = 		{};
	magazines[] = 		{"carbine_mag","carbine_mag_trace","smoke_white"};
	items[] = 			{"ACRE_PRC343","ACRE_PRC148"};
	linkedItems[] = 	{"ItemMap","ItemCompass","ItemWatch","NVGoggles"};
	attachments[] = 	{"carbine_attachment"};
	
	uniform[] = 		{"U_O_CombatUniform_ocamo"};
	vest[] = 			{"V_PlateCarrier1_rgr","V_PlateCarrier2_rgr"};
	headgear[] = 		{"H_HelmetSpecO_ocamo"};
	backpack[] = 		{"B_TacticalPack_ocamo"};
	backpackItems[] = 	{BASE_MEDICAL,"sam_mag"};
};

class Soldier_AAA_F {	// SAM ASSISTANT
	weapons[] = 		{"rifle"};
	launchers[] = 		{};
	handguns[] = 		{};
	magazines[] = 		{"rifle_mag","rifle_mag_trace","smoke_white"};
	items[] = 			{"ACRE_PRC343","ACRE_PRC148"};
	linkedItems[] = 	{"ItemMap","ItemCompass","ItemWatch","NVGoggles","Binocular"};
	attachments[] = 	{"rifle_attachment"};
	
	uniform[] = 		{"U_O_CombatUniform_ocamo"};
	vest[] = 			{"V_PlateCarrier1_rgr","V_PlateCarrier2_rgr"};
	headgear[] = 		{"H_HelmetSpecO_ocamo"};
	backpack[] = 		{"B_TacticalPack_ocamo"};
	backpackItems[] = 	{BASE_MEDICAL,"sam_mag"};
};

class support_Mort_F {	// MORTAR GUNNER
	weapons[] = 		{"carbine"};
	launchers[] = 		{};
	handguns[] = 		{};
	magazines[] = 		{"carbine_mag","carbine_mag_trace","smoke_white"};
	items[] = 			{"ACRE_PRC343","ACRE_PRC148",BASE_MEDICAL};
	linkedItems[] = 	{"ItemMap","ItemCompass","ItemWatch","NVGoggles","ACE_Vector"};
	attachments[] = 	{"carbine_attachment"};
	
	uniform[] = 		{"U_O_CombatUniform_ocamo"};
	vest[] = 			{"V_PlateCarrier1_rgr","V_PlateCarrier2_rgr"};
	headgear[] = 		{"H_HelmetSpecO_ocamo"};
	backpack[] = 		{"B_Mortar_01_support_F"};
	backpackItems[] = 	{};
};

class support_AMort_F{	// MORTAR ASSISTANT
	weapons[] = 		{"rifle"};
	launchers[] = 		{};
	handguns[] = 		{};
	magazines[] = 		{"rifle_mag","rifle_mag_trace","smoke_white"};
	items[] = 			{"ACRE_PRC343","ACRE_PRC148",BASE_MEDICAL};
	linkedItems[] = 	{"ItemMap","ItemCompass","ItemWatch","NVGoggles"};
	attachments[] = 	{"rifle_attachment"};
	
	uniform[] = 		{"U_O_CombatUniform_ocamo"};
	vest[] = 			{"V_PlateCarrier1_rgr","V_PlateCarrier2_rgr"};
	headgear[] = 		{"H_HelmetSpecO_ocamo"};
	backpack[] = 		{"B_Mortar_01_weapon_F"};
	backpackItems[] = 	{};
};

class sniper_F {		// SNIPER
	weapons[] = 		{"sniper"};
	launchers[] = 		{};
	handguns[] = 		{};
	magazines[] = 		{"sniper_mag","smoke_white"};
	items[] = 			{"ACRE_PRC343",BASE_MEDICAL,"ACRE_PRC148"};
	linkedItems[] = 	{"ItemMap","ItemCompass","ItemWatch","NVGoggles","ItemGPS"};
	attachments[] = 	{"sniper_attachment"};
	
	uniform[] = 		{"U_B_FullGhillie_ard"};
	vest[] = 			{"V_BandollierB_khk"};
	headgear[] = 		{"H_Watchcap_khk"};
	backpack[] = 		{};
	backpackItems[] = 	{};
};

class spotter_F {		// SPOTTER
	weapons[] = 		{"carbine"};
	launchers[] = 		{};
	handguns[] = 		{};
	magazines[] = 		{"carbine_mag","carbine_mag_trace","sniper_mag","grenade","smoke_white"};
	items[] = 			{"ACRE_PRC343","ACRE_PRC148"};
	linkedItems[] = 	{"ItemMap","ItemCompass","ItemWatch","NVGoggles","ItemGPS","LaserDesignator"};
	attachments[] = 	{"carbine_attachment"};
	
	uniform[] = 		{"U_B_CombatUniform_mcam"};
	vest[] = 			{"V_Chestrig_rgr"};
	headgear[] = 		{"H_Watchcap_camo"};
	backpack[] = 		{"B_TacticalPack_ocamo"};
	backpackItems[] = 	{BASE_MEDICAL};
};

class Helipilot_F {		// HELICOPTER PILOT
	weapons[] = 		{"carbine"};
	launchers[] = 		{};
	handguns[] = 		{};
	magazines[] = 		{"carbine_mag"};
	items[] = 			{"ACRE_PRC148",BASE_MEDICAL};
	linkedItems[] = 	{"ItemMap","ItemCompass","ItemWatch","ItemGPS","NVgoggles"};
	attachments[] = 	{"rifle_attachment"};
	
	uniform[] = 		{"U_O_PilotCoveralls"};
	vest[] = 			{"V_TacVest_blk"};
	headgear[] = 		{"H_PilotHelmetHeli_O"};
	backpack[] = 		{"B_AssaultPack_blk"};
	backpackItems[] = 	{"ACRE_PRC117F"};
};

class helicrew_F {		// HELICOPTER CREWMAN
	weapons[] = 		{"carbine"};
	launchers[] = 		{};
	handguns[] = 		{};
	magazines[] = 		{"carbine_mag"};
	items[] = 			{"ACRE_PRC148",BASE_MEDICAL};
	linkedItems[] = 	{"ItemMap","ItemCompass","ItemWatch","ItemGPS","NVgoggles"};
	attachments[] = 	{"rifle_attachment"};
	
	uniform[] = 		{"U_O_PilotCoveralls"};
	vest[] = 			{"V_TacVest_blk"};
	headgear[] = 		{"H_CrewHelmetHeli_O"};
	backpack[] = 		{"B_AssaultPack_blk"};
	backpackItems[] = 	{"ACRE_PRC117F"};
};

class Pilot_F {			// FIXED WING PILOT
	weapons[] = 		{"carbine"};
	launchers[] = 		{};
	handguns[] = 		{};
	magazines[] = 		{"carbine_mag"};
	items[] = 			{"ACRE_PRC148",BASE_MEDICAL};
	linkedItems[] = 	{"ItemMap","ItemCompass","ItemWatch","ItemGPS","NVgoggles"};
	attachments[] = 	{"rifle_attachment"};
	
	uniform[] = 		{"U_O_PilotCoveralls"};
	vest[] = 			{"V_TacVest_blk"};
	headgear[] = 		{"H_PilotHelmetFighter_O"};
	backpack[] = 		{"B_AssaultPack_blk"};
	backpackItems[] = 	{"ACRE_PRC117F"};
};

class crew_F {			// CREWMAN
	weapons[] = 		{"carbine"};
	launchers[] = 		{};
	handguns[] = 		{};
	magazines[] = 		{"carbine_mag","smoke_white"};
	items[] = 			{"ACRE_PRC343",BASE_MEDICAL};
	linkedItems[] = 	{"ItemMap","ItemCompass","ItemWatch","NVGoggles"};
	attachments[] = 	{"rifle_attachment"};
	
	uniform[] = 		{"U_B_CombatUniform_mcam"};
	vest[] = 			{"V_TacVest_blk"};
	headgear[] = 		{"H_Watchcap_camo"};
	backpack[] = 		{"B_FieldPack_ocamo"};
	backpackItems[] = 	{"ACRE_PRC148","ACRE_PRC117F"};
};

class engineer_F {		// ENGINEER
	weapons[] = 		{"carbine"};
	launchers[] = 		{};
	handguns[] = 		{};
	magazines[] = 		{"carbine_mag","carbine_mag_trace"};
	items[] = 			{"ACRE_PRC343",BASE_MEDICAL};
	linkedItems[] = 	{"ItemMap","ItemCompass","ItemWatch","NVGoggles"};
	attachments[] = 	{"rifle_attachment"};
	
	uniform[] = 		{"U_B_CombatUniform_mcam"};
	vest[] = 			{"V_TacVest_blk"};
	headgear[] = 		{"H_Watchcap_camo"};
	backpack[] = 		{"B_FieldPack_ocamo"};
	backpackItems[] = 	{"ACRE_PRC148","Toolkit","ACE_DefusalKit","ACE_Clacker","MineDetector"};
};


// Classes not directly used by default framework below //

class soldier_M_F:			sniper_F {};
class recon_M_F:			sniper_F {};
class ghillie_lsh_F:		sniper_F {};
class ghillie_sard_F:		sniper_F {};
class ghillie_ard_F:		sniper_F {};
class Sharpshooter_F:		sniper_F {};
class Recon_Sharpshooter_F:	sniper_F {};
class Pathfinder_F:			sniper_F {};
class Soldier_lite_F:		Soldier_F {};
class support_MG_F:			Soldier_F {};
class support_GMG_F:		Soldier_F {};
class support_AMG_F:		Soldier_F {};
class recon_F:				Soldier_F {};
class soldier_repair_F:		engineer_F {};
class soldier_exp_F:		engineer_F {};
class recon_exp_F:			engineer_F {};
class recon_TL_F:			Soldier_TL_F {};
class Soldier_GL_F:			Soldier_TL_F {};

class recon_LAT_F:			Soldier_LAT_F {};
class recon_medic_F:		medic_F {};
class recon_JTAC_F:			officer_F {};