class Extended_InitPost_EventHandlers {
	class BNB_FA_BW2_Fuchs_Engineer { ADD_MULTIPLE_PARTS(1,'ACE_Wheel',2,'ACE_Track') };
};

class CfgVehicles {
	/////////////////////////
	// Fuchs Base Classes //
	/////////////////////////
	// Standard
	class Redd_Tank_Fuchs_1A4_Jg_Tropentarn;
	class BNB_FA_BW2_Fuchs : Redd_Tank_Fuchs_1A4_Jg_Tropentarn {
		scope = 0;
		side = 1;
		displayName = "Fuchs";
		editorSubcategory = "EdSubcat_APCs";

		class TransportMagazines {
			ARMOURED_VEHICLE_MAGAZINES
		};

		class TransportWeapons {
			ARMOURED_VEHICLE_WEAPONS
		};

		class TransportItems {
			ARMOURED_VEHICLE_ITEMS
			VEHICLE_AT_AMMO_EXTENDED
		};

		class TransportBackpacks {
			ARMOURED_VEHICLE_BACKPACKS(Tropen)
		};
	};

	// Milan
	class Redd_Tank_Fuchs_1A4_Jg_Milan_Tropentarn;
	class BNB_FA_BW2_Fuchs_Milan : Redd_Tank_Fuchs_1A4_Jg_Milan_Tropentarn {
		scope = 0;
		side = 1;
		displayName = "Fuchs (Milan)";
		editorSubcategory = "EdSubcat_APCs";

		class TransportMagazines {
			ARMOURED_VEHICLE_MAGAZINES
		};

		class TransportWeapons {
			ARMOURED_VEHICLE_WEAPONS
		};

		class TransportItems {
			ARMOURED_VEHICLE_ITEMS
			VEHICLE_AT_AMMO_EXTENDED
		};

		class TransportBackpacks {
			ARMOURED_VEHICLE_BACKPACKS(Tropen)
		};
	};

	// Engineer
	class Redd_Tank_Fuchs_1A4_Pi_Tropentarn;
	class BNB_FA_BW2_Fuchs_Engineer : Redd_Tank_Fuchs_1A4_Pi_Tropentarn {
		scope = 0;
		side = 1;
		displayName = "Fuchs (Engineer)";
		editorSubcategory = "EdSubcat_APCs";
		ace_repair_canRepair = 1;

		class TransportMagazines {
			ARMOURED_VEHICLE_MAGAZINES
		};

		class TransportWeapons {
			ARMOURED_VEHICLE_WEAPONS
		};

		class TransportItems {
			ARMOURED_VEHICLE_ITEMS
			VEHICLE_AT_AMMO_EXTENDED
		};

		class TransportBackpacks {
			ARMOURED_VEHICLE_BACKPACKS(Tropen)
		};
	};

	// Medic
	class Redd_Tank_Fuchs_1A4_San_Tropentarn;
	class BNB_FA_BW2_Fuchs_Medic : Redd_Tank_Fuchs_1A4_San_Tropentarn {
		scope = 0;
		side = 1;
		displayName = "Fuchs (Medic)";
		editorSubcategory = "EdSubcat_APCs";

		class TransportMagazines {
			ARMOURED_VEHICLE_MAGAZINES
		};

		class TransportWeapons {
			ARMOURED_VEHICLE_WEAPONS
		};

		class TransportItems {
			ARMOURED_VEHICLE_ITEMS
			VEHICLE_AT_AMMO_EXTENDED
		};

		class TransportBackpacks {
			ARMOURED_VEHICLE_BACKPACKS(Tropen)
		};
	};

	////////////////////////
	// Fuchs Camouflages //
	////////////////////////
	// Winter
	class BNB_FA_BW2_Fuchs_Winter : BNB_FA_BW2_Fuchs {
		scope = 2;
		scopeCurator = 2;
		FACTION(Winter)
		crew = "BNB_FA_BW2_Rifleman_Winter";
		typicalCargo[] = { "BNB_FA_BW2_Rifleman_Winter" };

		hiddenSelectionsTextures[] = {
			"\Redd_Tank_Fuchs_1A4\data\Redd_Tank_Fuchs_1A4_W_Wanne_blend_co.paa",
			"\Redd_Tank_Fuchs_1A4\data\Redd_Tank_Fuchs_1A4_W_Anbauteile_blend_co.paa",
			"\Redd_Tank_Fuchs_1A4\data\Redd_Tank_Fuchs_1A4_W_Reifen_blend_co.paa"
		};
	};

	class BNB_FA_BW2_Fuchs_Milan_Winter : BNB_FA_BW2_Fuchs_Milan {
		scope = 2;
		scopeCurator = 2;
		FACTION(Winter)
		crew = "BNB_FA_BW2_Rifleman_Winter";
		typicalCargo[] = { "BNB_FA_BW2_Rifleman_Winter" };

