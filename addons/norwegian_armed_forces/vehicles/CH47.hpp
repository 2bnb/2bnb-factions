class CfgVehicles {
	class RHS_CH_47F;
	class BNB_FA_NAF_Chinook_Arctic : RHS_CH_47F {
		author = "Arend";
		displayName = "CH-47F Chinook";
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
			VEHICLE_AT_AMMO_EXTENDED
		};

		class TransportBackpacks {
			AIR_VEHICLE_BACKPACKS
		};
	};

	class BNB_FA_NAF_Chinook_Desert : BNB_FA_NAF_Chinook_Arctic {
		faction = "BNB_FA_NAF_Desert";
		crew = "BNB_FA_NAF_Pilot_Desert";
		typicalCargo[] = { "BNB_FA_NAF_Pilot_Desert" };

	};

	class BNB_FA_NAF_Chinook_Woodland : BNB_FA_NAF_Chinook_Arctic {
		faction = "BNB_FA_NAF_Woodland";
		crew = "BNB_FA_NAF_Pilot_Woodland";
		typicalCargo[] = { "BNB_FA_NAF_Pilot_Woodland" };

	};

	class RHS_CH_47F_cargo;
	class BNB_FA_NAF_Chinook_Cargo_Arctic : RHS_CH_47F_cargo {
		author = "Arend";
		displayName = "CH-47F Chinook (Cargo)";
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
			VEHICLE_AT_AMMO_EXTENDED
		};

		class TransportBackpacks {
			AIR_VEHICLE_BACKPACKS
		};
	};

	class BNB_FA_NAF_Chinook_Cargo_Desert : BNB_FA_NAF_Chinook_Cargo_Arctic {
		faction = "BNB_FA_NAF_Desert";
		crew = "BNB_FA_NAF_Pilot_Desert";
		typicalCargo[] = { "BNB_FA_NAF_Pilot_Desert" };

	};

	class BNB_FA_NAF_Chinook_Cargo_Woodland : BNB_FA_NAF_Chinook_Cargo_Arctic {
		faction = "BNB_FA_NAF_Woodland";
		crew = "BNB_FA_NAF_Pilot_Woodland";
		typicalCargo[] = { "BNB_FA_NAF_Pilot_Woodland" };

	};
};
