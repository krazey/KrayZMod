class cfgWeapons
{
	class Default;
	class ItemCore;
	class Loot: Default
	{
		scope = 2;
		value = 0;
		type = 0;
		displayName = "Use";
		canDrop = 0;
		muzzles[] = {"this"};
		magazines[] = {"FoodBioMeat","ItemZombieParts","ItemBandage","ItemHeatPack","PartWoodPile","PartFueltank","PartWheel","PartGeneric","PartEngine","PartVRotor","PartGlass","ItemWaterbottle","ItemWaterbottleUnfilled","ItemEpinephrine","ItemGoldBar","ItemSilverBar","ItemCopperBar","ItemMorphine","ItemBloodbag","ItemAntibiotic","ItemPainkiller","ItemJerrycan","ItemOilBarrel","ItemGenerator","ItemTent","ItemSandbag","ItemSandbagRound","ItemFortSandbagRound","ItemTankTrap","ItemWire","ItemWire2","ItemCamoNet","ItemSandBagNest","ItemWatchTower","ItemDeerStand","ItemHBarrier","ItemGate","ItemScaffolding","ItemLadderSmall","ItemLadderLarge","FoodSteakRaw","TrashTinCan","ItemSodaCoke","ItemSodaPepsi","ItemSodaMdew","ItemSodaMdew","FoodEdible","FoodSteakCooked","FoodCanBakedBeans","FoodCanSardines","FoodCanFrankBeans","FoodCanPasta"};
		modes[] = {"this"};
		useAction = 0;
		useActionTitle = "";
		enableAttack = 0;
		showToPlayer = 0;
	};
	class ItemToolbox: ItemCore
	{
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
	class ItemEtool: ItemCore
	{
		scope = 2;
		displayName = "$STR_EQUIP_NAME_1";
		model = "\dayz_equip\models\etool.p3d";
		picture = "\dayz_equip\textures\equip_etool_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_1";
	};
	class ItemMatchbox: ItemCore
	{
		scope = 2;
		displayName = "$STR_EQUIP_NAME_3";
		model = "\dayz_equip\models\matchbox_gear.p3d";
		picture = "\dayz_equip\textures\equip_matchbox_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_3";
		class ItemActions
		{
			class Use
			{
				text = "$STR_ACTIONS_LIGHTFIRE";
				script = "spawn player_makeFire;";
				use[] = {"PartWoodPile"};
			};
		};
	};
	class ItemHatchet: ItemCore
	{
		scope = 2;
		displayName = "$STR_EQUIP_NAME_41";
		model = "\dayz_equip\models\hatchet.p3d";
		picture = "\dayz_equip\textures\equip_hatchet_CA.paa";
		descriptionShort = "$STR_EQUIP_DESC_41";
		class ItemActions
		{
			class Use
			{
				text = "$STR_ACTIONS_CHOPWOOD";
				script = "spawn player_chopWood;";
			};
			class Toolbelt
			{
				text = "Remove from Toolbelt";
				script = "spawn player_addToolbelt;";
				use[] = {"ItemHatchet"};
				output[] = {"MeleeHatchet"};
			};
		};
	};
	class ItemKnife: ItemCore
	{
		scope = 2;
		displayName = "$STR_EQUIP_NAME_4";
		model = "\dayz_equip\models\knife_gear.p3d";
		picture = "\dayz_equip\textures\equip_knife_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_4";
	};
	class ItemFlashlight: ItemCore
	{
		scope = 2;
		displayName = "$STR_EQUIP_NAME_5";
		model = "\dayz_equip\models\flashlight.p3d";
		picture = "\dayz_equip\textures\equip_flashlight_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_5";
		class ItemActions
		{
			class Toolbelt
			{
				text = "Remove from toolbelt";
				script = "spawn player_addToolbelt;";
				use[] = {"ItemFlashlight"};
				output[] = {"MeleeFlashlight"};
			};
			class Use {
				text = "Place at shoulder";
				script = "spawn player_addflashtosh2;";
			};
		};
	};
	class ItemFlashlightReduse2: ItemFlashlight {
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
	class MeleeFlashlight: Pistol
	{
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
		class Library
		{
			libTextDesc = "A flashlight (or torch in British English) is a hand-held portable electric-powered light source. Usually the light source is a small incandescent light bulb or light-emitting diode (LED).";
		};
		descriptionShort = "$STR_EQUIP_DESC_5";
		autoFire = 0;
		class FlashLight
		{
			color[] = {0.900000, 0.900000, 0.700000, 0.900000};
			ambient[] = {0.100000, 0.100000, 0.100000, 1};
			position = "flash dir";
			direction = "flash";
			angle = 30;
			scale[] = {1, 1, 0.500000};
			brightness = 0.100000;
		};
		class ItemActions
		{
			class Toolbelt
			{
				text = "Add to toolbelt";
				script = "spawn player_addToolbelt;";
				use[] = {"MeleeFlashlight"};
				output[] = {"ItemFlashlight"};
			};
		};
		minRange = 0;
		minRangeProbab = 0.100000;
		midRange = 30;
		midRangeProbab = 0.300000;
		maxRange = 50;
		maxRangeProbab = 0.040000;
	};
	class MeleeFlashlightRed: MeleeFlashlight
	{
		model = "\dayz_equip\models\flashlight_mil.p3d";
		picture = "\dayz_equip\textures\equip_flashlight_mil_ca.paa";
		displayName = "$STR_EQUIP_NAME_6";
		descriptionShort = "$STR_EQUIP_DESC_6";
		class FlashLight
		{
			color[] = {0.900000, 0.000000, 0.000000, 0.900000};
			ambient[] = {0.100000, 0.000000, 0.000000, 1};
			position = "flash dir";
			direction = "flash";
			angle = 30;
			scale[] = {1, 1, 0.500000};
			brightness = 0.080000;
		};
		class ItemActions
		{
			class Toolbelt
			{
				text = "Add to toolbelt";
				script = "spawn player_addToolbelt;";
				use[] = {"MeleeFlashlightRed"};
				output[] = {"ItemFlashlightRed"};
			};
		};
	};
	class ItemFlashlightRed: ItemCore
	{
		scope = 2;
		model = "\dayz_equip\models\flashlight_mil.p3d";
		picture = "\dayz_equip\textures\equip_flashlight_mil_ca.paa";
		displayName = "$STR_EQUIP_NAME_6";
		descriptionShort = "$STR_EQUIP_DESC_6";
		class ItemActions
		{
			class Toolbelt
			{
				text = "Remove from toolbelt";
				script = "spawn player_addToolbelt;";
				use[] = {"ItemFlashlightRed"};
				output[] = {"MeleeFlashlightRed"};
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
	class ItemFlashlightReduse: ItemFlashlightRed {
		scope = 2;
		displayName = "Army flashlight (at shoulder)";

		class ItemActions {

			class Use {
				text = "Remove from shoulder";
				script = "spawn player_rmvflashfromsh;";
			};
		};
	};
};