		hiddenSelectionsTextures[] = {
			"\Redd_Tank_Fuchs_1A4\data\Redd_Tank_Fuchs_1A4_W_Wanne_blend_co.paa",
			"\Redd_Tank_Fuchs_1A4\data\Redd_Tank_Fuchs_1A4_W_Anbauteile_blend_co.paa",
			"\Redd_Tank_Fuchs_1A4\data\Redd_Tank_Fuchs_1A4_W_Reifen_blend_co.paa"
		};
	};

	class BNB_FA_BW2_Fuchs_Engineer_Winter : BNB_FA_BW2_Fuchs_Engineer {
		scope = 2;
		scopeCurator = 2;
		FACTION(Winter)
		crew = "BNB_FA_BW2_Rifleman_Winter";
		typicalCargo[] = { "BNB_FA_BW2_Rifleman_Winter" };

		hiddenSelectionsTextures[] = {
			"\Redd_Tank_Fuchs_1A4\data\Redd_Tank_Fuchs_1A4_W_Wanne_blend_co.paa",
			"\Redd_Tank_Fuchs_1A4\data\Redd_Tank_Fuchs_1A4_W_Anbauteile_blend_co.paa",
			"\Redd_Tank_Fuchs_1A4\data\Redd_Tank_Fuchs_1A4_W_Reifen_blend_co.paa",
			"\Redd_Tank_Fuchs_1A4\data\Redd_Tank_Fuchs_1A4_W_Anbauteile_Pi_blend_co.paa"
		};
	};

	class BNB_FA_BW2_Fuchs_Medic_Winter : BNB_FA_BW2_Fuchs_Medic {
		scope = 2;
		scopeCurator = 2;
		FACTION(Winter)
		crew = "BNB_FA_BW2_Rifleman_Winter";
		typicalCargo[] = { "BNB_FA_BW2_Rifleman_Winter" };

		hiddenSelectionsTextures[] = {
			"\Redd_Tank_Fuchs_1A4\data\Redd_Tank_Fuchs_1A4_W_San_Wanne_blend_co.paa",
			"\Redd_Tank_Fuchs_1A4\data\Redd_Tank_Fuchs_1A4_W_San_Anbauteile_blend_co.paa",
			"\Redd_Tank_Fuchs_1A4\data\Redd_Tank_Fuchs_1A4_W_Reifen_blend_co.paa"
		};
	};


	// Tropentarn
	class BNB_FA_BW2_Fuchs_Tropen : BNB_FA_BW2_Fuchs {
		scope = 2;
		scopeCurator = 2;
		FACTION(Tropen)
		crew = "BNB_FA_BW2_Rifleman_Tropen";
		typicalCargo[] = { "BNB_FA_BW2_Rifleman_Tropen" };

		hiddenSelectionsTextures[] = {
			"\Redd_Tank_Fuchs_1A4\data\Redd_Tank_Fuchs_1A4_D_Wanne_blend_co.paa",
			"\Redd_Tank_Fuchs_1A4\data\Redd_Tank_Fuchs_1A4_D_Anbauteile_blend_co.paa",
			"\Redd_Tank_Fuchs_1A4\data\Redd_Tank_Fuchs_1A4_D_Reifen_blend_co.paa"
		};
	};

	class BNB_FA_BW2_Fuchs_Milan_Tropen : BNB_FA_BW2_Fuchs_Milan {
		scope = 2;
		scopeCurator = 2;
		FACTION(Tropen)
		crew = "BNB_FA_BW2_Rifleman_Tropen";
		typicalCargo[] = { "BNB_FA_BW2_Rifleman_Tropen" };

		hiddenSelectionsTextures[] = {
			"\Redd_Tank_Fuchs_1A4\data\Redd_Tank_Fuchs_1A4_D_Wanne_blend_co.paa",
			"\Redd_Tank_Fuchs_1A4\data\Redd_Tank_Fuchs_1A4_D_Anbauteile_blend_co.paa",
			"\Redd_Tank_Fuchs_1A4\data\Redd_Tank_Fuchs_1A4_D_Reifen_blend_co.paa"
		};
	};

	class BNB_FA_BW2_Fuchs_Engineer_Tropen : BNB_FA_BW2_Fuchs_Engineer {
		scope = 2;
		scopeCurator = 2;
		FACTION(Tropen)
		crew = "BNB_FA_BW2_Rifleman_Tropen";
		typicalCargo[] = { "BNB_FA_BW2_Rifleman_Tropen" };

		hiddenSelectionsTextures[] = {
			"\Redd_Tank_Fuchs_1A4\data\Redd_Tank_Fuchs_1A4_D_Wanne_blend_co.paa",
			"\Redd_Tank_Fuchs_1A4\data\Redd_Tank_Fuchs_1A4_D_Anbauteile_blend_co.paa",
			"\Redd_Tank_Fuchs_1A4\data\Redd_Tank_Fuchs_1A4_D_Reifen_blend_co.paa",
			"\Redd_Tank_Fuchs_1A4\data\Redd_Tank_Fuchs_1A4_D_Anbauteile_Pi_blend_co.paa"
		};
	};

