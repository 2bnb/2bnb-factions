class CfgGroups {
	class Indep {

		class BNB_FA_Chernarus_Winter_Force {
			name = "Chernarus Winter Force";

			class Infantry {
				name = "Infantry";

				class BNB_FA_CWF_infantry_squad_winter {
					name = "Squad";
					side = 2;
					faction = "BNB_FA_Chernarus_Winter_Force";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "BNB_FA_CWF_TLeader_Winter";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "BNB_FA_CWF_Grenadier_Winter";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "BNB_FA_CWF_Medic_Winter";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "BNB_FA_CWF_Machinegunner";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "BNB_FA_CWF_Rifleman_AT_Winter";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "BNB_FA_CWF_Rifleman_Winter";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "BNB_FA_CWF_Sniper_Winter";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "BNB_FA_CWF_Rifleman_Winter";
					};
				};

				class BNB_FA_CWF_infantry_sentry_winter {
					name = "Sentry";
					side = 2;
					faction = "BNB_FA_Chernarus_Winter_Force";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "BNB_FA_CWF_Grenadier_Winter";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "BNB_FA_CWF_Rifleman_Winter";
					};
				};

			};
		};
	};
};


class CBA_Extended_EventHandlers_base;

class CfgVehicles {

	class LOP_UKR_Infantry_officer;
	class LOP_UKR_Infantry_officer_OCimport_01 : LOP_UKR_Infantry_officer { scope = 0; class EventHandlers; };
	class LOP_UKR_Infantry_officer_OCimport_02 : LOP_UKR_Infantry_officer_OCimport_01 { class EventHandlers; };

	class BNB_FA_CWF_Man_Winter : LOP_UKR_Infantry_officer_OCimport_02 {
		// editorPreview = "\x\bnb_fa\chernarus_winter_force\data\preview\bnb_fa_cwf_man_winter.jpg";
		author = "Jebby";
		scope = 2;
		scopeCurator = 2;
		displayName = "Man";
		side = 2;
		faction = "BNB_FA_Chernarus_Winter_Force";

		identityTypes[] = {"Head_Euro","LanguageRUS","Head_Russian"};

		uniformClass = "LOP_U_ISTS_Fatigue_07";

		linkedItems[] = {"V_mas_nor_PlateCarrierLR_wint","H_mas_nor_beanie_w","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnlinkedItems[] = {"V_mas_nor_PlateCarrierLR_wint","H_mas_nor_beanie_w","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

		weapons[] = {"Binocular"};
		respawnWeapons[] = {"Binocular"};

		magazines[] = {};
		respawnMagazines[] = {};

		backpack = "Alpine_backpack_kitbag";

		ALiVE_orbatCreator_loadout[] = {{},{},{},{"LOP_U_ISTS_Fatigue_07",{{"ACE_fieldDressing",1},{"ACE_packingBandage",1},{"ACE_morphine",1},{"ACE_tourniquet",1},{"rhs_mag_rdg2_white",1,1}}},{"V_mas_nor_PlateCarrierLR_wint",{}},{"Alpine_backpack_kitbag",{}},"H_mas_nor_beanie_w","",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
			};
		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
	};

	class BNB_FA_CWF_Rifleman_Winter : BNB_FA_CWF_Man_Winter {
		// editorPreview = "\x\bnb_fa\chernarus_winter_force\data\preview\bnb_fa_cwf_rifleman_winter.jpg";
		author = "Jebby";
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman";
		side = 2;
		faction = "BNB_FA_Chernarus_Winter_Force";

		identityTypes[] = {"Head_Euro","LanguageRUS","Head_Russian"};

		uniformClass = "LOP_U_ISTS_Fatigue_07";

