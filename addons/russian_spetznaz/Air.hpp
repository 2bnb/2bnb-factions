class CfgGroups {
	class EAST {
		side = 0;

		class BNB_FA_Russian_Spetznaz {
			name = "Russian Spetznaz";

			class Air {
				name = "Air";

				class BNB_FA_RS_Air_Hunter_Killers {
					name = "Hunter-Killers";
					side = 0;
					faction = "BNB_FA_Russian_Spetznaz";
					icon = "\A3\ui_f\data\map\markers\nato\n_air.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = { 0 , 0 , 0 };
						rank = "SERGEANT";
						side = 0;
						vehicle = "BNB_FA_RS_Mi_24P_Hind";
					};
					class Unit1 {
						position[] = { 22 , -26 , 0 };
						rank = "PRIVATE";
						side = 0;
						vehicle = "BNB_FA_RS_Mi_24P_Hind";
					};
				};

				class BNB_FA_RS_Air_Airbourne_Spetznaz {
					name = "Airbourne Spetznaz";
					side = 0;
					faction = "BNB_FA_Russian_Spetznaz";
					icon = "\A3\ui_f\data\map\markers\nato\n_air.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = { 0 , 0 , 0 };
						rank = "SERGEANT";
						side = 0;
						vehicle = "BNB_FA_RS_Mi_24P_Hind";
					};
					class Unit1 {
						position[] = { 5 , -5 , 0 };
						rank = "PRIVATE";
						side = 0;
						vehicle = "BNB_FA_RS_Squad_Leader";
					};
					class Unit2 {
						position[] = { -5 , -5 , 0 };
						rank = "PRIVATE";
						side = 0;
						vehicle = "BNB_FA_RS_Medic";
					};
					class Unit3 {
						position[] = { 10 , -10 , 0 };
						rank = "PRIVATE";
						side = 0;
						vehicle = "BNB_FA_RS_Rifleman_AT";
					};
					class Unit4 {
						position[] = { -10 , -10 , 0 };
						rank = "PRIVATE";
						side = 0;
						vehicle = "BNB_FA_RS_Marksman_VSS";
					};
					class Unit5 {
						position[] = { 15 , -15 , 0 };
						rank = "PRIVATE";
						side = 0;
						vehicle = "BNB_FA_RS_Grenadier";
					};
					class Unit6 {
						position[] = { -15 , -15 , 0 };
						rank = "PRIVATE";
						side = 0;
						vehicle = "BNB_FA_RS_Autorifleman";
					};
					class Unit7 {
						position[] = { 20 , -20 , 0 };
						rank = "PRIVATE";
						side = 0;
						vehicle = "BNB_FA_RS_Rifleman";
					};
					class Unit8 {
						position[] = { -20 , -20 , 0 };
						rank = "PRIVATE";
						side = 0;
						vehicle = "BNB_FA_RS_Rifleman";
					};
				};
			};
		};
	};
};

class CBA_Extended_EventHandlers_base;

class CfgVehicles {
	class RHS_Ka52_UPK23_vvs;
	class RHS_Ka52_UPK23_vvs_OCimport_01 : RHS_Ka52_UPK23_vvs { scope = 0; class EventHandlers; class Turrets; };
	class RHS_Ka52_UPK23_vvs_OCimport_02 : RHS_Ka52_UPK23_vvs_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class MainTurret;
		};
	};

	class BNB_FA_RS_Ka_52_Alligator : RHS_Ka52_UPK23_vvs_OCimport_02 {
		author = "jarrad96";
		scope = 2;
		scopeCurator = 2;
		displayName = "Ka-52 'Alligator'";
		side = 0;
		faction = "BNB_FA_Russian_Spetznaz";
		crew = "rhs_pilot_combat_heli";

		class Turrets : Turrets {
			class MainTurret : MainTurret { gunnerType = ""; };
		};



		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

			class ALiVE_orbatCreator {
			};

		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;

	};

	class RHS_Mi24P_CAS_vdv;
	class RHS_Mi24P_CAS_vdv_OCimport_01 : RHS_Mi24P_CAS_vdv { scope = 0; class EventHandlers; class Turrets; };
	class RHS_Mi24P_CAS_vdv_OCimport_02 : RHS_Mi24P_CAS_vdv_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class MainTurret;
			class CargoTurret_01;
			class CargoTurret_02;
			class CargoTurret_03;
			class CargoTurret_04;
		};
	};

	class BNB_FA_RS_Mi_24P_Hind : RHS_Mi24P_CAS_vdv_OCimport_02 {
		author = "jarrad96";
		scope = 2;
		scopeCurator = 2;
		displayName = "Mi-24P Hind";
		side = 0;
		faction = "BNB_FA_Russian_Spetznaz";
		crew = "BNB_FA_RS_Crewman";

		class Turrets : Turrets {
			class MainTurret : MainTurret { gunnerType = "BNB_FA_RS_Crewman"; };
			class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
			class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
			class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
			class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
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
