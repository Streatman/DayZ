/*
class Meadows 
{
	sound[] = {"\z\addons\dayz_communityassets\sounds\Environment\NoSound",0,1};
};
class MeadowsNight 
{
	sound[] = {"\z\addons\dayz_communityassets\sounds\Environment\NoSound",0,1};
};
*/
class Meadows 
{
	sound[] = {"\z\addons\dayz_communityassets\sounds\Environment\AmbientSounds\Meadow_Day",0.116234,1};
	volume  = "5*(1-night)*((((1-forest)*(1-sea)) max meadow) max 0.05)";
//	volume  = "((1-night)*meadow) max 0.1";
};
class MeadowsNight 
{
	sound[] = {"\z\addons\dayz_communityassets\sounds\Environment\AmbientSounds\Meadow_Night",0.116234,1};
	volume  = "5*(night)*((((1-forest)*(1-sea)) max meadow) max 0.05)";
//	volume  = "((night)*meadow) max 0.1)";
};