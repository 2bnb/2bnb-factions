class CfgVehicles {
	class Helicopter_Base_F;
	class Helicopter_Base_H : Helicopter_Base_F {
		class TextureSources;
	};
	class rhs_uh1h_base : Helicopter_Base_H {
		class TextureSources : TextureSources {
			class tan;
			class white;
			class olive;
			class un;
			class black;
		};
	};
	class rhs_uh1h_hidf : rhs_uh1h_base {
		class TextureSources : TextureSources {
			class tan : tan {
				factions[] = {
					"BNB_FA_NAF_Arctic",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Woodland"
				};
			};
			class white : white {
				factions[] = {
					"BNB_FA_NAF_Arctic",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Woodland"
				};
			};
			class olive : olive {
				factions[] = {
					"BNB_FA_NAF_Arctic",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Woodland"
				};
			};
			class un : un {
				factions[] = {
					"BNB_FA_NAF_Arctic",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Woodland"
				};
			};
			class black : black {
				factions[] = {
					"BNB_FA_NAF_Arctic",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Woodland"
				};
			};
		};
	};
	class BNB_FA_NAF_Huey_Transport_Arctic : rhs_uh1h_hidf {
		author = "Arend";
		displayName = "Huey Transport";
		faction = "BNB_FA_NAF_Arctic";
		crew = "BNB_FA_NAF_Pilot_Arctic";
		typicalCargo[] = { "BNB_FA_NAF_Pilot_Arctic" };
		textureList[] = {"white", 1};

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

	class BNB_FA_NAF_Huey_Transport_Desert : BNB_FA_NAF_Huey_Transport_Arctic {
		faction = "BNB_FA_NAF_Desert";
		crew = "BNB_FA_NAF_Pilot_Desert";
		typicalCargo[] = { "BNB_FA_NAF_Pilot_Desert" };
		textureList[] = {"tan", 1};
	};

	class BNB_FA_NAF_Huey_Transport_Woodland : BNB_FA_NAF_Huey_Transport_Arctic {
		faction = "BNB_FA_NAF_Woodland";
		crew = "BNB_FA_NAF_Pilot_Woodland";
		typicalCargo[] = { "BNB_FA_NAF_Pilot_Woodland" };
		textureList[] = {"black", 1};
	};

	class rhs_uh1h_hidf_gunship : rhs_uh1h_hidf;
	class BNB_FA_NAF_Huey_Gunship_Arctic : rhs_uh1h_hidf_gunship {
		author = "Arend";
		displayName = "Huey Gunship";
		faction = "BNB_FA_NAF_Arctic";
		crew = "BNB_FA_NAF_Pilot_Arctic";
		typicalCargo[] = { "BNB_FA_NAF_Pilot_Arctic" };
		textureList[] = {"white", 1};

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

	class BNB_FA_NAF_Huey_Gunship_Desert : BNB_FA_NAF_Huey_Gunship_Arctic {
		faction = "BNB_FA_NAF_Desert";
		crew = "BNB_FA_NAF_Pilot_Desert";
		typicalCargo[] = { "BNB_FA_NAF_Pilot_Desert" };
		textureList[] = {"tan", 1};
	};

	class BNB_FA_NAF_Huey_Gunship_Woodland : BNB_FA_NAF_Huey_Gunship_Arctic {
		faction = "BNB_FA_NAF_Woodland";
		crew = "BNB_FA_NAF_Pilot_Woodland";
		typicalCargo[] = { "BNB_FA_NAF_Pilot_Woodland" };
		textureList[] = {"black", 1};
	};
};
