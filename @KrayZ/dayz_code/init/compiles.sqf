/*	
	FUNCTION COMPILES
*/
//Player only
if (!isDedicated) then {
	_config = 	configFile >> "CfgLoot";
	_config1 = 	configFile >> "CfgMagazines" >> "FoodEdible";
	_config2 = 	configFile >> "CfgWeapons" >> "Loot";

	"filmic" setToneMappingParams [0.07, 0.31, 0.23, 0.37, 0.011, 3.750, 6, 4]; setToneMapping "Filmic";

	BIS_Effects_Burn = 			compile preprocessFile "\ca\Data\ParticleEffects\SCRIPTS\destruction\burn.sqf"; 
	player_zombieCheck = 		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_zombieCheck.sqf";	//Run on a players computer, checks if the player is near a zombie
	player_zombieAttack = 		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_zombieAttack.sqf";	//Run on a players computer, causes a nearby zombie to attack them
	fnc_usec_damageActions =	compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_damageActions.sqf";		//Checks which actions for nearby casualty
	fnc_inAngleSector =			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_inAngleSector.sqf";		//Checks which actions for nearby casualty
	fnc_usec_selfActions =		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_selfActions.sqf";		//Checks which actions for self
	fnc_usec_unconscious =		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_unconscious.sqf";
	player_temp_calculation	=	compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_temperatur.sqf";		//Temperatur System	//TeeChange
	player_weaponFiredNear =	compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_weaponFiredNear.sqf";
	player_animalCheck =		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_animalCheck.sqf";
	player_spawnCheck = 		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_spawnCheck.sqf";
	player_spawnLootCheck =		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_spawnlootCheck.sqf";
	player_spawnZedCheck =		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_spawnzedCheck.sqf";
	building_spawnLoot =		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\building_spawnLoot.sqf";
	player_taskHint =			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_taskHint.sqf";
	building_spawnZombies =		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\building_spawnZombies.sqf";
	//animal_monitor =			compile preprocessFileLineNumbers "\z\addons\dayz_code\system\animal_monitor.sqf";
	building_monitor =			compile preprocessFileLineNumbers "\z\addons\dayz_code\system\building_monitor.sqf";
	player_fired =				compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_fired.sqf";			//Runs when player fires. Alerts nearby Zeds depending on calibre and audial rating
	player_packTent =			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_packTent.sqf";
	player_packVault =			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_packVault.sqf";
	player_unlockVault =		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_unlockVault.sqf";
	player_lockVault =			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_lockVault.sqf";
	control_zombieAgent = 		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\control_zombieAgent.sqf";
	player_updateGui =			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_updateGui.sqf";
	player_crossbowBolt =		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_crossbowBolt.sqf";
	spawn_flies = 				compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\spawn_flies.sqf";
	stream_locationFill = 		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\stream_locationFill.sqf";
	stream_locationDel = 		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\stream_locationDel.sqf";
	stream_locationCheck = 		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\stream_locationCheck.sqf";
	player_music = 				compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_music.sqf";			//Used to generate ambient music
	player_login = 				compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_login.sqf";			//Used to generate ambient music
	player_death =				compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_death.sqf";
	player_switchModel =		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_switchModel.sqf";
	player_checkStealth =		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_checkStealth.sqf";
	world_sunRise =				compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_sunRise.sqf";
	world_surfaceNoise =		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_surfaceNoise.sqf";
	player_humanityMorph =		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_humanityMorph.sqf";
	player_throwObject = 		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_throwObject.sqf";
	player_alertZombies = 		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_alertZombies.sqf";
	player_fireMonitor = 		compile preprocessFileLineNumbers "\z\addons\dayz_code\system\fire_monitor.sqf";
	player_friendliesCheck =	compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_friendliesCheck.sqf";
	
	//Objects
	object_roadFlare = 			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\object_roadFlare.sqf";
	object_setpitchbank	=		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_setpitchbank.sqf";
	
	//Zombies
	zombie_findTargetAgent = 	compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\zombie_findTargetAgent.sqf";
	zombie_loiter = 			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\zombie_loiter.sqf";			//Server compile, used for loiter behaviour
	zombie_generate = 			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\zombie_generate.sqf";			//Server compile, used for loiter behaviour
	wild_spawnZombies = 		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\wild_spawnZombies.sqf";			//Server compile, used for loiter behaviour
	
	//
	dog_findTargetAgent = 	compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\dog_findTargetAgent.sqf";
	
	// Vehicle damage fix
	vehicle_handleDamage    = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\vehicle_handleDamage.sqf";
	vehicle_handleKilled    = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\vehicle_handleKilled.sqf";

	//actions
	player_countmagazines =		compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_countmagazines.sqf";
	player_addToolbelt =		compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_addToolbelt.sqf";
	player_reloadMag =			compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_reloadMags.sqf";
	player_loadCrate =			compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_loadCrate.sqf";
	player_craftItem =			compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_craftItem.sqf";
	player_craftItem1 =			compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_craftItem1.sqf";
	player_craftItem2 =			compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_craftItem2.sqf";
	player_craftItem3 =			compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_craftItem3.sqf";
	player_craftItem4 =			compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_craftItem4.sqf";
	player_craftItem5 =			compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_craftItem5.sqf";
	player_craftItem6 =			compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_craftItem6.sqf";
	player_craftItem7 =			compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_craftItem7.sqf";
	player_tentPitch =			compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\tent_pitch.sqf";
	player_vaultPitch =			compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\vault_pitch.sqf";
	player_drink =				compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_drink.sqf";
	player_eat =				compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_eat.sqf";
	player_useMeds =			compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_useMeds.sqf";
	player_fillWater = 			compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\water_fill.sqf";
	player_makeFire =			compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_makefire.sqf";
	player_chopWood =			compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_chopWood.sqf";
	player_build =				compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_build.sqf";
	player_wearClothes =		compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_wearClothes.sqf";
	player_dropWeapon =			compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_dropWeapon.sqf";
	player_setTrap =			compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_setTrap.sqf";
	object_pickup = 			compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\object_pickup.sqf";
	player_flipvehicle = 		compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_flipvehicle.sqf";
	player_sleep = 				compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_sleep.sqf";
	
	//add military flashlight to shoulder
	player_addflashtosh =		compile preprocessFileLineNumbers "\z\addons\dayz_code\actionsadd\shoulder.sqf";
	player_addflashtosh2 =		compile preprocessFileLineNumbers "\z\addons\dayz_code\actionsadd\shoulder2.sqf";
	player_addflashtoshr =		compile preprocessFileLineNumbers "\z\addons\dayz_code\actionsadd\shoulderr.sqf";
	player_rmvflashfromsh =		compile preprocessFileLineNumbers "\z\addons\dayz_code\actionsadd\unshoulder.sqf";
	player_rmvflashfromsh2 =	compile preprocessFileLineNumbers "\z\addons\dayz_code\actionsadd\unshoulder2.sqf";
	
	//assemble & disassemble sights from weapons
	player_weapon_acog =		compile preprocessFileLineNumbers "\z\addons\dayz_code\actionsadd\player_weapon_acog.sqf";
	player_weapon_holo =		compile preprocessFileLineNumbers "\z\addons\dayz_code\actionsadd\player_weapon_holo.sqf";
	player_weapon_reddot =		compile preprocessFileLineNumbers "\z\addons\dayz_code\actionsadd\player_weapon_reddot.sqf";
	player_weapon_scope =		compile preprocessFileLineNumbers "\z\addons\dayz_code\actionsadd\player_weapon_scope.sqf";
	player_weapon_launcher =	compile preprocessFileLineNumbers "\z\addons\dayz_code\actionsadd\player_weapon_launcher.sqf";
	player_weapon_suppressor =	compile preprocessFileLineNumbers "\z\addons\dayz_code\actionsadd\player_weapon_suppressor.sqf";
	
	player_weapon_rmvacog =		compile preprocessFileLineNumbers "\z\addons\dayz_code\actionsadd\player_weapon_rmvacog.sqf";
	player_weapon_rmvholo =		compile preprocessFileLineNumbers "\z\addons\dayz_code\actionsadd\player_weapon_rmvholo.sqf";
	player_weapon_rmvreddot =	compile preprocessFileLineNumbers "\z\addons\dayz_code\actionsadd\player_weapon_rmvreddot.sqf";
	player_weapon_rmvscope =	compile preprocessFileLineNumbers "\z\addons\dayz_code\actionsadd\player_weapon_rmvscope.sqf";
	player_weapon_rmvlauncher =	compile preprocessFileLineNumbers "\z\addons\dayz_code\actionsadd\player_weapon_rmvlauncher.sqf";
	player_weapon_rmvsuppress =	compile preprocessFileLineNumbers "\z\addons\dayz_code\actionsadd\player_weapon_rmvsuppress.sqf";
	
	//remove hbbarrier (owner only)
	player_rmvhbarrier =		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_rmvhbarrier.sqf";
	
	//lock & unlock gate1
	player_unlockGate =			compile preprocessFileLineNumbers "\z\addons\dayz_code\compileadd\player_unlockGate.sqf";
	player_lockGate =			compile preprocessFileLineNumbers "\z\addons\dayz_code\compileadd\player_lockGate.sqf";
	
	//halo jump add
	bis_fnc_halo =				compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_HALO.sqf";
	
	//ui
	player_selectSlot =			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\ui_selectSlot.sqf";
	player_gearSync	=			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_gearSync.sqf";
	player_gearSet	=			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_gearSet.sqf";
	ui_changeDisplay = 			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\ui_changeDisplay.sqf";
	
	//System
	player_monitor =			compile preprocessFileLineNumbers "\z\addons\dayz_code\system\player_monitor.sqf";
	player_spawn_1 =			compile preprocessFileLineNumbers "\z\addons\dayz_code\system\player_spawn_1.sqf";
	player_spawn_2 =			compile preprocessFileLineNumbers "\z\addons\dayz_code\system\player_spawn_2.sqf";
	onPreloadStarted 			"dayz_preloadFinished = false;";
	onPreloadFinished 			"dayz_preloadFinished = true;";
	
	// TODO: need move it in player_monitor.fsm
	// allow player disconnect from server, if loading hang, kicked by BE etc.
	[] spawn {
		private["_timeOut","_display","_control1","_control2"];
		disableSerialization;
		_timeOut = 0;
		dayz_loadScreenMsg = "";
		diag_log "DEBUG: loadscreen guard started.";
		_display = uiNameSpace getVariable "BIS_loadingScreen";
		_control1 = _display displayctrl 8400;
		_control2 = _display displayctrl 102;
	// 40 sec timeout
		while { _timeOut < 400 && !dayz_clientPreload } do {
			if ( isNull _display ) then {
				waitUntil { !dialog; };
				startLoadingScreen ["","RscDisplayLoadCustom"];
				_display = uiNameSpace getVariable "BIS_loadingScreen";
				_control1 = _display displayctrl 8400;
				_control2 = _display displayctrl 102;
			};
			if ( dayz_loadScreenMsg != "" ) then {
				_control1 ctrlSetText dayz_loadScreenMsg;
				dayz_loadScreenMsg = "";
			};
			_control2 ctrlSetText format["%1",round(_timeOut*0.1)];
			_timeOut = _timeOut + 1;
			sleep 0.1;
		};
			endLoadingScreen;
		if ( !dayz_clientPreload ) then {

			diag_log "DEBUG: loadscreen guard ended with timeout.";
			disableUserInput false;
			1 cutText ["Something went wrong! Disconnect and try again! If you see this the 2nd time, please stay and wait some more seconds.", "PLAIN"];
			player enableSimulation false;
		} else { diag_log "DEBUG: loadscreen guard ended."; };
	}; 
	dayz_losChance = {
		private["_agent","_maxDis","_dis","_val","_maxExp","_myExp"];
		_agent = 	_this select 0;
		_dis =		_this select 1;
		_maxDis = 	_this select 2;
		// diag_log ("VAL:  " + str(_this));
		_val = 		(_maxDis - _dis) max 0;
		_maxExp = 	((exp 2) * _maxDis);
		_myExp = 	((exp 2) * (_val)) / _maxExp;
		_myExp = _myExp * 0.7;
		_myExp
	};
	
	ui_initDisplay = {
		private["_control","_ctrlBleed","_display","_ctrlFracture","_ctrlDogFood","_ctrlDogWater","_ctrlDogWaterBorder", "_ctrlDogFoodBorder"];
		disableSerialization;
		_display = uiNamespace getVariable 'DAYZ_GUI_display';
		_control = 	_display displayCtrl 1204;
		_control ctrlShow false;
		if (!r_player_injured) then {
			_ctrlBleed = 	_display displayCtrl 1303;
			_ctrlBleed ctrlShow false;
		};
		if (!r_fracture_legs and !r_fracture_arms) then {
			_ctrlFracture = 	_display displayCtrl 1203;
			_ctrlFracture ctrlShow false;
		};
		_ctrlDogFoodBorder = _display displayCtrl 1501;
		_ctrlDogFoodBorder ctrlShow false;
		_ctrlDogFood = _display displayCtrl 1701;
		_ctrlDogFood ctrlShow false;
		
		_ctrlDogWaterBorder = _display displayCtrl 1502;
		_ctrlDogWaterBorder ctrlShow false;
		_ctrlDogWater = _display displayCtrl 1702;
		_ctrlDogWater ctrlShow false
	};
	
	dayz_losCheck = {
		private["_target","_agent","_cantSee"];
		_target = _this select 0;
		_agent = _this select 1;
		_cantSee = true;
		if (!isNull _target) then {
			_tPos = eyePos _target;	//(getPosASL _target);
			_zPos = eyePos _agent;	//(getPosASL _agent);
			if ((count _tPos > 0) and (count _zPos > 0)) then {
				_cantSee = terrainIntersectASL [_tPos, _zPos];
				//diag_log ("terrainIntersectASL: " + str(_cantSee));
				if (!_cantSee) then {
					_cantSee = lineIntersects [_tPos, _zPos];
					//diag_log ("lineIntersects: " + str(_cantSee));
				};
			};
		};
		_cantSee
	};
	
	eh_zombieInit = 	{
		private["_unit","_pos"];
		//_unit = 	_this select 0;
		//_pos =		getPosATL _unit;
		//_id = [_pos,_unit] execFSM "\z\AddOns\dayz_code\system\zombie_agent.fsm";
	};
	
	dayz_equipCheck = {
		private ["_empty", "_needed","_diff","_success"];
		_config = _this;
		_empty = [player] call BIS_fnc_invSlotsEmpty;
		_needed = [_config] call BIS_fnc_invSlotType;
		_diff = [_empty,_needed] call BIS_fnc_vectorDiff;
		
		_success = true;
		{
			if (_x > 0) then {_success = false};
		} forEach _diff;
		hint format["Config: %5\nEmpty: %1\nNeeded: %2\nDiff: %3\nSuccess: %4",_empty,_needed,_diff,_success,_config];
		_success
	};

	vehicle_gear_count = {
		private["_counter"];
		_counter = 0;
		{
			_counter = _counter + _x;
		} forEach _this;
		_counter
	};
	
	dayz_spaceInterrupt = {
		private ["_dikCode", "_handled"];
		_dikCode = 	_this select 1;
		_handled = false;
		/*
		if (_dikCode in (actionKeys "GetOver")) then {
			
			if (player isKindOf  "PZombie_VB") exitWith {
				player switchAction "walkf";
			};
			if (!r_fracture_legs and (time - dayz_lastCheckBit > 4)) then {
				_inBuilding = [player] call fnc_isInsideBuilding;
				_nearbyObjects = nearestObjects[getPosATL player, ["TentStorage","Hedgehog_DZ","Sandbag1_DZ","Sandbag2_DZ","Sandbag3_DZ","TrapBear","Wire_cat1","Gate1_DZ","Land_HBarrier1_DZ","Land_HBarrier1_DZ","HBarrier","SandBagNest","M240Nest_DZ"], 8];
				if (!_inBuilding and (count _nearbyObjects == 0)) then {
					dayz_lastCheckBit = time;
					call player_CombatRoll;
				};
			};
		};
		*/
		//if (_dikCode == 57) then {_handled = true}; // space
		//if (_dikCode in actionKeys 'MoveForward' or _dikCode in actionKeys 'MoveBack') then {r_interrupt = true};
		if (_dikCode == 210) then //SCROLL LOCK
			{
				_nill = execvm "\z\addons\dayz_code\actions\playerstats.sqf";
			};
		if (_dikCode in actionKeys "MoveLeft") then {r_interrupt = true};
		if (_dikCode in actionKeys "MoveRight") then {r_interrupt = true};
		if (_dikCode in actionKeys "MoveForward") then {r_interrupt = true};
		if (_dikCode in actionKeys "MoveBack") then {r_interrupt = true};
		if (_dikCode in actionKeys "ForceCommandingMode") then {_handled = true};
		if (_dikCode in actionKeys "PushToTalk" and (time - dayz_lastCheckBit > 10)) then {
			dayz_lastCheckBit = time;
			[player,50,true,(getPosATL player)] spawn player_alertZombies;
		};
		if (_dikCode in actionKeys "VoiceOverNet" and (time - dayz_lastCheckBit > 10)) then {
			dayz_lastCheckBit = time;
			[player,50,true,(getPosATL player)] spawn player_alertZombies;
		};
		if (_dikCode in actionKeys "PushToTalkDirect" and (time - dayz_lastCheckBit > 10)) then {
			dayz_lastCheckBit = time;
			[player,15,false,(getPosATL player)] spawn player_alertZombies;
		};
		if (_dikCode in actionKeys "Chat" and (time - dayz_lastCheckBit > 10)) then {
			dayz_lastCheckBit = time;
			[player,15,false,(getPosATL player)] spawn player_alertZombies;
		};
		if (_dikCode in actionKeys "User20" and (time - dayz_lastCheckBit > 5)) then {
			dayz_lastCheckBit = time;
			_nill = execvm "\z\addons\dayz_code\actions\playerstats.sqf";
		};
		if ((_dikCode == 0x3E or _dikCode == 0x0F or _dikCode == 0xD3) and (time - dayz_lastCheckBit > 10)) then {
			dayz_lastCheckBit = time;
			call dayz_forceSave;
		};
		/*
		if (_dikCode in actionKeys "IngamePause") then {
			_idOnPause = [] spawn dayz_onPause;
		};
		*/
		if (_dikCode == 0x9D) then {
			if (debugMonitor) then {
				debugMonitor = false;
				hintSilent "";
		} else {[] spawn fnc_debug;};
	};
		_handled
	};
	
	//debug
	fnc_debug = {
		debugMonitor = true;
		while {debugMonitor} do
		{
		//Debug infoz
		_kills = (player getVariable['zombieKills', 0]);
		_killsH = (player getVariable['humanKills', 0]);
		_killsB = (player getVariable['banditKills', 0]);
		_humanity = (player getVariable['humanity', 0]);
		_zombies = count (getPos player nearEntities [["zZombie_Base"], 11000]);
		_zombiesA = {alive _x} count (getPos player nearEntities [["zZombie_Base"], 11000]);
		_server_name 	= "kraZey.de";
		_server_name_info 	= "toggle debug on/off:<br/>right ctrl";
		
		hintSilent parseText format ["
		<t size='1.25'font='Zeppelin33'align='center'>
		%1</t><br/><br/>

		<t size='1.1'font='Zeppelin33'align='left'color='#6BC85B'>
		Blood:</t>

		<t size='1.1' font='Bitstream'align='right'color='#D4D4D4'>
		%2</t><br/>

		<t size='1.1'font='Zeppelin33'align='left'color='#6BC85B'>
		Humanity:</t>

		<t size='1.1'font='Bitstream'align='right'color='#D4D4D4'>
		%3</t><br/>

		<t size='1.1'font='Bitstream'align='left'color='#6BC85B'>
		FPS:</t>

		<t size='1.1' font='Bitstream'align='right'color='#D4D4D4'>
		%4</t><br/>
		
		<t size='1.1'font='Bitstream'align='left'color='#6BC85B'>
		Days Survived:</t>

		<t size='1.1' font='Bitstream'align='right'color='#D4D4D4'>
		%12</t><br/>

		<br/><br/>

		<t size='1.1'font='Zeppelin33'align='left'color='#6BC85B'>
		Murders:</t>

		<t size='1.1'font='Bitstream'align='right'color='#D4D4D4'>
		%5</t><br/>

		<t size='1.1'font='Zeppelin33'align='left'color='#6BC85B'>
		Bandits Killed:</t>

		<t size='1.1'font='Bitstream'align='right'color='#D4D4D4'>
		%6</t><br/>

		<t size='1.1'font='Zeppelin33'align='left'color='#6BC85B'>
		Zombies Killed:</t>

		<t size='1.1'font='Bitstream'align='right'color='#D4D4D4'>
		%7</t><br/>

		<t size='1.1'font='Zeppelin33'align='center'color='#6BC85B'>
		<br/>%10</t><br/>

		<t size='0.85'font='Zeppelin33'align='center'>
		%11</t><br/>",
		(dayz_playerName), //1
		(r_player_blood), //2
		(round _humanity), //3
		(round diag_fps), //4
		_killsH, //5
		_killsB, //6
		_kills, //7
		_zombiesA, //8
		_zombies, //9
		_server_name, //10
		_server_name_info, //11
		(dayz_skilllevel)];
			sleep 1;
		};
	};

	[] spawn fnc_debug;
	
	/*
	player_CombatRoll = {
		DoRE = ({isPlayer _x} count (player nearEntities ["AllVehicles",100]) > 1);
		if (canRoll && animationState player in ["amovpercmrunslowwrfldf","amovpercmrunsraswrfldf","amovpercmevaslowwrfldf","amovpercmevasraswrfldf"]) then {
			canRoll = false;
			null = [] spawn {
				if (DoRE) then {
					[nil, player, rSWITCHMOVE, "ActsPercMrunSlowWrflDf_FlipFlopPara"] call RE;
				} else {
					player switchMove "ActsPercMrunSlowWrflDf_FlipFlopPara";
				};
				sleep 0.3;
				player setVelocity [(velocity player select 0) + 1.5 * sin direction player, (velocity player select 1) + 1.5 * cos direction player, (velocity player select 2) + 4];
				sleep 1;
				canRoll = true;
			};
			_handled = true;
		};
	};
	*/
	
	player_serverModelChange = {
		private["_object","_model"];
		_object = _this select 0;
		_model = _this select 1;
		if (_object == player) then {
			_model call player_switchModel;
		};
	};
	
	player_guiControlFlash = 	{
		private["_control"];
		_control = _this;
		if (ctrlShown _control) then {
			_control ctrlShow false;
		} else {
			_control ctrlShow true;
		};
	};
	
	gear_ui_offMenu = {
		private["_control","_parent","_menu"];
		disableSerialization;
		_control = 	_this select 0;
		_parent = 	findDisplay 106;
		if (!(_this select 3)) then {
			for "_i" from 0 to 9 do {
				_menu = _parent displayCtrl (1600 + _i);
				_menu ctrlShow false;
			};
			_grpPos = ctrlPosition _control;
			_grpPos set [3,0];
			_control ctrlSetPosition _grpPos;
			_control ctrlShow false;
			_control ctrlCommit 0;
		};
	};
	

	gear_ui_init = {
		private["_control","_parent","_menu","_dspl","_grpPos"];
		disableSerialization;
		_parent = findDisplay 106;
		_control = 	_parent displayCtrl 6902;
		for "_i" from 0 to 9 do {
			_menu = _parent displayCtrl (1600 + _i);
			_menu ctrlShow false;
		};
		_grpPos = ctrlPosition _control;
		_grpPos set [3,0];
		_control ctrlSetPosition _grpPos;
		_control ctrlShow false;
		_control ctrlCommit 0;
	};
	
	dayz_eyeDir = {
		private["_vval","_vdir"];
		_vval = (eyeDirection _this);
		_vdir = (_vval select 0) atan2 (_vval select 1);
		if (_vdir < 0) then {_vdir = 360 + _vdir};
		_vdir
	};
	
	dayz_lowHumanity = {
		private["_unit","_humanity","_delay"];
		_unit = _this;
		if ((_unit distance player) < 15) then {
			_humanity = _unit getVariable["humanity",0];
			dayz_heartBeat = true;
			if (_humanity < -3000) then {
				_delay = ((10000 + _humanity) / 5500) + 0.3;
				playSound "heartbeat_1";
				sleep _delay;
			};
			dayz_heartBeat = false;
		};
	};
	/*
	dayz_meleeMagazineCheck = {
		private["_meleeNum","_magType","_wpnType"];
		_wpnType = _this;
		_magType = 	([] + getArray (configFile >> "CfgWeapons" >> _wpnType >> "magazines")) select 0;
		_meleeNum = ({_x == _magType} count magazines player);
		if (_meleeNum > 1) then {
			if (player hasWeapon _wpnType) then {
				_meleeNum = _meleeNum - 1;
			};
			for "_i" from 1 to _meleeNum do {
				player removeMagazine _magType;
			};
		};
	};
	*/
	dayz_originalPlayer =		player;
};

	progressLoadingScreen 0.8;
	