		linkedItems[] = {"V_mas_nor_PlateCarrierLR_wint","H_mas_nor_beanie_w","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnlinkedItems[] = {"V_mas_nor_PlateCarrierLR_wint","H_mas_nor_beanie_w","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

		weapons[] = {"rhs_weap_ak103_2","Binocular"};
		respawnWeapons[] = {"rhs_weap_ak103_2","Binocular"};

		magazines[] = {"rhs_30Rnd_762x39mm_polymer","rhs_30Rnd_762x39mm_polymer"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_polymer","rhs_30Rnd_762x39mm_polymer"};

		backpack = "Alpine_backpack_kitbag";

		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak103_2","rhs_acc_dtk","","rhs_acc_ekp8_02",{"rhs_30Rnd_762x39mm_polymer",30},{},""},{},{},{"LOP_U_ISTS_Fatigue_07",{{"ACE_fieldDressing",1},{"ACE_packingBandage",1},{"ACE_morphine",1},{"ACE_tourniquet",1},{"rhs_mag_rdg2_white",1,1},{"30Rnd_762x39_Mag_Tracer_Green_F",2,30}}},{"V_mas_nor_PlateCarrierLR_wint",{{"ACE_fieldDressing",6},{"ACE_quikclot",6},{"ACE_EarPlugs",1},{"ACE_epinephrine",3},{"ACE_morphine",3},{"ACE_packingBandage",4},{"ACE_tourniquet",4},{"rhs_mag_an_m8hc",3,1},{"rhs_mag_rgn",4,1},{"30Rnd_762x39_Mag_Tracer_Green_F",10,30}}},{"Alpine_backpack_kitbag",{{"30Rnd_762x39_Mag_Tracer_Green_F",6,30}}},"H_mas_nor_beanie_w","G_Balaclava_blk",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
			};
		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
	};

	class BNB_FA_CWF_Rifleman_AT_Winter : BNB_FA_CWF_Rifleman_Winter {
		// editorPreview = "\x\bnb_fa\chernarus_winter_force\data\preview\bnb_fa_cwf_rifleman_at_winter.jpg";
		author = "Jebby";
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman AT";
		side = 2;
		faction = "BNB_FA_Chernarus_Winter_Force";

		identityTypes[] = {"Head_Euro","LanguageRUS","Head_Russian"};

		uniformClass = "LOP_U_ISTS_Fatigue_07";

		linkedItems[] = {"V_mas_nor_PlateCarrierLR_wint","H_mas_nor_beanie_w","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnlinkedItems[] = {"V_mas_nor_PlateCarrierLR_wint","H_mas_nor_beanie_w","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

		weapons[] = {"rhs_weap_ak103_2","rhs_weap_rpg7","Binocular"};
		respawnWeapons[] = {"rhs_weap_ak103_2","rhs_weap_rpg7","Binocular"};

		magazines[] = {"rhs_30Rnd_762x39mm_polymer","rhs_rpg7_PG7V_mag","rhs_30Rnd_762x39mm_polymer"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_polymer","rhs_rpg7_PG7V_mag","rhs_30Rnd_762x39mm_polymer"};

		backpack = "Alpine_backpack_kitbag";

		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak103_2","rhs_acc_dtk","","rhs_acc_ekp8_02",{"rhs_30Rnd_762x39mm_polymer",30},{},""},{"rhs_weap_rpg7","","","rhs_acc_pgo7v3",{"rhs_rpg7_PG7V_mag",1},{},""},{},{"LOP_U_ISTS_Fatigue_07",{{"ACE_fieldDressing",1},{"ACE_packingBandage",1},{"ACE_morphine",1},{"ACE_tourniquet",1},{"rhs_mag_rdg2_white",1,1},{"30Rnd_762x39_Mag_Tracer_Green_F",2,30}}},{"V_mas_nor_PlateCarrierLR_wint",{{"ACE_fieldDressing",6},{"ACE_quikclot",6},{"ACE_EarPlugs",1},{"ACE_epinephrine",3},{"ACE_morphine",3},{"ACE_packingBandage",4},{"ACE_tourniquet",4},{"rhs_mag_an_m8hc",3,1},{"rhs_mag_rgn",4,1},{"30Rnd_762x39_Mag_Tracer_Green_F",10,30}}},{"Alpine_backpack_kitbag",{{"30Rnd_762x39_Mag_Tracer_Green_F",6,30},{"rhs_rpg7_PG7V_mag",3,1},{"rhs_rpg7_PG7VR_mag",1,1},{"rhs_rpg7_PG7VL_mag",1,1}}},"H_mas_nor_beanie_w","",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
			};
		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
	};

	class BNB_FA_CWF_Crew_Winter : BNB_FA_CWF_Man_Winter {
		// editorPreview = "\x\bnb_fa\chernarus_winter_force\data\preview\bnb_fa_cwf_crew_winter.jpg";
		author = "Jebby";
		scope = 2;
		scopeCurator = 2;
		displayName = "Crew";
		side = 2;
		faction = "BNB_FA_Chernarus_Winter_Force";