	class BNB_FA_BW2_Fuchs_Medic_Tropen : BNB_FA_BW2_Fuchs_Medic {
		scope = 2;
		scopeCurator = 2;
		FACTION(Tropen)
		crew = "BNB_FA_BW2_Rifleman_Tropen";
		typicalCargo[] = { "BNB_FA_BW2_Rifleman_Tropen" };

		hiddenSelectionsTextures[] = {
			"\Redd_Tank_Fuchs_1A4\data\Redd_Tank_Fuchs_1A4_D_San_Wanne_blend_co.paa",
			"\Redd_Tank_Fuchs_1A4\data\Redd_Tank_Fuchs_1A4_D_San_Anbauteile_blend_co.paa",
			"\Redd_Tank_Fuchs_1A4\data\Redd_Tank_Fuchs_1A4_D_Reifen_blend_co.paa"
		};
	};


	// Flecktarn
	class BNB_FA_BW2_Fuchs_Fleck : BNB_FA_BW2_Fuchs {
		scope = 2;
		scopeCurator = 2;
		FACTION(Fleck)
		crew = "BNB_FA_BW2_Rifleman_Fleck";
		typicalCargo[] = { "BNB_FA_BW2_Rifleman_Fleck" };

		hiddenSelectionsTextures[] = {
			"\Redd_Tank_Fuchs_1A4\data\Redd_Tank_Fuchs_1A4_Wanne_blend_co.paa",
			"\Redd_Tank_Fuchs_1A4\data\Redd_Tank_Fuchs_1A4_Anbauteile_blend_co.paa",
			"\Redd_Tank_Fuchs_1A4\data\Redd_Tank_Fuchs_1A4_Reifen_blend_co.paa"
		};

		class TransportBackpacks {
			ARMOURED_VEHICLE_BACKPACKS(Fleck)
		};
	};

	class BNB_FA_BW2_Fuchs_Milan_Fleck : BNB_FA_BW2_Fuchs_Milan {
		scope = 2;
		scopeCurator = 2;
		FACTION(Fleck)
		crew = "BNB_FA_BW2_Rifleman_Fleck";
		typicalCargo[] = { "BNB_FA_BW2_Rifleman_Fleck" };

		hiddenSelectionsTextures[] = {
			"\Redd_Tank_Fuchs_1A4\data\Redd_Tank_Fuchs_1A4_Wanne_blend_co.paa",
			"\Redd_Tank_Fuchs_1A4\data\Redd_Tank_Fuchs_1A4_Anbauteile_blend_co.paa",
			"\Redd_Tank_Fuchs_1A4\data\Redd_Tank_Fuchs_1A4_Reifen_blend_co.paa"
		};

		class TransportBackpacks {
			ARMOURED_VEHICLE_BACKPACKS(Fleck)
		};
	};

	class BNB_FA_BW2_Fuchs_Engineer_Fleck : BNB_FA_BW2_Fuchs_Engineer {
		scope = 2;
		scopeCurator = 2;
		FACTION(Fleck)
		crew = "BNB_FA_BW2_Rifleman_Fleck";
		typicalCargo[] = { "BNB_FA_BW2_Rifleman_Fleck" };

		hiddenSelectionsTextures[] = {
			"\Redd_Tank_Fuchs_1A4\data\Redd_Tank_Fuchs_1A4_Wanne_blend_co.paa",
			"\Redd_Tank_Fuchs_1A4\data\Redd_Tank_Fuchs_1A4_Anbauteile_blend_co.paa",
			"\Redd_Tank_Fuchs_1A4\data\Redd_Tank_Fuchs_1A4_Reifen_blend_co.paa",
			"\Redd_Tank_Fuchs_1A4\data\Redd_Tank_Fuchs_1A4_Anbauteile_Pi_blend_co.paa"
		};

		class TransportBackpacks {
			ARMOURED_VEHICLE_BACKPACKS(Fleck)
		};
	};

	class BNB_FA_BW2_Fuchs_Medic_Fleck : BNB_FA_BW2_Fuchs_Medic {
		scope = 2;
		scopeCurator = 2;
		FACTION(Fleck)
		crew = "BNB_FA_BW2_Rifleman_Fleck";
		typicalCargo[] = { "BNB_FA_BW2_Rifleman_Fleck" };

		hiddenSelectionsTextures[] = {
			"\Redd_Tank_Fuchs_1A4\data\Redd_Tank_Fuchs_1A4_San_Wanne_blend_co.paa",
			"\Redd_Tank_Fuchs_1A4\data\Redd_Tank_Fuchs_1A4_San_Anbauteile_blend_co.paa",
			"\Redd_Tank_Fuchs_1A4\data\Redd_Tank_Fuchs_1A4_Reifen_blend_co.paa"
		};

		class TransportBackpacks {
			ARMOURED_VEHICLE_BACKPACKS(Fleck)
		};
	};
};
