class CfgGroups {
	class WEST {

		class BNB_FA_Japanese_Self_Defence_Force {

			class Motorized {
				name = "Motorized Infantry";

				class BNB_FA_JSDF_Specops_Motorized_Section {
					name = "Motorized Section";
					side = 1;
					faction = "BNB_FA_Japanese_Self_Defence_Force";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_JSDF_Type_22_MRAP";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JSDF_Section_Leader";
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
						vehicle = "BNB_FA_JSDF_LMG_556";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JSDF_Team_Leader";
					};
				};
			};

			class Mechanized {
				name = "Mechanized Infantry";

				class BNB_FA_JSDF_Motorized_Mechanized_Section {
					name = "Mechanized Section";
					side = 1;
					faction = "BNB_FA_Japanese_Self_Defence_Force";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_JSDF_M113A3_M2";
					};
					class Unit1 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_JSDF_Section_Leader";
					};
					class Unit2 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JSDF_Team_Leader";
					};
					class Unit3 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JSDF_Combat_Life_Saver";
					};
					class Unit4 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JSDF_LMG_762";
					};
					class Unit5 {
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JSDF_LMG_556";
					};
					class Unit6 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JSDF_Anti_Tank";
					};
					class Unit7 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JSDF_Marksman";
					};
					class Unit8 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JSDF_Rifleman";
					};
				};
			};
		};
	};
};

class CBA_Extended_EventHandlers_base;

class CfgVehicles {

	class rhsusf_m113_usarmy;
	class rhsusf_m113_usarmy_OCimport_01 : rhsusf_m113_usarmy { scope = 0; class EventHandlers; class Turrets; };
	class rhsusf_m113_usarmy_OCimport_02 : rhsusf_m113_usarmy_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class MainTurret;
			class CargoTurret_01;
			class CargoTurret_02;
		};
	};

	class BNB_FA_NAF_Leopard_2SG_Woodland;
	class BNB_FA_NAF_Leopard_2SG_Woodland_OCimport_01 : BNB_FA_NAF_Leopard_2SG_Woodland { scope = 0; class EventHandlers; class Turrets; };
	class BNB_FA_NAF_Leopard_2SG_Woodland_OCimport_02 : BNB_FA_NAF_Leopard_2SG_Woodland_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class MainTurret;
		};
	};

	class B_T_AFV_Wheeled_01_cannon_F;
	class B_T_AFV_Wheeled_01_cannon_F_OCimport_01 : B_T_AFV_Wheeled_01_cannon_F { scope = 0; class EventHandlers; class Turrets; };
	class B_T_AFV_Wheeled_01_cannon_F_OCimport_02 : B_T_AFV_Wheeled_01_cannon_F_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class MainTurret;
		};
	};

	class rhsusf_m1240a1_m2_usarmy_wd;
	class rhsusf_m1240a1_m2_usarmy_wd_OCimport_01 : rhsusf_m1240a1_m2_usarmy_wd { scope = 0; class EventHandlers; class Turrets; };
	class rhsusf_m1240a1_m2_usarmy_wd_OCimport_02 : rhsusf_m1240a1_m2_usarmy_wd_OCimport_01 {
		class EventHandlers;
	};

	class BNB_FA_JSDF_M113A3_M2 : rhsusf_m113_usarmy_OCimport_02 {
		author = "OLt. FarCry";
		scope = 2;
		scopeCurator = 2;
		displayName = "M113A3 (M2)";
		side = 1;
		faction = "BNB_FA_Japanese_Self_Defence_Force";
		crew = "BNB_FA_JSDF_Rifleman";

		class Turrets : Turrets {
			class MainTurret : MainTurret { gunnerType = "BNB_FA_JSDF_Section_Leader"; };
			class CargoTurret_01 : CargoTurret_01 { gunnerType = "BNB_FA_JSDF_Rifleman"; };
			class CargoTurret_02 : CargoTurret_02 { gunnerType = "BNB_FA_JSDF_Combat_Life_Saver"; };
		};



		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsusf\addons\rhsusf_m113\data_new\m113a3_01_wd_h_co.paa'];_unit setObjectTextureGlobal [1,'rhsusf\addons\rhsusf_m113\data_new\m113a3_02_wd_h_co.paa'];_unit setObjectTextureGlobal [2,'rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa'];_unit setObjectTextureGlobal [3,'rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa'];_unit setObjectTextureGlobal [4,'rhsusf\addons\rhsusf_m113\data_new\m23_pintle_wd_co.paa'];_unit setObjectTextureGlobal [5,'rhsusf\addons\rhsusf_m113\data_new\m113a3_shield_wd_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
			};

		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
		ALiVE_orbatCreator_texture = "standard";

	};

	class BNB_FA_JSDF_Type_89_MBT : BNB_FA_NAF_Leopard_2SG_Woodland_OCimport_02 {
		author = "OLt. FarCry";
		scope = 2;
		scopeCurator = 2;
		displayName = "Type 89 MBT";
		side = 1;
		faction = "BNB_FA_Japanese_Self_Defence_Force";
		crew = "BNB_FA_JSDF_Rifleman";

		class Turrets : Turrets {
			class MainTurret : MainTurret { gunnerType = "BNB_FA_JSDF_Section_Leader"; };
		};



		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
		ALiVE_orbatCreator_texture = "Indep_02";

	};

	class BNB_FA_JSDF_Type_10_IFV : B_T_AFV_Wheeled_01_cannon_F_OCimport_02 {
		author = "OLt. FarCry";
		scope = 2;
		scopeCurator = 2;
		displayName = "Type 10 (Rooikat 120)";
		side = 1;
		faction = "BNB_FA_Japanese_Self_Defence_Force";
		crew = "BNB_FA_JSDF_Rifleman";

		class Turrets : Turrets {
			class MainTurret : MainTurret { gunnerType = "BNB_FA_JSDF_Section_Leader"; };
		};



		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_EXT1_green_CO.paa'];_unit setObjectTextureGlobal [1,'a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_EXT2_green_CO.paa'];_unit setObjectTextureGlobal [2,'a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_wheel_green_CO.paa'];_unit setObjectTextureGlobal [3,'a3\Armor_F\Data\camonet_NATO_Green_CO.paa'];_unit setObjectTextureGlobal [4,'A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT3_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
			};

		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
		ALiVE_orbatCreator_texture = "Green";

	};

	class BNB_FA_JSDF_Type_22_MRAP : rhsusf_m1240a1_m2_usarmy_wd_OCimport_02 {
		author = "OLt. FarCry";
		scope = 2;
		scopeCurator = 2;
		displayName = "Type 22 MRAP";
		side = 1;
		faction = "BNB_FA_Japanese_Self_Defence_Force";
		crew = "BNB_FA_JSDF_Rifleman";
		typicalCargo[] = { "BNB_FA_JSDF_Rifleman" };

		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
		ALiVE_orbatCreator_texture = "Green";

	};
};
