class CfgVehicles {
	class Air;
	class Helicopter : Air {
		class TextureSources;
	};
	class Helicopter_Base_F : Helicopter {
		class TextureSources : TextureSources {
			class Fleck;
			class Special;
		};
	};
	class BWA3_Tiger_base : Helicopter_Base_F {
		class TextureSources : TextureSources {
			class Fleck : Fleck {
				factions[] = {
					"BNB_FA_BW2_Winter",
					"BNB_FA_BW2_Tropen",
					"BNB_FA_BW2_Fleck"
				};
			};
			class Special : Special {
				factions[] = {
					"BNB_FA_BW2_Winter",
					"BNB_FA_BW2_Tropen",
					"BNB_FA_BW2_Fleck"
				};
			};
		};
	};

	//////////////
	// Tiger FZ //
	//////////////
	class BWA3_Tiger_Gunpod_FZ : BWA3_Tiger_base;
	class BNB_FA_BW2_Tiger_Gunpod_FZ_Winter : BWA3_Tiger_Gunpod_FZ {
		FACTION(Winter)
		crew = "BNB_FA_BW2_Pilot_Winter";
		typicalCargo[] = { "BNB_FA_BW2_Pilot_Winter" };


		class TransportMagazines {
			AIR_VEHICLE_MAGAZINES
		};

		class TransportWeapons {
			AIR_VEHICLE_WEAPONS
		};

		class TransportItems {
			AIR_VEHICLE_ITEMS
		};

		class TransportBackpacks {
			AIR_VEHICLE_BACKPACKS(Tropen)
		};
	};

	class BNB_FA_BW2_Tiger_Gunpod_FZ_Tropen : BNB_FA_BW2_Tiger_Gunpod_FZ_Winter {
		FACTION(Tropen)
		crew = "BNB_FA_BW2_Pilot_Tropen";
		typicalCargo[] = { "BNB_FA_BW2_Pilot_Tropen" };
	};

	class BNB_FA_BW2_Tiger_Gunpod_FZ_Fleck : BNB_FA_BW2_Tiger_Gunpod_FZ_Winter {
		FACTION(Fleck)
		crew = "BNB_FA_BW2_Pilot_Fleck";
		typicalCargo[] = { "BNB_FA_BW2_Pilot_Fleck" };

		class TransportBackpacks {
			AIR_VEHICLE_BACKPACKS(Fleck)
		};
	};

	/////////////////
	// Tiger Heavy //
	/////////////////
	class BWA3_Tiger_Gunpod_Heavy : BWA3_Tiger_base;
	class BNB_FA_BW2_Tiger_Gunpod_Heavy_Winter : BWA3_Tiger_Gunpod_Heavy {
		FACTION(Winter)
		crew = "BNB_FA_BW2_Pilot_Winter";
		typicalCargo[] = { "BNB_FA_BW2_Pilot_Winter" };


		class TransportMagazines {
			AIR_VEHICLE_MAGAZINES
		};

		class TransportWeapons {
			AIR_VEHICLE_WEAPONS
		};

		class TransportItems {
			AIR_VEHICLE_ITEMS
		};

		class TransportBackpacks {
			AIR_VEHICLE_BACKPACKS(Tropen)
		};
	};

	class BNB_FA_BW2_Tiger_Gunpod_Heavy_Tropen : BNB_FA_BW2_Tiger_Gunpod_Heavy_Winter {
		FACTION(Tropen)
		crew = "BNB_FA_BW2_Pilot_Tropen";
		typicalCargo[] = { "BNB_FA_BW2_Pilot_Tropen" };
	};

	class BNB_FA_BW2_Tiger_Gunpod_Heavy_Fleck : BNB_FA_BW2_Tiger_Gunpod_Heavy_Winter {
		FACTION(Fleck)
		crew = "BNB_FA_BW2_Pilot_Fleck";
		typicalCargo[] = { "BNB_FA_BW2_Pilot_Fleck" };

		class TransportBackpacks {
			AIR_VEHICLE_BACKPACKS(Fleck)
		};
	};

