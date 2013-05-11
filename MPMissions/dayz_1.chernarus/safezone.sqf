//KrayZ Safezone for Players with Eventhandler

Private ["_Basis","_EH_Fired"];
ZombieDistance = 10;

_Basis = _this select 0; //Basisname

while {true} do {
	//--------------------------------------------------------------------------------------
	//wait until Player is in Safezone, then start Eventhandler
    waitUntil {vehicle player in list _Basis};
	//--------------------------------------------------------------------------------------
	_EH_Fired  = vehicle player addEventHandler ["Fired", { NearestObject [_this select 0,_this select 4] setPos[0,0,0]}];
	_object = player;
	player setUnitRecoilCoefficient 0;
	player_zombieCheck = {};
	fnc_usec_damageHandler = {};
	fnc_usec_unconscious  = {};
	_object allowDamage false;
	hint "Entering Safezone!";

	//deleting zombies
	while {vehicle player in list _Basis} do {
		_pos = getPos player;
		_zombies = _pos nearEntities ["zZombie_Base",ZombieDistance];
		_count = count _zombies;
		for "_i" from 0 to (_count -1) do { 
			_zombie = _zombies select _i;
			deletevehicle _zombie;
		};
	};
	//--------------------------------------------------------------------------------------
    //wait until Player left Safezone, then delete EventHandler
    waitUntil {! (vehicle player in list _Basis)};
	//--------------------------------------------------------------------------------------
	player removeEventHandler ["Fired", _EH_Fired];
	player setUnitRecoilCoefficient 1;
	player_zombieCheck = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_zombieCheck.sqf";
	fnc_usec_damageHandler = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_damageHandler.sqf";
	fnc_usec_unconscious = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_unconscious.sqf";
	player allowDamage true;
	hint "Leaving Safezone!";
} 