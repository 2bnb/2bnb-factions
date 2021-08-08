//////////////////////////////
// Marder More Spare Tracks //
//////////////////////////////
class Extended_InitPost_EventHandlers {
	class BNB_FA_BW2_Marder { ADD_PARTS(1,'ACE_Track') };
};

class CfgVehicles {
	/////////////////
	// Marder Base //
	/////////////////
	class Redd_Marder_1A5_Tropentarn;
	class BNB_FA_BW2_Marder : Redd_Marder_1A5_Tropentarn {
		scope = 0;
		side = 1;
		displayName = "Marder";
		editorSubcategory = "BNB_FA_BW2_IFV";

		class TransportMagazines {
			ARMOURED_VEHICLE_MAGAZINES
		};

		class TransportWeapons {
			ARMOURED_VEHICLE_WEAPONS
		};

		class TransportItems {
			ARMOURED_VEHICLE_ITEMS
			VEHICLE_AT_AMMO_EXTENDED
		};

		class TransportBackpacks {
			ARMOURED_VEHICLE_BACKPACKS(Tropen)
		};
	};

	////////////////////////
	// Marder Camouflages //
	////////////////////////
	class BNB_FA_BW2_Marder_Winter : BNB_FA_BW2_Marder {
		scope = 2;
		scopeCurator = 2;
		FACTION(Winter)
		crew = "BNB_FA_BW2_Crew_Winter";
		typicalCargo[] = { "BNB_FA_BW2_Crew_Winter" };

		hiddenSelectionsTextures[] = {
			"\Redd_Marder_1A5\data\Redd_Marder_1A5_Camo1_Winter_co.paa",
			"\Redd_Marder_1A5\data\Redd_Marder_1A5_Camo2_co.paa"
		};
	};

	class BNB_FA_BW2_Marder_Tropen : BNB_FA_BW2_Marder {
		scope = 2;
		scopeCurator = 2;
		FACTION(Tropen)
		crew = "BNB_FA_BW2_Crew_Tropen";
		typicalCargo[] = { "BNB_FA_BW2_Crew_Tropen" };

		hiddenSelectionsTextures[] = {
			"\Redd_Marder_1A5\data\Redd_Marder_1A5_Camo1_Trope_co.paa",
			"\Redd_Marder_1A5\data\Redd_Marder_1A5_Camo2_co.paa"
		};
	};

	class BNB_FA_BW2_Marder_Fleck : BNB_FA_BW2_Marder {
		scope = 2;
		scopeCurator = 2;
		FACTION(Fleck)
		crew = "BNB_FA_BW2_Crew_Fleck";
		typicalCargo[] = { "BNB_FA_BW2_Crew_Fleck" };

		hiddenSelectionsTextures[] = {
			"\Redd_Marder_1A5\data\Redd_Marder_1A5_Camo1_co.paa",
			"\Redd_Marder_1A5\data\Redd_Marder_1A5_Camo2_co.paa"
		};

		class TransportBackpacks {
			ARMOURED_VEHICLE_BACKPACKS(Fleck)
		};
	};
};
