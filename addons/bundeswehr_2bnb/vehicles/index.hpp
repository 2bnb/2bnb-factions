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
class _xx_BWA3_30Rnd_556x45_G36 { \
	magazine = "BWA3_30Rnd_556x45_G36"; \
	count = 15; \
}; \
class _xx_DemoCharge_Remote_Mag { \
	magazine = "DemoCharge_Remote_Mag"; \
	count = 3; \
};

#define VEHICLE_WEAPONS \
class _xx_BWA3_G36KA3 { \
	weapon = "BWA3_G36KA3"; \
	count = 3; \
}; \
class _xx_BWA3_PzF3_Tandem_Loaded { \
	weapon = "BWA3_PzF3_Tandem_Loaded"; \
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

#define VEHICLE_AT_AMMO \
class _xx_MRAWS_HE_F { \
	name = "MRAWS_HE_F"; \
	count = 1; \
}; \
class _xx_MRAWS_HEAT_F { \
	name = "MRAWS_HEAT_F"; \
	count = 1; \
};

#define VEHICLE_AT_AMMO_EXTENDED \
class _xx_MRAWS_HE_F { \
	name = "MRAWS_HEAT_F"; \
	count = 3; \
}; \
class _xx_MRAWS_HE_F { \
	name = "MRAWS_HE_F"; \
	count = 1; \
};



#define VEHICLE_BACKPACKS(camo)

////////////////////////////////
// Armoured Vehicle Inventory //
////////////////////////////////
#define ARMOURED_VEHICLE_MAGAZINES \
VEHICLE_MAGAZINES \
class _xx_BWA3_Fliegerfaust_Mag { \
	magazine = "BWA3_Fliegerfaust_Mag"; \
	count = 3; \
};

#define ARMOURED_VEHICLE_WEAPONS \
VEHICLE_WEAPONS \
class _xx_BWA3_Fliegerfaust { \
	weapon = "BWA3_Fliegerfaust"; \
	count = 1; \
};

#define ARMOURED_VEHICLE_ITEMS \
VEHICLE_ITEMS \


#define ARMOURED_VEHICLE_BACKPACKS(camo) \
class _xx_BNB_FA_BW2_Toolkit_Backpack_##camo { \
	backpack = "BNB_FA_BW2_Toolkit_Backpack_##camo"; \
	count = 1; \
};

////////////////////////
// Aviation Inventory //
////////////////////////
#define AIR_VEHICLE_MAGAZINES VEHICLE_MAGAZINES

#define AIR_VEHICLE_WEAPONS VEHICLE_WEAPONS \
class _xx_BWA3_PzF3_Tandem_Loaded { \
	weapon = "BWA3_PzF3_Tandem_Loaded"; \
	count = 0; \
};

#define AIR_VEHICLE_ITEMS VEHICLE_ITEMS

#define AIR_VEHICLE_BACKPACKS(camo) \
class _xx_BNB_FA_BW2_Survival_Backpack_##camo { \
	backpack = "BNB_FA_BW2_Survival_Backpack_##camo"; \
	count = 1; \
};

// Land Vehicles
#include "Dingo.hpp"
#include "Eagle.hpp"
#include "Fuchs.hpp"
#include "Gepard.hpp"
#include "Leopard.hpp"
#include "LKW.hpp"
#include "Luchs.hpp"
#include "Marder.hpp"
#include "Puma.hpp"
#include "Wiesel.hpp"

// Air
#include "Tiger.hpp"

// Artillery
#include "Artillery.hpp"

// Statics
#include "Statics.hpp"

class CfgGroups {
	class WEST {
		class BNB_FA_BW2_Winter {
			// Name of this class is specified in ../infantry/index.hpp
			class Motorized {
				name = "Motorized Infantry";

				class BNB_FA_BW2_Motorized_LKW_Section {
					name = "LKW Section";
					side = 1;
					faction = "BNB_FA_BW2_Winter";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_LKW_5t_Transport_Winter";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_BW2_1IC_Winter";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_2IC_Winter";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Medic_Winter";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_AT_Winter";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Winter";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Winter";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_LMG_Winter";
					};
				};

