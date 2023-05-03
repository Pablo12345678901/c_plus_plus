// Masques
#include <iostream>
#include <valarray>
#include <iostream>
#include <iomanip>
#include <valarray>
using namespace std ;
int main()
{ const int N = 6 ;
  int  t[N] =  {    1,    2,     3,    4,     5,    6} ;  // superflu avec C++11
  bool mt[N] = { true, true, false, true, false, true} ;  // superflu avec C++11
  valarray <int> v1 (t, N) ;
   // C++11 - initializer_list non explicit - on peut faire (= possible) :
   //   valarray <int> v1 {    1,    2,     3,    4,     5,    6} ;
  valarray <bool> masque (mt, N) ;
   // C++11 - initializer_list non explicit - on peut faire (= possible) :
   //   valarray <bool> masque { true, true, false, true, false, true} ;
  valarray <int> v2 = v1[masque] ;
  cout << "v2 : " ;
  for (unsigned int i=0 ; i<v2.size() ; i++) cout << setw(4) << v2[i] ;
  cout << endl ;

  v1[masque] = -1 ;
  cout << "v1 : " ;
  for (unsigned int i=0 ; i<v1.size() ; i++) cout << setw(4) << v1[i] ;
  cout << endl ;
  valarray <int> v3(8) ;  /* il faut au moins 4 elements dans v3 */
  for (unsigned int i=0 ; i<v3.size() ; i++) v3[i] = 10*(i+1) ;
  v1[masque] = v3 ;
  cout << "v1 : " ;
  for (unsigned int i=0 ; i<v1.size() ; i++) cout << setw(4) << v1[i] ;
  cout << endl ;
}