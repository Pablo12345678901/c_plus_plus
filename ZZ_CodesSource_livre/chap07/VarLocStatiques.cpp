// VarLocStatiques
#include <iostream>
using namespace std ;
void fct() ;
int main ()
{  for ( int n=1 ; n<=5 ; n++)
      fct() ;
}
void fct()
{  static int i ;
   i++ ;
   cout << "appel numero : " << i << endl ;
}