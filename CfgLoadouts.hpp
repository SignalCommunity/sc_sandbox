class CfgLoadouts {
	usePotato = 0;
	allowMagnifiedOptics = 0;
	setVehicleLoadouts = -1;
	useFallback = 1;
	#define BASE_MEDICAL "ACE_elasticBandage:3","ACE_packingBandage:3","ACE_morphine","ACE_tourniquet:2"
	#define MEDIC_MEDICAL "ACE_fieldDressing:15","ACE_elasticBandage:20","ACE_packingBandage:20","ACE_morphine:8","ACE_epinephrine:8","ACE_personalAidKit"

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