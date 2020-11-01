class CfgGroups {
	class WEST {

		class BNB_FA_Japanese_Self_Defence_Force {
			name = "Japanese Self Defence Force";

			class Infantry {
				name = "Infantry";

				class BNB_FA_JSDF_Infantry_Section {
					name = "Section (Base)";
					side = 1;
					faction = "BNB_FA_Japanese_Self_Defence_Force";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_JSDF_Section_Leader";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JSDF_Team_Leader";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JSDF_Combat_Life_Saver";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JSDF_Rifleman";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JSDF_Rifleman";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JSDF_Rifleman";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JSDF_Rifleman";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JSDF_Rifleman";
					};
				};

				class BNB_FA_JSDF_Infantry_Section_Roles {
					name = "Section (Roles)";
					side = 1;
					faction = "BNB_FA_Japanese_Self_Defence_Force";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_JSDF_Section_Leader";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JSDF_Team_Leader";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JSDF_Combat_Life_Saver";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JSDF_LMG_762";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JSDF_LMG_556";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JSDF_Anti_Tank";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JSDF_Marksman";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JSDF_Rifleman";
					};
				};

				class BNB_FA_JSDF_Infantry_Fire_Team {
					name = "Fire-Team";
					side = 1;
					faction = "BNB_FA_Japanese_Self_Defence_Force";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_JSDF_Section_Leader";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JSDF_Combat_Life_Saver";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JSDF_Marksman";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JSDF_Anti_Tank";
					};
				};
			};

			class SpecOps {
				name = "Special Forces";

				class BNB_FA_JSDF_Infantry_Recon_Team {
					name = "Recon Team";
					side = 1;
					faction = "BNB_FA_Japanese_Self_Defence_Force";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_JSDF_Section_Leader";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JSDF_Marksman";
					};
				};
			};
		};
	};
};

class CBA_Extended_EventHandlers_base;

class CfgVehicles {

	class BNB_FA_NAF_1IC_Woodland;
	class BNB_FA_NAF_1IC_Woodland_OCimport_01 : BNB_FA_NAF_1IC_Woodland { scope = 0; class EventHandlers; };
	class BNB_FA_NAF_1IC_Woodland_OCimport_02 : BNB_FA_NAF_1IC_Woodland_OCimport_01 { class EventHandlers; };

	class BNB_FA_JSDF_Section_Leader : BNB_FA_NAF_1IC_Woodland_OCimport_02 {
		author = "OLt. FarCry";
		scope = 2;
		scopeCurator = 2;
		displayName = "Section Leader";
		side = 1;
		faction = "BNB_FA_Japanese_Self_Defence_Force";

		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

		uniformClass = "VSM_MulticamTropic_Camo_SS";

		linkedItems[] = {"VSM_RAV_operator_MulticamTropic","VSM_MulticamTropic_OPS_2","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter"};
		respawnlinkedItems[] = {"VSM_RAV_operator_MulticamTropic","VSM_MulticamTropic_OPS_2","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter"};

		weapons[] = {"rhs_weap_mk18_m320","hgun_Rook40_F","Laserdesignator"};
		respawnWeapons[] = {"rhs_weap_mk18_m320","hgun_Rook40_F","Laserdesignator"};

		magazines[] = {"rhs_mag_M441_HE","16Rnd_9x21_Mag","Laserbatteries","rhs_mag_M441_HE","16Rnd_9x21_Mag","Laserbatteries"};
		respawnMagazines[] = {"rhs_mag_M441_HE","16Rnd_9x21_Mag","Laserbatteries","rhs_mag_M441_HE","16Rnd_9x21_Mag","Laserbatteries"};

