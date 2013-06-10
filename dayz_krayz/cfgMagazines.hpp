class CfgMagazines
{
	class CA_Magazine;
	// BASIC DAYZ ITEMS ----------------------------------------------------------------------------------------------
	class ItemTent: CA_Magazine {
		scope = 2;
		count = 1;
		type = 256;
		displayName = "$STR_EQUIP_NAME_20";
		model = "\dayz_equip\models\tentbag_gear.p3d";
		picture = "\dayz_equip\textures\equip_tentbag_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_20";
		class ItemActions {
			class Pitch {
				text = "$STR_PITCH_TENT";
				script = "spawn player_tentPitch;";
				create = "TentStorage";
			};
		};
	};
	class ItemGenerator: CA_Magazine {
		scope = 2;
		count = 1;
		type = "(256 * 6)";
		displayName = "$STR_EQUIP_NAME_31";
		model = "\dayz_equip\models\generator_gear.p3d";
		picture = "\dayz_equip\textures\equip_generator_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_31";
		class ItemActions {
			class Build {
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				requiretools[] = {"ItemToolbox_KR"};
				create = "Generator_DZ";
			};
		}; 
	};
	// WEAPON KITS ----------------------------------------------------------------------------------------------
	class des_paint_kit : CA_Magazine {
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Desert Paint Kit";
		picture = "\dayz_krayz\textures\icons\SprayCan.paa";
		descriptionShort = "Can be used for painting weapons, for: Famas, HK417, FRF2, PGM";
		class ItemActions {
			class AddDesert {
				text = "Paint Weapon";
				script = "spawn player_weapon_desert;";
			};
		};
	};
	// TiMz - Weapon items: reddot, acog, holo, sniper, launcher & suppressor
	class RedDot_DZ : CA_Magazine {
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Red Dot Scope";
		picture = "\dayz_krayz\textures\weaponvisuals\reddot.paa";
		descriptionShort = "Can be mounted on / to weapons.";
		class ItemActions {
			class AddReddot {
				text = "Assemble Red Dot Scope";
				script = "spawn player_weapon_reddot;";
				require = "ItemToolbox_KR";
			};
		};
	};
	class ACOG_DZ : CA_Magazine {
		scope = 2;
		count = 1;
		type = 256;
		displayName = "ACOG Scope";
		picture = "\dayz_krayz\textures\weaponvisuals\acog.paa";
		descriptionShort = "Can be mounted on / to weapons.";
		class ItemActions {
			class AddAcog {
				text = "Assemble ACOG Scope";
				script = "spawn player_weapon_acog;";
				require = "ItemToolbox_KR";
			};
		};
	};
	class Holo_DZ : CA_Magazine {
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Holo Scope";
		picture = "\dayz_krayz\textures\weaponvisuals\holo.paa";
		descriptionShort = "Can be mounted on / to weapons.";
		class ItemActions {
			class AddHolo {
				text = "Assemble Holo Scope";
				script = "spawn player_weapon_holo;";
				require = "ItemToolbox_KR";
			};
		};
	};
	class Sniper_DZ : CA_Magazine {
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Sniper Scope";
		picture = "\dayz_krayz\textures\weaponvisuals\sniper.paa";
		descriptionShort = "Can be mounted on / to weapons.";
		class ItemActions {
			class AddSniper {
				text = "Assemble Sniper Scope";
				script = "spawn player_weapon_scope;";
				require = "ItemToolbox_KR";
			};
		};
	};
	class Launcher_DZ : CA_Magazine {
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Grenade Launcher";
		picture = "\dayz_krayz\textures\weaponvisuals\launcher.paa";
		descriptionShort = "Can be mounted on / to weapons.";
		class ItemActions {
			class AddSniper {
				text = "Assemble Grenade Launcher";
				script = "spawn player_weapon_launcher;";
				require = "ItemToolbox_KR";
			};
		};
	};
	class Suppressor_DZ : CA_Magazine {
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Suppressor";
		picture = "\dayz_krayz\textures\weaponvisuals\suppressor.paa";
		descriptionShort = "Can be mounted on / to weapons.";
		class ItemActions {
			class AddSniper {
				text = "Assemble Suppressor";
				script = "spawn player_weapon_suppressor;";
				require = "ItemToolbox_KR";
			};
		};
	};
	//CRAFTING ITEMS ----------------------------------------------------------------------------------------------
	class PartGeneric_KR: CA_Magazine {
		scope = 2;
		count = 1;
		type = "(256 * 2)";
		displayName = "$STR_EQUIP_NAME_10";
		model = "\dayz_equip\models\genericparts.p3d";
		picture = "\dayz_equip\textures\equip_genericparts_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_10";
		class ItemActions {
			class Crafting {
				text = "Metal Pole";
				script = "spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox_KR"};  
				input[] = {{"PartGeneric_KR",2},{"ItemTankTrap_KR",2}};
				output[] = {{"ItemPole",1}};
			};
			class Crafting1 {
				text = "Sandbag Nest";
				script = "spawn player_craftItem1;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox_KR"};  
				input[] = {{"ItemSandbag_KR",2},{"PartWoodPile_KR",3},{"PartGeneric_KR",1}};
				output[] = {{"ItemSandBagNest",1}};
			};
			class Crafting2 {
				text = "Gate (lockable for owner)";
				script = "spawn player_craftItem2;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox_KR"}; 
				input[] = {{"ItemWire_KR",1},{"PartGeneric_KR",2},{"ItemGoldBar10oz",2}};
				output[] = {{"ItemGate",1}};
			};
			class Crafting3 {
				text = "Gate (locked via combination)";
				script = "spawn player_craftItem3;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox_KR"}; 
				input[] = {{"ItemWire_KR",1},{"PartGeneric_KR",2},{"ItemGoldBar10oz",1}};
				output[] = {{"ItemGate2",1}};
			};
			class Crafting4 {
				text = "Scaffolding";
				script = "spawn player_craftItem4;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox_KR"};  
				input[] = {{"PartWoodPile_KR",5},{"PartGeneric_KR",3}};
				output[] = {{"ItemScaffolding",1}};
			};
			class Crafting5 {
				text = "Small Ladder";
				script = "spawn player_craftItem5;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox_KR"}; 
				input[] = {{"PartGeneric_KR",1},{"ItemTankTrap_KR",2}};
				output[] = {{"ItemLadderSmall",1}};
			};
			class Crafting6 {
				text = "Large Ladder";
				script = "spawn player_craftItem6;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox_KR"}; 
				input[] = {{"PartGeneric_KR",2},{"ItemTankTrap_KR",4}};
				output[] = {{"ItemLadderLarge",1}};
			};
			class Crafting7 {
				text = "Deer Stand";
				script = "spawn player_craftItem7;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox_KR"}; 
				input[] = {{"PartWoodPile_KR",6},{"PartGeneric_KR",2}};
				output[] = {{"ItemDeerStand",1}};
			};
		};
	};
	class ItemCorrugated : CA_Magazine {
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Corrugated Fence";
		model = "\dayz_equip\models\genericparts.p3d";
		picture = "\dayz_krayz\textures\icons\corrugated_fence.paa";
		descriptionShort = "Corrugated Fence";
		class ItemActions {
			class Build {
				text = "Build Corrugated Fence";
				script = "spawn player_build;";
				requiretools[] = {"ItemEtool","ItemToolbox_KR"};
				create = "Fence_corrugated_DZ";
			};
			class Crafting {
				text = "Craft Wooden Shed";
				script = "spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox_KR","ItemCrowbar"};
				output[] = {{"wooden_shed_kit",1}};
				input[] = {{"ItemCorrugated",2},{"PartWoodPile_KR",5}};
			};
			class Crafting1 {
				text = "Craft Outhouse";
				script = "spawn player_craftItem1;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox_KR","ItemCrowbar"};
				output[] = {{"outhouse_kit",1}};
				input[] = {{"ItemCorrugated",1},{"PartWoodPile_KR",5},{"ItemTrashToiletpaper",1}};
			};
			class Crafting2 {
				text = "Craft Storage Shed";
				script = "spawn player_craftItem2;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox_KR","ItemCrowbar"};
				output[] = {{"storage_shed_kit",1}};
				input[] = {{"ItemCorrugated",4},{"PartWoodPile_KR",3}};
			};
		};
	};
	class ItemPole: CA_Magazine {
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Metal Pole";
		model = "\dayz_equip\models\genericparts.p3d";
		picture = "\dayz_krayz\textures\icons\metal_pole.paa";
		descriptionShort = "Metal Pole";
		class ItemActions {
			class Crafting {
				text = "Craft Corrugated Fence";
				script = "spawn player_craftItem;";
				neednearby[] = {"fire"};
				requiretools[] = {"ItemToolbox_KR","ItemCrowbar"};
				output[] = {{"ItemCorrugated",1}};
				input[] = {{"ItemPole",1},{"PartGeneric_KR",4},{"PartWoodPile_KR",2}};
			};
			class Crafting1 {
				text = "30m Plot";
				script = "spawn player_craftItem1;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox_KR"};
				output[] = {{"30m_plot_kit",1}};
				input[] = {{"ItemPole",1},{"ItemGoldBar10oz",1}};
			};
			class Crafting2 {
				text = "Deconstruct";
				script = "spawn player_craftItem2;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox_KR"}; 
				input[] = {{"ItemPole",1}};
				output[] = {{"PartGeneric_KR",2},{"ItemTankTrap_KR",2}};
			};
		};
	};
	class PartWoodPile_KR: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "$STR_EQUIP_NAME_40";
		model = "\dayz_equip\models\woodPile.p3d";
		picture = "\dayz_equip\textures\equip_woodPile_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_40";
		class ItemActions {
			/*class Build {
				text = "Build Wood Gate";
				script = "spawn player_build;";
				requiretools[] = {"ItemToolbox_KR"};
				create = "WoodGate_DZ";
			};*/
			class Crafting {
				text = "Craft Arrows";
				script = "spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox_KR"}; 
				output[] = {{"WoodenArrow",3}};
				input[] = {{"PartWoodPile_KR",1},{"ItemTrashRazor",1}};
			};
			class Crafting1 {
				text = "Sandbag Nest";
				script = "spawn player_craftItem1;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox_KR"};  
				input[] = {{"ItemSandbag_KR",2},{"PartWoodPile_KR",3},{"PartGeneric_KR",1}};
				output[] = {{"ItemSandBagNest",1}};
			};
			class Crafting2 {
				text = "Fortified Round Fence";
				script = "spawn player_craftItem2;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox_KR"}; 
				input[] = {{"ItemSandbagRound",2},{"PartWoodPile_KR",2}};
				output[] = {{"ItemFortSandbagRound",1}};
			};
			class Crafting3 {
				text = "Deer Stand";
				script = "spawn player_craftItem3;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox_KR"};  
				input[] = {{"PartWoodPile_KR",6},{"PartGeneric_KR",2}};
				output[] = {{"ItemDeerStand",1}};
			};
			class Crafting4 {
				text = "Scaffolding";
				script = "spawn player_craftItem4;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox_KR"}; 
				input[] = {{"PartWoodPile_KR",5},{"PartGeneric_KR",3}};
				output[] = {{"ItemScaffolding",1}};
			};
		};
	};
	//BARS ----------------------------------------------------------------------------------------------
	class ItemGoldBar: CA_Magazine {
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Gold";
		model = "\dayz_krayz\models\gold_bar.p3d";
		picture = "\dayz_krayz\textures\equip_gold_bar_CA.paa";
		descriptionShort = "Gold Bar";
		class ItemActions {
			class Crafting {
				text = "Smelt 10oz bar";
				script = "spawn player_craftItem;";
				neednearby[] = {"fire"};
				requiretools[] = {"ItemToolbox_KR"}; 
				output[] = {{"ItemGoldBar10oz",1}};
				input[] = {{"ItemGoldBar",10}};
				
			};
		};
	};
	class ItemGoldBar10oz: CA_Magazine {
		scope = 2;
		count = 1;
		type = 256;
		displayName = "10oz Gold";
		model = "\dayz_krayz\models\gold_bar_10oz.p3d";
		picture = "\dayz_krayz\textures\equip_gold_bar_10oz_CA.paa";
		descriptionShort = "10oz Gold Bar";
		class ItemActions {
			class Crafting {
				text = "Smelt 1oz bars";
				script = "spawn player_craftItem;";
				neednearby[] = {"fire"};
				requiretools[] = {"ItemToolbox_KR"}; 
				output[] = {{"ItemGoldBar",10}};
				input[] = {{"ItemGoldBar10oz",1}};
			};
			class Crafting1 {
				text = "30m Plot";
				script = "spawn player_craftItem1;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox_KR"};
				output[] = {{"30m_plot_kit",1}};
				input[] = {{"ItemPole",1},{"ItemGoldBar10oz",1}};
			};
			class Crafting2 {
				text = "Gate (lockable for owner)";
				script = "spawn player_craftItem2;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox_KR"}; 
				input[] = {{"ItemWire_KR",1},{"PartGeneric_KR",2},{"ItemGoldBar10oz",2}};
				output[] = {{"ItemGate",1}};
			};
			class Crafting3 {
				text = "Gate (locked via combination)";
				script = "spawn player_craftItem3;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox_KR"}; 
				input[] = {{"ItemWire_KR",1},{"PartGeneric_KR",2},{"ItemGoldBar10oz",1}};
				output[] = {{"ItemGate2",1}};
			};
		};
	};
	class ItemSilverBar: CA_Magazine {
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Silver";
		model = "\dayz_krayz\models\silver_bar.p3d";
		picture = "\dayz_krayz\textures\equip_silver_bar_CA.paa";
		descriptionShort = "Silver Bar";
		class ItemActions {
			class Crafting {
				text = "Smelt 10oz bar";
				script = "spawn player_craftItem;";
				neednearby[] = {"fire"};
				requiretools[] = {"ItemToolbox_KR"}; 
				output[] = {{"ItemSilverBar10oz",1}};
				input[] = {{"ItemSilverBar",10}};
			};
		};
	};
	class ItemSilverBar10oz: CA_Magazine {
		scope = 2;
		count = 1;
		type = 256;
		displayName = "10oz Silver";
		model = "\dayz_krayz\models\silver_bar_10oz.p3d";
		picture = "\dayz_krayz\textures\equip_silver_bar_10oz_CA.paa";
		descriptionShort = "10oz Silver Bar";
		class ItemActions {
			class Crafting {
				text = "Smelt 1oz bars";
				script = "spawn player_craftItem;";
				neednearby[] = {"fire"};
				requiretools[] = {"ItemToolbox_KR"}; 
				output[] = {{"ItemSilverBar",10}};
				input[] = {{"ItemSilverBar10oz",1}};
			};
		};
	};
	class ItemCopperBar: CA_Magazine {
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Copper";
		model = "\dayz_krayz\models\copper_bar.p3d";
		picture = "\dayz_krayz\textures\equip_copper_bar_CA.paa";
		descriptionShort = "Copper Bar";
		class ItemActions {
			class Crafting {
				text = "Smelt 10oz bar";
				script = "spawn player_craftItem;";
				neednearby[] = {"fire"};
				requiretools[] = {"ItemToolbox_KR"}; 
				output[] = {{"ItemCopperBar10oz",1}};
				input[] = {{"ItemCopperBar",10}};
			};
		};
	};
	class ItemCopperBar10oz: CA_Magazine {
		scope = 2;
		count = 1;
		type = 256;
		displayName = "10oz Copper";
		model = "\dayz_krayz\models\copper_bar_10oz.p3d";
		picture = "\dayz_krayz\textures\equip_copper_bar_10oz_CA.paa";
		descriptionShort = "10oz Copper Bar";
		class ItemActions {
			class Crafting {
				text = "Smelt 1oz bars";
				script = "spawn player_craftItem;";
				neednearby[] = {"fire"};
				requiretools[] = {"ItemToolbox_KR"}; 
				output[] = {{"ItemCopperBar",10}};
				input[] = {{"ItemCopperBar10oz",1}};
			};
		};
	};
	class ItemAluminumBar: CA_Magazine {
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Aluminum";
		model = "\dayz_krayz\models\aluminum_bar.p3d";
		picture = "\dayz_krayz\textures\equip_alum_bar_CA.paa";
		descriptionShort = "Aluminum Bar";
		class ItemActions {
			class Crafting {
				text = "Smelt 10oz bar";
				script = "spawn player_craftItem;";
				neednearby[] = {"fire"};
				requiretools[] = {"ItemToolbox_KR"}; 
				output[] = {{"ItemAluminumBar10oz",1}};
				input[] = {{"ItemAluminumBar",10}};
			};
		};
	};
	class ItemAluminumBar10oz: CA_Magazine {
		scope = 2;
		count = 1;
		type = 256;
		displayName = "10oz Aluminum";
		model = "\dayz_krayz\models\aluminum_bar_10oz.p3d";
		picture = "\dayz_krayz\textures\equip_alum_bar_10oz_CA.paa";
		descriptionShort = "10oz Aluminum Bar";
		class ItemActions {
			class Crafting {
				text = "Smelt 1oz bars";
				script = "spawn player_craftItem;";
				neednearby[] = {"fire"};
				requiretools[] = {"ItemToolbox_KR"}; 
				output[] = {{"ItemAluminumBar",10}};
				input[] = {{"ItemAluminumBar10oz",1}};
			};
		};
	};
	class ItemTinBar: CA_Magazine {
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Tin";
		model = "\dayz_krayz\models\tin_bar.p3d";
		picture = "\dayz_krayz\textures\equip_tin_bar_CA.paa";
		descriptionShort = "Tin Bar";
		class ItemActions {
			class Crafting {
				text = "Smelt 10oz bar";
				script = "spawn player_craftItem;";
				neednearby[] = {"fire"};
				requiretools[] = {"ItemToolbox_KR"}; 
				output[] = {{"ItemTinBar10oz",1}};
				input[] = {{"ItemTinBar",10}};
			};
		};
	};
	class ItemTinBar10oz: CA_Magazine {
		scope = 2;
		count = 1;
		type = 256;
		displayName = "10oz Tin";
		model = "\dayz_krayz\models\tin_bar_10oz.p3d";
		picture = "\dayz_krayz\textures\equip_tin_bar_10oz_CA.paa";
		descriptionShort = "10oz Tin Bar";
		class ItemActions {
			class Crafting {
				text = "Smelt 1oz bars";
				script = "spawn player_craftItem;";
				neednearby[] = {"fire"};
				requiretools[] = {"ItemToolbox_KR"}; 
				output[] = {{"ItemTinBar",10}};
				input[] = {{"ItemTinBar10oz",1}};
			};
		};
	};
	class ItemZombieParts: CA_Magazine {
		scope = 2;
		count = 1;
		type = "(256 * 2)";
		displayName = "Zombie Parts";
		model = "\dayz_krayz\models\zombie_parts_bag_v2.p3d";
		picture = "\dayz_krayz\textures\parts_bag_texture3c_CA.paa";
		descriptionShort = "Zombie Parts in a Bag";
	};
	// BUILDING KITS ETC ----------------------------------------------------------------------------------------------
	class 30m_plot_kit: CA_Magazine {
		scope = 2;
		count = 1;
		type = 256;
		displayName = "30 Meter Plot";
		descriptionShort = "30 Meter Plot";
		model = "\dayz_krayz\models\supply_crate.p3d";
		picture = "\dayz_krayz\textures\icons\30m_plot.paa";
		class ItemActions {
			class Build {
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				requiretools[] = {"ItemEtool","ItemToolbox_KR"};
				create = "Plastic_Pole_EP1_DZ";
			};
			class Crafting1 {
				text = "Deconstruct";
				script = "spawn player_craftItem1;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox_KR"}; 
				input[] = {{"30m_plot_kit",1}};
				output[] = {{"ItemPole",1},{"ItemGoldBar10oz",1}};
			};
		};
	};
	class light_pole_kit: CA_Magazine {
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Light Pole";
		descriptionShort = "Light Pole";
		model = "\dayz_krayz\models\supply_crate.p3d";
		picture = "\dayz_krayz\textures\equip_wooden_crate_ca.paa";
		class ItemActions {
			class Build {
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				require[] = {"ItemEtool","ItemToolbox_KR"};
				create = "LightPole_DZ";
			};
			class Crafting {
				text = "Craft Light Pole";
				script = "spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {"ItemEtool","ItemToolbox_KR"};
				input[] = {{"light_pole_kit",1}};
				output[] = {{"ItemLightBulb",1},{"PartGeneric_KR",1},{"PartWoodPile_KR",3}};
			};
		};
	};
	class wooden_shed_kit: CA_Magazine {
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Nice Wooden Shed";
		descriptionShort = "Nice Wooden Shed";
		model = "\dayz_krayz\models\supply_crate.p3d";
		picture = "\dayz_krayz\textures\icons\wooden_shed.paa";
		class ItemActions {
			class Build {
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				requiretools[] = {"ItemEtool","ItemToolbox_KR"};
				create = "Wooden_shed_DZ";
			};
		};
	};
	class wood_shack_kit: CA_Magazine {
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Wood Shack";
		descriptionShort = "Wood Shack";
		model = "\dayz_krayz\models\supply_crate.p3d";
		picture = "\dayz_krayz\textures\equip_wooden_crate_ca.paa";
		class ItemActions {
			class Build {
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				requiretools[] = {"ItemEtool","ItemToolbox_KR"};
				create = "WoodShack_DZ";
			};
		};
	};
	class m240_nest_kit: CA_Magazine {
		scope = 2;
		count = 1;
		type = 256;
		displayName = "M240 Nest";
		descriptionShort = "M240 Nest";
		model = "\dayz_krayz\models\supply_crate.p3d";
		picture = "\dayz_krayz\textures\equip_wooden_crate_ca.paa";
		class ItemActions {
			class Build {
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				requiretools[] = {"ItemEtool","ItemToolbox_KR"};
				create = "M240Nest_DZ";
			};
		};
	};
	class sun_shade_kit: CA_Magazine {
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Canvas Sun Shade";
		descriptionShort = "Canvas Sun Shade";
		model = "\dayz_krayz\models\supply_crate.p3d";
		picture = "\dayz_krayz\textures\equip_wooden_crate_ca.paa";
		class ItemActions {
			class Build {
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				requiretools[] = {"ItemEtool","ItemToolbox_KR"};
				create = "CanvasHut_DZ";
			};
		};
	};
	class park_bench_kit: CA_Magazine {
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Wood Bench";
		descriptionShort = "Wood Bench";
		model = "\dayz_krayz\models\supply_crate.p3d";
		picture = "\dayz_krayz\textures\equip_wooden_crate_ca.paa";
		class ItemActions {
			class Build {
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				requiretools[] = {"ItemEtool","ItemToolbox_KR"};
				create = "ParkBench_DZ";
			};
		};
	};
	class outhouse_kit: CA_Magazine {
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Outhouse";
		descriptionShort = "Outhouse";
		model = "\dayz_krayz\models\supply_crate.p3d";
		picture = "\dayz_krayz\textures\equip_wooden_crate_ca.paa";
		class ItemActions {
			class Build {
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				requiretools[] = {"ItemEtool","ItemToolbox_KR"};
				create = "OutHouse_DZ";
			};
		};
	};
	class storage_shed_kit: CA_Magazine {
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Storage Shed";
		descriptionShort = "Storage Shed";
		model = "\dayz_krayz\models\supply_crate.p3d";
		picture = "\dayz_krayz\textures\icons\storage_shed.paa";
		class ItemActions {
			class Build {
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				requiretools[] = {"ItemEtool","ItemToolbox_KR"};
				create = "StorageShed_DZ";
			};
		};
	};
	//Custom player vault
	class ItemVault: CA_Magazine {
		scope = 2;
		count = 1;
		type = "(256 * 6)";
		displayName = "Safe";
		model = "\dayz_krayz\models\safe1_onside.p3d";
		picture = "\dayz_krayz\textures\equip_safe_ca.paa";
		descriptionShort = "Personal Safe";
		class ItemActions {
			class Pitch {
				text = "Place Safe";
				script = "spawn player_vaultPitch;";
			};
		};
	};
	//BUILDING ITEMS
	class ItemSandbag_KR : CA_Magazine {
		scope = 2;
		count = 1;
		type = 256;
		displayName = $STR_EQUIP_NAME_21;
		model = "\dayz_equip\models\sandbags.p3d";
		picture = "\dayz_equip\textures\equip_sandbag_ca.paa";
		descriptionShort = $STR_EQUIP_DESC_21;
		class ItemActions {
			class Build {
				text = "Build Sandbag";
				script = "spawn player_build;";
				requiretools[] = {"ItemEtool"};
				create = "Sandbag1_KR";
			};
			class Crafting {
				text = "H-Barrier cube";
				script = "spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {"ItemEtool","ItemToolbox_KR"};
				output[] = {{"ItemHBarrierCube",1}};
				input[] = {{"ItemSandbag_KR",3},{"ItemWire_KR",1},{"ItemTankTrap_KR",1}};
			};
			class Crafting1 {
				text = "Sandbag Nest";
				script = "spawn player_craftItem1;";
				neednearby[] = {};
				requiretools[] = {"ItemEtool","ItemToolbox_KR"};
				input[] = {{"ItemSandbag_KR",2},{"PartWoodPile_KR",2},{"PartGeneric_KR",1}};
				output[] = {{"ItemSandBagNest",1}};
			};
			class Crafting2 {
				text = "Round Sandbag Fence";
				script = "spawn player_craftItem2;";
				neednearby[] = {};
				requiretools[] = {"ItemEtool","ItemToolbox_KR"};
				input[] = {{"ItemSandbag_KR",2}};
				output[] = {{"ItemSandbagRound",1}};
			};
		};
	};
	class ItemSandbagRound : CA_Magazine {
		scope = 2;
		count = 1;
		type = (256 * 2);
		displayName = "Round Bag Fence";
		model = "\dayz_equip\models\sandbags.p3d";
		picture = "\dayz_krayz\textures\icons\bagfence_round.paa";
		descriptionShort = "";
		class ItemActions {
			class Build {
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				requiretools[] = {"ItemToolbox_KR"};
				create = "Sandbag2_KR";
			};
			class Crafting1 {
				text = "Deconstruct";
				script = "spawn player_craftItem1;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox_KR"}; 
				input[] = {{"ItemSandbagRound",1}};
				output[] = {{"ItemSandbag_KR",2}};
			};
			class Crafting2 {
				text = "Fortified Round Fence";
				script = "spawn player_craftItem2;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox_KR"}; 
				input[] = {{"ItemSandbagRound",2},{"PartWoodPile_KR",2}};
				output[] = {{"ItemFortSandbagRound",1}};
			};
		};
	};
	
	class ItemFortSandbagRound : CA_Magazine {
		scope = 2;
		count = 1;
		type = (256 * 6);
		displayName = "Fortified Round Bag Fence";
		model = "\dayz_equip\models\sandbags.p3d";
		picture = "\dayz_krayz\textures\icons\fort_bagfance_round.paa";
		descriptionShort = "";
		class ItemActions {
			class Build {
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				requiretools[] = {"ItemToolbox_KR"};
				create = "Sandbag3_KR";
			};
			class Crafting1 {
				text = "Deconstruct";
				script = "spawn player_craftItem1;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox_KR"}; 
				input[] = {{"ItemFortSandbagRound",1}};
				output[] = {{"ItemSandbagRound",2},{"PartWoodPile_KR",2}};
			};
		};
	};
	class ItemTankTrap_KR: CA_Magazine {
		scope = 2;
		count = 1;
		type = 256;
		displayName = "$STR_EQUIP_NAME_22";
		model = "\dayz_equip\models\tank_trap_kit.p3d";
		picture = "\dayz_equip\textures\equip_tanktrap_kit_CA.paa";
		descriptionShort = "$STR_EQUIP_DESC_22";
		class ItemActions {
			class Build {
				text = $STR_ACTIONS_BUILD;
				script = "spawn player_build;";
				requiretools[] = {"ItemEtool"};
				create = "Hedgehog_KR";
			};
			class Crafting {
				text = "Camo Net";
				script = "spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox_KR"}; 
				input[] = {{"Skin_Net_DZ",3},{"ItemTankTrap_KR",1}};
				output[] = {{"ItemCamoNet",1}};
			};
			class Crafting1 {
				text = "Metal Pole";
				script = "spawn player_craftItem1;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox_KR"};  
				input[] = {{"PartGeneric_KR",2},{"ItemTankTrap_KR",2}};
				output[] = {{"ItemPole",1}};
			};
			class Crafting2 {
				text = "Small Ladder";
				script = "spawn player_craftItem2;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox_KR"}; 
				input[] = {{"PartGeneric_KR",1},{"ItemTankTrap_KR",2}};
				output[] = {{"ItemLadderSmall",1}};
			};
			class Crafting3 {
				text = "Large Ladder";
				script = "spawn player_craftItem3;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox_KR"}; 
				input[] = {{"PartGeneric_KR",2},{"ItemTankTrap_KR",4}};
				output[] = {{"ItemLadderLarge",1}};
			};
		};
	};
	class ItemWire_KR: CA_Magazine {
		scope = 2;
		count = 1;
		type = 256;
		displayName = "$STR_EQUIP_NAME_23";
		model = "\dayz_equip\models\Fence_wire_kit.p3d";
		picture = "\dayz_equip\textures\equip_fencewire_kit_CA.paa";
		descriptionShort = "$STR_EQUIP_DESC_23";
		class ItemActions {
			class Build {
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				requiretools[] = {"ItemEtool"};
				create = "Wire_cat1_KR";
			};
			class Crafting {
				text = "Wire (CAT2)";
				script = "spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox_KR"}; 
				input[] = {{"ItemWire_KR",3}};
				output[] = {{"ItemWire2",1}};
			};
			class Crafting1 {
				text = "H-Barrier cube";
				script = "spawn player_craftItem1;";
				neednearby[] = {};
				requiretools[] = {"ItemEtool","ItemToolbox_KR"};
				input[] = {{"ItemSandbag_KR",3},{"ItemWire_KR",1},{"ItemTankTrap_KR",1}};
				output[] = {{"ItemHBarrierCube",1}};
			};
			class Crafting2 {
				text = "Gate (lockable for owner)";
				script = "spawn player_craftItem2;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox_KR"}; 
				input[] = {{"ItemWire_KR",1},{"PartGeneric_KR",2},{"ItemGoldBar10oz",2}};
				output[] = {{"ItemGate",1}};
			};
			class Crafting3 {
				text = "Gate (locked via combination)";
				script = "spawn player_craftItem3;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox_KR"}; 
				input[] = {{"ItemWire_KR",1},{"PartGeneric_KR",2},{"ItemGoldBar10oz",1}};
				output[] = {{"ItemGate2",1}};
			};
		};
	};
	class ItemWire2 : CA_Magazine {
		scope = 2;
		count = 1;
		type = (256 * 2);
		displayName = "$STR_EQUIP_NAME_124";
		model = "\dayz_equip\models\Fence_wire_kit.p3d";
		picture = "\dayz_krayz\textures\icons\wire_cat2.paa";
		descriptionShort = "$STR_EQUIP_DESC_124";
		class ItemActions {
			class Build {
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				requiretools[] = {"ItemEtool"};
				create = "Wire_cat2";
			};
			class Crafting1 {
				text = "Deconstruct";
				script = "spawn player_craftItem1;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox_KR"}; 
				input[] = {{"ItemWire2",1}};
				output[] = {{"ItemWire_KR",3}};
			};
		};
	};
	class ItemCamoNet : CA_Magazine {
		scope = 2;
		count = 1;
		type = (256 * 3);
		displayName = "$STR_EQUIP_NAME_119";
		model = "\dayz_equip\models\tentbag_gear.p3d";
		picture = "\dayz_krayz\textures\icons\camonet.paa";
		descriptionShort = "$STR_EQUIP_DESC_119";
		class ItemActions {
			class Build {
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				requiretools[] = {"ItemToolbox_KR"};
				create = "CamoNet";
			};
			class Crafting1 {
				text = "Deconstruct";
				script = "spawn player_craftItem1;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox_KR"}; 
				input[] = {{"ItemCamoNet",1}};
				output[] = {{"Skin_Net_DZ",3},{"ItemTankTrap_KR",1}};
			};
		};
	};
	class ItemSandBagNest : CA_Magazine {
		scope = 2;
		count = 1;
		type = (256 * 6);
		displayName = "$STR_EQUIP_NAME_120";
		model = "\dayz_equip\models\tentbag_gear.p3d";
		picture = "\dayz_krayz\textures\icons\sandbagnest.paa";
		descriptionShort = "$STR_EQUIP_DESC_120";
		class ItemActions {
			class Build {
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				requiretools[] = {"ItemToolbox_KR"};
				create = "SandBagNest";
			};
			class Crafting1 {
				text = "Deconstruct";
				script = "spawn player_craftItem1;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox_KR"}; 
				input[] = {{"ItemSandBagNest",1}};
				output[] = {{"ItemSandbag_KR",2},{"PartWoodPile_KR",3},{"PartGeneric_KR",1}};
			};
			class Crafting2 {
				text = "Craft M240 Nest";
				script = "spawn player_craftItem2;";
				neednearby[] = {};
				requiretools[] = {"ItemEtool","ItemToolbox_KR","M240_DZ"};
				output[] = {{"m240_nest_kit",1}};
				input[] = {{"ItemSandBagNest",1},{"Skin_Net_DZ",1}};
				consumeweapons[] = {"M240_DZ"};
			}; 
		};
	};
	class ItemDeerStand : CA_Magazine {
		scope = 2;
		count = 1;
		type = (256 * 8);
		displayName = "Deer Stand";
		model = "\dayz_equip\models\tentbag_gear.p3d";
		picture = "\dayz_krayz\textures\icons\deerstand.paa";
		descriptionShort = "";
		class ItemActions {
			class Build {
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				requiretools[] = {"ItemToolbox_KR"};
				create = "DeerStand";
			};
			class Crafting {
				text = "Deconstruct";
				script = "spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox_KR"}; 
				input[] = {{"ItemDeerStand",1}};
				output[] = {{"PartWoodPile_KR",6},{"PartGeneric_KR",2}};
			};
		};
	};
	class ItemHBarrierCube : CA_Magazine {
		scope = 2;
		count = 1;
		type = 256;
		displayName = "$STR_EQUIP_NAME_122";
		model = "\dayz_equip\models\sandbags.p3d";
		picture = "\dayz_krayz\textures\icons\hbarrier_cube.paa";
		descriptionShort = "$STR_EQUIP_DESC_122";
		class ItemActions {
			class Build {
				text = "Build H-Barrier cube";
				script = "spawn player_build;";
				requiretools[] = {"ItemEtool"};
				create = "HBarrier_Cube";
			};
			class Crafting {
				text = "HBarrier";
				script = "spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {"ItemEtool","ItemToolbox_KR"};
				input[] = {{"ItemHBarrierCube",5}};
				output[] = {{"ItemHBarrier",1}};
			};
			class Crafting1 {
				text = "Decontruct";
				script = "spawn player_craftItem1;";
				neednearby[] = {};
				requiretools[] = {"ItemEtool","ItemToolbox_KR"};
				input[] = {{"ItemHBarrierCube",1}};
				output[] = {{"ItemSandbag_KR",3},{"ItemWire_KR",1},{"ItemTankTrap_KR",1}};
			};
		};
	};
	class ItemHBarrier : CA_Magazine {
		scope = 2;
		count = 1;
		type = (256 * 3);
		displayName = "$STR_EQUIP_NAME_123";
		model = "\dayz_equip\models\tentbag_gear.p3d";
		picture = "\dayz_krayz\textures\icons\hbarrier.paa";
		descriptionShort = "$STR_EQUIP_DESC_123";
		class ItemActions {
			class Build {
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				requiretools[] = {"ItemEtool","ItemToolbox_KR"};
				create = "HBarrier";
			};
			class Crafting {
				text = "Deconstruct";
				script = "spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox_KR"}; 
				input[] = {{"ItemHBarrier",1}};
				output[] = {{"ItemHBarrierCube",5}};
			};
		};
	};
	class ItemWatchTower : CA_Magazine {
		scope = 2;
		count = 1;
		type = (256 * 8);
		displayName = "$STR_EQUIP_NAME_121";
		model = "\dayz_equip\models\tentbag_gearcamo.p3d";
		picture = "\dayz_krayz\textures\icons\watchtower.paa";
		descriptionShort = "$STR_EQUIP_DESC_121";
		class ItemActions {
			class Build {
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				requiretools[] = {"ItemEtool","ItemToolbox_KR"};
				create = "WatchTower";
			};
			class Crafting {
				text = "Deconstruct";
				script = "spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox_KR"}; 
				input[] = {{"ItemWatchTower",1}};
				output[] = {{"Skin_Net_DZ",4},{"ItemHBarrier",2}};
			};
		};
	};
	class ItemGate : CA_Magazine {
		scope = 2;
		count = 1;
		type = (256 * 3);
		displayName = "Gate";
		model = "\dayz_equip\models\Fence_wire_kit.p3d";
		picture = "\dayz_krayz\textures\icons\gate_locked.paa";
		descriptionShort = "Lockable Gate, can be unlocked only by the owner.";
		class ItemActions {
			class Build {
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				requiretools[] = {"ItemToolbox_KR"};
				create = "Gate_Locked_DZ";
			};
			class Crafting {
				text = "Deconstruct";
				script = "spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox_KR"}; 
				input[] = {{"ItemGate",1}};
				output[] = {{"ItemWire_KR",1},{"PartGeneric_KR",2},{"ItemGoldBar10oz",2}};
			};
		};
	};
	class ItemGate2 : CA_Magazine {
		scope = 2;
		count = 1;
		type = (256 * 3);
		displayName = "Gate2";
		model = "\dayz_equip\models\Fence_wire_kit.p3d";
		picture = "\dayz_krayz\textures\icons\gate2_locked.paa";
		descriptionShort = "Lockable Gate, can be unlocked via combination.";
		class ItemActions {
			class Build {
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build_gate;";
				requiretools[] = {"ItemToolbox_KR"};
				create = "Gate2_Locked_DZ";
			};
			class Crafting {
				text = "Deconstruct";
				script = "spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox_KR"}; 
				input[] = {{"ItemGate2",1}};
				output[] = {{"ItemWire_KR",1},{"PartGeneric_KR",2},{"ItemGoldBar10oz",1}};
			};
		};
	};
	class ItemScaffolding : CA_Magazine {
		scope = 2;
		count = 1;
		type = (256 * 8);
		displayName = "Scaffolding";
		model = "\dayz_equip\models\tentbag_gearcamo.p3d";
		picture = "\dayz_equip\textures\equip_tentbag_CA.paa";
		descriptionShort = "";
		class ItemActions {
			class Build {
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				requiretools[] = {"ItemToolbox_KR"};
				create = "Scaffolding";
			};
			class Crafting {
				text = "Deconstruct";
				script = "spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox_KR"}; 
				input[] = {"ItemScaffolding",1};
				output[] = {{"PartWoodPile_KR",5},{"PartGeneric_KR",3}};
			};
		};
	};
	class ItemLadderSmall : CA_Magazine {
		scope = 2;
		count = 1;
		type = (256 * 2);
		displayName = "Small Ladder";
		model = "\dayz_equip\models\tentbag_gearcamo.p3d";
		picture = "\dayz_krayz\textures\icons\laddersmall.paa";
		descriptionShort = "";
		class ItemActions{
			class Build {
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				requiretools[] = {"ItemToolbox_KR"};
				create = "LadderSmall";
			};
			class Crafting {
				text = "Deconstruct";
				script = "spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox_KR"}; 
				input[] = {{"ItemLadderSmall",1}};
				output[] = {{"PartGeneric_KR",1},{"ItemTankTrap_KR",2}};
			};
		};
	};
	class ItemLadderLarge : CA_Magazine {
		scope = 2;
		count = 1;
		type = (256 * 4);
		displayName = "Large Ladder";
		model = "\dayz_equip\models\tentbag_gearcamo.p3d";
		picture = "\dayz_krayz\textures\icons\ladderlarge.paa";
		descriptionShort = "";
		class ItemActions {
			class Build {
				text = "$STR_ACTIONS_BUILD";
				script = "spawn player_build;";
				requiretools[] = {"ItemToolbox_KR"};
				create = "LadderLarge";
			};
			class Crafting {
				text = "Deconstruct";
				script = "spawn player_craftItem;";
				input[] = {{"ItemLadderLarge",1}};
				output[] = {{"PartGeneric_KR",2},{"ItemTankTrap_KR",4}};
			};
		};
	};
	class ItemLightBulb: CA_Magazine {
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Light Bulb";
		model = "\dayz_krayz\models\bulb.p3d";
		picture = "\dayz_krayz\textures\equip_bulb_CA.paa";
		descriptionShort = "Light Bulb";
		class ItemActions {
			class Crafting {
				text = "Craft Light Pole";
				script = "spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {"ItemEtool","ItemToolbox_KR"};
				output[] = {{"light_pole_kit",1}};
				input[] = {{"ItemLightBulb",1},{"PartGeneric_KR",1},{"PartWoodPile_KR",3}};
			};
		};
	};
	class BoltSteel_KR: CA_Magazine {
		scope = 2;
		displayName = "$STR_MAG_NAME_3";
		model = "\dayz_weapons\models\bolt_gear";
		picture = "\dayz_weapons\textures\equip_bolt_ca.paa";
		ammo = "BoltSteel";
		count = 1;
		initSpeed = 150;
		descriptionShort = "$STR_MAG_DESC_3";
		displayNameShort = "$STR_MAG_ACTION_3";
		class ItemActions {
			class ReloadMag {
				text = "Combine to 4 pack";
				script = "spawn player_reloadMag;";
				use[] = {"BoltSteel_KR","BoltSteel_KR","BoltSteel_KR","BoltSteel_KR"};
				output[] = {"BoltSteel4pack"};
			};
		};
	};
	class BoltSteel4pack: CA_Magazine {
		scope = 2;
		displayName = "Steel Bolt 4 Pack";
		model = "\dayz_weapons\models\bolt_gear";
		picture = "\dayz_weapons\textures\equip_bolt_ca.paa";
		ammo = "BoltSteel_KR";
		count = 4;
		initSpeed = 150;
		descriptionShort = "$STR_MAG_DESC_3";
		displayNameShort = "$STR_MAG_ACTION_3";
	};
	// SUPPLY CRATE ----------------------------------------------------------------------------------------------
	class bulk: CA_Magazine {
		scope = 2;
		count = 1;
		type = "(256 * 6)";
		displayName = "Supply Crate";
		model = "\dayz_krayz\models\supply_crate.p3d";
		picture = "\dayz_krayz\textures\equip_wooden_crate_ca.paa";
		descriptionShort = "12 x Random Item";
	};
	class bulk_NVGoggles: bulk {
		descriptionShort = "12 x NV Goggles";
		class ItemActions {
			class CreateMags {
				text = "Open %1";
				script = "spawn player_loadCrate;";
				output[] = {"NVGoggles",12,"weapon"};
				// types magazine, weapon, backpack
			};
		};
	};
	class bulk_DZ_Backpack_EP1: bulk {
		descriptionShort = "4 x DZ_Backpack_EP1";
		class ItemActions {
			class CreateMags {
				text = "Open %1";
				script = "spawn player_loadCrate;";
				output[] = {"DZ_Backpack_EP1",4,"backpack"};
				// types magazine, weapon, backpack
			};
		};
	};
	class bulk_30Rnd_9x19_MP5SD: bulk {
		descriptionShort = "12 x 30Rnd_9x19_MP5SD";
		class ItemActions {
			class CreateMags {
				text = "Open %1";
				script = "spawn player_loadCrate;";
				output[] = {"30Rnd_9x19_MP5SD",12,"magazine"};
			};
		};
	};
	class bulk_15Rnd_9x19_M9SD: bulk {
		descriptionShort = "12 x 15Rnd_9x19_M9SD";
		class ItemActions {
			class CreateMags {
				text = "Open %1";
				script = "spawn player_loadCrate;";
				output[] = {"15Rnd_9x19_M9SD",12,"magazine"};
			};
		};
	};
	class bulk_30Rnd_556x45_StanagSD: bulk {
		descriptionShort = "12 x 30Rnd_556x45_StanagSD";
		class ItemActions {
			class CreateMags {
				text = "Open %1";
				script = "spawn player_loadCrate;";
				output[] = {"30Rnd_556x45_StanagSD",12,"magazine"};
			};
		};
	};
	class bulk_ItemSandbag: bulk {
		descriptionShort = "12 x SandBag";
		class ItemActions {
			class CreateMags {
				text = "Open %1";
				script = "spawn player_loadCrate;";
				output[] = {"ItemSandbag_KR",12,"magazine"};
			};
		};
	};
	class bulk_ItemGPS: bulk {
		descriptionShort = "12 x GPS";
		class ItemActions {
			class CreateMags {
				text = "Open %1";
				script = "spawn player_loadCrate;";
				output[] = {"ItemGPS",12,"weapon"};
			};
		};
	};
	class bulk_ItemMap: bulk {
		descriptionShort = "12 x Map";
		class ItemActions {
			class CreateMags {
				text = "Open %1";
				script = "spawn player_loadCrate;";
				output[] = {"ItemMap",12,"weapon"};
			};
		};
	};
	class bulk_ItemEtool: bulk {
		descriptionShort = "12 x E-Tool";
		class ItemActions {
			class CreateMags {
				text = "Open %1";
				script = "spawn player_loadCrate;";
				output[] = {"ItemEtool",12,"weapon"};
			};
		};
	};
	class bulk_17Rnd_9x19_glock17: bulk {
		descriptionShort = "12 x 17Rnd_9x19_glock17";
		class ItemActions {
			class CreateMags {
				text = "Open %1";
				script = "spawn player_loadCrate;";
				output[] = {"17Rnd_9x19_glock17",12,"magazine"};
			};
		};
	};
	// FUEL BARRELS ----------------------------------------------------------------------------------------------
	class ItemOilBarrel: CA_Magazine {
		scope = 2;
		count = 1;
		// fuelQuantity = 210;
		type = 256;
		displayName = "Oil Barrel";
		model = "\dayz_krayz\models\oil_drum_model.p3d";
		picture = "\dayz_krayz\textures\equip_oil_drum_model_ca.paa";
		descriptionShort = "210 litres of Oil in a Barrel";
	};
	class ItemFuelBarrel: CA_Magazine {
		scope = 2;
		count = 1;
		fuelQuantity = 210;
		type = "(256 * 6)";
		displayName = "Fuel Barrel";
		model = "\dayz_krayz\models\oil_drum_model.p3d";
		picture = "\dayz_krayz\textures\equip_oil_drum_model_ca.paa";
		descriptionShort = "210 litres of fuel in a Barrel";
	};
	class ItemFuelBarrelEmpty: ItemFuelBarrel {
		fuelQuantity = 0;
		type = "(256 * 6)";
		displayName = "Fuel Barrel (Empty)";
		picture = "\dayz_krayz\textures\equip_oil_drum_model_e_ca.paa";
		descriptionShort = "210 litres of fuel in a Barrel (Empty)";
	}; 
	// FOOD, EPOCH ----------------------------------------------------------------------------------------------
	class FoodEdible;
	class FoodBioMeat: FoodEdible {
		scope = 2;
		displayName = "Bio Meat";
		model = "\dayz_krayz\models\biomeat_can.p3d";
		picture = "\dayz_krayz\textures\armourpottedmeat_CAN_test1_CA.paa";
		descriptionShort = "Re purposed Meat";
		bloodRegen = 1600;
	};
	// SKINS ----------------------------------------------------------------------------------------------
	class SkinBase;
	class Skin_Sniper2_DZ: SkinBase {
		scope = 2;
		displayName = "$STR_EQUIP_NAME_57";
		descriptionShort = "$STR_EQUIP_DESC_57";
	};
	class Skin_Rocket_DZ: SkinBase {
		scope = 2;
		displayName = "Officer Suit";
		descriptionShort = "Officer Suit";
	};
	class Skin_RU_Policeman_DZ: SkinBase {
		scope = 2;
		displayName = "Police Officer Uniform";
		descriptionShort = "Police Officer Uniform";
	};
	class Skin_Pilot_EP1_DZ: SkinBase {
		scope = 2;
		displayName = "Pilot Uniform";
		descriptionShort = "Pilot Uniform";
	};
	class Skin_Haris_Press_EP1_DZ: SkinBase {
		scope = 2;
		displayName = "Press Uniform";
		descriptionShort = "Press Uniform";
	};
	class Skin_Ins_Soldier_GL_DZ: SkinBase {
		scope = 2;
		displayName = "Terrorist Uniform";
		descriptionShort = "Terrorist Uniform";
	};
	class Skin_Functionary1_EP1_DZ: SkinBase {
		scope = 2;
		displayName = "Business Suit";
		descriptionShort = "Business Suit";
	};
	class Skin_Priest_DZ: SkinBase {
		scope = 2;
		displayName = "Priest Outfit";
		descriptionShort = "Priest Outfit";
	};
	class Skin_Rocker2_DZ: SkinBase {
		scope = 2;
		displayName = "Rocker Outfit";
		descriptionShort = "Rebel Uniform";
	};	
	class Skin_Bandit1_DZ: SkinBase {
		scope = 2;
		displayName = "Bandit Outfit";
		descriptionShort = "Bandit Outfit";
	};
	class Skin_Bandit2_DZ: SkinBase {
		scope = 2;
		displayName = "Bandit Outfit";
		descriptionShort = "Bandit Outfit (5-color camo, woodland)";
	};
	class Skin_SOTG_DZ: SkinBase {
		scope = 2;
		displayName = "SOTG Outfit";
		descriptionShort = "SOTG Outfit";
	};
	class Skin_BanditW1_DZ: SkinBase {
		scope = 2;
		displayName = "Bandit (female)";
		descriptionShort = "Bandit (female)";
	};
	class Skin_BanditW2_DZ: SkinBase {
		scope = 2;
		displayName = "Bandit Camo (female)";
		descriptionShort = "Bandit Camo (female)";
	};
	class Skin_SurvivorW3_DZ: SkinBase {
		scope = 2;
		displayName = "Camo Pants (female)";
		descriptionShort = "Camo Pants (female)";
	};
	class Skin_SurvivorW2_KR: SkinBase {
		scope = 2;
		displayName = "Civilian (female)";
		descriptionShort = "Civilian (female)";
	};
	class Skin_SurvivorWpink_DZ: SkinBase {
		scope = 2;
		displayName = "Civilian Pink (female)";
		descriptionShort = "Civilian Pink (female)";
	};
	class Skin_SurvivorWcombat_DZ: SkinBase {
		scope = 2;
		displayName = "Camo (female)";
		descriptionShort = "Camo Clothes (female)";
	};
	class Skin_SurvivorWdesert_DZ: SkinBase {
		scope = 2;
		displayName = "Desert (female)";
		descriptionShort = "Desert Clothes (female)";
	};
	class Skin_SurvivorWurban_DZ: SkinBase {
		scope = 2;
		displayName = "Urban (female)";
		descriptionShort = "Urban Clothes (female)";
	};
	class Skin_TK_INS_Warlord_EP1_DZ: SkinBase {
		scope = 2;
		displayName = "Takistani Warlord";
		descriptionShort = "Takistani Warlord";
	};
	class Skin_TK_INS_Soldier_EP1_DZ: SkinBase {
		scope = 2;
		displayName = "Takistani Soldier";
		descriptionShort = "Takistani Soldier";
	};
	class Skin_CZ_Special_Forces_GL_DES_EP1_DZ: SkinBase {
		scope = 2;
		displayName = "Special Forces";
		descriptionShort = "Special Forces";
	};
	class Skin_Drake_Light_DZ: SkinBase {
		scope = 2;
		displayName = "Desert Camo";
		descriptionShort = "Desert Camo";
	};
	class Skin_Soldier_Bodyguard_AA12_PMC_DZ: SkinBase {
		scope = 2;
		displayName = "Bodyguard";
		descriptionShort = "Bodyguard";
	};
	class Skin_Soldier_Sniper_PMC_DZ: SkinBase {
		scope = 2;
		displayName = "Marksman";
		descriptionShort = "Marksman";
	};
	class Skin_Soldier_TL_PMC_DZ: SkinBase {
		scope = 2;
		displayName = "Team Leader";
		descriptionShort = "Team Leader";
	};
	class Skin_Camo1_DZ : SkinBase {
		scope = 2;
		displayName = "$STR_EQUIP_NAME_58";
		descriptionShort = "$STR_EQUIP_DESC_58";
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
	class Skin_Survivor3_DZ: SkinBase {
		scope = 2;
		displayName = "Hero Clothing";
		descriptionShort = "Hero Clothing";
	};
	class Skin_Net_DZ : SkinBase {
		scope = 2;
		displayName = "$STR_EQUIP_NAME_56";
		descriptionShort = "$STR_EQUIP_DESC_56";
		class ItemActions {
			class Crafting {
				text = "Camo Net";
				script = "spawn player_craftItem;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox_KR"}; 
				input[] = {{"Skin_Net_DZ",3},{"ItemTankTrap_KR",1}};
				output[] = {{"ItemCamoNet",1}};
			};
			class Crafting1 {
				text = "Watch Tower";
				script = "spawn player_craftItem1;";
				neednearby[] = {};
				requiretools[] = {"ItemToolbox_KR"}; 
				input[] = {{"Skin_Net_DZ",4},{"ItemHBarrier",2}};
				output[] = {{"ItemWatchTower",1}};
			};
			class Crafting2 {
				text = "Craft M240 Nest";
				script = "spawn player_craftItem2;";
				neednearby[] = {};
				requiretools[] = {"ItemEtool","ItemToolbox_KR","M240_DZ"};
				output[] = {{"m240_nest_kit",1}};
				input[] = {{"ItemSandBagNest",1},{"Skin_Net_DZ",1}};
				consumeweapons[] = {"M240_DZ"};
			};
		};
	};
	//MELTING TINCANS
	class HandGrenade;
	class TrashTinCan_KR: HandGrenade {
		scope = 2;
		displayName = "$STR_EQUIP_NAME_33";
		model = "\dayz_equip\models\trash_tincan.p3d";
		picture = "\dayz_equip\textures\equip_tincan_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_33";
		ammo = "TinCan";
		class ItemActions {
			class Crafting {
				text = "Melt into Bars";
				script = "spawn player_craftItem;";
				neednearby[] = {"fire"}; 
				requiretools[] = {"ItemToolbox_KR"}; 
				output[] = {{"ItemTinBar",1}};
				input[] = {{"TrashTinCan_KR",6}};
			};
		};
	};
	class ItemSodaEmpty_KR: HandGrenade {
		scope = 2;
		displayName = "$STR_EQUIP_NAME_35";
		model = "\dayz_equip\models\soda_coke_e.p3d";
		picture = "\dayz_equip\textures\equip_soda_empty_ca.paa";
		descriptionShort = "$STR_EQUIP_DESC_35";
		ammo = "SodaCan";
		class ItemActions {
			class Crafting {
				text = "Melt into Bars";
				script = "spawn player_craftItem;";
				neednearby[] = {"fire"}; 
				requiretools[] = {"ItemToolbox_KR"}; 
				output[] = {{"ItemAluminumBar",1}};
				input[] = {{"ItemSodaEmpty_KR",6}};
			};
		};
	};
};