class CfgGroups {
	class EAST {
		side = 0;

		class BNB_FA_Russian_Spetznaz {
			name = "Russian Spetznaz";

			class Armored {
				name = "Armor";

				class BNB_FA_RS_Armored_T80_Section {
					name = "T-72 BM";
					side = 0;
					faction = "BNB_FA_Russian_Spetznaz";
					icon = "\A3\ui_f\data\map\markers\nato\n_armor.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = { 0 , 0 , 0 };
						rank = "SERGEANT";
						side = 0;
						vehicle = "BNB_FA_RS_T80_BV";
					};

					class Unit1 {
						position[] = { 20 , -20 , 0 };
						rank = "PRIVATE";
						side = 0;
						vehicle = "BNB_FA_RS_T80_BV";
					};
				};
			};
		};
	};
};

class CBA_Extended_EventHandlers_base;

class CfgVehicles {
	class RHS_Mi8mt_vdv;
	class RHS_Mi8mt_vdv_OCimport_01 : RHS_Mi8mt_vdv { scope = 0; class EventHandlers; class Turrets; };
	class RHS_Mi8mt_vdv_OCimport_02 : RHS_Mi8mt_vdv_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class CopilotTurret;
			class MainTurret;
			class BackTurret;
		};
	};

	class BNB_FA_RS_Mi_8Hip : RHS_Mi8mt_vdv_OCimport_02 {
		author = "jarrad96";
		scope = 2;
		scopeCurator = 2;
		displayName = "Mi-8 Hip";
		side = 0;
		faction = "BNB_FA_Russian_Spetznaz";
		crew = "BNB_FA_RS_Crewman";

		class Turrets : Turrets {
			class CopilotTurret : CopilotTurret { gunnerType = "BNB_FA_RS_Crewman"; };
			class MainTurret : MainTurret { gunnerType = "BNB_FA_RS_Crewman"; };
			class BackTurret : BackTurret { gunnerType = "BNB_FA_RS_Crewman"; };
		};



		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

			class ALiVE_orbatCreator {
			};

		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;

	};

	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
	};
	class rhs_bmp3tank_base : Tank_F {
		class Turrets : Turrets {
			class MainTurret;
			class GPMGTurret1;
			class GPMGTurret2;
		};
	};
	class rhs_bmp3m_msv : rhs_bmp3tank_base {
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				class Turrets;
			};
		};
	};
	class rhs_bmp3mera_msv : rhs_bmp3m_msv {
		class EventHandlers;
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				class Turrets : Turrets {
					class CommanderOptics;
				};
			};
		};
	};

	class BNB_FA_RS_BMP_3Up_Armoured : rhs_bmp3mera_msv {
		author = "jarrad96";
		scope = 2;
		scopeCurator = 2;
		displayName = "BMP-3 (Up-Armoured)";
		side = 0;
		faction = "BNB_FA_Russian_Spetznaz";
		crew = "BNB_FA_RS_Crewman";
		typicalCargo[] = { "BNB_FA_RS_Crewman" };

		class Turrets : Turrets {
			class MainTurret : MainTurret {
				gunnerType = "BNB_FA_RS_Crewman";

				class Turrets : Turrets {
					class CommanderOptics : CommanderOptics { gunnerType = "BNB_FA_RS_Crewman"; };
				};
			};
			class GPMGTurret1 : GPMGTurret1 { gunnerType = "BNB_FA_RS_Crewman"; };
			class GPMGTurret2 : GPMGTurret2 { gunnerType = "BNB_FA_RS_Crewman"; };
		};



		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

			class ALiVE_orbatCreator {
			};

		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;

	};

	class rhs_tank_base : Tank_F {
		class Turrets : Turrets {
			class MainTurret;
		};
	};
	class rhs_t80b : rhs_tank_base {
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				class Turrets;
			};
		};
	};
	class rhs_t80bv : rhs_t80b {
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

	class BNB_FA_RS_T80_BV : rhs_t80bv {
		author = "jarrad96";
		scope = 2;
		scopeCurator = 2;
		displayName = "T-80 BV";
		side = 0;
		faction = "BNB_FA_Russian_Spetznaz";
		crew = "BNB_FA_RS_Crewman";
		typicalCargo[] = { "BNB_FA_RS_Crewman" };

		class Turrets : Turrets {
			class MainTurret : MainTurret {
				gunnerType = "BNB_FA_RS_Crewman";

				class Turrets : Turrets {
					class CommanderOptics : CommanderOptics { gunnerType = "BNB_FA_RS_Crewman"; };
					class CommanderMG : CommanderMG { gunnerType = "BNB_FA_RS_Crewman"; };
				};
			};
		};

		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

			class ALiVE_orbatCreator {
			};

		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
		ALiVE_orbatCreator_texture = "standard";

	};

	class rhs_tigr_sts_vv;
	class rhs_tigr_sts_vv_OCimport_01 : rhs_tigr_sts_vv { scope = 0; class EventHandlers; class Turrets; };
	class rhs_tigr_sts_vv_OCimport_02 : rhs_tigr_sts_vv_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class MainTurret;
			class AGS_Turret;
		};
	};

	class BNB_FA_RS_GAZ_Armed : rhs_tigr_sts_vv_OCimport_02 {
		author = "jarrad96";
		scope = 2;
		scopeCurator = 2;
		displayName = "GAZ (Armed)";
		side = 0;
		faction = "BNB_FA_Russian_Spetznaz";
		crew = "BNB_FA_RS_Rifleman";

		class Turrets : Turrets {
			class MainTurret : MainTurret { gunnerType = "BNB_FA_RS_Rifleman"; };
			class AGS_Turret : AGS_Turret { gunnerType = "BNB_FA_RS_Fireteam_Leader"; };
		};



		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

			class ALiVE_orbatCreator {
			};

		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;

	};
};
