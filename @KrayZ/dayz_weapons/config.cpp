////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 3.97
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class dayz_weapons : config.bin{
class CfgPatches
{
	class dayz_weapons
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAWeapons","dayz_equip"};
	};
};
class ItemActions
{
	class Use
	{
		text = "";
		script = "";
		use[] = {};
	};
};

#include "CfgCloudlets.hpp"
#include "cfgMagazines.hpp"
#include "cfgWeapons.hpp"
#include "cfgAmmo.hpp"
#include "CfgVehicles.hpp"

class CfgMovesBasic
{
	class ManActions
	{
		GestureSwing = " ";
	};
	class Actions
	{
		class NoActions: ManActions
		{
			GestureSwing[] = {"GestureSwing","Gesture"};
		};
	};
};
class CfgGesturesMale
{
	skeletonName = "OFP2_ManSkeleton";
	class ManActions{};
	class Actions
	{
		class NoActions
		{
			turnSpeed = 0;
			upDegree = 0;
			limitFast = 1;
			useFastMove = 0;
		};
	};
	class Default
	{
		actions = "NoActions";
		file = "";
		looped = 1;
		speed = 0.5;
		relSpeedMin = 1;
		relSpeedMax = 1;
		soundEnabled = 0;
		soundOverride = "";
		soundEdge[] = {0.5,1};
		terminal = 0;
		equivalentTo = "";
		connectAs = "";
		connectFrom[] = {};
		connectTo[] = {};
		interpolateWith[] = {};
		interpolateTo[] = {};
		interpolateFrom[] = {};
		mask = "empty";
		interpolationSpeed = 6;
		interpolationRestart = 0;
		preload = 0;
		disableWeapons = 1;
		enableOptics = 1;
		showWeaponAim = 1;
		enableMissile = 1;
		enableBinocular = 1;
		showItemInHand = 0;
		showItemInRightHand = 0;
		showHandGun = 0;
		canPullTrigger = 1;
		walkcycles = 1;
		headBobMode = 0;
		headBobStrength = 0;
		leftHandIKBeg = 0;
		leftHandIKEnd = 0;
		rightHandIKBeg = 0;
		rightHandIKEnd = 0;
		leftHandIKCurve[] = {1};
		rightHandIKCurve[] = {1};
		forceAim = 0;
	};
	class States
	{
		class GestureSwing: Default
		{
			file = "\dayz_weapons\anim\melee_hatchet_swing.rtm";
			looped = 0;
			speed = 1.282051;
			mask = "handsWeapon";
			headBobStrength = 0.2;
			headBobMode = 2;
			rightHandIKBeg = 0;
			rightHandIKEnd = 0;
		};
	};
	class BlendAnims
	{
		handsWeapon[] = {"head",1,"neck1",1,"neck",1,"weapon",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"Spine",0.2,"Spine1",0.3,"Spine2",1,"Spine3",1};
	};
};
class CfgRecoils
{
	DZ_Swing[] = {0,0.06,-0.1,0,0.1,-0.12,0.1,0,0};
	DZ_Stab[] = {0.02,-0.5,0.2,0.05,-0.5,0.3,0.04,0,-0.1,0.5,0,0};
};
class FlareSparks
{
	class FlareSmoke
	{
		simulation = "particles";
		type = "FlareSmoke";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class FlareSparks
	{
		simulation = "particles";
		type = "FlareSparks";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
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
class CfgFaces
{
	
	class ZFaces
	{	
		class Default
		{
			name = "PZombie 1";
			texture = "\dayz\textures\faces\zombie_03_co.paa";
			identityTypes[] = {"PZombie1"};
			disabled = 0;
			material = "\ca\characters\heads\male\defaulthead\data\hhl_white.rvmat"; 
            head = "defaultHead"; 
		};
		class Zombie1 : Default
		{
			name = "PZombie 1";
			texture = "\dayz\textures\faces\zombie_03_co.paa";
			identityTypes[] = {"PZombie1"};
			disabled = 0;
		};
		class Zombie2 : Default
		{
			name = "PZombie 2";
			texture = "\dayz\textures\faces\zombie_03_co.paa";
			identityTypes[] = {"PZombie2"};
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
	class PZombie1
	{
		name = "PZombie";
		face = "PZombie1";
		glasses = "None";
		speaker = "NoVoice";
		pitch = 1;
	};
	class PZombie2
	{
		name = "PZombie";
		face = "PZombie2";
		glasses = "None";
		speaker = "NoVoice";
		pitch = 1;
	};
};
//};
