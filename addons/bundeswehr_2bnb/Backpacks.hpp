#define TOOLKIT_CONTENTS \
class TransportItems { \
	class _xx_Toolkit { \
		name = "ToolKit"; \
		count = 1; \
	}; \
	class _xx_ACE_Clacker { \
		name = "ACE_Clacker"; \
		count = 1; \
	}; \
};

#define SURVIVAL_CONTENTS \
class TransportItems { \
	class _xx_ACE_elasticBandage { \
		name = "ACE_elasticBandage"; \
		count = 15; \
	}; \
	class _xx_ACE_packingBandage { \
		name = "ACE_packingBandage"; \
		count = 15; \
	}; \
	class _xx_ACE_epinephrine { \
		name = "ACE_epinephrine"; \
		count = 2; \
	}; \
	class _xx_ACE_morphine { \
		name = "ACE_morphine"; \
		count = 4; \
	}; \
	class _xx_ACE_adenosine { \
		name = "ACE_adenosine"; \
		count = 2; \
	}; \
	class _xx_ACE_tourniquet { \
		name = "ACE_tourniquet"; \
		count = 2; \
	}; \
	class _xx_ACE_plasmaIV_250 { \
		name = "ACE_plasmaIV_250"; \
		count = 4; \
	}; \
	class _xx_ACE_surgicalKit { \
		name = "ACE_surgicalKit"; \
		count = 1; \
	}; \
	class _xx_ACE_IR_Strobe_Item { \
		name = "ACE_IR_Strobe_Item"; \
		count = 1; \
	}; \
	class _xx_Chemlight_green { \
		name = "Chemlight_green"; \
		count = 4; \
	}; \
};

class CfgVehicles {
	////////////////////////////////
	// Toolkits for Land Vehicles //
	////////////////////////////////
	class BWA3_Kitbag_Tropen;
	class BNB_FA_BW2_Toolkit_Backpack_Tropen : BWA3_Kitbag_Tropen {
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 0;

		TOOLKIT_CONTENTS
	};

	class BWA3_Kitbag_Fleck;
	class BNB_FA_BW2_Toolkit_Backpack_Fleck : BWA3_Kitbag_Fleck {
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 0;

		TOOLKIT_CONTENTS
	};

	////////////////////////////////////
	// Survival Kits for Air Vehicles //
	////////////////////////////////////
	class BWA3_Kitbag_Tropen;
	class BNB_FA_BW2_Survival_Backpack_Tropen : BWA3_Kitbag_Tropen {
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 0;
		displayName = "Survival Kit";

		SURVIVAL_CONTENTS
	};

	class BWA3_Kitbag_Fleck;
	class BNB_FA_BW2_Survival_Backpack_Fleck : BWA3_Kitbag_Fleck {
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 0;
		displayName = "Survival Kit";

		SURVIVAL_CONTENTS
	};
};
