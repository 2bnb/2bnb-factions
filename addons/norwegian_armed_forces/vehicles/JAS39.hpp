class CfgVehicles {
	class I_Plane_Fighter_04_F;
	class BNB_FA_NAF_JAS_39_Gripen_Arctic : I_Plane_Fighter_04_F {
		author = "Arend";
		displayName = "JAS-39 Gripen";
		side = 1;
		faction = "BNB_FA_NAF_Arctic";
		crew = "BNB_FA_NAF_Pilot_Arctic";

		hiddenSelections[] = {"Camo_01", "Camo_02"};
		hiddenSelectionsTextures[] = {
			"x\bnb_fa\norwegian_armed_forces\data\textures\Gripen_fuselage_01_co.paa",
			"x\bnb_fa\norwegian_armed_forces\data\textures\Gripen_fuselage_02_co.paa"
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

	class BNB_FA_NAF_JAS_39_Gripen_Desert : BNB_FA_NAF_JAS_39_Gripen_Arctic {
		faction = "BNB_FA_NAF_Desert";
		crew = "BNB_FA_NAF_Pilot_Desert";
	};

	class BNB_FA_NAF_JAS_39_Gripen_Woodland : BNB_FA_NAF_JAS_39_Gripen_Arctic {
		faction = "BNB_FA_NAF_Woodland";
		crew = "BNB_FA_NAF_Pilot_Woodland";
	};
};