		identityTypes[] = {"Head_Euro","LanguageRUS","Head_Russian"};

		uniformClass = "LOP_U_ISTS_Fatigue_07";

		linkedItems[] = {"V_mas_nor_PlateCarrierLR_wint","H_Tank_black_F","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnlinkedItems[] = {"V_mas_nor_PlateCarrierLR_wint","H_Tank_black_F","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

		weapons[] = {"rhs_weap_aks74un","Binocular"};
		respawnWeapons[] = {"rhs_weap_aks74un","Binocular"};

		magazines[] = {"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK"};

		backpack = "Alpine_backpack_kitbag";

		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_aks74un","rhs_acc_pgs64_74un","","",{"rhs_30Rnd_545x39_7N6M_AK",30},{},""},{},{},{"LOP_U_ISTS_Fatigue_07",{{"ACE_fieldDressing",4},{"ACE_packingBandage",4},{"ACE_tourniquet",3},{"ACE_quikclot",2},{"ACE_EarPlugs",1},{"ACE_epinephrine",1},{"ACE_morphine",2},{"rhs_mag_rdg2_white",1,1}}},{"V_mas_nor_PlateCarrierLR_wint",{{"rhs_30Rnd_545x39_AK_plum_green",8,30},{"rhs_mag_rdg2_white",3,1},{"rhs_mag_nspn_yellow",2,1}}},{"Alpine_backpack_kitbag",{}},"H_Tank_black_F","rhsusf_shemagh_gogg_white",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
			};
		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
	};

	class BNB_FA_CWF_Pilot_Winter : BNB_FA_CWF_Crew_Winter {
		// editorPreview = "\x\bnb_fa\chernarus_winter_force\data\preview\bnb_fa_cwf_pilot_winter.jpg";
		author = "Jebby";
		scope = 2;
		scopeCurator = 2;
		displayName = "Pilot";
		side = 2;
		faction = "BNB_FA_Chernarus_Winter_Force";

		identityTypes[] = {"Head_Euro","LanguageRUS","Head_Russian"};

		uniformClass = "LOP_U_ISTS_Fatigue_07";

		linkedItems[] = {"V_mas_nor_PlateCarrierLR_wint","rhsusf_hgu56p_visor_white","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnlinkedItems[] = {"V_mas_nor_PlateCarrierLR_wint","rhsusf_hgu56p_visor_white","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

		weapons[] = {"rhs_weap_aks74un","Binocular"};
		respawnWeapons[] = {"rhs_weap_aks74un","Binocular"};

		magazines[] = {"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK"};

		backpack = "Alpine_backpack_kitbag";

		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_aks74un","rhs_acc_pgs64_74un","","",{"rhs_30Rnd_545x39_7N6M_AK",30},{},""},{},{},{"LOP_U_ISTS_Fatigue_07",{{"ACE_fieldDressing",4},{"ACE_packingBandage",4},{"ACE_tourniquet",3},{"ACE_quikclot",2},{"ACE_EarPlugs",1},{"ACE_epinephrine",1},{"ACE_morphine",2},{"rhs_mag_rdg2_white",1,1}}},{"V_mas_nor_PlateCarrierLR_wint",{{"rhs_30Rnd_545x39_AK_plum_green",8,30},{"rhs_mag_rdg2_white",3,1},{"rhs_mag_nspn_yellow",2,1}}},{"Alpine_backpack_kitbag",{}},"rhsusf_hgu56p_visor_white","",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
			};
		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
	};

	class BNB_FA_CWF_Sniper_Winter : BNB_FA_CWF_Man_Winter {
		// editorPreview = "\x\bnb_fa\chernarus_winter_force\data\preview\bnb_fa_cwf_sniper_winter.jpg";
		author = "Jebby";
		scope = 2;
		scopeCurator = 2;
		displayName = "Sniper";
		side = 2;
		faction = "BNB_FA_Chernarus_Winter_Force";

		identityTypes[] = {"Head_Euro","LanguageRUS","Head_Russian"};

		uniformClass = "LOP_U_ISTS_Fatigue_07";

