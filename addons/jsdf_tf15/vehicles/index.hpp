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
#define ARMOURED_VEHICLE_ITEMS \
VEHICLE_ITEMS \


#define ARMOURED_VEHICLE_BACKPACKS(camo) \
class _xx_BNB_FA_JPN_Toolkit_Backpack_##camo { \
	backpack = "BNB_FA_JPN_Toolkit_Backpack_##camo"; \
	count = 1; \
};

////////////////////////
// Aviation Inventory //
////////////////////////

// Land Vehicles

// Air

// Artillery
#include "Artillery.hpp"

// Statics
#include "Statics.hpp"

//class CfgGroups {
//	class WEST {
//		class BNB_FA_BW2_Winter {
//			class Motorized {
//				name = "Motorized Infantry";

//				class BNB_FA_BW2_Motorized_LKW_Section {
//					name = "LKW Section";
//					side = 1;
//					faction = "BNB_FA_BW2_Winter";
//					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
//					rarityGroup = 0.5;

//					class Unit0 {
//						position[] = {0,0,0};
//						rank = "PRIVATE";
//						side = 1;
//						vehicle = "BNB_FA_BW2_LKW_5t_Transport_Winter";
//					};
//					class Unit1 {
//						position[] = {5,-5,0};
//						rank = "SERGEANT";
//						side = 1;
//						vehicle = "BNB_FA_BW2_1IC_Winter";
//					};
//					class Unit2 {
//						position[] = {-5,-5,0};
//						rank = "PRIVATE";
//						side = 1;
//						vehicle = "BNB_FA_BW2_2IC_Winter";
//					};
//					class Unit3 {
//						position[] = {10,-10,0};
//						rank = "PRIVATE";
//						side = 1;
//						vehicle = "BNB_FA_BW2_Medic_Winter";
//					};
//					class Unit4 {
//						position[] = {-10,-10,0};
//						rank = "PRIVATE";
//						side = 1;
//						vehicle = "BNB_FA_BW2_Rifleman_AT_Winter";
//					};
//					class Unit5 {
//						position[] = {15,-15,0};
//						rank = "PRIVATE";
//						side = 1;
//						vehicle = "BNB_FA_BW2_Rifleman_Winter";
//					};
//					class Unit6 {
//						position[] = {-15,-15,0};
//						rank = "PRIVATE";
//						side = 1;
//						vehicle = "BNB_FA_BW2_Rifleman_Winter";
//					};
//					class Unit7 {
//						position[] = {20,-20,0};
//						rank = "PRIVATE";
//						side = 1;
//						vehicle = "BNB_FA_BW2_LMG_Winter";
//					};
//				};

		//class BNB_FA_BW2_Tropen {
			// Name of this class is specified in ../infantry/index.hpp
