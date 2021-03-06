/*
 * TiMZBeta_v2 - timWeapons
 * Modified by krazey
 */
disableserialization;

_weaponAss = false;

// Weapon database
_wwHolo = ["SCAR_L_STD_HOLO","M4A1_HWS_GL_camo","R3F_Famas_F1_EOT","R3F_Famas_F1_EOT_DES","R3F_Famas_G2_EOT","R3F_Famas_G2_EOT_DES","R3F_Famas_F1_EOT","R3F_Famas_F1_EOT_DES","R3F_Famas_G2_EOT","R3F_Famas_G2_EOT_DES","R3F_Famas_surb_EOT_SD","R3F_Famas_surb_EOT_SD_DES","R3F_HK417S_EOT_HG","R3F_HK417S_EOT_HG_DES"];
_wwdHolo = ["SCAR_L_CQC","M4A1_HWS_GL","R3F_Famas_F1","R3F_Famas_F1_DES","R3F_Famas_G2","R3F_Famas_G2_DES","R3F_Famas_F1_AIM","R3F_Famas_F1_AIM_DES","R3F_Famas_G2_AIM","R3F_Famas_G2_AIM_DES","R3F_Famas_surb_AIM_SD","R3F_Famas_surb_AIM_SD_DES","R3F_HK417M_AIM","R3F_HK417M_AIM_DES"];

if (!("ItemToolbox_KR" in items player)) exitWith {
	cutText ["Toolbox required to assemble a holo scope to your weapon.", "PLAIN DOWN"];
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
					
					if(_x == "R3F_Famas_F1_AIM") then {player addMagazine "RedDot_DZ"; sleep 1;};
					if(_x == "R3F_Famas_F1_AIM_DES") then {player addMagazine "RedDot_DZ"; sleep 1;};
					if(_x == "R3F_Famas_G2_AIM") then {player addMagazine "RedDot_DZ"; sleep 1;};
					if(_x == "R3F_Famas_G2_AIM_DES") then {player addMagazine "RedDot_DZ"; sleep 1;};
					if(_x == "R3F_Famas_surb_AIM_SD") then {player addMagazine "RedDot_DZ"; sleep 1;};
					if(_x == "R3F_Famas_surb_AIM_SD_DES") then {player addMagazine "RedDot_DZ"; sleep 1;};
					if(_x == "R3F_HK417S_AIM_HG") then {player addMagazine "RedDot_DZ"; sleep 1;};
					if(_x == "R3F_HK417S_AIM_HG_DES") then {player addMagazine "RedDot_DZ"; sleep 1;};
				};
			};

			_wwIndex = _wwIndex + 1;
		};
	} forEach _wwdHolo;

	//---------------------------------------------------------

	if(_weaponAss) then {
		cutText ["You have successfully assembled holo scope to your weapon.", "PLAIN DOWN"];
	} else {
		cutText ["You don't have a fitting weapon for assembling a holo scope.", "PLAIN DOWN"];
	};

	sleep 3;

	TradeInprogress = false;
} else {
	cutText ["You are already doing stuff.", "PLAIN DOWN"];
};