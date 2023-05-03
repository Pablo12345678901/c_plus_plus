// SautCaracInvalide
#include <iostream>
using namespace std ;
int main()
{  int n = 12 ; char c = 'a' ; char cc ;
   bool ok = false ;
   do { cout << "donnez un entier et un caractere :\n" ;
        if (cin >> n >> c)
          { cout << "merci pour " << n << " et " << c << "\n" ;
            ok = true ;
          }
         else
         { ok = false ;
           cin.clear() ;  ;
           cin >> cc ;  // pour lire au moins le caractere invalide
         }
      }
  while (! ok) ;
}
