class CfgEditorSubcategories {
	class BNB_FA_JPN_Statics {
		displayName = "Statics";
	};
};

class CfgVehicles {
	////////////////////
	// Static HMG High //
	////////////////////
	class CUP_B_M2StaticMG_GER_Jeitai;
	class BNB_FA_JPN_Static_HMG_High_Winter : CUP_B_M2StaticMG_GER_Jeitai {
		displayName = "M2 HMG (High)";
		editorSubcategory = "BNB_FA_JPN_Statics";
		FACTION(Winter)
		crew = "BNB_FA_JPN_Rifleman_Winter";
		typicalCargo[] = { "BNB_FA_JPN_Rifleman_Winter" };
	};

	class BNB_FA_JPN_Static_HMG_High_Jeitai_D : BNB_FA_JPN_Static_HMG_High_Winter {
		FACTION(Jeitai_D)
		crew = "BNB_FA_JPN_Rifleman_Jeitai_D";
		typicalCargo[] = { "BNB_FA_JPN_Rifleman_Jeitai_D" };
	};

	class BNB_FA_JPN_Static_HMG_High_Jeitai : BNB_FA_JPN_Static_HMG_High_Winter {
		FACTION(Jeitai)
		crew = "BNB_FA_JPN_Rifleman_Jeitai";
		typicalCargo[] = { "BNB_FA_JPN_Rifleman_Jeitai" };
	};

	////////////////////
	// Static HMG Low //
	////////////////////
	class CUP_B_M2StaticMG_MiniTripod_GER_Jeitai;
	class BNB_FA_JPN_Static_HMG_Low_Winter : CUP_B_M2StaticMG_MiniTripod_GER_Jeitai {
		displayName = "M2 HMG (Low)";
		editorSubcategory = "BNB_FA_JPN_Statics";
		FACTION(Winter)
		crew = "BNB_FA_JPN_Rifleman_Winter";
		typicalCargo[] = { "BNB_FA_JPN_Rifleman_Winter" };
	};

	class BNB_FA_JPN_Static_HMG_Low_Jeitai_D : BNB_FA_JPN_Static_HMG_Low_Winter {
		FACTION(Jeitai_D)
		crew = "BNB_FA_JPN_Rifleman_Jeitai_D";
		typicalCargo[] = { "BNB_FA_JPN_Rifleman_Jeitai_D" };
	};

	class BNB_FA_JPN_Static_HMG_Low_Jeitai : BNB_FA_JPN_Static_HMG_Low_Winter {
		FACTION(Jeitai)
		crew = "BNB_FA_JPN_Rifleman_Jeitai";
		typicalCargo[] = { "BNB_FA_JPN_Rifleman_Jeitai" };
	};

	//////////////////////////////
	// Static HMG High (Shield) //
	//////////////////////////////
	class I_HMG_02_high_F;
	class BNB_FA_JPN_Static_HMG_High_Shield_Winter : I_HMG_02_high_F {
		side = 1;
		displayName = "M2 HMG (High/Shield)";
		editorSubcategory = "BNB_FA_JPN_Statics";
		FACTION(Winter)
		crew = "BNB_FA_JPN_Rifleman_Winter";
		typicalCargo[] = { "BNB_FA_JPN_Rifleman_Winter" };
	};

	class BNB_FA_JPN_Static_HMG_High_Shield_Jeitai_D : BNB_FA_JPN_Static_HMG_High_Shield_Winter {
		FACTION(Jeitai_D)
		crew = "BNB_FA_JPN_Rifleman_Jeitai_D";
		typicalCargo[] = { "BNB_FA_JPN_Rifleman_Jeitai_D" };
	};

	class BNB_FA_JPN_Static_HMG_High_Shield_Jeitai : BNB_FA_JPN_Static_HMG_High_Shield_Winter {
		FACTION(Jeitai)
		crew = "BNB_FA_JPN_Rifleman_Jeitai";
		typicalCargo[] = { "BNB_FA_JPN_Rifleman_Jeitai" };
	};

	/////////////////////////////
	// Static HMG Low (Shield) //
	/////////////////////////////
	class I_HMG_02_F;
	class BNB_FA_JPN_Static_HMG_Low_Shield_Winter : I_HMG_02_F {
		side = 1;
		displayName = "M2 HMG (Low/Shield)";
		editorSubcategory = "BNB_FA_JPN_Statics";
		FACTION(Winter)
		crew = "BNB_FA_JPN_Rifleman_Winter";
		typicalCargo[] = { "BNB_FA_JPN_Rifleman_Winter" };
	};

	class BNB_FA_JPN_Static_HMG_Low_Shield_Jeitai_D : BNB_FA_JPN_Static_HMG_Low_Shield_Winter {
		FACTION(Jeitai_D)
		crew = "BNB_FA_JPN_Rifleman_Jeitai_D";
		typicalCargo[] = { "BNB_FA_JPN_Rifleman_Jeitai_D" };
	};

	class BNB_FA_JPN_Static_HMG_Low_Shield_Jeitai : BNB_FA_JPN_Static_HMG_Low_Shield_Winter {
		FACTION(Jeitai)
		crew = "BNB_FA_JPN_Rifleman_Jeitai";
		typicalCargo[] = { "BNB_FA_JPN_Rifleman_Jeitai" };
	};
};
