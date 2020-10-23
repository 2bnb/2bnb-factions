class CfgVehicles {
	class B_Mortar_01_F;
	class BNB_FA_NAF_Mortar_Arctic : B_Mortar_01_F {
		author = "Arend";
		displayName = "Mk6 Mortar";
		faction = "BNB_FA_NAF_Arctic";
		editorSubcategory = "rhs_EdSubcat_artillery";
		crew = "BNB_FA_NAF_Rifleman_Arctic";
		typicalCargo[] = { "BNB_FA_NAF_Rifleman_Arctic" };
	};

	class BNB_FA_NAF_Mortar_Desert : BNB_FA_NAF_Mortar_Arctic {
		faction = "BNB_FA_NAF_Desert";
		crew = "BNB_FA_NAF_Rifleman_Desert";
		typicalCargo[] = { "BNB_FA_NAF_Rifleman_Desert" };
	};

	class BNB_FA_NAF_Mortar_Woodland : BNB_FA_NAF_Mortar_Arctic {
		faction = "BNB_FA_NAF_Woodland";
		crew = "BNB_FA_NAF_Rifleman_Woodland";
		typicalCargo[] = { "BNB_FA_NAF_Rifleman_Woodland" };
	};

	class RHS_M119_WD;
	class BNB_FA_NAF_Howitzer_Arctic : RHS_M119_WD {
		author = "Arend";
		displayName = "M119A2 Howitzer";
		faction = "BNB_FA_NAF_Arctic";
		crew = "BNB_FA_NAF_Rifleman_Arctic";
		typicalCargo[] = { "BNB_FA_NAF_Rifleman_Arctic" };
	};

	class BNB_FA_NAF_Howitzer_Desert : BNB_FA_NAF_Howitzer_Arctic {
		faction = "BNB_FA_NAF_Desert";
		crew = "BNB_FA_NAF_Rifleman_Desert";
		typicalCargo[] = { "BNB_FA_NAF_Rifleman_Desert" };
	};

	class BNB_FA_NAF_Howitzer_Woodland : BNB_FA_NAF_Howitzer_Arctic {
		faction = "BNB_FA_NAF_Woodland";
		crew = "BNB_FA_NAF_Rifleman_Woodland";
		typicalCargo[] = { "BNB_FA_NAF_Rifleman_Woodland" };
	};
};
