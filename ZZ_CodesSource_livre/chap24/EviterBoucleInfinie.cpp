// EviterBoucleInfinie
#include <iostream>
using namespace std ;
int main()
{  int n ;
   char c ;
   do { cout << "donnez un nombre entier : " ;
        if (cin >> n) cout << "voici son carre : " << n*n << "\n" ;
        else { (cin.clear()) ; cin >> c ; }
      }
   while (n) ;
}