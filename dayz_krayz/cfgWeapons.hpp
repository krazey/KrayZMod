class cfgWeapons {
	class Default;
	class ItemCore;
	class Loot_KR: Default {
		scope = 2;
 		value = 0;
 		type = 0;
 		displayName = "Use";
 		canDrop = 0;
		muzzles[] = {"this"};
		magazines[] = {"FoodBioMeat","ItemZombieParts","ItemBandage","ItemHeatPack","PartWoodPile","PartFueltank","PartWheel","PartGeneric_KR","PartEngine","PartVRotor","PartGlass","ItemWaterbottle","ItemWaterbottleUnfilled","ItemEpinephrine","ItemGoldBar","ItemSilverBar","ItemCopperBar","ItemMorphine","ItemBloodbag","ItemAntibiotic","ItemPainkiller","ItemJerrycan","ItemOilBarrel","ItemGenerator","ItemTent","ItemSandbag_KR","ItemSandbagRound","ItemFortSandbagRound","ItemTankTrap_KR","ItemWire_KR","ItemWire2","ItemCamoNet","ItemSandBagNest","ItemWatchTower","ItemDeerStand","ItemHBarrier","ItemGate","ItemScaffolding","ItemLadderSmall","ItemLadderLarge","FoodSteakRaw","TrashTinCan_KR","ItemSodaCoke","ItemSodaPepsi","ItemSodaMdew","ItemSodaMdew","FoodEdible","FoodSteakCooked","FoodCanBakedBeans","FoodCanSardines","FoodCanFrankBeans","FoodCanPasta"};
		modes[] = {"this"};
 		useAction = 0;
 		useActionTitle = "";
 		enableAttack = 0;
 		showToPlayer = 0;
 	};
	class ItemToolbox_KR: ItemCore {
		scope = 2;
		displayName = "$STR_EQUIP_NAME_2";
		model = "\dayz_equip\models\toolbox.p3d";
		picture = "\dayz_equip\textures\equip_toolbox_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_2";
		class ItemActions {
			class RmvReddot {
				text = "Dismantle Red Dot";
				script = "spawn player_weapon_rmvreddot;";
			};
			class RmvHoloScope {
				text = "Dismantle Holo Scope";
				script = "spawn player_weapon_rmvholo;";
			};
			class RmvAcogScope {
				text = "Dismantle Acog Scope";
				script = "spawn player_weapon_rmvacog;";
			};
			class RmvScope {
				text = "Dismantle Scope";
				script = "spawn player_weapon_rmvscope;";
			};
			class RmvLauncher {
				text = "Dismantle Launcher";
				script = "spawn player_weapon_rmvlauncher;";
			};
			class RmvSupress {
				text = "Dismantle Surpressor";
				script = "spawn player_weapon_rmvsuppress;";
			};
		};
	};
	class ItemFlashlight_KR: ItemCore {
		scope = 2;
		displayName = "$STR_EQUIP_NAME_5";
		model = "\dayz_equip\models\flashlight.p3d";
		picture = "\dayz_equip\textures\equip_flashlight_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_5";
		class ItemActions {
			class Toolbelt {
				text = "Remove from toolbelt";
				script = "spawn player_addToolbelt;";
				use[] = {"ItemFlashlight_KR"};
				output[] = {"MeleeFlashlight_KR"};
			};
			class Use {
				text = "Place at shoulder";
				script = "spawn player_addflashtosh2;";
			};
		};
	};
	class ItemFlashlightReduse2: ItemFlashlight_KR {
		scope = 2;
		displayName = "Flashlight (at shoulder)";
		class ItemActions {
			class Use {
				text = "Remove from shoulder";
				script = "spawn player_rmvflashfromsh2;";
			};
		};
	};
	class Pistol;
	class MeleeFlashlight_KR: Pistol {
		scope = 2;
		canDrop = 0;
		model = "\dayz_equip\models\flashlight.p3d";
		modelOptics = "-";
		picture = "\dayz_equip\textures\equip_flashlight_ca.paa";
		magazines[] = {};
		displayName = "$STR_EQUIP_NAME_5";
		begin1[] = {};
		begin2[] = {};
		soundBegin[] = {"begin1",0.5,"begin2",0.5};
		reloadMagazineSound[] = {};
		recoil = "recoil_single_pistol_2outof3";
		recoilProne = "recoil_single_pistol_prone_2outof3";
		distanceZoomMin = 50;
		distanceZoomMax = 50;
		class Library {
			libTextDesc = "A flashlight (or torch in British English) is a hand-held portable electric-powered light source. Usually the light source is a small incandescent light bulb or light-emitting diode (LED).";
		};
		descriptionShort = "$STR_EQUIP_DESC_5";
		autoFire = 0;
		class FlashLight {
			color[] = {0.900000, 0.900000, 0.700000, 0.900000};
			ambient[] = {0.100000, 0.100000, 0.100000, 1};
			position = "flash dir";
			direction = "flash";
			angle = 30;
			scale[] = {1, 1, 0.500000};
			brightness = 0.100000;
		};
		class ItemActions {
			class Toolbelt {
				text = "Add to toolbelt";
				script = "spawn player_addToolbelt;";
				use[] = {"MeleeFlashlight_KR"};
				output[] = {"ItemFlashlight_KR"};
			};
		};
		minRange = 0;
		minRangeProbab = 0.100000;
		midRange = 30;
		midRangeProbab = 0.300000;
		maxRange = 50;
		maxRangeProbab = 0.040000;
	};
	class MeleeFlashlightRed_KR: MeleeFlashlight_KR {
		model = "\dayz_equip\models\flashlight_mil.p3d";
		picture = "\dayz_equip\textures\equip_flashlight_mil_ca.paa";
		displayName = "$STR_EQUIP_NAME_6";
		descriptionShort = "$STR_EQUIP_DESC_6";
		class FlashLight {
			color[] = {0.900000, 0.000000, 0.000000, 0.900000};
			ambient[] = {0.100000, 0.000000, 0.000000, 1};
			position = "flash dir";
			direction = "flash";
			angle = 30;
			scale[] = {1, 1, 0.500000};
			brightness = 0.080000;
		};
		class ItemActions {
			class Toolbelt {
				text = "Add to toolbelt";
				script = "spawn player_addToolbelt;";
				use[] = {"MeleeFlashlightRed_KR"};
				output[] = {"ItemFlashlightRed_KR"};
			};
		};
	};
	class ItemFlashlightRed_KR: ItemCore {
		scope = 2;
		model = "\dayz_equip\models\flashlight_mil.p3d";
		picture = "\dayz_equip\textures\equip_flashlight_mil_ca.paa";
		displayName = "$STR_EQUIP_NAME_6";
		descriptionShort = "$STR_EQUIP_DESC_6";
		class ItemActions {
			class Toolbelt {
				text = "Remove from toolbelt";
				script = "spawn player_addToolbelt;";
				use[] = {"ItemFlashlightRed_KR"};
				output[] = {"MeleeFlashlightRed_KR"};
			};
			class Use {
				text = "Place at shoulder";
				script = "spawn player_addflashtosh;";
			};
			class Use2 {
				text = "Place at shoulder (red filter)";
				script = "spawn player_addflashtoshr;";
			};
		};
	};
	class ItemFlashlightReduse: ItemFlashlightRed_KR {
		scope = 2;
		displayName = "Army flashlight (at shoulder)";
		class ItemActions {
			class Use {
				text = "Remove from shoulder";
				script = "spawn player_rmvflashfromsh;";
			};
		};
	};
	//WEAPONS
	class R3F_Minimi_EOT;
	class R3F_Minimi_EOT_DZ: R3F_Minimi_EOT {
		type = "1";
	};
	class R3F_Minimi_AIM_HG;
	class R3F_Minimi_AIM_HG_DZ: R3F_Minimi_AIM_HG {
		type = "1";
	};
	class R3F_Minimi_J4;
	class R3F_Minimi_J4_DZ: R3F_Minimi_J4 {
		type = "1";
	};
	class R3F_Minimi_762_J4;
	class R3F_Minimi_762_J4_DZ: R3F_Minimi_762_J4 {
		type = "1";
	};
	class R3F_Minimi_762_EOT_HG;
	class R3F_Minimi_762_EOT_HG_DZ: R3F_Minimi_762_EOT_HG {
		type = "1";
	};
	class R3F_Minimi_762_OB50;
	class R3F_Minimi_762_OB50_DZ: R3F_Minimi_762_OB50 {
		type = "1";
	};
	class R3F_PGM_Hecate_II;
	class R3F_PGM_Hecate_II_DZ: R3F_PGM_Hecate_II {
		type = "1";
	};
	class R3F_PGM_Hecate_II_MILDOT;
	class R3F_PGM_Hecate_II_MILDOT_DZ: R3F_PGM_Hecate_II_MILDOT {
		type = "1";
	};
	class R3F_PGM_Hecate_II_DES;
	class R3F_PGM_Hecate_II_DES_DZ: R3F_PGM_Hecate_II_DES {
		type = "1";
	};
	class R3F_PGM_Hecate_II_MILDOT_DES;
	class R3F_PGM_Hecate_II_MILDOT_DES_DZ: R3F_PGM_Hecate_II_MILDOT_DES {
		type = "1";
	};
	class R3F_PGM_Hecate_II_POLY;
	class R3F_PGM_Hecate_II_POLY_DZ: R3F_PGM_Hecate_II_POLY {
		type = "1";
	};
	class DMR;
    class DMR_DZ: DMR {
        scope = 2;
        model = "\dayz_krayz\weapons\dmr\us_dmr";
    };
};