class CfgExileArsenal
{
	#include "traders\D3SV\ItemListD3SV.hpp"
	class Exile_Uniform_BambiOverall				{ quality = 1; price = 1; sellPrice = 1; };
	
	
	
class CfgTraderCategories
{
	#include "traders\D3SV\ItemListD3SV.hpp"
	class Community
	{
		name = "Community Items";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
			// Add your items here <3
		};
	};
	
	
	
class Exile_Trader_Vehicle
	{
		name = "VEHICLE";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Cars",
			"Trucks",
			"D3SCars",
			"D3SBikes"
		};
	};
	
	/**
	 * Sells choppers and planes
	 */
	class Exile_Trader_Aircraft
	{
		name = "AIRCRAFT";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Choppers",
			"Planes",
			"D3SChoppers"
		};
	};