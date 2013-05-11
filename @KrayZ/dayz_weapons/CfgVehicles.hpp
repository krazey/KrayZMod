class CfgVehicles
{
	class WeaponHolderBase;
	class BoltSteelF: WeaponHolderBase
	{
		scope = 2;
		displayName = "$STR_MAG_NAME_3";
		model = "\dayz_weapons\models\bolt";
		class eventHandlers
		{
			init = "[(_this select 0),'cfgMagazines','BoltSteel'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	class Soldier_Crew_PMC;
	class Soldier_Bodyguard_M4_PMC;
	class Survivor1_DZ: Soldier_Crew_PMC
	{
		displayName = "$STR_CHAR_1";
		side = 1;
		weapons[] = {"Throw","Put"};
		model = "\dayz\objects\proxy_man";
		magazines[] = {};
		respawnWeapons[] = {"Throw","Put"};
		respawnMagazines[] = {};
		weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
		canHideBodies = 1;
	};
	class Survivor2_DZ: Soldier_Crew_PMC
	{
		displayName = "$STR_CHAR_1";
		side = 1;
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		model = "\dayz\characters\man_survivor";
		respawnWeapons[] = {"Throw","Put"};
		respawnMagazines[] = {};
		weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
		canHideBodies = 1;
	};
	class Survivor3_DZ: Survivor2_DZ
	{
		model = "\dayz\characters\man_hero";
		HiddenSelections[] = {"camo1","camo2","camo3"};
		HiddenSelectionsTextures[] = {"ca\characters_pmc\pmc_soldier\data\bauer_co.paa","ca\characters_pmc\pmc_soldier\data\bauer_gear_co.paa","ca\characters_pmc\pmc_soldier\data\headgear_co.paa"};
		class EventHandlers
		{
			init = "(_this select 0) setObjectTexture [0,[""\Ca\Characters_PMC\PMC_soldier\Data\bauer_2_co.paa"",""\Ca\Characters_PMC\PMC_soldier\Data\bauer_3_co.paa"",""\Ca\Characters_PMC\PMC_soldier\Data\bauer_4_co.paa"",""\Ca\Characters_PMC\PMC_soldier\Data\bauer_5_co.paa""] select floor random 4]; (_this select 0) setObjectTexture [1,[""ca\characters_pmc\pmc_soldier\data\bauer_gear_co.paa"",""\Ca\Characters_PMC\PMC_soldier\Data\Bauer_Gear_1_co.paa"",""\Ca\Characters_PMC\PMC_soldier\Data\Bauer_Gear_2_co.paa"",""\Ca\Characters_PMC\PMC_soldier\Data\Bauer_Gear_3_co.paa""] select floor random 4]; (_this select 0) setObjectTexture [2,[""\Ca\Characters_PMC\PMC_soldier\Data\HeadGear_CO.paa"",""\Ca\Characters_PMC\PMC_soldier\Data\HeadGear_1_CO.paa""] select floor random 2]";
		};
	};
	class SurvivorW2_DZ: Soldier_Bodyguard_M4_PMC
	{
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
		class TalkTopics
		{
			core = "Core_E";
			core_en = "Core_Full_E";
		};
		genericNames = "EnglishWomen";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_woman"};
				speechPlural[] = {"veh_women"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_woman_CZ"};
				speechPlural[] = {"veh_women_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_woman_CZ4P"};
				speechPlural[] = {"veh_women_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_woman_RU"};
				speechPlural[] = {"veh_women_RU"};
			};
		};
		TextPlural = "Women";
		TextSingular = "Woman";
		nameSound = "veh_woman";
		class HitDamage
		{
			class Group0
			{
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
		class SoundBreath
		{
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
		class SoundGear
		{
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
		class SoundEquipment
		{
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
		hiddenSelectionsTextures[] = {"\ca\characters_e\woman\baker\data\baker_co.paa"};
	};
	class BanditW1_DZ: SurvivorW2_DZ
	{
		side = 1;
		model = "\dayz\characters\woman_bandit";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\ca\characters_e\woman\baker\data\baker_co.paa"};
	};
	class BanditW2_DZ: BanditW1_DZ
	{
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\ca\characters_e\woman\baker\data\european_woman_01_co.paa"};
	};
	class SurvivorW3_DZ: SurvivorW2_DZ
	{
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\ca\characters_e\woman\baker\data\european_woman_01_co.paa"};
	};
	class SurvivorWpink_DZ: SurvivorW2_DZ
	{
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\dayz_equip\textures\GirlyGirl.paa"};
	};
	class SurvivorWcombat_DZ: SurvivorW2_DZ
	{
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\dayz_equip\textures\CombatGirl.paa"};
	};
	class SurvivorWdesert_DZ: SurvivorW2_DZ
	{
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\dayz_equip\textures\DesertGirl.paa"};
	};
	class SurvivorWurban_DZ: SurvivorW2_DZ
	{
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\dayz_equip\textures\UrbanGirl.paa"};
	}; 
	class Citizen1;
	class PZombie_VB: Citizen1
	{
		side = 1;
		glassesEnabled = 0;
		moves = "CfgMovesPlayerZombie";
		gestures = "CfgGesturesMale";

		weapons[] = {};
		weaponSlots = "";
		backpack = "";
		magazines[] = {};
		respawnWeapons[] = {};
		respawnMagazines[] = {};

		faceType = "ZFaces";
		identityTypes[] = {"Zombie1","Zombie2"};
		extCameraPosition[] = {0,1.5,-9};
		
		canHideBodies = 0;
	};
	class pz_policeman: PZombie_VB
	{
		model = "\ca\characters2\civil\Policeman\Policeman";
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\characters2\civil\policeman\data\policeman.rvmat","ca\characters2\civil\policeman\data\w1_policeman.rvmat","ca\characters2\civil\policeman\data\w2_policeman.rvmat","ca\characters\heads\male\defaulthead\data\hhl.rvmat","ca\characters\heads\male\defaulthead\data\hhl_wounds.rvmat","ca\characters\heads\male\defaulthead\data\hhl_wounds.rvmat"};
		};
	};
	class pz_suit1: PZombie_VB
	{
		model = "\ca\characters2\civil\Functionary\Functionary";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\ca\characters2\civil\functionary\data\functionary_co.paa"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\characters2\civil\Functionary\data\Functionary.rvmat","ca\characters2\civil\Functionary\data\W1_Functionary.rvmat","ca\characters2\civil\Functionary\data\W2_Functionary.rvmat","ca\characters\heads\male\defaulthead\data\hhl.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat"};
		};
	};
	class pz_suit2: pz_suit1
	{
		hiddenSelectionsTextures[] = {"\ca\characters2\civil\functionary\data\functionary2_co.paa"};
	};
	class pz_worker1: PZombie_VB
	{
		model = "\Ca\characters_E\Overall\Overall";
		hiddenSelections[] = {"Camo"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"Ca\characters_E\Overall\Data\Overall.rvmat","Ca\characters_E\Overall\Data\W1_Overall.rvmat","Ca\characters_E\Overall\Data\W2_Overall.rvmat"};
		};
		hiddenSelectionsTextures[] = {"\Ca\characters_E\Overall\Data\Overall_4_co.paa"};
	};
	class pz_worker2: pz_worker1
	{
		hiddenSelectionsTextures[] = {"\Ca\characters_E\Overall\Data\Overall_3_co.paa"};
	};
	class pz_worker3: pz_worker1
	{
		hiddenSelectionsTextures[] = {"\Ca\characters_E\Overall\Data\Overall_2_co.paa"};
	};

	class pz_doctor: PZombie_VB
	{
		model = "\ca\characters2\civil\Doctor\Doctor";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\dayz\textures\clothes\doctor_co.paa"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\characters2\civil\doctor\data\doctor.rvmat","ca\characters2\civil\doctor\data\W1_doctor.rvmat","ca\characters2\civil\doctor\data\W2_doctor.rvmat","ca\characters\heads\male\defaulthead\data\hhl.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat"};
		};
	};
	class pz_teacher: pz_doctor
	{
		hiddenSelectionsTextures[] = {"\dayz\textures\clothes\teacher_co.paa"};
	};
	class pz_hunter: PZombie_VB
	{
		model = "\ca\characters2\civil\Woodlander\Woodlander";
		hiddenSelections[] = {"Camo"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\characters2\civil\Woodlander\data\Woodlander.rvmat","ca\characters2\civil\Woodlander\data\W1_Woodlander.rvmat","ca\characters2\civil\Woodlander\data\W2_Woodlander.rvmat","ca\characters\heads\male\defaulthead\data\hhl.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat"};
		};
	};
	class pz_villager1: PZombie_VB
	{
		model = "\ca\characters2\civil\Villager\Villager";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\ca\characters2\civil\villager\data\villager_co.paa"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\characters\heads\male\defaulthead\data\hhl.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat","ca\characters2\Civil\Villager\Data\villager.RVmat","ca\characters2\Civil\Villager\Data\villager_w1.RVmat","ca\characters2\Civil\Villager\Data\villager_w2.RVmat"};
		};
	};
	class pz_villager2: pz_villager1
	{
		hiddenSelectionsTextures[] = {"\ca\characters2\civil\villager\data\villager_v2_co.paa"};
	};
	class pz_villager3: pz_villager1
	{
		hiddenSelectionsTextures[] = {"\ca\characters2\civil\villager\data\villager_v3_co.paa"};
	};
	class pz_priest: PZombie_VB
	{
		model = "\ca\characters2\civil\Priest\Priest";
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\characters2\civil\priest\data\priest.rvmat","ca\characters2\civil\priest\data\W1_priest.rvmat","ca\characters2\civil\priest\data\W2_priest.rvmat","ca\characters\heads\male\defaulthead\data\hhl.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat"};
		};
	};
	
};