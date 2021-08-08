///////////////////////////////
// Leopard More Spare Tracks //
///////////////////////////////
class Extended_InitPost_EventHandlers {
	class BNB_FA_BW2_Leopard { ADD_PARTS(1,'ACE_Track') };
};

class CfgVehicles {
	//////////////////
	// Leopard Base //
	//////////////////
	class Tank_F;
	class BWA3_Leopard_base : Tank_F {
		class TextureSources;
	};
	class BWA3_Leopard2_Tropen : BWA3_Leopard_base {
		class TextureSources : TextureSources {
			class Fleck;
			class Fleck2;
			class Tropen1;
			class Tropen2;
			class Tropen3;
		};
	};
	class BNB_FA_BW2_Leopard : BWA3_Leopard2_Tropen {
		scope = 0;
		side = 1;
		displayName = "Leopard";

		class TextureSources : TextureSources {
			class Fleck : Fleck {
				factions[] = {
					"BNB_FA_BW2_Winter",
					"BNB_FA_BW2_Fleck"
				};
			};
			class Fleck2 : Fleck2 {
				factions[] = {
					"BNB_FA_BW2_Winter",
					"BNB_FA_BW2_Fleck"
				};
			};
			class Tropen1 : Tropen1 {
				factions[] = {"BNB_FA_BW2_Tropen"};
			};
			class Tropen2 : Tropen2 {
				factions[] = {"BNB_FA_BW2_Tropen"};
			};
			class Tropen3 : Tropen3 {
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
	// Leopard Camouflages //
	/////////////////////////
	class BNB_FA_BW2_Leopard_Winter : BNB_FA_BW2_Leopard {
		scope = 2;
		scopeCurator = 2;
		FACTION(Winter)
		crew = "BNB_FA_BW2_Crew_Winter";
		typicalCargo[] = { "BNB_FA_BW2_Crew_Winter" };
		textureList[] = {"Fleck",0.6,"Fleck2",0.4};
	};

	class BNB_FA_BW2_Leopard_Tropen : BNB_FA_BW2_Leopard {
		scope = 2;
		scopeCurator = 2;
		FACTION(Tropen)
		crew = "BNB_FA_BW2_Crew_Tropen";
		typicalCargo[] = { "BNB_FA_BW2_Crew_Tropen" };
		textureList[] = {"Tropen1",0.4,"Tropen2",0.3,"Tropen3",0,3};
	};

	class BNB_FA_BW2_Leopard_Fleck : BNB_FA_BW2_Leopard {
		scope = 2;
		scopeCurator = 2;
		FACTION(Fleck)
		crew = "BNB_FA_BW2_Crew_Fleck";
		typicalCargo[] = { "BNB_FA_BW2_Crew_Fleck" };
		textureList[] = {"Fleck",0.6,"Fleck2",0.4};

		class TransportBackpacks {
			ARMOURED_VEHICLE_BACKPACKS(Fleck)
		};
	};
};
