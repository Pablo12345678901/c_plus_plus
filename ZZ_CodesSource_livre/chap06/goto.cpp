#include <iostream>
using namespace std ;
int main ()
{ for ( int i=1 ; i<=10 ; i++ )
  { cout << "debut tour " << i << endl ;
    cout << "bonjour\n" ;
    if ( i==3 ) goto sortie ;
    cout << "fin tour " << i << endl ;
  }
  sortie : cout << "apres la boucle" << endl ;
}