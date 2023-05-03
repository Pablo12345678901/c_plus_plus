// ArgDefaut2
#include <iostream>
using namespace std ;
void fct (int=0, int=12) ; // prototype avec deux valeurs par defaut
int main ()
{  int n=10, p=20 ;
   fct (n, p) ;               // appel "normal"
   fct (n) ;                  // appel avec un seul argument
   fct () ;                   // appel sans argument
}
void fct (int a, int b)     // en-tete "habituel"
{  cout << "premier argument : " << a << endl ;
   cout << "second argument  : " << b << endl ;
}   