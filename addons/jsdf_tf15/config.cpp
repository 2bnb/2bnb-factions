class CfgPatches {
	class bnb_fa_JPN {
		// Addon identity
		name = "TF15 Factions - Japan";
		author = "Task Force 15";
		authors[] = {
			"Arend",
			"FarCry",
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
		};

		// Addon items
		units[] = {
			///////////////
			// Backpacks //
			///////////////
			// Toolkit
			"BNB_FA_JPN_Toolkit_Backpack_Jeitai_D",
			"BNB_FA_JPN_Toolkit_Backpack_Jeitai",

			// Survival
			"BNB_FA_JPN_Survival_Backpack_Jeitai_D",
			"BNB_FA_JPN_Survival_Backpack_Jeitai",


			//////////////
			// Infantry //
			//////////////
			// Man
			"BNB_FA_JPN_Man_Jeitai_D",
			"BNB_FA_JPN_Man_Winter",
			"BNB_FA_JPN_Man_Navy",
			"BNB_FA_JPN_Man_Jeitai",
// Updated Jan, 2023 - FarCry (Added _Winter variants)
			// Rifleman
			"BNB_FA_JPN_Rifleman_Jeitai_D",
			"BNB_FA_JPN_Rifleman_Winter",
			"BNB_FA_JPN_Rifleman_Navy",
			"BNB_FA_JPN_Rifleman_Jeitai",

			// Crew
			"BNB_FA_JPN_Crew_Jeitai_D",
			"BNB_FA_JPN_Crew_Winter",
			"BNB_FA_JPN_Crew_Navy",
			"BNB_FA_JPN_Crew_Jeitai",

			// Engineer/EOD
			"BNB_FA_JPN_Engineer_EOD_Jeitai_D",
			"BNB_FA_JPN_Engineer_EOD_Winter",
			"BNB_FA_JPN_Engineer_EOD_Navy",
			"BNB_FA_JPN_Engineer_EOD_Jeitai",

			// IC
			"BNB_FA_JPN_1IC_Jeitai_D",
			"BNB_FA_JPN_1IC_Winter",
			"BNB_FA_JPN_1IC_Navy",
			"BNB_FA_JPN_1IC_Jeitai",

			"BNB_FA_JPN_2IC_Jeitai_D",
			"BNB_FA_JPN_2IC_Winter",
			"BNB_FA_JPN_2IC_Navy",
			"BNB_FA_JPN_2IC_Jeitai",

			// LMG
			"BNB_FA_JPN_LMG_762_Jeitai_D",
			"BNB_FA_JPN_LMG_762_Winter",
			"BNB_FA_JPN_LMG_762_Navy",
			"BNB_FA_JPN_LMG_762_Jeitai",

			"BNB_FA_JPN_LMG_556_Jeitai_D",
			"BNB_FA_JPN_LMG_556_Winter",
			"BNB_FA_JPN_LMG_556_Navy",
			"BNB_FA_JPN_LMG_556_Jeitai",

			// Marksman
			"BNB_FA_JPN_Marksman_Jeitai_D",
			"BNB_FA_JPN_Marksman_Winter",
			"BNB_FA_JPN_Marksman_Navy",
			"BNB_FA_JPN_Marksman_Jeitai",

			// Medic
			"BNB_FA_JPN_Medic_Jeitai_D",
			"BNB_FA_JPN_Medic_Winter",
			"BNB_FA_JPN_Medic_Navy",
			"BNB_FA_JPN_Medic_Jeitai",

			// Pilot
			"BNB_FA_JPN_Pilot_Jeitai_D",
			"BNB_FA_JPN_Pilot_Winter",
			"BNB_FA_JPN_Pilot_Navy",
			"BNB_FA_JPN_Pilot_Jeitai",

			// Zeus
			"BNB_FA_JPN_Zeus_Jeitai_D",
			"BNB_FA_JPN_Zeus_Navy",
			"BNB_FA_JPN_Zeus_Winter",
			"BNB_FA_JPN_Zeus_Jeitai",

			// Rifleman AT
			"BNB_FA_JPN_Rifleman_AT_Jeitai_D",
			"BNB_FA_JPN_Rifleman_AT_Navy",
			"BNB_FA_JPN_Rifleman_AT_Winter",
			"BNB_FA_JPN_Rifleman_AT_Jeitai",

/// Add Winter to each of Infantry Classes above///

			///////////////////
			// Land Vehicles //
			///////////////////
// Deleted Land Vehicles, we no longer use.
			///////////////
			// Artillery //
			///////////////
			// Mk6 Mortar
			"BNB_FA_JPN_Mortar_Mk6_Winter",
			"BNB_FA_JPN_Mortar_Mk6_Jeitai_D",
			"BNB_FA_JPN_Mortar_Mk6_Jeitai",
// Deleted 120mm - part of BWMod and not used any longer
			/////////
			// Air //
			/////////
// Deleted Air Vics - No longer used
			/////////////
			// Statics //
			/////////////
			// M2 High
			"BNB_FA_JPN_Static_HMG_High_Winter",
			"BNB_FA_JPN_Static_HMG_High_Jeitai_D",
			"BNB_FA_JPN_Static_HMG_High_Jeitai",

			// M2 Low
			"BNB_FA_JPN_Static_HMG_Low_Winter",
			"BNB_FA_JPN_Static_HMG_Low_Jeitai_D",
			"BNB_FA_JPN_Static_HMG_Low_Jeitai",

			// M2 High (Shield)
			"BNB_FA_JPN_Static_HMG_High_Shield_Winter",
			"BNB_FA_JPN_Static_HMG_High_Shield_Jeitai_D",
			"BNB_FA_JPN_Static_HMG_High_Shield_Jeitai",

			// M2 Low (Shield)
			"BNB_FA_JPN_Static_HMG_Low_Shield_Winter",
			"BNB_FA_JPN_Static_HMG_Low_Shield_Jeitai_D",
			"BNB_FA_JPN_Static_HMG_Low_Shield_Jeitai",
// Deleted Statics (Milan, Mk19, Stinger) as these were part of Redd n Tanks vehicles pack
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
	class BNB_FA_JPN_Winter {
		displayName = "Japan [TF15] (Winter)";
	};
	class BNB_FA_JPN_Jeitai_D {
		displayName = "Japan [TF15] (Desert)";
	};
	class BNB_FA_JPN_Jeitai {
		displayName = "Japan [TF15] (Tropic)";
	};
	class BNB_FA_JPN_Navy {
		displayName = "Japan [TF15] (Navy)";
	};
};

#define FACTION(camo) \
editorCategory = "BNB_FA_JPN_##camo"; \
faction = "BNB_FA_JPN_##camo";

class CfgFactionClasses {
	class BNB_FA_JPN_Winter {
		displayName = "Japan [TF15] (Winter)";
		side = 1;
		flag = "\A3\ui_f\data\map\markers\flags\Germany_ca.paa";
		icon = "\A3\ui_f\data\map\markers\flags\Germany_ca.paa";
		priority = 0;
	};

	class BNB_FA_JPN_Jeitai_D {
		displayName = "Japan [TF15] (Desert)";
		side = 1;
		flag = "\A3\ui_f\data\map\markers\flags\Germany_ca.paa";
		icon = "\A3\ui_f\data\map\markers\flags\Germany_ca.paa";
		priority = 0;
	};

	class BNB_FA_JPN_Navy {
		displayName = "Japan [TF15] (Navy)";
		side = 1;
		flag = "\A3\ui_f\data\map\markers\flags\Germany_ca.paa";
		icon = "\A3\ui_f\data\map\markers\flags\Germany_ca.paa";
		priority = 0;
	};

	class BNB_FA_JPN_Jeitai {
		displayName = "Japan [TF15] (Tropic)";
		side = 1;
		flag = "\A3\ui_f\data\map\markers\flags\Germany_ca.paa";
		icon = "\A3\ui_f\data\map\markers\flags\Germany_ca.paa";
		priority = 0;
	};
};

class CfgGroups {
	class WEST {
		class BNB_FA_JPN_Winter {
			name = "Japan [TF15] (Winter)";
		};
		class BNB_FA_JPN_Jeitai_D {
			name = "Japan [TF15] (Desert)";
		};
		class BNB_FA_JPN_Navy {
			name = "Japan [TF15] (Navy)";
		};
		class BNB_FA_JPN_Jeitai {
			name = "Japan [TF15] (Tropic)";
		};
	};
};

#include "Backpacks.hpp"
#include "infantry\index.hpp"
#include "vehicles\index.hpp"
