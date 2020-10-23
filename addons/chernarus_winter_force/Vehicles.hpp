class CfgGroups {
	class Indep {

		class BNB_FA_Chernarus_Winter_Force {
			name = "Chernarus Winter Force";

			class Motorized {
				name = "Motorized Infantry";

				class BNB_FA_CWF_Motorized_Squad_Winter {
					name = "Squad";
					side = 2;
					faction = "BNB_FA_Chernarus_Winter_Force";
					icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "BNB_FA_CWF_UAZ32_Closed_Winter";
					};
					class Unit1 {
						position[] = {20,0,0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "BNB_FA_CWF_UAZ_DShKM_Winter";
					};
					class Unit2 {
						position[] = {5,-5,0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "BNB_FA_CWF_TLeader_Winter";
					};
					class Unit3 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "BNB_FA_CWF_Grenadier_Winter";
					};
					class Unit4 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "BNB_FA_CWF_Machinegunner";
					};
					class Unit5 {
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "BNB_FA_CWF_Medic_Winter";
					};
					class Unit6 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "BNB_FA_CWF_Rifleman_AT_Winter";
					};
					class Unit7 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "BNB_FA_CWF_Rifleman_Winter";
					};
					class Unit8 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "BNB_FA_CWF_Rifleman_Winter";
					};
				};

				class BNB_FA_CWF_Motorized_Sentry_Winter {
					name = "Sentry";
					side = 2;
					faction = "BNB_FA_Chernarus_Winter_Force";
					icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "BNB_FA_CWF_UAZ_DShKM_Winter";
					};
					class Unit1 {
						position[] = {-5,-5,0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "BNB_FA_CWF_Rifleman_AT_Winter";
					};
				};
			};

			class Mechanized {
				name = "Mechanized Infantry";

				class BNB_FA_CWF_Mechanized_Sentry_Winter {
					name = "Sentry";
					side = 2;
					faction = "BNB_FA_Chernarus_Winter_Force";
					icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "BNB_FA_CWF_BTR_60_Winter";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "BNB_FA_CWF_Rifleman_AT_Winter";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "BNB_FA_CWF_Rifleman_Winter";
					};
				};
			};

			class Armored {
				name = "Armor";

				class BNB_FA_CWF_Armored_Sentry_Winter {
					name = "Sentry";
					side = 2;
					faction = "BNB_FA_Chernarus_Winter_Force";
					icon = "\A3\ui_f\data\map\markers\nato\n_armor.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "BNB_FA_CWF_T72_Winter";
					};
				};
			};

			class Artillery {
				name = "Artillery";

				class BNB_FA_CWF_Artillery_Sentry_Winter {
					name = "Sentry";
					side = 2;
					faction = "BNB_FA_Chernarus_Winter_Force";
					icon = "\A3\ui_f\data\map\markers\nato\n_art.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "BNB_FA_CWF_Ural_BM21_Winter";
					};
				};
			};
		};
	};
};

class CBA_Extended_EventHandlers_base;

