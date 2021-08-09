class CfgPatches {
	class bnb_fa_bw2 {
		// Addon identity
		name = "2BNB Factions - Bundeswehr";
		author = "2nd Battalion, Nord Brigade";
		authors[] = {
			"Arend",
		};
		url = "https://discord.gg/rUUsCShkzJ";
		version = 1.0.0;
		versionAr[] = {1,0,0,0};
		versionStr = "v1.0.0";

		// Addon requirements
		requiredVersion = 2.00;
		requiredAddons[] = {
			"ace_repair",
			"ace_explosives",
			"ace_huntir",
			"ace_medical_treatment",
			"bnb_ex_gear",
			"tfw_radios_ilbe",
			"A3_Soft_F_Gamma",
			"A3_Soft_F_Beta",
			"A3_Air_F_Jets",
			"A3_Characters_F",
			"A3_Armor_F_EPB",
			"A3_Static_F",
			"A3_Weapons_F",
			"bwa3_units",
			"bwa3_mg5",
			"bwa3_vests",
			"bwa3_uniforms",
			"bwa3_headgear",
			"bwa3_p8",
			"bwa3_optics",
			"bwa3_g36",
			"cfp_cup_b_ger",
			"CUP_Creatures_Military_Germany",
			"CUP_Creatures_StaticWeapons"
		};

		// Addon items
		units[] = {
			///////////////
			// Backpacks //
			///////////////
			// Toolkit
			"BNB_FA_BW2_Toolkit_Backpack_Tropen",
			"BNB_FA_BW2_Toolkit_Backpack_Fleck",

			// Survival
			"BNB_FA_BW2_Survival_Backpack_Tropen",
			"BNB_FA_BW2_Survival_Backpack_Fleck",


			//////////////
			// Infantry //
			//////////////
			// Man
			"BNB_FA_BW2_Man_Tropen",
			"BNB_FA_BW2_Man_Multi",
			"BNB_FA_BW2_Man_Fleck",

			// Rifleman
			"BNB_FA_BW2_Rifleman_Tropen",
			"BNB_FA_BW2_Rifleman_Multi",
			"BNB_FA_BW2_Rifleman_Fleck",

			// Crew
			"BNB_FA_BW2_Crew_Tropen",
			"BNB_FA_BW2_Crew_Multi",
			"BNB_FA_BW2_Crew_Fleck",

			// Engineer/EOD
			"BNB_FA_BW2_Engineer_EOD_Tropen",
			"BNB_FA_BW2_Engineer_EOD_Multi",
			"BNB_FA_BW2_Engineer_EOD_Fleck",

			// IC
			"BNB_FA_BW2_1IC_Tropen",
			"BNB_FA_BW2_1IC_Multi",
			"BNB_FA_BW2_1IC_Fleck",

			"BNB_FA_BW2_2IC_Tropen",
			"BNB_FA_BW2_2IC_Multi",
			"BNB_FA_BW2_2IC_Fleck",

			// LMG
			"BNB_FA_BW2_LMG_762_Tropen",
			"BNB_FA_BW2_LMG_762_Multi",
			"BNB_FA_BW2_LMG_762_Fleck",

			"BNB_FA_BW2_LMG_556_Tropen",
			"BNB_FA_BW2_LMG_556_Multi",
			"BNB_FA_BW2_LMG_556_Fleck",

			// Marksman
			"BNB_FA_BW2_Marksman_Tropen",
			"BNB_FA_BW2_Marksman_Multi",
			"BNB_FA_BW2_Marksman_Fleck",

			// Medic
			"BNB_FA_BW2_Medic_Tropen",
			"BNB_FA_BW2_Medic_Multi",
			"BNB_FA_BW2_Medic_Fleck",

			// Pilot
			"BNB_FA_BW2_Pilot_Tropen",
			"BNB_FA_BW2_Pilot_Multi",
			"BNB_FA_BW2_Pilot_Fleck",

			// Zeus
			"BNB_FA_BW2_Zeus_Tropen",
			"BNB_FA_BW2_Zeus_Multi",
			"BNB_FA_BW2_Zeus_Fleck",

			// Rifleman AT
			"BNB_FA_BW2_Rifleman_AT_Tropen",
			"BNB_FA_BW2_Rifleman_AT_Multi",
			"BNB_FA_BW2_Rifleman_AT_Fleck",


			///////////////////
			// Land Vehicles //
			///////////////////
			// Dingo M2
			"BNB_FA_BW2_Dingo_M2_Winter",
			"BNB_FA_BW2_Dingo_M2_Tropen",
			"BNB_FA_BW2_Dingo_M2_Fleck",

			// Dingo M2/ECM
			"BNB_FA_BW2_Dingo_M2_ECM_Winter",
			"BNB_FA_BW2_Dingo_M2_ECM_Tropen",
			"BNB_FA_BW2_Dingo_M2_ECM_Fleck",

			// Dingo MG3
			"BNB_FA_BW2_Dingo_MG3_Winter",
			"BNB_FA_BW2_Dingo_MG3_Tropen",
			"BNB_FA_BW2_Dingo_MG3_Fleck",

			// Dingo MG3/ECM
			"BNB_FA_BW2_Dingo_MG3_ECM_Winter",
			"BNB_FA_BW2_Dingo_MG3_ECM_Tropen",
			"BNB_FA_BW2_Dingo_MG3_ECM_Fleck",

			// Dingo GMG
			"BNB_FA_BW2_Dingo_GMG_Winter",
			"BNB_FA_BW2_Dingo_GMG_Tropen",
			"BNB_FA_BW2_Dingo_GMG_Fleck",

			// Dingo GMG/ECM
			"BNB_FA_BW2_Dingo_GMG_ECM_Winter",
			"BNB_FA_BW2_Dingo_GMG_ECM_Tropen",
			"BNB_FA_BW2_Dingo_GMG_ECM_Fleck",

			// Eagle Standard
			"BNB_FA_BW2_Eagle_Winter",
			"BNB_FA_BW2_Eagle_Tropen",
			"BNB_FA_BW2_Eagle_Fleck",

			// Eagle Armed
			"BNB_FA_BW2_Eagle_Armed_Winter",
			"BNB_FA_BW2_Eagle_Armed_Tropen",
			"BNB_FA_BW2_Eagle_Armed_Fleck",


			// Fuchs Standard
			"BNB_FA_BW2_Fuchs_Winter",
			"BNB_FA_BW2_Fuchs_Tropen",
			"BNB_FA_BW2_Fuchs_Fleck",

			// Fuchs Milan
			"BNB_FA_BW2_Fuchs_Milan_Winter",
			"BNB_FA_BW2_Fuchs_Milan_Tropen",
			"BNB_FA_BW2_Fuchs_Milan_Fleck",

			// Fuchs Engineer
			"BNB_FA_BW2_Fuchs_Engineer_Winter",
			"BNB_FA_BW2_Fuchs_Engineer_Tropen",
			"BNB_FA_BW2_Fuchs_Engineer_Fleck",

			// Fuchs Medic
			"BNB_FA_BW2_Fuchs_Medic_Winter",
			"BNB_FA_BW2_Fuchs_Medic_Tropen",
			"BNB_FA_BW2_Fuchs_Medic_Fleck",

			// Gepard
			"BNB_FA_BW2_Gepard_Winter",
			"BNB_FA_BW2_Gepard_Tropen",
			"BNB_FA_BW2_Gepard_Fleck",

			// Leopard
			"BNB_FA_BW2_Leopard_Winter",
			"BNB_FA_BW2_Leopard_Tropen",
			"BNB_FA_BW2_Leopard_Fleck",

			// LKW 5t Transport
			"BNB_FA_BW2_LKW_5t_Transport_Winter",
			"BNB_FA_BW2_LKW_5t_Transport_Tropen",
			"BNB_FA_BW2_LKW_5t_Transport_Fleck",

			// LKW 7t Transport
			"BNB_FA_BW2_LKW_7t_Transport_Winter",
			"BNB_FA_BW2_LKW_7t_Transport_Tropen",
			"BNB_FA_BW2_LKW_7t_Transport_Fleck",

			// LKW Fuel
			"BNB_FA_BW2_LKW_Fuel_Winter",
			"BNB_FA_BW2_LKW_Fuel_Tropen",
			"BNB_FA_BW2_LKW_Fuel_Fleck",

			// LKW Repair
			"BNB_FA_BW2_LKW_Repair_Winter",
			"BNB_FA_BW2_LKW_Repair_Tropen",
			"BNB_FA_BW2_LKW_Repair_Fleck",

			// LKW Resupply
			"BNB_FA_BW2_LKW_Resupply_Winter",
			"BNB_FA_BW2_LKW_Resupply_Tropen",
			"BNB_FA_BW2_LKW_Resupply_Fleck",

			// Luchs
			"BNB_FA_BW2_Luchs_Winter",
			"BNB_FA_BW2_Luchs_Tropen",
			"BNB_FA_BW2_Luchs_Fleck",

			// Marder
			"BNB_FA_BW2_Marder_Winter",
			"BNB_FA_BW2_Marder_Tropen",
			"BNB_FA_BW2_Marder_Fleck",

			// Puma
			"BNB_FA_BW2_Puma_Winter",
			"BNB_FA_BW2_Puma_Tropen",
			"BNB_FA_BW2_Puma_Fleck",

			// Wiesel Mk20
			"BNB_FA_BW2_Wiesel_Mk20_Winter",
			"BNB_FA_BW2_Wiesel_Mk20_Tropen",
			"BNB_FA_BW2_Wiesel_Mk20_Fleck",

			// Wiesel TOW
			"BNB_FA_BW2_Wiesel_TOW_Winter",
			"BNB_FA_BW2_Wiesel_TOW_Tropen",
			"BNB_FA_BW2_Wiesel_TOW_Fleck",


			///////////////
			// Artillery //
			///////////////
			// Mk6 Mortar
			"BNB_FA_BW2_Mortar_Mk6_Winter",
			"BNB_FA_BW2_Mortar_Mk6_Tropen",
			"BNB_FA_BW2_Mortar_Mk6_Fleck",

			// 120mm Mortar
			"BNB_FA_BW2_Mortar_120mm_Winter",
			"BNB_FA_BW2_Mortar_120mm_Tropen",
			"BNB_FA_BW2_Mortar_120mm_Fleck",


			/////////
			// Air //
			/////////
			// Tiger FZ
			"BNB_FA_BW2_Tiger_Gunpod_FZ_Winter",
			"BNB_FA_BW2_Tiger_Gunpod_FZ_Tropen",
			"BNB_FA_BW2_Tiger_Gunpod_FZ_Fleck",

			// Tiger Heavy
			"BNB_FA_BW2_Tiger_Gunpod_Heavy_Winter",
			"BNB_FA_BW2_Tiger_Gunpod_Heavy_Tropen",
			"BNB_FA_BW2_Tiger_Gunpod_Heavy_Fleck",

			// Tiger PARS
			"BNB_FA_BW2_Tiger_Gunpod_PARS_Winter",
			"BNB_FA_BW2_Tiger_Gunpod_PARS_Tropen",
			"BNB_FA_BW2_Tiger_Gunpod_PARS_Fleck",

			// Tiger RMK FZ
			"BNB_FA_BW2_Tiger_RMK_FZ_Winter",
			"BNB_FA_BW2_Tiger_RMK_FZ_Tropen",
			"BNB_FA_BW2_Tiger_RMK_FZ_Fleck",

			// Tiger RMK Heavy
			"BNB_FA_BW2_Tiger_RMK_Heavy_Winter",
			"BNB_FA_BW2_Tiger_RMK_Heavy_Tropen",
			"BNB_FA_BW2_Tiger_RMK_Heavy_Fleck",

			// Tiger RMK PARS
			"BNB_FA_BW2_Tiger_RMK_PARS_Winter",
			"BNB_FA_BW2_Tiger_RMK_PARS_Tropen",
			"BNB_FA_BW2_Tiger_RMK_PARS_Fleck",


			/////////////
			// Statics //
			/////////////
			// MG3
			"BNB_FA_BW2_Static_MG3_High_Winter",
			"BNB_FA_BW2_Static_MG3_High_Tropen",
			"BNB_FA_BW2_Static_MG3_High_Fleck",

			// M2 High
			"BNB_FA_BW2_Static_HMG_High_Winter",
			"BNB_FA_BW2_Static_HMG_High_Tropen",
			"BNB_FA_BW2_Static_HMG_High_Fleck",

			// M2 Low
			"BNB_FA_BW2_Static_HMG_Low_Winter",
			"BNB_FA_BW2_Static_HMG_Low_Tropen",
			"BNB_FA_BW2_Static_HMG_Low_Fleck",

			// M2 High (Shield)
			"BNB_FA_BW2_Static_HMG_High_Shield_Winter",
			"BNB_FA_BW2_Static_HMG_High_Shield_Tropen",
			"BNB_FA_BW2_Static_HMG_High_Shield_Fleck",

			// M2 Low (Shield)
			"BNB_FA_BW2_Static_HMG_Low_Shield_Winter",
			"BNB_FA_BW2_Static_HMG_Low_Shield_Tropen",
			"BNB_FA_BW2_Static_HMG_Low_Shield_Fleck",

			// Stinger
			"BNB_FA_BW2_Static_AA_Winter",
			"BNB_FA_BW2_Static_AA_Tropen",
			"BNB_FA_BW2_Static_AA_Fleck",

			// GMG
			"BNB_FA_BW2_Static_GMG_Winter",
			"BNB_FA_BW2_Static_GMG_Tropen",
			"BNB_FA_BW2_Static_GMG_Fleck",

			// Milan
			"BNB_FA_BW2_Static_Milan_Winter",
			"BNB_FA_BW2_Static_Milan_Tropen",
			"BNB_FA_BW2_Static_Milan_Fleck"
		};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
		worlds[] = {};
	};
};

