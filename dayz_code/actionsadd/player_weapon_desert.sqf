/*
 * TiMZBeta_v2 - timWeapons
 * Modified by krazey
 */
disableserialization;

_weaponDES = false;

// Weapon database
_wwDesert = ["R3F_Famas_F1_DES","R3F_Famas_F1_AIM_DES","R3F_Famas_F1_EOT_DES","R3F_Famas_F1_EOT_HG_SD_DES","R3F_Famas_F1_J4_M203_DES","R3F_Famas_F1_J4_M203_SD_DES","R3F_Famas_G2_DES","R3F_Famas_G2_EOT_DES","R3F_Famas_G2_J4_DES","R3F_Famas_G2_J4_HG_DES","R3F_Famas_G2_AIM_HG_DES","R3F_Famas_G2_AIM_M203_DES","R3F_Famas_surb_AIM_HG_DES","R3F_Famas_surb_DES","R3F_Famas_surb_AIM_SD_DES","R3F_Famas_surb_EOT_SD_DES","R3F_Famas_surb_EOT_M203_DES","R3F_Famas_felin_DES","R3F_FRF2_J8_DES","R3F_FRF2_J8_SD_DES","R3F_PGM_Hecate_II_DES","R3F_PGM_Hecate_II_MILDOT_DES","R3F_HK417L_NF_DES","R3F_HK417M_AIM_DES","R3F_HK417S_EOT_HG_DES","R3F_HK417S_HG_SD_DES"];
_wwdDesert = ["R3F_Famas_F1","R3F_Famas_F1_AIM","R3F_Famas_F1_EOT","R3F_Famas_F1_EOT_HG_SD","R3F_Famas_F1_J4_M203","R3F_Famas_F1_J4_M203_SD","R3F_Famas_G2","R3F_Famas_G2_EOT","R3F_Famas_G2_J4","R3F_Famas_G2_J4_HG","R3F_Famas_G2_AIM_HG","R3F_Famas_G2_AIM_M203","R3F_Famas_surb_AIM_HG","R3F_Famas_surb","R3F_Famas_surb_AIM_SD","R3F_Famas_surb_EOT_SD","R3F_Famas_surb_EOT_M203","R3F_Famas_felin","R3F_FRF2_J8","R3F_FRF2_J8_SD","R3F_PGM_Hecate_II","R3F_PGM_Hecate_II_MILDOT","R3F_HK417L_NF","R3F_HK417M_AIM","R3F_HK417S_EOT_HG","R3F_HK417S_HG_SD"];

if(!TradeInprogress) then {
	TradeInprogress = true;

	_onLadder =		(getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
	if (_onLadder) exitWith { cutText [(localize "str_player_21") , "PLAIN DOWN"]; TradeInprogress = false; };
	if (vehicle player != player) exitWith { cutText ["You may not do this while in a vehicle", "PLAIN DOWN"]; TradeInprogress = false; };

	//---------------------------------------------------------

	_wwIndex = 0;
	{
		if(!_weaponDES) then {
			_plyrWeapon = player hasWeapon _x;

			if(_plyrWeapon) then {
				_qtyDesert = {_x == "des_paint_kit"} count magazines player;

				if(_qtyDesert > 0) then {
					player removeMagazine "des_paint_kit";

					for "_i" from 0 to 1 do
					{
						player playActionNow "Medic";
						sleep 1;
						[player,"repair",0,false] call dayz_zombieSpeak;
						sleep 7;
					};

					player removeWeapon _x;
					_newWeapon =  _wwDesert select _wwIndex;
					player addWeapon _newWeapon;
					_weaponDES = true;
				};		
			};

			_wwIndex = _wwIndex + 1;
		};
	} forEach _wwdDesert;

	//---------------------------------------------------------

	if(_weaponDES) then {
		cutText ["You have successfully painted your weapon.", "PLAIN DOWN"];
	} else {
		cutText ["You can't paint this weapon.", "PLAIN DOWN"];
	};

	sleep 3;

	TradeInprogress = false;
} else {
	cutText ["You are already doing stuff.", "PLAIN DOWN"];
};