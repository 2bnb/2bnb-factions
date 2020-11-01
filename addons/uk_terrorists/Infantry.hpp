class CfgGroups {
	class EAST {

		class BNB_FA_UKTerrorists {
			name = "Terrorists";

			class SpecOps {
				name = "Special Forces";

				class BNB_FA_UKTerrorists_Specops_Blyat_8 {
					name = "Blyat 8";
					side = 0;
					faction = "BNB_FA_UKTerrorists";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "BNB_FA_UKTerrorists_SL";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "BNB_FA_UKTerrorists_Marksman";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "BNB_FA_UKTerrorists_MG";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "BNB_FA_UKTerrorists_Medic";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "BNB_FA_UKTerrorists_AT";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "BNB_FA_UKTerrorists_Rifleman";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "BNB_FA_UKTerrorists_Rifleman";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "BNB_FA_UKTerrorists_Rifleman";
					};
				};

				class BNB_FA_UKTerrorists_Specops_Blyat_5 {
					name = "Blyat5";
					side = 0;
					faction = "BNB_FA_UKTerrorists";
					icon = "\A3\ui_f\data\map\markers\nato\o_unknown.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "BNB_FA_UKTerrorists_SL";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "BNB_FA_UKTerrorists_AT";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "BNB_FA_UKTerrorists_Marksman";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "BNB_FA_UKTerrorists_Medic";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "BNB_FA_UKTerrorists_Rifleman";
					};
				};

			};

		};

	};
};


class CBA_Extended_EventHandlers_base;

class CfgVehicles {

	class O_Soldier_F;
	class O_Soldier_F_OCimport_01 : O_Soldier_F { scope = 0; class EventHandlers; };
	class O_Soldier_F_OCimport_02 : O_Soldier_F_OCimport_01 { class EventHandlers; editorSubcategory = "rhs_EdSubcat_infantry"; };

	class rhsgref_ins_medic;
	class rhsgref_ins_medic_OCimport_01 : rhsgref_ins_medic { scope = 0; class EventHandlers; };
	class rhsgref_ins_medic_OCimport_02 : rhsgref_ins_medic_OCimport_01 { class EventHandlers; editorSubcategory = "rhs_EdSubcat_infantry"; };

	class rhsgref_ins_grenadier_rpg;
	class rhsgref_ins_grenadier_rpg_OCimport_01 : rhsgref_ins_grenadier_rpg { scope = 0; class EventHandlers; };
	class rhsgref_ins_grenadier_rpg_OCimport_02 : rhsgref_ins_grenadier_rpg_OCimport_01 { class EventHandlers; editorSubcategory = "rhs_EdSubcat_infantry"; };


	class BNB_FA_UKTerrorists_Rifleman : O_Soldier_F_OCimport_02 {
		author = "Maj. Ford";
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman";
		side = 0;
		faction = "BNB_FA_UKTerrorists";

		identityTypes[] = {"Head_TK","LanguageENGB_F","VSM_FaceMask_black","G_IRAN_default"};

		uniformClass = "rhs_uniform_g3_blk";

		linkedItems[] = {"V_PlateCarrier2_blk","rhsusf_opscore_bk","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter"};
		respawnlinkedItems[] = {"V_PlateCarrier2_blk","rhsusf_opscore_bk","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter"};

		weapons[] = {"rhs_weap_hk416d10","Laserdesignator_01_khk_F"};
		respawnWeapons[] = {"rhs_weap_hk416d10","Laserdesignator_01_khk_F"};

		magazines[] = {"ACE_30Rnd_556x45_Stanag_M995_AP_mag","Laserbatteries","ACE_30Rnd_556x45_Stanag_M995_AP_mag","Laserbatteries"};
		respawnMagazines[] = {"ACE_30Rnd_556x45_Stanag_M995_AP_mag","Laserbatteries","ACE_30Rnd_556x45_Stanag_M995_AP_mag","Laserbatteries"};

