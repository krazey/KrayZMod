_unit = (_this select 3) select 0;
_unit setVariable ["USEC_inPain", false, true];
call fnc_usec_medic_removeActions;
r_action = false;
if (vehicle player == player) then {
	player playActionNow "Gear";
};
if (_unit == player) then {
	_id = [player,player] spawn (compile preProcessFileLineNumbers "\z\addons\dayz_code\medical\publicEH\medPainkiller.sqf");
} else {
	[player,20] call player_humanityChange;
};
player removeMagazine "ItemPainkiller";
sleep 1;
usecPainK = [_unit,player];
publicVariable "usecPainK";
