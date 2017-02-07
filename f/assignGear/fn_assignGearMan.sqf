// Author: PabstMirror

waitUntil {!isNil "sand_param_bluforFaction"};

potato_assignGear_allowMagnifiedOptics = true;
potato_assignGear_setVehicleLoadouts = true;
potato_assignGear_useFallback = false;

params ["_unit"];

private _loadoutSet = switch (side _unit) do {
	case west: {sand_param_bluforFaction};
	case east: {sand_param_opforFaction};
};

private _weaponFamily = switch (side _unit) do {
	case west: {sand_param_bluforWeapFamily};
	case east: {sand_param_opforWeapFamily};
};

private _armament = switch (side _unit) do {
	case west: {sand_param_bluforArmament};
	case east: {sand_param_opforArmament};
};


private _unitClassname = typeOf _unit;

private _loadout = [_unitClassname,2] call BIS_fnc_trimString; // O_UNIT_NAME --> UNIT_NAME
//private _path = missionConfigFile >> "CfgLoadouts" >> _loadoutSet >> _loadout;
private _path = (("true" configClasses (missionConfigFile >> "CfgLoadouts")) select _loadoutSet) >> _loadout;
if (!isClass(_path)) exitWith {};

_loadoutArray = [_path,_weaponFamily,_armament] call F_fnc_getLoadoutFromConfig;

_unit setUnitLoadout _loadoutArray;

if (isText (_path >> "init")) then {
    _unit call compile ("this = _this;"+ getText (_path >> "init"));
};