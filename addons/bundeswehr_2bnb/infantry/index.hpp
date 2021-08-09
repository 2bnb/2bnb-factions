class CfgEditorSubcategories {
	class BNB_FA_BW2_Infantry_Section {
		displayName = "Infantry (Section)";
	};

	class BNB_FA_BW2_Personnel {
		displayName = "Support Personnel";
	};
};

class CfgVehicles {
	////////////////
	// Units Base //
	////////////////
	class B_Soldier_base_F;
	class B_Soldier_F : B_Soldier_base_F {
		class Eventhandlers;
	};

	class BNB_FA_BW2_Man : B_Soldier_F {
		author = "Arend";
		scope = 0;
		scopeCurator = 2;
		side = 1;

		genericNames="BundeswehrMen";
		identityTypes[] = {"LanguageENG_F","Head_Euro","BWA3_G_Bundeswehr_default"};


		class EventHandlers : EventHandlers {
			class BNB_FA_Optics {
				init = "
					if (local (_this select 0)) then {
						_onSpawn = {
							_this = _this select 0;
							_weaponItems = (configfile >> 'cfgvehicles' >> (typeof _this) >> 'bnb_fa_weaponItems') call BIS_fnc_getCfgDataArray;
							sleep 0.2;
							{
								_this addPrimaryWeaponItem _x;
							} foreach _weaponItems;
						};
						[(_this select 0)] spawn _onSpawn;
					};";
			};
		};
	};

	#include "Man.hpp" // Inherits Man base
	#include "Rifleman.hpp" // Inherits Man
	#include "Crew.hpp" // Inherits Man
	#include "Engineer_EOD.hpp" // Inherits Rifleman
	#include "IC.hpp" // Inherits Rifleman
	#include "LMG.hpp" // Inherits Rifleman
	#include "Marksman.hpp" // Inherits Rifleman
	#include "Medic.hpp" // Inherits Rifleman
	#include "Pilot.hpp" // Inherits Man
	#include "Rifleman_AT.hpp" // Inherits Rifleman
	#include "Zeus.hpp" // Inherits Man
};

class CfgGroups {
	class WEST {

		class BNB_FA_BW2_Tropen {
			class Infantry {
				name = "Infantry";

				class BNB_FA_BW2_Infantry_Sentry_Tropen {
					name = "Sentry";
					side = 1;
					faction = "BNB_FA_BW2_Tropen";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Tropen";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Tropen";
					};
				};

				class BNB_FA_BW2_Infantry_Section_Base_Tropen {
					name = "Section (Base)";
					side = 1;
					faction = "BNB_FA_BW2_Tropen";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_BW2_1IC_Tropen";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BNB_FA_BW2_2IC_Tropen";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Medic_Tropen";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Tropen";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Tropen";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Tropen";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Tropen";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Tropen";
					};
				};

				class BNB_FA_BW2_Infantry_Section_Blank_Tropen {
					name = "Section (Blank)";
					side = 1;
					faction = "BNB_FA_BW2_Tropen";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_BW2_Man_Tropen";
					};
					class Unit1 {
						position[] = {5,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BNB_FA_BW2_Man_Tropen";
					};
					class Unit2 {
						position[] = {-5,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Man_Tropen";
					};
					class Unit3 {
						position[] = {10,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Man_Tropen";
					};
					class Unit4 {
						position[] = {-10,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Man_Tropen";
					};
					class Unit5 {
						position[] = {0,5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Man_Tropen";
					};
					class Unit6 {
						position[] = {0,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Man_Tropen";
					};
					class Unit7 {
						position[] = {0,10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Man_Tropen";
					};
				};

				class BNB_FA_BW2_Infantry_Fireteam_Charlie_Tropen {
					name = "Fireteam Charlie";
					side = 1;
					faction = "BNB_FA_BW2_Tropen";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_BW2_1IC_Tropen";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Medic_Tropen";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Tropen";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_LMG_Tropen";
					};
				};

				class BNB_FA_BW2_Infantry_Fireteam_Delta_Tropen {
					name = "Fireteam Delta";
					side = 1;
					faction = "BNB_FA_BW2_Tropen";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BNB_FA_BW2_2IC_Tropen";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Marksman_Tropen";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Tropen";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_LMG_Tropen";
					};
				};

				class BNB_FA_BW2_Infantry_Buddy_Team_LMG_Tropen {
					name = "Buddy Team - LMG 7.62";
					side = 1;
					faction = "BNB_FA_BW2_Tropen";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_LMG_Tropen";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Tropen";
					};
				};

				class BNB_FA_BW2_Infantry_Buddy_Team_AT_Tropen {
					name = "Buddy Team - AT";
					side = 1;
					faction = "BNB_FA_BW2_Tropen";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_AT_Tropen";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Tropen";
					};
				};