	////////////////
	// Tiger PARS //
	////////////////
	class BWA3_Tiger_Gunpod_PARS : BWA3_Tiger_base;
	class BNB_FA_BW2_Tiger_Gunpod_PARS_Winter : BWA3_Tiger_Gunpod_PARS {
		FACTION(Winter)
		crew = "BNB_FA_BW2_Pilot_Winter";
		typicalCargo[] = { "BNB_FA_BW2_Pilot_Winter" };


		class TransportMagazines {
			AIR_VEHICLE_MAGAZINES
		};

		class TransportWeapons {
			AIR_VEHICLE_WEAPONS
		};

		class TransportItems {
			AIR_VEHICLE_ITEMS
		};

		class TransportBackpacks {
			AIR_VEHICLE_BACKPACKS(Tropen)
		};
	};

	class BNB_FA_BW2_Tiger_Gunpod_PARS_Tropen : BNB_FA_BW2_Tiger_Gunpod_PARS_Winter {
		FACTION(Tropen)
		crew = "BNB_FA_BW2_Pilot_Tropen";
		typicalCargo[] = { "BNB_FA_BW2_Pilot_Tropen" };
	};

	class BNB_FA_BW2_Tiger_Gunpod_PARS_Fleck : BNB_FA_BW2_Tiger_Gunpod_PARS_Winter {
		FACTION(Fleck)
		crew = "BNB_FA_BW2_Pilot_Fleck";
		typicalCargo[] = { "BNB_FA_BW2_Pilot_Fleck" };

		class TransportBackpacks {
			AIR_VEHICLE_BACKPACKS(Fleck)
		};
	};


	class BWA3_Tiger_RMK_base : BWA3_Tiger_base;

	//////////////////
	// Tiger RMK FZ //
	//////////////////
	class BWA3_Tiger_RMK_FZ : BWA3_Tiger_RMK_base;
	class BNB_FA_BW2_Tiger_RMK_FZ_Winter : BWA3_Tiger_RMK_FZ {
		FACTION(Winter)
		crew = "BNB_FA_BW2_Pilot_Winter";
		typicalCargo[] = { "BNB_FA_BW2_Pilot_Winter" };


		class TransportMagazines {
			AIR_VEHICLE_MAGAZINES
		};

		class TransportWeapons {
			AIR_VEHICLE_WEAPONS
		};

		class TransportItems {
			AIR_VEHICLE_ITEMS
		};

		class TransportBackpacks {
			AIR_VEHICLE_BACKPACKS(Tropen)
		};
	};

	class BNB_FA_BW2_Tiger_RMK_FZ_Tropen : BNB_FA_BW2_Tiger_RMK_FZ_Winter {
		FACTION(Tropen)
		crew = "BNB_FA_BW2_Pilot_Tropen";
		typicalCargo[] = { "BNB_FA_BW2_Pilot_Tropen" };
	};

	class BNB_FA_BW2_Tiger_RMK_FZ_Fleck : BNB_FA_BW2_Tiger_RMK_FZ_Winter {
		FACTION(Fleck)
		crew = "BNB_FA_BW2_Pilot_Fleck";
		typicalCargo[] = { "BNB_FA_BW2_Pilot_Fleck" };

		class TransportBackpacks {
			AIR_VEHICLE_BACKPACKS(Fleck)
		};
	};

	/////////////////////
	// Tiger RMK Heavy //
	/////////////////////
	class BWA3_Tiger_RMK_Heavy : BWA3_Tiger_RMK_base;
	class BNB_FA_BW2_Tiger_RMK_Heavy_Winter : BWA3_Tiger_RMK_Heavy {
		FACTION(Winter)
		crew = "BNB_FA_BW2_Pilot_Winter";
		typicalCargo[] = { "BNB_FA_BW2_Pilot_Winter" };


		class TransportMagazines {
			AIR_VEHICLE_MAGAZINES
		};

		class TransportWeapons {
			AIR_VEHICLE_WEAPONS
		};

		class TransportItems {
			AIR_VEHICLE_ITEMS
		};

		class TransportBackpacks {
			AIR_VEHICLE_BACKPACKS(Tropen)
		};
	};

