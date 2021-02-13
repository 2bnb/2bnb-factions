////////////////////////////
// CV90 More Spare Tracks //
////////////////////////////
class Extended_InitPost_EventHandlers {
	class BNB_FA_NAF_CV90 { ADD_PARTS(1,'ACE_Track') };
};

///////////////
// CV90 Ammo //
///////////////
class CfgAmmo {
	class rhs_ammo_3uor6;
	class BNB_FA_NAF_40mm_MP : rhs_ammo_3uor6 {
		indirectHit = 8;
		indirectHitRange = 2;
		displayName = "HEI-T";
		model = "";
	};

	class BNB_FA_NAF_40mm_MP_Tracer_Yellow : BNB_FA_NAF_40mm_MP {
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};

	class BNB_FA_NAF_40mm_MP_Tracer_Red : BNB_FA_NAF_40mm_MP {
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};

	class BNB_FA_NAF_40mm_MP_Tracer_Green : BNB_FA_NAF_40mm_MP {
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	};

	class B_40mm_APFSDS;
	class BNB_FA_NAF_40mm_APFSDS : B_40mm_APFSDS {
		model = "";
	};
};

class CfgMagazines {
	class 40Rnd_40mm_APFSDS_shells;
	class BNB_FA_NAF_48Rnd_40mm_APFSDS_shells : 40Rnd_40mm_APFSDS_shells {
		displayName = "40mm APFSDS";
		displayNameMFDFormat = "APFSDS";
		count = 48;
	};

	class 40Rnd_40mm_APFSDS_Tracer_Green_shells;
	class BNB_FA_NAF_48Rnd_40mm_APFSDS_Tracer_Green_shells : 40Rnd_40mm_APFSDS_Tracer_Green_shells {
		displayName = "40mm APFSDS-T (Green)";
		count = 48;
	};

	class 40Rnd_40mm_APFSDS_Tracer_Red_shells;
	class BNB_FA_NAF_48Rnd_40mm_APFSDS_Tracer_Red_shells : 40Rnd_40mm_APFSDS_Tracer_Red_shells {
		displayName = "40mm APFSDS-T (Red)";
		count = 48;
	};

	class 40Rnd_40mm_APFSDS_Tracer_Yellow_shells;
	class BNB_FA_NAF_48Rnd_40mm_APFSDS_Tracer_Yellow_shells : 40Rnd_40mm_APFSDS_Tracer_Yellow_shells {
		displayName = "40mm APFSDS-T (Yellow)";
		count = 48;
	};

	class rhs_mag_3uor6_125;
	class BNB_FA_NAF_48Rnd_40mm_MP_shells : rhs_mag_3uor6_125 {
		ammo = "BNB_FA_NAF_40mm_MP";
		displayName = "40mm MP";
		displayNameMFDFormat = "MP";
		displayNameShort = "40mm MP";
		count = 48;
		tracersEvery = 3;
	};

	class BNB_FA_NAF_48Rnd_40mm_MP_Tracer_Green_shells : BNB_FA_NAF_48Rnd_40mm_MP_shells {
		ammo = "BNB_FA_NAF_40mm_MP_Tracer_Green";
		displayName = "40mm MP-T (Green)";
		displayNameMFDFormat = "MP-T";
		displayNameShort = "40mm MP-T";
	};

	class BNB_FA_NAF_48Rnd_40mm_MP_Tracer_Red_shells : BNB_FA_NAF_48Rnd_40mm_MP_Tracer_Green_shells {
		ammo = "BNB_FA_NAF_40mm_MP_Tracer_Red";
		displayName = "40mm MP-T (Red)";
	};

	class BNB_FA_NAF_48Rnd_40mm_MP_Tracer_Yellow_shells : BNB_FA_NAF_48Rnd_40mm_MP_Tracer_Green_shells {
		ammo = "BNB_FA_NAF_40mm_MP_Tracer_Yellow";
		displayName = "40mm MP-T (Yellow)";
	};

	class 200Rnd_762x51_Belt;
	class BNB_FA_NAF_200rnd_762_fnmag_coax : 200Rnd_762x51_Belt {
		ammo = "B_762x51_Ball";
		displayName = "200rnd 762x51";
		count = 200;
	};
};

/////////////////
// CV90 Cannon //
/////////////////
class CfgWeapons {
	class player;
	class MGun;
	class AP;
	class HE;

