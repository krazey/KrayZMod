class Mode_SemiAuto
{
	multiplier = 1;
	burst = 1;
	dispersion = 0.0002;
	sound[] = {"",10,1};
	soundBegin[] = {"sound",1};
	soundEnd[] = {};
	soundLoop[] = {};
	soundContinuous = 0;
	soundBurst = 1;
	reloadTime = 0.1;
	ffCount = 1;
	ffMagnitude = 0.5;
	ffFrequency = 11;
	flash = "gunfire";
	flashSize = 0.1;
	recoil = "Empty";
	recoilProne = "Empty";
	autoFire = 0;
	aiRateOfFire = 0.5;
	aiRateOfFireDistance = 500;
	useAction = 0;
	useActionTitle = "";
	showToPlayer = 1;
	minRange = 30;
	minRangeProbab = 0.25;
	midRange = 300;
	midRangeProbab = 0.58;
	maxRange = 600;
	maxRangeProbab = 0.04;
	displayName = "Semi";
};
class DZ_SingleMelee: Mode_SemiAuto
{
	multiplier = 1;
	burst = 5;
	displayName = "Hack";
	dispersion = 0.2;
	sound[] = {"",0,1};
	soundContinuous = 1;
	reloadTime = 1;
	magazineReloadTime = 1;
	ffCount = 1;
	optics = "false";
	recoil = "empty";
	autoFire = "true";
	aiRateOfFire = 0.7;
	aiRateOfFireDistance = 2.2;
	useAction = "false";
	useActionTitle = "";
	recoilProne = "empty";
	showToPlayer = "true";
	minRange = 0;
	minRangeProbab = 0.8;
	midRange = 0.3;
	midRangeProbab = 0.8;
	maxRange = 3;
	maxRangeProbab = 0;
	soundBurst = 1;
};
class cfgWeapons
{
	class Rifle;
	class MeleeWeapon: Rifle
	{
		distanceZoomMin = 50;
		distanceZoomMax = 50;
		canDrop = 0;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		optics = 1;
		modelOptics = "-";
		modes[] = {"Single"};
		fireLightDuration = 0;
		fireLightIntensity = 0;
		reloadMagazineSound[] = {"",1};
		class Single: DZ_SingleMelee
		{
			multiplier = 1;
			burst = 1;
			displayName = "Hack";
			dispersion = 0.2;
			optics = 1;
			recoil = "DZ_Swing";
			autoFire = 1;
			aiRateOfFire = 0.7;
			aiRateOfFireDistance = 2.2;
			useAction = 0;
			useActionTitle = "";
			recoilProne = "DZ_Swing";
			swing0[] = {"dayz_weapons\sounds\swing_0",1.77828,1,30};
			swing1[] = {"dayz_weapons\sounds\swing_1",1.77828,1,30};
			soundBegin[] = {"swing0",0.5,"swing1",0.5};
			drySound[] = {"",1};
			reloadTime = 0;
			reloadMagazineSound[] = {"",1};
			showToPlayer = 1;
			minRange = 0;
			minRangeProbab = 0.8;
			midRange = 0.3;
			midRangeProbab = 0.8;
			maxRange = 3;
			maxRangeProbab = 0;
		};
		cursor = "Vehicle_Grenade_W";
		cursoraim = "Vehicle_Grenade_W";
		cursorSize = 1;
	};
	class MeleeHatchet: MeleeWeapon
	{
		scope = 2;
		model = "\dayz_weapons\models\Hatchet_weaponized";
		picture = "\dayz_equip\textures\equip_hatchet_CA.paa";
		displayName = "$STR_EQUIP_NAME_41";
		magazines[] = {"Hatchet_Swing"};
		handAnim[] = {"OFP2_ManSkeleton","\dayz_weapons\anim\melee_hatchet_holding.rtm"};
		class ItemActions
		{
			class Use
			{
				text = "$STR_ACTIONS_CHOPWOOD";
				script = "spawn player_chopWood;";
			};
			class Toolbelt
			{
				text = "Add to Toolbelt";
				script = "spawn player_addToolbelt;";
				use[] = {"MeleeHatchet"};
				output[] = {"ItemHatchet"};
			};
			class Drop
			{
				text = "Drop Hatchet";
				script = "spawn player_dropWeapon;";
				use[] = {"Hatchet_Swing"};
			};
		};
		class Library
		{
			libTextDesc = "$STR_EQUIP_DESC_41";
		};
		descriptionShort = "$STR_EQUIP_DESC_41";
	};
	class MeleeCrowbar: MeleeHatchet
	{
		scope = 2;
		model = "\dayz_weapons\models\crowbar_weaponized";
		picture = "\dayz_weapons\textures\equip_crowbar_CA.paa";
		displayName = "Crowbar";
		magazines[] = {"Crowbar_Swing"};
		class ItemActions
		{
			class Drop
			{
				text = "Drop Crowbar";
				script = "spawn player_dropWeapon;";
				use[] = {"Crowbar_Swing"};
			};
		};
		class Library
		{
			libTextDesc = "A tool consisting of a metal bar with a single curved end and flattened points, often with a small fissure on one or both ends for removing nails.";
		};
		descriptionShort = "A tool consisting of a metal bar with a single curved end and flattened points, often with a small fissure on one or both ends for removing nails.";
	};
	class Winchester1866: Rifle
	{
		scope = 2;
		model = "\dayz_weapons\models\Winchester1866";
		picture = "\dayz_weapons\textures\equip_winchester1866_CA.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		magazines[] = {"15Rnd_W1866_Slug","15Rnd_W1866_Pellet"};
		optics = 1;
		modelOptics = "-";
		displayname = "$STR_WPN_NAME_1";
		modes[] = {"Single"};
		distanceZoomMin = 50;
		distanceZoomMax = 50;
		selectionFireAnim = "zasleh";
		handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons_E\Data\Anim\LeeEnfield.rtm"};
		class Single: Mode_SemiAuto
		{
			dispersion = 0.003;
			soundContinuous = 0;
			reloadTime = 1;
			reloadMagazineSound[] = {"\ca\sounds\weapons\rifles\M1014-reload",0.316228,1,20};
			begin1[] = {"dayz_weapons\sounds\shotgun_0",1.77828,1,1000};
			begin2[] = {"dayz_weapons\sounds\shotgun_1",1.77828,1,1000};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			drySound[] = {"ca\sounds\weapons\rifles\dry",0.01,1,10};
			minRange = 0;
			minRangeProbab = 0.5;
			midRange = 60;
			midRangeProbab = 0.2;
			maxRange = 100;
			maxRangeProbab = 0.03;
			recoil = "recoil_single_primary_9outof10";
			recoilProne = "recoil_single_primary_prone_8outof10";
		};
		class Library
		{
			libTextDesc = "$STR_WPN_DESC_1";
		};
		descriptionShort = "$STR_WPN_DESC_1";
	};
	class MR43: Winchester1866
	{
		model = "\dayz_weapons\models\mr43";
		picture = "\dayz_weapons\textures\equip_mr43_CA.paa";
		displayname = "$STR_WPN_NAME_5";
		descriptionShort = "$STR_WPN_DESC_5";
		magazines[] = {"2Rnd_shotgun_74Slug","2Rnd_shotgun_74Pellets"};
		class Single: Mode_SemiAuto
		{
			dispersion = 0.003;
			soundContinuous = 0;
			reloadTime = 2;
			reloadMagazineSound[] = {"\ca\sounds\weapons\rifles\M1014-reload",0.316228,1,20};
			DB_shotgun_1[] = {"dayz_weapons\sounds\DB_shotgun_1",1.77828,1,1000};
			soundBegin[] = {"DB_shotgun_1",1};
			drySound[] = {"ca\sounds\weapons\rifles\dry",0.01,1,10};
			minRange = 0;
			minRangeProbab = 0.5;
			midRange = 60;
			midRangeProbab = 0.2;
			maxRange = 100;
			maxRangeProbab = 0.03;
			recoil = "recoil_single_primary_9outof10";
			recoilProne = "recoil_single_primary_prone_8outof10";
		};
	};
	class Remington870: Winchester1866
	{
		model = "\dayz_weapons\models\Remington870";
		picture = "\dayz_weapons\textures\equip_remington870_CA.paa";
		displayname = "$STR_WPN_NAME_2";
		descriptionShort = "$STR_WPN_DESC_2";
		magazines[] = {"8Rnd_B_Beneli_74Slug","8Rnd_B_Beneli_Pellets"};
	};
	class Remington870_lamp: Remington870
	{
		model = "\dayz_weapons\models\Remington870_lamp";
		displayname = "$STR_WPN_NAME_3";
		descriptionShort = "$STR_WPN_DESC_3";
		magazines[] = {"8Rnd_B_Beneli_74Slug","8Rnd_B_Beneli_Pellets"};
		class FlashLight
		{
			color[] = {0.9,0.9,0.7,0.9};
			ambient[] = {0.1,0.1,0.1,1};
			position = "flash dir";
			direction = "flash";
			angle = 30;
			scale[] = {1,1,0.5};
			brightness = 0.1;
		};
	};
	class GrenadeLauncher;
	class Flare: GrenadeLauncher
	{
		scope = 2;
		autoAimEnabled = 0;
		cursor = "Vehicle_Grenade_W";
		cursoraim = "\ca\Weapons\Data\clear_empty";
		cursorSize = 1;
		value = 0;
		type = 0;
		displayName = "$STR_MAG_ACTION2_4";
		canDrop = 0;
		muzzles[] = {"RoadFlareMuzzle","ChemLightMuzzle","MolotovCocktailMuzzle"};
		class ThrowMuzzle: GrenadeLauncher
		{
			cursor = "Air_Dot";
			cursoraim = "Vehicle_Grenade_W";
			cursorSize = 1;
			sound[] = {"",0.000316228,1};
			reloadSound[] = {"",0.000316228,1};
			aiDispersionCoefX = 6;
			aiDispersionCoefY = 6;
			reloadTime = 0;
			magazineReloadTime = 0;
			enableAttack = 0;
			showEmpty = 0;
			autoReload = 1;
			modelOptics = "";
			minRange = 30;
			minRangeProbab = 0.5;
			midRange = 45;
			midRangeProbab = 0.2;
			maxRange = 60;
			maxRangeProbab = 0.03;
		};
		class RoadFlareMuzzle: ThrowMuzzle
		{
			displayName = "$STR_MAG_ACTION_4";
			magazines[] = {"HandRoadFlare"};
			cursor = "Vehicle_Grenade_W";
			cursorAim = "\ca\Weapons\Data\clear_empty";
			begin1[] = {"dayz_weapons\sounds\roadflare_start",1.77828,1,1000};
			soundBegin[] = {"begin1",1};
		};
		class ChemLightMuzzle: ThrowMuzzle
		{
			displayName = "$STR_MAG_ACTION_5";
			magazines[] = {"HandChemGreen","HandChemRed","HandChemBlue"};
			cursor = "Vehicle_Grenade_W";
			cursorAim = "\ca\Weapons\Data\clear_empty";
		};
		class MolotovCocktailMuzzle: ThrowMuzzle
		{
			displayName = "Throw";
			magazines[] = {"TrashJackDaniels","ItemSodaEmpty","TrashTinCan"};
			cursor = "Vehicle_Grenade_W";
			cursorAim = "\ca\Weapons\Data\clear_empty";
		};
	};
	class Crossbow: Winchester1866
	{
		scope = 2;
		value = 1;
		model = "\dayz_weapons\models\testgun";
		optics = 1;
		dexterity = 1.64;
		displayName = "$STR_WPN_NAME_4";
		picture = "\dayz_weapons\textures\equip_crossbow_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		drySound[] = {"Ca\sounds\Weapons\rifles\dry",0.000316228,1,10};
		fireLightDuration = 0;
		fireLightIntensity = 0;
		reloadMagazineSound[] = {"ca\sounds\weapons\rifles\reload-m16-3",0.0562341,1,20};
		class Library
		{
			libTextDesc = "$STR_WPN_DESC_4";
		};
		descriptionShort = "$STR_WPN_DESC_4";
		class Single: Mode_SemiAuto
		{
			dispersion = 0.001;
			soundContinuous = 0;
			reloadTime = 3.0;
			reloadMagazineSound[] = {"\ca\sounds\weapons\rifles\M1014-reload",0.316228,1,20};
			begin1[] = {"dayz_weapons\sounds\crossbow_fire_0",0.177828,1,15};
			begin2[] = {"dayz_weapons\sounds\crossbow_fire_1",0.177828,1,15};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			drySound[] = {"ca\sounds\weapons\rifles\dry",0.01,1,10};
			minRange = 0;
			minRangeProbab = 0.5;
			midRange = 60;
			midRangeProbab = 0.2;
			maxRange = 100;
			maxRangeProbab = 0.03;
			recoil = "recoil_single_primary_4outof10";
			recoilProne = "recoil_single_primary_prone_4outof10";
		};
		magazines[] = {"BoltSteel", "BoltSteel4pack"};
		bullet1[] = {"dayz_weapons\sounds\crossbow_bolt",0.177828,1,15};
		soundBullet[] = {"bullet1",1};
	};
	class M249;
	class M249_DZ: M249
	{
		type = "1";
	};
	class M240;
	class M240_DZ: M240
	{
		type = "1";
	};
	class Mk_48;
	class Mk_48_DZ: Mk_48
	{
		type = "1";
	};
	class M107;
	class M107_DZ: M107
	{
		type = "1";
	};
	class m107_TWS_EP1;
	class m107_TWS_EP1_DZ: m107_TWS_EP1
	{
		type = "1";
	};
	class R3F_Minimi_EOT;
	class R3F_Minimi_EOT_DZ: R3F_Minimi_EOT
	{
		type = "1";
	};
	class R3F_Minimi_AIM_HG;
	class R3F_Minimi_AIM_HG_DZ: R3F_Minimi_AIM_HG
	{
		type = "1";
	};
	class R3F_Minimi_J4;
	class R3F_Minimi_J4_DZ: R3F_Minimi_J4
	{
		type = "1";
	};
	class R3F_Minimi_762_J4;
	class R3F_Minimi_762_J4_DZ: R3F_Minimi_762_J4
	{
		type = "1";
	};
	class R3F_Minimi_762_EOT_HG;
	class R3F_Minimi_762_EOT_HG_DZ: R3F_Minimi_762_EOT_HG
	{
		type = "1";
	};
	class R3F_Minimi_762_OB50;
	class R3F_Minimi_762_OB50_DZ: R3F_Minimi_762_OB50
	{
		type = "1";
	};
	class R3F_PGM_Hecate_II;
	class R3F_PGM_Hecate_II_DZ: R3F_PGM_Hecate_II
	{
		type = "1";
	};
	class R3F_PGM_Hecate_II_MILDOT;
	class R3F_PGM_Hecate_II_MILDOT_DZ: R3F_PGM_Hecate_II_MILDOT
	{
		type = "1";
	};
	class R3F_PGM_Hecate_II_DES;
	class R3F_PGM_Hecate_II_DES_DZ: R3F_PGM_Hecate_II_DES
	{
		type = "1";
	};
	class R3F_PGM_Hecate_II_MILDOT_DES;
	class R3F_PGM_Hecate_II_MILDOT_DES_DZ: R3F_PGM_Hecate_II_MILDOT_DES
	{
		type = "1";
	};
	class R3F_PGM_Hecate_II_POLY;
	class R3F_PGM_Hecate_II_POLY_DZ: R3F_PGM_Hecate_II_POLY
	{
		type = "1";
	};
};