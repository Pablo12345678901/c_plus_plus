// FonctArgVar2
#include <iostream>
#include <cstdarg>       // pour va_arg et va_list
using namespace std ;
void essai (int, char, ...) ;
int main ()
{  cout << "++ Premier essai\n" ;
   essai (125, 'a', 15, 30, 40, -1) ;
   cout << "++ Deuxieme essai\n" ;
   essai (6264, 'S', -1) ;
}
void essai (int par1, char  par2, ...)
{  va_list adpar ;
   int parv ;
   cout << " - premier parametre : " << par1 << endl ;
   cout << " - second parametre  : " << par2 << endl ;
   va_start (adpar, par2) ;
   while ( (parv = va_arg (adpar, int) ) != -1)
       cout << " - argument variable : " << parv << endl ;
}