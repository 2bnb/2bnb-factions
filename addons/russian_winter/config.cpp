class CfgPatches {
	class bnb_fa_russian_winter {
		name = "2BNB Factions - Russian Winter";
		units[] = {
			"O_RWR_crew"
		};
		weapons[] = {};
		requiredAddons[] = {
			"RWR_vehicles"
		};
		author = "2nd Battalion, Nord Brigade";
		authors[] = {
			"Arend"
		};
	};
};

class CfgVehicles {
	class RHS_Ural_Open_VDV_01;
	class RWR_ural_open_camo: RHS_Ural_Open_VDV_01 {
		crew = "O_RWR_soldier";
	};
};
