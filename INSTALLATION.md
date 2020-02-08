# D3s-Cars-Pack-exile-trader-files
Exile Trader Files For @d3s_Cars_pack

This is the Exile trader files for @d3s Cars pack... 
DOWNLOAD>>>>> https://github.com/campbell996/D3s-Cars-Pack-exile-trader-files/tree/master <<<<< DOWNLOAD 
  
I Did Not create This Mod. But I Did Go Thru All Like 400 or 500 Vehicles.
And Removed All The Vehicles That Are Not Work1ing Correctly.
And So Far Around 175 are Working Correctly.
There Are More And I May Update This At Some Point At A Later Date. 

INSTALLATION 

Step 1. Using pbo manager extract your mission.pbo & enter the mission folder that is extracted.   http://www.armaholic.com/page.php?id=16369 

Step 2. Create a folder called >>>>> traders <<<<<. Continue on step 3. 

Step 3. Place the >>>>> D3SV <<<<< folder that comes with this download. In the traders folder from step 2. 

Step 4. Open your >>>>> config.cpp <<<<< file using notepad++. Continue on step 5. 

Step 5. Find >>>>> class CfgExileArsenal <<<<< and add this at the top >>>>> #include "traders\D3SV\ItemListD3SV.hpp" <<<<<. 
Step 5 Example
This is what it is before.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class CfgExileArsenal
{
 class Exile_Uniform_BambiOverall    { quality = 1; price = 1; sellPrice = 1; }; 
 ///////////////////////////////////////////////////////////////////////////////
 // Civillian Clothing
 ///////////////////////////////////////////////////////////////////////////////
 class U_C_Journalist        { quality = 1; price = 20; };
 class U_C_Poloshirt_blue       { quality = 1; price = 20; };
 
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
And this is what it should be after... 
class CfgExileArsenal
{
 #include "traders\D3SV\ItemListD3SV.hpp"
 class Exile_Uniform_BambiOverall    { quality = 1; price = 1; sellPrice = 1; }; 
 ///////////////////////////////////////////////////////////////////////////////
 // Civillian Clothing
 ///////////////////////////////////////////////////////////////////////////////
 class U_C_Journalist        { quality = 1; price = 20; };
 class U_C_Poloshirt_blue       { quality = 1; price = 20; };
 
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
  
  
Step 6. Find >>>>> class CfgTraderCategories <<<<< and add this at the top >>>>> #include "traders\D3SV\TraderCategoriesD3SV.hpp" <<<<<. 
Step 6 Example
This is what it is before.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class CfgTraderCategories
{
 class Community
 {
  name = "Community Items";
  icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
  items[] =
  {
 
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
And this is what it should be after. 
class CfgTraderCategories
{
 #include "traders\D3SV\ItemListD3SV.hpp"
 class Community
 {
  name = "Community Items";
  icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
  items[] =
  {
 
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 

Step 7. Find >>>>> class CfgTraders <<<<< And in that Find >>>>> class Exile_Trader_Vehicle <<<<<
and add both of these >>>>> >"D3SCars",<>"D3SBikes"< <<<<<. 
Step 7 Example 
This is what it is before.
////////////////////////////////////////////////////////////////////
class Exile_Trader_Vehicle
 {
  name = "VEHICLE";
  showWeaponFilter = 0;
  categories[] =
  {
   "Cars",
   "Trucks"
  };
 };
////////////////////////////////////////////////////////////////////
And this is what it should be after...   Dont forget the last catrgory cant have a > , <   but the rest must. 
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
////////////////////////////////////////////////////////////////////// 
Step 8. Find >>>>> class CfgTraders <<<<< And in that Find >>>>> class Exile_Trader_Aircraft <<<<<
and add both of these >>>>> > "D3SChoppers", <<<<< Same as above example. except in the >>>>> class Exile_Trader_Aircraft <<<<<. 

Step 9. Download >>>>> @d3s Cars pack <<<<< from either the A3Launcher or from the Steam Workshop. https://steamcommunity.com/sharedfiles/filedetails/?id=1641826228 
  
Step 10. Copy the >>>>> @d3s Cars pack <<<<< folder to your exile server root folder and remove any spaces in the folder name. 
Step 10 Example     @d3sCarspack 
  
Step 11. Add the Bikey to your server keys folder 
  
Step 12. Add >>>>> @d3sCarspack <<<<< to your server start parameter. 

Enjoy........
