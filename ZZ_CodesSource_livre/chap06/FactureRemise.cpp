// FactureRemise
#include <iostream>
using namespace std ;
int main ()
{  const double TAUX_TVA = 20.0 ;    // ou constexpr depuis C++11
   cout << "Donnez le prix hors taxes : " ;
   double ht ; cin >> ht ;
   double tauxr ;
   double ttc = ht * ( 1. + TAUX_TVA/100.) ; // ou auto ttc = ... depuis C++11
   if ( ttc < 1000.)          tauxr = 0 ;
     else if ( ttc < 2000 )   tauxr = 1. ;
       else if ( ttc < 5000 ) tauxr = 3. ;
          else                tauxr = 5. ;
   double remise = ttc * tauxr / 100. ;     // ou auto remise = ... depuis C++11
   double net = ttc - remise ;
   cout << "Prix ttc     = " << ttc    << endl ;
   cout << "Remise       = " << remise << endl ;
   cout << "Net a payer  = " << net    << endl  ;
}