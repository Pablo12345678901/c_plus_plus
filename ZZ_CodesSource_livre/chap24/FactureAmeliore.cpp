// FactureAmeliore
#include <iostream>
#include <iomanip>
using namespace std ;
int main()
{  const double TAUX_TVA = 20 ;
   double ht ;
   cout << "donnez le prix hors taxes : " ;
   cin >> ht ;
   double ttc = ht * ( 1. + TAUX_TVA/100.) ;
   double tauxr ;
   if ( ttc < 1000.)            tauxr = 0 ;
      else if ( ttc < 2000 )    tauxr = 1. ;
         else if ( ttc < 5000 ) tauxr = 3. ;
            else                tauxr = 5. ;
   double remise = ttc * tauxr / 100. ;
   double net = ttc - remise ;
   cout << fixed << setprecision (2) ;
   cout << setw(20) << "prix ttc = "    << setw (12) <<   ttc << endl ;
   cout << setw(20) <<  "remise = "     << setw (12) << remise << endl ;
   cout << setw(20) << "net a payer = " << setw (12) << net << endl ;
}