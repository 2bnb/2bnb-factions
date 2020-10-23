class CfgEditorSubcategories {
	class BNB_FA_RS_Vympel {
		displayName = "Infantry (Vympel)";
	};
	class BNB_FA_RS_SSO {
		displayName = "Infantry (SSO)";
	};
};

class CfgGroups {
	class EAST {
		side = 0;

		class BNB_FA_Russian_Spetznaz {
			name = "Russian Spetznaz";

			class Vympel {
				name = "Vympel";

				class BNB_FA_RS_Infantry_Sentry {
					name = "Sentry";
					side = 0;
					faction = "BNB_FA_Russian_Spetznaz";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = { 0 , 0 , 0 };
						rank = "SERGEANT";
						side = 0;
						vehicle = "BNB_FA_RS_Rifleman";
					};
					class Unit1 {
						position[] = { 5 , -5 , 0 };
						rank = "PRIVATE";
						side = 0;
						vehicle = "BNB_FA_RS_Grenadier";
					};
				};

				class BNB_FA_RS_Infantry_Assault_Team {
					name = "Assault Team";
					side = 0;
					faction = "BNB_FA_Russian_Spetznaz";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = { 0 , 0 , 0 };
						rank = "SERGEANT";
						side = 0;
						vehicle = "BNB_FA_RS_Fireteam_Leader";
					};
					class Unit1 {
						position[] = { 5 , -5 , 0 };
						rank = "PRIVATE";
						side = 0;
						vehicle = "BNB_FA_RS_Autorifleman";
					};
					class Unit2 {
						position[] = { -5 , -5 , 0 };
						rank = "PRIVATE";
						side = 0;
						vehicle = "BNB_FA_RS_Grenadier";
					};
					class Unit3 {
						position[] = { 10 , -10 , 0 };
						rank = "PRIVATE";
						side = 0;
						vehicle = "BNB_FA_RS_Rifleman";
					};
				};

				class BNB_FA_RS_Infantry_Fireteam {
					name = "Fireteam";
					side = 0;
					faction = "BNB_FA_Russian_Spetznaz";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = { 0 , 0 , 0 };
						rank = "SERGEANT";
						side = 0;
						vehicle = "BNB_FA_RS_Fireteam_Leader";
					};
					class Unit1 {
						position[] = { 5 , -5 , 0 };
						rank = "PRIVATE";
						side = 0;
						vehicle = "BNB_FA_RS_Autorifleman";
					};
					class Unit2 {
						position[] = { -5 , -5 , 0 };
						rank = "PRIVATE";
						side = 0;
						vehicle = "BNB_FA_RS_Rifleman_AT";
					};
					class Unit3 {
						position[] = { 10 , -10 , 0 };
						rank = "PRIVATE";
						side = 0;
						vehicle = "BNB_FA_RS_Rifleman";
					};
				};

