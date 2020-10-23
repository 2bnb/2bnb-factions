class CfgPatches {
	class bnb_fa_cwf {
		// Addon identity
		name = "2BNB Factions - Chernarus Winter Force";
		author = "2nd Battalion, Nord Brigade";
		authors[] = {
			"Jebby",
			"Arend"
		};
		url = "https://discord.gg/DRaWNyf";
		version = 1.0.0;
		versionAr[] = {1,0,0,0};
		versionStr = "v1.0.0";

		// Addon requirements
		requiredVersion = 2.00;
		requiredAddons[] = {
			"po_factions_eu",
			"rhsgref_vehicles_ret",
			"rhs_a2port_air",
			"po_factions_afr",
			"po_factions_eu"
		};

		// Addon items
		units[] = {
			"BNB_FA_CWF_Man_Winter",
			"BNB_FA_CWF_Rifleman_Winter",
			"BNB_FA_CWF_Rifleman_AT_Winter",
			"BNB_FA_CWF_Pilot_Winter",
			"BNB_FA_CWF_Sniper_Winter",
			"BNB_FA_CWF_Medic_Winter",
			"BNB_FA_CWF_Crew_Winter",
			"BNB_FA_CWF_Machinegunner",
			"BNB_FA_CWF_Officer_Winter",
			"BNB_FA_CWF_TLeader_Winter",
			"BNB_FA_CWF_Grenadier_Winter",
			"BNB_FA_CWF_UAZ_DShKM_Winter",
			"BNB_FA_CWF_BMP_1_Winter",
			"BNB_FA_CWF_BTR_60_Winter",
			"BNB_FA_CWF_Ural_ZU23",
			"BNB_FA_CWF_Ural_BM21_Winter",
			"BNB_FA_CWF_Mi_24_Winter",
			"BNB_FA_CWF_Mi8_Transport_Winter",
			"BNB_FA_CWF_Mi8_Rockets_Winter",
			"BNB_FA_CWF_Su25_Cluster_Winter",
			"BNB_FA_CWF_L39_AA_Winter",
			"BNB_FA_CWF_T55_Winter",
			"BNB_FA_CWF_T72_Winter",
			"BNB_FA_CWF_UAZ32_Closed_Winter"
		};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
		worlds[] = {};
	};
};

class CfgFactionClasses {
	class BNB_FA_Chernarus_Winter_Force {
		displayName = "Chernarus Winter Force";
		side = 2;
		priority = 0;
	};
};

#include "Infantry.hpp"
#include "Vehicles.hpp"
#include "Air.hpp"
