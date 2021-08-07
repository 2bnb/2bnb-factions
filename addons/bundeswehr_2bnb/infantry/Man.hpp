class BNB_FA_BW2_Man_Tropen : BNB_FA_BW2_Man {
	displayName = "Man";
	// editorPreview = "\x\bnb_fa\norwegian_armed_forces\data\preview\BNB_FA_BW2_Man_Tropen.jpg";
	faction = "BNB_FA_BW2_Tropen";
	editorSubcategory = "BNB_FA_BW2_Personnel";
	scope = 2;

	bnb_fa_weaponItems[] = {"","","",""};

	uniformClass = "BWA3_Uniform_Tropen";

	backpack = "";

	weapons[] = {"BWA3_P8","Throw","Put"};
	respawnWeapons[] = {"BWA3_P8","Throw","Put"};

	magazines[] = {"BWA3_15Rnd_9x19_P8","BWA3_DM25"};
	respawnMagazines[] = {"BWA3_15Rnd_9x19_P8","BWA3_DM25"};

	items[] = {"ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
	respawnItems[] = {"ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};

	linkedItems[] = {"BWA3_Beret_Jaeger","ItemMap","ItemCompass","ItemWatch","ItemRadio","BWA3_ItemNaviPad"};
	respawnLinkedItems[] = {"BWA3_Beret_Jaeger","ItemMap","ItemCompass","ItemWatch","ItemRadio","BWA3_ItemNaviPad"};
};

class BNB_FA_BW2_Man_Multi : BNB_FA_BW2_Man_Tropen {
	// editorPreview = "\x\bnb_fa\norwegian_armed_forces\data\preview\BNB_FA_BW2_Man_Multi.jpg";
	faction = "BNB_FA_BW2_Multi";
	uniformClass = "BWA3_Uniform_Multi";
};

class BNB_FA_BW2_Man_Fleck : BNB_FA_BW2_Man_Tropen {
	// editorPreview = "\x\bnb_fa\norwegian_armed_forces\data\preview\BNB_FA_BW2_Man_Fleck.jpg";
	faction = "BNB_FA_BW2_Fleck";
	uniformClass = "BWA3_Uniform_Fleck";
};