				class BNB_FA_RS_Infantry_Squad {
					name = "Squad";
					side = 0;
					faction = "BNB_FA_Russian_Spetznaz";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = { 0 , 0 , 0 };
						rank = "SERGEANT";
						side = 0;
						vehicle = "BNB_FA_RS_Squad_Leader";
					};
					class Unit1 {
						position[] = { 5 , -5 , 0 };
						rank = "PRIVATE";
						side = 0;
						vehicle = "BNB_FA_RS_Autorifleman";
					};
					class Unit2 {
						position[] = { -5 , -5 , 0 };
						rank = "PRIVATE";
						side = 0;
						vehicle = "BNB_FA_RS_Marksman_VSS";
					};
					class Unit3 {
						position[] = { 10 , -10 , 0 };
						rank = "PRIVATE";
						side = 0;
						vehicle = "BNB_FA_RS_Medic";
					};
					class Unit4 {
						position[] = { -10 , -10 , 0 };
						rank = "PRIVATE";
						side = 0;
						vehicle = "BNB_FA_RS_Rifleman_AT";
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
						vehicle = "BNB_FA_RS_Rifleman";
					};
					class Unit7 {
						position[] = { 20 , -20 , 0 };
						rank = "PRIVATE";
						side = 0;
						vehicle = "BNB_FA_RS_Rifleman";
					};
				};

				class BNB_FA_RS_Sniper_Team {
					name = "Sniper Team";
					side = 0;
					faction = "BNB_FA_Russian_Spetznaz";
					icon = "\A3\ui_f\data\map\markers\nato\n_recon.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = { 0 , 0 , 0 };
						rank = "SERGEANT";
						side = 0;
						vehicle = "BNB_FA_RS_Sniper";
					};
					class Unit1 {
						position[] = { 5 , -5 , 0 };
						rank = "PRIVATE";
						side = 0;
						vehicle = "BNB_FA_RS_Spotter";
					};
				};

				class BNB_FA_RS_Recon_Element {
					name = "Recon Element";
					side = 0;
					faction = "BNB_FA_Russian_Spetznaz";
					icon = "\A3\ui_f\data\map\markers\nato\n_recon.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = { 0 , 0 , 0 };
						rank = "SERGEANT";
						side = 0;
						vehicle = "BNB_FA_RS_Recon";
					};
					class Unit1 {
						position[] = { 5 , -5 , 0 };
						rank = "PRIVATE";
						side = 0;
						vehicle = "BNB_FA_RS_Marksman_VSS";
					};
				};
			};

			class SSO {
				name = "SSO";

				class BNB_FA_RS_SSO_Sniper_Team {
					name = "SSO Sniper Team";
					side = 0;
					faction = "BNB_FA_Russian_Spetznaz";
					icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = { 0 , 0 , 0 };
						rank = "SERGEANT";
						side = 0;
						vehicle = "BNB_FA_RS_SSO_Sniper";
					};
					class Unit1 {
						position[] = { 5 , -5 , 0 };
						rank = "PRIVATE";
						side = 0;
						vehicle = "BNB_FA_RS_SSO_Spotter";
					};
				};

				class BNB_FA_RS_SSO_Sentry {
					name = "SSO Sentry";
					side = 0;
					faction = "BNB_FA_Russian_Spetznaz";
					icon = "\A3\ui_f\data\map\markers\nato\o_support.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = { 0 , 0 , 0 };
						rank = "SERGEANT";
						side = 0;
						vehicle = "BNB_FA_RS_SSO_Rifleman";
					};
					class Unit1 {
						position[] = { 5 , -5 , 0 };
						rank = "PRIVATE";
						side = 0;
						vehicle = "BNB_FA_RS_SSO_Grenadier";
					};
				};

				class BNB_FA_RS_SSO_Assault_Team {
					name = "SSO Assault Team";
					side = 0;
					faction = "BNB_FA_Russian_Spetznaz";
					icon = "\A3\ui_f\data\map\markers\nato\o_support.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = { 0 , 0 , 0 };
						rank = "SERGEANT";
						side = 0;
						vehicle = "BNB_FA_RS_SSO_Fireteam_Leader";
					};
					class Unit1 {
						position[] = { 5 , -5 , 0 };
						rank = "PRIVATE";
						side = 0;
						vehicle = "BNB_FA_RS_SSO_Autorifleman";
					};
					class Unit2 {
						position[] = { -5 , -5 , 0 };
						rank = "PRIVATE";
						side = 0;
						vehicle = "BNB_FA_RS_SSO_Grenadier";
					};
					class Unit3 {
						position[] = { 10 , -10 , 0 };
						rank = "PRIVATE";
						side = 0;
						vehicle = "BNB_FA_RS_SSO_Autorifleman";
					};
				};

				class BNB_FA_RS_SSO_Fireteam {
					name = "SSO Fireteam";
					side = 0;
					faction = "BNB_FA_Russian_Spetznaz";
					icon = "\A3\ui_f\data\map\markers\nato\o_support.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = { 0 , 0 , 0 };
						rank = "SERGEANT";
						side = 0;
						vehicle = "BNB_FA_RS_SSO_Fireteam_Leader";
					};
					class Unit1 {
						position[] = { 5 , -5 , 0 };
						rank = "PRIVATE";
						side = 0;
						vehicle = "BNB_FA_RS_SSO_Autorifleman";
					};
					class Unit2 {
						position[] = { -5 , -5 , 0 };
						rank = "PRIVATE";
						side = 0;
						vehicle = "BNB_FA_RS_SSO_Rifleman_AT";
					};
					class Unit3 {
						position[] = { 10 , -10 , 0 };
						rank = "PRIVATE";
						side = 0;
						vehicle = "BNB_FA_RS_SSO_Rifleman";
					};
				};

				class BNB_FA_RS_SSO_Squad {
					name = "SSO Squad";
					side = 0;
					faction = "BNB_FA_Russian_Spetznaz";
					icon = "\A3\ui_f\data\map\markers\nato\o_support.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = { 0 , 0 , 0 };
						rank = "SERGEANT";
						side = 0;
						vehicle = "BNB_FA_RS_SSO_Squad_Leader";
					};
					class Unit1 {
						position[] = { 5 , -5 , 0 };
						rank = "PRIVATE";
						side = 0;
						vehicle = "BNB_FA_RS_SSO_Autorifleman";
					};
					class Unit2 {
						position[] = { -5 , -5 , 0 };
						rank = "PRIVATE";
						side = 0;
						vehicle = "BNB_FA_RS_SSO_Medic";
					};
					class Unit3 {
						position[] = { 10 , -10 , 0 };
						rank = "PRIVATE";
						side = 0;
						vehicle = "BNB_FA_RS_SSO_Marksman";
					};
					class Unit4 {
						position[] = { -10 , -10 , 0 };
						rank = "PRIVATE";
						side = 0;
						vehicle = "BNB_FA_RS_SSO_Grenadier";
					};
					class Unit5 {
						position[] = { 15 , -15 , 0 };
						rank = "PRIVATE";
						side = 0;
						vehicle = "BNB_FA_RS_SSO_Rifleman_AT";
					};
					class Unit6 {
						position[] = { -15 , -15 , 0 };
						rank = "PRIVATE";
						side = 0;
						vehicle = "BNB_FA_RS_SSO_Rifleman";
					};
					class Unit7 {
						position[] = { 20 , -20 , 0 };
						rank = "PRIVATE";
						side = 0;
						vehicle = "BNB_FA_RS_SSO_Rifleman";
					};
				};
			};
		};
	};
};


class CBA_Extended_EventHandlers_base;

class CfgVehicles {

	class O_Soldier_TL_F;
	class O_Soldier_TL_F_OCimport_01 : O_Soldier_TL_F { scope = 0; class EventHandlers; };
	class O_Soldier_TL_F_OCimport_02 : O_Soldier_TL_F_OCimport_01 { class EventHandlers; };

	class O_soldier_F;
	class O_soldier_F_OCimport_01 : O_soldier_F { scope = 0; class EventHandlers; };
	class O_soldier_F_OCimport_02 : O_soldier_F_OCimport_01 { class EventHandlers; };

	class O_Soldier_AR_F;
	class O_Soldier_AR_F_OCimport_01 : O_Soldier_AR_F { scope = 0; class EventHandlers; };
	class O_Soldier_AR_F_OCimport_02 : O_Soldier_AR_F_OCimport_01 { class EventHandlers; };

	class O_Soldier_GL_F;
	class O_Soldier_GL_F_OCimport_01 : O_Soldier_GL_F { scope = 0; class EventHandlers; };
	class O_Soldier_GL_F_OCimport_02 : O_Soldier_GL_F_OCimport_01 { class EventHandlers; };

	class O_Soldier_M_F;
	class O_Soldier_M_F_OCimport_01 : O_Soldier_M_F { scope = 0; class EventHandlers; };
	class O_Soldier_M_F_OCimport_02 : O_Soldier_M_F_OCimport_01 { class EventHandlers; };

	class O_Spotter_F;
	class O_Spotter_F_OCimport_01 : O_Spotter_F { scope = 0; class EventHandlers; };
	class O_Spotter_F_OCimport_02 : O_Spotter_F_OCimport_01 { class EventHandlers; };

