////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 3.97
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class dayz_equip : config.bin{
class CfgPatches
{
	class dayz_equip
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgVehicleClasses
{
	class Survival
	{
		displayName = "Survival";
	};
};
class RscStandardDisplay
{
	access = 0;
	movingEnable = 1;
	enableSimulation = 1;
	enableDisplay = 1;
};
class RscObject
{
	access = 0;
	type = 80;
	scale = 1;
	direction[] = {0,0,1};
	up[] = {0,1,0};
};
class RscPicture
{
	access = 0;
	type = 0;
	idc = -1;
	colorBackground[] = {0,0,0,0};
	colorText[] = {1,1,1,1};
	font = "TahomaB";
	sizeEx = 0;
	lineSpacing = 0;
	text = "";
	style = "0x30 + 0x100";
	x = 0;
	y = 0;
	w = 0.2;
	h = 0.15;
};
class RscButton
{
	access = 0;
	text = "";
	colorText[] = {0.543,0.5742,0.4102,1};
	colorDisabled[] = {0.4,0.4,0.4,1};
	colorBackground[] = {1,0.537,0,0.5};
	colorBackgroundDisabled[] = {0.95,0.95,0.95,1};
	colorBackgroundActive[] = {1,0.537,0,1};
	colorFocused[] = {1,0.537,0,1};
	colorShadow[] = {0.023529,0,0.0313725,1};
	colorBorder[] = {0.023529,0,0.0313725,1};
	soundEnter[] = {"\ca\ui\data\sound\mouse2",0.09,1};
	soundPush[] = {"\ca\ui\data\sound\new1",0.09,1};
	soundClick[] = {"\ca\ui\data\sound\mouse3",0.07,1};
	soundEscape[] = {"\ca\ui\data\sound\mouse1",0.09,1};
	type = 1;
	style = "0x02 + 0x100";
	x = 0;
	y = 0;
	w = 0.095589;
	h = 0.039216;
	font = "Zeppelin32";
	sizeEx = 0.03921;
	offsetX = 0.003;
	offsetY = 0.003;
	offsetPressedX = 0.002;
	offsetPressedY = 0.002;
	borderSize = 0;
};
class RscButtonPhone: RscButton
{
	colorText[] = {0.543,0.5742,0.4102,0};
	colorDisabled[] = {0.4,0.4,0.4,0};
	colorBackground[] = {1,0.537,0,0};
	colorBackgroundDisabled[] = {0.95,0.95,0.95,0};
	colorBackgroundActive[] = {1,0.537,0,0};
	colorFocused[] = {1,0.537,0,0};
	colorShadow[] = {0.023529,0,0.0313725,0};
	colorBorder[] = {0.023529,0,0.0313725,0};
	soundEnter[] = {"",0.09,1};
	soundPush[] = {"",0.09,1};
	soundClick[] = {"",0.07,1};
	soundEscape[] = {"",0.09,1};
};
class RscPhonePicture: RscStandardDisplay
{
	class controlsBackground
	{
		class RscPicture_1200: RscPicture
		{
			idc = 1200;
			text = "mphone_CA.paa";
			x = 0.2;
			y = 0.09;
			w = 0.6;
			h = 0.8;
		};
	};
	class controls
	{
		class RscButton_1600: RscButtonPhone
		{
			idc = 1600;
			text = "send";
			x = 0.402736;
			y = 0.597677;
			w = 0.0620061;
			h = 0.0620061;
			soundClick[] = {"\dayz_sfx\action\cell\dtmf_1.wav",0.09,1};
		};
		class RscButton_1601: RscButtonPhone
		{
			idc = 1601;
			text = "end";
			x = 0.528875;
			y = 0.597677;
			w = 0.0620061;
			h = 0.0620061;
			soundClick[] = {"\dayz_sfx\action\cell\dtmf_0.wav",0.09,1};
		};
		class RscButton_1602: RscButtonPhone
		{
			idc = 1602;
			text = "1";
			x = 0.399696;
			y = 0.669873;
			w = 0.0528875;
			h = 0.0386486;
			soundClick[] = {"\dayz_sfx\action\cell\dtmf_1.wav",0.09,1};
		};
		class RscButton_1603: RscButtonPhone
		{
			idc = 1603;
			text = "2";
			x = 0.472644;
			y = 0.671996;
			w = 0.0528875;
			h = 0.0386486;
			soundClick[] = {"\dayz_sfx\action\cell\dtmf_2.wav",0.09,1};
		};
		class RscButton_1604: RscButtonPhone
		{
			idc = 1604;
			text = "3";
			x = 0.539514;
			y = 0.671996;
			w = 0.0528875;
			h = 0.0386486;
			soundClick[] = {"\dayz_sfx\action\cell\dtmf_3.wav",0.09,1};
		};
		class RscButton_1605: RscButtonPhone
		{
			idc = 1605;
			text = "4";
			x = 0.404255;
			y = 0.714465;
			w = 0.0528875;
			h = 0.0386486;
			soundClick[] = {"\dayz_sfx\action\cell\dtmf_4.wav",0.09,1};
		};
		class RscButton_1606: RscButtonPhone
		{
			idc = 1606;
			text = "5";
			x = 0.472644;
			y = 0.716588;
			w = 0.0528875;
			h = 0.0386486;
			soundClick[] = {"\dayz_sfx\action\cell\dtmf_5.wav",0.09,1};
		};
		class RscButton_1607: RscButtonPhone
		{
			idc = 1607;
			text = "6";
			x = 0.534954;
			y = 0.716588;
			w = 0.0528875;
			h = 0.0386486;
			soundClick[] = {"\dayz_sfx\action\cell\dtmf_6.wav",0.09,1};
		};
		class RscButton_1608: RscButtonPhone
		{
			idc = 1608;
			text = "7";
			x = 0.407295;
			y = 0.759056;
			w = 0.0528875;
			h = 0.0386486;
			soundClick[] = {"\dayz_sfx\action\cell\dtmf_7.wav",0.09,1};
		};
		class RscButton_1609: RscButtonPhone
		{
			idc = 1609;
			text = "8";
			x = 0.472644;
			y = 0.76118;
			w = 0.0528875;
			h = 0.0386486;
			soundClick[] = {"\dayz_sfx\action\cell\dtmf_8.wav",0.09,1};
		};
		class RscButton_1610: RscButtonPhone
		{
			idc = 1610;
			text = "9";
			x = 0.531915;
			y = 0.76118;
			w = 0.0528875;
			h = 0.0386486;
			soundClick[] = {"\dayz_sfx\action\cell\dtmf_9.wav",0.09,1};
		};
		class RscButton_1611: RscButtonPhone
		{
			idc = 1611;
			text = "*";
			x = 0.416413;
			y = 0.801525;
			w = 0.0528875;
			h = 0.0386486;
			soundClick[] = {"\dayz_sfx\action\cell\dtmf_star.wav",0.09,1};
		};
		class RscButton_1612: RscButtonPhone
		{
			idc = 1612;
			text = "0";
			x = 0.471125;
			y = 0.805771;
			w = 0.0528875;
			h = 0.0386486;
			soundClick[] = {"\dayz_sfx\action\cell\dtmf_0.wav",0.09,1};
		};
		class RscButton_1613: RscButtonPhone
		{
			idc = 1613;
			text = "#";
			x = 0.525836;
			y = 0.803648;
			w = 0.0528875;
			h = 0.0386486;
			soundClick[] = {"\dayz_sfx\action\cell\dtmf_hash.wav",0.09,1};
		};
		class RscButton_1614: RscButtonPhone
		{
			idc = 1614;
			text = "Screen";
			x = 0.416413;
			y = 0.260054;
			w = 0.168389;
			h = 0.299601;
		};
	};
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"

class CfgCloudlets
{
	class Default;
	class BottleGlassShards: Default
	{
		interval = 0.001;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Data\ParticleEffects\Universal\GlassShards";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "SpaceObject";
		timerPeriod = 3;
		lifeTime = 2;
		moveVelocity[] = {0,1,0};
		rotationVelocity = 2;
		weight = 10;
		volume = 1;
		rubbing = 0;
		size[] = {"0.05"};
		sizeCoef = 1;
		color[] = {
			{ 1,1,1,1 }};
		colorCoef[] = {1,1,1,1};
		animationSpeed[] = {1000};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.5;
		position[] = {0,0,0};
		positionVar[] = {0.02,0.02,0.02};
		moveVelocityVar[] = {0.2,1,0.2};
		rotationVelocityVar = 1;
		sizeVar = 0.04;
		colorVar[] = {0.1,0.1,0.1,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class BottleGlassShards2: Default
	{
		interval = 0.001;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Data\ParticleEffects\Universal\GlassShards";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "SpaceObject";
		timerPeriod = 3;
		lifeTime = 2;
		moveVelocity[] = {0,2,0};
		rotationVelocity = 2;
		weight = 10;
		volume = 1;
		rubbing = 0;
		size[] = {"0.05"};
		sizeCoef = 1;
		color[] = {
			{ 1,1,1,1 }};
		colorCoef[] = {1,1,1,1};
		animationSpeed[] = {1000};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 1;
		randomDirectionIntensity = 1;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.5;
		position[] = {0,0.4,0};
		positionVar[] = {0.04,0.04,0.04};
		moveVelocityVar[] = {0.2,3,0.2};
		rotationVelocityVar = 0;
		sizeVar = 0.04;
		colorVar[] = {0.1,0.1,0.1,0};
		randomDirectionPeriodVar = 1;
		randomDirectionIntensityVar = 1;
	};
	class BottleGlassDust: Default
	{
		interval = 0.005;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 8;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 3;
		lifeTime = 0.7;
		moveVelocity[] = {0,0.7,0};
		rotationVelocity = 2;
		weight = 1.275;
		volume = 1;
		rubbing = 0;
		size[] = {0.05,0.15};
		sizeCoef = 1;
		color[] = {
			{ 0.5,0.5,0.5,0.1 },
			{ 0.5,0.5,0.5,0 }};
		colorCoef[] = {1,1,1,1};
		animationSpeed[] = {1000};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.1;
		position[] = {0,0.4,0};
		positionVar[] = {0.02,0.02,0.02};
		moveVelocityVar[] = {0.2,0.5,0.2};
		rotationVelocityVar = 0;
		sizeVar = 0.04;
		colorVar[] = {0.1,0.1,0.1,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
};
class GlassSmash
{
	class BottleGlassShards
	{
		simulation = "particles";
		type = "BottleGlassShards";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class BottleGlassShards2
	{
		simulation = "particles";
		type = "BottleGlassShards2";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class BottleGlassDust
	{
		simulation = "particles";
		type = "BottleGlassDust";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class RscPhoneDisplay
{
	access = 0;
	idd = 12;
	enableSimulation = 1;
	enableDisplay = 1;
	movingEnable = 0;
	class controlsBackground{};
	class controls
	{
		class RscButton_1600: RscButton
		{
			idc = 1600;
			text = "1";
			x = 0.379939;
			y = 0.714465;
			w = 0.0635259;
			h = 0.0469146;
		};
		class RscButton_1601: RscButton
		{
			idc = 1601;
			text = "4";
			x = 0.381459;
			y = 0.771797;
			w = 0.0635259;
			h = 0.0469146;
		};
		class RscButton_1602: RscButton
		{
			idc = 1602;
			text = "7";
			x = 0.387538;
			y = 0.829129;
			w = 0.0635259;
			h = 0.0469146;
		};
		class RscButton_1603: RscButton
		{
			idc = 1603;
			text = "*";
			x = 0.396657;
			y = 0.884338;
			w = 0.0635259;
			h = 0.0469146;
		};
		class RscButton_1604: RscButton
		{
			idc = 1604;
			text = "3";
			x = 0.553192;
			y = 0.718711;
			w = 0.0635259;
			h = 0.0469146;
		};
		class RscButton_1605: RscButton
		{
			idc = 1605;
			text = "6";
			x = 0.551672;
			y = 0.778167;
			w = 0.0635259;
			h = 0.0469146;
		};
		class RscButton_1606: RscButton
		{
			idc = 1606;
			text = "9";
			x = 0.544073;
			y = 0.831252;
			w = 0.0635259;
			h = 0.0469146;
		};
		class RscButton_1607: RscButton
		{
			idc = 1607;
			text = "#";
			x = 0.539514;
			y = 0.884338;
			w = 0.0635259;
			h = 0.0469146;
		};
		class RscButton_1608: RscButton
		{
			idc = 1608;
			text = "0";
			x = 0.468085;
			y = 0.880091;
			w = 0.0635259;
			h = 0.0469146;
		};
		class RscButton_1609: RscButton
		{
			idc = 1609;
			text = "8";
			x = 0.468085;
			y = 0.829129;
			w = 0.0635259;
			h = 0.0469146;
		};
		class RscButton_1610: RscButton
		{
			idc = 1610;
			text = "5";
			x = 0.468085;
			y = 0.778167;
			w = 0.0635259;
			h = 0.0469146;
		};
		class RscButton_1611: RscButton
		{
			idc = 1611;
			text = "2";
			x = 0.468085;
			y = 0.725082;
			w = 0.0635259;
			h = 0.0469146;
		};
		class RscButton_1612: RscButton
		{
			idc = 1612;
			text = "send";
			x = 0.378419;
			y = 0.631652;
			w = 0.0802433;
			h = 0.0702721;
		};
		class RscButton_1613: RscButton
		{
			idc = 1613;
			text = "end";
			x = 0.541034;
			y = 0.633775;
			w = 0.0802433;
			h = 0.0702721;
		};
		class RscButton_1614: RscButton
		{
			idc = 1614;
			text = "Screen";
			x = 0.392097;
			y = 0.206969;
			w = 0.215502;
			h = 0.382414;
		};
	};
	class objects
	{
		class GPS: RscObject
		{
			idc = 106;
			type = 82;
			inBack = 0;
			enableZoom = 0;
			moving = 0;
			scale = 1.5;
			position[] = {0,0,0.25};
			direction[] = {0,1,7.2};
			up[] = {0,0,-1};
			zoomDuration = 1;
			waitForLoad = 0;
			onMouseButtonClick = "_this call usePhone;";
			onObjectMoved = "_this call movePhone;";
			model = "\dayz_equip\models\phone.p3d";
			x = 0.22;
			xBack = 0.72;
			y = 0.925;
			yBack = 0.5;
			z = 0.22;
			zBack = 0.12;
		};
	};
};
class CfgSounds
{
	class trap_bear_0
	{
		name = "";
		sound[] = {"\dayz_equip\sound\trap_bear_0",1,1,60};
		titles[] = {};
	};
};
//};
