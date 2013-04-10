/*
 * TiMZBeta_v2 - timWeapons
 * Modified by krazey
 */
disableserialization;

_weaponDis = false;

// Weapon database
_wwRedDot = ["AKS_74_kobra","Sa58V_CCO_EP1","M4A1_Aim","M14_EP1"];
_wwdRedDot = ["AKS_74","Sa58V_EP1","M4A1","DMR"];
_wwHolo = ["SCAR_L_STD_HOLO","M4A1_HWS_GL_camo"];
_wwdHolo = ["SCAR_L_CQC","M4A1_HWS_GL"];
_wwAcog = ["M16A4_ACG"];
_wwdAcog = ["M16A2"];
_wwSniper = ["huntingrifle","SCAR_H_LNG_Sniper","DMR"];
_wwdSniper = ["LeeEnfield","SCAR_H_CQC_CCO","M14_EP1"];

if(!TradeInprogress) then {
	TradeInprogress = true;

	_onLadder =		(getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
	if (_onLadder) exitWith { cutText [(localize "str_player_21") , "PLAIN DOWN"]; TradeInprogress = false; };
	if (vehicle player != player) exitWith { cutText ["You may not do this while in a vehicle", "PLAIN DOWN"]; TradeInprogress = false; };

	//---------------------------------------------------------

	// Check through RED DOT weapons
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

	// Check through HOLO weapons
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
				_newWeapon =  _wwdHolo select _wwIndex;
				player addWeapon _newWeapon;
				_weaponDis = true;

				player addMagazine "Holo_DZ";
				sleep 1;
			};

			_wwIndex = _wwIndex + 1;
		};
	} forEach _wwHolo;

	//---------------------------------------------------------

	// Check through ACOG weapons
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
				_newWeapon =  _wwdAcog select _wwIndex;
				player addWeapon _newWeapon;
				_weaponDis = true;

				player addMagazine "ACOG_DZ";
				sleep 1;
			};

			_wwIndex = _wwIndex + 1;
		};
	} forEach _wwAcog;

	//---------------------------------------------------------

	// Check through SNIPER weapons
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
				_newWeapon =  _wwdSniper select _wwIndex;
				player addWeapon _newWeapon;
				_weaponDis = true;

				player addMagazine "Sniper_DZ";
				sleep 1;
			};

			_wwIndex = _wwIndex + 1;
		};
	} forEach _wwSniper;

	//---------------------------------------------------------

	if(_weaponDis) then {
		cutText ["You have successfully disassembled the sights of your weapon.", "PLAIN DOWN"];
	} else {
		cutText ["You don't have a fitting weapon for disassembling sights.", "PLAIN DOWN"];
	};

	sleep 3;

	TradeInprogress = false;
} else {
	cutText ["You are already doing stuff.", "PLAIN DOWN"];
};