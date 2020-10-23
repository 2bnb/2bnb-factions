///////////////////////////////
// Leopard More Spare Tracks //
///////////////////////////////
class Extended_InitPost_EventHandlers {
	class BNB_FA_NAF_Leopard { ADD_PARTS(1,'ACE_Track') };
};

class CfgVehicles {
	//////////////////
	// Leopard Base //
	//////////////////
	class I_MBT_03_cannon_F;
	class BNB_FA_NAF_Leopard : I_MBT_03_cannon_F {
		author = "Arend";
		scope = 0;
		side = 1;

		class TextureSources {
			class NorwayArctic {
				displayName="Norway (Arctic)";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\norwegian_armed_forces\data\textures\Leopard_Woodland_Hull.paa",
					"\x\bnb_fa\norwegian_armed_forces\data\textures\Leopard_Woodland_Main_Turret.paa",
					"\x\bnb_fa\norwegian_armed_forces\data\textures\Leopard_Woodland_Com_Turret.paa",
					"\x\bnb_fa\norwegian_armed_forces\data\textures\Leopard_Arctic_Camonet.paa"
				};
				factions[] = {
					"BNB_FA_NAF_Arctic",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Woodland"
				};
			};
			class NorwayDesert {
				displayName="Norway (Desert)";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\norwegian_armed_forces\data\textures\Leopard_Woodland_Hull.paa",
					"\x\bnb_fa\norwegian_armed_forces\data\textures\Leopard_Woodland_Main_Turret.paa",
					"\x\bnb_fa\norwegian_armed_forces\data\textures\Leopard_Woodland_Com_Turret.paa",
					"A3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
				};
				factions[] = {
					"BNB_FA_NAF_Arctic",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Woodland"
				};
			};
			class NorwayWoodland {
				displayName="Norway (Woodland)";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\norwegian_armed_forces\data\textures\Leopard_Woodland_Hull.paa",
					"\x\bnb_fa\norwegian_armed_forces\data\textures\Leopard_Woodland_Main_Turret.paa",
					"\x\bnb_fa\norwegian_armed_forces\data\textures\Leopard_Woodland_Com_Turret.paa",
					"A3\Armor_F\Data\camonet_greenbeige_co.paa"
				};
				factions[] = {
					"BNB_FA_NAF_Arctic",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Woodland"
				};
			};
			class NorwayKompis {
				displayName="Norway (Kompis)";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\norwegian_armed_forces\data\textures\Leopard_Kompis_Hull.paa",
					"\x\bnb_fa\norwegian_armed_forces\data\textures\Leopard_Kompis_Main_Turret.paa",
					"\x\bnb_fa\norwegian_armed_forces\data\textures\Leopard_Kompis_Com_Turret.paa",
					"A3\Armor_F\Data\camonet_greenbeige_co.paa"
				};
				factions[] = {
					"BNB_FA_NAF_Arctic",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Woodland"
				};
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
			ARMOURED_VEHICLE_BACKPACKS
		};
	};

	/////////////////////////
	// Leopard Camouflages //
	/////////////////////////
	class BNB_FA_NAF_Leopard_2SG_Arctic : BNB_FA_NAF_Leopard {
		scope = 2;
		scopeCurator = 2;
		faction = "BNB_FA_NAF_Arctic";
		displayName = "Leopard 2SG";
		crew = "BNB_FA_NAF_Crew_Arctic";
		typicalCargo[] = { "BNB_FA_NAF_Crew_Arctic" };
		animationList[] = {
			"showCamonetHull", 0,
			"showCamonetTurret", 0,
			"showCamonetCannon", 0,
			"showCamonetCannon1", 0
		};

		hiddenSelections[] = {"Camo1","Camo2","Camo3","CamoNet"};
		hiddenSelectionsTextures[] = {
			"\x\bnb_fa\norwegian_armed_forces\data\textures\Leopard_Woodland_Hull.paa", // Hull
			"\x\bnb_fa\norwegian_armed_forces\data\textures\Leopard_Woodland_Main_Turret.paa", // Main Turret
			"\x\bnb_fa\norwegian_armed_forces\data\textures\Leopard_Woodland_Com_Turret.paa", // Commander Turret
			"\x\bnb_fa\norwegian_armed_forces\data\textures\Leopard_Arctic_Camonet.paa"
		};
	};

	class BNB_FA_NAF_Leopard_2SG_Desert : BNB_FA_NAF_Leopard {
		scope = 2;
		scopeCurator = 2;
		faction = "BNB_FA_NAF_Desert";
		displayName = "Leopard 2SG";
		crew = "BNB_FA_NAF_Crew_Desert";
		typicalCargo[] = { "BNB_FA_NAF_Crew_Desert" };
		animationList[] = {
			"showCamonetHull", 0,
			"showCamonetTurret", 0,
			"showCamonetCannon", 0,
			"showCamonetCannon1", 0
		};

		hiddenSelections[] = {"Camo1","Camo2","Camo3","CamoNet"};
		hiddenSelectionsTextures[] = {
			"\x\bnb_fa\norwegian_armed_forces\data\textures\Leopard_Woodland_Hull.paa", // Hull
			"\x\bnb_fa\norwegian_armed_forces\data\textures\Leopard_Woodland_Main_Turret.paa", // Main Turret
			"\x\bnb_fa\norwegian_armed_forces\data\textures\Leopard_Woodland_Com_Turret.paa", // Commander Turret
			"A3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
		};
	};

	class BNB_FA_NAF_Leopard_2SG_Woodland : BNB_FA_NAF_Leopard {
		scope = 2;
		scopeCurator = 2;
		displayName = "Leopard 2SG";
		faction = "BNB_FA_NAF_Woodland";
		crew = "BNB_FA_NAF_Crew_Woodland";
		typicalCargo[] = { "BNB_FA_NAF_Crew_Woodland" };

		hiddenSelections[] = {"Camo1","Camo2","Camo3","CamoNet"};
		hiddenSelectionsTextures[] = {
			"\x\bnb_fa\norwegian_armed_forces\data\textures\Leopard_Woodland_Hull.paa", // Hull
			"\x\bnb_fa\norwegian_armed_forces\data\textures\Leopard_Woodland_Main_Turret.paa", // Main Turret
			"\x\bnb_fa\norwegian_armed_forces\data\textures\Leopard_Woodland_Com_Turret.paa", // Commander Turret
			"A3\Armor_F\Data\camonet_greenbeige_co.paa"
		};
	};

	class BNB_FA_NAF_Leopard_2SG_Kompis_Woodland : BNB_FA_NAF_Leopard {
		author = "Ezpez";
		scope = 2;
		scopeCurator = 2;
		displayName = "Leopard 2SG (Kompis)";
		side = 0;
		faction = "BNB_FA_NAF_Woodland";
		crew = "BNB_FA_NAF_Crew_Woodland";
		typicalCargo[] = { "BNB_FA_NAF_Crew_Woodland" };

		hiddenSelections[] = {"Camo1","Camo2","Camo3","CamoNet"};
		hiddenSelectionsTextures[] = {
			"\x\bnb_fa\norwegian_armed_forces\data\textures\Leopard_Kompis_Hull.paa", // Hull
			"\x\bnb_fa\norwegian_armed_forces\data\textures\Leopard_Kompis_Main_Turret.paa", // Main Turret
			"\x\bnb_fa\norwegian_armed_forces\data\textures\Leopard_Kompis_Com_Turret.paa", // Commander Turret
			"A3\Armor_F\Data\camonet_greenbeige_co.paa"
		};
	};
};
