class CfgPatches {
	class bnb_fa_naf {
		// Addon identity
		name = "2BNB Factions - Norwegian Armed Forces";
		author = "2nd Battalion, Nord Brigade";
		authors[] = {
			"Ford",
			"Arend",
			"Jebby",
			"Ezpez",
			"Christiansen [NTF]"
		};
		url = "https://discord.gg/DRaWNyf";
		version = 1.0.0;
		versionAr[] = {1,0,0,0};
		versionStr = "v1.0.0";

		// Addon requirements
		requiredVersion = 2.00;
		requiredAddons[] = {
			"ace_repair",
			"bnb_ex_gear",
			"mas_nor_lite_common",
			"niarms_416",
			"hlcweapons_g3",
			"tfw_radios_ilbe",
			"rhsusf_c_stryker",
			"A3_Soft_F_Gamma",
			"A3_Soft_F_Beta",
			"ace_compat_rhs_usf3",
			"rhsusf_c_m113",
			"A3_Air_F_Jets",
			"rhsusf_c_m11xx",
			"rhsusf_vehicles",
			"rhsusf_c_melb",
			"A3_Characters_F",
			"A3_Armor_F_EPB",
			"RHS_US_A2_AirImport",
			"rhsusf_c_statics",
			"A3_Static_F"
		};

