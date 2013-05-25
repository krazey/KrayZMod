/*
 * TiMZBeta_v2 - timWeapons
 * Modified by krazey
 */
disableserialization;

_weaponAss = false;

// Weapon database
_wwLauncher = ["M4A1_HWS_GL_SD_Camo","M16A4_GL","AK_107_GL_kobra","AK_107_GL_pso"];
_wwdLauncher = ["M4A1_AIM_SD_camo","M16A2","AK_107_kobra","AK_107_pso"];

if (!("ItemToolbox_KR" in items player)) exitWith {
	cutText ["Toolbox required to assemble a grenade launcher to your weapon.", "PLAIN DOWN"];
};

if(!TradeInprogress) then {
	TradeInprogress = true;

	_onLadder =		(getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
	if (_onLadder) exitWith { cutText [(localize "str_player_21") , "PLAIN DOWN"]; TradeInprogress = false; };
	if (vehicle player != player) exitWith { cutText ["You may not do this while in a vehicle", "PLAIN DOWN"]; TradeInprogress = false; };

	//---------------------------------------------------------

	_wwIndex = 0;
	{
		if(!_weaponAss) then {
			_plyrWeapon = player hasWeapon _x;

			if(_plyrWeapon) then {
				_qtyLauncher = {_x == "Launcher_DZ"} count magazines player;

				if(_qtyLauncher > 0) then {
					player removeMagazine "Launcher_DZ";

					for "_i" from 0 to 1 do
					{
						player playActionNow "Medic";
						sleep 1;
						[player,"repair",0,false] call dayz_zombieSpeak;
						sleep 7;
					};

					player removeWeapon _x;
					_newWeapon =  _wwLauncher select _wwIndex;
					player addWeapon _newWeapon;
					_weaponAss = true;
				};
			};

			_wwIndex = _wwIndex + 1;
		};
	} forEach _wwLauncher;

	//---------------------------------------------------------

	if(_weaponAss) then {
		cutText ["You have successfully assembled a grenade launcher to your weapon.", "PLAIN DOWN"];
	} else {
		cutText ["You don't have a fitting weapon for assembling a grenade launcher.", "PLAIN DOWN"];
	};

	sleep 3;

	TradeInprogress = false;
} else {
	cutText ["You are already doing stuff.", "PLAIN DOWN"];
};