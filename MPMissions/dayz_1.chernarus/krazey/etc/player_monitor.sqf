if (isServer) then {
	waitUntil{dayz_preloadFinished};
};
_id = [] execFSM "krazey\etc\player_monitor.fsm";