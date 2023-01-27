class CfgVehicles {
	class B_Mortar_01_F;
	class BNB_FA_JPN_Mortar_Mk6_Winter : B_Mortar_01_F {
		displayName = "Mk6 Mortar";
		FACTION(Winter)
		editorSubcategory = "EdSubcat_Artillery";
		crew = "BNB_FA_JPN_Rifleman_Winter";
		typicalCargo[] = { "BNB_FA_JPN_Rifleman_Winter" };
	};

	class BNB_FA_JPN_Mortar_Mk6_Jeitai_D : BNB_FA_JPN_Mortar_Mk6_Winter {
		FACTION(Jeitai_D)
		crew = "BNB_FA_JPN_Rifleman_Jeitai_D";
		typicalCargo[] = { "BNB_FA_JPN_Rifleman_Jeitai_D" };
	};

	class BNB_FA_JPN_Mortar_Mk6_Jeitai : BNB_FA_JPN_Mortar_Mk6_Winter {
		FACTION(Jeitai)
		crew = "BNB_FA_JPN_Rifleman_Jeitai";
		typicalCargo[] = { "BNB_FA_JPN_Rifleman_Jeitai" };
	};
};
