[
	["Body1",[7081.7197,7339.3687,-3.0517578e-005],0],
	["Body2",[7081.373,7335.3784],-167.71442],
	["Body2",[7077.8691,7338.8906,-3.0517578e-005],-99.565521],
	["Body2",[7085.6162,7311.5015],-191.12827],
	["Body2",[7088.4497,7314.1401,-3.0517578e-005],-95.034286]
] call {
	private ["_object"];
	_object = (_x select 0) createVehicleLocal [0,0,0];
	_object setVariable ["", true];
	_object setDir (_x select 2);
	_object setPos (_x select 1);
} count _this;