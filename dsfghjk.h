comment "Exported from Arsenal by Bismarck";

comment "Remove existing items";
removeAllWeapons this;
removeAllItems this;
removeAllAssignedItems this;
removeUniform this;
removeVest this;
removeBackpack this;
removeHeadgear this;
removeGoggles this;

comment "Add containers";
this forceAddUniform "U_O_CombatUniform_ocamo";
this addItemToUniform "ACE_fieldDressing";
this addItemToUniform "ACE_packingBandage";
this addItemToUniform "ACE_morphine";
this addItemToUniform "ACE_tourniquet";
for "_i" from 1 to 2 do {this addItemToUniform "30Rnd_65x39_caseless_green";};
this addVest "V_Chestrig_khk";
for "_i" from 1 to 5 do {this addItemToVest "30Rnd_65x39_caseless_green";};
for "_i" from 1 to 2 do {this addItemToVest "16Rnd_9x21_Mag";};
for "_i" from 1 to 2 do {this addItemToVest "HandGrenade";};
for "_i" from 1 to 2 do {this addItemToVest "O_IR_Grenade";};
this addItemToVest "SmokeShell";
this addItemToVest "SmokeShellRed";
for "_i" from 1 to 2 do {this addItemToVest "Chemlight_red";};
this addBackpack "B_Carryall_ocamo_AAR";
for "_i" from 1 to 2 do {this addItemToBackpack "optic_tws_mg";};
for "_i" from 1 to 2 do {this addItemToBackpack "bipod_02_F_hex";};
for "_i" from 1 to 2 do {this addItemToBackpack "muzzle_snds_93mmg";};
this addItemToBackpack "150Rnd_762x54_Box";
this addItemToBackpack "150Rnd_762x54_Box_Tracer";
for "_i" from 1 to 2 do {this addItemToBackpack "150Rnd_93x64_Mag";};
this addHeadgear "H_HelmetO_ocamo";
this addGoggles "UNS_Scarf_1stCav";

comment "Add weapons";
this addWeapon "arifle_Katiba_ACO_pointer_F";
this addPrimaryWeaponItem "acc_pointer_IR";
this addPrimaryWeaponItem "optic_ACO_grn";
this addWeapon "hgun_Rook40_F";
this addWeapon "Rangefinder";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadio";
this linkItem "NVGoggles_OPFOR";

comment "Set identity";
this setFace "PersianHead_A3_01";
this setSpeaker "Male01PER";
