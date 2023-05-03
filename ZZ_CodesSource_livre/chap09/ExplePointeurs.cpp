// ExplePointeurs
#include <iostream>
using namespace std ;
int main ()
{ int n = 10, p = 5 ;
  int *ad1, *ad2 ;  // on pourrait initialiser a nullptr (&2.3) par precaution
  for (int i=0 ; i<3 ; i++)
  { cout << "donnez un nombre entier : " ;
    int rep ; cin >> rep ;
    if (rep>0) { ad1 = &n ; ad2 = &p ; }
         else  { ad1 = &p ; ad2 = &n ; }
    cout << "-- En I  valeurs pointees par ad1 et ad2 = " << *ad1 << " " 
                                                          << *ad2 << endl ;
    *ad1 = *ad1 + rep ; *ad2 = *ad2 - rep ;
    cout << "-- En II valeurs pointees par ad1 et ad2 = " << *ad1 << " "
                                                          << *ad2 <<  endl ;
    cout << "-- EN II n = " << n << " p = " << p << endl ;
  }
}