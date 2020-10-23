class CfgVehicles {
	class RHS_UH60M_base;
	class RHS_UH60M_US_base : RHS_UH60M_base {
		class Turrets;
	};
	class RHS_UH60M : RHS_UH60M_US_base {
		class Turrets : Turrets {
			class CopilotTurret;
			class MainTurret;
			class RightDoorGun;
		};
	};
	class BNB_FA_NAF_Blackhawk_Arctic : RHS_UH60M {
		author = "Arend";
		displayName = "UH-60M Blackhawk";
		faction = "BNB_FA_NAF_Arctic";
		crew = "BNB_FA_NAF_Pilot_Arctic";
		typicalCargo[] = { "BNB_FA_NAF_Pilot_Arctic" };

		class Turrets : Turrets {
			class CopilotTurret : CopilotTurret { gunnerType = "BNB_FA_NAF_Pilot_Arctic"; };
			class MainTurret: MainTurret { gunnerType = "BNB_FA_NAF_Pilot_Arctic"; };
			class RightDoorGun: RightDoorGun { gunnerType = "BNB_FA_NAF_Pilot_Arctic"; };
		};

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

	class BNB_FA_NAF_Blackhawk_Desert : BNB_FA_NAF_Blackhawk_Arctic {
		faction = "BNB_FA_NAF_Desert";
		crew = "BNB_FA_NAF_Pilot_Desert";
		typicalCargo[] = { "BNB_FA_NAF_Pilot_Desert" };

		class Turrets : Turrets {
			class CopilotTurret : CopilotTurret { gunnerType = "BNB_FA_NAF_Pilot_Desert"; };
			class MainTurret: MainTurret { gunnerType = "BNB_FA_NAF_Pilot_Desert"; };
			class RightDoorGun: RightDoorGun { gunnerType = "BNB_FA_NAF_Pilot_Desert"; };
		};
	};

	class BNB_FA_NAF_Blackhawk_Woodland : BNB_FA_NAF_Blackhawk_Arctic {
		faction = "BNB_FA_NAF_Woodland";
		crew = "BNB_FA_NAF_Pilot_Woodland";
		typicalCargo[] = { "BNB_FA_NAF_Pilot_Woodland" };

		class Turrets : Turrets {
			class CopilotTurret : CopilotTurret { gunnerType = "BNB_FA_NAF_Pilot_Woodland"; };
			class MainTurret: MainTurret { gunnerType = "BNB_FA_NAF_Pilot_Woodland"; };
			class RightDoorGun: RightDoorGun { gunnerType = "BNB_FA_NAF_Pilot_Woodland"; };
		};
	};
};
