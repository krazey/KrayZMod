//KrayZ Safezone for Players

Private ["_Basis","_EH_Fired"];
ZombieDistance = 50;

_Basis = _this select 0; //Basisname

while {true} do {
	//--------------------------------------------------------------------------------------
	//wait until Player is in Safezone
    waitUntil {vehicle player in list _Basis};
	//--------------------------------------------------------------------------------------
	_EH_Fired  = vehicle player addEventHandler ["fired", { NearestObject [_this select 0,_this select 4] setPos[0,0,0]}];
	_object = player;
	player_zombieCheck = {};
	fnc_usec_damageHandler = {};
	fnc_usec_unconscious  = {};
	_object allowDamage false;
	hint "Entering Safezone!";
	cutText ["Entering Safezone!", "PLAIN DOWN"];

	//deleting zombies
	while {vehicle player in list _Basis} do {
		_pos = getPos player;
		_zombies = _pos nearEntities ["zZombie_Base_KR",ZombieDistance];
		_count = count _zombies;
		for "_i" from 0 to (_count -1) do { 
			_zombie = _zombies select _i;
			deletevehicle _zombie;
		};
	};
	//--------------------------------------------------------------------------------------
    //wait until Player left Safezone
    waitUntil {! (vehicle player in list _Basis)};
	//--------------------------------------------------------------------------------------
	player removeEventHandler ["fired", _EH_Fired];
	player_zombieCheck = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_zombieCheck.sqf";
	fnc_usec_damageHandler = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_damageHandler.sqf";
	fnc_usec_unconscious = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_unconscious.sqf";
	player allowDamage true;
	hint "Leaving Safezone!";
	cutText ["Leaving Safezone!", "PLAIN DOWN"];
} 