				class BNB_FA_BW2_Infantry_Buddy_Team_Marksman_Tropen {
					name = "Buddy Team - Marksman";
					side = 1;
					faction = "BNB_FA_BW2_Tropen";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Marksman_Tropen";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Tropen";
					};
				};

				class BNB_FA_BW2_Infantry_1Section_Tropen {
					name = "1 Section";
					side = 1;
					faction = "BNB_FA_BW2_Tropen";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_BW2_1IC_Tropen";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Medic_Tropen";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_AT_Tropen";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_LMG_Tropen";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BNB_FA_BW2_2IC_Tropen";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Marksman_Tropen";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Tropen";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_LMG_Tropen";
					};
				};

				class BNB_FA_BW2_Infantry_2Section_Tropen {
					name = "2 Section";
					side = 1;
					faction = "BNB_FA_BW2_Tropen";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_BW2_1IC_Tropen";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Medic_Tropen";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Engineer_EOD_Tropen";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Tropen";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BNB_FA_BW2_2IC_Tropen";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Marksman_Tropen";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Tropen";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_LMG_Tropen";
					};
				};

				class BNB_FA_BW2_Infantry_3Section_Tropen {
					name = "3 Section";
					side = 1;
					faction = "BNB_FA_BW2_Tropen";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_BW2_1IC_Tropen";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Medic_Tropen";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Tropen";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_LMG_Tropen";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BNB_FA_BW2_2IC_Tropen";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Tropen";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Tropen";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_LMG_Tropen";
					};
				};
			};
		};

		class BNB_FA_BW2_Multi {
			class Infantry {
				name = "Infantry";

				class BNB_FA_BW2_Infantry_Sentry_Multi {
					name = "Sentry";
					side = 1;
					faction = "BNB_FA_BW2_Multi";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Multi";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Multi";
					};
				};

				class BNB_FA_BW2_Infantry_Section_Base_Multi {
					name = "Section (Base)";
					side = 1;
					faction = "BNB_FA_BW2_Multi";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_BW2_1IC_Multi";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BNB_FA_BW2_2IC_Multi";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Medic_Multi";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Multi";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Multi";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Multi";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Multi";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Multi";
					};
				};

				class BNB_FA_BW2_Infantry_Section_Blank_Multi {
					name = "Section (Blank)";
					side = 1;
					faction = "BNB_FA_BW2_Multi";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_BW2_Man_Multi";
					};
					class Unit1 {
						position[] = {5,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BNB_FA_BW2_Man_Multi";
					};
					class Unit2 {
						position[] = {-5,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Man_Multi";
					};
					class Unit3 {
						position[] = {10,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Man_Multi";
					};
					class Unit4 {
						position[] = {-10,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Man_Multi";
					};
					class Unit5 {
						position[] = {0,5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Man_Multi";
					};
					class Unit6 {
						position[] = {0,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Man_Multi";
					};
					class Unit7 {
						position[] = {0,10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Man_Multi";
					};
				};

				class BNB_FA_BW2_Infantry_Fireteam_Charlie_Multi {
					name = "Fireteam Charlie";
					side = 1;
					faction = "BNB_FA_BW2_Multi";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_BW2_1IC_Multi";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Medic_Multi";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Multi";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_LMG_Multi";
					};
				};

				class BNB_FA_BW2_Infantry_Fireteam_Delta_Multi {
					name = "Fireteam Delta";
					side = 1;
					faction = "BNB_FA_BW2_Multi";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BNB_FA_BW2_2IC_Multi";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Marksman_Multi";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Multi";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_LMG_Multi";
					};
				};

				class BNB_FA_BW2_Infantry_Buddy_Team_LMG_Multi {
					name = "Buddy Team - LMG 7.62";
					side = 1;
					faction = "BNB_FA_BW2_Multi";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_LMG_Multi";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Multi";
					};
				};

				class BNB_FA_BW2_Infantry_Buddy_Team_AT_Multi {
					name = "Buddy Team - AT";
					side = 1;
					faction = "BNB_FA_BW2_Multi";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_AT_Multi";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Multi";
					};
				};

				class BNB_FA_BW2_Infantry_Buddy_Team_Marksman_Multi {
					name = "Buddy Team - Marksman";
					side = 1;
					faction = "BNB_FA_BW2_Multi";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Marksman_Multi";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Multi";
					};
				};

				class BNB_FA_BW2_Infantry_1Section_Multi {
					name = "1 Section";
					side = 1;
					faction = "BNB_FA_BW2_Multi";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_BW2_1IC_Multi";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Medic_Multi";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_AT_Multi";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_LMG_Multi";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BNB_FA_BW2_2IC_Multi";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Marksman_Multi";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Multi";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_LMG_Multi";
					};
				};

				class BNB_FA_BW2_Infantry_2Section_Multi {
					name = "2 Section";
					side = 1;
					faction = "BNB_FA_BW2_Multi";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_BW2_1IC_Multi";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Medic_Multi";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Engineer_EOD_Multi";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Multi";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BNB_FA_BW2_2IC_Multi";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Marksman_Multi";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Multi";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_LMG_Multi";
					};
				};

				class BNB_FA_BW2_Infantry_3Section_Multi {
					name = "3 Section";
					side = 1;
					faction = "BNB_FA_BW2_Multi";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_BW2_1IC_Multi";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Medic_Multi";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Multi";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_LMG_Multi";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BNB_FA_BW2_2IC_Multi";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Multi";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Multi";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_LMG_Multi";
					};
				};
			};
		};

		class BNB_FA_BW2_Fleck {
			class Infantry {
				name = "Infantry";

				class BNB_FA_BW2_Infantry_Sentry_Fleck {
					name = "Sentry";
					side = 1;
					faction = "BNB_FA_BW2_Fleck";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Fleck";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Fleck";
					};
				};

				class BNB_FA_BW2_Infantry_Section_Base_Fleck {
					name = "Section (Base)";
					side = 1;
					faction = "BNB_FA_BW2_Fleck";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_BW2_1IC_Fleck";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BNB_FA_BW2_2IC_Fleck";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Medic_Fleck";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Fleck";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Fleck";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Fleck";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Fleck";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Fleck";
					};
				};

				class BNB_FA_BW2_Infantry_Section_Blank_Fleck {
					name = "Section (Blank)";
					side = 1;
					faction = "BNB_FA_BW2_Fleck";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_BW2_Man_Fleck";
					};
					class Unit1 {
						position[] = {5,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BNB_FA_BW2_Man_Fleck";
					};
					class Unit2 {
						position[] = {-5,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Man_Fleck";
					};
					class Unit3 {
						position[] = {10,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Man_Fleck";
					};
					class Unit4 {
						position[] = {-10,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Man_Fleck";
					};
					class Unit5 {
						position[] = {0,5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Man_Fleck";
					};
					class Unit6 {
						position[] = {0,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Man_Fleck";
					};
					class Unit7 {
						position[] = {0,10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Man_Fleck";
					};
				};

				class BNB_FA_BW2_Infantry_Fireteam_Charlie_Fleck {
					name = "Fireteam Charlie";
					side = 1;
					faction = "BNB_FA_BW2_Fleck";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_BW2_1IC_Fleck";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Medic_Fleck";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Fleck";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_LMG_Fleck";
					};
				};

				class BNB_FA_BW2_Infantry_Fireteam_Delta_Fleck {
					name = "Fireteam Delta";
					side = 1;
					faction = "BNB_FA_BW2_Fleck";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BNB_FA_BW2_2IC_Fleck";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Marksman_Fleck";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Fleck";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_LMG_Fleck";
					};
				};

				class BNB_FA_BW2_Infantry_Buddy_Team_LMG_Fleck {
					name = "Buddy Team - LMG 7.62";
					side = 1;
					faction = "BNB_FA_BW2_Fleck";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_LMG_Fleck";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Fleck";
					};
				};

				class BNB_FA_BW2_Infantry_Buddy_Team_AT_Fleck {
					name = "Buddy Team - AT";
					side = 1;
					faction = "BNB_FA_BW2_Fleck";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_AT_Fleck";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Fleck";
					};
				};

				class BNB_FA_BW2_Infantry_Buddy_Team_Marksman_Fleck {
					name = "Buddy Team - Marksman";
					side = 1;
					faction = "BNB_FA_BW2_Fleck";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Marksman_Fleck";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Fleck";
					};
				};

				class BNB_FA_BW2_Infantry_1Section_Fleck {
					name = "1 Section";
					side = 1;
					faction = "BNB_FA_BW2_Fleck";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_BW2_1IC_Fleck";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Medic_Fleck";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_AT_Fleck";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_LMG_Fleck";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BNB_FA_BW2_2IC_Fleck";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Marksman_Fleck";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Fleck";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_LMG_Fleck";
					};
				};

				class BNB_FA_BW2_Infantry_2Section_Fleck {
					name = "2 Section";
					side = 1;
					faction = "BNB_FA_BW2_Fleck";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_BW2_1IC_Fleck";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Medic_Fleck";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Engineer_EOD_Fleck";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Fleck";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BNB_FA_BW2_2IC_Fleck";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Marksman_Fleck";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Fleck";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_LMG_Fleck";
					};
				};

				class BNB_FA_BW2_Infantry_3Section_Fleck {
					name = "3 Section";
					side = 1;
					faction = "BNB_FA_BW2_Fleck";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_BW2_1IC_Fleck";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Medic_Fleck";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Fleck";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_LMG_Fleck";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BNB_FA_BW2_2IC_Fleck";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Fleck";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_Rifleman_Fleck";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_BW2_LMG_Fleck";
					};
				};
			};
		};
	};
};
