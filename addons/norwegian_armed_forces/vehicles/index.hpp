///////////////////////////
// Add Extra Spare Parts //
///////////////////////////
// Note: ACE already sticks 1 of the appropriate part in for us, these will add
// 		 on top of that.
#define ADD_PARTS(number,part) init = "[_this select 0, number, part] call ace_repair_fnc_addSpareParts;";
#define ADD_MULTIPLE_PARTS(number_1,part_1,number_2,part_2) init = "[_this select 0, number_1, part_1] call ace_repair_fnc_addSpareParts;[_this select 0, number_2, part_2] call ace_repair_fnc_addSpareParts;";

class CBA_Extended_EventHandlers_base;

#define VEHICLE_INVENTORY_RESET \
class TransportMagazines {}; \
class TransportWeapons {}; \
class TransportItems {}; \
class TransportBackpacks {};

////////////////////////////////
// Standard Vehicle Inventory //
////////////////////////////////
#define VEHICLE_MAGAZINES \
class _xx_hlc_30rnd_556x45_SPR_PMAG { \
	magazine = "hlc_30rnd_556x45_SPR_PMAG"; \
	count = 15; \
}; \
class _xx_rhsusf_m112_mag { \
	magazine = "rhsusf_m112_mag"; \
	count = 3; \
};

#define VEHICLE_WEAPONS \
class _xx_hlc_rifle_416D10C { \
	weapon = "hlc_rifle_416D10C"; \
	count = 3; \
}; \
class _xx_rhs_weap_m72a7 { \
	weapon = "rhs_weap_m72a7"; \
	count = 1; \
};

#define VEHICLE_ITEMS \
class _xx_ACE_elasticBandage { \
	name = "ACE_elasticBandage"; \
	count = 15; \
}; \
class _xx_ACE_packingBandage { \
	name = "ACE_packingBandage"; \
	count = 15; \
}; \
class _xx_ACE_epinephrine { \
	name = "ACE_epinephrine"; \
	count = 10; \
}; \
class _xx_ACE_morphine { \
	name = "ACE_morphine"; \
	count = 10; \
}; \
class _xx_ACE_adenosine { \
	name = "ACE_adenosine"; \
	count = 10; \
}; \
class _xx_ACE_tourniquet { \
	name = "ACE_tourniquet"; \
	count = 10; \
}; \
class _xx_ACE_EarPlugs { \
	name = "ACE_EarPlugs"; \
	count = 5; \
};

#define VEHICLE_BACKPACKS

////////////////////////////////
// Armoured Vehicle Inventory //
////////////////////////////////
#define ARMOURED_VEHICLE_MAGAZINES \
VEHICLE_MAGAZINES \
class _xx_rhs_fim92_mag { \
	magazine = "rhs_fim92_mag"; \
	count = 3; \
};

#define ARMOURED_VEHICLE_WEAPONS \
VEHICLE_WEAPONS \
class _xx_rhs_weap_fim92 { \
	weapon = "rhs_weap_fim92"; \
	count = 1; \
};

#define ARMOURED_VEHICLE_ITEMS VEHICLE_ITEMS

#define ARMOURED_VEHICLE_BACKPACKS \
class _xx_BNB_FA_NAF_Toolkit_Backpack { \
	backpack = "BNB_FA_NAF_Toolkit_Backpack"; \
	count = 1; \
};

////////////////////////
// Aviation Inventory //
////////////////////////
#define AIR_VEHICLE_MAGAZINES VEHICLE_MAGAZINES

#define AIR_VEHICLE_WEAPONS VEHICLE_WEAPONS \
class _xx_rhs_weap_m72a7 { \
	weapon = "rhs_weap_m72a7"; \
	count = 0; \
};

#define AIR_VEHICLE_ITEMS VEHICLE_ITEMS

#define AIR_VEHICLE_BACKPACKS \
class _xx_BNB_FA_NAF_Survival_Backpack { \
	backpack = "BNB_FA_NAF_Survival_Backpack"; \
	count = 1; \
};

