class Extended_InitPost_EventHandlers {
	class BNB_FA_BW2_LKW_Repair { ADD_MULTIPLE_PARTS(1,'ACE_Wheel',2,'ACE_Track') };
};

class CfgVehicles {
	//////////////////////
	// LKW Base Classes //
	//////////////////////
	class rnt_lkw_5t_mil_gl_kat_i_transport_trope;
	class BNB_FA_BW2_LKW_5t_Transport : rnt_lkw_5t_mil_gl_kat_i_transport_trope {
		scope = 0;
		side = 1;
		displayName = "LKW Transport 5t";

		class TransportMagazines {
			VEHICLE_MAGAZINES
		};

		class TransportWeapons {
			VEHICLE_WEAPONS
		};

		class TransportItems {
			VEHICLE_ITEMS
			VEHICLE_AT_AMMO
		};

		class TransportBackpacks {
			VEHICLE_BACKPACKS(Fleck)
		};
	};

	class rnt_lkw_7t_mil_gl_kat_i_transport_trope;
	class BNB_FA_BW2_LKW_7t_Transport : rnt_lkw_7t_mil_gl_kat_i_transport_trope {
		scope = 0;
		side = 1;
		displayName = "LKW Transport 7t";

		class TransportMagazines {
			VEHICLE_MAGAZINES
		};

		class TransportWeapons {
			VEHICLE_WEAPONS
		};

		class TransportItems {
			VEHICLE_ITEMS
			VEHICLE_AT_AMMO
		};

		class TransportBackpacks {
			VEHICLE_BACKPACKS(Fleck)
		};
	};

	class rnt_lkw_5t_mil_gl_kat_i_fuel_trope;
	class BNB_FA_BW2_LKW_Fuel : rnt_lkw_5t_mil_gl_kat_i_fuel_trope {
		scope = 0;
		side = 1;
		displayName = "LKW Fuel 7t";

		class TransportMagazines {
			VEHICLE_MAGAZINES
		};

		class TransportWeapons {
			VEHICLE_WEAPONS
		};

		class TransportItems {
			VEHICLE_ITEMS
		};

		class TransportBackpacks {
			VEHICLE_BACKPACKS(Fleck)
		};
	};

	class rnt_lkw_10t_mil_gl_kat_i_repair_trope;
	class BNB_FA_BW2_LKW_Repair : rnt_lkw_10t_mil_gl_kat_i_repair_trope {
		scope = 0;
		side = 1;
		displayName = "LKW Repair 10t";
		ace_repair_canRepair = 1;

		class TransportMagazines {
			VEHICLE_MAGAZINES
		};

		class TransportWeapons {
			VEHICLE_WEAPONS
		};

		class TransportItems {
			VEHICLE_ITEMS
			class _xx_Toolkit {
				name = "Toolkit";
				count = 1;
			};
		};

		class TransportBackpacks {
			VEHICLE_BACKPACKS(Fleck)
		};
	};


	class rnt_lkw_7t_mil_gl_kat_i_mun_trope;
	class BNB_FA_BW2_LKW_Resupply : rnt_lkw_7t_mil_gl_kat_i_mun_trope {
		scope = 0;
		side = 1;
		displayName = "LKW Resupply 7t";

		class TransportMagazines {
			VEHICLE_MAGAZINES
		};

		class TransportWeapons {
			VEHICLE_WEAPONS
		};

		class TransportItems {
			VEHICLE_ITEMS
			class _xx_ACE_salineIV {
				name = "ACE_salineIV";
				count = 10;
			};
			class _xx_ACE_salineIV_500 {
				name = "ACE_salineIV_500";
				count = 10;
			};
			class _xx_ACE_salineIV_250 {
				name = "ACE_salineIV_250";
				count = 10;
			};
			class _xx_ACE_elasticBandage {
				name = "ACE_elasticBandage";
				count = 50;
			};
			class _xx_ACE_packingBandage {
				name = "ACE_packingBandage";
				count = 50;
			};
			class _xx_ACE_quikclot {
				name = "ACE_quikclot";
				count = 50;
			};
			class _xx_ACE_tourniquet {
				name = "ACE_tourniquet";
				count = 10;
			};
			class _xx_ACE_epinephrine {
				name = "ACE_epinephrine";
				count = 30;
			};
			class _xx_ACE_morphine {
				name = "ACE_morphine";
				count = 30;
			};
			class _xx_ACE_adenosine {
				name = "ACE_adenosine";
				count = 30;
			};
			class _xx_ACE_bodyBag {
				name = "ACE_bodyBag";
				count = 10;
			};
		};

