"norrnRaLW" addPublicVariableEventHandler {[_this select 1] spawn (compile preProcessFileLineNumbers "\z\addons\dayz_code\medical\publicEH\load_wounded.sqf");};
"norrnRLact" addPublicVariableEventHandler {[_this select 1] spawn (compile preProcessFileLineNumbers "\z\addons\dayz_code\medical\load\load_wounded.sqf");};
"norrnRDead" addPublicVariableEventHandler {[_this select 1] spawn (compile preProcessFileLineNumbers "\z\addons\dayz_code\medical\publicEH\deadState.sqf");};
"norrnRaDrag" addPublicVariableEventHandler {[_this select 1] spawn (compile preProcessFileLineNumbers "\z\addons\dayz_code\medical\publicEH\animDrag.sqf");};
"norrnRnoAnim" addPublicVariableEventHandler {[_this select 1] spawn (compile preProcessFileLineNumbers "\z\addons\dayz_code\medical\publicEH\noAnim.sqf");};

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