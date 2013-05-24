call gear_ui_init;
player removeWeapon "ItemFlashlightReduse";
player addweapon "ItemFlashlightRed_KR";
player action ["lightOff", pzn_light];
(findDisplay 46) displayRemoveAllEventHandlers "keyDown";
detach pzn_light;
deletevehicle pzn_light; 
pzn_fstate = false;