		class TransportBackpacks {
			VEHICLE_BACKPACKS(Fleck)
		};
	};

	/////////////////////
	// LKW Camouflages //
	/////////////////////
	// Winter
	class BNB_FA_BW2_LKW_5t_Transport_Winter : BNB_FA_BW2_LKW_5t_Transport {
		scope = 2;
		scopeCurator = 2;
		FACTION(Winter)
		crew = "BNB_FA_BW2_Rifleman_Winter";
		typicalCargo[] = { "BNB_FA_BW2_Rifleman_Winter" };

		hiddenSelectionsTextures[] = {
			"rnt_t_base\data\rnt_t_base_kabine_winter_blend_co",
			"rnt_t_base\data\rnt_t_base_fahrgestell_blend_co",
			"rnt_t_base\data\rnt_t_base_instr_blend_co",
			"rnt_t_base\data\rnt_t_base_innenteile_blend_co",
			"rnt_t_base\data\rnt_t_base_anbauteile_blend_co",
			"rnt_t_base\data\rnt_t_base_kisten_blend_co",
			"rnt_lkw_5t_mil_gl_kat_i\data\rnt_5t_ladefaeche_winter_blend_co",
			"rnt_lkw_5t_mil_gl_kat_i\data\rnt_5t_tank_blend_co"
		};
	};

	class BNB_FA_BW2_LKW_7t_Transport_Winter : BNB_FA_BW2_LKW_7t_Transport {
		scope = 2;
		scopeCurator = 2;
		FACTION(Winter)
		crew = "BNB_FA_BW2_Rifleman_Winter";
		typicalCargo[] = { "BNB_FA_BW2_Rifleman_Winter" };

		hiddenSelectionsTextures[] = {
			"rnt_t_base\data\rnt_t_base_kabine_winter_blend_co",
			"rnt_t_base\data\rnt_t_base_fahrgestell_blend_co",
			"rnt_t_base\data\rnt_t_base_instr_blend_co",
			"rnt_t_base\data\rnt_t_base_innenteile_blend_co",
			"rnt_t_base\data\rnt_t_base_anbauteile_blend_co",
			"rnt_t_base\data\rnt_t_base_kisten_blend_co",
			"rnt_lkw_7t_mil_gl_kat_i\data\rnt_7t_kiste_plane_blend_co",
			"rnt_lkw_7t_mil_gl_kat_i\data\rnt_7t_ladeflaeche_plane_winter_blend_co"
		};
	};

	class BNB_FA_BW2_LKW_Fuel_Winter : BNB_FA_BW2_LKW_Fuel {
		scope = 2;
		scopeCurator = 2;
		FACTION(Winter)
		crew = "BNB_FA_BW2_Rifleman_Winter";
		typicalCargo[] = { "BNB_FA_BW2_Rifleman_Winter" };

		hiddenSelectionsTextures[] = {
			"rnt_t_base\data\rnt_t_base_kabine_winter_blend_co",
			"rnt_t_base\data\rnt_t_base_fahrgestell_blend_co",
			"rnt_t_base\data\rnt_t_base_instr_blend_co",
			"rnt_t_base\data\rnt_t_base_innenteile_blend_co",
			"rnt_t_base\data\rnt_t_base_anbauteile_blend_co",
			"rnt_t_base\data\rnt_t_base_kisten_blend_co",
			"rnt_lkw_5t_mil_gl_kat_i\data\rnt_5t_ladefaeche_winter_blend_co",
			"rnt_lkw_5t_mil_gl_kat_i\data\rnt_5t_tank_blend_co"
		};
	};

	class BNB_FA_BW2_LKW_Repair_Winter : BNB_FA_BW2_LKW_Repair {
		scope = 2;
		scopeCurator = 2;
		FACTION(Winter)
		crew = "BNB_FA_BW2_Rifleman_Winter";
		typicalCargo[] = { "BNB_FA_BW2_Rifleman_Winter" };