		// Addon items
		units[] = {
			///////////////
			// Backpacks //
			///////////////
			"BNB_FA_NAF_Toolkit_Backpack",
			"BNB_FA_NAF_Survival_Backpack",


			//////////////
			// Infantry //
			//////////////
			// Man
			"BNB_FA_NAF_Man_Arctic",
			"BNB_FA_NAF_Man_Desert",
			"BNB_FA_NAF_Man_Multicam",
			"BNB_FA_NAF_Man_Woodland",

			// Rifleman
			"BNB_FA_NAF_Rifleman_Arctic",
			"BNB_FA_NAF_Rifleman_Desert",
			"BNB_FA_NAF_Rifleman_Multicam",
			"BNB_FA_NAF_Rifleman_Woodland",

			// Recon Rifleman
			"BNB_FA_NAF_Recon_Rifleman_Arctic",
			"BNB_FA_NAF_Recon_Rifleman_Desert",
			"BNB_FA_NAF_Recon_Rifleman_Multicam",
			"BNB_FA_NAF_Recon_Rifleman_Woodland",

			// Crew
			"BNB_FA_NAF_Crew_Arctic",
			"BNB_FA_NAF_Crew_Desert",
			"BNB_FA_NAF_Crew_Multicam",
			"BNB_FA_NAF_Crew_Woodland",

			// Engineer/EOD
			"BNB_FA_NAF_Engineer_EOD_Arctic",
			"BNB_FA_NAF_Engineer_EOD_Desert",
			"BNB_FA_NAF_Engineer_EOD_Multicam",
			"BNB_FA_NAF_Engineer_EOD_Woodland",

			// IC
			"BNB_FA_NAF_1IC_Arctic",
			"BNB_FA_NAF_1IC_Desert",
			"BNB_FA_NAF_1IC_Multicam",
			"BNB_FA_NAF_1IC_Woodland",

			"BNB_FA_NAF_2IC_Arctic",
			"BNB_FA_NAF_2IC_Desert",
			"BNB_FA_NAF_2IC_Multicam",
			"BNB_FA_NAF_2IC_Woodland",

			// LMG
			"BNB_FA_NAF_LMG_762_Arctic",
			"BNB_FA_NAF_LMG_762_Desert",
			"BNB_FA_NAF_LMG_762_Multicam",
			"BNB_FA_NAF_LMG_762_Woodland",

			"BNB_FA_NAF_LMG_556_Arctic",
			"BNB_FA_NAF_LMG_556_Desert",
			"BNB_FA_NAF_LMG_556_Multicam",
			"BNB_FA_NAF_LMG_556_Woodland",

			// Marksman
			"BNB_FA_NAF_Marksman_Arctic",
			"BNB_FA_NAF_Marksman_Desert",
			"BNB_FA_NAF_Marksman_Multicam",
			"BNB_FA_NAF_Marksman_Woodland",

			// Medic
			"BNB_FA_NAF_Medic_Arctic",
			"BNB_FA_NAF_Medic_Desert",
			"BNB_FA_NAF_Medic_Multicam",
			"BNB_FA_NAF_Medic_Woodland",

			// Pilot
			"BNB_FA_NAF_Pilot_Arctic",
			"BNB_FA_NAF_Pilot_Desert",
			"BNB_FA_NAF_Pilot_Multicam",
			"BNB_FA_NAF_Pilot_Woodland",

			// Recon IC
			"BNB_FA_NAF_Recon_IC_Arctic",
			"BNB_FA_NAF_Recon_IC_Desert",
			"BNB_FA_NAF_Recon_IC_Multicam",
			"BNB_FA_NAF_Recon_IC_Woodland",

			// Sniper
			"BNB_FA_NAF_Sniper_Arctic",
			"BNB_FA_NAF_Sniper_Desert",
			"BNB_FA_NAF_Sniper_Multicam",
			"BNB_FA_NAF_Sniper_Woodland",

			// Spotter
			"BNB_FA_NAF_Spotter_Arctic",
			"BNB_FA_NAF_Spotter_Desert",
			"BNB_FA_NAF_Spotter_Multicam",
			"BNB_FA_NAF_Spotter_Woodland",

			// Zeus
			"BNB_FA_NAF_Zeus_Arctic",
			"BNB_FA_NAF_Zeus_Desert",
			"BNB_FA_NAF_Zeus_Multicam",
			"BNB_FA_NAF_Zeus_Woodland",

			// Rifleman AT
			"BNB_FA_NAF_Rifleman_AT_Arctic",
			"BNB_FA_NAF_Rifleman_AT_Desert",
			"BNB_FA_NAF_Rifleman_AT_Multicam",
			"BNB_FA_NAF_Rifleman_AT_Woodland",


			///////////////////
			// Land Vehicles //
			///////////////////
			// CV90
			"BNB_FA_NAF_CV90_Arctic",
			"BNB_FA_NAF_CV90_Desert",
			"BNB_FA_NAF_CV90_Woodland",

			// Humvee
			"BNB_FA_NAF_Humvee_Command_Arctic",
			"BNB_FA_NAF_Humvee_Command_Desert",
			"BNB_FA_NAF_Humvee_Command_Woodland",

			"BNB_FA_NAF_Humvee_M2_Arctic",
			"BNB_FA_NAF_Humvee_M2_Desert",
			"BNB_FA_NAF_Humvee_M2_Woodland",

			"BNB_FA_NAF_Humvee_Mk19_Arctic",
			"BNB_FA_NAF_Humvee_Mk19_Desert",
			"BNB_FA_NAF_Humvee_Mk19_Woodland",

			"BNB_FA_NAF_Armoured_Humvee_Arctic",
			"BNB_FA_NAF_Armoured_Humvee_Desert",
			"BNB_FA_NAF_Armoured_Humvee_Woodland",

			"BNB_FA_NAF_Armoured_Humvee_Cargo_Arctic",
			"BNB_FA_NAF_Armoured_Humvee_Cargo_Desert",
			"BNB_FA_NAF_Armoured_Humvee_Cargo_Woodland",

			"BNB_FA_NAF_Armoured_Humvee_V1_M2_LRAS3_Arctic",
			"BNB_FA_NAF_Armoured_Humvee_V1_M2_LRAS3_Desert",
			"BNB_FA_NAF_Armoured_Humvee_V1_M2_LRAS3_Woodland",

			"BNB_FA_NAF_Armoured_Humvee_V1_M2_Arctic",
			"BNB_FA_NAF_Armoured_Humvee_V1_M2_Desert",
			"BNB_FA_NAF_Armoured_Humvee_V1_M2_Woodland",

			"BNB_FA_NAF_Armoured_Humvee_V1_Mk19_Arctic",
			"BNB_FA_NAF_Armoured_Humvee_V1_Mk19_Desert",
			"BNB_FA_NAF_Armoured_Humvee_V1_Mk19_Woodland",

			"BNB_FA_NAF_Armoured_Humvee_V2_M2_Arctic",
			"BNB_FA_NAF_Armoured_Humvee_V2_M2_Desert",
			"BNB_FA_NAF_Armoured_Humvee_V2_M2_Woodland",

			"BNB_FA_NAF_Armoured_Humvee_V2_Mk19_Arctic",
			"BNB_FA_NAF_Armoured_Humvee_V2_Mk19_Desert",
			"BNB_FA_NAF_Armoured_Humvee_V2_Mk19_Woodland",

			// Leopard
			"BNB_FA_NAF_Leopard_2SG_Arctic",
			"BNB_FA_NAF_Leopard_2SG_Desert",
			"BNB_FA_NAF_Leopard_2SG_Woodland",
			"BNB_FA_NAF_Leopard_2SG_Kompis_Woodland",

			// M113
			"BNB_FA_NAF_M113_Arctic",
			"BNB_FA_NAF_M113_M2_Arctic",
			"BNB_FA_NAF_M113_Medical_Arctic",
			"BNB_FA_NAF_M113_M2_Shield_Arctic",

			"BNB_FA_NAF_M113_Desert",
			"BNB_FA_NAF_M113_M2_Desert",
			"BNB_FA_NAF_M113_Medical_Desert",
			"BNB_FA_NAF_M113_M2_Shield_Desert",

			"BNB_FA_NAF_M113_Woodland",
			"BNB_FA_NAF_M113_M2_Woodland",
			"BNB_FA_NAF_M113_Medical_Woodland",
			"BNB_FA_NAF_M113_M2_Shield_Woodland",

			// Scania
			"BNB_FA_NAF_Scania_Arctic",
			"BNB_FA_NAF_Scania_Covered_Arctic",
			"BNB_FA_NAF_Scania_Fuel_Arctic",
			"BNB_FA_NAF_Scania_Utility_Arctic",
			"BNB_FA_NAF_Scania_Medical_Arctic",

			"BNB_FA_NAF_Scania_Desert",
			"BNB_FA_NAF_Scania_Covered_Desert",
			"BNB_FA_NAF_Scania_Fuel_Desert",
			"BNB_FA_NAF_Scania_Utility_Desert",
			"BNB_FA_NAF_Scania_Medical_Desert",

			"BNB_FA_NAF_Scania_Woodland",
			"BNB_FA_NAF_Scania_Covered_Woodland",
			"BNB_FA_NAF_Scania_Fuel_Woodland",
			"BNB_FA_NAF_Scania_Utility_Woodland",
			"BNB_FA_NAF_Scania_Medical_Woodland",

			// Stryker
			"BNB_FA_NAF_Stryker_M2_Arctic",
			"BNB_FA_NAF_Stryker_M2_Desert",
			"BNB_FA_NAF_Stryker_M2_Woodland",

			"BNB_FA_NAF_Stryker_Mk19_Arctic",
			"BNB_FA_NAF_Stryker_Mk19_Desert",
			"BNB_FA_NAF_Stryker_Mk19_Woodland",

			"BNB_FA_NAF_Stryker_M2_LRAS3_Arctic",
			"BNB_FA_NAF_Stryker_M2_LRAS3_Desert",
			"BNB_FA_NAF_Stryker_M2_LRAS3_Woodland",

			"BNB_FA_NAF_Stryker_M2_Plough_Arctic",
			"BNB_FA_NAF_Stryker_M2_Plough_Desert",
			"BNB_FA_NAF_Stryker_M2_Plough_Woodland",

			"BNB_FA_NAF_Stryker_TOW_M240_Arctic",
			"BNB_FA_NAF_Stryker_TOW_M240_Desert",
			"BNB_FA_NAF_Stryker_TOW_M240_Woodland",


			///////////////
			// Artillery //
			///////////////
			// Mk6
			"BNB_FA_NAF_Mortar_Arctic",
			"BNB_FA_NAF_Mortar_Desert",
			"BNB_FA_NAF_Mortar_Woodland",

			// M119A2
			"BNB_FA_NAF_Howitzer_Arctic",
			"BNB_FA_NAF_Howitzer_Desert",
			"BNB_FA_NAF_Howitzer_Woodland",


			/////////
			// Air //
			/////////
			// A-10
			"BNB_FA_NAF_A10_Arctic",
			"BNB_FA_NAF_A10_Desert",
			"BNB_FA_NAF_A10_Woodland",

			// Bell 412
			"BNB_FA_NAF_Bell412_Arctic",
			"BNB_FA_NAF_Bell412_Armed_Arctic",
			"BNB_FA_NAF_Bell412_Desert",
			"BNB_FA_NAF_Bell412_Armed_Desert",
			"BNB_FA_NAF_Bell412_Woodland",
			"BNB_FA_NAF_Bell412_Armed_Woodland",

			// C130J
			"BNB_FA_NAF_C130J_Arctic",
			"BNB_FA_NAF_C130J_Desert",
			"BNB_FA_NAF_C130J_Woodland",

			// (A|M)H6
			"BNB_FA_NAF_Littlebird_CAS_Arctic",
			"BNB_FA_NAF_Littlebird_CAS_Desert",
			"BNB_FA_NAF_Littlebird_CAS_Woodland",

			"BNB_FA_NAF_Littlebird_Transport_Arctic",
			"BNB_FA_NAF_Littlebird_Transport_Desert",
			"BNB_FA_NAF_Littlebird_Transport_Woodland",

			// JAS-39 Gripen
			"BNB_FA_NAF_JAS_39_Gripen_Arctic",
			"BNB_FA_NAF_JAS_39_Gripen_Desert",
			"BNB_FA_NAF_JAS_39_Gripen_Woodland",

			// UH-1H // All require RHS GREF
			// "BNB_FA_NAF_Huey_Transport_Arctic",
			// "BNB_FA_NAF_Huey_Transport_Desert",
			// "BNB_FA_NAF_Huey_Transport_Woodland",
			// "BNB_FA_NAF_Huey_Gunship_Arctic",
			// "BNB_FA_NAF_Huey_Gunship_Desert",
			// "BNB_FA_NAF_Huey_Gunship_Woodland",

			// UH-60
			"BNB_FA_NAF_Blackhawk_Arctic",
			"BNB_FA_NAF_Blackhawk_Desert",
			"BNB_FA_NAF_Blackhawk_Woodland",


			/////////////
			// Statics //
			/////////////
			"BNB_FA_NAF_Static_HMG_High_Arctic",
			"BNB_FA_NAF_Static_HMG_High_Desert",
			"BNB_FA_NAF_Static_HMG_High_Woodland",

			"BNB_FA_NAF_Static_HMG_Low_Arctic",
			"BNB_FA_NAF_Static_HMG_Low_Desert",
			"BNB_FA_NAF_Static_HMG_Low_Woodland",

			"BNB_FA_NAF_Static_HMG_High_Shield_Arctic",
			"BNB_FA_NAF_Static_HMG_High_Shield_Desert",
			"BNB_FA_NAF_Static_HMG_High_Shield_Woodland",

			"BNB_FA_NAF_Static_HMG_Low_Shield_Arctic",
			"BNB_FA_NAF_Static_HMG_Low_Shield_Desert",
			"BNB_FA_NAF_Static_HMG_Low_Shield_Woodland",

			"BNB_FA_NAF_Static_AA_Arctic",
			"BNB_FA_NAF_Static_AA_Desert",
			"BNB_FA_NAF_Static_AA_Woodland",

			"BNB_FA_NAF_Static_GMG_Arctic",
			"BNB_FA_NAF_Static_GMG_Desert",
			"BNB_FA_NAF_Static_GMG_Woodland",

			"BNB_FA_NAF_Static_TOW_Arctic",
			"BNB_FA_NAF_Static_TOW_Desert",
			"BNB_FA_NAF_Static_TOW_Woodland",


			// Misc
			"BNB_FA_NAF_Blackhawk_Woodland",
			"BNB_FA_NAF_Littlebird_CAS_Woodland",
			"BNB_FA_NAF_JAS_39_Gripen_Woodland",
		};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
		worlds[] = {};
	};
};

