// Author: PabstMirror, modified by Bismarck
params ["_path","_weaponFamily","_armament","_isPilot","_side"];

if ((_side != east) && (_side != west)) exitWith {};

private _configUniform = getArray (_path >> "uniform");
private _configVest = getArray (_path >> "vest");
private _configHeadgear = getArray (_path >> "headgear");
private _configBackpack = getArray (_path >> "backpack");
private _configBackpackItems = getArray (_path >> "backpackItems");
private _configWeapons = getArray (_path >> "weapons");
private _configLaunchers = getArray (_path >> "launchers");
private _configHandguns = getArray (_path >> "handguns");
private _configMagazines = getArray (_path >> "magazines");
private _configItems = getArray (_path >> "items");
private _configLinkedItems = getArray (_path >> "linkedItems");
private _configAttachments = getArray (_path >> "attachments");
private _configSecondaryAttachments = getArray (_path >> "secondaryAttachments");

// Initial NVD handling //
diag_log ["DIAGNOSTICS before top",_configLinkedItems];

private _nvdParameter = if (_side == west) then {sand_param_bluforNVD} else {sand_param_opforNVD};
switch (_nvdParameter) do {
	case 0: { //remove from all
		_found = _configLinkedItems find "nvd";
		if (_found != -1) then {_configLinkedItems deleteAt _found};
	};
	case 1: { //remove from all, add to pilot
		if !(_isPilot) then {
			_found = _configLinkedItems find "nvd";
			if (_found != -1) then {_configLinkedItems deleteAt _found};
		} else {
			if !("nvd" in _configLinkedItems) then {_configLinkedItems pushBack "nvd"};
		}
	};
	case 2: { //leave the loadout defaults

	};
	case 3: { //add to all
		if !("nvd" in _configLinkedItems) then {_configLinkedItems pushBack "nvd"};
	};
};
diag_log ["DIAGNOSTICS after top",_configLinkedItems];
//~ THIS BLOCK REPLACES BASENAMES WITH REAL CLASSNAMES ~//
//~ EG. rifle -> rhs_weap_akm, grenade -> rhs_mag_rgd5 ~//

	private _weaponsPlatformPath = (("true" configClasses (missionConfigFile >> "CfgWeaponsPlatforms")) select _weaponFamily);
	private _weapons = configProperties [_weaponsPlatformPath];
	private _replaceBys = [];
	{
		_replaceBys pushBack [configName _x, getText _x];
	} forEach _weapons;

	{

		// MAGAZINE DISTRIBUTION //

			_allTracer = if (sand_param_tracerMagRatio == 4) then {true} else {false};
			_noTracer = if (sand_param_tracerMagRatio == 0) then {true} else {false};

			if (_allTracer && ((_x select 0) in ["rifle_mag","glrifle_mag","carbine_mag","ar_mag","mmg_mag"])) then {
				_replaceBys = _replaceBys - [_x];	// give no regular mags if laser lightshow selected
				_replaceBys = _replaceBys + [[_x select 0,""]];
			};
			if (_noTracer && ((_x select 0) in ["rifle_mag_trace","glrifle_mag_trace","carbine_mag_trace","ar_mag_trace","mmg_mag_trace"])) then {
				_replaceBys = _replaceBys - [_x];	//give no tracers if tracer mags are set to zero
				_replaceBys = _replaceBys + [[_x select 0,""]]
			};

			if (!_allTracer && ((_x select 0) in ["rifle_mag","glrifle_mag","carbine_mag"])) then {
				_strN = (_x select 1) + ":" + str ((_armament / 4) * (4 - sand_param_tracerMagRatio));
				_replaceBys = _replaceBys - [_x];
				_replaceBys = _replaceBys + [[_x select 0, _strN]];
			};
			if (!_noTracer && ((_x select 0) in ["rifle_mag_trace","glrifle_mag_trace","carbine_mag_trace"])) then {
				_strN = (_x select 1) + ":" + str ((_armament / 4) * (sand_param_tracerMagRatio));
				_replaceBys = _replaceBys - [_x];
				_replaceBys = _replaceBys + [[_x select 0, _strN]];
			};

			if (!_allTracer && ((_x select 0) in ["ar_mag","mmg_mag"])) then {
				_strN = (_x select 1) + ":" + str round(((_armament / 12) * (4 - sand_param_tracerMagRatio)));
				_replaceBys = _replaceBys - [_x];
				_replaceBys = _replaceBys + [[_x select 0, _strN]];
			};
			if (!_noTracer && ((_x select 0) in ["ar_mag_trace","mmg_mag_trace"])) then {
				_strN = (_x select 1) + ":" + str round(((_armament / 12) * (sand_param_tracerMagRatio)));
				_replaceBys = _replaceBys - [_x];
				_replaceBys = _replaceBys + [[_x select 0, _strN]];
			};

		// ITEM DISTRIBUTION //

			_glHEcount = 	ceil (_armament / 2);	//mag#/2
			_glSMOKEcount = ceil (_armament / 3);	//mag#/3
			_glFLAREcount = sand_param_illuminationMunitions;
			_smokeCount = 	ceil (_armament / 6);
			_fragcount = 	ceil (_armament / 8); 	//2+ frags unless under 8 mag loadout weight
			_cSmokeCount = 	ceil (_armament / 12);	//1 of each colored smoke unless over 12 mag loadout weight
			_cSmokeArr = 	["smoke_red","smoke_purple","smoke_green","smoke_blue"];
			switch (_x select 0) do {
				case "glrifle_mag_he": {
					_strN = (_x select 1) + ":" + str _glHEcount;
					_replaceBys = _replaceBys - [_x];
					_replaceBys = _replaceBys + [[_x select 0, _strN]];
				};
				case "glrifle_mag_smoke": {
					_strN = (_x select 1) + ":" + str _glSMOKEcount;
					_replaceBys = _replaceBys - [_x];
					_replaceBys = _replaceBys + [[_x select 0, _strN]];
				};
				case "glrifle_mag_flare": {
					if (sand_param_illuminationMunitions == 0) then {
						_replaceBys = _replaceBys - [_x];
						_replaceBys = _replaceBys + [[_x select 0, ""]];
					} else {
						_strN = (_x select 1) + ":" + str _glFLAREcount;
						_replaceBys = _replaceBys - [_x];
						_replaceBys = _replaceBys + [[_x select 0, _strN]];
					};
				};
				case "smoke_white": {
					_strN = (_x select 1) + ":" + str _smokeCount;
					_replaceBys = _replaceBys - [_x];
					_replaceBys = _replaceBys + [[_x select 0, _strN]];
				};
				case "grenade": {
					_strN = (_x select 1) + ":" + str _fragCount;
					_replaceBys = _replaceBys - [_x];
					_replaceBys = _replaceBys + [[_x select 0, _strN]];
				};
			};

			if ((_x select 0) in _cSmokeArr) then {
				_strN = (_x select 1) + ":" + str _cSmokeCount;
				_replaceBys = _replaceBys - [_x];
				_replaceBys = _replaceBys + [[_x select 0, _strN]];
			};
	} forEach _replaceBys;


	// ---------- //


	_weCareAbout = [_configBackpackItems,_configWeapons,_configLaunchers,_configHandguns,_configMagazines,_configItems,_configLinkedItems,_configAttachments];
	_weCareAboutS = ["_configBackpackItems","_configWeapons","_configLaunchers","_configHandguns","_configMagazines","_configItems","_configLinkedItems","_configAttachments"];

	{
		_replaceTagger = _x;
		private _wcaIndex = 0;
		{
			_stuffArray = _x;
			if ((_replaceTagger select 0) in _stuffArray) then {
				call compile format [
					"%1 = %1 - %2; %1 = %1 + %3;",
					(_weCareAboutS select _wcaIndex),
					"[_replaceTagger select 0]",
					"[_replaceTagger select 1]"
				];
			};
			_wcaIndex = _wcaIndex + 1;
		} forEach _weCareAbout;
	} forEach _replaceBys;

