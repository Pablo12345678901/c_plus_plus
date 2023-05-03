// ClasseAutomatique
#include <iostream>
using namespace std ;
int n ;              // variable globale
void fct (int r) ;
int main ()
{ for (int p=1 ; p<=5 ; p++) { n = 2*p ; fct(p) ; }
}
void fct(int r)
{ int q=n, s=r*n ;   // l’initialisation utilise la globale n et l’argument r
  cout << r << " " << q << " " << s << endl ;
}