				class BNB_FA_BW2_Motorized_Humvee_Section {
					name = "Humvee Section";
					side = 1;
					faction = "BNB_FA_BW2_Winter";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Humvee_M2_Winter";
					};
					class Unit1 {
						position[] = {5,-9,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Humvee_Command_Winter";
					};
					class Unit2 {
						position[] = {-5,-9,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_BW2_1IC_Winter";
					};
					class Unit3 {
						position[] = {-10,-14,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Medic_Winter";
					};
					class Unit4 {
						position[] = {15,-19,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Winter";
					};
					class Unit5 {
						position[] = {-15,-19,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Winter";
					};
					class Unit6 {
						position[] = {15,-19,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_LMG_Winter";
					};
				};
			};

			class Mechanized {
				name = "Mechanized Infantry";

				class BNB_FA_BW2_Mechanized_Infantry_Scout {
					name = "Humvee Scout";
					side = 1;
					faction = "BNB_FA_BW2_Winter";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Winter";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Humvee_M2_Winter";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_BW2_Marksman_Winter";
					};
				};

				class BNB_FA_BW2_Mechanized_Stryker_Section {
					name = "Stryker Section";
					side = 1;
					faction = "BNB_FA_BW2_Winter";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_BW2_Stryker_M2_Winter";
					};
					class Unit1 {
						position[] = {6,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Stryker_M2_Winter";
					};
				};

				class BNB_FA_BW2_Mechanized_M113_Section {
					name = "M113 Section";
					side = 1;
					faction = "BNB_FA_BW2_Winter";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_BW2_M113_M2_Winter";
					};
					class Unit1 {
						position[] = {6,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_M113_M2_Winter";
					};
				};

			};

			class Armored {
				name = "Armour";

				class BNB_FA_BW2_Armoured_Tank_Section {
					name = "Tank Section";
					side = 1;
					faction = "BNB_FA_BW2_Winter";
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_BW2_Leopard_2SG_Winter";
					};
					class Unit1 {
						position[] = {10,-17,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Leopard_2SG_Winter";
					};
				};

				class BNB_FA_BW2_Armoured_Tank_Platoon {
					name = "Tank Platoon";
					side = 1;
					faction = "BNB_FA_BW2_Winter";
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_BW2_Leopard_2SG_Winter";
					};
					class Unit1 {
						position[] = {10,-17,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Leopard_2SG_Winter";
					};
					class Unit2 {
						position[] = {-10,-17,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Leopard_2SG_Winter";
					};
					class Unit3 {
						position[] = {20,-34,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Leopard_2SG_Winter";
					};
				};

				class BNB_FA_BW2_Armoured_Mixed_Platoon {
					name = "Mixed Armoured Platoon";
					side = 1;
					faction = "BNB_FA_BW2_Winter";
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_BW2_Leopard_2SG_Winter";
					};
					class Unit1 {
						position[] = {10,-17,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Puma_Winter";
					};
					class Unit2 {
						position[] = {-10,-17,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Leopard_2SG_Winter";
					};
					class Unit3 {
						position[] = {20,-34,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Puma_Winter";
					};
				};
			};

			class Artillery {
				name = "Artillery";

				class BNB_FA_BW2_Artillery_Mortar_Battery {
					name = "Mortar Battery";
					side = 1;
					faction = "BNB_FA_BW2_Winter";
					icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Mortar_Winter";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Mortar_Winter";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Mortar_Winter";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_BW2_1IC_Winter";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Winter";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Winter";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Winter";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Winter";
					};
					class Unit8 {
						position[] = {-20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Winter";
					};
				};

				class BNB_FA_BW2_Artillery_Mortar_Team {
					name = "Mortar Team";
					side = 1;
					faction = "BNB_FA_BW2_Winter";
					icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Mortar_Winter";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_1IC_Winter";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Winter";
					};
				};

				class BNB_FA_BW2_Artillery_Howitzer_Gun {
					name = "Howitzer Gun";
					side = 1;
					faction = "BNB_FA_BW2_Winter";
					icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Howitzer_Winter";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_BW2_1IC_Winter";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Winter";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Winter";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Winter";
					};
				};

