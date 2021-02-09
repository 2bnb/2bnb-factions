class CfgPatches {
	class bnb_fa_jsdf {
		// Addon identity
		name = "2BNB Factions - Japanese Self Defence Force";
		author = "2nd Battalion, Nord Brigade";
		authors[] = {
			"FarCry",
			"Arend"
		};
		url = "https://discord.gg/DRaWNyf";
		version = 1.0.0;
		versionAr[] = {1,0,0,0};
		versionStr = "v1.0.0";

		// Addon requirements
		requiredVersion = 2.00;
		requiredAddons[] = {
			"bnb_fa_naf",
			"rhsusf_c_m113",
			"A3_Armor_F_EPB_MBT_03",
			"ace_realisticnames",
			"A3_Sounds_F_Tank",
			"A3_Armor_F_Tank_AFV_Wheeled_01",
			"A3_Air_F_Heli_Light_01"
		};

		// Addon items
		units[] = {
			// "BNB_FA_JSDF_Section_Leader",
			// "BNB_FA_JSDF_Team_Leader",
			// "BNB_FA_JSDF_Combat_Life_Saver",
			// "BNB_FA_JSDF_Rifleman",
			// "BNB_FA_JSDF_LMG_762",
			// "BNB_FA_JSDF_LMG_556",
			// "BNB_FA_JSDF_Anti_Tank",
			// "BNB_FA_JSDF_Marksman",
			"BNB_FA_JSDF_M113A3_M2",
			"BNB_FA_JSDF_Type_89_MBT",
			"BNB_FA_JSDF_Type_10_IFV",
			"BNB_FA_JSDF_Type_22_MRAP",
			"BNB_FA_JSDF_OH_6M_01",
			"BNB_FA_JSDF_Chinook",
			"BNB_FA_JSDF_AH64D"
		};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
		worlds[] = {};
	};
};

class CfgFactionClasses {
	class BNB_FA_Japanese_Self_Defence_Force {
		displayName = "Japanese Self Defence Force";
		side = 1;
		flag = "\A3\ui_f\data\map\markers\flags\nato_ca.paa";
		icon = "\A3\ui_f\data\map\markers\flags\nato_ca.paa";
		priority = 0;
	};
};

// #include "Infantry.hpp"
#include "Vehicles.hpp"
#include "Air.hpp"
