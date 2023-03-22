class BNB_FA_JPN_Zeus_Jeitai_D : BNB_FA_JPN_Man_Jeitai_D {
	displayName = "Zeus";
	// editorPreview = "\x\bnb_fa\norwegian_armed_forces\data\preview\BNB_FA_JPN_Zeus_Jeitai_D.jpg";
	icon = "iconManOfficer";

	bnb_fa_weaponItems[] = {"","","",""};

	uniformClass = "Japan_JP_Jeitai_Uniform_D";

	backpack = "";

	weapons[] = {"sp_fwa_l9a1_hipower_wood","Throw","Put"};
	respawnWeapons[] = {"sp_fwa_l9a1_hipower_wood","Throw","Put"};

	magazines[] = {"sp_fwa_13Rnd_9mm_HiPower"};
	respawnMagazines[] = {"sp_fwa_13Rnd_9mm_HiPower"};

	items[] = {"ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
	respawnItems[] = {"ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};

	linkedItems[] = {"Japan_JP_Jeitai_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	respawnLinkedItems[] = {"Japan_JP_Jeitai_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
};

class BNB_FA_JPN_Zeus_Winter : BNB_FA_JPN_Zeus_Jeitai_D {
	faction = "BNB_FA_JPN_Winter";
	uniformClass = "Japan_JP_Pattern_Uniform_Digital";
};

class BNB_FA_JPN_Zeus_Navy : BNB_FA_JPN_Man_Navy {
	faction = "BNB_FA_JPN_Navy";
	uniformClass = "Japan_JP_Pattern_Uniform_Navy";
};

class BNB_FA_JPN_Zeus_Jeitai : BNB_FA_JPN_Man_Jeitai {
	faction = "BNB_FA_JPN_Jeitai";
	uniformClass = "Japan_JP_Jeitai_Uniform";
};
