	class GrenadeLauncher;
	class UGL_F: GrenadeLauncher
	{
		class Single;
	};
	class arifle_Mk20_F;
	class arifle_Mk20_plain_F: arifle_Mk20_F
	{
		class GunParticles;
		class Single;
		class FullAuto;
		class Single_medium_optics1;
		class Single_far_optics1;
		class Fullauto_medium;
		class EGLM;
	};
	class WeaponSlotsInfo
	{
		allowedslots[] = {901};
		mass = 84;
		class MuzzleSlot;
		class CowsSlot;
		class PointerSlot;
	};
	class UK3CB_BAF_L85A2: arifle_Mk20_plain_F
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		DLC = "UK3CB_BAF_Weapons";
		displayname = "L85A2";
		baseWeapon = "UK3CB_BAF_L85A2";
		picture = "\UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_SmallArms\data\gear_l85a2_ca.paa";
		descriptionshort = "Assault Rifle<br/>Calibre: 5.56x45mm STANAG<br/>by www.3commandobrigade.com";
		class Library
		{
			libtextdesc = "The L85A2 is the Heckler and Koch updated version of the SA80 L85 and is one of the most accurate individual weapons currently available. The weapon has been widely used on operations in a variety of demanding environments such as Sierra Leone, Iraq and Afghanistan.";
		};
		magazines[] = {"UK3CB_BAF_556_30Rnd","UK3CB_BAF_556_30Rnd_Blank","UK3CB_BAF_556_30Rnd_T","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Green","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Yellow","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Orange","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Yellow","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Orange","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk262_Stanag","rhs_mag_30Rnd_556x45_M200_Stanag","rhsgref_30rnd_556x45_vhs2","rhsgref_30rnd_556x45_vhs2_t","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21_t","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow"};
		model = "UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_SmallArms\uk3cb_L85A2.p3d";
		handAnim[] = {"OFP2_ManSkeleton","UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_SmallArms\Anims\L85A2.rtm"};
		modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2"};
		discretedistance[] = {100,200,300,400};
		discretedistanceinitindex = 1;
		changeFiremodeSound[] = {"a3\sounds_f\weapons\closure\firemode_changer_2",1,1,20};
		soundBipodDown[] = {"UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_SmallArms\Sounds\Bipod_BLU_down",0.707946,1,20};
		soundBipodUp[] = {"UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_SmallArms\Sounds\Bipod_BLU_up",0.707946,1,20};
		reloadaction = "GestureReloadTRG";
		reloadmagazinesound[] = {"UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_SmallArms\Sounds\L85_reloadmag",1,1,30};
		drysound[] = {"a3\sounds_f\weapons\Other\dry_1",1,1,10};
		initSpeed = 940;
		inertia = 0.3;
		dexterity = 1.0;
		ace_barrelLength = 518;
		ace_barrelTwist = 180;
		ace_twistDirection = 1;
		ace_railHeightAboveBore = 3.1;
		ace_railBaseAngle = 0;
		ace_ironSightBaseAngle = 0;
		class GunParticles: GunParticles
		{
			class RifleAmmoCloud
			{
				positionName = "nabojnicestart";
				directionName = "nabojniceend";
				effectName = "UK3CB_EjectionSmoke";
			};
			class SmokeEffect
			{
				positionName = "usti hlavne";
				directionName = "usti hlavne up";
				effectName = "UK3CB_HeatHaze";
			};
		};

		deployedPivot = "bipod";
		class Single: Single
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"3CB_BAF_L85_Closure_SoundSet","3CB_BAF_L85_Shot_SoundSet","3CB_BAF_Rifle1_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"3CB_BAF_L85_Closure_SoundSet","3CB_BAF_L85_ShotSD_SoundSet","3CB_BAF_Rifle1_SD_Tail_SoundSet"};
			};
			reloadTime = 0.09233;
			dispersion = 0.001;
			recoil = "recoil_single_mx";
			recoilProne = "recoil_single_prone_mx";
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.2;
		};
		class FullAuto: FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"3CB_BAF_L85_Closure_SoundSet","3CB_BAF_L85_Shot_SoundSet","3CB_BAF_Rifle1_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"3CB_BAF_L85_Closure_SoundSet","3CB_BAF_L85_ShotSD_SoundSet","3CB_BAF_Rifle1_SD_Tail_SoundSet"};
			};
			reloadTime = 0.09233;
			dispersion = 0.001;
			recoil = "recoil_auto_mx";
			recoilProne = "recoil_auto_prone_mx";
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
		};
		class UK3CB_BAF_L123A2: UGL_F
		{
			displayName = "L123A2";
			descriptionShort = "Under-barrel Grenade Launcher<br/>Calibre: 40mm<br/>by www.3commandobrigade.com";
			useModelOptics = 0;
			useExternalOptic = 0;
			magazines[] = {"UK3CB_BAF_1Rnd_HE_Grenade_Shell","UK3CB_BAF_1Rnd_HEDP_Grenade_Shell","UK3CB_BAF_1Rnd_Blank_Grenade_Shell","UK3CB_BAF_UGL_FlareWhite_F","UK3CB_BAF_UGL_FlareRed_F","UK3CB_BAF_UGL_FlareGreen_F","UK3CB_BAF_UGL_FlareYellow_F","UK3CB_BAF_UGL_FlareCIR_F","UK3CB_BAF_1Rnd_Smoke_Grenade_shell","UK3CB_BAF_1Rnd_SmokeRed_Grenade_shell","UK3CB_BAF_1Rnd_SmokeGreen_Grenade_shell","UK3CB_BAF_1Rnd_SmokeYellow_Grenade_shell","UK3CB_BAF_1Rnd_SmokePurple_Grenade_shell","UK3CB_BAF_1Rnd_SmokeBlue_Grenade_shell","UK3CB_BAF_1Rnd_SmokeOrange_Grenade_shell","rhs_mag_M441_HE","rhs_mag_M433_HEDP","rhs_mag_M781_Practice","rhs_mag_M397_HET","rhs_mag_M4009","rhs_mag_m576","rhs_mag_M585_white","rhs_mag_M661_green","rhs_mag_M662_red","rhs_mag_M713_red","rhs_mag_M714_white","rhs_mag_M715_green","rhs_mag_M716_yellow","1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","ACE_HuntIR_M203"};
			cameraDir = "op_look";
			discreteDistance[] = {50,100,150,200,250,300,350};
			discreteDistanceCameraPoint[] = {"op_eye","op_eye2","op_eye3","op_eye4","op_eye5","op_eye6","op_eye7"};
			discreteDistanceInitIndex = 1;
			class Single: Single
			{
				sounds[] = {"StandardSound"};
				class BaseSoundModeType;
				class StandardSound: BaseSoundModeType
				{
					begin1[] = {"UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_SmallArms\Sounds\AG36_1.wss",1,1,600};
					begin2[] = {"UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_SmallArms\Sounds\AG36_2.wss",1,1,600};
					soundBegin[] = {"begin1",0.5,"begin2",0.5};
					class SoundTails
					{
						class TailTrees
						{
							sound[] = {"a3\sounds_f\arsenal\weapons\UGL\UGL_tailtrees",1,1,1400};
							frequency = 1;
							volume = "(1-interior/1.4)*trees";
						};
						class TailForest
						{
							sound[] = {"a3\sounds_f\arsenal\weapons\UGL\UGL_tailforest",1,1,1400};
							frequency = 1;
							volume = "(1-interior/1.4)*forest";
						};
						class TailInterior
						{
							sound[] = {"a3\sounds_f\arsenal\weapons\UGL\UGL_tailinterior",1.58489,1,1400};
							frequency = 1;
							volume = "interior";
						};
						class TailMeadows
						{
							sound[] = {"a3\sounds_f\arsenal\weapons\UGL\UGL_tailmeadows",1,1,1400};
							frequency = 1;
							volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
						};
						class TailHouses
						{
							sound[] = {"a3\sounds_f\arsenal\weapons\UGL\UGL_tailhouses",1,1,1400};
							frequency = 1;
							volume = "(1-interior/1.4)*houses";
						};
					};
				};
			};
			reloadAction = "GestureReloadL85A2UGL_UGL";
		};
		class UK3CB_BAF_L123A3_V2: UK3CB_BAF_L123A2
		{
			displayName = "L123A3";
			discreteDistance[] = {50,100,150,200,250,300};
			discreteDistanceCameraPoint[] = {"op_eye","op_eye2","op_eye3","op_eye4","op_eye5","op_eye6"};
			discreteDistanceInitIndex = 1;
		};
		class Fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 200;
		};
		class Single_medium_optics1: Single
		{
			showToPlayer = 0;
			requiredOpticType = 1;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 400;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.3;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
		};
		class Single_far_optics2: Single_medium_optics1
		{
			requiredOpticType = 2;
			minRange = 100;
			minRangeProbab = 0.2;
			midRange = 400;
			midRangeProbab = 0.6;
			maxRange = 800;
			maxRangeProbab = 0.05;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 800;
		};
		hiddenSelections[] = {"hs_base","hs_handguard","hs_ironsight","hs_picatinnysight"};
		hiddenSelectionsTextures[] = {"\uk3cb_baf_weapons\addons\uk3cb_baf_weapons_smallarms\data\kio_l85a2_base_co.paa","\uk3cb_baf_weapons\addons\uk3cb_baf_weapons_smallarms\data\kio_l85a2_handguard_co.paa","\uk3cb_baf_weapons\addons\uk3cb_baf_weapons_smallarms\data\kio_l85a2_ironsights_co.paa","\uk3cb_baf_weapons\addons\uk3cb_baf_weapons_smallarms\data\kio_l85a2_picatinnysight_co.paa"};
	};
	class UK3CB_BAF_L85A2_UGL: UK3CB_BAF_L85A2
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		displayname = "L85A2 with L123A2 Ladder";
		baseWeapon = "UK3CB_BAF_L85A2_UGL";
		descriptionshort = "Assault Rifle with UGL<br/>Calibre: 5.56x45mm STANAG<br/>by www.3commandobrigade.com";
		picture = "\UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_SmallArms\data\gear_l85a2ugl_ca.paa";
		model = "UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_SmallArms\uk3cb_L85A2ugl.p3d";
		handanim[] = {"OFP2_ManSkeleton","\a3\Weapons_F\Rifles\Khaybar\data\anim\katiba_gl.rtm"};
		muzzles[] = {"this","UK3CB_BAF_L123A2"};
		inertia = 0.4;
		dexerity = 0.8;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			allowedslots[] = {901};
			mass = 84;
		};
		hiddenSelections[] = {"hs_base","hs_handguard","hs_ironsight","hs_picatinnysight","hs_emag","hs_ugl"};
		hiddenSelectionsTextures[] = {"\uk3cb_baf_weapons\addons\uk3cb_baf_weapons_smallarms\data\kio_l85a2_base_co.paa","\uk3cb_baf_weapons\addons\uk3cb_baf_weapons_smallarms\data\kio_l85a2_handguard_co.paa","\uk3cb_baf_weapons\addons\uk3cb_baf_weapons_smallarms\data\kio_l85a2_ironsights_co.paa","\uk3cb_baf_weapons\addons\uk3cb_baf_weapons_smallarms\data\kio_l85a2_picatinnysight_co.paa","\uk3cb_baf_weapons\addons\uk3cb_baf_weapons_smallarms\data\emag_co.paa","\uk3cb_baf_weapons\addons\uk3cb_baf_weapons_smallarms\data\ugl_co.paa"};
	};
    class UK3CB_BAF_L85A3;
	class UK3CB_BAF_L85A3_UGL: UK3CB_BAF_L85A3
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		displayname = "L85A3 with L123A2 Ladder";
		baseWeapon = "UK3CB_BAF_L85A3_UGL";
		descriptionshort = "Assault Rifle with UGL<br/>Calibre: 5.56x45mm STANAG<br/>by www.3commandobrigade.com";
		picture = "\UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_L85A3\data\gear_l85a3ugl_ca.paa";
		model = "\UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_L85A3\uk3cb_L85A3_UGL.p3d";
		handanim[] = {"OFP2_ManSkeleton","\UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_L85A3\data\anims\L85A3UGL.rtm"};
		muzzles[] = {"this","UK3CB_BAF_L123A2"};
		inertia = 0.4;
		dexerity = 0.8;
		UK3CB_underbarrel_altWeapon_afg = "";
		UK3CB_underbarrel_altWeapon_afg_d = "";
		UK3CB_underbarrel_altWeapon_afg_g = "";
		UK3CB_underbarrel_altWeapon_afg_t = "";
		UK3CB_underbarrel_altWeapon_afg_w = "";
		UK3CB_underbarrel_altWeapon_grippod = "";
		UK3CB_underbarrel_altWeapon_grippod_d = "";
		UK3CB_underbarrel_altWeapon_grippod_g = "";
		UK3CB_underbarrel_altWeapon_grippod_t = "";
		UK3CB_underbarrel_altWeapon_grippod_w = "";
		UK3CB_underbarrel_altWeapon_grippod_tan = "";
		UK3CB_underbarrel_baseWeapon = "UK3CB_BAF_L85A3_UGL";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 84;
			class UnderBarrelSlot{};
		};
		class UK3CB_BAF_L123A2;
	};