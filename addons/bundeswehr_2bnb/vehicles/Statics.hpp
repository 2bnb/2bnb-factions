class CfgEditorSubcategories {
	class BNB_FA_BW2_Statics {
		displayName = "Statics";
	};
};

class CfgVehicles {
	////////////////
	// Static MG3 //
	////////////////
	class rnt_mg3_static;
	class BNB_FA_BW2_Static_MG3_High_Winter : rnt_mg3_static {
		displayName = "MG3";
		editorSubcategory = "BNB_FA_BW2_Statics";
		FACTION(Winter)
		crew = "BNB_FA_BW2_Rifleman_Winter";
		typicalCargo[] = { "BNB_FA_BW2_Rifleman_Winter" };
	};

	class BNB_FA_BW2_Static_MG3_High_Tropen : BNB_FA_BW2_Static_MG3_High_Winter {
		FACTION(Tropen)
		crew = "BNB_FA_BW2_Rifleman_Tropen";
		typicalCargo[] = { "BNB_FA_BW2_Rifleman_Tropen" };
	};

	class BNB_FA_BW2_Static_MG3_High_Fleck : BNB_FA_BW2_Static_MG3_High_Winter {
		FACTION(Fleck)
		crew = "BNB_FA_BW2_Rifleman_Fleck";
		typicalCargo[] = { "BNB_FA_BW2_Rifleman_Fleck" };
	};

	////////////////////
	// Static HMG High //
	////////////////////
	class CUP_B_M2StaticMG_GER_Fleck;
	class BNB_FA_BW2_Static_HMG_High_Winter : CUP_B_M2StaticMG_GER_Fleck {
		displayName = "M2 HMG (High)";
		editorSubcategory = "BNB_FA_BW2_Statics";
		FACTION(Winter)
		crew = "BNB_FA_BW2_Rifleman_Winter";
		typicalCargo[] = { "BNB_FA_BW2_Rifleman_Winter" };
	};

	class BNB_FA_BW2_Static_HMG_High_Tropen : BNB_FA_BW2_Static_HMG_High_Winter {
		FACTION(Tropen)
		crew = "BNB_FA_BW2_Rifleman_Tropen";
		typicalCargo[] = { "BNB_FA_BW2_Rifleman_Tropen" };
	};

	class BNB_FA_BW2_Static_HMG_High_Fleck : BNB_FA_BW2_Static_HMG_High_Winter {
		FACTION(Fleck)
		crew = "BNB_FA_BW2_Rifleman_Fleck";
		typicalCargo[] = { "BNB_FA_BW2_Rifleman_Fleck" };
	};

	////////////////////
	// Static HMG Low //
	////////////////////
	class CUP_B_M2StaticMG_MiniTripod_GER_Fleck;
	class BNB_FA_BW2_Static_HMG_Low_Winter : CUP_B_M2StaticMG_MiniTripod_GER_Fleck {
		displayName = "M2 HMG (Low)";
		editorSubcategory = "BNB_FA_BW2_Statics";
		FACTION(Winter)
		crew = "BNB_FA_BW2_Rifleman_Winter";
		typicalCargo[] = { "BNB_FA_BW2_Rifleman_Winter" };
	};

	class BNB_FA_BW2_Static_HMG_Low_Tropen : BNB_FA_BW2_Static_HMG_Low_Winter {
		FACTION(Tropen)
		crew = "BNB_FA_BW2_Rifleman_Tropen";
		typicalCargo[] = { "BNB_FA_BW2_Rifleman_Tropen" };
	};

	class BNB_FA_BW2_Static_HMG_Low_Fleck : BNB_FA_BW2_Static_HMG_Low_Winter {
		FACTION(Fleck)
		crew = "BNB_FA_BW2_Rifleman_Fleck";
		typicalCargo[] = { "BNB_FA_BW2_Rifleman_Fleck" };
	};

	//////////////////////////////
	// Static HMG High (Shield) //
	//////////////////////////////
	class I_HMG_02_high_F;
	class BNB_FA_BW2_Static_HMG_High_Shield_Winter : I_HMG_02_high_F {
		side = 1;
		displayName = "M2 HMG (High/Shield)";
		editorSubcategory = "BNB_FA_BW2_Statics";
		FACTION(Winter)
		crew = "BNB_FA_BW2_Rifleman_Winter";
		typicalCargo[] = { "BNB_FA_BW2_Rifleman_Winter" };
	};

