//////////////////////////////
// Wiesel More Spare Tracks //
//////////////////////////////
class Extended_InitPost_EventHandlers {
	class BNB_FA_BW2_Wiesel_Mk20 { ADD_PARTS(1,'ACE_Track') };
	class BNB_FA_BW2_Wiesel_TOW { ADD_PARTS(1,'ACE_Track') };
};

class CfgVehicles {
	/////////////////////////
	// Wiesel Base Classes //
	/////////////////////////
	// Mk20
	class Redd_Tank_Wiesel_1A4_MK20_Tropentarn;
	class BNB_FA_BW2_Wiesel_Mk20 : Redd_Tank_Wiesel_1A4_MK20_Tropentarn {
		scope = 0;
		side = 1;
		displayName = "Wiesel (Mk20)";
		editorSubcategory = "BNB_FA_BW2_AWC";

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

	// TOW
	class Redd_Tank_Wiesel_1A2_TOW_Tropentarn;
	class BNB_FA_BW2_Wiesel_TOW : Redd_Tank_Wiesel_1A2_TOW_Tropentarn {
		scope = 0;
		side = 1;
		displayName = "Wiesel (TOW)";
		editorSubcategory = "BNB_FA_BW2_AWC";

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

	////////////////////////
	// Wiesel Camouflages //
	////////////////////////
	// Winter
	class BNB_FA_BW2_Wiesel_Mk20_Winter : BNB_FA_BW2_Wiesel_Mk20 {
		scope = 2;
		scopeCurator = 2;
		FACTION(Winter)
		crew = "BNB_FA_BW2_Crew_Winter";
		typicalCargo[] = { "BNB_FA_BW2_Crew_Winter" };

		hiddenSelectionsTextures[] = {
			"Redd_Tank_Wiesel_1A4_MK20\data\Redd_Tank_Wiesel_1A2_TOW_Wanne_W_blend_co.paa",
			"Redd_Tank_Wiesel_1A4_MK20\data\Redd_Tank_Wiesel_1A4_MK20_Turm_W_ext_blend_co.paa"
		};
	};

	class BNB_FA_BW2_Wiesel_TOW_Winter : BNB_FA_BW2_Wiesel_TOW {
		scope = 2;
		scopeCurator = 2;
		FACTION(Winter)
		crew = "BNB_FA_BW2_Crew_Winter";
		typicalCargo[] = { "BNB_FA_BW2_Crew_Winter" };

		hiddenSelectionsTextures[] = {
			"Redd_Tank_Wiesel_1A2_TOW\data\Redd_Tank_Wiesel_1A2_TOW_Wanne_W_blend_co.paa"
		};
	};

	// Tropentarn
	class BNB_FA_BW2_Wiesel_Mk20_Tropen : BNB_FA_BW2_Wiesel_Mk20 {
		scope = 2;
		scopeCurator = 2;
		FACTION(Tropen)
		crew = "BNB_FA_BW2_Crew_Tropen";
		typicalCargo[] = { "BNB_FA_BW2_Crew_Tropen" };

		hiddenSelectionsTextures[] = {
			"Redd_Tank_Wiesel_1A4_MK20\data\Redd_Tank_Wiesel_1A2_TOW_Wanne_D_blend_co.paa",
			"Redd_Tank_Wiesel_1A4_MK20\data\Redd_Tank_Wiesel_1A4_MK20_Turm_D_ext_blend_co.paa"
		};
	};

	class BNB_FA_BW2_Wiesel_TOW_Tropen : BNB_FA_BW2_Wiesel_TOW {
		scope = 2;
		scopeCurator = 2;
		FACTION(Tropen)
		crew = "BNB_FA_BW2_Crew_Tropen";
		typicalCargo[] = { "BNB_FA_BW2_Crew_Tropen" };

		hiddenSelectionsTextures[] = {
			"Redd_Tank_Wiesel_1A2_TOW\data\Redd_Tank_Wiesel_1A2_TOW_Wanne_D_blend_co.paa"
		};
	};

	// Flecktarn
	class BNB_FA_BW2_Wiesel_Mk20_Fleck : BNB_FA_BW2_Wiesel_Mk20 {
		scope = 2;
		scopeCurator = 2;
		FACTION(Fleck)
		crew = "BNB_FA_BW2_Crew_Fleck";
		typicalCargo[] = { "BNB_FA_BW2_Crew_Fleck" };

		hiddenSelectionsTextures[] = {
			"Redd_Tank_Wiesel_1A4_MK20\data\Redd_Tank_Wiesel_1A2_TOW_Wanne_blend_co.paa",
			"Redd_Tank_Wiesel_1A4_MK20\data\Redd_Tank_Wiesel_1A4_MK20_Turm_ext_blend_co.paa"
		};

		class TransportBackpacks {
			ARMOURED_VEHICLE_BACKPACKS(Fleck)
		};
	};

	class BNB_FA_BW2_Wiesel_TOW_Fleck : BNB_FA_BW2_Wiesel_TOW {
		scope = 2;
		scopeCurator = 2;
		FACTION(Fleck)
		crew = "BNB_FA_BW2_Crew_Fleck";
		typicalCargo[] = { "BNB_FA_BW2_Crew_Fleck" };

		hiddenSelectionsTextures[] = {
			"Redd_Tank_Wiesel_1A2_TOW\data\Redd_Tank_Wiesel_1A2_TOW_Wanne_blend_co.paa"
		};

		class TransportBackpacks {
			ARMOURED_VEHICLE_BACKPACKS(Fleck)
		};
	};
};
