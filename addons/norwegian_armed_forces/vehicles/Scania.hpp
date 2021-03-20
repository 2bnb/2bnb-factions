class Extended_InitPost_EventHandlers {
	class BNB_FA_NAF_Scania_Utility { ADD_MULTIPLE_PARTS(1,'ACE_Wheel',2,'ACE_Track') };
};

class CfgVehicles {
	/////////////////////////
	// Scania Base Classes //
	/////////////////////////
	class I_Truck_02_transport_F;
	class BNB_FA_NAF_Scania : I_Truck_02_transport_F {
		author = "Christiansen [NTF]";
		scope = 0;
		side = 1;
		displayName = "Scania";
		editorSubcategory = "rhs_EdSubcat_truck";

		class TextureSources {
			class NorwayWoodland {
				displayName="Norway (Woodland)";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Woodland_Front.paa", // Front
					"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Woodland_Canopy.paa", // Canopy
					"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Interior.paa" // Interior
				};
				factions[] = {
					"BNB_FA_NAF_Woodland",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Arctic"
				};
			};
			class NorwayDesert {
				displayName="Norway (Desert)";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Desert_Front.paa", // Front
					"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Desert_Canopy.paa", // Canopy
					"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Interior.paa" // Interior
				};
				factions[] = {
					"BNB_FA_NAF_Woodland",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Arctic"
				};
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
			VEHICLE_AT_AMMO
		};

