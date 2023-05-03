// ExpleRefRvalue
#include <iostream>
using namespace std;
void f (int & p)  { cout << "-- Appel f(int &} \n" ; p=20 ; } 
void f (int && p) { cout << "-- Appel f(int &&}\n" ; p++ ; }
int main()
{ int n = 12 ;
  cout << "-- En A n =  " << n << endl ;
  f(n) ;
  cout << "-- En B n =  " << n << endl ;
  f(move(n)) ;
  cout << "-- En C n =  " << n << endl ;
  f(10) ;
  cout << "-- En D 10 = " << 10 << endl ;
  const int q = 6 ;
  //  f(q) ;  serait rejete car il n'existe pas f(const int &) ;
}