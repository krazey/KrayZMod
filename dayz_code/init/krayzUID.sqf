_krayzUID1 = getPlayerUID player;
_krayzUID2 = [_krayzUID1, "AX", "137"] call CBA_fnc_replace;
krayzUID = [_krayzUID2] call CBA_fnc_trim;
diag_log format["UID OLD/NEW: %1 / %2", _krayzUID1, krayzUID];