	class BNB_FA_BW2_Tiger_RMK_Heavy_Tropen : BNB_FA_BW2_Tiger_RMK_Heavy_Winter {
		FACTION(Tropen)
		crew = "BNB_FA_BW2_Pilot_Tropen";
		typicalCargo[] = { "BNB_FA_BW2_Pilot_Tropen" };
	};

	class BNB_FA_BW2_Tiger_RMK_Heavy_Fleck : BNB_FA_BW2_Tiger_RMK_Heavy_Winter {
		FACTION(Fleck)
		crew = "BNB_FA_BW2_Pilot_Fleck";
		typicalCargo[] = { "BNB_FA_BW2_Pilot_Fleck" };

		class TransportBackpacks {
			AIR_VEHICLE_BACKPACKS(Fleck)
		};
	};

	////////////////////
	// Tiger RMK PARS //
	////////////////////
	class BWA3_Tiger_RMK_PARS : BWA3_Tiger_RMK_base;
	class BNB_FA_BW2_Tiger_RMK_PARS_Winter : BWA3_Tiger_RMK_PARS {
		FACTION(Winter)
		crew = "BNB_FA_BW2_Pilot_Winter";
		typicalCargo[] = { "BNB_FA_BW2_Pilot_Winter" };


		class TransportMagazines {
			AIR_VEHICLE_MAGAZINES
		};

		class TransportWeapons {
			AIR_VEHICLE_WEAPONS
		};

		class TransportItems {
			AIR_VEHICLE_ITEMS
		};

		class TransportBackpacks {
			AIR_VEHICLE_BACKPACKS(Tropen)
		};
	};

	class BNB_FA_BW2_Tiger_RMK_PARS_Tropen : BNB_FA_BW2_Tiger_RMK_PARS_Winter {
		FACTION(Tropen)
		crew = "BNB_FA_BW2_Pilot_Tropen";
		typicalCargo[] = { "BNB_FA_BW2_Pilot_Tropen" };
	};

	class BNB_FA_BW2_Tiger_RMK_PARS_Fleck : BNB_FA_BW2_Tiger_RMK_PARS_Winter {
		FACTION(Fleck)
		crew = "BNB_FA_BW2_Pilot_Fleck";
		typicalCargo[] = { "BNB_FA_BW2_Pilot_Fleck" };

		class TransportBackpacks {
			AIR_VEHICLE_BACKPACKS(Fleck)
		};
	};

	/////////////////////////
	// Tiger RMK Universal //
	/////////////////////////
	class BWA3_Tiger_RMK_Universal : BWA3_Tiger_RMK_base;
	class BNB_FA_BW2_Tiger_RMK_Universal_Winter : BWA3_Tiger_RMK_Universal {
		FACTION(Winter)
		crew = "BNB_FA_BW2_Pilot_Winter";
		typicalCargo[] = { "BNB_FA_BW2_Pilot_Winter" };


		class TransportMagazines {
			AIR_VEHICLE_MAGAZINES
		};

		class TransportWeapons {
			AIR_VEHICLE_WEAPONS
		};

		class TransportItems {
			AIR_VEHICLE_ITEMS
		};

		class TransportBackpacks {
			AIR_VEHICLE_BACKPACKS(Tropen)
		};
	};

	class BNB_FA_BW2_Tiger_RMK_Universal_Tropen : BNB_FA_BW2_Tiger_RMK_Universal_Winter {
		FACTION(Tropen)
		crew = "BNB_FA_BW2_Pilot_Tropen";
		typicalCargo[] = { "BNB_FA_BW2_Pilot_Tropen" };
	};

	class BNB_FA_BW2_Tiger_RMK_Universal_Fleck : BNB_FA_BW2_Tiger_RMK_Universal_Winter {
		FACTION(Fleck)
		crew = "BNB_FA_BW2_Pilot_Fleck";
		typicalCargo[] = { "BNB_FA_BW2_Pilot_Fleck" };

		class TransportBackpacks {
			AIR_VEHICLE_BACKPACKS(Fleck)
		};
	};
};
