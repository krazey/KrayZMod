private ["_activatingPlayer"];

// [ _trader_id, _category, _action ];
_activatingPlayer = _this select 1;

diag_log format["DEBUG DEATH OBJ: %1", _this select 0];

//["dayzPlayerDeaths",[_activatingPlayer]] call callRpcProcedure;
dayzPlayerDeaths = [_activatingPlayer];
publicVariableServer  "dayzPlayerDeaths";

waitUntil {!isNil "dayzPlayerDeathsResult"};

diag_log format["DEBUG Death: %1", dayzPlayerDeathsResult];

if((count dayzPlayerDeathsResult) > 0) then {
	"Recent Player Deaths:" hintC dayzPlayerDeathsResult;
} else {
	"Recent Player Deaths:" hintC "No recent Deaths.";
};



// Clear Data maybe consider cacheing results
dayzPlayerDeathsResult = nil;