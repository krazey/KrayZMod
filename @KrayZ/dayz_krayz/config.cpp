#define _ARMA_

class CfgPatches {
	class dayz_krayz {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};

class RscPicture;
class RscTitles {
	titles[] = {"DeathScreen_KR","RscTitleStructuredText"};
	class DeathScreen_KR {
		idd = -1;
		movingEnable = "false";
		duration = 120;
		fadein = 0;
		name = "DeathScreen";
		controls[] = {"DeathScreen"};
		class DeathScreen: RscPicture {
			x = "0.00001 * safezoneW + safezoneX";
			y = "0.00001 * safezoneH + safezoneY";
			w = "1 * safezoneW";
			h = "1 * safezoneH";
			text = "\dayz_krayz\ui\screen_death_ca.paa";
		};
	};
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
//#include "CfgMovesPlayerZombie.hpp"

class CfgFaces {
	class ZFaces {	
		class Default {
			name = "Zombie 1";
			texture = "\dayz_krayz\character\zfaces\zombie_01_co.paa";
			identityTypes[] = {"PZombie1"};
			disabled = 0;
			material = "\ca\characters\heads\male\defaulthead\data\hhl_white.rvmat"; 
            head = "defaultHead"; 
		};
		class Zombie1_KR: Default {
			name = "Zombie 1";
			texture = "\dayz_krayz\character\zfaces\zombie_01_co.paa";
			identityTypes[] = {"PZombie1"};
			disabled = 0;
		};
		class Zombie2_KR: Default {
			name = "Zombie 2";
			texture = "\dayz_krayz\character\zfaces\zombie_02_co.paa";
			identityTypes[] = {"PZombie2"};
			disabled = 0;
		};
		class Zombie3_KR: Default {
			name = "Zombie 3";
			texture = "\dayz_krayz\character\zfaces\zombie_03_co.paa";
			identityTypes[] = {"Zombie3"};
			disabled = 0;
		};
	};
};
class CfgVoice {
	class NoVoice {
		protocol = "RadioProtocolBase";
		variants[] = {1};
		directories[] = {"",""};
		identityTypes[] = {"Zombie1","Zombie2","Zombie3"};
	};
};
class CfgIdentities {
	class Zombie1_KR {
		name = "Zombie";
		face = "Zombie1_KR";
		glasses = "None";
		speaker = "NoVoice";
		pitch = 1;
	};
	class Zombie2_KR {
		name = "Zombie";
		face = "Zombie2_KR";
		glasses = "None";
		speaker = "NoVoice";
		pitch = 1;
	};
	class Zombie3_KR {
		name = "Zombie";
		face = "Zombie3_KR";
		glasses = "None";
		speaker = "NoVoice";
		pitch = 1;
	};
	class PZombie1 {
		name = "PZombie";
		face = "Zombie1_KR";
		glasses = "None";
		speaker = "NoVoice";
		pitch = 1;
	};
	class PZombie2 {
		name = "PZombie";
		face = "Zombie2_KR";
		glasses = "None";
		speaker = "NoVoice";
		pitch = 1;
	};
	class PZombie3 {
		name = "PZombie";
		face = "Zombie3_KR";
		glasses = "None";
		speaker = "NoVoice";
		pitch = 1;
	};
};