				class BNB_FA_BW2_Artillery_Howitzer_Battery {
					name = "Howitzer Battery";
					side = 1;
					faction = "BNB_FA_BW2_Winter";
					icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Howitzer_Winter";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_BW2_1IC_Winter";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Winter";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Winter";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Howitzer_Winter";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_BW2_1IC_Winter";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Winter";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Winter";
					};
					class Unit8 {
						position[] = {-20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Howitzer_Winter";
					};
					class Unit9 {
						position[] = {25,-25,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_BW2_1IC_Winter";
					};
					class Unit10 {
						position[] = {-25,-25,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Winter";
					};
					class Unit11 {
						position[] = {30,-30,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Winter";
					};
				};
			};

			class Air {
				name = "Air";

				class BNB_FA_BW2_Air_Littlebird_CAS_Section {
					name = "Littlebird CAS Section";
					side = 1;
					faction = "BNB_FA_BW2_Winter";
					icon = "\A3\ui_f\data\map\markers\nato\b_air.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_BW2_Littlebird_CAS_Winter";
					};
					class Unit1 {
						position[] = {20,-26,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Littlebird_CAS_Winter";
					};
				};

				class BNB_FA_BW2_Air_Huey_CAS_Section {
					name = "Huey CAS Section";
					side = 1;
					faction = "BNB_FA_BW2_Winter";
					icon = "\A3\ui_f\data\map\markers\nato\b_air.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_BW2_Huey_Gunship_Winter";
					};
					class Unit1 {
						position[] = {17,-21,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Huey_Gunship_Winter";
					};
				};

				class BNB_FA_BW2_Air_Fighter_Section {
					name = "Fighter Section";
					side = 1;
					faction = "BNB_FA_BW2_Winter";
					icon = "\A3\ui_f\data\map\markers\nato\b_plane.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_BW2_JAS_39_Gripen_Winter";
					};
					class Unit1 {
						position[] = {17,-29,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_JAS_39_Gripen_Winter";
					};
				};
			};
		};

		class BNB_FA_BW2_Tropen {
			// Name of this class is specified in ../infantry/index.hpp
			class Motorized {
				name = "Motorized Infantry";

				class BNB_FA_BW2_Motorized_LKW_Section {
					name = "LKW Section";
					side = 1;
					faction = "BNB_FA_BW2_Tropen";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_LKW_5t_Transport_Tropen";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_BW2_1IC_Tropen";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_2IC_Tropen";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Medic_Tropen";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_AT_Tropen";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Tropen";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Tropen";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_LMG_Tropen";
					};
				};

				class BNB_FA_BW2_Motorized_Humvee_Section {
					name = "Humvee Section";
					side = 1;
					faction = "BNB_FA_BW2_Tropen";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Humvee_M2_Tropen";
					};
					class Unit1 {
						position[] = {5,-9,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Humvee_Command_Tropen";
					};
					class Unit2 {
						position[] = {-5,-9,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_BW2_1IC_Tropen";
					};
					class Unit3 {
						position[] = {-10,-14,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Medic_Tropen";
					};
					class Unit4 {
						position[] = {15,-19,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Tropen";
					};
					class Unit5 {
						position[] = {-15,-19,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Tropen";
					};
					class Unit6 {
						position[] = {15,-19,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_LMG_Tropen";
					};
				};
			};

			class Mechanized {
				name = "Mechanized Infantry";

				class BNB_FA_BW2_Mechanized_Infantry_Scout {
					name = "Humvee Scout";
					side = 1;
					faction = "BNB_FA_BW2_Tropen";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Tropen";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Humvee_M2_Tropen";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_BW2_Marksman_Tropen";
					};
				};

				class BNB_FA_BW2_Mechanized_Stryker_Section {
					name = "Stryker Section";
					side = 1;
					faction = "BNB_FA_BW2_Tropen";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_BW2_Stryker_M2_Tropen";
					};
					class Unit1 {
						position[] = {6,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Stryker_M2_Tropen";
					};
				};

				class BNB_FA_BW2_Mechanized_M113_Section {
					name = "M113 Section";
					side = 1;
					faction = "BNB_FA_BW2_Tropen";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_BW2_M113_M2_Tropen";
					};
					class Unit1 {
						position[] = {6,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_M113_M2_Tropen";
					};
				};

			};