		class TransportBackpacks {
			VEHICLE_BACKPACKS
		};
	};

	class I_Truck_02_covered_F;
	class BNB_FA_NAF_Scania_Covered : I_Truck_02_covered_F {
		author = "Christiansen [NTF]";
		scope = 0;
		side = 1;
		displayName = "Scania (Covered)";
		editorSubcategory = "rhs_EdSubcat_truck";

		class TextureSources {
			class NorwayWoodland {
				displayName="Norway (Woodland)";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Woodland_Front.paa", // Front
					"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Woodland_Canopy.paa", // Canopy
					"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Interior.paa" // Interior
				};
				factions[] = {
					"BNB_FA_NAF_Woodland",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Arctic"
				};
			};
			class NorwayDesert {
				displayName="Norway (Desert)";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Desert_Front.paa", // Front
					"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Desert_Canopy.paa", // Canopy
					"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Interior.paa" // Interior
				};
				factions[] = {
					"BNB_FA_NAF_Woodland",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Arctic"
				};
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
			VEHICLE_AT_AMMO
		};

		class TransportBackpacks {
			VEHICLE_BACKPACKS
		};
	};

	class I_Truck_02_fuel_F;
	class BNB_FA_NAF_Scania_Fuel : I_Truck_02_fuel_F {
		author = "Christiansen [NTF]";
		scope = 0;
		side = 1;
		displayName = "Scania (Fuel)";
		editorSubcategory = "rhs_EdSubcat_truck";

		class TextureSources {
			class NorwayWoodland {
				displayName="Norway (Woodland)";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Woodland_Front.paa", // Front
					"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Woodland_Fuel.paa", // Fuel Cistern
					"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Interior.paa" // Interior
				};
				factions[] = {
					"BNB_FA_NAF_Woodland",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Arctic"
				};
			};
			class NorwayDesert {
				displayName="Norway (Desert)";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Desert_Front.paa", // Front
					"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Desert_Fuel.paa", // Fuel Cistern
					"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Interior.paa" // Interior
				};
				factions[] = {
					"BNB_FA_NAF_Woodland",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Arctic"
				};
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
			VEHICLE_BACKPACKS
		};
	};

	class I_Truck_02_box_F;
	class BNB_FA_NAF_Scania_Utility : I_Truck_02_box_F {
		author = "Christiansen [NTF]";
		scope = 0;
		side = 1;
		displayName = "Scania (Utility) (Repair/Ammo)";
		editorSubcategory = "rhs_EdSubcat_truck";
		ace_rearm_defaultSupply = 1200;
		ace_repair_canRepair = 1;

		class TextureSources {
			class NorwayWoodland {
				displayName="Norway (Woodland)";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Woodland_Front.paa", // Front
					"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Woodland_Utility.paa", // Canopy
					"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Interior.paa" // Interior
				};
				factions[] = {
					"BNB_FA_NAF_Woodland",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Arctic"
				};
			};
			class NorwayDesert {
				displayName="Norway (Desert)";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Desert_Front.paa", // Front
					"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Desert_Utility.paa", // Canopy
					"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Interior.paa" // Interior
				};
				factions[] = {
					"BNB_FA_NAF_Woodland",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Arctic"
				};
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
			class _xx_Toolkit {
				name = "Toolkit";
				count = 1;
			};
		};

		class TransportBackpacks {
			VEHICLE_BACKPACKS
		};
	};


	class I_Truck_02_medical_F;
	class BNB_FA_NAF_Scania_Medical : I_Truck_02_medical_F {
		author = "Christiansen [NTF]";
		scope = 0;
		side = 1;
		displayName = "Scania (Medical)";
		editorSubcategory = "rhs_EdSubcat_truck";

		class TextureSources {
			class NorwayWoodland {
				displayName="Norway (Woodland)";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Woodland_Front.paa", // Front
					"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Woodland_Canopy.paa", // Canopy
					"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Interior.paa" // Interior
				};
				factions[] = {
					"BNB_FA_NAF_Woodland",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Arctic"
				};
			};
			class NorwayDesert {
				displayName="Norway (Desert)";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Desert_Front.paa", // Front
					"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Desert_Canopy.paa", // Canopy
					"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Interior.paa" // Interior
				};
				factions[] = {
					"BNB_FA_NAF_Woodland",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Arctic"
				};
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
			class _xx_ACE_salineIV {
				name = "ACE_salineIV";
				count = 10;
			};
			class _xx_ACE_salineIV_500 {
				name = "ACE_salineIV_500";
				count = 10;
			};
			class _xx_ACE_salineIV_250 {
				name = "ACE_salineIV_250";
				count = 10;
			};
			class _xx_ACE_elasticBandage {
				name = "ACE_elasticBandage";
				count = 50;
			};
			class _xx_ACE_packingBandage {
				name = "ACE_packingBandage";
				count = 50;
			};
			class _xx_ACE_quikclot {
				name = "ACE_quikclot";
				count = 50;
			};
			class _xx_ACE_tourniquet {
				name = "ACE_tourniquet";
				count = 10;
			};
			class _xx_ACE_epinephrine {
				name = "ACE_epinephrine";
				count = 30;
			};
			class _xx_ACE_morphine {
				name = "ACE_morphine";
				count = 30;
			};
			class _xx_ACE_adenosine {
				name = "ACE_adenosine";
				count = 30;
			};
			class _xx_ACE_bodyBag {
				name = "ACE_bodyBag";
				count = 10;
			};
		};

		class TransportBackpacks {
			VEHICLE_BACKPACKS
		};
	};

	////////////////////////
	// Scania Camouflages //
	////////////////////////
	// Arctic
	class BNB_FA_NAF_Scania_Arctic : BNB_FA_NAF_Scania {
		scope = 2;
		scopeCurator = 2;
		faction = "BNB_FA_NAF_Arctic";
		crew = "BNB_FA_NAF_Rifleman_Arctic";
		typicalCargo[] = { "BNB_FA_NAF_Rifleman_Arctic" };

		hiddenSelectionsTextures[] = {
			"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Woodland_Front.paa", // Front
			"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Woodland_Canopy.paa", // Canopy
			"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Interior.paa" // Interior
		};
	};

	class BNB_FA_NAF_Scania_Covered_Arctic : BNB_FA_NAF_Scania_Covered {
		scope = 2;
		scopeCurator = 2;
		faction = "BNB_FA_NAF_Arctic";
		crew = "BNB_FA_NAF_Rifleman_Arctic";
		typicalCargo[] = { "BNB_FA_NAF_Rifleman_Arctic" };

		hiddenSelectionsTextures[] = {
			"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Woodland_Front.paa", // Front
			"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Woodland_Canopy.paa", // Canopy
			"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Interior.paa" // Interior
		};
	};

	class BNB_FA_NAF_Scania_Fuel_Arctic : BNB_FA_NAF_Scania_Fuel {
		scope = 2;
		scopeCurator = 2;
		faction = "BNB_FA_NAF_Arctic";
		crew = "BNB_FA_NAF_Rifleman_Arctic";
		typicalCargo[] = { "BNB_FA_NAF_Rifleman_Arctic" };

		hiddenSelectionsTextures[] = {
			"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Woodland_Front.paa", // Front
			"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Woodland_Fuel.paa", // Canopy
			"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Interior.paa" // Interior
		};
	};

	class BNB_FA_NAF_Scania_Utility_Arctic : BNB_FA_NAF_Scania_Utility {
		scope = 2;
		scopeCurator = 2;
		faction = "BNB_FA_NAF_Arctic";
		crew = "BNB_FA_NAF_Rifleman_Arctic";
		typicalCargo[] = { "BNB_FA_NAF_Rifleman_Arctic" };

		hiddenSelectionsTextures[] = {
			"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Woodland_Front.paa", // Front
			"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Woodland_Utility.paa", // Canopy
			"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Interior.paa" // Interior
		};
	};

	class BNB_FA_NAF_Scania_Medical_Arctic : BNB_FA_NAF_Scania_Medical {
		scope = 2;
		scopeCurator = 2;
		faction = "BNB_FA_NAF_Arctic";
		crew = "BNB_FA_NAF_Rifleman_Arctic";
		typicalCargo[] = { "BNB_FA_NAF_Rifleman_Arctic" };

		hiddenSelectionsTextures[] = {
			"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Woodland_Front.paa", // Front
			"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Woodland_Canopy.paa", // Canopy
			"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Interior.paa" // Interior
		};
	};


	// Desert
	class BNB_FA_NAF_Scania_Desert : BNB_FA_NAF_Scania {
		scope = 2;
		scopeCurator = 2;
		faction = "BNB_FA_NAF_Desert";
		crew = "BNB_FA_NAF_Rifleman_Desert";
		typicalCargo[] = { "BNB_FA_NAF_Rifleman_Desert" };

		hiddenSelectionsTextures[] = {
			"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Desert_Front.paa", // Front
			"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Desert_Canopy.paa", // Canopy
			"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Interior.paa" // Interior
		};
	};

	class BNB_FA_NAF_Scania_Covered_Desert : BNB_FA_NAF_Scania_Covered {
		scope = 2;
		scopeCurator = 2;
		faction = "BNB_FA_NAF_Desert";
		crew = "BNB_FA_NAF_Rifleman_Desert";
		typicalCargo[] = { "BNB_FA_NAF_Rifleman_Desert" };

		hiddenSelectionsTextures[] = {
			"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Desert_Front.paa", // Front
			"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Desert_Canopy.paa", // Canopy
			"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Interior.paa" // Interior
		};
	};

	class BNB_FA_NAF_Scania_Fuel_Desert : BNB_FA_NAF_Scania_Fuel {
		scope = 2;
		scopeCurator = 2;
		faction = "BNB_FA_NAF_Desert";
		crew = "BNB_FA_NAF_Rifleman_Desert";
		typicalCargo[] = { "BNB_FA_NAF_Rifleman_Desert" };

		hiddenSelectionsTextures[] = {
			"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Desert_Front.paa", // Front
			"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Desert_Fuel.paa", // Canopy
			"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Interior.paa" // Interior
		};
	};

	class BNB_FA_NAF_Scania_Utility_Desert : BNB_FA_NAF_Scania_Utility {
		scope = 2;
		scopeCurator = 2;
		faction = "BNB_FA_NAF_Desert";
		crew = "BNB_FA_NAF_Rifleman_Desert";
		typicalCargo[] = { "BNB_FA_NAF_Rifleman_Desert" };

		hiddenSelectionsTextures[] = {
			"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Desert_Front.paa", // Front
			"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Desert_Utility.paa", // Canopy
			"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Interior.paa" // Interior
		};
	};

	class BNB_FA_NAF_Scania_Medical_Desert : BNB_FA_NAF_Scania_Medical {
		scope = 2;
		scopeCurator = 2;
		faction = "BNB_FA_NAF_Desert";
		crew = "BNB_FA_NAF_Rifleman_Desert";
		typicalCargo[] = { "BNB_FA_NAF_Rifleman_Desert" };

		hiddenSelectionsTextures[] = {
			"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Desert_Front.paa", // Front
			"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Desert_Canopy.paa", // Canopy
			"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Interior.paa" // Interior
		};
	};


	// Scania Woodland
	class BNB_FA_NAF_Scania_Woodland : BNB_FA_NAF_Scania {
		scope = 2;
		scopeCurator = 2;
		faction = "BNB_FA_NAF_Woodland";
		crew = "BNB_FA_NAF_Rifleman_Woodland";
		typicalCargo[] = { "BNB_FA_NAF_Rifleman_Woodland" };

		hiddenSelectionsTextures[] = {
			"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Woodland_Front.paa", // Front
			"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Woodland_Canopy.paa", // Canopy
			"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Interior.paa" // Interior
		};
	};

	class BNB_FA_NAF_Scania_Covered_Woodland : BNB_FA_NAF_Scania_Covered {
		scope = 2;
		scopeCurator = 2;
		faction = "BNB_FA_NAF_Woodland";
		crew = "BNB_FA_NAF_Rifleman_Woodland";
		typicalCargo[] = { "BNB_FA_NAF_Rifleman_Woodland" };

		hiddenSelectionsTextures[] = {
			"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Woodland_Front.paa", // Front
			"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Woodland_Canopy.paa", // Canopy
			"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Interior.paa" // Interior
		};
	};

	class BNB_FA_NAF_Scania_Fuel_Woodland : BNB_FA_NAF_Scania_Fuel {
		scope = 2;
		scopeCurator = 2;
		faction = "BNB_FA_NAF_Woodland";
		crew = "BNB_FA_NAF_Rifleman_Woodland";
		typicalCargo[] = { "BNB_FA_NAF_Rifleman_Woodland" };

		hiddenSelectionsTextures[] = {
			"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Woodland_Front.paa", // Front
			"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Woodland_Fuel.paa", // Canopy
			"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Interior.paa" // Interior
		};
	};

	class BNB_FA_NAF_Scania_Utility_Woodland : BNB_FA_NAF_Scania_Utility {
		scope = 2;
		scopeCurator = 2;
		faction = "BNB_FA_NAF_Woodland";
		crew = "BNB_FA_NAF_Rifleman_Woodland";
		typicalCargo[] = { "BNB_FA_NAF_Rifleman_Woodland" };

		hiddenSelectionsTextures[] = {
			"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Woodland_Front.paa", // Front
			"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Woodland_Utility.paa", // Canopy
			"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Interior.paa" // Interior
		};
	};

	class BNB_FA_NAF_Scania_Medical_Woodland : BNB_FA_NAF_Scania_Medical {
		scope = 2;
		scopeCurator = 2;
		faction = "BNB_FA_NAF_Woodland";
		crew = "BNB_FA_NAF_Rifleman_Woodland";
		typicalCargo[] = { "BNB_FA_NAF_Rifleman_Woodland" };

		hiddenSelectionsTextures[] = {
			"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Woodland_Front.paa", // Front
			"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Woodland_Canopy.paa", // Canopy
			"\x\bnb_fa\norwegian_armed_forces\data\textures\Scania_Interior.paa" // Interior
		};
	};
};
