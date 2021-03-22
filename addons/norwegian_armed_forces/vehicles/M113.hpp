////////////////////////////
// M113 More Spare Tracks //
////////////////////////////
class Extended_InitPost_EventHandlers {
	class BNB_FA_NAF_M113 { ADD_PARTS(1,'ACE_Track') };
	class BNB_FA_NAF_M113_M2 { ADD_PARTS(1,'ACE_Track') };
	class BNB_FA_NAF_M113_M2_Shield { ADD_PARTS(1,'ACE_Track') };
	class BNB_FA_NAF_M113_Medical { ADD_PARTS(1,'ACE_Track') };
};

class CfgVehicles {
	///////////////////////
	// M113 Base Classes //
	///////////////////////
	class Tank_F;
	class APC_Tracked_02_base_F : Tank_F {
		class AnimationSources;
	};

	class rhsusf_m113tank_base : APC_Tracked_02_base_F {
		class AnimationSources : AnimationSources {
			class IFF_Panels_Hide;
		};
	};
	class rhsusf_m113_usarmy : rhsusf_m113tank_base {};
	class rhsusf_m113_usarmy_supply : rhsusf_m113_usarmy {};
	class rhsusf_m113_usarmy_unarmed : rhsusf_m113tank_base {};
	class rhsusf_m113_usarmy_medical : rhsusf_m113_usarmy_unarmed {};

	class BNB_FA_NAF_M113 : rhsusf_m113_usarmy_unarmed {
		author = "Christiansen [NTF]";
		scope = 0;
		side = 1;
		displayName = "M113";
		weapons[] = {"TruckHorn2", "SmokeLauncher"};
		magazines[] = {"SmokeLauncherMag"};
		ace_cargo_space = 5;
		ace_cargo_hasCargo = 1;

		class AnimationSources : AnimationSources {
			class IFF_Panels_Hide : IFF_Panels_Hide {
				initPhase = 1;
			};
		};

