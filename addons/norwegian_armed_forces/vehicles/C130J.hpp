class CfgVehicles {
	////////////////////////
	// C130J Base Classes //
	////////////////////////
	class RHS_C130J;
	class BNB_FA_NAF_C130J : RHS_C130J {
		author = "Christiansen [NTF]";
		scope = 0;
		side = 1;
		displayName = "C-130J Hercules";
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"300Rnd_CMFlare_Chaff_Magazine", "300Rnd_CMFlare_Chaff_Magazine"};

		hiddenSelectionsTextures[] = {
			"\x\bnb_fa\norwegian_armed_forces\data\textures\C130J_Fuselage.paa", // Fuselage
			"\x\bnb_fa\norwegian_armed_forces\data\textures\C130J_Wings.paa" // Wings
		};

		class TextureSources {
			class NorwayStandard {
				displayName="Norway (Standard)";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\norwegian_armed_forces\data\textures\C130J_Fuselage.paa", // Fuselage
					"\x\bnb_fa\norwegian_armed_forces\data\textures\C130J_Wings.paa" // Wings
				};
				factions[] = {
					"BNB_FA_NAF_Woodland",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Arctic"
				};
			};
		};

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
			AIR_VEHICLE_BACKPACKS
			class _xx_B_Parachute {
				backpack = "B_Parachute";
				count = 25;
			};
		};
	};

	class RHS_C130J_Cargo;
	class BNB_FA_NAF_C130J_Cargo : RHS_C130J_Cargo {
		author = "Christiansen [NTF]";
		scope = 0;
		side = 1;
		displayName = "C-130J Hercules (Cargo)";
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"300Rnd_CMFlare_Chaff_Magazine", "300Rnd_CMFlare_Chaff_Magazine"};

		hiddenSelectionsTextures[] = {
			"\x\bnb_fa\norwegian_armed_forces\data\textures\C130J_Fuselage.paa", // Fuselage
			"\x\bnb_fa\norwegian_armed_forces\data\textures\C130J_Wings.paa" // Wings
		};

		class TextureSources {
			class NorwayStandard {
				displayName="Norway (Standard)";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\norwegian_armed_forces\data\textures\C130J_Fuselage.paa", // Fuselage
					"\x\bnb_fa\norwegian_armed_forces\data\textures\C130J_Wings.paa" // Wings
				};
				factions[] = {
					"BNB_FA_NAF_Woodland",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Arctic"
				};
			};
		};

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
			AIR_VEHICLE_BACKPACKS
			class _xx_B_Parachute {
				backpack = "B_Parachute";
				count = 25;
			};
		};
	};

	///////////////////////
	// C130J Camouflages //
	///////////////////////
	// Arctic
	class BNB_FA_NAF_C130J_Arctic : BNB_FA_NAF_C130J {
		scope = 2;
		scopeCurator = 2;
		faction = "BNB_FA_NAF_Arctic";
		crew = "BNB_FA_NAF_Pilot_Arctic";
		typicalCargo[] = { "BNB_FA_NAF_Pilot_Arctic" };
	};

	class BNB_FA_NAF_C130J_Cargo_Arctic : BNB_FA_NAF_C130J_Cargo {
		scope = 2;
		scopeCurator = 2;
		faction = "BNB_FA_NAF_Arctic";
		crew = "BNB_FA_NAF_Pilot_Arctic";
		typicalCargo[] = { "BNB_FA_NAF_Pilot_Arctic" };
	};


	// Desert
	class BNB_FA_NAF_C130J_Desert : BNB_FA_NAF_C130J {
		scope = 2;
		scopeCurator = 2;
		faction = "BNB_FA_NAF_Desert";
		crew = "BNB_FA_NAF_Pilot_Desert";
		typicalCargo[] = { "BNB_FA_NAF_Pilot_Desert" };
	};

	class BNB_FA_NAF_C130J_Cargo_Desert : BNB_FA_NAF_C130J_Cargo {
		scope = 2;
		scopeCurator = 2;
		faction = "BNB_FA_NAF_Desert";
		crew = "BNB_FA_NAF_Pilot_Desert";
		typicalCargo[] = { "BNB_FA_NAF_Pilot_Desert" };
	};


	// Woodland
	class BNB_FA_NAF_C130J_Woodland : BNB_FA_NAF_C130J {
		scope = 2;
		scopeCurator = 2;
		faction = "BNB_FA_NAF_Woodland";
		crew = "BNB_FA_NAF_Pilot_Woodland";
		typicalCargo[] = { "BNB_FA_NAF_Pilot_Woodland" };
	};

	class BNB_FA_NAF_C130J_Cargo_Woodland : BNB_FA_NAF_C130J_Cargo {
		scope = 2;
		scopeCurator = 2;
		faction = "BNB_FA_NAF_Woodland";
		crew = "BNB_FA_NAF_Pilot_Woodland";
		typicalCargo[] = { "BNB_FA_NAF_Pilot_Woodland" };
	};
};