// Land Vehicles
#include "CV90.hpp"
#include "Humvee.hpp"
#include "Leopard_2SG.hpp"
#include "M113.hpp"
#include "Scania.hpp"
#include "Stryker.hpp"

// Air
#include "A10.hpp"
#include "Bell_412.hpp"
#include "C130J.hpp"
#include "H6.hpp"
#include "JAS39.hpp"
#include "UH1H.hpp"
#include "UH60.hpp"

// Artillery
#include "Artillery.hpp"

// Statics
#include "Statics.hpp"

class CfgGroups {
	class WEST {
		class BNB_FA_NAF_Arctic {
			// Name of this class is specified in ../infantry/index.hpp
			class Motorized {
				name = "Motorized Infantry";

				class BNB_FA_NAF_Motorized_Scania_Section {
					name = "Scania Section";
					side = 1;
					faction = "BNB_FA_NAF_Arctic";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Scania_Covered_Arctic";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_1IC_Arctic";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_2IC_Arctic";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Medic_Arctic";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_AT_Arctic";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Arctic";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Arctic";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_LMG_762_Arctic";
					};
				};

				class BNB_FA_NAF_Motorized_Humvee_Section {
					name = "Humvee Section";
					side = 1;
					faction = "BNB_FA_NAF_Arctic";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Humvee_M2_Arctic";
					};
					class Unit1 {
						position[] = {5,-9,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Humvee_Command_Arctic";
					};
					class Unit2 {
						position[] = {-5,-9,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_1IC_Arctic";
					};
					class Unit3 {
						position[] = {-10,-14,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Medic_Arctic";
					};
					class Unit4 {
						position[] = {15,-19,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Arctic";
					};
					class Unit5 {
						position[] = {-15,-19,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Arctic";
					};
					class Unit6 {
						position[] = {15,-19,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_LMG_556_Arctic";
					};
				};
			};

			class Mechanized {
				name = "Mechanized Infantry";

				class BNB_FA_NAF_Mechanized_Infantry_Scout {
					name = "Humvee Scout";
					side = 1;
					faction = "BNB_FA_NAF_Arctic";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Arctic";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Humvee_M2_Arctic";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_Marksman_Arctic";
					};
				};

				class BNB_FA_NAF_Mechanized_Stryker_Section {
					name = "Stryker Section";
					side = 1;
					faction = "BNB_FA_NAF_Arctic";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_Stryker_M2_Arctic";
					};
					class Unit1 {
						position[] = {6,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Stryker_M2_Arctic";
					};
				};

				class BNB_FA_NAF_Mechanized_M113_Section {
					name = "M113 Section";
					side = 1;
					faction = "BNB_FA_NAF_Arctic";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_M113_M2_Arctic";
					};
					class Unit1 {
						position[] = {6,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_M113_M2_Arctic";
					};
				};

			};

			class Armored {
				name = "Armour";

				class BNB_FA_NAF_Armoured_Tank_Section {
					name = "Tank Section";
					side = 1;
					faction = "BNB_FA_NAF_Arctic";
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_Leopard_2SG_Arctic";
					};
					class Unit1 {
						position[] = {10,-17,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Leopard_2SG_Arctic";
					};
				};

				class BNB_FA_NAF_Armoured_Tank_Platoon {
					name = "Tank Platoon";
					side = 1;
					faction = "BNB_FA_NAF_Arctic";
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_Leopard_2SG_Arctic";
					};
					class Unit1 {
						position[] = {10,-17,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Leopard_2SG_Arctic";
					};
					class Unit2 {
						position[] = {-10,-17,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Leopard_2SG_Arctic";
					};
					class Unit3 {
						position[] = {20,-34,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Leopard_2SG_Arctic";
					};
				};

				class BNB_FA_NAF_Armoured_Mixed_Platoon {
					name = "Mixed Armoured Platoon";
					side = 1;
					faction = "BNB_FA_NAF_Arctic";
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_Leopard_2SG_Arctic";
					};
					class Unit1 {
						position[] = {10,-17,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_CV90_Arctic";
					};
					class Unit2 {
						position[] = {-10,-17,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Leopard_2SG_Arctic";
					};
					class Unit3 {
						position[] = {20,-34,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_CV90_Arctic";
					};
				};
			};