		linkedItems[] = {"V_mas_nor_PlateCarrierLR_wint","H_mas_nor_beanie_w","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnlinkedItems[] = {"V_mas_nor_PlateCarrierLR_wint","H_mas_nor_beanie_w","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

		weapons[] = {"rhs_weap_svds","Binocular"};
		respawnWeapons[] = {"rhs_weap_svds","Binocular"};

		magazines[] = {"rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1"};
		respawnMagazines[] = {"rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1"};

		backpack = "Alpine_backpack_kitbag";

		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_svds","","","rhs_acc_pso1m21",{"rhs_10Rnd_762x54mmR_7N1",10},{},""},{},{},{"LOP_U_ISTS_Fatigue_07",{{"ACE_fieldDressing",5},{"ACE_packingBandage",4},{"ACE_morphine",2},{"ACE_tourniquet",3},{"ACE_quikclot",2},{"ACE_EarPlugs",1},{"ACE_epinephrine",1},{"rhs_mag_rdg2_white",1,1}}},{"V_mas_nor_PlateCarrierLR_wint",{{"ACE_10Rnd_762x54_Tracer_mag",14,10},{"rhs_mag_rdg2_white",3,1},{"rhs_mag_rgn",1,1}}},{"Alpine_backpack_kitbag",{}},"H_mas_nor_beanie_w","G_Bandanna_blk",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
			};
		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
	};

	class BNB_FA_CWF_Medic_Winter : BNB_FA_CWF_Rifleman_Winter {
		// editorPreview = "\x\bnb_fa\chernarus_winter_force\data\preview\bnb_fa_cwf_medic_winter.jpg";
		author = "Jebby";
		scope = 2;
		scopeCurator = 2;
		displayName = "Medic";
		side = 2;
		faction = "BNB_FA_Chernarus_Winter_Force";

		identityTypes[] = {"Head_Euro","LanguageRUS","Head_Russian"};

		uniformClass = "LOP_U_ISTS_Fatigue_07";

		linkedItems[] = {"V_mas_nor_PlateCarrierLR_wint","H_mas_nor_beanie_w","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnlinkedItems[] = {"V_mas_nor_PlateCarrierLR_wint","H_mas_nor_beanie_w","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

		weapons[] = {"rhs_weap_ak103_2","Binocular"};
		respawnWeapons[] = {"rhs_weap_ak103_2","Binocular"};

		magazines[] = {"rhs_30Rnd_762x39mm_polymer","rhs_30Rnd_762x39mm_polymer"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_polymer","rhs_30Rnd_762x39mm_polymer"};

		backpack = "Alpine_backpack_kitbag";

		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak103_2","rhs_acc_dtk","","rhs_acc_ekp8_02",{"rhs_30Rnd_762x39mm_polymer",30},{},""},{},{},{"LOP_U_ISTS_Fatigue_07",{{"ACE_fieldDressing",1},{"ACE_packingBandage",1},{"ACE_morphine",1},{"ACE_tourniquet",1},{"rhs_mag_rdg2_white",1,1},{"30Rnd_762x39_Mag_Tracer_Green_F",2,30}}},{"V_mas_nor_PlateCarrierLR_wint",{{"ACE_fieldDressing",6},{"ACE_quikclot",6},{"ACE_EarPlugs",1},{"ACE_epinephrine",3},{"ACE_morphine",3},{"ACE_packingBandage",4},{"ACE_tourniquet",4},{"rhs_mag_an_m8hc",3,1},{"rhs_mag_rgn",4,1},{"30Rnd_762x39_Mag_Tracer_Green_F",10,30}}},{"Alpine_backpack_kitbag",{{"ACE_surgicalKit",4},{"ACE_packingBandage",12},{"ACE_morphine",6},{"ACE_epinephrine",6},{"ACE_EarPlugs",1},{"ACE_quikclot",6},{"ACE_fieldDressing",8},{"ACE_atropine",3},{"ACE_adenosine",3},{"ACE_tourniquet",6},{"30Rnd_762x39_Mag_Tracer_Green_F",6,30}}},"H_mas_nor_beanie_w","G_Bandanna_shades",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
			};
		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
	};

	class BNB_FA_CWF_Machinegunner : BNB_FA_CWF_Rifleman_Winter {
		// editorPreview = "\x\bnb_fa\chernarus_winter_force\data\preview\bnb_fa_cwf_machinegunner.jpg";
		author = "Jebby";
		scope = 2;
		scopeCurator = 2;
		displayName = "Machinegunner";
		side = 2;
		faction = "BNB_FA_Chernarus_Winter_Force";

		identityTypes[] = {"Head_Euro","LanguageRUS","Head_Russian"};