/////////////////////
// Faction Classes //
/////////////////////
// Include EditorCategories for Redd'n'Tank vehicles being silly
class CfgEditorCategories {
	class BNB_FA_BW2_Winter {
		displayName = "Bundeswehr 2BNB (Winter)";
	};
	class BNB_FA_BW2_Tropen {
		displayName = "Bundeswehr 2BNB (Tropentarn)";
	};
	class BNB_FA_BW2_Fleck {
		displayName = "Bundeswehr 2BNB (Flecktarn)";
	};
};

#define FACTION(camo) \
editorCategory = "BNB_FA_BW2_##camo"; \
faction = "BNB_FA_BW2_##camo";

class CfgEditorSubcategories {
	class BNB_FA_BW2_IFV {
		displayName = "IFVs";
	};
	class BNB_FA_BW2_AWC {
		displayName = "AWCs";
	};
};

class CfgFactionClasses {
	class BNB_FA_BW2_Winter {
		displayName = "Bundeswehr 2BNB (Winter)";
		side = 1;
		flag = "\A3\ui_f\data\map\markers\flags\Germany_ca.paa";
		icon = "\A3\ui_f\data\map\markers\flags\Germany_ca.paa";
		priority = 0;
	};

	class BNB_FA_BW2_Tropen {
		displayName = "Bundeswehr 2BNB (Tropentarn)";
		side = 1;
		flag = "\A3\ui_f\data\map\markers\flags\Germany_ca.paa";
		icon = "\A3\ui_f\data\map\markers\flags\Germany_ca.paa";
		priority = 0;
	};