			class Artillery {
				name = "Artillery";

				class BNB_FA_NAF_Artillery_Mortar_Battery {
					name = "Mortar Battery";
					side = 1;
					faction = "BNB_FA_NAF_Arctic";
					icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Mortar_Arctic";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Mortar_Arctic";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Mortar_Arctic";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_1IC_Arctic";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Arctic";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Arctic";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Arctic";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Arctic";
					};
					class Unit8 {
						position[] = {-20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Arctic";
					};
				};

				class BNB_FA_NAF_Artillery_Mortar_Team {
					name = "Mortar Team";
					side = 1;
					faction = "BNB_FA_NAF_Arctic";
					icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Mortar_Arctic";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_1IC_Arctic";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Arctic";
					};
				};

				class BNB_FA_NAF_Artillery_Howitzer_Gun {
					name = "Howitzer Gun";
					side = 1;
					faction = "BNB_FA_NAF_Arctic";
					icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Howitzer_Arctic";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_1IC_Arctic";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Arctic";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Arctic";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Arctic";
					};
				};

				class BNB_FA_NAF_Artillery_Howitzer_Battery {
					name = "Howitzer Battery";
					side = 1;
					faction = "BNB_FA_NAF_Arctic";
					icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Howitzer_Arctic";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_1IC_Arctic";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Arctic";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Arctic";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Howitzer_Arctic";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_1IC_Arctic";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Arctic";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Arctic";
					};
					class Unit8 {
						position[] = {-20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Howitzer_Arctic";
					};
					class Unit9 {
						position[] = {25,-25,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_1IC_Arctic";
					};
					class Unit10 {
						position[] = {-25,-25,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Arctic";
					};
					class Unit11 {
						position[] = {30,-30,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Arctic";
					};
				};
			};

			class Air {
				name = "Air";

				class BNB_FA_NAF_Air_Littlebird_CAS_Section {
					name = "Littlebird CAS Section";
					side = 1;
					faction = "BNB_FA_NAF_Arctic";
					icon = "\A3\ui_f\data\map\markers\nato\b_air.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_Littlebird_CAS_Arctic";
					};
					class Unit1 {
						position[] = {20,-26,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Littlebird_CAS_Arctic";
					};
				};

				class BNB_FA_NAF_Air_Huey_CAS_Section {
					name = "Huey CAS Section";
					side = 1;
					faction = "BNB_FA_NAF_Arctic";
					icon = "\A3\ui_f\data\map\markers\nato\b_air.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_Huey_Gunship_Arctic";
					};
					class Unit1 {
						position[] = {17,-21,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Huey_Gunship_Arctic";
					};
				};

				class BNB_FA_NAF_Air_Fighter_Section {
					name = "Fighter Section";
					side = 1;
					faction = "BNB_FA_NAF_Arctic";
					icon = "\A3\ui_f\data\map\markers\nato\b_plane.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_JAS_39_Gripen_Arctic";
					};
					class Unit1 {
						position[] = {17,-29,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_JAS_39_Gripen_Arctic";
					};
				};
			};
		};

		class BNB_FA_NAF_Desert {
			// Name of this class is specified in ../infantry/index.hpp
			class Motorized {
				name = "Motorized Infantry";

				class BNB_FA_NAF_Motorized_Scania_Section {
					name = "Scania Section";
					side = 1;
					faction = "BNB_FA_NAF_Desert";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Scania_Covered_Desert";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_1IC_Desert";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_2IC_Desert";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Medic_Desert";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_AT_Desert";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Desert";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Desert";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_LMG_762_Desert";
					};
				};

				class BNB_FA_NAF_Motorized_Humvee_Section {
					name = "Humvee Section";
					side = 1;
					faction = "BNB_FA_NAF_Desert";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Humvee_M2_Desert";
					};
					class Unit1 {
						position[] = {5,-9,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Humvee_Command_Desert";
					};
					class Unit2 {
						position[] = {-5,-9,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_1IC_Desert";
					};
					class Unit3 {
						position[] = {-10,-14,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Medic_Desert";
					};
					class Unit4 {
						position[] = {15,-19,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Desert";
					};
					class Unit5 {
						position[] = {-15,-19,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Desert";
					};
					class Unit6 {
						position[] = {15,-19,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_LMG_556_Desert";
					};
				};
			};

