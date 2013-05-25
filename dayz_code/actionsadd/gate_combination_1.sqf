private ["_buy","_number"];
dayz_selectedGate = _this select 3;
dayz_combination = "";
_number = 0;

{player removeAction _x} forEach s_player_gatecombi;s_player_gatecombi = [];

for "_x" from 1 to 10 do {
	_buy = player addAction [str(_number), "\z\addons\dayz_code\actionsadd\gate_combination_2.sqf",str(_number), 99, true, false, "",""];
	s_player_gatecombi set [count s_player_gatecombi,_buy];
	_number = _number + 1;
};