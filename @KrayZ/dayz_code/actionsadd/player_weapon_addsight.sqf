/*
 * TiMZBeta_v2 - timWeapons
 * Modified by krazey
 */
disableserialization;

_weaponAss = false;

// Weapon database
_wwRedDot = ["AKS_74_kobra","Sa58V_CCO_EP1","M4A1_Aim","M14_EP1"];
_wwdRedDot = ["AKS_74","Sa58V_EP1","M4A1","DMR"];
_wwHolo = ["SCAR_L_STD_HOLO","M4A1_HWS_GL_camo"];
_wwdHolo = ["SCAR_L_CQC","M4A1_HWS_GL"];
_wwAcog = ["M16A4_ACG"];
_wwdAcog = ["M16A2"];
_wwSniper = ["huntingrifle","SCAR_H_LNG_Sniper","DMR"];
_wwdSniper = ["LeeEnfield","SCAR_H_CQC_CCO","M14_EP1"];

if (!("ItemToolbox" in items player)) exitWith {
	cutText ["Toolbox required to assemble sights to your weapon.", "PLAIN DOWN"];
};

if(!TradeInprogress) then {
	TradeInprogress = true;

	_onLadder =		(getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
	if (_onLadder) exitWith { cutText [(localize "str_player_21") , "PLAIN DOWN"]; TradeInprogress = false; };
	if (vehicle player != player) exitWith { cutText ["You may not do this while in a vehicle", "PLAIN DOWN"]; TradeInprogress = false; };

	//---------------------------------------------------------

	// Check through RED DOT weapons
	_wwIndex = 0;
	{
		if(!_weaponAss) then {
			_plyrWeapon = player hasWeapon _x;

			if(_plyrWeapon) then {
				_qtyRedDot = {_x == "RedDot_DZ"} count magazines player;

				if(_qtyRedDot > 0) then {
					player removeMagazine "RedDot_DZ";

					for "_i" from 0 to 1 do
					{
						player playActionNow "Medic";
						sleep 1;
						[player,"repair",0,false] call dayz_zombieSpeak;
						sleep 7;
					};

					player removeWeapon _x;
					_newWeapon =  _wwRedDot select _wwIndex;
					player addWeapon _newWeapon;
					_weaponAss = true;
				};
			};

			_wwIndex = _wwIndex + 1;
		};
	} forEach _wwdRedDot;

	//---------------------------------------------------------

	// Check through HOLO weapons
	_wwIndex = 0;
	{
		if(!_weaponAss) then {
			_plyrWeapon = player hasWeapon _x;

			if(_plyrWeapon) then {
				_qtyHolo = {_x == "Holo_DZ"} count magazines player;

				if(_qtyHolo > 0) then {
					player removeMagazine "Holo_DZ";

					for "_i" from 0 to 1 do
					{
						player playActionNow "Medic";
						sleep 1;
						[player,"repair",0,false] call dayz_zombieSpeak;
						sleep 7;
					};

					player removeWeapon _x;
					_newWeapon =  _wwHolo select _wwIndex;
					player addWeapon _newWeapon;
					_weaponAss = true;
				};
			};

			_wwIndex = _wwIndex + 1;
		};
	} forEach _wwdHolo;

	//---------------------------------------------------------

	// Check through ACOG weapons
	_wwIndex = 0;
	{
		if(!_weaponAss) then {
			_plyrWeapon = player hasWeapon _x;

			if(_plyrWeapon) then {
				_qtyACOG = {_x == "ACOG_DZ"} count magazines player;

				if(_qtyACOG > 0) then {
					player removeMagazine "ACOG_DZ";

					for "_i" from 0 to 1 do
					{
						player playActionNow "Medic";
						sleep 1;
						[player,"repair",0,false] call dayz_zombieSpeak;
						sleep 7;
					};

					player removeWeapon _x;
					_newWeapon =  _wwAcog select _wwIndex;
					player addWeapon _newWeapon;
					_weaponAss = true;
				};		
			};

			_wwIndex = _wwIndex + 1;
		};
	} forEach _wwdAcog;

	//---------------------------------------------------------

	// Check through SNIPER weapons
	_wwIndex = 0;
	{
		if(!_weaponAss) then {
			_plyrWeapon = player hasWeapon _x;

			if(_plyrWeapon) then {
				_qtySniper = {_x == "Sniper_DZ"} count magazines player;

				if(_qtySniper > 0) then {
					player removeMagazine "Sniper_DZ";

					// Special case: Mk17 Sniper
					if(_x == "SCAR_H_CQC_CCO") then {
						player addMagazine "RedDot_DZ";
						sleep 1;
					};

					for "_i" from 0 to 1 do
					{
						player playActionNow "Medic";
						sleep 1;
						[player,"repair",0,false] call dayz_zombieSpeak;
						sleep 7;
					};

					player removeWeapon _x;
					_newWeapon =  _wwSniper select _wwIndex;
					player addWeapon _newWeapon;
					_weaponAss = true;
				};
			};

			_wwIndex = _wwIndex + 1;
		};
	} forEach _wwdSniper;

	//---------------------------------------------------------

	if(_weaponAss) then {
		cutText ["You have successfully assembled sights to your weapon.", "PLAIN DOWN"];
	} else {
		cutText ["You don't have a fitting weapon for assembling a sight or you're missing the fitting sight.", "PLAIN DOWN"];
	};

	sleep 3;

	TradeInprogress = false;
} else {
	cutText ["You are already doing stuff.", "PLAIN DOWN"];
};