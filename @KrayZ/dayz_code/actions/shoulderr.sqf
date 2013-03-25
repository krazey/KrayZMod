call gear_ui_init;
player removeWeapon "ItemFlashlightRed";
player addweapon "ItemFlashlightReduse";
pzn_light = "pzn_NoSearchLight_t" createVehicle getpos player; 
pzn_light attachto  [player, [.35,-.5,-1.2],"RightShoulder"];
pzn_light setvectorup [-.3,.3,1];
player action ["lightOn", pzn_light];
pzn_fstate = true;
pzn_keyDown = { 
	private["_dikCode", "_ctrlKey"];
	_dikCode = _this select 1;
	if (_dikCode in (actionkeys "Headlights")) then {
		if (pzn_fstate) then {
			player action ["lightOff", pzn_light];
			pzn_fstate = false;
		} else {
			player action ["lightOn", pzn_light];
			pzn_fstate = true;
		};
	};
	false;
};
waitUntil {!isNull(findDisplay 46)};
(findDisplay 46) displayAddEventHandler ["keyDown", "_this call pzn_keyDown"];