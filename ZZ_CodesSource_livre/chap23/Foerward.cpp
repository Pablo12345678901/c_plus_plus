#include <iostream>
using namespace std;
void f (int && n) { cout << "-- appel f(int && n) " << endl ; }
void f (int & n)  { cout << "-- appel f(int & n) "  << endl ; }
template< class T > void essai ( T && n ) { f(n) ; }
int main()
{ essai (5) ;     
  int p = 5 ;
  essai (p) ;
}