		uniformClass = "LOP_U_ISTS_Fatigue_07";

		linkedItems[] = {"V_mas_nor_PlateCarrierLR_wint","H_mas_nor_beanie_w","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnlinkedItems[] = {"V_mas_nor_PlateCarrierLR_wint","H_mas_nor_beanie_w","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

		weapons[] = {"rhs_weap_pkm","Binocular"};
		respawnWeapons[] = {"rhs_weap_pkm","Binocular"};

		magazines[] = {"rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR"};
		respawnMagazines[] = {"rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR"};

		backpack = "Alpine_backpack_kitbag";

		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_pkm","","","",{"rhs_100Rnd_762x54mmR",100},{},""},{},{},{"LOP_U_ISTS_Fatigue_07",{{"ACE_fieldDressing",3},{"ACE_packingBandage",2},{"ACE_morphine",1},{"ACE_tourniquet",1},{"ACE_EarPlugs",1},{"ACE_epinephrine",1},{"rhs_mag_rdg2_white",1,1},{"30Rnd_762x39_Mag_Tracer_Green_F",2,30}}},{"V_mas_nor_PlateCarrierLR_wint",{{"ACE_fieldDressing",3},{"ACE_quikclot",2},{"ACE_epinephrine",3},{"ACE_morphine",1},{"ACE_tourniquet",4},{"ACE_packingBandage",1},{"rhs_mag_an_m8hc",2,1},{"rhs_mag_rgn",1,1},{"30Rnd_762x39_Mag_Tracer_Green_F",10,30},{"rhs_100Rnd_762x54mmR_green",1,100}}},{"Alpine_backpack_kitbag",{{"30Rnd_762x39_Mag_Tracer_Green_F",6,30},{"rhs_100Rnd_762x54mmR_green",3,100}}},"H_mas_nor_beanie_w","G_Bandanna_blk",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
			};
		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
	};

	class BNB_FA_CWF_Officer_Winter : BNB_FA_CWF_Man_Winter {
		// editorPreview = "\x\bnb_fa\chernarus_winter_force\data\preview\bnb_fa_cwf_officer_winter.jpg";
		author = "Jebby";
		scope = 2;
		scopeCurator = 2;
		displayName = "Officer";
		side = 2;
		faction = "BNB_FA_Chernarus_Winter_Force";

		identityTypes[] = {"Head_Euro","LanguageRUS","Head_Russian"};

		uniformClass = "LOP_U_ISTS_Fatigue_07";

		linkedItems[] = {"V_mas_nor_PlateCarrierLR_wint","rhsusf_patrolcap_ucp","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnlinkedItems[] = {"V_mas_nor_PlateCarrierLR_wint","rhsusf_patrolcap_ucp","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

		weapons[] = {"rhs_weap_pya","Binocular"};
		respawnWeapons[] = {"rhs_weap_pya","Binocular"};

		magazines[] = {"rhs_mag_9x19_17","rhs_mag_9x19_17"};
		respawnMagazines[] = {"rhs_mag_9x19_17","rhs_mag_9x19_17"};

		ALiVE_orbatCreator_loadout[] = {{},{},{"rhs_weap_pya","","","",{"rhs_mag_9x19_17",17},{},""},{"LOP_U_ISTS_Fatigue_07",{{"ACE_fieldDressing",3},{"ACE_packingBandage",5},{"ACE_morphine",2},{"ACE_tourniquet",3},{"ACE_quikclot",2},{"ACE_EarPlugs",1},{"ACE_epinephrine",1},{"rhs_mag_rdg2_white",1,1}}},{"V_mas_nor_PlateCarrierLR_wint",{{"16Rnd_9x21_green_Mag",10,17}}},{},"rhsusf_patrolcap_ucp","rhsusf_shemagh_gogg_white",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
			};
		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
	};

	class BNB_FA_CWF_TLeader_Winter : BNB_FA_CWF_Rifleman_Winter {
		// editorPreview = "\x\bnb_fa\chernarus_winter_force\data\preview\bnb_fa_cwf_tleader_winter.jpg";
		author = "Jebby";
		scope = 2;
		scopeCurator = 2;
		displayName = "Team Leader";
		side = 2;
		faction = "BNB_FA_Chernarus_Winter_Force";

		identityTypes[] = {"Head_Euro","LanguageRUS","Head_Russian"};

		uniformClass = "LOP_U_ISTS_Fatigue_07";

