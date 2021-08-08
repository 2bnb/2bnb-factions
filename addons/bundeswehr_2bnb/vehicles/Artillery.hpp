class CfgVehicles {
	class B_Mortar_01_F;
	class BNB_FA_BW2_Mortar_Mk6_Winter : B_Mortar_01_F {
		displayName = "Mk6 Mortar";
		FACTION(Winter)
		editorSubcategory = "EdSubcat_Artillery";
		crew = "BNB_FA_BW2_Rifleman_Winter";
		typicalCargo[] = { "BNB_FA_BW2_Rifleman_Winter" };
	};

	class BNB_FA_BW2_Mortar_Mk6_Tropen : BNB_FA_BW2_Mortar_Mk6_Winter {
		FACTION(Tropen)
		crew = "BNB_FA_BW2_Rifleman_Tropen";
		typicalCargo[] = { "BNB_FA_BW2_Rifleman_Tropen" };
	};

	class BNB_FA_BW2_Mortar_Mk6_Fleck : BNB_FA_BW2_Mortar_Mk6_Winter {
		FACTION(Fleck)
		crew = "BNB_FA_BW2_Rifleman_Fleck";
		typicalCargo[] = { "BNB_FA_BW2_Rifleman_Fleck" };
	};

	class BWA3_MRS120_Tropen;
	class BNB_FA_BW2_Mortar_120mm_Winter : BWA3_MRS120_Tropen {
		displayName = "120mm Mortar";
		FACTION(Winter)
		editorSubcategory = "EdSubcat_Artillery";
		crew = "BNB_FA_BW2_Rifleman_Winter";
		typicalCargo[] = { "BNB_FA_BW2_Rifleman_Winter" };
	};

	class BNB_FA_BW2_Mortar_120mm_Tropen : BNB_FA_BW2_Mortar_120mm_Winter {
		FACTION(Tropen)
		crew = "BNB_FA_BW2_Rifleman_Tropen";
		typicalCargo[] = { "BNB_FA_BW2_Rifleman_Tropen" };
	};

	class BNB_FA_BW2_Mortar_120mm_Fleck : BNB_FA_BW2_Mortar_120mm_Winter {
		FACTION(Fleck)
		crew = "BNB_FA_BW2_Rifleman_Fleck";
		typicalCargo[] = { "BNB_FA_BW2_Rifleman_Fleck" };
	};
};
