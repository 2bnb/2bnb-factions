class BNB_FA_UK_SUSAT: ItemCore
	{
		scope = 2;
		author = "www.3commandobrigade.com modified by Carmichael (Amateur-god)";
		DLC = "2BNB Factions";
		displayName = "2BNB SUSAT L9A1";
		picture = "\UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_Accessories\data\gear_acco_susat_ca.paa";
		model = "UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_Accessories\uk3cb_susat.p3d";
		descriptionShort = "Medium Range Scope, 2x 25mm<br/>Used on: L22, L85<br/>by www.3commandobrigade.com adjusted by carmichael to be 2x and support NVGs for 2BNB";
		weaponInfoType = "RscWeaponZeroing";
		class Library
		{
			libtextdesc = "This modified Sight Unit Small Arms Trilux (SUSAT) L9A1 is a 2x telescopic sight with tritium-powered illumination, utilised at dusk or dawn. It has been extensively used by British Armed Forces on the SA80 series weapons.";
		};
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 4;
			optics = 1;
			modelOptics = "UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_Accessories\uk3cb_susat_optic.p3d";
			class OpticsModes
			{
				class BNB_FA_UK_SUSAT_TOP
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsPPEffects[] = {};
					opticszoominit = 0.75;
					opticszoommax = 1.25;
					opticszoommin = 0.25;
					discreteDistance[] = {300};
					discreteDistanceInitIndex = 0;
					distanceZoomMin = 300;
					distanceZoomMax = 300;
					discretefov[] = {};
					discreteInitIndex = 0;
					memoryPointCamera = "eye2";
					visionMode[] = {};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 0;
					cameraDir = "";
				};
				class BNB_FA_UK_SUSAT
				{
					opticsID = 1;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera5","OpticsBlur5"};
					opticsZoomMin = 0.125;
					opticsZoomInit = 0.125;
					opticsZoomMax = 0.125;
					discreteDistance[] = {100,200,300,400,500,600};
					discreteDistanceInitIndex = 2;
					distanceZoomMin = 300;
					distanceZoomMax = 300;
					memoryPointCamera = "eye";
					visionMode[] = {};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "";
				};
			};
		};
	};
	class BNB_FA_UK_ELCAN: ItemCore
	{
		scope = 2;
		author = "www.3commandobrigade.com modified by Carmichael (Amateur-god)";
		DLC = "2BNB Factions";
		displayName = "2BNB Elcan LDS (without Reflex)";
		picture = "\UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_Accessories\data\gear_acco_specterlds_ca.paa";
		model = "UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_Accessories\uk3cb_elcan.p3d";
		descriptionShort = "Lightweight Day Sight, 2x 32mm<br/>Used on: L85<br/>by www.3commandobrigade.com adjusted by carmichael to be 2x and support NVGs for 2BNB";
		weaponinfotype = "RscWeaponZeroing";
		class Library
		{
			libtextdesc = "SpecterOS 2x combat sight by Raytheon ELCAN is a lightweight optical day sight (LDS) designed for L85's.";
		};
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 4;
			optics = 1;
			modelOptics = "UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_Accessories\uk3cb_elcan_optic.p3d";
			class OpticsModes
			{
				class BNB_FA_UK_LDS
				{
					opticsID = 1;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera5","OpticsBlur5"};
					opticsZoomMin = 0.125;
					opticsZoomInit = 0.125;
					opticsZoomMax = 0.125;
					discreteDistance[] = {300};
					discreteDistanceInitIndex = 0;
					distanceZoomMin = 300;
					distanceZoomMax = 300;
					memoryPointCamera = "eye";
					visionMode[] = {};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "";
				};
			};
		};
	};