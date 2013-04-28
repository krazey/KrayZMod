"norrnRaLW" addPublicVariableEventHandler {[_this select 1] spawn (compile preProcessFileLineNumbers "\z\addons\dayz_code\medical\publicEH\load_wounded.sqf");};
"norrnRLact" addPublicVariableEventHandler {[_this select 1] spawn (compile preProcessFileLineNumbers "\z\addons\dayz_code\medical\load\load_wounded.sqf");};
"norrnRDead" addPublicVariableEventHandler {[_this select 1] spawn (compile preProcessFileLineNumbers "\z\addons\dayz_code\medical\publicEH\deadState.sqf");};
"norrnRaDrag" addPublicVariableEventHandler {[_this select 1] spawn (compile preProcessFileLineNumbers "\z\addons\dayz_code\medical\publicEH\animDrag.sqf");};
"norrnRnoAnim" addPublicVariableEventHandler {[_this select 1] spawn (compile preProcessFileLineNumbers "\z\addons\dayz_code\medical\publicEH\noAnim.sqf");};

player_useMeds = {
	private["_item"];
	_item = _this;
	call gear_ui_init;
	_onLadder =		(getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
	if (_onLadder) exitWith {cutText [(localize "str_player_21") , "PLAIN DOWN"]};
	_hasmeditem = _this in magazines player;
	_config = configFile >> "CfgMagazines" >> _item;
	_text = getText (_config >> "displayName");
	if (!_hasmeditem) exitWith {cutText [format[(localize "str_player_31"),_text,"use"] , "PLAIN DOWN"]};
	switch (_item) do {
		case "ItemBandage": {
			[0,0,0,[player]] spawn (compile preProcessFileLineNumbers "krazey\admins\bandage.sqf");
		};
		case "ItemMorphine": {
			[0,0,0,[player]] spawn (compile preProcessFileLineNumbers "krazey\admins\morphine.sqf");
		};
		case "ItemPainkiller": {
			[0,0,0,[player]] spawn (compile preProcessFileLineNumbers "krazey\admins\painkiller.sqf");
		};
		case "ItemAntibiotic": {
			[0,0,0,[player]] spawn (compile preProcessFileLineNumbers "krazey\admins\antibiotics.sqf");
		};
		case "ItemHeatPack": {
			player removeMagazine "ItemHeatPack";
			dayz_temperatur = (dayz_temperatur + 5) min dayz_temperaturmax;
			cutText [localize "str_player_27", "PLAIN DOWN"];
		};
	};
};

dayz_spaceInterrupt = {
	private ["_dikCode", "_handled"];
	_dikCode = _this select 1;
	_handled = false;
	if (_dikCode in (actionKeys "GetOver")) then {
		if (!r_fracture_legs and (time - dayz_lastCheckBit > 4)) then {
			_inBuilding = [player] call fnc_isInsideBuilding;
			_nearbyObjects = nearestObjects[getPosATL player, ["TentStorage","Hedgehog_DZ","Sandbag1_DZ","Sandbag2_DZ","Sandbag3_DZ","TrapBear","Wire_cat1","Gate1_DZ","Land_HBarrier1_DZ","Land_HBarrier1_DZ","HBarrier","SandBagNest","M240Nest_DZ"], 8];
			if (!_inBuilding and (count _nearbyObjects == 0)) then {
				dayz_lastCheckBit = time;
				call player_CombatRoll;
			};
		};
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
	};
	if ((_dikCode == 0x3E or _dikCode == 0x0F or _dikCode == 0xD3) and (time - dayz_lastCheckBit > 10)) then {
		dayz_lastCheckBit = time;
		call dayz_forceSave;
	};
	if (_dikCode == 0x9D) then {
		if (debugMonitor) then {
			debugMonitor = false;
			hintSilent "";
		} else {[] spawn fnc_debug;};
	};
	_handled
};

fnc_usec_playerBleed = {
	private["_bleedTime","_bleedPerSec","_total","_bTime","_myBleedTime"];
	_bleedTime = 400;
	_bleedPerSec = (r_player_bloodTotal / _bleedTime);
	_total = r_player_bloodTotal;
	r_player_injured = true;
	_myBleedTime = (random 500) + 100;
	_bTime = 0;
	while {r_player_injured} do {
		if (r_player_blood > 0) then {
			r_player_blood = r_player_blood - _bleedPerSec;
		};
		_bTime = _bTime + 1;
		if (_bTime > _myBleedTime) then {
			r_player_injured = false;
			_id = [player,player] spawn (compile preProcessFileLineNumbers "\z\addons\dayz_code\medical\publicEH\medBandaged.sqf");
			dayz_sourceBleeding = objNull;
			{player setVariable[_x,false,true];} forEach USEC_woundHit;
			player setVariable ["USEC_injured",false,true];
		};
		sleep 1;
	};
};

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