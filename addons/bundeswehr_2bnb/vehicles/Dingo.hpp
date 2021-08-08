class CfgVehicles {
	//////////////
	// Dingo M2 //
	//////////////
	class BWA3_Dingo2_base;
	class BWA3_Dingo2_flw200_m2_base : BWA3_Dingo2_base {
		class TextureSources;
	};
	class BWA3_Dingo2_FLW200_M2_Tropen : BWA3_Dingo2_flw200_m2_base {
		class TextureSources : TextureSources {
			class Fleck;
			class Tropen1;
			class Tropen3;
		};
	};
	class BNB_FA_BW2_Dingo_M2 : BWA3_Dingo2_FLW200_M2_Tropen {
		scope = 0;
		side = 1;
		displayName = "Dingo (M2)";

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
			class Tropen3 : Tropen3 {
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
			VEHICLE_AT_AMMO_EXTENDED
		};

		class TransportBackpacks {
			VEHICLE_BACKPACKS(Tropen)
		};
	};

	class BNB_FA_BW2_Dingo_M2_Winter : BNB_FA_BW2_Dingo_M2 {
		scope = 2;
		scopeCurator = 2;
		FACTION(Winter)
		crew = "BNB_FA_BW2_Rifleman_Winter";
		typicalCargo[] = { "BNB_FA_BW2_Rifleman_Winter" };
		textureList[] = {"Fleck",1};
	};

	class BNB_FA_BW2_Dingo_M2_Tropen : BNB_FA_BW2_Dingo_M2 {
		scope = 2;
		scopeCurator = 2;
		FACTION(Tropen)
		crew = "BNB_FA_BW2_Rifleman_Tropen";
		typicalCargo[] = { "BNB_FA_BW2_Rifleman_Tropen" };
		textureList[] = {"Tropen1",0.5,"Tropen3",0.5};
	};

	class BNB_FA_BW2_Dingo_M2_Fleck : BNB_FA_BW2_Dingo_M2 {
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


	//////////////////
	// Dingo M2/ECM //
	//////////////////
	class BWA3_Dingo2_flw200_m2_cg13_base : BWA3_Dingo2_flw200_m2_base;
	class BWA3_Dingo2_FLW200_M2_CG13_Tropen : BWA3_Dingo2_flw200_m2_cg13_base {
		class TextureSources : TextureSources {
			class Fleck;
			class Tropen1;
			class Tropen1_1;
			class Tropen3;
			class Tropen3_1;
		};
	};
	class BNB_FA_BW2_Dingo_M2_ECM : BWA3_Dingo2_FLW200_M2_CG13_Tropen {
		scope = 0;
		side = 1;
		displayName = "Dingo (M2/ECM)";

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
			VEHICLE_AT_AMMO_EXTENDED
		};

		class TransportBackpacks {
			VEHICLE_BACKPACKS(Tropen)
		};
	};

	class BNB_FA_BW2_Dingo_M2_ECM_Winter : BNB_FA_BW2_Dingo_M2_ECM {
		scope = 2;
		scopeCurator = 2;
		FACTION(Winter)
		crew = "BNB_FA_BW2_Rifleman_Winter";
		typicalCargo[] = { "BNB_FA_BW2_Rifleman_Winter" };
		textureList[] = {"Fleck",1};
	};

	class BNB_FA_BW2_Dingo_M2_ECM_Tropen : BNB_FA_BW2_Dingo_M2_ECM {
		scope = 2;
		scopeCurator = 2;
		FACTION(Tropen)
		crew = "BNB_FA_BW2_Rifleman_Tropen";
		typicalCargo[] = { "BNB_FA_BW2_Rifleman_Tropen" };
		textureList[] = {"Tropen1",0.25,"Tropen1_1",0.25,"Tropen3",0.25,"Tropen3_1",0.25};
	};

	class BNB_FA_BW2_Dingo_M2_ECM_Fleck : BNB_FA_BW2_Dingo_M2_ECM {
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


	///////////////
	// Dingo MG3 //
	///////////////
	class BWA3_Dingo2_flw100_mg3_base : BWA3_Dingo2_base {
		class TextureSources;
	};
	class BWA3_Dingo2_FLW100_MG3_Tropen : BWA3_Dingo2_flw100_mg3_base {
		class TextureSources : TextureSources {
			class Fleck;
			class Tropen1;
			class Tropen3;
		};
	};
	class BNB_FA_BW2_Dingo_MG3 : BWA3_Dingo2_FLW100_MG3_Tropen {
		scope = 0;
		side = 1;
		displayName = "Dingo (MG3)";

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
			class Tropen3 : Tropen3 {
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
			VEHICLE_AT_AMMO_EXTENDED
		};

		class TransportBackpacks {
			VEHICLE_BACKPACKS(Tropen)
		};
	};

	class BNB_FA_BW2_Dingo_MG3_Winter : BNB_FA_BW2_Dingo_MG3 {
		scope = 2;
		scopeCurator = 2;
		FACTION(Winter)
		crew = "BNB_FA_BW2_Rifleman_Winter";
		typicalCargo[] = { "BNB_FA_BW2_Rifleman_Winter" };
		textureList[] = {"Fleck",1};
	};

	class BNB_FA_BW2_Dingo_MG3_Tropen : BNB_FA_BW2_Dingo_MG3 {
		scope = 2;
		scopeCurator = 2;
		FACTION(Tropen)
		crew = "BNB_FA_BW2_Rifleman_Tropen";
		typicalCargo[] = { "BNB_FA_BW2_Rifleman_Tropen" };
		textureList[] = {"Tropen1",0.5,"Tropen3",0.5};
	};

	class BNB_FA_BW2_Dingo_MG3_Fleck : BNB_FA_BW2_Dingo_MG3 {
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


	///////////////////
	// Dingo MG3/ECM //
	///////////////////
	class BWA3_Dingo2_flw100_mg3_cg13_base : BWA3_Dingo2_flw100_mg3_base;
	class BWA3_Dingo2_FLW100_MG3_CG13_Tropen : BWA3_Dingo2_flw100_mg3_cg13_base {
		class TextureSources : TextureSources {
			class Fleck;
			class Tropen1;
			class Tropen1_1;
			class Tropen3;
			class Tropen3_1;
		};
	};
	class BNB_FA_BW2_Dingo_MG3_ECM : BWA3_Dingo2_FLW100_MG3_CG13_Tropen {
		scope = 0;
		side = 1;
		displayName = "Dingo (MG3/ECM)";

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
			VEHICLE_AT_AMMO_EXTENDED
		};

		class TransportBackpacks {
			VEHICLE_BACKPACKS(Tropen)
		};
	};

	class BNB_FA_BW2_Dingo_MG3_ECM_Winter : BNB_FA_BW2_Dingo_MG3_ECM {
		scope = 2;
		scopeCurator = 2;
		FACTION(Winter)
		crew = "BNB_FA_BW2_Rifleman_Winter";
		typicalCargo[] = { "BNB_FA_BW2_Rifleman_Winter" };
		textureList[] = {"Fleck",1};
	};

	class BNB_FA_BW2_Dingo_MG3_ECM_Tropen : BNB_FA_BW2_Dingo_MG3_ECM {
		scope = 2;
		scopeCurator = 2;
		FACTION(Tropen)
		crew = "BNB_FA_BW2_Rifleman_Tropen";
		typicalCargo[] = { "BNB_FA_BW2_Rifleman_Tropen" };
		textureList[] = {"Tropen1",0.25,"Tropen1_1",0.25,"Tropen3",0.25,"Tropen3_1",0.25};
	};

	class BNB_FA_BW2_Dingo_MG3_ECM_Fleck : BNB_FA_BW2_Dingo_MG3_ECM {
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


	///////////////
	// Dingo GMG //
	///////////////
	class BWA3_Dingo2_flw200_gmw_base : BWA3_Dingo2_base {
		class TextureSources;
	};
	class BWA3_Dingo2_FLW200_GMW_Tropen : BWA3_Dingo2_flw200_gmw_base {
		class TextureSources : TextureSources {
			class Fleck;
			class Tropen1;
			class Tropen3;
		};
	};
	class BNB_FA_BW2_Dingo_GMG : BWA3_Dingo2_FLW200_GMW_Tropen {
		scope = 0;
		side = 1;
		displayName = "Dingo (GMG)";

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
			class Tropen3 : Tropen3 {
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
			VEHICLE_AT_AMMO_EXTENDED
		};

		class TransportBackpacks {
			VEHICLE_BACKPACKS(Tropen)
		};
	};

	class BNB_FA_BW2_Dingo_GMG_Winter : BNB_FA_BW2_Dingo_GMG {
		scope = 2;
		scopeCurator = 2;
		FACTION(Winter)
		crew = "BNB_FA_BW2_Rifleman_Winter";
		typicalCargo[] = { "BNB_FA_BW2_Rifleman_Winter" };
		textureList[] = {"Fleck",1};
	};

	class BNB_FA_BW2_Dingo_GMG_Tropen : BNB_FA_BW2_Dingo_GMG {
		scope = 2;
		scopeCurator = 2;
		FACTION(Tropen)
		crew = "BNB_FA_BW2_Rifleman_Tropen";
		typicalCargo[] = { "BNB_FA_BW2_Rifleman_Tropen" };
		textureList[] = {"Tropen1",0.5,"Tropen3",0.5};
	};

	class BNB_FA_BW2_Dingo_GMG_Fleck : BNB_FA_BW2_Dingo_GMG {
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


	///////////////////
	// Dingo GMG/ECM //
	///////////////////
	class BWA3_Dingo2_flw200_gmw_cg13_base : BWA3_Dingo2_flw200_gmw_base;
	class BWA3_Dingo2_FLW200_GMW_CG13_Tropen : BWA3_Dingo2_flw200_gmw_cg13_base {
		class TextureSources : TextureSources {
			class Fleck;
			class Tropen1;
			class Tropen1_1;
			class Tropen3;
			class Tropen3_1;
		};
	};
	class BNB_FA_BW2_Dingo_GMG_ECM : BWA3_Dingo2_FLW200_GMW_CG13_Tropen {
		scope = 0;
		side = 1;
		displayName = "Dingo (GMG/ECM)";

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
			VEHICLE_AT_AMMO_EXTENDED
		};

		class TransportBackpacks {
			VEHICLE_BACKPACKS(Tropen)
		};
	};

	class BNB_FA_BW2_Dingo_GMG_ECM_Winter : BNB_FA_BW2_Dingo_GMG_ECM {
		scope = 2;
		scopeCurator = 2;
		FACTION(Winter)
		crew = "BNB_FA_BW2_Rifleman_Winter";
		typicalCargo[] = { "BNB_FA_BW2_Rifleman_Winter" };
		textureList[] = {"Fleck",1};
	};

	class BNB_FA_BW2_Dingo_GMG_ECM_Tropen : BNB_FA_BW2_Dingo_GMG_ECM {
		scope = 2;
		scopeCurator = 2;
		FACTION(Tropen)
		crew = "BNB_FA_BW2_Rifleman_Tropen";
		typicalCargo[] = { "BNB_FA_BW2_Rifleman_Tropen" };
		textureList[] = {"Tropen1",0.25,"Tropen1_1",0.25,"Tropen3",0.25,"Tropen3_1",0.25};
	};

	class BNB_FA_BW2_Dingo_GMG_ECM_Fleck : BNB_FA_BW2_Dingo_GMG_ECM {
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