		backpack = "tfw_ilbe_DD_mct";

		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_mk18_m320","","","rhsusf_acc_eotech_552",{},{"rhs_mag_M441_HE",1},""},{},{"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"VSM_MulticamTropic_Camo_SS",{{"ACE_tourniquet",4},{"ACE_elasticBandage",10},{"ACE_EarPlugs",1},{"ACE_epinephrine",4},{"ACE_packingBandage",10},{"ACE_MapTools",1},{"ACE_IR_Strobe_Item",2},{"ACE_morphine",4},{"ACE_CableTie",5},{"ACE_Flashlight_XL50",1},{"ACE_fieldDressing",5}}},{"VSM_RAV_operator_MulticamTropic",{{"HandGrenade",2,1},{"SmokeShellBlue",2,1},{"SmokeShellGreen",3,1},{"SmokeShell",6,1},{"SmokeShellRed",2,1},{"rhsusf_mag_17Rnd_9x19_FMJ",1,17},{"16Rnd_9x21_Mag",3,17},{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",3,30},{"rhs_mag_30Rnd_556x45_Mk318_Stanag",3,30},{"rhs_mag_30Rnd_556x45_Mk262_Stanag",3,30}}},{"tfw_ilbe_DD_mct",{{"ACE_EntrenchingTool",1},{"ACE_HuntIR_monitor",1},{"1Rnd_SmokeRed_Grenade_shell",3,1},{"Chemlight_green",2,1},{"ACE_HuntIR_M203",4,1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",3,30},{"rhs_mag_M441_HE",7,1},{"rhs_mag_M433_HEDP",7,1},{"rhs_mag_M397_HET",3,1},{"16Rnd_9x21_Mag",2,17},{"1Rnd_Smoke_Grenade_shell",3,1}}},"VSM_MulticamTropic_OPS_2","rhs_googles_black",{"Laserdesignator","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter",""}};


		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'EAF_5thRegiment'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
			};

		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
		ALiVE_orbatCreator_insignia = "EAF_5thRegiment";

	};

	class BNB_FA_JSDF_Team_Leader : BNB_FA_JSDF_Section_Leader {
		author = "OLt. FarCry";
		scope = 2;
		scopeCurator = 2;
		displayName = "Team Leader";
		side = 1;
		faction = "BNB_FA_Japanese_Self_Defence_Force";

		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

		uniformClass = "VSM_MulticamTropic_Camo_SS";

		linkedItems[] = {"VSM_RAV_operator_MulticamTropic","VSM_MulticamTropic_OPS_2","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter"};
		respawnlinkedItems[] = {"VSM_RAV_operator_MulticamTropic","VSM_MulticamTropic_OPS_2","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter"};

		weapons[] = {"rhs_weap_mk18_m320","hgun_Rook40_F","Laserdesignator"};
		respawnWeapons[] = {"rhs_weap_mk18_m320","hgun_Rook40_F","Laserdesignator"};

		magazines[] = {"rhs_mag_M441_HE","16Rnd_9x21_Mag","Laserbatteries","rhs_mag_M441_HE","16Rnd_9x21_Mag","Laserbatteries"};
		respawnMagazines[] = {"rhs_mag_M441_HE","16Rnd_9x21_Mag","Laserbatteries","rhs_mag_M441_HE","16Rnd_9x21_Mag","Laserbatteries"};

		backpack = "tfw_ilbe_DD_mct";

		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_mk18_m320","","","rhsusf_acc_eotech_552",{},{"rhs_mag_M441_HE",1},""},{},{"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"VSM_MulticamTropic_Camo_SS",{{"ACE_tourniquet",4},{"ACE_elasticBandage",10},{"ACE_EarPlugs",1},{"ACE_epinephrine",4},{"ACE_packingBandage",10},{"ACE_MapTools",1},{"ACE_IR_Strobe_Item",2},{"ACE_morphine",4},{"ACE_CableTie",5},{"ACE_Flashlight_XL50",1},{"ACE_fieldDressing",5}}},{"VSM_RAV_operator_MulticamTropic",{{"HandGrenade",2,1},{"SmokeShellBlue",2,1},{"SmokeShellGreen",3,1},{"SmokeShell",6,1},{"SmokeShellRed",2,1},{"rhsusf_mag_17Rnd_9x19_FMJ",1,17},{"16Rnd_9x21_Mag",3,17},{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",3,30},{"rhs_mag_30Rnd_556x45_Mk318_Stanag",3,30},{"rhs_mag_30Rnd_556x45_Mk262_Stanag",3,30}}},{"tfw_ilbe_DD_mct",{{"ACE_EntrenchingTool",1},{"ACE_HuntIR_monitor",1},{"1Rnd_SmokeRed_Grenade_shell",3,1},{"Chemlight_green",2,1},{"ACE_HuntIR_M203",4,1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",3,30},{"rhs_mag_M441_HE",7,1},{"rhs_mag_M433_HEDP",7,1},{"rhs_mag_M397_HET",3,1},{"16Rnd_9x21_Mag",2,17},{"1Rnd_Smoke_Grenade_shell",3,1}}},"VSM_MulticamTropic_OPS_2","rhs_googles_black",{"Laserdesignator","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter",""}};


		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'EAF_5thRegiment'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
			};

		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
		ALiVE_orbatCreator_insignia = "EAF_5thRegiment";

	};

	class BNB_FA_JSDF_Combat_Life_Saver : BNB_FA_JSDF_Team_Leader {
		author = "OLt. FarCry";
		scope = 2;
		scopeCurator = 2;
		displayName = "Combat Life Saver";
		side = 1;
		faction = "BNB_FA_Japanese_Self_Defence_Force";
		icon = "iconManMedic";
		picture = "pictureHeal";

		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

		uniformClass = "VSM_MulticamTropic_Camo_SS";

		linkedItems[] = {"VSM_RAV_operator_MulticamTropic","VSM_MulticamTropic_OPS_2","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter"};
		respawnlinkedItems[] = {"VSM_RAV_operator_MulticamTropic","VSM_MulticamTropic_OPS_2","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter"};

		weapons[] = {"rhs_weap_mk18_m320","hgun_Rook40_F","Laserdesignator"};
		respawnWeapons[] = {"rhs_weap_mk18_m320","hgun_Rook40_F","Laserdesignator"};

		magazines[] = {"rhs_mag_M441_HE","16Rnd_9x21_Mag","Laserbatteries","rhs_mag_M441_HE","16Rnd_9x21_Mag","Laserbatteries"};
		respawnMagazines[] = {"rhs_mag_M441_HE","16Rnd_9x21_Mag","Laserbatteries","rhs_mag_M441_HE","16Rnd_9x21_Mag","Laserbatteries"};

		backpack = "VSM_MulticamTropic_Backpack_Kitbag";

		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_mk18_m320","","","rhsusf_acc_eotech_552",{},{"rhs_mag_M441_HE",1},""},{},{"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"VSM_MulticamTropic_Camo_SS",{{"ACE_tourniquet",4},{"ACE_elasticBandage",10},{"ACE_EarPlugs",1},{"ACE_epinephrine",4},{"ACE_packingBandage",10},{"ACE_MapTools",1},{"ACE_IR_Strobe_Item",2},{"ACE_morphine",4},{"ACE_CableTie",5},{"ACE_Flashlight_XL50",1},{"ACE_fieldDressing",5}}},{"VSM_RAV_operator_MulticamTropic",{{"ACE_elasticBandage",10},{"ACE_packingBandage",10},{"ACE_fieldDressing",10},{"ACE_epinephrine",8},{"ACE_morphine",8},{"SmokeShellGreen",2,1},{"SmokeShell",8,1},{"rhsusf_mag_17Rnd_9x19_FMJ",1,17},{"16Rnd_9x21_Mag",3,17},{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",3,30},{"rhs_mag_30Rnd_556x45_Mk318_Stanag",2,30},{"rhs_mag_30Rnd_556x45_Mk262_Stanag",2,30},{"HandGrenade",2,1}}},{"VSM_MulticamTropic_Backpack_Kitbag",{{"ACE_surgicalKit",1},{"ACE_tourniquet",8},{"ACE_salineIV_500",10},{"ACE_salineIV_250",20},{"ACE_salineIV",4},{"ACE_morphine",12},{"ACE_epinephrine",12},{"ACE_packingBandage",20},{"ACE_elasticBandage",20},{"ACE_fieldDressing",20},{"ACE_quikclot",20},{"ACE_adenosine",8}}},"VSM_MulticamTropic_OPS_2","rhs_googles_black",{"Laserdesignator","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter",""}};


		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'EAF_5thRegiment'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
			};

		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
		ALiVE_orbatCreator_insignia = "EAF_5thRegiment";

	};

	class BNB_FA_JSDF_Rifleman : BNB_FA_JSDF_Section_Leader {
		author = "OLt. FarCry";
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman";
		side = 1;
		faction = "BNB_FA_Japanese_Self_Defence_Force";

		icon = "iconMan";

		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

		uniformClass = "VSM_MulticamTropic_Camo_SS";

		linkedItems[] = {"VSM_RAV_operator_MulticamTropic","VSM_MulticamTropic_OPS_2","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter"};
		respawnlinkedItems[] = {"VSM_RAV_operator_MulticamTropic","VSM_MulticamTropic_OPS_2","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter"};

		weapons[] = {"rhs_weap_mk18_wd","rhs_weap_m72a7","hgun_Rook40_F","Laserdesignator"};
		respawnWeapons[] = {"rhs_weap_mk18_wd","rhs_weap_m72a7","hgun_Rook40_F","Laserdesignator"};

		magazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag","16Rnd_9x21_Mag","Laserbatteries","rhs_mag_30Rnd_556x45_M855_Stanag","16Rnd_9x21_Mag","Laserbatteries"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag","16Rnd_9x21_Mag","Laserbatteries","rhs_mag_30Rnd_556x45_M855_Stanag","16Rnd_9x21_Mag","Laserbatteries"};

		backpack = "VSM_MulticamTropic_Backpack_Kitbag";

		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_mk18_wd","","","rhsusf_acc_eotech_552",{"rhs_mag_30Rnd_556x45_M855_Stanag",30},{},""},{"rhs_weap_m72a7","","","",{},{},""},{"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"VSM_MulticamTropic_Camo_SS",{{"ACE_tourniquet",4},{"ACE_elasticBandage",10},{"ACE_EarPlugs",1},{"ACE_packingBandage",10},{"ACE_MapTools",1},{"ACE_IR_Strobe_Item",2},{"ACE_Flashlight_XL50",1},{"ACE_fieldDressing",5},{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",1,30}}},{"VSM_RAV_operator_MulticamTropic",{{"ACE_epinephrine",3},{"ACE_morphine",3},{"ACE_CableTie",4},{"ACE_EntrenchingTool",1},{"SmokeShellGreen",2,1},{"SmokeShell",5,1},{"rhsusf_mag_17Rnd_9x19_FMJ",1,17},{"16Rnd_9x21_Mag",2,17},{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",5,30},{"rhs_mag_30Rnd_556x45_Mk318_Stanag",3,30},{"HandGrenade",2,1},{"rhs_mag_30Rnd_556x45_Mk262_Stanag",3,30}}},{"VSM_MulticamTropic_Backpack_Kitbag",{}},"VSM_MulticamTropic_OPS_2","rhs_googles_black",{"Laserdesignator","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter",""}};


		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'EAF_5thRegiment'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
			};

		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
		ALiVE_orbatCreator_insignia = "EAF_5thRegiment";

	};

	class BNB_FA_JSDF_LMG_762 : BNB_FA_JSDF_Rifleman {
		author = "OLt. FarCry";
		scope = 2;
		scopeCurator = 2;
		displayName = "LMG 7.62";
		side = 1;
		faction = "BNB_FA_Japanese_Self_Defence_Force";
		icon = "iconManMG";

		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

		uniformClass = "VSM_MulticamTropic_Camo_SS";

		linkedItems[] = {"VSM_RAV_operator_MulticamTropic","VSM_MulticamTropic_OPS_2","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter"};
		respawnlinkedItems[] = {"VSM_RAV_operator_MulticamTropic","VSM_MulticamTropic_OPS_2","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter"};

		weapons[] = {"rhs_weap_m240G","hgun_Rook40_F","Laserdesignator"};
		respawnWeapons[] = {"rhs_weap_m240G","hgun_Rook40_F","Laserdesignator"};

		magazines[] = {"rhsusf_50Rnd_762x51","16Rnd_9x21_Mag","Laserbatteries","rhsusf_50Rnd_762x51","16Rnd_9x21_Mag","Laserbatteries"};
		respawnMagazines[] = {"rhsusf_50Rnd_762x51","16Rnd_9x21_Mag","Laserbatteries","rhsusf_50Rnd_762x51","16Rnd_9x21_Mag","Laserbatteries"};

		backpack = "VSM_MulticamTropic_Backpack_Kitbag";

		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m240G","","","rhsusf_acc_eotech_552",{"rhsusf_50Rnd_762x51",50},{},""},{},{"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"VSM_MulticamTropic_Camo_SS",{{"ACE_tourniquet",4},{"ACE_elasticBandage",10},{"ACE_EarPlugs",1},{"ACE_packingBandage",10},{"ACE_MapTools",1},{"ACE_IR_Strobe_Item",2},{"ACE_Flashlight_XL50",1},{"ACE_fieldDressing",5},{"ACE_EntrenchingTool",1}}},{"VSM_RAV_operator_MulticamTropic",{{"ACE_epinephrine",3},{"ACE_morphine",3},{"ACE_CableTie",4},{"ACE_EntrenchingTool",1},{"SmokeShellGreen",2,1},{"rhsusf_mag_17Rnd_9x19_FMJ",1,17},{"SmokeShell",3,1},{"HandGrenade",2,1},{"rhs_mag_20Rnd_SCAR_762x51_m61_ap",4,20},{"rhsusf_100Rnd_762x51_m62_tracer",1,100},{"rhsusf_100Rnd_762x51_m80a1epr",1,100}}},{"VSM_MulticamTropic_Backpack_Kitbag",{{"rhs_mag_20Rnd_SCAR_762x51_m61_ap",2,20},{"SmokeShell",3,1},{"rhs_mag_m67",2,1},{"SmokeShellGreen",2,1},{"rhsusf_50Rnd_762x51",1,50},{"rhsusf_100Rnd_762x51_m80a1epr",1,100},{"rhsusf_100Rnd_762x51_m62_tracer",1,100},{"rhsusf_100Rnd_762x51_m61_ap",1,100}}},"VSM_MulticamTropic_OPS_2","rhs_googles_black",{"Laserdesignator","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter",""}};


		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'EAF_5thRegiment'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
			};

		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
		ALiVE_orbatCreator_insignia = "EAF_5thRegiment";

	};

	class BNB_FA_JSDF_LMG_556 : BNB_FA_JSDF_LMG_762 {
		author = "OLt. FarCry";
		scope = 2;
		scopeCurator = 2;
		displayName = "LMG 5.56";
		side = 1;
		faction = "BNB_FA_Japanese_Self_Defence_Force";
		icon = "iconManMG";

		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

		uniformClass = "VSM_MulticamTropic_Camo_SS";

		linkedItems[] = {"VSM_RAV_operator_MulticamTropic","VSM_MulticamTropic_OPS_2","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter"};
		respawnlinkedItems[] = {"VSM_RAV_operator_MulticamTropic","VSM_MulticamTropic_OPS_2","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter"};

		weapons[] = {"rhs_weap_m249_light_S","hgun_Rook40_F","Laserdesignator"};
		respawnWeapons[] = {"rhs_weap_m249_light_S","hgun_Rook40_F","Laserdesignator"};

		magazines[] = {"rhsusf_100Rnd_556x45_M855_soft_pouch","16Rnd_9x21_Mag","Laserbatteries","rhsusf_100Rnd_556x45_M855_soft_pouch","16Rnd_9x21_Mag","Laserbatteries"};
		respawnMagazines[] = {"rhsusf_100Rnd_556x45_M855_soft_pouch","16Rnd_9x21_Mag","Laserbatteries","rhsusf_100Rnd_556x45_M855_soft_pouch","16Rnd_9x21_Mag","Laserbatteries"};

		backpack = "VSM_MulticamTropic_Backpack_Kitbag";

		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m249_light_S","","","rhsusf_acc_eotech_552",{"rhsusf_100Rnd_556x45_M855_soft_pouch",100},{},"rhsusf_acc_saw_bipod"},{},{"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"VSM_MulticamTropic_Camo_SS",{{"ACE_tourniquet",4},{"ACE_elasticBandage",10},{"ACE_EarPlugs",1},{"ACE_packingBandage",10},{"ACE_MapTools",1},{"ACE_IR_Strobe_Item",2},{"ACE_Flashlight_XL50",1},{"ACE_fieldDressing",5},{"ACE_EntrenchingTool",1}}},{"VSM_RAV_operator_MulticamTropic",{{"ACE_epinephrine",3},{"ACE_morphine",3},{"ACE_CableTie",4},{"ACE_EntrenchingTool",1},{"SmokeShellGreen",2,1},{"rhsusf_mag_17Rnd_9x19_FMJ",1,17},{"SmokeShell",3,1},{"HandGrenade",2,1},{"rhs_mag_20Rnd_SCAR_762x51_m61_ap",4,20},{"rhsusf_100Rnd_556x45_soft_pouch",2,100}}},{"VSM_MulticamTropic_Backpack_Kitbag",{{"rhs_mag_20Rnd_SCAR_762x51_m61_ap",2,20},{"SmokeShell",3,1},{"rhs_mag_m67",2,1},{"SmokeShellGreen",2,1},{"rhsusf_100Rnd_556x45_soft_pouch",5,100}}},"VSM_MulticamTropic_OPS_2","rhs_googles_black",{"Laserdesignator","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter",""}};


		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'EAF_5thRegiment'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
			};

		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
		ALiVE_orbatCreator_insignia = "EAF_5thRegiment";

	};

	class BNB_FA_JSDF_Anti_Tank : BNB_FA_JSDF_LMG_556 {
		author = "OLt. FarCry";
		scope = 2;
		scopeCurator = 2;
		displayName = "Anti-Tank";
		side = 1;
		faction = "BNB_FA_Japanese_Self_Defence_Force";
		icon = "iconManAT";

		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

		uniformClass = "VSM_MulticamTropic_Camo_SS";

		linkedItems[] = {"VSM_RAV_operator_MulticamTropic","VSM_MulticamTropic_OPS_2","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter"};
		respawnlinkedItems[] = {"VSM_RAV_operator_MulticamTropic","VSM_MulticamTropic_OPS_2","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter"};

		weapons[] = {"rhs_weap_mk18_wd","rhs_weap_smaw_green","hgun_Rook40_F","Laserdesignator"};
		respawnWeapons[] = {"rhs_weap_mk18_wd","rhs_weap_smaw_green","hgun_Rook40_F","Laserdesignator"};

		magazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_smaw_HEAA","16Rnd_9x21_Mag","Laserbatteries","rhs_mag_30Rnd_556x45_M855_Stanag","16Rnd_9x21_Mag","Laserbatteries"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_smaw_HEAA","16Rnd_9x21_Mag","Laserbatteries","rhs_mag_30Rnd_556x45_M855_Stanag","16Rnd_9x21_Mag","Laserbatteries"};

		backpack = "VSM_MulticamTropic_Backpack_Kitbag";

		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_mk18_wd","","","rhsusf_acc_eotech_552",{"rhs_mag_30Rnd_556x45_M855_Stanag",30},{},""},{"rhs_weap_smaw_green","","","",{"rhs_mag_smaw_HEAA",1},{"rhs_mag_smaw_SR",5},""},{"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"VSM_MulticamTropic_Camo_SS",{{"ACE_tourniquet",4},{"ACE_elasticBandage",10},{"ACE_EarPlugs",1},{"ACE_packingBandage",10},{"ACE_MapTools",1},{"ACE_IR_Strobe_Item",2},{"ACE_Flashlight_XL50",1},{"ACE_fieldDressing",5},{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",1,30}}},{"VSM_RAV_operator_MulticamTropic",{{"ACE_epinephrine",3},{"ACE_morphine",3},{"ACE_CableTie",4},{"ACE_EntrenchingTool",1},{"SmokeShellGreen",2,1},{"SmokeShell",5,1},{"rhsusf_mag_17Rnd_9x19_FMJ",1,17},{"16Rnd_9x21_Mag",2,17},{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",5,30},{"rhs_mag_30Rnd_556x45_Mk318_Stanag",3,30},{"HandGrenade",2,1},{"rhs_mag_30Rnd_556x45_Mk262_Stanag",3,30}}},{"VSM_MulticamTropic_Backpack_Kitbag",{{"rhs_mag_smaw_SR",1,5},{"rhs_mag_smaw_HEDP",2,1}}},"VSM_MulticamTropic_OPS_2","rhs_googles_black",{"Laserdesignator","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter",""}};


		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'EAF_5thRegiment'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
			};

		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
		ALiVE_orbatCreator_insignia = "EAF_5thRegiment";

	};

	class BNB_FA_JSDF_Marksman : BNB_FA_JSDF_Anti_Tank {
		author = "OLt. FarCry";
		scope = 2;
		scopeCurator = 2;
		displayName = "Marksman";
		side = 1;
		faction = "BNB_FA_Japanese_Self_Defence_Force";
		icon = "iconMan";

		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

		uniformClass = "VSM_MulticamTropic_Camo_SS";

		linkedItems[] = {"VSM_RAV_operator_MulticamTropic","VSM_MulticamTropic_OPS_2","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter"};
		respawnlinkedItems[] = {"VSM_RAV_operator_MulticamTropic","VSM_MulticamTropic_OPS_2","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter"};

		weapons[] = {"rhs_weap_mk17_LB","rhs_weap_m72a7","hgun_Rook40_F","Laserdesignator"};
		respawnWeapons[] = {"rhs_weap_mk17_LB","rhs_weap_m72a7","hgun_Rook40_F","Laserdesignator"};

		magazines[] = {"rhs_mag_20Rnd_SCAR_762x51_m80_ball","16Rnd_9x21_Mag","Laserbatteries","rhs_mag_20Rnd_SCAR_762x51_m80_ball","16Rnd_9x21_Mag","Laserbatteries"};
		respawnMagazines[] = {"rhs_mag_20Rnd_SCAR_762x51_m80_ball","16Rnd_9x21_Mag","Laserbatteries","rhs_mag_20Rnd_SCAR_762x51_m80_ball","16Rnd_9x21_Mag","Laserbatteries"};

		backpack = "VSM_MulticamTropic_Backpack_Kitbag";

		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_mk17_LB","","","rhsusf_acc_su230a_mrds_c",{"rhs_mag_20Rnd_SCAR_762x51_m80_ball",20},{},"rhsusf_acc_harris_bipod"},{"rhs_weap_m72a7","","","",{},{},""},{"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"VSM_MulticamTropic_Camo_SS",{{"ACE_tourniquet",4},{"ACE_elasticBandage",10},{"ACE_EarPlugs",1},{"ACE_packingBandage",10},{"ACE_MapTools",1},{"ACE_IR_Strobe_Item",2},{"ACE_Flashlight_XL50",1},{"ACE_fieldDressing",5},{"ACE_EntrenchingTool",1}}},{"VSM_RAV_operator_MulticamTropic",{{"ACE_epinephrine",3},{"ACE_morphine",3},{"ACE_CableTie",4},{"ACE_EntrenchingTool",1},{"SmokeShellGreen",2,1},{"rhsusf_mag_17Rnd_9x19_FMJ",1,17},{"SmokeShell",3,1},{"HandGrenade",2,1},{"rhs_mag_20Rnd_SCAR_762x51_m80_ball",4,20},{"rhs_mag_20Rnd_SCAR_762x51_m61_ap",4,20}}},{"VSM_MulticamTropic_Backpack_Kitbag",{{"rhs_mag_20Rnd_SCAR_762x51_m80_ball",2,20},{"rhs_mag_20Rnd_SCAR_762x51_m61_ap",2,20},{"SmokeShell",3,1},{"rhs_mag_m67",2,1},{"SmokeShellGreen",2,1}}},"VSM_MulticamTropic_OPS_2","rhs_googles_black",{"Laserdesignator","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter",""}};


		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'EAF_5thRegiment'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
			};

		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
		ALiVE_orbatCreator_insignia = "EAF_5thRegiment";

	};
};
