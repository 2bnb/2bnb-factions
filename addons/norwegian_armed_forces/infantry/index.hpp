class CfgEditorSubcategories {
	class BNB_FA_NAF_Infantry_Section {
		displayName = "Infantry (Section)";
	};

	class BNB_FA_NAF_Infantry_Recon {
		displayName = "Infantry (Recon)";
	};

	class BNB_FA_NAF_Personnel {
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

	class BNB_FA_NAF_Man : B_Soldier_F {
		author = "Arend";
		scope = 0;
		scopeCurator = 2;
		side = 1;

		genericNames="norwegian_names";
		identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};


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
	#include "Recon_Rifleman.hpp" // Inherits Rifleman
	#include "Crew.hpp" // Inherits Man
	#include "Engineer_EOD.hpp" // Inherits Rifleman
	#include "IC.hpp" // Inherits Rifleman
	#include "LMG.hpp" // Inherits Rifleman
	#include "Marksman.hpp" // Inherits Rifleman
	#include "Medic.hpp" // Inherits Rifleman
	#include "Pilot.hpp" // Inherits Man
	#include "Recon_IC.hpp" // Inherits Recon Rifleman
	#include "Rifleman_AT.hpp" // Inherits Rifleman
	#include "Sniper.hpp" // Inherits Recon Rifleman
	#include "Spotter.hpp" // Inherits Recon Rifleman
	#include "Zeus.hpp" // Inherits Man
};

class CfgGroups {
	class WEST {

		class BNB_FA_NAF_Arctic {
			name = "Norwegian Army (Arctic)";

			class Infantry {
				name = "Infantry";

				class BNB_FA_NAF_Infantry_Sentry_Arctic {
					name = "Sentry";
					side = 1;
					faction = "BNB_FA_NAF_Arctic";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Arctic";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Arctic";
					};
				};

				class BNB_FA_NAF_Infantry_Sniper_Team_Arctic {
					name = "Sniper Team";
					side = 1;
					faction = "BNB_FA_NAF_Arctic";
					icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BNB_FA_NAF_Sniper_Arctic";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Spotter_Arctic";
					};
				};

				class BNB_FA_NAF_Infantry_Recon_Team_Arctic {
					name = "Recon Team";
					side = 1;
					faction = "BNB_FA_NAF_Arctic";
					icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BNB_FA_NAF_Recon_IC_Arctic";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Recon_Rifleman_Arctic";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Recon_Rifleman_Arctic";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Recon_Rifleman_Arctic";
					};
				};

				class BNB_FA_NAF_Infantry_Section_Base_Arctic {
					name = "Section (Base)";
					side = 1;
					faction = "BNB_FA_NAF_Arctic";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_1IC_Arctic";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BNB_FA_NAF_2IC_Arctic";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Medic_Arctic";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Arctic";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Arctic";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Arctic";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Arctic";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Arctic";
					};
				};

				class BNB_FA_NAF_Infantry_Section_Blank_Arctic {
					name = "Section (Blank)";
					side = 1;
					faction = "BNB_FA_NAF_Arctic";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_Man_Arctic";
					};
					class Unit1 {
						position[] = {5,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BNB_FA_NAF_Man_Arctic";
					};
					class Unit2 {
						position[] = {-5,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Man_Arctic";
					};
					class Unit3 {
						position[] = {10,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Man_Arctic";
					};
					class Unit4 {
						position[] = {-10,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Man_Arctic";
					};
					class Unit5 {
						position[] = {0,5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Man_Arctic";
					};
					class Unit6 {
						position[] = {0,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Man_Arctic";
					};
					class Unit7 {
						position[] = {0,10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Man_Arctic";
					};
				};

				class BNB_FA_NAF_Infantry_Fireteam_Charlie_Arctic {
					name = "Fireteam Charlie";
					side = 1;
					faction = "BNB_FA_NAF_Arctic";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_1IC_Arctic";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Medic_Arctic";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Arctic";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_LMG_556_Arctic";
					};
				};

				class BNB_FA_NAF_Infantry_Fireteam_Delta_Arctic {
					name = "Fireteam Delta";
					side = 1;
					faction = "BNB_FA_NAF_Arctic";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BNB_FA_NAF_2IC_Arctic";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Marksman_Arctic";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Arctic";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_LMG_762_Arctic";
					};
				};

				class BNB_FA_NAF_Infantry_Buddy_Team_LMG_762_Arctic {
					name = "Buddy Team - LMG 7.62";
					side = 1;
					faction = "BNB_FA_NAF_Arctic";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_LMG_762_Arctic";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Arctic";
					};
				};

				class BNB_FA_NAF_Infantry_Buddy_Team_AT_Arctic {
					name = "Buddy Team - AT";
					side = 1;
					faction = "BNB_FA_NAF_Arctic";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_AT_Arctic";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Arctic";
					};
				};

				class BNB_FA_NAF_Infantry_Buddy_Team_Marksman_Arctic {
					name = "Buddy Team - Marksman";
					side = 1;
					faction = "BNB_FA_NAF_Arctic";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Marksman_Arctic";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Arctic";
					};
				};

				class BNB_FA_NAF_Infantry_1Section_Arctic {
					name = "1 Section";
					side = 1;
					faction = "BNB_FA_NAF_Arctic";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_1IC_Arctic";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Medic_Arctic";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_AT_Arctic";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_LMG_556_Arctic";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BNB_FA_NAF_2IC_Arctic";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Marksman_Arctic";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Arctic";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_LMG_762_Arctic";
					};
				};

				class BNB_FA_NAF_Infantry_2Section_Arctic {
					name = "2 Section";
					side = 1;
					faction = "BNB_FA_NAF_Arctic";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_1IC_Arctic";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Medic_Arctic";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Engineer_EOD_Arctic";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Arctic";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BNB_FA_NAF_2IC_Arctic";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Marksman_Arctic";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Arctic";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_LMG_762_Arctic";
					};
				};

				class BNB_FA_NAF_Infantry_3Section_Arctic {
					name = "3 Section";
					side = 1;
					faction = "BNB_FA_NAF_Arctic";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_1IC_Arctic";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Medic_Arctic";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Arctic";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_LMG_556_Arctic";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BNB_FA_NAF_2IC_Arctic";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Arctic";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Arctic";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_LMG_762_Arctic";
					};
				};
			};
		};

		class BNB_FA_NAF_Desert {
			name = "Norwegian Army (Desert)";

			class Infantry {
				name = "Infantry";

				class BNB_FA_NAF_Infantry_Sentry_Desert {
					name = "Sentry";
					side = 1;
					faction = "BNB_FA_NAF_Desert";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Desert";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Desert";
					};
				};

				class BNB_FA_NAF_Infantry_Sniper_Team_Desert {
					name = "Sniper Team";
					side = 1;
					faction = "BNB_FA_NAF_Desert";
					icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BNB_FA_NAF_Sniper_Desert";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Spotter_Desert";
					};
				};

				class BNB_FA_NAF_Infantry_Recon_Team_Desert {
					name = "Recon Team";
					side = 1;
					faction = "BNB_FA_NAF_Desert";
					icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BNB_FA_NAF_Recon_IC_Desert";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Recon_Rifleman_Desert";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Recon_Rifleman_Desert";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Recon_Rifleman_Desert";
					};
				};

				class BNB_FA_NAF_Infantry_Section_Base_Desert {
					name = "Section (Base)";
					side = 1;
					faction = "BNB_FA_NAF_Desert";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_1IC_Desert";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BNB_FA_NAF_2IC_Desert";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Medic_Desert";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Desert";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Desert";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Desert";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Desert";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Desert";
					};
				};

				class BNB_FA_NAF_Infantry_Section_Blank_Desert {
					name = "Section (Blank)";
					side = 1;
					faction = "BNB_FA_NAF_Desert";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_Man_Desert";
					};
					class Unit1 {
						position[] = {5,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BNB_FA_NAF_Man_Desert";
					};
					class Unit2 {
						position[] = {-5,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Man_Desert";
					};
					class Unit3 {
						position[] = {10,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Man_Desert";
					};
					class Unit4 {
						position[] = {-10,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Man_Desert";
					};
					class Unit5 {
						position[] = {0,5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Man_Desert";
					};
					class Unit6 {
						position[] = {0,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Man_Desert";
					};
					class Unit7 {
						position[] = {0,10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Man_Desert";
					};
				};

				class BNB_FA_NAF_Infantry_Fireteam_Charlie_Desert {
					name = "Fireteam Charlie";
					side = 1;
					faction = "BNB_FA_NAF_Desert";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_1IC_Desert";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Medic_Desert";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Desert";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_LMG_556_Desert";
					};
				};

				class BNB_FA_NAF_Infantry_Fireteam_Delta_Desert {
					name = "Fireteam Delta";
					side = 1;
					faction = "BNB_FA_NAF_Desert";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BNB_FA_NAF_2IC_Desert";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Marksman_Desert";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Desert";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_LMG_762_Desert";
					};
				};

				class BNB_FA_NAF_Infantry_Buddy_Team_LMG_762_Desert {
					name = "Buddy Team - LMG 7.62";
					side = 1;
					faction = "BNB_FA_NAF_Desert";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_LMG_762_Desert";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Desert";
					};
				};

				class BNB_FA_NAF_Infantry_Buddy_Team_AT_Desert {
					name = "Buddy Team - AT";
					side = 1;
					faction = "BNB_FA_NAF_Desert";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_AT_Desert";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Desert";
					};
				};

				class BNB_FA_NAF_Infantry_Buddy_Team_Marksman_Desert {
					name = "Buddy Team - Marksman";
					side = 1;
					faction = "BNB_FA_NAF_Desert";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Marksman_Desert";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Desert";
					};
				};

				class BNB_FA_NAF_Infantry_1Section_Desert {
					name = "1 Section";
					side = 1;
					faction = "BNB_FA_NAF_Desert";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_1IC_Desert";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Medic_Desert";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_AT_Desert";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_LMG_556_Desert";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BNB_FA_NAF_2IC_Desert";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Marksman_Desert";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Desert";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_LMG_762_Desert";
					};
				};

				class BNB_FA_NAF_Infantry_2Section_Desert {
					name = "2 Section";
					side = 1;
					faction = "BNB_FA_NAF_Desert";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_1IC_Desert";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Medic_Desert";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Engineer_EOD_Desert";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Desert";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BNB_FA_NAF_2IC_Desert";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Marksman_Desert";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Desert";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_LMG_762_Desert";
					};
				};

				class BNB_FA_NAF_Infantry_3Section_Desert {
					name = "3 Section";
					side = 1;
					faction = "BNB_FA_NAF_Desert";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_1IC_Desert";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Medic_Desert";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Desert";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_LMG_556_Desert";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BNB_FA_NAF_2IC_Desert";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Desert";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Desert";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_LMG_762_Desert";
					};
				};
			};
		};

		class BNB_FA_NAF_Multicam {
			name = "Norwegian Army (Multicam)";

			class Infantry {
				name = "Infantry";

				class BNB_FA_NAF_Infantry_Sentry_Multicam {
					name = "Sentry";
					side = 1;
					faction = "BNB_FA_NAF_Multicam";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Multicam";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Multicam";
					};
				};

				class BNB_FA_NAF_Infantry_Sniper_Team_Multicam {
					name = "Sniper Team";
					side = 1;
					faction = "BNB_FA_NAF_Multicam";
					icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BNB_FA_NAF_Sniper_Multicam";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Spotter_Multicam";
					};
				};

				class BNB_FA_NAF_Infantry_Recon_Team_Multicam {
					name = "Recon Team";
					side = 1;
					faction = "BNB_FA_NAF_Multicam";
					icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BNB_FA_NAF_Recon_IC_Multicam";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Recon_Rifleman_Multicam";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Recon_Rifleman_Multicam";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Recon_Rifleman_Multicam";
					};
				};

				class BNB_FA_NAF_Infantry_Section_Base_Multicam {
					name = "Section (Base)";
					side = 1;
					faction = "BNB_FA_NAF_Multicam";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_1IC_Multicam";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BNB_FA_NAF_2IC_Multicam";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Medic_Multicam";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Multicam";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Multicam";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Multicam";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Multicam";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Multicam";
					};
				};

				class BNB_FA_NAF_Infantry_Section_Blank_Multicam {
					name = "Section (Blank)";
					side = 1;
					faction = "BNB_FA_NAF_Multicam";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_Man_Multicam";
					};
					class Unit1 {
						position[] = {5,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BNB_FA_NAF_Man_Multicam";
					};
					class Unit2 {
						position[] = {-5,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Man_Multicam";
					};
					class Unit3 {
						position[] = {10,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Man_Multicam";
					};
					class Unit4 {
						position[] = {-10,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Man_Multicam";
					};
					class Unit5 {
						position[] = {0,5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Man_Multicam";
					};
					class Unit6 {
						position[] = {0,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Man_Multicam";
					};
					class Unit7 {
						position[] = {0,10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Man_Multicam";
					};
				};

				class BNB_FA_NAF_Infantry_Fireteam_Charlie_Multicam {
					name = "Fireteam Charlie";
					side = 1;
					faction = "BNB_FA_NAF_Multicam";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_1IC_Multicam";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Medic_Multicam";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Multicam";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_LMG_556_Multicam";
					};
				};

				class BNB_FA_NAF_Infantry_Fireteam_Delta_Multicam {
					name = "Fireteam Delta";
					side = 1;
					faction = "BNB_FA_NAF_Multicam";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BNB_FA_NAF_2IC_Multicam";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Marksman_Multicam";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Multicam";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_LMG_762_Multicam";
					};
				};

				class BNB_FA_NAF_Infantry_Buddy_Team_LMG_762_Multicam {
					name = "Buddy Team - LMG 7.62";
					side = 1;
					faction = "BNB_FA_NAF_Multicam";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_LMG_762_Multicam";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Multicam";
					};
				};

				class BNB_FA_NAF_Infantry_Buddy_Team_AT_Multicam {
					name = "Buddy Team - AT";
					side = 1;
					faction = "BNB_FA_NAF_Multicam";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_AT_Multicam";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Multicam";
					};
				};

				class BNB_FA_NAF_Infantry_Buddy_Team_Marksman_Multicam {
					name = "Buddy Team - Marksman";
					side = 1;
					faction = "BNB_FA_NAF_Multicam";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Marksman_Multicam";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Multicam";
					};
				};

				class BNB_FA_NAF_Infantry_1Section_Multicam {
					name = "1 Section";
					side = 1;
					faction = "BNB_FA_NAF_Multicam";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_1IC_Multicam";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Medic_Multicam";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_AT_Multicam";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_LMG_556_Multicam";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BNB_FA_NAF_2IC_Multicam";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Marksman_Multicam";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Multicam";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_LMG_762_Multicam";
					};
				};

				class BNB_FA_NAF_Infantry_2Section_Multicam {
					name = "2 Section";
					side = 1;
					faction = "BNB_FA_NAF_Multicam";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_1IC_Multicam";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Medic_Multicam";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Engineer_EOD_Multicam";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Multicam";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BNB_FA_NAF_2IC_Multicam";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Marksman_Multicam";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Multicam";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_LMG_762_Multicam";
					};
				};

				class BNB_FA_NAF_Infantry_3Section_Multicam {
					name = "3 Section";
					side = 1;
					faction = "BNB_FA_NAF_Multicam";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_1IC_Multicam";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Medic_Multicam";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Multicam";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_LMG_556_Multicam";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BNB_FA_NAF_2IC_Multicam";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Multicam";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Multicam";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_LMG_762_Multicam";
					};
				};
			};
		};

		class BNB_FA_NAF_Woodland {
			name = "Norwegian Army (Woodland)";

			class Infantry {
				name = "Infantry";

				class BNB_FA_NAF_Infantry_Sentry_Woodland {
					name = "Sentry";
					side = 1;
					faction = "BNB_FA_NAF_Woodland";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Woodland";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Woodland";
					};
				};

				class BNB_FA_NAF_Infantry_Sniper_Team_Woodland {
					name = "Sniper Team";
					side = 1;
					faction = "BNB_FA_NAF_Woodland";
					icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BNB_FA_NAF_Sniper_Woodland";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Spotter_Woodland";
					};
				};

				class BNB_FA_NAF_Infantry_Recon_Team_Woodland {
					name = "Recon Team";
					side = 1;
					faction = "BNB_FA_NAF_Woodland";
					icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BNB_FA_NAF_Recon_IC_Woodland";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Recon_Rifleman_Woodland";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Recon_Rifleman_Woodland";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Recon_Rifleman_Woodland";
					};
				};

				class BNB_FA_NAF_Infantry_Section_Base_Woodland {
					name = "Section (Base)";
					side = 1;
					faction = "BNB_FA_NAF_Woodland";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_1IC_Woodland";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BNB_FA_NAF_2IC_Woodland";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Medic_Woodland";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Woodland";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Woodland";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Woodland";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Woodland";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Woodland";
					};
				};

				class BNB_FA_NAF_Infantry_Section_Blank_Woodland {
					name = "Section (Blank)";
					side = 1;
					faction = "BNB_FA_NAF_Woodland";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_Man_Woodland";
					};
					class Unit1 {
						position[] = {5,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BNB_FA_NAF_Man_Woodland";
					};
					class Unit2 {
						position[] = {-5,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Man_Woodland";
					};
					class Unit3 {
						position[] = {10,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Man_Woodland";
					};
					class Unit4 {
						position[] = {-10,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Man_Woodland";
					};
					class Unit5 {
						position[] = {0,5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Man_Woodland";
					};
					class Unit6 {
						position[] = {0,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Man_Woodland";
					};
					class Unit7 {
						position[] = {0,10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Man_Woodland";
					};
				};

				class BNB_FA_NAF_Infantry_Fireteam_Charlie_Woodland {
					name = "Fireteam Charlie";
					side = 1;
					faction = "BNB_FA_NAF_Woodland";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_1IC_Woodland";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Medic_Woodland";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Woodland";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_LMG_556_Woodland";
					};
				};

				class BNB_FA_NAF_Infantry_Fireteam_Delta_Woodland {
					name = "Fireteam Delta";
					side = 1;
					faction = "BNB_FA_NAF_Woodland";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BNB_FA_NAF_2IC_Woodland";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Marksman_Woodland";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Woodland";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_LMG_762_Woodland";
					};
				};

				class BNB_FA_NAF_Infantry_Buddy_Team_LMG_762_Woodland {
					name = "Buddy Team - LMG 7.62";
					side = 1;
					faction = "BNB_FA_NAF_Woodland";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_LMG_762_Woodland";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Woodland";
					};
				};

				class BNB_FA_NAF_Infantry_Buddy_Team_AT_Woodland {
					name = "Buddy Team - AT";
					side = 1;
					faction = "BNB_FA_NAF_Woodland";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_AT_Woodland";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Woodland";
					};
				};

				class BNB_FA_NAF_Infantry_Buddy_Team_Marksman_Woodland {
					name = "Buddy Team - Marksman";
					side = 1;
					faction = "BNB_FA_NAF_Woodland";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Marksman_Woodland";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Woodland";
					};
				};

				class BNB_FA_NAF_Infantry_1Section_Woodland {
					name = "1 Section";
					side = 1;
					faction = "BNB_FA_NAF_Woodland";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_1IC_Woodland";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Medic_Woodland";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_AT_Woodland";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_LMG_556_Woodland";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BNB_FA_NAF_2IC_Woodland";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Marksman_Woodland";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Woodland";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_LMG_762_Woodland";
					};
				};

				class BNB_FA_NAF_Infantry_2Section_Woodland {
					name = "2 Section";
					side = 1;
					faction = "BNB_FA_NAF_Woodland";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_1IC_Woodland";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Medic_Woodland";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Engineer_EOD_Woodland";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Woodland";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BNB_FA_NAF_2IC_Woodland";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Marksman_Woodland";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Woodland";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_LMG_762_Woodland";
					};
				};

				class BNB_FA_NAF_Infantry_3Section_Woodland {
					name = "3 Section";
					side = 1;
					faction = "BNB_FA_NAF_Woodland";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "BNB_FA_NAF_1IC_Woodland";
					};
					class Unit1 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Medic_Woodland";
					};
					class Unit2 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Woodland";
					};
					class Unit3 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_LMG_556_Woodland";
					};
					class Unit4 {
						position[] = {-10,-10,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "BNB_FA_NAF_2IC_Woodland";
					};
					class Unit5 {
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Woodland";
					};
					class Unit6 {
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_Rifleman_Woodland";
					};
					class Unit7 {
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "BNB_FA_NAF_LMG_762_Woodland";
					};
				};
			};
		};
	};
};
