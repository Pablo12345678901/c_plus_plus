// getline
#include <iostream>
using namespace std ;
int main()
{ const int LG_LIG = 120 ;      // longueur maxi d’une ligne de texte
  char ch [LG_LIG+1] ;          // pour lire une ligne
  int lg ;                      // longueur courante d’une ligne
  do 
  { cin.getline (ch, LG_LIG) ;
    lg = cin.gcount () ;
    cout << "ligne de " << lg-1 << " caracteres :" << ch << ":\n" ;
  }
  while (lg >1) ;
}