		hiddenSelectionsTextures[] = {
			"rnt_t_base\data\rnt_t_base_kabine_winter_blend_co",
			"rnt_t_base\data\rnt_t_base_fahrgestell_blend_co",
			"rnt_t_base\data\rnt_t_base_instr_blend_co",
			"rnt_t_base\data\rnt_t_base_innenteile_blend_co",
			"rnt_t_base\data\rnt_t_base_anbauteile_blend_co",
			"rnt_t_base\data\rnt_t_base_kisten_blend_co",
			"rnt_lkw_10t_mil_gl_kat_i\data\rnt_10t_ladeflaeche_winter_blend_co",
			"rnt_lkw_10t_mil_gl_kat_i\data\rnt_10t_ladung_blend_co"
		};
	};

	class BNB_FA_BW2_LKW_Resupply_Winter : BNB_FA_BW2_LKW_Resupply {
		scope = 2;
		scopeCurator = 2;
		FACTION(Winter)
		crew = "BNB_FA_BW2_Rifleman_Winter";
		typicalCargo[] = { "BNB_FA_BW2_Rifleman_Winter" };

		hiddenSelectionsTextures[] = {
			"rnt_t_base\data\rnt_t_base_kabine_winter_blend_co",
			"rnt_t_base\data\rnt_t_base_fahrgestell_blend_co",
			"rnt_t_base\data\rnt_t_base_instr_blend_co",
			"rnt_t_base\data\rnt_t_base_innenteile_blend_co",
			"rnt_t_base\data\rnt_t_base_anbauteile_blend_co",
			"rnt_t_base\data\rnt_t_base_kisten_blend_co",
			"rnt_lkw_7t_mil_gl_kat_i\data\rnt_7t_kiste_plane_blend_co",
			"rnt_lkw_7t_mil_gl_kat_i\data\rnt_7t_ladeflaeche_plane_winter_blend_co"
		};
	};


	// Tropentarn
	class BNB_FA_BW2_LKW_5t_Transport_Tropen : BNB_FA_BW2_LKW_5t_Transport {
		scope = 2;
		scopeCurator = 2;
		FACTION(Tropen)
		crew = "BNB_FA_BW2_Rifleman_Tropen";
		typicalCargo[] = { "BNB_FA_BW2_Rifleman_Tropen" };

		hiddenSelectionsTextures[] = {
			"rnt_t_base\data\rnt_t_base_kabine_trope_blend_co",
			"rnt_t_base\data\rnt_t_base_fahrgestell_trope_blend_co",
			"rnt_t_base\data\rnt_t_base_instr_blend_co",
			"rnt_t_base\data\rnt_t_base_innenteile_blend_co",
			"rnt_t_base\data\rnt_t_base_anbauteile_trope_blend_co",
			"rnt_t_base\data\rnt_t_base_kisten_blend_co",
			"rnt_lkw_5t_mil_gl_kat_i\data\rnt_5t_ladefaeche_trope_blend_co",
			"rnt_lkw_5t_mil_gl_kat_i\data\rnt_5t_tank_blend_co"
		};
	};

	class BNB_FA_BW2_LKW_7t_Transport_Tropen : BNB_FA_BW2_LKW_7t_Transport {
		scope = 2;
		scopeCurator = 2;
		FACTION(Tropen)
		crew = "BNB_FA_BW2_Rifleman_Tropen";
		typicalCargo[] = { "BNB_FA_BW2_Rifleman_Tropen" };

		hiddenSelectionsTextures[] = {
			"rnt_t_base\data\rnt_t_base_kabine_trope_blend_co",
			"rnt_t_base\data\rnt_t_base_fahrgestell_trope_blend_co",
			"rnt_t_base\data\rnt_t_base_instr_blend_co",
			"rnt_t_base\data\rnt_t_base_innenteile_blend_co",
			"rnt_t_base\data\rnt_t_base_anbauteile_trope_blend_co",
			"rnt_t_base\data\rnt_t_base_kisten_blend_co",
			"rnt_lkw_7t_mil_gl_kat_i\data\rnt_7t_kiste_plane_blend_co",
			"rnt_lkw_7t_mil_gl_kat_i\data\rnt_7t_ladeflaeche_plane_trope_blend_co"
		};
	};

	class BNB_FA_BW2_LKW_Fuel_Tropen : BNB_FA_BW2_LKW_Fuel {
		scope = 2;
		scopeCurator = 2;
		FACTION(Tropen)
		crew = "BNB_FA_BW2_Rifleman_Tropen";
		typicalCargo[] = { "BNB_FA_BW2_Rifleman_Tropen" };

