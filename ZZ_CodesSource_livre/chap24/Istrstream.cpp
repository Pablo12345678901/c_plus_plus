// Istrstream
const int LGMAX = 122 ;          // longueur maxi d’une ligne clavier
#include <iostream>
#include <strstream>
using namespace std ;
int main()
{  int n, erreur ;
   char c ;
   char ligne [LGMAX] ;      // pour lire une ligne au clavier
   do { cout << "donnez un entier et un caractere :\n" ;
        cin.getline (ligne, LGMAX) ;
        istrstream tampon (ligne, cin.gcount () ) ;
        if (tampon >> n >> c) erreur = 0 ;
                         else erreur = 1 ;
      }
   while (erreur) ;
   cout << "merci pour " << n << " et " << c << "\n" ;
}