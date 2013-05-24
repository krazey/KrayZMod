class CfgVehicles
{
	// External class reference
	class NonStrategic;
	class BuiltItems;
	class BuiltItems2: NonStrategic{};
	class HouseBase;				
	class Constuctables: HouseBase {class DestructionEffects;};
	class Constuctables2: HouseBase {class DestructionEffects;};

	class CamoNet: Constuctables {
		scope = 2;
		destrType = "DestructNo";
		cost = 100;
		vehicleClass = "Military";
		offset[] = {0,10,0.5};
		model = "\Ca\misc3\CamoNetB_EAST";
		icon = "\Ca\misc3\data\Icons\icon_camoNetBig_ca.paa";
		mapSize = 18;
		armor = 800;
		displayName = "Camo Net";
		constructioncount = 5;
		removeoutput[] = {{"ItemCamoNet",1}};
	};
	class DeerStand : Constuctables {
		scope = 2;
		destrType = "DestructNo";
		cost = 100;
		vehicleClass = "Misc";
		offset[] = {0,5,0.5};
		model = "\Ca\Structures\Misc\Misc_DeerStand\misc_deerstand";
		icon = "\Ca\Structures\Misc\Misc_DeerStand\data\icon\icon_deerstand_ca.paa";
		ladders[] = {{"start1", "end1"}};
		mapSize = 3;
		armor = 500;
		displayName = "Deer Stand";
		constructioncount = 10;
		removeoutput[] = {{"ItemDeerStand",1}};
	};
	class WatchTower : Constuctables {
		scope = 2;
		destrType = "DestructNo";
		cost = 100;
		vehicleClass = "Fortifications";
		offset[] = {0,5,0.5};
		model = "\Ca\misc3\fort_watchtower";
		icon = "\Ca\misc3\data\Icons\icon_fortWatchTower_ca.paa";
		armor = 500;
		displayName = "Watch Tower";
		constructioncount = 10;
		ladders[] = {{"start1", "end1"}};
		removeoutput[] = {{"ItemWatchTower",1}};
	};
	class SandBagNest : Constuctables {
		scope = 2;
		destrType = "DestructNo";
		cost = 100;
		vehicleClass = "Fortifications";
		offset[] = {0,4,0.5};
		model = "\Ca\misc3\fortified_nest_small";
		icon = "\Ca\misc3\data\Icons\icon_fortNestSmall_ca.paa";
		mapSize = 5;
		armor = 500;
		displayName = "Sand Bag Nest";
		constructioncount = 5;
		irTarget = false;
		removeoutput[] = {{"ItemSandBagNest",1}};
	};
	class HBarrier_Cube : Constuctables { 
		scope = 2;
		destrType = "DestructBuilding";
		animated = 0;
		cost = 0;
		vehicleClass = "Fortifications";
		offset[] = {0,1.5,0.5};
		typicalCargo[] = {};
		irTarget = 0;
		model = "\ca\misc2\HBarrier1.p3d";
		icon = "\Ca\misc2\data\Icons\icon_hescoBarrier1_ca.paa";
		mapSize = 2;
		armor = 500;
		displayName = "Hesco Barrier cube";
		constructioncount = 2;
		accuracy = 0.3; // accuracy needed to recognize type of this target
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		coefInside = 0.5;
		coefInsideHeur = 0.8;
		picture = "\CA\ui\data\icon_wf_barriers_ca.paa";
		removeoutput[] = {{"ItemHBarrierCube",1}};
	};
	class HBarrier : Constuctables2 {
		scope = 2;
		destrType = "DestructBuilding";
		animated = 0;
		cost = 0;
		vehicleClass = "Fortifications";
		offset[] = {0,3,0.5};
		typicalCargo[] = {};
		irTarget = 0;
		model = "\ca\misc2\HBarrier5.p3d";
		icon = "\Ca\misc2\data\Icons\icon_hescoBarrier5_ca.paa";
		mapSize = 7;
		armor = 500;
		displayName = "Hesco Barrier";
		constructioncount = 5;
		accuracy = 0.3;	// accuracy needed to recognize type of this target
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		coefInside = 0.5;
		coefInsideHeur = 0.8;
		picture = "\CA\ui\data\icon_wf_barriers_ca.paa";
		removeoutput[] = {{"ItemHBarrier",1}};
	};
	class Scaffolding : Constuctables {
		scope = 2;
		destrType = "DestructNo";
		cost = 100;
		vehicleClass = "Misc";
		offset[] = {2,1.5,0.5};
		model = "\Ca\Structures\Misc\Misc_Scaffolding\Misc_Scaffolding";
		icon = "\Ca\Structures\Data\Icons\icon_scaffolding_ca.paa";
		mapSize = 16;
		armor = 500;
		displayName = "Scaffolding";
		constructioncount = 10;
		removeoutput[] = {{"ItemScaffolding",1}};
	};
	class Wire_cat1_KR: BuiltItems {
		scope = 2;
		destrType = "DestructTent";
		cost = 100;
		animated = 0;
		vehicleClass = "Fortifications";
		offset[] = {0,1.5,0.5};
		model = "\dayz_equip\models\wire_cat1.p3d";
		icon = "\Ca\misc\data\icons\I_drutkolczasty_CA.paa";
		accuracy = 0.3;
		mapSize = 5.5;
		armor = 100;
		displayName = "Wire (CAT1)";
		constructioncount = 2;
		removeoutput[] = {{"ItemWire_KR",1}};
	};
	class Wire_cat2 : BuiltItems {
		scope = 2;
		destrType = "DestructTent";
		cost = 100;
		animated = 0;
		vehicleClass = "Fortifications";
		offset[] = {0,1.5,0.5};
		model = "\ca\misc\Fort_Razorwire";
		icon = "\Ca\misc\data\icons\I_drutkolczasty_CA.paa";
		accuracy = 0.3;
		mapSize = 5.5;
		armor = 100;
		displayName = "Wire (CAT2)";
		constructioncount = 3;
		removeoutput[] = {{"ItemWire2",1}};
	};
	class Hedgehog_KR: BuiltItems {
		scope = 2;
		destrType = "DestructNo";
		cost = 100;
		offset[] = {0,1.5,0.5};
		model = "\ca\misc\jezek_kov";
		icon = "\ca\data\data\Unknown_object.paa";
		mapSize = 2;
		armor = 400;
		displayName = "Hedgehog (Steel)";
		vehicleClass = "Fortifications";
		constructioncount = 5;
		removeoutput[] = {{"ItemTankTrap_KR",1}};
	};
	class Generator_DZ: BuiltItems {
		scope = 2;
		destrType = "DestructNo";
		cost = 100;
		offset[] = {0,1.5,0};
		model = "\dayz_equip\models\generator.p3d";
		icon = "\ca\data\data\Unknown_object.paa";
		mapSize = 2;
		armor = 400;
		displayName = "Generator";
		vehicleClass = "Fortifications";
		constructioncount = 5;
		removeoutput[] = {{"ItemGenerator",1}}; 
	};
	class Sandbag1_KR: BuiltItems {
		scope = 2;
		destrType = "DestructNo";
		cost = 100;
		model = "\ca\misc2\BagFenceLong.p3d";
		icon = "\Ca\misc3\data\Icons\icon_fortBagFenceLong_ca.paa";
		offset[] = {0,1.5,0.5}; 
		mapSize = 2;
		armor = 400;
		displayName = "Bag Fence";
		vehicleClass = "Fortifications";
		constructioncount = 5;
		removeoutput[] = {{"ItemSandbag_KR",1}};
	};
	class Sandbag2_KR : BuiltItems {
		scope = 2;
		destrType = "DestructNo";
		cost = 100;
		model = "\ca\misc2\BagFenceRound.p3d";
		icon = "\Ca\misc3\data\Icons\icon_bagFenceRound_ca.paa";
		offset[] = {0,1.5,0.5}; 
		mapSize = 2;
		armor = 400;
		displayName = "Round Bag Fence";
		GhostPreview = "Sandbag2Preview"; 
		constructioncount = 5;
		vehicleClass = "Fortifications";
		removeoutput[] = {{"ItemSandbagRound",1}};
	};
	class Sandbag3_KR : BuiltItems {
		scope = 2;
		destrType = "DestructNo";
		cost = 100;
		model = "\Ca\misc3\fort_bagfence_round";
		icon = "\Ca\misc3\data\Icons\icon_fortBagFenceRound_ca.paa";
		offset[] = {0,1.5,0.5}; 
		mapSize = 3.2;
		armor = 150;
		displayName = "Fortified Round Bag Fence";
		constructioncount = 5;
		vehicleClass = "Fortifications";
		removeoutput[] = {{"ItemFortSandbagRound",1}};
	};
	class LadderSmall : BuiltItems {
		scope = 2;
		destrType = "DestructNo";
		cost = 100;
		model = "\ca\misc\ladder_half.p3d";
		icon = "\Ca\misc\data\icons\i_ladder_CA.paa";
		offset[] = {0,1.5,0.5};
		mapSize = 0.6;
		armor = 50;
		displayName = "Small Ladder";
		ladders[] = {{"start", "end"}};
		constructioncount = 2;
		vehicleClass = "Misc";
		removeoutput[] = {{"ItemLadderSmall",1}};
	};
	class LadderLarge : BuiltItems {
		scope = 2;
		destrType = "DestructNo";
		cost = 100;
		model = "\ca\misc\ladder.p3d";
		icon = "\Ca\misc\data\icons\i_ladder_CA.paa";
		offset[] = {0,1.5,0.5};
		mapSize = 0.6;
		armor = 50;
		displayName = "Large Ladder";
		ladders[] = {{"start", "end"}};
		constructioncount = 2;
		vehicleClass = "Misc";
		removeoutput[] = {{"ItemLadderLarge",1}};
	};
	class Gate_DZ : BuiltItems2 {
		scope = 2;
		destrType = "DestructNo";
		animated = true;
		typicalCargo[] = {};
		irTarget = false;
		accuracy = 0.3;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		coefInside = 0.5;
		coefInsideHeur = 0.8;
		cost = 0;
		picture = "\CA\ui\data\icon_wf_barriers_ca.paa";
		model = "\ca\misc2\BarbGate.p3d";
		icon = "\Ca\misc2\data\Icons\icon_barGate2_ca.paa";
		offset[] = {0,1.5,0.5};
		mapSize = 3;
		armor = 800;
		displayName = "Gate";
		vehicleClass = "Military";
		removeoutput[] = {{"ItemGate",1}};
		constructioncount = 5;
		class AnimationSources {
			class Door01 {
				source = "User"; 
				animPeriod = 1;
				initPhase = 0;
			};
		};
		class UserActions {
			class OpenDoors1 {
				displayNameDefault = "Open Gate";
				displayName = "Open Gate";
				position = "Door01_axis";
				radius = 3;
				onlyForPlayer = 1;
				condition = "this animationPhase ""Door01"" < 0.3";
				statement = "this animate [""Door01"", 1]";
			};
			class CloseDoors1 {
				displayNameDefault = "Close Gate";
				displayName = "Close Gate";
				position = "Door01_axis";
				radius = 3;
				onlyForPlayer = 1;
				condition = "this animationPhase ""Door01"" >= 0.3";
				statement = "this animate [""Door01"", 0]";
			};
		};
		actionBegin1 = "OpenDoors1";
		actionEnd1 = "OpenDoors1";
	};
	class Gate_Locked_DZ : BuiltItems2 {
		scope = 2;
		destrType = "DestructNo";
		animated = true;
		typicalCargo[] = {};
		irTarget = false;
		accuracy = 0.3;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		coefInside = 0.5;
		coefInsideHeur = 0.8;
		cost = 0;
		picture = "\CA\ui\data\icon_wf_barriers_ca.paa";
		model = "\ca\misc2\BarbGate.p3d";
		icon = "\Ca\misc2\data\Icons\icon_barGate2_ca.paa";
		offset[] = {0,1.5,0.5};
		mapSize = 3;
		armor = 800;
		displayName = "Locked Gate";
		vehicleClass = "Military";
		removeoutput[] = {{"ItemGate",1}};
		constructioncount = 5;
		class AnimationSources {
			class Door01 {
				source = "User"; 
				animPeriod = 1;
				initPhase = 0;
			};
		};
	};
	class Gate2_DZ : BuiltItems2 {
		scope = 2;
		destrType = "DestructNo";
		animated = true;
		typicalCargo[] = {};
		irTarget = false;
		accuracy = 0.3;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		coefInside = 0.5;
		coefInsideHeur = 0.8;
		cost = 0;
		picture = "\CA\ui\data\icon_wf_barriers_ca.paa";
		model = "\ca\misc2\BarbGate.p3d";
		icon = "\Ca\misc2\data\Icons\icon_barGate2_ca.paa";
		offset[] = {0,1.5,0.5};
		mapSize = 3;
		armor = 800;
		displayName = "Gate2";
		vehicleClass = "Military";
		removeoutput[] = {{"ItemGate2",1}};
		constructioncount = 5;
		class AnimationSources {
			class Door01 {
				source = "User"; 
				animPeriod = 1;
				initPhase = 0;
			};
		};
		class UserActions {
			class OpenDoors1 {
				displayNameDefault = "Open Gate";
				displayName = "Open Gate";
				position = "Door01_axis";
				radius = 3;
				onlyForPlayer = 1;
				condition = "this animationPhase ""Door01"" < 0.3";
				statement = "this animate [""Door01"", 1]";
			};
			class CloseDoors1 {
				displayNameDefault = "Close Gate";
				displayName = "Close Gate";
				position = "Door01_axis";
				radius = 3;
				onlyForPlayer = 1;
				condition = "this animationPhase ""Door01"" >= 0.3";
				statement = "this animate [""Door01"", 0]";
			};
		};
		actionBegin1 = "OpenDoors1";
		actionEnd1 = "OpenDoors1";
	};
	class Gate2_Locked_DZ : BuiltItems2 {
		scope = 2;
		destrType = "DestructNo";
		animated = true;
		typicalCargo[] = {};
		irTarget = false;
		accuracy = 0.3;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		coefInside = 0.5;
		coefInsideHeur = 0.8;
		cost = 0;
		picture = "\CA\ui\data\icon_wf_barriers_ca.paa";
		model = "\ca\misc2\BarbGate.p3d";
		icon = "\Ca\misc2\data\Icons\icon_barGate2_ca.paa";
		offset[] = {0,1.5,0.5};
		mapSize = 3;
		armor = 800;
		displayName = "Locked Gate2";
		vehicleClass = "Military";
		removeoutput[] = {{"ItemGate2",1}};
		constructioncount = 5;
		class AnimationSources {
			class Door01 {
				source = "User"; 
				animPeriod = 1;
				initPhase = 0;
			};
		};
	};
	// PLAYER BUILDINGS
	class Plastic_Pole_EP1;
	class Plastic_Pole_EP1_DZ: Plastic_Pole_EP1 {
		scope = 2;
		// destrType = "DestructNo"; 
		offset[] = {0,2.5,0};
		displayName = "30m Plot Pole";
		vehicleClass = "Fortifications";
	};
	class USMC_WarfareBMGNest_M240;
	class M240Nest_DZ: USMC_WarfareBMGNest_M240 {
		scope = 2;
		offset[] = {0,3.5,0};
		displayName = "M240 Nest";
		vehicleClass = "Fortifications";
		transportMaxMagazines = 25;
		transportMaxWeapons = 4;
		transportMaxBackpacks = 1;
		constructioncount = 10;
		destrType = "DestructBuilding"; 
		armor = 500;
		removeoutput[] = {{"m240_nest_kit",1}};
	};
	class Land_covering_hut_EP1;
	class CanvasHut_DZ: Land_covering_hut_EP1 {
		scope = 2;
		offset[] = {0,2.5,1};
		displayName = "Canvas Hut";
		vehicleClass = "Fortifications";
	};
	class Park_bench1;
	class ParkBench_DZ: Park_bench1 {
		scope = 2;
		offset[] = {0,1.5,0.5};
		displayName = "Wood Bench";
		vehicleClass = "Fortifications";
	};
	class Land_KBud;
	class OutHouse_DZ: Land_KBud {
		scope = 2;
		offset[] = {0,2.5,1};
		displayName = "Outhouse";
		vehicleClass = "Fortifications";
		transportMaxMagazines = 4;
		transportMaxWeapons = 1;
		transportMaxBackpacks = 1;
		constructioncount = 5;
		class transportmagazines {
			class _xx_ItemTrashToiletpaper {
				magazine = "ItemTrashToiletpaper";
				count = 1;
			};
		};
	};
	class Land_Shed_M01;
	class StorageShed_DZ: Land_Shed_M01 {
		scope = 2;
		offset[] = {0,2.5,1};
		displayName = "Storage Shed";
		vehicleClass = "Fortifications";
		transportMaxMagazines = 400;
		transportMaxWeapons = 40;
		transportMaxBackpacks = 20;
		constructioncount = 10;
	};
	class Fence_corrugated_plate;
	class Fence_corrugated_DZ: Fence_corrugated_plate {
		scope = 2;
		offset[] = {0,2.5,1};
		removeoutput[] = {{"ItemCorrugated",1}};
		displayName = "Corrugated Fence";
		vehicleClass = "Fortifications";
		
	};
	class Land_kulna;
	class WoodShack_DZ: Land_kulna {
		scope = 2;
		//destrType = "DestructBuilding"; 
		//cost = 100;
		offset[] = {0,2.5,1.3};
		//armor = 200;
		displayName = "Wooden Shack";
		vehicleClass = "Fortifications";
		transportMaxMagazines = 100;
		transportMaxWeapons = 10;
		transportMaxBackpacks = 5;
		constructioncount = 10;
	};
	class Land_Shed_wooden;
	class Wooden_shed_DZ: Land_Shed_wooden {
		scope = 2;
		//destrType = "DestructBuilding"; 
		//cost = 100;
		offset[] = {0,2.5,1};
		//armor = 100;
		displayName = "Wooden Shed";
		vehicleClass = "Fortifications";
		transportMaxMagazines = 200;
		transportMaxWeapons = 20;
		transportMaxBackpacks = 10;
	};
	class ASC_EU_LHVOld;
	class LightPole_DZ: ASC_EU_LHVOld {
		armor = 200;
		scope = 2;
		offset[] = {0,2.5,0};
		displayName = "Light Pole";
		vehicleClass = "Fortifications";
	};
	class WeaponHolderBase;
	class WeaponHolder_ItemVault: WeaponHolderBase {
		scope = 2;
		displayName = "Safe";
		model = "\dayz_krayz\models\safe1.p3d";
		class eventHandlers {
			init = "[(_this select 0),'cfgMagazines','ItemVault'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	class WeaponHolder_ItemFlashlight_KR: WeaponHolderBase {
		scope = 2;
		displayName = "$STR_EQUIP_NAME_5";
		model = "\dayz_equip\proxy\flashlight.p3d";
		class eventHandlers {
			init = "[(_this select 0),'cfgWeapons','ItemFlashlight_KR'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	class WeaponHolder_ItemFlashlightRed_KR: WeaponHolderBase {
		scope = 2;
		displayName = "$STR_EQUIP_NAME_6";
		model = "\dayz_equip\proxy\flashlight_mil.p3d";
		class eventHandlers {
			init = "[(_this select 0),'cfgWeapons','ItemFlashlightRed_KR'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	class WeaponHolder_ItemOilBarrel: WeaponHolderBase {
		scope = 2;
		displayName = "Oil Barrel";
		model = "\dayz_krayz\proxy\oil_drum_model.p3d";
		class eventHandlers {
			init = "[(_this select 0),'cfgMagazines','ItemOilBarrel'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	class WeaponHolder_ItemFuelBarrel: WeaponHolderBase {
		scope = 2;
		displayName = "Fuel Barrel";
		model = "\dayz_krayz\proxy\oil_drum_model.p3d";
		class eventHandlers {
			init = "[(_this select 0),'cfgMagazines','ItemFuelBarrel'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	class WeaponHolder_MeleeCrowbar_KR: WeaponHolderBase
	{
		scope = 2;
		displayName = "Crowbar";
		model = "\dayz_equip\models\crowbar.p3d";
		class eventHandlers {
			init = "[(_this select 0),'cfgWeapons','ItemCrowbar'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	class WeaponHolder_PartGeneric_KR: WeaponHolderBase
	{
		scope = 2;
		displayName = "$STR_EQUIP_NAME_10";
		model = "\dayz_equip\proxy\genericparts.p3d";
		class eventHandlers {
			init = "[(_this select 0),'cfgMagazines','PartGeneric_KR'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	class Land_A_tent;
	class ACamp;
	class TentStorage: Land_A_tent {
		vehicleClass = "Survival";
		transportMaxMagazines = 50;
		transportMaxWeapons = 10;
		transportMaxBackpacks = 5;
	};
	class VaultStorage: Land_A_tent {
		vehicleClass = "Survival";
		displayName = "Safe";
		model = "\dayz_krayz\models\safe1.p3d";
		destrType = "DestructNo";
		armor = 800;
		transportMaxMagazines = 200;
		transportMaxWeapons = 20;
		transportMaxBackpacks = 10;
	};	
	class VaultStorageLocked: Land_A_tent {
		vehicleClass = "Survival";
		displayName = "Locked Safe";
		model = "\dayz_krayz\models\safe1.p3d";
		destrType = "DestructNo";
		armor = 800;
		transportMaxMagazines = 0;
		transportMaxWeapons = 0;
		transportMaxBackpacks = 0;
	};
	//PLAYER SOURCES ---------------------------------------------------------------------------------
	class Soldier_Bodyguard_M4_PMC;
	class SurvivorW2_KR : Soldier_Bodyguard_M4_PMC {
		displayName = "$STR_CHAR_1";
		side = 1;
		weapons[] = {"Throw","Put"};
		model = "\dayz\characters\annie_original";
		magazines[] = {};
		respawnWeapons[] = {"Throw","Put"};
		respawnMagazines[] = {};
		weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
		canHideBodies = 1;
		identityTypes[] = {"Language_W_EN_EP1","Woman"};
		languages[] = {"EN"};
		class TalkTopics {
			core = "Core_E";
			core_en = "Core_Full_E";
		};
		genericNames = "EnglishWomen";
		class SpeechVariants {
			class Default {
				speechSingular[] = {"veh_woman"};
				speechPlural[] = {"veh_women"};
			};
			class EN: Default{};
			class CZ {
				speechSingular[] = {"veh_woman_CZ"};
				speechPlural[] = {"veh_women_CZ"};
			};
			class CZ_Akuzativ {
				speechSingular[] = {"veh_woman_CZ4P"};
				speechPlural[] = {"veh_women_CZ4P"};
			};
			class RU {
				speechSingular[] = {"veh_woman_RU"};
				speechPlural[] = {"veh_women_RU"};
			};
		};
		TextPlural = "Women";
		TextSingular = "Woman";
		nameSound = "veh_woman";
		class HitDamage {
			class Group0 {
				hitSounds[] = {
					{ 
						{ "ca\sounds\Characters\Noises\Damage\banz-hit-01",0.177828,1,120 },0.2 },
					{ 
						{ "ca\sounds\Characters\Noises\Damage\banz-hit-02",0.177828,1,120 },0.2 },
					{ 
						{ "ca\sounds\Characters\Noises\Damage\banz-hit-03",0.177828,1,120 },0.2 },
					{ 
						{ "ca\sounds\Characters\Noises\Damage\banz-hit-04",0.177828,1,120 },0.1 },
					{ 
						{ "ca\sounds\Characters\Noises\Damage\banz-hit-05",0.177828,1,120 },0.1 },
					{ 
						{ "ca\sounds\Characters\Noises\Damage\banz-hit-06",0.177828,1,120 },0.1 },
					{ 
						{ "ca\sounds\Characters\Noises\Damage\banz-hit-07",0.177828,1,120 },0.1 }};
				damageSounds[] = {
					{ "body",
						{ "ca\sounds\Characters\Noises\Damage\banz-damage-g1-01",0.0562341,1,120,0.25,5,6,10 } },
					{ "body",
						{ "ca\sounds\Characters\Noises\Damage\banz-damage-g1-02",0.0562341,1,120,0.25,5,7.5,10 } },
					{ "body",
						{ "ca\sounds\Characters\Noises\Damage\banz-damage-g1-03",0.0562341,1,120,0.25,5,6,10 } },
					{ "body",
						{ "ca\sounds\Characters\Noises\Damage\banz-damage-g1-04",0.0562341,1,120,0.25,5,7.5,10 } },
					{ "hands",
						{ "ca\sounds\Characters\Noises\Damage\banz-damage-g1-07-arm",0.0562341,1,120,0.5,0,2.5,5 } },
					{ "hands",
						{ "ca\sounds\Characters\Noises\Damage\banz-damage-g1-08-arm",0.0562341,1,120,0.5,0,2.5,5 } },
					{ "legs",
						{ "ca\sounds\Characters\Noises\Damage\banz-damage-g1-05-leg",0.0562341,1,120,0.5,0,1,2 } },
					{ "legs",
						{ "ca\sounds\Characters\Noises\Damage\banz-damage-g1-06-leg",0.0562341,1,120,0.5,0,1,2 } }};
			};
		};
		class SoundBreath {
			breath0[] = {
				{ 
					{ 
						{ "\ca\sounds\Characters\Noises\Breath\hanz-run-breath-01",0.0562341,1,8 },0.25 },
					{ 
						{ "\ca\sounds\Characters\Noises\Breath\hanz-run-breath-02",0.0562341,1,8 },0.25 },
					{ 
						{ "\ca\sounds\Characters\Noises\Breath\hanz-run-breath-03",0.0562341,1,8 },0.25 },
					{ 
						{ "\ca\sounds\Characters\Noises\Breath\hanz-run-breath-04",0.125893,1,8 },0.25 } },
				{ 
					{ 
						{ "\ca\sounds\Characters\Noises\Breath\hanz-run2-breath-01",0.0562341,1,15 },0.25 },
					{ 
						{ "\ca\sounds\Characters\Noises\Breath\hanz-run2-breath-02",0.0562341,1,15 },0.25 },
					{ 
						{ "\ca\sounds\Characters\Noises\Breath\hanz-run2-breath-03",0.0562341,1,15 },0.25 },
					{ 
						{ "\ca\sounds\Characters\Noises\Breath\hanz-run2-breath-04",0.125893,1,15 },0.25 } },
				{ 
					{ 
						{ "\ca\sounds\Characters\Noises\Breath\hanz-sprint-breath-01",0.1,1,20 },0.25 },
					{ 
						{ "\ca\sounds\Characters\Noises\Breath\hanz-sprint-breath-02",0.1,1,20 },0.25 },
					{ 
						{ "\ca\sounds\Characters\Noises\Breath\hanz-sprint-breath-03",0.1,1,20 },0.25 },
					{ 
						{ "\ca\sounds\Characters\Noises\Breath\hanz-sprint-breath-04",0.1,1,20 },0.25 } }};
		};
		class SoundGear {
			primary[] = {
				{ "walk",
					{ "",0.00177828,1,10 } },
				{ "run",
					{ "",0.00316228,1,15 } },
				{ "sprint",
					{ "",0.00562341,1,20 } }};
			secondary[] = {
				{ "walk",
					{ "",0.00177828,1,10 } },
				{ "run",
					{ "",0.00316228,1,10 } },
				{ "sprint",
					{ "",0.00562341,1,10 } }};
		};
		class SoundEquipment {
			soldier[] = {
				{ "walk",
					{ "",0.00177828,1,13 } },
				{ "run",
					{ "",0.00316228,1,20 } },
				{ "sprint",
					{ "",0.00398107,1,25 } }};
			civilian[] = {
				{ "walk",
					{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-walk-01",0.177828,1,8 } },
				{ "walk",
					{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-walk-02",0.177828,1,8 } },
				{ "walk",
					{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-walk-03",0.177828,1,8 } },
				{ "walk",
					{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-walk-04",0.177828,1,8 } },
				{ "walk",
					{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-walk-05",0.177828,1,8 } },
				{ "walk",
					{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-walk-06",0.177828,1,8 } },
				{ "walk",
					{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-walk-07",0.177828,1,8 } },
				{ "walk",
					{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-walk-08",0.177828,1,8 } },
				{ "run",
					{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-run-01",0.1,1,15 } },
				{ "run",
					{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-run-02",0.1,1,15 } },
				{ "run",
					{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-run-03",0.1,1,15 } },
				{ "run",
					{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-run-04",0.1,1,15 } },
				{ "run",
					{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-run-05",0.1,1,15 } },
				{ "run",
					{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-run-06",0.1,1,15 } },
				{ "run",
					{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-run-07",0.1,1,15 } },
				{ "run",
					{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-run-08",0.1,1,15 } },
				{ "sprint",
					{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-sprint-01",0.0562341,1,20 } },
				{ "sprint",
					{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-sprint-02",0.0562341,1,20 } },
				{ "sprint",
					{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-sprint-03",0.0562341,1,20 } },
				{ "sprint",
					{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-sprint-04",0.0562341,1,20 } },
				{ "sprint",
					{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-sprint-05",0.0562341,1,20 } },
				{ "sprint",
					{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-sprint-06",0.0562341,1,20 } },
				{ "sprint",
					{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-sprint-07",0.0562341,1,20 } },
				{ "sprint",
					{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-sprint-08",0.0562341,1,20 } }};
		};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\dayz_krayz\character\female\baker_co.paa"};
	};
	class BanditW1_DZ: SurvivorW2_KR {
		side = 1;
		model = "\dayz\characters\woman_bandit";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\ca\characters_e\woman\baker\data\baker_co.paa"};
	};
	class BanditW2_DZ: BanditW1_DZ {
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\ca\characters_e\woman\baker\data\european_woman_01_co.paa"};
	};
	class SurvivorW3_DZ: SurvivorW2_KR
	{
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\ca\characters_e\woman\baker\data\european_woman_01_co.paa"};
	};
	class SurvivorWpink_DZ: SurvivorW2_KR
	{
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\dayz_krayz\character\female\GirlyGirl.paa"};
	};
	class SurvivorWcombat_DZ: SurvivorW2_KR
	{
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\dayz_krayz\character\female\CombatGirl.paa"};
	};
	class SurvivorWdesert_DZ: SurvivorW2_KR
	{
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\dayz_krayz\character\female\DesertGirl.paa"};
	};
	class SurvivorWurban_DZ: SurvivorW2_KR
	{
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\dayz_krayz\character\female\UrbanGirl.paa"};
	};
	//PLAYER ZOMBIES
	class Citizen1;
	class PZombie_VB: Citizen1 {
		side = 1;
		glassesEnabled = 0;
		//moves = "CfgMovesPlayerZombie";
		moves = "CfgMovesZombie";
		gestures = "CfgGesturesMale";

		weapons[] = {};
		weaponSlots = "";
		backpack = "";
		magazines[] = {};
		respawnWeapons[] = {};
		respawnMagazines[] = {};

		faceType = "ZFaces";
		identityTypes[] = {"Zombie1_KR","Zombie2_KR","Zombie3_KR"};
		extCameraPosition[] = {0,1.5,-9};
		
		canHideBodies = 0;
	};
	class pz_policeman: PZombie_VB {
		model = "\ca\characters2\civil\Policeman\Policeman";
		class Wounds {
			tex[] = {};
			mat[] = {"ca\characters2\civil\policeman\data\policeman.rvmat","ca\characters2\civil\policeman\data\w1_policeman.rvmat","ca\characters2\civil\policeman\data\w2_policeman.rvmat","ca\characters\heads\male\defaulthead\data\hhl.rvmat","ca\characters\heads\male\defaulthead\data\hhl_wounds.rvmat","ca\characters\heads\male\defaulthead\data\hhl_wounds.rvmat"};
		};
	};
	class pz_suit1: PZombie_VB {
		model = "\ca\characters2\civil\Functionary\Functionary";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\dayz_krayz\character\zclothes\functionary_co.paa"};
		class Wounds {
			tex[] = {};
			mat[] = {"ca\characters2\civil\Functionary\data\Functionary.rvmat","ca\characters2\civil\Functionary\data\W1_Functionary.rvmat","ca\characters2\civil\Functionary\data\W2_Functionary.rvmat","ca\characters\heads\male\defaulthead\data\hhl.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat"};
		};
	};
	class pz_suit2: pz_suit1 {
		hiddenSelectionsTextures[] = {"\ca\characters2\civil\functionary\data\functionary2_co.paa"};
	};
	class pz_worker1: PZombie_VB {
		model = "\Ca\characters_E\Overall\Overall";
		hiddenSelections[] = {"Camo"};
		class Wounds {
			tex[] = {};
			mat[] = {"Ca\characters_E\Overall\Data\Overall.rvmat","Ca\characters_E\Overall\Data\W1_Overall.rvmat","Ca\characters_E\Overall\Data\W2_Overall.rvmat"};
		};
		hiddenSelectionsTextures[] = {"\dayz_krayz\character\zclothes\Overall_4_co.paa"};
	};
	class pz_worker2: pz_worker1 {
		hiddenSelectionsTextures[] = {"\dayz_krayz\character\zclothes\Overall_3_co.paa"};
	};
	class pz_worker3: pz_worker1 {
		hiddenSelectionsTextures[] = {"\dayz_krayz\character\zclothes\Overall_2_co.paa"};
	};
	class pz_doctor: PZombie_VB {
		model = "\ca\characters2\civil\Doctor\Doctor";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\dayz_krayz\character\zclothes\doctor_co.paa"};
		class Wounds {
			tex[] = {};
			mat[] = {"ca\characters2\civil\doctor\data\doctor.rvmat","ca\characters2\civil\doctor\data\W1_doctor.rvmat","ca\characters2\civil\doctor\data\W2_doctor.rvmat","ca\characters\heads\male\defaulthead\data\hhl.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat"};
		};
	};
	class pz_teacher: pz_doctor {
		hiddenSelectionsTextures[] = {"\dayz_krayz\character\zclothes\teacher_co.paa"};
	};
	class pz_hunter: PZombie_VB {
		model = "\ca\characters2\civil\Woodlander\Woodlander";
		hiddenSelections[] = {"Camo"};
		class Wounds {
			tex[] = {};
			mat[] = {"ca\characters2\civil\Woodlander\data\Woodlander.rvmat","ca\characters2\civil\Woodlander\data\W1_Woodlander.rvmat","ca\characters2\civil\Woodlander\data\W2_Woodlander.rvmat","ca\characters\heads\male\defaulthead\data\hhl.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat"};
		};
	};
	class pz_villager1: PZombie_VB {
		model = "\ca\characters2\civil\Villager\Villager";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\dayz_krayz\character\zclothes\villager_co.paa"};
		class Wounds {
			tex[] = {};
			mat[] = {"ca\characters\heads\male\defaulthead\data\hhl.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat","ca\characters2\Civil\Villager\Data\villager.RVmat","ca\characters2\Civil\Villager\Data\villager_w1.RVmat","ca\characters2\Civil\Villager\Data\villager_w2.RVmat"};
		};
	};
	class pz_villager2: pz_villager1 {
		hiddenSelectionsTextures[] = {"\dayz_krayz\character\zclothes\villager_v2_co.paa"};
	};
	class pz_villager3: pz_villager1 {
		hiddenSelectionsTextures[] = {"\dayz_krayz\character\zclothes\villager_v3_co.paa"};
	};
	class pz_priest: PZombie_VB {
		model = "\ca\characters2\civil\Priest\Priest";
		class Wounds {
			tex[] = {};
			mat[] = {"ca\characters2\civil\priest\data\priest.rvmat","ca\characters2\civil\priest\data\W1_priest.rvmat","ca\characters2\civil\priest\data\W2_priest.rvmat","ca\characters\heads\male\defaulthead\data\hhl.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat"};
		};
	};
	//AI ZOMBIES
	class zZombie_Base_KR: Citizen1 {
		scope = 2;
		glassesEnabled = 0;
		vehicleClass = "Zombie";
		displayName = "Zombie";
		fsmDanger = "";
		fsmFormation = "";
		zombieLoot = "civilian";
		moves = "CfgMovesZombie";
		isMan = 0;
		weapons[] = {};
		magazines[] = {};
		sensitivity = 4;
		sensitivityEar = 2;

		faceType = "ZFaces";
		identityTypes[] = {"Zombie1_KR","Zombie2_KR","Zombie3_KR"};

		class TalkTopics{};
		languages[] = {};
		class Eventhandlers {
			init = "_this call zombie_initialize;";
			local = "diag_log ('Locality Event');if(_this select 1) then {[(position (_this select 0)),(_this select 0),true] execFSM '\z\AddOns\dayz_code\system\zombie_agent.fsm'};";
		};
		class HitPoints {
			class HitHead {
				armor = 0.3;
				material = -1;
				name = "head_hit";
				passThrough = 1;
				memoryPoint = "pilot";
			};
			class HitBody: HitHead {
				armor = 1.6;
				name = "body";
				memoryPoint = "aimPoint";
			};
			class HitSpine: HitHead {
				armor = 1.6;
				name = "Spine2";
				memoryPoint = "aimPoint";
			};
			class HitHands: HitHead {
				armor = 0.5;
				material = -1;
				name = "hands";
				passThrough = 1;
			};
			class HitLArm: HitHands {
				name = "LeftArm";
				memoryPoint = "lelbow";
			};
			class HitRArm: HitHands {
				name = "RightArm";
				memoryPoint = "relbow";
			};
			class HitLForeArm: HitHands {
				name = "LeftForeArm";
				memoryPoint = "lwrist";
			};
			class HitRForeArm: HitHands {
				name = "RightForeArm";
				memoryPoint = "rwrist";
			};
			class HitLHand: HitHands {
				name = "LeftHand";
				memoryPoint = "LeftHandMiddle1";
			};
			class HitRHand: HitHands {
				name = "RightHand";
				memoryPoint = "RightHandMiddle1";
			};
			class HitLegs: HitHands {
				name = "legs";
				memoryPoint = "pelvis";
			};
			class HitLLeg: HitHands {
				name = "LeftLeg";
				memoryPoint = "lknee";
			};
			class HitLLegUp: HitHands {
				name = "LeftUpLeg";
				memoryPoint = "lfemur";
			};
			class HitRLeg: HitHands {
				name = "RightLeg";
				memoryPoint = "rknee";
			};
			class HitRLegUp: HitHands {
				name = "RightUpLeg";
				memoryPoint = "rfemur";
			};
		};
	};
	class z_policeman_KR: zZombie_Base_KR {
		model = "\ca\characters2\civil\Policeman\Policeman";
		zombieLoot = "policeman";
		class Wounds {
			tex[] = {};
			mat[] = {"ca\characters2\civil\policeman\data\policeman.rvmat","ca\characters2\civil\policeman\data\w1_policeman.rvmat","ca\characters2\civil\policeman\data\w2_policeman.rvmat","ca\characters\heads\male\defaulthead\data\hhl.rvmat","ca\characters\heads\male\defaulthead\data\hhl_wounds.rvmat","ca\characters\heads\male\defaulthead\data\hhl_wounds.rvmat"};
		};
	};
	class z_suit1_KR : zZombie_Base_KR {
		class Wounds {
			tex[] = {};
			mat[] = {"ca\characters2\civil\Functionary\data\Functionary.rvmat", "ca\characters2\civil\Functionary\data\W1_Functionary.rvmat", "ca\characters2\civil\Functionary\data\W2_Functionary.rvmat", "ca\characters\heads\male\defaulthead\data\hhl.rvmat", "ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat", "ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat"};
		};
		model = "\ca\characters2\civil\Functionary\Functionary";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\dayz_krayz\character\zclothes\functionary_co.paa"};
		zombieLoot = "generic";
	};
	class z_suit2_KR : z_suit1_KR {
		zombieLoot = "civilian";
		hiddenSelectionsTextures[] = {"\dayz_krayz\character\zclothes\functionary2_co.paa"};
	};
	class z_worker1_KR : zZombie_Base_KR {
		class Wounds {
			tex[] = {};
			mat[] = {"Ca\characters_E\Overall\Data\Overall.rvmat", "Ca\characters_E\Overall\Data\W1_Overall.rvmat", "Ca\characters_E\Overall\Data\W2_Overall.rvmat"};
		};
		zombieLoot = "";
		model = "\Ca\characters_E\Overall\Overall";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\dayz_krayz\character\zclothes\Overall_4_co.paa"};
	};
	class z_worker2_KR : z_worker1_KR {
		hiddenSelectionsTextures[] = {"\dayz_krayz\character\zclothes\Overall_3_co.paa"};
	};
	class z_worker3_KR : z_worker1_KR {
		hiddenSelectionsTextures[] = {"\dayz_krayz\character\zclothes\Overall_2_co.paa"};
	};
	class z_doctor_KR: zZombie_Base_KR {
		model = "\ca\characters2\civil\Doctor\Doctor";
		zombieLoot = "medical";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\dayz_krayz\character\zclothes\doctor_co.paa"};
		class Wounds {
			tex[] = {};
			mat[] = {"ca\characters2\civil\doctor\data\doctor.rvmat","ca\characters2\civil\doctor\data\W1_doctor.rvmat","ca\characters2\civil\doctor\data\W2_doctor.rvmat","ca\characters\heads\male\defaulthead\data\hhl.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat"};
		};
	};
	class z_teacher_KR: z_doctor_KR {
		zombieLoot = "civilian";
		hiddenSelectionsTextures[] = {"\dayz_krayz\character\zclothes\teacher_co.paa"};
	};
	class z_hunter_KR: zZombie_Base_KR {
		model = "\ca\characters2\civil\Woodlander\Woodlander";
		zombieLoot = "hunter";
		hiddenSelections[] = {"Camo"};
		class Wounds {
			tex[] = {};
			mat[] = {"ca\characters2\civil\Woodlander\data\Woodlander.rvmat","ca\characters2\civil\Woodlander\data\W1_Woodlander.rvmat","ca\characters2\civil\Woodlander\data\W2_Woodlander.rvmat","ca\characters\heads\male\defaulthead\data\hhl.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat"};
		};
	};
	class z_villager1_KR : zZombie_Base_KR {
		class Wounds  {
			tex[] = {};
			mat[] = {"ca\characters\heads\male\defaulthead\data\hhl.rvmat", "ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat", "ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat", "ca\characters2\Civil\Villager\Data\villager.RVmat", "ca\characters2\Civil\Villager\Data\villager_w1.RVmat", "ca\characters2\Civil\Villager\Data\villager_w2.RVmat"};
		};
		zombieLoot = "civilian";
		model = "\ca\characters2\civil\Villager\Villager";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\dayz_krayz\character\zclothes\villager_co.paa"};
	};
	class z_villager2_KR : z_villager1_KR {
		hiddenSelectionsTextures[] = {"\dayz_krayz\character\zclothes\villager_v2_co.paa"};
	};
	class z_villager3_KR : z_villager1_KR {
		hiddenSelectionsTextures[] = {"\dayz_krayz\character\zclothes\villager_v3_co.paa"};
	};
class z_soldier_KR : zZombie_Base_KR {
		displayName = "Zombie Soldier";
		model = "\ca\characters2\Blufor\Soldier_Light";
		zombieLoot = "military";
		class HitPoints : HitPoints {
			class HitHead {
				armor = 0.3;
				material = -1;
				name = "head_hit";
				passThrough = 1;
			};
			class HitBody {
				armor = 2.4;
				material = -1;
				name = "body";
				passThrough = 1;
			};
			class HitHands {
				armor = 1;
				material = -1;
				name = "hands";
				passThrough = 1;
			};
			class HitLegs {
				armor = 1;
				material = -1;
				name = "legs";
				passThrough = 1;
			};
		};
		class Wounds {
			tex[] = {};
			mat[] = {"ca\characters2\Blufor\data\Soldier.RVmat", "ca\characters2\Blufor\data\Soldier_W1.RVmat", "ca\characters2\Blufor\data\Soldier_W2.RVmat", "ca\characters2\Blufor\data\Soldier_Light.RVmat", "ca\characters2\Blufor\data\Soldier_Light_W1.RVmat", "ca\characters2\Blufor\data\Soldier_Light_W2.RVmat", "ca\characters2\Blufor\data\Soldier_EQUIP_Light.RVmat", "ca\characters2\Blufor\data\Soldier_Light_EQUIP_W2.RVmat", "ca\characters2\Blufor\data\Soldier_Light_EQUIP_W1.RVmat", "ca\characters2\Blufor\data\Soldier_GL.RVmat", "ca\characters2\Blufor\data\Soldier_GL_W1.RVmat", "ca\characters2\Blufor\data\Soldier_GL_W2.RVmat", "ca\characters2\Blufor\data\Soldier_NCO.RVmat", "ca\characters2\Blufor\data\Soldier_NCO_W1.RVmat", "ca\characters2\Blufor\data\Soldier_NCO_W2.RVmat", "ca\characters2\Blufor\data\Soldier_MG.RVmat", "ca\characters2\Blufor\data\Soldier_MG_W1.RVmat", "ca\characters2\Blufor\data\Soldier_MG_W2.RVmat", "ca\characters2\Blufor\data\Soldier_AT.RVmat", "ca\characters2\Blufor\data\Soldier_AT_W1.RVmat", "ca\characters2\Blufor\data\Soldier_AT_W2.RVmat", "ca\characters2\Blufor\data\Soldier_CO.RVmat", "ca\characters2\Blufor\data\Soldier_CO_W1.RVmat", "ca\characters2\Blufor\data\Soldier_CO_W2.RVmat", "ca\characters2\Blufor\data\Soldier_CO_EQUIP.RVmat", "ca\characters2\Blufor\data\Soldier_CO_EQUIP_W1.RVmat", "ca\characters2\Blufor\data\Soldier_CO_EQUIP_W2.RVmat", "ca\characters2\Blufor\data\Soldier_Pilot.RVmat", "ca\characters2\Blufor\data\Soldier_Pilot_W1.RVmat", "ca\characters2\Blufor\data\Soldier_Pilot_W2.RVmat", "ca\characters2\Blufor\data\Soldier_Pilot_EQUIP.RVmat", "ca\characters2\Blufor\data\Soldier_Pilot_EQUIP_W1.RVmat", "ca\characters2\Blufor\data\Soldier_Pilot_EQUIP_W2.RVmat", "ca\characters2\Blufor\data\Soldier_Guard.RVmat", "ca\characters2\Blufor\data\Soldier_Guard_W1.RVmat", "ca\characters2\Blufor\data\Soldier_Guard_W2.RVmat", "ca\characters2\Blufor\data\Soldier_Crew.RVmat", "ca\characters2\Blufor\data\Soldier_Crew_W1.RVmat", "ca\characters2\Blufor\data\Soldier_Crew_W2.RVmat", "ca\characters2\Blufor\data\Soldier_Crew_EQUIP.RVmat", "ca\characters2\Blufor\data\Soldier_Crew_EQUIP_W1.RVmat", "ca\characters2\Blufor\data\Soldier_Crew_EQUIP_W2.RVmat", "ca\characters2\Blufor\data\Soldier_Guard_EQUIP.RVmat", "ca\characters2\Blufor\data\Soldier_Guard_EQUIP_W1.RVmat", "ca\characters2\Blufor\data\Soldier_Guard_EQUIP_W2.RVmat"};
		};
	};
	class z_soldier_pilot_KR : z_soldier_KR {
		displayName = "Zombie Soldier (Pilot)";
		model = "\ca\characters_d_BAF\BAF_Pilot_BAF";
		hiddenSelections[] = {"Camo", "Camo2", "Camo3"};
		hiddenSelectionsTextures[] = {"\ca\characters_W_baf\data\camo_dpm_co.paa", "\ca\characters_W_baf\data\armour_dpm_co.paa", "\ca\characters_W_baf\data\equip_dpm_co.paa"};
		class HitPoints : HitPoints {
			class HitHead {
				armor = 2;
				material = -1;
				name = "head_hit";
				passThrough = 1;
			};
			class HitBody {
				armor = 3;
				material = -1;
				name = "body";
				passThrough = 1;
			};
			class HitHands {
				armor = 1;
				material = -1;
				name = "hands";
				passThrough = 1;
			};
			class HitLegs {
				armor = 1;
				material = -1;
				name = "legs";
				passThrough = 1;
			};
		};
	};
	class z_soldier_heavy_KR : z_soldier_KR {
		displayName = "Zombie Soldier (Heavy)";
		model = "\ca\characters2\Blufor\Soldier";
		class HitPoints : HitPoints {
			class HitHead {
				armor = 1;
				material = -1;
				name = "head_hit";
				passThrough = 1;
			};
			class HitBody {
				armor = 2.4;
				material = -1;
				name = "body";
				passThrough = 1;
			};
			class HitHands {
				armor = 1;
				material = -1;
				name = "hands";
				passThrough = 1;
			};
			class HitLegs {
				armor = 1;
				material = -1;
				name = "legs";
				passThrough = 1;
			};
		};
	};
};