			class Mechanized {
				name = "Mechanized Infantry";

				class BNB_FA_NAF_Mechanized_Infantry_Scout {
					name = "Humvee Scout";
					side = 1;
					faction = "BNB_FA_NAF_Desert";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Desert";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Humvee_M2_Desert";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_Marksman_Desert";
					};
				};

				class BNB_FA_NAF_Mechanized_Stryker_Section {
					name = "Stryker Section";
					side = 1;
					faction = "BNB_FA_NAF_Desert";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_Stryker_M2_Desert";
					};
					class Unit1 {
						position[] = {6,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Stryker_M2_Desert";
					};
				};

				class BNB_FA_NAF_Mechanized_M113_Section {
					name = "M113 Section";
					side = 1;
					faction = "BNB_FA_NAF_Desert";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_M113_M2_Desert";
					};
					class Unit1 {
						position[] = {6,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_M113_M2_Desert";
					};
				};

			};

			class Armored {
				name = "Armour";

				class BNB_FA_NAF_Armoured_Tank_Section {
					name = "Tank Section";
					side = 1;
					faction = "BNB_FA_NAF_Desert";
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_Leopard_2SG_Desert";
					};
					class Unit1 {
						position[] = {10,-17,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Leopard_2SG_Desert";
					};
				};

				class BNB_FA_NAF_Armoured_Tank_Platoon {
					name = "Tank Platoon";
					side = 1;
					faction = "BNB_FA_NAF_Desert";
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_Leopard_2SG_Desert";
					};
					class Unit1 {
						position[] = {10,-17,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Leopard_2SG_Desert";
					};
					class Unit2 {
						position[] = {-10,-17,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Leopard_2SG_Desert";
					};
					class Unit3 {
						position[] = {20,-34,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Leopard_2SG_Desert";
					};
				};

				class BNB_FA_NAF_Armoured_Mixed_Platoon {
					name = "Mixed Armoured Platoon";
					side = 1;
					faction = "BNB_FA_NAF_Desert";
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_Leopard_2SG_Desert";
					};
					class Unit1 {
						position[] = {10,-17,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_CV90_Desert";
					};
					class Unit2 {
						position[] = {-10,-17,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Leopard_2SG_Desert";
					};
					class Unit3 {
						position[] = {20,-34,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_CV90_Desert";
					};
				};
			};

			class Artillery {
				name = "Artillery";

				class BNB_FA_NAF_Artillery_Mortar_Battery {
					name = "Mortar Battery";
					side = 1;
					faction = "BNB_FA_NAF_Desert";
					icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Mortar_Desert";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Mortar_Desert";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Mortar_Desert";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_1IC_Desert";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Desert";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Desert";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Desert";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Desert";
					};
					class Unit8 {
						position[] = {-20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Desert";
					};
				};

				class BNB_FA_NAF_Artillery_Mortar_Team {
					name = "Mortar Team";
					side = 1;
					faction = "BNB_FA_NAF_Desert";
					icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Mortar_Desert";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_1IC_Desert";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Desert";
					};
				};

				class BNB_FA_NAF_Artillery_Howitzer_Gun {
					name = "Howitzer Gun";
					side = 1;
					faction = "BNB_FA_NAF_Desert";
					icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Howitzer_Desert";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_1IC_Desert";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Desert";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Desert";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Desert";
					};
				};

				class BNB_FA_NAF_Artillery_Howitzer_Battery {
					name = "Howitzer Battery";
					side = 1;
					faction = "BNB_FA_NAF_Desert";
					icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Howitzer_Desert";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_1IC_Desert";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Desert";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Desert";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Howitzer_Desert";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_1IC_Desert";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Desert";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Desert";
					};
					class Unit8 {
						position[] = {-20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Howitzer_Desert";
					};
					class Unit9 {
						position[] = {25,-25,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_1IC_Desert";
					};
					class Unit10 {
						position[] = {-25,-25,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Desert";
					};
					class Unit11 {
						position[] = {30,-30,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Desert";
					};
				};
			};

