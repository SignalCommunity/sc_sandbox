//Extended Event Handlers:
class Extended_InitPost_EventHandlers {
  class CAManBase {
    class SCMF_FixFriendlyFire { init = "if (local (_this select 0)) then {(_this select 0) addRating 100000;};";};
    class SAND_AssignGear { init = "_this spawn F_fnc_assignGearMan;"; };
  };
  class Car {
    class SCMF_NoBitchZone { init = "(_this select 0) allowCrewInImmobile true;"; };
    class SCMF_DisableThermals { init = "(_this select 0) disableTIEquipment true;"; };
    class SAND_AssignVehicleGear { init = "_this spawn F_fnc_assignGearVehicle;"; };
  };
  class Tank {
    class SCMF_NoBitchZone { init = "(_this select 0) allowCrewInImmobile true;"; };
    class SCMF_DisableThermals { init = "(_this select 0) disableTIEquipment true;"; };
    class SAND_AssignVehicleGear { init = "_this spawn F_fnc_assignGearVehicle;"; };
  };
  class Helicopter {
    class SCMF_DisableThermals { init = "(_this select 0) disableTIEquipment true;"; };
    class SAND_AssignVehicleGear { init = "_this spawn F_fnc_assignGearVehicle;"; };
  };
  class Plane {
    class SCMF_DisableThermals { init = "(_this select 0) disableTIEquipment true;"; };
    class SAND_AssignVehicleGear { init = "_this spawn F_fnc_assignGearVehicle;"; };
  };
  class Ship_F {
    class SCMF_DisableThermals { init = "(_this select 0) disableTIEquipment true;"; };
    class SAND_AssignVehicleGear { init = "_this spawn F_fnc_assignGearVehicle;"; };
  };
};
