/*
 * TiMZBeta_v2 - timWeapons
 * Modified by krazey
 */
disableserialization;

_weaponDis = false;

// Weapon database
_wwRedDot = ["AKS_74_kobra","Sa58V_CCO_EP1","M4A1_Aim","M14_EP1","M16A4"];
_wwdRedDot = ["AKS_74","Sa58V_EP1","M4A1","DMR","M16A2"];

if(!TradeInprogress) then {
	TradeInprogress = true;

	_onLadder =		(getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
	if (_onLadder) exitWith { cutText [(localize "str_player_21") , "PLAIN DOWN"]; TradeInprogress = false; };
	if (vehicle player != player) exitWith { cutText ["You may not do this while in a vehicle", "PLAIN DOWN"]; TradeInprogress = false; };

	//---------------------------------------------------------

	_wwIndex = 0;
	{
		if(!_weaponDis) then {
			_plyrWeapon = player hasWeapon _x;

			if(_plyrWeapon) then {
				for "_i" from 0 to 1 do
				{
					player playActionNow "Medic";
					sleep 1;
					[player,"repair",0,false] call dayz_zombieSpeak;
					sleep 7;
				};

				player removeWeapon _x;
				_newWeapon =  _wwdRedDot select _wwIndex;
				player addWeapon _newWeapon;
				_weaponDis = true;

				player addMagazine "RedDot_DZ";
				sleep 1;
			};

			_wwIndex = _wwIndex + 1;
		};
	} forEach _wwRedDot;

	//---------------------------------------------------------

	if(_weaponDis) then {
		cutText ["You have successfully disassembled the red dot of your weapon.", "PLAIN DOWN"];
	} else {
		cutText ["You don't have a fitting weapon for disassembling a red dot.", "PLAIN DOWN"];
	};

	sleep 3;

	TradeInprogress = false;
} else {
	cutText ["You are already doing stuff.", "PLAIN DOWN"];
};