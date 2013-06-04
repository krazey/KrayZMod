/*
[_obj] spawn player_unlockGate;
*/
private ["_objectID","_objectUID","_obj","_ownerID","_dir","_pos","_holder","_objWpnTypes","_objWpnQty","_countr","_allowunlock","_alreadyPacking"];
_obj = _this;
_ownerID = _obj getVariable["CharacterID","0"];
_objectID 	= _obj getVariable["ObjectID","0"];
_objectUID	= _obj getVariable["ObjectUID","0"];
player playActionNow "Medic";

player removeAction s_player_unlockgate;
s_player_unlockgate = 1;

UnlockInprogress = true;

if (_ownerID == krayzUID) then {
	_alreadyPacking = _obj getVariable["packing",0];

	if (_alreadyPacking == 1) exitWith {cutText ["That Gate is already being unlocked." , "PLAIN DOWN"]};

	_obj setVariable["packing",1];

	_dir = direction _obj;
	// _pos = getposATL _obj;
	_pos	= _obj getVariable["OEMPos",(getposATL _obj)];
	player playActionNow "Medic";
	sleep 1;
	[player,"tentpack",0,false] call dayz_zombieSpeak;
	sleep 5;

	//place gate (local)
	_holder = createVehicle ["Gate_DZ",_pos,[], 0, "CAN_COLLIDE"];
	_holder setdir _dir;
	_holder setpos _pos;
	player reveal _holder;
	
	_holder setVariable["CharacterID",_ownerID,true];
	_holder setVariable["ObjectID",_objectID,true];
	_holder setVariable["ObjectUID",_objectUID,true];
	_holder setVariable ["OEMPos", _pos, true];
	
	// Remove locked gate
	deleteVehicle _obj;
	
	cutText ["Gate has been unlocked.", "PLAIN DOWN"];
} else {
	player playActionNow "Medic";
	sleep 3;
	[player,"repair",0,false] call dayz_zombieSpeak;
	null = [player,25,true,(getPosATL player)] spawn player_alertZombies;
	sleep 5;
	cutText ["This is not your Gate.", "PLAIN DOWN"];
};

s_player_unlockgate = -1;
UnlockInprogress = false;
