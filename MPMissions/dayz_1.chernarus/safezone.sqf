//Base protection for Players with Eventhandler
//

Private ["_Basis","_EH_Fired","_EH_Hit","_EH_Killed"];
 
 
_Basis = _this select 0; //Basisname
 
while {true} do
  {
    //wait until Player is in base, then start Eventhandler
    waitUntil {vehicle player in list _Basis};
    player groupchat "i am in Baseshield!";
    _EH_Fired  = vehicle player addEventHandler ["Fired", { NearestObject [_this select 0,_this select 4] setPos[0,0,0]}];
    _EH_Hit    = vehicle player addEventHandler ["Hit",  {_this select 1 setdammage 1; player setDammage 0; vehicle player setDammage 0}];
    _EH_Killed = vehicle player addEventHandler ["Killed",{_this select 1 setdammage 1}];
    //wait until Player left base, then delete EventHandler
    waitUntil {! (vehicle player in list _Basis)};
    player groupchat "i have left Baseshield!";
    player removeEventHandler ["Fired", _EH_Fired];
    player removeEventHandler ["Hit",  _EH_Hit];
    player removeEventHandler ["Killed",_EH_Killed];
  } 