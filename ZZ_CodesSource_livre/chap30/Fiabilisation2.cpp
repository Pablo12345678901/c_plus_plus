// Fiabilisation2
#include <iostream>
#include <sstream>
using namespace std ;
int main()
{  int n ; bool ok = false ;
   string ligne ;      // pour lire une ligne au clavier
   do
   { ok = false ; cout << "donnez un nombre entier : " ;
     while (! ok) do
      { getline (cin, ligne) ;
        istringstream tampon (ligne) ;
        if (tampon >> n) ok = true ;
                 else { ok = false ;
                        cout << "information incorrecte - donnez un nombre entier : " ;
                      }
      }
     while (! ok) ;
     cout << "voici son carre : " << n*n << "\n" ;
   }
   while (n) ;
}