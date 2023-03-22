class CfgEditorSubcategories {
	class BNB_FA_JPN_Infantry_Section {
		displayName = "Infantry (Section)";
	};

	class BNB_FA_JPN_Personnel {
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

	class BNB_FA_JPN_Man : B_Soldier_F {
		author = "Arend";
		scope = 0;
		scopeCurator = 2;
		side = 1;

		genericNames="NATOMen";
		identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};


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

		class BNB_FA_JPN_Jeitai_D {
			class Infantry {
				name = "Infantry";

				class BNB_FA_JPN_Infantry_Sentry_Jeitai_D {
					name = "Sentry";
					side = 1;
					faction = "BNB_FA_JPN_Jeitai_D";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Rifleman_Jeitai_D";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Rifleman_Jeitai_D";
					};
				};

				class BNB_FA_JPN_Infantry_Section_Base_Jeitai_D {
					name = "Section (Base)";
					side = 1;
					faction = "BNB_FA_JPN_Jeitai_D";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_JPN_1IC_Jeitai_D";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BNB_FA_JPN_2IC_Jeitai_D";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Medic_Jeitai_D";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Rifleman_Jeitai_D";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Rifleman_Jeitai_D";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Rifleman_Jeitai_D";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Rifleman_Jeitai_D";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Rifleman_Jeitai_D";
					};
				};

				class BNB_FA_JPN_Infantry_Section_Blank_Jeitai_D {
					name = "Section (Blank)";
					side = 1;
					faction = "BNB_FA_JPN_Jeitai_D";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_JPN_Man_Jeitai_D";
					};
					class Unit1 {
						position[] = {5,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BNB_FA_JPN_Man_Jeitai_D";
					};
					class Unit2 {
						position[] = {-5,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Man_Jeitai_D";
					};
					class Unit3 {
						position[] = {10,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Man_Jeitai_D";
					};
					class Unit4 {
						position[] = {-10,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Man_Jeitai_D";
					};
					class Unit5 {
						position[] = {0,5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Man_Jeitai_D";
					};
					class Unit6 {
						position[] = {0,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Man_Jeitai_D";
					};
					class Unit7 {
						position[] = {0,10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Man_Jeitai_D";
					};
				};

				class BNB_FA_JPN_Infantry_Fireteam_Charlie_Jeitai_D {
					name = "Fireteam Charlie";
					side = 1;
					faction = "BNB_FA_JPN_Jeitai_D";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_JPN_1IC_Jeitai_D";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Medic_Jeitai_D";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Rifleman_Jeitai_D";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_LMG_Jeitai_D";
					};
				};

				class BNB_FA_JPN_Infantry_Fireteam_Delta_Jeitai_D {
					name = "Fireteam Delta";
					side = 1;
					faction = "BNB_FA_JPN_Jeitai_D";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BNB_FA_JPN_2IC_Jeitai_D";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Marksman_Jeitai_D";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Rifleman_Jeitai_D";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_LMG_Jeitai_D";
					};
				};

				class BNB_FA_JPN_Infantry_Buddy_Team_LMG_Jeitai_D {
					name = "Buddy Team - LMG 7.62";
					side = 1;
					faction = "BNB_FA_JPN_Jeitai_D";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_LMG_Jeitai_D";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Rifleman_Jeitai_D";
					};
				};

				class BNB_FA_JPN_Infantry_Buddy_Team_AT_Jeitai_D {
					name = "Buddy Team - AT";
					side = 1;
					faction = "BNB_FA_JPN_Jeitai_D";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Rifleman_AT_Jeitai_D";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Rifleman_Jeitai_D";
					};
				};

				class BNB_FA_JPN_Infantry_Buddy_Team_Marksman_Jeitai_D {
					name = "Buddy Team - Marksman";
					side = 1;
					faction = "BNB_FA_JPN_Jeitai_D";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Marksman_Jeitai_D";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Rifleman_Jeitai_D";
					};
				};

				class BNB_FA_JPN_Infantry_1Section_Jeitai_D {
					name = "1 Section";
					side = 1;
					faction = "BNB_FA_JPN_Jeitai_D";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_JPN_1IC_Jeitai_D";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Medic_Jeitai_D";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Rifleman_AT_Jeitai_D";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_LMG_Jeitai_D";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BNB_FA_JPN_2IC_Jeitai_D";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Marksman_Jeitai_D";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Rifleman_Jeitai_D";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_LMG_Jeitai_D";
					};
				};

				class BNB_FA_JPN_Infantry_2Section_Jeitai_D {
					name = "2 Section";
					side = 1;
					faction = "BNB_FA_JPN_Jeitai_D";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_JPN_1IC_Jeitai_D";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Medic_Jeitai_D";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Engineer_EOD_Jeitai_D";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Rifleman_Jeitai_D";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BNB_FA_JPN_2IC_Jeitai_D";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Marksman_Jeitai_D";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Rifleman_Jeitai_D";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_LMG_Jeitai_D";
					};
				};

				class BNB_FA_JPN_Infantry_3Section_Jeitai_D {
					name = "3 Section";
					side = 1;
					faction = "BNB_FA_JPN_Jeitai_D";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_JPN_1IC_Jeitai_D";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Medic_Jeitai_D";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Rifleman_Jeitai_D";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_LMG_Jeitai_D";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BNB_FA_JPN_2IC_Jeitai_D";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Rifleman_Jeitai_D";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Rifleman_Jeitai_D";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_LMG_Jeitai_D";
					};
				};
			};
		};

		class BNB_FA_JPN_Navy {
			class Infantry {
				name = "Infantry";

				class BNB_FA_JPN_Infantry_Sentry_Navy {
					name = "Sentry";
					side = 1;
					faction = "BNB_FA_JPN_Navy";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Rifleman_Navy";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Rifleman_Navy";
					};
				};

				class BNB_FA_JPN_Infantry_Section_Base_Navy {
					name = "Section (Base)";
					side = 1;
					faction = "BNB_FA_JPN_Navy";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_JPN_1IC_Navy";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BNB_FA_JPN_2IC_Navy";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Medic_Navy";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Rifleman_Navy";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Rifleman_Navy";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Rifleman_Navy";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Rifleman_Navy";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Rifleman_Navy";
					};
				};

				class BNB_FA_JPN_Infantry_Section_Blank_Navy {
					name = "Section (Blank)";
					side = 1;
					faction = "BNB_FA_JPN_Navy";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_JPN_Man_Navy";
					};
					class Unit1 {
						position[] = {5,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BNB_FA_JPN_Man_Navy";
					};
					class Unit2 {
						position[] = {-5,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Man_Navy";
					};
					class Unit3 {
						position[] = {10,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Man_Navy";
					};
					class Unit4 {
						position[] = {-10,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Man_Navy";
					};
					class Unit5 {
						position[] = {0,5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Man_Navy";
					};
					class Unit6 {
						position[] = {0,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Man_Navy";
					};
					class Unit7 {
						position[] = {0,10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Man_Navy";
					};
				};

				class BNB_FA_JPN_Infantry_Fireteam_Charlie_Navy {
					name = "Fireteam Charlie";
					side = 1;
					faction = "BNB_FA_JPN_Navy";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_JPN_1IC_Navy";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Medic_Navy";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Rifleman_Navy";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_LMG_Navy";
					};
				};

				class BNB_FA_JPN_Infantry_Fireteam_Delta_Navy {
					name = "Fireteam Delta";
					side = 1;
					faction = "BNB_FA_JPN_Navy";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BNB_FA_JPN_2IC_Navy";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Marksman_Navy";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Rifleman_Navy";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_LMG_Navy";
					};
				};

				class BNB_FA_JPN_Infantry_Buddy_Team_LMG_Navy {
					name = "Buddy Team - LMG 7.62";
					side = 1;
					faction = "BNB_FA_JPN_Navy";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_LMG_Navy";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Rifleman_Navy";
					};
				};

				class BNB_FA_JPN_Infantry_Buddy_Team_AT_Navy {
					name = "Buddy Team - AT";
					side = 1;
					faction = "BNB_FA_JPN_Navy";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Rifleman_AT_Navy";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Rifleman_Navy";
					};
				};

				class BNB_FA_JPN_Infantry_Buddy_Team_Marksman_Navy {
					name = "Buddy Team - Marksman";
					side = 1;
					faction = "BNB_FA_JPN_Navy";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Marksman_Navy";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Rifleman_Navy";
					};
				};

				class BNB_FA_JPN_Infantry_1Section_Navy {
					name = "1 Section";
					side = 1;
					faction = "BNB_FA_JPN_Navy";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_JPN_1IC_Navy";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Medic_Navy";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Rifleman_AT_Navy";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_LMG_Navy";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BNB_FA_JPN_2IC_Navy";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Marksman_Navy";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Rifleman_Navy";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_LMG_Navy";
					};
				};

				class BNB_FA_JPN_Infantry_2Section_Navy {
					name = "2 Section";
					side = 1;
					faction = "BNB_FA_JPN_Navy";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_JPN_1IC_Navy";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Medic_Navy";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Engineer_EOD_Navy";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Rifleman_Navy";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BNB_FA_JPN_2IC_Navy";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Marksman_Navy";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Rifleman_Navy";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_LMG_Navy";
					};
				};

				class BNB_FA_JPN_Infantry_3Section_Navy {
					name = "3 Section";
					side = 1;
					faction = "BNB_FA_JPN_Navy";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_JPN_1IC_Navy";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Medic_Navy";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Rifleman_Navy";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_LMG_Navy";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BNB_FA_JPN_2IC_Navy";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Rifleman_Navy";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Rifleman_Navy";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_LMG_Navy";
					};
				};
			};
		};

		class BNB_FA_JPN_Jeitai {
			class Infantry {
				name = "Infantry";

				class BNB_FA_JPN_Infantry_Sentry_Jeitai {
					name = "Sentry";
					side = 1;
					faction = "BNB_FA_JPN_Jeitai";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Rifleman_Jeitai";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Rifleman_Jeitai";
					};
				};

				class BNB_FA_JPN_Infantry_Section_Base_Jeitai {
					name = "Section (Base)";
					side = 1;
					faction = "BNB_FA_JPN_Jeitai";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_JPN_1IC_Jeitai";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BNB_FA_JPN_2IC_Jeitai";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Medic_Jeitai";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Rifleman_Jeitai";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Rifleman_Jeitai";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Rifleman_Jeitai";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Rifleman_Jeitai";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Rifleman_Jeitai";
					};
				};

				class BNB_FA_JPN_Infantry_Section_Blank_Jeitai {
					name = "Section (Blank)";
					side = 1;
					faction = "BNB_FA_JPN_Jeitai";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_JPN_Man_Jeitai";
					};
					class Unit1 {
						position[] = {5,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BNB_FA_JPN_Man_Jeitai";
					};
					class Unit2 {
						position[] = {-5,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Man_Jeitai";
					};
					class Unit3 {
						position[] = {10,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Man_Jeitai";
					};
					class Unit4 {
						position[] = {-10,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Man_Jeitai";
					};
					class Unit5 {
						position[] = {0,5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Man_Jeitai";
					};
					class Unit6 {
						position[] = {0,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Man_Jeitai";
					};
					class Unit7 {
						position[] = {0,10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Man_Jeitai";
					};
				};

				class BNB_FA_JPN_Infantry_Fireteam_Charlie_Jeitai {
					name = "Fireteam Charlie";
					side = 1;
					faction = "BNB_FA_JPN_Jeitai";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_JPN_1IC_Jeitai";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Medic_Jeitai";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Rifleman_Jeitai";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_LMG_Jeitai";
					};
				};

				class BNB_FA_JPN_Infantry_Fireteam_Delta_Jeitai {
					name = "Fireteam Delta";
					side = 1;
					faction = "BNB_FA_JPN_Jeitai";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BNB_FA_JPN_2IC_Jeitai";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Marksman_Jeitai";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Rifleman_Jeitai";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_LMG_Jeitai";
					};
				};

				class BNB_FA_JPN_Infantry_Buddy_Team_LMG_Jeitai {
					name = "Buddy Team - LMG 7.62";
					side = 1;
					faction = "BNB_FA_JPN_Jeitai";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_LMG_Jeitai";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Rifleman_Jeitai";
					};
				};

				class BNB_FA_JPN_Infantry_Buddy_Team_AT_Jeitai {
					name = "Buddy Team - AT";
					side = 1;
					faction = "BNB_FA_JPN_Jeitai";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Rifleman_AT_Jeitai";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Rifleman_Jeitai";
					};
				};

				class BNB_FA_JPN_Infantry_Buddy_Team_Marksman_Jeitai {
					name = "Buddy Team - Marksman";
					side = 1;
					faction = "BNB_FA_JPN_Jeitai";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Marksman_Jeitai";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Rifleman_Jeitai";
					};
				};

				class BNB_FA_JPN_Infantry_1Section_Jeitai {
					name = "1 Section";
					side = 1;
					faction = "BNB_FA_JPN_Jeitai";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_JPN_1IC_Jeitai";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Medic_Jeitai";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Rifleman_AT_Jeitai";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_LMG_Jeitai";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BNB_FA_JPN_2IC_Jeitai";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Marksman_Jeitai";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Rifleman_Jeitai";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_LMG_Jeitai";
					};
				};

				class BNB_FA_JPN_Infantry_2Section_Jeitai {
					name = "2 Section";
					side = 1;
					faction = "BNB_FA_JPN_Jeitai";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_JPN_1IC_Jeitai";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Medic_Jeitai";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Engineer_EOD_Jeitai";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Rifleman_Jeitai";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BNB_FA_JPN_2IC_Jeitai";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Marksman_Jeitai";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Rifleman_Jeitai";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_LMG_Jeitai";
					};
				};

				class BNB_FA_JPN_Infantry_3Section_Jeitai {
					name = "3 Section";
					side = 1;
					faction = "BNB_FA_JPN_Jeitai";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_JPN_1IC_Jeitai";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Medic_Jeitai";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Rifleman_Jeitai";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_LMG_Jeitai";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BNB_FA_JPN_2IC_Jeitai";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Rifleman_Jeitai";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_Rifleman_Jeitai";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_JPN_LMG_Jeitai";
					};
				};
			};
		};
	};
};
