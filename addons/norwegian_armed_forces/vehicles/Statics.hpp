class CfgEditorSubcategories {
	class BNB_FA_NAF_Statics {
		displayName = "Statics";
	};
};

class CfgVehicles {
	/////////////////////
	// Static HMG High //
	/////////////////////
	class RHS_M2StaticMG_WD;
	class BNB_FA_NAF_Static_HMG_High_Arctic : RHS_M2StaticMG_WD {
		author = "Arend";
		displayName = "M2 HMG (High)";
		editorSubcategory = "BNB_FA_NAF_Statics";
		faction = "BNB_FA_NAF_Arctic";
		crew = "BNB_FA_NAF_Rifleman_Arctic";
		typicalCargo[] = { "BNB_FA_NAF_Rifleman_Arctic" };
	};

	class BNB_FA_NAF_Static_HMG_High_Desert : BNB_FA_NAF_Static_HMG_High_Arctic {
		faction = "BNB_FA_NAF_Desert";
		crew = "BNB_FA_NAF_Rifleman_Desert";
		typicalCargo[] = { "BNB_FA_NAF_Rifleman_Desert" };
	};

	class BNB_FA_NAF_Static_HMG_High_Woodland : BNB_FA_NAF_Static_HMG_High_Arctic {
		faction = "BNB_FA_NAF_Woodland";
		crew = "BNB_FA_NAF_Rifleman_Woodland";
		typicalCargo[] = { "BNB_FA_NAF_Rifleman_Woodland" };
	};

	////////////////////
	// Static HMG Low //
	////////////////////
	class RHS_M2StaticMG_MiniTripod_WD;
	class BNB_FA_NAF_Static_HMG_Low_Arctic : RHS_M2StaticMG_MiniTripod_WD {
		author = "Arend";
		displayName = "M2 HMG (Low)";
		editorSubcategory = "BNB_FA_NAF_Statics";
		faction = "BNB_FA_NAF_Arctic";
		crew = "BNB_FA_NAF_Rifleman_Arctic";
		typicalCargo[] = { "BNB_FA_NAF_Rifleman_Arctic" };
	};

	class BNB_FA_NAF_Static_HMG_Low_Desert : BNB_FA_NAF_Static_HMG_Low_Arctic {
		faction = "BNB_FA_NAF_Desert";
		crew = "BNB_FA_NAF_Rifleman_Desert";
		typicalCargo[] = { "BNB_FA_NAF_Rifleman_Desert" };
	};

	class BNB_FA_NAF_Static_HMG_Low_Woodland : BNB_FA_NAF_Static_HMG_Low_Arctic {
		faction = "BNB_FA_NAF_Woodland";
		crew = "BNB_FA_NAF_Rifleman_Woodland";
		typicalCargo[] = { "BNB_FA_NAF_Rifleman_Woodland" };
	};

	//////////////
	// Mk19 GMG //
	//////////////
	class RHS_MK19_TriPod_WD;
	class BNB_FA_NAF_Static_GMG_Arctic : RHS_MK19_TriPod_WD {
		author = "Arend";
		displayName = "Mk19 GMG";
		editorSubcategory = "BNB_FA_NAF_Statics";
		faction = "BNB_FA_NAF_Arctic";
		crew = "BNB_FA_NAF_Rifleman_Arctic";
		typicalCargo[] = { "BNB_FA_NAF_Rifleman_Arctic" };
	};

	class BNB_FA_NAF_Static_GMG_Desert : BNB_FA_NAF_Static_GMG_Arctic {
		faction = "BNB_FA_NAF_Desert";
		crew = "BNB_FA_NAF_Rifleman_Desert";
		typicalCargo[] = { "BNB_FA_NAF_Rifleman_Desert" };
	};

	class BNB_FA_NAF_Static_GMG_Woodland : BNB_FA_NAF_Static_GMG_Arctic {
		faction = "BNB_FA_NAF_Woodland";
		crew = "BNB_FA_NAF_Rifleman_Woodland";
		typicalCargo[] = { "BNB_FA_NAF_Rifleman_Woodland" };
	};

	/////////
	// TOW //
	/////////
	class RHS_TOW_TriPod_WD;
	class BNB_FA_NAF_Static_TOW_Arctic : RHS_TOW_TriPod_WD {
		author = "Arend";
		displayName = "TOW";
		editorSubcategory = "BNB_FA_NAF_Statics";
		faction = "BNB_FA_NAF_Arctic";
		crew = "BNB_FA_NAF_Rifleman_Arctic";
		typicalCargo[] = { "BNB_FA_NAF_Rifleman_Arctic" };
	};

	class BNB_FA_NAF_Static_TOW_Desert : BNB_FA_NAF_Static_TOW_Arctic {
		faction = "BNB_FA_NAF_Desert";
		crew = "BNB_FA_NAF_Rifleman_Desert";
		typicalCargo[] = { "BNB_FA_NAF_Rifleman_Desert" };
	};

	class BNB_FA_NAF_Static_TOW_Woodland : BNB_FA_NAF_Static_TOW_Arctic {
		faction = "BNB_FA_NAF_Woodland";
		crew = "BNB_FA_NAF_Rifleman_Woodland";
		typicalCargo[] = { "BNB_FA_NAF_Rifleman_Woodland" };
	};
};
