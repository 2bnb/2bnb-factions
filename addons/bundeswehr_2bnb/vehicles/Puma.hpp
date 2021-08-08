///////////////////////////////
// Puma More Spare Tracks //
///////////////////////////////
class Extended_InitPost_EventHandlers {
	class BNB_FA_BW2_Puma { ADD_PARTS(1,'ACE_Track') };
};

class CfgVehicles {
	//////////////////
	// Puma Base //
	//////////////////
	class Tank_F;
	class BWA3_Puma_base : Tank_F {
		class TextureSources;
	};
	class BWA3_Puma2_Tropen : BWA3_Puma_base {
		class TextureSources : TextureSources {
			class Fleck;
			class Tropen1;
		};
	};
	class BNB_FA_BW2_Puma : BWA3_Puma2_Tropen {
		scope = 0;
		side = 1;
		displayName = "Puma";
		editorSubcategory = "BNB_FA_BW2_IFV";

		class TextureSources : TextureSources {
			class Fleck : Fleck {
				factions[] = {
					"BNB_FA_BW2_Winter",
					"BNB_FA_BW2_Fleck"
				};
			};
			class Tropen1 : Tropen1 {
				factions[] = {"BNB_FA_BW2_Tropen"};
			};
		};

		class TransportMagazines {
			ARMOURED_VEHICLE_MAGAZINES
		};

		class TransportWeapons {
			ARMOURED_VEHICLE_WEAPONS
		};

		class TransportItems {
			ARMOURED_VEHICLE_ITEMS
		};

		class TransportBackpacks {
			ARMOURED_VEHICLE_BACKPACKS(Tropen)
		};
	};

	/////////////////////////
	// Puma Camouflages //
	/////////////////////////
	class BNB_FA_BW2_Puma_Winter : BNB_FA_BW2_Puma {
		scope = 2;
		scopeCurator = 2;
		FACTION(Winter)
		crew = "BNB_FA_BW2_Crew_Winter";
		typicalCargo[] = { "BNB_FA_BW2_Crew_Winter" };
		textureList[] = {"Fleck",1};
	};

	class BNB_FA_BW2_Puma_Tropen : BNB_FA_BW2_Puma {
		scope = 2;
		scopeCurator = 2;
		FACTION(Tropen)
		crew = "BNB_FA_BW2_Crew_Tropen";
		typicalCargo[] = { "BNB_FA_BW2_Crew_Tropen" };
		textureList[] = {"Tropen1",1};
	};

	class BNB_FA_BW2_Puma_Fleck : BNB_FA_BW2_Puma {
		scope = 2;
		scopeCurator = 2;
		FACTION(Fleck)
		crew = "BNB_FA_BW2_Crew_Fleck";
		typicalCargo[] = { "BNB_FA_BW2_Crew_Fleck" };
		textureList[] = {"Fleck",1};

		class TransportBackpacks {
			ARMOURED_VEHICLE_BACKPACKS(Fleck)
		};
	};
};