//~ THIS BLOCK DOES SOME OTHER STUFF TO CREATE THE THINGS THAT CAN DO THE STUFF ~//

private _uniformArray = [];
private _vestArray = [];
private _backpackArray = [];
private _containersArray = [[0],[0],[0]];

if (!(_configUniform isEqualTo [])) then {
    private _uniform = selectRandom _configUniform;
    private _container = getText (configFile >> "CfgWeapons" >> _uniform >> "ItemInfo" >> "containerClass");
    private _uniformSpace = getNumber (configFile >> "CfgVehicles" >> _container >> "maximumLoad");
    _uniformArray = [_uniform, []];
    _containersArray set [0, [_uniformSpace, _uniformArray]];
};
if (!(_configVest isEqualTo [])) then {
    private _vest = selectRandom _configVest;
    private _container = getText (configFile >> "CfgWeapons" >> _vest >> "ItemInfo" >> "containerClass");
    private _vestSpace = getNumber (configFile >> "CfgVehicles" >> _container >> "maximumLoad");
    _vestArray = [_vest, []];
    _containersArray set [1, [_vestSpace, _vestArray]];
};
if (!(_configBackpack isEqualTo [])) then {
    private _backpack = selectRandom _configBackpack;
    private _backpackSpace = getNumber (configFile >> "CfgVehicles" >> _backpack >> "maximumLoad");
    _backpackArray = [_backpack, []];
    _containersArray set [2, [_backpackSpace, _backpackArray]];
};


