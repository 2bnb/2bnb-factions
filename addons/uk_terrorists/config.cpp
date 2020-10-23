class CfgPatches {
	class bnb_fa_uk_terrorists {
		// Addon identity
		name = "2BNB Factions - UK Terrorists";
		author = "2nd Battalion, Nord Brigade";
		authors[] = {
			"Ford",
			"Arend"
		};
		url = "https://discord.gg/DRaWNyf";
		version = 1.0.0;
		versionAr[] = {1,0,0,0};
		versionStr = "v1.0.0";

		// Addon requirements
		requiredVersion = 2.00;
		requiredAddons[] = {
			"A3_Characters_F",
			"rhsgref_c_troops"
		};

		// Addon items
		units[] = {
			"BNB_FA_UKTerrorists_Rifleman",
			"BNB_FA_UKTerrorists_Medic",
			"BNB_FA_UKTerrorists_AT",
			"BNB_FA_UKTerrorists_SL",
			"BNB_FA_UKTerrorists_Marksman",
			"BNB_FA_UKTerrorists_MG"
		};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
		worlds[] = {};
	};
};

class CfgFactionClasses {
	class BNB_FA_UKTerrorists {
		displayName = "Terrorists";
		side = 0;
		flag = "CUP\BaseConfigs\CUP_BaseConfigs\Data\Flags\flag_tkm_co";
		icon = "CUP\BaseConfigs\CUP_BaseConfigs\Data\Flags\flag_tkm_co";
		priority = 0;
	};
};

#include "Infantry.hpp"
