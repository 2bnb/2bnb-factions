class CfgPatches {
	class bnb_fa_rs {
		// Addon identity
		name = "2BNB Factions - Russian Spetznaz";
		author = "2nd Battalion, Nord Brigade";
		authors[] = {
			"Sawtes",
			"Arend"
		};
		url = "https://discord.gg/rUUsCShkzJ";
		version = 1.0.0;
		versionAr[] = {1,0,0,0};
		versionStr = "v1.0.0";

		// Addon requirements
		requiredVersion = 2.00;
		requiredAddons[] = {
			"A3_Characters_F",
			"rhs_c_a2port_air",
			"rhs_c_troops",
			"rhs_c_tanks",
			"rhs_c_heavyweapons",
			"rhs_c_bmp3",
			"rhs_c_cars"
		};

		// Addon items
		units[] = {
			// Infantry
			"BNB_FA_RS_Crewman",

			"BNB_FA_RS_Fireteam_Leader",
			"BNB_FA_RS_Rifleman",
			"BNB_FA_RS_Autorifleman",
			"BNB_FA_RS_Grenadier",
			"BNB_FA_RS_Marksman_VSS",
			"BNB_FA_RS_Recon",
			"BNB_FA_RS_Squad_Leader",
			"BNB_FA_RS_Rifleman_AT",
			"BNB_FA_RS_Sniper",
			"BNB_FA_RS_Spotter",
			"BNB_FA_RS_Medic",

			"BNB_FA_RS_SSO_Rifleman",
			"BNB_FA_RS_SSO_Autorifleman",
			"BNB_FA_RS_SSO_Grenadier",
			"BNB_FA_RS_SSO_Fireteam_Leader",
			"BNB_FA_RS_SSO_Medic",
			"BNB_FA_RS_SSO_Marksman",
			"BNB_FA_RS_SSO_Rifleman_AT",
			"BNB_FA_RS_SSO_Squad_Leader",
			"BNB_FA_RS_SSO_Sniper",
			"BNB_FA_RS_SSO_Spotter",

			// Vehicles
			"BNB_FA_RS_T80_BV",
			"BNB_FA_RS_BMP_3Up_Armored",
			"BNB_FA_RS_GAZ_Armed",

			// Statics
			"BNB_FA_RS_AGS_30",
			"BNB_FA_RS_KORD",

			// Air
			"BNB_FA_RS_Mi_24P_Hind",
			"BNB_FA_RS_Mi_8Hip",
			"BNB_FA_RS_Ka_52_Alligator"
		};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
		worlds[] = {};
	};
};

class CfgFactionClasses {
	class BNB_FA_Russian_Spetznaz {
		displayName = "Russian Spetznaz";
		side = 0;
		flag = "\ca\data\flag_rus_co.paa";
		icon = "\ca\data\flag_rus_co.paa";
		priority = 0;
	};
};

#include "Infantry.hpp"
#include "Vehicles.hpp"
#include "Air.hpp"
#include "Statics.hpp"
