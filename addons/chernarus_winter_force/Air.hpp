class CfgGroups {
	class Indep {

		class BNB_FA_Chernarus_Winter_Force {
			name = "Chernarus Winter Force";

			class Air {
				name = "Air";

				class BNB_FA_CWF_Air_Helicopter_Sentry_Winter {
					name = "Helicopter Sentry";
					side = 2;
					faction = "BNB_FA_Chernarus_Winter_Force";
					icon = "\A3\ui_f\data\map\markers\nato\n_air.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "BNB_FA_CWF_Mi_24_Winter";
					};
					class Unit1 {
						position[] = {21,-30,0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "BNB_FA_CWF_Mi_24_Winter";
					};
				};

				class BNB_FA_CWF_Air_Plane_Sentry_Winter {
					name = "Plane Sentry";
					side = 2;
					faction = "BNB_FA_Chernarus_Winter_Force";
					icon = "\A3\ui_f\data\map\markers\nato\n_air.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "BNB_FA_CWF_L39_AA_Winter";
					};
					class Unit1 {
						position[] = {15,-20,0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "BNB_FA_CWF_L39_AA_Winter";
					};
				};

				class BNB_FA_CWF_Air_Bomber_Sentry_Winter {
					name = "Bomber Sentry";
					side = 2;
					faction = "BNB_FA_Chernarus_Winter_Force";
					icon = "\A3\ui_f\data\map\markers\nato\n_air.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 2;
						vehicle = "BNB_FA_CWF_Su25_Cluster_Winter";
					};
					class Unit1 {
						position[] = {22,-23,0};
						rank = "PRIVATE";
						side = 2;
						vehicle = "BNB_FA_CWF_Su25_Cluster_Winter";
					};
				};
			};


		};
	};
};

class CBA_Extended_EventHandlers_base;

