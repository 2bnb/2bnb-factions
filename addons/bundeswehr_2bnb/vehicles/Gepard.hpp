//////////////////////////////
// Gepard More Spare Tracks //
//////////////////////////////
class Extended_InitPost_EventHandlers {
	class BNB_FA_BW2_Gepard { ADD_PARTS(1,'ACE_Track') };
};

class CfgVehicles {
	/////////////////
	// Gepard Base //
	/////////////////
	class Redd_Tank_Gepard_1A2_Tropentarn;
	class BNB_FA_BW2_Gepard : Redd_Tank_Gepard_1A2_Tropentarn {
		scope = 0;
		side = 1;
		displayName = "Gepard";
		editorSubcategory = "EdSubcat_AAs";

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
	// Gepard Camouflages //
	////////////////////////
	class BNB_FA_BW2_Gepard_Winter : BNB_FA_BW2_Gepard {
		scope = 2;
		scopeCurator = 2;
		FACTION(Winter)
		crew = "BNB_FA_BW2_Crew_Winter";
		typicalCargo[] = { "BNB_FA_BW2_Crew_Winter" };

		hiddenSelectionsTextures[] = {
			"Redd_Tank_Gepard_1A2\data\Redd_Tank_Gepard_1A2_W_Details_blend_co",
			"Redd_Tank_Gepard_1A2\data\Redd_Tank_Gepard_1A2_Fahrwerk_u_Anbaut_blend_co",
			"Redd_Tank_Gepard_1A2\data\Redd_Tank_Gepard_1A2_W_grob_u_Kleinteile_blend_co",
			"Redd_Tank_Gepard_1A2\data\Redd_Tank_Gepard_1A2_W_Gross_Turm_blend_co",
			"Redd_Tank_Gepard_1A2\data\Redd_Tank_Gepard_1A2_W_Guns_blend_co",
			"Redd_Tank_Gepard_1A2\data\Redd_Tank_Gepard_1A2_W_Innen_Teile_blend_co",
			"Redd_Tank_Gepard_1A2\data\Redd_Tank_Gepard_1A2_Innen_Teile_Details_blend_co",
			"Redd_Tank_Gepard_1A2\data\Redd_Tank_Gepard_1A2_W_Innenraum_Rest_blend_co",
			"Redd_Tank_Gepard_1A2\data\Redd_Tank_Gepard_1A2_W_Wanne_blend_co"
		};
	};

	class BNB_FA_BW2_Gepard_Tropen : BNB_FA_BW2_Gepard {
		scope = 2;
		scopeCurator = 2;
		FACTION(Tropen)
		crew = "BNB_FA_BW2_Crew_Tropen";
		typicalCargo[] = { "BNB_FA_BW2_Crew_Tropen" };

		hiddenSelectionsTextures[] = {
			"Redd_Tank_Gepard_1A2\data\Redd_Tank_Gepard_1A2_D_Details_blend_co",
			"Redd_Tank_Gepard_1A2\data\Redd_Tank_Gepard_1A2_D_Fahrwerk_u_Anbaut_blend_co",
			"Redd_Tank_Gepard_1A2\data\Redd_Tank_Gepard_1A2_D_grob_u_Kleinteile_blend_co",
			"Redd_Tank_Gepard_1A2\data\Redd_Tank_Gepard_1A2_D_Gross_Turm_blend_co",
			"Redd_Tank_Gepard_1A2\data\Redd_Tank_Gepard_1A2_D_Guns_blend_co",
			"Redd_Tank_Gepard_1A2\data\Redd_Tank_Gepard_1A2_D_Innen_Teile_blend_co",
			"Redd_Tank_Gepard_1A2\data\Redd_Tank_Gepard_1A2_Innen_Teile_Details_blend_co",
			"Redd_Tank_Gepard_1A2\data\Redd_Tank_Gepard_1A2_D_Innenraum_Rest_blend_co",
			"Redd_Tank_Gepard_1A2\data\Redd_Tank_Gepard_1A2_D_Wanne_blend_co"
		};
	};

	class BNB_FA_BW2_Gepard_Fleck : BNB_FA_BW2_Gepard {
		scope = 2;
		scopeCurator = 2;
		FACTION(Fleck)
		crew = "BNB_FA_BW2_Crew_Fleck";
		typicalCargo[] = { "BNB_FA_BW2_Crew_Fleck" };

		hiddenSelectionsTextures[] = {
			"Redd_Tank_Gepard_1A2\data\Redd_Tank_Gepard_1A2_Details_blend_co",
			"Redd_Tank_Gepard_1A2\data\Redd_Tank_Gepard_1A2_Fahrwerk_u_Anbaut_blend_co",
			"Redd_Tank_Gepard_1A2\data\Redd_Tank_Gepard_1A2_grob_u_Kleinteile_blend_co",
			"Redd_Tank_Gepard_1A2\data\Redd_Tank_Gepard_1A2_Gross_Turm_blend_co",
			"Redd_Tank_Gepard_1A2\data\Redd_Tank_Gepard_1A2_Guns_blend_co",
			"Redd_Tank_Gepard_1A2\data\Redd_Tank_Gepard_1A2_Innen_Teile_blend_co",
			"Redd_Tank_Gepard_1A2\data\Redd_Tank_Gepard_1A2_Innen_Teile_Details_blend_co",
			"Redd_Tank_Gepard_1A2\data\Redd_Tank_Gepard_1A2_Innenraum_Rest_blend_co",
			"Redd_Tank_Gepard_1A2\data\Redd_Tank_Gepard_1A2_Wanne_blend_co"
		};

		class TransportBackpacks {
			ARMOURED_VEHICLE_BACKPACKS(Fleck)
		};
	};
};