			class Air {
				name = "Air";

				class BNB_FA_NAF_Air_Littlebird_CAS_Section {
					name = "Littlebird CAS Section";
					side = 1;
					faction = "BNB_FA_NAF_Desert";
					icon = "\A3\ui_f\data\map\markers\nato\b_air.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_Littlebird_CAS_Desert";
					};
					class Unit1 {
						position[] = {20,-26,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Littlebird_CAS_Desert";
					};
				};

				class BNB_FA_NAF_Air_Huey_CAS_Section {
					name = "Huey CAS Section";
					side = 1;
					faction = "BNB_FA_NAF_Desert";
					icon = "\A3\ui_f\data\map\markers\nato\b_air.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_Huey_Gunship_Desert";
					};
					class Unit1 {
						position[] = {17,-21,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Huey_Gunship_Desert";
					};
				};

				class BNB_FA_NAF_Air_Fighter_Section {
					name = "Fighter Section";
					side = 1;
					faction = "BNB_FA_NAF_Desert";
					icon = "\A3\ui_f\data\map\markers\nato\b_plane.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_JAS_39_Gripen_Desert";
					};
					class Unit1 {
						position[] = {17,-29,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_JAS_39_Gripen_Desert";
					};
				};
			};
		};

		class BNB_FA_NAF_Woodland {
			// Name of this class is specified in ../infantry/index.hpp
			class Motorized {
				name = "Motorized Infantry";

				class BNB_FA_NAF_Motorized_Scania_Section {
					name = "Scania Section";
					side = 1;
					faction = "BNB_FA_NAF_Woodland";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Scania_Covered_Woodland";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_1IC_Woodland";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_2IC_Woodland";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Medic_Woodland";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_AT_Woodland";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Woodland";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Woodland";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_LMG_762_Woodland";
					};
				};

				class BNB_FA_NAF_Motorized_Humvee_Section {
					name = "Humvee Section";
					side = 1;
					faction = "BNB_FA_NAF_Woodland";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Humvee_M2_Woodland";
					};
					class Unit1 {
						position[] = {5,-9,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Humvee_Command_Woodland";
					};
					class Unit2 {
						position[] = {-5,-9,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_1IC_Woodland";
					};
					class Unit3 {
						position[] = {-10,-14,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Medic_Woodland";
					};
					class Unit4 {
						position[] = {15,-19,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Woodland";
					};
					class Unit5 {
						position[] = {-15,-19,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Woodland";
					};
					class Unit6 {
						position[] = {15,-19,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_LMG_556_Woodland";
					};
				};
			};

			class Mechanized {
				name = "Mechanized Infantry";

				class BNB_FA_NAF_Mechanized_Infantry_Scout {
					name = "Humvee Scout";
					side = 1;
					faction = "BNB_FA_NAF_Woodland";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Woodland";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Humvee_M2_Woodland";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_Marksman_Woodland";
					};
				};

				class BNB_FA_NAF_Mechanized_Stryker_Section {
					name = "Stryker Section";
					side = 1;
					faction = "BNB_FA_NAF_Woodland";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_Stryker_M2_Woodland";
					};
					class Unit1 {
						position[] = {6,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Stryker_M2_Woodland";
					};
				};

				class BNB_FA_NAF_Mechanized_M113_Section {
					name = "M113 Section";
					side = 1;
					faction = "BNB_FA_NAF_Woodland";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_M113_M2_Woodland";
					};
					class Unit1 {
						position[] = {6,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_M113_M2_Woodland";
					};
				};

			};

			class Armored {
				name = "Armour";

				class BNB_FA_NAF_Armoured_Tank_Section {
					name = "Tank Section";
					side = 1;
					faction = "BNB_FA_NAF_Woodland";
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_Leopard_2SG_Woodland";
					};
					class Unit1 {
						position[] = {10,-17,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Leopard_2SG_Woodland";
					};
				};