		linkedItems[] = {"V_mas_nor_PlateCarrierLR_wint","H_mas_nor_beanie_w","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnlinkedItems[] = {"V_mas_nor_PlateCarrierLR_wint","H_mas_nor_beanie_w","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

		weapons[] = {"rhs_weap_ak103_2","Binocular"};
		respawnWeapons[] = {"rhs_weap_ak103_2","Binocular"};

		magazines[] = {"rhs_30Rnd_762x39mm_polymer","rhs_30Rnd_762x39mm_polymer"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_polymer","rhs_30Rnd_762x39mm_polymer"};

		backpack = "Alpine_backpack_kitbag";

		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak103_2","rhs_acc_dtk","","rhs_acc_pgo7v2",{"rhs_30Rnd_762x39mm_polymer",30},{},""},{},{},{"LOP_U_ISTS_Fatigue_07",{{"ACE_fieldDressing",1},{"ACE_packingBandage",1},{"ACE_morphine",1},{"ACE_tourniquet",1},{"rhs_mag_rdg2_white",1,1},{"30Rnd_762x39_Mag_Tracer_Green_F",2,30}}},{"V_mas_nor_PlateCarrierLR_wint",{{"ACE_fieldDressing",6},{"ACE_quikclot",6},{"ACE_EarPlugs",1},{"ACE_epinephrine",3},{"ACE_morphine",3},{"ACE_packingBandage",4},{"ACE_tourniquet",4},{"rhs_mag_an_m8hc",3,1},{"rhs_mag_rgn",4,1},{"30Rnd_762x39_Mag_Tracer_Green_F",10,30}}},{"Alpine_backpack_kitbag",{{"30Rnd_762x39_Mag_Tracer_Green_F",6,30}}},"H_mas_nor_beanie_w","G_Bandanna_shades",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
			};
		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
	};

	class BNB_FA_CWF_Grenadier_Winter : BNB_FA_CWF_TLeader_Winter {
		// editorPreview = "\x\bnb_fa\chernarus_winter_force\data\preview\bnb_fa_cwf_grenadier_winter.jpg";
		author = "Jebby";
		scope = 2;
		scopeCurator = 2;
		displayName = "Grenadier";
		side = 2;
		faction = "BNB_FA_Chernarus_Winter_Force";

		identityTypes[] = {"Head_Euro","LanguageRUS","Head_Russian"};

		uniformClass = "LOP_U_ISTS_Fatigue_07";

		linkedItems[] = {"V_mas_nor_PlateCarrierLR_wint","H_mas_nor_beanie_w","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnlinkedItems[] = {"V_mas_nor_PlateCarrierLR_wint","H_mas_nor_beanie_w","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

		weapons[] = {"rhs_weap_ak74mr_gp25","Binocular"};
		respawnWeapons[] = {"rhs_weap_ak74mr_gp25","Binocular"};

		magazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK"};

		backpack = "Alpine_backpack_kitbag";

		ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak74mr_gp25","rhs_acc_dtk","","rhs_acc_1p87",{"rhs_30Rnd_545x39_7N10_AK",30},{},""},{},{},{"LOP_U_ISTS_Fatigue_07",{{"ACE_fieldDressing",1},{"ACE_packingBandage",1},{"ACE_morphine",1},{"ACE_tourniquet",1},{"rhs_mag_rdg2_white",1,1},{"30Rnd_762x39_Mag_Tracer_Green_F",2,30}}},{"V_mas_nor_PlateCarrierLR_wint",{{"ACE_fieldDressing",6},{"ACE_quikclot",6},{"ACE_EarPlugs",1},{"ACE_epinephrine",3},{"ACE_morphine",3},{"ACE_packingBandage",4},{"ACE_tourniquet",4},{"rhs_mag_an_m8hc",3,1},{"rhs_mag_rgn",4,1},{"30Rnd_762x39_Mag_Tracer_Green_F",10,30},{"rhs_30Rnd_545x39_AK_plum_green",3,30}}},{"Alpine_backpack_kitbag",{{"30Rnd_762x39_Mag_Tracer_Green_F",6,30},{"rhs_30Rnd_545x39_AK_plum_green",4,30},{"rhs_VOG25",8,1},{"rhs_VG40TB",3,1},{"rhs_GRD40_White",5,1}}},"H_mas_nor_beanie_w","",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
			};
		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
	};
};
