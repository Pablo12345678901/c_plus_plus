// VarGlobales
#include <iostream>
using namespace std ;
int i ;                   // declaration d’une variable globale
void optimist (void) ;
int main ()
{   for (i=1 ; i<=5 ; i++) optimist() ;
}
void optimist(void)
{   cout << "il fait beau " << i << " fois\n" ;
}