class CfgFactionClasses {
	class BNB_FA_NAF_Arctic {
		displayName = "Norwegian Army (Arctic)";
		side = 1;
		flag = "\A3\ui_f\data\map\markers\flags\Norway_ca.paa";
		icon = "\A3\ui_f\data\map\markers\flags\Norway_ca.paa";
		priority = 0;
	};

	class BNB_FA_NAF_Desert {
		displayName = "Norwegian Army (Desert)";
		side = 1;
		flag = "\A3\ui_f\data\map\markers\flags\Norway_ca.paa";
		icon = "\A3\ui_f\data\map\markers\flags\Norway_ca.paa";
		priority = 0;
	};

	class BNB_FA_NAF_Multicam {
		displayName = "Norwegian Army (Multicam)";
		side = 1;
		flag = "\A3\ui_f\data\map\markers\flags\Norway_ca.paa";
		icon = "\A3\ui_f\data\map\markers\flags\Norway_ca.paa";
		priority = 0;
	};

	class BNB_FA_NAF_Woodland {
		displayName = "Norwegian Army (Woodland)";
		side = 1;
		flag = "\A3\ui_f\data\map\markers\flags\Norway_ca.paa";
		icon = "\A3\ui_f\data\map\markers\flags\Norway_ca.paa";
		priority = 0;
	};
};

#include "Names.hpp"
#include "Backpacks.hpp"
#include "infantry\index.hpp"
#include "vehicles\index.hpp"
