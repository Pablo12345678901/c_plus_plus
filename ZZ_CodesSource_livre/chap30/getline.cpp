// Getline
#include <iostream>
#include <string>
using namespace std ;
int main()
{ string ch ;        // pour lire une ligne
  int lg ;           // longueur courante d’une ligne
  do
  { getline (cin, ch) ;
    lg = ch.length() ;
    cout << "ligne de " << lg << " caracteres :" << ch << ":\n" ;
  }
  while (lg >1) ;
}