	class O_Soldier_SL_F;
	class O_Soldier_SL_F_OCimport_01 : O_Soldier_SL_F { scope = 0; class EventHandlers; };
	class O_Soldier_SL_F_OCimport_02 : O_Soldier_SL_F_OCimport_01 { class EventHandlers; };

	class rhs_mvd_izlom_rifleman_LAT;
	class rhs_mvd_izlom_rifleman_LAT_OCimport_01 : rhs_mvd_izlom_rifleman_LAT { scope = 0; class EventHandlers; };
	class rhs_mvd_izlom_rifleman_LAT_OCimport_02 : rhs_mvd_izlom_rifleman_LAT_OCimport_01 { class EventHandlers; };

	class O_Sniper_F;
	class O_Sniper_F_OCimport_01 : O_Sniper_F { scope = 0; class EventHandlers; };
	class O_Sniper_F_OCimport_02 : O_Sniper_F_OCimport_01 { class EventHandlers; };

	class rhs_msv_emr_medic;
	class rhs_msv_emr_medic_OCimport_01 : rhs_msv_emr_medic { scope = 0; class EventHandlers; };
	class rhs_msv_emr_medic_OCimport_02 : rhs_msv_emr_medic_OCimport_01 { class EventHandlers; };

	class rhs_msv_emr_sergeant;
	class rhs_msv_emr_sergeant_OCimport_01 : rhs_msv_emr_sergeant { scope = 0; class EventHandlers; };
	class rhs_msv_emr_sergeant_OCimport_02 : rhs_msv_emr_sergeant_OCimport_01 { class EventHandlers; };

	class O_crew_F;
	class O_crew_F_OCimport_01 : O_crew_F { scope = 0; class EventHandlers; };
	class O_crew_F_OCimport_02 : O_crew_F_OCimport_01 { class EventHandlers; };


	class BNB_FA_RS_Crewman : O_crew_F_OCimport_02 {
		author = "jarrad96";
		scope = 2;
		scopeCurator = 2;
		displayName = "Crewman";
		side = 0;
		faction = "BNB_FA_Russian_Spetznaz";

		identityTypes[] = { "Head_Euro" , "LanguageRus" , "G_IRAN_default" };


		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_unit = _this select 0;_onSpawn = {_unit = _this select 0;_unit setUnitLoadout [['rhs_weap_aks74u','rhs_acc_pgs64_74u','','',['rhs_30Rnd_545x39_AK',30],[],''],[],['rhs_weap_pya','','','',[],[],''],['BNB_EX_Surpat_Gear_Camo_Unf_R',[['FirstAidKit',5]]],['rhs_vest_commander',[['SmokeShell',1,1],['rhs_30Rnd_545x39_AK',3,30]]],[],'rhs_tsh4_ess_bala','',[],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','rhs_1PN138']];reload _unit;};[_unit] call _onSpawn;_unit addMPEventHandler ['MPRespawn', _onSpawn];};";
			};
		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
	};

	// Vympel
	class BNB_FA_RS_Fireteam_Leader : O_Soldier_TL_F_OCimport_02 {
		author = "jarrad96";
		scope = 2;
		scopeCurator = 2;
		displayName = "Fireteam Leader";
		side = 0;
		faction = "BNB_FA_Russian_Spetznaz";
		editorSubcategory = "BNB_FA_RS_Vympel";

