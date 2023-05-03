// ListeCapture
#include <iostream>
using namespace std;
int main()
{ int n = 5 ;
  auto f1 = [n] () { cout << "valeur dans f1 " << n << endl ; } ;
  auto f2 = [&n]() { cout << "valeur dans f2 " << n << endl ; } ;
  f1() ;    // ici, n est capture par valeur
  f2() ;    // ici, n est capture par reference
  n = 20 ;
  f1() ;    // ici, n est capture par valeur
  f2() ;    // ici, n est capture par reference
}