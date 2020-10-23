class CfgVehicles {
	class RHS_A10;
	class BNB_FA_NAF_A10_Arctic : RHS_A10 {
		author = "Arend";
		displayName = "A-10";
		faction = "BNB_FA_NAF_Arctic";
		crew = "BNB_FA_NAF_Pilot_Arctic";

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

	class BNB_FA_NAF_A10_Desert : BNB_FA_NAF_A10_Arctic {
		faction = "BNB_FA_NAF_Desert";
		crew = "BNB_FA_NAF_Pilot_Desert";
	};

	class BNB_FA_NAF_A10_Woodland : BNB_FA_NAF_A10_Arctic {
		faction = "BNB_FA_NAF_Woodland";
		crew = "BNB_FA_NAF_Pilot_Woodland";
	};
};