		identityTypes[] = { "Head_Euro" , "LanguageRus" , "G_HAF_default" };


		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_unit = _this select 0;_onSpawn = {_unit = _this select 0;_unit setUnitLoadout [['rhs_weap_ak74mr','rhs_acc_dtk','rhs_acc_perst3_2dp_light_h','rhsusf_acc_SpecterDR',['rhs_30Rnd_545x39_AK',30],[],''],[],['rhs_weap_pya','','','',['rhs_mag_9x19_17',17],[],''],['BNB_EX_Surpat_Gear_Camo_Unf_R',[['FirstAidKit',6]]],['VSM_FAPC_Breacher_OGA_OD',[['rhs_mag_9x19_17',4,17],['rhs_30Rnd_545x39_AK',10,30],['rhs_mag_rgo',2,1],['rhs_mag_rdg2_white',2,1],['rhs_mag_rdg2_black',1,1],['rhs_mag_fakels',2,1]]],[],'rhs_6b7_1m_bala2_olive','',['Binocular','','','',[],[],''],['ItemMap','ItemGPS','ItemRadio','ItemCompass','ItemWatch','rhs_1PN138']];reload _unit;};[_unit] call _onSpawn;_unit addMPEventHandler ['MPRespawn', _onSpawn];};";
			};
		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
	};

	class BNB_FA_RS_Rifleman : O_soldier_F_OCimport_02 {
		author = "jarrad96";
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman";
		side = 0;
		faction = "BNB_FA_Russian_Spetznaz";
		editorSubcategory = "BNB_FA_RS_Vympel";

		identityTypes[] = { "Head_Euro" , "LanguageRus" , "G_HAF_default" };


		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_unit = _this select 0;_onSpawn = {_unit = _this select 0;_unit setUnitLoadout [['rhs_weap_ak74m_npz','rhs_acc_dtk','','rhsusf_acc_eotech_xps3',['rhs_30Rnd_545x39_AK',30],[],''],[],['rhs_weap_pya','','','',['rhs_mag_9x19_17',17],[],''],['BNB_EX_Surpat_Gear_Camo_Unf',[['FirstAidKit',6]]],['VSM_FAPC_Operator_OGA_OD',[['rhs_mag_9x19_17',4,17],['rhs_30Rnd_545x39_AK',10,30],['rhs_mag_rgo',2,1],['rhs_mag_rdg2_white',2,1]]],[],'BNB_EX_Surpat_Gear_Helmet','',[],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','rhs_1PN138']];reload _unit;};[_unit] call _onSpawn;_unit addMPEventHandler ['MPRespawn', _onSpawn];};";
			};
		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
	};

	class BNB_FA_RS_Autorifleman : O_Soldier_AR_F_OCimport_02 {
		author = "jarrad96";
		scope = 2;
		scopeCurator = 2;
		displayName = "Autorifleman";
		side = 0;
		faction = "BNB_FA_Russian_Spetznaz";
		editorSubcategory = "BNB_FA_RS_Vympel";

		identityTypes[] = { "Head_Euro" , "LanguageRus" , "G_HAF_default" };


		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_unit = _this select 0;_onSpawn = {_unit = _this select 0;_unit setUnitLoadout [['rhs_weap_pkp','','','rhs_acc_1p78',['rhs_100Rnd_762x54mmR',100],[],''],[],['rhs_weap_pya','','','',['rhs_mag_9x19_17',17],[],''],['BNB_EX_Surpat_Gear_Camo_Unf_R',[['FirstAidKit',6]]],['VSM_FAPC_MG_OGA_OD',[['rhs_mag_9x19_17',4,17],['rhs_100Rnd_762x54mmR',3,100],['rhs_mag_rgo',2,1],['rhs_mag_rdg2_white',2,1],['rhs_mag_rdg2_black',1,1]]],[],'rhs_altyn_novisor_ess_bala','',['Binocular','','','',[],[],''],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','rhs_1PN138']];reload _unit;};[_unit] call _onSpawn;_unit addMPEventHandler ['MPRespawn', _onSpawn];};";
			};
		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
	};

	class BNB_FA_RS_Grenadier : O_Soldier_GL_F_OCimport_02 {
		author = "jarrad96";
		scope = 2;
		scopeCurator = 2;
		displayName = "Grenadier";
		side = 0;
		faction = "BNB_FA_Russian_Spetznaz";
		editorSubcategory = "BNB_FA_RS_Vympel";

		identityTypes[] = { "Head_Euro" , "LanguageRus" , "G_HAF_default" };


		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_unit = _this select 0;_onSpawn = {_unit = _this select 0;_unit setUnitLoadout [['rhs_weap_ak74m_gp25_npz','rhs_acc_dtk','','rhsusf_acc_eotech_xps3',['rhs_30Rnd_545x39_AK',30],['rhs_VOG25',1],''],[],['rhs_weap_pya','','','',['rhs_mag_9x19_17',17],[],''],['BNB_EX_Surpat_Gear_Camo_Unf_TG',[['FirstAidKit',5]]],['VSM_FAPC_Operator_OGA_OD',[['rhs_mag_9x19_17',4,17],['rhs_30Rnd_545x39_AK',10,30],['rhs_VOG25',9,1],['rhs_VG40OP_white',1,1],['rhs_mag_rgo',1,1],['rhs_mag_rdg2_white',2,1]]],[],'rhsusf_opscore_rg_cover','',['Binocular','','','',[],[],''],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','rhs_1PN138']];reload _unit;};[_unit] call _onSpawn;_unit addMPEventHandler ['MPRespawn', _onSpawn];};";
			};
		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
	};

	class BNB_FA_RS_Marksman_VSS : O_Soldier_M_F_OCimport_02 {
		author = "jarrad96";
		scope = 2;
		scopeCurator = 2;
		displayName = "Marksman (VSS)";
		side = 0;
		faction = "BNB_FA_Russian_Spetznaz";
		editorSubcategory = "BNB_FA_RS_Vympel";

		identityTypes[] = { "Head_Euro" , "LanguageRus" , "G_HAF_default" };


		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_unit = _this select 0;_onSpawn = {_unit = _this select 0;_unit setUnitLoadout [['rhs_weap_vss_grip','','rhs_acc_perst1ik_ris','rhs_acc_pso1m21',['rhs_10rnd_9x39mm_SP5',10],[],''],[],['rhs_weap_pya','','','',['rhs_mag_9x19_17',17],[],''],['BNB_EX_Surpat_Gear_Camo_Unf',[['FirstAidKit',6]]],['VSM_FAPC_Operator_OGA_OD',[['rhs_10rnd_9x39mm_SP5',10,10],['rhs_mag_9x19_17',4,17],['rhs_mag_rgo',2,1],['rhs_mag_rdg2_white',2,1],['rhs_mag_rdg2_black',1,1],['rhs_mag_nspn_green',1,1]]],[],'BNB_EX_Surpat_Gear_Cap2','',['Rangefinder','','','',[],[],''],['ItemMap','ItemGPS','ItemRadio','ItemCompass','ItemWatch','rhs_1PN138']];reload _unit;};[_unit] call _onSpawn;_unit addMPEventHandler ['MPRespawn', _onSpawn];};";
			};
		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
	};

	class BNB_FA_RS_Recon : O_Spotter_F_OCimport_02 {
		author = "jarrad96";
		scope = 2;
		scopeCurator = 2;
		displayName = "Recon";
		side = 0;
		faction = "BNB_FA_Russian_Spetznaz";
		editorSubcategory = "BNB_FA_RS_Vympel";

		identityTypes[] = { "Head_Euro" , "LanguageRus" , "G_NATO_sniper" };


		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_unit = _this select 0;_onSpawn = {_unit = _this select 0;_unit setUnitLoadout [['rhs_weap_aks74un','rhs_acc_pbs4','','',['rhs_30Rnd_545x39_AK',30],[],''],[],['rhs_weap_tr8','','','',[],[],''],['BNB_EX_Surpat_Gear_Camo_Unf',[['FirstAidKit',6]]],['VSM_FAPC_Operator_OGA_OD',[['rhs_30Rnd_545x39_7U1_AK',12,30],['rhs_mag_rgn',2,1],['rhs_mag_rdg2_white',2,1],['rhs_mag_rdg2_black',1,1]]],[],'rhsusf_opscore_rg_cover','VSM_Balaclava2_OD_Peltor_Goggles',['Rangefinder','','','',[],[],''],['ItemMap','ItemGPS','ItemRadio','ItemCompass','ItemWatch','rhs_1PN138']];reload _unit;};[_unit] call _onSpawn;_unit addMPEventHandler ['MPRespawn', _onSpawn];};";
			};
		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
	};

	class BNB_FA_RS_Squad_Leader : O_Soldier_SL_F_OCimport_02 {
		author = "jarrad96";
		scope = 2;
		scopeCurator = 2;
		displayName = "Squad Leader";
		side = 0;
		faction = "BNB_FA_Russian_Spetznaz";
		editorSubcategory = "BNB_FA_RS_Vympel";

		identityTypes[] = { "Head_Euro" , "LanguageRus" , "G_HAF_default" };


		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_unit = _this select 0;_onSpawn = {_unit = _this select 0;_unit setUnitLoadout [['rhs_weap_ak103_zenitco01_b33','rhs_acc_dtk3','rhs_acc_perst3','rhsusf_acc_SpecterDR_A',['rhs_30Rnd_762x39mm',30],[],''],[],['rhs_weap_pya','','','',['rhs_mag_9x19_17',17],[],''],['BNB_EX_Surpat_Gear_Camo_Unf',[['FirstAidKit',6]]],['VSM_FAPC_Breacher_OGA_OD',[['O_IR_Grenade',1,1],['rhs_30Rnd_762x39mm',10,30],['rhs_mag_9x19_17',4,17],['rhs_mag_rgn',2,1],['rhs_mag_rdg2_white',1,1]]],[],'VSM_Black_OPS_2','G_Aviator',['rhs_pdu4','','','',[],[],''],['ItemMap','ItemGPS','ItemRadio','ItemCompass','ItemWatch','rhs_1PN138']];reload _unit;};[_unit] call _onSpawn;_unit addMPEventHandler ['MPRespawn', _onSpawn];};";
			};
		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
	};

	class BNB_FA_RS_Rifleman_AT : rhs_mvd_izlom_rifleman_LAT_OCimport_02 {
		author = "jarrad96";
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman (AT)";
		side = 0;
		faction = "BNB_FA_Russian_Spetznaz";
		editorSubcategory = "BNB_FA_RS_Vympel";

		identityTypes[] = { "Head_Euro" , "LanguageRus" , "Head_Russian" };


		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_unit = _this select 0;_onSpawn = {_unit = _this select 0;_unit setUnitLoadout [['rhs_weap_ak74m_zenitco01','rhs_acc_dtk','rhs_acc_perst3','',['rhs_30Rnd_545x39_AK',30],[],'rhs_acc_grip_ffg2'],['rhs_weap_rpg26','','','',['rhs_rpg26_mag',1],[],''],['rhs_weap_pya','','','',['rhs_mag_9x19_17',17],[],''],['BNB_EX_Surpat_Gear_Camo_Unf_R',[['FirstAidKit',4],['rhs_1PN138',1]]],['VSM_FAPC_Operator_OGA_OD',[['rhs_mag_9x19_17',4,17],['rhs_30Rnd_545x39_AK',10,30],['rhs_mag_rgo',2,1],['rhs_mag_rdg2_white',2,1]]],[],'rhs_6b7_1m_bala1_olive','',[],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','']];reload _unit;};[_unit] call _onSpawn;_unit addMPEventHandler ['MPRespawn', _onSpawn];};";
			};
		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
	};

	class BNB_FA_RS_Sniper : O_Sniper_F_OCimport_02 {
		author = "jarrad96";
		scope = 2;
		scopeCurator = 2;
		displayName = "Sniper";
		side = 0;
		faction = "BNB_FA_Russian_Spetznaz";
		editorSubcategory = "BNB_FA_RS_Vympel";

		identityTypes[] = { "Head_Euro" , "LanguageRus" , "G_NATO_sniper" };


		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_unit = _this select 0;_onSpawn = {_unit = _this select 0;_unit setUnitLoadout [['rhs_weap_t5000','','','rhs_acc_dh520x56',['rhs_5Rnd_338lapua_t5000',5],[],'rhs_acc_harris_swivel'],[],['rhs_weap_pya','','','',['rhs_mag_9x19_17',17],[],''],['BNB_EX_Surpat_Gear_Camo_Unf_Ghillie',[['FirstAidKit',5],['SmokeShell',2,1]]],['V_TacChestrig_grn_F',[['O_IR_Grenade',1,1],['rhs_5Rnd_338lapua_t5000',12,5],['rhs_mag_9x19_17',4,17],['rhs_mag_rgn',2,1],['rhs_mag_rdg2_white',2,1],['rhs_mag_rdg2_black',1,1]]],[],'BNB_EX_Surpat_Gear_Boonie_HS','',['rhs_pdu4','','','',[],[],''],['ItemMap','ItemGPS','ItemRadio','ItemCompass','ItemWatch','rhs_1PN138']];reload _unit;};[_unit] call _onSpawn;_unit addMPEventHandler ['MPRespawn', _onSpawn];};";
			};
		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
	};

	class BNB_FA_RS_Spotter : O_Spotter_F_OCimport_02 {
		author = "jarrad96";
		scope = 2;
		scopeCurator = 2;
		displayName = "Spotter";
		side = 0;
		faction = "BNB_FA_Russian_Spetznaz";
		editorSubcategory = "BNB_FA_RS_Vympel";

		identityTypes[] = { "Head_Greek" , "LanguageGRE_F" , "G_NATO_sniper" };


		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_unit = _this select 0;_onSpawn = {_unit = _this select 0;_unit setUnitLoadout [['rhs_weap_ak74mr','rhs_acc_tgpa','rhs_acc_perst3','rhsusf_acc_eotech_xps3',['rhs_30Rnd_545x39_AK',30],[],'rhs_acc_grip_rk6'],[],['rhs_weap_rsp30_green','','','',[],[],''],['BNB_EX_Surpat_Gear_Camo_Unf_Ghillie',[['FirstAidKit',5],['SmokeShell',2,1]]],['V_TacChestrig_grn_F',[['O_IR_Grenade',2,1],['rhs_30Rnd_545x39_AK',10,30],['rhs_mag_rgn',1,1],['rhs_mag_rdg2_white',2,1]]],[],'BNB_EX_Surpat_Gear_Boonie_HS','',['Rangefinder','','','',[],[],''],['ItemMap','ItemGPS','ItemRadio','ItemCompass','ItemWatch','rhs_1PN138']];reload _unit;};[_unit] call _onSpawn;_unit addMPEventHandler ['MPRespawn', _onSpawn];};";
			};
		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
	};

	class BNB_FA_RS_Medic : rhs_msv_emr_medic_OCimport_02 {
		author = "jarrad96";
		scope = 2;
		scopeCurator = 2;
		displayName = "Medic";
		side = 0;
		faction = "BNB_FA_Russian_Spetznaz";
		editorSubcategory = "BNB_FA_RS_Vympel";

		identityTypes[] = { "Head_Euro" , "LanguageRus" , "G_HAF_default" };


		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_unit = _this select 0;_onSpawn = {_unit = _this select 0;_unit setUnitLoadout [['rhs_weap_ak103_zenitco01_b33','rhs_acc_dtk','rhs_acc_perst3','rhs_acc_rakursPM',['rhs_30Rnd_762x39mm',30],[],''],[],['rhs_weap_pya','','','',['rhs_mag_9x19_17',17],[],''],['BNB_EX_Surpat_Gear_Camo_Unf',[['FirstAidKit',6]]],['VSM_FAPC_Operator_OGA_OD',[['rhs_30Rnd_762x39mm',10,30],['rhs_mag_9x19_17',4,17],['rhs_mag_rgo',2,1],['rhs_mag_nspn_green',1,1],['rhs_mag_fakel',2,1]]],['I_Fieldpack_oli_Medic',[['Medikit',1],['FirstAidKit',10]]],'VSM_Mich2000_2_CamoSprayOD','VSM_balaclava2_Black',[],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','rhs_1PN138']];reload _unit;};[_unit] call _onSpawn;_unit addMPEventHandler ['MPRespawn', _onSpawn];};";
			};
		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
	};

	// SSO
	class BNB_FA_RS_SSO_Rifleman : BNB_FA_RS_Rifleman {
		author = "jarrad96";
		scope = 2;
		scopeCurator = 2;
		displayName = "SSO Rifleman";
		side = 0;
		faction = "BNB_FA_Russian_Spetznaz";
		editorSubcategory = "BNB_FA_RS_SSO";

		identityTypes[] = { "Head_Euro" , "LanguageRus" , "G_HAF_default" };


		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_unit = _this select 0;_onSpawn = {_unit = _this select 0;_unit setUnitLoadout [['rhs_weap_ak74m_desert_npz','rhs_acc_dtk','','rhsusf_acc_eotech_xps3',['rhs_30Rnd_545x39_AK',30],[],''],[],['rhs_weap_pya','','','',['rhs_mag_9x19_17',17],[],''],['VSM_Multicam_Camo',[['FirstAidKit',6]]],['VSM_FAPC_Operator_OGA_OD',[['rhs_mag_9x19_17',4,17],['rhs_mag_rgo',2,1],['rhs_mag_rdg2_white',2,1],['rhs_30Rnd_545x39_AK',10,30]]],[],'rhsusf_opscore_rg_cover_pelt','',[],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','rhs_1PN138']];reload _unit;};[_unit] call _onSpawn;_unit addMPEventHandler ['MPRespawn', _onSpawn];};";
			};
		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
	};

	class BNB_FA_RS_SSO_Autorifleman : BNB_FA_RS_Autorifleman {
		author = "jarrad96";
		scope = 2;
		scopeCurator = 2;
		displayName = "SSO Autorifleman";
		side = 0;
		faction = "BNB_FA_Russian_Spetznaz";
		editorSubcategory = "BNB_FA_RS_SSO";

		identityTypes[] = { "Head_Euro" , "LanguageRus" , "G_HAF_default" };


		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_unit = _this select 0;_onSpawn = {_unit = _this select 0;_unit setUnitLoadout [['rhs_weap_pkp','','','rhs_acc_1p78',['rhs_100Rnd_762x54mmR',100],[],''],[],['rhs_weap_pya','','','',['rhs_mag_9x19_17',17],[],''],['VSM_Multicam_tan_shirt_Camo_SS',[['FirstAidKit',6]]],['VSM_FAPC_MG_Multicam',[['rhs_mag_9x19_17',4,17],['rhs_100Rnd_762x54mmR',3,100],['rhs_mag_rgo',2,1],['rhs_mag_rdg2_white',2,1],['rhs_mag_rdg2_black',1,1]]],[],'rhsusf_opscore_coy_cover_pelt','',['Binocular','','','',[],[],''],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','rhs_1PN138']];reload _unit;};[_unit] call _onSpawn;_unit addMPEventHandler ['MPRespawn', _onSpawn];};";
			};
		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
	};

	class BNB_FA_RS_SSO_Grenadier : BNB_FA_RS_Grenadier {
		author = "jarrad96";
		scope = 2;
		scopeCurator = 2;
		displayName = "SSO Grenadier";
		side = 0;
		faction = "BNB_FA_Russian_Spetznaz";
		editorSubcategory = "BNB_FA_RS_SSO";

		identityTypes[] = { "Head_Euro" , "LanguageRus" , "G_HAF_default" };


		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_unit = _this select 0;_onSpawn = {_unit = _this select 0;_unit setUnitLoadout [['rhs_weap_ak74mr_gp25','rhs_acc_dtk','','rhsusf_acc_compm4',['rhs_30Rnd_545x39_AK',30],['rhs_VOG25',1],''],[],['rhs_weap_pya','','','',['rhs_mag_9x19_17',17],[],''],['VSM_Multicam_casual_Camo',[['FirstAidKit',6],['rhs_30Rnd_545x39_AK',1,30]]],['VSM_FAPC_Operator_OGA_OD',[['rhs_mag_9x19_17',4,17],['rhs_VOG25',10,1],['rhs_VG40OP_white',1,1],['rhs_mag_rgo',1,1],['rhs_mag_rdg2_white',2,1],['rhs_30Rnd_545x39_AK',10,30]]],[],'rhsusf_opscore_coy_cover_pelt','',['Binocular','','','',[],[],''],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','rhs_1PN138']];reload _unit;};[_unit] call _onSpawn;_unit addMPEventHandler ['MPRespawn', _onSpawn];};";
			};
		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
	};

	class BNB_FA_RS_SSO_Fireteam_Leader : BNB_FA_RS_Fireteam_Leader {
		author = "jarrad96";
		scope = 2;
		scopeCurator = 2;
		displayName = "SSO Fireteam Leader";
		side = 0;
		faction = "BNB_FA_Russian_Spetznaz";
		editorSubcategory = "BNB_FA_RS_SSO";

		identityTypes[] = { "Head_Euro" , "LanguageRus" , "G_HAF_default" };


		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_unit = _this select 0;_onSpawn = {_unit = _this select 0;_unit setUnitLoadout [['rhs_weap_ak103_zenitco01','rhs_acc_dtk','','rhs_acc_pkas',['rhs_30Rnd_762x39mm',30],[],''],[],['rhs_weap_pya','','','',['rhs_mag_9x19_17',17],[],''],['VSM_Multicam_Camo',[['FirstAidKit',6]]],['VSM_FAPC_Breacher_Multicam',[['rhs_mag_9x19_17',4,17],['rhs_mag_rgo',2,1],['rhs_mag_rdg2_white',2,1],['rhs_mag_rdg2_black',1,1],['rhs_mag_fakels',2,1],['rhs_30Rnd_762x39mm',8,30]]],[],'rhsusf_opscore_mc_cover_pelt_cam','VSM_balaclava2_Black',['Binocular','','','',[],[],''],['ItemMap','ItemGPS','ItemRadio','ItemCompass','ItemWatch','rhs_1PN138']];reload _unit;};[_unit] call _onSpawn;_unit addMPEventHandler ['MPRespawn', _onSpawn];};";
			};
		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
	};

	class BNB_FA_RS_SSO_Medic : BNB_FA_RS_Medic {
		author = "jarrad96";
		scope = 2;
		scopeCurator = 2;
		displayName = "SSO Medic";
		side = 0;
		faction = "BNB_FA_Russian_Spetznaz";
		editorSubcategory = "BNB_FA_RS_SSO";

		identityTypes[] = { "Head_Euro" , "LanguageRus" , "G_HAF_default" };


		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_unit = _this select 0;_onSpawn = {_unit = _this select 0;_unit setUnitLoadout [['rhs_weap_ak103_zenitco01_b33','rhs_acc_dtk','rhs_acc_perst3','rhs_acc_rakursPM',['rhs_30Rnd_762x39mm',30],[],''],[],['rhs_weap_pya','','','',['rhs_mag_9x19_17',17],[],''],['VSM_Multicam_Crye_Camo',[['FirstAidKit',6]]],['VSM_FAPC_Operator_OGA_OD',[['rhs_30Rnd_762x39mm',10,30],['rhs_mag_9x19_17',4,17],['rhs_mag_rgo',2,1],['rhs_mag_nspn_green',1,1],['rhs_mag_fakel',2,1]]],['I_Fieldpack_oli_Medic',[['Medikit',1],['FirstAidKit',10]]],'VSM_Mich2000_2_CamoSprayTAN','G_Combat',[],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','rhs_1PN138']];reload _unit;};[_unit] call _onSpawn;_unit addMPEventHandler ['MPRespawn', _onSpawn];};";
			};
		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
	};

	class BNB_FA_RS_SSO_Marksman : BNB_FA_RS_Marksman_VSS {
		author = "jarrad96";
		scope = 2;
		scopeCurator = 2;
		displayName = "SSO Marksman";
		side = 0;
		faction = "BNB_FA_Russian_Spetznaz";
		editorSubcategory = "BNB_FA_RS_SSO";

		identityTypes[] = { "Head_Euro" , "LanguageRus" , "G_HAF_default" };


		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_unit = _this select 0;_onSpawn = {_unit = _this select 0;_unit setUnitLoadout [['rhs_weap_svds','rhs_acc_tgpv','','rhs_acc_pso1m21',['rhs_10Rnd_762x54mmR_7N1',10],[],''],[],['rhs_weap_pya','','','',['rhs_mag_9x19_17',17],[],''],['VSM_Multicam_Crye_Camo',[['FirstAidKit',6],['rhs_mag_rgn',2,1]]],['VSM_FAPC_Operator_OGA_OD',[['rhs_mag_9x19_17',4,17],['rhs_mag_rdg2_white',2,1],['rhs_mag_rdg2_black',1,1],['rhs_mag_nspn_green',1,1],['rhs_10Rnd_762x54mmR_7N1',12,10]]],[],'rhsusf_opscore_mc_pelt_nsw','',['Rangefinder','','','',[],[],''],['ItemMap','ItemGPS','ItemRadio','ItemCompass','ItemWatch','rhs_1PN138']];reload _unit;};[_unit] call _onSpawn;_unit addMPEventHandler ['MPRespawn', _onSpawn];};";
			};
		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
	};

	class BNB_FA_RS_SSO_Rifleman_AT : BNB_FA_RS_Rifleman_AT {
		author = "jarrad96";
		scope = 2;
		scopeCurator = 2;
		displayName = "SSO Rifleman (AT)";
		side = 0;
		faction = "BNB_FA_Russian_Spetznaz";
		editorSubcategory = "BNB_FA_RS_SSO";

		identityTypes[] = { "Head_Euro" , "LanguageRus" , "Head_Russian" };


		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_unit = _this select 0;_onSpawn = {_unit = _this select 0;_unit setUnitLoadout [['rhs_weap_ak74m_zenitco01','rhs_acc_dtk','rhs_acc_perst3','',['rhs_30Rnd_545x39_AK',30],[],'rhs_acc_grip_ffg2'],['rhs_weap_rpg26','','','',['rhs_rpg26_mag',1],[],''],['rhs_weap_pya','','','',['rhs_mag_9x19_17',17],[],''],['VSM_Multicam_tan_pants_Camo_SS',[['FirstAidKit',4],['rhs_1PN138',1]]],['VSM_FAPC_Operator_OGA_OD',[['rhs_mag_9x19_17',4,17],['rhs_30Rnd_545x39_AK',10,30],['rhs_mag_rgo',2,1],['rhs_mag_rdg2_white',2,1]]],[],'rhs_6b7_1m_bala2_olive','',[],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','']];reload _unit;};[_unit] call _onSpawn;_unit addMPEventHandler ['MPRespawn', _onSpawn];};";
			};
		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
	};

	class BNB_FA_RS_SSO_Squad_Leader : rhs_msv_emr_sergeant_OCimport_02 {
		author = "jarrad96";
		scope = 2;
		scopeCurator = 2;
		displayName = "SSO Squad Leader";
		side = 0;
		faction = "BNB_FA_Russian_Spetznaz";
		editorSubcategory = "BNB_FA_RS_SSO";

		identityTypes[] = { "Head_Euro" , "LanguageRus" , "G_HAF_default" };


		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_unit = _this select 0;_onSpawn = {_unit = _this select 0;_unit setUnitLoadout [['rhs_weap_ak103_zenitco01_b33','rhs_acc_dtk3','rhs_acc_perst3','rhsusf_acc_SpecterDR_A',['rhs_30Rnd_762x39mm',30],[],''],[],['rhs_weap_pya','','','',['rhs_mag_9x19_17',17],[],''],['VSM_Multicam_Crye_Camo',[['FirstAidKit',6]]],['VSM_FAPC_Breacher_OGA_OD',[['O_IR_Grenade',1,1],['rhs_30Rnd_762x39mm',10,30],['rhs_mag_9x19_17',4,17],['rhs_mag_rgn',2,1],['rhs_mag_rdg2_white',1,1]]],[],'VSM_Black_OPS_2','G_Shades_Green',['rhs_pdu4','','','',[],[],''],['ItemMap','ItemGPS','ItemRadio','ItemCompass','ItemWatch','rhs_1PN138']];reload _unit;};[_unit] call _onSpawn;_unit addMPEventHandler ['MPRespawn', _onSpawn];};";
			};
		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
	};

	class BNB_FA_RS_SSO_Sniper : BNB_FA_RS_Sniper {
		author = "jarrad96";
		scope = 2;
		scopeCurator = 2;
		displayName = "SSO Sniper";
		side = 0;
		faction = "BNB_FA_Russian_Spetznaz";
		editorSubcategory = "BNB_FA_RS_SSO";

		identityTypes[] = { "Head_Euro" , "LanguageRus" , "G_NATO_sniper" };


		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_unit = _this select 0;_onSpawn = {_unit = _this select 0;_unit setUnitLoadout [['rhs_weap_t5000','','','rhs_acc_dh520x56',['rhs_5Rnd_338lapua_t5000',5],[],'rhs_acc_harris_swivel'],[],['rhsusf_weap_glock17g4','','','',['rhsusf_mag_17Rnd_9x19_JHP',17],[],''],['VSM_Multicam_Crye_Camo',[['FirstAidKit',5],['SmokeShell',2,1],['rhsusf_mag_17Rnd_9x19_JHP',3,17]]],['VSM_CarrierRig_Operator_OGA',[['O_IR_Grenade',1,1],['rhs_5Rnd_338lapua_t5000',12,5],['rhs_mag_rgn',2,1],['rhs_mag_rdg2_white',2,1],['rhs_mag_rdg2_black',1,1]]],[],'rhsusf_mich_bare_norotos_arc_tan','',['rhs_pdu4','','','',[],[],''],['ItemMap','ItemGPS','ItemRadio','ItemCompass','ItemWatch','rhs_1PN138']];reload _unit;};[_unit] call _onSpawn;_unit addMPEventHandler ['MPRespawn', _onSpawn];};";
			};
		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
	};

	class BNB_FA_RS_SSO_Spotter : BNB_FA_RS_Spotter {
		author = "jarrad96";
		scope = 2;
		scopeCurator = 2;
		displayName = "SSO Spotter";
		side = 0;
		faction = "BNB_FA_Russian_Spetznaz";
		editorSubcategory = "BNB_FA_RS_SSO";

		identityTypes[] = { "Head_Greek" , "LanguageGRE_F" , "G_NATO_sniper" };


		class EventHandlers : EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

			class ALiVE_orbatCreator {
				init = "if (local (_this select 0)) then {_unit = _this select 0;_onSpawn = {_unit = _this select 0;_unit setUnitLoadout [['rhs_weap_ak74mr','rhs_acc_tgpa','rhs_acc_perst3','rhsusf_acc_SpecterDR',['rhs_30Rnd_545x39_AK',30],[],'rhs_acc_grip_rk6'],[],['rhsusf_weap_glock17g4','','','',['rhsusf_mag_17Rnd_9x19_JHP',17],[],''],['VSM_Multicam_Crye_SS_Camo',[['FirstAidKit',5],['SmokeShell',2,1],['rhsusf_mag_17Rnd_9x19_JHP',3,17]]],['VSM_CarrierRig_Operator_OGA',[['O_IR_Grenade',2,1],['rhs_30Rnd_545x39_AK',10,30],['rhs_mag_rgn',1,1],['rhs_mag_rdg2_white',2,1]]],[],'VSM_Bowman_cap_balaclava_Tan','',['Rangefinder','','','',[],[],''],['ItemMap','ItemGPS','ItemRadio','ItemCompass','ItemWatch','rhs_1PN138']];reload _unit;};[_unit] call _onSpawn;_unit addMPEventHandler ['MPRespawn', _onSpawn];};";
			};
		};

		// custom attributes (do not delete)
		ALiVE_orbatCreator_owned = 1;
	};
};
