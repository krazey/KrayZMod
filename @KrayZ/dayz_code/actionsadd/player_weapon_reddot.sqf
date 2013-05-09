/*
 * TiMZBeta_v2 - timWeapons
 * Modified by krazey
 */
disableserialization;

_weaponAss = false;

// Weapon database
_wwRedDot = ["AKS_74_kobra","Sa58V_CCO_EP1","M4A1_Aim","M14_EP1","M16A4","R3F_Famas_G2_AIM_HG","R3F_Famas_G2_AIM_HG_DES","R3F_Famas_F1_AIM","R3F_Famas_F1_AIM_DES","R3F_Famas_surb_AIM_HG","R3F_Famas_surb_AIM_HG_DES","R3F_Famas_F1_AIM","R3F_Famas_F1_AIM_DES","R3F_Famas_G2_AIM_HG","R3F_Famas_G2_AIM_HG_DES","R3F_Famas_surb_AIM_SD","R3F_Famas_surb_AIM_SD_DES","R3F_HK417M_AIM","R3F_HK417M_AIM_DES"];
_wwdRedDot = ["AKS_74","Sa58V_EP1","M4A1","DMR","M16A2","R3F_Famas_G2","R3F_Famas_G2_DES","R3F_Famas_F1","R3F_Famas_F1_DES","R3F_Famas_surb","R3F_Famas_surb_DES","R3F_Famas_F1_EOT","R3F_Famas_F1_EOT_DES","R3F_Famas_G2_EOT","R3F_Famas_G2_EOT_DES","R3F_Famas_surb_EOT_SD","R3F_Famas_surb_EOT_SD_DES","R3F_HK417S_EOT_HG","R3F_HK417S_EOT_HG_DES"];

if (!("ItemToolbox" in items player)) exitWith {
	cutText ["Toolbox required to assemble a red dot to your weapon.", "PLAIN DOWN"];
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
					
					if(_x == "R3F_Famas_F1_EOT") then {player addMagazine "Holo_DZ"; sleep 1;};
					if(_x == "R3F_Famas_F1_EOT_DES") then {player addMagazine "Holo_DZ"; sleep 1;};
					if(_x == "R3F_Famas_G2_EOT") then {player addMagazine "Holo_DZ"; sleep 1;};
					if(_x == "R3F_Famas_G2_EOT_DES") then {player addMagazine "Holo_DZ"; sleep 1;};
					if(_x == "R3F_Famas_surb_EOT_SD") then {player addMagazine "Holo_DZ"; sleep 1;};
					if(_x == "R3F_Famas_surb_EOT_SD_DES") then {player addMagazine "Holo_DZ"; sleep 1;};
					if(_x == "R3F_HK417S_EOT_HG") then {player addMagazine "Holo_DZ"; sleep 1;};
					if(_x == "R3F_HK417S_EOT_HG_DES") then {player addMagazine "Holo_DZ"; sleep 1;};
				};
			};

			_wwIndex = _wwIndex + 1;
		};
	} forEach _wwdRedDot;

	//---------------------------------------------------------

	if(_weaponAss) then {
		cutText ["You have successfully assembled a red dot to your weapon.", "PLAIN DOWN"];
	} else {
		cutText ["You don't have a fitting weapon for assembling a red dot.", "PLAIN DOWN"];
	};

	sleep 3;

	TradeInprogress = false;
} else {
	cutText ["You are already doing stuff.", "PLAIN DOWN"];
};