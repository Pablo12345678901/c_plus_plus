//TansValeur
#include <iostream>
using namespace std ;
void echange (int a, int b) ;
int main ()
{ int n=10, p=20 ;
  cout << "-- avant appel   : " << n << " " << p << endl ;
  echange (n, p) ;
  cout << "-- apres appel   : " << n << " " << p << endl ;
}
void echange (int a, int b)
{ int c ;
  cout << "-- debut echange : "<< a << " " <<  b << endl ;
  c = a ;
  a = b ;
  b = c ;
  cout << "-- fin echange   : " << a << " " << b << endl ;
}