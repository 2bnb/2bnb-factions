class CBA_Extended_EventHandlers_base;

class CfgVehicles {
	class RHS_CH_47F;
	class BNB_FA_JSDF_Chinook : RHS_CH_47F {
		author = "Arend";
		scope = 2;
		scopeCurator = 2;
		displayName = "CH-47F Chinook";
		side = 1;
		faction = "BNB_FA_Japanese_Self_Defence_Force";
		crew = "BNB_FA_JSDF_Section_Leader";
		typicalCargo[] = {
			"BNB_FA_JSDF_Rifleman"
		};

		hiddenSelectionsTextures[] =
		{
			"\x\bnb_fa\jparmy\data\textures\ch47_ext_1_co.paa",
			"\x\bnb_fa\jparmy\data\textures\ch47_ext_2_co.paa",
			"\x\bnb_fa\jparmy\data\textures\ch47f_nalepky_ca.paa",
			"\x\bnb_fa\jparmy\data\textures\ch47_ext_mlod_co.paa"
		};

		class TextureSources {
			class JapanStandard {
				displayName="Standard - JSDF";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\jparmy\data\textures\ch47_ext_1_co.paa",
					"\x\bnb_fa\jparmy\data\textures\ch47_ext_2_co.paa",
					"\x\bnb_fa\jparmy\data\textures\ch47f_nalepky_ca.paa",
					"\x\bnb_fa\jparmy\data\textures\ch47_ext_mlod_co.paa"
				};
				factions[] = {
					"BNB_FA_Japanese_Self_Defence_Force"
				};
			};
			class JapanDesert {
				displayName="Desert - JSDF";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\jparmy\data\textures\ch47_ext_1_light_co.paa",
					"\x\bnb_fa\jparmy\data\textures\ch47_ext_2_light_co.paa",
					"\x\bnb_fa\jparmy\data\textures\ch47f_nalepky_ca.paa",
					"\x\bnb_fa\jparmy\data\textures\ch47_ext_light_mlod_co.paa"
				};
				factions[] = {
					"BNB_FA_Japanese_Self_Defence_Force"
				};
			};
		};
	};

	class RHS_AH64D;
	class BNB_FA_JSDF_AH64D : RHS_AH64D {
		author = "Arend";
		scope = 2;
		scopeCurator = 2;
		displayName = "AH-64D Apache";
		side = 1;
		faction = "BNB_FA_Japanese_Self_Defence_Force";
		crew = "BNB_FA_JSDF_Section_Leader";
		typicalCargo[] = {
			"BNB_FA_JSDF_Rifleman"
		};

		hiddenSelectionsTextures[] =
		{
			"\x\bnb_fa\jparmy\data\textures\ah64d_body_co.paa",
			"\rhsusf\addons\rhsusf_a2port_air\ah64\data\ah64d_details_co.paa",
			"\x\bnb_fa\jparmy\data\textures\ah64d_alfa_ca.paa"
		};

		class TextureSources {
			class Standard {
				displayName="Standard - JSDF";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\jparmy\data\textures\ah64d_body_co.paa",
					"\rhsusf\addons\rhsusf_a2port_air\ah64\data\ah64d_details_co.paa",
					"\x\bnb_fa\jparmy\data\textures\ah64d_alfa_ca.paa"
				};
				factions[] = {
					"BNB_FA_Japanese_Self_Defence_Force"
				};
			};
		};
	};

	class RHS_MELB_AH6M;
	class RHS_MELB_AH6M_OCimport_01 : RHS_MELB_AH6M {
		class EventHandlers;
	};

	class BNB_FA_JSDF_OH_6M : RHS_MELB_AH6M_OCimport_01 {
		author = "OLt. FarCry";
		scope = 2;
		scopeCurator = 2;
		displayName = "OH-6M";
		side = 1;
		faction = "BNB_FA_Japanese_Self_Defence_Force";
		crew = "BNB_FA_JSDF_Section_Leader";
		typicalCargo[] = {
			"BNB_FA_JSDF_Combat_Life_Saver"
		};


		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
			};

		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;

	};
};
