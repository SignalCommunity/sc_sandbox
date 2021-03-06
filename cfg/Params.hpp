class Params {
	class f_param_weather {
		title = "Weather";
		values[] = {0,1,2,3,4,5,6,7,8};
		texts[] = {"Clear (Calm)", "Cloudy (Light Winds)", "Cloudy (Strong Winds)", "Overcast (Calm)", "Overcast (Light Winds)", "Overcast (Strong Winds)", "Rain (Light Winds)", "Rain (Strong Winds)", "Storm"};
		default = 0;
		function = "f_fnc_setWeather";
		isGlobal = 0;
		code = "f_param_weather = %1";
	};
	class f_param_fog {
		title = "Fog";
		values[] = {0,1,2};
		texts[] = {"None","Light","Heavy"};
		default = 0;
		function = "f_fnc_SetFog";
		isGlobal = 0;
		code = "f_param_fog = %1";
	};
	class f_param_timeOfDay {
		title = "Time of Day";
		values[] = {0,1,2,3,4,5,6,7};
		texts[] = {"Dawn", "Early Morning", "Morning", "Noon", "Afternoon", "Evening", "Dusk", "Night"};
		default = 3;
		function = "f_fnc_setTime";
		isGlobal = 0;
		code = "f_param_timeOfDay = %1";
	};
	class sand_param_bluforFaction {		//+ more factions needed
		title = "BLUFOR Faction";
		values[] = {0,1,2};
		texts[] = {
			"NATO [NONE]",
			"CSAT [NONE]",
			"AAF [NONE]"
		};
		default = 0;
		code = "sand_param_bluforFaction = %1";
	};
	class sand_param_opforFaction {			//+ more factions needed
		title = "OPFOR Faction";
		values[] = {0,1,2};
		texts[] = {
			"NATO [NONE]",
			"CSAT [NONE]",
			"AAF [NONE]"
		};
		default = 1;
		code = "sand_param_opforFaction = %1";
	};
	class sand_param_bluforWeapFamily {		//+ more weapon families needed
		title = "BLUFOR Weapon Family";
		values[] = {0,1,2,3};
		texts[] = {
			"MX [NONE]",
			"AK12 [@RHS,@HLC]",
			"AKM [@RHS,@HLC]",
			"AK74 [@RHS,@HLC]"
		};
		default = 0;
		code = "sand_param_bluforWeapFamily = %1";
	};
	class sand_param_opforWeapFamily {		//+ more weapon families needed
		title = "OPFOR Weapon Family";
		values[] = {0,1,2,3};
		texts[] = {
			"MX [NONE]",
			"AK12 [@RHS,@HLC]",
			"AKM [@RHS,@HLC]",
			"AK74 [@RHS,@HLC]"
		};
		default = 0;
		code = "sand_param_opforWeapFamily = %1";
	};
	class sand_param_bluforVehicleFamily {	//! not yet implemented
		title = "BLUFOR Vehicle Family";
		values[] = {0,1,2,3};
		texts[] = {
			"UAZ [@RHS]",
			"GAZ [@RHS]",
			"HMMWV DES [@RHS]",
			"HMMWV WOOD [@RHS]"
		};
		default = 3;
		code = "sand_param_bluforVehicleFamily = %1";
	};
	class sand_param_opforVehicleFamily {	//! not yet implemented
		title = "OPFOR Vehicle Family";
		values[] = {0,1,2,3};
		texts[] = {
			"UAZ [@RHS]",
			"GAZ [@RHS]",
			"HMMWV DES [@RHS]",
			"HMMWV WOOD [@RHS]"
		};
		default = 0;
		code = "sand_param_opforVehicleFamily = %1";
	};
	class sand_param_bluforArmament {		//* not fully tested
		title = "BLUFOR Armament";
		values[] = {4,8,12,16,20};
		texts[] = {
			"Minimal [4 Mag Standard]",
			"Low [8 Mag Standard]",
			"Medium [12 Mag Standard]",
			"High [16 Mag Standard]",
			"Extreme [20 Mag Standard]"
		};
		default = 12;
		code = "sand_param_bluforArmament = %1";
	};
	class sand_param_opforArmament {		//* not fully tested
		title = "OPFOR Armament";
		values[] = {4,8,12,16,20};
		texts[] = {
			"Minimal [4 Mag Standard]",
			"Low [8 Mag Standard]",
			"Medium [12 Mag Standard]",
			"High [16 Mag Standard]",
			"Extreme [20 Mag Standard]"
		};
		default = 12;
		code = "sand_param_opforArmament = %1";
	};
	class sand_param_tracerMagRatio {		//* not fully tested
		title = "Tracer Magazine Ratio";
		values[] = {0,1,2,3,4};
		texts[] = {
			"None",
			"One in Four",
			"Two in Four",
			"Three in Four",
			"Laser Lightshow"
		};
		default = 1;
		code = "sand_param_tracerMagRatio = %1";
	};
	class sand_param_illuminationMunitions {//* not fully tested
		title = "Illumination amount";
		values[] = {0,2,8,16};
		texts[] = {
			"No flares.",
			"Some flares. [2 per GL weapon]",
			"Lots of flares. [8 per GL weapon]",
			"Burning man 2018. [16 per GL weapon]"
		};
		default = 0;
		code = "sand_param_illuminationMunitions = %1";
	};
	class sand_param_bluforNVD {			//* not fully tested
		title = "BLUFOR NVDs";
		values[] = {0,1,2,3};
		texts[] = {
			"Force remove NVDs.",
			"Remove all but pilots' NVDs.",
			"Leave loadout settings.",
			"Force add NVDs."
		};
		default = 1;
		code = "sand_param_bluforNVD = %1";
	};
	class sand_param_opforNVD {				//* not fully tested
		title = "OPFOR NVDs";
		values[] = {0,1,2,3};
		texts[] = {
			"Force remove NVDs.",
			"Remove all but pilots' NVDs.",
			"Leave loadout settings.",
			"Force add NVDs."
		};
		default = 1;
		code = "sand_param_opforNVD = %1";
	};
};
