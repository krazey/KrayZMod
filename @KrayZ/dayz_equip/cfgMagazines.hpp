class CfgMagazines
{
	class CA_Magazine;
	// TiMz - Weapon items: reddot, acog, holo & sniper
	class RedDot_DZ : CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Red Dot Scope";
		picture = "\dayz_equip\weaponvisuals\reddot.paa";
		descriptionShort = "Can be mounted on / to weapons.";
		class ItemActions {
			class AddReddot {
				text = "Assemble Red Dot Scope";
				script = "spawn player_weapon_reddot;";
				require = "ItemToolbox";
			};
		};
	};
	class ACOG_DZ : CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "ACOG Scope";
		picture = "\dayz_equip\weaponvisuals\acog.paa";
		descriptionShort = "Can be mounted on / to weapons.";
		class ItemActions {
			class AddAcog {
				text = "Assemble ACOG Scope";
				script = "spawn player_weapon_acog;";
				require = "ItemToolbox";
			};
		};
	};
	class Holo_DZ : CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Holo Scope";
		picture = "\dayz_equip\weaponvisuals\holo.paa";
		descriptionShort = "Can be mounted on / to weapons.";
		class ItemActions {
			class AddHolo {
				text = "Assemble Holo Scope";
				script = "spawn player_weapon_holo;";
				require = "ItemToolbox";
			};
		};
	};
	class Sniper_DZ : CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Sniper Scope";
		picture = "\dayz_equip\weaponvisuals\sniper.paa";
		descriptionShort = "Can be mounted on / to weapons.";
		class ItemActions {
			class AddSniper {
				text = "Assemble Sniper Scope";
				script = "spawn player_weapon_scope;";
				require = "ItemToolbox";
			};
		};
	};
	class Launcher_DZ : CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Grenade Launcher";
		picture = "\dayz_equip\weaponvisuals\launcher.paa";
		descriptionShort = "Can be mounted on / to weapons.";
		class ItemActions {
			class AddSniper {
				text = "Assemble Grenade Launcher";
				script = "spawn player_weapon_launcher;";
				require = "ItemToolbox";
			};
		};
	};
	class Suppressor_DZ : CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Suppressor";
		picture = "\dayz_equip\weaponvisuals\suppressor.paa";
		descriptionShort = "Can be mounted on / to weapons.";
		class ItemActions {
			class AddSniper {
				text = "Assemble Suppressor";
				script = "spawn player_weapon_suppressor;";
				require = "ItemToolbox";
			};
		};
	};
	// END - TiMz - Weapon items
	class 20Rnd_556x45_Stanag: CA_Magazine
	{
		scope = 2;
		displayName = "20Rnd. STANAG";
		picture = "\ca\weapons\data\equip\m_20stanag_CA.paa";
		ammo = "B_556x45_Ball";
		count = 20;
		initSpeed = 930;
		tracersEvery = 0;
		descriptionShort = "Caliber: 5.56x45 mm NATO <br/>Rounds: 20  <br/>Used in: M249 SAW, M4A1, M16A4";
	};
	class 20Rnd_762x51_DMR: CA_Magazine
	{
		scope = 2;
		displayName = "DMR mag";
		picture = "\ca\weapons\data\equip\M_US_DMR_CA.paa";
		model = "\dayz_equip\models\mag20.p3d";
		count = 20;
		ammo = "B_762x51_noTracer";
		initSpeed = 900;
		reloadMagazineSound[] = {"\ca\Weapons\Data\Sound\M21_reload_v4",0.01,1,20};
		descriptionShort = "Caliber:7.62x51 mm NATO <br/>Rounds: 20 <br/>Used in: DMR";
		class ItemActions
		{
			class ReloadMag
			{
				text = "Split into 4 x M24";
				script = "spawn player_reloadMag;";
				use[] = {"20Rnd_762x51_DMR"};
				output[] = {"5Rnd_762x51_M24","5Rnd_762x51_M24","5Rnd_762x51_M24","5Rnd_762x51_M24"};
			};
		};
	};
	class 30Rnd_556x45_Stanag: 20Rnd_556x45_Stanag
	{
		displayName = "30Rnd. STANAG";
		picture = "\ca\weapons\data\equip\m_30stanag_CA.paa";
		model = "\dayz_equip\models\mag30.p3d";
		count = 30;
		tracersEvery = 0;
		descriptionShort = "Caliber: 5.56x45 mm NATO <br/>Rounds: 30  <br/>Used in: M4A1, M249, M16A4, Mk12";
	};
	class 10x_303: CA_Magazine
	{
		scope = 2;
		displayName = "Lee Enfield Mag.";
		model = "\dayz_equip\models\mag10rnd.p3d";
		descriptionShort = "Caliber: .303<br/>Rounds: 10<br/>Used in: Lee Enfield Mk III";
		picture = "\Ca\weapons\Data\Equip\m_M24_CA.paa";
		count = 10;
		ammo = "B_303_Ball";
		initSpeed = 750;
	};
	class 5x_22_LR_17_HMR: CA_Magazine
	{
		scope = 2;
		displayName = "CZ 550 Magazine";
		picture = "\Ca\weapons\Data\Equip\m_M24_CA.paa";
		model = "\dayz_equip\models\mag5rnd.p3d";
		count = 5;
		ammo = "B_762x51_noTracer";
		initSpeed = 870;
		sound[] = {"Ca\sounds\Weapons\rifles\M24_single3",10,1,1800};
		reloadMagazineSound[] = {"Ca\sounds\Weapons\rifles\M1014-reload",0.01,1,20};
		descriptionShort = "Caliber: 7x64 mm <BR/>Rounds: 5 <BR/>Used in: CZ 550";
	};
	class 5Rnd_762x51_M24: CA_Magazine
	{
		scope = 2;
		displayName = "5Rnd. M24";
		picture = "\Ca\weapons\Data\Equip\m_M24_CA.paa";
		model = "\dayz_equip\models\mag5rnd.p3d";
		count = 5;
		ammo = "B_762x51_noTracer";
		initSpeed = 900;
		sound[] = {"\ca\Weapons\Data\Sound\M21_single_shot_v3",10,1,1600};
		reloadMagazineSound[] = {"\ca\Weapons\Data\Sound\M21_reload_v4",0.01,1,10};
		descriptionShort = "Caliber: 7.62x51mm NATO <br/>Rounds: 5 <br/>Used in: M24, M40A3";
		class ItemActions
		{
			class ReloadMag
			{
				text = "Combine for DMR";
				script = "spawn player_reloadMag;";
				use[] = {"5Rnd_762x51_M24","5Rnd_762x51_M24","5Rnd_762x51_M24","5Rnd_762x51_M24"};
				output[] = {"20Rnd_762x51_DMR"};
			};
		};
	};
	class 10Rnd_127x99_m107: CA_Magazine
	{
		scope = 2;
		displayName = "10Rnd. M107";
		ammo = "B_127x99_Ball_noTracer";
		model = "\dayz_equip\models\mag10rnd.p3d";
		count = 10;
		initSpeed = 850;
		picture = "\CA\weapons\data\Equip\M_107_CA.paa";
		descriptionShort = "Caliber: 12.7x99mm NATO <br/>Rounds: 10 <br/>Used in: M107";
	};
	class AmmoBox_300x556: CA_Magazine
	{
		scope = 2;
		displayName = "Ammo 300 x 5.56mm";
		picture = "\CA\weapons\data\equip\m_m249_ca.paa";
		model = "\ca\weapons\AmmoBoxes\Proxy_UsBasicAmmoBoxSmall.p3d";
		count = 300;
		type = "2*		256";
		descriptionShort = "Caliber: 5.56x45 mm NATO <br/>Rounds: 300";
		class ItemActions
		{
			class CreateMag1
			{
				text = "Load %1";
				script = "spawn player_loadMag;";
				outputOriented = "true";
				output[] = {"30Rnd_556x45_Stanag",10,"cfgMagazines"};
			};
			class CreateMag2: CreateMag1
			{
				output[] = {"30Rnd_556x45_G36",10,"cfgMagazines"};
			};
			class CreateMag3: CreateMag1
			{
				output[] = {"100Rnd_556x45_M249",3,"cfgMagazines"};
			};
		};
	};
	class 200Rnd_556x45_M249: CA_Magazine
	{
		scope = 2;
		displayName = "200Rnd. M249 Belt";
		picture = "\CA\weapons\data\equip\m_m249_ca.paa";
		model = "\ca\weapons\AmmoBoxes\Proxy_UsBasicAmmoBoxSmall.p3d";
		ammo = "B_556x45_Ball";
		count = 200;
		type = "2*		256";
		initSpeed = 915;
		sound[] = {"\ca\Weapons\Data\Sound\M249_1_SS",17.7828,1,1300};
		reloadMagazineSound[] = {"\ca\Weapons\Data\Sound\FAL_reload",0.01,1,20};
		tracersEvery = 4;
		lastRoundsTracer = 4;
		nameSound = "mgun";
		descriptionShort = "Caliber: 5.56x45 mm NATO <br/>Rounds: 200  <br/>Used in: M249 SAW";
	};
	class 100Rnd_762x51_M240: CA_Magazine
	{
		scope = 2;
		displayName = "100Rnd. M240";
		picture = "\CA\weapons\data\equip\m_m240_ca.paa";
		model = "\ca\weapons\AmmoBoxes\Proxy_UsBasicAmmoBoxSmall.p3d";
		count = 100;
		type = "2*		256";
		ammo = "B_762x51_Ball";
		initSpeed = 900;
		tracersEvery = 4;
		lastRoundsTracer = 4;
		nameSound = "mgun";
		descriptionShort = "Caliber: 7.62x51mm NATO <br/>Rounds: 100 <br/>Used in: M240, Mk 48 Mod 0";
	};
	class 6Rnd_45ACP: CA_Magazine
	{
		scope = 2;
		displayName = ".45 ACP";
		ammo = "B_45ACP_noCartridge_Ball";
		count = 6;
		initSpeed = 260;
		picture = "\dayz_equip\textures\equip_45acp_ca.paa";
		model = "\dayz_equip\models\ammo_acp45.p3d";
		type = 16;
		descriptionShort = "Caliber: .45 ACP<br/>Rounds: 6<br/>Used in: Revolver .45";
		class ItemActions
		{
			class ReloadMag
			{
				text = "Combine for M1911";
				script = "spawn player_reloadMag;";
				use[] = {"6Rnd_45ACP"};
				output[] = {"7Rnd_45ACP_1911"};
			};
		};
	};
	class 7Rnd_45ACP_1911: CA_Magazine
	{
		scope = 2;
		displayName = "M1911 Mag.";
		ammo = "B_45ACP_Ball";
		count = 7;
		initSpeed = 260;
		picture = "\dayz_equip\textures\equip_1911_ca.paa";
		model = "\dayz_equip\models\ammo_1911.p3d";
		type = 16;
		descriptionShort = "Caliber: .45 ACP <br/>Rounds: 7 <br/>Used in: M1911A1";
		class ItemActions
		{
			class ReloadMag
			{
				text = "Combine for Revolver";
				script = "spawn player_reloadMag;";
				use[] = {"7Rnd_45ACP_1911"};
				output[] = {"6Rnd_45ACP"};
			};
		};
	};
	class SkinBase: CA_Magazine
	{
		scope = 0;
		count = 1;
		type = 256;
		displayName = "Clothes";
		model = "\dayz_equip\models\cloth_parcel.p3d";
		picture = "\dayz_equip\textures\equip_cloth_parcel_ca.paa";
		descriptionShort = "Clothes Parcel";
		class ItemActions
		{
			class Use
			{
				text = "Wear %1";
				script = "spawn player_wearClothes;";
			};
		};
	};
	class Skin_Sniper1_DZ: SkinBase
	{
		scope = 2;
		displayName = "$STR_EQUIP_NAME_43";
		descriptionShort = "$STR_EQUIP_DESC_43";
	};
	class Skin_Sniper2_DZ: SkinBase
	{
		scope = 2;
		displayName = "$STR_EQUIP_NAME_57";
		descriptionShort = "$STR_EQUIP_DESC_57";
	};
	class Skin_Rocket_DZ: SkinBase
	{
		scope = 2;
		displayName = "Officer Suit";
		descriptionShort = "Officer Suit";
	};
	class Skin_RU_Policeman_DZ: SkinBase
	{
		scope = 2;
		displayName = "Police Officer Uniform";
		descriptionShort = "Police Officer Uniform";
	};
	class Skin_Pilot_EP1_DZ: SkinBase
	{
		scope = 2;
		displayName = "Pilot Uniform";
		descriptionShort = "Pilot Uniform";
	};
	class Skin_Haris_Press_EP1_DZ: SkinBase
	{
		scope = 2;
		displayName = "Press Uniform";
		descriptionShort = "Press Uniform";
	};
	class Skin_Ins_Soldier_GL_DZ: SkinBase
	{
		scope = 2;
		displayName = "Terrorist Uniform";
		descriptionShort = "Terrorist Uniform";
	};
	class Skin_Functionary1_EP1_DZ: SkinBase
	{
		scope = 2;
		displayName = "Business Suit";
		descriptionShort = "Business Suit";
	};
	class Skin_Priest_DZ: SkinBase
	{
		scope = 2;
		displayName = "Priest Outfit";
		descriptionShort = "Priest Outfit";
	};
	class Skin_Rocker2_DZ: SkinBase
	{
		scope = 2;
		displayName = "Rocker Outfit";
		descriptionShort = "Rebel Uniform";
	};	
	class Skin_Bandit1_DZ: SkinBase
	{
		scope = 2;
		displayName = "Bandit Outfit";
		descriptionShort = "Bandit Outfit";
	};
	class Skin_Admin_DZ: SkinBase
	{
		scope = 2;
		displayName = "Admin Outfit";
		descriptionShort = "Admin Outfit";
	};
	class Skin_BanditW1_DZ: SkinBase
	{
		scope = 2;
		displayName = "Bandit (female)";
		descriptionShort = "Bandit (female)";
	};
	class Skin_BanditW2_DZ: SkinBase
	{
		scope = 2;
		displayName = "Bandit Camo (female)";
		descriptionShort = "Bandit Camo (female)";
	};
	class Skin_SurvivorW3_DZ: SkinBase
	{
		scope = 2;
		displayName = "Camo Pants (female)";
		descriptionShort = "Camo Pants (female)";
	};
	class Skin_SurvivorW2_DZ: SkinBase
	{
		scope = 2;
		displayName = "Civilian (female)";
		descriptionShort = "Civilian (female)";
	};
	class Skin_SurvivorWpink_DZ: SkinBase
	{
		scope = 2;
		displayName = "Civilian Pink (female)";
		descriptionShort = "Civilian Pink (female)";
	};
	class Skin_SurvivorWcombat_DZ: SkinBase
	{
		scope = 2;
		displayName = "Camo (female)";
		descriptionShort = "Camo Clothes (female)";
	};
	class Skin_SurvivorWdesert_DZ: SkinBase
	{
		scope = 2;
		displayName = "Desert (female)";
		descriptionShort = "Desert Clothes (female)";
	};
	class Skin_SurvivorWurban_DZ: SkinBase
	{
		scope = 2;
		displayName = "Urban (female)";
		descriptionShort = "Urban Clothes (female)";
	};
	class Skin_TK_INS_Warlord_EP1_DZ: SkinBase
	{
		scope = 2;
		displayName = "Takistani Warlord";
		descriptionShort = "Takistani Warlord";
	};
	class Skin_TK_INS_Soldier_EP1_DZ: SkinBase
	{
		scope = 2;
		displayName = "Takistani Soldier";
		descriptionShort = "Takistani Soldier";
	};
	class Skin_CZ_Special_Forces_GL_DES_EP1_DZ: SkinBase
	{
		scope = 2;
		displayName = "Special Forces";
		descriptionShort = "Special Forces";
	};
	class Skin_Drake_Light_DZ: SkinBase
	{
		scope = 2;
		displayName = "Desert Camo";
		descriptionShort = "Desert Camo";
	};
	class Skin_Soldier_Bodyguard_AA12_PMC_DZ: SkinBase
	{
		scope = 2;
		displayName = "Bodyguard";
		descriptionShort = "Bodyguard";
	};
	class Skin_Soldier_Sniper_PMC_DZ: SkinBase
	{
		scope = 2;
		displayName = "Marksman";
		descriptionShort = "Marksman";
	};
	class Skin_Soldier_TL_PMC_DZ: SkinBase
	{
		scope = 2;
		displayName = "Team Leader";
		descriptionShort = "Team Leader";
	};
	class Skin_Camo1_DZ: SkinBase
	{
		scope = 2;
		displayName = "$STR_EQUIP_NAME_44";
		descriptionShort = "$STR_EQUIP_DESC_44";
	};
	class Skin_Camo2_DZ : SkinBase {
		scope = 2;
		displayName = "$STR_EQUIP_NAME_58";
		descriptionShort = "$STR_EQUIP_DESC_58";
	};
	class Skin_Camo3_DZ : SkinBase {
		scope = 2;
		displayName = "$STR_EQUIP_NAME_59";
		descriptionShort = "$STR_EQUIP_DESC_59";
	};
	class Skin_Camo4_DZ : SkinBase {
		scope = 2;
		displayName = "$STR_EQUIP_NAME_60";
		descriptionShort = "$STR_EQUIP_DESC_60";
	};
	class Skin_Camo5_DZ : SkinBase {
		scope = 2;
		displayName = "$STR_EQUIP_NAME_61";
		descriptionShort = "$STR_EQUIP_DESC_61";
	};
	class Skin_Survivor2_DZ: SkinBase
	{
		scope = 2;
		displayName = "$STR_EQUIP_NAME_45";
		descriptionShort = "$STR_EQUIP_DESC_45";
	};
	class Skin_Soldier1_DZ: SkinBase
	{
		scope = 2;
		displayName = "$STR_EQUIP_NAME_46";
		descriptionShort = "$STR_EQUIP_DESC_46";
	};
	class Skin_Net_DZ : SkinBase {
		scope = 2;
		displayName = "$STR_EQUIP_NAME_56";
		descriptionShort = "$STR_EQUIP_DESC_56";
		class ItemActions {
			class Crafting
			{
				text = "Camo Net";
				script = "spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox"}; 
				input[] = {{"Skin_Net_DZ",3},{"ItemTankTrap",1}};
				output[] = {{"ItemCamoNet",1}};
			};
			class Crafting1
			{
				text = "Watch Tower";
				script = "spawn player_craftItem1;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox"}; 
				input[] = {{"Skin_Net_DZ",4},{"ItemHBarrier",2}};
				output[] = {{"ItemWatchTower",1}};
			};
			class Crafting2
			{
				text = "Craft M240 Nest";
				script = "spawn player_craftItem2;";
				neednearby[] = {};
				requiretools[] = {"ItemEtool","ItemToolbox","M240_DZ"};
				output[] = {{"m240_nest_kit",1}};
				input[] = {{"ItemSandBagNest",1},{"Skin_Net_DZ",1}};
				consumeweapons[] = {"M240_DZ"};
			};
		};
	};
	class ItemBandage: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 16;
		displayName = "$STR_EQUIP_NAME_7";
		model = "\dayz_equip\models\fad.p3d";
		picture = "\dayz_equip\textures\equip_fad_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_7";
		class ItemActions
		{
			class Use
			{
				text = "$STR_BANDAGE_SELF";
				script = "spawn player_useMeds;";
			};
		};
	};
	class PartFueltank: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = "(256 * 4)";
		displayName = "$STR_EQUIP_NAME_8";
		model = "\dayz_equip\models\fueltank.p3d";
		picture = "\dayz_equip\textures\equip_fueltank_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_8";
	};
	class PartWheel: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = "(256 * 6)";
		displayName = "$STR_EQUIP_NAME_9";
		model = "\dayz_equip\models\wheel.p3d";
		picture = "\dayz_equip\textures\equip_wheel_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_9";
	};
	class PartGeneric: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = "(256 * 2)";
		displayName = "$STR_EQUIP_NAME_10";
		model = "\dayz_equip\models\genericparts.p3d";
		picture = "\dayz_equip\textures\equip_genericparts_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_10";
		class ItemActions {
			class Crafting
			{
				text = "Metal Pole";
				script = "spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox"};  
				input[] = {{"PartGeneric",2},{"ItemTankTrap",2}};
				output[] = {{"ItemPole",1}};
			};
			class Crafting1
			{
				text = "Sandbag Nest";
				script = "spawn player_craftItem1;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox"};  
				input[] = {{"ItemSandbag",2},{"PartWoodPile",3},{"PartGeneric",1}};
				output[] = {{"ItemSandBagNest",1}};
			};
			class Crafting2
			{
				text = "Gate";
				script = "spawn player_craftItem2;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox"}; 
				input[] = {{"ItemWire",1},{"PartGeneric",2}};
				output[] = {{"ItemGate",1}};
			};
			class Crafting3
			{
				text = "Scaffolding";
				script = "spawn player_craftItem3;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox"};  
				input[] = {{"PartWoodPile",5},{"PartGeneric",3}};
				output[] = {{"ItemScaffolding",1}};
			};
			class Crafting4
			{
				text = "Small Ladder";
				script = "spawn player_craftItem4;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox"}; 
				input[] = {{"PartGeneric",1},{"ItemTankTrap",2}};
				output[] = {{"ItemLadderSmall",1}};
			};
			class Crafting5
			{
				text = "Large Ladder";
				script = "spawn player_craftItem5;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox"}; 
				input[] = {{"PartGeneric",2},{"ItemTankTrap",4}};
				output[] = {{"ItemLadderLarge",1}};
			};
			class Crafting6
			{
				text = "Deer Stand";
				script = "spawn player_craftItem6;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox"}; 
				input[] = {{"PartWoodPile",6},{"PartGeneric",2}};
				output[] = {{"ItemDeerStand",1}};
			};
			class Crafting7
			{
				text = "Craft Rusty Gate";
				script = "spawn player_craftItem7;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox","ItemCrowbar"};
				input[] = {{"ItemPole",2},{"PartGeneric",2},{"ItemTankTrap",2}};
				output[] = {{"rusty_gate_kit",1}};
			};
		};
	};
	class ItemCorrugated : CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Corrugated Fence";
		model = "\dayz_equip\models\genericparts.p3d";
		picture = "\dayz_equip\textures\equip_genericparts_ca.paa";
		descriptionShort = "Corrugated Fence";
		class ItemActions {
			class Build
			{
				text = "Build Corrugated Fence";
				script = "spawn player_build;";
				requiretools[] = {"ItemEtool","ItemToolbox"};
				create = "Fence_corrugated_DZ";
			};
			class Crafting
			{
				text = "Craft Wooden Shed";
				script = "spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox","ItemCrowbar"};
				output[] = {{"wooden_shed_kit",1}};
				input[] = {{"ItemCorrugated",2},{"PartWoodPile",5}};
			};
			class Crafting1
			{
				text = "Craft Outhouse";
				script = "spawn player_craftItem1;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox","ItemCrowbar"};
				output[] = {{"outhouse_kit",1}};
				input[] = {{"ItemCorrugated",1},{"PartWoodPile",5},{"ItemTrashToiletpaper",1}};
			};
			class Crafting2
			{
				text = "Craft Storage Shed";
				script = "spawn player_craftItem2;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox","ItemCrowbar"};
				output[] = {{"storage_shed_kit",1}};
				input[] = {{"ItemCorrugated",4},{"PartWoodPile",3}};
			};
		};
	};
	class ItemPole: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Metal Pole";
		model = "\dayz_equip\models\genericparts.p3d";
		picture = "\dayz_equip\textures\equip_genericparts_ca.paa";
		descriptionShort = "Metal Pole";
		class ItemActions {
			class Crafting
			{
				text = "Craft Corrugated Fence";
				script = "spawn player_craftItem;";
				neednearby[] = {"fire"};
				requiretools[] = {"ItemToolbox","ItemCrowbar"};
				output[] = {{"ItemCorrugated",1}};
				input[] = {{"ItemPole",1},{"PartGeneric",4},{"PartWoodPile",2}};
			};
			class Crafting1
			{
				text = "Craft Rusty Gate";
				script = "spawn player_craftItem1;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox","ItemCrowbar"};
				output[] = {{"rusty_gate_kit",1}};
				input[] = {{"ItemPole",2},{"PartGeneric",2},{"ItemTankTrap",2}};
			};
			class Crafting2
			{
				text = "30m Plot";
				script = "spawn player_craftItem2;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox"};
				output[] = {{"30m_plot_kit",1}};
				input[] = {{"ItemPole",1},{"ItemGoldBar10oz",1}};
			};
			class Crafting3 {
				text = "Deconstruct";
				script = "spawn player_craftItem3;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox"}; 
				input[] = {{"ItemPole",1}};
				output[] = {{"PartGeneric",2},{"ItemTankTrap",2}};
			};
		};
	};
	class PartEngine: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = "(256 * 6)";
		displayName = "$STR_EQUIP_NAME_11";
		model = "\dayz_equip\models\engine.p3d";
		picture = "\dayz_equip\textures\equip_engine_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_11";
	};
	class PartWoodPile: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "$STR_EQUIP_NAME_40";
		model = "\dayz_equip\models\woodPile.p3d";
		picture = "\dayz_equip\textures\equip_woodPile_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_40";
		class ItemActions {
			class Build
			{
				text = "Build Wood Gate";
				script = "spawn player_build;";
				requiretools[] = {"ItemToolbox"};
				create = "WoodGate_DZ";
			};
			class Crafting
			{
				text = "Craft Arrows";
				script = "spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox"}; 
				output[] = {{"WoodenArrow",3}};
				input[] = {{"PartWoodPile",1},{"ItemTrashRazor",1}};
			};
			class Crafting1 {
				text = "Sandbag Nest";
				script = "spawn player_craftItem1;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox"};  
				input[] = {{"ItemSandbag",2},{"PartWoodPile",3},{"PartGeneric",1}};
				output[] = {{"ItemSandBagNest",1}};
			};
			class Crafting2 {
				text = "Fortified Round Fence";
				script = "spawn player_craftItem2;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox"}; 
				input[] = {{"ItemSandbagRound",2},{"PartWoodPile",2}};
				output[] = {{"ItemFortSandbagRound",1}};
			};
			class Crafting3 {
				text = "Deer Stand";
				script = "spawn player_craftItem3;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox"};  
				input[] = {{"PartWoodPile",6},{"PartGeneric",2}};
				output[] = {{"ItemDeerStand",1}};
			};
			class Crafting4 {
				text = "Scaffolding";
				script = "spawn player_craftItem4;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox"}; 
				input[] = {{"PartWoodPile",5},{"PartGeneric",3}};
				output[] = {{"ItemScaffolding",1}};
			};
		};
	};
	class PartVRotor: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = "(256 * 6)";
		displayName = "$STR_EQUIP_NAME_32";
		model = "\dayz_equip\models\vrotor.p3d";
		picture = "\dayz_equip\textures\equip_vrotor_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_32";
	};
	class PartGlass: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = "(256 * 2)";
		displayName = "$STR_EQUIP_NAME_30";
		model = "\dayz_equip\models\carglass.p3d";
		picture = "\dayz_equip\textures\equip_carglass_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_30";
	};
	class TrapBear: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Bear Trap";
		model = "\dayz_equip\models\bear_trap_gear.p3d";
		picture = "\dayz_equip\textures\equip_bear_trap_ca.paa";
		descriptionShort = "Place to add a bear trap";
		class ItemActions
		{
			class Build {
				text = "Place Trap";
				script = "spawn player_setTrap;";
				requiretools[] = {"ItemEtool"};
				create = "BearTrap_DZ";
			};
		};
	};
	class FoodDrink: CA_Magazine
	{
		isWater = 1;
		count = 1;
		type = 256;
		class ItemActions
		{
			class Drink
			{
				text = "$STR_ACTIONS_DRINK";
				script = "spawn player_drink;";
			};
		};
	};
	class ItemWaterbottle: FoodDrink
	{
		scope = 2;
		refillable = 1;
		sfx = "drink";
		displayName = "$STR_EQUIP_NAME_12";
		model = "\dayz_equip\models\waterbottle_gear.p3d";
		picture = "\dayz_equip\textures\equip_waterbottle_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_12";
	};
	class ItemWaterbottleUnfilled: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "$STR_EQUIP_NAME_13";
		model = "\dayz_equip\models\waterbottle_gear.p3d";
		picture = "\dayz_equip\textures\equip_waterbottle_empty_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_13";
		class ItemActions
		{
			class Fill
			{
				text = "$STR_ACTIONS_FILL_W";
				script = "spawn player_fillWater;";
			};
		};
	};
	class ItemSodaCoke: FoodDrink
	{
		scope = 2;
		sfx = "soda";
		displayName = "$STR_EQUIP_NAME_36a";
		model = "\dayz_equip\models\soda_coke.p3d";
		picture = "\dayz_equip\textures\equip_soda_coke_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_36";
	};
	class ItemSodaPepsi: ItemSodaCoke
	{
		displayName = "$STR_EQUIP_NAME_36b";
		model = "\dayz_equip\models\soda_pepsi.p3d";
		picture = "\dayz_equip\textures\equip_soda_pepsi_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_36";
	};
	class ItemSodaMdew: ItemSodaCoke
	{
		displayName = "$STR_EQUIP_NAME_37";
		model = "\dayz_equip\models\soda_mdew.p3d";
		picture = "\dayz_equip\textures\equip_soda_mdew_ca.paa";
		descriptionShort = "$STR_EQUIP_NAME_37";
	};
	class ItemSodaRbull: ItemSodaCoke
	{
		displayName = "Soda Can (Red Bull)";
		model = "\dayz_equip\models\soda_rbull.p3d";
		picture = "\dayz_equip\textures\equip_soda_rbull_ca.paa";
		descriptionShort = "$STR_EQUIP_NAME_37";
	};
	class ItemBriefcase: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = "(256 * 3)";
		displayName = "Briefcase";
		// model = "\misc3\briefcase.p3d";
		picture = "\dayz_equip\textures\equip_bar_gold_CA.paa";
		// TODO: Needs picture and model
		descriptionShort = "Briefcase full of Gold Bars";
	};
	class ItemGoldBar: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Gold";
		model = "\dayz_equip\models\gold_bar.p3d";
		picture = "\dayz_equip\textures\equip_bar_gold_CA.paa";
		descriptionShort = "Gold Bar";
		class ItemActions
		{
			class Crafting
			{
				text = "Smelt 10oz bar";
				script = "spawn player_craftItem;";
				neednearby[] = {"fire"};
				requiretools[] = {"ItemToolbox"}; 
				output[] = {{"ItemGoldBar10oz",1}};
				input[] = {{"ItemGoldBar",10}};
				
			};
		};
	};
	class ItemGoldBar10oz: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "10oz Gold";
		model = "\dayz_equip\models\gold_bar_10oz.p3d";
		picture = "\dayz_equip\textures\equip_bar_gold10oz_CA.paa";
		descriptionShort = "10oz Gold Bar";
		class ItemActions
		{
			class Crafting
			{
				text = "Smelt 1oz bars";
				script = "spawn player_craftItem;";
				neednearby[] = {"fire"};
				requiretools[] = {"ItemToolbox"}; 
				output[] = {{"ItemGoldBar",10}};
				input[] = {{"ItemGoldBar10oz",1}};
			};
			class Crafting1
			{
				text = "30m Plot";
				script = "spawn player_craftItem1;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox"};
				output[] = {{"30m_plot_kit",1}};
				input[] = {{"ItemPole",1},{"ItemGoldBar10oz",1}};
			};
		};
	};
	class ItemSilverBar: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Silver";
		model = "\dayz_equip\models\silver_bar.p3d";
		picture = "\dayz_equip\textures\equip_bar_silver_CA.paa";
		descriptionShort = "Silver Bar";
		class ItemActions
		{
			class Crafting
			{
				text = "Smelt 10oz bar";
				script = "spawn player_craftItem;";
				neednearby[] = {"fire"};
				requiretools[] = {"ItemToolbox"}; 
				output[] = {{"ItemSilverBar10oz",1}};
				input[] = {{"ItemSilverBar",10}};
			};
		};
	};
	class ItemSilverBar10oz: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "10oz Silver";
		model = "\dayz_equip\models\silver_bar_10oz.p3d";
		picture = "\dayz_equip\textures\equip_bar_silver10oz_CA.paa";
		descriptionShort = "10oz Silver Bar";
		class ItemActions
		{
			class Crafting
			{
				text = "Smelt 1oz bars";
				script = "spawn player_craftItem;";
				neednearby[] = {"fire"};
				requiretools[] = {"ItemToolbox"}; 
				output[] = {{"ItemSilverBar",10}};
				input[] = {{"ItemSilverBar10oz",1}};
			};
		};
	};
	class ItemCopperBar: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Copper";
		model = "\dayz_equip\models\copper_bar.p3d";
		picture = "\dayz_equip\textures\equip_bar_copper_CA.paa";
		descriptionShort = "Copper Bar";
		class ItemActions
		{
			class Crafting
			{
				text = "Smelt 10oz bar";
				script = "spawn player_craftItem;";
				neednearby[] = {"fire"};
				requiretools[] = {"ItemToolbox"}; 
				output[] = {{"ItemCopperBar10oz",1}};
				input[] = {{"ItemCopperBar",10}};
			};
		};
	};
	class ItemCopperBar10oz: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "10oz Copper";
		model = "\dayz_equip\models\copper_bar_10oz.p3d";
		picture = "\dayz_equip\textures\equip_bar_copper10oz_CA.paa";
		descriptionShort = "10oz Copper Bar";
		class ItemActions
		{
			class Crafting
			{
				text = "Smelt 1oz bars";
				script = "spawn player_craftItem;";
				neednearby[] = {"fire"};
				requiretools[] = {"ItemToolbox"}; 
				output[] = {{"ItemCopperBar",10}};
				input[] = {{"ItemCopperBar10oz",1}};
			};
		};
	};
	class ItemBronzeBar: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Bronze";
		model = "\dayz_equip\models\bronze_bar.p3d";
		picture = "\dayz_equip\textures\equip_bar_bronze_CA.paa";
		descriptionShort = "Bronze Bar";
	};
	class ItemAluminumBar: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Aluminum";
		model = "\dayz_equip\models\aluminum_bar.p3d";
		picture = "\dayz_equip\textures\equip_bar_aluminum_CA.paa";
		descriptionShort = "Aluminum Bar";
		
	};
	class ItemAluminumBar10oz: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "10oz Aluminum";
		model = "\dayz_equip\models\aluminum_bar.p3d";
		picture = "\dayz_equip\textures\equip_bar_aluminum_CA.paa";
		descriptionShort = "10oz Aluminum Bar";
		class ItemActions
		{
			class Crafting
			{
				text = "Smelt 1oz bars";
				script = "spawn player_craftItem;";
				neednearby[] = {"fire"};
				requiretools[] = {"ItemToolbox"}; 
				output[] = {{"ItemAluminumBar",10}};
				input[] = {{"ItemAluminumBar10oz",1}};
			};
		};
	};
	class ItemTinBar: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Tin";
		model = "\dayz_equip\models\tin_bar.p3d";
		picture = "\dayz_equip\textures\equip_bar_tin_CA.paa";
		descriptionShort = "Tin Bar";
		
	};
	class ItemTinBar10oz: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "10oz Tin";
		model = "\dayz_equip\models\tin_bar.p3d";
		picture = "\dayz_equip\textures\equip_bar_tin_CA.paa";
		descriptionShort = "10oz Tin Bar";
		class ItemActions
		{
			class Crafting
			{
				text = "Smelt 1oz bars";
				script = "spawn player_craftItem;";
				neednearby[] = {"fire"};
				requiretools[] = {"ItemToolbox"}; 
				output[] = {{"ItemTinBar",10}};
				input[] = {{"ItemTinBar10oz",1}};
			};
		};
	};
	class ItemZombieParts: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = "(256 * 2)";
		displayName = "Zombie Parts";
		model = "\dayz_equip\models\zombie_parts_bag_v2.p3d";
		picture = "\dayz_equip\textures\parts_bag_texture3c_CA.paa";
		descriptionShort = "Zombie Parts in a Bag";

	};
	class ItemEpinephrine: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "$STR_EQUIP_NAME_14";
		model = "\dayz_equip\models\epi.p3d";
		picture = "\dayz_equip\textures\equip_epi_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_14";
	};
	class ItemMorphine: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "$STR_EQUIP_NAME_15";
		model = "\dayz_equip\models\morphine.p3d";
		picture = "\dayz_equip\textures\equip_morphine_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_15";
		class ItemActions
		{
			class Use
			{
				text = "$STR_TAKE_MORPHINE";
				script = "spawn player_useMeds;";
			};
		};
	};
	class ItemHeatPack: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "$STR_EQUIP_NAME_42";
		model = "\dayz_equip\models\Heat_pack.p3d";
		picture = "\dayz_equip\textures\equip_heat_pack_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_42";
		class ItemActions
		{
			class Use
			{
				text = "$STR_ACTIONS_HEATPACK";
				script = "spawn player_useMeds;";
			};
		};
	};
	class ItemBloodbag: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "$STR_EQUIP_NAME_16";
		model = "\dayz_equip\models\bloodbag.p3d";
		picture = "\dayz_equip\textures\equip_bloodbag_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_16";
	};
	class ItemAntibiotic: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "$STR_EQUIP_NAME_17";
		model = "\dayz_equip\models\med_antibiotic_gear.p3d";
		picture = "\dayz_equip\textures\equip_antibiotics_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_17";
		class ItemActions
		{
			class Use
			{
				text = "$STR_TAKE_ANTIBIOTIC";
				script = "spawn player_useMeds;";
			};
		};
	};
	class ItemPainkiller: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "$STR_EQUIP_NAME_18";
		model = "\dayz_equip\models\med_painkiller_gear.p3d";
		picture = "\dayz_equip\textures\equip_painkiller_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_18";
		class ItemActions
		{
			class Use
			{
				text = "$STR_TAKE_PAINKILLER";
				script = "spawn player_useMeds;";
			};
		};
	};
	class ItemOilBarrel: CA_Magazine
	{
		scope = 2;
		count = 1;
		// fuelQuantity = 20;
		type = "(256 * 6)";
		displayName = "Oil Barrel";
		model = "\dayz_equip\models\oil_drum_model.p3d";
		picture = "\dayz_equip\textures\equip_oil_drum_model_ca.paa";
		descriptionShort = "210 litres of Oil in a Barrel";
	};
	class ItemFuelBarrel: CA_Magazine
	{
		scope = 2;
		count = 1;
		fuelQuantity = 210;
		type = "(256 * 6)";
		displayName = "Fuel Barrel";
		model = "\dayz_equip\models\oil_drum_model.p3d";
		picture = "\dayz_equip\textures\equip_oil_drum_model_ca.paa";
		descriptionShort = "210 litres of fuel in a Barrel";
	};
	class ItemFuelBarrelEmpty: ItemFuelBarrel
	{
		scope = 2;
		count = 1;
		fuelQuantity = 0;
		type = "(256 * 6)";
		displayName = "Fuel Barrel (Empty)";
		picture = "\dayz_equip\textures\equip_oil_drum_model_ca.paa";
		descriptionShort = "210 litres of fuel in a Barrel (Empty)";
	}; 
	class ItemJerrycan: CA_Magazine
	{
		scope = 2;
		count = 1;
		fuelQuantity = 20;
		type = "(256 * 3)";
		displayName = "$STR_EQUIP_NAME_19";
		model = "\dayz_equip\models\jerrycan.p3d";
		picture = "\dayz_equip\textures\equip_jerrycan_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_19";
	};
	class ItemJerrycanEmpty: ItemJerrycan
	{
		fuelQuantity = 0;
		type = "(256 * 3)";
		displayName = "$STR_EQUIP_NAME_39";
		picture = "\dayz_equip\textures\equip_jerrycan_e_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_39";
	};
	class bulk: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = "(256 * 6)";
		displayName = "Supply Crate";
		model = "\dayz_equip\models\supply_crate.p3d";
		picture = "\dayz_equip\textures\equip_wooden_crate_ca.paa";
		descriptionShort = "12 x Random Item";
	};
	class bulk_NVGoggles: bulk
	{
		descriptionShort = "12 x NV Goggles";
		class ItemActions
		{
			class CreateMags
			{
				text = "Open %1";
				script = "spawn player_loadCrate;";
				output[] = {"NVGoggles",12,"weapon"};
				// types magazine, weapon, backpack
			};
		};
	};
	class bulk_DZ_Backpack_EP1: bulk
	{
		descriptionShort = "4 x DZ_Backpack_EP1";
		class ItemActions
		{
			class CreateMags
			{
				text = "Open %1";
				script = "spawn player_loadCrate;";
				output[] = {"DZ_Backpack_EP1",4,"backpack"};
				// types magazine, weapon, backpack
			};
		};
	};
	class bulk_30Rnd_9x19_MP5SD: bulk
	{
		descriptionShort = "12 x 30Rnd_9x19_MP5SD";
		class ItemActions
		{
			class CreateMags
			{
				text = "Open %1";
				script = "spawn player_loadCrate;";
				output[] = {"30Rnd_9x19_MP5SD",12,"magazine"};
			};
		};
	};
	class bulk_15Rnd_9x19_M9SD: bulk
	{
		descriptionShort = "12 x 15Rnd_9x19_M9SD";
		class ItemActions
		{
			class CreateMags
			{
				text = "Open %1";
				script = "spawn player_loadCrate;";
				output[] = {"15Rnd_9x19_M9SD",12,"magazine"};
			};
		};
	};
	class bulk_30Rnd_556x45_StanagSD: bulk
	{
		descriptionShort = "12 x 30Rnd_556x45_StanagSD";
		class ItemActions
		{
			class CreateMags
			{
				text = "Open %1";
				script = "spawn player_loadCrate;";
				output[] = {"30Rnd_556x45_StanagSD",12,"magazine"};
			};
		};
	};
	class bulk_ItemSandbag: bulk
	{
		descriptionShort = "12 x SandBag";
		class ItemActions
		{
			class CreateMags
			{
				text = "Open %1";
				script = "spawn player_loadCrate;";
				output[] = {"ItemSandbag",12,"magazine"};
			};
		};
	};
	class bulk_ItemGPS: bulk
	{
		descriptionShort = "12 x GPS";
		class ItemActions
		{
			class CreateMags
			{
				text = "Open %1";
				script = "spawn player_loadCrate;";
				output[] = {"ItemGPS",12,"weapon"};
			};
		};
	};
	class bulk_ItemMap: bulk
	{
		descriptionShort = "12 x Map";
		class ItemActions
		{
			class CreateMags
			{
				text = "Open %1";
				script = "spawn player_loadCrate;";
				output[] = {"ItemMap",12,"weapon"};
			};
		};
	};
	class bulk_ItemEtool: bulk
	{
		descriptionShort = "12 x E-Tool";
		class ItemActions
		{
			class CreateMags
			{
				text = "Open %1";
				script = "spawn player_loadCrate;";
				output[] = {"ItemEtool",12,"weapon"};
			};
		};
	};
	class bulk_17Rnd_9x19_glock17: bulk
	{
		descriptionShort = "12 x 17Rnd_9x19_glock17";
		class ItemActions
		{
			class CreateMags
			{
				text = "Open %1";
				script = "spawn player_loadCrate;";
				output[] = {"17Rnd_9x19_glock17",12,"magazine"};
			};
		};
	};
	
	// BUILDING KITS
	class 30m_plot_kit: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "30 Meter Plot";
		descriptionShort = "30 Meter Plot";
		model = "\dayz_equip\models\supply_crate.p3d";
		picture = "\dayz_equip\textures\equip_30m_plot_kit.paa";
		class ItemActions
		{
			class Build
			{
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				requiretools[] = {"ItemEtool","ItemToolbox"};
				create = "Plastic_Pole_EP1_DZ";
			};
			class Crafting1 {
				text = "Deconstruct";
				script = "spawn player_craftItem1;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox"}; 
				input[] = {{"30m_plot_kit",1}};
				output[] = {{"ItemPole",1},{"ItemGoldBar10oz",1}};
			};
		};
	};
	class wooden_shed_kit: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Nice Wooden Shed";
		descriptionShort = "Nice Wooden Shed";
		model = "\dayz_equip\models\supply_crate.p3d";
		picture = "\dayz_equip\textures\equip_wooden_crate_ca.paa";
		class ItemActions
		{
			class Build
			{
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				requiretools[] = {"ItemEtool","ItemToolbox"};
				create = "Wooden_shed_DZ";
			};
		};
	};
	class wood_shack_kit: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Wood Shack";
		descriptionShort = "Wood Shack";
		model = "\dayz_equip\models\supply_crate.p3d";
		picture = "\dayz_equip\textures\equip_wooden_crate_ca.paa";
		class ItemActions
		{
			class Build
			{
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				requiretools[] = {"ItemEtool","ItemToolbox"};
				create = "WoodShack_DZ";
			};
		};
	};
	class m240_nest_kit: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "M240 Nest";
		descriptionShort = "M240 Nest";
		model = "\dayz_equip\models\supply_crate.p3d";
		picture = "\dayz_equip\textures\equip_wooden_crate_ca.paa";
		class ItemActions
		{
			class Build
			{
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				requiretools[] = {"ItemEtool","ItemToolbox"};
				create = "M240Nest_DZ";
			};
		};
	};
	class sun_shade_kit: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Canvas Sun Shade";
		descriptionShort = "Canvas Sun Shade";
		model = "\dayz_equip\models\supply_crate.p3d";
		picture = "\dayz_equip\textures\equip_wooden_crate_ca.paa";
		class ItemActions
		{
			class Build
			{
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				requiretools[] = {"ItemEtool","ItemToolbox"};
				create = "CanvasHut_DZ";
			};
		};
	};
	class park_bench_kit: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Wood Bench";
		descriptionShort = "Wood Bench";
		model = "\dayz_equip\models\supply_crate.p3d";
		picture = "\dayz_equip\textures\equip_wooden_crate_ca.paa";
		class ItemActions
		{
			class Build
			{
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				requiretools[] = {"ItemEtool","ItemToolbox"};
				create = "ParkBench_DZ";
			};
		};
	};
	class rusty_gate_kit: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Rusty Gate";
		descriptionShort = "Rusty Gate";
		model = "\dayz_equip\models\supply_crate.p3d";
		picture = "\dayz_equip\textures\equip_wooden_crate_ca.paa";
		class ItemActions
		{
			class Build
			{
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				requiretools[] = {"ItemEtool","ItemToolbox"};
				create = "MetalGate_DZ";
			};
		};
	};
	class outhouse_kit: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Outhouse";
		descriptionShort = "Outhouse";
		model = "\dayz_equip\models\supply_crate.p3d";
		picture = "\dayz_equip\textures\equip_wooden_crate_ca.paa";
		class ItemActions
		{
			class Build
			{
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				requiretools[] = {"ItemEtool","ItemToolbox"};
				create = "OutHouse_DZ";
			};
		};
	};
	class storage_shed_kit: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Storage Shed";
		descriptionShort = "Storage Shed";
		model = "\dayz_equip\models\supply_crate.p3d";
		picture = "\dayz_equip\textures\equip_storageshed.paa";
		class ItemActions
		{
			class Build
			{
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				requiretools[] = {"ItemEtool","ItemToolbox"};
				create = "StorageShed_DZ";
			};
		};
	};
	class ItemGenerator: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = "(256 * 6)";
		displayName = "$STR_EQUIP_NAME_31";
		model = "\dayz_equip\models\generator_gear.p3d";
		picture = "\dayz_equip\textures\equip_generator_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_31";
		class ItemActions
		{
			class Build
			{
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				requiretools[] = {"ItemToolbox"};
				create = "Generator_DZ";
			};
		}; 
	};
	// Custom player vault
	class ItemVault: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = "(256 * 6)";
		displayName = "Safe";
		model = "\dayz_equip\models\safe1_onside.p3d";
		picture = "\dayz_equip\textures\equip_safe_ca.paa";
		descriptionShort = "Personal Safe";
		class ItemActions
		{
			class Pitch
			{
				text = "Place Safe";
				script = "spawn player_vaultPitch;";
			};
		};
	};
	class ItemTent: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = "(256 * 2)";
		displayName = "$STR_EQUIP_NAME_20";
		model = "\dayz_equip\models\tentbag_gear.p3d";
		picture = "\dayz_equip\textures\equip_tentbag_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_20";
		class ItemActions
		{
			class Pitch
			{
				text = "$STR_PITCH_TENT";
				script = "spawn player_tentPitch;";
				create = "TentStorage"; 
			};
		};
	};
	class ItemSandbag : CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = $STR_EQUIP_NAME_21;
		model = "\dayz_equip\models\sandbags.p3d";
		picture = "\dayz_equip\textures\equip_sandbag_ca.paa";
		descriptionShort = $STR_EQUIP_DESC_21;
		class ItemActions {
			class Build
			{
				text = "Build Sandbag";
				script = "spawn player_build;";
				requiretools[] = {"ItemEtool"};
				create = "Sandbag1_DZ";
			};
			class Crafting
			{
				text = "H-Barrier cube";
				script = "spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {"ItemEtool","ItemToolbox"};
				output[] = {{"ItemHBarrierCube",1}};
				input[] = {{"ItemSandbag",3},{"ItemWire",1},{"ItemTankTrap",1}};
			};
			class Crafting1 {
				text = "Sandbag Nest";
				script = "spawn player_craftItem1;";
				neednearby[] = {};
				requiretools[] = {"ItemEtool","ItemToolbox"};
				input[] = {{"ItemSandbag",2},{"PartWoodPile",2},{"PartGeneric",1}};
				output[] = {{"ItemSandBagNest",1}};
			};
			class Crafting2 {
				text = "Round Sandbag Fence";
				script = "spawn player_craftItem2;";
				neednearby[] = {};
				requiretools[] = {"ItemEtool","ItemToolbox"};
				input[] = {{"ItemSandbag",2}};
				output[] = {{"ItemSandbagRound",1}};
			};
		};
	};
	class ItemSandbagRound : CA_Magazine
	{
		scope = 2;
		count = 1;
		type = (256 * 2);
		displayName = "Round Bag Fence";
		model = "\dayz_equip\models\sandbags.p3d";
		picture = "\dayz_equip\textures\equip_sandbag_ca.paa";
		descriptionShort = "";
		class ItemActions {
			class Build
			{
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				requiretools[] = {"ItemToolbox"};
				create = "Sandbag2_DZ";
			};
			class Crafting1 {
				text = "Deconstruct";
				script = "spawn player_craftItem1;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox"}; 
				input[] = {{"ItemSandbagRound",1}};
				output[] = {{"ItemSandbag",2}};
			};
			class Crafting2 {
				text = "Fortified Round Fence";
				script = "spawn player_craftItem2;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox"}; 
				input[] = {{"ItemSandbagRound",2},{"PartWoodPile",2}};
				output[] = {{"ItemFortSandbagRound",1}};
			};
		};
	};
	
	class ItemFortSandbagRound : CA_Magazine
	{
		scope = 2;
		count = 1;
		type = (256 * 6);
		displayName = "Fortified Round Bag Fence";
		model = "\dayz_equip\models\sandbags.p3d";
		picture = "\dayz_equip\textures\equip_fortsandbaground.paa";
		descriptionShort = "";
		class ItemActions {
			class Build
			{
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				requiretools[] = {"ItemToolbox"};
				create = "Sandbag3_DZ";
			};
			class Crafting1 {
				text = "Deconstruct";
				script = "spawn player_craftItem1;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox"}; 
				input[] = {{"ItemFortSandbagRound",1}};
				output[] = {{"ItemSandbagRound",2},{"PartWoodPile",2}};
			};
		};
	};
	class ItemTankTrap: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "$STR_EQUIP_NAME_22";
		model = "\dayz_equip\models\tank_trap_kit.p3d";
		picture = "\dayz_equip\textures\equip_tanktrap_kit_CA.paa";
		descriptionShort = "$STR_EQUIP_DESC_22";
		class ItemActions {
			class Build
			{
				text = $STR_ACTIONS_BUILD;
				script = "spawn player_build;";
				requiretools[] = {"ItemEtool"};
				create = "Hedgehog_DZ";
			};
			class Crafting
			{
				text = "Camo Net";
				script = "spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox"}; 
				input[] = {{"Skin_Net_DZ",3},{"ItemTankTrap",1}};
				output[] = {{"ItemCamoNet",1}};
			};
			class Crafting1
			{
				text = "Metal Pole";
				script = "spawn player_craftItem1;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox"};  
				input[] = {{"PartGeneric",2},{"ItemTankTrap",2}};
				output[] = {{"ItemPole",1}};
			};
			class Crafting2
			{
				text = "Small Ladder";
				script = "spawn player_craftItem2;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox"}; 
				input[] = {{"PartGeneric",1},{"ItemTankTrap",2}};
				output[] = {{"ItemLadderSmall",1}};
			};
			class Crafting3
			{
				text = "Large Ladder";
				script = "spawn player_craftItem3;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox"}; 
				input[] = {{"PartGeneric",2},{"ItemTankTrap",4}};
				output[] = {{"ItemLadderSmall",1}};
			};
			class Crafting4
			{
				text = "Craft Rusty Gate";
				script = "spawn player_craftItem4;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox","ItemCrowbar"};
				input[] = {{"ItemPole",2},{"PartGeneric",2},{"ItemTankTrap",2}};
				output[] = {{"rusty_gate_kit",1}};
			};
		};
	};
	class ItemWire: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "$STR_EQUIP_NAME_23";
		model = "\dayz_equip\models\Fence_wire_kit.p3d";
		picture = "\dayz_equip\textures\equip_fencewire_kit_CA.paa";
		descriptionShort = "$STR_EQUIP_DESC_23";
		class ItemActions
		{
			class Build
			{
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				requiretools[] = {"ItemEtool"};
				create = "Wire_cat1";
			};
			class Crafting
			{
				text = "Wire (CAT2)";
				script = "spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox"}; 
				input[] = {{"ItemWire",3}};
				output[] = {{"ItemWire2",1}};
			};
			class Crafting1
			{
				text = "H-Barrier cube";
				script = "spawn player_craftItem1;";
				neednearby[] = {};
				requiretools[] = {"ItemEtool","ItemToolbox"};
				input[] = {{"ItemSandbag",3},{"ItemWire",1},{"ItemTankTrap",1}};
				output[] = {{"ItemHBarrierCube",1}};
			};
			class Crafting2 {
				text = "Gate";
				script = "spawn player_craftItem2;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox"}; 
				input[] = {{"ItemWire"},{"PartGeneric",2}};
				output[] = {{"ItemGate",1}};
			};
		};
	};
	class ItemWire2 : CA_Magazine
	{
		scope = 2;
		count = 1;
		type = (256 * 2);
		displayName = "$STR_EQUIP_NAME_124";
		model = "\dayz_equip\models\Fence_wire_kit.p3d";
		picture = "\dayz_equip\textures\equip_fencewire_kit2.paa";
		descriptionShort = "$STR_EQUIP_DESC_124";
		class ItemActions {
			class Build
			{
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				requiretools[] = {"ItemEtool"};
				create = "Wire_cat2";
			};

			class Crafting1 {
				text = "Deconstruct";
				script = "spawn player_craftItem1;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox"}; 
				input[] = {{"ItemWire2",1}};
				output[] = {{"ItemWire",3}};
			};
		};
	};
	class ItemCamoNet : CA_Magazine
	{
		scope = 2;
		count = 1;
		type = (256 * 3);
		displayName = "$STR_EQUIP_NAME_119";
		model = "\dayz_equip\models\tentbag_gearcamo.p3d";
		picture = "\dayz_equip\textures\equip_tentbag_CA.paa";
		descriptionShort = "$STR_EQUIP_DESC_119";
		class ItemActions {
			class Build
			{
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				requiretools[] = {"ItemToolbox"};
				create = "CamoNet";
			};
			class Crafting1 {
				text = "Deconstruct";
				script = "spawn player_craftItem1;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox"}; 
				input[] = {{"ItemCamoNet",1}};
				output[] = {{"Skin_Net_DZ",3},{"ItemTankTrap",1}};
			};
		};
	};
	class ItemSandBagNest : CA_Magazine
	{
		scope = 2;
		count = 1;
		type = (256 * 6);
		displayName = "$STR_EQUIP_NAME_120";
		model = "\dayz_equip\models\tentbag_gearcamo.p3d";
		picture = "\dayz_equip\textures\equip_tentbag_CA.paa";
		descriptionShort = "$STR_EQUIP_DESC_120";
		class ItemActions {
			class Build
			{
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				requiretools[] = {"ItemToolbox"};
				create = "SandBagNest";
			};
			class Crafting1
			{
				text = "Deconstruct";
				script = "spawn player_craftItem1;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox"}; 
				input[] = {{"ItemSandBagNest",1}};
				output[] = {{"ItemSandbag",2},{"PartWoodPile",3},{"PartGeneric",1}};
			};
			class Crafting2
			{
				text = "Craft M240 Nest";
				script = "spawn player_craftItem2;";
				neednearby[] = {};
				requiretools[] = {"ItemEtool","ItemToolbox","M240_DZ"};
				output[] = {{"m240_nest_kit",1}};
				input[] = {{"ItemSandBagNest",1},{"Skin_Net_DZ",1}};
				consumeweapons[] = {"M240_DZ"};
			}; 
		};
	};
	class ItemDeerStand : CA_Magazine
	{
		scope = 2;
		count = 1;
		type = (256 * 8);
		displayName = "Deer Stand";
		model = "\dayz_equip\models\tentbag_gearcamo.p3d";
		picture = "\dayz_equip\textures\equip_deerstand.paa";
		descriptionShort = "";
		class ItemActions {
			class Build
			{
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				requiretools[] = {"ItemToolbox"};
				create = "DeerStand";
			};
			class Crafting
			{
				text = "Deconstruct";
				script = "spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox"}; 
				input[] = {{"ItemDeerStand",1}};
				output[] = {{"PartWoodPile",6},{"PartGeneric",2}};
			};
		};
	};
	class ItemHBarrierCube : CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "$STR_EQUIP_NAME_122";
		model = "\dayz_equip\models\sandbags.p3d";
		picture = "\dayz_equip\textures\equip_sandbag_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_122";
		class ItemActions {
			class Build
			{
				text = "Build H-Barrier cube";
				script = "spawn player_build;";
				requiretools[] = {"ItemEtool"};
				create = "HBarrier_Cube";
			};
			class Crafting
			{
				text = "HBarrier";
				script = "spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {"ItemEtool","ItemToolbox"};
				input[] = {{"ItemHBarrierCube",4}};
				output[] = {{"ItemHBarrier",1}};
			};
			class Crafting1
			{
				text = "Decontruct";
				script = "spawn player_craftItem1;";
				neednearby[] = {};
				requiretools[] = {"ItemEtool","ItemToolbox"};
				input[] = {{"ItemHBarrierCube",1}};
				output[] = {{"ItemSandbag",3},{"ItemWire",1},{"ItemTankTrap",1}};
			};
		};
	};
	class ItemHBarrier : CA_Magazine
	{
		scope = 2;
		count = 1;
		type = (256 * 3);
		displayName = "$STR_EQUIP_NAME_123";
		model = "\dayz_equip\models\tentbag_gearcamo.p3d";
		picture = "\dayz_equip\textures\equip_tentbag_CA.paa";
		descriptionShort = "$STR_EQUIP_DESC_123";
		class ItemActions {
			class Build
			{
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				requiretools[] = {"ItemEtool","ItemToolbox"};
				create = "HBarrier";
			};
			class Crafting
			{
				text = "Deconstruct";
				script = "spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox"}; 
				input[] = {{"ItemHBarrier",1}};
				output[] = {{"ItemHBarrierCube",4}};
			};
		};
	};
	class ItemWatchTower : CA_Magazine
	{
		scope = 2;
		count = 1;
		type = (256 * 8);
		displayName = "$STR_EQUIP_NAME_121";
		model = "\dayz_equip\models\tentbag_gearcamo.p3d";
		picture = "\dayz_equip\textures\equip_watchtower.paa";
		descriptionShort = "$STR_EQUIP_DESC_121";
		class ItemActions {
			class Build
			{
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				requiretools[] = {"ItemEtool","ItemToolbox"};
				create = "WatchTower";
			};
			class Crafting
			{
				text = "Deconstruct";
				script = "spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox"}; 
				input[] = {{"ItemWatchTower",1}};
				output[] = {{"Skin_Net_DZ",4},{"ItemHBarrier",2}};
			};
		};
	};
	class ItemGate : CA_Magazine
	{
		scope = 2;
		count = 1;
		type = (256 * 3);
		displayName = "Gate";
		model = "\dayz_equip\models\Fence_wire_kit.p3d";
		picture = "\dayz_equip\textures\equip_gate.paa";
		descriptionShort = "";
		class ItemActions {
			class Build
			{
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				requiretools[] = {"ItemToolbox"};
				create = "Gate1_DZ";
			};
			class Crafting1
			{
				text = "Deconstruct";
				script = "spawn player_craftItem1;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox"}; 
				input[] = {{"ItemGate",1}};
				output[] = {{"ItemWire",1},{"PartGeneric",2}};
			};
		};
	};
	class ItemScaffolding : CA_Magazine
	{
		scope = 2;
		count = 1;
		type = (256 * 8);
		displayName = "Scaffolding";
		model = "\dayz_equip\models\tentbag_gearcamo.p3d";
		picture = "\dayz_equip\textures\equip_tentbag_CA.paa";
		descriptionShort = "";
		
		class ItemActions {
			class Build
			{
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				requiretools[] = {"ItemToolbox"};
				create = "Scaffolding";
			};
			class Crafting
			{
				text = "Deconstruct";
				script = "spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox"}; 
				input[] = {"ItemScaffolding",1};
				output[] = {{"PartWoodPile",5},{"PartGeneric",3}};
			};
		};
	};
	class ItemLadderSmall : CA_Magazine
	{
		scope = 2;
		count = 1;
		type = (256 * 2);
		displayName = "Small Ladder";
		model = "\dayz_equip\models\tentbag_gearcamo.p3d";
		picture = "\dayz_equip\textures\equip_tentbag_CA.paa";
		descriptionShort = "";
		
		class ItemActions{
			class Build
			{
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				requiretools[] = {"ItemToolbox"};
				create = "LadderSmall";
			};
			class Crafting
			{
				text = "Deconstruct";
				script = "spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox"}; 
				input[] = {{"PartGeneric",1},{"ItemTankTrap",2}};
				output[] = {{"PartGeneric",1},};
			};
		};
	};
	class ItemLadderLarge : CA_Magazine
	{
		scope = 2;
		count = 1;
		type = (256 * 4);
		displayName = "Large Ladder";
		model = "\dayz_equip\models\tentbag_gearcamo.p3d";
		picture = "\dayz_equip\textures\equip_tentbag_CA.paa";
		descriptionShort = "";
		
		class ItemActions {
			class Build
			{
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				requiretools[] = {"ItemToolbox"};
				create = "LadderLarge";
			};
			class Crafting
			{
				text = "Deconstruct";
				script = "spawn player_craftItem;";
				input[] = {{"ItemLadderLarge",1}};
				output[] = {{"PartGeneric",2},{"ItemTankTrap",4}};
			};
		};
	};
	class FoodSteakRaw: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "$STR_EQUIP_NAME_24";
		model = "\dayz_equip\models\food_steak_gear.p3d";
		picture = "\dayz_equip\textures\equip_steak_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_24";
	};
	class FoodEdible: CA_Magazine
	{
		isFood = 1;
		count = 1;
		type = 256;
		bloodRegen = 200;
		class ItemActions
		{
			class Eat
			{
				text = "$STR_EAT_FOOD";
				script = "spawn player_eat;";
			};
		};
	};
	class FoodBioMeat: FoodEdible
	{
		scope = 2;
		displayName = "Bio Meat";
		model = "\dayz_equip\models\biomeat_can.p3d";
		picture = "\dayz_equip\textures\armourpottedmeat_CAN_test1_CA.paa";
		descriptionShort = "Re purposed Meat";
		bloodRegen = 1600;
	};
	class FoodSteakCooked: FoodEdible
	{
		scope = 2;
		displayName = "$STR_EQUIP_NAME_25";
		model = "\dayz_equip\models\food_steak_cooked_gear.p3d";
		picture = "\dayz_equip\textures\equip_steak_cooked_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_25";
		bloodRegen = 800;
	};
	class FoodCanBakedBeans: FoodEdible
	{
		scope = 2;
		displayName = "$STR_EQUIP_NAME_26";
		model = "\dayz_equip\models\food_bbtin.p3d";
		picture = "\dayz_equip\textures\equip_bbtin_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_26";
	};
	class FoodCanSardines: FoodEdible
	{
		scope = 2;
		displayName = "$STR_EQUIP_NAME_27";
		model = "\dayz_equip\models\food_sardinestin.p3d";
		picture = "\dayz_equip\textures\equip_Sardinestin_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_27";
	};
	class FoodCanFrankBeans: FoodEdible
	{
		scope = 2;
		displayName = "$STR_EQUIP_NAME_28";
		model = "\dayz_equip\models\food_fbtin.p3d";
		picture = "\dayz_equip\textures\equip_fbtin_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_28";
	};
	class FoodCanPasta: FoodEdible
	{
		scope = 2;
		displayName = "$STR_EQUIP_NAME_29";
		model = "\dayz_equip\models\food_pastatin.p3d";
		picture = "\dayz_equip\textures\equip_pastatin_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_29";
	};
};