private ["_hasbottleitem","_hastinitem","_bottletext","_tin1text","_tin2text","_tintext","_qty","_dis","_sfx","_removed"];

if(TradeInprogress) exitWith { cutText ["Boil already in progress." , "PLAIN DOWN"]; };
TradeInprogress = true;

player removeAction s_player_boil;
s_player_boil = -1;

_hasbottleitem = "ItemWaterbottle" in magazines player;
_hastinitem = false;
{
    if (_x in magazines player) then {
        _hastinitem = true;
    };

} forEach boil_tin_cans;

_bottletext = getText (configFile >> "CfgMagazines" >> "ItemWaterbottle" >> "displayName");
_tin1text = getText (configFile >> "CfgMagazines" >> "TrashTinCan_KR" >> "displayName");
_tin2text = getText (configFile >> "CfgMagazines" >> "ItemSodaEmpty_KR" >> "displayName");
_tintext = format["%1 / %2",_tin1text,_tin2text];
if (!_hasbottleitem) exitWith {TradeInprogress = false; cutText [format[(localize "str_player_31"),_bottletext,"fill"] , "PLAIN DOWN"]};
if (!_hastinitem) exitWith {TradeInprogress = false; cutText [format[(localize "str_player_31"),_tintext,"fill"] , "PLAIN DOWN"]};

_removed = 0;

if (_hasbottleitem and _hastinitem) then {
	_qty = {_x == "ItemWaterbottle"} count magazines player;
	if ("ItemWaterbottle" in magazines player) then {
		
		_removed = _removed + ([player,"ItemWaterbottle",_qty] call BIS_fnc_invRemove);
		
		player playActionNow "Medic";
        sleep 1;

        _dis=10;
        _sfx = "cook";
        [player,_sfx,0,false,_dis] call dayz_zombieSpeak;
        [player,_dis,true,(getPosATL player)] spawn player_alertZombies;

        sleep 5;

		// Add back only number of removed
		for "_x" from 1 to _removed do {
			player addMagazine "ItemWaterbottleBoiled";
		};
		
		cutText [format[(localize  "str_player_01"),_qty], "PLAIN DOWN"];
	} else {
		cutText [(localize "str_player_02") , "PLAIN DOWN"];
	};
};

TradeInprogress = false;