// Fiabilisation1
#include <iostream>
#include <sstream>
using namespace std ;
int main()
{  int n ;
   bool ok = false ;
   char c ;
   string ligne ;      // pour lire une ligne au clavier
   do { cout << "donnez un entier et un caractere :\n" ;
        getline (cin, ligne) ;
        istringstream tampon (ligne) ;
        if (tampon >> n >> c) ok = true ;
                         else ok = false ;
     }
   while (! ok) ;
   cout << "merci pour " << n << " et " << c << endl ;
}