class CfgVehicles {
	////////////////////
	// Eagle Standard //
	////////////////////
	class BWA3_Eagle_base;
	class BWA3_Eagle_hatch_base : BWA3_Eagle_base {
		class TextureSources;
	};
	class BWA3_Eagle_Tropen : BWA3_Eagle_hatch_base {
		class TextureSources : TextureSources {
			class Fleck;
			class Tropen1;
			class tropen1_2;
			class Tropen2;
			class Tropen2_2;
			class Tropen3;
		};

		class Turrets;
	};
	class BNB_FA_BW2_Eagle : BWA3_Eagle_Tropen {
		scope = 0;
		side = 1;
		displayName = "Eagle";

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
			class tropen1_2 : tropen1_2 {
				factions[] = {"BNB_FA_BW2_Tropen"};
			};
			class Tropen2 : Tropen2 {
				factions[] = {"BNB_FA_BW2_Tropen"};
			};
			class Tropen2_2 : Tropen2_2 {
				factions[] = {"BNB_FA_BW2_Tropen"};
			};
			class Tropen3 : Tropen3 {
				factions[] = {"BNB_FA_BW2_Tropen"};
			};
		};

		class Turrets : Turrets {
			class CargoTurret_01;
		};

		class TransportMagazines {
			VEHICLE_MAGAZINES
		};

		class TransportWeapons {
			VEHICLE_WEAPONS
		};

		class TransportItems {
			VEHICLE_ITEMS
		};

		class TransportBackpacks {
			VEHICLE_BACKPACKS(Tropen)
		};
	};

	class BNB_FA_BW2_Eagle_Winter : BNB_FA_BW2_Eagle {
		scope = 2;
		scopeCurator = 2;
		FACTION(Winter)
		crew = "BNB_FA_BW2_Rifleman_Winter";
		typicalCargo[] = { "BNB_FA_BW2_Rifleman_Winter" };
		textureList[] = {"Fleck",1};

		class Turrets : Turrets {
			class CargoTurret_01 : CargoTurret_01 {
				gunnerType = "BNB_FA_BW2_LMG_Winter";
			};
		};
	};

	class BNB_FA_BW2_Eagle_Tropen : BNB_FA_BW2_Eagle {
		scope = 2;
		scopeCurator = 2;
		FACTION(Tropen)
		crew = "BNB_FA_BW2_Rifleman_Tropen";
		typicalCargo[] = { "BNB_FA_BW2_Rifleman_Tropen" };
		textureList[] = {"Tropen1",0.2,"Tropen2",0.2,"Tropen1_2",0.2,"Tropen2_2",0.2,"Tropen3",0.2};

		class Turrets : Turrets {
			class CargoTurret_01 : CargoTurret_01 {
				gunnerType = "BNB_FA_BW2_LMG_Tropen";
			};
		};
	};

	class BNB_FA_BW2_Eagle_Fleck : BNB_FA_BW2_Eagle {
		scope = 2;
		scopeCurator = 2;
		FACTION(Fleck)
		crew = "BNB_FA_BW2_Rifleman_Fleck";
		typicalCargo[] = { "BNB_FA_BW2_Rifleman_Fleck" };
		textureList[] = {"Fleck",1};

		class Turrets : Turrets {
			class CargoTurret_01 : CargoTurret_01 {
				gunnerType = "BNB_FA_BW2_LMG_Fleck";
			};
		};

		class TransportBackpacks {
			VEHICLE_BACKPACKS(Fleck)
		};
	};


	/////////////////
	// Eagle Armed //
	/////////////////
	class BWA3_Eagle_flw100_base : BWA3_Eagle_base {
		class TextureSources;
	};
	class BWA3_Eagle_FLW100_Tropen : BWA3_Eagle_flw100_base {
		class TextureSources : TextureSources {
			class Fleck;
			class Tropen1;
			class Tropen1_1;
			class tropen1_2;
			class Tropen1_3;
			class Tropen2;
			class Tropen2_1;
			class Tropen2_2;
			class Tropen2_3;
			class Tropen3;
			class Tropen3_1;
		};
	};
	class BNB_FA_BW2_Eagle_Armed : BWA3_Eagle_FLW100_Tropen {
		scope = 0;
		side = 1;
		displayName = "Eagle (Armed)";

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
			class Tropen1_1 : Tropen1_1 {
				factions[] = {"BNB_FA_BW2_Tropen"};
			};
			class tropen1_2 : tropen1_2 {
				factions[] = {"BNB_FA_BW2_Tropen"};
			};
			class Tropen1_3 : Tropen1_3 {
				factions[] = {"BNB_FA_BW2_Tropen"};
			};
			class Tropen2 : Tropen2 {
				factions[] = {"BNB_FA_BW2_Tropen"};
			};
			class Tropen2_1 : Tropen2_1 {
				factions[] = {"BNB_FA_BW2_Tropen"};
			};
			class Tropen2_2 : Tropen2_2 {
				factions[] = {"BNB_FA_BW2_Tropen"};
			};
			class Tropen2_3 : Tropen2_3 {
				factions[] = {"BNB_FA_BW2_Tropen"};
			};
			class Tropen3 : Tropen3 {
				factions[] = {"BNB_FA_BW2_Tropen"};
			};
			class Tropen3_1 : Tropen3_1 {
				factions[] = {"BNB_FA_BW2_Tropen"};
			};
		};

		class TransportMagazines {
			VEHICLE_MAGAZINES
		};

		class TransportWeapons {
			VEHICLE_WEAPONS
		};

		class TransportItems {
			VEHICLE_ITEMS
		};

		class TransportBackpacks {
			VEHICLE_BACKPACKS(Tropen)
		};
	};

	class BNB_FA_BW2_Eagle_Armed_Winter : BNB_FA_BW2_Eagle_Armed {
		scope = 2;
		scopeCurator = 2;
		FACTION(Winter)
		crew = "BNB_FA_BW2_Rifleman_Winter";
		typicalCargo[] = { "BNB_FA_BW2_Rifleman_Winter" };
		textureList[] = {"Fleck",1};
	};

	class BNB_FA_BW2_Eagle_Armed_Tropen : BNB_FA_BW2_Eagle_Armed {
		scope = 2;
		scopeCurator = 2;
		FACTION(Tropen)
		crew = "BNB_FA_BW2_Rifleman_Tropen";
		typicalCargo[] = { "BNB_FA_BW2_Rifleman_Tropen" };
		textureList[] = {"Tropen1",0.1,"Tropen2",0.1,"Tropen3",0.1,"Tropen1_1",0.1,"Tropen2_1",0.1,"Tropen3_1",0.1,"Tropen1_2",0.1,"Tropen2_2",0.1,"Tropen1_3",0.1,"Tropen2_3",0.1};
	};

	class BNB_FA_BW2_Eagle_Armed_Fleck : BNB_FA_BW2_Eagle_Armed {
		scope = 2;
		scopeCurator = 2;
		FACTION(Fleck)
		crew = "BNB_FA_BW2_Rifleman_Fleck";
		typicalCargo[] = { "BNB_FA_BW2_Rifleman_Fleck" };
		textureList[] = {"Fleck",1};

		class TransportBackpacks {
			VEHICLE_BACKPACKS(Fleck)
		};
	};
};