		backpack = "B_ViperLightHarness_blk_F";

		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_hk416d10","","","optic_Hamr",{"ACE_30Rnd_556x45_Stanag_M995_AP_mag",30},{},""},{},{},{"rhs_uniform_g3_blk",{{"ACE_MapTools",1},{"ACE_EarPlugs",1},{"ACE_EntrenchingTool",1},{"ACE_CableTie",12},{"ACE_Flashlight_XL50",1},{"ACE_IR_Strobe_Item",2},{"ACE_30Rnd_556x45_Stanag_M995_AP_mag",1,30}}},{"V_PlateCarrier2_blk",{{"ACE_bodyBag",2},{"ACE_bloodIV_500",2},{"rhsusf_mag_17Rnd_9x19_FMJ",5,17},{"ACE_30Rnd_556x45_Stanag_M995_AP_mag",8,30}}},{"B_ViperLightHarness_blk_F",{{"ACE_quikclot",10},{"ACE_elasticBandage",10},{"ACE_fieldDressing",10},{"ACE_epinephrine",3},{"ACE_morphine",3},{"ACE_salineIV_500",2},{"ACE_Banana",3},{"ACE_packingBandage",10},{"ACE_adenosine",2},{"rhs_mag_mk84",5,1},{"ACE_Chemlight_HiGreen",6,1},{"SmokeShell",8,1},{"SmokeShellBlue",2,1},{"SmokeShellGreen",2,1},{"SmokeShellRed",2,1}}},"rhsusf_opscore_bk","VSM_Balaclava2_black_Goggles",{"Laserdesignator_01_khk_F","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter",""}};


		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'SCTFlagW'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
			};

		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
		ALiVE_orbatCreator_insignia = "SCTFlagW";

	};

	class BNB_FA_UKTerrorists_Medic : rhsgref_ins_medic_OCimport_02 {
		author = "Maj. Ford";
		scope = 2;
		scopeCurator = 2;
		displayName = "Medic";
		side = 0;
		faction = "BNB_FA_UKTerrorists";

		identityTypes[] = {"Head_Euro","LanguageENGB_F","VSM_FaceMask_black","G_CIVIL_male"};

		uniformClass = "rhs_uniform_g3_blk";

		linkedItems[] = {"V_PlateCarrier2_blk","rhsusf_opscore_bk","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter"};
		respawnlinkedItems[] = {"V_PlateCarrier2_blk","rhsusf_opscore_bk","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter"};

		weapons[] = {"rhs_weap_mk18_KAC","Laserdesignator_01_khk_F"};
		respawnWeapons[] = {"rhs_weap_mk18_KAC","Laserdesignator_01_khk_F"};

		magazines[] = {"ACE_30Rnd_556x45_Stanag_M995_AP_mag","Laserbatteries","ACE_30Rnd_556x45_Stanag_M995_AP_mag","Laserbatteries"};
		respawnMagazines[] = {"ACE_30Rnd_556x45_Stanag_M995_AP_mag","Laserbatteries","ACE_30Rnd_556x45_Stanag_M995_AP_mag","Laserbatteries"};

		backpack = "B_ViperHarness_blk_F";

		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_mk18_KAC","","","optic_Hamr",{"ACE_30Rnd_556x45_Stanag_M995_AP_mag",30},{},""},{},{},{"rhs_uniform_g3_blk",{{"ACE_MapTools",1},{"ACE_EarPlugs",1},{"ACE_EntrenchingTool",1},{"ACE_CableTie",12},{"ACE_Flashlight_XL50",1},{"ACE_IR_Strobe_Item",2},{"ACE_bloodIV_500",2}}},{"V_PlateCarrier2_blk",{{"ACE_bodyBag",2},{"ACE_adenosine",5},{"ACE_salineIV_500",2},{"ACE_morphine",2},{"ACE_elasticBandage",6},{"rhsusf_mag_17Rnd_9x19_FMJ",5,17},{"ACE_30Rnd_556x45_Stanag_M995_AP_mag",8,30}}},{"B_ViperHarness_blk_F",{{"ACE_elasticBandage",30},{"ACE_packingBandage",10},{"ACE_quikclot",5},{"ACE_bloodIV",18},{"ACE_bloodIV_500",5},{"ACE_morphine",10},{"ACE_epinephrine",10},{"ACE_adenosine",10},{"ACE_bloodIV_250",5}}},"rhsusf_opscore_bk","VSM_Balaclava2_black_Peltor_Goggles",{"Laserdesignator_01_khk_F","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter",""}};


		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
			};

		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;

	};

	class BNB_FA_UKTerrorists_AT : rhsgref_ins_grenadier_rpg_OCimport_02 {
		side = 0;
		faction = "BNB_FA_UKTerrorists";
		author = "Maj. Ford";
		scope = 2;
		scopeCurator = 2;
		displayName = "AT";


		identityTypes[] = {"Head_Euro","LanguageENGB_F","VSM_FaceMask_black","G_CIVIL_male"};

		uniformClass = "rhs_uniform_g3_blk";

		linkedItems[] = {"V_PlateCarrier2_blk","rhsusf_opscore_bk","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter"};
		respawnlinkedItems[] = {"V_PlateCarrier2_blk","rhsusf_opscore_bk","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter"};

		weapons[] = {"rhs_weap_m4","launch_RPG32_green_F","Laserdesignator_01_khk_F"};
		respawnWeapons[] = {"rhs_weap_m4","launch_RPG32_green_F","Laserdesignator_01_khk_F"};

		magazines[] = {"ACE_30Rnd_556x45_Stanag_M995_AP_mag","RPG32_F","Laserbatteries","ACE_30Rnd_556x45_Stanag_M995_AP_mag","Laserbatteries"};
		respawnMagazines[] = {"ACE_30Rnd_556x45_Stanag_M995_AP_mag","RPG32_F","Laserbatteries","ACE_30Rnd_556x45_Stanag_M995_AP_mag","Laserbatteries"};

		backpack = "B_ViperHarness_blk_F";

		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4","","","rhsusf_acc_eotech_552",{"ACE_30Rnd_556x45_Stanag_M995_AP_mag",30},{},""},{"launch_RPG32_green_F","","","",{"RPG32_F",1},{},""},{},{"rhs_uniform_g3_blk",{{"ACE_MapTools",1},{"ACE_EarPlugs",1},{"ACE_EntrenchingTool",1},{"ACE_CableTie",12},{"ACE_Flashlight_XL50",1},{"ACE_IR_Strobe_Item",2},{"ACE_30Rnd_556x45_Stanag_M995_AP_mag",1,30}}},{"V_PlateCarrier2_blk",{{"ACE_bodyBag",2},{"rhsusf_mag_17Rnd_9x19_FMJ",5,17},{"ACE_30Rnd_556x45_Stanag_M995_AP_mag",7,30}}},{"B_ViperHarness_blk_F",{{"ACE_quikclot",10},{"ACE_elasticBandage",10},{"ACE_fieldDressing",10},{"ACE_epinephrine",3},{"ACE_morphine",3},{"ACE_packingBandage",10},{"ACE_Chemlight_HiGreen",6,1},{"SmokeShell",4,1},{"SmokeShellBlue",2,1},{"SmokeShellGreen",2,1},{"SmokeShellRed",2,1},{"RPG32_F",3,1}}},"rhsusf_opscore_bk","VSM_Balaclava2_black_Peltor_Goggles",{"Laserdesignator_01_khk_F","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter",""}};


		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'SCTFlagW'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
			};

		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
		ALiVE_orbatCreator_insignia = "SCTFlagW";

	};

	class BNB_FA_UKTerrorists_SL : BNB_FA_UKTerrorists_Rifleman {
		author = "Maj. Ford";
		scope = 2;
		scopeCurator = 2;
		displayName = "SL";
		side = 0;
		faction = "BNB_FA_UKTerrorists";

		identityTypes[] = {"Head_TK","LanguageENGB_F","VSM_FaceMask_black","G_CIVIL_male"};

		uniformClass = "rhs_uniform_g3_blk";

		linkedItems[] = {"V_PlateCarrier2_blk","rhsusf_opscore_bk","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter"};
		respawnlinkedItems[] = {"V_PlateCarrier2_blk","rhsusf_opscore_bk","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter"};

		weapons[] = {"rhs_weap_mk18_m320","Laserdesignator_01_khk_F"};
		respawnWeapons[] = {"rhs_weap_mk18_m320","Laserdesignator_01_khk_F"};

		magazines[] = {"ACE_30Rnd_556x45_Stanag_M995_AP_mag","rhs_mag_m441_HE","Laserbatteries","ACE_30Rnd_556x45_Stanag_M995_AP_mag","rhs_mag_m441_HE","Laserbatteries"};
		respawnMagazines[] = {"ACE_30Rnd_556x45_Stanag_M995_AP_mag","rhs_mag_m441_HE","Laserbatteries","ACE_30Rnd_556x45_Stanag_M995_AP_mag","rhs_mag_m441_HE","Laserbatteries"};

		backpack = "tfw_ilbe_DD_gr";

		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_mk18_m320","","","optic_Hamr",{"ACE_30Rnd_556x45_Stanag_M995_AP_mag",30},{"rhs_mag_m441_HE",1},""},{},{},{"rhs_uniform_g3_blk",{{"ACE_MapTools",1},{"ACE_EarPlugs",1},{"ACE_EntrenchingTool",1},{"ACE_CableTie",12},{"ACE_Flashlight_XL50",1},{"ACE_IR_Strobe_Item",2},{"ACE_30Rnd_556x45_Stanag_M995_AP_mag",1,30}}},{"V_PlateCarrier2_blk",{{"ACE_bodyBag",2},{"rhsusf_mag_17Rnd_9x19_FMJ",5,17},{"rhs_mag_m441_HE",3,1},{"ACE_30Rnd_556x45_Stanag_M995_AP_mag",8,30}}},{"tfw_ilbe_DD_gr",{{"ACE_quikclot",10},{"ACE_elasticBandage",10},{"ACE_fieldDressing",10},{"ACE_epinephrine",3},{"ACE_morphine",3},{"ACE_salineIV_500",2},{"ACE_Banana",3},{"ACE_packingBandage",1},{"ACE_Chemlight_HiGreen",5,1},{"SmokeShellYellow",2,1},{"SmokeShellRed",2,1},{"SmokeShellPurple",2,1},{"SmokeShellOrange",2,1},{"SmokeShellGreen",1,1},{"ACE_HandFlare_White",1,1}}},"rhsusf_opscore_bk","VSM_Balaclava2_black_Peltor_Goggles",{"Laserdesignator_01_khk_F","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter",""}};


		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'SCTFlagW'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
			};

		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
		ALiVE_orbatCreator_insignia = "SCTFlagW";

	};

	class BNB_FA_UKTerrorists_Marksman : BNB_FA_UKTerrorists_Rifleman {
		author = "Maj. Ford";
		scope = 2;
		scopeCurator = 2;
		displayName = "Marksman";
		side = 0;
		faction = "BNB_FA_UKTerrorists";

		identityTypes[] = {"Head_TK","LanguageENGB_F","VSM_FaceMask_black","G_CIVIL_male"};

		uniformClass = "rhs_uniform_g3_blk";

		linkedItems[] = {"V_PlateCarrier2_blk","rhsusf_opscore_bk","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","NVGoggles_mas_nor_hv"};
		respawnlinkedItems[] = {"V_PlateCarrier2_blk","rhsusf_opscore_bk","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","NVGoggles_mas_nor_hv"};

		weapons[] = {"arifle_SPAR_03_blk_F","Laserdesignator_01_khk_F"};
		respawnWeapons[] = {"arifle_SPAR_03_blk_F","Laserdesignator_01_khk_F"};

		magazines[] = {"20Rnd_762x51_Mag","Laserbatteries","20Rnd_762x51_Mag","Laserbatteries"};
		respawnMagazines[] = {"20Rnd_762x51_Mag","Laserbatteries","20Rnd_762x51_Mag","Laserbatteries"};

		backpack = "B_ViperLightHarness_blk_F";

		ALiVE_orbatCreator_loadout[] = {{"arifle_SPAR_03_blk_F","","","optic_DMS",{"20Rnd_762x51_Mag",20},{},""},{},{},{"rhs_uniform_g3_blk",{{"ACE_MapTools",1},{"ACE_EarPlugs",1},{"ACE_EntrenchingTool",1},{"ACE_CableTie",12},{"ACE_Flashlight_XL50",1},{"ACE_IR_Strobe_Item",2}}},{"V_PlateCarrier2_blk",{{"ACE_bodyBag",2},{"rhsusf_mag_17Rnd_9x19_FMJ",5,17},{"20Rnd_762x51_Mag",7,20}}},{"B_ViperLightHarness_blk_F",{{"ACE_quikclot",10},{"ACE_elasticBandage",10},{"ACE_fieldDressing",10},{"ACE_epinephrine",3},{"ACE_morphine",3},{"ACE_salineIV_500",2},{"ACE_Banana",3},{"ACE_packingBandage",10},{"rhs_mag_mk84",5,1},{"ACE_Chemlight_HiGreen",6,1},{"SmokeShell",8,1},{"SmokeShellBlue",2,1},{"SmokeShellGreen",2,1},{"SmokeShellRed",2,1}}},"rhsusf_opscore_bk","VSM_Balaclava2_black_Peltor_Goggles",{"Laserdesignator_01_khk_F","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","NVGoggles_mas_nor_hv"}};


		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'SCTFlagW'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
			};

		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
		ALiVE_orbatCreator_insignia = "SCTFlagW";

	};

	class BNB_FA_UKTerrorists_MG : BNB_FA_UKTerrorists_Rifleman {
		author = "Maj. Ford";
		scope = 2;
		scopeCurator = 2;
		displayName = "MG";
		side = 0;
		faction = "BNB_FA_UKTerrorists";

		identityTypes[] = {"Head_TK","LanguageENGB_F","VSM_FaceMask_black","G_IRAN_default"};

		uniformClass = "rhs_uniform_g3_blk";

		linkedItems[] = {"V_PlateCarrier2_blk","rhsusf_opscore_bk","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter"};
		respawnlinkedItems[] = {"V_PlateCarrier2_blk","rhsusf_opscore_bk","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter"};

		weapons[] = {"rhs_weap_m249","Laserdesignator_01_khk_F"};
		respawnWeapons[] = {"rhs_weap_m249","Laserdesignator_01_khk_F"};

		magazines[] = {"rhsusf_200Rnd_556x45_box","Laserbatteries","rhsusf_200Rnd_556x45_box","Laserbatteries"};
		respawnMagazines[] = {"rhsusf_200Rnd_556x45_box","Laserbatteries","rhsusf_200Rnd_556x45_box","Laserbatteries"};

		backpack = "B_ViperHarness_blk_F";

		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m249","","","optic_Hamr",{"rhsusf_200Rnd_556x45_box",100},{},""},{},{},{"rhs_uniform_g3_blk",{{"ACE_MapTools",1},{"ACE_EarPlugs",1},{"ACE_EntrenchingTool",1},{"ACE_CableTie",12},{"ACE_Flashlight_XL50",1},{"ACE_IR_Strobe_Item",2}}},{"V_PlateCarrier2_blk",{{"ACE_bodyBag",2},{"rhsusf_mag_17Rnd_9x19_FMJ",4,17},{"rhsusf_100Rnd_762x51_m61_ap",3,100}}},{"B_ViperHarness_blk_F",{{"ACE_quikclot",10},{"ACE_elasticBandage",10},{"ACE_fieldDressing",10},{"ACE_epinephrine",3},{"ACE_morphine",3},{"ACE_salineIV_500",2},{"ACE_Banana",3},{"ACE_packingBandage",10},{"rhs_mag_mk84",5,1},{"ACE_Chemlight_HiGreen",6,1},{"SmokeShell",8,1},{"SmokeShellBlue",2,1},{"SmokeShellGreen",2,1},{"SmokeShellRed",2,1},{"rhsusf_100Rnd_762x51_m61_ap",4,100}}},"rhsusf_opscore_bk","VSM_Balaclava2_black_Peltor_Goggles",{"Laserdesignator_01_khk_F","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter",""}};


		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'SCTFlagW'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
			};

		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
		ALiVE_orbatCreator_insignia = "SCTFlagW";

	};

};
