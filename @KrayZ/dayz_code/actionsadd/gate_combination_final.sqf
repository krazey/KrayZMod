private [];
// set final combination to player 
dayz_combination = format["%1%2",dayz_combination,(_this select 3)];
{player removeAction _x} forEach s_player_gatecombi;s_player_gatecombi = [];
s_player_unlockvault = -1;
// Run unlock on Gate
if(!isNull dayz_selectedGate and (typeOf dayz_selectedGate) == "Gate2_Locked_DZ") then {
	dayz_selectedGate spawn player_unlockGate2;
	dayz_selectedGate = objNull;
};