		class TextureSources {
			class NorwayDesert {
				displayName="Norway (Desert)";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Hull_Light.paa", // Hull
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Accessories.paa", // Accessories
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Wheels.paa", // Wheels
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"BNB_FA_NAF_Woodland",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Arctic"
				};
			};
			class NorwayWoodland {
				displayName="Norway (Woodland)";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Hull_Light.paa", // Hull
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Accessories.paa", // Accessories
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Wheels.paa", // Wheels
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"BNB_FA_NAF_Woodland",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Arctic"
				};
			};
			// Thor
			class NorwayThorDesert {
				displayName="Norway (Desert) - Thor";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Hull_Light_Thor.paa", // Hull
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Accessories.paa", // Accessories
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Wheels.paa", // Wheels
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"BNB_FA_NAF_Woodland",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Arctic"
				};
			};
			class NorwayThorWoodland {
				displayName="Norway (Woodland) - Thor";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Hull_Light_Thor.paa", // Hull
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Accessories.paa", // Accessories
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Wheels.paa", // Wheels
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"BNB_FA_NAF_Woodland",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Arctic"
				};
			};
			// Odin
			class NorwayOdinDesert {
				displayName="Norway (Desert) - Odin";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Hull_Light_Odin.paa", // Hull
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Accessories.paa", // Accessories
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Wheels.paa", // Wheels
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"BNB_FA_NAF_Woodland",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Arctic"
				};
			};
			class NorwayOdinWoodland {
				displayName="Norway (Woodland) - Odin";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Hull_Light_Odin.paa", // Hull
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Accessories.paa", // Accessories
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Wheels.paa", // Wheels
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"BNB_FA_NAF_Woodland",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Arctic"
				};
			};
			// Mjolnir
			class NorwayMjolnirDesert {
				displayName="Norway (Desert) - Mjolnir";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Hull_Light_Mjolnir.paa", // Hull
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Accessories.paa", // Accessories
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Wheels.paa", // Wheels
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"BNB_FA_NAF_Woodland",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Arctic"
				};
			};
			class NorwayMjolnirWoodland {
				displayName="Norway (Woodland) - Mjolnir";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Hull_Light_Mjolnir.paa", // Hull
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Accessories.paa", // Accessories
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Wheels.paa", // Wheels
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"BNB_FA_NAF_Woodland",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Arctic"
				};
			};
			// Heimdall
			class NorwayHeimdallDesert {
				displayName="Norway (Desert) - Heimdall";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Hull_Light_Heimdall.paa", // Hull
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Accessories.paa", // Accessories
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Wheels.paa", // Wheels
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"BNB_FA_NAF_Woodland",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Arctic"
				};
			};
			class NorwayHeimdallWoodland {
				displayName="Norway (Woodland) - Heimdall";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Hull_Light_Heimdall.paa", // Hull
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Accessories.paa", // Accessories
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Wheels.paa", // Wheels
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"BNB_FA_NAF_Woodland",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Arctic"
				};
			};
		};

		class TransportMagazines {
			ARMOURED_VEHICLE_MAGAZINES
		};

		class TransportWeapons {
			ARMOURED_VEHICLE_WEAPONS
		};

		class TransportItems {
			ARMOURED_VEHICLE_ITEMS
			VEHICLE_AT_AMMO_EXTE
		};

		class TransportBackpacks {
			ARMOURED_VEHICLE_BACKPACKS
		};
	};

	class BNB_FA_NAF_M113_M2 : rhsusf_m113_usarmy_supply {
		author = "Christiansen [NTF]";
		scope = 0;
		side = 1;
		displayName = "M113 (M2)";
		weapons[] = {"TruckHorn2", "SmokeLauncher"};
		magazines[] = {"SmokeLauncherMag"};
		ace_cargo_space = 5;
		ace_cargo_hasCargo = 1;

		class AnimationSources : AnimationSources {
			class IFF_Panels_Hide : IFF_Panels_Hide {
				initPhase = 1;
			};
		};

		class TextureSources {
			class NorwayDesert {
				displayName="Norway (Desert)";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Hull.paa", // Hull
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Accessories.paa", // Accessories
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Wheels.paa", // Wheels
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"BNB_FA_NAF_Woodland",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Arctic"
				};
			};
			class NorwayWoodland {
				displayName="Norway (Woodland)";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Hull.paa", // Hull
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Accessories.paa", // Accessories
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Wheels.paa", // Wheels
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"BNB_FA_NAF_Woodland",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Arctic"
				};
			};
			// Thor
			class NorwayThorDesert {
				displayName="Norway (Desert) - Thor";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Hull_Thor.paa", // Hull
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Accessories.paa", // Accessories
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Wheels.paa", // Wheels
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"BNB_FA_NAF_Woodland",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Arctic"
				};
			};
			class NorwayThorWoodland {
				displayName="Norway (Woodland) - Thor";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Hull_Thor.paa", // Hull
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Accessories.paa", // Accessories
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Wheels.paa", // Wheels
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"BNB_FA_NAF_Woodland",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Arctic"
				};
			};
			// Odin
			class NorwayOdinDesert {
				displayName="Norway (Desert) - Odin";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Hull_Odin.paa", // Hull
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Accessories.paa", // Accessories
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Wheels.paa", // Wheels
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"BNB_FA_NAF_Woodland",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Arctic"
				};
			};
			class NorwayOdinWoodland {
				displayName="Norway (Woodland) - Odin";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Hull_Odin.paa", // Hull
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Accessories.paa", // Accessories
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Wheels.paa", // Wheels
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"BNB_FA_NAF_Woodland",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Arctic"
				};
			};
			// Mjolnir
			class NorwayMjolnirDesert {
				displayName="Norway (Desert) - Mjolnir";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Hull_Mjolnir.paa", // Hull
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Accessories.paa", // Accessories
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Wheels.paa", // Wheels
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"BNB_FA_NAF_Woodland",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Arctic"
				};
			};
			class NorwayMjolnirWoodland {
				displayName="Norway (Woodland) - Mjolnir";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Hull_Mjolnir.paa", // Hull
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Accessories.paa", // Accessories
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Wheels.paa", // Wheels
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"BNB_FA_NAF_Woodland",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Arctic"
				};
			};
			// Heimdall
			class NorwayHeimdallDesert {
				displayName="Norway (Desert) - Heimdall";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Hull_Heimdall.paa", // Hull
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Accessories.paa", // Accessories
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Wheels.paa", // Wheels
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"BNB_FA_NAF_Woodland",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Arctic"
				};
			};
			class NorwayHeimdallWoodland {
				displayName="Norway (Woodland) - Heimdall";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Hull_Heimdall.paa", // Hull
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Accessories.paa", // Accessories
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Wheels.paa", // Wheels
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"BNB_FA_NAF_Woodland",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Arctic"
				};
			};
		};

		class TransportMagazines {
			ARMOURED_VEHICLE_MAGAZINES
		};

		class TransportWeapons {
			ARMOURED_VEHICLE_WEAPONS
		};

		class TransportItems {
			ARMOURED_VEHICLE_ITEMS
			VEHICLE_AT_AMMO_EXTE
		};

		class TransportBackpacks {
			ARMOURED_VEHICLE_BACKPACKS
		};
	};

	class BNB_FA_NAF_M113_Medical : rhsusf_m113_usarmy_medical {
		author = "Christiansen [NTF]";
		scope = 0;
		side = 1;
		displayName = "M113 (Medical)";
		weapons[] = {"TruckHorn2", "SmokeLauncher"};
		magazines[] = {"SmokeLauncherMag"};
		ace_cargo_space = 5;
		ace_cargo_hasCargo = 1;

		class AnimationSources : AnimationSources {
			class IFF_Panels_Hide : IFF_Panels_Hide {
				initPhase = 1;
			};
		};

		class TextureSources {
			class NorwayDesert {
				displayName="Norway (Desert)";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Medical_Hull.paa", // Hull
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Accessories.paa", // Accessories
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Wheels.paa", // Wheels
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"BNB_FA_NAF_Woodland",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Arctic"
				};
			};
			class NorwayWoodland {
				displayName="Norway (Woodland)";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Medical_Hull.paa", // Hull
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Accessories.paa", // Accessories
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Wheels.paa", // Wheels
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"BNB_FA_NAF_Woodland",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Arctic"
				};
			};
			// Thor
			class NorwayThorDesert {
				displayName="Norway (Desert) - Thor";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Medical_Hull_Thor.paa", // Hull
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Accessories.paa", // Accessories
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Wheels.paa", // Wheels
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"BNB_FA_NAF_Woodland",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Arctic"
				};
			};
			class NorwayThorWoodland {
				displayName="Norway (Woodland) - Thor";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Medical_Hull_Thor.paa", // Hull
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Accessories.paa", // Accessories
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Wheels.paa", // Wheels
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"BNB_FA_NAF_Woodland",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Arctic"
				};
			};
			// Odin
			class NorwayOdinDesert {
				displayName="Norway (Desert) - Odin";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Medical_Hull_Odin.paa", // Hull
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Accessories.paa", // Accessories
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Wheels.paa", // Wheels
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"BNB_FA_NAF_Woodland",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Arctic"
				};
			};
			class NorwayOdinWoodland {
				displayName="Norway (Woodland) - Odin";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Medical_Hull_Odin.paa", // Hull
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Accessories.paa", // Accessories
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Wheels.paa", // Wheels
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"BNB_FA_NAF_Woodland",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Arctic"
				};
			};
			// Mjolnir
			class NorwayMjolnirDesert {
				displayName="Norway (Desert) - Mjolnir";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Medical_Hull_Mjolnir.paa", // Hull
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Accessories.paa", // Accessories
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Wheels.paa", // Wheels
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"BNB_FA_NAF_Woodland",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Arctic"
				};
			};
			class NorwayMjolnirWoodland {
				displayName="Norway (Woodland) - Mjolnir";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Medical_Hull_Mjolnir.paa", // Hull
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Accessories.paa", // Accessories
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Wheels.paa", // Wheels
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"BNB_FA_NAF_Woodland",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Arctic"
				};
			};
			// Heimdall
			class NorwayHeimdallDesert {
				displayName="Norway (Desert) - Heimdall";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Medical_Hull_Heimdall.paa", // Hull
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Accessories.paa", // Accessories
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Wheels.paa", // Wheels
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"BNB_FA_NAF_Woodland",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Arctic"
				};
			};
			class NorwayHeimdallWoodland {
				displayName="Norway (Woodland) - Heimdall";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Medical_Hull_Heimdall.paa", // Hull
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Accessories.paa", // Accessories
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Wheels.paa", // Wheels
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"BNB_FA_NAF_Woodland",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Arctic"
				};
			};
		};

		class TransportMagazines {
			ARMOURED_VEHICLE_MAGAZINES
		};

		class TransportWeapons {
			ARMOURED_VEHICLE_WEAPONS
		};

		class TransportItems {
			ARMOURED_VEHICLE_ITEMS
		};

		class TransportBackpacks {
			ARMOURED_VEHICLE_BACKPACKS
		};
	};

	class BNB_FA_NAF_M113_M2_Shield : rhsusf_m113_usarmy {
		author = "Christiansen [NTF]";
		scope = 0;
		side = 1;
		displayName = "M113 (M2 Shield)";
		weapons[] = {"TruckHorn2", "SmokeLauncher"};
		magazines[] = {"SmokeLauncherMag"};
		ace_cargo_space = 5;
		ace_cargo_hasCargo = 1;

		class AnimationSources : AnimationSources {
			class IFF_Panels_Hide : IFF_Panels_Hide {
				initPhase = 1;
			};
		};

		class TextureSources {
			class NorwayDesert {
				displayName="Norway (Desert)";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Hull.paa", // Hull
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Accessories.paa", // Accessories
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Wheels.paa", // Wheels
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Gun_Mount.paa", // Gun Mount
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Shield.paa" // Turret Shield
				};
				factions[] = {
					"BNB_FA_NAF_Woodland",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Arctic"
				};
			};
			class NorwayWoodland {
				displayName="Norway (Woodland)";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Hull.paa", // Hull
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Accessories.paa", // Accessories
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Wheels.paa", // Wheels
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Gun_Mount.paa", // Gun Mount
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Shield.paa" // Turret Shield
				};
				factions[] = {
					"BNB_FA_NAF_Woodland",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Arctic"
				};
			};
			// Thor
			class NorwayThorDesert {
				displayName="Norway (Desert) - Thor";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Hull_Thor.paa", // Hull
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Accessories.paa", // Accessories
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Wheels.paa", // Wheels
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"BNB_FA_NAF_Woodland",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Arctic"
				};
			};
			class NorwayThorWoodland {
				displayName="Norway (Woodland) - Thor";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Hull_Thor.paa", // Hull
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Accessories.paa", // Accessories
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Wheels.paa", // Wheels
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"BNB_FA_NAF_Woodland",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Arctic"
				};
			};
			// Odin
			class NorwayOdinDesert {
				displayName="Norway (Desert) - Odin";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Hull_Odin.paa", // Hull
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Accessories.paa", // Accessories
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Wheels.paa", // Wheels
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"BNB_FA_NAF_Woodland",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Arctic"
				};
			};
			class NorwayOdinWoodland {
				displayName="Norway (Woodland) - Odin";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Hull_Odin.paa", // Hull
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Accessories.paa", // Accessories
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Wheels.paa", // Wheels
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"BNB_FA_NAF_Woodland",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Arctic"
				};
			};
			// Mjolnir
			class NorwayMjolnirDesert {
				displayName="Norway (Desert) - Mjolnir";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Hull_Mjolnir.paa", // Hull
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Accessories.paa", // Accessories
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Wheels.paa", // Wheels
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"BNB_FA_NAF_Woodland",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Arctic"
				};
			};
			class NorwayMjolnirWoodland {
				displayName="Norway (Woodland) - Mjolnir";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Hull_Mjolnir.paa", // Hull
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Accessories.paa", // Accessories
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Wheels.paa", // Wheels
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"BNB_FA_NAF_Woodland",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Arctic"
				};
			};
			// Heimdall
			class NorwayHeimdallDesert {
				displayName="Norway (Desert) - Heimdall";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Hull_Heimdall.paa", // Hull
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Accessories.paa", // Accessories
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Wheels.paa", // Wheels
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"BNB_FA_NAF_Woodland",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Arctic"
				};
			};
			class NorwayHeimdallWoodland {
				displayName="Norway (Woodland) - Heimdall";
				author = "2nd Battalion, Nord Brigade";
				textures[] = {
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Hull_Heimdall.paa", // Hull
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Accessories.paa", // Accessories
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Wheels.paa", // Wheels
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Interior_Hatches.paa", // Hatch Interiors
					"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Gun_Mount.paa" // Gun Mount
				};
				factions[] = {
					"BNB_FA_NAF_Woodland",
					"BNB_FA_NAF_Desert",
					"BNB_FA_NAF_Arctic"
				};
			};
		};

		class TransportMagazines {
			ARMOURED_VEHICLE_MAGAZINES
		};

		class TransportWeapons {
			ARMOURED_VEHICLE_WEAPONS
		};

		class TransportItems {
			ARMOURED_VEHICLE_ITEMS
			VEHICLE_AT_AMMO_EXTE
		};

		class TransportBackpacks {
			ARMOURED_VEHICLE_BACKPACKS
		};
	};

	//////////////////////
	// M113 Camouflages //
	//////////////////////
	// Arctic
	class BNB_FA_NAF_M113_Arctic : BNB_FA_NAF_M113 {
		scope = 2;
		scopeCurator = 2;
		faction = "BNB_FA_NAF_Arctic";
		crew = "BNB_FA_NAF_Crew_Arctic";
		typicalCargo[] = { "BNB_FA_NAF_Rifleman_Arctic" };

		hiddenselectionstextures[] = {
			"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Hull_Light.paa", // Hull
			"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Accessories.paa", // Accessories
			"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Wheels.paa", // Wheels
			"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Interior_Hatches.paa", // Hatch Interiors
			"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Gun_Mount.paa" // Gun Mount
		};
	};

	class BNB_FA_NAF_M113_M2_Arctic : BNB_FA_NAF_M113_M2 {
		scope = 2;
		scopeCurator = 2;
		faction = "BNB_FA_NAF_Arctic";
		crew = "BNB_FA_NAF_Crew_Arctic";
		typicalCargo[] = { "BNB_FA_NAF_Rifleman_Arctic" };

		hiddenselectionstextures[] = {
			"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Hull.paa", // Hull
			"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Accessories.paa", // Accessories
			"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Wheels.paa", // Wheels
			"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Interior_Hatches.paa", // Hatch Interiors
			"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Gun_Mount.paa" // Gun Mount
		};
	};

	class BNB_FA_NAF_M113_Medical_Arctic : BNB_FA_NAF_M113_Medical {
		scope = 2;
		scopeCurator = 2;
		faction = "BNB_FA_NAF_Arctic";
		crew = "BNB_FA_NAF_Crew_Arctic";
		typicalCargo[] = { "BNB_FA_NAF_Rifleman_Arctic" };

		hiddenselectionstextures[] = {
			"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Medical_Hull.paa", // Hull
			"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Accessories.paa", // Accessories
			"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Wheels.paa", // Wheels
			"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Interior_Hatches.paa", // Hatch Interiors
			"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Gun_Mount.paa" // Gun Mount
		};
	};

	class BNB_FA_NAF_M113_M2_Shield_Arctic : BNB_FA_NAF_M113_M2_Shield {
		scope = 2;
		scopeCurator = 2;
		faction = "BNB_FA_NAF_Arctic";
		crew = "BNB_FA_NAF_Crew_Arctic";
		typicalCargo[] = { "BNB_FA_NAF_Rifleman_Arctic" };

		hiddenselectionstextures[] = {
			"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Hull.paa", // Hull
			"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Accessories.paa", // Accessories
			"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Wheels.paa", // Wheels
			"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Interior_Hatches.paa", // Hatch Interiors
			"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Gun_Mount.paa", // Gun Mount
			"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Shield.paa" // Turret Shield
		};
	};


	// Desert
	class BNB_FA_NAF_M113_Desert : BNB_FA_NAF_M113 {
		scope = 2;
		scopeCurator = 2;
		faction = "BNB_FA_NAF_Desert";
		crew = "BNB_FA_NAF_Crew_Desert";
		typicalCargo[] = { "BNB_FA_NAF_Rifleman_Desert" };

		hiddenselectionstextures[] = {
			"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Hull_Light.paa", // Hull
			"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Accessories.paa", // Accessories
			"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Wheels.paa", // Wheels
			"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Interior_Hatches.paa", // Hatch Interiors
			"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Gun_Mount.paa" // Gun Mount
		};
	};

	class BNB_FA_NAF_M113_M2_Desert : BNB_FA_NAF_M113_M2 {
		scope = 2;
		scopeCurator = 2;
		faction = "BNB_FA_NAF_Desert";
		crew = "BNB_FA_NAF_Crew_Desert";
		typicalCargo[] = { "BNB_FA_NAF_Rifleman_Desert" };

		hiddenselectionstextures[] = {
			"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Hull.paa", // Hull
			"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Accessories.paa", // Accessories
			"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Wheels.paa", // Wheels
			"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Interior_Hatches.paa", // Hatch Interiors
			"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Gun_Mount.paa" // Gun Mount
		};
	};

	class BNB_FA_NAF_M113_Medical_Desert : BNB_FA_NAF_M113_Medical {
		scope = 2;
		scopeCurator = 2;
		faction = "BNB_FA_NAF_Desert";
		crew = "BNB_FA_NAF_Crew_Desert";
		typicalCargo[] = { "BNB_FA_NAF_Rifleman_Desert" };

		hiddenselectionstextures[] = {
			"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Medical_Hull.paa", // Hull
			"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Accessories.paa", // Accessories
			"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Wheels.paa", // Wheels
			"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Interior_Hatches.paa", // Hatch Interiors
			"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Gun_Mount.paa" // Gun Mount
		};
	};

	class BNB_FA_NAF_M113_M2_Shield_Desert : BNB_FA_NAF_M113_M2_Shield {
		scope = 2;
		scopeCurator = 2;
		faction = "BNB_FA_NAF_Desert";
		crew = "BNB_FA_NAF_Crew_Desert";
		typicalCargo[] = { "BNB_FA_NAF_Rifleman_Desert" };

		hiddenselectionstextures[] = {
			"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Hull.paa", // Hull
			"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Accessories.paa", // Accessories
			"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Wheels.paa", // Wheels
			"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Interior_Hatches.paa", // Hatch Interiors
			"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Gun_Mount.paa", // Gun Mount
			"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Desert_Shield.paa" // Turret Shield
		};
	};


	// woodland
	class BNB_FA_NAF_M113_Woodland : BNB_FA_NAF_M113 {
		scope = 2;
		scopeCurator = 2;
		faction = "BNB_FA_NAF_Woodland";
		crew = "BNB_FA_NAF_Crew_Woodland";
		typicalCargo[] = { "BNB_FA_NAF_Rifleman_Woodland" };

		hiddenselectionstextures[] = {
			"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Hull_Light.paa", // Hull
			"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Accessories.paa", // Accessories
			"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Wheels.paa", // Wheels
			"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Interior_Hatches.paa", // Hatch Interiors
			"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Gun_Mount.paa" // Gun Mount
		};
	};

	class BNB_FA_NAF_M113_M2_Woodland : BNB_FA_NAF_M113_M2 {
		scope = 2;
		scopeCurator = 2;
		faction = "BNB_FA_NAF_Woodland";
		crew = "BNB_FA_NAF_Crew_Woodland";
		typicalCargo[] = { "BNB_FA_NAF_Rifleman_Woodland" };

		hiddenselectionstextures[] = {
			"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Hull.paa", // Hull
			"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Accessories.paa", // Accessories
			"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Wheels.paa", // Wheels
			"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Interior_Hatches.paa", // Hatch Interiors
			"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Gun_Mount.paa" // Gun Mount
		};
	};

	class BNB_FA_NAF_M113_Medical_Woodland : BNB_FA_NAF_M113_Medical {
		scope = 2;
		scopeCurator = 2;
		faction = "BNB_FA_NAF_Woodland";
		crew = "BNB_FA_NAF_Crew_Woodland";
		typicalCargo[] = { "BNB_FA_NAF_Rifleman_Woodland" };

		hiddenselectionstextures[] = {
			"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Medical_Hull.paa", // Hull
			"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Accessories.paa", // Accessories
			"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Wheels.paa", // Wheels
			"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Interior_Hatches.paa", // Hatch Interiors
			"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Gun_Mount.paa" // Gun Mount
		};
	};

	class BNB_FA_NAF_M113_M2_Shield_Woodland : BNB_FA_NAF_M113_M2_Shield {
		scope = 2;
		scopeCurator = 2;
		faction = "BNB_FA_NAF_Woodland";
		crew = "BNB_FA_NAF_Crew_Woodland";
		typicalCargo[] = { "BNB_FA_NAF_Rifleman_Woodland" };

		hiddenselectionstextures[] = {
			"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Hull.paa", // Hull
			"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Accessories.paa", // Accessories
			"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Wheels.paa", // Wheels
			"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Interior_Hatches.paa", // Hatch Interiors
			"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Gun_Mount.paa", // Gun Mount
			"\x\bnb_fa\norwegian_armed_forces\data\textures\M113_Woodland_Shield.paa" // Turret Shield
		};
	};
};
