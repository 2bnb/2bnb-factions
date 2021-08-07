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
			"bnb_ex_gear",
			"tfw_radios_ilbe",
			"A3_Soft_F_Gamma",
			"A3_Soft_F_Beta",
			"A3_Air_F_Jets",
			"A3_Characters_F",
			"A3_Armor_F_EPB",
			"A3_Static_F",
			"bwa3_units",
			"cfp_cup_b_ger",
			"CUP_Creatures_Military_Germany"
		};

		// Addon items
		units[] = {
			///////////////
			// Backpacks //
			///////////////
			"BNB_FA_BW2_Toolkit_Backpack_Tropen",
			"BNB_FA_BW2_Toolkit_Backpack_Fleck",
			"BNB_FA_BW2_Toolkit_Backpack_Multi",

			"BNB_FA_BW2_Survival_Backpack_Tropen",
			"BNB_FA_BW2_Survival_Backpack_Multi",
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

			// Recon Rifleman
			"BNB_FA_BW2_Recon_Rifleman_Tropen",
			"BNB_FA_BW2_Recon_Rifleman_Multi",
			"BNB_FA_BW2_Recon_Rifleman_Fleck",

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

			// Recon IC
			"BNB_FA_BW2_Recon_IC_Tropen",
			"BNB_FA_BW2_Recon_IC_Multi",
			"BNB_FA_BW2_Recon_IC_Fleck",

			// Sniper
			"BNB_FA_BW2_Sniper_Tropen",
			"BNB_FA_BW2_Sniper_Multi",
			"BNB_FA_BW2_Sniper_Fleck",

			// Spotter
			"BNB_FA_BW2_Spotter_Tropen",
			"BNB_FA_BW2_Spotter_Multi",
			"BNB_FA_BW2_Spotter_Fleck",

			// Zeus
			"BNB_FA_BW2_Zeus_Tropen",
			"BNB_FA_BW2_Zeus_Multi",
			"BNB_FA_BW2_Zeus_Fleck",

			// Rifleman AT
			"BNB_FA_BW2_Rifleman_AT_Tropen",
			"BNB_FA_BW2_Rifleman_AT_Multi",
			"BNB_FA_BW2_Rifleman_AT_Fleck"
		};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
		worlds[] = {};
	};
};

class CfgFactionClasses {
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

#include "Backpacks.hpp"
#include "infantry\index.hpp"
// #include "vehicles\index.hpp"
