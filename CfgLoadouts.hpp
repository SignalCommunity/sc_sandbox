class CfgLoadouts {
	//Use POTATO to run gear assignment
	usePotato = 0;

	//Fast, Easy Settings to change loadouts without touching the arrays.  For TVT Balancing.
	//Allow Zoomed Optics (1 is true, 0 is false) <Anything like a HAMR (4x) optic won't be added, "red dot" would be fine>
	allowMagnifiedOptics = 0;

	//Do Vehicle Loadouts
	//(1 will run normaly, 0 will leave them to vanilla defaults, -1 will clear and leave empty)
	setVehicleLoadouts = -1;

	//Fallback: use a basic soldiers loadout when the unit's classname isn't found (for Alive spawning random units)
	useFallback = 1;

	#define BASE_MEDICAL "ACE_elasticBandage:3","ACE_packingBandage:3","ACE_morphine","ACE_tourniquet:2"
	#define MEDIC_MEDICAL "ACE_fieldDressing:15","ACE_elasticBandage:20","ACE_packingBandage:20","ACE_morphine:8","ACE_epinephrine:8","ACE_personalAidKit"

	
	//CHANGE ALL PATHS TO ADDON PATHS LATER


	// ~~ Vanilla ~~ //

	class NATO { //@nothing
		#include "assets\Loadouts\nato.hpp"
	};
	class CSAT {  //@nothing
		#include "assets\Loadouts\csat.hpp"
	};
	class AAF {  //@nothing
		#include "assets\Loadouts\aaf.hpp"
	};
};

class CfgWeaponsPlatforms {
	class MX {
		#include "assets\Weapons\mx.hpp"
	};
	class AK12 {
		#include "assets\Weapons\ak12.hpp"
	};
	class AKM {
		#include "assets\Weapons\akm.hpp"
	};
	class AK74 {
		#include "assets\Weapons\ak74.hpp"
	};
};

class CfgVehicleFamilies {
	/*
	class UAZ {
		#include "assets\Vehicles\uaz.hpp"
	};
	class GAZ {
		#include "assets\Vehicles\gaz.hpp"
	};
	class HMMWV_W {
		#include "assets\Vehicles\hmmwv_w.hpp"
	};
	class HMMWV_D {
		#include "assets\Vehicles\hmmwv_d.hpp"
	};
	*/
};