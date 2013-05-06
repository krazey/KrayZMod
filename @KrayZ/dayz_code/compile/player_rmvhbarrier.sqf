/*
[_obj] spawn player_rmvhbarrier;
*/
private["_obj","_ownerID","_objectID","_objectUID","_alreadyPacking","_location1","_location2","_dir","_pos","_bag"];

if(TradeInprogress) exitWith { cutText ["That Hesco Barrier is already being removed." , "PLAIN DOWN"]; };
TradeInprogress = true;

_obj = _this;
_ownerID = _obj getVariable["CharacterID","0"];
_objectID 	= _obj getVariable["ObjectID","0"];
_objectUID	= _obj getVariable["ObjectUID","0"];

player removeAction s_player_rmvhbarrier;
s_player_rmvhbarrier = 1;

if(_ownerID == dayz_playerUID) then {
	_alreadyPacking = _obj getVariable["packing",0];
	if (_alreadyPacking == 1) exitWith {cutText ["That Hesco Barrier is already being removed." , "PLAIN DOWN"]};
	_obj setVariable["packing",1];

	cutText ["Removing Hesco Barrier, move from this position to cancel within 5 seconds.", "PLAIN DOWN"];
	sleep 1; 
	_location1 = getPosATL player;
	sleep 5;
	_location2 = getPosATL player;
	
	if(_location1 distance _location2 > 0.1) exitWith {
		cutText ["Removing Hesco Barrier canceled." , "PLAIN DOWN"];
		_obj setVariable["packing",0];
	};

	player playActionNow "Medic";

	_dir = direction _obj;
	
	_pos = _obj getVariable["OEMPos",(getposATL _obj)];
	
	[player,"tentpack",0,false] call dayz_zombieSpeak;
	sleep 3;

	//add hbarrier to inventory
	player addMagazine "ItemHBarrier";

	dayzDeleteObj = [_objectID,_objectUID];
	publicVariableServer "dayzDeleteObj";
	
	deleteVehicle _obj;
	
	cutText ["Your Hesco Barrier has been removed", "PLAIN DOWN"];
} else {
	cutText ["You cannot remove this Hesco Barrier, it is not yours", "PLAIN DOWN"];
};

s_player_rmvhbarrier = -1;
TradeInprogress = false;