	class autocannon_30mm;
	class BNB_FA_NAF_40mm_boforsl70 : autocannon_30mm {
		muzzles[] = {"HE", "AP"};
		displayName = "Bofors L/70";

		class AP : AP {
			displayName = "Bofors L/70";
			magazines[] = {
				"BNB_FA_NAF_48Rnd_40mm_APFSDS_shells",
				"BNB_FA_NAF_48Rnd_40mm_APFSDS_Tracer_Green_shells",
				"BNB_FA_NAF_48Rnd_40mm_APFSDS_Tracer_Red_shells",
				"BNB_FA_NAF_48Rnd_40mm_APFSDS_Tracer_Yellow_shells"
			};
			magazineReloadTime = 4;

			class player : player {
				reloadTime = 0.17;
			};
		};

		class HE : HE {
			displayName = "Bofors L/70";
			magazines[] = {
				"BNB_FA_NAF_48Rnd_40mm_MP_shells",
				"BNB_FA_NAF_48Rnd_40mm_MP_Tracer_Green_shells",
				"BNB_FA_NAF_48Rnd_40mm_MP_Tracer_Red_shells",
				"BNB_FA_NAF_48Rnd_40mm_MP_Tracer_Yellow_shells"
			};
			magazineReloadTime = 4;

			class player : player {
				reloadTime = 0.17;
			};
		};
	};

	class LMG_coax;
	class BNB_FA_NAF_fnmag_coax : LMG_coax {
		class manual : MGun {
			reloadTime = 0.115;
		};
		displayName = "FN MAG Coaxial";
		magazines[] = {"BNB_FA_NAF_200rnd_762_fnmag_coax"};
	};
};

class CfgVehicles {
	///////////////
	// CV90 Base //
	///////////////
	class Tank;
	class Tank_F: Tank {
		class Turrets;
	};
	class APC_Tracked_03_base_F: Tank_F {
		class Turrets: Turrets {
			class MainTurret;
		};
	};
	class I_APC_tracked_03_base_F: APC_Tracked_03_base_F {};
	class I_APC_tracked_03_cannon_F: I_APC_tracked_03_base_F {};

	class BNB_FA_NAF_CV90 : I_APC_tracked_03_cannon_F {
		author = "Christiansen [NTF]";
		scope = 0;
		side = 1;
		editorSubcategory = "rhs_EdSubcat_ifv";
		animationList[] = {
			"showBags", 0,
			"showBags2", 0,
			"showCamonetHull", 0,
			"showCamonetTurret", 0,
			"showTools", 1,
			"showSLATHull", 0.5,
			"showSLATTurret", 0.5
		};
		transportSoldier = 8;

		class Turrets : Turrets {
			class MainTurret : MainTurret {
				weapons[]={"BNB_FA_NAF_40mm_boforsl70","BNB_FA_NAF_fnmag_coax"};
				magazines[]= {
					"BNB_FA_NAF_48Rnd_40mm_MP_Tracer_Yellow_shells",
					"BNB_FA_NAF_48Rnd_40mm_MP_Tracer_Yellow_shells",
					"BNB_FA_NAF_48Rnd_40mm_MP_Tracer_Yellow_shells",
					"BNB_FA_NAF_48Rnd_40mm_MP_Tracer_Yellow_shells",
					"BNB_FA_NAF_48Rnd_40mm_MP_Tracer_Yellow_shells",
					"BNB_FA_NAF_48Rnd_40mm_APFSDS_Tracer_Yellow_shells",
					"BNB_FA_NAF_48Rnd_40mm_APFSDS_Tracer_Yellow_shells",
					"BNB_FA_NAF_48Rnd_40mm_APFSDS_Tracer_Yellow_shells",
					"BNB_FA_NAF_48Rnd_40mm_APFSDS_Tracer_Yellow_shells",
					"BNB_FA_NAF_48Rnd_40mm_APFSDS_Tracer_Yellow_shells",
					"BNB_FA_NAF_200rnd_762_fnmag_coax",
					"BNB_FA_NAF_200rnd_762_fnmag_coax",
					"BNB_FA_NAF_200rnd_762_fnmag_coax",
					"BNB_FA_NAF_200rnd_762_fnmag_coax",
					"BNB_FA_NAF_200rnd_762_fnmag_coax",
					"BNB_FA_NAF_200rnd_762_fnmag_coax",
					"BNB_FA_NAF_200rnd_762_fnmag_coax",
					"BNB_FA_NAF_200rnd_762_fnmag_coax"
				};
			};
		};