			class Armored {
				name = "Armour";

				class BNB_FA_BW2_Armoured_Tank_Section {
					name = "Tank Section";
					side = 1;
					faction = "BNB_FA_BW2_Tropen";
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_BW2_Leopard_2SG_Tropen";
					};
					class Unit1 {
						position[] = {10,-17,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Leopard_2SG_Tropen";
					};
				};

				class BNB_FA_BW2_Armoured_Tank_Platoon {
					name = "Tank Platoon";
					side = 1;
					faction = "BNB_FA_BW2_Tropen";
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_BW2_Leopard_2SG_Tropen";
					};
					class Unit1 {
						position[] = {10,-17,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Leopard_2SG_Tropen";
					};
					class Unit2 {
						position[] = {-10,-17,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Leopard_2SG_Tropen";
					};
					class Unit3 {
						position[] = {20,-34,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Leopard_2SG_Tropen";
					};
				};

				class BNB_FA_BW2_Armoured_Mixed_Platoon {
					name = "Mixed Armoured Platoon";
					side = 1;
					faction = "BNB_FA_BW2_Tropen";
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_BW2_Leopard_2SG_Tropen";
					};
					class Unit1 {
						position[] = {10,-17,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Puma_Tropen";
					};
					class Unit2 {
						position[] = {-10,-17,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Leopard_2SG_Tropen";
					};
					class Unit3 {
						position[] = {20,-34,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Puma_Tropen";
					};
				};
			};

			class Artillery {
				name = "Artillery";

				class BNB_FA_BW2_Artillery_Mortar_Battery {
					name = "Mortar Battery";
					side = 1;
					faction = "BNB_FA_BW2_Tropen";
					icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Mortar_Tropen";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Mortar_Tropen";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Mortar_Tropen";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_BW2_1IC_Tropen";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Tropen";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Tropen";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Tropen";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Tropen";
					};
					class Unit8 {
						position[] = {-20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Tropen";
					};
				};

				class BNB_FA_BW2_Artillery_Mortar_Team {
					name = "Mortar Team";
					side = 1;
					faction = "BNB_FA_BW2_Tropen";
					icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Mortar_Tropen";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_1IC_Tropen";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Tropen";
					};
				};

				class BNB_FA_BW2_Artillery_Howitzer_Gun {
					name = "Howitzer Gun";
					side = 1;
					faction = "BNB_FA_BW2_Tropen";
					icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Howitzer_Tropen";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_BW2_1IC_Tropen";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Tropen";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Tropen";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Tropen";
					};
				};

				class BNB_FA_BW2_Artillery_Howitzer_Battery {
					name = "Howitzer Battery";
					side = 1;
					faction = "BNB_FA_BW2_Tropen";
					icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Howitzer_Tropen";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_BW2_1IC_Tropen";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Tropen";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Tropen";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Howitzer_Tropen";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_BW2_1IC_Tropen";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Tropen";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Tropen";
					};
					class Unit8 {
						position[] = {-20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Howitzer_Tropen";
					};
					class Unit9 {
						position[] = {25,-25,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_BW2_1IC_Tropen";
					};
					class Unit10 {
						position[] = {-25,-25,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Tropen";
					};
					class Unit11 {
						position[] = {30,-30,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Tropen";
					};
				};
			};

			class Air {
				name = "Air";

				class BNB_FA_BW2_Air_Littlebird_CAS_Section {
					name = "Littlebird CAS Section";
					side = 1;
					faction = "BNB_FA_BW2_Tropen";
					icon = "\A3\ui_f\data\map\markers\nato\b_air.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_BW2_Littlebird_CAS_Tropen";
					};
					class Unit1 {
						position[] = {20,-26,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Littlebird_CAS_Tropen";
					};
				};

				// class BNB_FA_BW2_Air_Huey_CAS_Section {
				// 	name = "Huey CAS Section";
				// 	side = 1;
				// 	faction = "BNB_FA_BW2_Tropen";
				// 	icon = "\A3\ui_f\data\map\markers\nato\b_air.paa";
				// 	rarityGroup = 0.5;