		hiddenSelectionsTextures[] = {
			"rnt_t_base\data\rnt_t_base_kabine_trope_blend_co",
			"rnt_t_base\data\rnt_t_base_fahrgestell_trope_blend_co",
			"rnt_t_base\data\rnt_t_base_instr_blend_co",
			"rnt_t_base\data\rnt_t_base_innenteile_blend_co",
			"rnt_t_base\data\rnt_t_base_anbauteile_trope_blend_co",
			"rnt_t_base\data\rnt_t_base_kisten_blend_co",
			"rnt_lkw_5t_mil_gl_kat_i\data\rnt_5t_ladefaeche_trope_blend_co",
			"rnt_lkw_5t_mil_gl_kat_i\data\rnt_5t_tank_blend_co"
		};
	};

	class BNB_FA_BW2_LKW_Repair_Tropen : BNB_FA_BW2_LKW_Repair {
		scope = 2;
		scopeCurator = 2;
		FACTION(Tropen)
		crew = "BNB_FA_BW2_Rifleman_Tropen";
		typicalCargo[] = { "BNB_FA_BW2_Rifleman_Tropen" };

		hiddenSelectionsTextures[] = {
			"rnt_t_base\data\rnt_t_base_kabine_trope_blend_co",
			"rnt_t_base\data\rnt_t_base_fahrgestell_trope_blend_co",
			"rnt_t_base\data\rnt_t_base_instr_blend_co",
			"rnt_t_base\data\rnt_t_base_innenteile_blend_co",
			"rnt_t_base\data\rnt_t_base_anbauteile_trope_blend_co",
			"rnt_t_base\data\rnt_t_base_kisten_blend_co",
			"rnt_lkw_10t_mil_gl_kat_i\data\rnt_10t_ladeflaeche_trope_blend_co",
			"rnt_lkw_10t_mil_gl_kat_i\data\rnt_10t_ladung_blend_co"
		};
	};

	class BNB_FA_BW2_LKW_Resupply_Tropen : BNB_FA_BW2_LKW_Resupply {
		scope = 2;
		scopeCurator = 2;
		FACTION(Tropen)
		crew = "BNB_FA_BW2_Rifleman_Tropen";
		typicalCargo[] = { "BNB_FA_BW2_Rifleman_Tropen" };

		hiddenSelectionsTextures[] = {
			"rnt_t_base\data\rnt_t_base_kabine_trope_blend_co",
			"rnt_t_base\data\rnt_t_base_fahrgestell_trope_blend_co",
			"rnt_t_base\data\rnt_t_base_instr_blend_co",
			"rnt_t_base\data\rnt_t_base_innenteile_blend_co",
			"rnt_t_base\data\rnt_t_base_anbauteile_trope_blend_co",
			"rnt_t_base\data\rnt_t_base_kisten_blend_co",
			"rnt_lkw_7t_mil_gl_kat_i\data\rnt_7t_kiste_plane_blend_co",
			"rnt_lkw_7t_mil_gl_kat_i\data\rnt_7t_ladeflaeche_plane_trope_blend_co"
		};
	};


	// Flecktarn
	class BNB_FA_BW2_LKW_5t_Transport_Fleck : BNB_FA_BW2_LKW_5t_Transport {
		scope = 2;
		scopeCurator = 2;
		FACTION(Fleck)
		crew = "BNB_FA_BW2_Rifleman_Fleck";
		typicalCargo[] = { "BNB_FA_BW2_Rifleman_Fleck" };

		hiddenSelectionsTextures[] = {
			"rnt_t_base\data\rnt_t_base_kabine_blend_co",
			"rnt_t_base\data\rnt_t_base_fahrgestell_blend_co",
			"rnt_t_base\data\rnt_t_base_instr_blend_co",
			"rnt_t_base\data\rnt_t_base_innenteile_blend_co",
			"rnt_t_base\data\rnt_t_base_anbauteile_blend_co",
			"rnt_t_base\data\rnt_t_base_kisten_blend_co",
			"rnt_lkw_5t_mil_gl_kat_i\data\rnt_5t_ladefaeche_blend_co",
			"rnt_lkw_5t_mil_gl_kat_i\data\rnt_5t_tank_blend_co"
		};
	};