		class TextureSources {
			class NorwayWoodland {
				displayName="Norway (Woodland)";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\norwegian_armed_forces\data\textures\CV90_Woodland_Turret.paa", // Turret
					"\x\bnb_fa\norwegian_armed_forces\data\textures\CV90_Woodland_Hull.paa", // Hull
					"A3\Armor_F\Data\camonet_greenbeige_co.paa", // Camonet
					"\x\bnb_fa\norwegian_armed_forces\data\textures\CV90_Woodland_Cage.paa" // Blast Cage
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
					"\x\bnb_fa\norwegian_armed_forces\data\textures\CV90_Desert_Turret.paa", // Turret
					"\x\bnb_fa\norwegian_armed_forces\data\textures\CV90_Desert_Hull.paa", // Hull
					"A3\Armor_F\Data\camonet_NATO_Desert_CO.paa", // Camonet
					"\x\bnb_fa\norwegian_armed_forces\data\textures\CV90_Desert_Cage.paa" // Blast Cage
				};
				factions[] = {
					"BNB_FA_NAF_Woodland",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Arctic"
				};
			};
			class NorwayArctic {
				displayName="Norway (Arctic)";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\norwegian_armed_forces\data\textures\CV90_Woodland_Turret.paa", // Turret
					"\x\bnb_fa\norwegian_armed_forces\data\textures\CV90_Woodland_Hull.paa", // Hull
					"\x\bnb_fa\norwegian_armed_forces\data\textures\Leopard_Arctic_Camonet.paa", // Camonet
					"\x\bnb_fa\norwegian_armed_forces\data\textures\CV90_Woodland_Cage.paa" // Blast Cage
				};
				factions[] = {
					"BNB_FA_NAF_Woodland",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Arctic"
				};
			};
			// Thor
			class NorwayThorWoodland {
				displayName="Norway (Woodland) - Thor";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\norwegian_armed_forces\data\textures\CV90_Woodland_Turret_Thor.paa", // Turret
					"\x\bnb_fa\norwegian_armed_forces\data\textures\CV90_Woodland_Hull_Thor.paa", // Hull
					"A3\Armor_F\Data\camonet_greenbeige_co.paa", // Camonet
					"\x\bnb_fa\norwegian_armed_forces\data\textures\CV90_Woodland_Cage.paa" // Blast Cage
				};
				factions[] = {
					"BNB_FA_NAF_Woodland",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Arctic"
				};
			};
			class NorwayThorDesert {
				displayName="Norway (Desert) - Thor";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\norwegian_armed_forces\data\textures\CV90_Desert_Turret_Thor.paa", // Turret
					"\x\bnb_fa\norwegian_armed_forces\data\textures\CV90_Desert_Hull_Thor.paa", // Hull
					"A3\Armor_F\Data\camonet_NATO_Desert_CO.paa", // Camonet
					"\x\bnb_fa\norwegian_armed_forces\data\textures\CV90_Desert_Cage.paa" // Blast Cage
				};
				factions[] = {
					"BNB_FA_NAF_Woodland",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Arctic"
				};
			};
			class NorwayThorArctic {
				displayName="Norway (Arctic) - Thor";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\norwegian_armed_forces\data\textures\CV90_Woodland_Turret_Thor.paa", // Turret
					"\x\bnb_fa\norwegian_armed_forces\data\textures\CV90_Woodland_Hull_Thor.paa", // Hull
					"\x\bnb_fa\norwegian_armed_forces\data\textures\Leopard_Arctic_Camonet.paa", // Camonet
					"\x\bnb_fa\norwegian_armed_forces\data\textures\CV90_Woodland_Cage.paa" // Blast Cage
				};
				factions[] = {
					"BNB_FA_NAF_Woodland",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Arctic"
				};
			};
			// Odin
			class NorwayOdinWoodland {
				displayName="Norway (Woodland) - Odin";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\norwegian_armed_forces\data\textures\CV90_Woodland_Turret_Odin.paa", // Turret
					"\x\bnb_fa\norwegian_armed_forces\data\textures\CV90_Woodland_Hull_Odin.paa", // Hull
					"A3\Armor_F\Data\camonet_greenbeige_co.paa", // Camonet
					"\x\bnb_fa\norwegian_armed_forces\data\textures\CV90_Woodland_Cage.paa" // Blast Cage
				};
				factions[] = {
					"BNB_FA_NAF_Woodland",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Arctic"
				};
			};
			class NorwayOdinDesert {
				displayName="Norway (Desert) - Odin";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\norwegian_armed_forces\data\textures\CV90_Desert_Turret_Odin.paa", // Turret
					"\x\bnb_fa\norwegian_armed_forces\data\textures\CV90_Desert_Hull_Odin.paa", // Hull
					"A3\Armor_F\Data\camonet_NATO_Desert_CO.paa", // Camonet
					"\x\bnb_fa\norwegian_armed_forces\data\textures\CV90_Desert_Cage.paa" // Blast Cage
				};
				factions[] = {
					"BNB_FA_NAF_Woodland",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Arctic"
				};
			};
			class NorwayOdinArctic {
				displayName="Norway (Arctic) - Odin";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\norwegian_armed_forces\data\textures\CV90_Woodland_Turret_Odin.paa", // Turret
					"\x\bnb_fa\norwegian_armed_forces\data\textures\CV90_Woodland_Hull_Odin.paa", // Hull
					"\x\bnb_fa\norwegian_armed_forces\data\textures\Leopard_Arctic_Camonet.paa", // Camonet
					"\x\bnb_fa\norwegian_armed_forces\data\textures\CV90_Woodland_Cage.paa" // Blast Cage
				};
				factions[] = {
					"BNB_FA_NAF_Woodland",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Arctic"
				};
			};
			// Mjolnir
			class NorwayMjolnirWoodland {
				displayName="Norway (Woodland) - Mjolnir";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\norwegian_armed_forces\data\textures\CV90_Woodland_Turret_Mjolnir.paa", // Turret
					"\x\bnb_fa\norwegian_armed_forces\data\textures\CV90_Woodland_Hull_Mjolnir.paa", // Hull
					"A3\Armor_F\Data\camonet_greenbeige_co.paa", // Camonet
					"\x\bnb_fa\norwegian_armed_forces\data\textures\CV90_Woodland_Cage.paa" // Blast Cage
				};
				factions[] = {
					"BNB_FA_NAF_Woodland",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Arctic"
				};
			};
			class NorwayMjolnirDesert {
				displayName="Norway (Desert) - Mjolnir";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\norwegian_armed_forces\data\textures\CV90_Desert_Turret_Mjolnir.paa", // Turret
					"\x\bnb_fa\norwegian_armed_forces\data\textures\CV90_Desert_Hull_Mjolnir.paa", // Hull
					"A3\Armor_F\Data\camonet_NATO_Desert_CO.paa", // Camonet
					"\x\bnb_fa\norwegian_armed_forces\data\textures\CV90_Desert_Cage.paa" // Blast Cage
				};
				factions[] = {
					"BNB_FA_NAF_Woodland",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Arctic"
				};
			};
			class NorwayMjolnirArctic {
				displayName="Norway (Arctic) - Mjolnir";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\norwegian_armed_forces\data\textures\CV90_Woodland_Turret_Mjolnir.paa", // Turret
					"\x\bnb_fa\norwegian_armed_forces\data\textures\CV90_Woodland_Hull_Mjolnir.paa", // Hull
					"\x\bnb_fa\norwegian_armed_forces\data\textures\Leopard_Arctic_Camonet.paa", // Camonet
					"\x\bnb_fa\norwegian_armed_forces\data\textures\CV90_Woodland_Cage.paa" // Blast Cage
				};
				factions[] = {
					"BNB_FA_NAF_Woodland",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Arctic"
				};
			};
			// Heimdall
			class NorwayHeimdallWoodland {
				displayName="Norway (Woodland) - Heimdall";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\norwegian_armed_forces\data\textures\CV90_Woodland_Turret_Heimdall.paa", // Turret
					"\x\bnb_fa\norwegian_armed_forces\data\textures\CV90_Woodland_Hull_Heimdall.paa", // Hull
					"A3\Armor_F\Data\camonet_greenbeige_co.paa", // Camonet
					"\x\bnb_fa\norwegian_armed_forces\data\textures\CV90_Woodland_Cage.paa" // Blast Cage
				};
				factions[] = {
					"BNB_FA_NAF_Woodland",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Arctic"
				};
			};
			class NorwayHeimdallDesert {
				displayName="Norway (Desert) - Heimdall";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\norwegian_armed_forces\data\textures\CV90_Desert_Turret_Heimdall.paa", // Turret
					"\x\bnb_fa\norwegian_armed_forces\data\textures\CV90_Desert_Hull_Heimdall.paa", // Hull
					"A3\Armor_F\Data\camonet_NATO_Desert_CO.paa", // Camonet
					"\x\bnb_fa\norwegian_armed_forces\data\textures\CV90_Desert_Cage.paa" // Blast Cage
				};
				factions[] = {
					"BNB_FA_NAF_Woodland",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Arctic"
				};
			};
			class NorwayHeimdallArctic {
				displayName="Norway (Arctic) - Heimdall";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\norwegian_armed_forces\data\textures\CV90_Woodland_Turret_Heimdall.paa", // Turret
					"\x\bnb_fa\norwegian_armed_forces\data\textures\CV90_Woodland_Hull_Heimdall.paa", // Hull
					"\x\bnb_fa\norwegian_armed_forces\data\textures\Leopard_Arctic_Camonet.paa", // Camonet
					"\x\bnb_fa\norwegian_armed_forces\data\textures\CV90_Woodland_Cage.paa" // Blast Cage
				};
				factions[] = {
					"BNB_FA_NAF_Woodland",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Arctic"
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

	//////////////////////
	// CV90 Camouflages //
	//////////////////////
	class BNB_FA_NAF_CV90_Arctic : BNB_FA_NAF_CV90 {
		scope = 2;
		scopeCurator = 2;
		faction = "BNB_FA_NAF_Arctic";
		displayName = "CV90";
		crew = "BNB_FA_NAF_Crew_Arctic";
		typicalCargo[] = { "BNB_FA_NAF_Crew_Arctic" };
		animationList[] = {
			"showBags", 0,
			"showBags2", 0,
			"showCamonetHull", 1,
			"showCamonetTurret", 1,
			"showTools", 1,
			"showSLATHull", 0.5,
			"showSLATTurret", 0.5
		};

		hiddenSelections[] = {"Camo1","Camo2","CamoNet","CamoSlat"};
		hiddenSelectionsTextures[] = {
			"\x\bnb_fa\norwegian_armed_forces\data\textures\CV90_Woodland_Turret.paa", // Turret
			"\x\bnb_fa\norwegian_armed_forces\data\textures\CV90_Woodland_Hull.paa", // Hull
			"\x\bnb_fa\norwegian_armed_forces\data\textures\Leopard_Arctic_Camonet.paa", // Camonet
			"\x\bnb_fa\norwegian_armed_forces\data\textures\CV90_Woodland_Cage.paa" // Blast Cage
		};
	};

	class BNB_FA_NAF_CV90_Desert : BNB_FA_NAF_CV90 {
		scope = 2;
		scopeCurator = 2;
		faction = "BNB_FA_NAF_Desert";
		displayName = "CV90";
		crew = "BNB_FA_NAF_Crew_Desert";
		typicalCargo[] = { "BNB_FA_NAF_Crew_Desert" };

		hiddenSelections[] = {"Camo1","Camo2","CamoNet","CamoSlat"};
		hiddenSelectionsTextures[] = {
			"\x\bnb_fa\norwegian_armed_forces\data\textures\CV90_Desert_Turret.paa", // Turret
			"\x\bnb_fa\norwegian_armed_forces\data\textures\CV90_Desert_Hull.paa", // Hull
			"A3\Armor_F\Data\camonet_NATO_Desert_CO.paa", // Camonet
			"\x\bnb_fa\norwegian_armed_forces\data\textures\CV90_Desert_Cage.paa" // Blast Cage
		};
	};

	class BNB_FA_NAF_CV90_Woodland : BNB_FA_NAF_CV90 {
		scope = 2;
		scopeCurator = 2;
		faction = "BNB_FA_NAF_Woodland";
		displayName = "CV90";
		crew = "BNB_FA_NAF_Crew_Woodland";
		typicalCargo[] = { "BNB_FA_NAF_Crew_Woodland" };

		hiddenSelections[] = {"Camo1","Camo2","CamoNet","CamoSlat"};
		hiddenSelectionsTextures[] = {
			"\x\bnb_fa\norwegian_armed_forces\data\textures\CV90_Woodland_Turret.paa", // Turret
			"\x\bnb_fa\norwegian_armed_forces\data\textures\CV90_Woodland_Hull.paa", // Hull
			"A3\Armor_F\Data\camonet_greenbeige_co.paa", // Camonet
			"\x\bnb_fa\norwegian_armed_forces\data\textures\CV90_Woodland_Cage.paa" // Blast Cage
		};
	};
};
