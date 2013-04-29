class CfgVehicles
{
	class NonStrategic;
	class BuiltItems: NonStrategic{};
	class TrapItems: NonStrategic{};

	class HouseBase;				// External class reference
	
	class Constuctables : HouseBase {
		class DestructionEffects;	// External class reference
	};

	class CamoNet: Constuctables
	{
		scope = 2;
		destrType = "DestructTent";
		cost = 100;
		vehicleClass = "Military";
		offset[] = {0,1.10,0.5};
		model = "\Ca\misc3\CamoNetB_EAST";
		icon = "\Ca\misc3\data\Icons\icon_camoNetBig_ca.paa";
		mapSize = 18;
		armor = 20;
		displayName = "Camo Net";
		constructioncount = 5;
		removeoutput[] = {{"ItemCamoNet",1}};
	};
	class DeerStand : Constuctables
	{
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
	class WatchTower : Constuctables
	{
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
	class SandBagNest : Constuctables
	{
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
	class HBarrier : Constuctables
	{
		scope = 2;
		destrType = "DestructBuilding";
		animated = false;
		cost = 0;
		vehicleClass = "Fortifications";
		offset[] = {0,3,0.5};
		typicalCargo[] = {};
		irTarget = false;
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
	class Scaffolding : Constuctables
	{
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
	class Fort_RazorWire : BuiltItems
	{ 
		scope = 2; 
		animated = 0; 
		vehicleClass = "Fortifications"; 
		model = "\dayz_equip\models\wire_cat1.p3d"; 
		icon = "\Ca\misc\data\icons\I_drutkolczasty_CA.paa"; 
		offset[] = {0,1.5,0.5}; 
		accuracy = 0.3; 
		mapSize = 5.5; 
		displayName = "Wire"; 
		destrType = "DestructTent"; 
		armor = 100; 
		constructioncount = 1;
		removeoutput[] = {{"ItemWire",1}};
	}
	/*class Wire_cat1: BuiltItems
	{
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
		removeoutput[] = {{"ItemWire",1}};
	};
	class Wire_cat2: Wire_cat1
	{
		displayName = "Wire (CAT2)";
		model = "\dayz_equip\models\wire_cat2.p3d";
		removeoutput[] = {{"ItemWire2",1}};
	};*/
	class Wire2 : Constuctables
	{
		scope = 2;
		destrType = "DestructTent";
		cost = 100
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
	class Hedgehog_DZ: BuiltItems
	{
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
		removeoutput[] = {{"ItemTankTrap",1}};
	};
	class Generator_DZ: BuiltItems
	{
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
	class Sandbag1_DZ: BuiltItems
	{
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
		removeoutput[] = {{"ItemSandbag",1}};
	};
	class Sandbag2_DZ : BuiltItems
	{
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
	class Sandbag3_DZ : BuiltItems
	{
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
	class LadderSmall : BuiltItems
	{
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
		vehicleClass = "Misc";
		removeoutput[] = {{"ItemLadderSmall",1}};
	};
	class LadderLarge : BuiltItems
	{
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
		vehicleClass = "Misc";
		removeoutput[] = {{"ItemLadderLarge",1}};
	};
	class Gate1_DZ : BuiltItems
	{
		scope = 2;
		destrType = "DestructTree";
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
		GhostPreview = "Land_HBarrier_largePreview";
		model = "\ca\misc2\BarbGate.p3d";
		icon = "\Ca\misc2\data\Icons\icon_barGate2_ca.paa";
		offset[] = {0,1.5,0.5};
		mapSize = 3;
		armor = 500;
		displayName = "Gate";
		vehicleClass = "Military";
		removeoutput[] = {{"ItemGate",1}};

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
				radius = 4;
				onlyForPlayer = 1;
				condition = "this animationPhase ""Door01"" < 0.5";
				statement = "this animate [""Door01"", 1]";
			};
			
			class CloseDoors1 {
				displayNameDefault = "Close Gate";
				displayName = "Close Gate";
				position = "Door01_axis";
				radius = 4;
				onlyForPlayer = 1;
				condition = "this animationPhase ""Door01"" >= 0.5";
				statement = "this animate [""Door01"", 0]";
			};
		};
		actionBegin1 = "OpenDoors1";
		actionEnd1 = "OpenDoors1";
	};
	class Land_HBarrier1_DZ : BuiltItems { 
		scope = 2; 
		animated = 0; 
		vehicleClass = "Fortifications"; 
		typicalCargo[] = {};
		offset[] = {0,1.5,0.5};
		irTarget = 0; 
		accuracy = 0.3; 
		transportAmmo = 0; 
		transportRepair = 0; 
		transportFuel = 0; 
		destrType = "DestructBuilding"; 
		armor = 500; 
		coefInside = 0.5; 
		coefInsideHeur = 0.8; 
		cost = 0; 
		picture = "\CA\ui\data\icon_wf_barriers_ca.paa"; 
		model = "\ca\misc2\HBarrier1.p3d"; 
		icon = "\Ca\misc2\data\Icons\icon_hescoBarrier1_ca.paa"; 
		mapSize = 2; 
		displayName = "H-barrier cube"; 
		GhostPreview = "Land_HBarrier1Preview"; 
		constructioncount = 10;
		removeoutput[] = {{"ItemSandbagLarge",1}};
	};

	// PLAYER BUILDINGS
	class Plastic_Pole_EP1;
	class Plastic_Pole_EP1_DZ: Plastic_Pole_EP1
	{
		scope = 2;
		// destrType = "DestructNo"; 
		offset[] = {0,2.5,0};
		displayName = "30m Plot Pole";
		vehicleClass = "Fortifications";
	};
	class USMC_WarfareBMGNest_M240;
	class M240Nest_DZ: USMC_WarfareBMGNest_M240
	{
		scope = 2;
		offset[] = {0,3.5,0};
		displayName = "M240 Nest";
		vehicleClass = "Fortifications";
		transportMaxMagazines = 25;
		transportMaxWeapons = 4;
		transportMaxBackpacks = 1;
		constructioncount = 10;
		removeoutput[] = {{"m240_nest_kit",1}};
	};
	class Land_covering_hut_EP1;
	class CanvasHut_DZ: Land_covering_hut_EP1
	{
		scope = 2;
		offset[] = {0,2.5,1};
		displayName = "Canvas Hut";
		vehicleClass = "Fortifications";
	};
	class Park_bench1;
	class ParkBench_DZ: Park_bench1
	{
		scope = 2;
		offset[] = {0,1.5,0.5};
		displayName = "Wood Bench";
		vehicleClass = "Fortifications";
	};
	class Land_Wall_Gate_Ind1_L;
	class MetalGate_DZ: Land_Wall_Gate_Ind1_L
	{
		scope = 2;
		offset[] = {0,2.5,1};
		displayName = "Rusty Gate";
		vehicleClass = "Fortifications";
		removeoutput[] = {{"rusty_gate_kit",1}};
	};
	class Land_KBud;
	class OutHouse_DZ: Land_KBud
	{
		scope = 2;
		offset[] = {0,2.5,1};
		displayName = "Outhouse";
		vehicleClass = "Fortifications";
		transportMaxMagazines = 4;
		transportMaxWeapons = 1;
		transportMaxBackpacks = 1;
		constructioncount = 5;
		class transportmagazines
		{
			class _xx_ItemTrashToiletpaper
			{
				magazine = "ItemTrashToiletpaper";
				count = 1;
			};
		};
	};
	class Land_Shed_M01;
	class StorageShed_DZ: Land_Shed_M01
	{
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
	class Fence_corrugated_DZ: Fence_corrugated_plate
	{
		scope = 2;
		offset[] = {0,2.5,1};
		removeoutput[] = {{"ItemCorrugated",1}};
		displayName = "Corrugated Fence";
		vehicleClass = "Fortifications";
		
	};
	class Land_kulna;
	class WoodShack_DZ: Land_kulna
	{
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
	class Wooden_shed_DZ: Land_Shed_wooden
	{
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
	class WoodGate_DZ: BuiltItems
	{
		scope = 2;
		destrType = "DestructTree"; 
		//cost = 100;
		offset[] = {0,1.5,0.5};
		model = "\ca\structures\Wall\Gate_wood2_5";
		icon = "\ca\data\data\Unknown_object.paa";
		mapSize = 2;
		// armor = 100;
		displayName = "Wood Panel";
		vehicleClass = "Fortifications";
		
		class AnimationSources
		{
			class DoorR { 
			  source = "User"; 
			  animPeriod = 1; 
			  initPhase = 0; 
			}
		}
	};
	class BearTrap_DZ: TrapItems
	{
		scope = 2;
		destrType = "DestructNo";
		displayName = "Bear Trap";
		model = "\dayz_equip\models\bear_trap.p3d";
		class Eventhandlers
		{
			init = "_this execFSM '\z\addons\dayz_code\system\trap_monitor.fsm';";
		};
		class AnimationSources
		{
			class LeftShutter
			{
				source = "user";
				animPeriod = 0.1;
				initPhase = 1;
			};
			class RightShutter
			{
				source = "user";
				animPeriod = 0.1;
				initPhase = 1;
			};
		};
		class UserActions
		{
			class OpenTrap
			{
				position = "";
				displayName = "Reset Trap";
				radius = 1.5;
				onlyForPlayer = 0;
				condition = "this animationPhase 'LeftShutter' == 1";
				statement = "this animate ['LeftShutter', 0];this animate ['RightShutter', 0];";
			};
			class CloseTrap
			{
				position = "";
				displayName = "Activate Trap";
				radius = 1.5;
				onlyForPlayer = 0;
				condition = "this animationPhase 'LeftShutter' == 0";
				statement = "this animate ['LeftShutter', 1];this animate ['RightShutter', 1];";
			};
			class CollectTrap
			{
				position = "";
				displayName = "Take Trap";
				radius = 1.5;
				onlyForPlayer = 0;
				condition = "this animationPhase 'LeftShutter' == 1";
				statement = "[0,0,0,['cfgMagazines','TrapBear',this]] call object_pickup;";
			};
		};
	};
	class ReammoBox;
	class WeaponHolderBase: ReammoBox
	{
		scope = 0;
		accuracy = 1000;
		vehicleClass = "Survival";
		displayName = "Weapon";
		memoryPointSupply = "collect";
		supplyRadius = 3;
		transportMaxWeapons = 0;
		transportMaxMagazines = 0;
		transportMaxBackpacks = 0;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
	};
	class WeaponHolder_Colt1911: WeaponHolderBase
	{
		scope = 2;
		displayName = "$STR_WPN_HOLDR_1";
		model = "\dayz_equip\proxy\Colt1911.p3d";
		class eventHandlers
		{
			init = "[(_this select 0),'cfgWeapons','Colt1911'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	class WeaponHolder_ItemHatchet: WeaponHolderBase
	{
		scope = 2;
		displayName = "$STR_EQUIP_NAME_41";
		model = "\dayz_equip\models\hatchet.p3d";
		class eventHandlers
		{
			init = "[(_this select 0),'cfgWeapons','ItemHatchet'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	class WeaponHolder_ItemMachete: WeaponHolderBase
	{
		scope = 2;
		displayName = "Machete";
		model="\z\addons\dayz_communityassets\models\machete.p3d";
		class eventHandlers
		{
			init = "[(_this select 0),'cfgWeapons','ItemMachete'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	class WeaponHolder_MeleeCrowbar: WeaponHolderBase
	{
		scope = 2;
		displayName = "Crowbar";
		model = "\dayz_equip\models\crowbar.p3d";
		class eventHandlers
		{
			init = "[(_this select 0),'cfgWeapons','MeleeCrowbar'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	class WeaponHolder_huntingrifle: WeaponHolderBase
	{
		scope = 2;
		displayName = "$STR_WPN_HOLDR_2";
		model = "\dayz_equip\proxy\huntingrifle.p3d";
		class eventHandlers
		{
			init = "[(_this select 0),'cfgWeapons','huntingrifle'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	class WeaponHolder_M4A1: WeaponHolderBase
	{
		scope = 2;
		displayName = "$STR_WPN_HOLDR_3";
		model = "\dayz_equip\proxy\M4A1.p3d";
		class eventHandlers
		{
			init = "[(_this select 0),'cfgWeapons','M4A1'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	class WeaponHolder_ItemTent: WeaponHolderBase
	{
		scope = 2;
		displayName = "$STR_EQUIP_NAME_20";
		model = "\dayz_equip\proxy\tentbag.p3d";
		class eventHandlers
		{
			init = "[(_this select 0),'cfgMagazines','ItemTent'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	class WeaponHolder_ItemVault: WeaponHolderBase
	{
		scope = 2;
		displayName = "Safe";
		model = "\dayz_equip\models\safe1.p3d";
		class eventHandlers
		{
			init = "[(_this select 0),'cfgMagazines','ItemVault'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	class WeaponHolder_ItemFlashlight: WeaponHolderBase
	{
		scope = 2;
		displayName = "$STR_EQUIP_NAME_5";
		model = "\dayz_equip\proxy\flashlight.p3d";
		class eventHandlers
		{
			init = "[(_this select 0),'cfgWeapons','ItemFlashlight'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	class WeaponHolder_ItemFlashlightRed: WeaponHolderBase
	{
		scope = 2;
		displayName = "$STR_EQUIP_NAME_6";
		model = "\dayz_equip\proxy\flashlight_mil.p3d";
		class eventHandlers
		{
			init = "[(_this select 0),'cfgWeapons','ItemFlashlightRed'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	class WeaponHolder_ItemWaterbottle: WeaponHolderBase
	{
		scope = 2;
		displayName = "$STR_EQUIP_NAME_12";
		model = "\dayz_equip\proxy\waterbottle.p3d";
		class eventHandlers
		{
			init = "[(_this select 0),'cfgMagazines','ItemWaterbottleUnfilled'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	class WeaponHolder_ItemGenerator: WeaponHolderBase
	{
		scope = 2;
		displayName = "$STR_EQUIP_NAME_31";
		model = "\dayz_equip\models\generator.p3d";
		class eventHandlers
		{
			init = "[(_this select 0),'cfgMagazines','ItemGenerator'] execVM '\z\addons\dayz_code\init\object_generator.sqf';";
		};
	};
	class WeaponHolder_ItemToolbox: WeaponHolderBase
	{
		scope = 2;
		displayName = "$STR_EQUIP_NAME_2";
		model = "\dayz_equip\proxy\toolbox.p3d";
		class eventHandlers
		{
			init = "[(_this select 0),'cfgWeapons','ItemToolbox'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	class WeaponHolder_PartFueltank: WeaponHolderBase
	{
		scope = 2;
		displayName = "$STR_EQUIP_NAME_8";
		model = "\dayz_equip\proxy\fueltank.p3d";
		class eventHandlers
		{
			init = "[(_this select 0),'cfgMagazines','PartFueltank'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	class WeaponHolder_PartWheel: WeaponHolderBase
	{
		scope = 2;
		displayName = "$STR_EQUIP_NAME_9";
		model = "\dayz_equip\proxy\wheel.p3d";
		class eventHandlers
		{
			init = "[(_this select 0),'cfgMagazines','PartWheel'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	class WeaponHolder_PartGeneric: WeaponHolderBase
	{
		scope = 2;
		displayName = "$STR_EQUIP_NAME_10";
		model = "\dayz_equip\proxy\genericparts.p3d";
		class eventHandlers
		{
			init = "[(_this select 0),'cfgMagazines','PartGeneric'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	class WeaponHolder_PartVRotor: WeaponHolderBase
	{
		scope = 2;
		displayName = "$STR_EQUIP_NAME_32";
		model = "\dayz_equip\proxy\vrotor.p3d";
		class eventHandlers
		{
			init = "[(_this select 0),'cfgMagazines','PartVRotor'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	class WeaponHolder_PartEngine: WeaponHolderBase
	{
		scope = 2;
		displayName = "$STR_EQUIP_NAME_11";
		model = "\dayz_equip\proxy\engine.p3d";
		class eventHandlers
		{
			init = "[(_this select 0),'cfgMagazines','PartEngine'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	class WeaponHolder_PartGlass: WeaponHolderBase
	{
		scope = 2;
		displayName = "$STR_EQUIP_NAME_30";
		model = "\dayz_equip\proxy\carglass.p3d";
		class eventHandlers
		{
			init = "[(_this select 0),'cfgMagazines','PartGlass'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	class WeaponHolder_ItemOilBarrel: WeaponHolderBase
	{
		scope = 2;
		displayName = "Oil Barrel";
		model = "\dayz_equip\proxy\oil_drum_model.p3d";
		class eventHandlers
		{
			init = "[(_this select 0),'cfgMagazines','ItemOilBarrel'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	class WeaponHolder_ItemFuelBarrel: WeaponHolderBase
	{
		scope = 2;
		displayName = "Fuel Barrel";
		model = "\dayz_equip\proxy\oil_drum_model.p3d";
		class eventHandlers
		{
			init = "[(_this select 0),'cfgMagazines','ItemFuelBarrel'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	class WeaponHolder_ItemJerrycanEmpty: WeaponHolderBase
	{
		scope = 2;
		displayName = "$STR_EQUIP_NAME_39";
		model = "\dayz_equip\proxy\jerrycan.p3d";
		class eventHandlers
		{
			init = "[(_this select 0),'cfgMagazines','ItemJerrycanEmpty'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	class WeaponHolder_ItemJerrycan: WeaponHolderBase
	{
		scope = 2;
		displayName = "$STR_EQUIP_NAME_19";
		model = "\dayz_equip\proxy\jerrycan.p3d";
		class eventHandlers
		{
			init = "[(_this select 0),'cfgMagazines','ItemJerrycan'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	class WeaponHolder_ItemJerrycanSide: WeaponHolder_ItemJerrycan
	{
		model = "\dayz_equip\proxy\jerrycan_side.p3d";
	};
	class Land_A_tent;
	class ACamp;
	class TentStorage: Land_A_tent
	{
		vehicleClass = "Survival";
		transportMaxMagazines = 50;
		transportMaxWeapons = 10;
		transportMaxBackpacks = 5;
	};
	class VaultStorage: Land_A_tent
	{
		vehicleClass = "Survival";
		displayName = "Safe";
		model = "\dayz_equip\models\safe1.p3d";
		destrType = "DestructNo";
		armor = 800;
		transportMaxMagazines = 200;
		transportMaxWeapons = 20;
		transportMaxBackpacks = 10;
	};	
	class VaultStorageLocked: Land_A_tent
	{
		vehicleClass = "Survival";
		displayName = "Locked Safe";
		model = "\dayz_equip\models\safe1.p3d";
		destrType = "DestructNo";
		armor = 800;
		transportMaxMagazines = 0;
		transportMaxWeapons = 0;
		transportMaxBackpacks = 0;
	};
	
	class CardboardBox: ReammoBox
	{
		accuracy = 1000;
		vehicleClass = "Survival";
	};
	class FoodBox0: CardboardBox
	{
		scope = 2;
		displayName = "$STR_DAYZ_OBJ_1";
		model = "\dayz_equip\models\cardboard_box.p3d";
		class TransportWeapons
		{
			class _xx_ItemMatchbox
			{
				weapon = "ItemMatchbox";
				count = 3;
			};
			class _xx_ItemFlashlight
			{
				weapon = "ItemFlashlight";
				count = 3;
			};
			class _xx_ItemKnife
			{
				weapon = "ItemKnife";
				count = 3;
			};
		};
		class transportmagazines
		{
			class _xx_FoodCanBakedBeans
			{
				magazine = "FoodCanBakedBeans";
				count = 6;
			};
			class _xx_FoodCanSardines
			{
				magazine = "FoodCanSardines";
				count = 6;
			};
			class _xx_FoodCanFrankBeans
			{
				magazine = "FoodCanFrankBeans";
				count = 6;
			};
			class _xx_FoodCanPasta
			{
				magazine = "FoodCanPasta";
				count = 6;
			};
		};
	};
	class FoodBox1: FoodBox0{};
	class FoodBox2: FoodBox0{};
	class MedBox0: CardboardBox
	{
		scope = 2;
		displayName = "$STR_DAYZ_OBJ_2";
		model = "\dayz_equip\models\cardboard_box_med.p3d";
		class transportmagazines
		{
			class _xx_ItemBandage
			{
				magazine = "ItemBandage";
				count = 10;
			};
			class _xx_ItemEpinephrine
			{
				magazine = "ItemEpinephrine";
				count = 5;
			};
			class _xx_ItemMorphine
			{
				magazine = "ItemMorphine";
				count = 5;
			};
			class _xx_ItemBloodbag
			{
				magazine = "ItemBloodbag";
				count = 5;
			};
			class _xx_ItemPainkiller
			{
				magazine = "ItemPainkiller";
				count = 5;
			};
		};
	};
	class AmmoBoxSmall: ReammoBox
	{
		scope = 2;
		vehicleClass = "Survival";
		displayName = "Ammo Small";
		model = "\ca\weapons\AmmoBoxes\Proxy_UsBasicAmmoBoxSmall.p3d";
	};
	class Land_Fire;
	class Land_Fire_DZ: Land_Fire
	{
		transportMaxMagazines = 8;
		transportMaxWeapons = 1;
		transportMaxBackpacks = 1;
		class TransportMagazines
		{
			class _xx_PartWoodPile
			{
				magazine = "PartWoodPile";
				count = "1";
			};
		};
		class Eventhandlers
		{
			init = "_this call eh_localCleanup;";
		};
	};
	class AmmoBoxMedium: ReammoBox
	{
		scope = 2;
		vehicleClass = "Survival";
		displayName = "Ammo Medium";
		model = "\ca\weapons\AmmoBoxes\Proxy_UsBasicAmmoBoxBig.p3d";
	};
	class AmmoBoxBig: ReammoBox
	{
		scope = 2;
		vehicleClass = "Survival";
		displayName = "Ammo Medium";
		model = "\ca\weapons\AmmoBoxes\Proxy_UsBasicAmmoBox.p3d";
	};
	class AmmoBoxSmall_556: AmmoBoxSmall
	{
		displayName = "Ammo 5.56";
		class transportmagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 20;
			};
			class _xx_30Rnd_556x45_StanagSD
			{
				magazine = "30Rnd_556x45_StanagSD";
				count = 10;
			};
		};
	};
	class AmmoBoxSmall_762: AmmoBoxSmall
	{
		displayName = "Ammo 7.62";
		class transportmagazines
		{
			class _xx_20Rnd_762x51_DMR
			{
				magazine = "20Rnd_762x51_DMR";
				count = 10;
			};
			class _xx_5Rnd_762x51_M24
			{
				magazine = "5Rnd_762x51_M24";
				count = 10;
			};
			class _xx_10Rnd_762x54_SVD
			{
				magazine = "10Rnd_762x54_SVD";
				count = 10;
			};
		};
	};
};