	class BNB_FA_BW2_Multi {
		displayName = "Bundeswehr 2BNB (Multitarn)";
		side = 1;
		flag = "\A3\ui_f\data\map\markers\flags\Germany_ca.paa";
		icon = "\A3\ui_f\data\map\markers\flags\Germany_ca.paa";
		priority = 0;
	};

	class BNB_FA_BW2_Fleck {
		displayName = "Bundeswehr 2BNB (Flecktarn)";
		side = 1;
		flag = "\A3\ui_f\data\map\markers\flags\Germany_ca.paa";
		icon = "\A3\ui_f\data\map\markers\flags\Germany_ca.paa";
		priority = 0;
	};

	// Rename CUP because we don't want mission makers confused
	class CUP_B_GER;
	class CUP_B_GER : CUP_B_GER {
		displayName = "Bundeswehr CUP (Arid / Desert)";
	};

	class CFP_B_DEARMY_WDL;
	class CFP_B_DEARMY_WDL : CFP_B_DEARMY_WDL {
		displayName = "Bundeswehr CUP (Jungle / Woodland)";
	};
};

class CfgGroups {
	class WEST {
		class BNB_FA_BW2_Winter {
			name = "Bundeswehr 2BNB (Winter)";
		};
		class BNB_FA_BW2_Tropen {
			name = "Bundeswehr 2BNB (Tropen)";
		};
		class BNB_FA_BW2_Multi {
			name = "Bundeswehr 2BNB (Multitarn)";
		};
		class BNB_FA_BW2_Fleck {
			name = "Bundeswehr 2BNB (Flecktarn)";
		};
	};
};

#include "Backpacks.hpp"
#include "infantry\index.hpp"
#include "vehicles\index.hpp"