class CfgVehicles {
	class LOP_UKR_Mi24V_AT;
	class LOP_UKR_Mi24V_AT_OCimport_01 : LOP_UKR_Mi24V_AT { scope = 0; class EventHandlers; class Turrets; };
	class LOP_UKR_Mi24V_AT_OCimport_02 : LOP_UKR_Mi24V_AT_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class MainTurret;
			class CargoTurret_01;
			class CargoTurret_02;
			class CargoTurret_03;
			class CargoTurret_04;
		};
	};
	class BNB_FA_CWF_Mi_24_Winter : LOP_UKR_Mi24V_AT_OCimport_02 {
		// editorPreview = "\x\bnb_fa\chernarus_winter_force\data\preview\bnb_fa_cwf_mi_24_winter.jpg";
		author = "Jebby";
		scope = 2;
		scopeCurator = 2;
		displayName = "Mi-24";
		side = 2;
		faction = "BNB_FA_Chernarus_Winter_Force";
		crew = "BNB_FA_CWF_Pilot_Winter";
		// hiddenSelections[] = {"camo1","camo2","exhaust","tail_decals","n1","n2","moving_map"};
		hiddenSelections[] = {"Camo3"};

		class Turrets : Turrets {
			class MainTurret : MainTurret { gunnerType = "BNB_FA_CWF_Pilot_Winter"; };
			class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
			class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
			class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
			class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
		};

		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
	};

	class RHS_Mi8mt_vv;
	class RHS_Mi8mt_vv_OCimport_01 : RHS_Mi8mt_vv { scope = 0; class EventHandlers; class Turrets; };
	class RHS_Mi8mt_vv_OCimport_02 : RHS_Mi8mt_vv_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class CopilotTurret;
			class MainTurret;
			class BackTurret;
		};
	};
	class BNB_FA_CWF_Mi8_Transport_Winter : RHS_Mi8mt_vv_OCimport_02 {
		// editorPreview = "\x\bnb_fa\chernarus_winter_force\data\preview\bnb_fa_cwf_mi8_transport_winter.jpg";
		author = "Jebby";
		scope = 2;
		scopeCurator = 2;
		displayName = "Mi-8 Transport";
		side = 2;
		faction = "BNB_FA_Chernarus_Winter_Force";
		crew = "BNB_FA_CWF_Pilot_Winter";

		class Turrets : Turrets {
			class CopilotTurret : CopilotTurret { gunnerType = "BNB_FA_CWF_Pilot_Winter"; };
			class MainTurret : MainTurret { gunnerType = "BNB_FA_CWF_Pilot_Winter"; };
			class BackTurret : BackTurret { gunnerType = "BNB_FA_CWF_Pilot_Winter"; };
		};

		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
		ALiVE_orbatCreator_texture = "GREY";
	};

	class RHS_Mi8AMTSh_vvsc;
	class RHS_Mi8AMTSh_vvsc_OCimport_01 : RHS_Mi8AMTSh_vvsc { scope = 0; class EventHandlers; class Turrets; };
	class RHS_Mi8AMTSh_vvsc_OCimport_02 : RHS_Mi8AMTSh_vvsc_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class CopilotTurret;
			class SideTurret;
			class BackTurret;
			class FrontTurret;
		};
	};
	class BNB_FA_CWF_Mi8_Rockets_Winter : RHS_Mi8AMTSh_vvsc_OCimport_02 {
		// editorPreview = "\x\bnb_fa\chernarus_winter_force\data\preview\bnb_fa_cwf_mi8_rockets_winter.jpg";
		author = "Jebby";
		scope = 2;
		scopeCurator = 2;
		displayName = "Mi-8 Rockets";
		side = 2;
		faction = "BNB_FA_Chernarus_Winter_Force";
		crew = "BNB_FA_CWF_Pilot_Winter";

		class Turrets : Turrets {
			class CopilotTurret : CopilotTurret { gunnerType = "BNB_FA_CWF_Pilot_Winter"; };
			class SideTurret : SideTurret { gunnerType = "BNB_FA_CWF_Pilot_Winter"; };
			class BackTurret : BackTurret { gunnerType = "BNB_FA_CWF_Pilot_Winter"; };
			class FrontTurret : FrontTurret { gunnerType = "BNB_FA_CWF_Pilot_Winter"; };
		};

		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
		ALiVE_orbatCreator_texture = "GREY";
	};

	class RHS_Su25SM_vvs;
	class RHS_Su25SM_vvs_OCimport_01 : RHS_Su25SM_vvs { scope = 0; class EventHandlers; };
	class RHS_Su25SM_vvs_OCimport_02 : RHS_Su25SM_vvs_OCimport_01 { scope = 0; class EventHandlers; };
	class BNB_FA_CWF_Su25_Cluster_Winter : RHS_Su25SM_vvs_OCimport_02 {
		// editorPreview = "\x\bnb_fa\chernarus_winter_force\data\preview\bnb_fa_cwf_su25_cluster_winter.jpg";
		author = "Jebby";
		scope = 2;
		scopeCurator = 2;
		displayName = "Su-25 Cluster";
		side = 2;
		faction = "BNB_FA_Chernarus_Winter_Force";
		crew = "BNB_FA_CWF_Pilot_Winter";


		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
		ALiVE_orbatCreator_texture = "TKA";
	};

	class I_Plane_Fighter_03_dynamicLoadout_F;
	class I_Plane_Fighter_03_dynamicLoadout_F_OCimport_01 : I_Plane_Fighter_03_dynamicLoadout_F { scope = 0; class EventHandlers; };
	class I_Plane_Fighter_03_dynamicLoadout_F_OCimport_02 : I_Plane_Fighter_03_dynamicLoadout_F_OCimport_01 { scope = 0; class EventHandlers; };
	class BNB_FA_CWF_L39_AA_Winter : I_Plane_Fighter_03_dynamicLoadout_F_OCimport_02 {
		// editorPreview = "\x\bnb_fa\chernarus_winter_force\data\preview\bnb_fa_cwf_l39_aa_winter.jpg";
		author = "Jebby";
		scope = 2;
		scopeCurator = 2;
		displayName = "L-39 AA";
		side = 2;
		faction = "BNB_FA_Chernarus_Winter_Force";
		crew = "BNB_FA_CWF_Pilot_Winter";


		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
		ALiVE_orbatCreator_texture = "GREY";
	};
};
