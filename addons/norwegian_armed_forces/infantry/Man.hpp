class BNB_FA_NAF_Man_Arctic : BNB_FA_NAF_Man {
	displayName = "Man";
	editorPreview = "\x\bnb_fa\norwegian_armed_forces\data\preview\BNB_FA_NAF_Man_Arctic.jpg";
	faction = "BNB_FA_NAF_Arctic";
	editorSubcategory = "BNB_FA_NAF_Personnel";
	scope = 2;

	bnb_fa_weaponItems[] = {"","","",""};

	uniformClass = "U_mas_nor_B_CombatUniform_wint2";

	backpack = "";

	weapons[] = {"Throw","Put"};
	respawnWeapons[] = {"Throw","Put"};

	magazines[] = {};
	respawnMagazines[] = {};

	items[] = {"BNB_EX_Gear_Unit_Berret","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_IR_Strobe_Item","ACE_epinephrine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_MapTools","ACE_Flashlight_XL50","ACE_EntrenchingTool"};
	respawnItems[] = {"BNB_EX_Gear_Unit_Berret","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_IR_Strobe_Item","ACE_epinephrine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_MapTools","ACE_Flashlight_XL50","ACE_EntrenchingTool"};

	linkedItems[] = {"BNB_EX_Gear_Unit_Berret","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
	respawnLinkedItems[] = {"BNB_EX_Gear_Unit_Berret","ItemMap","ItemCompass","ACE_Altimeter","TFAR_anprc152","ItemGPS"};
};

class BNB_FA_NAF_Man_Desert : BNB_FA_NAF_Man_Arctic {
	editorPreview = "\x\bnb_fa\norwegian_armed_forces\data\preview\BNB_FA_NAF_Man_Desert.jpg";
	faction = "BNB_FA_NAF_Desert";
	uniformClass = "U_mas_nor_B_CombatUniform_S_aor1";
};

class BNB_FA_NAF_Man_Multicam : BNB_FA_NAF_Man_Arctic {
	editorPreview = "\x\bnb_fa\norwegian_armed_forces\data\preview\BNB_FA_NAF_Man_Multicam.jpg";
	faction = "BNB_FA_NAF_Multicam";
	uniformClass = "U_mas_nor_B_CombatUniform_S_multi";
};

class BNB_FA_NAF_Man_Woodland : BNB_FA_NAF_Man_Arctic {
	editorPreview = "\x\bnb_fa\norwegian_armed_forces\data\preview\BNB_FA_NAF_Man_Woodland.jpg";
	faction = "BNB_FA_NAF_Woodland";
	uniformClass = "U_mas_nor_B_CombatUniform_S_aor2";
};