	class BNB_FA_BW2_Static_HMG_High_Shield_Tropen : BNB_FA_BW2_Static_HMG_High_Shield_Winter {
		FACTION(Tropen)
		crew = "BNB_FA_BW2_Rifleman_Tropen";
		typicalCargo[] = { "BNB_FA_BW2_Rifleman_Tropen" };
	};

	class BNB_FA_BW2_Static_HMG_High_Shield_Fleck : BNB_FA_BW2_Static_HMG_High_Shield_Winter {
		FACTION(Fleck)
		crew = "BNB_FA_BW2_Rifleman_Fleck";
		typicalCargo[] = { "BNB_FA_BW2_Rifleman_Fleck" };
	};

	/////////////////////////////
	// Static HMG Low (Shield) //
	/////////////////////////////
	class I_HMG_02_F;
	class BNB_FA_BW2_Static_HMG_Low_Shield_Winter : I_HMG_02_F {
		side = 1;
		displayName = "M2 HMG (Low/Shield)";
		editorSubcategory = "BNB_FA_BW2_Statics";
		FACTION(Winter)
		crew = "BNB_FA_BW2_Rifleman_Winter";
		typicalCargo[] = { "BNB_FA_BW2_Rifleman_Winter" };
	};

	class BNB_FA_BW2_Static_HMG_Low_Shield_Tropen : BNB_FA_BW2_Static_HMG_Low_Shield_Winter {
		FACTION(Tropen)
		crew = "BNB_FA_BW2_Rifleman_Tropen";
		typicalCargo[] = { "BNB_FA_BW2_Rifleman_Tropen" };
	};

	class BNB_FA_BW2_Static_HMG_Low_Shield_Fleck : BNB_FA_BW2_Static_HMG_Low_Shield_Winter {
		FACTION(Fleck)
		crew = "BNB_FA_BW2_Rifleman_Fleck";
		typicalCargo[] = { "BNB_FA_BW2_Rifleman_Fleck" };
	};

	//////////////
	// Mk19 GMG //
	//////////////
	class rnt_gmw_static;
	class BNB_FA_BW2_Static_GMG_Winter : rnt_gmw_static {
		displayName = "Mk19 GMG";
		editorSubcategory = "BNB_FA_BW2_Statics";
		FACTION(Winter)
		crew = "BNB_FA_BW2_Rifleman_Winter";
		typicalCargo[] = { "BNB_FA_BW2_Rifleman_Winter" };
	};

	class BNB_FA_BW2_Static_GMG_Tropen : BNB_FA_BW2_Static_GMG_Winter {
		FACTION(Tropen)
		crew = "BNB_FA_BW2_Rifleman_Tropen";
		typicalCargo[] = { "BNB_FA_BW2_Rifleman_Tropen" };
	};

	class BNB_FA_BW2_Static_GMG_Fleck : BNB_FA_BW2_Static_GMG_Winter {
		FACTION(Fleck)
		crew = "BNB_FA_BW2_Rifleman_Fleck";
		typicalCargo[] = { "BNB_FA_BW2_Rifleman_Fleck" };
	};

	///////////
	// Milan //
	///////////
	class Redd_Milan_Static;
	class BNB_FA_BW2_Static_Milan_Winter : Redd_Milan_Static {
		displayName = "Milan";
		editorSubcategory = "BNB_FA_BW2_Statics";
		FACTION(Winter)
		crew = "BNB_FA_BW2_Rifleman_Winter";
		typicalCargo[] = { "BNB_FA_BW2_Rifleman_Winter" };
	};

	class BNB_FA_BW2_Static_Milan_Tropen : BNB_FA_BW2_Static_Milan_Winter {
		FACTION(Tropen)
		crew = "BNB_FA_BW2_Rifleman_Tropen";
		typicalCargo[] = { "BNB_FA_BW2_Rifleman_Tropen" };
	};

	class BNB_FA_BW2_Static_Milan_Fleck : BNB_FA_BW2_Static_Milan_Winter {
		FACTION(Fleck)
		crew = "BNB_FA_BW2_Rifleman_Fleck";
		typicalCargo[] = { "BNB_FA_BW2_Rifleman_Fleck" };
	};
};