private _headgear = if (_configHeadgear isEqualTo []) then {""} else {selectRandom _configHeadgear};
private _binocularArray = [];
private _assignedItems = ["", "", "", "", "", ""];

private _fnc_addItemsToContainer = {
    params ["_itemsToAddArray", "_index"];
    if (_itemsToAddArray isEqualTo []) exitWith {_itemsToAddArray};
    private _indexSlotNum = [801, 701, 901] select _index; //for the "allowedSlots" check
    (_containersArray select _index) params ["_sizeLeft", ["_array", []]];
    private _returnArray = [];
    {
        _itemToAdd = _x;
        _xReturn = [] call {
            (_itemToAdd splitString ":") params ["_classname", ["_amountToAdd", "1", [""]]];
            _amountToAdd = parseNumber _amountToAdd;
            private _mass = -1;
            private _count = -1;
            private _allowedSlots = [];
			if (isNil "_classname") exitWith {":"};
            if (isClass (configFile >> "CfgMagazines" >> _classname)) then {
                _mass = getNumber (configFile >> "CfgMagazines" >> _classname >> "mass");
                _count = getNumber (configFile >> "CfgMagazines" >> _classname >> "count");
                _allowedSlots = getArray (configFile >> "CfgMagazines" >> _classname >> "allowedSlots");
            } else {
                if (isClass (configFile >> "CfgWeapons" >> _classname)) exitWith {
                    _mass = getNumber (configFile >> "CfgWeapons" >> _classname >> "ItemInfo" >> "mass");
                    _allowedSlots = getArray (configFile >> "CfgWeapons" >> _classname >> "ItemInfo" >> "allowedSlots");
                };
            };
            if (_mass < 0) exitWith {
                diag_log text format ["[POTATO-assignGear] Item Not Found [%1]", _itemToAdd];
                "";
            };
            if (!((_allowedSlots isEqualTo []) || {_indexSlotNum in _allowedSlots})) exitWith {
                _itemToAdd
            };


            private _ammountThatWillFit = 9999; //if (_mass == 0) then {9999} else {floor (_sizeLeft / _mass)};
            private _ammountAdded = _ammountThatWillFit min _amountToAdd;

            if (_ammountAdded == 0) exitWith {_itemToAdd};
            if (_count > 0) then {
                (_array select 1) pushBack [_classname, _ammountAdded, _count];
            } else {
                (_array select 1) pushBack [_classname, _ammountAdded];
            };

            _sizeLeft = _sizeLeft - (_ammountAdded * _mass);
            (_containersArray select _index) set [0, _sizeLeft];

            if (_ammountAdded == _amountToAdd) exitWith {""};
            (format ["%1:%2",_classname, (_amountToAdd - _ammountAdded)])
        };
        if (_xReturn != "") then {_returnArray pushBack _xReturn};
    } forEach _itemsToAddArray;
    _returnArray
};


