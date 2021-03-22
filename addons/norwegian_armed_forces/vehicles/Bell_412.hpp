class CfgVehicles {
	///////////////////////////
	// Bell 412 Base Classes //
	///////////////////////////
	class RHS_UH1Y_UNARMED;
	class BNB_FA_NAF_Bell412 : RHS_UH1Y_UNARMED {
		author = "Christiansen [NTF]";
		scope = 0;
		side = 1;
		displayName = "Bell 412 (Transport)";
		weapons[] = {"rhsusf_weap_CMFlareLauncher"};
		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine"};

		hiddenselectionstextures[] = {
			"\x\bnb_fa\norwegian_armed_forces\data\textures\Bell412_Fuselage.paa", // Fuselage
			"\x\bnb_fa\norwegian_armed_forces\data\textures\Bell412_Interior.paa" // Interior
		};
		hiddenselectionsmaterials[] = {"\x\bnb_fa\norwegian_armed_forces\data\textures\Bell412_Fuselage.rvmat"};

		class TextureSources {
			class NorwayStandard {
				displayName="Norway (Standard)";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\norwegian_armed_forces\data\textures\Bell412_Fuselage.paa", // Fuselage
					"\x\bnb_fa\norwegian_armed_forces\data\textures\Bell412_Interior.paa" // Interior
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
			VEHICLE_AT_AMMO
		};

		class TransportBackpacks {
			AIR_VEHICLE_BACKPACKS
		};
	};

	class RHS_UH1Y_d;
	class BNB_FA_NAF_Bell412_Armed : RHS_UH1Y_d {
		author = "Christiansen [NTF]";
		scope = 0;
		side = 1;
		displayName = "Bell 412 (Armed)";

		hiddenselectionstextures[] = {
			"\x\bnb_fa\norwegian_armed_forces\data\textures\Bell412_Fuselage.paa", // Fuselage
			"\x\bnb_fa\norwegian_armed_forces\data\textures\Bell412_Interior.paa" // Interior
		};
		hiddenselectionsmaterials[] = {"\x\bnb_fa\norwegian_armed_forces\data\textures\Bell412_Fuselage.rvmat"};

		class TextureSources {
			class NorwayStandard {
				displayName="Norway (Standard)";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\norwegian_armed_forces\data\textures\Bell412_Fuselage.paa", // Fuselage
					"\x\bnb_fa\norwegian_armed_forces\data\textures\Bell412_Interior.paa" // Interior
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
			VEHICLE_AT_AMMO
		};

		class TransportBackpacks {
			AIR_VEHICLE_BACKPACKS
		};
	};

	//////////////////////////
	// Bell 412 Camouflages //
	//////////////////////////
	// Arctic
	class BNB_FA_NAF_Bell412_Arctic : BNB_FA_NAF_Bell412 {
		scope = 2;
		scopeCurator = 2;
		faction = "BNB_FA_NAF_Arctic";
		crew = "BNB_FA_NAF_Pilot_Arctic";
		typicalCargo[] = { "BNB_FA_NAF_Pilot_Arctic" };
	};

	class BNB_FA_NAF_Bell412_Armed_Arctic : BNB_FA_NAF_Bell412_Armed {
		scope = 2;
		scopeCurator = 2;
		faction = "BNB_FA_NAF_Arctic";
		crew = "BNB_FA_NAF_Pilot_Arctic";
		typicalCargo[] = { "BNB_FA_NAF_Pilot_Arctic" };
	};


	// Desert
	class BNB_FA_NAF_Bell412_Desert : BNB_FA_NAF_Bell412 {
		scope = 2;
		scopeCurator = 2;
		faction = "BNB_FA_NAF_Desert";
		crew = "BNB_FA_NAF_Pilot_Desert";
		typicalCargo[] = { "BNB_FA_NAF_Pilot_Desert" };
	};

	class BNB_FA_NAF_Bell412_Armed_Desert : BNB_FA_NAF_Bell412_Armed {
		scope = 2;
		scopeCurator = 2;
		faction = "BNB_FA_NAF_Desert";
		crew = "BNB_FA_NAF_Pilot_Desert";
		typicalCargo[] = { "BNB_FA_NAF_Pilot_Desert" };
	};


	// Woodland
	class BNB_FA_NAF_Bell412_Woodland : BNB_FA_NAF_Bell412 {
		scope = 2;
		scopeCurator = 2;
		faction = "BNB_FA_NAF_Woodland";
		crew = "BNB_FA_NAF_Pilot_Woodland";
		typicalCargo[] = { "BNB_FA_NAF_Pilot_Woodland" };
	};

	class BNB_FA_NAF_Bell412_Armed_Woodland : BNB_FA_NAF_Bell412_Armed {
		scope = 2;
		scopeCurator = 2;
		faction = "BNB_FA_NAF_Woodland";
		crew = "BNB_FA_NAF_Pilot_Woodland";
		typicalCargo[] = { "BNB_FA_NAF_Pilot_Woodland" };
	};
};
