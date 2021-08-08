class CfgVehicles {
	//////////////////////////////
	// Luchs Reconnaisance Tank //
	//////////////////////////////
	class rnt_sppz_2a2_luchs_tropentarn;
	class BNB_FA_BW2_Luchs : rnt_sppz_2a2_luchs_tropentarn {
		scope = 0;
		side = 1;
		displayName = "Luchs Recon Tank";
		faction = "BNB_FA_BW2_Winter";
		editorSubcategory = "EdSubcat_Tanks";

		class TransportMagazines {
			ARMOURED_VEHICLE_MAGAZINES
		};

		class TransportWeapons {
			ARMOURED_VEHICLE_WEAPONS
		};

		class TransportItems {
			ARMOURED_VEHICLE_ITEMS
			VEHICLE_AT_AMMO_EXTENDED
		};

		class TransportBackpacks {
			ARMOURED_VEHICLE_BACKPACKS(Tropen)
		};
	};

	///////////////////////
	// Luchs Camouflages //
	///////////////////////
	class BNB_FA_BW2_Luchs_Winter : BNB_FA_BW2_Luchs {
		scope = 2;
		scopeCurator = 2;
		FACTION(Winter)
		crew = "BNB_FA_BW2_Crew_Winter";
		typicalCargo[] = { "BNB_FA_BW2_Crew_Winter" };

		hiddenSelectionsTextures[] = {
			"rnt_sppz_2a2_luchs\data\rnt_luchs_w_schild_kleint_blend_co",
			"rnt_sppz_2a2_luchs\data\rnt_luchs_dach_kleint_blend_co",
			"rnt_sppz_2a2_luchs\data\rnt_luchs_dach_teile_schrauben_blend_co",
			"rnt_sppz_2a2_luchs\data\rnt_luchs_w_rest_teile_blend_co",
			"rnt_sppz_2a2_luchs\data\rnt_luchs_rest_fahrwerk_blend_co",
			"rnt_sppz_2a2_luchs\data\rnt_luchs_w_wanne_blend_co",
			"rnt_sppz_2a2_luchs\data\rnt_luchs_lafette_bf_kabel_blend_co",
			"rnt_sppz_2a2_luchs\data\rnt_luchs_fahrer_funker_blend_co",
			"rnt_sppz_2a2_luchs\data\rnt_luchs_instr_blend_co",
			"rnt_sppz_2a2_luchs\data\rnt_luchs_turm_instr_blend_co",
			"rnt_sppz_2a2_luchs\data\rnt_luchs_turm_innen_blend_co",
			"rnt_sppz_2a2_luchs\data\rnt_luchs_mk_wspiegel_blend_co",
			"rnt_sppz_2a2_luchs\data\rnt_luchs_innen_wanne_blend_co",
			"rnt_sppz_2a2_luchs\data\rnt_luchs_w_turm_luken_blend_co",
			"rnt_sppz_2a2_luchs\data\rnt_luchs_w_reifen_fahrwerk_blend_co",
			"rnt_sppz_2a2_luchs\data\rnt_luchs_lafette_bf_kabel_2_blend_co"
		};
	};

	class BNB_FA_BW2_Luchs_Tropen : BNB_FA_BW2_Luchs {
		scope = 2;
		scopeCurator = 2;
		FACTION(Tropen)
		crew = "BNB_FA_BW2_Crew_Tropen";
		typicalCargo[] = { "BNB_FA_BW2_Crew_Tropen" };

		hiddenSelectionsTextures[] = {
			"rnt_sppz_2a2_luchs\data\rnt_luchs_d_schild_kleint_blend_co",
			"rnt_sppz_2a2_luchs\data\rnt_luchs_d_dach_kleint_blend_co",
			"rnt_sppz_2a2_luchs\data\rnt_luchs_d_dach_teile_schrauben_blend_co",
			"rnt_sppz_2a2_luchs\data\rnt_luchs_d_rest_teile_blend_co",
			"rnt_sppz_2a2_luchs\data\rnt_luchs_d_rest_fahrwerk_blend_co",
			"rnt_sppz_2a2_luchs\data\rnt_luchs_d_wanne_blend_co",
			"rnt_sppz_2a2_luchs\data\rnt_luchs_d_lafette_bf_kabel_blend_co",
			"rnt_sppz_2a2_luchs\data\rnt_luchs_fahrer_funker_blend_co",
			"rnt_sppz_2a2_luchs\data\rnt_luchs_instr_blend_co",
			"rnt_sppz_2a2_luchs\data\rnt_luchs_turm_instr_blend_co",
			"rnt_sppz_2a2_luchs\data\rnt_luchs_d_turm_innen_blend_co",
			"rnt_sppz_2a2_luchs\data\rnt_luchs_d_mk_wspiegel_blend_co",
			"rnt_sppz_2a2_luchs\data\rnt_luchs_innen_wanne_blend_co","rnt_sppz_2a2_luchs\data\rnt_luchs_d_turm_luken_blend_co",
			"rnt_sppz_2a2_luchs\data\rnt_luchs_d_reifen_fahrwerk_blend_co",
			"rnt_sppz_2a2_luchs\data\rnt_luchs_d_lafette_bf_kabel_2_blend_co"
		};
	};

	class BNB_FA_BW2_Luchs_Fleck : BNB_FA_BW2_Luchs {
		scope = 2;
		scopeCurator = 2;
		FACTION(Fleck)
		crew = "BNB_FA_BW2_Crew_Fleck";
		typicalCargo[] = { "BNB_FA_BW2_Crew_Fleck" };

		hiddenSelectionsTextures[] = {
			"rnt_sppz_2a2_luchs\data\rnt_luchs_schild_kleint_blend_co",
			"rnt_sppz_2a2_luchs\data\rnt_luchs_dach_kleint_blend_co",
			"rnt_sppz_2a2_luchs\data\rnt_luchs_dach_teile_schrauben_blend_co",
			"rnt_sppz_2a2_luchs\data\rnt_luchs_rest_teile_blend_co",
			"rnt_sppz_2a2_luchs\data\rnt_luchs_rest_fahrwerk_blend_co",
			"rnt_sppz_2a2_luchs\data\rnt_luchs_wanne_blend_co",
			"rnt_sppz_2a2_luchs\data\rnt_luchs_lafette_bf_kabel_blend_co",
			"rnt_sppz_2a2_luchs\data\rnt_luchs_fahrer_funker_blend_co",
			"rnt_sppz_2a2_luchs\data\rnt_luchs_instr_blend_co",
			"rnt_sppz_2a2_luchs\data\rnt_luchs_turm_instr_blend_co",
			"rnt_sppz_2a2_luchs\data\rnt_luchs_turm_innen_blend_co",
			"rnt_sppz_2a2_luchs\data\rnt_luchs_mk_wspiegel_blend_co",
			"rnt_sppz_2a2_luchs\data\rnt_luchs_innen_wanne_blend_co",
			"rnt_sppz_2a2_luchs\data\rnt_luchs_turm_luken_blend_co",
			"rnt_sppz_2a2_luchs\data\rnt_luchs_reifen_fahrwerk_blend_co",
			"rnt_sppz_2a2_luchs\data\rnt_luchs_lafette_bf_kabel_2_blend_co"
		};

		class TransportBackpacks {
			ARMOURED_VEHICLE_BACKPACKS(Fleck)
		};
	};
};
