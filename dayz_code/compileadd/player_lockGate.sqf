/*
[_obj] spawn player_unlockGate;
*/
private["_objectID","_objectUID","_obj","_ownerID","_dir","_pos","_bag","_holder","_objWpnTypes","_objWpnQty","_countr"];

if(TradeInprogress) exitWith { cutText ["Lock already in progress." , "PLAIN DOWN"]; };
TradeInprogress = true;

_obj = _this;
_ownerID = _obj getVariable["CharacterID","0"];
_objectID 	= _obj getVariable["ObjectID","0"];
_objectUID	= _obj getVariable["ObjectUID","0"];
player playActionNow "Medic";

player removeAction s_player_lockgate;
s_player_lockgate = -1;

if(_ownerID == dayz_playerUID) then {
	_alreadyPacking = _obj getVariable["packing",0];

	if (_alreadyPacking == 1) exitWith {cutText ["That Gate is already being locked." , "PLAIN DOWN"]};

	_obj setVariable["packing",1];

	_dir = direction _obj;
	// _pos = getposATL _obj;
	_pos	= _obj getVariable["OEMPos",(getposATL _obj)];
	[player,"tentpack",0,false] call dayz_zombieSpeak;
	sleep 3;

	//place gate (local)
	_holder = createVehicle ["Gate_Locked_DZ",_pos,[], 0, "CAN_COLLIDE"];
	_holder setdir _dir;
	_holder setpos _pos;
	player reveal _holder;
	
	_holder setVariable["CharacterID",_ownerID,true];
	_holder setVariable["ObjectID",_objectID,true];
	_holder setVariable["ObjectUID",_objectUID,true];
	_holder setVariable ["OEMPos", _pos, true];
	
	// remove gate
	deleteVehicle _obj;
	
	cutText ["Your Gate has been locked", "PLAIN DOWN"];
} else {
	cutText ["You cannot lock this Gate, it is not yours", "PLAIN DOWN"];
};
TradeInprogress = false;