class CfgVehicles {
	class rhsgref_ins_g_bmp1;
	class rhsgref_ins_g_bmp1_OCimport_01 : rhsgref_ins_g_bmp1 { scope = 0; class EventHandlers; class Turrets; };
	class rhsgref_ins_g_bmp1_OCimport_02 : rhsgref_ins_g_bmp1_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class MainTurret;
			class Com_BMP1;
			class CargoTurret_01;
			class CargoTurret_02;
			class CargoTurret_03;
			class CargoTurret_04;
			class CargoTurret_05;
			class CargoTurret_06;
			class CargoTurret_07;
			class CargoTurret_08;
			class CargoTurret_09;
			class CargoTurret_10;
		};
	};
	class BNB_FA_CWF_BMP_1_Winter : rhsgref_ins_g_bmp1_OCimport_02 {
		// editorPreview = "\x\bnb_fa\chernarus_winter_force\data\preview\bnb_fa_cwf_bmp_1_winter.jpg";
		author = "Jebby";
		scope = 2;
		scopeCurator = 2;
		displayName = "BMP-1";
		side = 2;
		faction = "BNB_FA_Chernarus_Winter_Force";
		crew = "BNB_FA_CWF_Crew_Winter";

		class Turrets : Turrets {
			class MainTurret : MainTurret { gunnerType = "BNB_FA_CWF_Crew_Winter"; };
			class Com_BMP1 : Com_BMP1 { gunnerType = "BNB_FA_CWF_Crew_Winter"; };
			class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
			class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
			class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
			class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
			class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
			class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
			class CargoTurret_07 : CargoTurret_07 { gunnerType = ""; };
			class CargoTurret_08 : CargoTurret_08 { gunnerType = ""; };
			class CargoTurret_09 : CargoTurret_09 { gunnerType = ""; };
			class CargoTurret_10 : CargoTurret_10 { gunnerType = ""; };
		};



		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
		ALiVE_orbatCreator_texture = "ANA";
	};

	class rhsgref_ins_g_btr60;
	class rhsgref_ins_g_btr60_OCimport_01 : rhsgref_ins_g_btr60 { scope = 0; class EventHandlers; class Turrets; };
	class rhsgref_ins_g_btr60_OCimport_02 : rhsgref_ins_g_btr60_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class MainTurret;
			class CommanderOptics;
			class CargoTurret_01;
			class CargoTurret_02;
			class CargoTurret_03;
			class CargoTurret_04;
			class CargoTurret_05;
			class CargoTurret_06;
			class CargoTurret_07;
			class CargoTurret_08;
			class Commander_Out;
		};
	};
	class BNB_FA_CWF_BTR_60_Winter : rhsgref_ins_g_btr60_OCimport_02 {
		// editorPreview = "\x\bnb_fa\chernarus_winter_force\data\preview\bnb_fa_cwf_btr_60_winter.jpg";
		author = "Jebby";
		scope = 2;
		scopeCurator = 2;
		displayName = "BTR-60";
		side = 2;
		faction = "BNB_FA_Chernarus_Winter_Force";
		crew = "BNB_FA_CWF_Crew_Winter";

		class Turrets : Turrets {
			class MainTurret : MainTurret { gunnerType = "BNB_FA_CWF_Crew_Winter"; };
			class CommanderOptics : CommanderOptics { gunnerType = "BNB_FA_CWF_Crew_Winter"; };
			class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
			class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
			class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
			class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
			class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
			class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
			class CargoTurret_07 : CargoTurret_07 { gunnerType = ""; };
			class CargoTurret_08 : CargoTurret_08 { gunnerType = ""; };
			class Commander_Out : Commander_Out { gunnerType = ""; };
		};



		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
		ALiVE_orbatCreator_texture = "Camo1";
	};

	class rhsgref_ins_g_ural_Zu23;
	class rhsgref_ins_g_ural_Zu23_OCimport_01 : rhsgref_ins_g_ural_Zu23 { scope = 0; class EventHandlers; class Turrets; };
	class rhsgref_ins_g_ural_Zu23_OCimport_02 : rhsgref_ins_g_ural_Zu23_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class MainTurret;
			class CargoTurret_01;
			class CargoTurret_02;
			class CargoTurret_03;
		};
	};
	class BNB_FA_CWF_Ural_ZU23 : rhsgref_ins_g_ural_Zu23_OCimport_02 {
		// editorPreview = "\x\bnb_fa\chernarus_winter_force\data\preview\bnb_fa_cwf_ural_zu23.jpg";
		author = "Jebby";
		scope = 2;
		scopeCurator = 2;
		displayName = "Ural ZU-23";
		side = 2;
		faction = "BNB_FA_Chernarus_Winter_Force";
		crew = "BNB_FA_CWF_Crew_Winter";

		class Turrets : Turrets {
			class MainTurret : MainTurret { gunnerType = "BNB_FA_CWF_Crew_Winter"; };
			class CargoTurret_01 : CargoTurret_01 { gunnerType = "BNB_FA_CWF_Crew_Winter"; };
			class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
			class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
		};



		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
		ALiVE_orbatCreator_texture = "Russia";
	};

	class rhsgref_ins_g_BM21;
	class rhsgref_ins_g_BM21_OCimport_01 : rhsgref_ins_g_BM21 { scope = 0; class EventHandlers; class Turrets; };
	class rhsgref_ins_g_BM21_OCimport_02 : rhsgref_ins_g_BM21_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class MainTurret;
		};
	};
	class BNB_FA_CWF_Ural_BM21_Winter : rhsgref_ins_g_BM21_OCimport_02 {
		// editorPreview = "\x\bnb_fa\chernarus_winter_force\data\preview\bnb_fa_cwf_ural_bm21_winter.jpg";
		author = "Jebby";
		scope = 2;
		scopeCurator = 2;
		displayName = "Ural BM-21";
		side = 2;
		faction = "BNB_FA_Chernarus_Winter_Force";
		crew = "BNB_FA_CWF_Crew_Winter";

		class Turrets : Turrets {
			class MainTurret : MainTurret { gunnerType = "BNB_FA_CWF_Crew_Winter"; };
		};



		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
		ALiVE_orbatCreator_texture = "Russia";
	};

	class LOP_AFR_T55;
	class LOP_AFR_T55_OCimport_01 : LOP_AFR_T55 { scope = 0; class EventHandlers; class Turrets; };
	class LOP_AFR_T55_OCimport_02 : LOP_AFR_T55_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class MainTurret;
		};
	};
	class BNB_FA_CWF_T55_Winter : LOP_AFR_T55_OCimport_02 {
		// editorPreview = "\x\bnb_fa\chernarus_winter_force\data\preview\bnb_fa_cwf_t55_winter.jpg";
		author = "Jebby";
		scope = 2;
		scopeCurator = 2;
		displayName = "T-55";
		side = 2;
		faction = "BNB_FA_Chernarus_Winter_Force";
		crew = "BNB_FA_CWF_Crew_Winter";

		class Turrets : Turrets {
			class MainTurret : MainTurret { gunnerType = "BNB_FA_CWF_Crew_Winter"; };
		};



		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
		ALiVE_orbatCreator_texture = "ANA";
	};

	class Tank_F;
	class rhs_a3t72tank_base : Tank_F {
		class Turrets;
	};
	class rhs_t72bc_tv : rhs_a3t72tank_base {
		class Turrets : Turrets {
			class MainTurret;
		};
	};
	class rhsgref_ins_t72bc : rhs_t72bc_tv {
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				class Turrets;
			};
		};
	};
	class rhsgref_ins_g_t72bc : rhsgref_ins_t72bc {
		class EventHandlers;
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				class Turrets : Turrets {
					class CommanderOptics;
					class CommanderMG;
				};
			};
		};
	};
	class BNB_FA_CWF_T72_Winter : rhsgref_ins_g_t72bc {
		// editorPreview = "\x\bnb_fa\chernarus_winter_force\data\preview\bnb_fa_cwf_t72_winter.jpg";
		author = "Jebby";
		scope = 2;
		scopeCurator = 2;
		displayName = "T-72";
		side = 2;
		faction = "BNB_FA_Chernarus_Winter_Force";
		crew = "BNB_FA_CWF_Crew_Winter";
		typicalCargo[] = { "BNB_FA_CWF_Crew_Winter" };

		class Turrets : Turrets {
			class MainTurret : MainTurret {
				gunnerType = "BNB_FA_CWF_Crew_Winter";

				class Turrets : Turrets {
					class CommanderOptics : CommanderOptics { gunnerType = "BNB_FA_CWF_Crew_Winter"; };
					class CommanderMG : CommanderMG { gunnerType = "BNB_FA_CWF_Crew_Winter"; };
				};
			};
		};



		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
		ALiVE_orbatCreator_texture = "ANA";
	};

	class rhsgref_ins_g_ural;
	class BNB_FA_CWF_Ural_4320 : rhsgref_ins_g_ural {
		// editorPreview = "\x\bnb_fa\chernarus_winter_force\data\preview\bnb_fa_cwf_uaz_dshkm_winter.jpg";
		author = "Jebby";
		scope = 2;
		scopeCurator = 2;
		displayName = "Ural-4320";
		side = 2;
		faction = "BNB_FA_Chernarus_Winter_Force";
		crew = "BNB_FA_CWF_Rifleman_Winter";
	};

	class rhsgref_ins_uaz_dshkm;
	class rhsgref_ins_uaz_dshkm_OCimport_01 : rhsgref_ins_uaz_dshkm { scope = 0; class EventHandlers; class Turrets; };
	class rhsgref_ins_uaz_dshkm_OCimport_02 : rhsgref_ins_uaz_dshkm_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class MainTurret;
			class CargoTurret_01;
		};
	};
	class BNB_FA_CWF_UAZ_DShKM_Winter : rhsgref_ins_uaz_dshkm_OCimport_02 {
		// editorPreview = "\x\bnb_fa\chernarus_winter_force\data\preview\bnb_fa_cwf_uaz_dshkm_winter.jpg";
		author = "Jebby";
		scope = 2;
		scopeCurator = 2;
		displayName = "UAZ DShKM";
		side = 2;
		faction = "BNB_FA_Chernarus_Winter_Force";
		crew = "BNB_FA_CWF_Rifleman_Winter";

		class Turrets : Turrets {
			class MainTurret : MainTurret { gunnerType = "BNB_FA_CWF_Rifleman_Winter"; };
			class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
		};



		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
		ALiVE_orbatCreator_texture = "White";
	};

	class rhsgref_ins_uaz;
	class rhsgref_ins_uaz_OCimport_01 : rhsgref_ins_uaz { scope = 0; class EventHandlers; };
	class rhsgref_ins_uaz_OCimport_02 : rhsgref_ins_uaz_OCimport_01 { scope = 0; class EventHandlers; };
	class BNB_FA_CWF_UAZ32_Closed_Winter : rhsgref_ins_uaz_OCimport_02 {
		// editorPreview = "\x\bnb_fa\chernarus_winter_force\data\preview\bnb_fa_cwf_uaz32_closed_winter.jpg";
		author = "Jebby";
		scope = 2;
		scopeCurator = 2;
		displayName = "UAZ-32 Closed";
		side = 2;
		faction = "BNB_FA_Chernarus_Winter_Force";
		crew = "BNB_FA_CWF_Rifleman_Winter";


		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
		ALiVE_orbatCreator_texture = "White";
	};
};