	class BNB_FA_BW2_LKW_7t_Transport_Fleck : BNB_FA_BW2_LKW_7t_Transport {
		scope = 2;
		scopeCurator = 2;
		FACTION(Fleck)
		crew = "BNB_FA_BW2_Rifleman_Fleck";
		typicalCargo[] = { "BNB_FA_BW2_Rifleman_Fleck" };

		hiddenSelectionsTextures[] = {
			"rnt_t_base\data\rnt_t_base_kabine_blend_co",
			"rnt_t_base\data\rnt_t_base_fahrgestell_blend_co",
			"rnt_t_base\data\rnt_t_base_instr_blend_co",
			"rnt_t_base\data\rnt_t_base_innenteile_blend_co",
			"rnt_t_base\data\rnt_t_base_anbauteile_blend_co",
			"rnt_t_base\data\rnt_t_base_kisten_blend_co",
			"rnt_lkw_7t_mil_gl_kat_i\data\rnt_7t_kiste_plane_blend_co",
			"rnt_lkw_7t_mil_gl_kat_i\data\rnt_7t_ladeflaeche_plane_blend_co"
		};
	};

	class BNB_FA_BW2_LKW_Fuel_Fleck : BNB_FA_BW2_LKW_Fuel {
		scope = 2;
		scopeCurator = 2;
		FACTION(Fleck)
		crew = "BNB_FA_BW2_Rifleman_Fleck";
		typicalCargo[] = { "BNB_FA_BW2_Rifleman_Fleck" };

		hiddenSelectionsTextures[] = {
			"rnt_t_base\data\rnt_t_base_kabine_blend_co",
			"rnt_t_base\data\rnt_t_base_fahrgestell_blend_co",
			"rnt_t_base\data\rnt_t_base_instr_blend_co",
			"rnt_t_base\data\rnt_t_base_innenteile_blend_co",
			"rnt_t_base\data\rnt_t_base_anbauteile_blend_co",
			"rnt_t_base\data\rnt_t_base_kisten_blend_co",
			"rnt_lkw_5t_mil_gl_kat_i\data\rnt_5t_ladefaeche_blend_co",
			"rnt_lkw_5t_mil_gl_kat_i\data\rnt_5t_tank_blend_co"
		};
	};

	class BNB_FA_BW2_LKW_Repair_Fleck : BNB_FA_BW2_LKW_Repair {
		scope = 2;
		scopeCurator = 2;
		FACTION(Fleck)
		crew = "BNB_FA_BW2_Rifleman_Fleck";
		typicalCargo[] = { "BNB_FA_BW2_Rifleman_Fleck" };

		hiddenSelectionsTextures[] = {
			"rnt_t_base\data\rnt_t_base_kabine_blend_co",
			"rnt_t_base\data\rnt_t_base_fahrgestell_blend_co",
			"rnt_t_base\data\rnt_t_base_instr_blend_co",
			"rnt_t_base\data\rnt_t_base_innenteile_blend_co",
			"rnt_t_base\data\rnt_t_base_anbauteile_blend_co",
			"rnt_t_base\data\rnt_t_base_kisten_blend_co",
			"rnt_lkw_10t_mil_gl_kat_i\data\rnt_10t_ladeflaeche_blend_co",
			"rnt_lkw_10t_mil_gl_kat_i\data\rnt_10t_ladung_blend_co"
		};
	};

	class BNB_FA_BW2_LKW_Resupply_Fleck : BNB_FA_BW2_LKW_Resupply {
		scope = 2;
		scopeCurator = 2;
		FACTION(Fleck)
		crew = "BNB_FA_BW2_Rifleman_Fleck";
		typicalCargo[] = { "BNB_FA_BW2_Rifleman_Fleck" };

		hiddenSelectionsTextures[] = {
			"rnt_t_base\data\rnt_t_base_kabine_blend_co",
			"rnt_t_base\data\rnt_t_base_fahrgestell_blend_co",
			"rnt_t_base\data\rnt_t_base_instr_blend_co",
			"rnt_t_base\data\rnt_t_base_innenteile_blend_co",
			"rnt_t_base\data\rnt_t_base_anbauteile_blend_co",
			"rnt_t_base\data\rnt_t_base_kisten_blend_co",
			"rnt_lkw_7t_mil_gl_kat_i\data\rnt_7t_kiste_plane_blend_co",
			"rnt_lkw_7t_mil_gl_kat_i\data\rnt_7t_ladeflaeche_plane_blend_co"
		};
	};
};