				// 	class Unit0 {
				// 		position[] = {0,0,0};
				// 		rank = "SERGEANT";
				// 		side = 1;
				// 		vehicle = "BNB_FA_BW2_Huey_Gunship_Tropen";
				// 	};
				// 	class Unit1 {
				// 		position[] = {17,-21,0};
				// 		rank = "PRIVATE";
				// 		side = 1;
				// 		vehicle = "BNB_FA_BW2_Huey_Gunship_Tropen";
				// 	};
				// };

				class BNB_FA_BW2_Air_Fighter_Section {
					name = "Fighter Section";
					side = 1;
					faction = "BNB_FA_BW2_Tropen";
					icon = "\A3\ui_f\data\map\markers\nato\b_plane.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_BW2_JAS_39_Gripen_Tropen";
					};
					class Unit1 {
						position[] = {17,-29,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_JAS_39_Gripen_Tropen";
					};
				};
			};
		};

		class BNB_FA_BW2_Fleck {
			// Name of this class is specified in ../infantry/index.hpp
			class Motorized {
				name = "Motorized Infantry";

				class BNB_FA_BW2_Motorized_LKW_Section {
					name = "LKW Section";
					side = 1;
					faction = "BNB_FA_BW2_Fleck";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_LKW_5t_Transport_Fleck";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_BW2_1IC_Fleck";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_2IC_Fleck";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Medic_Fleck";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_AT_Fleck";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Fleck";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Fleck";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_LMG_Fleck";
					};
				};

				class BNB_FA_BW2_Motorized_Humvee_Section {
					name = "Humvee Section";
					side = 1;
					faction = "BNB_FA_BW2_Fleck";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Humvee_M2_Fleck";
					};
					class Unit1 {
						position[] = {5,-9,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Humvee_Command_Fleck";
					};
					class Unit2 {
						position[] = {-5,-9,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_BW2_1IC_Fleck";
					};
					class Unit3 {
						position[] = {-10,-14,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Medic_Fleck";
					};
					class Unit4 {
						position[] = {15,-19,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Fleck";
					};
					class Unit5 {
						position[] = {-15,-19,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Fleck";
					};
					class Unit6 {
						position[] = {15,-19,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_LMG_Fleck";
					};
				};
			};

			class Mechanized {
				name = "Mechanized Infantry";

				class BNB_FA_BW2_Mechanized_Infantry_Scout {
					name = "Humvee Scout";
					side = 1;
					faction = "BNB_FA_BW2_Fleck";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Fleck";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Humvee_M2_Fleck";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_BW2_Marksman_Fleck";
					};
				};

				class BNB_FA_BW2_Mechanized_Stryker_Section {
					name = "Stryker Section";
					side = 1;
					faction = "BNB_FA_BW2_Fleck";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_BW2_Stryker_M2_Fleck";
					};
					class Unit1 {
						position[] = {6,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Stryker_M2_Fleck";
					};
				};

				class BNB_FA_BW2_Mechanized_M113_Section {
					name = "M113 Section";
					side = 1;
					faction = "BNB_FA_BW2_Fleck";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_BW2_M113_M2_Fleck";
					};
					class Unit1 {
						position[] = {6,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_M113_M2_Fleck";
					};
				};

			};

			class Armored {
				name = "Armour";

				class BNB_FA_BW2_Armoured_Tank_Section {
					name = "Tank Section";
					side = 1;
					faction = "BNB_FA_BW2_Fleck";
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_BW2_Leopard_2SG_Fleck";
					};
					class Unit1 {
						position[] = {10,-17,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Leopard_2SG_Fleck";
					};
				};

				class BNB_FA_BW2_Armoured_Tank_Platoon {
					name = "Tank Platoon";
					side = 1;
					faction = "BNB_FA_BW2_Fleck";
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_BW2_Leopard_2SG_Fleck";
					};
					class Unit1 {
						position[] = {10,-17,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Leopard_2SG_Fleck";
					};
					class Unit2 {
						position[] = {-10,-17,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Leopard_2SG_Fleck";
					};
					class Unit3 {
						position[] = {20,-34,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Leopard_2SG_Fleck";
					};
				};

