/*
 * TiMZBeta_v2 - timWeapons
 * Modified by krazey
 */
disableserialization;

_weaponAss = false;

// Weapon database
_wwAcog = ["M16A4_ACG","SCAR_L_STD_Mk4CQT","M16A4_ACG_GL","R3F_Famas_G2_J4","R3F_Famas_G2_J4_DES"];
_wwdAcog = ["M16A2","SCAR_L_CQC","M16A4_GL","R3F_Famas_G2","R3F_Famas_G2_DES"];

if (!("ItemToolbox_KR" in items player)) exitWith {
	cutText ["Toolbox required to assemble a acog scope to your weapon.", "PLAIN DOWN"];
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

	if(_weaponAss) then {
		cutText ["You have successfully assembled a acog scope to your weapon.", "PLAIN DOWN"];
	} else {
		cutText ["You don't have a fitting weapon for assembling a acog scope.", "PLAIN DOWN"];
	};

	sleep 3;

	TradeInprogress = false;
} else {
	cutText ["You are already doing stuff.", "PLAIN DOWN"];
};