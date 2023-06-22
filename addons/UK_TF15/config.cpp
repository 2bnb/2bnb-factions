class CfgPatches {
	class BNB_FA_UK {
		// Addon identity
		name = "2BNB Factions - UK";
		author = "Task Force 15";
		authors[] = {"Carmichael (Amateur-god)"};
		url = "https://discord.gg/rUUsCShkzJ";
		version = 1.0.0;
		versionAr[] = {1,0,0,0};
		versionStr = "v1.0.0";

		// Addon requirements
		requiredVersion = 2.00;
		requiredAddons[] = {"ace_medical_treatment","ace_hearing","ace_flashlights","ace_maptools","ace_trenches","UK3CB_BAF_Equipment_NVG","ace_captives","ace_attach","ace_explosives","ace_tagging","A3_Weapons_F","UK3CB_BAF_Equipment_Soflam","UK3CB_BAF_Weapons_L85A3","UK3CB_BAF_Weapons_L9A1","UK3CB_BAF_Equipment_Uniforms","UK3CB_BAF_Equipment_Vests","UK3CB_BAF_Equipment_Helmets","UK3CB_BAF_Units_Woodland","ace_huntir"};
		units[] = {"BNB_FA_UK_Rifleman_Woodland","BNB_FA_UK_Medic_Woodland","BNB_FA_UK_IC_Woodland"};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
		worlds[] = {};
	};
};

#include "weapons\index.hpp"
#include "infantry\index.hpp"
#include "groups\index.hpp"