				class BNB_FA_BW2_Armoured_Mixed_Platoon {
					name = "Mixed Armoured Platoon";
					side = 1;
					faction = "BNB_FA_BW2_Fleck";
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_BW2_Leopard_2SG_Fleck";
					};
					class Unit1 {
						position[] = {10,-17,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Puma_Fleck";
					};
					class Unit2 {
						position[] = {-10,-17,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Leopard_2SG_Fleck";
					};
					class Unit3 {
						position[] = {20,-34,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Puma_Fleck";
					};
				};
			};

			class Artillery {
				name = "Artillery";

				class BNB_FA_BW2_Artillery_Mortar_Battery {
					name = "Mortar Battery";
					side = 1;
					faction = "BNB_FA_BW2_Fleck";
					icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Mortar_Fleck";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Mortar_Fleck";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Mortar_Fleck";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_BW2_1IC_Fleck";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Fleck";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Fleck";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Fleck";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Fleck";
					};
					class Unit8 {
						position[] = {-20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Fleck";
					};
				};

				class BNB_FA_BW2_Artillery_Mortar_Team {
					name = "Mortar Team";
					side = 1;
					faction = "BNB_FA_BW2_Fleck";
					icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Mortar_Fleck";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_1IC_Fleck";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Fleck";
					};
				};

				class BNB_FA_BW2_Artillery_Howitzer_Gun {
					name = "Howitzer Gun";
					side = 1;
					faction = "BNB_FA_BW2_Fleck";
					icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Howitzer_Fleck";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_BW2_1IC_Fleck";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Fleck";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Fleck";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Fleck";
					};
				};

				class BNB_FA_BW2_Artillery_Howitzer_Battery {
					name = "Howitzer Battery";
					side = 1;
					faction = "BNB_FA_BW2_Fleck";
					icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Howitzer_Fleck";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_BW2_1IC_Fleck";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Fleck";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Fleck";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Howitzer_Fleck";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_BW2_1IC_Fleck";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Fleck";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Fleck";
					};
					class Unit8 {
						position[] = {-20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Howitzer_Fleck";
					};
					class Unit9 {
						position[] = {25,-25,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_BW2_1IC_Fleck";
					};
					class Unit10 {
						position[] = {-25,-25,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Fleck";
					};
					class Unit11 {
						position[] = {30,-30,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Fleck";
					};
				};
			};

			class Air {
				name = "Air";

				class BNB_FA_BW2_Air_Littlebird_CAS_Section {
					name = "Littlebird CAS Section";
					side = 1;
					faction = "BNB_FA_BW2_Fleck";
					icon = "\A3\ui_f\data\map\markers\nato\b_air.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_BW2_Littlebird_CAS_Fleck";
					};
					class Unit1 {
						position[] = {20,-26,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Littlebird_CAS_Fleck";
					};
				};

				// class BNB_FA_BW2_Air_Huey_CAS_Section {
				// 	name = "Huey CAS Section";
				// 	side = 1;
				// 	faction = "BNB_FA_BW2_Fleck";
				// 	icon = "\A3\ui_f\data\map\markers\nato\b_air.paa";
				// 	rarityGroup = 0.5;

				// 	class Unit0 {
				// 		position[] = {0,0,0};
				// 		rank = "SERGEANT";
				// 		side = 1;
				// 		vehicle = "BNB_FA_BW2_Huey_Gunship_Fleck";
				// 	};
				// 	class Unit1 {
				// 		position[] = {17,-21,0};
				// 		rank = "PRIVATE";
				// 		side = 1;
				// 		vehicle = "BNB_FA_BW2_Huey_Gunship_Fleck";
				// 	};
				// };

				class BNB_FA_BW2_Air_Fighter_Section {
					name = "Fighter Section";
					side = 1;
					faction = "BNB_FA_BW2_Fleck";
					icon = "\A3\ui_f\data\map\markers\nato\b_plane.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_BW2_JAS_39_Gripen_Fleck";
					};
					class Unit1 {
						position[] = {17,-29,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_JAS_39_Gripen_Fleck";
					};
				};
			};
		};
	};
};