//Both
	BIS_fnc_selectRandom =		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_selectRandom.sqf";		//Checks which actions for nearby casualty
	fnc_buildWeightedArray = 	compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_buildWeightedArray.sqf";		//Checks which actions for nearby casualty
	fnc_usec_damageVehicle =	compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_damageHandlerVehicle.sqf";		//Event handler run on damage
	zombie_initialize = 		compile preprocessFileLineNumbers "\z\addons\dayz_code\init\zombie_init.sqf";
	object_vehicleKilled =		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\object_vehicleKilled.sqf";		//Event handler run on damage
	object_setHitServer =		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\object_setHitServer.sqf";	//process the hit as a NORMAL damage (useful for persistent vehicles)
	object_setFixServer =		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\object_setFixServer.sqf";	//process the hit as a NORMAL damage (useful for persistent vehicles)
	object_getHit =				compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\object_getHit.sqf";			//gets the hit value for a HitPoint (i.e. HitLegs) against the selection (i.e. "legs"), returns the value
	object_setHit =				compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\object_setHit.sqf";			//process the hit as a NORMAL damage (useful for persistent vehicles)
	object_processHit =			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\object_processHit.sqf";		//process the hit in the REVO damage system (records and sets hit)
	object_delLocal =			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\object_delLocal.sqf";
	object_cargoCheck =			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\object_cargoCheck.sqf";		//Run by the player or server to monitor changes in cargo contents
	fnc_usec_damageHandler =	compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_damageHandler.sqf";		//Event handler run on damage
	// Vehicle damage fix
	vehicle_handleDamage    = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\vehicle_handleDamage.sqf";
	vehicle_handleKilled    = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\vehicle_handleKilled.sqf";
	fnc_vehicleEventHandler = 	compile preprocessFileLineNumbers "\z\addons\dayz_code\init\vehicle_init.sqf";			//Initialize vehicle
	fnc_inString = 				compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_inString.sqf";	
	fnc_isInsideBuilding = 		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_isInsideBuilding.sqf";	//_isInside = [_unit,_building] call fnc_isInsideBuilding;
	dayz_zombieSpeak = 			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\object_speak.sqf";			//Used to generate random speech for a unit
	vehicle_getHitpoints =		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\vehicle_getHitpoints.sqf";
	local_gutObject =			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\local_gutObject.sqf";		//Generated on the server (or local to unit) when gutting an object
	local_gutObjectZ =			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\local_gutObjectZ.sqf";		//Generated on the server (or local to unit) when gutting an object
	local_zombieDamage = 		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_damageHandlerZ.sqf";		//Generated by the client who created a zombie to track damage
	local_setFuel =				compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\local_setFuel.sqf";			//Generated when someone refuels a vehicle
	local_eventKill = 			compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\local_eventKill.sqf";		//Generated when something is killed
	//player_weaponCheck =		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_weaponCheck.sqf";	//Run by the player or server to monitor whether they have picked up a new weapon
	curTimeStr =				compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_curTimeStr.sqf";
	player_medBandage =			compile preprocessFileLineNumbers "\z\addons\dayz_code\medical\publicEH\medBandaged.sqf";
	player_medInject =			compile preprocessFileLineNumbers "\z\addons\dayz_code\medical\publicEH\medInject.sqf";
	player_medEpi =				compile preprocessFileLineNumbers "\z\addons\dayz_code\medical\publicEH\medEpi.sqf";
	player_medTransfuse =		compile preprocessFileLineNumbers "\z\addons\dayz_code\medical\publicEH\medTransfuse.sqf";
	player_medMorphine =		compile preprocessFileLineNumbers "\z\addons\dayz_code\medical\publicEH\medMorphine.sqf";
	player_breaklegs =			compile preprocessFileLineNumbers "\z\addons\dayz_code\medical\publicEH\medBreakLegs.sqf";
	player_medPainkiller =		compile preprocessFileLineNumbers "\z\addons\dayz_code\medical\publicEH\medPainkiller.sqf";
	world_isDay = 				{if ((daytime < (24 - dayz_sunRise)) and (daytime > dayz_sunRise)) then {true} else {false}};
	player_humanityChange =		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_humanityChange.sqf";
	spawn_loot =				compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\spawn_loot.sqf";
	player_projectileNear = 		compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_projectileNear.sqf";
	
	player_sumMedical = {
		private["_character","_wounds","_legs","_arms","_medical"];
		_character = 	_this;
		_wounds =		[];
		if (_character getVariable["USEC_injured",false]) then {
			{
				if (_character getVariable[_x,false]) then {
					_wounds set [count _wounds,_x];
				};
			} forEach USEC_typeOfWounds;
		};
		_legs = _character getVariable ["hit_legs",0];
		_arms = _character getVariable ["hit_arms",0];
		_medical = [
			_character getVariable["USEC_isDead",false],
			_character getVariable["NORRN_unconscious", false],
			_character getVariable["USEC_infected",false],
			_character getVariable["USEC_injured",false],
			_character getVariable["USEC_inPain",false],
			_character getVariable["USEC_isCardiac",false],
			_character getVariable["USEC_lowBlood",false],
			_character getVariable["USEC_BloodQty",12000],
			_wounds,
			[_legs,_arms],
			_character getVariable["unconsciousTime",0],
			_character getVariable["messing",[0,0]]
		];
		_medical
	};
	
	
	//Server Only
	if (isServer) then {
		call compile preprocessFileLineNumbers "\z\addons\dayz_server\init\server_functions.sqf";
	} else {
		eh_localCleanup = {};
	};
	
	
	//Start Dynamic Weather
	execVM "\z\addons\dayz_code\external\DynamicWeatherEffects.sqf";
	initialized = true;