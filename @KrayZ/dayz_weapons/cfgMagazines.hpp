class cfgMagazines
{
	class CA_Magazine;
	class Hatchet_Swing: CA_Magazine
	{
		scope = 2;
		type = 0;
		autoReload = 0;
		flash = "";
		flashSize = 0;
		initSpeed = 100;
		maxLeadSpeed = 20;
		dexterity = 20;
		picture = "\dayz_weapons\textures\equip_shells_ca.paa";
		displayName = "Hatchet";
		displayNameMagazine = "Hatchet";
		shortNameMagazine = "Hatchet";
		optics = 0;
		distanceZoomMin = 0;
		distanceZoomMax = 0;
		count = 100000;
		reloadTime = 0.1;
		magazineReloadTime = 0.1;
		drySound[] = {"",0,1};
		reloadMagazineSound[] = {"",0,1};
		modes[] = {"Single"};
		ammo = "Hatchet_Swing_Ammo";
	};
	class crowbar_swing: Hatchet_Swing
	{
		displayName = "Crowbar";
		displayNameMagazine = "Crowbar";
		shortNameMagazine = "Crowbar";
		ammo = "Crowbar_Swing_Ammo";
	};
	class 15Rnd_W1866_Slug: CA_Magazine
	{
		scope = 2;
		displayName = "$STR_MAG_NAME_2";
		ammo = "B_1866_Slug";
		model = "\dayz_weapons\models\8shells_slugs.p3d";
		picture = "\dayz_weapons\textures\equip_shells_ca.paa";
		count = 15;
		initSpeed = 396;
		descriptionShort = "$STR_MAG_DESC_2";
		displayNameShort = "Slug";
	};
	class 15Rnd_W1866_Pellet: 15Rnd_W1866_Slug{};
	class 8Rnd_B_Beneli_74Slug: CA_Magazine
	{
		scope = 2;
		displayName = "8Rnd. Slug";
		model = "\dayz_weapons\models\8shells_slugs.p3d";
		picture = "\dayz_weapons\textures\equip_shells_ca.paa";
		ammo = "B_12Gauge_74Slug";
		count = 8;
		initSpeed = 396;
		descriptionShort = "Caliber: 12 gauge <br/>Rounds: 8 <br/>Used in: M1014";
		class ItemActions
		{
			class ReloadMag
			{
				text = "Split into 4 x 2 rounds";
				script = "spawn player_reloadMag;";
				use[] = {"8Rnd_B_Beneli_74Slug"};
				output[] = {"2Rnd_shotgun_74Slug","2Rnd_shotgun_74Slug","2Rnd_shotgun_74Slug","2Rnd_shotgun_74Slug"};
			};
		};
	};
	class 8Rnd_B_Beneli_Pellets: CA_Magazine
	{
		scope = 2;
		displayName = "8Rnd. Pellets";
		model = "\dayz_weapons\models\8shells_pellets.p3d";
		picture = "\dayz_weapons\textures\equip_pellets_ca.paa";
		ammo = "B_12Gauge_Pellets";
		count = 8;
		initSpeed = 396;
		descriptionShort = "Caliber: 12 gauge <br/>Rounds: 8 Pellets<br/>Used in: M1014";
		displayNameShort = "Pellets";
		class ItemActions
		{
			class ReloadMag
			{
				text = "Split into 4x2 rounds";
				script = "spawn player_reloadMag;";
				use[] = {"8Rnd_B_Beneli_Pellets"};
				output[] = {"2Rnd_shotgun_74Pellets","2Rnd_shotgun_74Pellets","2Rnd_shotgun_74Pellets","2Rnd_shotgun_74Pellets"};
			};
		};
	};
	class 2Rnd_shotgun_74Slug: 8Rnd_B_Beneli_74Slug
	{
		displayName = "2Rnd. Slug";
		count = 2;
		descriptionShort = "Caliber: 12 gauge <br/>Rounds: 2 <br/>Used in: M1014";
		class ItemActions
		{
			class ReloadMag
			{
				text = "Combine to 8 rounds";
				script = "spawn player_reloadMag;";
				use[] = {"2Rnd_shotgun_74Slug","2Rnd_shotgun_74Slug","2Rnd_shotgun_74Slug","2Rnd_shotgun_74Slug"};
				output[] = {"8Rnd_B_Beneli_74Slug"};
			};
		};
	};
	class 2Rnd_shotgun_74Pellets: 8Rnd_B_Beneli_Pellets
	{
		displayName = "2Rnd. Pellets";
		count = 2;
		descriptionShort = "Caliber: 12 gauge <br/>Rounds: 2 Pellets<br/>Used in: M1014";
		class ItemActions
		{
			class ReloadMag
			{
				text = "Combine to 8 rounds";
				script = "spawn player_reloadMag;";
				use[] = {"2Rnd_shotgun_74Pellets","2Rnd_shotgun_74Pellets","2Rnd_shotgun_74Pellets","2Rnd_shotgun_74Pellets"};
				output[] = {"8Rnd_B_Beneli_Pellets"};
			};
		};
	};
	class HandGrenade;
	class TrashJackDaniels: HandGrenade
	{
		scope = 2;
		displayName = "$STR_EQUIP_NAME_34";
		model = "\dayz_equip\models\bottle_jd.p3d";
		picture = "\dayz_equip\textures\equip_bottle_jd_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_34";
		ammo = "JackDaniels";
	};
	class TrashTinCan: HandGrenade
	{
		scope = 2;
		displayName = "$STR_EQUIP_NAME_33";
		model = "\dayz_equip\models\trash_tincan.p3d";
		picture = "\dayz_equip\textures\equip_tincan_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_33";
		ammo = "TinCan";
		class ItemActions
		{
			class Crafting
			{
				text = "Melt into Bars";
				script = "spawn player_craftItem;";
				neednearby[] = {"fire"}; 
				requiretools[] = {"ItemToolbox"}; 
				output[] = {{"ItemTinBar",1}};
				input[] = {{"TrashTinCan",6}};
			};
		};
	};
	class ItemSodaEmpty: HandGrenade
	{
		scope = 2;
		displayName = "$STR_EQUIP_NAME_35";
		model = "\dayz_equip\models\soda_coke_e.p3d";
		picture = "\dayz_equip\textures\equip_soda_empty_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_35";
		ammo = "SodaCan";
		class ItemActions
		{
			class Crafting
			{
				text = "Melt into Bars";
				script = "spawn player_craftItem;";
				neednearby[] = {"fire"}; 
				requiretools[] = {"ItemToolbox"}; 
				output[] = {{"ItemAluminumBar",1}};
				input[] = {{"ItemSodaEmpty",6}};
			};
		};
	};
	class HandRoadFlare: HandGrenade
	{
		displayName = "$STR_MAG_NAME_4";
		picture = "\dayz_weapons\textures\equip_roadflare_ca.paa";
		model = "\dayz_weapons\models\roadflare";
		ammo = "RoadFlare";
		count = 10;
		descriptionShort = "$STR_MAG_DESC_4";
	};
	class ChemLightMag: HandGrenade
	{
		count = 5;
	};
	class HandChemBlue: ChemLightMag
	{
		scope = 2;
		displayName = "$STR_MAG_NAME_7";
		picture = "\dayz_weapons\textures\equip_chem_blue_ca.paa";
		model = "\dayz_weapons\models\chem_gear_blue";
		ammo = "ChemBlue";
		count = 10;
		descriptionShort = "$STR_MAG_DESC_5";
	};
	class HandChemGreen: ChemLightMag
	{
		scope = 2;
		displayName = "$STR_MAG_NAME_5";
		picture = "\dayz_weapons\textures\equip_chem_green_ca.paa";
		model = "\dayz_weapons\models\chem_gear_green";
		ammo = "ChemGreen";
		count = 10;
		descriptionShort = "$STR_MAG_DESC_5";
	};
	class HandChemRed: ChemLightMag
	{
		scope = 2;
		displayName = "$STR_MAG_NAME_6";
		picture = "\dayz_weapons\textures\equip_chem_red_ca.paa";
		model = "\dayz_weapons\models\chem_gear_red";
		ammo = "ChemRed";
		count = 10;
		descriptionShort = "$STR_MAG_DESC_5";
	};
	class BoltSteel: CA_Magazine
	{
		scope = 2;
		displayName = "$STR_MAG_NAME_3";
		model = "\dayz_weapons\models\bolt_gear";
		picture = "\dayz_weapons\textures\equip_bolt_ca.paa";
		ammo = "BoltSteel";
		count = 1;
		initSpeed = 150;
		descriptionShort = "$STR_MAG_DESC_3";
		displayNameShort = "$STR_MAG_ACTION_3";
		class ItemActions
		{
			class ReloadMag
			{
				text = "Combine to 4 pack";
				script = "spawn player_reloadMag;";
				use[] = {"BoltSteel","BoltSteel","BoltSteel","BoltSteel"};
				output[] = {"BoltSteel4pack"};
			};
		};
	};
	class BoltSteel4pack: CA_Magazine
	{
		scope = 2;
		displayName = "Steel Bolt 4 Pack";
		model = "\dayz_weapons\models\bolt_gear";
		picture = "\dayz_weapons\textures\equip_bolt_ca.paa";
		ammo = "BoltSteel";
		count = 4;
		initSpeed = 150;
		descriptionShort = "$STR_MAG_DESC_3";
		displayNameShort = "$STR_MAG_ACTION_3";
	};
};