				class BNB_FA_NAF_Armoured_Tank_Platoon {
					name = "Tank Platoon";
					side = 1;
					faction = "BNB_FA_NAF_Woodland";
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_Leopard_2SG_Woodland";
					};
					class Unit1 {
						position[] = {10,-17,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Leopard_2SG_Woodland";
					};
					class Unit2 {
						position[] = {-10,-17,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Leopard_2SG_Woodland";
					};
					class Unit3 {
						position[] = {20,-34,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Leopard_2SG_Woodland";
					};
				};

				class BNB_FA_NAF_Armoured_Mixed_Platoon {
					name = "Mixed Armoured Platoon";
					side = 1;
					faction = "BNB_FA_NAF_Woodland";
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_Leopard_2SG_Woodland";
					};
					class Unit1 {
						position[] = {10,-17,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_CV90_Woodland";
					};
					class Unit2 {
						position[] = {-10,-17,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Leopard_2SG_Woodland";
					};
					class Unit3 {
						position[] = {20,-34,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_CV90_Woodland";
					};
				};
			};

			class Artillery {
				name = "Artillery";

				class BNB_FA_NAF_Artillery_Mortar_Battery {
					name = "Mortar Battery";
					side = 1;
					faction = "BNB_FA_NAF_Woodland";
					icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Mortar_Woodland";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Mortar_Woodland";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Mortar_Woodland";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_1IC_Woodland";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Woodland";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Woodland";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Woodland";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Woodland";
					};
					class Unit8 {
						position[] = {-20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Woodland";
					};
				};

				class BNB_FA_NAF_Artillery_Mortar_Team {
					name = "Mortar Team";
					side = 1;
					faction = "BNB_FA_NAF_Woodland";
					icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Mortar_Woodland";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_1IC_Woodland";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Woodland";
					};
				};

				class BNB_FA_NAF_Artillery_Howitzer_Gun {
					name = "Howitzer Gun";
					side = 1;
					faction = "BNB_FA_NAF_Woodland";
					icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Howitzer_Woodland";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_1IC_Woodland";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Woodland";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Woodland";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Woodland";
					};
				};

				class BNB_FA_NAF_Artillery_Howitzer_Battery {
					name = "Howitzer Battery";
					side = 1;
					faction = "BNB_FA_NAF_Woodland";
					icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Howitzer_Woodland";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_1IC_Woodland";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Woodland";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Woodland";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Howitzer_Woodland";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_1IC_Woodland";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Woodland";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Woodland";
					};
					class Unit8 {
						position[] = {-20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Howitzer_Woodland";
					};
					class Unit9 {
						position[] = {25,-25,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_1IC_Woodland";
					};
					class Unit10 {
						position[] = {-25,-25,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Woodland";
					};
					class Unit11 {
						position[] = {30,-30,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Woodland";
					};
				};
			};

			class Air {
				name = "Air";

				class BNB_FA_NAF_Air_Littlebird_CAS_Section {
					name = "Littlebird CAS Section";
					side = 1;
					faction = "BNB_FA_NAF_Woodland";
					icon = "\A3\ui_f\data\map\markers\nato\b_air.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_Littlebird_CAS_Woodland";
					};
					class Unit1 {
						position[] = {20,-26,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Littlebird_CAS_Woodland";
					};
				};

				class BNB_FA_NAF_Air_Huey_CAS_Section {
					name = "Huey CAS Section";
					side = 1;
					faction = "BNB_FA_NAF_Woodland";
					icon = "\A3\ui_f\data\map\markers\nato\b_air.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_Huey_Gunship_Woodland";
					};
					class Unit1 {
						position[] = {17,-21,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Huey_Gunship_Woodland";
					};
				};

				class BNB_FA_NAF_Air_Fighter_Section {
					name = "Fighter Section";
					side = 1;
					faction = "BNB_FA_NAF_Woodland";
					icon = "\A3\ui_f\data\map\markers\nato\b_plane.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_JAS_39_Gripen_Woodland";
					};
					class Unit1 {
						position[] = {17,-29,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_JAS_39_Gripen_Woodland";
					};
				};
			};
		};
	};
};
