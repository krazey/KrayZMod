////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 3.97
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class dayz : config.bin{

class CfgPatches
{
	class dayz
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgVehicleClasses
{
	class zombie
	{
		displayName = "Zombie";
	};
};
class RscPicture;
class RscTitles
{
	titles[] = {"DeathScreen","TitleScreen","RscTitleStructuredText"};
	class DeathScreen
	{
		idd = -1;
		movingEnable = "false";
		duration = 120;
		fadein = 0;
		name = "DeathScreen";
		controls[] = {"DeathScreen"};
		class DeathScreen: RscPicture
		{
			x = "0.00001 * safezoneW + safezoneX";
			y = "0.00001 * safezoneH + safezoneY";
			w = "1 * safezoneW";
			h = "1 * safezoneH";
			text = "\dayz\ui\screen_death_ca.paa";
		};
	};
	class TitleScreen
	{
		idd = -1;
		movingEnable = "false";
		duration = 120;
		fadein = 0;
		name = "TitleScreen";
		controls[] = {"TitleScreen"};
		class TitleScreen: RscPicture
		{
			x = "0.00001 * safezoneW + safezoneX";
			y = "0.00001 * safezoneH + safezoneY";
			w = "1 * safezoneW";
			h = "1 * safezoneH";
			text = "\dayz\ui\screen_title_ca.paa";
		};
	};
};
class RscStandardDisplay;
class DayZMontage: RscStandardDisplay
{
	idd = 50666;
	movingenable = 0;
	class Controls
	{
		class pic01: RscPicture
		{
			idc = 1001;
			x = "0.17 * safezoneW + safezoneX";
			y = "0.17 * safezoneH + safezoneY";
			w = "0.65 * safezoneW";
			h = "0.65 * safezoneH";
			colorText[] = {0,0,0,0};
			text = "\dayz\ui\intro\screen_01_ca.paa";
		};
		class pic02: pic01
		{
			idc = 1002;
			text = "\dayz\ui\intro\screen_02_ca.paa";
		};
		class pic03: pic01
		{
			idc = 1003;
			text = "\dayz\ui\intro\screen_04_ca.paa";
		};
		class pic04: pic01
		{
			idc = 1004;
			text = "\dayz\ui\intro\screen_03_ca.paa";
		};
		class pic05: pic01
		{
			idc = 1005;
			text = "\dayz\ui\intro\screen_05_ca.paa";
		};
		class pic06: pic01
		{
			idc = 1006;
			text = "\dayz\ui\intro\screen_06_ca.paa";
		};
		class pic07: pic01
		{
			idc = 1007;
			text = "\dayz\ui\intro\screen_07_ca.paa";
		};
		class pic08: pic01
		{
			idc = 1008;
			text = "\dayz\ui\intro\screen_08_ca.paa";
		};
		class pic09: pic01
		{
			idc = 1009;
			text = "\dayz\ui\intro\screen_09_ca.paa";
		};
		class pic10: pic01
		{
			idc = 1010;
			text = "\dayz\ui\intro\screen_10_ca.paa";
		};
		class pic11: pic01
		{
			idc = 1011;
			text = "\dayz\ui\intro\screen_11_ca.paa";
		};
		class pic12: pic01
		{
			idc = 1012;
			text = "\dayz\ui\intro\screen_12_ca.paa";
		};
		class pic13: pic01
		{
			idc = 1013;
			text = "\dayz\ui\intro\screen_13_ca.paa";
		};
	};
};

#include "CfgMovesBasic.hpp"
#include "CfgMovesMaleSdr.hpp"
#include "CfgMovesZombie.hpp"
#include "CfgMovesZombieBase.hpp"
#include "CfgVehicles.hpp"

class CfgMovesPlayerZombie: CfgMovesZombieBase 
{

};

class CfgFaces
{
	class Default;
	
	class Man : Default
	{
		class Default;
		
		class Zombie1 : Default {
			name = "Zombie 1";
			texture = "\dayz\textures\faces\zombie_01_co.paa";
			identityTypes[] = {"Zombie1"};
			disabled = 0;
		};
		
		class Zombie2 : Default {
			name = "Zombie 2";
			texture = "\dayz\textures\faces\zombie_02_co.paa";
			identityTypes[] = {"Zombie2"};
			disabled = 0;
		};

		class Zombie3 : Default {
			name = "Zombie 3";
			texture = "\dayz\textures\faces\zombie_03_co.paa";
			identityTypes[] = {"Zombie3"};
			disabled = 0;
		};
	};
};
class CfgVoice
{
	class NoVoice
	{
		protocol = "RadioProtocolBase";
		variants[] = {1};
		directories[] = {"",""};
		identityTypes[] = {"Default","Zombie1","Zombie2"};
	};
};
class CfgIdentities
{
	class Zombie1
	{
		name = "Zombie";
		face = "Zombie1";
		glasses = "None";
		speaker = "NoVoice";
		pitch = 1;
	};
	class Zombie2
	{
		name = "Zombie";
		face = "Zombie2";
		glasses = "None";
		speaker = "NoVoice";
		pitch = 1;
	};
};
class cfgBody
{
	class head_hit
	{
		memoryPoint = "pilot";
		variation = 0.08;
	};
	class body
	{
		memoryPoint = "aimPoint";
		variation = 0.15;
	};
	class Spine2: body{};
	class LeftArm
	{
		memoryPoint = "lelbow";
		variation = 0.1;
	};
	class RightArm
	{
		memoryPoint = "relbow";
		variation = 0.04;
	};
	class LeftForeArm
	{
		memoryPoint = "lwrist";
		variation = 0.04;
	};
	class RightForeArm
	{
		memoryPoint = "rwrist";
		variation = 0.04;
	};
	class LeftHand
	{
		memoryPoint = "LeftHandMiddle1";
		variation = 0.04;
	};
	class RightHand
	{
		memoryPoint = "RightHandMiddle1";
		variation = 0.04;
	};
	class legs
	{
		memoryPoint = "pelvis";
		variation = 0.15;
	};
	class LeftLeg: legs{};
	class LeftUpLeg: legs{};
	class RightLeg: legs{};
	class RightUpLeg: legs{};
};

//};
