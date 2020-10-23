class CBA_Extended_EventHandlers_base;

class CfgVehicles {
	class RHS_AGS30_TriPod_VDV;
	class RHS_AGS30_TriPod_VDV_OCimport_01 : RHS_AGS30_TriPod_VDV { scope = 0; class EventHandlers; class Turrets; };
	class RHS_AGS30_TriPod_VDV_OCimport_02 : RHS_AGS30_TriPod_VDV_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class MainTurret;
		};
	};

	class BNB_FA_RS_AGS_30 : RHS_AGS30_TriPod_VDV_OCimport_02 {
		author = "jarrad96";
		scope = 2;
		scopeCurator = 2;
		displayName = "AGS-30";
		side = 0;
		faction = "BNB_FA_Russian_Spetznaz";
		crew = "BNB_FA_RS_Rifleman";

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

	class rhs_KORD_MSV;
	class rhs_KORD_MSV_OCimport_01 : rhs_KORD_MSV { scope = 0; class EventHandlers; class Turrets; };
	class rhs_KORD_MSV_OCimport_02 : rhs_KORD_MSV_OCimport_01 {
		class EventHandlers;
		class Turrets : Turrets {
			class MainTurret;
		};
	};

	class BNB_FA_RS_KORD : rhs_KORD_MSV_OCimport_02 {
		author = "jarrad96";
		scope = 2;
		scopeCurator = 2;
		displayName = "KORD";
		side = 0;
		faction = "BNB_FA_Russian_Spetznaz";
		crew = "BNB_FA_RS_Rifleman";

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
};