private _fnc_getWeaponArray = {
    params ["_weapon", "_attachments"];

    private _weaponArray = [_weapon, "", "", "", [], [], ""];
    private _attachables = [_weapon] call CBA_fnc_compatibleItems;

    {
        (_x splitString ":") params [["_classname", ""]]; //count makes no sense for attachments, ignore
        private _config = configFile >> "CfgWeapons" >> _classname;
        if (({_x == _classname} count _attachables) > 0) then {
            switch (getNumber(_config >> "itemInfo" >> "type")) do {
            case (101): {_weaponArray set [1, _classname]}; //muzzle
            case (301): {_weaponArray set [2, _classname]}; //pointer
            case (201): {
                    if (!potato_assignGear_allowMagnifiedOptics) then {
                        private _minZoom = 999; //FOV, so smaller is more zoomed in
                        {
                            if (isNumber (_x >> "opticsZoomMin")) then {_minZoom = _minZoom min (getNumber (_x >> "opticsZoomMin"));};
                            if (isText (_x >> "opticsZoomMin")) then {_minZoom = _minZoom min (call compile getText (_x >> "opticsZoomMin"));};
                            nil
                        } count configProperties [_config >> "ItemInfo" >> "OpticsModes"];
                        if (_minZoom < 0.25) then {
                            diag_log text format ["[POTATO-assignGear] allowMagnifiedOptics is false, not adding %1 (opticsZoomMin %2)", _classname, _minZoom];
                            _classname = "";
                        };
                    };
                    _weaponArray set [3, _classname]}; //optic
            case (302): {_weaponArray set [6, _classname]}; //bipod
                default {diag_log text format ["[POTATO-assignGear] - Attachment [%1] has unknown type", _classname];};
            };
        } else {
            diag_log text format ["[POTATO-assignGear] - Attachment [%1] not compatible with [%2]", _classname, _weapon];
        };
    } forEach _attachments;

    private _muzzles = getArray (configFile >> "CfgWeapons" >> _weapon >> "muzzles");
    {
        private _magazines = getArray (configFile >> "CfgWeapons" >> _weapon >> "magazines");
        private _arrayIndex = 4;
        if (_x != "this") then {
            _magazines = getArray (configFile >> "CfgWeapons" >> _weapon >> _x >> "magazines");
            _arrayIndex = 5;
        };
        {
            (_x splitString ":") params ["_classname", ["_amount", "1", [""]]];
			if (isNil "_className") exitWith {};
            if (({_x == _classname} count _magazines) > 0) exitWith {
                private _count = getNumber (configFile >> "CfgMagazines" >> _classname >> "count");
                _weaponArray set [_arrayIndex, [_classname, _count]];
                _configMagazines set [_forEachIndex, format ["%1:%2", _classname, ((parseNumber _amount) - 1)]];
            };
        } forEach _configMagazines;
    } forEach _muzzles;
    _weaponArray
};


//Process Weapons:
private _primaryWeaponArray = if (_configWeapons isEqualTo []) then {[]} else {[selectRandom _configWeapons, _configAttachments] call _fnc_getWeaponArray};
private _launcherWeaponArray = if (_configLaunchers isEqualTo []) then {[]} else {[selectRandom _configLaunchers, _configSecondaryAttachments] call _fnc_getWeaponArray};
private _handgunWeaponArray = if (_configHandguns isEqualTo []) then {[]} else {[selectRandom _configHandguns, []] call _fnc_getWeaponArray};

diag_log ["DIAGNOSTICS before",_configLinkedItems];

//Process linkedItems (includes binocular)
{
    private _type = [] call {
        if (_x isKindOf ["ItemMap", configFile >> "CfgWeapons"]) exitWith {0};
        if (_x isKindOf ["ItemGPS", configFile >> "CfgWeapons"]) exitWith {1};
        if (_x isKindOf ["UavTerminal_base", configFile >> "CfgWeapons"]) exitWith {1};
        if (_x isKindOf ["ItemRadio", configFile >> "CfgWeapons"]) exitWith {2};
        if (_x isKindOf ["ItemCompass", configFile >> "CfgWeapons"]) exitWith {3};
        if (_x isKindOf ["ItemWatch", configFile >> "CfgWeapons"]) exitWith {4};
        if (_x isKindOf ["NVGoggles", configFile >> "CfgWeapons"]) exitWith {5};
        if (_x isKindOf ["Binocular", configFile >> "CfgWeapons"]) exitWith {
            _binocularArray = [_x, []] call _fnc_getWeaponArray;
            -2
        };
        -1
    };
    if (_type >= 0) then {
        _assignedItems set [_type, _x];
    } else {
        if (_type == -1) then { diag_log text format ["[POTATO-assignGear] - linkedItems [%1] unknown type", _x]; };
    };
} forEach _configLinkedItems;

diag_log ["DIAGNOSTICS after",_configLinkedItems];

_configItems = [_configItems, 0] call _fnc_addItemsToContainer;
_configItems = [_configItems, 1] call _fnc_addItemsToContainer;
_configItems = [_configItems, 2] call _fnc_addItemsToContainer;

_configBackpackItems = [_configBackpackItems, 2] call _fnc_addItemsToContainer;
_configBackpackItems = [_configBackpackItems, 1] call _fnc_addItemsToContainer;
_configBackpackItems = [_configBackpackItems, 0] call _fnc_addItemsToContainer;

_configMagazines = [_configMagazines, 1] call _fnc_addItemsToContainer;
_configMagazines = [_configMagazines, 2] call _fnc_addItemsToContainer;
_configMagazines = [_configMagazines, 0] call _fnc_addItemsToContainer;


private _return = [_primaryWeaponArray, _launcherWeaponArray, _handgunWeaponArray, _uniformArray, _vestArray, _backpackArray, _headgear, "", _binocularArray, _assignedItems];

_return;
