class CfgVehicles {
	class RHS_MELB_AH6M;
	class BNB_FA_NAF_Littlebird_CAS_Arctic : RHS_MELB_AH6M {
		author = "Arend";
		displayName = "AH-6 Littlebird (CAS)";
		faction = "BNB_FA_NAF_Arctic";
		crew = "BNB_FA_NAF_Pilot_Arctic";
		typicalCargo[] = { "BNB_FA_NAF_Pilot_Arctic" };

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
		};
	};

	class BNB_FA_NAF_Littlebird_CAS_Desert : BNB_FA_NAF_Littlebird_CAS_Arctic {
		faction = "BNB_FA_NAF_Desert";
		crew = "BNB_FA_NAF_Pilot_Desert";
		typicalCargo[] = { "BNB_FA_NAF_Pilot_Desert" };
	};

	class BNB_FA_NAF_Littlebird_CAS_Woodland : BNB_FA_NAF_Littlebird_CAS_Arctic {
		faction = "BNB_FA_NAF_Woodland";
		crew = "BNB_FA_NAF_Pilot_Woodland";
		typicalCargo[] = { "BNB_FA_NAF_Pilot_Woodland" };
	};

	class RHS_MELB_MH6M;
	class BNB_FA_NAF_Littlebird_Transport_Arctic : RHS_MELB_MH6M {
		author = "Arend";
		displayName = "MH-6 Littlebird (Transport)";
		faction = "BNB_FA_NAF_Arctic";
		crew = "BNB_FA_NAF_Pilot_Arctic";
		typicalCargo[] = { "BNB_FA_NAF_Pilot_Arctic" };

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
		};
	};

	class BNB_FA_NAF_Littlebird_Transport_Desert : BNB_FA_NAF_Littlebird_Transport_Arctic {
		faction = "BNB_FA_NAF_Desert";
		crew = "BNB_FA_NAF_Pilot_Desert";
		typicalCargo[] = { "BNB_FA_NAF_Pilot_Desert" };
	};

	class BNB_FA_NAF_Littlebird_Transport_Woodland : BNB_FA_NAF_Littlebird_Transport_Arctic {
		faction = "BNB_FA_NAF_Woodland";
		crew = "BNB_FA_NAF_Pilot_Woodland";
		typicalCargo[] = { "BNB_FA_NAF_Pilot_Woodland" };
	};
};
