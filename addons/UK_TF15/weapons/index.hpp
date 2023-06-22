class asdg_OpticRail;
class asdg_OpticRail1913: asdg_OpticRail
{
	class compatibleItems
	{
		UK3CB_BAF_SUIT = 1;
		UK3CB_BAF_SUSAT = 1;
		UK3CB_BAF_SUSAT_3D = 1;
		UK3CB_BAF_TA648 = 1;
		UK3CB_BAF_TA648_308 = 1;
		UK3CB_BAF_TA31F = 1;
		UK3CB_BAF_TA31F_3D = 1;
		UK3CB_BAF_TA31F_hornbill = 1;
		UK3CB_BAF_TA31F_hornbill_3D = 1;
		UK3CB_BAF_Eotech = 1;
		UK3CB_BAF_SB31250 = 1;
		UK3CB_BAF_SB31250_ghillie = 1;
		UK3CB_BAF_SB31250_Desert = 1;
		UK3CB_BAF_SB31250_Desert_Ghillie = 1;
		UK3CB_BAF_SpecterLDS = 1;
		UK3CB_BAF_SpecterLDS_Dot = 1;
		UK3CB_BAF_SpecterLDS_3D = 1;
		UK3CB_BAF_SpecterLDS_Dot_3D = 1;
		UK3CB_BAF_Kite = 1;
		UK3CB_BAF_MaxiKite = 1;
		RKSL_optic_PMII_525 = 1;
		RKSL_optic_PMII_525_des = 1;
		RKSL_optic_PMII_525_wdl = 1;
		RKSL_optic_PMII_312 = 1;
		RKSL_optic_PMII_312_sunshade = 1;
		RKSL_optic_PMII_312_des = 1;
		RKSL_optic_PMII_312_sunshade_des = 1;
		RKSL_optic_PMII_312_wdl = 1;
		RKSL_optic_PMII_312_sunshade_wdl = 1;
		RKSL_optic_LDS = 1;
		RKSL_optic_LDS_C = 1;
		RKSL_optic_RMR_MS19 = 1;
		RKSL_optic_RMR_MS19_FDE = 1;
		RKSL_optic_EOT552 = 1;
		RKSL_optic_EOT552_C = 1;
		RKSL_optic_EOT552X = 1;
		RKSL_optic_EOT552X_C = 1;
		BNB_FA_UK_SUSAT = 1;
	};
};
class UK3CB_OpticalRailMedium: asdg_OpticRail1913
{
	class compatibleitems;
};

class CfgWeapons
{
	class ItemCore;
	class muzzle_snds_B;
	class muzzle_snds_M;
	class muzzle_snds_L;
	class InventoryFlashLightItem_Base_F;
	class InventoryMuzzleItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class inventoryunderitem_base_f;
	class RKSL_optic_LDS;
	class RKSL_optic_PMII_312;
	class RKSL_optic_PMII_312_sunshade;
	class RKSL_optic_PMII_312_wdl;
	class RKSL_optic_PMII_312_sunshade_wdl;
	class RKSL_optic_PMII_312_des;
	class RKSL_optic_PMII_312_sunshade_des;
	class RKSL_optic_PMII_525;
	class RKSL_optic_PMII_525_wdl;
	class RKSL_optic_PMII_525_des;
	class RKSL_optic_EOT552;
	class UK3CB_BAF_SUSAT;
	class BNB_FA_UK_SUSAT: UK3CB_BAF_SUSAT
	{
		scope = 2;
		author = "Carmichael (Amateur-god)";
		DLC = "2BNB Factions";
		displayName = "2BNB SUSAT L9A1";
		descriptionShort = "Medium Range Scope, 2x 25mm<br/>Used on: L22, L85<br/>by www.3commandobrigade.com";
		weaponInfoType = "RscWeaponZeroing";
		class Library
		{
			libtextdesc = "This modified Sight Unit Small Arms Trilux (SUSAT) L9A1 is a 2x telescopic sight with tritium-powered illumination, utilised at dusk or dawn. It has been extensively used by British Armed Forces on the SA80 series weapons.";
		};
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 4;
			optics = 1;
			class OpticsModes
			{
				class BNB_FA_UK_SUSAT_TOP
				{
					opticsID = 1;
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
					opticsID = 2;
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
					visionMode[] = {"Normal"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "";
				};
			};
		};
	};
};
