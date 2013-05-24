private ["_vehicle", "_vehicle_refuel_id"];

_vehicle = objNull;

diag_log "Running ""kh_actions"".";

while {true} do
{
	if (!isNull player) then 
	{
		private "_currentVehicle";

		_currentVehicle = vehicle player;
		
		_isNearFeedzer = count (nearestObjects [vehicle player, ["Land_A_FuelStation_Feed"], 10]) > 0;

		if (_vehicle != _currentVehicle) then
		{ 
			if (!_isNearFeedzer) then
			{
				if (!isNull _vehicle) then
				{
					_vehicle removeAction _vehicle_refuel_id; 
					_vehicle = objNull;
				};
			}
			else
			{
				if (_currentVehicle != player) then
				{
					_vehicle = _currentVehicle;

					_vehicle_refuel_id = _vehicle addAction ["Refuel", "krazey\refuel\refuel.sqf", [], -1, false, false, "", 
					  "vehicle _this == _target && local _target"];
				};
			};
		};
	};

	sleep 2;
}